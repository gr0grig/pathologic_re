include std.sci
include quest_limited.sci
include dgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Maria, m_Aglaja;
	
	void init(void) {
		super.init(7);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_house_petr") {
			object scene;
			@GetSceneByName(scene, "house_petr");
			m_Maria = SpawnActor(scene, "pt_d7q03_maria", "NPC_Maria", "d7q03_maria.xml");
			m_Aglaja = SpawnActor(scene, "pt_d7q03_aglaja", "NPC_Aglaja", "d7q03_aglaja.xml");
		}
		else
		if (name == "remove_maria") {
			if (m_Maria)
				@RemoveActor(m_Maria); // remove is correct, forced removal
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
		@GetVariable("d7q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("d7q03", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("d7q03", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;

		if (m_Maria)
			@Trigger(m_Maria, "cleanup");
		if (m_Aglaja)
			@Trigger(m_Aglaja, "cleanup");

		@RemoveActor(self());
	}
}
