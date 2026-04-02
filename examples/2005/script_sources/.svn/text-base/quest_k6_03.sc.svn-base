include std.sci
include quest_limited.sci
include kgame.sci
include points_follower.sci

const string strAlbinosPathPrefix = "pt_k6q03_albinos_path";
const int c_iTimeEventPlaceAlbinos = 1;
const int c_iDay = 6;

maintask TQuest : TQuestLimited
{
	var object m_Albinos, m_Bombers;

	void init(void) {
		@CreateObjectVector(m_Bombers);
		
		object scene;
		@GetMainOutdoorScene(scene);
		
		for (int i = 0; i < 5; ++i) {
			m_Bombers->add(SpawnStationaryActor(scene, "pt_k6q03_bomber" + (i + 1), "pers_bomber", "k6q03_bomber.xml"));
		}
	
 		@SetVariable("k6q03", c_iQuestEnabled);
 		@SetTimeEvent(c_iTimeEventPlaceAlbinos, 21 + (c_iDay - 1) * 24);
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
			m_Albinos = SpawnStationaryActor(scene, strAlbinosPathPrefix + (GetLastPathPoint(strAlbinosPathPrefix) + 1), "pers_albinos", "k6q03_albinos.xml");
		}
		else {
			int iPoint = GetBestSpawnPoint(strAlbinosPathPrefix);
			@Trace(iPoint);
			@SetVariable(strAlbinosPathPrefix, iPoint);
			m_Albinos = SpawnStationaryActorForce(scene, strAlbinosPathPrefix + (iPoint + 1), "pers_albinos", "k6q03_albinos.xml");
		}
	}	

	void Limit(void) {
		int iState;
		@GetVariable("k6q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("k6q03", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k6q03", c_iQuestCompleted);
		Cleanup();
	}

	void Cleanup(void) {
		disable OnTrigger;
		if (m_Albinos)
			m_Albinos->Remove();
			
		RemoveStationaryActorsFromVector(m_Bombers);
			
		@RemoveActor(self());
	}
}
