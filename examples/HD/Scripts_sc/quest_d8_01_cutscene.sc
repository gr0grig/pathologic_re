event OnKeyDown 24;

maintask t0
{
	void init(void)
	{
		object L0;
		@GetSceneByName(L0, "boiny");
		object L1;
		L1 = f_f5_a0_o();
		L1->add(f_fb_a3_o(L0, "cs_d8q01_bakalavr", "cs_d8q01_bakalavr.xml"));
		L1->add(f_103_a3_o(L0, "cs_d8q01_butcher1", "cs_play_all.bin"));
		L1->add(f_103_a3_o(L0, "cs_d8q01_butcher2", "cs_play_all.bin"));
		L1->add(f_103_a3_o(L0, "cs_d8q01_butcher3", "cs_play_all.bin"));
		L1->add(f_103_a3_o(L0, "cs_d8q01_butcher4", "cs_play_all.bin"));
		L1->add(f_103_a3_o(L0, "cs_d8q01_butcher5", "cs_play_all.bin"));
		int L2;
		L1->size(L2);
		int L3;
		for (L3 = 0; L3 < L2; L3++) {
			object L4;
			L1->get(L4, L3);
			L4->ForceGeometryLoad();
		}
		L1->add(f_103_a3_o(L0, "cs_d8q01_soldier1", "cs_play_all.bin"));
		L1->add(f_103_a3_o(L0, "cs_d8q01_soldier2", "cs_play_all.bin"));
		L1->add(f_103_a3_o(L0, "cs_d8q01_soldier3", "cs_play_all.bin"));
		L1->add(f_103_a3_o(L0, "cs_d8q01_soldier4", "cs_play_all.bin"));
		L1->add(f_fb_a3_o(L0, "cs_d8q01_Block", "cs_d8q01_Block.xml"));
		object L5;
		L5 = f_bd_a0_o();
		f_12c_a0_v();
		f_c4_a1_v(L5);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_d8q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_db_a1_v(L5);
		f_131_a0_v();
		@CameraSwitchToNormal();
		f_117_a1_v(L1);
		L1 = null;
		f_10b_a2_b("quest_d8_01", "completed");
		@sync();
		@GetSceneByName(L0, "uprava_admin");
		@ReplaceScene(L0, "uprava_admin_army_danko.isc");
		@sync();
		@GetSceneByName(L0, "uprava_admin");
		bool L6;
		Vector L7;
		Vector L8;
		L0->GetLocator("pt_d8q01_boiny_teleport", L6, L7, L8);
		@Teleport(L5, L0, L7, L8);
		float L9;
		@GetGameTime(L9);
		@AdvanceGameTime(206 - L9);
		@sync();
		@RemoveActor(f_ef_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

object f_bd_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_c4_a1_v(object a0)
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

void f_db_a1_v(object a0)
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

object f_ef_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_f5_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_fb_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddActor(L0, a1, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], a2);
	return L0;
}

object f_103_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddScriptedActor(L0, a1, a2, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	return L0;
}

bool f_10b_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_117_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@RemoveActor(L2);
			}
		}
		a0->clear();
	}
}

void f_12c_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_131_a0_v(void)
{
	@SetSepia(0, 0);
}

