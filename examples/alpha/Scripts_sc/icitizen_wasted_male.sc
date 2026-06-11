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

var object g0;
var bool g1;

task t0
{
	void init(object a0)
	{
		disable OnUse;
		f_21_a1_v(a0);
		f_814_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_694_a1_i(a0);
		if (L0 > 0) {
			f_697_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_69d_a0_v();
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

	void init(void)
	{
		tv0 = false;
		@SensePlayerOnly(true);
		f_78f_a0_v();
		f_b6_a0_v();
		for (; ; ) {
			int L0;
			@irand(L0, 2);
			if (L0 == 0) {
				tv0 = true;
				f_7a2_a0_v();
				tv0 = false;
				@ResetAAS();
			} else {
				int L1;
				@irand(L1, 4);
				@Sleep(L1 + 1);
			}
		}
	}

	void f_b6_a0_v(void)
	{
		if (!f_5f2_a0_b()) {
			f_69d_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_694_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_150_a0_v();
			}
			f_697_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_675_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_150_a0_v();
			}
			f_67f_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_7c2_a2_b(a0, a1)) {
			int L0;
			L0 = f_687_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_150_a0_v();
				}
				f_68e_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_69e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_150_a0_v();
			}
			f_6ab_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_6b1_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_150_a0_v();
			}
			f_6b4_a2_v(a1, a0);
		}
	}

	void OnSee(object a0)
	{
		if (tv0) {
			return;
		}
		f_166_a1_v(a0);
	}

	void OnHear(object a0)
	{
		if (tv0) {
			return;
		}
		f_166_a1_v(a0);
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
		f_150_a0_v();
		f_69d_a0_v();
	}

	void f_150_a0_v(void)
	{
		@KillTimer(110);
		tv1 = false;
		if (tv0) {
			f_7bd_a0_v();
		} else {
			@Stop();
		}
	}

	void OnDeath(object a0)
	{
		f_150_a0_v();
		global.OnDeath(a0);
	}

	void f_166_a1_v(object a0)
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
		L1 = f_664_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_150_a0_v();
			}
			f_66d_a1_v(a0);
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
		f_1ba_a0_v();
		@GetDirection(L0);
		L1 = f_508_a1_V(tv0);
		if (f_627_a2_f(L0, L1) < 0) {
			f_5e7_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_5e7_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_1ba_a0_v(void)
	{
		f_5f7_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_694_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_22b_a0_v();
			}
			f_697_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_675_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_22b_a0_v();
			}
			f_67f_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_7c2_a2_b(a0, a1)) {
			int L0;
			L0 = f_687_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_22b_a0_v();
				}
				f_68e_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_69e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_22b_a0_v();
			}
			f_6ab_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_6b1_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_22b_a0_v();
			}
			f_6b4_a2_v(a1, a0);
		}
	}

	void f_22b_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_22b_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_58c_a1_b(tv0)) {
			f_22b_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_508_a1_V(tv0);
		if (f_627_a2_f(L0, L1) < 0.4999999701976776) {
			f_5e7_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_22b_a0_v();
		f_69d_a0_v();
	}
}

task t3
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;
	var int tv4;

	void init(object a0)
	{
		f_277_a3_v(a0, true, 180.0);
	}

	float f_271_a2_f(object a0, int a1)
	{
		return 0.10000000149011612;
	}

	int f_274_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_277_a3_v(object a0, bool a1, float a2)
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
		for (; f_58c_a1_b(tv0) && !tv3; ) {
			Vector L7;
			float L8;
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			L7 = L3 - L4;
			L8 = L7 | L7;
			if (L8 >= (400.0 + L2) * (400.0 + L2)) {
				if (!t4{tv0, L2, 3000.0, true, false}) {
					break;
				}
				L6 = false;
			} else {
				if (L8 >= a2 * a2) {
					float L9;
					if (!L6) {
						f_5e7_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						@StopAsync();
						L6 = true;
					}
					@rand(L9);
					if (L9 < 0.6000000238418579 || f_42f_a0_b()) {
						@Face(tv0);
						@PlayAnimation("all", "attack_stay");
						f_3d3_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_42f_a0_b()) {
							if (!f_58c_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L3);
							@GetPFPosition(L4);
							L7 = L3 - L4;
							L8 = L7 | L7;
							if (L8 < a2 * a2) {
								if (!f_36b_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_36b_a1_b(a2)) {
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

	void f_344_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_271_a2_f(L0, a1);
			L2 = f_523_a3_f(L0, L1, f_274_a2_i(L0, a1));
			@ReportHit(tv0, f_45a_a0_i(), L2, L1);
			f_45c_a2_v(L0, L2);
		}
	}

	bool f_36b_a1_b(float a0)
	{
		int L0;
		bool L1;
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_43a_a0_v();
		if (!f_58c_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_344_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			if (!f_58c_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_344_a2_v(a0, L0);
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		f_3bb_a1_b(0.75);
		@StopAsync();
		return true;
	}

	bool f_3bb_a1_b(float a0)
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
				if (f_3fb_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
		}
		return false;
	}

	bool f_3d3_a1_b(float a0)
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
			if (f_3fb_a0_b()) {
				return true;
			}
			if (!f_58c_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_36b_a1_b(a0);
				return true;
			}
			@sync();
		}
		return false;
	}

	bool f_3fb_a0_b(void)
	{
		if (!f_58c_a1_b(tv0)) {
			return false;
		}
		if (f_42f_a0_b()) {
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
				f_41c_a0_v();
				return true;
			}
		}
		return false;
	}

	void f_41c_a0_v(void)
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

	bool f_42f_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_43a_a0_v(void)
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
		if (L0 < f_460_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv4 = f_45e_a0_i();
		}
	}

	int f_45a_a0_i(void)
	{
		return 0;
	}

	void f_45c_a2_v(object a0, float a1)
	{
	}

	int f_45e_a0_i(void)
	{
		return 1;
	}

	float f_460_a0_f(void)
	{
		return 0.5;
	}
}

