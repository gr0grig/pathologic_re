include std.sci
include kgame.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_Birdmask, m_Whitemask, m_Katerina, m_Danko, m_Doberman;
	var object m_Wastedmale1, m_Wastedmale2, m_Agony, m_Dohodyaga, m_Woman, m_Worker;
	var object m_Grabitel1, m_Grabitel2;

	void init(void) {
		LockDoorActor("storojka@door1", false);
		LockDoorActor("burah_home@door1", false);
		LockDoorActor("cot_katerina@door1", true);
		LockDoorActor("cot_alexandr@door1", true);
		object scene;
		@GetMainOutdoorScene(scene);
		m_Birdmask = SpawnStationaryActorForce(scene, "pt_k1q01_birdmask", "pers_birdmask", "k1q01_birdmask.xml");
		m_Whitemask = SpawnStationaryActorForce(scene, "pt_k1q01_whitemask", "pers_whitemask", "k1q01_whitemask.xml");
		m_Grabitel1 = SpawnStationaryActor(scene, "pt_k1q01_grabitel1", "pers_grabitel", "k1q01_grabitel.xml");
		m_Grabitel2 = SpawnStationaryActor(scene, "pt_k1q01_grabitel2", "pers_grabitel", "k1q01_grabitel.xml");
		
		@GetSceneByName(scene, "storojka");
		m_Katerina = SpawnActor(scene, "pt_k1q01_katerina", "NPC_Katerina", "k1q01_katerina.xml");
		
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "remove_whitemask") {
			if (m_Whitemask)
				m_Whitemask->Remove();
		}
		else if (name == "remove_birdmask") {
			if (m_Birdmask)
				m_Birdmask->Remove();
		}
		else if (name == "remove_katerina") {
			if (m_Katerina)
				@Trigger(m_Katerina, "cleanup");
			LockDoorActor("cot_katerina@door1", false);
			LockDoorActor("cot_alexandr@door1", false);
		}
		else if (name == "init_alexandr") {
			LockDoorActor("cot_anna@door1", false);
			object scene;
			@GetMainOutdoorScene(scene);
			m_Doberman = SpawnStationaryActor(scene, "pt_k1q01_doberman", "pers_doberman", "k1q01_doberman.xml");
			m_Dohodyaga = SpawnStationaryActor(scene, "pt_k1q01_dohodyaga", "pers_dohodyaga", "k1q01_dohodyaga.xml");
			
			@GetSceneByName(scene, "cot_anna");
			m_Danko = SpawnActor(scene, "pt_k1q01_danko", "NPC_Bakalavr", "k1q01_danko.xml");
			m_Wastedmale1 = SpawnActor(scene, "pt_k1q01_wastedmale1", "pers_wasted_male", "k1q01_statist.xml");
			m_Wastedmale2 = SpawnActor(scene, "pt_k1q01_wastedmale2", "pers_wasted_male", "k1q01_statist.xml");
			m_Woman = SpawnActor(scene, "pt_k1q01_woman", "pers_woman", "k1q01_statist.xml");
			m_Agony = SpawnActor(scene, "pt_k1q01_agony", "pers_worker", "k1q01_agony.xml");
		}	
		else if (name == "doberman_dead") {
			if (m_Doberman)
				m_Doberman->Remove();
			@SetVariable("k1q01DobermanDead", 1);
			AddDiaryEntry_k1q01DobermanDead();
		}	
		else if (name == "cure_worker") {
			@RemoveActor(m_Agony); m_Agony = null;
			AddQuestActor("quest_k1_01_cutscene");
		}
		else if (name == "cutscene_end") { 
			object scene;
			@GetSceneByName(scene, "cot_anna");
			m_Worker = SpawnActor(scene, "pt_k1q01_worker", "pers_worker", "k1q01_worker.xml");
			@SetVariable("k1q01Healed", 1);
			AddDiaryEntry_k1q01HealedGotoAlexandr();
			PlayerModReputation(GetPlayerActor(), 0.25);
		}	
		else if (name == "cleanup") {
			int iState;
			@GetVariable("k1q01", iState);
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
		@SetVariable("k1q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k1q01", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_Whitemask)
			m_Whitemask->Remove();
		if (m_Birdmask)
			m_Birdmask->Remove();
		if (m_Grabitel1)
			m_Grabitel1->Remove();	
		if (m_Grabitel2)
			m_Grabitel2->Remove();	
		if (m_Doberman)
			m_Doberman->Remove();
		if (m_Dohodyaga)
			m_Dohodyaga->Remove();
		if (m_Katerina)
			@Trigger(m_Katerina, "cleanup");
		if (m_Danko)
			@Trigger(m_Danko, "cleanup");
		if (m_Wastedmale1)
			@Trigger(m_Wastedmale1, "cleanup");
		if (m_Wastedmale2)
			@Trigger(m_Wastedmale2, "cleanup");
		if (m_Woman)
			@Trigger(m_Woman, "cleanup");
		if (m_Worker)
			@Trigger(m_Worker, "cleanup");
			
		LockDoorActor("cot_katerina@door1", false);
			
		@RemoveActor(self());
	}
}
