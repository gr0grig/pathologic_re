include std.sci
include quest_limited.sci
include game.sci

const string c_strIndoorDoor = "iuprava_prison@door1";
const string c_strOutdoorDoor = "uprava_prison@door1";

maintask TQuest : TQuestLimited
{
	var object m_Prisoners, m_Birdmask;
	
	void init(void) {
		@SetVariable("d5q03", c_iQuestEnabled);
		m_Prisoners = CreateObjectVector();
		super.init(5);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "completed") {
			AddQuestActor("quest_d5_03_cutscene");
			Completed();
		}
		else if (name == "fail") {
			Fail();
		}		
		else if (name == "place_prisoners") {
			LockDoorActor(c_strOutdoorDoor, false);
			object scene, prisoner;
			@GetSceneByName(scene, "uprava_prison");
			m_Birdmask = SpawnActor(scene, "pt_guard", "pers_birdmask", "d5q03_birdmask.xml");
			prisoner = SpawnActor(scene, "pt_prisoner1", "pers_unosha", "d5q03_unosha.xml");
			m_Prisoners->add(prisoner);		
			prisoner = SpawnActor(scene, "pt_prisoner2", "pers_worker", "d5q03_worker.xml");
			m_Prisoners->add(prisoner);		
			prisoner = SpawnActor(scene, "pt_prisoner3", "pers_wasted_male", "d5q03_wastedmale.xml");
			m_Prisoners->add(prisoner);		
			prisoner = SpawnActor(scene, "pt_prisoner4", "pers_alkash", "d5q03_alkash.xml");
			m_Prisoners->add(prisoner);		
			prisoner = SpawnActor(scene, "pt_prisoner5", "pers_worker", "d5q03_worker.xml");
			m_Prisoners->add(prisoner);		
			prisoner = SpawnActor(scene, "pt_prisoner6", "pers_unosha", "d5q03_unosha.xml");
			m_Prisoners->add(prisoner);		
		}
	}
	
	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}	

	void Limit(void) {
		int iState;
		@GetVariable("d5q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d5q03", c_iQuestFailed);
		LockDoorActor(c_strOutdoorDoor, true);
		Cleanup();
	}

	void Completed(void) {
		int iState;
		@GetVariable("d5q03", iState);
		if (iState != c_iQuestCompleted && iState != c_iQuestFailed) {
			@SetVariable("d5q03", c_iQuestCompleted);
			LockDoorActor(c_strOutdoorDoor, true);
			Cleanup();
		}
	}

	void Cleanup(void) {
		disable OnTrigger;
		RemoveActorsFromVector(m_Prisoners);
		
		if (m_Birdmask) {
			@Trigger(m_Birdmask, "cleanup");
		}
		@RemoveActor(self());
	}
}
