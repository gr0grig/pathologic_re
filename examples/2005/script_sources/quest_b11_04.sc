include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Sanitars, m_SanitarMain, m_Officer, m_Corpse;
	void init(void) {
		m_Sanitars = CreateObjectVector();
	
		super.init(11);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_sanitar") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_SanitarMain = SpawnActor(scene, "pt_b11q04_sanitar", "pers_sanitar", "b11q04_sanitar_main.xml");
			
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
		else
		if (name == "place_officer") {
			object scene;
			@GetSceneByName(scene, "vagon_army");
			LockDoorActor("vagon_army@door1", false);
			m_Officer = SpawnActor(scene, "pt_b11q04_officer", "pers_soldat", "b11q04_officer.xml");
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
		@GetVariable("b11q04", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
		Cleanup();
	}
	
	void Fail(void) {
		@SetVariable("b11q04", c_iQuestFailed);
		PreCleanup();
	}
	
	void Completed(void) {
		@SetVariable("b11q04", c_iQuestCompleted);
		PreCleanup();
	}
	
	void PreCleanup(void) {
		if (m_SanitarMain)
			@Trigger(m_SanitarMain, "cleanup");
			
		if (m_Officer)
			@Trigger(m_Officer, "cleanup");
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		PreCleanup();
		
		RemoveStationaryActorsFromVector(m_Sanitars);
		LockDoorActor("vagon_army@door1", true);
		
		if (m_Corpse) 
			@Trigger(m_Corpse, "cleanup");
		
		@RemoveActor(self());
	}
}
