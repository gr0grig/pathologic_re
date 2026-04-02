include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Morlok, m_MorlokM;
	var object m_Fogs;
	var object m_Grabitels;

	void init(void) {
		m_Fogs = CreateObjectVector();
		m_Grabitels = CreateObjectVector();
		super.init(7);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_termitnik2") {
			LockDoorActor("termitnik2@door1", false);
			object scene;
			@GetSceneByName(scene, "termitnik2");

			m_MorlokM = SpawnActor(scene, "pt_b7q02_mmorlok", "pers_morlok", "b7q02_mmorlok.xml");
			m_Morlok = SpawnActor(scene, "pt_b7q02_morlok", "pers_morlok", "b7q02_morlok.xml");

			for (int i = 1; ; ++i) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator("pt_b7q02_fog" + i, bFound, vPos, vDir);
				if (!bFound)
					break;
				object actor;
				@AddActorByType(actor, "fog", scene, vPos, vDir, "fog_stat_indoor.xml");
				m_Fogs->add(actor);
			}
		}
		else if (name == "place_grabitels") {
			object scene;
			@GetMainOutdoorScene(scene);

			m_Grabitels->add(SpawnActor(scene, "pt_b7q02_grabitel1", "pers_grabitel", "b7q02_grabitel.xml"));
			m_Grabitels->add(SpawnActor(scene, "pt_b7q02_grabitel2", "pers_grabitel", "b7q02_grabitel.xml"));
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
		@GetVariable("b7q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b7q02", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b7q02", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		LockDoorActor("termitnik2@door1", true);

		if (m_Morlok)
			@Trigger(m_Morlok, "cleanup");
		if (m_MorlokM)
			@Trigger(m_MorlokM, "cleanup");
		TriggerActorsInVector(m_Fogs, "cleanup");
		TriggerActorsInVector(m_Grabitels, "cleanup");

		@RemoveActor(self());
	}
}
