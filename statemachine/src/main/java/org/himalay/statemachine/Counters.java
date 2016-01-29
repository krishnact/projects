package org.himalay.statemachine;

import java.util.HashMap;

public class  Counters <STATE> {
	
		public HashMap<STATE, TimeCounter> counters	;
		public Counters()
		{
			counters	= new HashMap<STATE, TimeCounter>();
		}
		TimeCounter get(STATE state)
		{
			TimeCounter retVal	= counters.get(state);
			if ( retVal == null)
			{
				retVal = new TimeCounter();
				counters.put(state,retVal);
			}
			
			return retVal;
		}
	}