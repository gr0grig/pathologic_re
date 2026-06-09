event OnKeyDown 24;

maintask t0
{
	void init(void)
	{
		object L0;
		@GetSceneByName(L0, "sobor");
		object L1;
		L1 = f_8b_a0_o();
		f_d7_a0_v();
		f_92_a1_v(L1);
		object L2;
		L2 = f_c3_a3_o(L0, "cs_d12_sobor_aglaja", "cs_d12_aglaja.xml");
		object L3;
		L3 = f_c3_a3_o(L0, "cs_d12_sobor_block", "cs_d12_block.xml");
		L2->ForceGeometryLoad();
		L3->ForceGeometryLoad();
		@CameraPlay("cs_d12_sobor_aglaja_block.mot");
		@CameraWaitForPlayFinish();
		if (L2) {
			@RemoveActor(L2);
		}
		if (L3) {
			@RemoveActor(L3);
		}
		if (f_e1_a0_b()) {
			object L4;
			L4 = f_c3_a3_o(L0, "cs_d12_sobor_klara", "cs_d12_klara.xml");
			L4->ForceGeometryLoad();
			@CameraPlay("cs_d12_sobor_klara.mot");
			@CameraWaitForPlayFinish();
			if (L4) {
				@RemoveActor(L4);
			}
		}
		if (f_e8_a0_b()) {
			object L5;
			L5 = f_c3_a3_o(L0, "cs_d12_sobor_danko", "cs_d12_danko.xml");
			L5->ForceGeometryLoad();
			@CameraPlay("cs_d12_sobor_danko.mot");
			@CameraWaitForPlayFinish();
			if (L5) {
				@RemoveActor(L5);
			}
		}
		object L6;
		L6 = f_c3_a3_o(L0, "cs_d12_sobor_kapella", "cs_d12_kapella.xml");
		L6->ForceGeometryLoad();
		@CameraPlay("cs_d12_sobor_kapella.mot");
		@CameraWaitForPlayFinish();
		f_a9_a1_v(L1);
		f_dc_a0_v();
		@CameraSwitchToNormal();
		if (L6) {
			@RemoveActor(L6);
		}
		f_cb_a2_b("quest_b12_01", "sobor_cutscene_end");
		@RemoveActor(f_bd_a0_o());
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}
}

object f_8b_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_92_a1_v(object a0)
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

void f_a9_a1_v(object a0)
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

object f_bd_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_c3_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddActor(L0, a1, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], a2);
	return L0;
}

bool f_cb_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_d7_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_dc_a0_v(void)
{
	@SetSepia(0, 0);
}

bool f_e1_a0_b(void)
{
	int L0;
	@GetVariable("b12q01KlaraInSobor", L0);
	return L0 != 0;
}

bool f_e8_a0_b(void)
{
	int L0;
	@GetVariable("b12q01DankoInSobor", L0);
	return L0 != 0;
}

