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
event OnStopSee 2;
event OnCollision 10;
event OnHit2 43;

var bool g0;

task t0
{
	void init(object a0)
	{
		disable OnUse;
		f_21_a1_v(a0);
		f_b4e_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_abf_a1_i(a0);
		if (L0 > 0) {
			f_ac2_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_ac8_a0_v();
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
			f_7ce_a1_v(L4);
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
		f_7ce_a1_v(a0);
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
		f_b0f_a0_v();
		f_be_a0_v();
		for (; ; ) {
			int L0;
			@irand(L0, 2);
			if (L0 == 0) {
				tv0 = true;
				f_b24_a0_v();
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
		if (!f_7be_a0_b()) {
			f_ac8_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_abf_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_188_a0_v();
			}
			f_ac2_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_9fd_a1_v(a0);
		L0 = f_a38_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_188_a0_v();
			}
			f_a42_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_b44_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_a95_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_188_a0_v();
				}
				f_a9c_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_ac9_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_188_a0_v();
			}
			f_ad9_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_9a7_a2_b(a0, a1)) {
			f_188_a0_v();
			f_9c7_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_adf_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_188_a0_v();
				}
				f_ae2_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_a0a_a1_b(a0)) {
			f_188_a0_v();
			f_a1a_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (tv0) {
			return;
		}
		if (f_9e0_a1_b(a0)) {
			f_188_a0_v();
			f_9f7_a1_v(a0);
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
		f_ac8_a0_v();
	}

	void f_188_a0_v(void)
	{
		@KillTimer(110);
		tv1 = false;
		if (tv0) {
			f_b3f_a0_v();
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
		L1 = f_a27_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_188_a0_v();
			}
			f_a30_a1_v(a0);
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
		L1 = f_68b_a1_V(tv0);
		if (f_82c_a2_f(L0, L1) < 0) {
			f_7b3_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_7b3_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_1f2_a0_v(void)
	{
		f_7c3_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_abf_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_286_a0_v();
			}
			f_ac2_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_9fd_a1_v(a0);
		L0 = f_a38_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_286_a0_v();
			}
			f_a42_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_b44_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_a95_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_286_a0_v();
				}
				f_a9c_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_ac9_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_286_a0_v();
			}
			f_ad9_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_9a7_a2_b(a0, a1)) {
			f_286_a0_v();
			f_9c7_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_adf_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_286_a0_v();
				}
				f_ae2_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_a0a_a1_b(a0)) {
			f_286_a0_v();
			f_a1a_a1_v(a0);
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
		if (!f_71d_a1_b(tv0)) {
			f_286_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_68b_a1_V(tv0);
		if (f_82c_a2_f(L0, L1) < 0.4999999701976776) {
			f_7b3_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_286_a0_v();
		f_ac8_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_9e0_a1_b(a0)) {
			f_286_a0_v();
			f_9f7_a1_v(a0);
		}
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
		f_2e0_a3_v(a0, true, 180.0);
	}

	float f_2da_a2_f(object a0, int a1)
	{
		return 0.10000000149011612;
	}

	int f_2dd_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_2e0_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_3c5_a0_v();
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
			@SendPlayerEnemy(a0, f_7f7_a0_o());
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 400.0 + L0;
		while (f_71d_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			f_562_a0_v();
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
						f_7b3_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_562_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_71d_a1_b(tv0)) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.25 || f_537_a0_b()) {
						@Face(tv0);
						f_569_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_4b3_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_562_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_537_a0_b()) {
							if (!f_71d_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_40f_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_40f_a1_b(a2)) {
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

	void f_3c5_a0_v(void)
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

	void f_3e8_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_2da_a2_f(L0, a1);
			L2 = f_6ab_a3_f(L0, L1, f_2dd_a2_i(L0, a1));
			@ReportHit(tv0, f_567_a0_i(), L2, L1);
			f_56e_a2_v(L0, L2);
		}
	}

	bool f_40f_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_562_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		f_860_a0_v();
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_542_a0_v();
		if (!f_71d_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_3e8_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			f_860_a0_v();
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_562_a0_v();
			if (!f_71d_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_3e8_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				f_860_a0_v();
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_562_a0_v();
				if (!f_71d_a1_b(tv0)) {
					@StopAsync();
					return false;
				}
				f_3e8_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_570_a0_b()) {
			f_498_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_498_a1_b(float a0)
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
				if (f_4fa_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_562_a0_v();
		}
		return false;
	}

	bool f_4b3_a1_b(float a0)
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
			if (f_4fa_a0_b()) {
				return true;
			}
			if (!f_71d_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_40f_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_562_a0_v();
		return false;
	}

	bool f_4de_a0_b(void)
	{
		if (!f_71d_a1_b(tv0)) {
			return false;
		}
		if (f_537_a0_b()) {
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

	bool f_4fa_a0_b(void)
	{
		if (f_4de_a0_b() && f_50a_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_50a_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_68b_a1_V(tv0), tv4);
			if (L2 < tv4) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_562_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_4de_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_537_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_542_a0_v(void)
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
		if (L0 < f_574_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_572_a0_i();
		}
	}

	void f_562_a0_v(void)
	{
		f_857_a1_v(tv0);
	}

	int f_567_a0_i(void)
	{
		return 0;
	}

	void f_569_a0_v(void)
	{
		f_7ce_a1_v("attack_stay");
	}

	void f_56e_a2_v(object a0, float a1)
	{
	}

	bool f_570_a0_b(void)
	{
		return true;
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

task t4
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_5bc_a0_v();
		f_ac8_a0_v();
	}

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_857_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_7c3_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_69a_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_7f7_a0_o());
		}
		L1 = f_5e6_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_857_a1_v(tv1);
		} else {
			f_64c_a1_v(a0);
		}
	}

	void f_5bc_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_662_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_7c3_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_5e6_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_672_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_679_a0_s(), f_67b_a0_s());
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

	void f_64c_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_672_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_662_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_5bc_a0_v();
		global.OnDeath(a0);
	}
}

