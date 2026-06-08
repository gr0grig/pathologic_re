event OnUnload 6;
event OnGameTime 9;
event OnIntersection 23;
event OnKeyDown 24;

maintask t0
{
	var bool tv0;
	var bool tv1;
	var bool tv2;
	var object tv3;
	var object tv4;
	var object tv5;

	void init(void)
	{
		tv0 = false;
		tv1 = false;
		tv2 = false;
		tv3 = f_121_a0_o();
		@SetTimeEvent(0, 7);
		@SetTimeEvent(1, 18);
		for (; ; ) {
			@Hold();
		}
	}

	void OnUnload(void)
	{
		if (tv2) {
			f_bd_a0_v();
		} else {
			if (tv1) {
				tv1 = false;
				f_6f_a0_v();
			}
		}
	}

	void OnGameTime(int a0, float a1)
	{
		if (a0 == 0) {
			if (f_eb_a0_b()) {
				tv1 = true;
			} else {
				f_6f_a0_v();
			}
		} else {
			if (f_eb_a0_b()) {
				tv2 = true;
			} else {
				f_bd_a0_v();
			}
		}
	}

	void OnIntersection(object a0)
	{
		bool L0;
		if (!tv0) {
			return;
		}
		@SetVariable("cutscene_burn_d1", 1);
		@IsPlayerActor(a0, L0);
		if (L0) {
			object L1;
			disable OnIntersection;
			f_168_a2_v(tv3, "play");
			@Trigger(tv4, "play");
			t1{a0};
			@GetMainOutdoorScene(L1);
			f_127_a4_o(L1, "pt_cs_d1_01_worker", "pers_worker", "cutscene_d1_01_worker.xml");
			f_127_a4_o(L1, "pt_cs_d1_01_woman", "pers_woman", "cutscene_d1_01_woman.xml");
			f_127_a4_o(L1, "pt_cs_d1_01_alkash", "pers_alkash", "cutscene_d1_01_alkash.xml");
			f_b4_a0_v();
		}
	}

	void f_6f_a0_v(void)
	{
		object L0;
		tv0 = true;
		@GetMainOutdoorScene(L0);
		tv3->add(f_139_a3_o(L0, "cs_cannibal_alkash1", "cs_play_all_trigger.bin"));
		tv3->add(f_139_a3_o(L0, "cs_cannibal_grabitel1", "cs_play_all_trigger.bin"));
		tv3->add(f_139_a3_o(L0, "cs_cannibal_unosha1", "cs_play_all_trigger.bin"));
		tv3->add(f_139_a3_o(L0, "cs_cannibal_unosha2", "cs_play_all_trigger.bin"));
		tv3->add(f_139_a3_o(L0, "cs_cannibal_woman1", "cs_play_all_trigger.bin"));
		tv3->add(f_139_a3_o(L0, "cs_cannibal_worker1", "cs_play_all_trigger.bin"));
		tv5 = f_141_a4_o(L0, "pt_cs_d1_01_fire", "scripted", "bonfire_big.xml");
		tv4 = f_139_a3_o(L0, "cs_cannibal_nudegirl", "cs_play_all_trigger.bin");
	}

	void f_b4_a0_v(void)
	{
		f_153_a1_v(tv3);
		if (tv4) {
			@RemoveActor(tv4);
		}
	}

	void f_bd_a0_v(void)
	{
		f_b4_a0_v();
		if (tv5) {
			@RemoveActor(tv5);
		}
		@RemoveActor(f_11b_a0_o());
	}
}

task t1
{
	void init(object a0)
	{
		f_17b_a0_v();
		f_f0_a1_v(a0);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_cannibal.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_107_a1_v(a0);
		f_180_a0_v();
		@CameraSwitchToNormal();
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

bool f_eb_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_f0_a1_v(object a0)
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

void f_107_a1_v(object a0)
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

object f_11b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_121_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_127_a4_o(object a0, string a1, string a2, string a3)
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
		@AddActor(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

object f_139_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddScriptedActor(L0, a1, a2, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	return L0;
}

object f_141_a4_o(object a0, string a1, string a2, string a3)
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

void f_153_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@RemoveActor(L2);
			}
		}
		a0->clear();
	}
}

void f_168_a2_v(object a0, string a1)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@Trigger(L2, a1);
			}
		}
	}
}

void f_17b_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_180_a0_v(void)
{
	@SetSepia(0, 0);
}

