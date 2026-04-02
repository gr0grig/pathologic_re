include std.sci
include game.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_BirdmaskU, m_BirdmaskD, m_BirdmaskM;

	void init(void) {
		object scene;
		@GetSceneByName(scene, "warehouse_rubin");
		@Trigger(scene, "norubin");
	
		LockDoorActor("sobor@door1", false);
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_birdmasks") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_BirdmaskU = SpawnStationaryActor(scene, "pt_d7q01_ubirdmask", "pers_birdmask", "d7q01_birdmask1.xml");
			m_BirdmaskD = SpawnStationaryActor(scene, "pt_d7q01_dbirdmask", "pers_birdmask", "d7q01_birdmask2.xml");
			m_BirdmaskM = SpawnStationaryActor(scene, "pt_d7q01_mbirdmask", "pers_birdmask", "d7q01_birdmask3.xml");
		}
		else if (name == "remove_birdmasks") {
			RemoveBirdmasks();
		}
		else if (name == "kill_player") {
			TriggerActor("player", "die");
		}
		else if (name == "sobor_teleport") {
			TeleportActor(GetPlayerActor(), "sobor", "pt_d7q01_birth");
			@sync();
			
			AddQuestActor("quest_d7_01_cutscene");
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("d7q01", iState);
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
		@SetVariable("d7q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d7q01", c_iQuestCompleted);
		Cleanup();
	}
	
	void RemoveBirdmasks(void) {
		if (m_BirdmaskU)
			m_BirdmaskU->Remove();
		if (m_BirdmaskD)
			m_BirdmaskD->Remove();
		if (m_BirdmaskM)
			m_BirdmaskM->Remove();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		RemoveBirdmasks();
		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