bool f_672_a1_b(object a0)
{
	return f_71d_a1_b(a0);
}

string f_679_a0_s(void)
{
	return "walk";
}

string f_67b_a0_s(void)
{
	return "run";
}

string f_67d_a1_s(int a0)
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

Vector f_68b_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_692_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_69a_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_69f_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_6ab_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_69f_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_69f_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_67d_a1_s(a2);
	if (!f_69f_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_807_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_80e_a3_f(L4 - L5, 0, 1));
	if (f_69a_a1_b(a0)) {
		f_83d_a1_v(-L5);
	}
	return L5;
}

bool f_6f4_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_6f9_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_6f4_a1_b(a0)) {
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

bool f_71d_a1_b(object a0)
{
	int L0;
	if (!f_6f9_a1_b(a0)) {
		return false;
	}
	if (!f_69f_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_735_a1_v(object a0)
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

void f_761_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_7fd_a1_V(f_68b_a1_V(a0));
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
			f_7a5_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_735_a1_v(a0);
}

void f_7a5_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_735_a1_v(a0);
}

void f_7b3_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_7be_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_7c3_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_7ce_a1_v(string a0)
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

object f_7f7_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_7fd_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_807_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_80e_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_819_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_822_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_82c_a2_f(Vector a0, Vector a1)
{
	return f_819_a2_f(a0, a1) / (f_822_a1_f(a0) * f_822_a1_f(a1));
}

void f_83d_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

int f_84e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_857_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_860_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_7f7_a0_o(), L0);
}

int f_86b_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_871_a1_v(object a0)
{
	if (f_86b_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_87e_a2_v(int a0, int a1)
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
	@AddItem(L1, f_975_a1_i("Money"), 0, L0);
}

void f_89d_a1_v(string a0)
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

void f_8ae_a0_v(void)
{
	if (f_86b_a0_i() != 1) {
		return;
	}
	f_89d_a1_v("liver");
	f_89d_a1_v("kidney");
	f_89d_a1_v("heart");
	f_89d_a1_v("blood");
}

void f_8c6_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_87e_a2_v(0, 100 + f_84e_a0_i() * 100);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_975_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_975_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_975_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_975_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_975_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_975_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_87e_a2_v(0, 50 + f_84e_a0_i() * 50);
		@irand(L0, 7);
		if (L0 == 0) {
			@AddItem(L1, f_975_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_975_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_975_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_975_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_975_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_975_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_975_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_97a_a1_v(object a0)
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
	f_97a_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_761_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_7a5_a5_v(a0, a1, a2, a4, a5);
}

bool f_9a7_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_ae4_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_ae9_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_afe_a1_b(a0);
			}
		}
	}
	return false;
}

