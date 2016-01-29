package org.himalay.statemachine;

public class AsyncTask implements Runnable{
	FiniteStateMachine<?,?> sm;
	Object a_event;
	Object eventData;

	public AsyncTask(FiniteStateMachine<?,?> sm, Object a_event, Object eventData) {
		super();
		this.sm = sm;
		this.a_event = a_event;
		this.eventData = eventData;
	}

	public void run()
	{
		synchronized (sm) {
			try{
				sm.fire(a_event, eventData);
			}catch(Exception ex)
			{
				ex.printStackTrace();
				FiniteStateMachine.getLogger().info("Exception {}" + ex);
			}
			sm.task	= null;
	
		}
	}
}

