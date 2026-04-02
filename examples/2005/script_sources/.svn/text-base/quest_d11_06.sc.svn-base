include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Group, m_Maria;
	
	void init(void) {
		object scene;
		@GetMainOutdoorScene(scene);
		@CreateObjectVector(m_Group);
		m_Group->add(SpawnStationaryActor(scene, "pt_d11q06_wastedmale1", "pers_wasted_male", "d11q06_wastedmale.xml"));
		m_Group->add(SpawnStationaryActor(scene, "pt_d11q06_wastedmale2", "pers_wasted_male", "d11q06_wastedmale.xml"));
		m_Group->add(SpawnStationaryActor(scene, "pt_d11q06_wastedmale3", "pers_wasted_male", "d11q06_wastedmale.xml"));
		m_Group->add(SpawnStationaryActor(scene, "pt_d11q06_wastedmale4", "pers_wasted_male", "d11q06_wastedmale.xml"));
		
		m_Group->add(SpawnStationaryActor(scene, "pt_d11q06_wastedgirl1", "pers_wasted_girl", "d11q06_wastedgirl.xml"));
		m_Group->add(SpawnStationaryActor(scene, "pt_d11q06_wastedgirl2", "pers_wasted_girl", "d11q06_wastedgirl.xml"));
		super.init(11);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_maria") {
			object scene;
			@GetSceneByName(scene, "crypt2");
			m_Maria = SpawnActor(scene, "pt_d11q06_maria", "NPC_Maria", "d11q06_maria.xml");
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
		@GetVariable("d11q06", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
		Cleanup();
	}
	
	void Fail(void) {
		@SetVariable("d11q06", c_iQuestFailed);
		PreCleanup();
	}
	
	void Completed(void) {
		@SetVariable("d11q06", c_iQuestCompleted);
		PreCleanup();
	}
	
	void PreCleanup(void) {
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		PreCleanup();
		
		RemoveStationaryActorsFromVector(m_Group);
		if (m_Maria)
			@Trigger(m_Maria, "cleanup");
		
		@RemoveActor(self());
	}
}
