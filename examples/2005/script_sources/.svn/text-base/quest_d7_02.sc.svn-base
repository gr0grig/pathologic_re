include std.sci
include quest_limited.sci
include game.sci

maintask TQuest : TQuestLimited
{
	var object m_Corpse;

	void init(void) {
		@SetVariable("d7q02", c_iQuestEnabled);
		
		super.init(7);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "completed") {
			Completed();
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "place_corpse") {
			object scene;
			@GetMainOutdoorScene(scene);
			
			@AddActor(m_Corpse, "d7q02_corpse", scene, [0, 0, 0], [0, 0, 1], "d7q02_corpse.xml");
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("d7q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d7q02", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		int iState;
		@GetVariable("d7q02", iState);
		if (iState != c_iQuestCompleted && iState != c_iQuestFailed) {
			@SetVariable("d7q02", c_iQuestCompleted);
			Cleanup();
		}
	}

	void Cleanup(void) {
		disable OnTrigger;
		
		if (m_Corpse) {
			@Trigger(m_Corpse, "cleanup");
		}
		@RemoveActor(self());
	}
}
