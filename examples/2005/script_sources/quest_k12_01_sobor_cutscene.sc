include std.sci

bool IsBurahInSobor() {
	int iVal;
	@GetVariable("k12q01BurahInSobor", iVal);
	return (iVal != 0);
}

bool IsDankoInSobor() {
	int iVal;
	@GetVariable("k12q01BurahInSobor", iVal);
	return (iVal != 0);
}

maintask TCutscene
{
	void init(void) {
		object scene;
		@GetSceneByName(scene, "sobor");
		
		object player = GetPlayerActor();
		SetSepia();
		IncrementNoAccess(player);
		//@RegisterKeyCallback("space");
		
		object aglaja, block;
		aglaja = SpawnActor(scene, "cs_d12_sobor_aglaja", "cs_d12_aglaja.xml");
		block = SpawnActor(scene, "cs_d12_sobor_block", "cs_d12_block.xml");
		aglaja->ForceGeometryLoad();
		block->ForceGeometryLoad();
		
		@CameraPlay("cs_d12_sobor_aglaja_block.mot");
		@CameraWaitForPlayFinish();
		
		if (aglaja)
			@RemoveActor(aglaja);
		if (block)
			@RemoveActor(block);
		
		if (IsBurahInSobor()) {
			object burah;
			burah = SpawnActor(scene, "cs_d12_sobor_burah", "cs_d12_burah.xml");
			burah->ForceGeometryLoad();
			
			@CameraPlay("cs_d12_sobor_burah.mot");
			@CameraWaitForPlayFinish();
			
			if (burah)
				@RemoveActor(burah);
		}

		if (IsDankoInSobor()) {
			object danko;
			danko = SpawnActor(scene, "cs_d12_sobor_danko", "cs_d12_danko.xml");
			danko->ForceGeometryLoad();
			
			@CameraPlay("cs_d12_sobor_danko.mot");
			@CameraWaitForPlayFinish();
			
			if (danko)
				@RemoveActor(danko);
		}
		
		object klara;
		klara = SpawnActor(scene, "cs_d12_sobor_klara", "cs_d12_klara.xml");
		klara->ForceGeometryLoad();
		
		@CameraPlay("cs_d12_sobor_klara.mot");
		@CameraWaitForPlayFinish();
		
		
		//@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();
		@CameraSwitchToNormal();
		
		if (klara)
			@RemoveActor(klara);
		
		TriggerActor("quest_k12_01", "sobor_cutscene_end");
		
		@RemoveActor(self());
	}	

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
