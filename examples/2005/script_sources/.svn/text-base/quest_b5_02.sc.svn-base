include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Prorok;

	void init(void) {
		super.init(5);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_prophet") {
			object scene;
			@GetSceneByName(scene, "house_vlad");
			m_Prorok = SpawnActor(scene, "pt_prorok", "pers_krysa", "b5q02_prorok.xml");
		}
		else if (name == "remove_prophet") {
			@Trigger(m_Prorok, "cleanup");
		}
		else if (name == "maze_start") {
			TeleportActor(GetPlayerActor(), "house_vlad", "pt_maze_start");
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
		@GetVariable("b5q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b5q02", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b5q02", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		if (m_Prorok)
			@Trigger(m_Prorok, "cleanup");
		
		@RemoveActor(self());
	}
}
