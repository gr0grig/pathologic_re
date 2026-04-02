include std.sci
include quest_limited.sci
include game.sci

maintask TQuest : TQuestLimited
{
	var object m_Girl, m_Gorbun;
	
	void init(void) {
		@SetVariable("d5q02", c_iQuestEnabled);
		
		super.init(5);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_girl") {
			@SetVariable("d5q01NudeInKabak", 1);
			if (!m_Girl) {
				object scene;
				@GetSceneByName(scene, "shouse1_kabak");
				m_Girl = SpawnActor(scene, "pt_d5q02_girl", "pers_nudegirl", "d5q02_girl.xml");
			}
			else {
				@Trigger(m_Girl, "restore");
			}
		}
		else if (name == "remove_girl") {
			@SetVariable("d5q01NudeInKabak", 0);
			if (m_Girl) {
				@Trigger(m_Girl, "cleanup");
			}
		}
		else if (name == "place_gorbun") {
			@SetVariable("d5q01Gorbun", 1);
			if (!m_Gorbun) {
				object scene;
				@GetSceneByName(scene, "lc_House6_05");
				m_Gorbun = SpawnActor(scene, "pt_gorbun", "pers_gorbun", "d5q02_gorbun.xml");
			}
			else {
				@Trigger(m_Gorbun, "restore");
			}
		}
		else if (name == "remove_gorbun") {
			@SetVariable("d5q01Gorbun", 0);
			if (m_Gorbun) {
				@Trigger(m_Gorbun, "cleanup");
			}
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("d5q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d5q02", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		int iState;
		@GetVariable("d5q02", iState);
		if (iState != c_iQuestCompleted && iState != c_iQuestFailed) {
			@SetVariable("d5q02", c_iQuestCompleted);
			Cleanup();
		}
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_Girl)
			@Trigger(m_Girl, "cleanup");
		if (m_Gorbun)
			@Trigger(m_Gorbun, "cleanup");
		@RemoveActor(self());
	}
}
