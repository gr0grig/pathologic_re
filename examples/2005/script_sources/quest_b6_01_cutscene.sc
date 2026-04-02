include std.sci

maintask TCutscene
{
	void init(void) {
		object scene;
		@GetMainOutdoorScene(scene);

		object morlok1, morlok2, bull;
		
		morlok1 = SpawnScriptedActor(scene, "cs_b6q01_morlok1", "cs_play_all.bin");;
		morlok2 = SpawnScriptedActor(scene, "cs_b6q01_morlok2", "cs_play_all.bin");;
		bull = SpawnScriptedActor(scene, "cs_b6q01_bull", "cs_play_all.bin");;
		
		morlok1->ForceGeometryLoad();
		morlok2->ForceGeometryLoad();
		bull->ForceGeometryLoad();

		object player = GetPlayerActor();
		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_b6q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		@CameraSwitchToNormal();
		DisableSepia();
		
		@RemoveActor(morlok1);
		@RemoveActor(morlok2);
		@RemoveActor(bull);
		
		@AddActor(bull, "b6q01_bull", scene, [0, 0, 0], [0, 0, 1], "b6q01_dead_bull.xml");
		
		object QuestActor;
		@FindActor(QuestActor, "quest_b6_01");
		if (QuestActor) {
			QuestActor->SetScriptProperty("Bull", bull);
			@Trigger(QuestActor, "sacrifice_end");
		}
		else {
			@sync();
			@Trigger(bull, "cleanup");
		}
	
		@RemoveActor(self());
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
