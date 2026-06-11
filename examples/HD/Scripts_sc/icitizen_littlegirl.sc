event OnDialogReply 11;
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
			if (f_fa9_a0_b()) {
				f_c49_a1_v("Neutral");
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

	void OnDialogReply(int a0)
	{
		if (f_fa9_a0_b()) {
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
		f_fab_a0_v();
		f_37_a0_v();
		for (; ; ) {
			tv2 = false;
			f_13c_a0_v();
		}
	}

	void f_37_a0_v(void)
	{
		if (!f_bb0_a0_b()) {
			f_e0b_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_e02_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fb_a0_v();
			}
			f_e05_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_d49_a1_v(a0);
		L0 = f_d9c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fb_a0_v();
			}
			f_da6_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_fdd_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_dae_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_fb_a0_v();
				}
				f_db8_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_e0c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fb_a0_v();
			}
			f_e0f_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_cf3_a2_b(a0, a1)) {
			f_fb_a0_v();
			f_d13_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_e11_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_fb_a0_v();
				}
				f_e14_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_d56_a1_b(a0)) {
			f_fb_a0_v();
			f_d66_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_d2c_a1_b(a0)) {
			f_fb_a0_v();
			f_d43_a1_v(a0);
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
		f_e0b_a0_v();
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
		if (!f_b8d_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_d8b_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_103_a0_v();
			}
			f_d94_a1_v(a0);
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
		L0 = f_e02_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_28e_a0_v();
			}
			f_e05_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_d49_a1_v(a0);
		L0 = f_d9c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_28e_a0_v();
			}
			f_da6_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_fdd_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_dae_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_28e_a0_v();
				}
				f_db8_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_e0c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_28e_a0_v();
			}
			f_e0f_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_cf3_a2_b(a0, a1)) {
			f_28e_a0_v();
			f_d13_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_e11_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_28e_a0_v();
				}
				f_e14_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_d56_a1_b(a0)) {
			f_28e_a0_v();
			f_d66_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_28e_a0_v();
		f_e0b_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_d2c_a1_b(a0)) {
			f_28e_a0_v();
			f_d43_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_bb0_a0_b()) {
			return;
		}
		L0 = f_d7a_a0_i();
		for (L1 = 0; L1 < 5 && f_bb0_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_d73_a1_s(L3));
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
		L1 = f_b44_a1_V(tv0);
		if (f_cc4_a2_f(L0, L1) < 0) {
			f_ba5_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_ba5_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_2c6_a0_v(void)
	{
		f_c68_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_e02_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35a_a0_v();
			}
			f_e05_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_d49_a1_v(a0);
		L0 = f_d9c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35a_a0_v();
			}
			f_da6_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_fdd_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_dae_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_35a_a0_v();
				}
				f_db8_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_e0c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35a_a0_v();
			}
			f_e0f_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_cf3_a2_b(a0, a1)) {
			f_35a_a0_v();
			f_d13_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_e11_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_35a_a0_v();
				}
				f_e14_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_d56_a1_b(a0)) {
			f_35a_a0_v();
			f_d66_a1_v(a0);
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
		if (!f_b8d_a1_b(tv0)) {
			f_35a_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_b44_a1_V(tv0);
		if (f_cc4_a2_f(L0, L1) < 0.4999999701976776) {
			f_ba5_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_35a_a0_v();
		f_e0b_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_d2c_a1_b(a0)) {
			f_35a_a0_v();
			f_d43_a1_v(a0);
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
		f_e0b_a0_v();
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
		L3 = f_c9a_a1_V(f_c9a_a1_V(L0 - L1) + L2 * 0.75);
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
		tv1 = f_b3f_a0_V() + L0;
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
					tv1 = f_b3f_a0_V() + L3;
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
				tv1 = f_b3f_a0_V() + L2;
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
		L1 = f_b44_a1_V(tv0);
		return f_ca9_a2_f(L0, L1) >= -0.3420201241970062;
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
		L3 = f_c9a_a1_V(f_c9a_a1_V(L0 - L1) + L2 * 0.75);
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
		tv1 = f_b3f_a0_V() + L0;
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
					tv1 = f_b3f_a0_V() + L3;
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
				tv1 = f_b3f_a0_V() + L2;
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
		L1 = f_b44_a1_V(tv0);
		return f_ca9_a2_f(L0, L1) >= -0.3420201241970062;
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
		f_e0b_a0_v();
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
		L3 = f_c9a_a1_V(f_c9a_a1_V(L0 - L1) + L2 * 0.75);
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
		tv1 = f_b3f_a0_V() + L0;
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
					tv1 = f_b3f_a0_V() + L3;
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
				tv1 = f_b3f_a0_V() + L2;
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
		L1 = f_b44_a1_V(tv0);
		return f_ca9_a2_f(L0, L1) >= -0.3420201241970062;
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
		f_e0b_a0_v();
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
		L3 = f_c9a_a1_V(f_c9a_a1_V(L0 - L1) + L2 * 0.75);
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
		tv1 = f_b3f_a0_V() + L0;
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
					tv1 = f_b3f_a0_V() + L3;
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
				tv1 = f_b3f_a0_V() + L2;
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
		L1 = f_b44_a1_V(tv0);
		return f_ca9_a2_f(L0, L1) >= -0.3420201241970062;
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
		if (!f_bb5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fa3_a0_i());
		L0->SetNPCDescription(f_fa1_a0_i());
		L0->SetPhoto(f_fa5_a0_s());
		L0->SetPhoto2(f_fa7_a0_s());
		L0->SetPlayerName(f_f31_a0_i());
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
		f_bfa_a1_v(a0);
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
			if (f_e5d_a1_b(tv1)) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(543287);
				tv0->ClearReplies();
				if (f_e89_a1_b(tv1) || f_e93_a1_b(tv1) || f_e9d_a1_b(tv1)) {
					tv0->AddReply(543290, 45747, 45746);
				}
				if (f_e7f_a1_b(tv1) || f_ea7_a1_b(tv1) || f_ebb_a1_b(tv1)) {
					tv0->AddReply(543294, 45752, 45750);
				}
				if (f_eb1_a1_b(tv1)) {
					tv0->AddReply(543295, 45761, 45751);
				}
				tv0->AddReply(543288, -1, 45744);
				tv0->AddReply(543289, -1, 45745);
				tv0->AddReply(543304, -1, 45760);
				break;
			}
			f_807_a1_v("Neutral");
			tv0->SetMessage(537723);
			tv0->ClearReplies();
			if (f_e51_a1_b(tv1)) {
				tv0->AddReply(537724, 39573, 39572);
			}
			if (!f_e51_a1_b(tv1)) {
				tv0->AddReply(537728, -1, 39576);
			}
			if (f_e51_a1_b(tv1) && f_e75_a1_b(tv1) && f_ec5_a1_b(tv1) && f_e69_a1_b(tv1)) {
				tv0->AddReply(537729, 39578, 39577);
			}
			if (f_e51_a1_b(tv1) && f_e75_a1_b(tv1) && f_ecf_a1_b(tv1)) {
				tv0->AddReply(537740, 39589, 39588);
			}
			if (f_e9d_a1_b(tv1)) {
				tv0->AddReply(537755, 39604, 39603);
			}
			tv0->AddReply(537783, -1, 39634);
			tv0->AddReply(537784, -1, 39635);
			break;
			return;
		}
		if (f_fa9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c49_a1_v(tv2);
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

	void f_807_a1_v(string a0)
	{
		if (!f_fa9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_c73_a0_v();
			if (a1 == 45744) {
				f_e4c_a2_v(tv1, tv0);
			}
			if (a1 == 39574) {
				f_e4c_a2_v(tv1, tv0);
			}
			if (a1 == 39576) {
				f_e4c_a2_v(tv1, tv0);
			}
			if (a0 == 45743) {
				if (f_e5d_a1_b(tv1)) {
					f_807_a1_v("Neutral");
					tv0->SetMessage(543287);
					tv0->ClearReplies();
					if (f_e89_a1_b(tv1) || f_e93_a1_b(tv1) || f_e9d_a1_b(tv1)) {
						tv0->AddReply(543290, 45747, 45746);
					}
					if (f_e7f_a1_b(tv1) || f_ea7_a1_b(tv1) || f_ebb_a1_b(tv1)) {
						tv0->AddReply(543294, 45752, 45750);
					}
					if (f_eb1_a1_b(tv1)) {
						tv0->AddReply(543295, 45761, 45751);
					}
					tv0->AddReply(543288, -1, 45744);
					tv0->AddReply(543289, -1, 45745);
					tv0->AddReply(543304, -1, 45760);
					return;
				}
				f_807_a1_v("Neutral");
				tv0->SetMessage(537723);
				tv0->ClearReplies();
				if (f_e51_a1_b(tv1)) {
					tv0->AddReply(537724, 39573, 39572);
				}
				if (!f_e51_a1_b(tv1)) {
					tv0->AddReply(537728, -1, 39576);
				}
				if (f_e51_a1_b(tv1) && f_e75_a1_b(tv1) && f_ec5_a1_b(tv1) && f_e69_a1_b(tv1)) {
					tv0->AddReply(537729, 39578, 39577);
				}
				if (f_e51_a1_b(tv1) && f_e75_a1_b(tv1) && f_ecf_a1_b(tv1)) {
					tv0->AddReply(537740, 39589, 39588);
				}
				if (f_e9d_a1_b(tv1)) {
					tv0->AddReply(537755, 39604, 39603);
				}
				tv0->AddReply(537783, -1, 39634);
				tv0->AddReply(537784, -1, 39635);
				return;
			}
			if (a0 == 39604) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537756);
				tv0->ClearReplies();
				tv0->AddReply(537757, 39606, 39605);
				tv0->AddReply(537766, 39615, 39614);
				tv0->AddReply(537782, -1, 39633);
				return;
			}
			if (a0 == 39615) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537767);
				tv0->ClearReplies();
				tv0->AddReply(537768, 39617, 39616);
				tv0->AddReply(537781, -1, 39632);
				return;
			}
			if (a0 == 39617) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537769);
				tv0->ClearReplies();
				tv0->AddReply(537770, 39608, 39618);
				tv0->AddReply(537771, 39621, 39620);
				return;
			}
			if (a0 == 39621) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537772);
				tv0->ClearReplies();
				if (f_e51_a1_b(tv1)) {
					tv0->AddReply(537773, 39623, 39622);
				}
				tv0->AddReply(537777, 39628, 39627);
				return;
			}
			if (a0 == 39628) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537778);
				tv0->ClearReplies();
				tv0->AddReply(537779, 39608, 39629);
				if (f_e51_a1_b(tv1)) {
					tv0->AddReply(537780, -1, 39631);
				}
				return;
			}
			if (a0 == 39623) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537774);
				tv0->ClearReplies();
				tv0->AddReply(537775, 39608, 39624);
				tv0->AddReply(537776, -1, 39626);
				return;
			}
			if (a0 == 39606) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537758);
				tv0->ClearReplies();
				tv0->AddReply(537759, 39608, 39607);
				return;
			}
			if (a0 == 39608) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537760);
				tv0->ClearReplies();
				tv0->AddReply(537761, 39610, 39609);
				tv0->AddReply(537765, -1, 39613);
				return;
			}
			if (a0 == 39610) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537762);
				tv0->ClearReplies();
				tv0->AddReply(537763, -1, 39611);
				tv0->AddReply(537764, -1, 39612);
				return;
			}
			if (a0 == 39589) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537741);
				tv0->ClearReplies();
				tv0->AddReply(537742, 39591, 39590);
				tv0->AddReply(537747, 39596, 39595);
				tv0->AddReply(537754, -1, 39602);
				return;
			}
			if (a0 == 39596) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537748);
				tv0->ClearReplies();
				tv0->AddReply(537749, 39598, 39597);
				tv0->AddReply(537753, -1, 39601);
				return;
			}
			if (a0 == 39598) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537750);
				tv0->ClearReplies();
				tv0->AddReply(537751, -1, 39599);
				tv0->AddReply(537752, -1, 39600);
				return;
			}
			if (a0 == 39591) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537743);
				tv0->ClearReplies();
				tv0->AddReply(537744, -1, 39592);
				tv0->AddReply(537745, -1, 39593);
				tv0->AddReply(537746, -1, 39594);
				return;
			}
			if (a0 == 39578) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537730);
				tv0->ClearReplies();
				tv0->AddReply(537731, 39580, 39579);
				tv0->AddReply(537738, -1, 39586);
				return;
			}
			if (a0 == 39580) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537732);
				tv0->ClearReplies();
				tv0->AddReply(537733, 39582, 39581);
				tv0->AddReply(537737, -1, 39585);
				return;
			}
			if (a0 == 39582) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537734);
				tv0->ClearReplies();
				tv0->AddReply(537735, -1, 39583);
				tv0->AddReply(537736, -1, 39584);
				return;
			}
			if (a0 == 39573) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(537725);
				tv0->ClearReplies();
				tv0->AddReply(537726, -1, 39574);
				tv0->AddReply(537727, -1, 39575);
				return;
			}
			if (a0 == 45761) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(543305);
				tv0->ClearReplies();
				tv0->AddReply(543306, -1, 45762);
				tv0->AddReply(543307, 45766, 45763);
				return;
			}
			if (a0 == 45766) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(543310);
				tv0->ClearReplies();
				tv0->AddReply(543312, -1, 45768);
				tv0->AddReply(543311, -1, 45767);
				return;
			}
			if (a0 == 45752) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(543296);
				tv0->ClearReplies();
				tv0->AddReply(543297, 45755, 45753);
				tv0->AddReply(543298, 45756, 45754);
				return;
			}
			if (a0 == 45756) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(543300);
				tv0->ClearReplies();
				tv0->AddReply(543302, -1, 45758);
				tv0->AddReply(543303, -1, 45759);
				return;
			}
			if (a0 == 45755) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(543299);
				tv0->ClearReplies();
				tv0->AddReply(543301, -1, 45757);
				return;
			}
			if (a0 == 45747) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(543291);
				tv0->ClearReplies();
				tv0->AddReply(543292, -1, 45748);
				tv0->AddReply(543293, -1, 45749);
				return;
			}
			tv3 = true;
			if (f_fa9_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

Vector f_b3f_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_b44_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_b4b_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_b53_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_b58_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_b64_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_b69_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_b64_a1_b(a0)) {
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

bool f_b8d_a1_b(object a0)
{
	int L0;
	if (!f_b69_a1_b(a0)) {
		return false;
	}
	if (!f_b58_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_ba5_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_bb0_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_bb5_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_c9a_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_fa9_a0_b()) {
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

void f_bfa_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_fa9_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_c0c_a1_b(object a0)
{
	return f_c14_a2_b(a0, 70);
}

bool f_c14_a2_b(object a0, float a1)
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

void f_c44_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
}

void f_c49_a1_v(string a0)
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

void f_c59_a2_v(string a0, bool a1)
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

void f_c68_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_c73_a0_v(void)
{
	if (f_fa9_a0_b()) {
		@lshStopSpeech();
	}
}

void f_c7a_a3_v(string a0, int a1, int a2)
{
	if (f_ca4_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_c85_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_ca4_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

object f_c94_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_c9a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_ca4_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

float f_ca9_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_cb1_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_cba_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_cc4_a2_f(Vector a0, Vector a1)
{
	return f_cb1_a2_f(a0, a1) / (f_cba_a1_f(a0) * f_cba_a1_f(a1));
}

int f_cd5_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_cda_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_ce3_a0_i(void)
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

bool f_cf3_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_e16_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_e23_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_e3a_a1_b(a0);
			}
		}
	}
	return false;
}

