event OnUse 0;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnAttacked 17;
event OnTimer 7;
event OnSee 1;
event OnStopSee 2;
event OnCollision 10;
event OnHear 3;
event OnActorStuck 28;
event OnHit2 43;

var object g0;

task t0
{
	void init(object a0)
	{
		f_844_a0_v();
		f_82c_a0_v();
		f_c_a1_v(a0);
	}

	void f_c_a1_v(object a0)
	{
		disable OnUse;
		f_25_a1_v(a0);
		@SetRTEnvelope(50, 40);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_7ef_a1_v(a0);
		}
	}

	void f_25_a1_v(object a0)
	{
		if (a0 == null) {
			f_80_a1_v("fdie");
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
			f_73b_a1_v(L4);
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

	void f_80_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_73b_a1_v(a0);
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
	var bool tv0;
	var object tv1;
	var bool tv2;

	void OnAttacked(object a0)
	{
		f_909_a1_v(a0);
	}

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_7d5_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_725_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_5e6_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_764_a0_o());
		}
		L1 = f_10f_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_7d5_a1_v(tv1);
		} else {
			f_175_a1_v(a0);
		}
	}

	void f_e5_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_18b_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_725_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_10f_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_19b_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_1a2_a0_s(), f_1a4_a0_s());
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

	void f_175_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_19b_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_18b_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_e5_a0_v();
		global.OnDeath(a0);
	}

	bool f_19b_a1_b(object a0)
	{
		return f_67f_a1_b(a0);
	}

	string f_1a2_a0_s(void)
	{
		return "walk";
	}

	string f_1a4_a0_s(void)
	{
		return "run";
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
	var bool tv6;

	void init(object a0, bool a1)
	{
		f_220_a3_v(a0, a1, 180.0);
	}

	float f_1ae_a2_f(object a0, int a1)
	{
		return 0.20000000298023224;
	}

	int f_1b1_a2_i(object a0, int a1)
	{
		return 0;
	}

	void OnAttacked(object a0)
	{
		f_909_a1_v(a0);
	}

	bool f_1ba_a0_b(void)
	{
		if (f_67f_a1_b(tv0) && f_78e_a1_b(0.5)) {
			Vector L0;
			Vector L1;
			Vector L2;
			Vector L3;
			Vector L4;
			Vector L5;
			float L6;
			float L7;
			Vector L8;
			float L9;
			@GetPosition(L0);
			tv0->GetPosition(L1);
			@GetDirection(L2);
			L3 = f_76a_a1_V(L0 - L1);
			@GetAnimationOffset(L4, "all", "jump1");
			@GetAnimationOffset(L5, "all", "jump2");
			if (L4.z < L5.z) {
				L6 = -L5.z;
				L7 = -L4.z;
			} else {
				L6 = -L4.z;
				L7 = -L5.z;
			}
			@FindLongestDir(L8, L9, L3, 0.1745329350233078, 6, L7 * 3);
			if (L9 < L6) {
				@FindLongestDir(L8, L9, L3, 0.5235987901687622, 16, L7 * 3);
			}
			if (L9 >= L6) {
				@StopAsync();
				@SetDirection(-L8);
				tv6 = true;
				if (L9 >= L7) {
					int L10;
					@irand(L10, 2);
					@PlayAnimation("all", "jump" + (L10 + 1));
				} else {
					if (-L4.z <= L9) {
						@PlayAnimation("all", "jump1");
					} else {
						@PlayAnimation("all", "jump2");
					}
				}
				@WaitForAnimEnd();
				tv6 = false;
				return false;
			}
		}
		return true;
	}

	void f_220_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_305_a0_v();
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
			@SendPlayerEnemy(a0, f_764_a0_o());
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 300.0 + L0;
		while (f_67f_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			f_4a2_a0_v();
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L6 = L1 - L2;
			L7 = L6 | L6;
			if (L7 >= L5 * L5) {
				if (!t1{tv0, L0, 3000.0, true, false}) {
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
						if (!t1{tv0, L0, 3000.0, true, false}) {
							break;
						}
						L4 = false;
						continue;
					}
					if (!L4) {
						f_715_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_4a2_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_67f_a1_b(tv0)) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.6000000238418579 || f_477_a0_b()) {
						@Face(tv0);
						f_4a9_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_3f3_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_4a2_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_477_a0_b()) {
							if (!f_67f_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_34f_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_34f_a1_b(a2)) {
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

	void f_305_a0_v(void)
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

	void f_328_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_1ae_a2_f(L0, a1);
			L2 = f_60d_a3_f(L0, L1, f_1b1_a2_i(L0, a1));
			@ReportHit(tv0, f_4a7_a0_i(), L2, L1);
			f_4ae_a2_v(L0, L2);
		}
	}

	bool f_34f_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_4a2_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		f_7de_a0_v();
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_482_a0_v();
		if (!f_67f_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_328_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			f_7de_a0_v();
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_4a2_a0_v();
			if (!f_67f_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_328_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				f_7de_a0_v();
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_4a2_a0_v();
				if (!f_67f_a1_b(tv0)) {
					@StopAsync();
					return false;
				}
				f_328_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_1ba_a0_b()) {
			f_3d8_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_3d8_a1_b(float a0)
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
				if (f_43a_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_4a2_a0_v();
		}
		return false;
	}

	bool f_3f3_a1_b(float a0)
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
			if (f_43a_a0_b()) {
				return true;
			}
			if (!f_67f_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_34f_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_4a2_a0_v();
		return false;
	}

	bool f_41e_a0_b(void)
	{
		if (!f_67f_a1_b(tv0)) {
			return false;
		}
		if (f_477_a0_b()) {
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

	bool f_43a_a0_b(void)
	{
		if (f_41e_a0_b() && f_44a_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_44a_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_5df_a1_V(tv0), tv4);
			if (L2 < tv4) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_4a2_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_41e_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_477_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_482_a0_v(void)
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
		if (L0 < f_4b2_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_4b0_a0_i();
		}
	}

	void f_4a2_a0_v(void)
	{
		f_7d5_a1_v(tv0);
	}

	int f_4a7_a0_i(void)
	{
		return 0;
	}

	void f_4a9_a0_v(void)
	{
		f_73b_a1_v("attack_stay");
	}

	void f_4ae_a2_v(object a0, float a1)
	{
	}

	int f_4b0_a0_i(void)
	{
		return 1;
	}

	float f_4b2_a0_f(void)
	{
		return 0.5;
	}
}

maintask t3
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		f_8c2_a0_v();
		for (; ; ) {
			f_4ec_a0_v();
		}
	}

	void OnSee(object a0)
	{
		if (f_8f1_a1_b(a0)) {
			f_533_a0_v();
			f_8f8_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_8d5_a1_b(a0)) {
			f_533_a0_v();
			f_8eb_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		if (!f_67f_a1_b(a0)) {
			f_909_a1_v(a0);
			return;
		}
		f_533_a0_v();
		f_916_a1_v(a0);
	}

	void f_4ec_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_527_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_545_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_543_a0_b(), L5);
					L4 = null;
					if (L5) {
						t4{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_527_a0_f(void)
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

	void f_533_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_533_a0_v();
		global.OnDeath(a0);
	}

	bool f_543_a0_b(void)
	{
		return false;
	}

	object f_545_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t4
{
	void OnSee(object a0)
	{
		if (f_8f1_a1_b(a0)) {
			f_5cc_a0_v();
			f_8f8_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_8d5_a1_b(a0)) {
			f_5cc_a0_v();
			f_8eb_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		if (!f_67f_a1_b(a0)) {
			f_909_a1_v(a0);
			return;
		}
		f_5cc_a0_v();
		f_916_a1_v(a0);
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_720_a0_b()) {
			return;
		}
		L0 = f_8b1_a0_i();
		for (L1 = 0; L1 < 5 && f_720_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_8aa_a1_s(L3));
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
			if (!f_5ca_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}
}

bool f_5ca_a0_b(void)
{
	return true;
}

void f_5cc_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

string f_5d1_a1_s(int a0)
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

Vector f_5df_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

bool f_5e6_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_5eb_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_5f7_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_5eb_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_783_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_60d_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_5eb_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_5eb_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_5d1_a1_s(a2);
	if (!f_5eb_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_774_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_783_a3_f(L4 - L5, 0, 1));
	if (f_5e6_a1_b(a0)) {
		f_7c1_a1_v(-L5);
	}
	return L5;
}

bool f_656_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_65b_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_656_a1_b(a0)) {
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

bool f_67f_a1_b(object a0)
{
	int L0;
	if (!f_65b_a1_b(a0)) {
		return false;
	}
	if (!f_5eb_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_697_a1_v(object a0)
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

void f_6c3_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_76a_a1_V(f_5df_a1_V(a0));
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
			f_707_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_697_a1_v(a0);
}

void f_707_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_697_a1_v(a0);
}

void f_715_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_720_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_725_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_730_a3_v(string a0, int a1, int a2)
{
	if (f_793_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_73b_a1_v(string a0)
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

object f_764_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_76a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_774_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_77b_a1_f(float a0)
{
	return a0 < 0 ? -a0 : a0;
}

float f_783_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_78e_a1_b(float a0)
{
	float L0;
	@rand(L0);
	return L0 < a0;
}

bool f_793_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

object f_798_a0_o(void)
{
	object L0;
	@CreateObjectSet(L0);
	return L0;
}

bool f_79e_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_7cb_a1_v(a1);
	f_5f7_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_7c1_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(15, L0);
}

void f_7cb_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

void f_7d5_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_7de_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_764_a0_o(), L0);
}

int f_7e9_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_7ef_a1_v(object a0)
{
	if (f_7e9_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_7fc_a2_v(int a0, int a1)
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
	@AddItem(L1, f_86e_a1_i("Money"), 0, L0);
}

void f_81b_a1_v(string a0)
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

void f_82c_a0_v(void)
{
	if (f_7e9_a0_i() != 1) {
		return;
	}
	f_81b_a1_v("liver");
	f_81b_a1_v("kidney");
	f_81b_a1_v("heart");
	f_81b_a1_v("blood");
}

void f_844_a0_v(void)
{
	int L0;
	bool L1;
	@ClearSubContainer(0);
	f_7fc_a2_v(200, 500);
	f_730_a3_v("revolver_ammo", 1, 80);
	f_730_a3_v("samopal_ammo", 1, 80);
	f_730_a3_v("rifle_ammo", 1, 80);
	f_730_a3_v("lockpick", 1, 80);
	@AddItem(L1, f_86e_a1_i("hunter_mark"), 0, 1);
}

int f_86e_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_873_a1_v(object a0)
{
	if (f_5e6_a1_b(a0)) {
		f_79e_a2_b(a0, 0.05000000074505806);
	}
	t0{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_6c3_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_707_a5_v(a0, a1, a2, a4, a5);
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
	f_873_a1_v(a0);
}

string f_8aa_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_8b1_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_8aa_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_8c2_a0_v(void)
{
	g0 = f_798_a0_o();
}

bool f_8c9_a1_b(object a0)
{
	bool L0;
	bool L1;
	g0->in(L0, a0);
	if (L0) {
		return true;
	}
	@IsPlayerActor(a0, L1);
	return L1;
}

bool f_8d5_a1_b(object a0)
{
	if (f_8c9_a1_b(a0)) {
		Vector L0;
		L0 = f_5df_a1_V(a0);
		return f_77b_a1_f(L0.y) < 200;
	}
	return false;
}

void f_8eb_a1_v(object a0)
{
	f_8fe_a1_v(a0);
}

bool f_8f1_a1_b(object a0)
{
	return f_8c9_a1_b(a0);
}

void f_8f8_a1_v(object a0)
{
	f_8fe_a1_v(a0);
}

void f_8fe_a1_v(object a0)
{
	t2{a0, true};
	@ResetAAS();
}

void f_909_a1_v(object a0)
{
	bool L0;
	if (a0 == null) {
		return;
	}
	g0->in(L0, a0);
	if (!L0) {
		g0->add(a0);
	}
}

void f_916_a1_v(object a0)
{
	f_909_a1_v(a0);
	t2{a0, true};
	@ResetAAS();
}

