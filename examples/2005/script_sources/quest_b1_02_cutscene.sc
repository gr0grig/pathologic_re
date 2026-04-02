include std.sci

maintask TCutscene
{
	void init(void) {
		object scene;
		@GetSceneByName(scene, "storojka");
		object actor = SpawnScriptedActor(scene, "cs_b1q02_worker", "cs_play_all.bin");

		object player = GetPlayerActor();
		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_b1q02.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		@CameraSwitchToNormal();
		DisableSepia();
		
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator("pt_cs_player", bFound, vPos, vDir);
		@Teleport(player, scene, vPos, vDir);
		
		@RemoveActor(actor);

		SpawnActor(scene, "pt_b1q02_worker", "pers_worker", "b1q02_worker.xml");
		
		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
