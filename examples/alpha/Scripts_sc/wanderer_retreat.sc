event OnLoad 5;
event OnUse 0;
event OnUnload 6;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnSteal 40;
event OnMessage 42;
event OnCollision 10;
event OnActorStuck 28;
event OnTimer 7;

task t0
{
	void init(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

task t1
{
	void init(object a0)
	{
		disable OnUse;
		f_27_a1_v(a0);
		f_4b5_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_4b0_a1_i(a0);
		if (L0 > 0) {
			f_4b3_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_4b7_a0_v();
	}

	void f_27_a1_v(object a0)
	{
		if (a0 == null) {
			f_7e_a1_v("fdie");
		} else {
			Vector L0;
			a0->GetPosition(L0);
			Vector L1;
			@GetPosition(L1);
			Vector L2;
			@GetDirection(L2);
			Vector L3;
			L3 = L1 - L0;
			string L4;
			if (L3.x * L2.x + L3.z * L2.z >= 0) {
				L4 = "fdie";
			} else {
				L4 = "bdie";
			}
			@RemoveRTEnvelope();
			@SetDeathState();
			@Stop();
			@StopAsync();
			object L5;
			L5 = a0;
			if (a0->FuncExist("GetScriptProperty", 2)) {
				bool L6;
				a0->HasScriptProperty(L6, "Owner");
				if (L6) {
					a0->GetScriptProperty(L5, "Owner");
					if (L5 == null) {
						L5 = a0;
					}
				}
			}
			bool L7;
			if (L5->FuncExist("@GetEyesHeight", 1)) {
				float L8;
				Vector L9;
				L5->GetEyesHeight(L8);
				L9 = [0.0, 0.0, 0.0];
				L9.y = L8;
				@LookAsync(a0, "head", L9);
				L7 = true;
			} else {
				L7 = false;
			}
			@PlayAnimation("all", L4);
			@WaitForAnimEnd();
			if (L7) {
				@StopAsync();
				@UnlookAsync("head");
			}
			@LockAnimationEnd("all", L4);
			@RemoveEnvelope();
		}
	}

	void f_7e_a1_v(string a0)
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

maintask t2
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		@SensePlayerOnly(true);
		f_4c7_a0_v();
		f_a8_a0_v();
		for (; ; ) {
			f_124_a0_v();
		}
	}

	void f_a8_a0_v(void)
	{
		if (!f_43a_a0_b()) {
			f_4b7_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_4b0_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_164_a0_v();
			}
			f_4b3_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_48c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_164_a0_v();
			}
			f_496_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_4c8_a2_b(a0, a1)) {
			int L0;
			L0 = f_49e_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_164_a0_v();
				}
				f_4a8_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_4bd_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_164_a0_v();
			}
			f_4c0_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_4c2_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_164_a0_v();
			}
			f_4c5_a2_v(a1, a0);
		}
	}

	void OnUnload(void)
	{
		f_164_a0_v();
		f_4b7_a0_v();
	}

	void f_124_a0_v(void)
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
					@FollowPath(L5, f_174_a0_b(), L6);
					L5 = null;
					if (L6) {
						t3{};
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

	void f_164_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_164_a0_v();
		global.OnDeath(a0);
	}

	bool f_174_a0_b(void)
	{
		return false;
	}
}

