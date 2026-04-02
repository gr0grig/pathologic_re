include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Agony;

	void init(void) {
		object scene;
		@GetSceneByName(scene, "storojka");
		m_Agony = SpawnActor(scene, "pt_b1q02_agony", "pers_worker", "b1q02_agony.xml");
		super.init(1);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "agony_dead") {
			@SetVariable("b1q02_dead", true);
		}
		else if (name == "agony_cured") {
			@RemoveActor(m_Agony); m_Agony = null;
			AddQuestActor("quest_b1_02_cutscene");
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
		@GetVariable("b1q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b1q02", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b1q02", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		if (m_Agony) {
			@Trigger(m_Agony, "cleanup");
		}
		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
