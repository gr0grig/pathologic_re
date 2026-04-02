include std.sci
include game.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_Box, m_MladVlad;

	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_box") { // box stays up to the end of game
			object scene;
			@GetSceneByName(scene, "dt_house_1_04");
			@AddActor(m_Box, "b2q01_box", scene, [0, 0, 0], [0, 0, 1], "b2q01_box.xml");
		}
		if (name == "place_mladvlad") { 
			object scene;
			@GetSceneByName(scene, "burah_home");
			m_MladVlad = SpawnActor(scene, "pt_b2q01_mladvlad", "NPC_MladVlad", "b2q01_MladVlad.xml");
			LockDoorActor("house_vlad@door1", true);
		}		
		if (name == "remove_mladvlad") { 
			if (m_MladVlad)
				@Trigger(m_MladVlad, "cleanup");
			LockDoorActor("house_vlad@door1", false);
		}	
		else if (name == "cutscene") {
			AddQuestActor("cs_burah_danko_microscope");
		}
		else if (name == "cutscene_end") {
			@SetVariable("b2q01MicroscopeCS", 1);
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("b2q01", iState);
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
		@SetVariable("b2q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("b2q01", c_iQuestCompleted);
		// specially removed cleanup
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_MladVlad)
			@Trigger(m_MladVlad, "cleanup");
		LockDoorActor("house_vlad@door1", false);
		@RemoveActor(self());
	}
}
