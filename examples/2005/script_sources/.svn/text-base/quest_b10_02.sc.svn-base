include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Trigger, m_Bomb;

	void init(void) {
		super.init(10);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_trigger") {
			object scene;
			@GetMainOutdoorScene(scene);

			m_Trigger = SpawnActor(scene, "b10q02_trigger", "b10q02_trigger.xml");
		}
		else if (name == "place_bomb") {
			object scene;
			@GetMainOutdoorScene(scene);

			m_Bomb = SpawnActor(scene, "b10q02_bomb", "b10q02_bomb.xml");
		}
		else if (name == "remove_bomb") {
			@Trigger(m_Bomb, "cleanup");
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
		@GetVariable("b10q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b10q02", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b10q02", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;

		if (m_Trigger)
			@Trigger(m_Trigger, "cleanup");
		if (m_Bomb)
			@Trigger(m_Bomb, "cleanup");

		@RemoveActor(self());
	}
}
