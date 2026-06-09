event OnTrigger 26;
event OnUnload 6;

var bool g0;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			object L0;
			L0 = f_59_a0_o();
			while (f_ec_a1_b(L0)) {
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
			if (!f_cc_a0_b()) {
				return;
			}
			if (f_f9_a1_b(a0)) {
				float L3;
				L3 = f_87_a2_f(a0, 0.10000000149011612);
				@ReportHit(a0, 5, L3, 0.10000000149011612);
			}
			@Sleep(1);
			if (!f_ec_a1_b(a0)) {
				break;
			}
		}
		@FogLinear(0, 1);
		L2->FadeOut(1);
		@Sleep(1);
	}
}

float f_51_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

object f_59_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_60_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_65_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_71_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_65_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_d7_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_87_a2_f(object a0, float a1)
{
	float L0;
	if (!f_65_a2_b(a0, "disease")) {
		return 0;
	}
	L0 = 0;
	if (f_65_a2_b(a0, "armor_disease")) {
		a0->GetProperty("armor_disease", L0);
		L0 = L0 / 100;
	}
	if (f_65_a2_b(a0, "immunity")) {
		float L1;
		a0->GetProperty("immunity", L1);
		L0 = L0 + L1;
		f_71_a5_b(a0, "immunity", -a1, 0, 1);
	}
	if (L0 >= 1) {
		return 0.0;
	}
	a1 = a1 * ((1 - L0) / 2);
	f_71_a5_b(a0, "disease", a1, 0, 1);
	if (f_60_a1_b(a0)) {
		f_e2_a1_v(a1);
	}
	return a1;
}

bool f_cc_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_d1_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_d7_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_e2_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(14, L0);
}

bool f_ec_a1_b(object a0)
{
	return a0 && f_51_a1_f(a0) < 360000.0;
}

bool f_f9_a1_b(object a0)
{
	return f_51_a1_f(a0) < 40000.0;
}

void OnTrigger(string a0)
{
	if (a0 == "cleanup") {
		bool L0;
		g0 = true;
		@IsLoaded(L0);
		if (!L0) {
			@RemoveActor(f_d1_a0_o());
		}
	} else {
		if (a0 == "restore") {
			g0 = false;
		}
	}
}

void OnUnload(void)
{
	if (g0) {
		@RemoveActor(f_d1_a0_o());
	}
}

