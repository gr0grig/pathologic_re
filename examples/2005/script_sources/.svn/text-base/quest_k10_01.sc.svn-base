include std.sci
include kgame.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_Danko, m_Soldier1, m_Soldier2, m_WastedMale, m_WastedMaleO, m_Burah, m_Rubin;
	var object m_Fogs, m_Corpse1, m_Corpse2, m_Prophet;
	
	void init(void) {
		m_Fogs = CreateObjectVector();
		object scene;		
		@GetSceneByName(scene, "cot_eva");
		@Trigger(scene, "nodanko");			
		
		@GetSceneByName(scene, "warehouse_rubin");
		@Trigger(scene, "norubin");			
		
		LockDoorActor("warehouse_rubin@door1", false);
	
		for (;;) {
			@Hold();
		}
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "warehouse_rubin_load") {
			if (!m_Danko) {
				object scene;
				@GetSceneByName(scene, "warehouse_rubin");
				m_Danko = SpawnActor(scene, "pt_rubin", "NPC_Bakalavr", "k10q01_danko.xml");
			}
		}
		else
		if (name == "place_soldiers") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Soldier1 = SpawnStationaryActor(scene, "pt_k10q01_soldier1", "pers_soldat", "k10q01_soldier.xml");
			m_Soldier2 = SpawnStationaryActor(scene, "pt_k10q01_soldier2", "pers_soldat", "k10q01_soldier.xml");
			LockDoorActor("uprava_prison@door1", true);
			LockDoorActor("uprava_admin@door1", false);
		}
		else
		if (name == "remove_soldiers") {
			if (m_Soldier1)
				m_Soldier1->Remove();
			if (m_Soldier2)
				m_Soldier2->Remove();
			LockDoorActor("uprava_prison@door1", false);
		}
		else
		if (name == "init_prison") {
			object scene;
			@GetSceneByName(scene, "uprava_prison");
			m_WastedMale = SpawnActor(scene, "pt_k10q01_wastedmale", "pers_wasted_male", "k10q01_wastedmale.xml");
			
			for (int i = 1; ; ++i) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator("pt_k10q01_fog" + i, bFound, vPos, vDir);
				if (!bFound)
					break;
				object actor;
				@AddActorByType(actor, "fog", scene, vPos, vDir, "fog_stat_indoor.xml");
				m_Fogs->add(actor);
			}
		}
		else 
		if (name == "free_prisoner") {
			if (m_WastedMale)
				@Trigger(m_WastedMale, "cleanup");
				
			object scene;
			@GetMainOutdoorScene(scene);
			m_WastedMaleO = SpawnStationaryActor(scene, "pt_k10q01_wastedmale", "pers_wasted_male", "k10q01_wastedmale_free.xml");
			
			@GetSceneByName(scene, "burah_home");
			@Trigger(scene, "noburah");		
		}
		else 
		if (name == "init_factory") {
			object scene;
			@GetSceneByName(scene, "factory");	
			m_Burah = SpawnActor(scene, "pt_k10q01_burah", "NPC_Burah", "k10q01_burah.xml");
			LockDoorActor("factory@door1", false);
			
			//@AddActor(m_Corpse1, "k10q01_factory_corpse1", scene, [0, 0, 0], [0, 0, 1], "k10q01_factory_corpse1.xml");
			//@AddActor(m_Corpse2, "k10q01_factory_corpse2", scene, [0, 0, 0], [0, 0, 1], "k10q01_factory_corpse2.xml");
		}
		else
		if (name == "place_prophet") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Prophet = SpawnStationaryActor(scene, "pt_k10q01_prophet", "pers_krysa", "k10q01_prophet.xml");
		}
		else
		if (name == "teleport") {
			object player;
			@FindActor(player, "player");
			if (player) {
				object scene;
				@GetSceneByName(scene, "house_vlad");
				Vector vPos, vDir;
				bool bFound;
				scene->GetLocator("pt_k10q01_teleport", bFound, vPos, vDir);
				@Teleport(player, scene, vPos, vDir);
				LockDoorActor("ihouse_vlad@door2", true);
				
				// removed on unload
				SpawnActor(scene, "pt_k10q01_wastedmale_u1", "pers_wasted_male", "k10q01_wastedmale_u.xml");
				SpawnActor(scene, "pt_k10q01_wastedmale_u2", "pers_wasted_male", "k10q01_wastedmale_u.xml");
				
				m_Rubin = SpawnActor(scene, "pt_k10q01_rubin", "NPC_Rubin", "k10q01_rubin.xml");
			}
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
			@GetVariable("k10q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				Cleanup();
			}
		}				
	}
	
	void Fail(void) {
		@SetVariable("k10q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k10q01", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		
		object scene;
		@GetSceneByName(scene, "cot_eva");
		@Trigger(scene, "danko");		
		
		@GetSceneByName(scene, "burah_home");
		@Trigger(scene, "burah");					

		@GetSceneByName(scene, "warehouse_rubin");
		@Trigger(scene, "rubin");					
		
		LockDoorActor("uprava_prison@door1", false);	
		LockDoorActor("ihouse_vlad@door2", false);	
		LockDoorActor("factory@door1", false);
		
		if (m_Danko)
			@Trigger(m_Danko, "cleanup");
			
		if (m_Soldier1)
			m_Soldier1->Remove();
			
		if (m_Soldier2)
			m_Soldier2->Remove();
			
		if (m_WastedMale)
			@Trigger(m_WastedMale, "cleanup");
			
		if (m_WastedMaleO)
			m_WastedMaleO->Remove();
			
		if (m_Burah) 
			@Trigger(m_Burah, "cleanup");
			
		if (m_Prophet)
			m_Prophet->Remove();
			
		if (m_Rubin)
			@Trigger(m_Rubin, "cleanup");
			
		TriggerActorsInVector(m_Fogs, "cleanup");
		
		if (m_Corpse1)
			@Trigger(m_Corpse1, "cleanup");
			
		if (m_Corpse2)
			@Trigger(m_Corpse2, "cleanup");
		
		@RemoveActor(self());
	}
}
