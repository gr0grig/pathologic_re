event OnSee 1;
event OnHear 3;
event OnAttacked 17;
event OnTimer 7;
event OnCollision 10;
event OnDeath 41;
event OnPlayerDamage 30;
event OnActorStuck 28;
event OnUse 0;
event OnHit 22;
event OnPropertyChange 16;

var object g0;
var object g1;
var float g2;
var bool g3;
var object g4;

task t0
{
	var bool tv0;
	var object tv1;

	bool init(object a0)
	{
		return f_4c_a5_b(a0, 350, 5000, false, true);
	}

	bool f_b_a1_b(object a0)
	{
		return f_546_a1_b(a0);
	}

	void OnSee(object a0)
	{
		if (f_701_a1_b(a0)) {
			f_c8_a0_v();
			f_708_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_70e_a1_b(a0)) {
			f_c8_a0_v();
			f_715_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		if (!f_52e_a1_b(a0)) {
			f_745_a1_v(a0);
			return;
		}
		f_c8_a0_v();
		f_756_a1_v(a0);
	}

	void OnTimer(int a0)
	{
		f_b2_a1_v(a0);
		f_7ab_a1_v(a0);
	}

	bool f_4c_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_b_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_d8_a0_s(), f_da_a0_s());
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

	void f_b2_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_b_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_c8_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_c8_a0_v();
		global.OnDeath(a0);
	}

	string f_d8_a0_s(void)
	{
		return "walk";
	}

	string f_da_a0_s(void)
	{
		return "run";
	}
}

task t1
{
	var bool tv0;
	var object tv1;
	var object tv2;

	object init(object a0)
	{
		tv2 = a0;
		if (!f_102_a5_b(a0, 500.0, 5000, false, true)) {
			tv2 = null;
		}
		return tv2;
	}

	void OnAttacked(object a0)
	{
		if (!f_52e_a1_b(a0)) {
			return;
		}
		tv2 = a0;
		f_17e_a0_v();
	}

	void OnTimer(int a0)
	{
		f_168_a1_v(a0);
		f_7ab_a1_v(a0);
	}

	bool f_102_a5_b(object a0, float a1, float a2, bool a3, bool a4)
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
			if (!f_18e_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_195_a0_s(), f_197_a0_s());
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

	void f_168_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_18e_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_17e_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_17e_a0_v();
		global.OnDeath(a0);
	}

	bool f_18e_a1_b(object a0)
	{
		return f_52e_a1_b(a0);
	}

	string f_195_a0_s(void)
	{
		return "walk";
	}

	string f_197_a0_s(void)
	{
		return "run";
	}
}

maintask t2
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		f_62e_a0_v();
		for (; ; ) {
			f_1f0_a0_v();
		}
	}

	void OnSee(object a0)
	{
		if (f_701_a1_b(a0)) {
			f_230_a0_v();
			f_708_a1_v(a0);
		} else {
			if (f_71b_a1_b(a0)) {
				f_230_a0_v();
				f_73b_a1_v(a0);
			}
		}
	}

	void OnHear(object a0)
	{
		if (f_70e_a1_b(a0)) {
			f_230_a0_v();
			f_715_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		if (!f_52e_a1_b(a0)) {
			f_745_a1_v(a0);
			return;
		}
		f_230_a0_v();
		f_756_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_783_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void OnTimer(int a0)
	{
		f_7ab_a1_v(a0);
	}

	void f_1f0_a0_v(void)
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
					@FollowPath(L5, f_240_a0_b(), L6);
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

	void f_230_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_230_a0_v();
		global.OnDeath(a0);
	}

	bool f_240_a0_b(void)
	{
		return false;
	}
}

