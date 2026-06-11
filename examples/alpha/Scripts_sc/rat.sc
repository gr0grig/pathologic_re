event OnSee 1;
event OnPropertyChange 16;
event OnAttacked 17;
event OnCollision 10;
event OnActorStuck 28;
event OnDeath 41;
event OnHit 22;
event OnTimer 7;

var float g0;

maintask t0
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		bool L0;
		@HasProperty("health", L0);
		if (L0) {
			float L1;
			@GetProperty("health", L1);
			g0 = L1;
		}
		for (; ; ) {
			f_3f_a0_v();
		}
	}

	void OnSee(object a0)
	{
		if (f_3de_a1_b(a0)) {
			f_7f_a0_v();
			f_3e5_a1_v(a0);
		}
	}

	void OnPropertyChange(object a0, string a1)
	{
		if (f_400_a2_b(a0, a1)) {
			f_7f_a0_v();
		}
		f_41b_a2_v(a0, a1);
	}

	void OnAttacked(object a0)
	{
		if (!f_391_a1_b(a0)) {
			return;
		}
		f_7f_a0_v();
		f_3ef_a1_v(a0);
	}

	void f_3f_a0_v(void)
	{
		float L0;
		tv0 = false;
		tv1 = false;
		@rand(L0, 0.5);
		@Sleep(L0);
		while (!tv0) {
			Vector L1;
			if (!tv1) {
				for (; ; ) {
					Vector L2;
					float L3;
					bool L4;
					@GetPosition(L2);
					@GetCameraFarDistance(L3);
					L3 = L3 * 2.5;
					@GetRandomPFPointInCircle(L1, L2, L3, L4);
					if (L4) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L5;
			@FindShiftedPathTo(L5, L1);
			if (L5 != null) {
				bool L6;
				@RotatePath(L5, L6);
				if (L6) {
					@FollowPath(L5, f_8f_a0_b(), L6);
					L5 = null;
					if (L6) {
						t1{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void OnActorStuck(void)
	{
		@Stop();
	}

	void f_7f_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_7f_a0_v();
		global.OnDeath(a0);
	}

	bool f_8f_a0_b(void)
	{
		return false;
	}
}

task t1
{
	void init(void)
	{
	}
}

task t2
{
	void init(void)
	{
		@Speak("death");
		f_9a_a1_v("die");
	}

	void f_9a_a1_v(string a0)
	{
		f_a3_a1_v(a0);
		for (; ; ) {
			@Hold();
		}
	}

	void f_a3_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		@PlayAnimation("all", a0);
		@WaitForAnimEnd();
		@LockAnimationEnd("all", a0);
		@RemoveEnvelope();
	}

	void OnHit(object a0, int a1, float a2, float a3)
	{
	}

	void OnPropertyChange(object a0, string a1)
	{
	}

	void OnDeath(object a0)
	{
	}
}

task t3
{
	var object tv0;

	void init(object a0)
	{
		float L0;
		float L1;
		tv0 = a0;
		@GetAttackDistance(L0);
		L1 = L0 + 10;
		@Face(tv0);
		for (; f_3d1_a1_b(tv0); ) {
			bool L2;
			Vector L3;
			Vector L4;
			Vector L5;
			float L6;
			tv0->GetPosition(L3);
			@GetPosition(L4);
			L5 = L3 - L4;
			L6 = L5 | L5;
			if (L6 < L1 * L1) {
				int L7;
				@irand(L7, 2);
				@Speak("attack" + (L7 + 1));
				@SetAttackState(true);
				@PlayAnimation("all", "attack_begin");
				@WaitForAnimEnd(L2);
				if (!L2) {
					@SetAttackState(false);
					break;
				}
				if (f_391_a1_b(tv0)) {
					object L8;
					@GetVictim(L0, L8);
					@ReportAttack(tv0);
					if (L8 == tv0) {
						float L9;
						L9 = f_328_a3_f(L8, 0.05000000074505806, 0);
						@ReportHit(tv0, 0, L9, 0.05000000074505806);
					}
				}
				@SetAttackState(false);
				@PlayAnimation("all", "attack_end");
				@WaitForAnimEnd(L2);
				if (!L2) {
					break;
				}
			} else {
				@StopAsync();
				if (!t4{tv0, L1}) {
					break;
				}
				@Face(tv0);
			}
		}
		@StopAsync();
	}

	void OnPropertyChange(object a0, string a1)
	{
		if (f_400_a2_b(a0, a1)) {
			f_133_a0_v();
		}
		f_41b_a2_v(a0, a1);
	}

	void f_133_a0_v(void)
	{
		@Stop();
		@StopAnimation();
		@StopAsync();
	}

	void OnDeath(object a0)
	{
		f_133_a0_v();
		global.OnDeath(a0);
	}
}

task t4
{
	var bool tv0;
	var object tv1;

	bool init(object a0, float a1)
	{
		bool L0;
		f_156_a0_v();
		L0 = f_18f_a5_b(a0, a1 * 0.8999999761581421, 5000, true, true);
		f_160_a0_v();
		return L0;
	}

	void f_156_a0_v(void)
	{
		float L0;
		@rand(L0, 10);
		@SetTimer(111, L0 + 10);
	}

	void f_160_a0_v(void)
	{
		@KillTimer(111);
	}

	void OnPropertyChange(object a0, string a1)
	{
		if (f_400_a2_b(a0, a1)) {
			f_174_a0_v();
		}
		f_41b_a2_v(a0, a1);
	}

	void f_174_a0_v(void)
	{
		f_160_a0_v();
		f_1f9_a0_v();
	}

	void OnDeath(object a0)
	{
		f_174_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 == 111) {
			@Speak("run");
			f_156_a0_v();
		}
	}

	bool f_18f_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_200_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_207_a0_s(), f_209_a0_s());
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

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_1f9_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	bool f_200_a1_b(object a0)
	{
		return f_391_a1_b(a0);
	}

	string f_207_a0_s(void)
	{
		return "walk";
	}

	string f_209_a0_s(void)
	{
		return "run";
	}
}

task t5
{
	var object tv0;
	var Vector tv1;
	var bool tv2;
	var object tv3;

	void init(object a0)
	{
		tv3 = a0;
		@Speak("retreat");
		@SetTimer(110, 1);
		f_27d_a1_v(a0);
		@KillTimer(110);
	}

	void OnTimer(int a0)
	{
		if (a0 == 110) {
			if (!f_391_a1_b(tv3)) {
				f_24f_a0_v();
			} else {
				Vector L0;
				Vector L1;
				@GetPosition(L0);
				tv3->GetPosition(L1);
				if (f_3b3_a2_f(L0, L1) >= 2250000.0) {
					f_24f_a0_v();
				}
			}
		} else {
			f_2bd_a1_v(a0);
		}
	}

	void OnPropertyChange(object a0, string a1)
	{
		if (f_400_a2_b(a0, a1)) {
			f_24f_a0_v();
		}
		f_41b_a2_v(a0, a1);
	}

	void f_24f_a0_v(void)
	{
		@KillTimer(110);
		f_2f1_a0_v();
	}

	void OnDeath(object a0)
	{
		f_24f_a0_v();
		global.OnDeath(a0);
	}

	Vector f_25f_a1_V(float a0)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		Vector L3;
		Vector L4;
		float L5;
		@GetPosition(L0);
		tv0->GetPosition(L1);
		@GetDirection(L2);
		L3 = f_3a9_a1_V(f_3a9_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_27d_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_25f_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 10000.0) {
			@Trace("Can't retreat, distance: " + sqrt(L1));
			@Sleep(0.5);
			return;
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_310_a0_V() + L0;
		@SetTimer(120, 0.5);
		tv2 = false;
		do {
			bool L2;
			@MovePoint(tv1, 1, L2);
			if (L2) {
				Vector L3;
				float L4;
				if (tv0 == null) {
					break;
					continue;
				}
				L3 = f_25f_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 10000.0) {
					tv1 = f_310_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void f_2bd_a1_v(int a0)
	{
		if (a0 != 120) {
			return;
		}
		if (tv0 == null) {
			@Stop();
			@KillTimer(1);
			tv2 = true;
		} else {
			Vector L0;
			float L1;
			Vector L2;
			float L3;
			@GetDirection(L0);
			@FindDirLength(L1, L0, 7000.0);
			L2 = f_25f_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 10000.0 && (L3 >= L1 * L1 * 2.25 || f_2f8_a0_b())) {
				@Stop();
				tv1 = f_310_a0_V() + L2;
			}
		}
	}

	void f_2f1_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	bool f_2f8_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_315_a1_V(tv0);
		return f_3c9_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

string f_308_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

Vector f_310_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_315_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

bool f_31c_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_328_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_31c_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_31c_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_308_a1_s(a2);
	if (!f_31c_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_3b7_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_3be_a3_f(L4 - L5, 0, 1));
	return L5;
}

bool f_368_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_36d_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_368_a1_b(a0)) {
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

bool f_391_a1_b(object a0)
{
	int L0;
	if (!f_36d_a1_b(a0)) {
		return false;
	}
	if (!f_31c_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

Vector f_3a9_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_3b3_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return L0 | L0;
}

float f_3b7_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_3be_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_3c9_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

bool f_3d1_a1_b(object a0)
{
	bool L0;
	if (!f_391_a1_b(a0)) {
		return false;
	}
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_3de_a1_b(object a0)
{
	return f_3d1_a1_b(a0);
}

void f_3e5_a1_v(object a0)
{
	t3{a0};
	@ResetAAS();
}

void f_3ef_a1_v(object a0)
{
	t3{a0};
	@ResetAAS();
}

void f_3f9_a1_v(object a0)
{
	t2{};
}

bool f_400_a2_b(object a0, string a1)
{
	if (a1 == "health") {
		float L0;
		bool L1;
		@GetProperty("health", L0);
		L1 = L0 < g0;
		g0 = L0;
		if (L1 && f_391_a1_b(a0)) {
			return true;
		}
	}
	return false;
}

void f_41b_a2_v(object a0, string a1)
{
	if (a1 == "health") {
		float L0;
		@GetProperty("health", L0);
		if (L0 <= 0) {
			@SignalDeath(a0);
		}
		if (L0 < g0 && f_391_a1_b(a0)) {
			t5{a0};
		}
	}
}

void OnDeath(object a0)
{
	f_3f9_a1_v(a0);
}

