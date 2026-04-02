include std.sci
include quest_limited.sci
include game.sci

maintask TQuest : TQuestLimited
{
	var object m_Burah;

	void init(void) {
		@SetVariable("d11q03", c_iQuestEnabled);
		super.init(11);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("d11q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d11q03", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d11q03", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		if (m_Burah)
			@Trigger(m_Burah, "cleanup");
		@RemoveActor(self());
	}
}
