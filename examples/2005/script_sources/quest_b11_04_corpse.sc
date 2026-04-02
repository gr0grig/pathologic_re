include std.sci

maintask TCorpse {
	
	var bool m_bToBeRemoved;

	void init(void) {
		@SetProperty("disease", 1);
		object corpse;
		@FindGeometry("corpse", corpse);
		corpse->Enable(true);
		while (true) {
			@Hold();
		}			
	}
	
	void OnPropertyChange(object actor, string strProp) {
		/*if (strProp == "disease") {
			@SetProperty("disease", 1);
		}*/
	}
	
	void OnTrigger(string name) {
		if (name == "cleanup") {
			m_bToBeRemoved = true;
			bool bLoaded;
			@IsLoaded(bLoaded);
			if (!bLoaded )
				@RemoveActor(self());
		}
		else if (name == "restore") {
			m_bToBeRemoved = false;
		}
	}
	
	void OnUnload(void) {
		if (m_bToBeRemoved)
			@RemoveActor(self());
	}
}