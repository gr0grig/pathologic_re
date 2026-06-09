event OnLoad 5;
event OnUnload 6;

maintask t0
{
	void OnLoad(void)
	{
		f_18_a0_v();
		f_99_a2_b("quest_k7_01", "theater_load");
		f_99_a2_b("quest_k12_01", "theater_load");
	}

	void OnUnload(void)
	{
		f_99_a2_b("quest_k12_01", "theater_unload");
	}

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}
}

void f_18_a0_v(void)
{
	if (f_b6_a0_b()) {
		int L0;
		int L1;
		object L2;
		object L3;
		L0 = f_a5_a0_i();
		@SetVariable("Performance" + L0, 1);
		@AddActor(L2, "cs_mask_klara", f_93_a0_o(), [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "cs_mask_klara.xml");
		L2->ForceGeometryLoad();
		L3 = f_61_a0_o();
		f_68_a1_v(L3);
		@CameraPlay("cs_mask_klara" + (L0 - 1) + ".mot");
		@PlayGlobalMusic("nightmask" + (L0 - 1) + ".ogg");
		@CameraWaitForPlayFinish();
		@PlayGlobalMusic("");
		f_7f_a1_v(L3);
		@CameraSwitchToNormal();
		@RemoveActor(L2);
		@PlayMovie("NightMasks" + (L0 - 1) + ".wmv");
	}
}

object f_61_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_68_a1_v(object a0)
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

void f_7f_a1_v(object a0)
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

object f_93_a0_o(void)
{
	object L0;
	@self(L0);
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

int f_a5_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_ae_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_b6_a0_b(void)
{
	int L0;
	L0 = f_ae_a0_i();
	if (L0 < 6) {
		int L1;
		L1 = f_a5_a0_i();
		if (L1 > 1) {
			int L2;
			@GetVariable("Performance" + L1, L2);
			return L2 == 0;
		}
	}
	return false;
}

