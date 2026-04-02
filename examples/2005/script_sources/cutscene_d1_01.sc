include std.sci

maintask TCutsceneTrigger
{
	var bool m_bInitialized;
	var bool m_bInitialize;
	var bool m_bToBeRemoved;
	var object m_Actors, m_Nude, m_Fire;
	
	void init(void) {
		m_bInitialized = false;
		m_bInitialize = false;
		m_bToBeRemoved = false;
		m_Actors = CreateObjectVector();
		@SetTimeEvent(0, 7);
		@SetTimeEvent(1, 18);
		for (;;) {
			@Hold();
		}
	}

	void OnUnload(void) {
		if (m_bToBeRemoved) {
			Cleanup();
		}
		else if (m_bInitialize) {
			m_bInitialize = false;
			Initialize();
		}
	}
	
	void OnGameTime(int id, float fTime) {
		if (id == 0) {
			if (IsLoaded())
				m_bInitialize = true;
			else
				Initialize();
		}
		else {
			if (IsLoaded())
				m_bToBeRemoved = true;
			else
				Cleanup();
		}
	}

	void OnIntersection(object actor) {
		if (!m_bInitialized)
			return;
		@SetVariable("cutscene_burn_d1", 1);
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			disable OnIntersection;
			TriggerActorsInVector(m_Actors, "play");
			@Trigger(m_Nude, "play");
			TPlayCutscene{actor};
			object scene;
			@GetMainOutdoorScene(scene);
			SpawnActor(scene, "pt_cs_d1_01_worker", "pers_worker", "cutscene_d1_01_worker.xml");
			SpawnActor(scene, "pt_cs_d1_01_woman", "pers_woman", "cutscene_d1_01_woman.xml");
			SpawnActor(scene, "pt_cs_d1_01_alkash", "pers_alkash", "cutscene_d1_01_alkash.xml");
			PreCleanup();
		}
	}
	
	void Initialize(void) {
		m_bInitialized = true;
		object scene;
		@GetMainOutdoorScene(scene);
		m_Actors->add(SpawnScriptedActor(scene, "cs_cannibal_alkash1", "cs_play_all_trigger.bin"));
		m_Actors->add(SpawnScriptedActor(scene, "cs_cannibal_grabitel1", "cs_play_all_trigger.bin"));
		m_Actors->add(SpawnScriptedActor(scene, "cs_cannibal_unosha1", "cs_play_all_trigger.bin"));
		m_Actors->add(SpawnScriptedActor(scene, "cs_cannibal_unosha2", "cs_play_all_trigger.bin"));
		m_Actors->add(SpawnScriptedActor(scene, "cs_cannibal_woman1", "cs_play_all_trigger.bin"));
		m_Actors->add(SpawnScriptedActor(scene, "cs_cannibal_worker1", "cs_play_all_trigger.bin"));
		
		m_Fire = SpawnActorByType(scene, "pt_cs_d1_01_fire", "scripted", "bonfire_big.xml");
		m_Nude = SpawnScriptedActor(scene, "cs_cannibal_nudegirl", "cs_play_all_trigger.bin");
	}
	
	void PreCleanup(void) {
		RemoveActorsFromVector(m_Actors);
		
		if (m_Nude)
			@RemoveActor(m_Nude);
	}

	void Cleanup(void) {
	
		PreCleanup();
		
		if (m_Fire)
			@RemoveActor(m_Fire);
		
		@RemoveActor(self());
	}
}

task TPlayCutscene
{
	void init(object player) {
		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_cannibal.mot");
		//@PlayGlobalMusic("cs_d5_factory.ogg");
		@CameraWaitForPlayFinish();
		//@PlayGlobalMusic("");
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();
		@CameraSwitchToNormal();
	}

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}
}
