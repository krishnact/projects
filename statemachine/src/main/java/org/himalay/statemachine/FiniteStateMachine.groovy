package org.himalay.statemachine

import java.util.HashMap;
import java.util.concurrent.ScheduledFuture
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Assuming that state transition is like this:
 * StateA ------TransitionX -----> StateB <br />
 * <b>The sequence of functions called will be following: </b> <br />
 * <table>
 * <tr>
 * <td>1. exiting_StateA(Object eventData, State current, State next)</td><td>// This function is called only if exiting() invoked while defining the transition<br</td><td></td>
 * </tr>
 * <tr>
 * <td>2. while_StateA_fired_TransitionX(Object eventData, State current, State next)</td><td>// If this return a non zero value then transition will not happen</td><td></td>
 * </tr>
 * <tr>
 * <td>3. exited_StateA(Object eventData, State current, State next) </td><td>// This function is called only if exiting() invoked while defining the transition</td><td></td>
 * </tr>
 * <tr><td><b>At this point the state will change to StateB </b> </td></tr>
 * <tr>
 * <td>4. entered_StateB(Object eventData, State current, State last)</td><td>//This function is called only if entered() invoked while defining the transition</td><td></td>
 * </tr>
 * </table>
 *                    
 * @author krishna
 *
 * @param <STATE>
 * @param <EVENT>
 */
public abstract class FiniteStateMachine<STATE,EVENT> {
	static Logger Logger = LoggerFactory.getLogger(FiniteStateMachine.class);
	protected static int _BF_FIRED_    = 0x0001;
	protected static int _BF_ENTERED_  = 0x0010;
	protected static int _BF_EXITING_  = 0x0100;
	protected static int _BF_EXITED_   = 0x1000;
	public static ScheduledThreadPoolExecutor es = null;
	/*
	 * A map or maps to store events and from states of each
	 * transition.
	 */
	def transitions = [:]
	def boundaryFunctions = [:]
	STATE initialState
	STATE currentState
	def anchorObject;
	long lastTransitionTime
	public ScheduledFuture task;

	public FiniteStateMachine(STATE a_initialState, anchorObject)
	{
		assert a_initialState, "You need to provide an initial state"

		initialState = a_initialState
		currentState = a_initialState
		this.anchorObject	= anchorObject;
		lastTransitionTime = System.currentTimeMillis()
	}

	Grammer<STATE,EVENT> record()
	{
		Grammer.newInstance(this);
	}

	def registerTransition(Grammer<STATE,EVENT> a_grammer)
	{
		assert a_grammer.isValid(), "Invalid transition (${a_grammer})"

		def transition

		def event = a_grammer.event
		def fromState = a_grammer.fromState
		def toState = a_grammer.toState

		if (!transitions[event])
		{
			transitions[event] = [:]
		}

		transition = transitions[event]
		assert !transition[fromState], "Duplicate fromState ${fromState} for transition ${a_grammer}"
		transition[fromState] = toState
	}

	def setBoundaryFunction(Grammer<STATE,EVENT> a_grammer, int boundaryFunction)
	{
		def event = a_grammer.event
		def fromState = a_grammer.fromState
		def toState = a_grammer.toState
		String boundaryFunctionKey = fromState.toString() +"/" + event.toString() +"/" + toState.toString()
		if ( boundaryFunctions[boundaryFunctionKey]  == null)
		{
			boundaryFunctions[boundaryFunctionKey]  = 0;
		}

		boundaryFunctions[boundaryFunctionKey]  =
				(boundaryFunctions[boundaryFunctionKey] ) |boundaryFunction
	}

	def reset()
	{
		synchronized (this) {
			task?.cancel(false);
			currentState = initialState
		}
	}

	def fire_Async(a_event, eventData, int delayMs) {
		//def timer = new java.util.Timer();
		synchronized(this) {
			task?.cancel(false);
//			task = timer.runAfter(delayMs) { fire(a_event, eventData) }
			final Runnable runnable 	= new AsyncTask(this,a_event, eventData);
			task = es.schedule(runnable, delayMs , TimeUnit.MILLISECONDS);
		}
		
	}

	def fire_Async(a_event, eventData)
	{
		fire_Async(a_event, eventData, 1);
	}
	
	public STATE fire(a_event, eventData)
	{
		synchronized (this) {
			task?.cancel(false);
			assert currentState, this.getName() +": Invalid current state '${currentState}': pass into constructor"
			//assert transitions.containsKey(a_event),  this.getName() + ": Invalid event '${a_event}', while in state ${currentState} transition should be one of ${transitions.keySet()}"
	
			def transition = transitions[a_event]
			def nextState = transition[currentState]
	
			if ( nextState == null)
			{
				Logger.debug this.getName() + ": There is no transition from '${currentState}' to any other state due to event " + a_event
				return;
			}
			//println "While in " + currentState + " handling " + a_event
			int boundaryFunct = 0;
			String bfKey = currentState.toString() +"/" +			a_event.toString() +"/" +			nextState.toString()
			Integer boundaryFunctObj	= boundaryFunctions[bfKey]
			if (boundaryFunctObj != null)
			{
				boundaryFunct = boundaryFunctObj;
			}
			// Call exiting function before attempting to evaluate the trigger
			if ( (boundaryFunct & _BF_EXITING_) > 0)
			{
				try{
				this.anchorObject."exiting_${currentState}_via_${a_event}_for_${nextState}"(eventData,currentState,nextState)
				}catch(RuntimeException rex)
				{
					Logger.debug this.getName() +": Exception $rex while executing exiting_${currentState}_via_${a_event}_for_${nextState}"
				}
			}
			int firedCheck	= 0;
			// Call trigger function before attempting to evaluate the trigger, if it returns the state will not be changed
			if ( (boundaryFunct & _BF_FIRED_) > 0)
			{
				firedCheck = this.anchorObject."while_${currentState}_fired_${a_event}"(eventData,currentState,nextState)
			}
			
			if ( 0 == firedCheck )
			{
				// Call Exited function before changing the state
				if ( (boundaryFunct & _BF_EXITED_) > 0)
				{
					this.anchorObject."exited_${currentState}_via_${a_event}_for_${nextState}"(eventData,currentState,nextState)
				}
				def prevState    = currentState
				currentState = nextState
				long nowTime = System.currentTimeMillis()
				Logger.debug this.getName() +": Leaving $prevState via $a_event and enering $currentState "
				updateStat(prevState, currentState, a_event , lastTransitionTime, nowTime);
				lastTransitionTime	= nowTime
	
				// Call Entering function
				if ( (boundaryFunct & _BF_ENTERED_) > 0)
				{
					this.anchorObject."entered_${currentState}_via_${a_event}_from_${prevState}"(eventData,currentState,prevState)
				}
			}
	
			return currentState
	
		}
	}

