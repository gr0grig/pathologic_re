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
event OnCollision 10;
event OnActorStuck 28;
event OnHit2 43;

var bool g0;

task t0
{
	void init(object a0)
	{
		disable OnUse;
		f_21_a1_v(a0);
		f_ab3_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_a45_a1_i(a0);
		if (L0 > 0) {
			f_a48_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_a4e_a0_v();
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
			f_774_a1_v(L4);
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
		f_774_a1_v(a0);
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
		f_a88_a0_v();
		f_ab_a0_v();
		for (; ; ) {
			tv2 = false;
			f_1b0_a0_v();
		}
	}

	void f_ab_a0_v(void)
	{
		if (!f_764_a0_b()) {
			f_a4e_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_a45_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_16f_a0_v();
			}
			f_a48_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_982_a1_v(a0);
		L0 = f_9d5_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_16f_a0_v();
			}
			f_9df_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_aaa_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_9e7_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_16f_a0_v();
				}
				f_9f1_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_a3b_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_16f_a0_v();
			}
			f_a3e_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_92c_a2_b(a0, a1)) {
			f_16f_a0_v();
			f_94c_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_a40_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_16f_a0_v();
				}
				f_a43_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_98f_a1_b(a0)) {
			f_16f_a0_v();
			f_99f_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_965_a1_b(a0)) {
			f_16f_a0_v();
			f_97c_a1_v(a0);
		} else {
			f_188_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		f_188_a1_v(a0);
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
		f_16f_a0_v();
		f_a4e_a0_v();
	}

	void f_16f_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_1f7_a0_v();
	}

	void f_177_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_1fe_a0_v();
	}

	void OnDeath(object a0)
	{
		f_16f_a0_v();
		global.OnDeath(a0);
	}

	void f_188_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_6c3_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_9c4_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_177_a0_v();
			}
			f_9cd_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_1b0_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_1eb_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_207_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_205_a0_b(), L5);
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

	float f_1eb_a0_f(void)
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

	void f_1f7_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_1fe_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_205_a0_b(void)
	{
		return false;
	}

	object f_207_a1_o(Vector a0)
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
		L0 = f_a45_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_302_a0_v();
			}
			f_a48_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_982_a1_v(a0);
		L0 = f_9d5_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_302_a0_v();
			}
			f_9df_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_aaa_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_9e7_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_302_a0_v();
				}
				f_9f1_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_a3b_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_302_a0_v();
			}
			f_a3e_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_92c_a2_b(a0, a1)) {
			f_302_a0_v();
			f_94c_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_a40_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_302_a0_v();
				}
				f_a43_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_98f_a1_b(a0)) {
			f_302_a0_v();
			f_99f_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_302_a0_v();
		f_a4e_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_965_a1_b(a0)) {
			f_302_a0_v();
			f_97c_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_764_a0_b()) {
			return;
		}
		L0 = f_9b3_a0_i();
		for (L1 = 0; L1 < 5 && f_764_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_9ac_a1_s(L3));
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
			if (!f_300_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_300_a0_b(void)
	{
		return true;
	}

	void f_302_a0_v(void)
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
		f_33a_a0_v();
		@GetDirection(L0);
		L1 = f_67a_a1_V(tv0);
		if (f_7c8_a2_f(L0, L1) < 0) {
			f_759_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_759_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_33a_a0_v(void)
	{
		f_769_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_a45_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_3ce_a0_v();
			}
			f_a48_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_982_a1_v(a0);
		L0 = f_9d5_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_3ce_a0_v();
			}
			f_9df_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_aaa_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_9e7_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_3ce_a0_v();
				}
				f_9f1_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_a3b_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_3ce_a0_v();
			}
			f_a3e_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_92c_a2_b(a0, a1)) {
			f_3ce_a0_v();
			f_94c_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_a40_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_3ce_a0_v();
				}
				f_a43_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_98f_a1_b(a0)) {
			f_3ce_a0_v();
			f_99f_a1_v(a0);
		}
	}

	void f_3ce_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_3ce_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_6c3_a1_b(tv0)) {
			f_3ce_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_67a_a1_V(tv0);
		if (f_7c8_a2_f(L0, L1) < 0.4999999701976776) {
			f_759_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_3ce_a0_v();
		f_a4e_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_965_a1_b(a0)) {
			f_3ce_a0_v();
			f_97c_a1_v(a0);
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
		f_45b_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_4d8_a0_v();
		f_a4e_a0_v();
	}

	Vector f_43d_a1_V(float a0)
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
		L3 = f_7a3_a1_V(f_7a3_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_45b_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_43d_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_43d_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_675_a0_V() + L0;
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
				L3 = f_43d_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_675_a0_V() + L3;
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
			L2 = f_43d_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_4e8_a0_b())) {
				@Stop();
				tv1 = f_675_a0_V() + L2;
			}
		}
	}

	void f_4d8_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_4d8_a0_v();
		global.OnDeath(a0);
	}

	bool f_4e8_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_67a_a1_V(tv0);
		return f_7ad_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t5
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_4f8_a1_V(float a0)
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
		L3 = f_7a3_a1_V(f_7a3_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_4f8_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_4f8_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_675_a0_V() + L0;
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
				L3 = f_4f8_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_675_a0_V() + L3;
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
			L2 = f_4f8_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_5a3_a0_b())) {
				@Stop();
				tv1 = f_675_a0_V() + L2;
			}
		}
	}

	void f_593_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_593_a0_v();
		global.OnDeath(a0);
	}

	bool f_5a3_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_67a_a1_V(tv0);
		return f_7ad_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t6
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_655_a0_v();
		f_a4e_a0_v();
	}

	Vector f_5ba_a1_V(float a0)
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
		L3 = f_7a3_a1_V(f_7a3_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_5ba_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_5ba_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_675_a0_V() + L0;
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
				L3 = f_5ba_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_675_a0_V() + L3;
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
			L2 = f_5ba_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_665_a0_b())) {
				@Stop();
				tv1 = f_675_a0_V() + L2;
			}
		}
	}

	void f_655_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_655_a0_v();
		global.OnDeath(a0);
	}

	bool f_665_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_67a_a1_V(tv0);
		return f_7ad_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_675_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_67a_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_681_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_689_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_68e_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_69a_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_69f_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_69a_a1_b(a0)) {
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

bool f_6c3_a1_b(object a0)
{
	int L0;
	if (!f_69f_a1_b(a0)) {
		return false;
	}
	if (!f_68e_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_6db_a1_v(object a0)
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

void f_707_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_7a3_a1_V(f_67a_a1_V(a0));
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
			f_74b_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_6db_a1_v(a0);
}

void f_74b_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_6db_a1_v(a0);
}

void f_759_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_764_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_769_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_774_a1_v(string a0)
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

object f_79d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_7a3_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_7ad_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_7b5_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_7be_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_7c8_a2_f(Vector a0, Vector a1)
{
	return f_7b5_a2_f(a0, a1) / (f_7be_a1_f(a0) * f_7be_a1_f(a1));
}

int f_7d9_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_7e2_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

float f_7e8_a0_f(void)
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

void f_7f6_a1_v(object a0)
{
	if (f_7e2_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_803_a2_v(int a0, int a1)
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
	@AddItem(L1, f_8fa_a1_i("Money"), 0, L0);
}

void f_822_a1_v(string a0)
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

void f_833_a0_v(void)
{
	if (f_7e2_a0_i() != 1) {
		return;
	}
	f_822_a1_v("liver");
	f_822_a1_v("kidney");
	f_822_a1_v("heart");
	f_822_a1_v("blood");
}

void f_84b_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_803_a2_v(0, 100 + f_7d9_a0_i() * 100);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_8fa_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_8fa_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_8fa_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_8fa_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_8fa_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_8fa_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_803_a2_v(0, 50 + f_7d9_a0_i() * 50);
		@irand(L0, 7);
		if (L0 == 0) {
			@AddItem(L1, f_8fa_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_8fa_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_8fa_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_8fa_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_8fa_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_8fa_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_8fa_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_8ff_a1_v(object a0)
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
	f_8ff_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_707_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_74b_a5_v(a0, a1, a2, a4, a5);
}

bool f_92c_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_a4f_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_a54_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_a6b_a1_b(a0);
			}
		}
	}
	return false;
}

