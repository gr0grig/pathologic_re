include std.sci
include actor_disp_base.sci

maintask TPrisoner
{
	var bool m_bToBeRemoved;
	
	void init(void) {
		for (;;) {
			while (!IsLoaded()) {
				@Hold();
			}
			
			@PlayAnimation("all", "prisoner");
			@WaitForAnimEnd();
		}
	}
	
	void OnTrigger(string name) {
		if (name == "cleanup") {
			m_bToBeRemoved = true;
			bool bLoaded;
			@IsLoaded(bLoaded);
			if (!bLoaded && CanBeRemoved())
				@RemoveActor(self());
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