task t4
{
	var bool tv0;
	var object tv1;

	void OnUnload(void)
	{
		f_4e5_a0_v();
		f_69d_a0_v();
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
			if (!f_4f5_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_4fc_a0_s(), f_4fe_a0_s());
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
		if (!f_4f5_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_4e5_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_4e5_a0_v();
		global.OnDeath(a0);
	}
}

bool f_4f5_a1_b(object a0)
{
	return f_58c_a1_b(a0);
}

string f_4fc_a0_s(void)
{
	return "walk";
}

string f_4fe_a0_s(void)
{
	return "run";
}

string f_500_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

Vector f_508_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_50f_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_517_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_523_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_517_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_517_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_500_a1_s(a2);
	if (!f_517_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_602_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_609_a3_f(L4 - L5, 0, 1));
	return L5;
}

bool f_563_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_568_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_563_a1_b(a0)) {
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

bool f_58c_a1_b(object a0)
{
	int L0;
	if (!f_568_a1_b(a0)) {
		return false;
	}
	if (!f_517_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_5a4_a3_v(object a0, int a1, float a2)
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

void f_5e7_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_5f2_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_5f7_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

float f_602_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_609_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_614_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_61d_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_627_a2_f(Vector a0, Vector a1)
{
	return f_614_a2_f(a0, a1) / (f_61d_a1_f(a0) * f_61d_a1_f(a1));
}

int f_638_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_641_a1_v(object a0)
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
	f_641_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_5a4_a3_v(a0, a1, a2);
}

int f_664_a1_i(object a0)
{
	return f_7c0_a0_b() ? 2 : 0;
}

void f_66d_a1_v(object a0)
{
	t2{a0};
}

int f_675_a1_i(object a0)
{
	return f_58c_a1_b(a0) ? 2 : 0;
}

void f_67f_a1_v(object a0)
{
	t3{a0};
}

int f_687_a1_i(object a0)
{
	return f_675_a1_i(a0);
}

void f_68e_a1_v(object a0)
{
	f_67f_a1_v(a0);
}

int f_694_a1_i(object a0)
{
	return 2;
}

void f_697_a1_v(object a0)
{
	f_797_a1_v(a0);
}

void f_69d_a0_v(void)
{
}

int f_69e_a1_i(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	if (L0) {
		return f_675_a1_i(a0);
	}
	return 0;
}

void f_6ab_a1_v(object a0)
{
	f_67f_a1_v(a0);
}

int f_6b1_a2_i(string a0, object a1)
{
	return 0;
}

void f_6b4_a2_v(string a0, object a1)
{
}

void f_6b6_a2_v(int a0, int a1)
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

void f_6d4_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_6b6_a2_v(0, 100 + f_638_a0_i() * 100);
		@irand(L0, 9);
		if (L0 == 0) {
			@AddItem(L1, f_783_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_783_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_783_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_783_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_783_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_783_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_6b6_a2_v(0, 50 + f_638_a0_i() * 50);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_783_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_783_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_783_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_783_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_783_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_783_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_783_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

string f_788_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

void f_78f_a0_v(void)
{
	g1 = false;
	f_6d4_a1_v(true);
}

void f_797_a1_v(object a0)
{
	if (g1) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			@WorkWithCorpse(a0);
		}
		return;
	}
}

void f_7a2_a0_v(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_788_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	int L2;
	@irand(L2, L0);
	@PlayAnimation("all", f_788_a1_s(L2));
	@WaitForAnimEnd();
}

void f_7bd_a0_v(void)
{
	@StopAnimation();
}

bool f_7c0_a0_b(void)
{
	return true;
}

bool f_7c2_a2_b(object a0, object a1)
{
	string L0;
	bool L1;
	if (!f_517_a2_b(a1, "class")) {
		return false;
	}
	a1->GetProperty("class", L0);
	if (L0 != "littleboy" && L0 != "littlegirl" && L0 != "boy" && L0 != "girl" && L0 != "wasted_male" && L0 != "wasted_girl" && L0 != "woman") {
		return false;
	}
	@CanSee(L1, a0);
	if (L1 || f_50f_a1_f(a0) <= 250000.0) {
		@ReportReputationChange(a0, a1, -0.30000001192092896);
		return true;
	}
	return false;
}

void f_814_a1_v(object a0)
{
	g1 = true;
	@SetRTEnvelope(50, 40);
}

