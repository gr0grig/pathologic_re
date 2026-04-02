include std.sci
include quest_limited.sci
include kgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Father, m_Daughter, m_Son;

	void init(void) {
		@SetVariable("k7q03", c_iQuestEnabled);
		super.init(7);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_family") {
			object scene;
			@GetSceneByName(scene, "burah_home");
			m_Father = SpawnActor(scene, "pt_k7q03_father", "pers_unosha", "k7q03_father.xml");
			m_Daughter = SpawnActor(scene, "pt_k7q03_daughter", "pers_littlegirl", "k7q03_daughter.xml");
			m_Son = SpawnActor(scene, "pt_k7q03_son", "pers_littleboy", "k7q03_son.xml");
		}
		else 
		if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("k7q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("k7q03", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k7q03", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_Father)
			@Trigger(m_Father, "cleanup");
		if (m_Daughter)
			@Trigger(m_Daughter, "cleanup");
		if (m_Son)
			@Trigger(m_Son, "cleanup");
		@RemoveActor(self());
	}
}
