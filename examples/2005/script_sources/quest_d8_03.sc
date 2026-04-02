include std.sci
include quest_limited.sci
include game.sci

maintask TQuest : TQuestLimited
{
	var object m_Burah;
	var bool m_bBurah;
	void init(void) {
		super.init(8);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "termitnik_load" && (!m_bBurah)) {
			object scene;
			@GetSceneByName(scene, "termitnik");
			m_Burah = SpawnActor(scene, "pt_d8q03_burah", "NPC_Burah", "d8q03_burah.xml");
			m_bBurah = true;
		}
		else
		if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("d8q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d8q03", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d8q03", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		
		if (m_Burah)
			@Trigger(m_Burah, "cleanup");
		
		@RemoveActor(self());
	}
}
