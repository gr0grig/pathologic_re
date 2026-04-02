include std.sci
include game.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_Butcher;

	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_butcher") {
			object scene;
			@GetSceneByName(scene, "house5_07");
			m_Butcher = SpawnActor(scene, "pt_b3q01_butcher", "pers_butcher", "b3q01_butcher.xml");
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("b3q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				Cleanup();
			}
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Fail(void) {
		@SetVariable("b3q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("b3q01", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_Butcher)
			@Trigger(m_Butcher, "cleanup");
		@RemoveActor(self());
	}
}
