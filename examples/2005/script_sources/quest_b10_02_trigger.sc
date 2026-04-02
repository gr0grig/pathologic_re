include std.sci
include actor_disp_base.sci

maintask TTrigger : TDispBase
{
	void OnIntersection(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (!bPlayer)
			return;
		disable OnIntersection;
		TCutScene{};
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}

task TCutScene
{
	void init(void) {
		@SetVariable("b10q02Cutscene", 1);
	
		object scene;
		@GetMainOutdoorScene(scene);

		object actors = CreateObjectVector();
		object actor;
		actor = SpawnScriptedActor(scene, "cs_b10q02_girl", "cs_play_all.bin");
		actor->ForceGeometryLoad();
		actors->add(actor);
		actor = SpawnScriptedActor(scene, "cs_b10q02_boy", "cs_play_all.bin");
		actor->ForceGeometryLoad();
		actors->add(actor);
		actor = SpawnScriptedActor(scene, "cs_b10q02_doberman", "cs_play_all.bin");
		actor->ForceGeometryLoad();
		actors->add(actor);
		actor = SpawnScriptedActor(scene, "cs_b10q02_littleboy", "cs_play_all.bin");
		actor->ForceGeometryLoad();
		actors->add(actor);

		object player = GetPlayerActor();
		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_b10q02.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();
		@CameraSwitchToNormal();
		
		RemoveActorsFromVector(actors);
		
		TriggerActor("quest_b10_02", "place_bomb");
		
		@RemoveActor(self());
	}
}