	def isState(a_state)
	{
		currentState == a_state
	}

	public String getName()
	{
		throw new RuntimeException("Not implemented");
	}
	public void createDotFile(String fileName)
	{
		def states = [:]

		String graphDot = ""
		graphDot += "digraph "+ this.getClass().getSimpleName()+" {\n"
		this.transitions.each{ key,value->

			transitions[key]?.each{map ->
				map.each{ entry->
					graphDot +=  entry.key.toString()  + " -> " + entry.value.toString() + "  [style=bold,label=\"$key\"];\n"
				}
			}
		}

		graphDot += "}\n"
		if ( fileName != null){
			new File(fileName).withPrintWriter { pw->
				pw.write(graphDot)
			}
		}
		System.out.println graphDot
		System.out.println "You can use the above text to see the graph at http://sandbox.kidstrythisathome.com/erdos/"
		System.out.println ""
	}

	public String createStatsDiagram(String fileName, String stateClassName)
	{
		def states = [:]

		String graphDot = ""
		graphDot += "digraph "+ this.getClass().getSimpleName()+" {\n"
		Set<STATE> allStates = new HashSet<STATE>();
		String part1	=""
		String part2	=""
		this.transitions.each{ key,value->
			//allStates.add(key)
			transitions[key]?.each{map ->
				map.each{ entry->
					//String bfKey =  entry.key.toString() +"/" +			key.toString() +"/" +			entry.value.toString()
					allStates.add(entry.key)
					allStates.add(entry.value)
					part2 +=  entry.key.toString()  + " -> " + entry.value.toString() +  "  [style=bold,label=\"$key\"];\n"
				}
			}
		}
		 
		allStates.each{STATE aState->
			//part1 += "${aState.toString()} [label=\"" + getStats(aState)+"\"];"
			String stateName	= aState.name()
			part1 += "${stateName} [label=\"" + "${stateName} <%=statsMap.getStats(${stateClassName}.${stateName})%>"+"\"];\n"
		}
		graphDot += part1 + part2 + "}\n"
		if ( fileName != null){
			new File(fileName).withPrintWriter { pw->
				pw.write(graphDot)
			}
		}
		System.out.println graphDot
		System.out.println "You can use the above text to see the graph at http://sandbox.kidstrythisathome.com/erdos/"
		System.out.println ""
		
		return graphDot;
	}
	
	public void createInterface()
	{
		def states = [:]
		System.out.println ""
		System.out.println "//Creating interface"
		System.out.println ""
		
		String graphDot = "public interface "+ this.getClass().getSimpleName() + "Interface <State> {\n"

		this.transitions.each{ key,value->

			transitions[key]?.each{map ->
				map.each{ entry->
					
					String boundaryFuncKey = entry.key.toString() +"/" + key + "/" +entry.value.toString();
					Integer boundaryFuncsObj	= this.boundaryFunctions[boundaryFuncKey]
					int boundaryFuncs = boundaryFuncsObj== null?0:boundaryFuncsObj
					if ( (boundaryFuncs & _BF_FIRED_ ) > 0 )
					{
						graphDot += "int while_${entry.key.toString()}_fired_${key}(Object eventData, State current, State next);\n" ;
					}
					if ( (boundaryFuncs & _BF_EXITING_ ) > 0 )
					{
						graphDot += "int exiting_${entry.key.toString()}_via_${key}_to_${entry.value.toString()}(Object eventData, State current, State next);\n" ;
					}
					if ( (boundaryFuncs & _BF_EXITED_ ) > 0 )
					{
						graphDot += "int exited_${entry.key.toString()}_via_${key}_to_${entry.value.toString()}(Object eventData, State current, State next);\n" ;
					}
					if ( (boundaryFuncs & _BF_ENTERED_ ) > 0 )
					{
						graphDot += "int entered_${entry.value.toString()}_via_${key.toString()}_from_${entry.key.toString()}(Object eventData, State current, State next);\n" ;
					}
				}
			}

		}

		graphDot += "};\n"

		System.out.println graphDot
	}
	
	public abstract void updateStat(STATE prev, STATE curr, EVENT event, long enteryTime, long exitTime);
	
	public String getStats(STATE state)
	{
		return state.toString()
	}
	
	
	public static String getStateMachineDot(String className, String stateClassName)
	{
		Class aClazz	= Class.forName(className);
		Object anObject = aClazz.newInstance();
		return anObject."createStatsDiagram"(null, stateClassName);
	}
	
	
}

