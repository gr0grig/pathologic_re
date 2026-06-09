event OnUse 0;
event OnUnload 6;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnSteal 40;
event OnMessage 42;
event OnTrigger 26;
event OnSee 1;
event OnHear 3;
event OnTimer 7;
event OnHit2 43;

var bool g0;

task t0
{
	void init(object a0)
	{
		disable OnUse;
		f_21_a1_v(a0);
		f_a36_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_98f_a1_i(a0);
		if (L0 > 0) {
			f_992_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_998_a0_v();
	}

	void f_21_a1_v(object a0)
	{
		if (a0 == null) {
			f_7c_a1_v("fdie");
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
			f_6ee_a1_v(L4);
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

	void f_7c_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_6ee_a1_v(a0);
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

	void init(void)
	{
		tv0 = false;
		@SensePlayerOnly(true);
		f_9f1_a0_v();
		f_be_a0_v();
		for (; ; ) {
			int L0;
			@irand(L0, 2);
			if (L0 == 0) {
				tv0 = true;
				f_a06_a0_v();
				tv0 = false;
				@ResetAAS();
			} else {
				int L1;
				@irand(L1, 4);
				@Sleep(L1 + 1);
			}
		}
	}

	void f_be_a0_v(void)
	{
		if (!f_6de_a0_b()) {
			f_998_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_98f_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_188_a0_v();
			}
			f_992_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_8ee_a1_v(a0);
		L0 = f_929_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_188_a0_v();
			}
			f_933_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_a26_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_93b_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_188_a0_v();
				}
				f_945_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_999_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_188_a0_v();
			}
			f_9a9_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_898_a2_b(a0, a1)) {
			f_188_a0_v();
			f_8b8_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_9af_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_188_a0_v();
				}
				f_9b2_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_8fb_a1_b(a0)) {
			f_188_a0_v();
			f_90b_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (tv0) {
			return;
		}
		if (f_8d1_a1_b(a0)) {
			f_188_a0_v();
			f_8e8_a1_v(a0);
		} else {
			f_19e_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (tv0) {
			return;
		}
		f_19e_a1_v(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 != 110) {
			return;
		}
		tv1 = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(void)
	{
		f_188_a0_v();
		f_998_a0_v();
	}

	void f_188_a0_v(void)
	{
		@KillTimer(110);
		tv1 = false;
		if (tv0) {
			f_a21_a0_v();
		} else {
			@Stop();
		}
	}

	void OnDeath(object a0)
	{
		f_188_a0_v();
		global.OnDeath(a0);
	}

	void f_19e_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (tv1) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_918_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_188_a0_v();
			}
			f_921_a1_v(a0);
			tv1 = true;
			@SetTimer(110, 5.0);
		}
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
		f_1f2_a0_v();
		@GetDirection(L0);
		L1 = f_5f4_a1_V(tv0);
		if (f_742_a2_f(L0, L1) < 0) {
			f_6d3_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_6d3_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_1f2_a0_v(void)
	{
		f_6e3_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_98f_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_286_a0_v();
			}
			f_992_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_8ee_a1_v(a0);
		L0 = f_929_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_286_a0_v();
			}
			f_933_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_a26_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_93b_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_286_a0_v();
				}
				f_945_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_999_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_286_a0_v();
			}
			f_9a9_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_898_a2_b(a0, a1)) {
			f_286_a0_v();
			f_8b8_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_9af_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_286_a0_v();
				}
				f_9b2_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_8fb_a1_b(a0)) {
			f_286_a0_v();
			f_90b_a1_v(a0);
		}
	}

	void f_286_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_286_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_63d_a1_b(tv0)) {
			f_286_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_5f4_a1_V(tv0);
		if (f_742_a2_f(L0, L1) < 0.4999999701976776) {
			f_6d3_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_286_a0_v();
		f_998_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_8d1_a1_b(a0)) {
			f_286_a0_v();
			f_8e8_a1_v(a0);
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
		f_313_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_390_a0_v();
		f_998_a0_v();
	}

	Vector f_2f5_a1_V(float a0)
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
		L3 = f_71d_a1_V(f_71d_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_313_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_2f5_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_2f5_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_5ef_a0_V() + L0;
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
				L3 = f_2f5_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_5ef_a0_V() + L3;
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
			L2 = f_2f5_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_3a0_a0_b())) {
				@Stop();
				tv1 = f_5ef_a0_V() + L2;
			}
		}
	}

	void f_390_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_390_a0_v();
		global.OnDeath(a0);
	}

	bool f_3a0_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_5f4_a1_V(tv0);
		return f_727_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t4
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_3b0_a1_V(float a0)
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
		L3 = f_71d_a1_V(f_71d_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_3b0_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_3b0_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_5ef_a0_V() + L0;
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
				L3 = f_3b0_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_5ef_a0_V() + L3;
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
			L2 = f_3b0_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_45b_a0_b())) {
				@Stop();
				tv1 = f_5ef_a0_V() + L2;
			}
		}
	}

	void f_44b_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_44b_a0_v();
		global.OnDeath(a0);
	}

	bool f_45b_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_5f4_a1_V(tv0);
		return f_727_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t5
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_50d_a0_v();
		f_998_a0_v();
	}

	Vector f_472_a1_V(float a0)
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
		L3 = f_71d_a1_V(f_71d_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_472_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_472_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_5ef_a0_V() + L0;
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
				L3 = f_472_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_5ef_a0_V() + L3;
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
			L2 = f_472_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_51d_a0_b())) {
				@Stop();
				tv1 = f_5ef_a0_V() + L2;
			}
		}
	}

	void f_50d_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_50d_a0_v();
		global.OnDeath(a0);
	}

	bool f_51d_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_5f4_a1_V(tv0);
		return f_727_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t6
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_5cf_a0_v();
		f_998_a0_v();
	}

	Vector f_534_a1_V(float a0)
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
		L3 = f_71d_a1_V(f_71d_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_534_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_534_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_5ef_a0_V() + L0;
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
				L3 = f_534_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_5ef_a0_V() + L3;
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
			L2 = f_534_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_5df_a0_b())) {
				@Stop();
				tv1 = f_5ef_a0_V() + L2;
			}
		}
	}

	void f_5cf_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_5cf_a0_v();
		global.OnDeath(a0);
	}

	bool f_5df_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_5f4_a1_V(tv0);
		return f_727_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_5ef_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_5f4_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_5fb_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_603_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_608_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_614_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_619_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_614_a1_b(a0)) {
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

bool f_63d_a1_b(object a0)
{
	int L0;
	if (!f_619_a1_b(a0)) {
		return false;
	}
	if (!f_608_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_655_a1_v(object a0)
{
	bool L0;
	int L1;
	Vector L2;
	Vector L3;
	Vector L4;
	Vector L5;
	string L6;
	if (a0 == null) {
		return;
	}
	@IsDead(L0);
	if (L0) {
		return;
	}
	@GetSecondaryAnimationType(L1);
	if (L1 < 0) {
		return;
	}
	a0->GetPosition(L2);
	@GetPosition(L3);
	@GetDirection(L4);
	L5 = L3 - L2;
	if (L5.x * L4.x + L5.z * L4.z >= 0) {
		L6 = "fhit";
	} else {
		L6 = "bhit";
	}
	@FadeSecondaryAnimation("hit_react", L6 + "1", L6 + "2", -10);
}

void f_681_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_71d_a1_V(f_5f4_a1_V(a0));
		object L1;
		@CreateVectorVector(L1);
		int L2;
		for (L2 = 1; ; L2++) {
			bool L3;
			Vector L4;
			Vector L5;
			@GetGeometryLocator("hit" + L2, L3, L4, L5);
			if (!L3) {
				break;
			}
			if ((L5 | L0) >= 0.7071067690849304) {
				L1->add(L4);
			}
		}
		int L6;
		L1->size(L6);
		if (L6) {
			int L7;
			Vector L8;
			@irand(L7, L6);
			L1->get(L8, L7);
			f_6c5_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_655_a1_v(a0);
}

void f_6c5_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_655_a1_v(a0);
}

void f_6d3_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_6de_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_6e3_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_6ee_a1_v(string a0)
{
	bool L0;
	@IsExisting3DSound(L0, a0);
	if (!L0) {
		int L1;
		for (L1 = 0; ; L1++) {
			bool L2;
			@IsExisting3DSound(L2, a0 + (L1 + 1));
			if (!L2) {
				break;
			}
		}
		if (!L1) {
			return;
		}
		int L3;
		@irand(L3, L1);
		a0 = a0 + (L3 + 1);
	}
	bool L4;
	@Is3DSoundLoaded(L4, a0);
	if (L4) {
		float L5;
		Vector L6;
		Vector L7;
		@GetEyesHeight(L5);
		@GetDirection(L6);
		L7 = L6 * 50;
		L7.y += L5;
		@PlayGlobalSound(a0, L7);
	}
}

object f_717_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_71d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_727_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_72f_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_738_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_742_a2_f(Vector a0, Vector a1)
{
	return f_72f_a2_f(a0, a1) / (f_738_a1_f(a0) * f_738_a1_f(a1));
}

int f_753_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_75c_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_762_a1_v(object a0)
{
	if (f_75c_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_76f_a2_v(int a0, int a1)
{
	int L0;
	bool L1;
	if (a0 > a1) {
		@Trace("GenerateMoney: iMin > iMax");
		return;
	}
	L0 = 0;
	if (a0 != a1) {
		@irand(L0, a1 - a0);
	} else {
		if (a0 == 0) {
			return;
		}
	}
	L0 = L0 + a0;
	if (L0 == 0) {
		return;
	}
	@AddItem(L1, f_866_a1_i("Money"), 0, L0);
}

void f_78e_a1_v(string a0)
{
	object L0;
	int L1;
	bool L2;
	@CreateInvItem(L0);
	L0->SetItemName(a0);
	L0->SetProperty("Organ", 1);
	L0->GetItemID(L1);
	@AddItem(L2, L0, 0, 1);
}

void f_79f_a0_v(void)
{
	if (f_75c_a0_i() != 1) {
		return;
	}
	f_78e_a1_v("liver");
	f_78e_a1_v("kidney");
	f_78e_a1_v("heart");
	f_78e_a1_v("blood");
}

void f_7b7_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_76f_a2_v(0, 100 + f_753_a0_i() * 100);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_866_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_866_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_866_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_866_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_866_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_866_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_76f_a2_v(0, 50 + f_753_a0_i() * 50);
		@irand(L0, 7);
		if (L0 == 0) {
			@AddItem(L1, f_866_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_866_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_866_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_866_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_866_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_866_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_866_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_86b_a1_v(object a0)
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
	f_86b_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_681_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_6c5_a5_v(a0, a1, a2, a4, a5);
}

bool f_898_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_9b4_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_9c1_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_9d8_a1_b(a0);
			}
		}
	}
	return false;
}

void f_8b8_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_9b9_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_9d0_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_9df_a1_v(a0);
			}
		}
	}
}

