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
event OnStopSee 2;
event OnHit2 43;

var bool g0;

task t0
{
	void init(object a0)
	{
		disable OnUse;
		f_21_a1_v(a0);
		f_adf_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_aae_a1_i(a0);
		if (L0 > 0) {
			f_ab1_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_ab3_a0_v();
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
			f_803_a1_v(L4);
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
		f_803_a1_v(a0);
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
		f_ac8_a0_v();
		f_ab_a0_v();
		for (; ; ) {
			tv2 = false;
			f_1b0_a0_v();
		}
	}

	void f_ab_a0_v(void)
	{
		if (!f_7f3_a0_b()) {
			f_ab3_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_aae_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_16f_a0_v();
			}
			f_ab1_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_9cb_a1_v(a0);
		L0 = f_a1d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_16f_a0_v();
			}
			f_a27_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_ad5_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_a7a_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_16f_a0_v();
				}
				f_a81_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_aa4_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_16f_a0_v();
			}
			f_aa7_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_975_a2_b(a0, a1)) {
			f_16f_a0_v();
			f_995_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_aa9_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_16f_a0_v();
				}
				f_aac_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_9d8_a1_b(a0)) {
			f_16f_a0_v();
			f_9e8_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_9ae_a1_b(a0)) {
			f_16f_a0_v();
			f_9c5_a1_v(a0);
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
		f_ab3_a0_v();
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
		if (!f_752_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_a0d_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_177_a0_v();
			}
			f_a17_a1_v(a0);
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
		L0 = f_aae_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_302_a0_v();
			}
			f_ab1_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_9cb_a1_v(a0);
		L0 = f_a1d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_302_a0_v();
			}
			f_a27_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_ad5_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_a7a_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_302_a0_v();
				}
				f_a81_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_aa4_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_302_a0_v();
			}
			f_aa7_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_975_a2_b(a0, a1)) {
			f_302_a0_v();
			f_995_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_aa9_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_302_a0_v();
				}
				f_aac_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_9d8_a1_b(a0)) {
			f_302_a0_v();
			f_9e8_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_302_a0_v();
		f_ab3_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_9ae_a1_b(a0)) {
			f_302_a0_v();
			f_9c5_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_7f3_a0_b()) {
			return;
		}
		L0 = f_9fc_a0_i();
		for (L1 = 0; L1 < 5 && f_7f3_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_9f5_a1_s(L3));
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
	var int tv1;
	var int tv2;
	var bool tv3;
	var float tv4;
	var int tv5;

	void init(object a0)
	{
		f_315_a3_v(a0, true, 180.0);
	}

	float f_30f_a2_f(object a0, int a1)
	{
		return 0.05000000074505806;
	}

	int f_312_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_315_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_3fa_a0_v();
		tv5 = 0;
		if (a0->FuncExist("@GetAttackDistance", 1)) {
			a0->GetAttackDistance(L0);
			L0 = L0 + 50;
		} else {
			L0 = a2;
		}
		if (L0 >= 150) {
			L0 = 150;
		}
		tv3 = false;
		tv0 = a0;
		@IsPlayerActor(tv0, L3);
		if (L3) {
			@PlayGlobalMusic("attack");
			@SendPlayerEnemy(a0, f_82c_a0_o());
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 400.0 + L0;
		while (f_752_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			f_597_a0_v();
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L6 = L1 - L2;
			L7 = L6 | L6;
			if (L7 >= L5 * L5) {
				if (!t4{tv0, L0, 3000.0, true, false}) {
					break;
				}
				L4 = false;
			} else {
				if (L7 >= a2 * a2) {
					Vector L8;
					bool L9;
					float L10;
					tv0->GetPFPosition(L8);
					@CanReachByPF(L9, L8);
					if (!L9) {
						if (!t4{tv0, L0, 3000.0, true, false}) {
							break;
						}
						L4 = false;
						continue;
					}
					if (!L4) {
						f_7e8_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_597_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_752_a1_b(tv0)) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.25 || f_56c_a0_b()) {
						@Face(tv0);
						f_59e_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_4e8_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_597_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_56c_a0_b()) {
							if (!f_752_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_444_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_444_a1_b(a2)) {
						break;
					}
					L4 = true;
				}
			}
		}
		@WaitForAnimEnd();
		if (tv3) {
			return;
		}
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if (L3) {
			@Sleep(2.0);
		}
	}

	void f_3fa_a0_v(void)
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
		Vector L2;
		@GetAnimationOffset(L2, "all", "bjump");
		tv4 = -L2.z;
	}

	void f_41d_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_30f_a2_f(L0, a1);
			L2 = f_6e0_a3_f(L0, L1, f_312_a2_i(L0, a1));
			@ReportHit(tv0, f_59c_a0_i(), L2, L1);
			f_5a3_a2_v(L0, L2);
		}
	}

	bool f_444_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_597_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		f_86a_a0_v();
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_577_a0_v();
		if (!f_752_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_41d_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			f_86a_a0_v();
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_597_a0_v();
			if (!f_752_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_41d_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				f_86a_a0_v();
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_597_a0_v();
				if (!f_752_a1_b(tv0)) {
					@StopAsync();
					return false;
				}
				f_41d_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_5a5_a0_b()) {
			f_4cd_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_4cd_a1_b(float a0)
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
				if (f_52f_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_597_a0_v();
		}
		return false;
	}

	bool f_4e8_a1_b(float a0)
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
			if (f_52f_a0_b()) {
				return true;
			}
			if (!f_752_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_444_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_597_a0_v();
		return false;
	}

	bool f_513_a0_b(void)
	{
		if (!f_752_a1_b(tv0)) {
			return false;
		}
		if (f_56c_a0_b()) {
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
			return L3 <= L4 * L4;
		}
		return false;
	}

	bool f_52f_a0_b(void)
	{
		if (f_513_a0_b() && f_53f_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_53f_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_6c0_a1_V(tv0), tv4);
			if (L2 < tv4) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_597_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_513_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_56c_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_577_a0_v(void)
	{
		float L0;
		if (!tv2) {
			return;
		}
		if (tv5) {
			tv5 = tv5 + -1;
			if (tv5 > 0) {
				return;
			}
		}
		@rand(L0);
		if (L0 < f_5a9_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_5a7_a0_i();
		}
	}

	void f_597_a0_v(void)
	{
		f_861_a1_v(tv0);
	}

	int f_59c_a0_i(void)
	{
		return 0;
	}

	void f_59e_a0_v(void)
	{
		f_803_a1_v("attack_stay");
	}

	void f_5a3_a2_v(object a0, float a1)
	{
	}

	bool f_5a5_a0_b(void)
	{
		return true;
	}

	int f_5a7_a0_i(void)
	{
		return 1;
	}

	float f_5a9_a0_f(void)
	{
		return 0.5;
	}
}

task t4
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_5f1_a0_v();
		f_ab3_a0_v();
	}

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_861_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_7f8_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_6cf_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_82c_a0_o());
		}
		L1 = f_61b_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_861_a1_v(tv1);
		} else {
			f_681_a1_v(a0);
		}
	}

	void f_5f1_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_697_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_7f8_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_61b_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_6a7_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_6ae_a0_s(), f_6b0_a0_s());
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

	void f_681_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_6a7_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_697_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_5f1_a0_v();
		global.OnDeath(a0);
	}
}

