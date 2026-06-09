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

maintask t0
{
	var bool tv0;
	var bool tv1;
	var bool tv2;

	void init(void)
	{
		@SensePlayerOnly(true);
		f_94e_a0_v();
		f_f_a0_v();
		for (; ; ) {
			tv2 = false;
			f_114_a0_v();
		}
	}

	void f_f_a0_v(void)
	{
		if (!f_70c_a0_b()) {
			f_8aa_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_8a1_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_d3_a0_v();
			}
			f_8a4_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_7de_a1_v(a0);
		L0 = f_831_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_d3_a0_v();
			}
			f_83b_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_96a_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_843_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_d3_a0_v();
				}
				f_84d_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_897_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_d3_a0_v();
			}
			f_89a_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_788_a2_b(a0, a1)) {
			f_d3_a0_v();
			f_7a8_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_89c_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_d3_a0_v();
				}
				f_89f_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_7eb_a1_b(a0)) {
			f_d3_a0_v();
			f_7fb_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_7c1_a1_b(a0)) {
			f_d3_a0_v();
			f_7d8_a1_v(a0);
		} else {
			f_ec_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		f_ec_a1_v(a0);
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
		f_d3_a0_v();
		f_8aa_a0_v();
	}

	void f_d3_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_15b_a0_v();
	}

	void f_db_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_162_a0_v();
	}

	void OnDeath(object a0)
	{
		f_d3_a0_v();
		global.OnDeath(a0);
	}

	void f_ec_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_6e9_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_820_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_db_a0_v();
			}
			f_829_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_114_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_14f_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_16b_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_169_a0_b(), L5);
					L4 = null;
					if (L5) {
						t1{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_14f_a0_f(void)
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

	void f_15b_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_162_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_169_a0_b(void)
	{
		return false;
	}

	object f_16b_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t1
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_8a1_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_266_a0_v();
			}
			f_8a4_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_7de_a1_v(a0);
		L0 = f_831_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_266_a0_v();
			}
			f_83b_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_96a_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_843_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_266_a0_v();
				}
				f_84d_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_897_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_266_a0_v();
			}
			f_89a_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_788_a2_b(a0, a1)) {
			f_266_a0_v();
			f_7a8_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_89c_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_266_a0_v();
				}
				f_89f_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_7eb_a1_b(a0)) {
			f_266_a0_v();
			f_7fb_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_266_a0_v();
		f_8aa_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_7c1_a1_b(a0)) {
			f_266_a0_v();
			f_7d8_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_70c_a0_b()) {
			return;
		}
		L0 = f_80f_a0_i();
		for (L1 = 0; L1 < 5 && f_70c_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_808_a1_s(L3));
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
			if (!f_264_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_264_a0_b(void)
	{
		return true;
	}

	void f_266_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t2
{
	var object tv0;

	void init(object a0)
	{
		Vector L0;
		Vector L1;
		bool L2;
		tv0 = a0;
		f_29e_a0_v();
		@GetDirection(L0);
		L1 = f_6a0_a1_V(tv0);
		if (f_766_a2_f(L0, L1) < 0) {
			f_701_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_701_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_29e_a0_v(void)
	{
		f_711_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_8a1_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_332_a0_v();
			}
			f_8a4_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_7de_a1_v(a0);
		L0 = f_831_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_332_a0_v();
			}
			f_83b_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_96a_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_843_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_332_a0_v();
				}
				f_84d_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_897_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_332_a0_v();
			}
			f_89a_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_788_a2_b(a0, a1)) {
			f_332_a0_v();
			f_7a8_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_89c_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_332_a0_v();
				}
				f_89f_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_7eb_a1_b(a0)) {
			f_332_a0_v();
			f_7fb_a1_v(a0);
		}
	}

	void f_332_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_332_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_6e9_a1_b(tv0)) {
			f_332_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_6a0_a1_V(tv0);
		if (f_766_a2_f(L0, L1) < 0.4999999701976776) {
			f_701_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_332_a0_v();
		f_8aa_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_7c1_a1_b(a0)) {
			f_332_a0_v();
			f_7d8_a1_v(a0);
		}
	}
}

