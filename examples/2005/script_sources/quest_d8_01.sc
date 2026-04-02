include std.sci
include dgame.sci
include citymanager_base.sci

const string c_strBoinyOutdoorDoor = "boiny@door1";
const float c_fBoinyUnlockTime = 7 * 24 + 23;

maintask TQuest
{
	var object m_Toy, m_Burah;
	var bool m_bBoinyVisited;
	
	void KillTheOne(void) {
		int iV;
		@GetVariable("d8q01MladVladIsVictim", iV);
		if (iV != 0)
			TriggerActor2("volonteers_danko", "kill", "mladvlad");
		else
			TriggerActor2("volonteers_danko", "kill", "bigvlad");
			
		//@GetVariable("d8q01BigVladIsVictim", iV);
	}

	void init(void) {
		AddQuestActor("quest_d8_03");
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "block_well") {
			object scene;
			@GetSceneByName(scene, "house_vlad");
			object actor;
			@AddActor(actor, "d8q01_well_block", scene, [0, 0, 0]);
		}
		else if (name == "place_toy") {
			object scene;
			@GetSceneByName(scene, "r4_house_2_02");
			m_Toy = SpawnActorByType(scene, "pt_d8q01_toy", "scripted_container", "d8q01_toy.xml");
		}
		else if (name == "boiny_load") {
			if (!m_bBoinyVisited) {
				m_bBoinyVisited = true;

				AddQuestActor("quest_d8_01_cutscene");
			}
		}
		else if (name == "unlock_boiny") {
			KillTheOne();
			float fTime;
			@GetGameTime(fTime);
			if (fTime >= c_fBoinyUnlockTime) {
				UnlockBoiny();
			}
			else {
				@SetTimeEvent(0, c_fBoinyUnlockTime);
			}
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("d8q01", iState);
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
	
	void OnGameTime(int id, float fTime) {
		@ReleaseTimeEvent(0);
		UnlockBoiny();
	}
	
	void UnlockBoiny(void) {
		@Trace("Boiny unlocked");
		LockDoorActor(c_strBoinyOutdoorDoor, false);
		AddDiaryEntry_d8q01BoinyOpened();
	}

	void Fail(void) {
		@SetVariable("d8q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("d8q01", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		disable OnGameTime;
		@ReleaseTimeEvent(0);
		if (m_Toy)
			@Trigger(m_Toy, "cleanup");
		if (m_Burah)
			@Trigger(m_Burah, "cleanup");
		LockDoorActor(c_strBoinyOutdoorDoor, true);
		
		KillTheOne();
		
		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
