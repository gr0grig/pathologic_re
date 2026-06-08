event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		object L0;
		@SetVariable("k5q03", 1);
		if (f_12f_a0_i() < 21) {
			@SetTimeEvent(1, 117);
		} else {
			f_63_a0_v();
		}
		@CreateObjectVector(tv1);
		@GetMainOutdoorScene(L0);
		tv1->add(f_e5_a4_o(L0, "pt_k5q03_enemy1", "pers_hunter", "k5q03_e_hunter.xml"));
		tv1->add(f_e5_a4_o(L0, "pt_k5q03_enemy2", "pers_hunter", "k5q03_e_hunter.xml"));
		tv1->add(f_e5_a4_o(L0, "pt_k5q03_enemy3", "pers_hunter", "k5q03_e_hunter.xml"));
		tv1->add(f_e5_a4_o(L0, "pt_k5q03_enemy4", "pers_hunter", "k5q03_e_hunter.xml"));
		f_c2_a1_v(5);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "abinos_unload") {
			f_63_a0_v();
		} else {
			if (a0 == "completed") {
				f_a9_a0_v();
			}
		}
	}

	void OnGameTime(int a0, float a1)
	{
		if (a0 == 1) {
			@Trace("spawning albinos");
			f_63_a0_v();
		} else {
			f_d5_a2_v(a0, a1);
		}
	}

	void f_63_a0_v(void)
	{
		object L0;
		object L1;
		@GetMainOutdoorScene(L0);
		@GetScene(L1);
		if (L0 != L1) {
			@SetVariable("pt_k5q03_albinos_path", -1);
			tv0 = f_f7_a4_o(L0, "pt_k5q03_albinos_path" + (f_182_a1_i("pt_k5q03_albinos_path") + 1), "pers_albinos", "k5q03_albinos.xml");
		} else {
			int L2;
			L2 = f_157_a1_i("pt_k5q03_albinos_path");
			@Trace(L2);
			@SetVariable("pt_k5q03_albinos_path", L2);
			tv0 = f_109_a4_o(L0, "pt_k5q03_albinos_path" + (L2 + 1), "pers_albinos", "k5q03_albinos.xml");
		}
	}

	void f_96_a0_v(void)
	{
		int L0;
		@GetVariable("k5q03", L0);
		if (L0 != 1000) {
			f_a1_a0_v();
		}
	}

	void f_a1_a0_v(void)
	{
		@SetVariable("k5q03", -1);
		f_b1_a0_v();
	}

	void f_a9_a0_v(void)
	{
		@SetVariable("k5q03", 1000);
		f_b1_a0_v();
	}

	void f_b1_a0_v(void)
	{
		disable OnTrigger;
		disable OnGameTime;
		f_11c_a2_v(tv1, "cleanup");
		if (tv0) {
			tv0->Remove();
		}
		@RemoveActor(f_df_a0_o());
	}

	void f_c2_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_b1_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void f_d5_a2_v(int a0, float a1)
	{
		f_96_a0_v();
	}
}

Vector f_da_a1_V(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return L0;
}

object f_df_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_e5_a4_o(object a0, string a1, string a2, string a3)
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

object f_f7_a4_o(object a0, string a1, string a2, string a3)
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
		a0->AddStationaryActor(L3, L1, L2, a2, a3);
	}
	return L3;
}

object f_109_a4_o(object a0, string a1, string a2, string a3)
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
		a0->AddStationaryActor(L3, L1, L2, a2, a3, true);
	}
	return L3;
}

void f_11c_a2_v(object a0, string a1)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@Trigger(L2, a1);
			}
		}
	}
}

int f_12f_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_137_a1_b(Vector a0)
{
	return f_147_a1_f(a0) < 12250000.0;
}

bool f_13f_a1_b(Vector a0)
{
	return f_147_a1_f(a0) < 4000000.0;
}

float f_147_a1_f(Vector a0)
{
	object L0;
	Vector L1;
	@FindActor(L0, "player");
	if (!L0) {
		return 0;
	}
	L1 = f_da_a1_V(L0) - a0;
	return L1 | L1;
}

int f_157_a1_i(string a0)
{
	Vector L0;
	int L1;
	object L2;
	int L3;
	L1 = -1;
	@GetMainOutdoorScene(L2);
	L3 = -1;
	for (; ; ) {
		bool L4;
		Vector L5;
		Vector L6;
		L3 = L3 + 1;
		L2->GetLocator(a0 + (L3 + 1), L4, L5, L6);
		if (!L4) {
			break;
		}
		if (!f_137_a1_b(L5)) {
			continue;
		}
		if (f_13f_a1_b(L5)) {
			continue;
		}
		if (L3 < L1) {
			continue;
		}
		L1 = L3;
		L0 = L5;
	}
	return L1 == -1 ? L3 - 1 : L1;
}

int f_182_a1_i(string a0)
{
	object L0;
	int L1;
	@GetMainOutdoorScene(L0);
	for (L1 = 0; ; L1 = L1 + 1) {
		bool L2;
		Vector L3;
		Vector L4;
		L0->GetLocator(a0 + (L1 + 1), L2, L3, L4);
		if (!L2) {
			break;
		}
	}
	return L1;
}

