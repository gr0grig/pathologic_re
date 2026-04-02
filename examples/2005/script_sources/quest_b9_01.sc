include std.sci
include game.sci

maintask TQuest
{
	var object m_MDoberman;
	var object m_Danko, m_Doberman1, m_Doberman2;
	
	void init(void) {
		LockDoorActor("boiny@door1", false);
		object scene;
		@GetSceneByName(scene, "cot_eva");
		LockMovingDoor("icot_eva_door", false);
		@Trigger(scene, "nodanko");	
		
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_mdoberman") {
			object scene;
			@GetMainOutdoorScene(scene);

			m_MDoberman = SpawnStationaryActor(scene, "pt_b9q01_mdoberman", "pers_doberman", "b9q01_mdoberman.xml");
		}
		else if (name == "remove_mdoberman") {
			m_MDoberman->Remove();
		}
		else if (name == "init_factory") {
			object scene;
			@GetSceneByName(scene, "factory");
			LockDoorActor("factory@door1", false);
			LockMovingDoor("ifactory_grid_door", true);
			
			m_Danko = SpawnActor(scene, "pt_b9q01_Danko", "NPC_Bakalavr", "b9q01_danko.xml");
			m_Doberman1 = SpawnActor(scene, "pt_b9q01_doberman1", "pers_doberman", "b9q01_doberman1.xml");
			m_Doberman2 = SpawnActor(scene, "pt_b9q01_doberman2", "pers_doberman", "b9q01_doberman2.xml");
		}
		else if (name == "factory_fight") {
			@Trigger(m_Doberman1, "attack");
			@Trigger(m_Doberman2, "attack");
			LockDoorActor("ifactory@door1", true);
			@PlaySound("door_close");
		}
		else if (name == "doberman_dead") {
			bool bDead;
			m_Doberman1->IsDead(bDead);
			if (bDead) {
				m_Doberman2->IsDead(bDead);
				if (bDead) {
					LockDoorActor("ifactory@door1", false);
					LockMovingDoor("ifactory_grid_door", false);
					@PlaySound("door_open");
					@SetVariable("b9q01DankoFree", 1);
				}
			}
		}
		else if (name == "danko_free") {
			LockMovingDoor("ifactory_grid_door", false);
			@PlaySound("door_open");
			LockDoorActor("factory@door1", true);
		}
		else if (name == "reset_factory") {
			RemoveFactoryActors();
			LockDoorActor("factory@door1", true);
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("b9q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				Cleanup();
			}
		}
		else
		if (name == "remove_danko") {
			object scene;
			@GetSceneByName(scene, "cot_eva");
			LockMovingDoor("icot_eva_door", false);
			@Trigger(scene, "nodanko");
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Fail(void) {
		@SetVariable("b9q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("b9q01", c_iQuestCompleted);
		Cleanup();
	}
	
	void RemoveFactoryActors(void) {
		if (m_Danko)
			@RemoveActor(m_Danko);
			
		if (m_Doberman1)
			@RemoveActor(m_Doberman1);
			
		if (m_Doberman2)
			@RemoveActor(m_Doberman2);
	}
	
	void Cleanup(void) {
		if (m_MDoberman)
			m_MDoberman->Remove();
		RemoveFactoryActors();
	
		LockDoorActor("ifactory@door1", false);
		LockMovingDoor("ifactory_grid_door", false);
		LockDoorActor("boiny@door1", true);
		
		object scene;
		@GetSceneByName(scene, "cot_eva");
		LockMovingDoor("icot_eva_door", false);
		@Trigger(scene, "danko");

		@RemoveActor(self());
	}
}
