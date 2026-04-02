include std.sci
include quest_limited.sci
include dgame.sci

void MapCleanup() {
}

maintask TQuest : TQuestLimited
{
	var object m_Driver, m_MPatrol, m_Patrol1, m_Patrol2;
	var bool m_bToBeRemoved;
	var bool m_bAttacked;

	void init(void) {
		m_bToBeRemoved = false;
		m_bAttacked = false;
		@SetVariable("d2q02", c_iQuestEnabled);
		super.init(2);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (m_bAttacked) {
			if (name == "mpatrol_unload") {
				m_MPatrol->Remove(); m_MPatrol = null;
			}
			else if (name == "patrol1_unload") {
				m_Patrol1->Remove(); m_Patrol1 = null;
			}
			else if (name == "patrol2_unload") {
				m_Patrol2->Remove(); m_Patrol2 = null;
			}
		}
		if (!m_bToBeRemoved) {
			if (name == "put_patrol") {
				object scene;
				@GetMainOutdoorScene(scene);
				m_Driver = SpawnStationaryActor(scene, "pt_d2q02_driver", "pers_birdmask", "d2q02_driver.xml");
				m_MPatrol = SpawnStationaryActor(scene, "pt_d2q02_mpatrol", "pers_patrool", "d2q02_mpatrol.xml");
				m_Patrol1 = SpawnStationaryActor(scene, "pt_d2q02_patrol1", "pers_patrool", "d2q02_patrol1.xml");
				m_Patrol2 = SpawnStationaryActor(scene, "pt_d2q02_patrol2", "pers_patrool", "d2q02_patrol2.xml");
			}
			else if (name == "player_attack") {
				object actor;
				m_MPatrol->GetActor(actor);
				@Trigger(actor, "kill_player");
				m_Patrol1->GetActor(actor);
				@Trigger(actor, "kill_player");
				m_Patrol2->GetActor(actor);
				@Trigger(actor, "kill_player");
				m_bAttacked = true;
				Completed();
			}
			else if (name == "completed") {
				Completed();
			}
		}
		else {
			if (name == "driver_unload") {
				CheckCleanAll(0);
			}
			else if (name == "mpatrol_unload") {
				CheckCleanAll(1);
			}
			else if (name == "patrol1_unload") {
				CheckCleanAll(2);
			}
			else if (name == "patrol2_unload") {
				CheckCleanAll(3);
			}
		}
	}
	
	void Limit(void) {
		int iState;
		@GetVariable("d2q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		AddDiaryEntry_d2q02failed();
		@SetVariable("d2q02", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		int iState;
		@GetVariable("d2q02", iState);
		if (iState != c_iQuestCompleted && iState != c_iQuestFailed) {
			@SetVariable("d2q02", c_iQuestCompleted);
			AddDiaryEntry_d2q02completed();
			Cleanup();
		}
	}
	
	void Cleanup(void) {
		MapCleanup();
		m_bToBeRemoved = true;
		CheckCleanAll(-1);
	}
	
	void CheckCleanAll(int n) {
		if ((n == 0 || CheckClean(m_Driver)) && (n == 1 || CheckClean(m_MPatrol)) && (n == 2 || CheckClean(m_Patrol1)) && (n == 3 || CheckClean(m_Patrol2))) {
			disable OnTrigger;
			if (m_Driver) {
				m_Driver->Remove();
			}
			if (m_MPatrol) {
				m_MPatrol->Remove();
			}
			if (m_Patrol1) {
				m_Patrol1->Remove();
			}
			if (m_Patrol2) {
				m_Patrol2->Remove();
			}
			@RemoveActor(self());
		}
	}
	
	bool CheckClean(object actor) {
		if (!actor)
			return true;
		object actor1;
		actor->GetActor(actor1);
		return !actor1;
	}
}
