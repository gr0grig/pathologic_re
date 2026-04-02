include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Light, m_Fire;
	var object m_Diary;
	var object m_Agony1, m_Agony2;
	var bool m_bCrypt;

	void init(void) {
		super.init(6);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_grave") {
			object scene;
			@GetSceneByName(scene, "crypt2");
			m_Diary = SpawnActorByType(scene, "pt_b6q03_diary", "scripted_container", "b6q03_item_diary.xml");
			@GetMainOutdoorScene(scene);
			@AddActor(m_Light, "b6q03_light_fire", scene, [0, 0, 0], [0, 0, 1], "light_fire.xml");
			m_Fire = SpawnActorByType(scene, "pt_b6q03_fire", "scripted", "fire.xml");
			m_Agony1 = SpawnActor(scene, "pt_b6q03_agony1", "pers_worker", "agony1_man.xml");
			m_Agony2 = SpawnActor(scene, "pt_b6q03_agony2", "pers_woman", "agony1_woman.xml");
		}
		else if (name == "crypt2_load") {
			//if (!m_bCrypt)
			//	@PlaySound("explode");
		}
		else if (name == "crypt2_unload") {
			if (!m_bCrypt) {
				m_bCrypt = true;

				object scene;
				@GetMainOutdoorScene(scene);
				SpawnActor(scene, "pt_b6q03_bomber1", "pers_bomber", "b6q03_bomber.xml");
				SpawnActor(scene, "pt_b6q03_bomber2", "pers_bomber", "b6q03_bomber.xml");
				SpawnActor(scene, "pt_b6q03_diseased1", "pers_vaxxabit", "vaxxabit_d.xml");
				SpawnActor(scene, "pt_b6q03_diseased2", "pers_vaxxabit", "vaxxabit_d.xml");
				SpawnActor(scene, "pt_b6q03_diseased3", "pers_vaxxabitka", "vaxxabitka_d.xml");
				SpawnActor(scene, "pt_b6q03_diseased4", "pers_vaxxabitka", "vaxxabitka_d.xml");
			}
		}
		else if (name == "diary_taken") {
			AddDiaryEntry_b6q03BookGotoMaria();
			@PlaySound("explode");
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}
	
	void Limit(void) {
		int iState;
		@GetVariable("b6q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b6q03", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b6q03", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		if (m_Fire)
			@RemoveActor(m_Fire);
		if (m_Light)
			@RemoveActor(m_Light);
		if (m_Diary)
			@Trigger(m_Diary, "cleanup");
		if (m_Agony1)
			@Trigger(m_Agony1, "cleanup");
		if (m_Agony2)
			@Trigger(m_Agony2, "cleanup");
		
		@RemoveActor(self());
	}
}
