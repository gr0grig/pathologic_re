include std.sci

task THiddenRoomCutscene
{
	void init(void) {
		object scene;
		@GetSceneByName(scene, "hidden_room");

		object girl, boy;
		@AddScriptedActor(girl, "cs_d12_littlegirl_big", "cs_play_all.bin", scene, [0, 0, 0]);
		@AddScriptedActor(boy, "cs_d12_littleboy_big", "cs_play_all.bin", scene, [0, 0, 0]);
		girl->ForceGeometryLoad();
		boy->ForceGeometryLoad();

		object player;
		@FindActor(player, "player");

		SetSepia();
		IncrementNoAccess(player);
		//@RegisterKeyCallback("space");
		@CameraPlay("cs_d12_hidden_room.mot");
		//@PlayGlobalMusic("cs_d5_factory.ogg");
		@CameraWaitForPlayFinish();
		//@PlayGlobalMusic("");
		//@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();

		@RemoveActor(girl);
		@RemoveActor(boy);
		
		@CameraSwitchToNormal();
	}	

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
