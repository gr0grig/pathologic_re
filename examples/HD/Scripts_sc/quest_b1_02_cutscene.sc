event OnKeyDown 24;

maintask t0
{
	void init(void)
	{
		object L0;
		object L1;
		object L2;
		bool L3;
		Vector L4;
		Vector L5;
		@GetSceneByName(L0, "storojka");
		L1 = f_8f_a3_o(L0, "cs_b1q02_worker", "cs_play_all.bin");
		L2 = f_45_a0_o();
		f_97_a0_v();
		f_4c_a1_v(L2);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_b1q02.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_63_a1_v(L2);
		@CameraSwitchToNormal();
		f_9c_a0_v();
		L0->GetLocator("pt_cs_player", L3, L4, L5);
		@Teleport(L2, L0, L4, L5);
		@RemoveActor(L1);
		f_7d_a4_o(L0, "pt_b1q02_worker", "pers_worker", "b1q02_worker.xml");
		@RemoveActor(f_77_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

object f_45_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_4c_a1_v(object a0)
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

void f_63_a1_v(object a0)
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

object f_77_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_7d_a4_o(object a0, string a1, string a2, string a3)
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

object f_8f_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddScriptedActor(L0, a1, a2, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	return L0;
}

void f_97_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_9c_a0_v(void)
{
	@SetSepia(0, 0);
}

