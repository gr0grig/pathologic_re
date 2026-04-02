include std.sci

maintask TCutscene
{
	void init(void) {
		object scene;
		@GetSceneByName(scene, "sobor");

		object aglaja, birdmask;
		@AddActor(aglaja, "cs_d7q01_Aglaja", scene, [0, 0, 0], [0, 0, 1], "cs_d7q01_Aglaja.xml");
		@AddScriptedActor(birdmask, "cs_d7q01_birdmask", "cs_play_all.bin", scene, [0, 0, 0]);
		
		object player = GetPlayerActor();

		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_d7q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();
		
		@RemoveActor(birdmask);
		@RemoveActor(aglaja);

		@CameraSwitchToNormal();
		
		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
