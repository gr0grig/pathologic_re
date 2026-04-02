include std.sci

maintask TCutscene
{
	void init(void) {
		object scene;
		@GetSceneByName(scene, "factory");

		object g1, g2, p1, p2, p3;
		@AddScriptedActor(g1, "cs_factory_grabitel1", "cs_play_all.bin", scene, [0, 0, 0]);
		@AddScriptedActor(g2, "cs_factory_grabitel2", "cs_play_all.bin", scene, [0, 0, 0]);
		@AddScriptedActor(p1, "cs_factory_patrol1", "cs_play_all.bin", scene, [0, 0, 0]);
		@AddScriptedActor(p2, "cs_factory_patrol2", "cs_play_all.bin", scene, [0, 0, 0]);
		@AddScriptedActor(p3, "cs_factory_patrol3", "cs_play_all.bin", scene, [0, 0, 0]);
		p1->ForceGeometryLoad();
		p2->ForceGeometryLoad();
		p3->ForceGeometryLoad();

		object player;
		@FindActor(player, "player");

		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_factory1.mot");
		@PlayGlobalMusic("cs_d5_factory.ogg");
		@CameraWaitForPlayFinish();
		@PlayGlobalMusic("");
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();

		@RemoveActor(g1);
		@RemoveActor(g2);
		@RemoveActor(p1);
		@RemoveActor(p2);
		@RemoveActor(p3);
		
		@CameraSwitchToNormal();

		TriggerActor("quest_d5_01", "cutscene_end");
		
		@RemoveActor(self());
	}	

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
