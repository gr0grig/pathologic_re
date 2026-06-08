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
		object L6;
		object L7;
		object L8;
		object L9;
		object L10;
		object L11;
		object L12;
		@GetMainOutdoorScene(L0);
		L1 = f_f7_a3_o(L0, "cs_k11q01_soldat1", "cs_play_all.bin");
		L2 = f_f7_a3_o(L0, "cs_k11q01_soldat2", "cs_play_all.bin");
		L3 = f_f7_a3_o(L0, "cs_k11q01_soldat3", "cs_play_all.bin");
		L4 = f_f7_a3_o(L0, "cs_k11q01_soldat4", "cs_play_all.bin");
		L5 = f_f7_a3_o(L0, "cs_k11q01_soldat5", "cs_play_all.bin");
		L6 = f_f7_a3_o(L0, "cs_k11q01_soldat6", "cs_play_all.bin");
		L7 = f_f7_a3_o(L0, "cs_k11q01_soldat7", "cs_play_all.bin");
		L8 = f_f7_a3_o(L0, "cs_k11q01_soldat8", "cs_play_all.bin");
		L9 = f_f7_a3_o(L0, "cs_k11q01_soldat9", "cs_play_all.bin");
		L10 = f_f7_a3_o(L0, "cs_k11q01_soldat10", "cs_play_all.bin");
		L11 = f_ef_a3_o(L0, "cs_k11q01_klara", "cs_k11q01_klara.xml");
		L1->ForceGeometryLoad();
		L2->ForceGeometryLoad();
		L3->ForceGeometryLoad();
		L4->ForceGeometryLoad();
		L5->ForceGeometryLoad();
		L6->ForceGeometryLoad();
		L7->ForceGeometryLoad();
		L8->ForceGeometryLoad();
		L9->ForceGeometryLoad();
		L10->ForceGeometryLoad();
		L11->ForceGeometryLoad();
		L12 = f_b7_a0_o();
		f_10b_a0_v();
		f_be_a1_v(L12);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_k11q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_d5_a1_v(L12);
		f_110_a0_v();
		@CameraSwitchToNormal();
		@RemoveActor(L1);
		@RemoveActor(L2);
		@RemoveActor(L3);
		@RemoveActor(L4);
		@RemoveActor(L5);
		@RemoveActor(L6);
		@RemoveActor(L7);
		@RemoveActor(L8);
		@RemoveActor(L9);
		@RemoveActor(L10);
		@RemoveActor(L11);
		f_ff_a2_b("quest_k11_01", "cutscene_end");
		@RemoveActor(f_e9_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

object f_b7_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_be_a1_v(object a0)
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

void f_d5_a1_v(object a0)
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

object f_e9_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_ef_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddActor(L0, a1, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], a2);
	return L0;
}

object f_f7_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddScriptedActor(L0, a1, a2, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	return L0;
}

bool f_ff_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_10b_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_110_a0_v(void)
{
	@SetSepia(0, 0);
}

