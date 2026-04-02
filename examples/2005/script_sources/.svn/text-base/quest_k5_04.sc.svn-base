include std.sci
include quest_limited.sci
include kgame.sci

maintask TQuest : TQuestLimited
{
	var object m_SoborGuards, m_SoborPeople;
	var object m_Crowd1, m_Crowd2;

	void init(void) {
		LockDoorActor("sobor@door1", true);
 		//@SetVariable("k5q04", c_iQuestEnabled); as quest is spawned by timeline
 		
 		@CreateObjectVector(m_SoborGuards);
 		@CreateObjectVector(m_SoborPeople);
 		
 		object scene;
 		@GetMainOutdoorScene(scene);
 		m_SoborGuards->add(SpawnStationaryActor(scene, "pt_k5q04_sobor_patrol1", "pers_patrool", "k5q04_sobor_guard_patrol.xml"));
 		m_SoborGuards->add(SpawnStationaryActor(scene, "pt_k5q04_sobor_wasted", "pers_wasted_male", "k5q04_sobor_guard_wasted.xml"));
 		m_SoborGuards->add(SpawnStationaryActor(scene, "pt_k5q04_sobor_patrol2", "pers_patrool", "k5q04_sobor_guard_patrol.xml"));
 		
 		@GetSceneByName(scene, "cot_eva");
 		@Trigger(scene, "danko");
 		
		super.init(5);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "sobor_load") {
			AddDiaryEntry_k5q04SoborClear();
			
			@SetVariable("k5q04SoborVisit", 1);

			object scene;
			@GetSceneByName(scene, "sobor");
			@AddActor(m_Crowd1, "k5q04_crowd1", scene, [0, 0, 0], [0, 0, 1], "static_keep.xml");			
			@Trace(m_Crowd1);
			@AddActor(m_Crowd2, "k5q04_crowd2", scene, [0, 0, 0], [0, 0, 1], "static_keep.xml");			
			@Trace(m_Crowd2);
		
			m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people1", "pers_woman", "k5q04_sobor_woman.xml"));
			m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people2", "pers_nudegirl", "k5q04_sobor_nudegirl.xml"));
			m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people3", "pers_worker", "k5q04_sobor_worker.xml"));
			m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people4", "pers_boy", "k5q04_sobor_boy.xml"));
			m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people5", "pers_salesman", "k5q04_sobor_salesman.xml"));
			m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people6", "pers_woman", "k5q04_sobor_woman.xml"));
			m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people7", "pers_worker", "k5q04_sobor_worker.xml"));
			m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people8", "pers_unosha", "k5q04_sobor_unosha.xml"));
			m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people9", "pers_girl", "k5q04_sobor_girl.xml"));
			//m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people10", "pers_wasted_girl", "k5q04_sobor_wasted_woman.xml"));
			m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people10", "pers_worker", "k5q04_sobor_worker.xml"));
			m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people11", "pers_woman", "k5q04_sobor_woman.xml"));
			m_SoborPeople->add(SpawnActor(scene, "pt_k5q04_people12", "pers_unosha", "k5q04_sobor_unosha.xml"));
		}
		else
		if (name == "sobor_unload") {
			RemoveActorsFromVector(m_SoborPeople);
			LockDoorActor("sobor@door1", true);
			@Trace(m_Crowd1);
			@RemoveActor(m_Crowd1);
			@Trace(m_Crowd2);
			@RemoveActor(m_Crowd2);
		}
		else
		if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("k5q04", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
		
		Cleanup();
	}

	void Fail(void) {
		@SetVariable("k5q04", c_iQuestFailed);
		PreCleanup();
	}

	void Completed(void) {
		@SetVariable("k5q04", c_iQuestCompleted);
		PreCleanup();
	}
	
	void PreCleanup(void) {
	}

	void Cleanup(void) {
		disable OnTrigger;
		RemoveStationaryActorsFromVector(m_SoborGuards);
		LockDoorActor("sobor@door1", true);
		
		object scene;
 		@GetSceneByName(scene, "cot_eva");
 		@Trigger(scene, "nodanko");
		
		@RemoveActor(self());
	}
}
