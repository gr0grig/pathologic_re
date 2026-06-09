event OnIntersection 23;
event OnKeyDown 24;
event OnTrigger 26;
event OnUnload 6;

maintask t0
{
	var bool tv0;

	void OnIntersection(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		disable OnIntersection;
		t1{};
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_41_a0_b()) {
				@RemoveActor(f_de_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_41_a0_b()) {
			@RemoveActor(f_de_a0_o());
		}
	}

	bool f_41_a0_b(void)
	{
		return true;
	}
}

task t1
{
	void init(void)
	{
		object L0;
		object L1;
		object L2;
		object L3;
		@SetVariable("b10q02Cutscene", 1);
		@GetMainOutdoorScene(L0);
		L1 = f_e4_a0_o();
		L2 = f_ea_a3_o(L0, "cs_b10q02_girl", "cs_play_all.bin");
		L2->ForceGeometryLoad();
		L1->add(L2);
		L2 = f_ea_a3_o(L0, "cs_b10q02_boy", "cs_play_all.bin");
		L2->ForceGeometryLoad();
		L1->add(L2);
		L2 = f_ea_a3_o(L0, "cs_b10q02_doberman", "cs_play_all.bin");
		L2->ForceGeometryLoad();
		L1->add(L2);
		L2 = f_ea_a3_o(L0, "cs_b10q02_littleboy", "cs_play_all.bin");
		L2->ForceGeometryLoad();
		L1->add(L2);
		L3 = f_ac_a0_o();
		f_113_a0_v();
		f_b3_a1_v(L3);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_b10q02.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		f_ca_a1_v(L3);
		f_118_a0_v();
		@CameraSwitchToNormal();
		f_fe_a1_v(L1);
		f_f2_a2_b("quest_b10_02", "place_bomb");
		@RemoveActor(f_de_a0_o());
	}
}

object f_ac_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_b3_a1_v(object a0)
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

void f_ca_a1_v(object a0)
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

object f_de_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_e4_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_ea_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddScriptedActor(L0, a1, a2, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	return L0;
}

bool f_f2_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_fe_a1_v(object a0)
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

void f_113_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_118_a0_v(void)
{
	@SetSepia(0, 0);
}

