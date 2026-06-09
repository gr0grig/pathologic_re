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
			if (f_19a6_a0_b()) {
				f_15d0_a1_v("Neutral");
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
		if (f_19a6_a0_b()) {
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
		f_19a8_a0_v();
		f_37_a0_v();
		for (; ; ) {
			tv2 = false;
			f_13c_a0_v();
		}
	}

	void f_37_a0_v(void)
	{
		if (!f_1537_a0_b()) {
			f_179d_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1794_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fb_a0_v();
			}
			f_1797_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_16db_a1_v(a0);
		L0 = f_172e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fb_a0_v();
			}
			f_1738_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_19da_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_1740_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_fb_a0_v();
				}
				f_174a_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_179e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_fb_a0_v();
			}
			f_17ae_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_1685_a2_b(a0, a1)) {
			f_fb_a0_v();
			f_16a5_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_17b4_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_fb_a0_v();
				}
				f_17b7_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_16e8_a1_b(a0)) {
			f_fb_a0_v();
			f_16f8_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_16be_a1_b(a0)) {
			f_fb_a0_v();
			f_16d5_a1_v(a0);
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
		f_179d_a0_v();
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
		if (!f_1514_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_171d_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_103_a0_v();
			}
			f_1726_a1_v(a0);
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
		L0 = f_1794_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_28e_a0_v();
			}
			f_1797_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_16db_a1_v(a0);
		L0 = f_172e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_28e_a0_v();
			}
			f_1738_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_19da_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_1740_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_28e_a0_v();
				}
				f_174a_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_179e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_28e_a0_v();
			}
			f_17ae_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_1685_a2_b(a0, a1)) {
			f_28e_a0_v();
			f_16a5_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_17b4_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_28e_a0_v();
				}
				f_17b7_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_16e8_a1_b(a0)) {
			f_28e_a0_v();
			f_16f8_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_28e_a0_v();
		f_179d_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_16be_a1_b(a0)) {
			f_28e_a0_v();
			f_16d5_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_1537_a0_b()) {
			return;
		}
		L0 = f_170c_a0_i();
		for (L1 = 0; L1 < 5 && f_1537_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_1705_a1_s(L3));
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
		L1 = f_14cb_a1_V(tv0);
		if (f_164b_a2_f(L0, L1) < 0) {
			f_152c_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_152c_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_2c6_a0_v(void)
	{
		f_15ef_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1794_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35a_a0_v();
			}
			f_1797_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_16db_a1_v(a0);
		L0 = f_172e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35a_a0_v();
			}
			f_1738_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_19da_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_1740_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_35a_a0_v();
				}
				f_174a_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_179e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35a_a0_v();
			}
			f_17ae_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_1685_a2_b(a0, a1)) {
			f_35a_a0_v();
			f_16a5_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_17b4_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_35a_a0_v();
				}
				f_17b7_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_16e8_a1_b(a0)) {
			f_35a_a0_v();
			f_16f8_a1_v(a0);
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
		if (!f_1514_a1_b(tv0)) {
			f_35a_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_14cb_a1_V(tv0);
		if (f_164b_a2_f(L0, L1) < 0.4999999701976776) {
			f_152c_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_35a_a0_v();
		f_179d_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_16be_a1_b(a0)) {
			f_35a_a0_v();
			f_16d5_a1_v(a0);
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
		f_179d_a0_v();
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
		L3 = f_1621_a1_V(f_1621_a1_V(L0 - L1) + L2 * 0.75);
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
		tv1 = f_14c6_a0_V() + L0;
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
					tv1 = f_14c6_a0_V() + L3;
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
				tv1 = f_14c6_a0_V() + L2;
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
		L1 = f_14cb_a1_V(tv0);
		return f_1630_a2_f(L0, L1) >= -0.3420201241970062;
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
		L3 = f_1621_a1_V(f_1621_a1_V(L0 - L1) + L2 * 0.75);
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
		tv1 = f_14c6_a0_V() + L0;
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
					tv1 = f_14c6_a0_V() + L3;
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
				tv1 = f_14c6_a0_V() + L2;
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
		L1 = f_14cb_a1_V(tv0);
		return f_1630_a2_f(L0, L1) >= -0.3420201241970062;
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
		f_179d_a0_v();
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
		L3 = f_1621_a1_V(f_1621_a1_V(L0 - L1) + L2 * 0.75);
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
		tv1 = f_14c6_a0_V() + L0;
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
					tv1 = f_14c6_a0_V() + L3;
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
				tv1 = f_14c6_a0_V() + L2;
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
		L1 = f_14cb_a1_V(tv0);
		return f_1630_a2_f(L0, L1) >= -0.3420201241970062;
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
		f_179d_a0_v();
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
		L3 = f_1621_a1_V(f_1621_a1_V(L0 - L1) + L2 * 0.75);
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
		tv1 = f_14c6_a0_V() + L0;
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
					tv1 = f_14c6_a0_V() + L3;
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
				tv1 = f_14c6_a0_V() + L2;
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
		L1 = f_14cb_a1_V(tv0);
		return f_1630_a2_f(L0, L1) >= -0.3420201241970062;
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
		if (!f_153c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_19a0_a0_i());
		L0->SetNPCDescription(f_199e_a0_i());
		L0->SetPhoto(f_19a2_a0_s());
		L0->SetPhoto2(f_19a4_a0_s());
		L0->SetPlayerName(f_1916_a0_i());
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
		f_1581_a1_v(a0);
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
			if (f_180a_a1_b(tv1)) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(543209);
				tv0->ClearReplies();
				if (f_185c_a1_b(tv1) || f_1870_a1_b(tv1)) {
					tv0->AddReply(543240, 45697, 45696);
				}
				if (f_1816_a1_b(tv1) || f_182a_a1_b(tv1) || f_183e_a1_b(tv1) || f_1834_a1_b(tv1)) {
					tv0->AddReply(543233, 45690, 45689);
				}
				if (f_1820_a1_b(tv1)) {
					tv0->AddReply(543214, 45672, 45670);
				}
				if (f_1816_a1_b(tv1) || f_1820_a1_b(tv1) || f_182a_a1_b(tv1) || f_1834_a1_b(tv1)) {
					tv0->AddReply(543210, -1, 45666);
				}
				if (f_183e_a1_b(tv1) || f_1848_a1_b(tv1) || f_1852_a1_b(tv1)) {
					tv0->AddReply(543211, -1, 45667);
				}
				if (f_185c_a1_b(tv1) || f_1866_a1_b(tv1) || f_1870_a1_b(tv1) || f_187a_a1_b(tv1) || f_1884_a1_b(tv1)) {
					tv0->AddReply(543212, -1, 45668);
				}
				if (f_1816_a1_b(tv1) || f_1820_a1_b(tv1) || f_1834_a1_b(tv1) || f_183e_a1_b(tv1) || f_1852_a1_b(tv1)) {
					tv0->AddReply(543213, -1, 45669);
				}
				if (f_182a_a1_b(tv1) || f_1848_a1_b(tv1) || f_1866_a1_b(tv1) || f_1884_a1_b(tv1) || f_1820_a1_b(tv1) || f_185c_a1_b(tv1) || f_1870_a1_b(tv1)) {
					tv0->AddReply(543215, -1, 45671);
				}
				if (f_187a_a1_b(tv1) || f_1866_a1_b(tv1) || f_185c_a1_b(tv1) || f_1852_a1_b(tv1)) {
					tv0->AddReply(543219, -1, 45675);
				}
				break;
			}
			f_98f_a1_v("Neutral");
			tv0->SetMessage(537240);
			tv0->ClearReplies();
			tv0->AddReply(537241, -1, 39084);
			if (f_17fe_a1_b(tv1) && f_1816_a1_b(tv1)) {
				tv0->AddReply(537242, 39086, 39085);
			}
			if (f_1816_a1_b(tv1)) {
				tv0->AddReply(537277, 39122, 39121);
			}
			if (f_1820_a1_b(tv1)) {
				tv0->AddReply(537329, 39176, 39175);
			}
			if (f_182a_a1_b(tv1) && f_188e_a1_b(tv1)) {
				tv0->AddReply(537352, 39199, 39198);
			}
			if (f_17fe_a1_b(tv1) && f_182a_a1_b(tv1) && f_1898_a1_b(tv1)) {
				tv0->AddReply(537359, 39206, 39205);
			}
			if (f_1834_a1_b(tv1) && f_188e_a1_b(tv1)) {
				tv0->AddReply(537380, 39227, 39226);
			}
			if (f_1834_a1_b(tv1) && f_1898_a1_b(tv1)) {
				tv0->AddReply(537390, 39237, 39236);
			}
			if (f_183e_a1_b(tv1)) {
				tv0->AddReply(537400, 39247, 39246);
			}
			if (f_17fe_a1_b(tv1) && f_1848_a1_b(tv1)) {
				tv0->AddReply(537423, 39270, 39269);
			}
			if (f_1852_a1_b(tv1)) {
				tv0->AddReply(537433, 39280, 39279);
			}
			if (f_17fe_a1_b(tv1) && f_185c_a1_b(tv1)) {
				tv0->AddReply(537451, 39299, 39298);
			}
			if (f_17fe_a1_b(tv1) && f_1866_a1_b(tv1)) {
				tv0->AddReply(537460, 39308, 39307);
			}
			if (f_17fe_a1_b(tv1) && f_187a_a1_b(tv1)) {
				tv0->AddReply(537473, 39321, 39320);
			}
			if (f_187a_a1_b(tv1)) {
				tv0->AddReply(537483, 39331, 39330);
			}
			if (f_1884_a1_b(tv1)) {
				tv0->AddReply(537493, 39341, 39340);
			}
			tv0->AddReply(537503, -1, 39350);
			tv0->AddReply(537504, -1, 39351);
			break;
			return;
		}
		if (f_19a6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15d0_a1_v(tv2);
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

	void f_98f_a1_v(string a0)
	{
		if (!f_19a6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15e0_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15fa_a0_v();
			if (a1 == 45666) {
				f_17f9_a2_v(tv1, tv0);
			}
			if (a1 == 45667) {
				f_17f9_a2_v(tv1, tv0);
			}
			if (a1 == 45668) {
				f_17f9_a2_v(tv1, tv0);
			}
			if (a1 == 39084) {
				f_17f9_a2_v(tv1, tv0);
			}
			if (a1 == 39093) {
				f_17ef_a2_v(tv1, tv0);
			}
			if (a1 == 39094) {
				f_17ef_a2_v(tv1, tv0);
			}
			if (a1 == 39095) {
				f_17ef_a2_v(tv1, tv0);
			}
			if (a0 == 45665) {
				if (f_180a_a1_b(tv1)) {
					f_98f_a1_v("Neutral");
					tv0->SetMessage(543209);
					tv0->ClearReplies();
					if (f_185c_a1_b(tv1) || f_1870_a1_b(tv1)) {
						tv0->AddReply(543240, 45697, 45696);
					}
					if (f_1816_a1_b(tv1) || f_182a_a1_b(tv1) || f_183e_a1_b(tv1) || f_1834_a1_b(tv1)) {
						tv0->AddReply(543233, 45690, 45689);
					}
					if (f_1820_a1_b(tv1)) {
						tv0->AddReply(543214, 45672, 45670);
					}
					if (f_1816_a1_b(tv1) || f_1820_a1_b(tv1) || f_182a_a1_b(tv1) || f_1834_a1_b(tv1)) {
						tv0->AddReply(543210, -1, 45666);
					}
					if (f_183e_a1_b(tv1) || f_1848_a1_b(tv1) || f_1852_a1_b(tv1)) {
						tv0->AddReply(543211, -1, 45667);
					}
					if (f_185c_a1_b(tv1) || f_1866_a1_b(tv1) || f_1870_a1_b(tv1) || f_187a_a1_b(tv1) || f_1884_a1_b(tv1)) {
						tv0->AddReply(543212, -1, 45668);
					}
					if (f_1816_a1_b(tv1) || f_1820_a1_b(tv1) || f_1834_a1_b(tv1) || f_183e_a1_b(tv1) || f_1852_a1_b(tv1)) {
						tv0->AddReply(543213, -1, 45669);
					}
					if (f_182a_a1_b(tv1) || f_1848_a1_b(tv1) || f_1866_a1_b(tv1) || f_1884_a1_b(tv1) || f_1820_a1_b(tv1) || f_185c_a1_b(tv1) || f_1870_a1_b(tv1)) {
						tv0->AddReply(543215, -1, 45671);
					}
					if (f_187a_a1_b(tv1) || f_1866_a1_b(tv1) || f_185c_a1_b(tv1) || f_1852_a1_b(tv1)) {
						tv0->AddReply(543219, -1, 45675);
					}
					return;
				}
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537240);
				tv0->ClearReplies();
				tv0->AddReply(537241, -1, 39084);
				if (f_17fe_a1_b(tv1) && f_1816_a1_b(tv1)) {
					tv0->AddReply(537242, 39086, 39085);
				}
				if (f_1816_a1_b(tv1)) {
					tv0->AddReply(537277, 39122, 39121);
				}
				if (f_1820_a1_b(tv1)) {
					tv0->AddReply(537329, 39176, 39175);
				}
				if (f_182a_a1_b(tv1) && f_188e_a1_b(tv1)) {
					tv0->AddReply(537352, 39199, 39198);
				}
				if (f_17fe_a1_b(tv1) && f_182a_a1_b(tv1) && f_1898_a1_b(tv1)) {
					tv0->AddReply(537359, 39206, 39205);
				}
				if (f_1834_a1_b(tv1) && f_188e_a1_b(tv1)) {
					tv0->AddReply(537380, 39227, 39226);
				}
				if (f_1834_a1_b(tv1) && f_1898_a1_b(tv1)) {
					tv0->AddReply(537390, 39237, 39236);
				}
				if (f_183e_a1_b(tv1)) {
					tv0->AddReply(537400, 39247, 39246);
				}
				if (f_17fe_a1_b(tv1) && f_1848_a1_b(tv1)) {
					tv0->AddReply(537423, 39270, 39269);
				}
				if (f_1852_a1_b(tv1)) {
					tv0->AddReply(537433, 39280, 39279);
				}
				if (f_17fe_a1_b(tv1) && f_185c_a1_b(tv1)) {
					tv0->AddReply(537451, 39299, 39298);
				}
				if (f_17fe_a1_b(tv1) && f_1866_a1_b(tv1)) {
					tv0->AddReply(537460, 39308, 39307);
				}
				if (f_17fe_a1_b(tv1) && f_187a_a1_b(tv1)) {
					tv0->AddReply(537473, 39321, 39320);
				}
				if (f_187a_a1_b(tv1)) {
					tv0->AddReply(537483, 39331, 39330);
				}
				if (f_1884_a1_b(tv1)) {
					tv0->AddReply(537493, 39341, 39340);
				}
				tv0->AddReply(537503, -1, 39350);
				tv0->AddReply(537504, -1, 39351);
				return;
			}
			if (a0 == 39341) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537494);
				tv0->ClearReplies();
				tv0->AddReply(537495, 39343, 39342);
				tv0->AddReply(537499, 39347, 39346);
				return;
			}
			if (a0 == 39347) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537500);
				tv0->ClearReplies();
				tv0->AddReply(537501, -1, 39348);
				if (f_17fe_a1_b(tv1)) {
					tv0->AddReply(537502, -1, 39349);
				}
				return;
			}
			if (a0 == 39343) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537496);
				tv0->ClearReplies();
				tv0->AddReply(537497, -1, 39344);
				tv0->AddReply(537498, -1, 39345);
				return;
			}
			if (a0 == 39331) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537484);
				tv0->ClearReplies();
				tv0->AddReply(537485, 39333, 39332);
				tv0->AddReply(537492, -1, 39339);
				return;
			}
			if (a0 == 39333) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537486);
				tv0->ClearReplies();
				tv0->AddReply(537487, 39335, 39334);
				if (f_17fe_a1_b(tv1)) {
					tv0->AddReply(537491, -1, 39338);
				}
				return;
			}
			if (a0 == 39335) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537488);
				tv0->ClearReplies();
				tv0->AddReply(537489, -1, 39336);
				tv0->AddReply(537490, -1, 39337);
				return;
			}
			if (a0 == 39321) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537474);
				tv0->ClearReplies();
				tv0->AddReply(537475, 39323, 39322);
				tv0->AddReply(537482, -1, 39329);
				return;
			}
			if (a0 == 39323) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537476);
				tv0->ClearReplies();
				tv0->AddReply(537477, 39325, 39324);
				tv0->AddReply(537481, -1, 39328);
				return;
			}
			if (a0 == 39325) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537478);
				tv0->ClearReplies();
				tv0->AddReply(537479, -1, 39326);
				tv0->AddReply(537480, -1, 39327);
				return;
			}
			if (a0 == 39308) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537461);
				tv0->ClearReplies();
				tv0->AddReply(537462, 39310, 39309);
				tv0->AddReply(537472, -1, 39319);
				return;
			}
			if (a0 == 39310) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537463);
				tv0->ClearReplies();
				tv0->AddReply(537464, 39312, 39311);
				tv0->AddReply(537471, -1, 39318);
				return;
			}
			if (a0 == 39312) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537465);
				tv0->ClearReplies();
				tv0->AddReply(537466, 39314, 39313);
				tv0->AddReply(537470, -1, 39317);
				return;
			}
			if (a0 == 39314) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537467);
				tv0->ClearReplies();
				tv0->AddReply(537468, -1, 39315);
				tv0->AddReply(537469, -1, 39316);
				return;
			}
			if (a0 == 39299) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537452);
				tv0->ClearReplies();
				tv0->AddReply(537453, 39301, 39300);
				tv0->AddReply(537459, -1, 39306);
				return;
			}
			if (a0 == 39301) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537454);
				tv0->ClearReplies();
				tv0->AddReply(537455, 39303, 39302);
				return;
			}
			if (a0 == 39303) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537456);
				tv0->ClearReplies();
				tv0->AddReply(537457, -1, 39304);
				tv0->AddReply(537458, -1, 39305);
				return;
			}
			if (a0 == 39280) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537434);
				tv0->ClearReplies();
				tv0->AddReply(537435, 39282, 39281);
				tv0->AddReply(537447, 39294, 39293);
				return;
			}
			if (a0 == 39294) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537448);
				tv0->ClearReplies();
				tv0->AddReply(537449, 39284, 39295);
				tv0->AddReply(537450, -1, 39297);
				return;
			}
			if (a0 == 39282) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537436);
				tv0->ClearReplies();
				tv0->AddReply(537437, 39284, 39283);
				return;
			}
			if (a0 == 39284) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537438);
				tv0->ClearReplies();
				tv0->AddReply(537439, 39286, 39285);
				tv0->AddReply(537442, 39289, 39288);
				return;
			}
			if (a0 == 39289) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537443);
				tv0->ClearReplies();
				tv0->AddReply(537444, 39291, 39290);
				return;
			}
			if (a0 == 39291) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537445);
				tv0->ClearReplies();
				tv0->AddReply(537446, -1, 39292);
				return;
			}
			if (a0 == 39286) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537440);
				tv0->ClearReplies();
				tv0->AddReply(537441, -1, 39287);
				return;
			}
			if (a0 == 39270) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537424);
				tv0->ClearReplies();
				tv0->AddReply(537425, 39272, 39271);
				tv0->AddReply(537432, -1, 39278);
				return;
			}
			if (a0 == 39272) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537426);
				tv0->ClearReplies();
				tv0->AddReply(537427, 39274, 39273);
				tv0->AddReply(537431, -1, 39277);
				return;
			}
			if (a0 == 39274) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537428);
				tv0->ClearReplies();
				tv0->AddReply(537429, -1, 39275);
				tv0->AddReply(537430, -1, 39276);
				return;
			}
			if (a0 == 39247) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537401);
				tv0->ClearReplies();
				tv0->AddReply(537402, 39249, 39248);
				if (f_17fe_a1_b(tv1)) {
					tv0->AddReply(537418, 39265, 39264);
				}
				tv0->AddReply(537422, -1, 39268);
				return;
			}
			if (a0 == 39265) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537419);
				tv0->ClearReplies();
				tv0->AddReply(537420, -1, 39266);
				tv0->AddReply(537421, -1, 39267);
				return;
			}
			if (a0 == 39249) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537403);
				tv0->ClearReplies();
				tv0->AddReply(537404, 39251, 39250);
				tv0->AddReply(537417, -1, 39263);
				return;
			}
			if (a0 == 39251) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537405);
				tv0->ClearReplies();
				tv0->AddReply(537406, 39253, 39252);
				if (f_17fe_a1_b(tv1)) {
					tv0->AddReply(537416, -1, 39262);
				}
				return;
			}
			if (a0 == 39253) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537407);
				tv0->ClearReplies();
				tv0->AddReply(537408, 39255, 39254);
				tv0->AddReply(537415, -1, 39261);
				return;
			}
			if (a0 == 39255) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537409);
				tv0->ClearReplies();
				tv0->AddReply(537410, 39257, 39256);
				tv0->AddReply(537414, -1, 39260);
				return;
			}
			if (a0 == 39257) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537411);
				tv0->ClearReplies();
				tv0->AddReply(537412, -1, 39258);
				tv0->AddReply(537413, -1, 39259);
				return;
			}
			if (a0 == 39237) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537391);
				tv0->ClearReplies();
				tv0->AddReply(537392, 39239, 39238);
				tv0->AddReply(537397, 39244, 39243);
				return;
			}
			if (a0 == 39244) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537398);
				tv0->ClearReplies();
				tv0->AddReply(537399, -1, 39245);
				return;
			}
			if (a0 == 39239) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537393);
				tv0->ClearReplies();
				tv0->AddReply(537394, 39241, 39240);
				return;
			}
			if (a0 == 39241) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537395);
				tv0->ClearReplies();
				tv0->AddReply(537396, -1, 39242);
				return;
			}
			if (a0 == 39227) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537381);
				tv0->ClearReplies();
				tv0->AddReply(537382, 39229, 39228);
				tv0->AddReply(537386, 39233, 39232);
				tv0->AddReply(537389, -1, 39235);
				return;
			}
			if (a0 == 39233) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537387);
				tv0->ClearReplies();
				tv0->AddReply(537388, -1, 39234);
				return;
			}
			if (a0 == 39229) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537383);
				tv0->ClearReplies();
				tv0->AddReply(537384, -1, 39230);
				tv0->AddReply(537385, -1, 39231);
				return;
			}
			if (a0 == 39206) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537360);
				tv0->ClearReplies();
				tv0->AddReply(537361, 39208, 39207);
				tv0->AddReply(537376, 39223, 39222);
				tv0->AddReply(537379, -1, 39225);
				return;
			}
			if (a0 == 39223) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537377);
				tv0->ClearReplies();
				tv0->AddReply(537378, -1, 39224);
				return;
			}
			if (a0 == 39208) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537362);
				tv0->ClearReplies();
				tv0->AddReply(537363, 39210, 39209);
				tv0->AddReply(537369, 39216, 39215);
				return;
			}
			if (a0 == 39216) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537370);
				tv0->ClearReplies();
				tv0->AddReply(537371, 39218, 39217);
				tv0->AddReply(537375, -1, 39221);
				return;
			}
			if (a0 == 39218) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537372);
				tv0->ClearReplies();
				tv0->AddReply(537373, -1, 39219);
				tv0->AddReply(537374, -1, 39220);
				return;
			}
			if (a0 == 39210) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537364);
				tv0->ClearReplies();
				tv0->AddReply(537365, 39212, 39211);
				return;
			}
			if (a0 == 39212) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537366);
				tv0->ClearReplies();
				tv0->AddReply(537367, -1, 39213);
				tv0->AddReply(537368, -1, 39214);
				return;
			}
			if (a0 == 39199) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537353);
				tv0->ClearReplies();
				tv0->AddReply(537354, 39201, 39200);
				tv0->AddReply(537358, -1, 39204);
				return;
			}
			if (a0 == 39201) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537355);
				tv0->ClearReplies();
				tv0->AddReply(537356, -1, 39202);
				tv0->AddReply(537357, -1, 39203);
				return;
			}
			if (a0 == 39176) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537330);
				tv0->ClearReplies();
				tv0->AddReply(537331, 39178, 39177);
				tv0->AddReply(537341, 39188, 39187);
				tv0->AddReply(537351, -1, 39197);
				return;
			}
			if (a0 == 39188) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537342);
				tv0->ClearReplies();
				tv0->AddReply(537343, 39190, 39189);
				tv0->AddReply(537349, -1, 39195);
				return;
			}
			if (a0 == 39190) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537344);
				tv0->ClearReplies();
				tv0->AddReply(537345, 39192, 39191);
				tv0->AddReply(537348, -1, 39194);
				return;
			}
			if (a0 == 39192) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537346);
				tv0->ClearReplies();
				tv0->AddReply(537347, -1, 39193);
				return;
			}
			if (a0 == 39178) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537332);
				tv0->ClearReplies();
				tv0->AddReply(537333, 39180, 39179);
				tv0->AddReply(537336, 39183, 39182);
				return;
			}
			if (a0 == 39183) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537337);
				tv0->ClearReplies();
				tv0->AddReply(537338, 39185, 39184);
				return;
			}
			if (a0 == 39185) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537339);
				tv0->ClearReplies();
				tv0->AddReply(537340, 43752, 39186);
				return;
			}
			if (a0 == 43752) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(541583);
				tv0->ClearReplies();
				tv0->AddReply(541584, -1, 43753);
				return;
			}
			if (a0 == 39180) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537334);
				tv0->ClearReplies();
				tv0->AddReply(537335, -1, 39181);
				return;
			}
			if (a0 == 39122) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537278);
				tv0->ClearReplies();
				tv0->AddReply(537279, 39124, 39123);
				tv0->AddReply(537292, 39124, 39137);
				if (f_17fe_a1_b(tv1)) {
					tv0->AddReply(537293, 39140, 39139);
				}
				if (f_17fe_a1_b(tv1)) {
					tv0->AddReply(537304, 39151, 39150);
				}
				tv0->AddReply(537328, -1, 39174);
				return;
			}
			if (a0 == 39151) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537305);
				tv0->ClearReplies();
				tv0->AddReply(537306, 39153, 39152);
				tv0->AddReply(537318, 39165, 39164);
				return;
			}
			if (a0 == 39165) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537319);
				tv0->ClearReplies();
				tv0->AddReply(537320, -1, 39166);
				tv0->AddReply(537321, 39168, 39167);
				return;
			}
			if (a0 == 39168) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537322);
				tv0->ClearReplies();
				tv0->AddReply(537323, -1, 39169);
				tv0->AddReply(537324, 39171, 39170);
				return;
			}
			if (a0 == 39171) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537325);
				tv0->ClearReplies();
				tv0->AddReply(537326, -1, 39172);
				return;
			}
			if (a0 == 39153) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537307);
				tv0->ClearReplies();
				tv0->AddReply(537308, 39155, 39154);
				tv0->AddReply(537317, -1, 39163);
				return;
			}
			if (a0 == 39155) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537309);
				tv0->ClearReplies();
				tv0->AddReply(537310, 39157, 39156);
				tv0->AddReply(537313, 39160, 39159);
				return;
			}
			if (a0 == 39160) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537314);
				tv0->ClearReplies();
				tv0->AddReply(537315, -1, 39161);
				tv0->AddReply(537316, -1, 39162);
				return;
			}
			if (a0 == 39157) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537311);
				tv0->ClearReplies();
				tv0->AddReply(537312, -1, 39158);
				return;
			}
			if (a0 == 39140) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537294);
				tv0->ClearReplies();
				tv0->AddReply(537295, 39142, 39141);
				tv0->AddReply(537301, 39148, 39147);
				return;
			}
			if (a0 == 39148) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537302);
				tv0->ClearReplies();
				tv0->AddReply(537303, -1, 39149);
				return;
			}
			if (a0 == 39142) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537296);
				tv0->ClearReplies();
				tv0->AddReply(537297, 39144, 39143);
				return;
			}
			if (a0 == 39144) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537298);
				tv0->ClearReplies();
				tv0->AddReply(537299, -1, 39145);
				tv0->AddReply(537300, -1, 39146);
				return;
			}
			if (a0 == 39124) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537280);
				tv0->ClearReplies();
				tv0->AddReply(537281, 39126, 39125);
				tv0->AddReply(537288, 39133, 39132);
				return;
			}
			if (a0 == 39133) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537289);
				tv0->ClearReplies();
				tv0->AddReply(537290, 39126, 39134);
				tv0->AddReply(537291, -1, 39136);
				return;
			}
			if (a0 == 39126) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537282);
				tv0->ClearReplies();
				tv0->AddReply(537283, 39128, 39127);
				tv0->AddReply(537287, -1, 39131);
				return;
			}
			if (a0 == 39128) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537284);
				tv0->ClearReplies();
				tv0->AddReply(537285, -1, 39129);
				tv0->AddReply(537286, -1, 39130);
				return;
			}
			if (a0 == 39086) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537243);
				tv0->ClearReplies();
				tv0->AddReply(537244, 39088, 39087);
				tv0->AddReply(537254, 39099, 39098);
				tv0->AddReply(537264, 39109, 39108);
				tv0->AddReply(537275, -1, 39119);
				tv0->AddReply(537276, -1, 39120);
				return;
			}
			if (a0 == 39109) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537265);
				tv0->ClearReplies();
				tv0->AddReply(537266, 44319, 39110);
				tv0->AddReply(537267, 39112, 39111);
				return;
			}
			if (a0 == 39112) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537268);
				tv0->ClearReplies();
				tv0->AddReply(537269, 39114, 39113);
				tv0->AddReply(537273, -1, 39117);
				return;
			}
			if (a0 == 39114) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537270);
				tv0->ClearReplies();
				tv0->AddReply(537271, -1, 39115);
				tv0->AddReply(537272, -1, 39116);
				return;
			}
			if (a0 == 44319) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(542040);
				tv0->ClearReplies();
				tv0->AddReply(542041, -1, 44320);
				tv0->AddReply(542042, -1, 44321);
				return;
			}
			if (a0 == 39099) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537255);
				tv0->ClearReplies();
				tv0->AddReply(537256, 39101, 39100);
				tv0->AddReply(537260, 39105, 39104);
				return;
			}
			if (a0 == 39105) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537261);
				tv0->ClearReplies();
				tv0->AddReply(537262, -1, 39106);
				tv0->AddReply(537263, -1, 39107);
				return;
			}
			if (a0 == 39101) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537257);
				tv0->ClearReplies();
				tv0->AddReply(537258, -1, 39102);
				tv0->AddReply(537259, -1, 39103);
				return;
			}
			if (a0 == 39088) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537245);
				tv0->ClearReplies();
				tv0->AddReply(537246, 39090, 39089);
				tv0->AddReply(537253, 39090, 39096);
				return;
			}
			if (a0 == 39090) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537247);
				tv0->ClearReplies();
				tv0->AddReply(537248, 39092, 39091);
				tv0->AddReply(537252, -1, 39095);
				return;
			}
			if (a0 == 39092) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(537249);
				tv0->ClearReplies();
				tv0->AddReply(537250, -1, 39093);
				tv0->AddReply(537251, -1, 39094);
				return;
			}
			if (a0 == 45672) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(543216);
				tv0->ClearReplies();
				tv0->AddReply(543220, -1, 45676);
				tv0->AddReply(543221, 45678, 45677);
				return;
			}
			if (a0 == 45678) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(543222);
				tv0->ClearReplies();
				tv0->AddReply(543223, -1, 45679);
				tv0->AddReply(543225, 45682, 45681);
				return;
			}
			if (a0 == 45682) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(543226);
				tv0->ClearReplies();
				tv0->AddReply(543227, -1, 45683);
				tv0->AddReply(543228, 45686, 45684);
				return;
			}
			if (a0 == 45686) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(543230);
				tv0->ClearReplies();
				tv0->AddReply(543231, -1, 45687);
				tv0->AddReply(543232, -1, 45688);
				return;
			}
			if (a0 == 45690) {
				if (f_182a_a1_b(tv1) || f_183e_a1_b(tv1) || f_1834_a1_b(tv1)) {
					f_98f_a1_v("Neutral");
					tv0->SetMessage(543234);
					tv0->ClearReplies();
					tv0->AddReply(543235, -1, 45691);
					tv0->AddReply(543236, -1, 45692);
					return;
				}
				if (f_1816_a1_b(tv1)) {
					f_98f_a1_v("Neutral");
					tv0->SetMessage(543237);
					tv0->ClearReplies();
					tv0->AddReply(543238, -1, 45694);
					tv0->AddReply(543239, -1, 45695);
					return;
				}
			}
			if (a0 == 45697) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(543241);
				tv0->ClearReplies();
				tv0->AddReply(543242, -1, 45698);
				tv0->AddReply(543243, 45700, 45699);
				return;
			}
			if (a0 == 45700) {
				f_98f_a1_v("Neutral");
				tv0->SetMessage(543244);
				tv0->ClearReplies();
				tv0->AddReply(543245, -1, 45701);
				tv0->AddReply(543246, -1, 45702);
				return;
			}
			tv3 = true;
			if (f_19a6_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

Vector f_14c6_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_14cb_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_14d2_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_14da_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_14df_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_14eb_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_14f0_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_14eb_a1_b(a0)) {
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

bool f_1514_a1_b(object a0)
{
	int L0;
	if (!f_14f0_a1_b(a0)) {
		return false;
	}
	if (!f_14df_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_152c_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_1537_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_153c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1621_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_19a6_a0_b()) {
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

void f_1581_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_19a6_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1593_a1_b(object a0)
{
	return f_159b_a2_b(a0, 70);
}

bool f_159b_a2_b(object a0, float a1)
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

void f_15cb_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
}

void f_15d0_a1_v(string a0)
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

void f_15e0_a2_v(string a0, bool a1)
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

void f_15ef_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_15fa_a0_v(void)
{
	if (f_19a6_a0_b()) {
		@lshStopSpeech();
	}
}

void f_1601_a3_v(string a0, int a1, int a2)
{
	if (f_162b_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_160c_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_162b_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

object f_161b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1621_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_162b_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

float f_1630_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_1638_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_1641_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_164b_a2_f(Vector a0, Vector a1)
{
	return f_1638_a2_f(a0, a1) / (f_1641_a1_f(a0) * f_1641_a1_f(a1));
}

int f_165c_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1661_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

int f_166c_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_1675_a0_i(void)
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

bool f_1685_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_17b9_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_17c6_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_17dd_a1_b(a0);
			}
		}
	}
	return false;
}

