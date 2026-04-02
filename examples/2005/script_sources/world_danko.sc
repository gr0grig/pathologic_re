include std.sci
include world_base.sci
include dgame.sci

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
		@SetVariable("branch", c_iBranchDanko);
		@SetSaveProperty(0, c_iBranchDanko);

		PlacePlayer();
		PerformCommonWorldInit();
		PerformCityInit();
		PerformGameInit();
		PerformTimelineInit(GetGameTime());
		LockDoorActor("burah_home@door1", true);
		for (;;) {
			@Hold();
		}
	}
	
	void PlacePlayer(void) {
		object player;
		@FindActor(player, "player");
		object scene;
		@GetSceneByName(scene, "cot_eva");
		if (!scene) {
			@Trace("Starting scene not found");
			return;
		}
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator("pt_birth_Danko", bFound, vPos, vDir);
		if (bFound) {
			@Teleport(player, scene, vPos, vDir);
		}
	}
}
