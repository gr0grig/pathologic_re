include std.sci
include quest_limited.sci
include dgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Body, m_Salesman, m_Gorbun;

	void init(void) {
		@SetVariable("d1q02", c_iQuestEnabled);
		object scene;
		@GetSceneByName(scene, "cot_anna");
		@AddScriptedActor(m_Body, "cot_anna_corpse", "actor_disp.bin", scene, [0, 0, 0]);
		
		@GetSceneByName(scene, "storojka");
		@Trigger(scene, "nolaska");
		super.init(1);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_storojka") {
			object scene;
			@GetSceneByName(scene, "storojka");
			m_Salesman = SpawnActor(scene, "pt_d1q02_salesman", "pers_salesman", "d1q02_salesman.xml");
			m_Gorbun = SpawnActor(scene, "pt_d1q02_gorbun", "pers_gorbun", "d1q02_gorbun.xml");
		}
		else
		if (name == "completed") {
			Completed();
		} else if (name == "fail") {
			Fail();
		}		
	}
	
	void Limit(void) {
		int iState;
		@GetVariable("d1q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
		Cleanup();
	}
	
	void Fail(void) {
		@SetVariable("d1q02", c_iQuestFailed); // special case, we need cleanup only on limit
		PreCleanup();
	}
	
	void Completed(void) {
		@SetVariable("d1q02", c_iQuestCompleted); // special case, we need cleanup only on limit
		PreCleanup();
	}
	
	void PreCleanup(void) {
		disable OnTrigger;
		if (m_Body) {
			@Trigger(m_Body, "cleanup");
		}
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		object scene;
		@GetSceneByName(scene, "storojka");
		@Trigger(scene, "laska");
		
		if (m_Gorbun) {
			@Trigger(m_Gorbun, "cleanup");
		}
		if (m_Salesman) {
			@Trigger(m_Salesman, "cleanup");
		}
				
		@RemoveActor(self());
	}
}
