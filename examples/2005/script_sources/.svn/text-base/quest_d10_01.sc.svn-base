include std.sci
include game.sci
include citymanager_base.sci

const string c_strPetrOutdoorDoor = "house_petr@door1";

maintask TQuest
{
	var object m_Soldiers;
	var object m_BluePrint;
	var object m_BMPetr;
	var object m_Fire;
	var bool m_bSoldierFight;

	void init(void) {
		object scene;
		@GetSceneByName(scene, "warehouse_rubin");
		@Trigger(scene, "rubin");
		LockDoorActor(c_strPetrOutdoorDoor, false);
	
		m_Soldiers = CreateObjectVector();
		m_bSoldierFight = false;
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_house") {
			RemoveActorByName("NPC_Petr");
			object scene;
			@GetSceneByName(scene, "house_petr");
			for (int i = 1; i <= 4; ++i) {
				m_Soldiers->add(SpawnActor(scene, "pt_d10q01_soldier" + i, "pers_soldat", "d10q01_soldier.xml"));
			}
			m_Soldiers->add(SpawnActor(scene, "pt_d10q01_msoldier", "pers_soldat", "d10q01_msoldier.xml"));
			m_BluePrint = SpawnActorByType(scene, "pt_d10q01_sketch", "scripted_container", "d10q01_blueprint.xml");
			@GetMainOutdoorScene(scene);
			m_BMPetr = SpawnActor(scene, "pt_d10q01_petr", "pers_birdmask", "d10q01_petr.xml");
			m_Fire = SpawnActorByType(scene, "pt_d10q01_fire", "scripted", "d10q01_fire.xml");
		}
		else if (name == "soldier_fight") {
			TriggerActorsInVector(m_Soldiers, "attack");
			m_bSoldierFight = true;
		}
		else if (name == "house_unload") {
			LockDoorActor(c_strPetrOutdoorDoor, true);
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("d10q01", iState);
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
		@SetVariable("d10q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d10q01", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		TriggerActorsInVector(m_Soldiers, "cleanup");
		if (m_BluePrint)
			@Trigger(m_BluePrint, "cleanup");
		if (m_BMPetr)
			@Trigger(m_BMPetr, "cleanup");
		if (m_Fire)
			@Trigger(m_Fire, "cleanup");
		LockDoorActor(c_strPetrOutdoorDoor, false);
		@RemoveActor(self());
	}
}
