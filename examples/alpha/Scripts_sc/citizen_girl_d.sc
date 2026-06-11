event OnUse 0;
event OnUnload 6;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnSteal 40;
event OnMessage 42;
event OnSee 1;
event OnHear 3;
event OnTimer 7;
event OnCollision 10;
event OnActorStuck 28;

var bool g0;

task t0
{
	void init(object a0)
	{
		disable OnUse;
		f_21_a1_v(a0);
		f_6fc_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_666_a1_i(a0);
		if (L0 > 0) {
			f_669_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_66f_a0_v();
	}

	void f_21_a1_v(object a0)
	{
		if (a0 == null) {
			f_78_a1_v("fdie");
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

	void f_78_a1_v(string a0)
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

maintask t1
{
	var bool tv0;
	var bool tv1;
	var bool tv2;

	void init(void)
	{
		@SensePlayerOnly(true);
		f_6bf_a0_v();
		f_a3_a0_v();
		for (; ; ) {
			tv2 = false;
			f_178_a0_v();
		}
	}

	void f_a3_a0_v(void)
	{
		if (!f_59d_a0_b()) {
			f_66f_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_666_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_137_a0_v();
			}
			f_669_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_638_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_137_a0_v();
			}
			f_642_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_6d4_a2_b(a0, a1)) {
			int L0;
			L0 = f_64a_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_137_a0_v();
				}
				f_654_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_65c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_137_a0_v();
			}
			f_65f_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_661_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_137_a0_v();
			}
			f_664_a2_v(a1, a0);
		}
	}

	void OnSee(object a0)
	{
		f_150_a1_v(a0);
	}

	void OnHear(object a0)
	{
		f_150_a1_v(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 != 110) {
			return;
		}
		tv2 = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(void)
	{
		f_137_a0_v();
		f_66f_a0_v();
	}

	void f_137_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_1b8_a0_v();
	}

	void f_13f_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_1bf_a0_v();
	}

	void OnDeath(object a0)
	{
		f_137_a0_v();
		global.OnDeath(a0);
	}

	void f_150_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_537_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_627_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_13f_a0_v();
			}
			f_630_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_178_a0_v(void)
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
					@FollowPath(L5, f_1c6_a0_b(), L6);
					L5 = null;
					if (L6) {
						t2{};
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

	void f_1b8_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_1bf_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_1c6_a0_b(void)
	{
		return false;
	}
}

task t2
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_666_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_280_a0_v();
			}
			f_669_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_638_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_280_a0_v();
			}
			f_642_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_6d4_a2_b(a0, a1)) {
			int L0;
			L0 = f_64a_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_280_a0_v();
				}
				f_654_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_65c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_280_a0_v();
			}
			f_65f_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_661_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_280_a0_v();
			}
			f_664_a2_v(a1, a0);
		}
	}

	void OnUnload(void)
	{
		f_280_a0_v();
		f_66f_a0_v();
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_59d_a0_b()) {
			return;
		}
		L0 = f_616_a0_i();
		L1 = 0;
		for (; L1 < 5 && f_59d_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_60f_a1_s(L3));
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

	void f_280_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t3
{
	var object tv0;

	void init(object a0)
	{
		Vector L0;
		Vector L1;
		bool L2;
		tv0 = a0;
		f_2b8_a0_v();
		@GetDirection(L0);
		L1 = f_4f3_a1_V(tv0);
		if (f_5d2_a2_f(L0, L1) < 0) {
			f_592_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_592_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_2b8_a0_v(void)
	{
		f_5a2_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_666_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_329_a0_v();
			}
			f_669_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_638_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_329_a0_v();
			}
			f_642_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_6d4_a2_b(a0, a1)) {
			int L0;
			L0 = f_64a_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_329_a0_v();
				}
				f_654_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_65c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_329_a0_v();
			}
			f_65f_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_661_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_329_a0_v();
			}
			f_664_a2_v(a1, a0);
		}
	}

	void f_329_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_329_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_537_a1_b(tv0)) {
			f_329_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_4f3_a1_V(tv0);
		if (f_5d2_a2_f(L0, L1) < 0.4999999701976776) {
			f_592_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_329_a0_v();
		f_66f_a0_v();
	}
}

