event OnTimer 7;
event OnCollision 10;
event OnDeath 41;
event OnUnload 6;

task t0
{
	void init(object a0)
	{
		float L0;
		Vector L1;
		Vector L2;
		@FogLinear(1, 1);
		@GetHeight(L0);
		L1 = [0.0, 0.0, 0.0];
		L1.y = L0;
		@PlayGlobalSound("breath", L1);
		a0->GetPFPosition(L2);
		@MovePoint(L2, 500);
		if (f_1b6_a1_b(a0)) {
			if (f_1d4_a2_f(f_117_a0_V(), f_11c_a1_V(a0)) <= 90000.0) {
				float L3;
				@PlaySound("attack");
				L3 = f_148_a2_f(a0, 0.25);
				@ReportHit(a0, 5, L3, 0.25);
			}
		}
		@SetVisirVisibility(false);
		@FogLinear(0, 2);
		@Sleep(5);
		@RemoveActor(f_1ce_a0_o());
	}
}

maintask t1
{
	void init(void)
	{
		object L0;
		@PutOnGrid();
		@FogLinear(1, 1);
		@SetTimer(10, 30);
		@FindActor(L0, "player");
		while (!t2{L0}) {
			@Sleep(0.5);
		}
		t0{L0};
		@RemoveActor(f_1ce_a0_o());
	}
}

task t2
{
	var bool tv0;
	var object tv1;

	bool init(object a0)
	{
		return f_80_a5_b(a0, 150, 0, false, false);
	}

	void OnTimer(int a0)
	{
		f_e6_a1_v(a0);
		global.OnTimer(a0);
	}

	bool f_80_a5_b(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		tv0 = false;
		tv1 = a0;
		L1 = a4;
		for (; ; ) {
			object L2;
			Vector L3;
			Vector L4;
			Vector L5;
			float L6;
			if (!f_10c_a1_b(a0)) {
				return false;
			}
			a0->GetPosition(L3);
			@GetPosition(L4);
			L5 = L3 - L4;
			L6 = L5 | L5;
			if (a2 > 0 && L6 > a2 * a2) {
				@Stop();
				return false;
			}
			if (L6 > a1 * a1) {
				object L7;
				a0->GetPFPosition(L3);
				@FindPathTo(L7, L3);
				if (L7 != null) {
					L2 = L7;
					L7 = null;
				}
				if (L2 != null) {
					if (L1) {
						L1 = false;
						@RotatePath(L2, L0);
						if (!L0) {
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
					@FollowPath(L2, a3, L0, f_113_a0_s(), f_115_a0_s());
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						} else {
							continue;
						}
					} else {
						L2 = null;
					}
				} else {
					@KillTimer(0);
					@Sleep(0.5, L0);
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
				}
			} else {
				@KillTimer(0);
				break;
			}
		}
		return !tv0;
	}

	void f_e6_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_10c_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_fc_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_fc_a0_v();
		global.OnDeath(a0);
	}
}

bool f_10c_a1_b(object a0)
{
	return f_1b6_a1_b(a0);
}

string f_113_a0_s(void)
{
	return "walk";
}

string f_115_a0_s(void)
{
	return "run";
}

Vector f_117_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_11c_a1_V(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return L0;
}

bool f_121_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_126_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_132_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_126_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_1d8_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_148_a2_f(object a0, float a1)
{
	float L0;
	if (!f_126_a2_b(a0, "disease")) {
		return 0;
	}
	L0 = 0;
	if (f_126_a2_b(a0, "armor_disease")) {
		a0->GetProperty("armor_disease", L0);
		L0 = L0 / 100;
	}
	if (f_126_a2_b(a0, "immunity")) {
		float L1;
		a0->GetProperty("immunity", L1);
		L0 = L0 + L1;
		f_132_a5_b(a0, "immunity", -a1, 0, 1);
	}
	if (L0 >= 1) {
		return 0.0;
	}
	a1 = a1 * ((1 - L0) / 2);
	f_132_a5_b(a0, "disease", a1, 0, 1);
	if (f_121_a1_b(a0)) {
		f_1e3_a1_v(a1);
	}
	return a1;
}

bool f_18d_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_192_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_18d_a1_b(a0)) {
		return false;
	}
	@GetScene(L0);
	if (L0 == null) {
		return false;
	}
	a0->GetScene(L1);
	if (L0 != L1) {
		return false;
	}
	return true;
}

bool f_1b6_a1_b(object a0)
{
	int L0;
	if (!f_192_a1_b(a0)) {
		return false;
	}
	if (!f_126_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

object f_1ce_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_1d4_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return L0 | L0;
}

float f_1d8_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_1e3_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(14, L0);
}

void OnDeath(object a0)
{
}

void OnTimer(int a0)
{
	if (a0 == 10) {
		@KillTimer(10);
		@SetVisirVisibility(false);
		@FogLinear(0, 2);
		@Sleep(2);
		@RemoveActor(f_1ce_a0_o());
		@Hold();
	}
}

void OnUnload(void)
{
	@RemoveActor(f_1ce_a0_o());
	@Hold();
}

