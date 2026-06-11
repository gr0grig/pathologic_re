event OnSee 1;
event OnHear 3;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnTimer 7;
event OnUse 0;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;

var object g0;
var object g1;
var float g2;
var bool g3;
var object g4;

maintask t0
{
	void init(void)
	{
		Vector L0;
		f_300_a0_v();
		@SetTimer(75, 0.5);
		@GetDirection(L0);
		for (; ; ) {
			bool L1;
			@Hold();
			while (@Rotate(L0.x, L0.z, L1), !L1) {
			}
		}
	}

	void OnSee(object a0)
	{
		if (f_470_a1_b(a0)) {
			f_5f_a2_v(a0, false);
		}
	}

	void OnHear(object a0)
	{
		if (f_47e_a1_b(a0)) {
			f_5f_a2_v(a0, false);
		}
	}

	void OnAttacked(object a0)
	{
		if (f_23f_a1_b(a0)) {
			f_3b2_a1_v(a0);
			f_5f_a2_v(a0, true);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_3e6_a2_b(a0, a1)) {
			if (f_23f_a1_b(a0)) {
				f_3b2_a1_v(a0);
				f_5f_a2_v(a0, false);
			}
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 75) {
			@ResetAAS();
		} else {
			f_40e_a1_v(a0);
		}
	}

	void f_5f_a2_v(object a0, bool a1)
	{
		@StopGroup0();
		t1{a0, a1};
	}
}

task t1
{
	var object tv0;
	var bool tv1;

	void init(object a0, bool a1)
	{
		tv0 = a0;
		tv1 = a1;
		@Face(tv0);
		do {
			f_329_a1_v(true);
			@SetAttackState(true);
			@PlayAnimation("all", "attack_on");
			@WaitForAnimEnd();
			for (; ; ) {
				if ((tv0 == null || !tv1) && (!f_4a6_a1_b(tv0) || !f_463_a1_b(tv0))) {
					break;
				}
				f_380_a1_v(tv0);
				@WaitForAnimEnd();
			}
			tv0 = null;
			@SetAttackState(false);
			f_329_a1_v(false);
			@StopAsync();
			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
		} while (tv0 != null);
	}

	void OnSee(object a0)
	{
		if (tv1) {
			return;
		}
		if (f_470_a1_b(a0) && f_48c_a2_b(tv0, a0)) {
			tv0 = a0;
			@Face(a0);
		}
	}

	void OnHear(object a0)
	{
		if (tv1) {
			return;
		}
		if (f_47e_a1_b(a0) && f_48c_a2_b(tv0, a0)) {
			tv0 = a0;
			@Face(a0);
		}
	}

	void OnAttacked(object a0)
	{
		f_3b2_a1_v(a0);
		if (!f_23f_a1_b(a0) || !f_463_a1_b(a0)) {
			return;
		}
		tv0 = a0;
		tv1 = true;
		@Face(a0);
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_3e6_a2_b(a0, a1)) {
			OnAttacked(a0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 75) {
			@ResetAAS();
		} else {
			f_40e_a1_v(a0);
		}
	}
}

