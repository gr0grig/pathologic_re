include std.sci
include game.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_Birdmask, m_Whitemask;
	var object m_Trigger;
	var object m_Morlok, m_Worker;
	var object m_Patrol1, m_Patrol2;
	var object m_Rubin;
	var bool m_bRemoveCutscene;

	void init(void) {
		object scene;
		@GetMainOutdoorScene(scene);
		m_Trigger = SpawnActor(scene, "d1q01_trigger", "d1q01_trigger.xml");
		
		@GetSceneByName(scene, "warehouse_rubin");
		@Trigger(scene, "norubin");

		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_masks") {
			object scene;
			@GetMainOutdoorScene(scene);
			
			m_Birdmask = SpawnStationaryActor(scene, "pt_d1q01_birdmask", "pers_birdmask", "d1q01_birdmask.xml");
			m_Whitemask = SpawnStationaryActor(scene, "pt_d1q01_whitemask", "pers_whitemask", "d1q01_whitemask.xml");
		}
		else if (name == "remove_masks") {
			m_Birdmask->Remove();
			m_Whitemask->Remove();
		}
		else if (name == "cutscene_end") {
			object scene;
			@GetMainOutdoorScene(scene);

			m_Morlok = SpawnActor(scene, "pt_d1q01_morlok", "pers_morlok", "d1q01_morlok.xml");
			m_Worker = SpawnActor(scene, "pt_d1q01_worker", "pers_worker", "d1q01_worker.xml");
			
			if (m_bRemoveCutscene)
				RemoveCutscene();
		}
		else if (name == "remove_cutscene") {
			RemoveCutscene();
		}
		else if (name == "attack") {
			if (m_Morlok)
				@Trigger(m_Morlok, "attack");
			if (m_Worker)
				@Trigger(m_Worker, "attack");
		}
		else if (name == "place_patrol") { 
			object scene;
			@GetMainOutdoorScene(scene);
			m_Patrol1 = SpawnActor(scene, "pt_d1q01_patrol1", "pers_patrool", "d1q01_patrol.xml");
			m_Patrol2 = SpawnActor(scene, "pt_d1q01_patrol2", "pers_patrool", "d1q01_patrol.xml");
		}
		else if (name == "place_morlok_run") {
			object scene;
			@GetMainOutdoorScene(scene);
			SpawnActor(scene, "pt_d1q01_morlok_run_path", "pers_morlok", "d1q01_morlok_run.xml");
		}
		else if (name == "place_rubin") {
			object scene;
			@GetSceneByName(scene, "cot_viktor");
			m_Rubin = SpawnActor(scene, "pt_d1q01_rubin", "NPC_Rubin", "d1q01_rubin.xml");
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("d1q01", iState);
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
		@SetVariable("d1q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d1q01", c_iQuestCompleted);
		Cleanup();
	}
	
	void RemoveCutscene(void) {
		if (m_Trigger)
			@Trigger(m_Trigger, "cleanup");
		if (m_Morlok)
			@Trigger(m_Morlok, "cleanup");
		if (m_Worker)
			@Trigger(m_Worker, "cleanup");
		m_bRemoveCutscene = true;
	}

	void Cleanup(void) {
		disable OnTrigger;
		
		RemoveCutscene();
		
		if (m_Birdmask)
			m_Birdmask->Remove();
		if (m_Whitemask)
			m_Whitemask->Remove();
			
		if (m_Patrol1)
			@Trigger(m_Patrol1, "cleanup");

		if (m_Patrol1)
			@Trigger(m_Patrol2, "cleanup");
			
		if (m_Rubin)
			@Trigger(m_Rubin, "cleanup");
			
		object scene;			
		@GetSceneByName(scene, "warehouse_rubin");
		@Trigger(scene, "rubin");
		
		LockDoorActor("icot_eva@door1", false);
		
		@RemoveActor(self());
	}
}
