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
			if (f_dc3_a0_b()) {
				f_af3_a1_v("Neutral");
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
		if (f_dc3_a0_b()) {
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
		f_dc5_a0_v();
		f_37_a0_v();
		for (; ; ) {
			tv2 = false;
			f_13c_a0_v();
		}
	}

	void f_37_a0_v(void)
	{
		if (!f_a5e_a0_b()) {
			f_ca3_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_c9a_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fb_a0_v();
			}
			f_c9d_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_be1_a1_v(a0);
		L0 = f_c34_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fb_a0_v();
			}
			f_c3e_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_df7_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_c46_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_fb_a0_v();
				}
				f_c50_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_ca4_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fb_a0_v();
			}
			f_ca7_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_b8b_a2_b(a0, a1)) {
			f_fb_a0_v();
			f_bab_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_ca9_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_fb_a0_v();
				}
				f_cac_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_bee_a1_b(a0)) {
			f_fb_a0_v();
			f_bfe_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_bc4_a1_b(a0)) {
			f_fb_a0_v();
			f_bdb_a1_v(a0);
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
		f_ca3_a0_v();
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
		if (!f_a3b_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_c23_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_103_a0_v();
			}
			f_c2c_a1_v(a0);
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
		L0 = f_c9a_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_28e_a0_v();
			}
			f_c9d_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_be1_a1_v(a0);
		L0 = f_c34_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_28e_a0_v();
			}
			f_c3e_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_df7_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_c46_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_28e_a0_v();
				}
				f_c50_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_ca4_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_28e_a0_v();
			}
			f_ca7_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_b8b_a2_b(a0, a1)) {
			f_28e_a0_v();
			f_bab_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_ca9_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_28e_a0_v();
				}
				f_cac_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_bee_a1_b(a0)) {
			f_28e_a0_v();
			f_bfe_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_28e_a0_v();
		f_ca3_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_bc4_a1_b(a0)) {
			f_28e_a0_v();
			f_bdb_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_a5e_a0_b()) {
			return;
		}
		L0 = f_c12_a0_i();
		for (L1 = 0; L1 < 5 && f_a5e_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_c0b_a1_s(L3));
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
		L1 = f_9f2_a1_V(tv0);
		if (f_b5c_a2_f(L0, L1) < 0) {
			f_a53_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_a53_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_2c6_a0_v(void)
	{
		f_b00_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_c9a_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35a_a0_v();
			}
			f_c9d_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_be1_a1_v(a0);
		L0 = f_c34_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35a_a0_v();
			}
			f_c3e_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_df7_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_c46_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_35a_a0_v();
				}
				f_c50_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_ca4_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35a_a0_v();
			}
			f_ca7_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_b8b_a2_b(a0, a1)) {
			f_35a_a0_v();
			f_bab_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_ca9_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_35a_a0_v();
				}
				f_cac_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_bee_a1_b(a0)) {
			f_35a_a0_v();
			f_bfe_a1_v(a0);
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
		if (!f_a3b_a1_b(tv0)) {
			f_35a_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_9f2_a1_V(tv0);
		if (f_b5c_a2_f(L0, L1) < 0.4999999701976776) {
			f_a53_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_35a_a0_v();
		f_ca3_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_bc4_a1_b(a0)) {
			f_35a_a0_v();
			f_bdb_a1_v(a0);
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
		f_ca3_a0_v();
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
		L3 = f_b32_a1_V(f_b32_a1_V(L0 - L1) + L2 * 0.75);
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
		tv1 = f_9ed_a0_V() + L0;
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
					tv1 = f_9ed_a0_V() + L3;
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
				tv1 = f_9ed_a0_V() + L2;
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
		L1 = f_9f2_a1_V(tv0);
		return f_b41_a2_f(L0, L1) >= -0.3420201241970062;
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
		L3 = f_b32_a1_V(f_b32_a1_V(L0 - L1) + L2 * 0.75);
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
		tv1 = f_9ed_a0_V() + L0;
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
					tv1 = f_9ed_a0_V() + L3;
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
				tv1 = f_9ed_a0_V() + L2;
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
		L1 = f_9f2_a1_V(tv0);
		return f_b41_a2_f(L0, L1) >= -0.3420201241970062;
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
		f_ca3_a0_v();
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
		L3 = f_b32_a1_V(f_b32_a1_V(L0 - L1) + L2 * 0.75);
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
		tv1 = f_9ed_a0_V() + L0;
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
					tv1 = f_9ed_a0_V() + L3;
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
				tv1 = f_9ed_a0_V() + L2;
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
		L1 = f_9f2_a1_V(tv0);
		return f_b41_a2_f(L0, L1) >= -0.3420201241970062;
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
		f_ca3_a0_v();
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
		L3 = f_b32_a1_V(f_b32_a1_V(L0 - L1) + L2 * 0.75);
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
		tv1 = f_9ed_a0_V() + L0;
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
					tv1 = f_9ed_a0_V() + L3;
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
				tv1 = f_9ed_a0_V() + L2;
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
		L1 = f_9f2_a1_V(tv0);
		return f_b41_a2_f(L0, L1) >= -0.3420201241970062;
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
		if (!f_a63_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dbd_a0_i());
		L0->SetNPCDescription(f_dbb_a0_i());
		L0->SetPhoto(f_dbf_a0_s());
		L0->SetPhoto2(f_dc1_a0_s());
		L0->SetPlayerName(f_d4b_a0_i());
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
		f_aa7_a1_v(a0);
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
			f_7a7_a1_v("Neutral");
			tv0->SetMessage(537723);
			tv0->ClearReplies();
			if (f_ce9_a1_b(tv1)) {
				tv0->AddReply(537724, 39573, 39572);
			}
			if (!f_ce9_a1_b(tv1)) {
				tv0->AddReply(537728, -1, 39576);
			}
			if (f_ce9_a1_b(tv1) && f_cf5_a1_b(tv1) && f_d09_a1_b(tv1)) {
				tv0->AddReply(537729, 39578, 39577);
			}
			if (f_ce9_a1_b(tv1) && f_cf5_a1_b(tv1) && f_d13_a1_b(tv1)) {
				tv0->AddReply(537740, 39589, 39588);
			}
			if (f_ce9_a1_b(tv1) && f_cff_a1_b(tv1)) {
				tv0->AddReply(537755, 39604, 39603);
			}
			tv0->AddReply(537783, -1, 39634);
			tv0->AddReply(537784, -1, 39635);
			break;
			return;
		}
		if (f_dc3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_af3_a1_v(tv2);
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

	void f_7a7_a1_v(string a0)
	{
		if (!f_dc3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_afa_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_b0b_a0_v();
			if (a1 == 39574) {
				f_ce4_a2_v(tv1, tv0);
			}
			if (a1 == 39576) {
				f_ce4_a2_v(tv1, tv0);
			}
			if (a0 == 39571) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537723);
				tv0->ClearReplies();
				if (f_ce9_a1_b(tv1)) {
					tv0->AddReply(537724, 39573, 39572);
				}
				if (!f_ce9_a1_b(tv1)) {
					tv0->AddReply(537728, -1, 39576);
				}
				if (f_ce9_a1_b(tv1) && f_cf5_a1_b(tv1) && f_d09_a1_b(tv1)) {
					tv0->AddReply(537729, 39578, 39577);
				}
				if (f_ce9_a1_b(tv1) && f_cf5_a1_b(tv1) && f_d13_a1_b(tv1)) {
					tv0->AddReply(537740, 39589, 39588);
				}
				if (f_ce9_a1_b(tv1) && f_cff_a1_b(tv1)) {
					tv0->AddReply(537755, 39604, 39603);
				}
				tv0->AddReply(537783, -1, 39634);
				tv0->AddReply(537784, -1, 39635);
				return;
			}
			if (a0 == 39604) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537756);
				tv0->ClearReplies();
				tv0->AddReply(537757, 39606, 39605);
				tv0->AddReply(537766, 39615, 39614);
				tv0->AddReply(537782, -1, 39633);
				return;
			}
			if (a0 == 39615) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537767);
				tv0->ClearReplies();
				tv0->AddReply(537768, 39617, 39616);
				tv0->AddReply(537781, -1, 39632);
				return;
			}
			if (a0 == 39617) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537769);
				tv0->ClearReplies();
				tv0->AddReply(537770, 39608, 39618);
				tv0->AddReply(537771, 39621, 39620);
				return;
			}
			if (a0 == 39621) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537772);
				tv0->ClearReplies();
				tv0->AddReply(537773, 39623, 39622);
				tv0->AddReply(537777, 39628, 39627);
				return;
			}
			if (a0 == 39628) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537778);
				tv0->ClearReplies();
				tv0->AddReply(537779, 39608, 39629);
				tv0->AddReply(537780, -1, 39631);
				return;
			}
			if (a0 == 39623) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537774);
				tv0->ClearReplies();
				tv0->AddReply(537775, 39608, 39624);
				tv0->AddReply(537776, -1, 39626);
				return;
			}
			if (a0 == 39606) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537758);
				tv0->ClearReplies();
				tv0->AddReply(537759, 39608, 39607);
				return;
			}
			if (a0 == 39608) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537760);
				tv0->ClearReplies();
				tv0->AddReply(537761, 39610, 39609);
				tv0->AddReply(537765, -1, 39613);
				return;
			}
			if (a0 == 39610) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537762);
				tv0->ClearReplies();
				tv0->AddReply(537763, -1, 39611);
				tv0->AddReply(537764, -1, 39612);
				return;
			}
			if (a0 == 39589) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537741);
				tv0->ClearReplies();
				tv0->AddReply(537742, 39591, 39590);
				tv0->AddReply(537747, 39596, 39595);
				tv0->AddReply(537754, -1, 39602);
				return;
			}
			if (a0 == 39596) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537748);
				tv0->ClearReplies();
				tv0->AddReply(537749, 39598, 39597);
				tv0->AddReply(537753, -1, 39601);
				return;
			}
			if (a0 == 39598) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537750);
				tv0->ClearReplies();
				tv0->AddReply(537751, -1, 39599);
				tv0->AddReply(537752, -1, 39600);
				return;
			}
			if (a0 == 39591) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537743);
				tv0->ClearReplies();
				tv0->AddReply(537744, -1, 39592);
				tv0->AddReply(537745, -1, 39593);
				tv0->AddReply(537746, -1, 39594);
				return;
			}
			if (a0 == 39578) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537730);
				tv0->ClearReplies();
				tv0->AddReply(537731, 39580, 39579);
				tv0->AddReply(537738, -1, 39586);
				tv0->AddReply(537739, -1, 39587);
				return;
			}
			if (a0 == 39580) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537732);
				tv0->ClearReplies();
				tv0->AddReply(537733, 39582, 39581);
				tv0->AddReply(537737, -1, 39585);
				return;
			}
			if (a0 == 39582) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537734);
				tv0->ClearReplies();
				tv0->AddReply(537735, -1, 39583);
				tv0->AddReply(537736, -1, 39584);
				return;
			}
			if (a0 == 39573) {
				f_7a7_a1_v("Neutral");
				tv0->SetMessage(537725);
				tv0->ClearReplies();
				tv0->AddReply(537726, -1, 39574);
				tv0->AddReply(537727, -1, 39575);
				return;
			}
			tv3 = true;
			if (f_dc3_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

Vector f_9ed_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_9f2_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_9f9_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_a01_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_a06_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_a12_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_a17_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_a12_a1_b(a0)) {
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

bool f_a3b_a1_b(object a0)
{
	int L0;
	if (!f_a17_a1_b(a0)) {
		return false;
	}
	if (!f_a06_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_a53_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_a5e_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_a63_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_b32_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_dc3_a0_b()) {
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

void f_aa7_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_dc3_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_ab8_a1_b(object a0)
{
	return f_ac0_a2_b(a0, 70);
}

bool f_ac0_a2_b(object a0, float a1)
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
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_aef_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_af3_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_afa_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_b00_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_b0b_a0_v(void)
{
	if (f_dc3_a0_b()) {
		@lshStopSpeech();
	}
}

void f_b12_a3_v(string a0, int a1, int a2)
{
	if (f_b3c_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_b1d_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_b3c_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

object f_b2c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_b32_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_b3c_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

float f_b41_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_b49_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_b52_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_b5c_a2_f(Vector a0, Vector a1)
{
	return f_b49_a2_f(a0, a1) / (f_b52_a1_f(a0) * f_b52_a1_f(a1));
}

int f_b6d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_b72_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_b7b_a0_i(void)
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

bool f_b8b_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_cae_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_cbb_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_cd2_a1_b(a0);
			}
		}
	}
	return false;
}

void f_bab_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_cb3_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_cca_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_cd9_a1_v(a0);
			}
		}
	}
}

