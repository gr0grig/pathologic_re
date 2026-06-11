event OnSee 1;
event OnHear 3;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnDeath 41;
event OnTimer 7;
event OnCollision 10;
event OnActorStuck 28;
event OnUse 0;
event OnHit 22;
event OnPropertyChange 16;
event OnStopSee 2;
event OnUnload 6;

maintask t0
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		f_63e_a0_v();
		for (; ; ) {
			@SetTimer(90, 10);
			f_63_a0_v();
		}
	}

	void OnSee(object a0)
	{
		if (f_5d3_a1_b(a0)) {
			f_3d_a0_v();
			f_5da_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_5c4_a1_b(a0)) {
			f_3d_a0_v();
			f_5cb_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		f_3d_a0_v();
		f_5e4_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_619_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void f_3d_a0_v(void)
	{
		@KillTimer(90);
		f_a3_a0_v();
	}

	void OnDeath(object a0)
	{
		f_3d_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 == 90) {
			float L0;
			@SetTimer(90, 1);
			@GetBrightness(L0);
			if (L0 < 0.10000000149011612) {
				f_3d_a0_v();
				t7{};
			}
		}
	}

	void f_63_a0_v(void)
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
					@FollowPath(L5, f_aa_a0_b(), L6);
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

	void f_a3_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	bool f_aa_a0_b(void)
	{
		return false;
	}
}

