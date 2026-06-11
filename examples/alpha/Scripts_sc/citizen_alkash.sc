event evt_11 11;
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

var object g0;
var bool g1;

task t0
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			@WaitForAnimEnd();
			@PlayAnimation("all", "idle");
			if (tv0) {
				return;
			}
		}
	}

	void evt_11(int a0)
	{
		@StopAnimation();
		@StopTrade();
		tv0 = true;
	}
}

task t1
{
	void init(object a0)
	{
		disable OnUse;
		f_37_a1_v(a0);
		f_b03_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_a1d_a1_i(a0);
		if (L0 > 0) {
			f_a20_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_a26_a0_v();
	}

	void f_37_a1_v(object a0)
	{
		if (a0 == null) {
			f_8e_a1_v("fdie");
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

	void f_8e_a1_v(string a0)
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
	var bool tv2;

	void init(void)
	{
		@SensePlayerOnly(true);
		f_aa3_a0_v();
		f_b9_a0_v();
		for (; ; ) {
			tv2 = false;
			f_18e_a0_v();
		}
	}

	void f_b9_a0_v(void)
	{
		if (!f_898_a0_b()) {
			f_a26_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_a1d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_14d_a0_v();
			}
			f_a20_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_9cb_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_14d_a0_v();
			}
			f_9d5_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_ad5_a2_b(a0, a1)) {
			int L0;
			L0 = f_9dd_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_14d_a0_v();
				}
				f_9e4_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_9ea_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_14d_a0_v();
			}
			f_9ed_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_9ef_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_14d_a0_v();
			}
			f_9fb_a2_v(a1, a0);
		}
	}

	void OnSee(object a0)
	{
		f_166_a1_v(a0);
	}

	void OnHear(object a0)
	{
		f_166_a1_v(a0);
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
		f_14d_a0_v();
		f_a26_a0_v();
	}

	void f_14d_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_1ce_a0_v();
	}

	void f_155_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_1d5_a0_v();
	}

	void OnDeath(object a0)
	{
		f_14d_a0_v();
		global.OnDeath(a0);
	}

	void f_166_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_832_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_9ba_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_155_a0_v();
			}
			f_9c3_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_18e_a0_v(void)
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
					@FollowPath(L5, f_1dc_a0_b(), L6);
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

	void f_1ce_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_1d5_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_1dc_a0_b(void)
	{
		return false;
	}
}

task t3
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_a1d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_296_a0_v();
			}
			f_a20_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_9cb_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_296_a0_v();
			}
			f_9d5_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_ad5_a2_b(a0, a1)) {
			int L0;
			L0 = f_9dd_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_296_a0_v();
				}
				f_9e4_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_9ea_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_296_a0_v();
			}
			f_9ed_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_9ef_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_296_a0_v();
			}
			f_9fb_a2_v(a1, a0);
		}
	}

	void OnUnload(void)
	{
		f_296_a0_v();
		f_a26_a0_v();
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_898_a0_b()) {
			return;
		}
		L0 = f_9a9_a0_i();
		L1 = 0;
		for (; L1 < 5 && f_898_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_9a2_a1_s(L3));
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

	void f_296_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t4
{
	var object tv0;

	void init(object a0)
	{
		Vector L0;
		Vector L1;
		bool L2;
		tv0 = a0;
		f_2ce_a0_v();
		@GetDirection(L0);
		L1 = f_7ae_a1_V(tv0);
		if (f_960_a2_f(L0, L1) < 0) {
			f_88d_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_88d_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_2ce_a0_v(void)
	{
		f_91f_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_a1d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_33f_a0_v();
			}
			f_a20_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_9cb_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_33f_a0_v();
			}
			f_9d5_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_ad5_a2_b(a0, a1)) {
			int L0;
			L0 = f_9dd_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_33f_a0_v();
				}
				f_9e4_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_9ea_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_33f_a0_v();
			}
			f_9ed_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_9ef_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_33f_a0_v();
			}
			f_9fb_a2_v(a1, a0);
		}
	}

	void f_33f_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_33f_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_832_a1_b(tv0)) {
			f_33f_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_7ae_a1_V(tv0);
		if (f_960_a2_f(L0, L1) < 0.4999999701976776) {
			f_88d_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_33f_a0_v();
		f_a26_a0_v();
	}
}

