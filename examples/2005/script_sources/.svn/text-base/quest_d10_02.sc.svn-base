include std.sci
include quest_limited.sci
include game.sci

maintask TQuest : TQuestLimited
{
	void init(void) {
		@SetVariable("d10q02", c_iQuestEnabled);
		LockDoorActor("cot_georg@door1", true);
		LockDoorActor("cot_maria@door1", false);
		LockDoorActor("cot_viktor@door1", false);
		LockDoorActor("warehouse_rubin@door1", false);
		super.init(10);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "unlock_georg"){ 
			LockDoorActor("cot_georg@door1", false);
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
		@GetVariable("d10q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d10q02", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d10q02", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		@RemoveActor(self());
	}
}
