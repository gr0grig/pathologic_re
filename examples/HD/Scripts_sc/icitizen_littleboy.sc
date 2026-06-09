event evt_11 11;
event OnUse 0;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnSteal 40;
event OnMessage 42;
event OnTrigger 26;
event OnSee 1;
event OnHear 3;
event OnTimer 7;
event OnUnload 6;
event OnDeath 41;
event OnCollision 10;
event OnActorStuck 28;
event OnPropertyChange 16;
event OnHit 22;
event OnHit2 43;

var bool g0;

task t0
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			if (f_181d_a0_b()) {
				f_1485_a1_v("Neutral");
				@lshWaitForAnimEnd();
			} else {
				@WaitForAnimEnd();
				@PlayAnimation("all", "idle");
			}
			if (tv0) {
				return;
			}
		}
	}

	void evt_11(int a0)
	{
		if (f_181d_a0_b()) {
			@lshStopAnimation();
		} else {
			@StopAnimation();
		}
		@StopTrade();
		tv0 = true;
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
		f_181f_a0_v();
		f_37_a0_v();
		for (; ; ) {
			tv2 = false;
			f_13c_a0_v();
		}
	}

	void f_37_a0_v(void)
	{
		if (!f_13ec_a0_b()) {
			f_1647_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_163e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fb_a0_v();
			}
			f_1641_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1585_a1_v(a0);
		L0 = f_15d8_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fb_a0_v();
			}
			f_15e2_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_1851_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_15ea_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_fb_a0_v();
				}
				f_15f4_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_1648_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fb_a0_v();
			}
			f_164b_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_152f_a2_b(a0, a1)) {
			f_fb_a0_v();
			f_154f_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_164d_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_fb_a0_v();
				}
				f_1650_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1592_a1_b(a0)) {
			f_fb_a0_v();
			f_15a2_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_1568_a1_b(a0)) {
			f_fb_a0_v();
			f_157f_a1_v(a0);
		} else {
			f_114_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		f_114_a1_v(a0);
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
		f_fb_a0_v();
		f_1647_a0_v();
	}

	void f_fb_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_183_a0_v();
	}

	void f_103_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_18a_a0_v();
	}

	void OnDeath(object a0)
	{
		f_fb_a0_v();
		global.OnDeath(a0);
	}

	void f_114_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_13c9_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_15c7_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_103_a0_v();
			}
			f_15d0_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_13c_a0_v(void)
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
					bool L3;
					@GetPosition(L2);
					@GetRandomPFPointInCircle(L1, L2, f_177_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_193_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_191_a0_b(), L5);
					L4 = null;
					if (L5) {
						t2{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_177_a0_f(void)
	{
		float L0;
		@GetCameraFarDistance(L0);
		return L0;
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void OnActorStuck(void)
	{
		@Stop();
	}

	void f_183_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_18a_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_191_a0_b(void)
	{
		return false;
	}

	object f_193_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t2
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_163e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_28e_a0_v();
			}
			f_1641_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1585_a1_v(a0);
		L0 = f_15d8_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_28e_a0_v();
			}
			f_15e2_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_1851_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_15ea_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_28e_a0_v();
				}
				f_15f4_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_1648_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_28e_a0_v();
			}
			f_164b_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_152f_a2_b(a0, a1)) {
			f_28e_a0_v();
			f_154f_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_164d_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_28e_a0_v();
				}
				f_1650_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1592_a1_b(a0)) {
			f_28e_a0_v();
			f_15a2_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_28e_a0_v();
		f_1647_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_1568_a1_b(a0)) {
			f_28e_a0_v();
			f_157f_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_13ec_a0_b()) {
			return;
		}
		L0 = f_15b6_a0_i();
		for (L1 = 0; L1 < 5 && f_13ec_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_15af_a1_s(L3));
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
				} else {
					if (L1) {
						break;
					}
				}
			}
			if (!f_28c_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_28c_a0_b(void)
	{
		return true;
	}

	void f_28e_a0_v(void)
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
		f_2c6_a0_v();
		@GetDirection(L0);
		L1 = f_1380_a1_V(tv0);
		if (f_1500_a2_f(L0, L1) < 0) {
			f_13e1_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_13e1_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_2c6_a0_v(void)
	{
		f_14a4_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_163e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35a_a0_v();
			}
			f_1641_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1585_a1_v(a0);
		L0 = f_15d8_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35a_a0_v();
			}
			f_15e2_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_1851_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_15ea_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_35a_a0_v();
				}
				f_15f4_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_1648_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35a_a0_v();
			}
			f_164b_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_152f_a2_b(a0, a1)) {
			f_35a_a0_v();
			f_154f_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_164d_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_35a_a0_v();
				}
				f_1650_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1592_a1_b(a0)) {
			f_35a_a0_v();
			f_15a2_a1_v(a0);
		}
	}

	void f_35a_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_35a_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_13c9_a1_b(tv0)) {
			f_35a_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_1380_a1_V(tv0);
		if (f_1500_a2_f(L0, L1) < 0.4999999701976776) {
			f_13e1_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_35a_a0_v();
		f_1647_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_1568_a1_b(a0)) {
			f_35a_a0_v();
			f_157f_a1_v(a0);
		}
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
		f_3e7_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_464_a0_v();
		f_1647_a0_v();
	}

	Vector f_3c9_a1_V(float a0)
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
		L3 = f_14d6_a1_V(f_14d6_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_3e7_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_3c9_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_3c9_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_137b_a0_V() + L0;
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
				L3 = f_3c9_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_137b_a0_V() + L3;
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
			L2 = f_3c9_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_474_a0_b())) {
				@Stop();
				tv1 = f_137b_a0_V() + L2;
			}
		}
	}

	void f_464_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_464_a0_v();
		global.OnDeath(a0);
	}

	bool f_474_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_1380_a1_V(tv0);
		return f_14e5_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t5
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_484_a1_V(float a0)
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
		L3 = f_14d6_a1_V(f_14d6_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_484_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_484_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_137b_a0_V() + L0;
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
				L3 = f_484_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_137b_a0_V() + L3;
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
			L2 = f_484_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_52f_a0_b())) {
				@Stop();
				tv1 = f_137b_a0_V() + L2;
			}
		}
	}

	void f_51f_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_51f_a0_v();
		global.OnDeath(a0);
	}

	bool f_52f_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_1380_a1_V(tv0);
		return f_14e5_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t6
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_5e1_a0_v();
		f_1647_a0_v();
	}

	Vector f_546_a1_V(float a0)
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
		L3 = f_14d6_a1_V(f_14d6_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_546_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_546_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_137b_a0_V() + L0;
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
				L3 = f_546_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_137b_a0_V() + L3;
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
			L2 = f_546_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_5f1_a0_b())) {
				@Stop();
				tv1 = f_137b_a0_V() + L2;
			}
		}
	}

	void f_5e1_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_5e1_a0_v();
		global.OnDeath(a0);
	}

	bool f_5f1_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_1380_a1_V(tv0);
		return f_14e5_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t7
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_6a3_a0_v();
		f_1647_a0_v();
	}

	Vector f_608_a1_V(float a0)
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
		L3 = f_14d6_a1_V(f_14d6_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_608_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_608_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_137b_a0_V() + L0;
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
				L3 = f_608_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_137b_a0_V() + L3;
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
			L2 = f_608_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_6b3_a0_b())) {
				@Stop();
				tv1 = f_137b_a0_V() + L2;
			}
		}
	}

	void f_6a3_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_6a3_a0_v();
		global.OnDeath(a0);
	}

	bool f_6b3_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_1380_a1_V(tv0);
		return f_14e5_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t8
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_13f1_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1817_a0_i());
		L0->SetNPCDescription(f_1815_a0_i());
		L0->SetPhoto(f_1819_a0_s());
		L0->SetPhoto2(f_181b_a0_s());
		L0->SetPlayerName(f_17a5_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1436_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t9
{
	var object tv0;
	var object tv1;
	var string tv2;
	var bool tv3;

	void init(object a0, object a1)
	{
		tv0 = a1;
		tv1 = a0;
		tv3 = false;
		while (1) {
			if (f_1699_a1_b(tv1)) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(543247);
				tv0->ClearReplies();
				if (f_16af_a1_b(tv1) || f_16e1_a1_b(tv1) || f_16ff_a1_b(tv1)) {
					tv0->AddReply(543249, 45709, 45705);
				}
				if (f_16cd_a1_b(tv1)) {
					tv0->AddReply(543251, 45719, 45707);
				}
				if (f_16cd_a1_b(tv1) || f_16d7_a1_b(tv1)) {
					tv0->AddReply(543277, 45734, 45733);
				}
				if (f_16eb_a1_b(tv1) || f_16f5_a1_b(tv1)) {
					tv0->AddReply(543282, 45739, 45738);
				}
				if (f_16a5_a1_b(tv1) || f_16af_a1_b(tv1) || f_16b9_a1_b(tv1) || f_16c3_a1_b(tv1)) {
					tv0->AddReply(543250, -1, 45706);
				}
				if (f_16cd_a1_b(tv1) || f_16d7_a1_b(tv1) || f_16e1_a1_b(tv1) || f_16eb_a1_b(tv1)) {
					tv0->AddReply(543262, -1, 45718);
				}
				if (f_16f5_a1_b(tv1) || f_16ff_a1_b(tv1) || f_1709_a1_b(tv1) || f_1713_a1_b(tv1)) {
					tv0->AddReply(543276, -1, 45732);
				}
				if (f_16a5_a1_b(tv1) || f_16b9_a1_b(tv1) || f_16c3_a1_b(tv1) || f_16e1_a1_b(tv1)) {
					tv0->AddReply(543248, -1, 45704);
				}
				if (f_16d7_a1_b(tv1) || f_16cd_a1_b(tv1) || f_16eb_a1_b(tv1) || f_16af_a1_b(tv1)) {
					tv0->AddReply(543252, -1, 45708);
				}
				if (f_1709_a1_b(tv1) || f_1713_a1_b(tv1)) {
					tv0->AddReply(543281, -1, 45737);
				}
				if (f_16f5_a1_b(tv1) || f_16ff_a1_b(tv1)) {
					tv0->AddReply(543275, -1, 45731);
				}
				break;
			}
			f_9bb_a1_v("Neutral");
			tv0->SetMessage(537506);
			tv0->ClearReplies();
			tv0->AddReply(537507, -1, 39354);
			if (f_168d_a1_b(tv1) && f_16a5_a1_b(tv1) && f_171d_a1_b(tv1)) {
				tv0->AddReply(537508, 39356, 39355);
			}
			if (f_168d_a1_b(tv1) && f_16a5_a1_b(tv1) && f_1727_a1_b(tv1)) {
				tv0->AddReply(537524, 39372, 39371);
			}
			if (f_168d_a1_b(tv1) && f_16af_a1_b(tv1)) {
				tv0->AddReply(537534, 39382, 39381);
			}
			if (f_168d_a1_b(tv1) && f_16b9_a1_b(tv1)) {
				tv0->AddReply(537549, 39397, 39396);
			}
			if (f_168d_a1_b(tv1) && f_16c3_a1_b(tv1)) {
				tv0->AddReply(537559, 39407, 39406);
			}
			if (f_168d_a1_b(tv1) && f_16cd_a1_b(tv1)) {
				tv0->AddReply(537571, 39419, 39418);
			}
			if (f_168d_a1_b(tv1) && f_16d7_a1_b(tv1)) {
				tv0->AddReply(537593, 39442, 39441);
			}
			if (f_168d_a1_b(tv1) && f_16e1_a1_b(tv1)) {
				tv0->AddReply(537603, 39452, 39451);
			}
			if (f_168d_a1_b(tv1) && f_16eb_a1_b(tv1)) {
				tv0->AddReply(537621, 39470, 39469);
			}
			if (f_16f5_a1_b(tv1)) {
				tv0->AddReply(537633, 39482, 39481);
			}
			if (f_16ff_a1_b(tv1)) {
				tv0->AddReply(537640, 39489, 39488);
			}
			if (f_168d_a1_b(tv1) && f_1709_a1_b(tv1)) {
				tv0->AddReply(537647, 39496, 39495);
			}
			if (f_168d_a1_b(tv1) && f_1727_a1_b(tv1) && f_16a5_a1_b(tv1)) {
				tv0->AddReply(537659, 39508, 39507);
			}
			if (f_16a5_a1_b(tv1)) {
				tv0->AddReply(537665, 39514, 39513);
			}
			if (f_16a5_a1_b(tv1)) {
				tv0->AddReply(537671, 39520, 39519);
			}
			if (f_16a5_a1_b(tv1) && f_171d_a1_b(tv1)) {
				tv0->AddReply(537689, 39538, 39537);
			}
			if (f_16a5_a1_b(tv1) && f_171d_a1_b(tv1)) {
				tv0->AddReply(537702, 39551, 39550);
			}
			tv0->AddReply(537721, -1, 39569);
			break;
			return;
		}
		if (f_181d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1485_a1_v(tv2);
			}
		} else {
			@PlayAnimation("all", "idle");
			for (; ; ) {
				@WaitForAnimEnd();
				if (tv3) {
					break;
				}
				@PlayAnimation("all", "idle");
			}
		}
	}

	void f_9bb_a1_v(string a0)
	{
		if (!f_181d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1495_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_14af_a0_v();
			if (a1 == 45706) {
				f_1688_a2_v(tv1, tv0);
			}
			if (a1 == 45718) {
				f_1688_a2_v(tv1, tv0);
			}
			if (a1 == 45732) {
				f_1688_a2_v(tv1, tv0);
			}
			if (a1 == 39354) {
				f_1688_a2_v(tv1, tv0);
			}
			if (a0 == 45703) {
				if (f_1699_a1_b(tv1)) {
					f_9bb_a1_v("Neutral");
					tv0->SetMessage(543247);
					tv0->ClearReplies();
					if (f_16af_a1_b(tv1) || f_16e1_a1_b(tv1) || f_16ff_a1_b(tv1)) {
						tv0->AddReply(543249, 45709, 45705);
					}
					if (f_16cd_a1_b(tv1)) {
						tv0->AddReply(543251, 45719, 45707);
					}
					if (f_16cd_a1_b(tv1) || f_16d7_a1_b(tv1)) {
						tv0->AddReply(543277, 45734, 45733);
					}
					if (f_16eb_a1_b(tv1) || f_16f5_a1_b(tv1)) {
						tv0->AddReply(543282, 45739, 45738);
					}
					if (f_16a5_a1_b(tv1) || f_16af_a1_b(tv1) || f_16b9_a1_b(tv1) || f_16c3_a1_b(tv1)) {
						tv0->AddReply(543250, -1, 45706);
					}
					if (f_16cd_a1_b(tv1) || f_16d7_a1_b(tv1) || f_16e1_a1_b(tv1) || f_16eb_a1_b(tv1)) {
						tv0->AddReply(543262, -1, 45718);
					}
					if (f_16f5_a1_b(tv1) || f_16ff_a1_b(tv1) || f_1709_a1_b(tv1) || f_1713_a1_b(tv1)) {
						tv0->AddReply(543276, -1, 45732);
					}
					if (f_16a5_a1_b(tv1) || f_16b9_a1_b(tv1) || f_16c3_a1_b(tv1) || f_16e1_a1_b(tv1)) {
						tv0->AddReply(543248, -1, 45704);
					}
					if (f_16d7_a1_b(tv1) || f_16cd_a1_b(tv1) || f_16eb_a1_b(tv1) || f_16af_a1_b(tv1)) {
						tv0->AddReply(543252, -1, 45708);
					}
					if (f_1709_a1_b(tv1) || f_1713_a1_b(tv1)) {
						tv0->AddReply(543281, -1, 45737);
					}
					if (f_16f5_a1_b(tv1) || f_16ff_a1_b(tv1)) {
						tv0->AddReply(543275, -1, 45731);
					}
					return;
				}
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537506);
				tv0->ClearReplies();
				tv0->AddReply(537507, -1, 39354);
				if (f_168d_a1_b(tv1) && f_16a5_a1_b(tv1) && f_171d_a1_b(tv1)) {
					tv0->AddReply(537508, 39356, 39355);
				}
				if (f_168d_a1_b(tv1) && f_16a5_a1_b(tv1) && f_1727_a1_b(tv1)) {
					tv0->AddReply(537524, 39372, 39371);
				}
				if (f_168d_a1_b(tv1) && f_16af_a1_b(tv1)) {
					tv0->AddReply(537534, 39382, 39381);
				}
				if (f_168d_a1_b(tv1) && f_16b9_a1_b(tv1)) {
					tv0->AddReply(537549, 39397, 39396);
				}
				if (f_168d_a1_b(tv1) && f_16c3_a1_b(tv1)) {
					tv0->AddReply(537559, 39407, 39406);
				}
				if (f_168d_a1_b(tv1) && f_16cd_a1_b(tv1)) {
					tv0->AddReply(537571, 39419, 39418);
				}
				if (f_168d_a1_b(tv1) && f_16d7_a1_b(tv1)) {
					tv0->AddReply(537593, 39442, 39441);
				}
				if (f_168d_a1_b(tv1) && f_16e1_a1_b(tv1)) {
					tv0->AddReply(537603, 39452, 39451);
				}
				if (f_168d_a1_b(tv1) && f_16eb_a1_b(tv1)) {
					tv0->AddReply(537621, 39470, 39469);
				}
				if (f_16f5_a1_b(tv1)) {
					tv0->AddReply(537633, 39482, 39481);
				}
				if (f_16ff_a1_b(tv1)) {
					tv0->AddReply(537640, 39489, 39488);
				}
				if (f_168d_a1_b(tv1) && f_1709_a1_b(tv1)) {
					tv0->AddReply(537647, 39496, 39495);
				}
				if (f_168d_a1_b(tv1) && f_1727_a1_b(tv1) && f_16a5_a1_b(tv1)) {
					tv0->AddReply(537659, 39508, 39507);
				}
				if (f_16a5_a1_b(tv1)) {
					tv0->AddReply(537665, 39514, 39513);
				}
				if (f_16a5_a1_b(tv1)) {
					tv0->AddReply(537671, 39520, 39519);
				}
				if (f_16a5_a1_b(tv1) && f_171d_a1_b(tv1)) {
					tv0->AddReply(537689, 39538, 39537);
				}
				if (f_16a5_a1_b(tv1) && f_171d_a1_b(tv1)) {
					tv0->AddReply(537702, 39551, 39550);
				}
				tv0->AddReply(537721, -1, 39569);
				return;
			}
			if (a0 == 39551) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537703);
				tv0->ClearReplies();
				tv0->AddReply(537704, 39553, 39552);
				return;
			}
			if (a0 == 39553) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537705);
				tv0->ClearReplies();
				tv0->AddReply(537706, 39555, 39554);
				tv0->AddReply(537717, 39566, 39565);
				return;
			}
			if (a0 == 39566) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537718);
				tv0->ClearReplies();
				tv0->AddReply(537719, -1, 39567);
				if (f_168d_a1_b(tv1)) {
					tv0->AddReply(537720, -1, 39568);
				}
				return;
			}
			if (a0 == 39555) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537707);
				tv0->ClearReplies();
				tv0->AddReply(537708, 39557, 39556);
				tv0->AddReply(537711, 39560, 39559);
				return;
			}
			if (a0 == 39560) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537712);
				tv0->ClearReplies();
				if (f_168d_a1_b(tv1)) {
					tv0->AddReply(537713, -1, 39561);
				}
				tv0->AddReply(537714, 39563, 39562);
				return;
			}
			if (a0 == 39563) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537715);
				tv0->ClearReplies();
				tv0->AddReply(537716, -1, 39564);
				return;
			}
			if (a0 == 39557) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537709);
				tv0->ClearReplies();
				tv0->AddReply(537710, -1, 39558);
				return;
			}
			if (a0 == 39538) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537690);
				tv0->ClearReplies();
				tv0->AddReply(537691, 39540, 39539);
				tv0->AddReply(537701, -1, 39549);
				return;
			}
			if (a0 == 39540) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537692);
				tv0->ClearReplies();
				tv0->AddReply(537693, 39542, 39541);
				tv0->AddReply(537696, 39545, 39544);
				return;
			}
			if (a0 == 39545) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537697);
				tv0->ClearReplies();
				tv0->AddReply(537698, 39547, 39546);
				return;
			}
			if (a0 == 39547) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537699);
				tv0->ClearReplies();
				tv0->AddReply(537700, -1, 39548);
				return;
			}
			if (a0 == 39542) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537694);
				tv0->ClearReplies();
				tv0->AddReply(537695, -1, 39543);
				return;
			}
			if (a0 == 39520) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537672);
				tv0->ClearReplies();
				tv0->AddReply(537673, 39522, 39521);
				tv0->AddReply(537678, 39527, 39526);
				return;
			}
			if (a0 == 39527) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537679);
				tv0->ClearReplies();
				tv0->AddReply(537680, 39529, 39528);
				return;
			}
			if (a0 == 39529) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537681);
				tv0->ClearReplies();
				if (f_168d_a1_b(tv1)) {
					tv0->AddReply(537682, 39531, 39530);
				}
				tv0->AddReply(537688, -1, 39536);
				return;
			}
			if (a0 == 39531) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537683);
				tv0->ClearReplies();
				tv0->AddReply(537684, 39533, 39532);
				tv0->AddReply(537687, -1, 39535);
				return;
			}
			if (a0 == 39533) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537685);
				tv0->ClearReplies();
				tv0->AddReply(537686, -1, 39534);
				return;
			}
			if (a0 == 39522) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537674);
				tv0->ClearReplies();
				tv0->AddReply(537675, 39524, 39523);
				return;
			}
			if (a0 == 39524) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537676);
				tv0->ClearReplies();
				tv0->AddReply(537677, -1, 39525);
				return;
			}
			if (a0 == 39514) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537666);
				tv0->ClearReplies();
				tv0->AddReply(537667, 39516, 39515);
				tv0->AddReply(537670, -1, 39518);
				return;
			}
			if (a0 == 39516) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537668);
				tv0->ClearReplies();
				tv0->AddReply(537669, -1, 39517);
				return;
			}
			if (a0 == 39508) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537660);
				tv0->ClearReplies();
				tv0->AddReply(537661, 39510, 39509);
				tv0->AddReply(537664, -1, 39512);
				return;
			}
			if (a0 == 39510) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537662);
				tv0->ClearReplies();
				tv0->AddReply(537663, -1, 39511);
				return;
			}
			if (a0 == 39496) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537648);
				tv0->ClearReplies();
				tv0->AddReply(537649, 39498, 39497);
				tv0->AddReply(537658, -1, 39506);
				return;
			}
			if (a0 == 39498) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537650);
				tv0->ClearReplies();
				tv0->AddReply(537651, 39500, 39499);
				tv0->AddReply(537657, -1, 39505);
				return;
			}
			if (a0 == 39500) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537652);
				tv0->ClearReplies();
				tv0->AddReply(537653, -1, 39501);
				tv0->AddReply(537654, 39503, 39502);
				return;
			}
			if (a0 == 39503) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537655);
				tv0->ClearReplies();
				tv0->AddReply(537656, -1, 39504);
				return;
			}
			if (a0 == 39489) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537641);
				tv0->ClearReplies();
				tv0->AddReply(537642, 39491, 39490);
				tv0->AddReply(537646, -1, 39494);
				return;
			}
			if (a0 == 39491) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537643);
				tv0->ClearReplies();
				tv0->AddReply(537644, -1, 39492);
				if (f_168d_a1_b(tv1)) {
					tv0->AddReply(537645, -1, 39493);
				}
				return;
			}
			if (a0 == 39482) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537634);
				tv0->ClearReplies();
				tv0->AddReply(537635, 39484, 39483);
				tv0->AddReply(537639, -1, 39487);
				return;
			}
			if (a0 == 39484) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537636);
				tv0->ClearReplies();
				tv0->AddReply(537637, -1, 39485);
				tv0->AddReply(537638, -1, 39486);
				return;
			}
			if (a0 == 39470) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537622);
				tv0->ClearReplies();
				tv0->AddReply(537623, 39472, 39471);
				tv0->AddReply(537632, -1, 39480);
				return;
			}
			if (a0 == 39472) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537624);
				tv0->ClearReplies();
				tv0->AddReply(537625, 39474, 39473);
				return;
			}
			if (a0 == 39474) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537626);
				tv0->ClearReplies();
				tv0->AddReply(537627, -1, 39475);
				tv0->AddReply(537628, 39477, 39476);
				return;
			}
			if (a0 == 39477) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537629);
				tv0->ClearReplies();
				tv0->AddReply(537630, -1, 39478);
				tv0->AddReply(537631, -1, 39479);
				return;
			}
			if (a0 == 39452) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537604);
				tv0->ClearReplies();
				tv0->AddReply(537605, 39454, 39453);
				tv0->AddReply(537612, 39461, 39460);
				return;
			}
			if (a0 == 39461) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537613);
				tv0->ClearReplies();
				tv0->AddReply(537614, 39463, 39462);
				tv0->AddReply(537620, -1, 39468);
				return;
			}
			if (a0 == 39463) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537615);
				tv0->ClearReplies();
				tv0->AddReply(537616, 39465, 39464);
				return;
			}
			if (a0 == 39465) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537617);
				tv0->ClearReplies();
				tv0->AddReply(537618, -1, 39466);
				tv0->AddReply(537619, -1, 39467);
				return;
			}
			if (a0 == 39454) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537606);
				tv0->ClearReplies();
				tv0->AddReply(537607, 39456, 39455);
				tv0->AddReply(537611, -1, 39459);
				return;
			}
			if (a0 == 39456) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537608);
				tv0->ClearReplies();
				tv0->AddReply(537609, -1, 39457);
				tv0->AddReply(537610, -1, 39458);
				return;
			}
			if (a0 == 39442) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537594);
				tv0->ClearReplies();
				tv0->AddReply(537595, 39444, 39443);
				tv0->AddReply(537602, -1, 39450);
				return;
			}
			if (a0 == 39444) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537596);
				tv0->ClearReplies();
				tv0->AddReply(537597, 39446, 39445);
				tv0->AddReply(537601, -1, 39449);
				return;
			}
			if (a0 == 39446) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537598);
				tv0->ClearReplies();
				tv0->AddReply(537599, -1, 39447);
				tv0->AddReply(537600, -1, 39448);
				return;
			}
			if (a0 == 39419) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537572);
				tv0->ClearReplies();
				tv0->AddReply(537573, 39421, 39420);
				tv0->AddReply(537578, 39426, 39425);
				tv0->AddReply(537588, 39437, 39436);
				tv0->AddReply(537592, -1, 39440);
				return;
			}
			if (a0 == 39437) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537589);
				tv0->ClearReplies();
				tv0->AddReply(537590, -1, 39438);
				tv0->AddReply(537591, -1, 39439);
				return;
			}
			if (a0 == 39426) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537579);
				tv0->ClearReplies();
				tv0->AddReply(537580, 39421, 39427);
				tv0->AddReply(537581, 39430, 39429);
				return;
			}
			if (a0 == 39430) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537582);
				tv0->ClearReplies();
				tv0->AddReply(537583, 39432, 39431);
				tv0->AddReply(537587, -1, 39435);
				return;
			}
			if (a0 == 39432) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537584);
				tv0->ClearReplies();
				tv0->AddReply(537585, -1, 39433);
				tv0->AddReply(537586, -1, 39434);
				return;
			}
			if (a0 == 39421) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537574);
				tv0->ClearReplies();
				tv0->AddReply(537575, 39423, 39422);
				return;
			}
			if (a0 == 39423) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537576);
				tv0->ClearReplies();
				tv0->AddReply(537577, -1, 39424);
				return;
			}
			if (a0 == 39407) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537560);
				tv0->ClearReplies();
				tv0->AddReply(537561, 39409, 39408);
				tv0->AddReply(537570, -1, 39417);
				return;
			}
			if (a0 == 39409) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537562);
				tv0->ClearReplies();
				tv0->AddReply(537563, 39411, 39410);
				tv0->AddReply(537567, 39415, 39414);
				return;
			}
			if (a0 == 39415) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537568);
				tv0->ClearReplies();
				tv0->AddReply(537569, -1, 39416);
				return;
			}
			if (a0 == 39411) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537564);
				tv0->ClearReplies();
				tv0->AddReply(537565, -1, 39412);
				tv0->AddReply(537566, -1, 39413);
				return;
			}
			if (a0 == 39397) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537550);
				tv0->ClearReplies();
				tv0->AddReply(537551, 39399, 39398);
				tv0->AddReply(537558, -1, 39405);
				return;
			}
			if (a0 == 39399) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537552);
				tv0->ClearReplies();
				tv0->AddReply(537553, 39401, 39400);
				tv0->AddReply(537557, -1, 39404);
				return;
			}
			if (a0 == 39401) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537554);
				tv0->ClearReplies();
				tv0->AddReply(537555, -1, 39402);
				tv0->AddReply(537556, -1, 39403);
				return;
			}
			if (a0 == 39382) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537535);
				tv0->ClearReplies();
				tv0->AddReply(537536, 39384, 39383);
				return;
			}
			if (a0 == 39384) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537537);
				tv0->ClearReplies();
				tv0->AddReply(537538, 39386, 39385);
				tv0->AddReply(537548, -1, 39395);
				return;
			}
			if (a0 == 39386) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537539);
				tv0->ClearReplies();
				tv0->AddReply(537540, 39388, 39387);
				tv0->AddReply(537543, -1, 39390);
				tv0->AddReply(537544, 39392, 39391);
				return;
			}
			if (a0 == 39392) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537545);
				tv0->ClearReplies();
				tv0->AddReply(537546, -1, 39393);
				tv0->AddReply(537547, -1, 39394);
				return;
			}
			if (a0 == 39388) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537541);
				tv0->ClearReplies();
				tv0->AddReply(537542, -1, 39389);
				return;
			}
			if (a0 == 39372) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537525);
				tv0->ClearReplies();
				tv0->AddReply(537526, 39374, 39373);
				tv0->AddReply(537533, -1, 39380);
				return;
			}
			if (a0 == 39374) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537527);
				tv0->ClearReplies();
				tv0->AddReply(537528, 39376, 39375);
				tv0->AddReply(537532, -1, 39379);
				return;
			}
			if (a0 == 39376) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537529);
				tv0->ClearReplies();
				tv0->AddReply(537530, -1, 39377);
				tv0->AddReply(537531, -1, 39378);
				return;
			}
			if (a0 == 39356) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537509);
				tv0->ClearReplies();
				tv0->AddReply(537510, 39358, 39357);
				tv0->AddReply(537520, 39368, 39367);
				return;
			}
			if (a0 == 39368) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537521);
				tv0->ClearReplies();
				tv0->AddReply(537522, -1, 39369);
				tv0->AddReply(537523, -1, 39370);
				return;
			}
			if (a0 == 39358) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537511);
				tv0->ClearReplies();
				tv0->AddReply(537512, 39360, 39359);
				tv0->AddReply(537519, -1, 39366);
				return;
			}
			if (a0 == 39360) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537513);
				tv0->ClearReplies();
				tv0->AddReply(537514, 39362, 39361);
				tv0->AddReply(537518, -1, 39365);
				return;
			}
			if (a0 == 39362) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(537515);
				tv0->ClearReplies();
				tv0->AddReply(537516, -1, 39363);
				tv0->AddReply(537517, -1, 39364);
				return;
			}
			if (a0 == 45739) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(543283);
				tv0->ClearReplies();
				tv0->AddReply(543284, -1, 45740);
				tv0->AddReply(543285, -1, 45741);
				tv0->AddReply(543286, -1, 45742);
				return;
			}
			if (a0 == 45734) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(543278);
				tv0->ClearReplies();
				tv0->AddReply(543279, -1, 45735);
				tv0->AddReply(543280, -1, 45736);
				return;
			}
			if (a0 == 45719) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(543263);
				tv0->ClearReplies();
				tv0->AddReply(543264, 45723, 45720);
				tv0->AddReply(543265, -1, 45721);
				tv0->AddReply(543266, -1, 45722);
				return;
			}
			if (a0 == 45723) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(543267);
				tv0->ClearReplies();
				tv0->AddReply(543268, 45727, 45724);
				tv0->AddReply(543269, -1, 45725);
				tv0->AddReply(543270, -1, 45726);
				return;
			}
			if (a0 == 45727) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(543271);
				tv0->ClearReplies();
				tv0->AddReply(543272, -1, 45728);
				tv0->AddReply(543273, -1, 45729);
				tv0->AddReply(543274, -1, 45730);
				return;
			}
			if (a0 == 45709) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(543253);
				tv0->ClearReplies();
				tv0->AddReply(543254, 45714, 45710);
				tv0->AddReply(543255, 45716, 45711);
				tv0->AddReply(543256, -1, 45712);
				tv0->AddReply(543257, -1, 45713);
				return;
			}
			if (a0 == 45716) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(543260);
				tv0->ClearReplies();
				tv0->AddReply(543261, -1, 45717);
				return;
			}
			if (a0 == 45714) {
				f_9bb_a1_v("Neutral");
				tv0->SetMessage(543258);
				tv0->ClearReplies();
				tv0->AddReply(543259, -1, 45715);
				return;
			}
			tv3 = true;
			if (f_181d_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

Vector f_137b_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_1380_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_1387_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_138f_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_1394_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_13a0_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_13a5_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_13a0_a1_b(a0)) {
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

bool f_13c9_a1_b(object a0)
{
	int L0;
	if (!f_13a5_a1_b(a0)) {
		return false;
	}
	if (!f_1394_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_13e1_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_13ec_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_13f1_a2_b(object a0, float a1)
{
	float L0;
	Vector L1;
	Vector L2;
	Vector L3;
	Vector L4;
	Vector L5;
	Vector L6;
	bool L7;
	a0->GetPosition(L1);
	a0->GetEyesHeight(L0);
	L1.y += L0;
	@GetPosition(L2);
	@GetEyesHeight(L0);
	L2.y += L0;
	L3 = L1 - L2;
	L3.y = 0;
	L3 = L3 / sqrt(L3 | L3);
	L4 = -L3;
	L5 = L3 * a1 + f_14d6_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_181d_a0_b()) {
	} else {
		bool L8;
		@HasAnimationTrack(L8, "head");
		if (L8) {
			@LookAsyncCamera("head");
		}
	}
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_1436_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_181d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1448_a1_b(object a0)
{
	return f_1450_a2_b(a0, 70);
}

bool f_1450_a2_b(object a0, float a1)
{
	float L0;
	Vector L1;
	Vector L2;
	Vector L3;
	Vector L4;
	Vector L5;
	Vector L6;
	bool L7;
	a0->GetPosition(L1);
	a0->GetEyesHeight(L0);
	L1.y += L0;
	@GetPosition(L2);
	@GetEyesHeight(L0);
	L2.y += L0;
	L3 = L1 - L2;
	L3.y = 0;
	L3 = L3 / sqrt(L3 | L3);
	L4 = -L3;
	L5 = L3 * a1 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_1480_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
}

void f_1485_a1_v(string a0)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, false);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

void f_1495_a2_v(string a0, bool a1)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, a1);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

void f_14a4_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_14af_a0_v(void)
{
	if (f_181d_a0_b()) {
		@lshStopSpeech();
	}
}

void f_14b6_a3_v(string a0, int a1, int a2)
{
	if (f_14e0_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_14c1_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_14e0_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

object f_14d0_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_14d6_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_14e0_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

float f_14e5_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_14ed_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_14f6_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_1500_a2_f(Vector a0, Vector a1)
{
	return f_14ed_a2_f(a0, a1) / (f_14f6_a1_f(a0) * f_14f6_a1_f(a1));
}

int f_1511_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_1516_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_151f_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

void OnPropertyChange(object a0, string a1)
{
}

void OnDeath(object a0)
{
}

void OnHit(object a0, int a1, float a2, float a3)
{
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
}

bool f_152f_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_1652_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_165f_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_1676_a1_b(a0);
			}
		}
	}
	return false;
}

