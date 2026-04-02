include std.sci
include bgame.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_Vera1, m_Vera2;
	var object m_Butchers;
	var object m_NudeGirl;

	void init(void) {
		m_Butchers = CreateObjectVector();
		for (;;) {
			@Hold();
		}
	}
	
	void OnGameTime(int id, float fTime) {
		AddMessage_D5_Burah_Anna(fTime);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "vera_kabak") {
			object scene;
			@GetSceneByName(scene, "shouse1_kabak");
			m_Vera1 = SpawnActor(scene, "pt_b5q01_vera", "pers_nudegirl", "b5q01_vera1.xml");
		}
		else if (name == "vera_stvorki") {
			@Trigger(m_Vera1, "cleanup");
			object scene;
			@GetMainOutdoorScene(scene);
			m_Vera2 = SpawnStationaryActor(scene, "pt_b5q01_vera", "pers_nudegirl", "b5q01_vera2.xml");
			
			// sending delayed mail
			float fTime;
			@GetGameTime(fTime);
			fTime += 1;
			@SetTimeEvent(0, fTime);
		}
		else if (name == "vera_retreat") {
			object actor;
			m_Vera2->GetActor(actor);
			@Trigger(actor, "retreat");
		}
		else if (name == "place_butchers") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Butchers->add(SpawnStationaryActor(scene, "pt_b5q01_butcher1", "pers_butcher", "b5q01_butcher.xml"));
			m_Butchers->add(SpawnStationaryActor(scene, "pt_b5q01_butcher2", "pers_butcher", "b5q01_butcher.xml"));
			m_Butchers->add(SpawnStationaryActor(scene, "pt_b5q01_butcher3", "pers_butcher", "b5q01_butcher.xml"));
			m_NudeGirl = SpawnStationaryActor(scene, "pt_b5q01_nudegirl", "pers_nudegirl", "b5q01_gwife.xml");
		}
		else if (name == "butcher_attack") {
			int iCount;
			m_Butchers->size(iCount);
			for (int i = 0; i < iCount; ++i) {
				object actor;
				m_Butchers->get(actor, i);
				if (actor) {
					object ractor;
					actor->GetActor(ractor);
					if (ractor)
						@Trigger(ractor, "attack");
				}
			}
			RemoveStationaryActorsFromVector(m_Butchers); m_Butchers = null;
			if (m_NudeGirl) {
				object actor;
				m_NudeGirl->GetActor(actor);
				if (actor)
					@Trigger(actor, "retreat");
				m_NudeGirl->Remove();
			}
		}
		else if (name == "gwife_dead") {
			@SetVariable("b5q01WifeDead", 1);
			RemoveStationaryActorsFromVector(m_Butchers); m_Butchers = null;
			object player;
			@FindActor(player, "player");
			if (player)
				PlayerModReputation(player, 0.5);
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("b5q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				Cleanup();
			}
		}
		else if (name == "cutscene") {
			AddQuestActor("cs_burah_danko_microscope");
		}
		else if (name == "cutscene_end") {
			@SetVariable("b5q01MicroscopeCS", 1);
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Fail(void) {
		@SetVariable("b5q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("b5q01", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnGameTime;
		if (m_Vera1)
			@Trigger(m_Vera1, "cleanup");
		if (m_Vera2)
			m_Vera2->Remove();
		RemoveStationaryActorsFromVector(m_Butchers); m_Butchers = null;
		if (m_NudeGirl)
			m_NudeGirl->Remove();
		@RemoveActor(self());
	}
}
