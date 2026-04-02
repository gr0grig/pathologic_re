include std.sci

maintask TCutscene
{
	void init(void) {
		object scene;
		@GetSceneByName(scene, "uprava_prison");
		
		object p1, p2, p3, p4, p5;
		@AddScriptedActor(p1, "cs_uprava_prisoner1", "cs_play_all.bin", scene, [0, 0, 0]);
		@AddScriptedActor(p2, "cs_uprava_prisoner2", "cs_play_all.bin", scene, [0, 0, 0]);
		@AddScriptedActor(p3, "cs_uprava_prisoner3", "cs_play_all.bin", scene, [0, 0, 0]);
		@AddScriptedActor(p4, "cs_uprava_prisoner4", "cs_play_all.bin", scene, [0, 0, 0]);
		@AddScriptedActor(p5, "cs_uprava_prisoner5", "cs_play_all.bin", scene, [0, 0, 0]);
		p1->ForceGeometryLoad();
		p2->ForceGeometryLoad();
		p3->ForceGeometryLoad();			
		p4->ForceGeometryLoad();			
		p5->ForceGeometryLoad();
		
		object player;
		@FindActor(player, "player");

		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_uprava_prison1.mot");
		@PlayGlobalMusic("cs_d5_uprava.ogg");
		@CameraWaitForPlayFinish();
		@PlayGlobalMusic("");
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();

		@RemoveActor(p1);
		@RemoveActor(p2);
		@RemoveActor(p3);
		@RemoveActor(p4);
		@RemoveActor(p5);
		@CameraSwitchToNormal();

		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
