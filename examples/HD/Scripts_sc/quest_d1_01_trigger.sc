event OnKeyDown 24;
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
	var bool tv5;

	void init(void)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		@AddScriptedActor(tv1, "cs_d1q01_morlok", "cs_play_all_trigger.bin", L0, [0.0, 0.0, 0.0]);
		@AddScriptedActor(tv2, "cs_d1q01_worker", "cs_play_all_trigger.bin", L0, [0.0, 0.0, 0.0]);
		tv3 = f_d4_a3_o(L0, "d1q01_light", "light_fire.xml");
		tv4 = f_dc_a4_o(L0, "pt_d1q01_fire", "scripted", "fire.xml");
		f_71_a0_v();
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}

	void OnIntersection(object a0)
	{
		bool L0;
		object L1;
		if (tv5) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		tv5 = true;
		@Trigger(tv1, "play");
		@Trigger(tv2, "play");
		@FindActor(L1, "player");
		f_fa_a0_v();
		f_a3_a1_v(L1);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_d1q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_ba_a1_v(L1);
		f_ff_a0_v();
		@CameraSwitchToNormal();
		f_ee_a2_b("quest_d1_01", "cutscene_end");
		@sync();
		@RemoveActor(tv1);
		@RemoveActor(tv2);
	}

	void OnDispose(void)
	{
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
	}

	void f_71_a0_v(void)
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
			if (!L0 && f_a1_a0_b()) {
				@RemoveActor(f_ce_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_a1_a0_b()) {
			@RemoveActor(f_ce_a0_o());
		}
	}
}

bool f_a1_a0_b(void)
{
	return true;
}

void f_a3_a1_v(object a0)
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

void f_ba_a1_v(object a0)
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

object f_ce_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_d4_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddActor(L0, a1, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], a2);
	return L0;
}

object f_dc_a4_o(object a0, string a1, string a2, string a3)
{
	bool L0;
	Vector L1;
	Vector L2;
	object L3;
	a0->GetLocator(a1, L0, L1, L2);
	if (!L0) {
		@Trace("Locator " + a1 + " doesn't exist");
		L3 = null;
	} else {
		@AddActorByType(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

bool f_ee_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_fa_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_ff_a0_v(void)
{
	@SetSepia(0, 0);
}

