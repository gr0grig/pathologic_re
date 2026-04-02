include std.sci
include game_ext.sci

maintask TWorld
{
	var object m_Scene;

	void init(void) {
		@SetSaveProperty(0, c_iBranchIntro);

		PlacePlayer();
		@sync();
		@PlaySharedSound("intro");
		
		@Sleep(5640 / 30.0);
		TriggerLights();
		
		for (;;) {
			@Hold();
		}
	}
	
	void PlacePlayer(void) {
		object player;
		@FindActor(player, "player");
		@GetSceneByName(m_Scene, "intro_theater");
		if (!m_Scene) {
			@Trace("Intro scene not found");
			return;
		}
		bool bFound;
		Vector vPos, vDir;
		m_Scene->GetLocator("birth", bFound, vPos, vDir);
		if (bFound) {
			@Teleport(player, m_Scene, vPos, vDir);
		}
	}
	
	void OnTrigger(string name) {
		if (name == "exit") {
			ProcessExit();
		}
	}
	
	void ProcessExit(void) {
		@Trace("exiting");
		@RemoveWorld();
		@ActivateInitGameOverride("choose_pers.xml");
	}
	
	void TriggerLights(void) {
		object lights;
		m_Scene->GetGroupActors(lights, 0);
		object light;
		bool bMore;
		while(lights->Next(bMore, light), bMore) {
			if (light) {
				@Trigger(light, "off");
			}
		}
	}
}
