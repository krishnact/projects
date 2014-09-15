package org.himalay.mpeg.player;

public interface InputTransportStream {

	public void setPid2Types(int pid, int type);
	public void setPid2Object(int pid, Object obj);
}
