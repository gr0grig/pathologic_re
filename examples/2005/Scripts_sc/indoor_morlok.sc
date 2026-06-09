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
event OnTimer 7;
event OnStopSee 2;
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
		f_9ae_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_969_a1_i(a0);
		if (L0 > 0) {
			f_96c_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_972_a0_v();
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
			f_7c0_a1_v(L4);
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
		f_7c0_a1_v(a0);
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

task t1
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_969_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_191_a0_v();
			}
			f_96c_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_8fe_a1_v(a0);
		L0 = f_940_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_191_a0_v();
			}
			f_94a_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_998_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_952_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_191_a0_v();
				}
				f_959_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_95f_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_191_a0_v();
			}
			f_962_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_8a8_a2_b(a0, a1)) {
			f_191_a0_v();
			f_8c8_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_964_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_191_a0_v();
				}
				f_967_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_90b_a1_b(a0)) {
			f_191_a0_v();
			f_91b_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_191_a0_v();
		f_972_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_8e1_a1_b(a0)) {
			f_191_a0_v();
			f_8f8_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_796_a0_b()) {
			return;
		}
		L0 = f_92f_a0_i();
		for (L1 = 0; L1 < 5 && f_796_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_928_a1_s(L3));
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
			if (!f_18f_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_18f_a0_b(void)
	{
		return true;
	}

	void f_191_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t2
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;
	var float tv4;
	var int tv5;

	void init(object a0)
	{
		f_1a4_a3_v(a0, true, 180.0);
	}

	float f_19e_a2_f(object a0, int a1)
	{
		return 0.05000000074505806;
	}

	int f_1a1_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_1a4_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_289_a0_v();
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
			@SendPlayerEnemy(a0, f_7e9_a0_o());
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 400.0 + L0;
		while (f_6f5_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			f_426_a0_v();
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L6 = L1 - L2;
			L7 = L6 | L6;
			if (L7 >= L5 * L5) {
				if (!t3{tv0, L0, 3000.0, true, false}) {
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
						if (!t3{tv0, L0, 3000.0, true, false}) {
							break;
						}
						L4 = false;
						continue;
					}
					if (!L4) {
						f_78b_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_426_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_6f5_a1_b(tv0)) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.25 || f_3fb_a0_b()) {
						@Face(tv0);
						f_42d_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_377_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_426_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_3fb_a0_b()) {
							if (!f_6f5_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_2d3_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_2d3_a1_b(a2)) {
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

	void f_289_a0_v(void)
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

	void f_2ac_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_19e_a2_f(L0, a1);
			L2 = f_683_a3_f(L0, L1, f_1a1_a2_i(L0, a1));
			@ReportHit(tv0, f_42b_a0_i(), L2, L1);
			f_432_a2_v(L0, L2);
		}
	}

	bool f_2d3_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_426_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		f_823_a0_v();
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_406_a0_v();
		if (!f_6f5_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_2ac_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			f_823_a0_v();
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_426_a0_v();
			if (!f_6f5_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_2ac_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				f_823_a0_v();
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_426_a0_v();
				if (!f_6f5_a1_b(tv0)) {
					@StopAsync();
					return false;
				}
				f_2ac_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_434_a0_b()) {
			f_35c_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_35c_a1_b(float a0)
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
				if (f_3be_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_426_a0_v();
		}
		return false;
	}

	bool f_377_a1_b(float a0)
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
			if (f_3be_a0_b()) {
				return true;
			}
			if (!f_6f5_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_2d3_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_426_a0_v();
		return false;
	}

	bool f_3a2_a0_b(void)
	{
		if (!f_6f5_a1_b(tv0)) {
			return false;
		}
		if (f_3fb_a0_b()) {
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

	bool f_3be_a0_b(void)
	{
		if (f_3a2_a0_b() && f_3ce_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_3ce_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_66b_a1_V(tv0), tv4);
			if (L2 < tv4) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_426_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_3a2_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_3fb_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_406_a0_v(void)
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
		if (L0 < f_438_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_436_a0_i();
		}
	}

	void f_426_a0_v(void)
	{
		f_81a_a1_v(tv0);
	}

	int f_42b_a0_i(void)
	{
		return 0;
	}

	void f_42d_a0_v(void)
	{
		f_7c0_a1_v("attack_stay");
	}

	void f_432_a2_v(object a0, float a1)
	{
	}

	bool f_434_a0_b(void)
	{
		return true;
	}

	int f_436_a0_i(void)
	{
		return 1;
	}

	float f_438_a0_f(void)
	{
		return 0.5;
	}
}

task t3
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_480_a0_v();
		f_972_a0_v();
	}

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_81a_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_79b_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_672_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_7e9_a0_o());
		}
		L1 = f_4aa_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_81a_a1_v(tv1);
		} else {
			f_510_a1_v(a0);
		}
	}

	void f_480_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_526_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_79b_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_4aa_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_536_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_53d_a0_s(), f_53f_a0_s());
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

	void f_510_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_536_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_526_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_480_a0_v();
		global.OnDeath(a0);
	}

	bool f_536_a1_b(object a0)
	{
		return f_6f5_a1_b(a0);
	}

	string f_53d_a0_s(void)
	{
		return "walk";
	}

	string f_53f_a0_s(void)
	{
		return "run";
	}
}

