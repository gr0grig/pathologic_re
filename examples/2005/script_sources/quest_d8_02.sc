include std.sci
include quest_limited.sci
include game.sci

maintask TQuest : TQuestLimited
{
	var object m_Doberman1, m_Doberman2, m_Doberman3;
	
	void init(void) {
		float fGameTime;
		@GetGameTime(fGameTime);
		if (GetDay() == 8)
			AddMessage_D8_Danko_Ayyan(fGameTime);
	
		object scene;
		@GetSceneByName(scene, "cot_eva");
		
		m_Doberman1 = SpawnActor(scene, "pt_d8q02_doberman1", "pers_doberman", "d8q02_doberman.xml");
		m_Doberman2 = SpawnActor(scene, "pt_d8q02_doberman2", "pers_doberman", "d8q02_doberman.xml");
		m_Doberman3 = SpawnActor(scene, "pt_d8q02_doberman3", "pers_doberman", "d8q02_doberman.xml");
		
		@Trace("d8q02 dobermans are placed");
	
		super.init(8);
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
		@GetVariable("d8q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d8q02", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d8q02", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		
		if (m_Doberman1)
			@Trigger(m_Doberman1, "cleanup");
		if (m_Doberman2)
			@Trigger(m_Doberman2, "cleanup");
		if (m_Doberman3)
			@Trigger(m_Doberman3, "cleanup");
		
		@RemoveActor(self());
	}
}
