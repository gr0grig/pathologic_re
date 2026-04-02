include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Aglaja, m_Dobermans, m_Bons, m_Follower, m_Spi4ka, m_Girl;
	var int iDobermanDeaths;
	
	void init(void) {
		m_Dobermans = CreateObjectVector();
		m_Bons = CreateObjectVector();
	
		object scene;
		@GetSceneByName(scene, "sobor");
		@Trigger(scene, "noaglaja");
		
		@GetSceneByName(scene, "cot_kapella");
		
		object cur_scene;
		@GetActiveScene(cur_scene);
		if (cur_scene == scene) {
			// very bad case, player is inside kapella house, quest will handle this situation,
			// but will be not so interesting
			@SetVariable("b9q03BadInit", 1);
		}
		else
			m_Aglaja = SpawnActor(scene, "pt_b9q03_aglaja", "NPC_Aglaja", "b9q03_aglaja.xml");
			
		super.init(9);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_house_spi4ka") {
			object scene;
			@GetSceneByName(scene, "house_spi4ka");
			@Trigger(scene, "nospi4ka");
			
			m_Dobermans->add(SpawnActor(scene, "pt_b9q03_doberman1", "pers_doberman", "b9q03_doberman.xml"));
			m_Dobermans->add(SpawnActor(scene, "pt_b9q03_doberman2", "pers_doberman", "b9q03_doberman.xml"));
			
			if (m_Aglaja)
				@Trigger(m_Aglaja, "cleanup");
				
			@GetSceneByName(scene, "sobor");
			@Trigger(scene, "aglaja");
		}
		else if (name == "doberman_attack") {
			TriggerActorsInVector(m_Dobermans, "attack");
			LockDoorActor("ihouse_spi4ka@door1", true);
			LockDoorActor("ihouse_spi4ka@door2", true);
			@PlaySound("door_close");
		}
		else if (name == "doberman_dead") {
			iDobermanDeaths++;
			int iSize;
			m_Dobermans->size(iSize);
			if (iSize == iDobermanDeaths) {
				LockDoorActor("ihouse_spi4ka@door1", false);
				LockDoorActor("ihouse_spi4ka@door2", false);
				@PlaySound("door_open");
			}
		}
		else if (name == "place_follower") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Follower = SpawnActor(scene, "pt_b9q03_follower", "pers_boy", "b9q03_follower.xml");
		}
		else if (name == "init_bonefires") {
			object scene;
			@GetMainOutdoorScene(scene);
			
			// bonfire 1
			m_Bons->add(SpawnActor(scene, "pt_b9q03_b1_doberman1", "pers_doberman", "b9q03_e_doberman.xml"));
			m_Bons->add(SpawnActor(scene, "pt_b9q03_b1_morlok1", "pers_morlok", "b9q03_e_morlok.xml"));
			m_Bons->add(SpawnActor(scene, "pt_b9q03_b1_morlok2", "pers_morlok", "b9q03_e_morlok.xml"));
			
			// bonfire 2
			m_Bons->add(SpawnActor(scene, "pt_b9q03_b2_doberman1", "pers_doberman", "b9q03_e_doberman.xml"));
			m_Bons->add(SpawnActor(scene, "pt_b9q03_b2_grabitel1", "pers_grabitel", "b9q03_e_grabitel.xml"));
			m_Bons->add(SpawnActor(scene, "pt_b9q03_b2_grabitel2", "pers_grabitel", "b9q03_e_grabitel.xml"));
			
			// bonfire 3
			m_Bons->add(SpawnActor(scene, "pt_b9q03_b3_doberman1", "pers_doberman", "b9q03_e_doberman.xml"));
			m_Bons->add(SpawnActor(scene, "pt_b9q03_b3_wastedmale1", "pers_wasted_male", "b9q03_e_wasted_male.xml"));
			m_Bons->add(SpawnActor(scene, "pt_b9q03_b3_hunter1", "pers_hunter", "b9q03_e_hunter.xml"));
			
			// bonfire 4
			m_Bons->add(SpawnActor(scene, "pt_b9q03_b4_doberman1", "pers_doberman", "b9q03_e_doberman.xml"));
			m_Bons->add(SpawnActor(scene, "pt_b9q03_b4_doberman2", "pers_doberman", "b9q03_e_doberman.xml"));
			m_Bons->add(SpawnActor(scene, "pt_b9q03_b4_doberman3", "pers_doberman", "b9q03_e_doberman.xml"));
		}
		else
		if (name == "bonfire_burn") {
			int iCount;
			@GetVariable("b9q03BonefiresCount", iCount);
			if (iCount == 0) {
				AddDiaryEntry_b9q03Bonefires3Left();
			}
			else
			if (iCount == 1) {
				AddDiaryEntry_b9q03Bonefires2Left();
			}
			else
			if (iCount == 2) {
				AddDiaryEntry_b9q03Bonefires1Left();
			}
			else
			if (iCount == 3) {
				AddDiaryEntry_b9q03BonefiresDone();
				
				object scene;
				@GetMainOutdoorScene(scene);
				m_Girl = SpawnActor(scene, "pt_b9q03_girl", "pers_girl", "b9q03_girl.xml");
				
				@GetSceneByName(scene, "cot_kapella");
				m_Spi4ka = SpawnActor(scene, "pt_b9q03_spi4ka", "NPC_Spi4ka", "b9q03_spi4ka.xml");
				
				LockDoorActor("house_spi4ka@door1", true);
				LockDoorActor("house_spi4ka@door2", true);
				
				if (m_Follower)
					@Trigger(m_Follower, "cleanup");
			}
			
			iCount++;
			@SetVariable("b9q03BonefiresCount", iCount);
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
		@GetVariable("b9q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b9q03", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b9q03", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		object scene;
		@GetSceneByName(scene, "sobor");
		@Trigger(scene, "aglaja");
		
		@GetSceneByName(scene, "house_spi4ka");
		@Trigger(scene, "spi4ka");
		
		TriggerActorsInVector(m_Dobermans, "cleanup");
		TriggerActorsInVector(m_Bons, "cleanup");
		
		if (m_Follower)
			@Trigger(m_Follower, "cleanup");
		
		if (m_Aglaja)
			@Trigger(m_Aglaja, "cleanup");
			
		if (m_Spi4ka)
			@Trigger(m_Spi4ka, "cleanup");
			
		if (m_Girl)
			@Trigger(m_Girl, "cleanup");
			
		LockDoorActor("ihouse_spi4ka@door1", false);
		LockDoorActor("ihouse_spi4ka@door2", false);
		
		LockDoorActor("house_spi4ka@door1", false);
		LockDoorActor("house_spi4ka@door2", false);
		
		@RemoveActor(self());
	}
}
