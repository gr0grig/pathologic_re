include std.sci
include quest_limited.sci
include kgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Gatherer;

	void init(void) {
		@SetVariable("k7q02", c_iQuestEnabled);
		
		RemoveActorByName("gatherer3");
		object scene;
		@GetMainOutdoorScene(scene);
		m_Gatherer = SpawnStationaryActor(scene, "pt_gatherer3", "pers_morlok", "k7q02_gatherer.xml");			
		
		super.init(7);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_gatherer") {
			//RemoveActorByName("gatherer3");
			
			//object scene;
			//@GetMainOutdoorScene(scene);
			//m_Gatherer = SpawnStationaryActor(scene, "pt_gatherer3", "pers_morlok", "k7q02_gatherer.xml");			
		}
		else 
		if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("k7q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("k7q02", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k7q02", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_Gatherer)
			@Trigger(m_Gatherer, "cleanup");
		@RemoveActor(self());
	}
}
