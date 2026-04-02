include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Doberman;

	void init(void) {
		TriggerActor("quest_b1_01", "remove_cutscene");
	
		@SetVariable("b1q03", c_iQuestEnabled);
		super.init(1);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_doberman") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Doberman = SpawnStationaryActor(scene, "pt_b1q03_doberman", "pers_doberman", "b1q03_doberman.xml");
		}
		else if (name == "doberman_dead") {
			@SetVariable("b1q03_dead", 1);
		}
		else if (name == "cleanup") {
			Cleanup();
		}
	}
	
	void Limit(void) {
		int iState;
		@GetVariable("b1q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b1q03", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b1q03", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		if (m_Doberman) {
			m_Doberman->Remove(); m_Doberman = null;
		}
		@RemoveActor(self());
	}
}
