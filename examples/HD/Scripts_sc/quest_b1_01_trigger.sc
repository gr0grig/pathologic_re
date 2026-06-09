event OnTimer 7;
event OnIntersection 23;
event OnDispose 32;
event OnTrigger 26;
event OnUnload 6;

maintask t0
{
	var bool tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;
	var object tv9;
	var object tv10;
	var object tv11;

	void init(void)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		@AddScriptedActor(tv5, "cs_b1q01_unosha1", "cs_play_all_trigger.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(tv6, "cs_b1q01_unosha2", "cs_play_all_trigger.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(tv1, "cs_b1q01_worker1", "cs_play_all_trigger.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(tv2, "cs_b1q01_worker2", "cs_play_all_trigger.bin", L0, [0.0, 0.0, 0.0]);
		f_df_a0_v();
	}

	void OnTimer(int a0)
	{
		if (1 != a0) {
			return;
		}
		f_156_a1_v(tv11);
	}

	void OnIntersection(object a0)
	{
		bool L0;
		object L1;
		object L2;
		Vector L3;
		Vector L4;
		bool L5;
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		tv11 = a0;
		@GetMainOutdoorScene(L1);
		f_156_a1_v(tv11);
		@SetTimer(1, 2);
		@AddScriptedActor(tv7, "cs_b1q01_unosha3", "cs_play_all.bin", L1, [0.0, 0.0, 0.0]);
		@AddScriptedActor(tv8, "cs_b1q01_unosha4", "cs_play_all.bin", L1, [0.0, 0.0, 0.0]);
		@AddScriptedActor(tv3, "cs_b1q01_worker3", "cs_play_all.bin", L1, [0.0, 0.0, 0.0]);
		@AddScriptedActor(tv4, "cs_b1q01_worker4", "cs_play_all.bin", L1, [0.0, 0.0, 0.0]);
		tv9 = f_142_a3_o(L1, "cs_b1q01_burah1", "cs_b1q01_burah.xml");
		tv10 = f_142_a3_o(L1, "cs_b1q01_burah2", "cs_b1q01_burah.xml");
		tv5->ForceGeometryLoad();
		tv6->ForceGeometryLoad();
		tv7->ForceGeometryLoad();
		tv8->ForceGeometryLoad();
		tv1->ForceGeometryLoad();
		tv2->ForceGeometryLoad();
		tv3->ForceGeometryLoad();
		tv4->ForceGeometryLoad();
		tv9->ForceGeometryLoad();
		tv10->ForceGeometryLoad();
		@Trigger(tv5, "play");
		@Trigger(tv6, "play");
		@Trigger(tv1, "play");
		@Trigger(tv2, "play");
		@FindActor(L2, "player");
		f_15f_a0_v();
		f_111_a1_v(L2);
		@CameraPlay("cs_b1q01.mot");
		@CameraWaitForPlayFinish();
		f_128_a1_v(L2);
		f_164_a0_v();
		f_b2_a0_v();
		if (tv10) {
			@Trigger(tv10, "remove");
			tv10 = null;
		}
		@CameraSwitchToNormal();
		@KillTimer(1);
		f_14a_a2_b("quest_b1_01", "cutscene_end");
		@GetSceneByName(L1, "warehouse_notkin");
		L1->GetLocator("pt_door1", L5, L3, L4);
		@Teleport(L2, L1, L3, L4);
		@RemoveActor(f_13c_a0_o());
	}

	void f_b2_a0_v(void)
	{
		if (tv5) {
			@RemoveActor(tv5);
		}
		if (tv6) {
			@RemoveActor(tv6);
		}
		if (tv7) {
			@RemoveActor(tv7);
		}
		if (tv8) {
			@RemoveActor(tv8);
		}
		if (tv1) {
			@RemoveActor(tv1);
		}
		if (tv2) {
			@RemoveActor(tv2);
		}
		if (tv3) {
			@RemoveActor(tv3);
		}
		if (tv4) {
			@RemoveActor(tv4);
		}
		if (tv9) {
			@RemoveActor(tv9);
		}
	}

	void OnDispose(void)
	{
		f_b2_a0_v();
		if (tv10) {
			@RemoveActor(tv10);
		}
	}

	void f_df_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_10f_a0_b()) {
				@RemoveActor(f_13c_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_10f_a0_b()) {
			@RemoveActor(f_13c_a0_o());
		}
	}
}

bool f_10f_a0_b(void)
{
	return true;
}

void f_111_a1_v(object a0)
{
	bool L0;
	if (!a0) {
		return;
	}
	a0->HasProperty("noaccess", L0);
	if (L0) {
		int L1;
		a0->GetProperty("noaccess", L1);
		a0->SetProperty("noaccess", L1 + 1);
	} else {
		a0->SetProperty("noaccess", 1);
	}
}

void f_128_a1_v(object a0)
{
	int L0;
	if (!a0) {
		return;
	}
	a0->GetProperty("noaccess", L0);
	if (L0 > 1) {
		a0->SetProperty("noaccess", L0 - 1);
	} else {
		a0->RemoveProperty("noaccess");
	}
}

object f_13c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_142_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddActor(L0, a1, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], a2);
	return L0;
}

bool f_14a_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_156_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_15f_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_164_a0_v(void)
{
	@SetSepia(0, 0);
}

