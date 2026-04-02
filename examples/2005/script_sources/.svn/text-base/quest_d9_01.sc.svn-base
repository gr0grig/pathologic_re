include std.sci
include game.sci
include citymanager_base.sci

const string c_strPolyhOutdoorDoor = "polyh@door1";

maintask TQuest
{
	var object m_Dobermans;
	void init(void) {
		@CreateObjectVector(m_Dobermans);
	
		object scene;
		@GetMainOutdoorScene(scene);
		m_Dobermans->add(SpawnStationaryActor(scene, "pt_d9q01_doberman1", "pers_doberman", "d9q01_doberman.xml"));
		m_Dobermans->add(SpawnStationaryActor(scene, "pt_d9q01_doberman2", "pers_doberman", "d9q01_doberman.xml"));
		m_Dobermans->add(SpawnStationaryActor(scene, "pt_d9q01_doberman3", "pers_doberman", "d9q01_doberman.xml"));
		
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "teleport_to_han") {
			object player;
			@FindActor(player, "player");
			if (player) {
				object scene;
				@GetSceneByName(scene, "mnogogrannik_han");
				Vector vPos, vDir;
				bool bFound;
				scene->GetLocator("pt_d9q01_teleport", bFound, vPos, vDir);
				@Teleport(player, scene, vPos, vDir);
			}
		}
		else
		if (name == "teleport_to_mnogogrannik") {
			object player;
			@FindActor(player, "player");
			if (player) {
				object scene;
				@GetSceneByName(scene, "mnogogrannik");
				Vector vPos, vDir;
				bool bFound;
				scene->GetLocator("pt_d9q01_teleport", bFound, vPos, vDir);
				@Teleport(player, scene, vPos, vDir);
			}
		}				
		else		
		if (name == "place_rifles") {
			object scene;
			@GetMainOutdoorScene(scene);
			for (int i = 1; i <= 5; ++i) {
				object actor;
				@AddActor(actor, "d9q01_rifle" + i, scene, [0, 0, 0], [0, 0, 1], "d9q01_rifle.xml");
			}
		}
		else if (name == "unlock_polyh") {
			LockDoorActor(c_strPolyhOutdoorDoor, false);
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("d9q01", iState);
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
		@SetVariable("d9q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d9q01", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		LockDoorActor(c_strPolyhOutdoorDoor, true);
		RemoveStationaryActorsFromVector(m_Dobermans);
		@RemoveActor(self());
	}
}
