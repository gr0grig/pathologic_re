include std.sci

task TDispBase
{
	var bool m_bToBeRemoved;

	void init(void) {
		for (;;) {
			@Hold();
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
		else if (name == "restore") {
			m_bToBeRemoved = false;
		}
	}

	void OnUnload(void) {
		if (m_bToBeRemoved && CanBeRemoved())
			@RemoveActor(self());
	}
	
	bool CanBeRemoved(void) {return true;}
}