void f_d13_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_e1b_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_e32_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_e41_a1_v(a0);
			}
		}
	}
}

bool f_d2c_a1_b(object a0)
{
	if (f_e16_a1_b(a0) && f_b53_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_d43_a1_v(object a0)
{
	f_e1b_a1_v(a0);
}

void f_d49_a1_v(object a0)
{
	if (f_b53_a1_b(a0)) {
		@ReportReputationChange(a0, f_c94_a0_o(), -0.029999999329447746);
	}
}

bool f_d56_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_e47_a1_b(L0);
	}
	return false;
}

void f_d66_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_e4a_a1_v(L0);
	}
}

string f_d73_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_d7a_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_d73_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_d8b_a1_i(object a0)
{
	return f_fdb_a0_b() ? 2 : 0;
}

void f_d94_a1_v(object a0)
{
	t3{a0};
}

int f_d9c_a1_i(object a0)
{
	return f_b8d_a1_b(a0) ? 2 : 0;
}

void f_da6_a1_v(object a0)
{
	t4{a0};
}

int f_dae_a2_i(object a0, bool a1)
{
	return f_b8d_a1_b(a0) ? 2 : 0;
}

void f_db8_a1_v(object a0)
{
	t5{a0};
}

bool f_dc0_a3_b(object a0, object a1, float a2)
{
	string L0;
	bool L1;
	if (!f_b58_a2_b(a1, "class")) {
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
	if (L1 || f_b4b_a1_f(a0) <= a2 * a2) {
		return true;
	}
	@CanSee(L1, a1);
	if (L1 || f_b4b_a1_f(a1) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_e02_a1_i(object a0)
{
	return 2;
}

void f_e05_a1_v(object a0)
{
	f_fb3_a1_v(a0);
}

void f_e0b_a0_v(void)
{
}

int f_e0c_a1_i(object a0)
{
	return 0;
}

void f_e0f_a1_v(object a0)
{
}

int f_e11_a2_i(string a0, object a1)
{
	return 0;
}

void f_e14_a2_v(string a0, object a1)
{
}

bool f_e16_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0;
}

void f_e1b_a1_v(object a0)
{
	t6{a0};
}

bool f_e23_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_b4b_a1_f(a0) <= 4000000;
}

void f_e32_a1_v(object a0)
{
	t7{a0};
}

bool f_e3a_a1_b(object a0)
{
	return f_e23_a1_b(a0);
}

void f_e41_a1_v(object a0)
{
	f_e32_a1_v(a0);
}

bool f_e47_a1_b(object a0)
{
	return false;
}

void f_e4a_a1_v(object a0)
{
}

void f_e4c_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_e51_a1_b(object a0)
{
	if (f_cd5_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_e5d_a1_b(object a0)
{
	if (f_cd5_a1_i("branch") == 2) {
		return true;
	}
	return false;
}

bool f_e69_a1_b(object a0)
{
	if (f_cd5_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_e75_a1_b(object a0)
{
	if (f_ed9_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_e7f_a1_b(object a0)
{
	if (f_ee0_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_e89_a1_b(object a0)
{
	if (f_ee7_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_e93_a1_b(object a0)
{
	if (f_eee_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_e9d_a1_b(object a0)
{
	if (f_ef5_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ea7_a1_b(object a0)
{
	if (f_efc_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_eb1_a1_b(object a0)
{
	if (f_f03_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ebb_a1_b(object a0)
{
	if (f_f0a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ec5_a1_b(object a0)
{
	if (f_f11_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ecf_a1_b(object a0)
{
	if (f_f26_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ed9_a1_b(object a0)
{
	return f_cda_a0_i() == 1;
}

bool f_ee0_a1_b(object a0)
{
	return f_cda_a0_i() == 2;
}

bool f_ee7_a1_b(object a0)
{
	return f_cda_a0_i() == 3;
}

bool f_eee_a1_b(object a0)
{
	return f_cda_a0_i() == 4;
}

bool f_ef5_a1_b(object a0)
{
	return f_cda_a0_i() == 5;
}

bool f_efc_a1_b(object a0)
{
	return f_cda_a0_i() == 6;
}

bool f_f03_a1_b(object a0)
{
	return f_cda_a0_i() == 8;
}

bool f_f0a_a1_b(object a0)
{
	return f_cda_a0_i() == 10;
}

bool f_f11_a1_b(object a0)
{
	if (f_ce3_a0_i() >= 0 && f_ce3_a0_i() < 12) {
		return true;
	}
	return false;
}

bool f_f26_a1_b(object a0)
{
	if (f_ce3_a0_i() >= 12) {
		return true;
	}
	return false;
}

int f_f31_a0_i(void)
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

int f_f42_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_f48_a1_v(object a0)
{
	if (f_f42_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_f55_a1_v(bool a0)
{
	@ClearSubContainer(0);
	if (a0) {
		f_c85_a4_v("rifle_ammo", 1, 2, 2);
		f_c85_a4_v("revolver_ammo", 1, 2, 2);
		f_c85_a4_v("samopal_ammo", 2, 2, 2);
	} else {
		int L0;
		f_c7a_a3_v("lockpick", 1, 4);
		f_c85_a4_v("alpha_pills", 1, 2, 3);
		f_c7a_a3_v("meradorm", 1, 2);
		f_c7a_a3_v("powder", 1, 15);
		L0 = f_cda_a0_i();
		if (L0 >= 4) {
			f_c7a_a3_v("beta_pills", 1, 2);
		}
		if (L0 >= 6) {
			f_c7a_a3_v("gamma_pills", 1, 7);
		}
	}
}

int f_fa1_a0_i(void)
{
	return 515561;
}

int f_fa3_a0_i(void)
{
	return 503346;
}

string f_fa5_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_fa7_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_fa9_a0_b(void)
{
	return false;
}

void f_fab_a0_v(void)
{
	g0 = false;
	f_f55_a1_v(false);
}

void f_fb3_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_f48_a1_v(a0);
		}
		return;
	} else {
		if (1000 == t8{a0}) {
			if (!f_c0c_a1_b(a0)) {
				return;
			}
			t0{a0};
			f_c44_a1_v(a0);
		}
	}
}

bool f_fdb_a0_b(void)
{
	return true;
}

bool f_fdd_a3_b(object a0, object a1, bool a2)
{
	if (f_dc0_a3_b(a0, a1, 500.0)) {
		@SetProperty("ToDie", true);
		return true;
	}
	return false;
}

