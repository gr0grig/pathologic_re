include std.sci
include quest_limited.sci
include citymanager_base.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var int iRatCount;
	var object m_PatrolHouse, m_Patrol1, m_Patrol2, m_Spi4ka, m_Woman;
	void init(void) {
		iRatCount = 4;
		
		object scene;
		@GetSceneByName(scene, "d2q01_house1");
		m_Spi4ka = SpawnActor(scene, "pt_b1q05_spi4ka", "NPC_Spi4ka", "b1q05_spi4ka.xml");
	
		@GetSceneByName(scene, "house_spi4ka");
		@Trigger(scene, "nospi4ka");
		
		@GetMainOutdoorScene(scene);
		m_PatrolHouse = SpawnStationaryActor(scene, "pt_b1q05_patrol_house", "pers_patrool", "b1q05_patrol_house.xml");
		m_Patrol1 = SpawnStationaryActor(scene, "pt_b1q05_patrol1", "pers_patrool", "b1q05_patrol_key.xml");
		m_Patrol2 = SpawnStationaryActor(scene, "pt_b1q05_patrol2", "pers_patrool", "b1q05_patrol.xml");
		m_Woman = SpawnStationaryActor(scene, "pt_b1q05_woman", "pers_woman", "b1q05_woman.xml");
		super.init(1);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "attack") {
			if (m_Patrol1) {
				object actor;
				m_Patrol1->GetActor(actor);
				if (actor)
					@Trigger(actor, "attack");
			}
			if (m_Patrol2) {
				object actor;
				m_Patrol2->GetActor(actor);
				if (actor)
					@Trigger(actor, "attack");
			}
		}
		else
		if (name == "house_load") {
			object scene;
			@GetSceneByName(scene, "d2q01_house1");
			
			for (int i = 0; i < iRatCount; ++i) {
				SpawnActor(scene, "pt_b1q05_rat" + (i + 1), "pers_rat", "b1q05_rat.xml");
			}
		}
		else
		if (name == "rat_dead") {
			iRatCount--;
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}
	
	void Limit(void) {
		int iState;
		@GetVariable("b1q05", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
		Cleanup();
		@RemoveActor(self()); // such a system to remove house marks at midnight
	}
	
	void Fail(void) {
		@SetVariable("b1q05", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b1q05", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		object scene;
		@GetSceneByName(scene, "house_spi4ka");
		@Trigger(scene, "spi4ka");
		
		if (m_PatrolHouse)
			m_PatrolHouse->Remove();
			
		if (m_Patrol1)
			m_Patrol1->Remove();
			
		if (m_Patrol2)
			m_Patrol2->Remove();
			
		if (m_Spi4ka)
			@Trigger(m_Spi4ka, "cleanup");
			
		if (m_Woman)
			m_Woman->Remove();
	}
}
