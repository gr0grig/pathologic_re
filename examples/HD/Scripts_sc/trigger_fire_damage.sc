event OnIntersection 23;
event OnStopIntersection 27;
event OnTrigger 26;
event OnUnload 6;

var object g0;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		g0 = f_10a_a0_o();
		for (; ; ) {
			int L0;
			int L1;
			@Sleep(1);
			g0->size(L0);
			L1 = 0;
			while (L1 < L0) {
				object L2;
				g0->get(L2, L1);
				if (!L2) {
					g0->remove(L1);
				} else {
					float L3;
					@Trace("Damaging: " + L2);
					L3 = f_a9_a3_f(L2, 0.800000011920929, 2);
					@ReportHit(L2, f_f2_a0_o(), 4, L3, 0.800000011920929);
					L1 = L1 + 1;
				}
			}
		}
	}

	void OnIntersection(object a0)
	{
		if (f_9d_a2_b(a0, "health")) {
			@Trace("New damage target: " + a0);
			g0->add(a0);
		}
	}

	void OnStopIntersection(object a0)
	{
		int L0;
		int L1;
		g0->size(L0);
		L1 = 0;
		for (; L1 < L0; ) {
			object L2;
			g0->get(L2, L1);
			if (L2 == a0) {
				g0->remove(L1);
				L0 = L0 + -1;
			} else {
				L1 = L1 + 1;
				continue;
			}
		}
		@Trace("Removed damage target: " + a0);
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_88_a0_b()) {
				@RemoveActor(f_f2_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_88_a0_b()) {
			@RemoveActor(f_f2_a0_o());
		}
	}
}

bool f_88_a0_b(void)
{
	return true;
}

string f_8a_a1_s(int a0)
{
	if (a0 == 2) {
		return "fire";
	} else {
		if (a0 == 1) {
			return "bullet";
		}
	}
	return "phys";
}

bool f_98_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_9d_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_a9_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_9d_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_9d_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_8a_a1_s(a2);
	if (!f_9d_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_f8_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_ff_a3_f(L4 - L5, 0, 1));
	if (f_98_a1_b(a0)) {
		f_110_a1_v(-L5);
	}
	return L5;
}

object f_f2_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_f8_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_ff_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_10a_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

void f_110_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

