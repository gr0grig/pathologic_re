include std.sci
include quest_limited.sci
include dgame.sci

maintask TQuest : TQuestLimited
{
	var object m_People, m_Bull, m_Sanitars, m_Corpse;
	
	void init(void) {
		m_People = CreateObjectVector();
		m_Sanitars = CreateObjectVector();
		
		object scene;
		@GetMainOutdoorScene(scene);
		m_Bull = SpawnActor(scene, "pt_b10q04_bull", "pers_avrox", "b10q04_bull.xml");
		
		m_People->add(SpawnActor(scene, "pt_d10q03_morlok1", "pers_morlok", "d10q03_morlok.xml"));
		m_People->add(SpawnActor(scene, "pt_d10q03_morlok2", "pers_morlok", "d10q03_morlok.xml"));
		m_People->add(SpawnActor(scene, "pt_d10q03_morlok3", "pers_morlok", "d10q03_morlok.xml"));
		
		m_People->add(SpawnActor(scene, "pt_d10q03_salesman", "pers_salesman", "d10q03_salesman.xml"));
		
		m_People->add(SpawnActor(scene, "pt_d10q03_people1", "pers_worker", "d10q03_worker.xml"));
		m_People->add(SpawnActor(scene, "pt_d10q03_people2", "pers_dohodyaga", "d10q03_dohodyaga.xml"));
		m_People->add(SpawnActor(scene, "pt_d10q03_people3", "pers_unosha", "d10q03_unosha.xml"));
		m_People->add(SpawnActor(scene, "pt_d10q03_people4", "pers_alkash", "d10q03_alkash.xml"));
		
		super.init(10);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_sanitars") {
			TriggerActorsInVector(m_People, "cleanup");
			
			if (m_Bull)
				@Trigger(m_Bull, "cleanup");
			
			object scene;
			@GetMainOutdoorScene(scene);
			
			for (int i = 1; ; ++i) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator("pt_b11q04_sanitar" + i, bFound, vPos, vDir);
				if (!bFound)
					break;
				m_Sanitars->add(SpawnStationaryActor(scene, "pt_b11q04_sanitar" + i, "pers_sanitar", "b11q04_sanitar.xml"));	
			}		
			
			m_Corpse = SpawnActorByType(scene, "pt_b11q04_corpse", "scripted", "b11q04_corpse.xml");
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
		@GetVariable("d10q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
		Cleanup();
	}
	
	void Fail(void) {
		@SetVariable("d10q03", c_iQuestFailed);
		PreCleanup();
	}
	
	void Completed(void) {
		@SetVariable("d10q03", c_iQuestCompleted);
		PreCleanup();
	}
	
	void PreCleanup() {
		TriggerActorsInVector(m_People, "cleanup");
		
		if (m_Bull)
			@Trigger(m_Bull, "cleanup");
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		PreCleanup();
		
		RemoveActorsFromVector(m_Sanitars);

		if (m_Bull)
			@Trigger(m_Bull, "cleanup");
			
		@RemoveActor(self());
	}
}
