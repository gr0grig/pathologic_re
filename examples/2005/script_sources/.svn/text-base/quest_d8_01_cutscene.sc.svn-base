include std.sci

maintask TCutscene
{
	void init(void) {
		object scene;
		@GetSceneByName(scene, "boiny");
		object actors = CreateObjectVector();
		actors->add(SpawnActor(scene, "cs_d8q01_bakalavr", "cs_d8q01_bakalavr.xml"));
		actors->add(SpawnScriptedActor(scene, "cs_d8q01_butcher1", "cs_play_all.bin"));
		actors->add(SpawnScriptedActor(scene, "cs_d8q01_butcher2", "cs_play_all.bin"));
		actors->add(SpawnScriptedActor(scene, "cs_d8q01_butcher3", "cs_play_all.bin"));
		actors->add(SpawnScriptedActor(scene, "cs_d8q01_butcher4", "cs_play_all.bin"));
		actors->add(SpawnScriptedActor(scene, "cs_d8q01_butcher5", "cs_play_all.bin"));
		
		int nactors;
		actors->size(nactors);
		for (int i = 0; i < nactors; ++i) {
			object actor;
			actors->get(actor, i);
			actor->ForceGeometryLoad();
		}

		actors->add(SpawnScriptedActor(scene, "cs_d8q01_soldier1", "cs_play_all.bin"));
		actors->add(SpawnScriptedActor(scene, "cs_d8q01_soldier2", "cs_play_all.bin"));
		actors->add(SpawnScriptedActor(scene, "cs_d8q01_soldier3", "cs_play_all.bin"));
		actors->add(SpawnScriptedActor(scene, "cs_d8q01_soldier4", "cs_play_all.bin"));
		actors->add(SpawnActor(scene, "cs_d8q01_Block", "cs_d8q01_Block.xml"));

		object player = GetPlayerActor();
		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_d8q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();
		@CameraSwitchToNormal();
		
		RemoveActorsFromVector(actors); actors = null;
		
		TriggerActor("quest_d8_01", "completed");
		@sync();

		@GetSceneByName(scene, "uprava_admin");
		@ReplaceScene(scene, "uprava_admin_army_danko.isc");
		@sync();
		
		@GetSceneByName(scene, "uprava_admin");
		bool bFound;
		Vector vPos, vDir;
		scene->GetLocator("pt_d8q01_boiny_teleport", bFound, vPos, vDir);
		@Teleport(player, scene, vPos, vDir);
		
		float fGameTime;
		@GetGameTime(fGameTime);
		@AdvanceGameTime((8 * 24 + 14) - fGameTime); // 14 o'clock.
		@sync();
		
		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
