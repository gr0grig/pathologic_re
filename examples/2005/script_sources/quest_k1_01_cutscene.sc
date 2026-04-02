include std.sci

maintask TCutscene
{
	void init(void) {
		object scene;
		@GetSceneByName(scene, "cot_anna");
		object worker = SpawnScriptedActor(scene, "cs_k1q01_worker", "cs_play_all.bin");
		object klara = SpawnActor(scene, "cs_k1q01_klara", "cs_k1q01_klara.xml");
		worker->ForceGeometryLoad();
		klara->ForceGeometryLoad();

		object player = GetPlayerActor();
		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_k1q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();
		@CameraSwitchToNormal();
		
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator("pt_cs_player", bFound, vPos, vDir);
		@Teleport(player, scene, vPos, vDir);
		
		@RemoveActor(worker);
		@RemoveActor(klara);

		TriggerActor("quest_k1_01", "cutscene_end");
		
		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
