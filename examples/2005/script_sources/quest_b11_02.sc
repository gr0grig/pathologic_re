include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Dobermans;
	void init(void) {
		m_Dobermans = CreateObjectVector();
		
		object scene;
		@GetMainOutdoorScene(scene);
		m_Dobermans->add(SpawnStationaryActor(scene, "pt_b11q02_doberman1", "pers_doberman", "b11q02_doberman.xml"));
		m_Dobermans->add(SpawnStationaryActor(scene, "pt_b11q02_doberman2", "pers_doberman", "b11q02_doberman.xml"));
		m_Dobermans->add(SpawnStationaryActor(scene, "pt_b11q02_doberman3", "pers_doberman", "b11q02_doberman.xml"));
		super.init(11);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "teleport") {
			TeleportActor(GetPlayerActor(), "mnogogrannik_han", "pt_b11q02_teleport");
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
		@GetVariable("b11q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
		Cleanup();
	}
	
	void Fail(void) {
		@SetVariable("b11q02", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b11q02", c_iQuestCompleted);
		
		object scene;
		@GetSceneByName(scene, "cot_kapella");
		@Trigger(scene, "han");
		
		@GetSceneByName(scene, "mnogogrannik_han");
		@Trigger(scene, "nohan");
		
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		RemoveStationaryActorsFromVector(m_Dobermans);
		
		@RemoveActor(self());
	}
}
