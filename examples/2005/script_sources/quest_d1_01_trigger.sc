include std.sci
include actor_disp_base.sci

maintask TTrigger : TDispBase
{
	var object m_Morlok, m_Worker;
	var object m_Light, m_Fire;
	var bool m_bPlayed;
	
	void init(void) {
		object scene;
		@GetMainOutdoorScene(scene);

		@AddScriptedActor(m_Morlok, "cs_d1q01_morlok", "cs_play_all_trigger.bin", scene, [0, 0, 0]);
		@AddScriptedActor(m_Worker, "cs_d1q01_worker", "cs_play_all_trigger.bin", scene, [0, 0, 0]);
		m_Light = SpawnActor(scene, "d1q01_light", "light_fire.xml");
		m_Fire = SpawnActorByType(scene, "pt_d1q01_fire", "scripted", "fire.xml");
	
		super.init();	
	}
	
	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}

	void OnIntersection(object actor) {
		if (m_bPlayed)
			return;
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (!bPlayer)
			return;

		m_bPlayed = true;

		@Trigger(m_Morlok, "play");
		@Trigger(m_Worker, "play");
	
		object player;
		@FindActor(player, "player");

		SetSepia();
		IncrementNoAccess(player);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_d1q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		DecrementNoAccess(player);
		DisableSepia();

		@RemoveActor(m_Morlok);
		@RemoveActor(m_Worker);

		@CameraSwitchToNormal();

		TriggerActor("quest_d1_01", "cutscene_end");
	}
	
	void OnDispose(void) {
		if (m_Morlok)
			@RemoveActor(m_Morlok);
		if (m_Worker)
			@RemoveActor(m_Worker);
		if (m_Light)
			@RemoveActor(m_Light);
		if (m_Fire)
			@RemoveActor(m_Fire);
	}
}
