event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		object L0;
		object L1;
		tv1 = f_86_a4_o(f_80_a0_o(), "pt_avrox", "pers_avrox", "b11q01_avrox.xml");
		L0 = f_98_a3_o(f_80_a0_o(), "cs_b11q01_starshina", "cs_play_all.bin");
		L1 = f_4e_a0_o();
		f_a0_a0_v();
		f_55_a1_v(L1);
		@CameraPlay("cs_b11q01.mot");
		@CameraWaitForPlayFinish();
		f_6c_a1_v(L1);
		@CameraSwitchToNormal();
		f_a5_a0_v();
		@RemoveActor(L0);
		@sync();
		tv0 = f_86_a4_o(f_80_a0_o(), "pt_Starshina", "pers_starshina_fight", "b11q01_starshina.xml");
	}

	void OnUnload(void)
	{
		if (tv0) {
			@RemoveActor(tv0);
		}
		if (tv1) {
			@RemoveActor(tv1);
		}
	}
}

object f_4e_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_55_a1_v(object a0)
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

void f_6c_a1_v(object a0)
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

object f_80_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_86_a4_o(object a0, string a1, string a2, string a3)
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

object f_98_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddScriptedActor(L0, a1, a2, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	return L0;
}

void f_a0_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_a5_a0_v(void)
{
	@SetSepia(0, 0);
}

