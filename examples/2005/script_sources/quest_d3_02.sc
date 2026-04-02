include std.sci
include quest_limited.sci
include dgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Butcher1, m_Butcher2, m_Doberman;
	var object m_Corpse;
	var object m_ButcherTrigger;

	void init(void) {
		@SetVariable("d3q02", c_iQuestEnabled);

		object scene = GetSceneByName("r7_house2_01");
		m_Butcher1 = SpawnActor(scene, "pt_d3q02_butcher1", "pers_butcher", "d3q02_butcher.xml");
		m_Butcher2 = SpawnActor(scene, "pt_d3q02_butcher2", "pers_butcher", "d3q02_butcher.xml");
		@AddScriptedActor(m_Corpse, "d3q02_corpse", "actor_disp.bin", scene, [0, 0, 0]);
		@AddScriptedActor(m_ButcherTrigger, "d3q02_btrigger", "quest_d3_02_btrigger.bin", scene, [0, 0, 0]);
		
		LockDoorActor("r7_house2_01@door1", false);
		LockDoorActor("r7_house2_01@door2", false);
		
		@GetMainOutdoorScene(scene);
		m_Doberman = SpawnActor(scene, "pt_d3q02_doberman", "pers_doberman", "d3q02_doberman.xml");

		super.init(3);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "teleport") {
			object player;
			@FindActor(player, "player");
			if (player) {
				object scene;
				@GetSceneByName(scene, "mnogogrannik_han");
				Vector vPos, vDir;
				bool bFound;
				scene->GetLocator("pt_d3q02_teleport", bFound, vPos, vDir);
				@Teleport(player, scene, vPos, vDir);
			}
		}
		else
		if (name == "butcher_trigger") {
			if (m_Butcher1)
				@Trigger(m_Butcher1, "trigger");
			if (m_Butcher2)
				@Trigger(m_Butcher2, "trigger");
				
			RemoveActors();
			@SetVariable("d3q02SeeCorpse", 1);
			AddDiaryEntry_d3q02TeloWasFound();
		}
		else if (name == "completed") {
			Completed();
		}
	}
	
	void Limit(void) {
		int iState;
		@GetVariable("d3q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("d3q02", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		int iState;
		@GetVariable("d3q02", iState);
		if (iState != c_iQuestCompleted && iState != c_iQuestFailed) {
			@SetVariable("d3q02", c_iQuestCompleted);
			Cleanup();
		}
	}
	
	void RemoveActors(void) {
		if (m_Butcher1)
			@Trigger(m_Butcher1, "cleanup");
		if (m_Butcher2)
			@Trigger(m_Butcher2, "cleanup");
		if (m_Corpse)
			@Trigger(m_Corpse, "cleanup");
		if (m_ButcherTrigger)
			@Trigger(m_ButcherTrigger, "cleanup");
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		RemoveActors();
		
		if (m_Doberman)
			@Trigger(m_Doberman, "cleanup");
		
		LockDoorActor("r7_house2_01@door1", true);
		LockDoorActor("r7_house2_01@door2", true);
		
		@RemoveActor(self());
	}
}
