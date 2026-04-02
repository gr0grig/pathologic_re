include std.sci
include quest_limited.sci
include kgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Birdmask1, m_Birdmask2, m_Mark, m_MarkTheater, m_Prophet;

	void init(void) {
		RemoveActorByName("NPC_Mark");
		LockDoorActor("theater@door1", true);
 		@SetVariable("k4q02", c_iQuestEnabled);
 		
		object scene;
		@GetMainOutdoorScene(scene);
		m_Birdmask1 = SpawnStationaryActorForce(scene, "pt_k4q02_birdmask1", "pers_birdmask", "k4q02_birdmask.xml");
		m_Birdmask2 = SpawnStationaryActorForce(scene, "pt_k4q02_birdmask2", "pers_birdmask", "k4q02_birdmask.xml");
		
		@GetSceneByName(scene, "cot_maria"); 
		m_Mark = SpawnActor(scene, "pt_k4q02_mark", "NPC_Mark", "k4q02_mark.xml");
		
		super.init(4);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_theater") {
			object scene;
			@GetSceneByName(scene, "theater"); 
			m_Prophet = SpawnActor(scene, "pt_k4q02_prophet", "pers_krysa", "k4q02_prophet.xml");
			LockDoorActor("theater@door1", false);
		}
		else
		if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("k4q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("k4q02", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k4q02", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		LockDoorActor("theater@door1", false);
		if (m_Mark)
			@Trigger(m_Mark, "cleanup");
		if (m_Birdmask1)
			m_Birdmask1->Remove();
		if (m_Birdmask2)
			m_Birdmask2->Remove();
		if (m_Prophet)
			@Trigger(m_Prophet, "cleanup");
		if (!m_MarkTheater) {
			object scene;
			@GetSceneByName(scene, "theater"); 
			m_MarkTheater = SpawnActor(scene, "pt_mark", "NPC_Mark", "NPC_Klara_Mark.xml");
		}
		
		@RemoveActor(self());
	}
}
