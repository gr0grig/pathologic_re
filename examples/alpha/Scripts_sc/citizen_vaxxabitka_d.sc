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
		f_7ed_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_6c6_a1_i(a0);
		if (L0 > 0) {
			f_6c9_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_6cf_a0_v();
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
		f_7a2_a0_v();
		f_a3_a0_v();
		for (; ; ) {
			tv2 = false;
			f_178_a0_v();
		}
	}

	void f_a3_a0_v(void)
	{
		if (!f_627_a0_b()) {
			f_6cf_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_6c6_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_137_a0_v();
			}
			f_6c9_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_698_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_137_a0_v();
			}
			f_6a2_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_7bf_a2_b(a0, a1)) {
			int L0;
			L0 = f_6aa_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_137_a0_v();
				}
				f_6b4_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_6bc_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_137_a0_v();
			}
			f_6bf_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_6c1_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_137_a0_v();
			}
			f_6c4_a2_v(a1, a0);
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
		f_6cf_a0_v();
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
		if (!f_5cc_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_68d_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_13f_a0_v();
			}
			f_690_a1_v(a0);
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
		L0 = f_6c6_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_280_a0_v();
			}
			f_6c9_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_698_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_280_a0_v();
			}
			f_6a2_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_7bf_a2_b(a0, a1)) {
			int L0;
			L0 = f_6aa_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_280_a0_v();
				}
				f_6b4_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_6bc_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_280_a0_v();
			}
			f_6bf_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_6c1_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_280_a0_v();
			}
			f_6c4_a2_v(a1, a0);
		}
	}

	void OnUnload(void)
	{
		f_280_a0_v();
		f_6cf_a0_v();
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_627_a0_b()) {
			return;
		}
		L0 = f_67c_a0_i();
		L1 = 0;
		for (; L1 < 5 && f_627_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_675_a1_s(L3));
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
	void init(object a0)
	{
		if (f_7b5_a1_b(a0)) {
			f_2ab_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_7ba_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_2dc_a0_v();
			}
			f_7bd_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_2dc_a0_v();
		f_6cf_a0_v();
	}

	void f_2ab_a1_v(object a0)
	{
		while (t4{a0}) {
			bool L0;
			@Face(a0);
			@WaitForAnimEnd(L0);
			if (!L0) {
				break;
			}
			@PlayAnimation("all", "dattack_begin");
			@WaitForAnimEnd(L0);
			if (!L0) {
				break;
			}
			if (f_53a_a1_f(a0) <= 90000.0) {
				f_564_a2_f(a0, 0.20000000298023224);
			}
			@PlayAnimation("all", "dattack_end");
			@WaitForAnimEnd(L0);
			if (!L0) {
				break;
			}
			@StopAsync();
		}
	}

	void f_2dc_a0_v(void)
	{
		@StopAsync();
		@StopAnimation();
	}

	void OnDeath(object a0)
	{
		f_2dc_a0_v();
		global.OnDeath(a0);
	}
}

task t4
{
	var bool tv0;
	var object tv1;

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_7ba_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_38e_a0_v();
			}
			f_7bd_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_38e_a0_v();
		f_6cf_a0_v();
	}

	bool init(object a0)
	{
		return f_312_a5_b(a0, 150, 3000, false, true);
	}

	string f_310_a0_s(void)
	{
		return "zwalk";
	}

	bool f_312_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_39e_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_310_a0_s(), f_3a5_a0_s());
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

	void OnTimer(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_39e_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_38e_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_38e_a0_v();
		global.OnDeath(a0);
	}

	bool f_39e_a1_b(object a0)
	{
		return f_5cc_a1_b(a0);
	}

	string f_3a5_a0_s(void)
	{
		return "run";
	}
}

