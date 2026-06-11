event OnLoad 5;
event OnUse 0;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnSteal 40;
event OnMessage 42;
event OnUnload 6;
event OnDeath 41;
event OnHit 22;
event OnPropertyChange 16;
event OnTimer 7;
event OnCollision 10;

var bool g0;

task t0
{
	void init(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

maintask t1
{
	var Vector tv0;
	var Vector tv1;
	var bool tv2;

	void init(void)
	{
		tv2 = false;
		@SensePlayerOnly(true);
		f_5be_a0_v();
		f_15_a0_v();
		for (; ; ) {
			f_aa_a0_v();
		}
	}

	void f_15_a0_v(void)
	{
		if (!f_513_a0_b()) {
			f_5a5_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_5ab_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_91_a0_v();
			}
			f_5ae_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_586_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_91_a0_v();
			}
			f_590_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_5db_a2_b(a0, a1)) {
			int L0;
			L0 = f_598_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_91_a0_v();
				}
				f_59f_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_5b4_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_91_a0_v();
			}
			f_5b7_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_5b9_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_91_a0_v();
			}
			f_5bc_a2_v(a1, a0);
		}
	}

	void OnUnload(void)
	{
		f_91_a0_v();
		f_5a5_a0_v();
	}

	void f_91_a0_v(void)
	{
		if (tv2) {
			f_56f_a0_v();
		} else {
			f_f8_a0_v();
		}
	}

	void OnDeath(object a0)
	{
		f_91_a0_v();
		global.OnDeath(a0);
	}

	void f_a4_a0_v(void)
	{
		tv2 = true;
		f_572_a0_v();
		tv2 = false;
	}

	void f_aa_a0_v(void)
	{
		@GetPFPosition(tv1);
		@GetDirection(tv0);
		for (; ; ) {
			int L0;
			bool L1;
			@irand(L0, 60);
			@Sleep(L0 + 30, L1);
			if (L1) {
				f_a4_a0_v();
			} else {
				for (; ; ) {
					Vector L2;
					@GetPFPosition(L2);
					if (f_51e_a2_f(tv1, L2) > 40000) {
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

	void f_f8_a0_v(void)
	{
		@StopGroup0();
		@Stop();
	}
}

task t2
{
	void init(object a0)
	{
		disable OnUse;
		f_11e_a1_v(a0);
		f_600_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_5ab_a1_i(a0);
		if (L0 > 0) {
			f_5ae_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_5a5_a0_v();
	}

	void f_11e_a1_v(object a0)
	{
		if (a0 == null) {
			f_175_a1_v("fdie");
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

	void f_175_a1_v(string a0)
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

task t3
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;
	var int tv4;

	void init(object a0)
	{
		f_19f_a3_v(a0, true, 180.0);
	}

	float f_199_a2_f(object a0, int a1)
	{
		return 0.07000000029802322;
	}

	int f_19c_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_19f_a3_v(object a0, bool a1, float a2)
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
		for (; f_4ad_a1_b(tv0) && !tv3; ) {
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
						f_508_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						@StopAsync();
						L6 = true;
					}
					@rand(L9);
					if (L9 < 0.6000000238418579 || f_357_a0_b()) {
						@Face(tv0);
						@PlayAnimation("all", "attack_stay");
						f_2fb_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_357_a0_b()) {
							if (!f_4ad_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L3);
							@GetPFPosition(L4);
							L7 = L3 - L4;
							L8 = L7 | L7;
							if (L8 < a2 * a2) {
								if (!f_293_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_293_a1_b(a2)) {
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

	void f_26c_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_199_a2_f(L0, a1);
			L2 = f_444_a3_f(L0, L1, f_19c_a2_i(L0, a1));
			@ReportHit(tv0, f_382_a0_i(), L2, L1);
			f_384_a2_v(L0, L2);
		}
	}

	bool f_293_a1_b(float a0)
	{
		int L0;
		bool L1;
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_362_a0_v();
		if (!f_4ad_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_26c_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			if (!f_4ad_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_26c_a2_v(a0, L0);
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		f_2e3_a1_b(0.75);
		@StopAsync();
		return true;
	}

	bool f_2e3_a1_b(float a0)
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
				if (f_323_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
		}
		return false;
	}

	bool f_2fb_a1_b(float a0)
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
			if (f_323_a0_b()) {
				return true;
			}
			if (!f_4ad_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_293_a1_b(a0);
				return true;
			}
			@sync();
		}
		return false;
	}

	bool f_323_a0_b(void)
	{
		if (!f_4ad_a1_b(tv0)) {
			return false;
		}
		if (f_357_a0_b()) {
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
				f_344_a0_v();
				return true;
			}
		}
		return false;
	}

	void f_344_a0_v(void)
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

	bool f_357_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_362_a0_v(void)
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
		if (L0 < f_388_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv4 = f_386_a0_i();
		}
	}

	int f_382_a0_i(void)
	{
		return 0;
	}

	void f_384_a2_v(object a0, float a1)
	{
	}

	int f_386_a0_i(void)
	{
		return 1;
	}

	float f_388_a0_f(void)
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
		f_40d_a0_v();
		f_5a5_a0_v();
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
			if (!f_41d_a1_b(a0)) {
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
					@FollowPath(L2, a3, L0, f_424_a0_s(), f_426_a0_s());
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
		if (!f_41d_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_40d_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_40d_a0_v();
		global.OnDeath(a0);
	}
}

bool f_41d_a1_b(object a0)
{
	return f_4ad_a1_b(a0);
}

string f_424_a0_s(void)
{
	return "walk";
}

string f_426_a0_s(void)
{
	return "run";
}

string f_428_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

float f_430_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_438_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_444_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_438_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_438_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_428_a1_s(a2);
	if (!f_438_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_522_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_529_a3_f(L4 - L5, 0, 1));
	return L5;
}

bool f_484_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_489_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_484_a1_b(a0)) {
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

bool f_4ad_a1_b(object a0)
{
	int L0;
	if (!f_489_a1_b(a0)) {
		return false;
	}
	if (!f_438_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_4c5_a3_v(object a0, int a1, float a2)
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

void f_508_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_513_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_518_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_51e_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return L0 | L0;
}

float f_522_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_529_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_534_a1_v(object a0)
{
	t2{a0};
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
	f_534_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_4c5_a3_v(a0, a1, a2);
}

string f_557_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_55e_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_557_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_56f_a0_v(void)
{
	@StopAnimation();
}

void f_572_a0_v(void)
{
	int L0;
	int L1;
	L0 = f_55e_a0_i();
	if (!L0) {
		return;
	}
	@irand(L1, L0);
	@PlayAnimation("all", f_557_a1_s(L1));
	@WaitForAnimEnd();
}

int f_586_a1_i(object a0)
{
	return f_4ad_a1_b(a0) ? 2 : 0;
}

void f_590_a1_v(object a0)
{
	t3{a0};
}

int f_598_a1_i(object a0)
{
	return f_586_a1_i(a0);
}

void f_59f_a1_v(object a0)
{
	f_590_a1_v(a0);
}

void f_5a5_a0_v(void)
{
	t0{};
}

int f_5ab_a1_i(object a0)
{
	return 2;
}

void f_5ae_a1_v(object a0)
{
	f_5d4_a1_v(a0);
}

int f_5b4_a1_i(object a0)
{
	return 0;
}

void f_5b7_a1_v(object a0)
{
}

int f_5b9_a2_i(string a0, object a1)
{
	return 0;
}

void f_5bc_a2_v(string a0, object a1)
{
}

void f_5be_a0_v(void)
{
	string L0;
	object L1;
	int L2;
	bool L3;
	g0 = false;
	@GetProperty("guard_scene", L0);
	@CreateInvItem(L1);
	@GetInvItemByName(L2, "uni_key");
	L1->SetItemID(L2);
	L1->SetProperty("key_scene_name", L0);
	@AddItem(L3, L1, 0);
}

void f_5d4_a1_v(object a0)
{
	if (g0) {
		@WorkWithCorpse(a0);
		return;
	}
}

bool f_5db_a2_b(object a0, object a1)
{
	string L0;
	bool L1;
	if (!f_438_a2_b(a1, "class")) {
		return false;
	}
	a1->GetProperty("class", L0);
	if (L0 != "guard") {
		return false;
	}
	@CanSee(L1, a0);
	if (L1 || f_430_a1_f(a0) <= 1000000.0) {
		return true;
	}
	return false;
}

void f_600_a1_v(object a0)
{
	object L0;
	g0 = true;
	@SetRTEnvelope(50, 40);
	@GetScene(L0);
	L0->RemoveStationaryActor(f_518_a0_o());
}