task t3
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_4b0_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_22e_a0_v();
			}
			f_4b3_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_48c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_22e_a0_v();
			}
			f_496_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_4c8_a2_b(a0, a1)) {
			int L0;
			L0 = f_49e_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_22e_a0_v();
				}
				f_4a8_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_4bd_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_22e_a0_v();
			}
			f_4c0_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_4c2_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_22e_a0_v();
			}
			f_4c5_a2_v(a1, a0);
		}
	}

	void OnUnload(void)
	{
		f_22e_a0_v();
		f_4b7_a0_v();
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_43a_a0_b()) {
			return;
		}
		L0 = f_47b_a0_i();
		L1 = 0;
		for (; L1 < 5 && f_43a_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_474_a1_s(L3));
					@WaitForAnimEnd(L4);
					if (!L4) {
						break;
					}
				}
			} else {
				if (L2 == 1) {
					float L5;
					bool L6;
					@rand(L5, 4);
					@Sleep(L5 + 1, L6);
					if (!L6) {
						break;
					}
					continue;
				}
				if (L1) {
					break;
				}
			}
		}
	}

	void f_22e_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t4
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_2cc_a0_v();
		f_4b7_a0_v();
	}

	Vector f_23a_a1_V(float a0)
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
		L3 = f_43f_a1_V(f_43f_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void init(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_23a_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 10000.0) {
			@Trace("Can't retreat, distance: " + sqrt(L1));
			@Sleep(0.5);
			return;
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_39e_a0_V() + L0;
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
				L3 = f_23a_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 10000.0) {
					tv1 = f_39e_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void OnTimer(int a0)
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
			L2 = f_23a_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 10000.0 && (L3 >= L1 * L1 * 2.25 || f_2dc_a0_b())) {
				@Stop();
				tv1 = f_39e_a0_V() + L2;
			}
		}
	}

	void f_2cc_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_2cc_a0_v();
		global.OnDeath(a0);
	}

	bool f_2dc_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_3a3_a1_V(tv0);
		return f_449_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t5
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_2ec_a1_V(float a0)
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
		L3 = f_43f_a1_V(f_43f_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void init(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_2ec_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 10000.0) {
			@Trace("Can't retreat, distance: " + sqrt(L1));
			@Sleep(0.5);
			return;
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_39e_a0_V() + L0;
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
				L3 = f_2ec_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 10000.0) {
					tv1 = f_39e_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void OnTimer(int a0)
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
			L2 = f_2ec_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 10000.0 && (L3 >= L1 * L1 * 2.25 || f_38e_a0_b())) {
				@Stop();
				tv1 = f_39e_a0_V() + L2;
			}
		}
	}

	void f_37e_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_37e_a0_v();
		global.OnDeath(a0);
	}

	bool f_38e_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_3a3_a1_V(tv0);
		return f_449_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_39e_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_3a3_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

bool f_3aa_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_3b6_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_3bb_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_3b6_a1_b(a0)) {
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

bool f_3df_a1_b(object a0)
{
	int L0;
	if (!f_3bb_a1_b(a0)) {
		return false;
	}
	if (!f_3aa_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_3f7_a3_v(object a0, int a1, float a2)
{
	if (a1 != 4 && a1 != 5) {
		object L0;
		object L1;
		Vector L2;
		float L3;
		@GetScene(L0);
		@GetPosition(L2);
		@GetEyesHeight(L3);
		L2.y += L3 / 2;
		@AddActorByType(L1, "scripted", L0, L2, [0.0, 0.0, 1.0], "blood.xml");
	}
	if (a0 == null) {
		return;
	}
	int L4;
	@GetSecondaryAnimationType(L4);
	if (L4 < 0) {
		return;
	}
	Vector L5;
	a0->GetPosition(L5);
	Vector L6;
	@GetPosition(L6);
	Vector L7;
	@GetDirection(L7);
	Vector L8;
	L8 = L6 - L5;
	string L9;
	if (L8.x * L7.x + L8.z * L7.z >= 0) {
		L9 = "fhit";
	} else {
		L9 = "bhit";
	}
	@FadeSecondaryAnimation("hit_react", L9 + "1", L9 + "2", -10);
}

bool f_43a_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

Vector f_43f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_449_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

void f_451_a1_v(object a0)
{
	t1{a0};
}

void OnPropertyChange(object a0, string a1)
{
	if (a1 == "health") {
		float L0;
		@GetProperty("health", L0);
		if (L0 <= 0) {
			@SignalDeath(a0);
		}
	}
}

void OnDeath(object a0)
{
	f_451_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_3f7_a3_v(a0, a1, a2);
}

string f_474_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_47b_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_474_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_48c_a1_i(object a0)
{
	return f_3df_a1_b(a0) ? 2 : 0;
}

void f_496_a1_v(object a0)
{
	t4{a0};
}

int f_49e_a1_i(object a0)
{
	return f_3df_a1_b(a0) ? 2 : 0;
}

void f_4a8_a1_v(object a0)
{
	t5{a0};
}

int f_4b0_a1_i(object a0)
{
	return 0;
}

void f_4b3_a1_v(object a0)
{
}

void f_4b5_a1_v(object a0)
{
}

void f_4b7_a0_v(void)
{
	t0{};
}

int f_4bd_a1_i(object a0)
{
	return 0;
}

void f_4c0_a1_v(object a0)
{
}

int f_4c2_a2_i(string a0, object a1)
{
	return 0;
}

void f_4c5_a2_v(string a0, object a1)
{
}

void f_4c7_a0_v(void)
{
}

bool f_4c8_a2_b(object a0, object a1)
{
	return true;
}

