include std.sci
include world_base.sci
include bgame.sci

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
		@SetVariable("branch", c_iBranchBurah);
		@SetSaveProperty(0, c_iBranchBurah);

		PlacePlayer();
		PerformCommonWorldInit();
		PerformCityInit();
		PerformGameInit();
		PerformTimelineInit(GetGameTime());
		AddQuestActor("quest_b1_02");
		@AdvanceGameTime(40.0 / 60.0);
		
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
		scene->GetLocator("pt_birth_Burah", bFound, vPos, vDir);
		if (bFound) {
			@Teleport(player, scene, vPos, vDir);
		}
	}
}