task t5
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
		f_3e8_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_45c_a0_v();
		f_6cf_a0_v();
	}

	Vector f_3ca_a1_V(float a0)
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
		L3 = f_62c_a1_V(f_62c_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_3e8_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_3ca_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 10000.0) {
			@Trace("Can't retreat, distance: " + sqrt(L1));
			@Sleep(0.5);
			return;
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_52e_a0_V() + L0;
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
				L3 = f_3ca_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 10000.0) {
					tv1 = f_52e_a0_V() + L3;
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
			L2 = f_3ca_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 10000.0 && (L3 >= L1 * L1 * 2.25 || f_46c_a0_b())) {
				@Stop();
				tv1 = f_52e_a0_V() + L2;
			}
		}
	}

	void f_45c_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_45c_a0_v();
		global.OnDeath(a0);
	}

	bool f_46c_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_533_a1_V(tv0);
		return f_641_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t6
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_47c_a1_V(float a0)
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
		L3 = f_62c_a1_V(f_62c_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_47c_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 10000.0) {
			@Trace("Can't retreat, distance: " + sqrt(L1));
			@Sleep(0.5);
			return;
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_52e_a0_V() + L0;
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
				L3 = f_47c_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 10000.0) {
					tv1 = f_52e_a0_V() + L3;
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
			L2 = f_47c_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 10000.0 && (L3 >= L1 * L1 * 2.25 || f_51e_a0_b())) {
				@Stop();
				tv1 = f_52e_a0_V() + L2;
			}
		}
	}

	void f_50e_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_50e_a0_v();
		global.OnDeath(a0);
	}

	bool f_51e_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_533_a1_V(tv0);
		return f_641_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_52e_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_533_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_53a_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_542_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_54e_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_542_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_636_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_564_a2_f(object a0, float a1)
{
	if (!f_542_a2_b(a0, "disease")) {
		return 0;
	}
	if (f_542_a2_b(a0, "armor_disease")) {
		int L0;
		a0->GetProperty("armor_disease", L0);
		if (L0 < 100) {
			a1 = a1 * (1 - L0 / 100.0);
		} else {
			return 0;
		}
	}
	float L1;
	if (f_542_a2_b(a0, "immunity")) {
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
	f_54e_a5_b(a0, "disease", L1, 0, 1);
	return a1;
}

bool f_5a3_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_5a8_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_5a3_a1_b(a0)) {
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

bool f_5cc_a1_b(object a0)
{
	int L0;
	if (!f_5a8_a1_b(a0)) {
		return false;
	}
	if (!f_542_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_5e4_a3_v(object a0, int a1, float a2)
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

bool f_627_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

Vector f_62c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_636_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_641_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

int f_649_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_652_a1_v(object a0)
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
	f_652_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_5e4_a3_v(a0, a1, a2);
}

string f_675_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_67c_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_675_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_68d_a1_i(object a0)
{
	return 2;
}

void f_690_a1_v(object a0)
{
	t3{a0};
}

int f_698_a1_i(object a0)
{
	return f_5cc_a1_b(a0) ? 2 : 0;
}

void f_6a2_a1_v(object a0)
{
	t5{a0};
}

int f_6aa_a1_i(object a0)
{
	return f_5cc_a1_b(a0) ? 2 : 0;
}

void f_6b4_a1_v(object a0)
{
	t6{a0};
}

int f_6bc_a1_i(object a0)
{
	return 0;
}

void f_6bf_a1_v(object a0)
{
}

int f_6c1_a2_i(string a0, object a1)
{
	return 0;
}

void f_6c4_a2_v(string a0, object a1)
{
}

int f_6c6_a1_i(object a0)
{
	return 2;
}

void f_6c9_a1_v(object a0)
{
	f_7aa_a1_v(a0);
}

void f_6cf_a0_v(void)
{
}

void f_6d0_a2_v(int a0, int a1)
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

void f_6ee_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_6d0_a2_v(0, 100 + f_649_a0_i() * 100);
		@irand(L0, 9);
		if (L0 == 0) {
			@AddItem(L1, f_79d_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_79d_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_79d_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_79d_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_79d_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_79d_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_6d0_a2_v(0, 50 + f_649_a0_i() * 50);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_79d_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_79d_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_79d_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_79d_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_79d_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_79d_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_79d_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_7a2_a0_v(void)
{
	g0 = false;
	f_6ee_a1_v(false);
}

void f_7aa_a1_v(object a0)
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

bool f_7b5_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

int f_7ba_a1_i(object a0)
{
	return 0;
}

void f_7bd_a1_v(object a0)
{
}

bool f_7bf_a2_b(object a0, object a1)
{
	string L0;
	bool L1;
	if (!f_542_a2_b(a1, "class")) {
		return false;
	}
	a1->GetProperty("class", L0);
	if (L0 == "rat") {
		return false;
	} else {
		if (L0 == "dog") {
			return false;
		}
	}
	@CanSee(L1, a0);
	if (L1 || f_53a_a1_f(a0) <= 250000.0) {
		@ReportReputationChange(a0, a1, -0.30000001192092896);
		return true;
	}
	return false;
}

void f_7ed_a1_v(object a0)
{
	g0 = true;
	@SetRTEnvelope(50, 40);
}

