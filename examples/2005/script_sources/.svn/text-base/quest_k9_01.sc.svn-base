include std.sci
include kgame.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_Burah, m_Danko, m_Girl, m_Boy;
	
	void init(void) {
		@QueuePlayMovie("army.wmv");
		LockDoorActor("mnogogrannik_han@door1", false);
		for (;;) {
			@Hold();
		}
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_termitnik2") {
			object scene;
			@GetSceneByName(scene, "burah_home");
			@Trigger(scene, "noburah");

			@GetSceneByName(scene, "cot_eva");
			@Trigger(scene, "nodanko");
			
			@GetSceneByName(scene, "termitnik2");
			
			// changed specially pt_k9q01_danko and pt_k9q01_burah
			m_Danko = SpawnActor(scene, "pt_k9q01_burah", "NPC_Bakalavr", "k9q01_danko.xml");
			m_Burah = SpawnActor(scene, "pt_k9q01_danko", "NPC_Burah", "k9q01_burah.xml");
		}
		else
		if (name == "init_mnogogrannik") {
			LockDoorActor("mnogogrannik@door1", false);
		
			object scene;
			@GetSceneByName(scene, "mnogogrannik");
			
			m_Girl = SpawnActor(scene, "pt_k9q01_littlegirl", "pers_littleboy", "k9q01_littleboy.xml");
			m_Boy = SpawnActor(scene, "pt_k9q01_littleboy", "pers_littlegirl", "k9q01_littlegirl.xml");
		}		
		else		
		if (name == "fail") {
			InitK2SystemNPC();
			Fail();
		}
		else if (name == "completed") {
			InitK2SystemNPC();
			Completed();
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("k9q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				Cleanup();
			}
		}				
	}
	
	void Fail(void) {
		@SetVariable("k9q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k9q01", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_Danko)
			@Trigger(m_Danko, "cleanup");
		
		if (m_Burah)
			@Trigger(m_Burah, "cleanup");
			
		if (m_Girl)
			@Trigger(m_Girl, "cleanup");

		if (m_Boy)
			@Trigger(m_Boy, "cleanup");
			
		object scene;
		@GetSceneByName(scene, "burah_home");
		@Trigger(scene, "burah");

		@GetSceneByName(scene, "cot_eva");
		@Trigger(scene, "danko");
		
		LockDoorActor("mnogogrannik@door1", true);
		LockDoorActor("mnogogrannik_han@door1", true);
		
		@RemoveActor(self());
	}
}