task t3
{
	void OnSee(object a0)
	{
		if (f_701_a1_b(a0)) {
			f_2d6_a0_v();
			f_708_a1_v(a0);
		} else {
			if (f_71b_a1_b(a0)) {
				f_2d6_a0_v();
				f_73b_a1_v(a0);
			}
		}
	}

	void OnHear(object a0)
	{
		if (f_70e_a1_b(a0)) {
			f_2d6_a0_v();
			f_715_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		if (!f_52e_a1_b(a0)) {
			f_745_a1_v(a0);
			return;
		}
		f_2d6_a0_v();
		f_756_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_783_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void OnTimer(int a0)
	{
		f_7ab_a1_v(a0);
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_5ab_a0_b()) {
			return;
		}
		L0 = f_5d5_a0_i();
		L1 = 0;
		for (; L1 < 5 && f_5ab_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_5ce_a1_s(L3));
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

	void f_2d6_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t4
{
	var object tv0;

	object init(object a0)
	{
		bool L0;
		tv0 = a0;
		@Face(a0);
		@SetAttackState(true);
		L0 = false;
		while (f_800_a1_b(tv0)) {
			float L1;
			L1 = f_4b1_a1_f(tv0);
			if (L1 <= 90000.0) {
				if (!L0) {
					@SetAttackState(true);
					f_657_a1_v(true);
					@PlayAnimation("all", "attack_on");
					L0 = true;
				} else {
					@PlayAnimation("all", "bjump");
				}
			} else {
				if (L1 >= 490000.0) {
					if (L0) {
						@SetAttackState(false);
						f_657_a1_v(false);
						@PlayAnimation("all", "attack_off");
						L0 = false;
					} else {
						object L2;
						@StopAsync();
						L2 = t1{tv0};
						tv0 = L2;
						if (tv0 == null) {
							break;
						}
						@Face(tv0);
					}
				} else {
					if (!L0) {
						@SetAttackState(true);
						f_657_a1_v(true);
						@PlayAnimation("all", "attack_on");
						L0 = true;
					} else {
						f_6ae_a1_v(tv0);
					}
				}
			}
			@WaitForAnimEnd();
			@ReportAttack(tv0);
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_off");
		f_657_a1_v(false);
		@StopAsync();
		return tv0;
	}

	void OnAttacked(object a0)
	{
		f_745_a1_v(a0);
		if (a0 != null) {
			tv0 = a0;
			@Face(tv0);
		}
	}

	void OnTimer(int a0)
	{
		f_7ab_a1_v(a0);
	}
}

task t5
{
	void init(object a0)
	{
		@KillTimer(70);
		f_657_a1_v(false);
		@RemoveActor(g0);
		f_604_a0_v();
		f_372_a1_v(a0);
	}

	void f_372_a1_v(object a0)
	{
		disable OnUse;
		f_389_a1_v(a0);
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

	void f_389_a1_v(object a0)
	{
		if (a0 == null) {
			f_3e0_a1_v("fdie");
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

	void f_3e0_a1_v(string a0)
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

task t6
{
	void init(object a0)
	{
		bool L0;
		if (!f_4b9_a2_b(a0, "disease")) {
			return;
		}
		if (!t0{a0}) {
			return;
		}
		@Face(a0);
		@WaitForAnimEnd(L0);
		if (L0) {
			@PlayAnimation("all", "attack_on");
			@WaitForAnimEnd(L0);
			if (L0) {
				f_657_a1_v(true);
				for (; ; ) {
					float L1;
					@PlayAnimation("all", "cattack");
					@WaitForAnimEnd(L0);
					if (!L0 || !f_546_a1_b(a0)) {
						break;
					}
					a0->GetProperty("disease", L1);
					if (L1 <= 0.019999999552965164) {
						a0->SetProperty("disease", 0.0);
						break;
					}
					a0->SetProperty("disease", L1 - 0.019999999552965164);
					if (f_4b9_a2_b(a0, "fire")) {
						float L2;
						a0->GetProperty("fire", L2);
						a0->SetProperty("fire", L2 + 0.10000000149011612);
					}
				}
				f_657_a1_v(false);
				if (L0) {
					@PlayAnimation("all", "attack_off");
					@WaitForAnimEnd();
				}
			}
		}
		@StopAsync();
	}

	void f_461_a0_v(void)
	{
		f_657_a1_v(false);
		@Stop();
		@StopAsync();
	}

	void OnDeath(object a0)
	{
		f_461_a0_v();
		global.OnDeath(a0);
	}

	void OnSee(object a0)
	{
		if (f_701_a1_b(a0)) {
			f_461_a0_v();
			f_708_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_70e_a1_b(a0)) {
			f_461_a0_v();
			f_715_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		if (!f_52e_a1_b(a0)) {
			f_745_a1_v(a0);
			return;
		}
		f_461_a0_v();
		f_756_a1_v(a0);
	}

	void OnTimer(int a0)
	{
		f_7ab_a1_v(a0);
	}
}

string f_4a9_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

float f_4b1_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_4b9_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_4c5_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_4b9_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_4b9_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_4a9_a1_s(a2);
	if (!f_4b9_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_5b6_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_5bd_a3_f(L4 - L5, 0, 1));
	return L5;
}

bool f_505_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_50a_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_505_a1_b(a0)) {
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

bool f_52e_a1_b(object a0)
{
	int L0;
	if (!f_50a_a1_b(a0)) {
		return false;
	}
	if (!f_4b9_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

bool f_546_a1_b(object a0)
{
	object L0;
	object L1;
	int L2;
	if (a0 == null) {
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
	if (!f_4b9_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L2);
	return L2 == 0;
}

void f_568_a3_v(object a0, int a1, float a2)
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

bool f_5ab_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_5b0_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_5b6_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_5bd_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_5c8_a0_o(void)
{
	object L0;
	@CreateObjectSet(L0);
	return L0;
}

string f_5ce_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_5d5_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_5ce_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_5e6_a2_v(int a0, int a1)
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

void f_604_a0_v(void)
{
	int L0;
	bool L1;
	@ClearSubContainer(0);
	f_5e6_a2_v(600, 1500);
	@irand(L0, 200);
	if (L0 != 0) {
		@AddItem(L1, f_629_a1_i("ognemet_ammo"), 0, L0);
	}
	@irand(L0, 3);
	if (L0 == 0) {
		@AddItem(L1, f_629_a1_i("rusk"), 0, 1);
	}
}

int f_629_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_62e_a0_v(void)
{
	float L0;
	object L1;
	object L2;
	g4 = f_5c8_a0_o();
	@GetAttackDistance(L0);
	g2 = L0 / 600.0;
	@GetScene(L1);
	@AddActorByType(L2, "flame", L1, [0.0, 0.0, 0.0]);
	L2->Attach(f_5b0_a0_o(), "flame");
	g3 = false;
	L2->SetLength(0.05000000074505806);
	g0 = L2;
	@SetTimer(70, 0.10000000149011612);
}

void f_657_a1_v(bool a0)
{
	float L0;
	float L1;
	if (a0) {
		L0 = g2;
	} else {
		L0 = 0.05000000074505806;
	}
	g0->GetLength(L1);
	if (L0 < L1) {
		L1 = L0;
	}
	g0->SetLength(L1);
	if (g3 != a0) {
		if (a0) {
			if (g1 == null) {
				object L2;
				Vector L3;
				float L4;
				L3 = [0.0, 0.0, 0.0];
				@GetHeight(L4);
				L3.y = L4;
				@PlayLoopedGlobalSound(L2, "flame_loop", L3, 0, 200);
				g1 = L2;
			}
			g1->FadeIn(2);
		} else {
			if (g1 != null) {
				g1->FadeOut(2);
			}
		}
		g3 = a0;
	}
}

void f_68f_a1_v(Vector a0)
{
	Vector L0;
	float L1;
	Vector L2;
	float L3;
	bool L4;
	@GetPosition(L0);
	@GetHeight(L1);
	L0.y += L1 / 2;
	L2 = a0 - L0;
	L3 = sqrt(L2 | L2);
	if (L3 < 50) {
		L4 = false;
	} else {
		L4 = L2.y / L3 < -0.1428571492433548;
	}
	@PlayAnimation("all", L4 ? "cattack" : "attack");
}

void f_6ae_a1_v(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	if (a0->FuncExist("@GetHeight", 1)) {
		float L1;
		a0->GetHeight(L1);
		L0.y += L1 / 2;
	}
	f_68f_a1_v(L0);
}

bool f_6c1_a1_b(object a0)
{
	bool L0;
	float L1;
	if (!f_52e_a1_b(a0)) {
		return false;
	}
	g4->in(L0, a0);
	if (L0) {
		return true;
	}
	if (!f_4b9_a2_b(a0, "disease")) {
		return false;
	}
	a0->GetProperty("disease", L1);
	return L1 > 0;
}

void f_6e0_a1_v(object a0)
{
	a0 = t4{a0};
	@ResetAAS();
	if (f_546_a1_b(a0) && f_505_a1_b(a0)) {
		t6{a0};
		@ResetAAS();
	}
}

bool f_701_a1_b(object a0)
{
	return f_800_a1_b(a0);
}

void f_708_a1_v(object a0)
{
	f_6e0_a1_v(a0);
}

bool f_70e_a1_b(object a0)
{
	return f_800_a1_b(a0);
}

void f_715_a1_v(object a0)
{
	f_6e0_a1_v(a0);
}

bool f_71b_a1_b(object a0)
{
	float L0;
	if (a0 == null || !f_505_a1_b(a0) || !f_4b9_a2_b(a0, "disease")) {
		return false;
	}
	a0->GetProperty("disease", L0);
	return L0 > 0;
}

void f_73b_a1_v(object a0)
{
	t6{a0};
	@ResetAAS();
}

void f_745_a1_v(object a0)
{
	bool L0;
	bool L1;
	if (a0 == null) {
		return;
	}
	g4->in(L0, a0);
	if (!L0) {
		g4->add(a0);
	}
	@IsPlayerActor(a0, L1);
	if (L1) {
	}
}

void f_756_a1_v(object a0)
{
	f_745_a1_v(a0);
	f_6e0_a1_v(a0);
}

void f_760_a1_v(object a0)
{
	t5{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_568_a3_v(a0, a1, a2);
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
	f_760_a1_v(a0);
}

bool f_783_a2_b(object a0, object a1)
{
	float L0;
	bool L1;
	if (!f_4b9_a2_b(a1, "reputation")) {
		return false;
	}
	a1->GetProperty("reputation", L0);
	if (L0 < 0.5) {
		return false;
	}
	@CanSee(L1, a0);
	if (L1 || f_4b1_a1_f(a0) <= 160000.0) {
		@ReportReputationChange(a0, a1, -0.20000000298023224);
		return true;
	}
	return false;
}

void f_7ab_a1_v(int a0)
{
	object L0;
	float L1;
	object L2;
	bool L3;
	if (a0 != 70) {
		return;
	}
	if (g0 == null) {
		return;
	}
	g0->Intersect(L0, L1);
	g0->SetLength(g3 ? f_5b6_a2_f(L1, g2) : 0.05000000074505806);
	while (L0->Next(L3, L2), L3) {
		if (L2 != null && L2 != f_5b0_a0_o()) {
			float L4;
			L4 = f_4c5_a3_f(L2, 0.10000000149011612, 1);
			if (f_4b9_a2_b(L2, "disease")) {
				float L5;
				L2->GetProperty("disease", L5);
				if (L5 <= 0.019999999552965164) {
					L5 = 0;
				} else {
					L5 = L5 - 0.019999999552965164;
				}
				L2->SetProperty("disease", L5);
			}
			if (f_4b9_a2_b(L2, "fire")) {
				float L6;
				L2->GetProperty("fire", L6);
				L2->SetProperty("fire", L6 + 0.10000000149011612);
			}
		}
	}
}

bool f_800_a1_b(object a0)
{
	return f_6c1_a1_b(a0);
}

