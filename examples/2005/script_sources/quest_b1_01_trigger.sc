include std.sci
include actor_disp_base.sci

const int c_iAttackTimer = 1;

maintask TTrigger : TDispBase
{
	var object m_Worker1, m_Worker2, m_Worker3, m_Worker4;
	var object m_Unosha1, m_Unosha2, m_Unosha3, m_Unosha4;
	var object m_Burah1, m_Burah2;
	var object player;
	
	void init(void) {
		object scene;
		@GetMainOutdoorScene(scene);

		@AddScriptedActor(m_Unosha1, "cs_b1q01_unosha1", "cs_play_all_trigger.bin", scene, [0, 0, 0]);
		@AddScriptedActor(m_Unosha2, "cs_b1q01_unosha2", "cs_play_all_trigger.bin", scene, [0, 0, 0]);

		@AddScriptedActor(m_Worker1, "cs_b1q01_worker1", "cs_play_all_trigger.bin", scene, [0, 0, 0]);
		@AddScriptedActor(m_Worker2, "cs_b1q01_worker2", "cs_play_all_trigger.bin", scene, [0, 0, 0]);
	
		super.init();	
	}
	
	void OnTimer(int id) {
		if (c_iAttackTimer != id)
			return;
			
		PlayAttackMusic(player);
	}

	void OnIntersection(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (!bPlayer)
			return;
			
		player = actor;

		object scene;
		@GetMainOutdoorScene(scene);

		PlayAttackMusic(player);
		@SetTimer(c_iAttackTimer, 2);
		
		@AddScriptedActor(m_Unosha3, "cs_b1q01_unosha3", "cs_play_all.bin", scene, [0, 0, 0]);
		@AddScriptedActor(m_Unosha4, "cs_b1q01_unosha4", "cs_play_all.bin", scene, [0, 0, 0]);

		@AddScriptedActor(m_Worker3, "cs_b1q01_worker3", "cs_play_all.bin", scene, [0, 0, 0]);
		@AddScriptedActor(m_Worker4, "cs_b1q01_worker4", "cs_play_all.bin", scene, [0, 0, 0]);

		m_Burah1 = SpawnActor(scene, "cs_b1q01_burah1", "cs_b1q01_burah.xml");
		m_Burah2 = SpawnActor(scene, "cs_b1q01_burah2", "cs_b1q01_burah.xml");
		
		m_Unosha1->ForceGeometryLoad();
		m_Unosha2->ForceGeometryLoad();
		m_Unosha3->ForceGeometryLoad();
		m_Unosha4->ForceGeometryLoad();
		
		m_Worker1->ForceGeometryLoad();
		m_Worker2->ForceGeometryLoad();
		m_Worker3->ForceGeometryLoad();
		m_Worker4->ForceGeometryLoad();
		
		m_Burah1->ForceGeometryLoad();
		m_Burah2->ForceGeometryLoad();

		@Trigger(m_Unosha1, "play");
		@Trigger(m_Unosha2, "play");
		
		@Trigger(m_Worker1, "play");
		@Trigger(m_Worker2, "play");
		
		object player;
		@FindActor(player, "player");

		SetSepia();
		IncrementNoAccess(player);
		@CameraPlay("cs_b1q01.mot");
		@CameraWaitForPlayFinish();
		DecrementNoAccess(player);
		DisableSepia();

		Cleanup();
		if (m_Burah2) {
			@Trigger(m_Burah2, "remove");
			m_Burah2 = null;
		}

		@CameraSwitchToNormal();
		
		@KillTimer(c_iAttackTimer);

		TriggerActor("quest_b1_01", "cutscene_end");
		
		@GetSceneByName(scene, "warehouse_notkin");
		Vector vPos, vDir;
		bool bFound;
		scene->GetLocator("pt_door1", bFound, vPos, vDir);
		@Teleport(player, scene, vPos, vDir);
		@RemoveActor(self());
	}
	
	void Cleanup(void) {
		if (m_Unosha1)
			@RemoveActor(m_Unosha1);
		if (m_Unosha2)
			@RemoveActor(m_Unosha2);
		if (m_Unosha3)
			@RemoveActor(m_Unosha3);
		if (m_Unosha4)
			@RemoveActor(m_Unosha4);

		if (m_Worker1)
			@RemoveActor(m_Worker1);
		if (m_Worker2)
			@RemoveActor(m_Worker2);
		if (m_Worker3)
			@RemoveActor(m_Worker3);
		if (m_Worker4)
			@RemoveActor(m_Worker4);			
			
		if (m_Burah1)
			@RemoveActor(m_Burah1);
	}
	
	void OnDispose(void) {
		Cleanup();
		if (m_Burah2)
			@RemoveActor(m_Burah2);
	}
}
