event OnKeyDown 24;

maintask t0
{
	void init(void)
	{
		object L0;
		object L1;
		object L2;
		object L3;
		@GetMainOutdoorScene(L0);
		L1 = f_83_a3_o(L0, "cs_b10q01_burah", "cs_b10q01_burah.xml");
		L2 = f_8b_a3_o(L0, "cs_b10q01_whitemask", "cs_play_all.bin");
		L1->ForceGeometryLoad();
		L2->ForceGeometryLoad();
		L3 = f_4b_a0_o();
		f_9f_a0_v();
		f_52_a1_v(L3);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_b10q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_69_a1_v(L3);
		f_a4_a0_v();
		@CameraSwitchToNormal();
		@RemoveActor(L1);
		@RemoveActor(L2);
		f_93_a2_b("quest_b10_01", "place_butchers");
		@RemoveActor(f_7d_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

object f_4b_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_52_a1_v(object a0)
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

void f_69_a1_v(object a0)
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

object f_7d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_83_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddActor(L0, a1, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], a2);
	return L0;
}

object f_8b_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddScriptedActor(L0, a1, a2, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	return L0;
}

bool f_93_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_9f_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_a4_a0_v(void)
{
	@SetSepia(0, 0);
}