bool f_6a7_a1_b(object a0)
{
	return f_752_a1_b(a0);
}

string f_6ae_a0_s(void)
{
	return "walk";
}

string f_6b0_a0_s(void)
{
	return "run";
}

string f_6b2_a1_s(int a0)
{
	if (a0 == 2) {
		return "fire";
	} else {
		if (a0 == 1) {
			return "bullet";
		}
	}
	return "phys";
}

Vector f_6c0_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_6c7_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_6cf_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_6d4_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_6e0_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_6d4_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_6d4_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_6b2_a1_s(a2);
	if (!f_6d4_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_83c_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_843_a3_f(L4 - L5, 0, 1));
	if (f_6cf_a1_b(a0)) {
		f_84e_a1_v(-L5);
	}
	return L5;
}

bool f_729_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_72e_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_729_a1_b(a0)) {
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

bool f_752_a1_b(object a0)
{
	int L0;
	if (!f_72e_a1_b(a0)) {
		return false;
	}
	if (!f_6d4_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_76a_a1_v(object a0)
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

void f_796_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_832_a1_V(f_6c0_a1_V(a0));
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
			f_7da_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_76a_a1_v(a0);
}

void f_7da_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_76a_a1_v(a0);
}

void f_7e8_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_7f3_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_7f8_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_803_a1_v(string a0)
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

object f_82c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_832_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_83c_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_843_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_84e_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(15, L0);
}

int f_858_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_861_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_86a_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_82c_a0_o(), L0);
}

void f_875_a2_v(int a0, int a1)
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
	@AddItem(L1, f_943_a1_i("Money"), 0, L0);
}

