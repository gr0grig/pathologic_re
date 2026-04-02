include std.sci

bool IsKlaraInSobor() {
	int iVal;
	@GetVariable("d12q01KlaraInSobor", iVal);
	return (iVal != 0);
}

bool IsBurahInSobor() {
	int iVal;
	@GetVariable("d12q01BurahInSobor", iVal);
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
		
		if (IsKlaraInSobor()) {
			object klara;
			klara = SpawnActor(scene, "cs_d12_sobor_klara", "cs_d12_klara.xml");
			klara->ForceGeometryLoad();
			
			@CameraPlay("cs_d12_sobor_klara.mot");
			@CameraWaitForPlayFinish();
			
			if (klara)
				@RemoveActor(klara);
		}

		if (IsBurahInSobor()) {
			object burah;
			burah = SpawnActor(scene, "cs_d12_sobor_burah", "cs_d12_burah.xml");
			burah->ForceGeometryLoad();
			
			@CameraPlay("cs_d12_sobor_burah.mot");
			@CameraWaitForPlayFinish();
			
			if (burah)
				@RemoveActor(burah);
		}
		
		object maria;
		maria = SpawnActor(scene, "cs_d12_sobor_maria", "cs_d12_maria.xml");
		maria->ForceGeometryLoad();
		
		@CameraPlay("cs_d12_sobor_maria.mot");
		@CameraWaitForPlayFinish();
		
		//@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();
		@CameraSwitchToNormal();
		
		if (maria)
			@RemoveActor(maria);
		
		TriggerActor("quest_d12_01", "sobor_cutscene_end");
		
		@RemoveActor(self());
	}	

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
