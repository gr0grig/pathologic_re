include std.sci

task TTheaterCutsceneBase
{
	void init(void) {
		object scene;
		@GetSceneByName(scene, "theater");

		object m1, m2;
		@AddScriptedActor(m1, "cs_d12_theater_birdmask", "cs_play_all.bin", scene, [0, 0, 0]);
		@AddScriptedActor(m2, "cs_d12_theater_whitemask", "cs_play_all.bin", scene, [0, 0, 0]);
		m1->ForceGeometryLoad();
		m2->ForceGeometryLoad();

		object player;
		@FindActor(player, "player");

		SetSepia();
		IncrementNoAccess(player);
		//@RegisterKeyCallback("space");
		@CameraPlay("cs_d12_theater.mot");
		//@PlayGlobalMusic("1.ogg");
		@CameraWaitForPlayFinish();
		//@PlayGlobalMusic("");
		//@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();

		@RemoveActor(m1);
		@RemoveActor(m2);
		
		@CameraSwitchToNormal();
	}	

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
