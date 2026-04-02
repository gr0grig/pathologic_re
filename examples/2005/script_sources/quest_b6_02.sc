include std.sci
include quest_limited.sci
include bgame.sci

maintask TQuest : TQuestLimited
{
	var object m_Klara;
	var object m_Prorok;
	var object m_Fogs;

	void init(void) {
		m_Fogs = CreateObjectVector();
		super.init(6);
	}
	
	void OnTrigger(string name) {
		@Trace(name);
		if (name == "place_klara") {
			object scene;
			@GetSceneByName(scene, "cot_anna");
			m_Klara = SpawnActor(scene, "pt_b6q02_klara", "NPC_Klara", "b6q02_klara.xml");
		}
		else if (name == "init_maze") {
			LockDoorActor("house_vlad@door2", false);
		
			object scene;
			@GetSceneByName(scene, "house_vlad");
			m_Prorok = SpawnActor(scene, "pt_prorok", "pers_krysa", "b6q02_prorok.xml");

			for (int i = 1; ; ++i) {
				bool bFound;
				Vector vPos, vDir;
				scene->GetLocator("pt_fog" + i, bFound, vPos, vDir);
				if (!bFound)
					break;
				object actor;
				@AddActorByType(actor, "fog", scene, vPos, vDir, "fog_stat_indoor.xml");
				m_Fogs->add(actor);
			}
		}
		else if (name == "maze_start") {
			TeleportActor(GetPlayerActor(), "house_vlad", "pt_maze_start");
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
		@GetVariable("b6q02", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}
	
	void Fail(void) {
		@SetVariable("b6q02", c_iQuestFailed);
		Cleanup();
	}
	
	void Completed(void) {
		@SetVariable("b6q02", c_iQuestCompleted);
		Cleanup();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		
		if (m_Klara)
			@Trigger(m_Klara, "cleanup");
		if (m_Prorok)
			@Trigger(m_Prorok, "cleanup");
		TriggerActorsInVector(m_Fogs, "cleanup");
		
		LockDoorActor("house_vlad@door2", true);
		
		@RemoveActor(self());
	}
}
