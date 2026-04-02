include std.sci
include game.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_Woman;
	
	void init(void) {
		LockDoorActor("house_petr@door1", false);
		LockDoorActor("shouse1_kabak@door1", false);
		
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "woman") {
			LockDoorActor("d2q01_house1@door1", false);
			
			// this code is moved to citymanager
			//object house;
			//@FindActor(house, "dt_house_1_07");
			//house->EnableSubset(c_iMarksSubsetID, true);
			
			object scene;
			@GetSceneByName(scene, "d2q01_house1");
			m_Woman = SpawnActor(scene, "pt_woman", "pers_woman", "d2q01_woman.xml");
		}
		else if (name == "cursed_women") {
			object scene;
			@GetSceneByName(scene, "d2q01_house1");
			SpawnActor(scene, "pt_enemy01", "pers_woman", "d2q01_zombie_woman.xml");
			SpawnActor(scene, "pt_enemy02", "pers_woman", "d2q01_zombie_woman.xml");
			@Trigger(m_Woman, "cleanup");
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("d2q01", iState);
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
		@SetVariable("d2q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d2q01", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_Woman)
			@Trigger(m_Woman, "cleanup");
			
		LockDoorActor("d2q01_house1@door1", true);
			
		@RemoveActor(self());
	}
}
