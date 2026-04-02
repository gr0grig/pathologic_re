include std.sci
include game.sci
include citymanager_base.sci

property object Bull;

maintask TQuest
{
	var object m_Klara;
	var object m_Mat, m_Agonies, m_Butchers;
	var object m_Morlok1, m_Morlok2;

	void init(void) {
		m_Agonies = CreateObjectVector();
		m_Butchers = CreateObjectVector();
		for (;;) {
			@Hold();
		}
	}
	
	void OnGameTime(int id, float fTime) {
		int iVal;
		@GetVariable("b6q01KlaraVisit", iVal);
		if (!iVal)
			AddMessage_D6_Burah_Klara(fTime);
	}	

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_klara") {
			object scene;
			@GetSceneByName(scene, "storojka");
			m_Klara = SpawnActor(scene, "pt_b6q01_klara", "NPC_Klara", "b6q01_klara.xml");
			
			// sending delayed mail
			float fTime;
			@GetGameTime(fTime);
			fTime += 0.4;
			@SetTimeEvent(0, fTime);
		}
		else if (name == "remove_klara") {
			@Trigger(m_Klara, "cleanup");
		}
		else if (name == "cutscene") {
			AddQuestActor("cs_burah_danko_microscope");
		}
		else if (name == "cutscene_end") {
			@SetVariable("b6q01MicroscopeCS", 1);
		}
		else if (name == "init_termitnik") {
			object scene;
			@GetSceneByName(scene, "termitnik2");
			m_Mat = SpawnActor(scene, "pt_b6q01_mat", "NPC_Mat", "b6q01_mat.xml");
			for (int i = 1; ; ++i) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator("pt_b6q01_agony" + i, bFound, vPos, vDir);
				if (!bFound)
					break;
				string strActorName, strXmlName;
				int iType;
				@irand(iType, 3);
				if (iType == 0) {
					strActorName = "pers_worker";
					strXmlName = "agony1_man.xml";
				}
				else if (iType == 1) {
					strActorName = "pers_morlok";
					strXmlName = "agony1_morlok.xml";
				}
				else {
					strActorName = "pers_woman";
					strXmlName = "agony1_woman.xml";
				}
				object actor;
				@AddActor(actor, strActorName, scene, vPos, vDir, strXmlName);
			}
			
			m_Butchers->add(SpawnActor(scene, "pt_b6q01_butcher1", "pers_butcher", "b6q01_butcher.xml"));
			m_Butchers->add(SpawnActor(scene, "pt_b6q01_butcher2", "pers_butcher", "b6q01_butcher.xml"));
			m_Butchers->add(SpawnActor(scene, "pt_b6q01_butcher3", "pers_butcher", "b6q01_butcher.xml"));
		}
		else if (name == "clean_termitnik") {
			@Trigger(m_Mat, "cleanup");
			TriggerActorsInVector(m_Agonies, "cleanup");
			TriggerActorsInVector(m_Butchers, "cleanup");
		}
		else if (name == "init_altar") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Morlok1 = SpawnStationaryActor(scene, "pt_b6q01_morlok1", "pers_morlok", "b6q01_morlok1.xml");
			m_Morlok2 = SpawnStationaryActor(scene, "pt_b6q01_morlok2", "pers_morlok", "b6q01_morlok2.xml");
			Bull = SpawnActor(scene, "pt_b6q01_bull", "pers_bull", "b6q01_bull.xml");
		}
/*		else if (name == "remove_altar") {
			m_Morlok1->Remove();
			m_Morlok2->Remove();
			@Trigger(Bull, "cleanup");
		}*/
		else if (name == "sacrifice") {
			@RemoveActor(Bull);
			object actor;
			m_Morlok1->GetActor(actor);
			@RemoveActor(actor); m_Morlok1->Remove();
			m_Morlok2->GetActor(actor);
			@RemoveActor(actor); m_Morlok2->Remove();
			AddQuestActor("quest_b6_01_cutscene");
		}
		else if (name == "sacrifice_end") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Morlok1 = SpawnStationaryActorForce(scene, "pt_b6q01_morlok1", "pers_morlok", "b6q01_morlok1.xml");
			m_Morlok2 = SpawnStationaryActorForce(scene, "pt_b6q01_morlok2", "pers_morlok", "b6q01_morlok2.xml");
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("b6q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				Cleanup();
			}
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Fail(void) {
		@SetVariable("b6q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("b6q01", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnGameTime;
	
		TriggerActorsInVector(m_Agonies, "cleanup");
		TriggerActorsInVector(m_Butchers, "cleanup");
		
		if (m_Mat)
			@Trigger(m_Mat, "cleanup");
		if (m_Morlok1)
			m_Morlok1->Remove();
		if (m_Morlok2)
			m_Morlok2->Remove();
		if (Bull)
			@Trigger(Bull, "cleanup");
		if (m_Klara)
			@Trigger(m_Klara, "cleanup");
			
		@RemoveActor(self());
	}
}
