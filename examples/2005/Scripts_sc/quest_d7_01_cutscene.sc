event OnKeyDown 24;

maintask t0
{
	void init(void)
	{
		object L0;
		object L1;
		object L2;
		object L3;
		@GetSceneByName(L0, "sobor");
		@AddActor(L1, "cs_d7q01_Aglaja", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "cs_d7q01_Aglaja.xml");
		@AddScriptedActor(L2, "cs_d7q01_birdmask", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
		L3 = f_40_a0_o();
		f_78_a0_v();
		f_47_a1_v(L3);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_d7q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_5e_a1_v(L3);
		f_7d_a0_v();
		@RemoveActor(L2);
		@RemoveActor(L1);
		@CameraSwitchToNormal();
		@RemoveActor(f_72_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

object f_40_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_47_a1_v(object a0)
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

void f_5e_a1_v(object a0)
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

object f_72_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_78_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_7d_a0_v(void)
{
	@SetSepia(0, 0);
}

