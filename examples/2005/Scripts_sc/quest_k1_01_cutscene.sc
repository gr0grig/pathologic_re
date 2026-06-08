event OnKeyDown 24;

maintask t0
{
	void init(void)
	{
		object L0;
		object L1;
		object L2;
		object L3;
		bool L4;
		Vector L5;
		Vector L6;
		@GetSceneByName(L0, "cot_anna");
		L1 = f_91_a3_o(L0, "cs_k1q01_worker", "cs_play_all.bin");
		L2 = f_89_a3_o(L0, "cs_k1q01_klara", "cs_k1q01_klara.xml");
		L1->ForceGeometryLoad();
		L2->ForceGeometryLoad();
		L3 = f_51_a0_o();
		f_a5_a0_v();
		f_58_a1_v(L3);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_k1q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_6f_a1_v(L3);
		f_aa_a0_v();
		@CameraSwitchToNormal();
		L0->GetLocator("pt_cs_player", L4, L5, L6);
		@Teleport(L3, L0, L5, L6);
		@RemoveActor(L1);
		@RemoveActor(L2);
		f_99_a2_b("quest_k1_01", "cutscene_end");
		@RemoveActor(f_83_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

object f_51_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_58_a1_v(object a0)
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

void f_6f_a1_v(object a0)
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

object f_83_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_89_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddActor(L0, a1, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], a2);
	return L0;
}

object f_91_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddScriptedActor(L0, a1, a2, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	return L0;
}

bool f_99_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_a5_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_aa_a0_v(void)
{
	@SetSepia(0, 0);
}

