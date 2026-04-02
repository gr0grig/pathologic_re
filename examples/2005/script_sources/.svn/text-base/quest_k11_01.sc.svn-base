include std.sci
include kgame.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_KSoldiers, m_KOfficer, m_Soldiers, m_Officer, m_OfficerAgony;
	var object m_Danko, m_Burah, m_Andrei;
		
	void init(void) {
		m_KSoldiers = CreateObjectVector(); // kabak soldiers
		m_Soldiers = CreateObjectVector(); // outdoor soldiers
		
		object scene;		
		@GetSceneByName(scene, "cot_eva");
		@Trigger(scene, "nodanko");	
		
		LockMovingDoor("icot_eva_door", false);		

		@GetSceneByName(scene, "shouse1_kabak");
		@Trigger(scene, "noandrei");			
		
		@GetSceneByName(scene, "warehouse_rubin");
		@Trigger(scene, "rubin");			
		
		LockDoorActor("sobor@door1", false);
	
		for (;;) {
			@Hold();
		}
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_kabak") {
			object scene;		
			@GetSceneByName(scene, "shouse1_kabak");
		
			for (int i = 1; ; ++i) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator("pt_k11q01_soldier" + i, bFound, vPos, vDir);
				if (!bFound)
					break;
				m_KSoldiers->add(SpawnActor(scene, "pt_k11q01_soldier" + i, "pers_soldat", "k11q01_kabak_soldier.xml"));	
			}
			
			m_KOfficer = SpawnActor(scene, "pt_k11q01_officer", "pers_soldat", "k11q01_kabak_officer.xml");
		}
		else
		if (name == "init_gun") {
			object scene;		
			@GetMainOutdoorScene(scene);
		
			for (int i = 1; ; ++i) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator("pt_k11q01_soldier" + i, bFound, vPos, vDir);
				if (!bFound)
					break;
				m_Soldiers->add(SpawnStationaryActor(scene, "pt_k11q01_soldier" + i, "pers_soldat", "k11q01_soldier.xml"));	
			}
			
			m_OfficerAgony = SpawnStationaryActor(scene, "pt_k11q01_agony_officer", "pers_soldat", "k11q01_officer_agony.xml");
		}
		else
		if (name == "cure_officer") {
			object pactor;
			m_OfficerAgony->GetActor(pactor);
			if (pactor) @RemoveActor(pactor);		
			m_OfficerAgony->Remove();
			@SetVariable("k11q01Cured", 1);
			AddQuestActor("quest_k11_01_cutscene");
		}
		else
		if (name == "cutscene_end") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Officer = SpawnStationaryActorForce(scene, "pt_k11q01_officer", "pers_soldat", "k11q01_officer.xml");
		}
		else
		if (name == "init_house_petr") {
			object scene;
			@GetSceneByName(scene, "house_petr");
			m_Andrei = SpawnActor(scene, "pt_k11q01_andrei", "NPC_Andrei", "k11q01_andrei.xml");
			m_Danko = SpawnActor(scene, "pt_k11q01_danko", "NPC_Bakalavr", "k11q01_danko.xml");
		}
		else
		if (name == "place_burah") {
			object scene;
			@GetSceneByName(scene, "burah_home");
			@Trigger(scene, "noburah");
			
			@GetSceneByName(scene, "boiny");
			m_Burah = SpawnActor(scene, "pt_k11q01_burah", "NPC_Burah", "k11q01_burah.xml");
		}
		else
		if (name == "fail") {
			InitK2SystemNPC();
			Fail();
		}
		else if (name == "completed") {
			InitK2SystemNPC();
			Completed();
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("k11q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				Cleanup();
			}
		}				
	}
	
	void Fail(void) {
		@SetVariable("k11q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k11q01", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		
		object scene;		
		@GetSceneByName(scene, "cot_eva");
		@Trigger(scene, "danko");			

		@GetSceneByName(scene, "shouse1_kabak");
		@Trigger(scene, "andrei");			
		
		@GetSceneByName(scene, "burah_home");
		@Trigger(scene, "burah");

		TriggerActorsInVector(m_KSoldiers, "cleanup");
		if (m_KOfficer)
			@Trigger(m_KOfficer, "cleanup");
		
		RemoveStationaryActorsFromVector(m_Soldiers);
		if (m_Officer)
			@Trigger(m_Officer, "cleanup");
			
		if (m_Danko)
			@Trigger(m_Danko, "cleanup");

		if (m_Burah)
			@Trigger(m_Burah, "cleanup");
			
		if (m_Andrei)
			@Trigger(m_Andrei, "cleanup");
		
		@RemoveActor(self());
	}
}