task t2
{
	void init(object a0)
	{
		@KillTimer(75);
		f_11d_a1_v(a0);
	}

	void f_11d_a1_v(object a0)
	{
		@KillTimer(70);
		f_329_a1_v(false);
		@RemoveActor(g0);
		f_2d6_a0_v();
		f_130_a1_v(a0);
	}

	void f_130_a1_v(object a0)
	{
		disable OnUse;
		f_147_a1_v(a0);
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

	void f_147_a1_v(object a0)
	{
		if (a0 == null) {
			f_19e_a1_v("fdie");
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

	void f_19e_a1_v(string a0)
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

string f_1ba_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

float f_1c2_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1ca_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_1d6_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_1ca_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_1ca_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_1ba_a1_s(a2);
	if (!f_1ca_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_2a0_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_2a7_a3_f(L4 - L5, 0, 1));
	return L5;
}

bool f_216_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_21b_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_216_a1_b(a0)) {
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

bool f_23f_a1_b(object a0)
{
	int L0;
	if (!f_21b_a1_b(a0)) {
		return false;
	}
	if (!f_1ca_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_257_a3_v(object a0, int a1, float a2)
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

object f_29a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_2a0_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_2a7_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_2b2_a0_o(void)
{
	object L0;
	@CreateObjectSet(L0);
	return L0;
}

void f_2b8_a2_v(int a0, int a1)
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

void f_2d6_a0_v(void)
{
	int L0;
	bool L1;
	@ClearSubContainer(0);
	f_2b8_a2_v(600, 1500);
	@irand(L0, 200);
	if (L0 != 0) {
		@AddItem(L1, f_2fb_a1_i("ognemet_ammo"), 0, L0);
	}
	@irand(L0, 3);
	if (L0 == 0) {
		@AddItem(L1, f_2fb_a1_i("rusk"), 0, 1);
	}
}

int f_2fb_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_300_a0_v(void)
{
	float L0;
	object L1;
	object L2;
	g4 = f_2b2_a0_o();
	@GetAttackDistance(L0);
	g2 = L0 / 600.0;
	@GetScene(L1);
	@AddActorByType(L2, "flame", L1, [0.0, 0.0, 0.0]);
	L2->Attach(f_29a_a0_o(), "flame");
	g3 = false;
	L2->SetLength(0.05000000074505806);
	g0 = L2;
	@SetTimer(70, 0.10000000149011612);
}

void f_329_a1_v(bool a0)
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

void f_361_a1_v(Vector a0)
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

void f_380_a1_v(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	if (a0->FuncExist("@GetHeight", 1)) {
		float L1;
		a0->GetHeight(L1);
		L0.y += L1 / 2;
	}
	f_361_a1_v(L0);
}

bool f_393_a1_b(object a0)
{
	bool L0;
	float L1;
	if (!f_23f_a1_b(a0)) {
		return false;
	}
	g4->in(L0, a0);
	if (L0) {
		return true;
	}
	if (!f_1ca_a2_b(a0, "disease")) {
		return false;
	}
	a0->GetProperty("disease", L1);
	return L1 > 0;
}

void f_3b2_a1_v(object a0)
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

void f_3c3_a1_v(object a0)
{
	t2{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_257_a3_v(a0, a1, a2);
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
	f_3c3_a1_v(a0);
}

bool f_3e6_a2_b(object a0, object a1)
{
	float L0;
	bool L1;
	if (!f_1ca_a2_b(a1, "reputation")) {
		return false;
	}
	a1->GetProperty("reputation", L0);
	if (L0 < 0.5) {
		return false;
	}
	@CanSee(L1, a0);
	if (L1 || f_1c2_a1_f(a0) <= 160000.0) {
		@ReportReputationChange(a0, a1, -0.20000000298023224);
		return true;
	}
	return false;
}

void f_40e_a1_v(int a0)
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
	g0->SetLength(g3 ? f_2a0_a2_f(L1, g2) : 0.05000000074505806);
	while (L0->Next(L3, L2), L3) {
		if (L2 != null && L2 != f_29a_a0_o()) {
			float L4;
			L4 = f_1d6_a3_f(L2, 0.10000000149011612, 1);
			if (f_1ca_a2_b(L2, "disease")) {
				float L5;
				L2->GetProperty("disease", L5);
				if (L5 <= 0.019999999552965164) {
					L5 = 0;
				} else {
					L5 = L5 - 0.019999999552965164;
				}
				L2->SetProperty("disease", L5);
			}
			if (f_1ca_a2_b(L2, "fire")) {
				float L6;
				L2->GetProperty("fire", L6);
				L2->SetProperty("fire", L6 + 0.10000000149011612);
			}
		}
	}
}

bool f_463_a1_b(object a0)
{
	return a0 != null && f_1c2_a1_f(a0) <= 302500.0;
}

bool f_470_a1_b(object a0)
{
	return f_4a6_a1_b(a0) && f_463_a1_b(a0);
}

bool f_47e_a1_b(object a0)
{
	return f_4a6_a1_b(a0) && f_463_a1_b(a0);
}

bool f_48c_a2_b(object a0, object a1)
{
	if (a1 == null) {
		return false;
	}
	return !f_4a6_a1_b(a0) || f_1c2_a1_f(a1) < f_1c2_a1_f(a0) - 25;
}

bool f_4a6_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0 || f_393_a1_b(a0);
}

