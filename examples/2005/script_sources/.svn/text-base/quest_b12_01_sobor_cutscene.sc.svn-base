include std.sci

bool IsKlaraInSobor() {
	int iVal;
	@GetVariable("b12q01KlaraInSobor", iVal);
	return (iVal != 0);
}

bool IsDankoInSobor() {
	int iVal;
	@GetVariable("b12q01DankoInSobor", iVal);
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

		if (IsDankoInSobor()) {
			object danko;
			danko = SpawnActor(scene, "cs_d12_sobor_danko", "cs_d12_danko.xml");
			danko->ForceGeometryLoad();
			
			@CameraPlay("cs_d12_sobor_danko.mot");
			@CameraWaitForPlayFinish();
			
			if (danko)
				@RemoveActor(danko);
		}
		
		/*
			object burah;
			burah = SpawnActor(scene, "cs_d12_sobor_burah", "cs_d12_burah.xml");
			burah->ForceGeometryLoad();
			
			@CameraPlay("cs_d12_sobor_burah.mot");
			@CameraWaitForPlayFinish();
			
			if (burah)
				@RemoveActor(burah);
			
			object maria;
			maria = SpawnActor(scene, "cs_d12_sobor_maria", "cs_d12_maria.xml");
			maria->ForceGeometryLoad();
			
			@CameraPlay("cs_d12_sobor_maria.mot");
			@CameraWaitForPlayFinish();
			
			if (maria)
				@RemoveActor(maria);
		*/
		
		object kapella;
		kapella = SpawnActor(scene, "cs_d12_sobor_kapella", "cs_d12_kapella.xml");
		kapella->ForceGeometryLoad();
		
		@CameraPlay("cs_d12_sobor_kapella.mot");
		@CameraWaitForPlayFinish();
		
		//@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();
		@CameraSwitchToNormal();
		
		if (kapella)
			@RemoveActor(kapella);
		
		TriggerActor("quest_b12_01", "sobor_cutscene_end");
		
		@RemoveActor(self());
	}	

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
