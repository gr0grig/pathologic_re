include std.sci

maintask TCutscene
{
	void init(void) {
		object scene;
		@GetMainOutdoorScene(scene);

		object burah, whitemask;
		
		burah = SpawnActor(scene, "cs_b10q01_burah", "cs_b10q01_burah.xml");
		whitemask = SpawnScriptedActor(scene, "cs_b10q01_whitemask", "cs_play_all.bin");
		
		burah->ForceGeometryLoad();
		whitemask->ForceGeometryLoad();

		object player = GetPlayerActor();
		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_b10q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();
		@CameraSwitchToNormal();
		
		@RemoveActor(burah);
		@RemoveActor(whitemask);
		
		TriggerActor("quest_b10_01", "place_butchers");
	
		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
