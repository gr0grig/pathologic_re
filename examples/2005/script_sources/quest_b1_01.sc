include std.sci
include game.sci
include citymanager_base.sci

maintask TQuest
{
	var object m_Whitemask;
	var object m_Birdmask1, m_Birdmask2;
	var object m_Trigger;

	void init(void) {
		@SetTimeEvent(0, 11);
	
		object scene;
		@GetMainOutdoorScene(scene);
		m_Whitemask = SpawnStationaryActorForce(scene, "pt_b1q01_whitemask", "pers_whitemask", "b1q01_whitemask.xml");
		m_Birdmask1 = SpawnStationaryActorForce(scene, "pt_b1q01_birdmask1", "pers_birdmask", "b1q01_birdmask1.xml");
		m_Birdmask2 = SpawnStationaryActorForce(scene, "pt_b1q01_birdmask2", "pers_birdmask", "b1q01_birdmask2.xml");
		
		m_Trigger = SpawnActor(scene, "b1q01_trigger", "b1q01_trigger.xml");
		
		for (;;) {
			@Hold();
		}
	}
	
	void OnGameTime(int id, float fTime) {
		if (m_Trigger)
			@Trigger(m_Trigger, "cleanup");
	}	

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "remove_whitemask") {
			if (m_Whitemask)
				m_Whitemask->Remove();
		}
		else if (name == "remove1") {
			m_Birdmask1->Remove();
		}
		else if (name == "remove2") {
			m_Birdmask2->Remove();
		}
		else if (name == "remove_cutscene") { // from b1q03
			if (m_Trigger)
				@Trigger(m_Trigger, "cleanup");
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("b1q01", iState);
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
		@SetVariable("b1q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("b1q01", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_Whitemask)
			m_Whitemask->Remove();
		if (m_Birdmask1)
			m_Birdmask1->Remove();
		if (m_Birdmask2)
			m_Birdmask2->Remove();
			
		if (m_Trigger)
			@Trigger(m_Trigger, "cleanup");
			
		@RemoveActor(self());
	}
}