task t5
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;
	var int tv4;

	void init(object a0)
	{
		f_38b_a3_v(a0, true, 180.0);
	}

	float f_385_a2_f(object a0, int a1)
	{
		return 0.05000000074505806;
	}

	int f_388_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_38b_a3_v(object a0, bool a1, float a2)
	{
		for (tv1 = 0; ; tv1++) {
			bool L0;
			@HasAnimation(L0, "all", "attack_begin" + (tv1 + 1));
			if (!L0) {
				break;
			}
		}
		for (tv2 = 0; ; tv2++) {
			bool L1;
			@IsExisting3DSound(L1, "attack" + (tv2 + 1));
			if (!L1) {
				break;
			}
		}
		float L2;
		Vector L3;
		Vector L4;
		bool L5;
		bool L6;
		tv4 = 0;
		if (a0->FuncExist("@GetAttackDistance", 1)) {
			a0->GetAttackDistance(L2);
			L2 = L2 + 50;
		} else {
			L2 = a2;
		}
		if (L2 >= 150) {
			L2 = 150;
		}
		tv3 = false;
		tv0 = a0;
		@IsPlayerActor(tv0, L5);
		if (a1) {
			L6 = false;
		} else {
			L6 = true;
		}
		for (; f_832_a1_b(tv0) && !tv3; ) {
			Vector L7;
			float L8;
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			L7 = L3 - L4;
			L8 = L7 | L7;
			if (L8 >= (400.0 + L2) * (400.0 + L2)) {
				if (!t6{tv0, L2, 3000.0, true, false}) {
					break;
				}
				L6 = false;
			} else {
				if (L8 >= a2 * a2) {
					float L9;
					if (!L6) {
						f_88d_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						@StopAsync();
						L6 = true;
					}
					@rand(L9);
					if (L9 < 0.6000000238418579 || f_543_a0_b()) {
						@Face(tv0);
						@PlayAnimation("all", "attack_stay");
						f_4e7_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_543_a0_b()) {
							if (!f_832_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L3);
							@GetPFPosition(L4);
							L7 = L3 - L4;
							L8 = L7 | L7;
							if (L8 < a2 * a2) {
								if (!f_47f_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_47f_a1_b(a2)) {
						break;
					}
					L6 = true;
				}
			}
		}
		@WaitForAnimEnd();
		if (tv3) {
			return;
		}
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if (L5) {
			@Sleep(2.0);
		}
	}

	void f_458_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_385_a2_f(L0, a1);
			L2 = f_7c9_a3_f(L0, L1, f_388_a2_i(L0, a1));
			@ReportHit(tv0, f_56e_a0_i(), L2, L1);
			f_570_a2_v(L0, L2);
		}
	}

	bool f_47f_a1_b(float a0)
	{
		int L0;
		bool L1;
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_54e_a0_v();
		if (!f_832_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_458_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			if (!f_832_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_458_a2_v(a0, L0);
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		f_4cf_a1_b(0.75);
		@StopAsync();
		return true;
	}

	bool f_4cf_a1_b(float a0)
	{
		float L0;
		@rand(L0);
		if (L0 < a0) {
			for (; ; ) {
				bool L1;
				@IsAnimationPlaying(L1);
				if (!L1) {
					break;
				}
				if (f_50f_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
		}
		return false;
	}

	bool f_4e7_a1_b(float a0)
	{
		for (; ; ) {
			bool L0;
			Vector L1;
			Vector L2;
			Vector L3;
			float L4;
			@IsAnimationPlaying(L0);
			if (!L0) {
				break;
			}
			if (f_50f_a0_b()) {
				return true;
			}
			if (!f_832_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_47f_a1_b(a0);
				return true;
			}
			@sync();
		}
		return false;
	}

	bool f_50f_a0_b(void)
	{
		if (!f_832_a1_b(tv0)) {
			return false;
		}
		if (f_543_a0_b()) {
			Vector L0;
			Vector L1;
			Vector L2;
			float L3;
			float L4;
			tv0->GetPFPosition(L0);
			@GetPFPosition(L1);
			L2 = L0 - L1;
			L3 = L2 | L2;
			tv0->GetAttackDistance(L4);
			L4 = L4 + 50;
			if (L3 <= L4 * L4) {
				f_530_a0_v();
				return true;
			}
		}
		return false;
	}

	void f_530_a0_v(void)
	{
		Vector L0;
		Vector L1;
		@Face(tv0);
		@PlayAnimation("all", "bjump");
		tv0->GetPFPosition(L0);
		@GetPFPosition(L1);
		@WaitForAnimEnd();
		@StopAsync();
		@SetSpeed([0.0, 0.0, 0.0]);
	}

	bool f_543_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_54e_a0_v(void)
	{
		float L0;
		if (!tv2) {
			return;
		}
		if (tv4) {
			tv4 = tv4 + -1;
			if (tv4 > 0) {
				return;
			}
		}
		@rand(L0);
		if (L0 < f_574_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv4 = f_572_a0_i();
		}
	}

	int f_56e_a0_i(void)
	{
		return 0;
	}

	void f_570_a2_v(object a0, float a1)
	{
	}

	int f_572_a0_i(void)
	{
		return 1;
	}

	float f_574_a0_f(void)
	{
		return 0.5;
	}
}

task t6
{
	var bool tv0;
	var object tv1;

	void OnUnload(void)
	{
		f_5f9_a0_v();
		f_a26_a0_v();
	}

	bool init(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_609_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_610_a0_s(), f_612_a0_s());
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
		if (!f_609_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_5f9_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_5f9_a0_v();
		global.OnDeath(a0);
	}

	bool f_609_a1_b(object a0)
	{
		return f_832_a1_b(a0);
	}

	string f_610_a0_s(void)
	{
		return "walk";
	}

	string f_612_a0_s(void)
	{
		return "run";
	}
}

task t7
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_89d_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a9d_a0_i());
		L0->SetPhoto(f_a9f_a0_s());
		L0->SetPlayerName(f_a38_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t8{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_8d5_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t8
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
			f_6bf_a1_v("Neutral");
			tv0->SetMessage(13794);
			tv0->ClearReplies();
			tv0->AddReply(13795, -1, 15021);
			tv0->AddReply(13796, -1, 15022);
			break;
			f_6bf_a1_v("Neutral");
			tv0->SetMessage(14699);
			tv0->ClearReplies();
			if (f_a2c_a1_b(tv1)) {
				tv0->AddReply(14700, 15941, 15940);
			}
			tv0->AddReply(14707, -1, 15948);
			break;
			f_6bf_a1_v("Neutral");
			tv0->SetMessage(14708);
			tv0->ClearReplies();
			tv0->AddReply(14709, 15951, 15950);
			tv0->AddReply(14720, -1, 15963);
			tv0->AddReply(14719, -1, 15962);
			break;
			return;
		}
		if (f_aa1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_90d_a1_v(tv2);
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

	void f_6bf_a1_v(string a0)
	{
		if (!f_aa1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_90d_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_92a_a0_v();
			if (a1 == 15021) {
				f_a27_a2_v(tv1, tv0);
			}
			if (a0 == 15020) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(13794);
				tv0->ClearReplies();
				tv0->AddReply(13795, -1, 15021);
				tv0->AddReply(13796, -1, 15022);
				return;
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(14699);
				tv0->ClearReplies();
				if (f_a2c_a1_b(tv1)) {
					tv0->AddReply(14700, 15941, 15940);
				}
				tv0->AddReply(14707, -1, 15948);
				return;
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(14708);
				tv0->ClearReplies();
				tv0->AddReply(14709, 15951, 15950);
				tv0->AddReply(14720, -1, 15963);
				tv0->AddReply(14719, -1, 15962);
				return;
			}
			if (a0 == 15951) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(14710);
				tv0->ClearReplies();
				tv0->AddReply(14711, 15953, 15952);
				tv0->AddReply(14718, 15955, 15960);
				return;
			}
			if (a0 == 15953) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(14712);
				tv0->ClearReplies();
				tv0->AddReply(14713, 15955, 15954);
				tv0->AddReply(14717, 15955, 15958);
				return;
			}
			if (a0 == 15955) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(14714);
				tv0->ClearReplies();
				tv0->AddReply(14715, -1, 15956);
				tv0->AddReply(14716, -1, 15957);
				return;
			}
			if (a0 == 15941) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(14701);
				tv0->ClearReplies();
				tv0->AddReply(14702, 15943, 15942);
				tv0->AddReply(14706, 15943, 15946);
				return;
			}
			if (a0 == 15943) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(14703);
				tv0->ClearReplies();
				tv0->AddReply(14705, -1, 15945);
				tv0->AddReply(14704, -1, 15944);
				return;
			}
			tv3 = true;
			if (f_aa1_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

string f_7a6_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

Vector f_7ae_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_7b5_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_7bd_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_7c9_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_7bd_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_7bd_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_7a6_a1_s(a2);
	if (!f_7bd_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_93b_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_942_a3_f(L4 - L5, 0, 1));
	return L5;
}

