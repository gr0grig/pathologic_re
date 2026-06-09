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
event OnHit2 43;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_486_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	void init(object a0)
	{
		if (f_35b_a1_b(a0)) {
			f_5ff_a0_v();
		}
		f_5e7_a0_v();
		f_1e_a1_v(a0);
	}

	void f_1e_a1_v(object a0)
	{
		disable OnUse;
		f_37_a1_v(a0);
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
			f_5aa_a1_v(a0);
		}
	}

	void f_37_a1_v(object a0)
	{
		if (a0 == null) {
			f_92_a1_v("fdie");
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
			f_4a5_a1_v(L4);
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

	void f_92_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_4a5_a1_v(a0);
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
			if (!L0 || !f_3de_a1_b(tv0)) {
				break;
			}
		}
		@StopAsync();
	}

	void f_ca_a0_v(void)
	{
		@StopAsync();
		@KillTimer(100);
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_ca_a0_v();
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
			f_474_a1_v(tv0);
		}
	}

	void OnAttacked(object a0)
	{
		if (!f_3de_a1_b(a0)) {
			f_6fb_a1_v(a0);
			return;
		}
		f_ca_a0_v();
		f_713_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_78a_a3_b(a0, a1, a2)) {
			OnAttacked(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_76e_a1_b(a0)) {
			f_ca_a0_v();
			f_784_a1_v(a0);
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
		f_590_a1_v(tv0);
		f_599_a0_v();
		@Face(tv0);
		if (a1) {
			@PlayAnimation("all", "attack_on");
			@WaitForAnimEnd();
		}
		@LockAnimationEnd("all", "attack_on");
		@SetAttackState(true);
		while (f_3de_a1_b(tv0)) {
			bool L0;
			bool L1;
			@CanSee(L1, tv0);
			if (L1) {
				f_590_a1_v(tv0);
				f_1de_a0_v();
			} else {
				f_474_a1_v(tv0);
				tv2 = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(L0);
				if (!L0) {
					if (tv1 != null) {
						f_1d9_a0_v();
					}
					@LockAnimationEnd("all", "attack_on");
					continue;
				}
				if (!f_3de_a1_b(tv0)) {
					break;
				}
				@CanSee(L1, tv0);
				if (L1) {
					tv2 = false;
					@Face(tv0);
					f_1de_a0_v();
				} else {
					@LockAnimationEnd("all", "attack_on");
					@Sleep(3, L0);
					if (!L0) {
						if (tv1 != null) {
							f_1d9_a0_v();
						}
						@LockAnimationEnd("all", "attack_on");
						continue;
					}
					if (!f_3de_a1_b(tv0)) {
						break;
					}
					tv2 = false;
					@CanSee(L1, tv0);
					if (L1) {
						@Face(tv0);
						f_1de_a0_v();
					} else {
						break;
					}
				}
			}
			if (tv1 != null) {
				f_1d9_a0_v();
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
			f_474_a1_v(tv0);
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

	void f_1d9_a0_v(void)
	{
		tv0 = tv1;
		tv1 = null;
		@Face(tv0);
	}

	void f_1de_a0_v(void)
	{
		f_590_a1_v(tv0);
		@ReportAttack(tv0);
		if (f_35b_a1_b(tv0)) {
			@SendPlayerEnemy(tv0, f_525_a0_o());
		}
		Vector L0;
		@GetDirection(L0);
		Vector L1;
		L1 = f_345_a1_V(tv0);
		if (f_569_a2_f(L0, L1) < 0.9993908405303955) {
			return;
		}
		f_599_a0_v();
		@PlayAnimation("all", "attack_begin1");
		bool L2;
		Vector L3;
		Vector L4;
		@GetGeometryLocator("attack", L2, L3, L4);
		if (L2) {
			object L5;
			object L6;
			@GetScene(L6);
			@AddActorByType(L5, "light-dynamic", L6, L3, L4, "soldier_fire.xml");
		} else {
			@WaitForAnimEnd();
		}
		@Speak("shot");
		@GetDirection(L0);
		L1 = f_345_a1_V(tv0);
		L1.y += f_47f_a1_f(tv0);
		Vector L7;
		@RandVecCone3D(L7, L1, 0.03490658476948738);
		object L8;
		int L9;
		Vector L10;
		@GetVictimMaterial(L7, L8, L9, L10);
		if (L8 != null) {
			if (L8 == tv0) {
				float L11;
				L11 = f_36c_a3_f(tv0, 1.5, 1);
				@ReportHit(tv0, 2, L11, 1.5);
			} else {
				if (L9 != -1) {
					object L12;
					object L13;
					@GetScene(L12);
					@AddActorByType(L13, "scripted", L12, L10, [0.0, 0.0, 1.0], "richochet.xml");
					L13->SetScriptProperty("Material", L9);
				}
			}
		}
		@PlayAnimation("all", "attack_end1");
		@WaitForAnimEnd();
		@LockAnimationEnd("all", "attack_on");
	}

	void OnAttacked(object a0)
	{
		if (!f_3de_a1_b(a0)) {
			return;
		}
		f_6fb_a1_v(a0);
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

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_78a_a3_b(a0, a1, a2)) {
			OnAttacked(a0);
		}
	}
}

maintask t4
{
	var Vector tv0;
	var Vector tv1;

	void f_27c_a1_v(object a0)
	{
		f_331_a0_v();
	}

	void OnUse(object a0)
	{
		bool L0;
		g0->in(L0, a0);
		if (!L0) {
			f_27c_a1_v(a0);
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "attack") {
			object L0;
			L0 = f_354_a0_o();
			f_331_a0_v();
			f_713_a1_v(L0);
		}
	}

	void OnAttacked(object a0)
	{
		f_584_a2_b("quest_d10_01", "soldier_fight");
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
	}

	void OnUnload(void)
	{
		f_331_a0_v();
		t0{};
	}

	void OnHear(object a0)
	{
		bool L0;
		if (!f_3de_a1_b(a0)) {
			return;
		}
		g0->in(L0, a0);
		if (L0) {
			f_331_a0_v();
			t2{a0};
		}
	}

	void init(void)
	{
		f_6e9_a0_v();
		for (; ; ) {
			f_2dd_a0_v();
		}
	}

	void f_2ce_a0_v(void)
	{
	}

	void OnSee(object a0)
	{
		if (f_76e_a1_b(a0)) {
			f_331_a0_v();
			f_7a4_a1_v(a0);
		}
	}

	void f_2dd_a0_v(void)
	{
		@GetPFPosition(tv1);
		@GetDirection(tv0);
		for (; ; ) {
			int L0;
			bool L1;
			f_336_a0_v();
			@irand(L0, 10);
			@Sleep(L0 + 5, L1);
			if (L1) {
				f_2ce_a0_v();
			} else {
				for (; ; ) {
					Vector L2;
					f_336_a0_v();
					@GetPFPosition(L2);
					if (f_535_a2_f(tv1, L2) > 40000) {
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

void f_331_a0_v(void)
{
	@StopGroup0();
	@Stop();
}

void f_336_a0_v(void)
{
}

string f_337_a1_s(int a0)
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

Vector f_345_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_34c_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

object f_354_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_35b_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_360_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_36c_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_360_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_360_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_337_a1_s(a2);
	if (!f_360_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_539_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_540_a3_f(L4 - L5, 0, 1));
	if (f_35b_a1_b(a0)) {
		f_57a_a1_v(-L5);
	}
	return L5;
}

bool f_3b5_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_3ba_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_3b5_a1_b(a0)) {
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

bool f_3de_a1_b(object a0)
{
	int L0;
	if (!f_3ba_a1_b(a0)) {
		return false;
	}
	if (!f_360_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_3f6_a1_v(object a0)
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

void f_422_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_52b_a1_V(f_345_a1_V(a0));
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
			f_466_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_3f6_a1_v(a0);
}

void f_466_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_3f6_a1_v(a0);
}

void f_474_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

float f_47f_a1_f(object a0)
{
	float L0;
	float L1;
	@GetEyesHeight(L0);
	a0->GetEyesHeight(L1);
	return L1 - L0;
}

bool f_486_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_48b_a3_v(string a0, int a1, int a2)
{
	if (f_54b_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_496_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_54b_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

void f_4a5_a1_v(string a0)
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

bool f_4ce_a1_b(string a0)
{
	return a0 == "woman" || a0 == "worker" || a0 == "butcher" || a0 == "wasted_girl" || a0 == "boy" || a0 == "vaxxabitka" || a0 == "unosha" || a0 == "wasted_male" || a0 == "alkash" || a0 == "dohodyaga" || a0 == "vaxxabit" || a0 == "nudegirl" || a0 == "morlok";
}

object f_525_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_52b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_535_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return L0 | L0;
}

float f_539_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_540_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_54b_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

object f_550_a0_o(void)
{
	object L0;
	@CreateObjectSet(L0);
	return L0;
}

float f_556_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_55f_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_569_a2_f(Vector a0, Vector a1)
{
	return f_556_a2_f(a0, a1) / (f_55f_a1_f(a0) * f_55f_a1_f(a1));
}

void f_57a_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(15, L0);
}

bool f_584_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_590_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_599_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_525_a0_o(), L0);
}

int f_5a4_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_5aa_a1_v(object a0)
{
	if (f_5a4_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_5b7_a2_v(int a0, int a1)
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
	@AddItem(L1, f_623_a1_i("Money"), 0, L0);
}

void f_5d6_a1_v(string a0)
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

void f_5e7_a0_v(void)
{
	if (f_5a4_a0_i() != 1) {
		return;
	}
	f_5d6_a1_v("liver");
	f_5d6_a1_v("kidney");
	f_5d6_a1_v("heart");
	f_5d6_a1_v("blood");
}

void f_5ff_a0_v(void)
{
	int L0;
	bool L1;
	@ClearSubContainer(0);
	f_5b7_a2_v(500, 1000);
	f_496_a4_v("rifle_ammo", 1, 3, 3);
	f_496_a4_v("rusk", 1, 3, 2);
	f_48b_a3_v("bandage", 1, 6);
	f_48b_a3_v("tourniquet", 1, 6);
}

int f_623_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_628_a1_v(object a0)
{
	t1{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_422_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_466_a5_v(a0, a1, a2, a4, a5);
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
	if (f_35b_a1_b(a0)) {
		@ReportReputationChange(a0, f_525_a0_o(), 0.0, true);
	}
	f_7b8_a1_v(a0);
}

bool f_661_a2_b(object a0, bool a1)
{
	string L0;
	if (!f_360_a2_b(a0, "class")) {
		return false;
	}
	a0->GetProperty("class", L0);
	if (L0 == "patrol" || L0 == "sanitar" || L0 == "soldier" || L0 == "woman" || L0 == "wasted_girl" || L0 == "vaxxabitka" || L0 == "vaxxabit" || L0 == "little_girl" || L0 == "girl" || L0 == "dohodyaga" || L0 == "nudegirl") {
		return true;
	}
	if (a1) {
		return false;
	}
	return L0 == "worker" || L0 == "butcher" || L0 == "boy" || L0 == "unosha" || L0 == "wasted_male" || L0 == "alkash" || L0 == "morlok";
}

void f_6e9_a0_v(void)
{
	g0 = f_550_a0_o();
}

void f_6f0_a2_v(object a0, bool a1)
{
	t3{a0, a1};
	@ResetAAS();
}

void f_6fb_a1_v(object a0)
{
	bool L0;
	if (a0 == null) {
		return;
	}
	g0->in(L0, a0);
	if (!L0) {
		g0->add(a0);
	}
	if (f_35b_a1_b(a0)) {
		@ReportReputationChange(a0, f_525_a0_o(), 0.0);
	}
}

void f_713_a1_v(object a0)
{
	f_6fb_a1_v(a0);
	f_6f0_a2_v(a0, true);
}

bool f_71e_a1_b(object a0)
{
	if (!f_3de_a1_b(a0)) {
		return false;
	}
	if (f_35b_a1_b(a0)) {
		float L0;
		a0->GetProperty("reputation", L0);
		return L0 < 0.33000001311302185;
	}
	if (!f_360_a2_b(a0, "class")) {
		return false;
	}
	string L1;
	a0->GetProperty("class", L1);
	if (L1 == "bomber" || L1 == "hunter" || L1 == "grabitel") {
		return true;
	}
	if (!f_360_a2_b(a0, "disease")) {
		return false;
	}
	if (f_4ce_a1_b(L1) || L1 == "dog") {
		float L2;
		a0->GetProperty("disease", L2);
		return L2 > 0;
	}
	return false;
}

bool f_76e_a1_b(object a0)
{
	bool L0;
	if (!f_3de_a1_b(a0)) {
		return false;
	}
	g0->in(L0, a0);
	if (L0) {
		return true;
	}
	return f_71e_a1_b(a0);
}

void f_784_a1_v(object a0)
{
	f_7a4_a1_v(a0);
}

bool f_78a_a3_b(object a0, object a1, bool a2)
{
	if (f_661_a2_b(a1, !a2)) {
		bool L0;
		@CanSee(L0, a0);
		if (L0 || f_34c_a1_f(a0) <= 490000.0) {
			return true;
		}
	}
	return false;
}

void f_7a4_a1_v(object a0)
{
	bool L0;
	g0->in(L0, a0);
	if (L0) {
		f_6f0_a2_v(a0, true);
	}
}

void OnUnload(void)
{
	@RemoveActor(f_525_a0_o());
	@Hold();
}

void f_7b8_a1_v(object a0)
{
	f_628_a1_v(a0);
}

