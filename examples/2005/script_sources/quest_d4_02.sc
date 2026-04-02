include std.sci
include quest_limited.sci
include dgame.sci

const string c_strIndoorDoor1 = "s_house7_03_door1";
const string c_strIndoorDoor2 = "s_house7_03_door2";
const string c_strOutdoorDoor1 = "house7_03@door1";
const string c_strOutdoorDoor2 = "house7_03@door2";

maintask TQuest : TQuestLimited
{
	var object m_Birdmask;
	
	void init(void) {
		@SetVariable("d4q02", c_iQuestEnabled);
		
		LockDoorActor(c_strIndoorDoor1, true);
		LockDoorActor(c_strIndoorDoor2, true);
		LockDoorActor(c_strOutdoorDoor1, true, false);
		LockDoorActor(c_strOutdoorDoor2, true, false);

		super.init(4);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "scene_load") {
			bool bSurvived;
			@GetVariable("d4q02_survived", bSurvived);
			if (!bSurvived) {
				@PlaySound("door_close");
				AddQuestActor("quest_d4_02_survival");
			}
		}
		else if (name == "scene_unload") {
			if (m_Birdmask)
				m_Birdmask->Remove();
			LockDoorActor(c_strIndoorDoor2, false);
		}
		else if (name == "birdmask") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Birdmask = SpawnStationaryActor(scene, "pt_d4q02_birdmask", "pers_birdmask", "d4q02_birdmask.xml");
		}
		else if (name == "birdmask_talk") {
			LockDoorActor(c_strOutdoorDoor1, false);
		}
		else if (name == "survived") {
			LockDoorActor(c_strIndoorDoor1, false);
			@SetVariable("d4q02_survived", 1);
			@PlaySound("door_open");
			AddDiaryEntry_d4q02HourEnds();
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("d4q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d4q02", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		int iState;
		@GetVariable("d4q02", iState);
		if (iState != c_iQuestCompleted && iState != c_iQuestFailed) {
			@SetVariable("d4q02", c_iQuestCompleted);
			Cleanup();
		}
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_Birdmask)
			m_Birdmask->Remove();
		LockDoorActor(c_strIndoorDoor1, false);
		LockDoorActor(c_strIndoorDoor2, false);
		LockDoorActor(c_strOutdoorDoor1, false);
		LockDoorActor(c_strOutdoorDoor2, false);
		@RemoveActor(self());
	}
}
