include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Patrol, m_GraveyardFire;
	
	void InitGraveyardActors(void) {
		object scene;
		@GetMainOutdoorScene(scene);
		m_Patrol = SpawnStationaryActor(scene, "pt_d3q01_gpatrol1", "pers_patrool", "b3q04_gpatrol.xml");
		@AddActor(m_GraveyardFire, "d3q01_graveyard_fire", scene, [0, 0, 0], [0, 0, 1], "d3q01_graveyard_fire.xml");
		@sync();
		@Trigger(m_GraveyardFire, "put_item");
	}	

	void init(void) {
		@SetVariable("b3q04", c_iQuestEnabled); 
		InitGraveyardActors();
		super.init(3);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}
	
	void Limit(void) {
		int iState;
		@GetVariable("b3q04", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b3q04", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b3q04", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		m_Patrol->Remove();
		if (m_GraveyardFire)
			@Trigger(m_GraveyardFire, "cleanup");
		@RemoveActor(self());
	}
}
