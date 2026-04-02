include std.sci
include quest_limited.sci
include game.sci

maintask TQuest : TQuestLimited
{
	var object m_Soldiers;
	void init(void) {
		@CreateObjectVector(m_Soldiers);
		super.init(9);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_soldiers") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Soldiers->add(SpawnActor(scene, "pt_d9q02_enemy1", "pers_soldat_hand", "d9q02_e_soldat.xml"));
			m_Soldiers->add(SpawnActor(scene, "pt_d9q02_enemy2", "pers_soldat_hand", "d9q02_e_soldat.xml"));
			m_Soldiers->add(SpawnActor(scene, "pt_d9q02_enemy3", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml"));
			m_Soldiers->add(SpawnActor(scene, "pt_d9q02_enemy4", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml"));
			m_Soldiers->add(SpawnActor(scene, "pt_d9q02_enemy5", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml"));
			m_Soldiers->add(SpawnActor(scene, "pt_d9q02_enemy6", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml"));
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
		@GetVariable("d9q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
		Cleanup();
	}

	void Fail(void) {
		@SetVariable("d9q02", c_iQuestFailed);
		PreCleanup();
	}

	void Completed(void) {
		@SetVariable("d9q02", c_iQuestCompleted);
		PreCleanup();
	}
	
	void PreCleanup(void) {
	}

	void Cleanup(void) {
		disable OnTrigger;
		
		TriggerActorsInVector(m_Soldiers, "cleanup");
		
		@RemoveActor(self());
	}
}