maintask t4
{
	var bool tv0;
	var bool tv1;

	bool f_541_a0_b(void)
	{
		return true;
	}

	object f_543_a1_o(Vector a0)
	{
		object L0;
		@FindPathTo(L0, a0, 1, 1);
		return L0;
	}

	void init(void)
	{
		@SensePlayerOnly(true);
		f_994_a0_v();
		f_559_a0_v();
		for (; ; ) {
			f_606_a0_v();
		}
	}

	void f_559_a0_v(void)
	{
		if (!f_796_a0_b()) {
			f_972_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_969_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_64d_a0_v();
			}
			f_96c_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_8fe_a1_v(a0);
		L0 = f_940_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_64d_a0_v();
			}
			f_94a_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_998_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_952_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_64d_a0_v();
				}
				f_959_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_95f_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_64d_a0_v();
			}
			f_962_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_8a8_a2_b(a0, a1)) {
			f_64d_a0_v();
			f_8c8_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_964_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_64d_a0_v();
				}
				f_967_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_90b_a1_b(a0)) {
			f_64d_a0_v();
			f_91b_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_8e1_a1_b(a0)) {
			f_64d_a0_v();
			f_8f8_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_64d_a0_v();
		f_972_a0_v();
	}

	void f_606_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_641_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_543_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_541_a0_b(), L5);
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

	float f_641_a0_f(void)
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

	void f_64d_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_64d_a0_v();
		global.OnDeath(a0);
	}
}

string f_65d_a1_s(int a0)
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

Vector f_66b_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

bool f_672_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_677_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_683_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_677_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_677_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_65d_a1_s(a2);
	if (!f_677_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_7f9_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_800_a3_f(L4 - L5, 0, 1));
	if (f_672_a1_b(a0)) {
		f_810_a1_v(-L5);
	}
	return L5;
}

bool f_6cc_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_6d1_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_6cc_a1_b(a0)) {
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

bool f_6f5_a1_b(object a0)
{
	int L0;
	if (!f_6d1_a1_b(a0)) {
		return false;
	}
	if (!f_677_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_70d_a1_v(object a0)
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

void f_739_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_7ef_a1_V(f_66b_a1_V(a0));
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
			f_77d_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_70d_a1_v(a0);
}

void f_77d_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_70d_a1_v(a0);
}

void f_78b_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_796_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_79b_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_7a6_a3_v(string a0, int a1, int a2)
{
	if (f_80b_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_7b1_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_80b_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

void f_7c0_a1_v(string a0)
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

object f_7e9_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_7ef_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_7f9_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_800_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_80b_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

void f_810_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(15, L0);
}

void f_81a_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_823_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_7e9_a0_o(), L0);
}

int f_82e_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_834_a1_v(object a0)
{
	if (f_82e_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_841_a1_v(string a0)
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

void f_852_a0_v(void)
{
	if (f_82e_a0_i() != 1) {
		return;
	}
	f_841_a1_v("liver");
	f_841_a1_v("kidney");
	f_841_a1_v("heart");
	f_841_a1_v("blood");
}

void f_86a_a0_v(void)
{
	@ClearSubContainer(0);
	f_7b1_a4_v("rusk", 1, 1, 2);
	f_7a6_a3_v("peanut", 1, 4);
}

void f_87b_a1_v(object a0)
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
	f_87b_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_739_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_77d_a5_v(a0, a1, a2, a4, a5);
}

bool f_8a8_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_973_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_978_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_97d_a1_b(a0);
			}
		}
	}
	return false;
}

void f_8c8_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_976_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_97b_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_980_a1_v(a0);
			}
		}
	}
}

bool f_8e1_a1_b(object a0)
{
	if (f_973_a1_b(a0) && f_672_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_8f8_a1_v(object a0)
{
	f_976_a1_v(a0);
}

void f_8fe_a1_v(object a0)
{
	if (f_672_a1_b(a0)) {
		@ReportReputationChange(a0, f_7e9_a0_o(), -0.029999999329447746);
	}
}

bool f_90b_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_982_a1_b(L0);
	}
	return false;
}

void f_91b_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_985_a1_v(L0);
	}
}

string f_928_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_92f_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_928_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_940_a1_i(object a0)
{
	return f_6f5_a1_b(a0) ? 2 : 0;
}

void f_94a_a1_v(object a0)
{
	t2{a0};
}

int f_952_a2_i(object a0, bool a1)
{
	return f_940_a1_i(a0);
}

void f_959_a1_v(object a0)
{
	f_94a_a1_v(a0);
}

int f_95f_a1_i(object a0)
{
	return 0;
}

void f_962_a1_v(object a0)
{
}

int f_964_a2_i(string a0, object a1)
{
	return 0;
}

void f_967_a2_v(string a0, object a1)
{
}

int f_969_a1_i(object a0)
{
	return 2;
}

void f_96c_a1_v(object a0)
{
	f_987_a1_v(a0);
}

void f_972_a0_v(void)
{
}

bool f_973_a1_b(object a0)
{
	return false;
}

void f_976_a1_v(object a0)
{
}

bool f_978_a1_b(object a0)
{
	return false;
}

void f_97b_a1_v(object a0)
{
}

bool f_97d_a1_b(object a0)
{
	return false;
}

void f_980_a1_v(object a0)
{
}

bool f_982_a1_b(object a0)
{
	return false;
}

void f_985_a1_v(object a0)
{
}

void f_987_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_834_a1_v(a0);
		}
		return;
	}
}

void f_994_a0_v(void)
{
	g0 = false;
}

bool f_998_a3_b(object a0, object a1, bool a2)
{
	string L0;
	if (!f_677_a2_b(a1, "class")) {
		return false;
	}
	a1->GetProperty("class", L0);
	return L0 == "butcher" || L0 == "morlok";
}

void f_9ae_a1_v(object a0)
{
	if (f_672_a1_b(a0)) {
		@ReportReputationChange(a0, f_7e9_a0_o(), -0.07000000029802322, true);
		f_86a_a0_v();
	}
	f_852_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

