package org.himalay.statemachine

import groovy.transform.CompileStatic;


class Grammer<STATE,EVENT>
{
    FiniteStateMachine fsm

    EVENT event
    STATE fromState
    STATE toState

    Grammer(FiniteStateMachine a_fsm)
    {
        fsm = a_fsm
    }

    Grammer<STATE,EVENT> on(EVENT a_event)
    {
        event = a_event
        this
    }

    Grammer<STATE,EVENT> on(EVENT a_event, Object a_transitioner)
    {
        on(a_event)
        
        a_transitioner.delegate = this
        a_transitioner.call()

        this
    }
    
    Grammer<STATE,EVENT> from(STATE a_fromState)
    {
        fromState = a_fromState
        this
    }

    Grammer<STATE,EVENT> to(STATE a_toState)
    {
        assert a_toState, "Invalid toState: ${a_toState}"

        toState = a_toState
        fsm.registerTransition(this)
        this
    }
	
	Grammer<STATE,EVENT> entered()
	{
		fsm.setBoundaryFunction(this,FiniteStateMachine._BF_ENTERED_)
        this
	}
    
	Grammer<STATE,EVENT> exiting()
	{
		fsm.setBoundaryFunction(this,FiniteStateMachine._BF_EXITING_)
        this
	}
	
	Grammer<STATE,EVENT> fired()
	{
		fsm.setBoundaryFunction(this,FiniteStateMachine._BF_FIRED_)
		this
	}
	
	Grammer<STATE,EVENT> exited()
	{
		fsm.setBoundaryFunction(this,FiniteStateMachine._BF_EXITED_)
        this
	}

	def isValid()
    {
        event && fromState && toState
    }
    
    public String toString()
    {
        "${event}:${fromState}=>${toState}"
    }
}


