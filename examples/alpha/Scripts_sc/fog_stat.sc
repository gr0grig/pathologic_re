maintask t0
{
	void init(void)
	{
		for (; ; ) {
			object L0;
			L0 = f_53_a0_o();
			while (f_c6_a1_b(L0)) {
				t1{L0};
			}
			@Sleep(1);
		}
	}
}

task t1
{
	void init(object a0)
	{
		float L0;
		Vector L1;
		object L2;
		@GetHeight(L0);
		L1 = [0.0, 0.0, 0.0];
		L1.y = L0;
		@PlayLoopedGlobalSound(L2, "attack", L1);
		@FogLinear(1, 1);
		for (; ; ) {
			if (f_d3_a1_b(a0)) {
				float L3;
				L3 = f_7c_a2_f(a0, 0.10000000149011612);
				@ReportHit(a0, 5, L3, 0.10000000149011612);
			}
			@Sleep(1);
			if (!f_c6_a1_b(a0)) {
				break;
			}
		}
		@FogLinear(0, 1);
		L2->FadeOut(1);
		@Sleep(1);
	}
}

float f_4b_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

object f_53_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_5a_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_66_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_5a_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_bb_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_7c_a2_f(object a0, float a1)
{
	if (!f_5a_a2_b(a0, "disease")) {
		return 0;
	}
	if (f_5a_a2_b(a0, "armor_disease")) {
		int L0;
		a0->GetProperty("armor_disease", L0);
		if (L0 < 100) {
			a1 = a1 * (1 - L0 / 100.0);
		} else {
			return 0;
		}
	}
	float L1;
	if (f_5a_a2_b(a0, "immunity")) {
		float L2;
		a0->GetProperty("immunity", L2);
		if (L2 < a1) {
			a0->SetProperty("immunity", 0);
			L1 = a1 - L2;
		} else {
			a0->SetProperty("immunity", L2 - a1);
			return a1;
		}
	}
	f_66_a5_b(a0, "disease", L1, 0, 1);
	return a1;
}

float f_bb_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_c6_a1_b(object a0)
{
	return a0 && f_4b_a1_f(a0) < 160000.0;
}

bool f_d3_a1_b(object a0)
{
	return f_4b_a1_f(a0) < 40000.0;
}

