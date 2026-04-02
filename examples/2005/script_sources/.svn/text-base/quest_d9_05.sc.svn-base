include std.sci
include quest_limited.sci
include game.sci

maintask TQuest : TQuestLimited
{
	var object m_Burah;
	
	void init(void) {
		object scene;
		@GetSceneByName(scene, "termitnik");
		
		// q03 is ok, just quest was q03 before
		m_Burah = SpawnActor(scene, "pt_d9q03_burah", "NPC_Burah", "d9q05_burah.xml");
		super.init(9);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_soldiers") {
		}
		else
		if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("d9q05", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d9q05", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d9q05", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		if (m_Burah)
			@Trigger(m_Burah, "cleanup");
		
		@RemoveActor(self());
	}
}
