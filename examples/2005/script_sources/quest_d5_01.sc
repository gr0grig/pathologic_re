include std.sci
include game.sci
include citymanager_base.sci

const string c_strIndoorDoor = "ifactory@door1";
const string c_strOutdoorDoor = "factory@door1";
const string c_strBurahDoor = "ifactory_grid_door";

maintask TQuest
{
	var object m_Burah;
	var object m_BurahPatrols;
	var object m_Girl, m_Corpse1, m_Corpse2;
	var object m_STGuards; // sobor theater guards

	void init(void) {
		@CreateObjectVector(m_BurahPatrols);
		@CreateObjectVector(m_STGuards);
		
		object scene;
		@GetMainOutdoorScene(scene);
		m_STGuards->add(SpawnStationaryActor(scene, "pt_d5q01_sobor_guard1", "pers_wasted_male", "d5q01_sobor_guard1.xml"));
		m_STGuards->add(SpawnStationaryActor(scene, "pt_d5q01_sobor_guard2", "pers_wasted_male", "d5q01_sobor_guard2.xml"));
		m_STGuards->add(SpawnStationaryActor(scene, "pt_d5q01_sobor_guard3", "pers_wasted_male", "d5q01_sobor_guard3.xml"));
		m_STGuards->add(SpawnStationaryActor(scene, "pt_d5q01_theater_guard", "pers_whitemask", "d5q01_theater_guard.xml"));
		
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "factory") {
			LockDoorActor(c_strOutdoorDoor, false);
			LockMovingDoor(c_strBurahDoor, true);
			object scene;
			@GetSceneByName(scene, "factory");
			m_Burah = SpawnActor(scene, "pt_d5q01_Burah", "NPC_Burah", "d5q01_Burah.xml");
			m_BurahPatrols->add(SpawnActor(scene, "pt_d5q01_PatrolBoss", "pers_patrool", "d5q01_PatrolBoss.xml"));
			m_BurahPatrols->add(SpawnActor(scene, "pt_d5q01_Patrol1", "pers_patrool", "d5q01_Patrol.xml"));
			m_BurahPatrols->add(SpawnActor(scene, "pt_d5q01_Patrol2", "pers_patrool", "d5q01_Patrol.xml"));
		}
		else if (name == "d5q01_trigger_factory") {
			int iCutScene;
			@GetVariable("d5q01PlayCutscene", iCutScene);
			if (iCutScene) {
				int iState;
				@GetVariable("d5q01", iState);
				if (IsNormalQuestState(iState)) {
					LockDoorActor(c_strIndoorDoor, true);

					@SetVariable("d5q01PlayCutscene", 0);
					RemoveActorsFromVector(m_BurahPatrols);
					
					AddQuestActor("quest_d5_01_cutscene");
				}
			}
		}
		else if (name == "cutscene_end") {
			object scene;
			@GetSceneByName(scene, "factory");

			m_BurahPatrols->add(SpawnActor(scene, "pt_d5q01_patrol_corpse1", "pers_patrool", "dummy_dead_b.xml"));
			m_BurahPatrols->add(SpawnActor(scene, "pt_d5q01_patrol_corpse2", "pers_patrool", "dummy_dead_b.xml"));
			m_BurahPatrols->add(SpawnActor(scene, "pt_d5q01_grabitel_corpse1", "pers_grabitel", "dummy_dead_b.xml"));
			m_BurahPatrols->add(SpawnActor(scene, "pt_d5q01_grabitel_corpse2", "pers_grabitel", "dummy_dead_b.xml"));

			m_BurahPatrols->add(SpawnActor(scene, "pt_d5q01_patrol_survived", "pers_patrool", "d5q01_PatrolCS.xml"));
		}
		else if (name == "burah_free") {
			float fTime;
			@GetGameTime(fTime);
			if (fTime >= 4 * 24 + 20)
				PutBody();
			else
				@SetTimeEvent(0, 4 * 24 + 20);
			@Trigger(m_Burah, "cleanup");
			LockDoorActor(c_strOutdoorDoor, true);
		}
		else if (name == "factory_fight") {
			LockDoorActor(c_strIndoorDoor, true);
			TriggerActorsInVector(m_BurahPatrols, "attack");
			@PlaySound("door_close");
			PlayerModReputation(GetPlayerActor(), -0.25);
		}
		else if (name == "dead") {
			PlayerModReputation(GetPlayerActor(), -0.25);
			int iCount;
			m_BurahPatrols->size(iCount);
			int i;
			for (i = 0; i < iCount; ++i) {
				object actor;
				m_BurahPatrols->get(actor, i);
				bool bDead;
				actor->IsDead(bDead);
				if (!bDead)
					break;
			}
			if (i == iCount) {
				LockDoorActor(c_strIndoorDoor, false);
			}
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("d5q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				PreCleanup();
			}
			Cleanup();
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Fail(void) {
		@SetVariable("d5q01", c_iQuestFailed);
		PreCleanup();
	}

	void Completed(void) {
		@SetVariable("d5q01", c_iQuestCompleted);
		PreCleanup();
	}
	
	void OnGameTime(int id, float fTime) {
		@ReleaseTimeEvent(0);
		PutBody();
	}
	
	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
	
	void PutBody(void) {
		object scene;
		@GetMainOutdoorScene(scene);
		@AddActor(m_Girl, "d5q01_corpse_girl", scene, [0, 0, 0], [0, 0, 1], "d5q01_girl_corpse.xml");
		@AddActor(m_Corpse1, "d5q01_corpse1", scene, [0, 0, 0], [0, 0, 1], "d5q01_corpse.xml");
		@AddActor(m_Corpse2, "d5q01_corpse2", scene, [0, 0, 0], [0, 0, 1], "d5q01_corpse.xml");
	}
	
	void PreCleanup(void) {
		if (m_Burah)
			@Trigger(m_Burah, "cleanup");
		if (m_Girl)
			@Trigger(m_Girl, "cleanup");
		if (m_Corpse1)	
			@Trigger(m_Corpse1, "cleanup");
		if (m_Corpse2)	
			@Trigger(m_Corpse2, "cleanup");
		
		LockMovingDoor(c_strBurahDoor, false);
		TriggerActorsInVector(m_BurahPatrols, "cleanup"); m_BurahPatrols = null;
		LockDoorActor(c_strOutdoorDoor, true);
		@SetVariable("d5q01PlayCutscene", 0);
		@ReleaseTimeEvent(0);
	}

	void Cleanup(void) {
		disable OnTrigger;
		disable OnGameTime;
		RemoveStationaryActorsFromVector(m_STGuards);
		@RemoveActor(self());
	}
}
