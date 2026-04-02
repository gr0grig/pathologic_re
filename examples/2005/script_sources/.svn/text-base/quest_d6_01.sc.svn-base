include std.sci
include game.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_KlaraSaburov, m_KlaraEva, m_KlaraAlbinos;

	void init(void) {
		LockDoorActor("sobor@door1", false);
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "saburov_klara") {
			object scene;
			@GetSceneByName(scene, "cot_katerina");
			m_KlaraSaburov = SpawnActor(scene, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
		}
		else if (name == "saburov_klara_remove") {
			@Trigger(m_KlaraSaburov, "cleanup");
		}
		else if (name == "eva_klara") {
			object scene;
			@GetSceneByName(scene, "cot_eva");
			m_KlaraEva = SpawnActor(scene, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
		}
		else if (name == "eva_klara_remove") {
			@Trigger(m_KlaraEva, "cleanup");
		}
		else if (name == "albinos_klara") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_KlaraAlbinos = SpawnActor(scene, "pt_d6q03_albinos", "NPC_Klara", "d6q01_Klara.xml");
		}
		else if (name == "albinos_klara_remove") {
			@Trigger(m_KlaraAlbinos, "cleanup");
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("d6q01", iState);
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
		@SetVariable("d6q01", c_iQuestFailed);
		PreCleanup();
	}

	void Completed(void) {
		@SetVariable("d6q01", c_iQuestCompleted);
		PreCleanup();
	}
	
	void PreCleanup() {
		if (m_KlaraSaburov)
			@Trigger(m_KlaraSaburov, "cleanup");
		if (m_KlaraEva)
			@Trigger(m_KlaraEva, "cleanup");
		if (m_KlaraAlbinos)
			@Trigger(m_KlaraAlbinos, "cleanup");
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		LockDoorActor("sobor@door1", true);
		@RemoveActor(self());
	}
}
