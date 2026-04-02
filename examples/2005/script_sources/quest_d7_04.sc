include std.sci
include quest_limited.sci
include dgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Enemies;
	var object m_Nude, m_Andrey;
	var object m_WastedMale1, m_WastedMale2;
	
	void init(void) {
		object scene;
		@GetMainOutdoorScene(scene);
		SpawnActorByType(scene, "pt_gatherer_fire2", "scripted", "bonfire.xml");
		
		@CreateObjectVector(m_Enemies);
		super.init(7);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_kabak") {
			object scene;
			@GetSceneByName(scene, "shouse1_kabak");
			@Trigger(scene, "noandrei");
			
			m_WastedMale1 = SpawnActor(scene, "pt_d7q04_wastedmale1", "pers_wasted_male", "d7q04_wastedmale.xml");
			m_WastedMale2 = SpawnActor(scene, "pt_d7q04_wastedmale2", "pers_wasted_male", "d7q04_wastedmale.xml");
		}
		if (name == "init_andrei") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Andrey = SpawnActor(scene, "pt_d7q04_andrei", "NPC_Andrei", "d7q04_andrei.xml");
			m_Nude = SpawnActor(scene, "pt_d7q04_nude", "pers_nudegirl", "d7q04_nudegirl.xml");
			
			// enemy
			m_Enemies->add(SpawnActor(scene, "pt_d7q04_enemy1", "pers_morlok", "d7q04_e_morlok.xml"));
			m_Enemies->add(SpawnActor(scene, "pt_d7q04_enemy2", "pers_butcher", "d7q04_e_butcher.xml"));
			m_Enemies->add(SpawnActor(scene, "pt_d7q04_enemy3", "pers_morlok", "d7q04_e_morlok.xml"));
			m_Enemies->add(SpawnActor(scene, "pt_d7q04_enemy4", "pers_butcher", "d7q04_e_butcher.xml"));
			m_Enemies->add(SpawnActor(scene, "pt_d7q04_enemy5", "pers_morlok", "d7q04_e_morlok.xml"));
			m_Enemies->add(SpawnActor(scene, "pt_d7q04_enemy6", "pers_butcher", "d7q04_e_butcher.xml"));
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
		@GetVariable("d7q04", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("d7q04", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("d7q04", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		TriggerActorsInVector(m_Enemies, "cleanup");
		
		if (m_Andrey)
			@Trigger(m_Andrey, "cleanup");
			
		if (m_Nude)
			@Trigger(m_Nude, "cleanup");
			
		if (m_WastedMale1)
			@Trigger(m_WastedMale1, "cleanup");

		if (m_WastedMale2)
			@Trigger(m_WastedMale2, "cleanup");
			
		object scene;
		@GetSceneByName(scene, "shouse1_kabak");
		@Trigger(scene, "andrei");

		@RemoveActor(self());
	}
}