void f_16a5_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_17be_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_17d5_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_17e4_a1_v(a0);
			}
		}
	}
}

bool f_16be_a1_b(object a0)
{
	if (f_17b9_a1_b(a0) && f_14da_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_16d5_a1_v(object a0)
{
	f_17be_a1_v(a0);
}

void f_16db_a1_v(object a0)
{
	if (f_14da_a1_b(a0)) {
		@ReportReputationChange(a0, f_161b_a0_o(), -0.05000000074505806);
	}
}

bool f_16e8_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_17ea_a1_b(L0);
	}
	return false;
}

void f_16f8_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_17ed_a1_v(L0);
	}
}

string f_1705_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_170c_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1705_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_171d_a1_i(object a0)
{
	return f_19d8_a0_b() ? 2 : 0;
}

void f_1726_a1_v(object a0)
{
	t3{a0};
}

int f_172e_a1_i(object a0)
{
	return f_1514_a1_b(a0) ? 2 : 0;
}

void f_1738_a1_v(object a0)
{
	t4{a0};
}

int f_1740_a2_i(object a0, bool a1)
{
	return f_1514_a1_b(a0) ? 2 : 0;
}

void f_174a_a1_v(object a0)
{
	t5{a0};
}

bool f_1752_a3_b(object a0, object a1, float a2)
{
	string L0;
	bool L1;
	if (!f_14df_a2_b(a1, "class")) {
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
	if (L1 || f_14d2_a1_f(a0) <= a2 * a2) {
		return true;
	}
	@CanSee(L1, a1);
	if (L1 || f_14d2_a1_f(a1) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_1794_a1_i(object a0)
{
	return 2;
}

void f_1797_a1_v(object a0)
{
	f_19b0_a1_v(a0);
}

void f_179d_a0_v(void)
{
}

int f_179e_a1_i(object a0)
{
	bool L0;
	@Trace("Received steal");
	@CanSee(L0, a0);
	if (L0) {
		return f_172e_a1_i(a0);
	}
	return 0;
}

void f_17ae_a1_v(object a0)
{
	f_1738_a1_v(a0);
}

int f_17b4_a2_i(string a0, object a1)
{
	return 0;
}

void f_17b7_a2_v(string a0, object a1)
{
}

bool f_17b9_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0;
}

void f_17be_a1_v(object a0)
{
	t6{a0};
}

bool f_17c6_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_14d2_a1_f(a0) <= 4000000;
}

void f_17d5_a1_v(object a0)
{
	t7{a0};
}

bool f_17dd_a1_b(object a0)
{
	return f_17c6_a1_b(a0);
}

void f_17e4_a1_v(object a0)
{
	f_17d5_a1_v(a0);
}

bool f_17ea_a1_b(object a0)
{
	return false;
}

void f_17ed_a1_v(object a0)
{
}

void f_17ef_a2_v(object a0, object a1)
{
	@SetVariable("d1GhostCatHDPathologic", 1);
	f_1661_a1_o("quest_ghost_cat");
}

void f_17f9_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_17fe_a1_b(object a0)
{
	if (f_165c_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_180a_a1_b(object a0)
{
	if (f_165c_a1_i("branch") == 2) {
		return true;
	}
	return false;
}

bool f_1816_a1_b(object a0)
{
	if (f_18a2_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1820_a1_b(object a0)
{
	if (f_18a9_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_182a_a1_b(object a0)
{
	if (f_18b0_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1834_a1_b(object a0)
{
	if (f_18b7_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_183e_a1_b(object a0)
{
	if (f_18be_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1848_a1_b(object a0)
{
	if (f_18c5_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1852_a1_b(object a0)
{
	if (f_18cc_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_185c_a1_b(object a0)
{
	if (f_18d3_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1866_a1_b(object a0)
{
	if (f_18da_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1870_a1_b(object a0)
{
	if (f_18e1_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_187a_a1_b(object a0)
{
	if (f_18e8_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1884_a1_b(object a0)
{
	if (f_18ef_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_188e_a1_b(object a0)
{
	if (f_18f6_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1898_a1_b(object a0)
{
	if (f_190b_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_18a2_a1_b(object a0)
{
	return f_166c_a0_i() == 1;
}

bool f_18a9_a1_b(object a0)
{
	return f_166c_a0_i() == 2;
}

bool f_18b0_a1_b(object a0)
{
	return f_166c_a0_i() == 3;
}

bool f_18b7_a1_b(object a0)
{
	return f_166c_a0_i() == 4;
}

bool f_18be_a1_b(object a0)
{
	return f_166c_a0_i() == 5;
}

bool f_18c5_a1_b(object a0)
{
	return f_166c_a0_i() == 6;
}

bool f_18cc_a1_b(object a0)
{
	return f_166c_a0_i() == 7;
}

bool f_18d3_a1_b(object a0)
{
	return f_166c_a0_i() == 8;
}

bool f_18da_a1_b(object a0)
{
	return f_166c_a0_i() == 9;
}

bool f_18e1_a1_b(object a0)
{
	return f_166c_a0_i() == 10;
}

bool f_18e8_a1_b(object a0)
{
	return f_166c_a0_i() == 11;
}

bool f_18ef_a1_b(object a0)
{
	return f_166c_a0_i() == 12;
}

bool f_18f6_a1_b(object a0)
{
	if (f_1675_a0_i() >= 0 && f_1675_a0_i() < 12) {
		return true;
	}
	return false;
}

bool f_190b_a1_b(object a0)
{
	if (f_1675_a0_i() >= 12) {
		return true;
	}
	return false;
}

int f_1916_a0_i(void)
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

int f_1927_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_192d_a1_v(object a0)
{
	if (f_1927_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_193a_a1_v(bool a0)
{
	int L0;
	bool L1;
	int L2;
	@ClearSubContainer(0);
	L2 = f_166c_a0_i();
	if (a0) {
		f_160c_a4_v("alpha_pills", 1, 2, 4);
		f_160c_a4_v("meradorm", 2, 3, 3);
		if (L2 >= 3) {
			f_1601_a3_v("beta_pills", 1, 4);
		}
		if (L2 >= 8) {
			f_160c_a4_v("monomicin", 1, 2, 2);
		} else {
			if (L2 >= 4) {
				f_1601_a3_v("monomicin", 1, 2);
			}
		}
	} else {
		f_1601_a3_v("lockpick", 1, 4);
		f_1601_a3_v("rifle_ammo", 1, 2);
		f_1601_a3_v("revolver_ammo", 1, 2);
		f_160c_a4_v("samopal_ammo", 1, 2, 2);
		if (L2 >= 8) {
			f_160c_a4_v("monomicin", 1, 2, 2);
		} else {
			if (L2 >= 4) {
				f_1601_a3_v("monomicin", 1, 2);
			}
		}
	}
}

int f_199e_a0_i(void)
{
	return 515559;
}

int f_19a0_a0_i(void)
{
	return 503344;
}

string f_19a2_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_19a4_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_19a6_a0_b(void)
{
	return false;
}

void f_19a8_a0_v(void)
{
	g0 = false;
	f_193a_a1_v(false);
}

void f_19b0_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_192d_a1_v(a0);
		}
		return;
	} else {
		if (1000 == t8{a0}) {
			if (!f_1593_a1_b(a0)) {
				return;
			}
			t0{a0};
			f_15cb_a1_v(a0);
		}
	}
}

bool f_19d8_a0_b(void)
{
	return true;
}

bool f_19da_a3_b(object a0, object a1, bool a2)
{
	if (f_1752_a3_b(a0, a1, 500.0)) {
		@SetProperty("ToDie", true);
		return true;
	}
	return false;
}

