include std.sci
include game.sci
include citymanager_base.sci

const int c_iDay = 7;

maintask TQuest
{
	var object m_Birdmask1, m_Birdmask2, m_Corpse, m_Danko, m_Burah;
	
	void PlaceDanko(void) {
		if (m_Danko)
			return;
		object scene;
		@GetSceneByName(scene, "theater");
		m_Danko = SpawnActor(scene, "pt_k7q01_danko", "NPC_Bakalavr", "k7q01_danko.xml");
	}
	
	void PlaceBurah(void) {
		if (m_Burah)
			return;
		object scene;
		@GetSceneByName(scene, "termitnik2");
		m_Burah = SpawnActor(scene, "pt_k7q01_burah", "NPC_Burah", "k7q01_burah.xml");
		RemoveActorByName("NPC_Burah");
	}
	
	void init(void) {
		@QueuePlayMovie("aglaja.wmv");
		LockDoorActor("termitnik2@door1", false);
		LockDoorActor("termitnik@door1", true);
	
		object scene;
		@GetMainOutdoorScene(scene);
	
		m_Birdmask1 = SpawnStationaryActor(scene, "pt_k7q01_birdmask1", "pers_birdmask", "k7q01_birdmask.xml");
		m_Birdmask2 = SpawnStationaryActor(scene, "pt_k7q01_birdmask2", "pers_birdmask", "k7q01_birdmask.xml");
		
		object scene_theater, scene_termitnik2;
		@GetScene(scene);
		@GetSceneByName(scene_theater, "theater");
		if (scene_theater != scene)
			PlaceDanko();
			
		@GetSceneByName(scene_termitnik2, "termitnik2");
		if (scene_termitnik2 != scene)
			PlaceBurah();
			
		@GetSceneByName(scene, "burah_home");
		@Trigger(scene, "noburah");
			
		LockDoorActor("sobor@door1", true);
		for (;;) {
			@Hold();
		}
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_corpse") {
			object scene;
			@GetMainOutdoorScene(scene);
			@AddActor(m_Corpse, "d7q02_corpse", scene, [0, 0, 0], [0, 0, 1], "k7q01_corpse.xml");
		}
		else
		if (name == "place_danko") {
			if (!m_Danko) {
				PlaceDanko();
			}
		}
		else
		if (name == "cot_eva_load") {
			LockMovingDoor("icot_eva_door", true);
		}
		else
		if (name == "theater_load") {
			PlaceDanko();
		}		
		else
		if (name == "termitnik2_load") {
			PlaceBurah();
		}		
		else		
		if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("k7q01", iState);
			if (iState != c_iQuestCompleted) {
				@SetVariable("k7q01", c_iQuestFailed);
			}
			Cleanup();
		}				
	}
	
	void Fail(void) {
		@SetVariable("k7q01", c_iQuestFailed);
		PreCleanup();
	}

	void Completed(void) {
		@SetVariable("k7q01", c_iQuestCompleted);
		PreCleanup();
	}
	
	// using precleaunp, as danko and burah are necessary for other quests
	void PreCleanup(void) {
		if (m_Birdmask1)
			m_Birdmask1->Remove();
		if (m_Birdmask2)
			m_Birdmask2->Remove();
		LockDoorActor("sobor@door1", false);
		LockDoorActor("termitnik@door1", false);
	}

	void Cleanup(void) {
		disable OnTrigger;
		PreCleanup();
		if (m_Danko)
			@Trigger(m_Danko, "cleanup");
		LockMovingDoor("icot_eva_door", false);
		
		if (m_Burah)
			@Trigger(m_Burah, "cleanup");
			
		if (m_Corpse)
			@Trigger(m_Corpse, "cleanup");
		
		object scene;
		@GetSceneByName(scene, "burah_home");
		@Trigger(scene, "burah");
		
		LockDoorActor("termitnik2@door1", true);
		
		@RemoveActor(self());
	}
}
