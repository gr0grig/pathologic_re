include std.sci
include quest_limited.sci
include game.sci

maintask TQuest : TQuestLimited
{
	var object m_Morloks; 
	var int m_iMorlokCount;
	void init(void) {
		m_iMorlokCount = 3;
		@CreateObjectVector(m_Morloks);
		LockDoorActor("theater@door1", false);
		super.init(8);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "termitnik_load") {
			m_Morloks->clear();
			object scene;
			@GetSceneByName(scene, "termitnik");
			for (int i = 0; i < m_iMorlokCount; ++i) {
				m_Morloks->add(SpawnActor(scene, "pt_d8q04_morlok" + (i + 1), "pers_morlok", "d8q04_morlok.xml"));
			}
		}
		else
		if (name == "death") {
			m_iMorlokCount--;
		}
		else
		if (name == "attack") {
			TriggerActorsInVector(m_Morloks, "attack");
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
		@GetVariable("d8q04", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
		Cleanup();
	}

	void Fail(void) {
		@SetVariable("d8q04", c_iQuestFailed);
		PreCleanup();
	}

	void Completed(void) {
		@SetVariable("d8q04", c_iQuestCompleted);
		PreCleanup();
	}
	
	void PreCleanup(void) {
	}

	void Cleanup(void) {
		disable OnTrigger;
		@RemoveActor(self());
	}
}
