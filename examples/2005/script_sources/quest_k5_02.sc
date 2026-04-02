include std.sci
include quest_limited.sci
include kgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Patrol1, m_Patrol2, m_Kabatchik;

	void init(void) {
 		@SetVariable("k5q02", c_iQuestEnabled);
 		
		object scene;
		@GetSceneByName(scene, "shouse1_kabak");
		@Trigger(scene, "noandrei");
		m_Patrol1 = SpawnActor(scene, "pt_k5q02_patrol1", "pers_patrool", "k5q02_patrol.xml");
		m_Patrol2 = SpawnActor(scene, "pt_k5q02_patrol2", "pers_patrool", "k5q02_patrol.xml");
 		
		super.init(5);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_kabak") {
			object scene;
			@GetSceneByName(scene, "shouse1_kabak");
			m_Kabatchik = SpawnActor(scene, "pt_k5q02_kabatchik", "pers_dohodyaga", "k5q02_kabatchik.xml");
		}
		else
		if (name == "place_andrei") {
			object scene;
			@GetSceneByName(scene, "shouse1_kabak");
			@Trigger(scene, "andrei");
			if (m_Kabatchik)
				@Trigger(m_Kabatchik, "cleanup");
			if (m_Patrol1)
				@Trigger(m_Patrol1, "cleanup");
			if (m_Patrol2)
				@Trigger(m_Patrol2, "cleanup");
		}
		else
		if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("k5q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("k5q02", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k5q02", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_Kabatchik)
			@Trigger(m_Kabatchik, "cleanup");
		if (m_Patrol1)
			@Trigger(m_Patrol1, "cleanup");
		if (m_Patrol2)
			@Trigger(m_Patrol2, "cleanup");
			
		object scene;
		@GetSceneByName(scene, "shouse1_kabak"); 
		@Trigger(scene, "andrei");
		
		@RemoveActor(self());
	}
}