task t3
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
		f_3bf_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_43c_a0_v();
		f_8aa_a0_v();
	}

	Vector f_3a1_a1_V(float a0)
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
		L3 = f_73c_a1_V(f_73c_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_3bf_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_3a1_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_3a1_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_69b_a0_V() + L0;
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
				L3 = f_3a1_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_69b_a0_V() + L3;
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
			L2 = f_3a1_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_44c_a0_b())) {
				@Stop();
				tv1 = f_69b_a0_V() + L2;
			}
		}
	}

	void f_43c_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_43c_a0_v();
		global.OnDeath(a0);
	}

	bool f_44c_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_6a0_a1_V(tv0);
		return f_74b_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t4
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_45c_a1_V(float a0)
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
		L3 = f_73c_a1_V(f_73c_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_45c_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_45c_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_69b_a0_V() + L0;
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
				L3 = f_45c_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_69b_a0_V() + L3;
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
			L2 = f_45c_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_507_a0_b())) {
				@Stop();
				tv1 = f_69b_a0_V() + L2;
			}
		}
	}

	void f_4f7_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_4f7_a0_v();
		global.OnDeath(a0);
	}

	bool f_507_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_6a0_a1_V(tv0);
		return f_74b_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t5
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_5b9_a0_v();
		f_8aa_a0_v();
	}

	Vector f_51e_a1_V(float a0)
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
		L3 = f_73c_a1_V(f_73c_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_51e_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_51e_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_69b_a0_V() + L0;
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
				L3 = f_51e_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_69b_a0_V() + L3;
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
			L2 = f_51e_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_5c9_a0_b())) {
				@Stop();
				tv1 = f_69b_a0_V() + L2;
			}
		}
	}

	void f_5b9_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_5b9_a0_v();
		global.OnDeath(a0);
	}

	bool f_5c9_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_6a0_a1_V(tv0);
		return f_74b_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t6
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_67b_a0_v();
		f_8aa_a0_v();
	}

	Vector f_5e0_a1_V(float a0)
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
		L3 = f_73c_a1_V(f_73c_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_5e0_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_5e0_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_69b_a0_V() + L0;
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
				L3 = f_5e0_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_69b_a0_V() + L3;
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
			L2 = f_5e0_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_68b_a0_b())) {
				@Stop();
				tv1 = f_69b_a0_V() + L2;
			}
		}
	}

	void f_67b_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_67b_a0_v();
		global.OnDeath(a0);
	}

	bool f_68b_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_6a0_a1_V(tv0);
		return f_74b_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_69b_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_6a0_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_6a7_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_6af_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_6b4_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_6c0_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_6c5_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_6c0_a1_b(a0)) {
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

bool f_6e9_a1_b(object a0)
{
	int L0;
	if (!f_6c5_a1_b(a0)) {
		return false;
	}
	if (!f_6b4_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_701_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_70c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_711_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_71c_a3_v(string a0, int a1, int a2)
{
	if (f_746_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_727_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_746_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

object f_736_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_73c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_746_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

float f_74b_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_753_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_75c_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_766_a2_f(Vector a0, Vector a1)
{
	return f_753_a2_f(a0, a1) / (f_75c_a1_f(a0) * f_75c_a1_f(a1));
}

int f_777_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
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

bool f_788_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_8ab_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_8b8_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_8cf_a1_b(a0);
			}
		}
	}
	return false;
}

void f_7a8_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_8b0_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_8c7_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_8d6_a1_v(a0);
			}
		}
	}
}

