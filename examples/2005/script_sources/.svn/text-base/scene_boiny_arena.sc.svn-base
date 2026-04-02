include std.sci

maintask TBoinyArena
{
	var object m_Starshina, m_Avrox;

	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		m_Avrox = SpawnActor(self(), "pt_avrox", "pers_avrox", "b11q01_avrox.xml");
	
		object actor = SpawnScriptedActor(self(), "cs_b11q01_starshina", "cs_play_all.bin");
		
		object player = GetPlayerActor();
		SetSepia();
		IncrementNoAccess(player);
		//@RegisterKeyCallback("space");
		@CameraPlay("cs_b11q01.mot");
		@CameraWaitForPlayFinish();
		//@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		@CameraSwitchToNormal();
		DisableSepia();
		
		@RemoveActor(actor);
		
		@sync();
		
		m_Starshina = SpawnActor(self(), "pt_Starshina", "pers_starshina_fight", "b11q01_starshina.xml");
	}
	
	void OnUnload(void) {
		if (m_Starshina)
			@RemoveActor(m_Starshina);
		if (m_Avrox)
			@RemoveActor(m_Avrox);
	}
}
