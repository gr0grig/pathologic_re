include std.sci
include game.sci
include citymanager_base.sci

// CONSTANTS
const float c_fFogInterval = 20;
// CONSTANTS

const int c_iFogTimerID = 0;

maintask TQuest
{
	var bool m_bGroup1;
	var object m_Rubin, m_Agony1, m_Agony2, m_Corpse;
	var object m_FactoryAgony1, m_FactoryAgony2;
	var object m_Patrols;
	var object m_FPatrol1, m_FPatrol2;
	var bool m_bDestroyOnExit;

	void init(void) {
		m_Patrols = CreateObjectVector();
		LockDoorActor("warehouse_gangster@door1", true);
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "rubin_unlock") {
			LockDoorActor("warehouse_rubin@door1", false);
			object container;
			@FindActor(container, "iwarehouse_rubin_Stol");
			bool bAdded;
			container->AddItem(bAdded, "b4q01_sample", 0);
		}
		else if (name == "place_rubin") {
			object scene;
			@GetSceneByName(scene, "warehouse_gangster");
			m_Rubin = SpawnActor(scene, "pt_b4q01_rubin", "NPC_Rubin", "b4q01_Rubin.xml");
			m_Agony1 = SpawnActor(scene, "pt_b4q01_agony1", "pers_unosha", "b4q01_agony1.xml");
			m_Agony2 = SpawnActor(scene, "pt_b4q01_agony2", "pers_worker", "b4q01_agony2.xml");
			@AddScriptedActor(m_Corpse, "b4q01_corpse", "actor_disp.bin", scene, [0, 0, 0], [0, 0, 1]);
			LockDoorActor("warehouse_gangster@door1", false);
			m_bGroup1 = true;
		}
		else if (name == "wg_unload") {
			if (m_bGroup1) {
				m_bDestroyOnExit = true;
				RemoveGroup1();
				LockDoorActor("warehouse_gangster@door1", true);
				object scene;
				@GetMainOutdoorScene(scene);
				m_Patrols->add(SpawnActor(scene, "pt_b4q01_patrol1", "pers_patrool", "b4q01_patrol.xml"));
				m_Patrols->add(SpawnActor(scene, "pt_b4q01_patrol2", "pers_patrool", "b4q01_patrol.xml"));
				m_Patrols->add(SpawnActor(scene, "pt_b4q01_patrol3", "pers_patrool", "b4q01_patrol.xml"));
				m_Patrols->add(SpawnActor(scene, "pt_b4q01_patrol4", "pers_patrool", "b4q01_patrol.xml"));
				AddQuestActor("quest_b4_01_teleport");
				
				@GetSceneByName(scene, "factory");
				m_FPatrol1 = SpawnActor(scene, "pt_b4q01_patrol1_1", "pers_patrool", "b4q01_fpatrol1.xml");
				m_FPatrol2 = SpawnActor(scene, "pt_b4q01_patrol2_1", "pers_patrool", "b4q01_fpatrol2.xml");
				object corpse;
				@AddActor(corpse, "b4q01_factory_corpse", scene, [0, 0, 0], [0, 0, 1], "b4q01_factory_corpse.xml");
				
				m_FactoryAgony1 = SpawnActor(scene, "pt_b4q01_agony1", "pers_unosha", "agony1_man.xml");
				m_FactoryAgony2 = SpawnActor(scene, "pt_b4q01_agony2", "pers_worker", "agony1_man.xml");
				
				@SetTimer(c_iFogTimerID, c_fFogInterval);
				
				bool bFound;
				Vector vPos;
				scene->GetLocator("pt_b4q01_fog", bFound, vPos);
				MakeFog(scene, vPos);
			}
		}
		else if (name == "factory_unload") {
			@KillTimer(c_iFogTimerID);
			if (m_bDestroyOnExit)
				@RemoveActor(self());
		}
		else if (name == "patrol_attack") {
			LockDoorActor("ifactory_grid_door", false);
			@Trigger(m_FPatrol1, "attack");
			@Trigger(m_FPatrol2, "attack");
		}
		else if (name == "patrol_dead") {
			bool bDead;
			m_FPatrol1->IsDead(bDead);
			if (bDead) {
				m_FPatrol2->IsDead(bDead);
				if (bDead) {
					LockDoorActor("ifactory@door1", false);
					@PlaySound("door_open");
				}
			}
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("b4q01", iState);
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
		@SetVariable("b4q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("b4q01", c_iQuestCompleted);
		Cleanup();
	}
	
	void RemoveGroup1(void) {
		if (m_bGroup1) {
			if (m_Rubin)
				@Trigger(m_Rubin, "cleanup");
				
			if (m_Agony1) 
				@Trigger(m_Agony1, "cleanup");
				
			if (m_Agony2)
				@Trigger(m_Agony2, "cleanup");
				
			if (m_Corpse)
				@Trigger(m_Corpse, "cleanup");
			m_bGroup1 = false;
		}
	}

	void Cleanup(void) {
		if (m_bDestroyOnExit)
			return;

		disable OnTrigger;
		@KillTimer(c_iFogTimerID);

		LockDoorActor("warehouse_rubin@door1", false);
		LockDoorActor("ifactory@door1", false);

		object container;
		@FindActor(container, "iwarehouse_rubin_Stol");
		int iRemoved;
		container->RemoveItemByType(iRemoved, "b4q01_sample");
		
		RemoveGroup1();
		TriggerActorsInVector(m_Patrols, "cleanup"); m_Patrols = null;
		
		if (m_FactoryAgony1)
			@Trigger(m_FactoryAgony1, "cleanup");

		if (m_FactoryAgony2)
			@Trigger(m_FactoryAgony2, "cleanup");
		
		LockDoorActor("warehouse_gangster@door1", false);
		
		@RemoveActor(self());
	}
	
	void OnTimer(int id) {
		if (id != c_iFogTimerID)
			return;
		object scene;
		@GetSceneByName(scene, "factory");
		Vector vPos;
		scene->GetRandomPFPoint(vPos, 0, 0);
		MakeFog(scene, vPos);
	}
	
	void MakeFog(object scene, Vector vPos) {
		object fog;
		@AddActorByType(fog, "fog", scene, vPos, [0, 0, 1], "b4q01_fog.xml");
	}
}
