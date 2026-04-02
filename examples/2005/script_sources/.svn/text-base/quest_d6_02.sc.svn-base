include std.sci
include quest_limited.sci
include game.sci
include diary.sci

maintask TQuest : TQuestLimited
{
	var object m_Trigger;

	void init(void) {
		@SetVariable("d6q02", c_iQuestEnabled);
		
		super.init(6);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "completed") {
			Completed();
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "place_trigger") {
			object scene;
			@GetMainOutdoorScene(scene);
			@AddActor(m_Trigger, "d6q02_trigger_bombers", scene, [0, 0, 0], [0, 0, 1], "d6q02_trigger.xml");
		}
		else if (name == "d6q02_trigger_bombers") {
			@SetVariable("d6q02Trigger", 1);

			@RemoveActor(m_Trigger);
			
			object scene;
			@GetMainOutdoorScene(scene);
			SpawnActor(scene, "pt_d6q02_bomber1", "pers_bomber", "d6q02_bomber.xml");
			SpawnActor(scene, "pt_d6q02_bomber2", "pers_bomber", "d6q02_bomber.xml");
			SpawnActor(scene, "pt_d6q02_bomber3", "pers_bomber", "d6q02_bomber.xml");
			SpawnActor(scene, "pt_d6q02_bomber4", "pers_bomber", "d6q02_bomber.xml");
			SpawnActor(scene, "pt_d6q02_gorbun", "pers_gorbun", "d6q02_gorbun.xml");
		}
		else if (name == "gorbun_death") {
			AddDiaryEntry_d6q02GorbunIsDead();
			@SetVariable("d6q02GorbunDeath", 1);
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("d6q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d6q02", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		int iState;
		@GetVariable("d6q02", iState);
		if (iState != c_iQuestCompleted && iState != c_iQuestFailed) {
			@SetVariable("d6q02", c_iQuestCompleted);
			Cleanup();
		}
	}

	void Cleanup(void) {
		disable OnTrigger;
		
		if (m_Trigger) {
			@RemoveActor(m_Trigger);
		}
		@RemoveActor(self());
	}
}