task t4
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void init(object a0)
	{
		@Face(a0);
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
		@PlayAnimation("all", "attack_stay");
		@WaitForAnimEnd();
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		@StopAsync();
		f_3a8_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_41c_a0_v();
		f_66f_a0_v();
	}

	Vector f_38a_a1_V(float a0)
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
		L3 = f_5ad_a1_V(f_5ad_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_3a8_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_38a_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 10000.0) {
			@Trace("Can't retreat, distance: " + sqrt(L1));
			@Sleep(0.5);
			return;
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_4ee_a0_V() + L0;
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
				L3 = f_38a_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 10000.0) {
					tv1 = f_4ee_a0_V() + L3;
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
			L2 = f_38a_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 10000.0 && (L3 >= L1 * L1 * 2.25 || f_42c_a0_b())) {
				@Stop();
				tv1 = f_4ee_a0_V() + L2;
			}
		}
	}

	void f_41c_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_41c_a0_v();
		global.OnDeath(a0);
	}

	bool f_42c_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_4f3_a1_V(tv0);
		return f_5b7_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t5
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_43c_a1_V(float a0)
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
		L3 = f_5ad_a1_V(f_5ad_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_43c_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 10000.0) {
			@Trace("Can't retreat, distance: " + sqrt(L1));
			@Sleep(0.5);
			return;
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_4ee_a0_V() + L0;
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
				L3 = f_43c_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 10000.0) {
					tv1 = f_4ee_a0_V() + L3;
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
			L2 = f_43c_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 10000.0 && (L3 >= L1 * L1 * 2.25 || f_4de_a0_b())) {
				@Stop();
				tv1 = f_4ee_a0_V() + L2;
			}
		}
	}

	void f_4ce_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_4ce_a0_v();
		global.OnDeath(a0);
	}

	bool f_4de_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_4f3_a1_V(tv0);
		return f_5b7_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_4ee_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_4f3_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_4fa_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_502_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_50e_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_513_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_50e_a1_b(a0)) {
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

bool f_537_a1_b(object a0)
{
	int L0;
	if (!f_513_a1_b(a0)) {
		return false;
	}
	if (!f_502_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_54f_a3_v(object a0, int a1, float a2)
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

void f_592_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_59d_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_5a2_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

Vector f_5ad_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_5b7_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_5bf_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_5c8_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_5d2_a2_f(Vector a0, Vector a1)
{
	return f_5bf_a2_f(a0, a1) / (f_5c8_a1_f(a0) * f_5c8_a1_f(a1));
}

int f_5e3_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_5ec_a1_v(object a0)
{
	t0{a0};
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
	f_5ec_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_54f_a3_v(a0, a1, a2);
}

string f_60f_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_616_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_60f_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_627_a1_i(object a0)
{
	return f_6d2_a0_b() ? 2 : 0;
}

void f_630_a1_v(object a0)
{
	t3{a0};
}

int f_638_a1_i(object a0)
{
	return f_537_a1_b(a0) ? 2 : 0;
}

void f_642_a1_v(object a0)
{
	t4{a0};
}

int f_64a_a1_i(object a0)
{
	return f_537_a1_b(a0) ? 2 : 0;
}

void f_654_a1_v(object a0)
{
	t5{a0};
}

int f_65c_a1_i(object a0)
{
	return 0;
}

void f_65f_a1_v(object a0)
{
}

int f_661_a2_i(string a0, object a1)
{
	return 0;
}

void f_664_a2_v(string a0, object a1)
{
}

int f_666_a1_i(object a0)
{
	return 2;
}

void f_669_a1_v(object a0)
{
	f_6c7_a1_v(a0);
}

void f_66f_a0_v(void)
{
}

void f_670_a2_v(int a0, int a1)
{
	if (a0 > a1) {
		@Trace("GenerateMoney: iMin > iMax");
		return;
	}
	int L0;
	L0 = 0;
	if (a0 != a1) {
		int L1;
		@irand(L1, a1 - a0);
	} else {
		if (a0 == 0) {
			return;
		}
	}
	L0 = L0 + a0;
	if (L0 == 0) {
		return;
	}
	int L2;
	@GetInvItemByName(L2, "Money");
	bool L3;
	@AddItem(L3, L2, 0, L0);
}

void f_68e_a1_v(bool a0)
{
	bool L0;
	int L1;
	@ClearSubContainer(0);
	f_670_a2_v(0, 10 + f_5e3_a0_i() * 10);
	@irand(L1, 4);
	if (L1 == 0) {
		@AddItem(L0, f_6ba_a1_i("hook"), 0, 1);
	}
	@irand(L1, 10);
	if (L1 == 0) {
		@AddItem(L0, f_6ba_a1_i("watch"), 0, 1);
	}
}

int f_6ba_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_6bf_a0_v(void)
{
	g0 = false;
	f_68e_a1_v(false);
}

void f_6c7_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			@WorkWithCorpse(a0);
		}
		return;
	}
}

bool f_6d2_a0_b(void)
{
	return true;
}

bool f_6d4_a2_b(object a0, object a1)
{
	string L0;
	bool L1;
	if (!f_502_a2_b(a1, "class")) {
		return false;
	}
	a1->GetProperty("class", L0);
	if (L0 == "rat") {
		return false;
	}
	@CanSee(L1, a0);
	if (L1 || f_4fa_a1_f(a0) <= 250000.0) {
		@ReportReputationChange(a0, a1, -0.30000001192092896);
		return true;
	}
	return false;
}

void f_6fc_a1_v(object a0)
{
	g0 = true;
	@SetRTEnvelope(50, 40);
}

