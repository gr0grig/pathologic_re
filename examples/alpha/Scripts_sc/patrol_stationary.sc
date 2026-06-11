event OnSee 1;
event OnAttacked 17;
event OnTimer 7;
event OnPlayerDamage 30;
event OnDeath 41;
event OnHear 3;
event OnStopHear 4;
event OnCollision 10;
event OnUse 0;
event OnHit 22;
event OnPropertyChange 16;

var object g0;

task t0
{
	var object tv0;
	var float tv1;
	var float tv2;

	void init(object a0)
	{
		@GetSeeThreshold(tv1);
		@GetSeeFOV(tv2);
		@SetSeeThreshold(tv1 / 1.5);
		f_65_a1_v(a0);
	}

	void OnSee(object a0)
	{
		if (f_741_a1_b(a0)) {
			f_45_a0_v();
			f_748_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		if (!f_590_a1_b(a0)) {
			f_753_a1_v(a0);
			return;
		}
		f_45_a0_v();
		f_760_a1_v(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 != 100) {
			return;
		}
		f_45_a0_v();
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_792_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void f_45_a0_v(void)
	{
		@SetSeeThreshold(tv1);
		@SetSeeFOV(tv2);
		f_9c_a0_v();
	}

	void OnDeath(object a0)
	{
		f_45_a0_v();
		global.OnDeath(a0);
	}

	bool f_56_a0_b(void)
	{
		bool L0;
		@SetSeeFOV(tv2 * 1.7999999523162842);
		@PlayAnimation("all", "hunt");
		@WaitForAnimEnd(L0);
		@SetSeeFOV(tv2);
		return !L0;
	}

	void f_65_a1_v(object a0)
	{
		tv0 = a0;
		@Face(tv0);
		@SetTimer(100, 15);
		while (tv0 != null) {
			bool L0;
			int L1;
			@irand(L1, 5);
			@Sleep(L1 + 5, L0);
			if (f_56_a0_b()) {
				break;
			}
		}
		f_45_a0_v();
	}

	void OnHear(object a0)
	{
		if (a0 == tv0 && f_72c_a1_b(a0)) {
			@Face(tv0);
			@SetTimer(100, 15);
		}
	}

	void OnStopHear(object a0)
	{
		if (a0 == tv0) {
			@StopAsync();
			@KillTimer(100);
		}
	}

	void f_9c_a0_v(void)
	{
		@Stop();
		@StopGroup0();
		@StopAsync();
		@KillTimer(100);
		tv0 = null;
	}
}

maintask t1
{
	var Vector tv0;
	var Vector tv1;
	var int tv2;

	void init(void)
	{
		f_706_a0_v();
		f_120_a0_v();
	}

	void f_ae_a0_v(void)
	{
		f_172_a0_v();
	}

	void OnDeath(object a0)
	{
		f_ae_a0_v();
		global.OnDeath(a0);
	}

	void f_bb_a0_v(void)
	{
	}

	void OnSee(object a0)
	{
		if (f_741_a1_b(a0)) {
			f_ae_a0_v();
			f_748_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_72c_a1_b(a0)) {
			f_ae_a0_v();
			f_739_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		if (!f_590_a1_b(a0)) {
			f_753_a1_v(a0);
			return;
		}
		f_ae_a0_v();
		f_760_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_792_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void f_f8_a1_v(object a0)
	{
		OnAttacked(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 == 25) {
			object L0;
			bool L1;
			@FindActor(L0, "player");
			@CanSee(L1, L0);
			if (L1 || f_4fd_a1_f(L0) <= 22500) {
				tv2 = tv2 + 1;
				if (tv2 > 5) {
					f_f8_a1_v(L0);
					tv2 = 0;
				}
			}
		}
	}

	void f_120_a0_v(void)
	{
		@GetPFPosition(tv1);
		@GetDirection(tv0);
		for (; ; ) {
			int L0;
			bool L1;
			@SetTimer(25, 1);
			@irand(L0, 60);
			@Sleep(L0 + 30, L1);
			if (L1) {
				f_bb_a0_v();
			} else {
				for (; ; ) {
					Vector L2;
					@GetPFPosition(L2);
					if (f_5f6_a2_f(tv1, L2) > 40000) {
						object L3;
						@FindPathTo(L3, tv1);
						if (L3 != null) {
							@RotatePath(L3, L1);
							if (!L1) {
								continue;
							}
							@FollowPath(L3, false, L1);
							if (!L1) {
								continue;
							}
							@Rotate(tv0.x, tv0.z, L1);
							if (!L1) {
								continue;
							}
							@WaitForAnimEnd(L1);
							if (!L1) {
								continue;
							}
							break;
						} else {
							@Sleep(1);
						}
					} else {
						@Rotate(tv0.x, tv0.z, L1);
						if (!L1) {
							continue;
						}
						@WaitForAnimEnd(L1);
						if (!L1) {
							continue;
						}
						break;
					}
				}
			}
		}
	}

	void f_172_a0_v(void)
	{
		@StopGroup0();
		@Stop();
	}
}

task t2
{
	var bool tv0;
	var object tv1;

	void OnAttacked(object a0)
	{
		f_753_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		f_792_a2_b(a0, a1);
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
			if (!f_210_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_217_a0_s(), f_219_a0_s());
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
		if (!f_210_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_200_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_200_a0_v();
		global.OnDeath(a0);
	}

	bool f_210_a1_b(object a0)
	{
		return f_590_a1_b(a0);
	}

	string f_217_a0_s(void)
	{
		return "walk";
	}

	string f_219_a0_s(void)
	{
		return "run";
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

	void init(object a0, bool a1)
	{
		f_236_a3_v(a0, a1, 180.0);
	}

	float f_223_a2_f(object a0, int a1)
	{
		return 0.10000000149011612;
	}

	int f_226_a2_i(object a0, int a1)
	{
		return 0;
	}

	void OnAttacked(object a0)
	{
		f_753_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		f_792_a2_b(a0, a1);
	}

	void f_236_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_2fe_a0_v();
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
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 300.0 + L0;
		while (f_590_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L6 = L1 - L2;
			L7 = L6 | L6;
			if (L7 >= L5 * L5) {
				if (!t2{tv0, L0, 3000.0, true, false}) {
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
						if (!t2{tv0, L0, 3000.0, true, false}) {
							break;
						}
						L4 = false;
						continue;
					}
					if (!L4) {
						f_5eb_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						@StopAsync();
						L4 = true;
					}
					@rand(L10);
					if (L10 < 0.6000000238418579 || f_41c_a0_b()) {
						@Face(tv0);
						@PlayAnimation("all", "attack_stay");
						f_3b0_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_41c_a0_b()) {
							if (!f_590_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_348_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_348_a1_b(a2)) {
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

	void f_2fe_a0_v(void)
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

	void f_321_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_223_a2_f(L0, a1);
			L2 = f_527_a3_f(L0, L1, f_226_a2_i(L0, a1));
			@ReportHit(tv0, f_447_a0_i(), L2, L1);
			f_449_a2_v(L0, L2);
		}
	}

	bool f_348_a1_b(float a0)
	{
		int L0;
		bool L1;
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_427_a0_v();
		if (!f_590_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_321_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			if (!f_590_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_321_a2_v(a0, L0);
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		f_398_a1_b(0.75);
		@StopAsync();
		return true;
	}

	bool f_398_a1_b(float a0)
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
				if (f_3d8_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
		}
		return false;
	}

	bool f_3b0_a1_b(float a0)
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
			if (f_3d8_a0_b()) {
				return true;
			}
			if (!f_590_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_348_a1_b(a0);
				return true;
			}
			@sync();
		}
		return false;
	}

	bool f_3d8_a0_b(void)
	{
		if (!f_590_a1_b(tv0)) {
			return false;
		}
		if (f_41c_a0_b()) {
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
				if (f_3fa_a0_b()) {
					return true;
				}
			}
		}
		return false;
	}

	bool f_3fa_a0_b(void)
	{
		object L0;
		float L1;
		Vector L2;
		Vector L3;
		@GetScene(L0);
		@FindDirLength(L1, -f_4f6_a1_V(tv0), tv4);
		if (L1 < tv4) {
			return false;
		}
		@Face(tv0);
		@PlayAnimation("all", "bjump");
		tv0->GetPFPosition(L2);
		@GetPFPosition(L3);
		@WaitForAnimEnd();
		@StopAsync();
		@SetSpeed([0.0, 0.0, 0.0]);
		return true;
	}

	bool f_41c_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_427_a0_v(void)
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
		if (L0 < f_44d_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_44b_a0_i();
		}
	}

	int f_447_a0_i(void)
	{
		return 0;
	}

	void f_449_a2_v(object a0, float a1)
	{
	}

	int f_44b_a0_i(void)
	{
		return 1;
	}

	float f_44d_a0_f(void)
	{
		return 0.5;
	}
}

task t4
{
	void init(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			f_511_a5_b(a0, "reputation", -0.30000001192092896, 0, 1);
		}
		f_639_a0_v();
		f_464_a1_v(a0);
	}

	void f_464_a1_v(object a0)
	{
		disable OnUse;
		f_47b_a1_v(a0);
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
			@WorkWithCorpse(a0);
		}
	}

	void f_47b_a1_v(object a0)
	{
		if (a0 == null) {
			f_4d2_a1_v("fdie");
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

	void f_4d2_a1_v(string a0)
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

string f_4ee_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

Vector f_4f6_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_4fd_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_505_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_511_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_505_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_601_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_527_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_505_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_505_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_4ee_a1_s(a2);
	if (!f_505_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_5fa_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_601_a3_f(L4 - L5, 0, 1));
	return L5;
}

bool f_567_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_56c_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_567_a1_b(a0)) {
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

bool f_590_a1_b(object a0)
{
	int L0;
	if (!f_56c_a1_b(a0)) {
		return false;
	}
	if (!f_505_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_5a8_a3_v(object a0, int a1, float a2)
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

void f_5eb_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

float f_5f6_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return L0 | L0;
}

float f_5fa_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_601_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_60c_a0_o(void)
{
	object L0;
	@CreateObjectSet(L0);
	return L0;
}

int f_612_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_61b_a2_v(int a0, int a1)
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

void f_639_a0_v(void)
{
	int L0;
	bool L1;
	int L2;
	@ClearSubContainer(0);
	f_61b_a2_v(0, 100 + f_612_a0_i() * 100);
	L2 = f_612_a0_i();
	@irand(L0, 3);
	if (L0 == 0) {
		@AddItem(L1, f_701_a1_i("bottle_water"), 0, 1);
	}
	@irand(L0, 3);
	if (L0 == 0) {
		@AddItem(L1, f_701_a1_i("rusk"), 0, 1);
	}
	@irand(L0, 7);
	if (L0 == 0) {
		@AddItem(L1, f_701_a1_i("bandage"), 0, 1);
	}
	@irand(L0, 7);
	if (L0 == 0) {
		@AddItem(L1, f_701_a1_i("tourniquet"), 0, 1);
	}
	@irand(L0, 20);
	if (L0 == 0) {
		@AddItem(L1, f_701_a1_i("packet"), 0, 1);
	}
	@irand(L0, 20);
	if (L0 == 0) {
		@AddItem(L1, f_701_a1_i("hook"), 0, 1);
	}
	@irand(L0, 30);
	if (L0 == 0) {
		@AddItem(L1, f_701_a1_i("watch"), 0, 1);
	}
	if (L2 >= 3) {
		@irand(L0, 2);
		if (L0 == 0) {
			@AddItem(L1, f_701_a1_i("alpha_pills"), 0, 1);
		}
	}
	if (L2 >= 4) {
		@irand(L0, 5);
		if (L0 == 0) {
			@AddItem(L1, f_701_a1_i("beta_pills"), 0, 1);
		}
	}
	if (L2 >= 6) {
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_701_a1_i("gamma_pills"), 0, 1);
		}
	}
	if (L2 >= 8) {
		@irand(L0, 2);
		if (L0 == 0) {
			@AddItem(L1, f_701_a1_i("revolver_ammo"), 0, 1);
		}
		@irand(L0, 2);
		if (L0 == 0) {
			@AddItem(L1, f_701_a1_i("rifle_ammo"), 0, 1);
		}
	}
}

int f_701_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_706_a0_v(void)
{
	g0 = f_60c_a0_o();
}

bool f_70d_a1_b(object a0)
{
	bool L0;
	float L1;
	if (!f_590_a1_b(a0)) {
		return false;
	}
	g0->in(L0, a0);
	if (L0) {
		return true;
	}
	if (!f_505_a2_b(a0, "reputation")) {
		return false;
	}
	a0->GetProperty("reputation", L1);
	return L1 < 0.10000000149011612;
}

bool f_72c_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (!L0) {
		return false;
	}
	return f_70d_a1_b(a0);
}

void f_739_a1_v(object a0)
{
	t0{a0};
}

bool f_741_a1_b(object a0)
{
	return f_70d_a1_b(a0);
}

void f_748_a1_v(object a0)
{
	t3{a0, true};
	@ResetAAS();
}

void f_753_a1_v(object a0)
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

void f_760_a1_v(object a0)
{
	f_753_a1_v(a0);
	t3{a0, true};
	@ResetAAS();
}

void f_76f_a1_v(object a0)
{
	t4{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_5a8_a3_v(a0, a1, a2);
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
	f_76f_a1_v(a0);
}

bool f_792_a2_b(object a0, object a1)
{
	float L0;
	bool L1;
	if (!f_505_a2_b(a1, "reputation")) {
		return false;
	}
	a1->GetProperty("reputation", L0);
	if (L0 < 0.5) {
		return false;
	}
	@CanSee(L1, a0);
	if (L1 || f_4fd_a1_f(a0) <= 160000.0) {
		@ReportReputationChange(a0, a1, -0.20000000298023224);
		return true;
	}
	return false;
}

