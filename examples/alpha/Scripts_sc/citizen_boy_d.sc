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
		f_8b1_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_80d_a1_i(a0);
		if (L0 > 0) {
			f_810_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_816_a0_v();
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
		f_866_a0_v();
		f_a3_a0_v();
		for (; ; ) {
			tv2 = false;
			f_178_a0_v();
		}
	}

	void f_a3_a0_v(void)
	{
		if (!f_77e_a0_b()) {
			f_816_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_80d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_137_a0_v();
			}
			f_810_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_7e4_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_137_a0_v();
			}
			f_7ee_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_883_a2_b(a0, a1)) {
			int L0;
			L0 = f_7f6_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_137_a0_v();
				}
				f_7fd_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_803_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_137_a0_v();
			}
			f_806_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_808_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_137_a0_v();
			}
			f_80b_a2_v(a1, a0);
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
		f_816_a0_v();
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
		if (!f_718_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_7d9_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_13f_a0_v();
			}
			f_7dc_a1_v(a0);
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
		L0 = f_80d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_280_a0_v();
			}
			f_810_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_7e4_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_280_a0_v();
			}
			f_7ee_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_883_a2_b(a0, a1)) {
			int L0;
			L0 = f_7f6_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_280_a0_v();
				}
				f_7fd_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_803_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_280_a0_v();
			}
			f_806_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_808_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_280_a0_v();
			}
			f_80b_a2_v(a1, a0);
		}
	}

	void OnUnload(void)
	{
		f_280_a0_v();
		f_816_a0_v();
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_77e_a0_b()) {
			return;
		}
		L0 = f_7c8_a0_i();
		L1 = 0;
		for (; L1 < 5 && f_77e_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_7c1_a1_s(L3));
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
		if (f_879_a1_b(a0)) {
			f_2ab_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_87e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_2dc_a0_v();
			}
			f_881_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_2dc_a0_v();
		f_816_a0_v();
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
			if (f_646_a1_f(a0) <= 90000.0) {
				f_6b0_a2_f(a0, 0.20000000298023224);
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
		L0 = f_87e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_38e_a0_v();
			}
			f_881_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_38e_a0_v();
		f_816_a0_v();
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
		return f_718_a1_b(a0);
	}

	string f_3a5_a0_s(void)
	{
		return "run";
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
		f_3b5_a3_v(a0, true, 180.0);
	}

	float f_3af_a2_f(object a0, int a1)
	{
		return 0.029999999329447746;
	}

	int f_3b2_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_3b5_a3_v(object a0, bool a1, float a2)
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
		for (; f_718_a1_b(tv0) && !tv3; ) {
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
						f_773_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						@StopAsync();
						L6 = true;
					}
					@rand(L9);
					if (L9 < 0.6000000238418579 || f_56d_a0_b()) {
						@Face(tv0);
						@PlayAnimation("all", "attack_stay");
						f_511_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_56d_a0_b()) {
							if (!f_718_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L3);
							@GetPFPosition(L4);
							L7 = L3 - L4;
							L8 = L7 | L7;
							if (L8 < a2 * a2) {
								if (!f_4a9_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_4a9_a1_b(a2)) {
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

	void f_482_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_3af_a2_f(L0, a1);
			L2 = f_670_a3_f(L0, L1, f_3b2_a2_i(L0, a1));
			@ReportHit(tv0, f_598_a0_i(), L2, L1);
			f_59a_a2_v(L0, L2);
		}
	}

	bool f_4a9_a1_b(float a0)
	{
		int L0;
		bool L1;
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_578_a0_v();
		if (!f_718_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_482_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			if (!f_718_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_482_a2_v(a0, L0);
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		f_4f9_a1_b(0.75);
		@StopAsync();
		return true;
	}

	bool f_4f9_a1_b(float a0)
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
				if (f_539_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
		}
		return false;
	}

	bool f_511_a1_b(float a0)
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
			if (f_539_a0_b()) {
				return true;
			}
			if (!f_718_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_4a9_a1_b(a0);
				return true;
			}
			@sync();
		}
		return false;
	}

	bool f_539_a0_b(void)
	{
		if (!f_718_a1_b(tv0)) {
			return false;
		}
		if (f_56d_a0_b()) {
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
				f_55a_a0_v();
				return true;
			}
		}
		return false;
	}

	void f_55a_a0_v(void)
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

	bool f_56d_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_578_a0_v(void)
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
		if (L0 < f_59e_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv4 = f_59c_a0_i();
		}
	}

	int f_598_a0_i(void)
	{
		return 0;
	}

	void f_59a_a2_v(object a0, float a1)
	{
	}

	int f_59c_a0_i(void)
	{
		return 1;
	}

	float f_59e_a0_f(void)
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
		f_623_a0_v();
		f_816_a0_v();
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
			if (!f_633_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_63a_a0_s(), f_63c_a0_s());
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
		if (!f_633_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_623_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_623_a0_v();
		global.OnDeath(a0);
	}
}