task t1
{
	void init(object a0)
	{
		f_54a_a0_v();
		f_b5_a1_v(a0);
	}

	void f_b5_a1_v(object a0)
	{
		disable OnUse;
		f_cc_a1_v(a0);
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

	void f_cc_a1_v(object a0)
	{
		if (a0 == null) {
			f_123_a1_v("fdie");
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

	void f_123_a1_v(string a0)
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
	var Vector tv0;
	var object tv1;
	var object tv2;

	void init(object a0)
	{
		f_183_a2_v(a0, false);
	}

	void OnSee(object a0)
	{
		if (f_5d3_a1_b(a0)) {
			f_1e5_a0_v();
			f_5da_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		f_1e5_a0_v();
		f_5e4_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_619_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	bool f_169_a2_b(object a0, object a1)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			return false;
		}
		if (!f_63f_a1_b(a1)) {
			return false;
		}
		@IsPlayerActor(a1, L0);
		return L0;
	}

	bool f_17c_a1_b(object a0)
	{
		return f_63f_a1_b(a0);
	}

	void f_183_a2_v(object a0, bool a1)
	{
		tv1 = a0;
		tv1->GetPFPosition(tv0);
		@SetTimer(61, 0.5);
		do {
			bool L0;
			@FindPathTo(tv2, tv0);
			if (tv2 == null) {
				@Trace("Can't find path to noise source");
				break;
			}
			@FollowPath(tv2, a1, L0);
			if (!L0) {
				if (tv2 == null) {
					break;
				}
			} else {
				@KillTimer(61);
				tv1 = t6{tv1};
				@SetTimer(61, 0.5);
				if (tv1 == null) {
					break;
				}
				tv1->GetPFPosition(tv0);
			}
		} while (tv2 != null);
		@KillTimer(61);
	}

	void OnTimer(int a0)
	{
		if (a0 == 61) {
			if (!f_17c_a1_b(tv1)) {
				@Stop();
				tv2 = null;
			}
			@ResetAAS();
		}
	}

	void OnHear(object a0)
	{
		if (a0 == tv1) {
			if (!f_17c_a1_b(tv1)) {
				f_1e5_a0_v();
				tv2 = null;
				return;
			}
		} else {
			if (f_169_a2_b(a0, tv1)) {
				tv1 = a0;
			}
		}
		tv1->GetPFPosition(tv0);
		@Trace("new hunt point");
		@Stop();
	}

	void OnActorStuck(void)
	{
		@Stop();
	}

	void f_1e5_a0_v(void)
	{
		@KillTimer(61);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_1e5_a0_v();
		global.OnDeath(a0);
	}
}

task t3
{
	void OnSee(object a0)
	{
		if (f_5d3_a1_b(a0)) {
			f_26a_a0_v();
			f_5da_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_5c4_a1_b(a0)) {
			f_26a_a0_v();
			f_5cb_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		f_26a_a0_v();
		f_5e4_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_619_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_4f8_a0_b()) {
			return;
		}
		L0 = f_51b_a0_i();
		L1 = 0;
		for (; L1 < 5 && f_4f8_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_514_a1_s(L3));
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

	void f_26a_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t4
{
	var object tv0;
	var bool tv1;

	void init(object a0)
	{
		bool L0;
		tv0 = a0;
		@CanSee(tv1, a0);
		f_4a9_a1_b(a0);
		if (!f_491_a1_b(a0)) {
			return;
		}
		@Face(a0);
		@IsPlayerActor(a0, L0);
		while (f_491_a1_b(tv0)) {
			if (!tv1) {
				@StopAsync();
				tv0 = t5{};
				if (tv0 == null) {
					break;
				}
				@CanSee(tv1, tv0);
				@Face(tv0);
			}
			@ReportAttack(tv0);
			Vector L1;
			@GetPosition(L1);
			Vector L2;
			tv0->GetPosition(L2);
			int L3;
			L3 = f_5a0_a1_i(f_503_a2_f(L2, L1));
			@PlayAnimation("all", "attack_begin" + L3);
			@WaitForAnimEnd();
			if (tv0 == null) {
				break;
			}
			@PlayAnimation("all", "attack_end" + L3);
			object L4;
			@GetScene(L4);
			Vector L5;
			bool L6;
			@GetGeometryLocator("attack" + L3, L6, L1, L5);
			object L7;
			@AddActorByType(L7, "scripted", L4, L1, [0.0, 0.0, 1.0], "grenade.xml");
			L7->SetScriptProperty("Owner", f_4fd_a0_o());
			tv0->GetPosition(L2);
			if (L0) {
				float L8;
				float L9;
				L0 = false;
				@RandVec2D(L8, L9);
				L2.x += L8 * 500;
				L2.z += L9 * 500;
			}
			float L10;
			L10 = f_574_a3_f(L1, L2, L5);
			if (L10 < 0) {
				L10 = f_5ae_a1_f(L3);
			} else {
				L10 = f_5b6_a2_f(L3, L10);
			}
			L7->SetScriptProperty("StartVelocity", L5 * L10);
			L7->SetScriptProperty("DamageAmount", 0.800000011920929);
			L7->SetScriptProperty("DamageType", 1);
			@WaitForAnimEnd();
			if (L3 == 1) {
				int L11;
				@irand(L11, 2);
				@Speak("scream" + (L11 + 1));
				@PlayAnimation("all", "scream" + (L11 + 1));
				@WaitForAnimEnd();
			}
		}
		@StopAsync();
	}

	void OnSee(object a0)
	{
		if (a0 == tv0) {
			tv1 = true;
		}
	}

	void OnStopSee(object a0)
	{
		if (a0 == tv0) {
			tv1 = false;
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		f_619_a2_b(a0, a1);
	}
}

task t5
{
	var object tv0;

	object init(void)
	{
		@Sleep(5);
		return tv0;
	}

	void OnSee(object a0)
	{
		f_34b_a1_v(a0);
	}

	void OnStopSee(object a0)
	{
		if (a0 == tv0) {
			tv0 = null;
		}
	}

	void OnAttacked(object a0)
	{
		f_34b_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_619_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void f_34b_a1_v(object a0)
	{
		if (tv0 == null && f_63f_a1_b(a0)) {
			tv0 = a0;
			@StopGroup0();
		}
	}
}

task t6
{
	var float tv0;
	var float tv1;
	var object tv2;

	object init(object a0)
	{
		bool L0;
		int L1;
		@GetSeeThreshold(tv0);
		@GetSeeFOV(tv1);
		@SetSeeThreshold(tv0 / 1.5);
		tv2 = a0;
		for (L1 = 0; L1 < 3; L1++) {
			@SetSeeFOV(tv1 * 1.7999999523162842);
			@PlayAnimation("all", "hunt");
			@WaitForAnimEnd(L0);
			@SetSeeFOV(tv1);
			if (!L0) {
				break;
			}
			@Sleep(2, L0);
			if (!L0) {
				break;
			}
		}
		f_3c3_a0_v();
		if (L0) {
			tv2 = null;
		}
		return tv2;
	}

	void OnSee(object a0)
	{
		if (f_5d3_a1_b(a0)) {
			f_3c3_a0_v();
			f_5da_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		bool L0;
		@IsPlayerActor(tv2, L0);
		if (L0) {
			return;
		}
		if (!f_63f_a1_b(a0)) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (L0) {
			tv2 = a0;
			@Stop();
			@StopGroup0();
		}
	}

	void OnAttacked(object a0)
	{
		f_3c3_a0_v();
		f_5e4_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_619_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void f_3c3_a0_v(void)
	{
		@SetSeeThreshold(tv0);
		@SetSeeFOV(tv1);
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_3c3_a0_v();
		global.OnDeath(a0);
	}
}

task t7
{
	void init(void)
	{
		@SetTimer(91, 20);
		f_43a_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_5d3_a1_b(a0)) {
			f_40e_a0_v();
			f_5da_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (f_5c4_a1_b(a0)) {
			f_40e_a0_v();
			f_5cb_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		f_40e_a0_v();
		f_5e4_a1_v(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_619_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void f_40e_a0_v(void)
	{
		@KillTimer(91);
		@Stop();
		f_44f_a0_v();
	}

	void OnDeath(object a0)
	{
		f_40e_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 == 91) {
			f_40e_a0_v();
		}
	}
}

bool f_428_a0_b(void)
{
	float L0;
	@rand(L0);
	if (L0 < 0.30000001192092896) {
		bool L1;
		@PlayAnimation("all", "hunt");
		@WaitForAnimEnd(L1);
		if (!L1) {
			return true;
		}
	}
	return false;
}

void f_43a_a0_v(void)
{
	for (; ; ) {
		float L0;
		float L1;
		bool L2;
		@RandVec2D(L0, L1);
		@Rotate(L0, L1, L2);
		if (!L2) {
			break;
		}
		if (f_428_a0_b()) {
			break;
		}
		@Sleep(5, L2);
		if (!L2) {
			break;
		}
	}
}

void f_44f_a0_v(void)
{
	@Stop();
	@StopGroup0();
}

float f_454_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_45c_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_468_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_46d_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_468_a1_b(a0)) {
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

bool f_491_a1_b(object a0)
{
	int L0;
	if (!f_46d_a1_b(a0)) {
		return false;
	}
	if (!f_45c_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

bool f_4a9_a1_b(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	bool L3;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@Rotate(L2.x, L2.z, L3);
	return L3;
}

void f_4b5_a3_v(object a0, int a1, float a2)
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

bool f_4f8_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_4fd_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_503_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return sqrt(L0 | L0);
}

bool f_508_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_514_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_51b_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_514_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_52c_a2_v(int a0, int a1)
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

void f_54a_a0_v(void)
{
	int L0;
	bool L1;
	@ClearSubContainer(0);
	f_52c_a2_v(500, 1000);
	@irand(L0, 4);
	if (L0 != 0) {
		@AddItem(L1, f_56f_a1_i("rifle_ammo"), 0, L0);
	}
	@irand(L0, 3);
	if (L0 == 0) {
		@AddItem(L1, f_56f_a1_i("rusk"), 0, 1);
	}
}

int f_56f_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

float f_574_a3_f(Vector a0, Vector a1, Vector a2)
{
	float L0;
	float L1;
	float L2;
	float L3;
	float L4;
	L0 = sqrt(a2.x * a2.x + a2.z * a2.z);
	L1 = a2.y / L0;
	L2 = sqrt((a0.x - a1.x) * (a0.x - a1.x) + (a0.z - a1.z) * (a0.z - a1.z));
	L3 = 500.0 / (L2 * L1 - (a1.y - a0.y));
	if (L3 < 0) {
		return -1;
	}
	L4 = L2 / L0 * sqrt(L3);
	return L4;
}

int f_5a0_a1_i(float a0)
{
	if (a0 < 200) {
		return 1;
	} else {
		if (a0 < 600) {
			return 2;
		}
	}
	return 3;
}

float f_5ae_a1_f(int a0)
{
	if (a0 == 1) {
		return 30;
	}
	return 700;
}

float f_5b6_a2_f(int a0, float a1)
{
	if (a1 < 10) {
		return 10;
	} else {
		if (a1 > 1500) {
			return 1500;
		}
	}
	return a1;
}

bool f_5c4_a1_b(object a0)
{
	return f_63f_a1_b(a0);
}

void f_5cb_a1_v(object a0)
{
	t2{a0};
}

bool f_5d3_a1_b(object a0)
{
	return f_63f_a1_b(a0);
}

void f_5da_a1_v(object a0)
{
	t4{a0};
	@ResetAAS();
}

void f_5e4_a1_v(object a0)
{
	f_668_a1_v(a0);
	t4{a0};
	@ResetAAS();
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_4b5_a3_v(a0, a1, a2);
}

void f_5fa_a1_v(object a0)
{
	f_672_a1_v(a0);
	t1{a0};
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
	f_5fa_a1_v(a0);
}

bool f_619_a2_b(object a0, object a1)
{
	string L0;
	bool L1;
	if (!f_45c_a2_b(a1, "class")) {
		return false;
	}
	a1->GetProperty("class", L0);
	if (L0 != "bomber") {
		return false;
	}
	@CanSee(L1, a0);
	if (L1 || f_454_a1_f(a0) <= 160000.0) {
		return true;
	}
	return false;
}

void f_63e_a0_v(void)
{
}

bool f_63f_a1_b(object a0)
{
	if (!f_491_a1_b(a0)) {
		return false;
	}
	if (!f_45c_a2_b(a0, "health")) {
		return false;
	}
	if (f_45c_a2_b(a0, "class")) {
		string L0;
		a0->GetProperty("class", L0);
		if (L0 == "rat" || L0 == "bomber") {
			return false;
		}
	}
	return true;
}

void f_668_a1_v(object a0)
{
}

void OnUnload(void)
{
	@RemoveActor(f_4fd_a0_o());
	@Hold();
}

void f_672_a1_v(object a0)
{
	f_508_a2_b("quest_d6_02", "gorbun_death");
}

