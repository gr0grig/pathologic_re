include std.sci
include game.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_Sobor;
	var object m_Prison;
	var object m_GorbunHouse;

	void init(void) {
		LockDoorActor("sobor@door1", false);
		m_Sobor = CreateObjectVector();
		m_Prison = CreateObjectVector();
		m_GorbunHouse = CreateObjectVector();
		
		object scene;
		@GetSceneByName(scene, "sobor");
		@Trigger(scene, "noaglaja");
		
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_sobor") {
			object scene;
			@GetSceneByName(scene, "sobor");
			m_Sobor->add(SpawnActor(scene, "pt_b7q01_birdmask", "pers_birdmask", "b7q01_sobor_mbirdmask.xml"));
			m_Sobor->add(SpawnActor(scene, "pt_b7q01_birdmask1", "pers_birdmask", "b7q01_sobor_birdmask.xml"));
			m_Sobor->add(SpawnActor(scene, "pt_b7q01_birdmask2", "pers_birdmask", "b7q01_sobor_birdmask.xml"));
			m_Sobor->add(SpawnActor(scene, "pt_b7q01_patrol1", "pers_patrool", "b7q01_sobor_patrol.xml"));
			m_Sobor->add(SpawnActor(scene, "pt_b7q01_patrol2", "pers_patrool", "b7q01_sobor_patrol.xml"));
		}
		else if (name == "init_prison") {
			object scene;
			@GetSceneByName(scene, "uprava_prison");
			m_Prison->add(SpawnActor(scene, "pt_b7q01_patrol1", "pers_patrool", "b7q01_prison_patrol1.xml"));
			m_Prison->add(SpawnActor(scene, "pt_b7q01_patrol2", "pers_patrool", "b7q01_prison_patrol2.xml"));
			m_Prison->add(SpawnActor(scene, "pt_b7q01_prisoner1", "pers_worker", "b7q01_prisoner.xml"));
			m_Prison->add(SpawnActor(scene, "pt_b7q01_prisoner2", "pers_unosha", "b7q01_prisoner.xml"));
			m_Prison->add(SpawnActor(scene, "pt_b7q01_prisoner3", "pers_grabitel", "b7q01_prisoner.xml"));
		}
		else if (name == "clear_prison") {
			TriggerActorsInVector(m_Prison, "cleanup");
		}
		else if (name == "init_gorbun_house") {
			object scene;
			@GetSceneByName(scene, "lc_house6_05");
			m_GorbunHouse->add(SpawnActor(scene, "pt_b7q01_wastedmale", "pers_wasted_male", "b7q01_gorbun_mwastedmale.xml"));
			m_GorbunHouse->add(SpawnActor(scene, "pt_b7q01_wastedmale1", "pers_wasted_male", "b7q01_gorbun_wastedmale.xml"));
			m_GorbunHouse->add(SpawnActor(scene, "pt_b7q01_wastedmale2", "pers_wasted_male", "b7q01_gorbun_wastedmale.xml"));
			m_GorbunHouse->add(SpawnScriptedActor(scene, "b7q01_corpse1", "actor_disp.bin"));
			m_GorbunHouse->add(SpawnScriptedActor(scene, "b7q01_corpse2", "actor_disp.bin"));
			m_GorbunHouse->add(SpawnScriptedActor(scene, "b7q01_corpse3", "actor_disp.bin"));
		}
		else if (name == "clear_gorbun_house") {
			TriggerActorsInVector(m_GorbunHouse, "cleanup");
		}
		else if (name == "place_aglaja") {
			object scene;
			@GetSceneByName(scene, "sobor");
			@Trigger(scene, "aglaja");
			TriggerActorsInVector(m_Sobor, "cleanup");
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("b7q01", iState);
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
		@SetVariable("b7q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("b7q01", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		TriggerActorsInVector(m_Sobor, "cleanup");
		TriggerActorsInVector(m_Prison, "cleanup");
		TriggerActorsInVector(m_GorbunHouse, "cleanup");
		
		object scene;
		@GetSceneByName(scene, "sobor");
		@Trigger(scene, "aglaja");
		@RemoveActor(self());
	}
}
