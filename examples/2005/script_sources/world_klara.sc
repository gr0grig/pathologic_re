include std.sci
include world_base.sci
include kgame.sci

maintask TWorld
{
	void OnGameTime(int iID, float fTime) {
		if (HandleCityTimer(iID, fTime))
			return;
		if (HandleGameTimer(iID, fTime))
			return;
		HandleTimelineTimer(iID, fTime);
	}
		
	void init(void) {
		@SetVariable("branch", c_iBranchKlara);
		@SetSaveProperty(0, c_iBranchKlara);

		PlacePlayer();
		PerformCommonWorldInit();
		PerformCityInit();
		PerformGameInit();
		PerformTimelineInit(GetGameTime());
		for (;;) {
			@Hold();
		}
	}
	
	void PlacePlayer(void) {
		object player;
		@FindActor(player, "player");
		object scene;
		@GetMainOutdoorScene(scene);
		if (!scene) {
			@Trace("Starting scene not found");
			return;
		}
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator("pt_birth_Klara", bFound, vPos, vDir);
		if (bFound) {
			@Teleport(player, scene, vPos, vDir);
		}
	}
}
