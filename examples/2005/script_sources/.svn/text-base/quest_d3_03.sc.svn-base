include std.sci
include quest_limited.sci
include game.sci

maintask TQuest : TQuestLimited
{
	var object m_Boy;

	void init(void) {
		@SetVariable("d3q03", c_iQuestEnabled);
		super.init(3);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "boy") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Boy = SpawnStationaryActor(scene, "pt_d3q03_boy", "pers_littleboy", "d3q03_boy.xml");
		}
		else if (name == "boy_attacked") {
			int iState;
			@GetVariable("d3q03", iState);
			if (IsNormalQuestState(iState)) {
				Fail();
			}
		}
		else if (name == "boy_free") {
			m_Boy->Remove();
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
		@GetVariable("d3q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("d3q03", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		int iState;
		@GetVariable("d3q03", iState);
		if (iState != c_iQuestCompleted && iState != c_iQuestFailed) {
			@SetVariable("d3q03", c_iQuestCompleted);
			Cleanup();
		}
	}
	
	void Cleanup(void) {
		if (m_Boy)
			m_Boy->Remove();
		@RemoveActor(self());
	}
}
