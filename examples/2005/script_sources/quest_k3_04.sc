include std.sci
include quest_limited.sci
include kgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Danko, m_Burah, m_Lopuh;

	void init(void) {
		LockMovingDoor("icot_eva_door", true);
 		@SetVariable("k3q04", c_iQuestEnabled);
		object scene;
		@GetSceneByName(scene, "dt_house2_08"); 
		m_Danko = SpawnActor(scene, "pt_k3q04_danko", "NPC_Bakalavr", "k3q04_danko.xml");
		super.init(3);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_burah_lopuh") {
			LockDoorActor("burah_home@door1", true);
			object scene;
			@GetSceneByName(scene, "house5_23"); 
			m_Burah = SpawnActor(scene, "pt_k3q04_burah", "NPC_Burah", "k3q04_burah.xml");
			
			@GetMainOutdoorScene(scene);
			m_Lopuh = SpawnStationaryActor(scene, "pt_d3q03_boy", "pers_littleboy", "k3q04_boy.xml");
		}
		else 
		if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("k3q04", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("k3q04", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k3q04", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		LockMovingDoor("icot_eva_door", false);
		LockDoorActor("burah_home@door1", false);
		if (m_Danko)
			@Trigger(m_Danko, "cleanup");
		if (m_Burah)
			@Trigger(m_Burah, "cleanup");
		if (m_Lopuh)
			m_Lopuh->Remove();
		
		@RemoveActor(self());
	}
}
