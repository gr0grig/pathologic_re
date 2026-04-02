include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Morloks, m_Bull, m_GirlLaska, m_Laska, m_Klara, m_Officer, m_Prisoner;
	
	void init(void) {
		m_Morloks = CreateObjectVector();
		
		object scene;
		@GetMainOutdoorScene(scene);
		
		m_Bull = SpawnActor(scene, "pt_b10q04_bull", "pers_avrox", "b10q04_bull.xml");
		
		object scene_termitnik, cur_scene;
		@GetScene(cur_scene);
		@GetSceneByName(scene_termitnik, "termitnik_mat");
		
		if (cur_scene != scene_termitnik) {
			int iVictim;
			@GetVariable("b8q03MladVladIsVictim", iVictim);
			if (iVictim) {
				m_Prisoner = SpawnActor(scene_termitnik, "pt_b10q04_prisoner", "NPC_MladVlad", "b10q04_mladvlad.xml");
			}
			else {
				m_Prisoner = SpawnActor(scene_termitnik, "pt_b10q04_prisoner", "NPC_BigVlad", "b10q04_bigvlad.xml");
			}
		}
		
		super.init(10);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_morloks") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Morloks->add(SpawnActor(scene, "pt_b10q04_morlok", "pers_morlok", "b10q04_morlok.xml"));
			m_Morloks->add(SpawnActor(scene, "pt_b10q04_morlok_mishka", "pers_morlok", "b10q04_morlok_mishka.xml"));
			m_Morloks->add(SpawnActor(scene, "pt_b10q04_morlok_laska", "pers_morlok", "b10q04_morlok_laska.xml"));
			m_Morloks->add(SpawnActor(scene, "pt_b10q04_morlok_spi4ka", "pers_morlok", "b10q04_morlok_spi4ka.xml"));
		}
		if (name == "init_storojka") {
			object scene;
			@GetSceneByName(scene, "storojka");
			@Trigger(scene, "nolaska");
			
			m_GirlLaska = SpawnActor(scene, "pt_b10q04_girl", "pers_girl", "b10q04_girl_laska.xml");

			@GetSceneByName(scene, "uprava_admin");
			m_Klara = SpawnActor(scene, "pt_b10q04_klara", "NPC_Klara", "b10q04_klara.xml");
			
			LockDoorActor("vagon_army@door1", false);
			@GetSceneByName(scene, "vagon_army");
			m_Laska = SpawnActor(scene, "pt_b10q04_laska", "NPC_Laska", "b10q04_laska.xml");
			m_Officer = SpawnActor(scene, "pt_b10q04_officer", "pers_soldat", "b10q04_officer.xml");
		}
		else if (name == "restore_laska") {
			if (m_Laska) 
				@Trigger(m_Laska, "cleanup");
				
			object scene;
			@GetSceneByName(scene, "storojka");
			@Trigger(scene, "laska");
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
		@GetVariable("b10q04", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
		Cleanup();
	}
	
	void Fail(void) {
		@SetVariable("b10q04", c_iQuestFailed);
		PreCleanup();
	}
	
	void Completed(void) {
		@SetVariable("b10q04", c_iQuestCompleted);
		PreCleanup();
	}
	
	void PreCleanup() {
		if (m_GirlLaska)
			@Trigger(m_GirlLaska, "cleanup");

		if (m_Laska)
			@Trigger(m_Laska, "cleanup");
			
		if (m_Klara)
			@Trigger(m_Klara, "cleanup");
			
		if (m_Officer)
			@Trigger(m_Officer, "cleanup");
			
		if (m_Prisoner)
			@Trigger(m_Prisoner, "cleanup");
			
		object scene;
		@GetSceneByName(scene, "storojka");
		@Trigger(scene, "laska");
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		PreCleanup();
		
		TriggerActorsInVector(m_Morloks, "cleanup");
		LockDoorActor("vagon_army@door1", true);
		if (m_Bull)
			@Trigger(m_Bull, "cleanup");
			
		@RemoveActor(self());
	}
}
