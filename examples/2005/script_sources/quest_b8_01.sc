include std.sci
include game.sci

maintask TQuest
{
	var object m_Klara;
	
	void KillTheOne(void) {  // for quest b8q03
		@Trace("kill the one");
		int iV;
		@GetVariable("b8q03MladVladIsVictim", iV);
		if (iV != 0)
			TriggerActor2("volonteers_burah", "kill", "mladvlad");
		else
			TriggerActor2("volonteers_burah", "kill", "bigvlad");
	}	
	

	void init(void) {
		LockDoorActor("boiny@door1", true);
		LockDoorActor("vagon_mishka@door1", false);
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_klara") {
			object scene;
			@GetSceneByName(scene, "vagon_mishka");
			m_Klara = SpawnActor(scene, "pt_b8q01_klara", "NPC_Klara", "b8q01_klara.xml");
		}
		else if (name == "remove_klara") {
			@Trigger(m_Klara, "cleanup");
		}
		else if (name == "unlock_boiny") {
			LockDoorActor("boiny@door1", false);
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("b8q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				PreCleanup();
			}
			Cleanup();
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Fail(void) {
		@SetVariable("b8q01", c_iQuestFailed);
		PreCleanup();
	}

	void Completed(void) {
		@SetVariable("b8q01", c_iQuestCompleted);
		PreCleanup();
	}
	
	void PreCleanup(void) {
		if (m_Klara)
			@Trigger(m_Klara, "cleanup");
	}
	
	void Cleanup(void) {
		KillTheOne();
		@RemoveActor(self());
		LockDoorActor("boiny@door1", true);
	}
}
