include std.sci

maintask TCutscene
{
	void init(void) {
		object scene;
		@GetMainOutdoorScene(scene);
		
		object sold1 = SpawnScriptedActor(scene, "cs_k11q01_soldat1", "cs_play_all.bin");
		object sold2 = SpawnScriptedActor(scene, "cs_k11q01_soldat2", "cs_play_all.bin");
		object sold3 = SpawnScriptedActor(scene, "cs_k11q01_soldat3", "cs_play_all.bin");
		object sold4 = SpawnScriptedActor(scene, "cs_k11q01_soldat4", "cs_play_all.bin");
		object sold5 = SpawnScriptedActor(scene, "cs_k11q01_soldat5", "cs_play_all.bin");
		object sold6 = SpawnScriptedActor(scene, "cs_k11q01_soldat6", "cs_play_all.bin");
		object sold7 = SpawnScriptedActor(scene, "cs_k11q01_soldat7", "cs_play_all.bin");
		object sold8 = SpawnScriptedActor(scene, "cs_k11q01_soldat8", "cs_play_all.bin");
		object sold9 = SpawnScriptedActor(scene, "cs_k11q01_soldat9", "cs_play_all.bin");
		object sold10 = SpawnScriptedActor(scene, "cs_k11q01_soldat10", "cs_play_all.bin");
		
		object klara = SpawnActor(scene, "cs_k11q01_klara", "cs_k11q01_klara.xml");
		
		sold1->ForceGeometryLoad();
		sold2->ForceGeometryLoad();
		sold3->ForceGeometryLoad();
		sold4->ForceGeometryLoad();
		sold5->ForceGeometryLoad();
		sold6->ForceGeometryLoad();
		sold7->ForceGeometryLoad();
		sold8->ForceGeometryLoad();
		sold9->ForceGeometryLoad();
		sold10->ForceGeometryLoad();
		
		klara->ForceGeometryLoad();

		object player = GetPlayerActor();
		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_k11q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();
		@CameraSwitchToNormal();
		
		@RemoveActor(sold1);
		@RemoveActor(sold2);
		@RemoveActor(sold3);
		@RemoveActor(sold4);
		@RemoveActor(sold5);
		@RemoveActor(sold6);
		@RemoveActor(sold7);
		@RemoveActor(sold8);
		@RemoveActor(sold9);
		@RemoveActor(sold10);
		@RemoveActor(klara);

		TriggerActor("quest_k11_01", "cutscene_end");
		
		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