void f_154f_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_1657_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_166e_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_167d_a1_v(a0);
			}
		}
	}
}

bool f_1568_a1_b(object a0)
{
	if (f_1652_a1_b(a0) && f_138f_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_157f_a1_v(object a0)
{
	f_1657_a1_v(a0);
}

void f_1585_a1_v(object a0)
{
	if (f_138f_a1_b(a0)) {
		@ReportReputationChange(a0, f_14d0_a0_o(), -0.029999999329447746);
	}
}

bool f_1592_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_1683_a1_b(L0);
	}
	return false;
}

void f_15a2_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_1686_a1_v(L0);
	}
}

string f_15af_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_15b6_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_15af_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_15c7_a1_i(object a0)
{
	return f_184f_a0_b() ? 2 : 0;
}

void f_15d0_a1_v(object a0)
{
	t3{a0};
}

int f_15d8_a1_i(object a0)
{
	return f_13c9_a1_b(a0) ? 2 : 0;
}

void f_15e2_a1_v(object a0)
{
	t4{a0};
}

int f_15ea_a2_i(object a0, bool a1)
{
	return f_13c9_a1_b(a0) ? 2 : 0;
}

void f_15f4_a1_v(object a0)
{
	t5{a0};
}

bool f_15fc_a3_b(object a0, object a1, float a2)
{
	string L0;
	bool L1;
	if (!f_1394_a2_b(a1, "class")) {
		return false;
	}
	a1->GetProperty("class", L0);
	if (L0 == "rat") {
		return false;
	} else {
		if (L0 == "rat_big") {
			return false;
		} else {
			if (L0 == "dog") {
				return false;
			}
		}
	}
	@CanSee(L1, a0);
	if (L1 || f_1387_a1_f(a0) <= a2 * a2) {
		return true;
	}
	@CanSee(L1, a1);
	if (L1 || f_1387_a1_f(a1) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_163e_a1_i(object a0)
{
	return 2;
}

void f_1641_a1_v(object a0)
{
	f_1827_a1_v(a0);
}

void f_1647_a0_v(void)
{
}

int f_1648_a1_i(object a0)
{
	return 0;
}

void f_164b_a1_v(object a0)
{
}

int f_164d_a2_i(string a0, object a1)
{
	return 0;
}

void f_1650_a2_v(string a0, object a1)
{
}

bool f_1652_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0;
}

void f_1657_a1_v(object a0)
{
	t6{a0};
}

bool f_165f_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_1387_a1_f(a0) <= 4000000;
}