bool f_8d1_a1_b(object a0)
{
	if (f_9b4_a1_b(a0) && f_603_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_8e8_a1_v(object a0)
{
	f_9b9_a1_v(a0);
}

void f_8ee_a1_v(object a0)
{
	if (f_603_a1_b(a0)) {
		@ReportReputationChange(a0, f_717_a0_o(), -0.05000000074505806);
	}
}

bool f_8fb_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_9e5_a1_b(L0);
	}
	return false;
}

void f_90b_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_9e8_a1_v(L0);
	}
}

int f_918_a1_i(object a0)
{
	return f_a24_a0_b() ? 2 : 0;
}

void f_921_a1_v(object a0)
{
	t2{a0};
}

int f_929_a1_i(object a0)
{
	return f_63d_a1_b(a0) ? 2 : 0;
}

void f_933_a1_v(object a0)
{
	t3{a0};
}

int f_93b_a2_i(object a0, bool a1)
{
	return f_63d_a1_b(a0) ? 2 : 0;
}

void f_945_a1_v(object a0)
{
	t4{a0};
}

bool f_94d_a3_b(object a0, object a1, float a2)
{
	string L0;
	bool L1;
	if (!f_608_a2_b(a1, "class")) {
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
	if (L1 || f_5fb_a1_f(a0) <= a2 * a2) {
		return true;
	}
	@CanSee(L1, a1);
	if (L1 || f_5fb_a1_f(a1) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_98f_a1_i(object a0)
{
	return 2;
}

void f_992_a1_v(object a0)
{
	f_9f9_a1_v(a0);
}

void f_998_a0_v(void)
{
}

int f_999_a1_i(object a0)
{
	bool L0;
	@Trace("Received steal");
	@CanSee(L0, a0);
	if (L0) {
		return f_929_a1_i(a0);
	}
	return 0;
}

void f_9a9_a1_v(object a0)
{
	f_933_a1_v(a0);
}

int f_9af_a2_i(string a0, object a1)
{
	return 0;
}

void f_9b2_a2_v(string a0, object a1)
{
}

bool f_9b4_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0;
}

void f_9b9_a1_v(object a0)
{
	t5{a0};
}

bool f_9c1_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_5fb_a1_f(a0) <= 4000000;
}

void f_9d0_a1_v(object a0)
{
	t6{a0};
}

bool f_9d8_a1_b(object a0)
{
	return f_9c1_a1_b(a0);
}

void f_9df_a1_v(object a0)
{
	f_9d0_a1_v(a0);
}

bool f_9e5_a1_b(object a0)
{
	return false;
}

void f_9e8_a1_v(object a0)
{
}

string f_9ea_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

void f_9f1_a0_v(void)
{
	g0 = false;
	f_7b7_a1_v(false);
}

void f_9f9_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_762_a1_v(a0);
		}
		return;
	}
}

void f_a06_a0_v(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_9ea_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	int L2;
	@irand(L2, L0);
	@PlayAnimation("all", f_9ea_a1_s(L2));
	@WaitForAnimEnd();
}

void f_a21_a0_v(void)
{
	@StopAnimation();
}

bool f_a24_a0_b(void)
{
	return true;
}

bool f_a26_a3_b(object a0, object a1, bool a2)
{
	if (f_94d_a3_b(a0, a1, 500.0)) {
		@SetProperty("ToDie", true);
		return true;
	}
	return false;
}

void f_a36_a1_v(object a0)
{
	if (f_603_a1_b(a0)) {
		@ReportReputationChange(a0, f_717_a0_o(), -0.10000000149011612, true);
		f_7b7_a1_v(false);
	}
	f_79f_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

