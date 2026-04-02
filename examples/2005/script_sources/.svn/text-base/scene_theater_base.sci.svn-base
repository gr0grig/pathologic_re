include std.sci

bool IsToPlayMovie() 
{
	int iHour = GetHour(); 
	if (iHour < 6) {
		int iDay = GetDay();
		if (iDay > 1) {
			int iPerformance;
			@GetVariable("Performance" + iDay, iPerformance);
			return (iPerformance == 0);
		}
	}
	return false;
}

task TTheaterBase
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnLoad(void) {
		if (IsToPlayMovie()) {
			int iDay = GetDay();
			int iPerformance;
			@SetVariable("Performance" + iDay, 1);
			
			object actor;
			@AddActor(actor, "cs_mask_" + c_strCutsceneType, self(), [0, 0, 0], [0, 0, 1], "cs_mask_" + c_strCutsceneType + ".xml");
			actor->ForceGeometryLoad();

			object player = GetPlayerActor();

			IncrementNoAccess(player);
			@CameraPlay("cs_mask_" + c_strCutsceneType + (iDay - 1) + ".mot");
			@PlayGlobalMusic("nightmask" + (iDay - 1) + ".ogg");
			@CameraWaitForPlayFinish();
			@PlayGlobalMusic("");
			DecrementNoAccess(player);
			@CameraSwitchToNormal();
			
			@RemoveActor(actor);

			@PlayMovie("NightMasks" + (iDay - 1) + ".wmv");
		}
	}
}
