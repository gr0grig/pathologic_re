include std.sci
include bgame.sci

maintask TQuest
{
	var bool m_bBadKlaraInit;
	var object m_Klara;
	
	void init(void) {
		LockDoorActor("boiny@door1", false);
		
		object scene_cur;
		@GetActiveScene(scene_cur);
		object scene;
		@GetSceneByName(scene, "storojka");
		if (scene_cur == scene) {
			m_bBadKlaraInit = true;
		}
		else {
			m_Klara = SpawnActor(scene, "pt_b11q01_klara", "NPC_Klara", "b11q01_klara_laska.xml");
		}
		
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "storojka_unload") {
			if (m_bBadKlaraInit) {
				m_bBadKlaraInit = false;
				object scene;
				@GetSceneByName(scene, "storojka");
				m_Klara = SpawnActor(scene, "pt_b11q01_klara", "NPC_Klara", "b11q01_klara_laska.xml");
			}
		}
		else
		if (name == "remove_klara") {
			@Trigger(m_Klara, "cleanup");
		}
		else
		if (name == "open_shaft") {
			TriggerActor("boiny_shaft_trigger", "activate");
			RemoveActorByName("iboiny_stones");
		}
		else if (name == "shaft_drop") {
			@PlayNSSound("drop");

			@AddScene("boiny_well.isc");
			@sync();

			TeleportActor(GetPlayerActor(), "boiny_well", "pt_player");
			@sync();
			
			int iVal;
			@GetVariable("b11q01KlaraWillHelp", iVal);
			if (!iVal) {
				GetPlayerActor()->ApplyEffect("quest_b11_01_death_effect.bin");
			}
		}
		else if (name == "starshina_fight") {
			@AddScene("boiny_arena.isc");
			@sync();

			TeleportActor(GetPlayerActor(), "boiny_arena", "pt_player");
		}
		else if (name == "open_well_exit") {
			TriggerActor("well_trigger", "activate");
		}
		else if (name == "fight_win") {
			AddDiaryEntry_b11q01Completed();
			Completed();
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("b11q01", iState);
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
		@SetVariable("b11q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("b11q01", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		TriggerActor("boiny_shaft_trigger", "deactivate");
		TriggerActor("well_trigger", "activate");
		
		if (m_Klara)
			@Trigger(m_Klara, "cleanup");

		@RemoveActor(self());
	}
}
