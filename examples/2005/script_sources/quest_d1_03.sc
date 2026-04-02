include std.sci
include quest_limited.sci
include dgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Butcher;
	
	void init(void) {
		@SetVariable("d1q03", c_iQuestEnabled);
		object scene;
		@GetSceneByName(scene, "ospina_kabak");
		m_Butcher = SpawnActor(scene, "pt_d1q04_butcher", "pers_butcher", "d1q03_butcher.xml");
		LockDoorActor("ospina_kabak@door1", true);
		super.init(1);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "unlock_butcher") {
			LockDoorActor("ospina_kabak@door1", false);
		}
		else if (name == "butcher_fail") {
			AddDiaryEntry_d1q03RetriatFailed();
			Fail();
		}
		else if (name == "butcher_battle") {
			@SetVariable("d1q03", 2);
		}
		else if (name == "butcher_death") {
			int iType;
			@GetVariable("d1q03IsKapella", iType);
			if (iType) {
				AddDiaryEntry_d1q03EvaFailed();
				Fail();
			}
			else {
				AddDiaryEntry_d1q03MladVladCompleted();
				Completed();
			}
		}
		else if (name == "eva_finish") {
			@RemoveActor(m_Butcher);
			Completed();
		}
	}
	
	void Completed(void) {
		@SetVariable("d1q03", c_iQuestCompleted);
		Cleanup();
	}
	
	void Fail(void) {
		@SetVariable("d1q03", c_iQuestFailed);
		Cleanup();
	}
	
	void Limit(void) {
		int iState;
		@GetVariable("d1q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		if (m_Butcher) {
			@Trigger(m_Butcher, "cleanup");
		}
		LockDoorActor("ospina_kabak@door1", false);
		@RemoveActor(self());
	}
}
