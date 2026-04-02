include std.sci
include quest_limited.sci
include dgame.sci

void DiaryAndMapCleanup() {
	RemoveDiaryEntry_d1q03();
}

maintask TQuest : TQuestLimited
{
	var object m_BirdMask;

	void init(void) {
		@SetVariable("d2q03", c_iQuestEnabled);
		super.init(2);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "birdmask") {
			object scene;
			@GetSceneByName(scene, "r4_house_2_02");
			LockDoorActor("r4_house_2_02@door1", false);
			LockDoorActor("r4_house_2_02@door2", false);
			m_BirdMask = SpawnActor(scene, "pt_d2q03_birdmask", "pers_birdmask", "d2q03_birdmask.xml");
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("d2q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d2q03", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		object supply;
		@FindActor(supply, "icot_lara_supply");
		supply->SetProperty("enabled", true);
		
		@SetVariable("d2q03", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		DiaryAndMapCleanup();
		if (m_BirdMask) {
			@Trigger(m_BirdMask, "cleanup");
		}
		@RemoveActor(self());
	}
}
