include std.sci
include game.sci
include citymanager_base.sci

const string c_strIndoorDoor = "iwarehouse_gangster@door1";
const string c_strOutdoorDoor = "warehouse_gangster@door1";

maintask TQuest
{
	var bool m_bBritvaAttack;
	var object m_Grabitels, m_GrabitelEntrance, m_Meshok, m_Britva;

	void init(void) {
		m_Grabitels = CreateObjectVector();
		LockDoorActor(c_strOutdoorDoor, true);
		LockDoorActor("cot_alexandr@door1", false);
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_volnica") {
			object scene;
			@GetMainOutdoorScene(scene);
			for (int i = 1; ; ++i) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator("pt_k4q01_grabitel" + i, bFound, vPos, vDir);
				if (!bFound)
					break;
				object actor;
				scene->AddStationaryActor(actor, vPos, vDir, "pers_grabitel", "k4q01_grabitel.xml");
				m_Grabitels->add(actor);
			}
			
			m_GrabitelEntrance = SpawnStationaryActor(scene, "pt_k4q01_grabitel", "pers_grabitel", "k4q01_grabitel_e.xml");
		}
		else if (name == "grabitel_entrance_dead") {
			LockDoorActor(c_strOutdoorDoor, false);
			if (m_GrabitelEntrance)
				m_GrabitelEntrance->Remove();
				
			object scene;
			@GetSceneByName(scene, "warehouse_gangster");
			
			m_Britva = SpawnActor(scene, "pt_britva", "pers_grabitel", "k4q01_britva.xml");
			
			@PlaySound("door_open");
		}
		else if (name == "cutscene") {
			if (m_Britva)
				@RemoveActor(m_Britva);
			
			object scene;
			@GetSceneByName(scene, "warehouse_gangster");
			
			@PlaySound("door_close");
			LockDoorActor(c_strIndoorDoor, true);
		
			m_Meshok = SpawnActorByType(scene, "pt_k4q01_meshok", "scripted_container", "k4q01_meshok.xml");
			AddQuestActor("quest_k4_01_cutscene");
		}
		else if (name == "cutscene_end") {
			object scene;
			@GetSceneByName(scene, "warehouse_gangster");
		
			SpawnActor(scene, "pt_britva_attack", "pers_grabitel", "k4q01_britva_attack.xml");
			
			for (int i = 1; ; ++i) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator("pt_k4q01_rat" + i, bFound, vPos, vDir);
				if (!bFound)
					break;
				object actor;
				@AddActor(actor, "pers_rat", scene, vPos, vDir, "rat_indoor.xml");
			}
			
			m_bBritvaAttack = true;
		}
		else
		if (name == "meshok_taken") {
			LockDoorActor(c_strIndoorDoor, false);
			AddDiaryEntry_k4q01MeshokGotoSaburov();
			@PlaySound("door_open");
		}
		else if (name == "warehouse_gangster_unload") {
			if (m_bBritvaAttack) {
				LockDoorActor(c_strOutdoorDoor, true);
				if (m_Britva)
					@Trigger(m_Britva, "cleanup");
			}
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("k4q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				Cleanup();
			}
		}		
	}

	void Fail(void) {
		@SetVariable("k4q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k4q01", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_Grabitels) {
			RemoveStationaryActorsFromVector(m_Grabitels);
			m_Grabitels = null;
		}
		if (m_GrabitelEntrance)
			m_GrabitelEntrance->Remove();
		if (m_Meshok)
			@Trigger(m_Meshok, "cleanup");
			
		if (m_Britva)
			@Trigger(m_Britva, "cleanup");
			
		LockDoorActor(c_strIndoorDoor, false);
			
		@RemoveActor(self());
	}
}
