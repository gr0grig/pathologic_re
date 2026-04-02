include std.sci
include quest_limited.sci
include kgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Arfist, m_Danko;

	void init(void) {
		@SetVariable("k2q03", c_iQuestEnabled);
		super.init(2);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_arfist") {
			object scene;
			@GetSceneByName(scene, "r4_house_2_02");
			m_Arfist = SpawnActor(scene, "pt_k2q03_arfist", "pers_wasted_male", "k2q03_arfist.xml");
		}
		else
		if (name == "place_danko") {
			LockMovingDoor("icot_eva_door", true);
			object scene;
			@GetSceneByName(scene, "r4_house_2_02");
			m_Danko = SpawnActor(scene, "pt_k2q03_danko", "NPC_Bakalavr", "k2q03_danko.xml");
		}
		else 
		if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("k2q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("k2q03", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k2q03", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		LockMovingDoor("icot_eva_door", false);
		if (m_Arfist)
			@Trigger(m_Arfist, "cleanup");
		if (m_Danko)
			@Trigger(m_Danko, "cleanup");
		@RemoveActor(self());
	}
}