void f_9c7_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_ae7_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_af8_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_b01_a1_v(a0);
			}
		}
	}
}

bool f_9e0_a1_b(object a0)
{
	if (f_ae4_a1_b(a0) && f_69a_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_9f7_a1_v(object a0)
{
	f_ae7_a1_v(a0);
}

void f_9fd_a1_v(object a0)
{
	if (f_69a_a1_b(a0)) {
		@ReportReputationChange(a0, f_7f7_a0_o(), -0.029999999329447746);
	}
}

bool f_a0a_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_b03_a1_b(L0);
	}
	return false;
}

void f_a1a_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_b06_a1_v(L0);
	}
}

int f_a27_a1_i(object a0)
{
	return f_b42_a0_b() ? 2 : 0;
}

void f_a30_a1_v(object a0)
{
	t2{a0};
}

int f_a38_a1_i(object a0)
{
	return f_71d_a1_b(a0) ? 2 : 0;
}

void f_a42_a1_v(object a0)
{
	t3{a0};
}

bool f_a4a_a2_b(object a0, bool a1)
{
	string L0;
	string L1;
	if (!f_69f_a2_b(a0, "class")) {
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

int f_a95_a2_i(object a0, bool a1)
{
	return f_a38_a1_i(a0);
}

void f_a9c_a1_v(object a0)
{
	f_a42_a1_v(a0);
}

bool f_aa2_a4_b(object a0, object a1, float a2, bool a3)
{
	bool L0;
	if (!f_a4a_a2_b(a1, !a3)) {
		return false;
	}
	@CanSee(L0, a0);
	if (L0 || f_692_a1_f(a0) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_abf_a1_i(object a0)
{
	return 2;
}

void f_ac2_a1_v(object a0)
{
	f_b17_a1_v(a0);
}

void f_ac8_a0_v(void)
{
}

int f_ac9_a1_i(object a0)
{
	bool L0;
	@Trace("Received steal");
	@CanSee(L0, a0);
	if (L0) {
		return f_a38_a1_i(a0);
	}
	return 0;
}

void f_ad9_a1_v(object a0)
{
	f_a42_a1_v(a0);
}

int f_adf_a2_i(string a0, object a1)
{
	return 0;
}

void f_ae2_a2_v(string a0, object a1)
{
}

bool f_ae4_a1_b(object a0)
{
	return false;
}

void f_ae7_a1_v(object a0)
{
}

bool f_ae9_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_692_a1_f(a0) <= 2250000;
}

void f_af8_a1_v(object a0)
{
	f_a30_a1_v(a0);
}

bool f_afe_a1_b(object a0)
{
	return false;
}

void f_b01_a1_v(object a0)
{
}

bool f_b03_a1_b(object a0)
{
	return false;
}

void f_b06_a1_v(object a0)
{
}

string f_b08_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

void f_b0f_a0_v(void)
{
	g0 = false;
	f_8c6_a1_v(true);
}

void f_b17_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_871_a1_v(a0);
		}
		return;
	}
}

void f_b24_a0_v(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_b08_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	int L2;
	@irand(L2, L0);
	@PlayAnimation("all", f_b08_a1_s(L2));
	@WaitForAnimEnd();
}

void f_b3f_a0_v(void)
{
	@StopAnimation();
}

bool f_b42_a0_b(void)
{
	return true;
}

bool f_b44_a3_b(object a0, object a1, bool a2)
{
	return f_aa2_a4_b(a0, a1, 500.0, a2);
}

void f_b4e_a1_v(object a0)
{
	if (f_69a_a1_b(a0)) {
		@ReportReputationChange(a0, f_7f7_a0_o(), -0.07000000029802322, true);
		f_8c6_a1_v(true);
	}
	f_8ae_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

