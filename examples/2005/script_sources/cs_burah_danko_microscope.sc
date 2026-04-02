include std.sci

maintask TCutscene
{
	void init(void) {
		object scene;
		@GetSceneByName(scene, "cot_eva");

		object danko;
		@AddActor(danko, "cs_burah_danko_microscope", scene, [0, 0, 0], [0, 0, 1], "cs_burah_danko_microscope.xml");
		
		object player = GetPlayerActor();

		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_burah_danko_microscope.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();
		
		@RemoveActor(danko);

		@CameraSwitchToNormal();
		
		TriggerActor("quest_b2_01", "cutscene_end");
		TriggerActor("quest_b3_01", "cutscene_end");
		TriggerActor("quest_b4_01", "cutscene_end");
		TriggerActor("quest_b5_01", "cutscene_end");
		TriggerActor("quest_b6_01", "cutscene_end");
		
		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
