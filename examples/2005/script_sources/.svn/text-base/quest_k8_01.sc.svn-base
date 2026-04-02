include std.sci
include kgame.sci
include citymanager_base.sci

const int c_iDay = 8;

maintask TQuest
{
	void init(void) {
		InitK2SystemNPC();
		LockDoorActor("boiny@door1", true);
		for (;;) {
			@Hold();
		}
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "unlock_boiny") {
			LockDoorActor("boiny@door1", false);
		}
		else
		if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("k8q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				Cleanup();
			}
		}				
	}
	
	void Fail(void) {
		@SetVariable("k8q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k8q01", c_iQuestCompleted);
		Cleanup();
	}
	

	void Cleanup(void) {
		disable OnTrigger;
		LockDoorActor("boiny@door1", true);
		@RemoveActor(self());
	}
}