void f_166e_a1_v(object a0)
{
	t7{a0};
}

bool f_1676_a1_b(object a0)
{
	return f_165f_a1_b(a0);
}

void f_167d_a1_v(object a0)
{
	f_166e_a1_v(a0);
}

bool f_1683_a1_b(object a0)
{
	return false;
}

void f_1686_a1_v(object a0)
{
}

void f_1688_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_168d_a1_b(object a0)
{
	if (f_1511_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_1699_a1_b(object a0)
{
	if (f_1511_a1_i("branch") == 2) {
		return true;
	}
	return false;
}

bool f_16a5_a1_b(object a0)
{
	if (f_1731_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_16af_a1_b(object a0)
{
	if (f_1738_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_16b9_a1_b(object a0)
{
	if (f_173f_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_16c3_a1_b(object a0)
{
	if (f_1746_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_16cd_a1_b(object a0)
{
	if (f_174d_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_16d7_a1_b(object a0)
{
	if (f_1754_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_16e1_a1_b(object a0)
{
	if (f_175b_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_16eb_a1_b(object a0)
{
	if (f_1762_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_16f5_a1_b(object a0)
{
	if (f_1769_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_16ff_a1_b(object a0)
{
	if (f_1770_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1709_a1_b(object a0)
{
	if (f_1777_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1713_a1_b(object a0)
{
	if (f_177e_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_171d_a1_b(object a0)
{
	if (f_1785_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1727_a1_b(object a0)
{
	if (f_179a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1731_a1_b(object a0)
{
	return f_1516_a0_i() == 1;
}

bool f_1738_a1_b(object a0)
{
	return f_1516_a0_i() == 2;
}

bool f_173f_a1_b(object a0)
{
	return f_1516_a0_i() == 3;
}

bool f_1746_a1_b(object a0)
{
	return f_1516_a0_i() == 4;
}

bool f_174d_a1_b(object a0)
{
	return f_1516_a0_i() == 5;
}

bool f_1754_a1_b(object a0)
{
	return f_1516_a0_i() == 6;
}

bool f_175b_a1_b(object a0)
{
	return f_1516_a0_i() == 7;
}

bool f_1762_a1_b(object a0)
{
	return f_1516_a0_i() == 8;
}

bool f_1769_a1_b(object a0)
{
	return f_1516_a0_i() == 9;
}

bool f_1770_a1_b(object a0)
{
	return f_1516_a0_i() == 10;
}

bool f_1777_a1_b(object a0)
{
	return f_1516_a0_i() == 11;
}

bool f_177e_a1_b(object a0)
{
	return f_1516_a0_i() == 12;
}

bool f_1785_a1_b(object a0)
{
	if (f_151f_a0_i() >= 0 && f_151f_a0_i() < 12) {
		return true;
	}
	return false;
}

bool f_179a_a1_b(object a0)
{
	if (f_151f_a0_i() >= 12) {
		return true;
	}
	return false;
}

int f_17a5_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	if (L0 == 0) {
		return 1;
	} else {
		if (L0 == 1) {
			return 2;
		}
	}
	return 3;
}

int f_17b6_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_17bc_a1_v(object a0)
{
	if (f_17b6_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_17c9_a1_v(bool a0)
{
	@ClearSubContainer(0);
	if (a0) {
		f_14c1_a4_v("rifle_ammo", 1, 2, 2);
		f_14c1_a4_v("revolver_ammo", 1, 2, 2);
		f_14c1_a4_v("samopal_ammo", 2, 2, 2);
	} else {
		int L0;
		f_14b6_a3_v("lockpick", 1, 4);
		f_14c1_a4_v("alpha_pills", 1, 2, 3);
		f_14b6_a3_v("meradorm", 1, 2);
		f_14b6_a3_v("powder", 1, 15);
		L0 = f_1516_a0_i();
		if (L0 >= 4) {
			f_14b6_a3_v("beta_pills", 1, 2);
		}
		if (L0 >= 6) {
			f_14b6_a3_v("gamma_pills", 1, 7);
		}
	}
}

int f_1815_a0_i(void)
{
	return 515560;
}

int f_1817_a0_i(void)
{
	return 503345;
}

string f_1819_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_181b_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_181d_a0_b(void)
{
	return false;
}

void f_181f_a0_v(void)
{
	g0 = false;
	f_17c9_a1_v(true);
}

void f_1827_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_17bc_a1_v(a0);
		}
		return;
	} else {
		if (1000 == t8{a0}) {
			if (!f_1448_a1_b(a0)) {
				return;
			}
			t0{a0};
			f_1480_a1_v(a0);
		}
	}
}

bool f_184f_a0_b(void)
{
	return true;
}

bool f_1851_a3_b(object a0, object a1, bool a2)
{
	if (f_15fc_a3_b(a0, a1, 500.0)) {
		@SetProperty("ToDie", true);
		return true;
	}
	return false;
}

