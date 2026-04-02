include std.sci
include quest_limited.sci
include kgame.sci
include points_follower.sci

const string strAlbinosPathPrefix = "pt_k5q03_albinos_path";
const int c_iTimeEventPlaceAlbinos = 1;
const int c_iDay = 5;

maintask TQuest : TQuestLimited
{
	var object m_Albinos;
	var object m_Enemies;

	void init(void) {
 		@SetVariable("k5q03", c_iQuestEnabled);

		if (GetHour() < 21) 		
 			@SetTimeEvent(c_iTimeEventPlaceAlbinos, 21 + (c_iDay - 1) * 24);
 		else
 			RespawnAlbinos();
 			
 		@CreateObjectVector(m_Enemies);
 		object scene;
 		@GetMainOutdoorScene(scene);
		m_Enemies->add(SpawnActor(scene, "pt_k5q03_enemy1", "pers_hunter", "k5q03_e_hunter.xml"));
		m_Enemies->add(SpawnActor(scene, "pt_k5q03_enemy2", "pers_hunter", "k5q03_e_hunter.xml"));
		m_Enemies->add(SpawnActor(scene, "pt_k5q03_enemy3", "pers_hunter", "k5q03_e_hunter.xml"));
		m_Enemies->add(SpawnActor(scene, "pt_k5q03_enemy4", "pers_hunter", "k5q03_e_hunter.xml"));
 		
		super.init(c_iDay);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "abinos_unload") {
			RespawnAlbinos();
		}
		else
		if (name == "completed") {
			Completed();
		}
	}
	
	void OnGameTime(int id, float fTime) {
		if (id == c_iTimeEventPlaceAlbinos) {
			@Trace("spawning albinos");
			RespawnAlbinos();
		}
		else {
			super.OnGameTime(id, fTime);
		}
	}
	
	void RespawnAlbinos() {
		object scene, curscene;
		@GetMainOutdoorScene(scene);
		@GetScene(curscene);
		
		if (scene != curscene) {
			@SetVariable(strAlbinosPathPrefix, -1);
			m_Albinos = SpawnStationaryActor(scene, strAlbinosPathPrefix + (GetLastPathPoint(strAlbinosPathPrefix) + 1), "pers_albinos", "k5q03_albinos.xml");
		}
		else {
			int iPoint = GetBestSpawnPoint(strAlbinosPathPrefix);
			@Trace(iPoint);
			@SetVariable(strAlbinosPathPrefix, iPoint);
			m_Albinos = SpawnStationaryActorForce(scene, strAlbinosPathPrefix + (iPoint + 1), "pers_albinos", "k5q03_albinos.xml");
		}
	}	

	void Limit(void) {
		int iState;
		@GetVariable("k5q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("k5q03", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k5q03", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		disable OnGameTime;
		
		TriggerActorsInVector(m_Enemies, "cleanup");
		
		if (m_Albinos)
			m_Albinos->Remove();
		@RemoveActor(self());
	}
}
