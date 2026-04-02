include std.sci
include game.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_KeyActor1, m_KeyActor2;
	var object m_BirdMask, m_WastedWoman;
	var object m_SoborGuard, m_TheaterGuard;
	
	void init(void) {
		float fTime;
		@GetGameTime(fTime); // to see the preformance
		if (fTime < 3 * 24 + 7)
			@SetTimeEvent(0, 3 * 24 + 7);
		else
			LockDoorActor("theater@door1", true);
		
		LockDoorActor("sobor@door1", true);
		for (;;) {
			@Hold();
		}
	}
	
	void OnGameTime(int id, float fTime) {
		LockDoorActor("theater@door1", true);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "key_actors") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_KeyActor1 = SpawnStationaryActor(scene, "pt_d4q01_key1", "pers_whitemask", "d4q01_key1.xml");
			m_KeyActor2 = SpawnStationaryActor(scene, "pt_d4q01_key2", "pers_wasted_male", "d4q01_key2.xml");
		}
		else if (name == "pers") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_BirdMask = SpawnStationaryActor(scene, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_birdmask.xml");
			m_WastedWoman = SpawnStationaryActor(scene, "pt_d4q01_wastedwoman", "pers_wasted_girl", "d4q01_wastedwoman.xml");
		}
		else if (name == "key1_done") {
			m_KeyActor1->Remove();
		}
		else if (name == "key2_done") {
			m_KeyActor2->Remove();
		}
		else if (name == "birdmask_done") {
			m_BirdMask->Remove();
		}
		else if (name == "wastedwoman_done") {
			m_WastedWoman->Remove();
		}
		else if (name == "init_sobor") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_SoborGuard = SpawnStationaryActor(scene, "pt_d4q01_wastedwoman", "pers_wasted_male", "d4q01_sobor_guard.xml");
			LockDoorActor("sobor@door1", false);
		}
		else if (name == "init_theater") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_TheaterGuard = SpawnStationaryActor(scene, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_theater_guard.xml");
			LockDoorActor("theater@door1", false);
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("d4q01", iState);
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
		@SetVariable("d4q01", c_iQuestFailed);
		PreCleanup();
	}

	void Completed(void) {
		@SetVariable("d4q01", c_iQuestCompleted);
		PreCleanup();
	}
	
	void PreCleanup() {
		if (m_KeyActor1)
			m_KeyActor1->Remove();
		if (m_KeyActor2)
			m_KeyActor2->Remove();
		if (m_BirdMask)
			m_BirdMask->Remove();
		if (m_WastedWoman)
			m_WastedWoman->Remove();
	}

	void Cleanup(void) {
		disable OnTrigger;
			
		if (m_TheaterGuard)
			m_TheaterGuard->Remove();

		if (m_SoborGuard)
			m_SoborGuard->Remove();
			
		LockDoorActor("theater@door1", false);
		LockDoorActor("sobor@door1", true);

		@RemoveActor(self());
	}
}
