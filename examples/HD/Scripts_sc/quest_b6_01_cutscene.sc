event OnKeyDown 24;

maintask t0
{
	void init(void)
	{
		object L0;
		object L1;
		object L2;
		object L3;
		object L4;
		object L5;
		@GetMainOutdoorScene(L0);
		L1 = f_a2_a3_o(L0, "cs_b6q01_morlok1", "cs_play_all.bin");
		L2 = f_a2_a3_o(L0, "cs_b6q01_morlok2", "cs_play_all.bin");
		L3 = f_a2_a3_o(L0, "cs_b6q01_bull", "cs_play_all.bin");
		L1->ForceGeometryLoad();
		L2->ForceGeometryLoad();
		L3->ForceGeometryLoad();
		L4 = f_6a_a0_o();
		f_aa_a0_v();
		f_71_a1_v(L4);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_b6q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_88_a1_v(L4);
		@CameraSwitchToNormal();
		f_af_a0_v();
		@RemoveActor(L1);
		@RemoveActor(L2);
		@RemoveActor(L3);
		@AddActor(L3, "b6q01_bull", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "b6q01_dead_bull.xml");
		@FindActor(L5, "quest_b6_01");
		if (L5) {
			L5->SetScriptProperty("Bull", L3);
			@Trigger(L5, "sacrifice_end");
		} else {
			@sync();
			@Trigger(L3, "cleanup");
		}
		@RemoveActor(f_9c_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

object f_6a_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_71_a1_v(object a0)
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

void f_88_a1_v(object a0)
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

object f_9c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_a2_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddScriptedActor(L0, a1, a2, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	return L0;
}

void f_aa_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_af_a0_v(void)
{
	@SetSepia(0, 0);
}