void f_894_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_875_a2_v(0, 100 + f_858_a0_i() * 100);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_943_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_943_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_943_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_943_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_943_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_943_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_875_a2_v(0, 50 + f_858_a0_i() * 50);
		@irand(L0, 7);
		if (L0 == 0) {
			@AddItem(L1, f_943_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_943_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_943_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_943_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_943_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_943_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_943_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_948_a1_v(object a0)
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
	f_948_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_796_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_7da_a5_v(a0, a1, a2, a4, a5);
}

bool f_975_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_ab4_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_ab9_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_abe_a1_b(a0);
			}
		}
	}
	return false;
}

void f_995_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_ab7_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_abc_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_ac1_a1_v(a0);
			}
		}
	}
}

bool f_9ae_a1_b(object a0)
{
	if (f_ab4_a1_b(a0) && f_6cf_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_9c5_a1_v(object a0)
{
	f_ab7_a1_v(a0);
}

void f_9cb_a1_v(object a0)
{
	if (f_6cf_a1_b(a0)) {
		@ReportReputationChange(a0, f_82c_a0_o(), -0.05000000074505806);
	}
}

bool f_9d8_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_ac3_a1_b(L0);
	}
	return false;
}

void f_9e8_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_ac6_a1_v(L0);
	}
}

string f_9f5_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_9fc_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_9f5_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_a0d_a1_i(object a0)
{
	return f_ad0_a1_b(a0) ? 2 : 0;
}

void f_a17_a1_v(object a0)
{
	f_a27_a1_v(a0);
}

int f_a1d_a1_i(object a0)
{
	return f_752_a1_b(a0) ? 2 : 0;
}

void f_a27_a1_v(object a0)
{
	t3{a0};
}

bool f_a2f_a2_b(object a0, bool a1)
{
	string L0;
	string L1;
	if (!f_6d4_a2_b(a0, "class")) {
		return false;
	}
	@GetProperty("class", L0);
	a0->GetProperty("class", L1);
	if (!a1 && L0 == L1) {
		return true;
	}
	if (L1 == "rat") {
		return false;
	} else {
		if (L1 == "rat_big") {
			return false;
		} else {
			if (L1 == "dog") {
				return false;
			} else {
				if (L1 == "grabitel") {
					return false;
				} else {
					if (L1 == "bomber") {
						return false;
					} else {
						if (L1 == "sanitar") {
							return false;
						} else {
							if (L1 == "hunter") {
								return false;
							} else {
								if (L1 == "soldier") {
									return false;
								}
							}
						}
					}
				}
			}
		}
	}
	return true;
}

int f_a7a_a2_i(object a0, bool a1)
{
	return f_a1d_a1_i(a0);
}

void f_a81_a1_v(object a0)
{
	f_a27_a1_v(a0);
}

bool f_a87_a4_b(object a0, object a1, float a2, bool a3)
{
	bool L0;
	if (!f_a2f_a2_b(a1, !a3)) {
		return false;
	}
	@CanSee(L0, a0);
	if (L0 || f_6c7_a1_f(a0) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_aa4_a1_i(object a0)
{
	return 0;
}

void f_aa7_a1_v(object a0)
{
}

int f_aa9_a2_i(string a0, object a1)
{
	return 0;
}

void f_aac_a2_v(string a0, object a1)
{
}

int f_aae_a1_i(object a0)
{
	return 0;
}

void f_ab1_a1_v(object a0)
{
}

void f_ab3_a0_v(void)
{
}

bool f_ab4_a1_b(object a0)
{
	return false;
}

void f_ab7_a1_v(object a0)
{
}

bool f_ab9_a1_b(object a0)
{
	return false;
}

void f_abc_a1_v(object a0)
{
}

bool f_abe_a1_b(object a0)
{
	return false;
}

void f_ac1_a1_v(object a0)
{
}

bool f_ac3_a1_b(object a0)
{
	return false;
}

void f_ac6_a1_v(object a0)
{
}

void f_ac8_a0_v(void)
{
	g0 = false;
	f_894_a1_v(true);
}

bool f_ad0_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_ad5_a3_b(object a0, object a1, bool a2)
{
	return f_a87_a4_b(a0, a1, 700.0, a2);
}

void f_adf_a1_v(object a0)
{
	if (f_6cf_a1_b(a0)) {
		@ReportReputationChange(a0, f_82c_a0_o(), -0.05000000074505806, true);
	}
	g0 = true;
	@SetRTEnvelope(50, 40);
}

