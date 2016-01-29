package org.himalay.statemachine;

public 	class TimeCounter{
	long runningCount;
	int  numberOfEntries;
	
	public TimeCounter add(long time)
	{
		runningCount += time;
		numberOfEntries++;
		return this;
	}
	
	public double getAverage()
	{
		if (numberOfEntries == 0)
		{
			return 0;
		}else
		{
			return ( (double) runningCount) / numberOfEntries;
		}
	}
}