void f_94c_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_a52_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_a63_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_a72_a1_v(a0);
			}
		}
	}
}

bool f_965_a1_b(object a0)
{
	if (f_a4f_a1_b(a0) && f_689_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_97c_a1_v(object a0)
{
	f_a52_a1_v(a0);
}

void f_982_a1_v(object a0)
{
	if (f_689_a1_b(a0)) {
		@ReportReputationChange(a0, f_79d_a0_o(), -0.05000000074505806);
	}
}

bool f_98f_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_a78_a1_b(L0);
	}
	return false;
}

void f_99f_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_a7b_a1_v(L0);
	}
}

string f_9ac_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_9b3_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_9ac_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_9c4_a1_i(object a0)
{
	return f_aa1_a0_b() ? 2 : 0;
}

void f_9cd_a1_v(object a0)
{
	t3{a0};
}

int f_9d5_a1_i(object a0)
{
	return f_6c3_a1_b(a0) ? 2 : 0;
}

void f_9df_a1_v(object a0)
{
	t4{a0};
}

int f_9e7_a2_i(object a0, bool a1)
{
	return f_6c3_a1_b(a0) ? 2 : 0;
}

void f_9f1_a1_v(object a0)
{
	t5{a0};
}

bool f_9f9_a3_b(object a0, object a1, float a2)
{
	string L0;
	bool L1;
	if (!f_68e_a2_b(a1, "class")) {
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
	if (L1 || f_681_a1_f(a0) <= a2 * a2) {
		return true;
	}
	@CanSee(L1, a1);
	if (L1 || f_681_a1_f(a1) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_a3b_a1_i(object a0)
{
	return 0;
}

void f_a3e_a1_v(object a0)
{
}

int f_a40_a2_i(string a0, object a1)
{
	return 0;
}

void f_a43_a2_v(string a0, object a1)
{
}

int f_a45_a1_i(object a0)
{
	return 2;
}

void f_a48_a1_v(object a0)
{
	f_a90_a1_v(a0);
}

void f_a4e_a0_v(void)
{
}

bool f_a4f_a1_b(object a0)
{
	return false;
}

void f_a52_a1_v(object a0)
{
}

bool f_a54_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_681_a1_f(a0) <= 4000000;
}

void f_a63_a1_v(object a0)
{
	t6{a0};
}

bool f_a6b_a1_b(object a0)
{
	return f_a54_a1_b(a0);
}

void f_a72_a1_v(object a0)
{
	f_a63_a1_v(a0);
}

bool f_a78_a1_b(object a0)
{
	return false;
}

void f_a7b_a1_v(object a0)
{
}

void f_a7d_a0_v(void)
{
	object L0;
	@GetActiveScene(L0);
	@BroadcastMessage("killme", f_79d_a0_o(), L0);
}

void f_a88_a0_v(void)
{
	g0 = false;
	f_84b_a1_v(false);
}

void f_a90_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_7f6_a1_v(a0);
		}
		return;
	} else {
		f_a7d_a0_v();
	}
}

bool f_aa1_a0_b(void)
{
	f_a7d_a0_v();
	return f_7e8_a0_f() > 0.699999988079071;
}

bool f_aaa_a3_b(object a0, object a1, bool a2)
{
	return f_9f9_a3_b(a0, a1, 500.0);
}

void f_ab3_a1_v(object a0)
{
	if (f_689_a1_b(a0)) {
		@ReportReputationChange(a0, f_79d_a0_o(), -0.10000000149011612, true);
		f_84b_a1_v(false);
	}
	f_833_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