bool f_bc4_a1_b(object a0)
{
	if (f_cae_a1_b(a0) && f_a01_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_bdb_a1_v(object a0)
{
	f_cb3_a1_v(a0);
}

void f_be1_a1_v(object a0)
{
	if (f_a01_a1_b(a0)) {
		@ReportReputationChange(a0, f_b2c_a0_o(), -0.029999999329447746);
	}
}

bool f_bee_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_cdf_a1_b(L0);
	}
	return false;
}

void f_bfe_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_ce2_a1_v(L0);
	}
}

string f_c0b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_c12_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_c0b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_c23_a1_i(object a0)
{
	return f_df5_a0_b() ? 2 : 0;
}

void f_c2c_a1_v(object a0)
{
	t3{a0};
}

int f_c34_a1_i(object a0)
{
	return f_a3b_a1_b(a0) ? 2 : 0;
}

void f_c3e_a1_v(object a0)
{
	t4{a0};
}

int f_c46_a2_i(object a0, bool a1)
{
	return f_a3b_a1_b(a0) ? 2 : 0;
}

void f_c50_a1_v(object a0)
{
	t5{a0};
}

bool f_c58_a3_b(object a0, object a1, float a2)
{
	string L0;
	bool L1;
	if (!f_a06_a2_b(a1, "class")) {
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
	if (L1 || f_9f9_a1_f(a0) <= a2 * a2) {
		return true;
	}
	@CanSee(L1, a1);
	if (L1 || f_9f9_a1_f(a1) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_c9a_a1_i(object a0)
{
	return 2;
}

void f_c9d_a1_v(object a0)
{
	f_dcd_a1_v(a0);
}

void f_ca3_a0_v(void)
{
}

int f_ca4_a1_i(object a0)
{
	return 0;
}

void f_ca7_a1_v(object a0)
{
}

int f_ca9_a2_i(string a0, object a1)
{
	return 0;
}

void f_cac_a2_v(string a0, object a1)
{
}

bool f_cae_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0;
}

void f_cb3_a1_v(object a0)
{
	t6{a0};
}

bool f_cbb_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_9f9_a1_f(a0) <= 4000000;
}

void f_cca_a1_v(object a0)
{
	t7{a0};
}

bool f_cd2_a1_b(object a0)
{
	return f_cbb_a1_b(a0);
}

void f_cd9_a1_v(object a0)
{
	f_cca_a1_v(a0);
}

bool f_cdf_a1_b(object a0)
{
	return false;
}

void f_ce2_a1_v(object a0)
{
}

void f_ce4_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_ce9_a1_b(object a0)
{
	if (f_b6d_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_cf5_a1_b(object a0)
{
	if (f_d1d_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_cff_a1_b(object a0)
{
	if (f_d24_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_d09_a1_b(object a0)
{
	if (f_d2b_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_d13_a1_b(object a0)
{
	if (f_d40_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_d1d_a1_b(object a0)
{
	return f_b72_a0_i() == 1;
}

bool f_d24_a1_b(object a0)
{
	return f_b72_a0_i() == 5;
}

bool f_d2b_a1_b(object a0)
{
	if (f_b7b_a0_i() >= 0 && f_b7b_a0_i() < 12) {
		return true;
	}
	return false;
}

bool f_d40_a1_b(object a0)
{
	if (f_b7b_a0_i() >= 12) {
		return true;
	}
	return false;
}

int f_d4b_a0_i(void)
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

int f_d5c_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_d62_a1_v(object a0)
{
	if (f_d5c_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_d6f_a1_v(bool a0)
{
	@ClearSubContainer(0);
	if (a0) {
		f_b1d_a4_v("rifle_ammo", 1, 2, 2);
		f_b1d_a4_v("revolver_ammo", 1, 2, 2);
		f_b1d_a4_v("samopal_ammo", 2, 2, 2);
	} else {
		int L0;
		f_b12_a3_v("lockpick", 1, 4);
		f_b1d_a4_v("alpha_pills", 1, 2, 3);
		f_b12_a3_v("meradorm", 1, 2);
		f_b12_a3_v("powder", 1, 15);
		L0 = f_b72_a0_i();
		if (L0 >= 4) {
			f_b12_a3_v("beta_pills", 1, 2);
		}
		if (L0 >= 6) {
			f_b12_a3_v("gamma_pills", 1, 7);
		}
	}
}

int f_dbb_a0_i(void)
{
	return 515561;
}

int f_dbd_a0_i(void)
{
	return 503346;
}

string f_dbf_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_dc1_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_dc3_a0_b(void)
{
	return false;
}

void f_dc5_a0_v(void)
{
	g0 = false;
	f_d6f_a1_v(false);
}

void f_dcd_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_d62_a1_v(a0);
		}
		return;
	} else {
		if (1000 == t8{a0}) {
			if (!f_ab8_a1_b(a0)) {
				return;
			}
			t0{a0};
			f_aef_a1_v(a0);
		}
	}
}

bool f_df5_a0_b(void)
{
	return true;
}

bool f_df7_a3_b(object a0, object a1, bool a2)
{
	if (f_c58_a3_b(a0, a1, 500.0)) {
		@SetProperty("ToDie", true);
		return true;
	}
	return false;
}