bool f_633_a1_b(object a0)
{
	return f_718_a1_b(a0);
}

string f_63a_a0_s(void)
{
	return "walk";
}

string f_63c_a0_s(void)
{
	return "run";
}

string f_63e_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

float f_646_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_64e_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_65a_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_64e_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_78a_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_670_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_64e_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_64e_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_63e_a1_s(a2);
	if (!f_64e_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_783_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_78a_a3_f(L4 - L5, 0, 1));
	return L5;
}

float f_6b0_a2_f(object a0, float a1)
{
	if (!f_64e_a2_b(a0, "disease")) {
		return 0;
	}
	if (f_64e_a2_b(a0, "armor_disease")) {
		int L0;
		a0->GetProperty("armor_disease", L0);
		if (L0 < 100) {
			a1 = a1 * (1 - L0 / 100.0);
		} else {
			return 0;
		}
	}
	float L1;
	if (f_64e_a2_b(a0, "immunity")) {
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
	f_65a_a5_b(a0, "disease", L1, 0, 1);
	return a1;
}

bool f_6ef_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_6f4_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_6ef_a1_b(a0)) {
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

bool f_718_a1_b(object a0)
{
	int L0;
	if (!f_6f4_a1_b(a0)) {
		return false;
	}
	if (!f_64e_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_730_a3_v(object a0, int a1, float a2)
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

void f_773_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_77e_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

float f_783_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_78a_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_795_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_79e_a1_v(object a0)
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
	f_79e_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_730_a3_v(a0, a1, a2);
}

string f_7c1_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_7c8_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_7c1_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_7d9_a1_i(object a0)
{
	return 2;
}

void f_7dc_a1_v(object a0)
{
	t3{a0};
}

int f_7e4_a1_i(object a0)
{
	return f_718_a1_b(a0) ? 2 : 0;
}

void f_7ee_a1_v(object a0)
{
	t5{a0};
}

int f_7f6_a1_i(object a0)
{
	return f_7e4_a1_i(a0);
}

void f_7fd_a1_v(object a0)
{
	f_7ee_a1_v(a0);
}

int f_803_a1_i(object a0)
{
	return 0;
}

void f_806_a1_v(object a0)
{
}

int f_808_a2_i(string a0, object a1)
{
	return 0;
}

void f_80b_a2_v(string a0, object a1)
{
}

int f_80d_a1_i(object a0)
{
	return 2;
}

void f_810_a1_v(object a0)
{
	f_86e_a1_v(a0);
}

void f_816_a0_v(void)
{
}

void f_817_a2_v(int a0, int a1)
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

void f_835_a1_v(bool a0)
{
	bool L0;
	int L1;
	@ClearSubContainer(0);
	f_817_a2_v(0, 10 + f_795_a0_i() * 10);
	@irand(L1, 4);
	if (L1 == 0) {
		@AddItem(L0, f_861_a1_i("hook"), 0, 1);
	}
	@irand(L1, 10);
	if (L1 == 0) {
		@AddItem(L0, f_861_a1_i("watch"), 0, 1);
	}
}

int f_861_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_866_a0_v(void)
{
	g0 = false;
	f_835_a1_v(true);
}

void f_86e_a1_v(object a0)
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

bool f_879_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

int f_87e_a1_i(object a0)
{
	return 0;
}

void f_881_a1_v(object a0)
{
}

bool f_883_a2_b(object a0, object a1)
{
	string L0;
	bool L1;
	if (!f_64e_a2_b(a1, "class")) {
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
	if (L1 || f_646_a1_f(a0) <= 250000.0) {
		@ReportReputationChange(a0, a1, -0.30000001192092896);
		return true;
	}
	return false;
}

void f_8b1_a1_v(object a0)
{
	g0 = true;
	@SetRTEnvelope(50, 40);
}

