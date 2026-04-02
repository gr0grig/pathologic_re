include std.sci
include quest_limited.sci
include dgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Group, m_Dobermans, m_MladVlad;
	var bool m_bMladIsDead;
	
	void init(void) {
	
		@CreateObjectVector(m_Dobermans);
	
		object scene;
		@GetMainOutdoorScene(scene);
		m_Dobermans->add(SpawnStationaryActor(scene, "pt_d9q01_doberman1", "pers_doberman", "d11q05_doberman.xml"));
		m_Dobermans->add(SpawnStationaryActor(scene, "pt_d9q01_doberman2", "pers_doberman", "d11q05_doberman.xml"));
		m_Dobermans->add(SpawnStationaryActor(scene, "pt_d9q01_doberman3", "pers_doberman", "d11q05_doberman.xml"));
	
		m_Group = CreateObjectVector();
		
		int iVal;
		@GetVariable("d8q01BigVladIsVictim", iVal);
		if (!iVal) {
			m_bMladIsDead = true;
			object scene;
			@GetSceneByName(scene, "termitnik_mat");
			m_MladVlad = SpawnActor(scene, "pt_d11q05_mladvlad", "NPC_MladVlad", "d11q05_mladvlad.xml");
		}
		
		super.init(11);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "teleport") {
			object player;
			@FindActor(player, "player");
			if (player) {
				object scene;
				@GetSceneByName(scene, "mnogogrannik_han");
				Vector vPos, vDir;
				bool bFound;
				scene->GetLocator("pt_d9q01_teleport", bFound, vPos, vDir);
				@Teleport(player, scene, vPos, vDir);
			}
		}
		else		
		if (name == "place_enemy_before") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Group->add(SpawnStationaryActor(scene, "pt_d11q05_grabitel_before1", "pers_grabitel", "d11q05_grabitel.xml"));
			m_Group->add(SpawnStationaryActor(scene, "pt_d11q05_grabitel_before2", "pers_grabitel", "d11q05_grabitel.xml"));
			m_Group->add(SpawnStationaryActor(scene, "pt_d11q05_worker_before1", "pers_worker", "d11q05_worker.xml"));
			m_Group->add(SpawnStationaryActor(scene, "pt_d11q05_worker_before2", "pers_worker", "d11q05_worker.xml"));
		}
		else
		if (name == "place_enemy_after") {
			object scene;
			@GetMainOutdoorScene(scene);
			m_Group->add(SpawnStationaryActor(scene, "pt_d11q05_grabitel_after1", "pers_grabitel", "d11q05_grabitel_serum.xml"));
			m_Group->add(SpawnStationaryActor(scene, "pt_d11q05_grabitel_after2", "pers_grabitel", "d11q05_grabitel.xml"));
			m_Group->add(SpawnStationaryActor(scene, "pt_d11q05_unosha_after1", "pers_unosha", "d11q05_worker.xml"));
			m_Group->add(SpawnStationaryActor(scene, "pt_d11q05_unosha_after2", "pers_unosha", "d11q05_worker.xml"));
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
		@GetVariable("d11q05", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
		Cleanup();
	}
	
	void Fail(void) {
		@SetVariable("d11q05", c_iQuestFailed);
		PreCleanup();
	}
	
	void Completed(void) {
		@SetVariable("d11q05", c_iQuestCompleted);
		PreCleanup();
	}
	
	void PreCleanup(void) {
		if (m_MladVlad)
			@Trigger(m_MladVlad, "cleanup");
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		PreCleanup();
		
		RemoveStationaryActorsFromVector(m_Group);
		RemoveStationaryActorsFromVector(m_Dobermans);

		@RemoveActor(self());
	}
}
