maintask t0
{
	var object tv0;
	var Vector tv1;
	var float tv2;

	void init(void)
	{
		@GetScene(tv0);
		@GetPosition(tv1);
		tv1.y = 0;
		for (; ; ) {
			float L0;
			@sync(L0);
			f_10_a1_v(L0);
		}
	}

	void f_10_a1_v(float a0)
	{
		object L0;
		object L1;
		Vector L2;
		float L3;
		float L4;
		@GetScene(L0);
		@GetMainOutdoorScene(L1);
		if (L1 != L0) {
			return;
		}
		@GetPosition(L2);
		L2.y = 0;
		L3 = f_194_a2_f(L2, tv1);
		if (L0 != tv0 || L3 > 1000) {
			tv0 = L0;
			tv1 = L2;
			return;
		}
		@rand(L4, 0.5);
		L4 = L4 + 0.5;
		tv2 = tv2 + L4 * L3 / 100.0;
		tv1 = L2;
		tv0 = L0;
		if (tv2 > 50.0) {
			f_4f_a1_v(f_17c_a0_i());
			tv2 = 0;
		}
		@SetProperty("walk_distance", 1000 * tv2 / 50.0);
	}
}

void f_4f_a1_v(int a0)
{
	if (a0 == 6) {
		f_88_a0_v();
	} else {
		if (a0 >= 1 && a0 <= 5) {
			f_b2_a0_v();
		} else {
			if (a0 == 0 || a0 >= 7 && a0 <= 13) {
				f_f0_a0_v();
			} else {
				if (a0 == 14 || a0 == 15) {
					f_139_a0_v();
				}
			}
		}
	}
}

void f_88_a0_v(void)
{
	if (f_199_a1_b(0.14000000059604645)) {
		int L0;
		@irand(L0, 3);
		if (L0 == 0) {
			f_1d3_a4_v("flower", 1, 5, 1);
		} else {
			if (L0 == 1) {
				f_1d3_a4_v("peanut", 1, 5, 1);
			} else {
				if (L0 == 2) {
					f_1d3_a4_v("hook", 1, 5, 1);
				}
			}
		}
	}
}

void f_b2_a0_v(void)
{
	if (f_199_a1_b(0.14000000059604645)) {
		int L0;
		@irand(L0, 2);
		if (L0 == 0) {
			f_1d3_a4_v("beads", 1, 9, 1);
		} else {
			if (L0 == 1) {
				f_1d3_a4_v("bracelet", 1, 5, 1);
			}
		}
	} else {
		if (f_199_a1_b(0.10000000149011612)) {
			int L1;
			@irand(L1, 10);
			f_1af_a2_v(f_18e_a0_o(), L1 + 1);
		} else {
			int L2;
			@irand(L2, 3);
			f_1af_a2_v(f_18e_a0_o(), L2 + 1);
		}
	}
}

void f_f0_a0_v(void)
{
	if (f_199_a1_b(0.14000000059604645)) {
		int L0;
		@irand(L0, 3);
		if (L0 == 0) {
			f_1d3_a4_v("silver_ring", 1, 5, 1);
		} else {
			if (L0 == 1) {
				f_1d3_a4_v("gold_ring", 1, 10, 1);
			} else {
				if (L0 == 2) {
					f_1d3_a4_v("funduk", 1, 5, 1);
				}
			}
		}
	} else {
		if (f_199_a1_b(0.10000000149011612)) {
			int L1;
			@irand(L1, 10);
			f_1af_a2_v(f_18e_a0_o(), L1 + 1);
		} else {
			int L2;
			@irand(L2, 3);
			f_1af_a2_v(f_18e_a0_o(), L2 + 1);
		}
	}
}

void f_139_a0_v(void)
{
	if (f_199_a1_b(0.14000000059604645)) {
		int L0;
		@irand(L0, 2);
		if (L0 == 0) {
			f_1d3_a4_v("needle", 1, 6, 1);
		} else {
			if (L0 == 1) {
				f_1d3_a4_v("razor", 1, 7, 1);
			}
		}
	} else {
		if (f_199_a1_b(0.10000000149011612)) {
			int L1;
			@irand(L1, 10);
			f_1af_a2_v(f_18e_a0_o(), L1 + 1);
		} else {
			int L2;
			@irand(L2, 3);
			f_1af_a2_v(f_18e_a0_o(), L2 + 1);
		}
	}
}

Vector f_177_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

int f_17c_a0_i(void)
{
	object L0;
	int L1;
	@GetScene(L0);
	L0->GetRegionByPt(L1, f_177_a0_V());
	return L1;
}

void f_187_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

object f_18e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_194_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return sqrt(L0 | L0);
}

bool f_199_a1_b(float a0)
{
	float L0;
	@rand(L0);
	return L0 < a0;
}

bool f_19e_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

void f_1a3_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1af_a2_v(object a0, int a1)
{
	f_187_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1a3_a2_v(L0, a1);
	}
}

bool f_1c2_a3_b(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (L2) {
		f_1a3_a2_v(L0, a2);
	}
	return L2;
}

void f_1d3_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_19e_a2_b(a1, a2)) {
		int L0;
		object L1;
		@irand(L0, a3);
		@CreateInvItem(L1);
		L1->SetItemName(a0);
		f_1c2_a3_b(f_18e_a0_o(), L1, L0 + 1);
	}
}

