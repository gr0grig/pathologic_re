include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Birdmask;

	void init(void) {
		super.init(7);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_birdmask") {
			object scene;
			@GetSceneByName(scene, "theater");
			m_Birdmask = SpawnActor(scene, "pt_b7q03_birdmask", "pers_birdmask", "b7q03_birdmask.xml");
		}
		else if (name == "remove_birdmask") {
			@Trigger(m_Birdmask, "cleanup");
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
		@GetVariable("b7q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b7q03", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b7q03", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;

		if (m_Birdmask)
			@Trigger(m_Birdmask, "cleanup");

		@RemoveActor(self());
	}
}
