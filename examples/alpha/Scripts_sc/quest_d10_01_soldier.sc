event OnLoad 5;
event OnUse 0;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnHear 3;
event OnStopHear 4;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnSee 1;
event OnTimer 7;
event OnTrigger 26;
event OnUnload 6;

var object g0;

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

task t1
{
	void init(object a0)
	{
		f_45b_a0_v();
		f_f_a1_v(a0);
	}

	void f_f_a1_v(object a0)
	{
		disable OnUse;
		f_26_a1_v(a0);
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

	void f_26_a1_v(object a0)
	{
		if (a0 == null) {
			f_7d_a1_v("fdie");
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

	void f_7d_a1_v(string a0)
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

task t2
{
	var object tv0;

	void init(object a0)
	{
		tv0 = a0;
		@Face(a0);
		for (; ; ) {
			bool L0;
			@Sleep(0.5, L0);
			if (!L0 || !f_37e_a1_b(tv0)) {
				break;
			}
		}
		@StopAsync();
	}

	void f_b1_a0_v(void)
	{
		@StopAsync();
		@KillTimer(100);
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_b1_a0_v();
		global.OnDeath(a0);
	}

	void OnHear(object a0)
	{
		if (a0 == tv0) {
			@KillTimer(100);
			@Face(tv0);
		}
	}

	void OnStopHear(object a0)
	{
		if (a0 == tv0) {
			@SetTimer(100, 3.0);
			f_3d9_a1_v(tv0);
		}
	}

	void OnAttacked(object a0)
	{
		if (!f_37e_a1_b(a0)) {
			f_4ba_a1_v(a0);
			return;
		}
		f_b1_a0_v();
		f_4c7_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_4f3_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_4d7_a1_b(a0)) {
			f_b1_a0_v();
			f_4ed_a1_v(a0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 != 100) {
			return;
		}
		@KillTimer(100);
		@StopGroup0();
	}
}

task t3
{
	var object tv0;
	var object tv1;
	var bool tv2;

	void init(object a0, bool a1)
	{
		tv0 = a0;
		@Face(tv0);
		if (a1) {
			@PlayAnimation("all", "attack_on");
			@WaitForAnimEnd();
		}
		@LockAnimationEnd("all", "attack_on");
		@SetAttackState(true);
		while (f_37e_a1_b(tv0)) {
			bool L0;
			bool L1;
			@CanSee(L1, tv0);
			if (L1) {
				f_1b9_a0_v();
			} else {
				f_3d9_a1_v(tv0);
				tv2 = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(L0);
				if (!L0) {
					if (tv1 != null) {
						f_1b4_a0_v();
					}
					@LockAnimationEnd("all", "attack_on");
					continue;
				}
				if (!f_37e_a1_b(tv0)) {
					break;
				}
				@CanSee(L1, tv0);
				if (L1) {
					tv2 = false;
					@Face(tv0);
					f_1b9_a0_v();
				} else {
					@LockAnimationEnd("all", "attack_on");
					@Sleep(3, L0);
					if (!L0) {
						if (tv1 != null) {
							f_1b4_a0_v();
						}
						@LockAnimationEnd("all", "attack_on");
						continue;
					}
					if (!f_37e_a1_b(tv0)) {
						break;
					}
					tv2 = false;
					@CanSee(L1, tv0);
					if (L1) {
						@Face(tv0);
						f_1b9_a0_v();
					} else {
						break;
					}
				}
			}
			if (tv1 != null) {
				f_1b4_a0_v();
			} else {
				@Sleep(2);
			}
		}
		@SetAttackState(false);
		@StopAsync();
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}

	void OnHear(object a0)
	{
		if (tv2 && a0 == tv0) {
			f_3d9_a1_v(tv0);
		}
	}

	void OnSee(object a0)
	{
		if (tv2 && a0 == tv0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	void f_1b4_a0_v(void)
	{
		tv0 = tv1;
		tv1 = null;
		@Face(tv0);
	}

	void f_1b9_a0_v(void)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		object L3;
		int L4;
		Vector L5;
		@ReportAttack(tv0);
		@GetDirection(L0);
		L1 = f_2f3_a1_V(tv0);
		if (f_420_a2_f(L0, L1) < 0.9659258127212524) {
			return;
		}
		@PlayAnimation("all", "attack_begin1");
		@WaitForAnimEnd();
		@Speak("shot");
		@GetDirection(L0);
		L1 = f_2f3_a1_V(tv0);
		L1.y += f_3e4_a1_f(tv0);
		@RandVecCone3D(L2, L1, 0.2617993950843811);
		@GetVictimMaterial(L2, L3, L4, L5);
		if (L3 != null) {
			if (L3 == tv0) {
				float L6;
				L6 = f_315_a3_f(tv0, 1.5, 0);
				@ReportHit(tv0, 2, L6, 1.5);
			} else {
				if (L4 != -1) {
					object L7;
					object L8;
					@GetScene(L7);
					@AddActorByType(L8, "scripted", L7, L5, [0.0, 0.0, 1.0], "richochet.xml");
					L8->SetScriptProperty("Material", L4);
				}
			}
		}
		@PlayAnimation("all", "attack_end1");
		@WaitForAnimEnd();
		@LockAnimationEnd("all", "attack_on");
	}

	void OnAttacked(object a0)
	{
		if (!f_37e_a1_b(a0)) {
			return;
		}
		f_4ba_a1_v(a0);
		if (a0 == tv0) {
			tv1 = null;
		} else {
			tv1 = a0;
			if (tv2) {
				@StopAnimation();
				@StopGroup0();
			}
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_4f3_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}
}

maintask t4
{
	var Vector tv0;
	var Vector tv1;

	void f_237_a1_v(object a0)
	{
		f_2e6_a0_v();
	}

	void OnUse(object a0)
	{
		bool L0;
		g0->in(L0, a0);
		if (!L0) {
			f_237_a1_v(a0);
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "attack") {
			object L0;
			L0 = f_302_a0_o();
			f_2e6_a0_v();
			f_4c7_a1_v(L0);
		}
	}

	void OnAttacked(object a0)
	{
		f_431_a2_b("quest_d10_01", "soldier_fight");
	}

	void OnPlayerDamage(object a0, object a1)
	{
	}

	void OnUnload(void)
	{
		f_2e6_a0_v();
		t0{};
	}

	void OnHear(object a0)
	{
		bool L0;
		if (!f_37e_a1_b(a0)) {
			return;
		}
		g0->in(L0, a0);
		if (L0) {
			f_2e6_a0_v();
			t2{a0};
		}
	}

	void init(void)
	{
		f_4a8_a0_v();
		for (; ; ) {
			f_298_a0_v();
		}
	}

	void f_289_a0_v(void)
	{
	}

	void OnSee(object a0)
	{
		if (f_4d7_a1_b(a0)) {
			f_2e6_a0_v();
			f_51b_a1_v(a0);
		}
	}

	void f_298_a0_v(void)
	{
		@GetPFPosition(tv1);
		@GetDirection(tv0);
		for (; ; ) {
			int L0;
			bool L1;
			@irand(L0, 60);
			@Sleep(L0 + 30, L1);
			if (L1) {
				f_289_a0_v();
			} else {
				for (; ; ) {
					Vector L2;
					@GetPFPosition(L2);
					if (f_3f1_a2_f(tv1, L2) > 40000) {
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
}

void f_2e6_a0_v(void)
{
	@StopGroup0();
	@Stop();
}

string f_2eb_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

Vector f_2f3_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_2fa_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

object f_302_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_309_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_315_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_309_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_309_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_2eb_a1_s(a2);
	if (!f_309_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_3f5_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_3fc_a3_f(L4 - L5, 0, 1));
	return L5;
}

bool f_355_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_35a_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_355_a1_b(a0)) {
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

bool f_37e_a1_b(object a0)
{
	int L0;
	if (!f_35a_a1_b(a0)) {
		return false;
	}
	if (!f_309_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_396_a3_v(object a0, int a1, float a2)
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

void f_3d9_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

float f_3e4_a1_f(object a0)
{
	float L0;
	float L1;
	@GetEyesHeight(L0);
	a0->GetEyesHeight(L1);
	return L1 - L0;
}

object f_3eb_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_3f1_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return L0 | L0;
}

float f_3f5_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_3fc_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_407_a0_o(void)
{
	object L0;
	@CreateObjectSet(L0);
	return L0;
}

float f_40d_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_416_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_420_a2_f(Vector a0, Vector a1)
{
	return f_40d_a2_f(a0, a1) / (f_416_a1_f(a0) * f_416_a1_f(a1));
}

bool f_431_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_43d_a2_v(int a0, int a1)
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

void f_45b_a0_v(void)
{
	int L0;
	bool L1;
	@ClearSubContainer(0);
	f_43d_a2_v(500, 1000);
	@irand(L0, 4);
	if (L0 != 0) {
		@AddItem(L1, f_480_a1_i("rifle_ammo"), 0, L0);
	}
	@irand(L0, 3);
	if (L0 == 0) {
		@AddItem(L1, f_480_a1_i("rusk"), 0, 1);
	}
}

int f_480_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_485_a1_v(object a0)
{
	t1{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_396_a3_v(a0, a1, a2);
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
	f_52f_a1_v(a0);
}

void f_4a8_a0_v(void)
{
	g0 = f_407_a0_o();
}

void f_4af_a2_v(object a0, bool a1)
{
	t3{a0, a1};
	@ResetAAS();
}

void f_4ba_a1_v(object a0)
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

void f_4c7_a1_v(object a0)
{
	f_4ba_a1_v(a0);
	f_4af_a2_v(a0, true);
}

bool f_4d2_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_4d7_a1_b(object a0)
{
	bool L0;
	if (!f_37e_a1_b(a0)) {
		return false;
	}
	g0->in(L0, a0);
	if (L0) {
		return true;
	}
	return f_4d2_a1_b(a0);
}

void f_4ed_a1_v(object a0)
{
	f_51b_a1_v(a0);
}

bool f_4f3_a2_b(object a0, object a1)
{
	float L0;
	bool L1;
	if (!f_309_a2_b(a1, "reputation")) {
		return false;
	}
	a1->GetProperty("reputation", L0);
	if (L0 < 0.5) {
		return false;
	}
	@CanSee(L1, a0);
	if (L1 || f_2fa_a1_f(a0) <= 160000.0) {
		@ReportReputationChange(a0, a1, -0.20000000298023224);
		return true;
	}
	return false;
}

void f_51b_a1_v(object a0)
{
	bool L0;
	g0->in(L0, a0);
	if (L0) {
		f_4af_a2_v(a0, true);
	}
}

void OnUnload(void)
{
	@RemoveActor(f_3eb_a0_o());
	@Hold();
}

void f_52f_a1_v(object a0)
{
	f_485_a1_v(a0);
}

