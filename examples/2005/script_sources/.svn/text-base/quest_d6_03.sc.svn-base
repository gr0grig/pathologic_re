include std.sci
include quest_limited.sci
include game.sci
include diary.sci

maintask TQuest : TQuestLimited
{
	var object m_Albinos;
	
	void init(void) {
		@SetVariable("d6q03", c_iQuestEnabled);
		
		super.init(6);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "completed") {
			Completed();
		}
		else if (name == "fail") {
			Fail();
		}		
		else if (name == "place_albinos") {
			object scene;
			@GetMainOutdoorScene(scene);
			
			m_Albinos = SpawnStationaryActor(scene, "pt_d6q03_albinos", "pers_albinos", "d6q03_albinos.xml");
		}
		else if (name == "albinos_retreated") {
			@SetVariable("d6q03AlbinosFlee", 1);
			m_Albinos->Remove();
		}
		else if (name == "albinos_dead") {
			@SetVariable("d6q03AlbinosKilled", 1);
			AddDiaryEntry_d6q03AlbinosIsDead();
			m_Albinos->Remove();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("d6q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d6q03", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		int iState;
		@GetVariable("d6q03", iState);
		if (iState != c_iQuestCompleted && iState != c_iQuestFailed) {
			@SetVariable("d6q03", c_iQuestCompleted);
			Cleanup();
		}
	}

	void Cleanup(void) {
		disable OnTrigger;
		
		if (m_Albinos) {
			m_Albinos->Remove();
		}
		@RemoveActor(self());
	}
}
