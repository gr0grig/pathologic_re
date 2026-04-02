include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Gatherer, m_Bride;
	var bool m_bMove;

	void init(void) {
		object scene;
		@GetMainOutdoorScene(scene);
		m_Gatherer = SpawnStationaryActor(scene, "pt_b2q02_gatherer", "pers_morlok", "b2q02_gatherer.xml");
		m_Bride = SpawnStationaryActor(scene, "pt_b2q02_bride1", "pers_nudegirl", "b2q02_bride.xml");
		super.init(2);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "move_bride") {
			m_bMove = true;
			if (m_Bride)
				m_Bride->Remove();
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
		@GetVariable("b2q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b2q02", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b2q02", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		if (m_Bride)
			m_Bride->Remove();
			
		if (m_Gatherer)
			m_Gatherer->Remove();
		
		object scene;
		@GetMainOutdoorScene(scene);
		if (m_bMove)
			SpawnStationaryActor(scene, "pt_b2q02_bride2", "pers_nudegirl", "b2q02_bride2.xml");
		else
			SpawnStationaryActor(scene, "pt_b2q02_bride1", "pers_nudegirl", "b2q02_bride2.xml");
		
		@RemoveActor(self());
	}
}