bool f_809_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_80e_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_809_a1_b(a0)) {
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

bool f_832_a1_b(object a0)
{
	int L0;
	if (!f_80e_a1_b(a0)) {
		return false;
	}
	if (!f_7bd_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_84a_a3_v(object a0, int a1, float a2)
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

void f_88d_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_898_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_89d_a1_b(object a0)
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
	L5 = L3 * 70 + f_931_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_8d5_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

bool f_8d9_a1_b(object a0)
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
	L5 = L3 * 70 - [0.0, 10.0, 0.0];
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

void f_909_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_90d_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_91f_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_92a_a0_v(void)
{
	if (f_aa1_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_931_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_93b_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_942_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_94d_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_956_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_960_a2_f(Vector a0, Vector a1)
{
	return f_94d_a2_f(a0, a1) / (f_956_a1_f(a0) * f_956_a1_f(a1));
}

int f_971_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_976_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_97f_a1_v(object a0)
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
	f_97f_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_84a_a3_v(a0, a1, a2);
}

string f_9a2_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_9a9_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_9a2_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_9ba_a1_i(object a0)
{
	return f_ad0_a0_b() ? 2 : 0;
}

void f_9c3_a1_v(object a0)
{
	t4{a0};
}

int f_9cb_a1_i(object a0)
{
	return f_832_a1_b(a0) ? 2 : 0;
}

void f_9d5_a1_v(object a0)
{
	t5{a0};
}

int f_9dd_a1_i(object a0)
{
	return f_9cb_a1_i(a0);
}

void f_9e4_a1_v(object a0)
{
	f_9d5_a1_v(a0);
}

int f_9ea_a1_i(object a0)
{
	return 0;
}

void f_9ed_a1_v(object a0)
{
}

int f_9ef_a2_i(string a0, object a1)
{
	if (a0 == "killme") {
		return f_a05_a1_i(a1);
	}
	return 0;
}

void f_9fb_a2_v(string a0, object a1)
{
	if (a0 == "killme") {
		f_a17_a1_v(a1);
		return;
	}
}

int f_a05_a1_i(object a0)
{
	if (!f_832_a1_b(a0)) {
		return 0;
	}
	return f_ad2_a1_b(a0) ? 2 : 0;
}

void f_a17_a1_v(object a0)
{
	f_9d5_a1_v(a0);
}

int f_a1d_a1_i(object a0)
{
	return 2;
}

void f_a20_a1_v(object a0)
{
	f_aaa_a1_v(a0);
}

void f_a26_a0_v(void)
{
}

void f_a27_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_a2c_a1_b(object a0)
{
	if (f_971_a1_i("KnowTvirin") == 1) {
		return true;
	}
	return false;
}

int f_a38_a0_i(void)
{
	int L0;
	@GetVariable("player", L0);
	if (L0 == 0) {
		return 200001;
	} else {
		if (L0 == 1) {
			return 200002;
		}
	}
	return 200003;
}

void f_a49_a2_v(int a0, int a1)
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

void f_a67_a0_v(void)
{
	bool L0;
	@ClearSubContainer(0);
	f_a49_a2_v(30, 50 + f_976_a0_i() * 30);
}

void f_a77_a0_v(void)
{
	bool L0;
	int L1;
	@ClearSubContainer(0);
	@irand(L1, 2);
	if (L1 == 0) {
		@AddItem(L0, f_a98_a1_i("bandage"), 0, 1);
	}
	@irand(L1, 2);
	if (L1 == 0) {
		@AddItem(L0, f_a98_a1_i("tourniquet"), 0, 1);
	}
}

int f_a98_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

int f_a9d_a0_i(void)
{
	return 3342;
}

string f_a9f_a0_s(void)
{
	return "ui/NPC_None.png";
}

bool f_aa1_a0_b(void)
{
	return false;
}

void f_aa3_a0_v(void)
{
	g1 = false;
	f_a77_a0_v();
}

void f_aaa_a1_v(object a0)
{
	if (g1) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			@WorkWithCorpse(a0);
		}
		return;
	} else {
		if (1000 == t7{a0}) {
			if (!f_8d9_a1_b(a0)) {
				return;
			}
			t0{a0};
			f_909_a1_v(a0);
		}
	}
}

bool f_ad0_a0_b(void)
{
	return false;
}

bool f_ad2_a1_b(object a0)
{
	return true;
}

bool f_ad5_a2_b(object a0, object a1)
{
	string L0;
	bool L1;
	if (!f_7bd_a2_b(a1, "class")) {
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
	if (L1 || f_7b5_a1_f(a0) <= 250000.0) {
		@ReportReputationChange(a0, a1, -0.30000001192092896);
		return true;
	}
	return false;
}

void f_b03_a1_v(object a0)
{
	g1 = true;
	@SetRTEnvelope(50, 40);
	f_a67_a0_v();
}

