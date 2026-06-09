event OnKeyDown 24;

maintask t0
{
	void init(void)
	{
		object L0;
		object L1;
		object L2;
		@GetSceneByName(L0, "cot_eva");
		@AddActor(L1, "cs_burah_danko_microscope", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "cs_burah_danko_microscope.xml");
		L2 = f_51_a0_o();
		f_95_a0_v();
		f_58_a1_v(L2);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_burah_danko_microscope.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_6f_a1_v(L2);
		f_9a_a0_v();
		@RemoveActor(L1);
		@CameraSwitchToNormal();
		f_89_a2_b("quest_b2_01", "cutscene_end");
		f_89_a2_b("quest_b3_01", "cutscene_end");
		f_89_a2_b("quest_b4_01", "cutscene_end");
		f_89_a2_b("quest_b5_01", "cutscene_end");
		f_89_a2_b("quest_b6_01", "cutscene_end");
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

bool f_89_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_95_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_9a_a0_v(void)
{
	@SetSepia(0, 0);
}

