include std.sci
include quest_limited.sci
include bgame.sci

const int c_iMariaTimerID = 1;

bool IsInKabak(void) {
	object cur_scene;
	@GetActiveScene(cur_scene);
	
	object kabak_scene;
	@GetSceneByName(kabak_scene, "shouse1_kabak");
	return (kabak_scene == cur_scene);
}

maintask TQuest : TQuestLimited
{
	var object m_Petr, m_Maria;
	var bool m_bBadPetrInit, m_bBadMariaInit;
	void init(void) {
		object scene;
		@GetSceneByName(scene, "house_petr");
		@Trigger(scene, "nopetr");
		
		@GetSceneByName(scene, "cot_maria");
		@Trigger(scene, "nomaria");
		
		if (IsInKabak()) {
			@Trace("bad petr init");
			m_bBadPetrInit = true;	
		}
		else {
			object scene;
			@GetSceneByName(scene, "shouse1_kabak");
			m_Petr = SpawnActor(scene, "pt_b2q03_petr", "NPC_Petr", "b2q03_petr.xml");
		}
		super.init(2);
	}
	
	void OnGameTime(int id, float fTime) {
		if (id == c_iMariaTimerID) {
			if (IsInKabak()) {
				@Trace("bad maria init");
				m_bBadMariaInit = true;
			}
			else {
				object scene;
				@GetSceneByName(scene, "shouse1_kabak");
				m_Maria = SpawnActor(scene, "pt_b2q03_maria", "NPC_Maria", "b2q03_maria.xml");
			}
		}
		else {
			super.OnGameTime(id, fTime);
		}
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_maria") {
			if (GetHour() < 22) {
				float fTime;
				@GetGameTime(fTime);
				fTime += 0.5;
				@SetTimeEvent(c_iMariaTimerID, fTime);			
			}
		}
		else
		if (name == "kabak_unload") {
			if (m_bBadPetrInit) {
				m_bBadPetrInit = false;
				object scene;
				@GetSceneByName(scene, "shouse1_kabak");
				m_Petr = SpawnActor(scene, "pt_b2q03_petr", "NPC_Petr", "b2q03_petr.xml");
			}
			if (m_bBadMariaInit) {
				m_bBadMariaInit = false;
				object scene;
				@GetSceneByName(scene, "shouse1_kabak");
				m_Maria = SpawnActor(scene, "pt_b2q03_maria", "NPC_Maria", "b2q03_maria.xml");
			}
		}
		else 
		if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}
	
	void Limit(void) {
		int iState;
		@GetVariable("b2q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b2q03", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b2q03", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		disable OnGameTime;
		
		if (m_Petr)
			@Trigger(m_Petr, "cleanup");
			
		if (m_Maria)
			@Trigger(m_Maria, "cleanup");
			
		object scene;
		@GetSceneByName(scene, "house_petr");
		@Trigger(scene, "petr");
		
		@GetSceneByName(scene, "cot_maria");
		@Trigger(scene, "maria");
		
		@RemoveActor(self());
	}
}
