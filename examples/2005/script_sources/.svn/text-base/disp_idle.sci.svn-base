include std.sci
include idle.sci

task TDispIdle : TIdleBase
{
	var bool m_bToBeRemoved;
	
	void init(void) {
		for (;;) {
			while (!IsLoaded()) {
				@Hold();
			}
			float fTime;
			@rand(fTime, 3);
			@Sleep(fTime + 3);
			super.init();
		}
	}
	
	void Remove(void) {
		m_bToBeRemoved = true;
		bool bLoaded;
		@IsLoaded(bLoaded);
		if (!bLoaded && CanBeRemoved())
			@RemoveActor(self());
	}
	
	void OnTrigger(string name) {
		if (name == "cleanup") {
			Remove();
		}
	}
	
	void OnLoad(void) {
		@StopGroup0();
		@sync();
	}
	
	void OnUnload(void) {
		if (m_bToBeRemoved && CanBeRemoved())
			@RemoveActor(self());
	}
	
	bool CanBeRemoved(void) {return true;}
}

task TDispIdleLookAsync : TIdleBaseLookAsync
{
	var bool m_bToBeRemoved;
	
	void init(float fNoticeDist, float fNoticeDistIncrease) {
		for (;;) {
			while (!IsLoaded()) {
				@Hold();
			}
			float fTime;
			@rand(fTime, 3);
			@Sleep(fTime + 3);
			super.init(fNoticeDist, fNoticeDistIncrease);
			@sync();
		}
	}
	
	void Remove(void) {
		m_bToBeRemoved = true;
		bool bLoaded;
		@IsLoaded(bLoaded);
		if (!bLoaded && CanBeRemoved())
			@RemoveActor(self());
	}
	
	void OnTrigger(string name) {
		if (name == "cleanup") {
			Remove();
		}
	}
	
	void OnLoad(void) {
		@StopGroup0();
		@sync();
	}
	
	void OnUnload(void) {
		super.CancelActivity(); // super class can be in @Sleep command, look at TIdleBase
		if (m_bToBeRemoved && CanBeRemoved())
			@RemoveActor(self());
	}
	
	bool CanBeRemoved(void) {return true;}
}
