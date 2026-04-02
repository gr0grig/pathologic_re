include std.sci

maintask TCutscene
{
	void init(void) {
		object scene;
		@GetSceneByName(scene, "warehouse_gangster");
		
		object britva;
		@AddScriptedActor(britva, "cs_k4q01_grabitel", "cs_play_all.bin", scene, [0, 0, 0]);
		britva->ForceGeometryLoad();
		
		object player;
		@FindActor(player, "player");

		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_k4q01_camera.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();

		@RemoveActor(britva);
		@CameraSwitchToNormal();
		
		TriggerActor("quest_k4_01", "cutscene_end");

		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
