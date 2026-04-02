include std.sci
include quest_limited.sci
include kgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Burah;

	void init(void) {
		LockDoorActor("burah_home@door1", true);
 		@SetVariable("k4q03", c_iQuestEnabled);
 		
		super.init(4);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_burah") {
			object scene;
			@GetSceneByName(scene, "house5_08");  // house in c_iRegion2
			m_Burah = SpawnActor(scene, "pt_k4q03_burah", "NPC_Burah", "k4q03_burah.xml");
		}
		if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("k4q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("k4q03", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k4q03", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		LockDoorActor("burah_home@door1", false);
		if (m_Burah)
			@Trigger(m_Burah, "cleanup");
		
		@RemoveActor(self());
	}
}