bool f_7c1_a1_b(object a0)
{
	if (f_8ab_a1_b(a0) && f_6af_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_7d8_a1_v(object a0)
{
	f_8b0_a1_v(a0);
}

void f_7de_a1_v(object a0)
{
	if (f_6af_a1_b(a0)) {
		@ReportReputationChange(a0, f_736_a0_o(), -0.029999999329447746);
	}
}

bool f_7eb_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_8dc_a1_b(L0);
	}
	return false;
}

void f_7fb_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_8df_a1_v(L0);
	}
}

string f_808_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_80f_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_808_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_820_a1_i(object a0)
{
	return f_964_a0_b() ? 2 : 0;
}

void f_829_a1_v(object a0)
{
	t2{a0};
}

int f_831_a1_i(object a0)
{
	return f_6e9_a1_b(a0) ? 2 : 0;
}

void f_83b_a1_v(object a0)
{
	t3{a0};
}

int f_843_a2_i(object a0, bool a1)
{
	return f_6e9_a1_b(a0) ? 2 : 0;
}

void f_84d_a1_v(object a0)
{
	t4{a0};
}

bool f_855_a3_b(object a0, object a1, float a2)
{
	string L0;
	bool L1;
	if (!f_6b4_a2_b(a1, "class")) {
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
	if (L1 || f_6a7_a1_f(a0) <= a2 * a2) {
		return true;
	}
	@CanSee(L1, a1);
	if (L1 || f_6a7_a1_f(a1) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_897_a1_i(object a0)
{
	return 0;
}

void f_89a_a1_v(object a0)
{
}

int f_89c_a2_i(string a0, object a1)
{
	return 0;
}

void f_89f_a2_v(string a0, object a1)
{
}

int f_8a1_a1_i(object a0)
{
	return 2;
}

void f_8a4_a1_v(object a0)
{
	f_956_a1_v(a0);
}

void f_8aa_a0_v(void)
{
}

bool f_8ab_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0;
}

void f_8b0_a1_v(object a0)
{
	t5{a0};
}

bool f_8b8_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_6a7_a1_f(a0) <= 4000000;
}

void f_8c7_a1_v(object a0)
{
	t6{a0};
}

bool f_8cf_a1_b(object a0)
{
	return f_8b8_a1_b(a0);
}

void f_8d6_a1_v(object a0)
{
	f_8c7_a1_v(a0);
}

bool f_8dc_a1_b(object a0)
{
	return false;
}

void f_8df_a1_v(object a0)
{
}

int f_8e1_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

float f_8e7_a0_f(void)
{
	object L0;
	float L1;
	@FindActor(L0, "player");
	if (!L0) {
		return 0;
	}
	L0->GetProperty("reputation", L1);
	return L1;
}

void f_8f5_a1_v(object a0)
{
	if (f_8e1_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_902_a1_v(bool a0)
{
	@ClearSubContainer(0);
	if (a0) {
		f_727_a4_v("rifle_ammo", 1, 2, 2);
		f_727_a4_v("revolver_ammo", 1, 2, 2);
		f_727_a4_v("samopal_ammo", 2, 2, 2);
	} else {
		int L0;
		f_71c_a3_v("lockpick", 1, 4);
		f_727_a4_v("alpha_pills", 1, 2, 3);
		f_71c_a3_v("meradorm", 1, 2);
		f_71c_a3_v("powder", 1, 15);
		L0 = f_777_a0_i();
		if (L0 >= 4) {
			f_71c_a3_v("beta_pills", 1, 2);
		}
		if (L0 >= 6) {
			f_71c_a3_v("gamma_pills", 1, 7);
		}
	}
}

void f_94e_a0_v(void)
{
	g0 = false;
	f_902_a1_v(false);
}

void f_956_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_8f5_a1_v(a0);
		}
		return;
	} else {
	}
}

bool f_964_a0_b(void)
{
	return f_8e7_a0_f() > 0.20000000298023224;
}

bool f_96a_a3_b(object a0, object a1, bool a2)
{
	return f_855_a3_b(a0, a1, 700.0);
}

