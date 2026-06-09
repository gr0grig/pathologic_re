event OnSee 1;
event OnHear 3;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnTimer 7;
event OnUse 0;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnHit2 43;

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
		f_4fe_a0_v();
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
		if (f_6ce_a1_b(a0)) {
			f_60_a2_v(a0, false);
		}
	}

	void OnHear(object a0)
	{
		if (f_6dc_a1_b(a0)) {
			f_60_a2_v(a0, false);
		}
	}

	void OnAttacked(object a0)
	{
		if (f_27a_a1_b(a0)) {
			f_5f7_a1_v(a0);
			f_60_a2_v(a0, true);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_643_a3_b(a0, a1, a2)) {
			if (f_27a_a1_b(a0)) {
				f_5f7_a1_v(a0);
				f_60_a2_v(a0, false);
			}
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 75) {
			@ResetAAS();
		} else {
			f_65d_a1_v(a0);
		}
	}

	void f_60_a2_v(object a0, bool a1)
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
			f_527_a1_v(true);
			@SetAttackState(true);
			@PlayAnimation("all", "attack_on");
			@WaitForAnimEnd();
			for (; ; ) {
				if ((tv0 == null || !tv1) && (!f_704_a1_b(tv0) || !f_6c1_a1_b(tv0))) {
					break;
				}
				f_57e_a1_v(tv0);
				@WaitForAnimEnd();
			}
			tv0 = null;
			@SetAttackState(false);
			f_527_a1_v(false);
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
		if (f_6ce_a1_b(a0) && f_6ea_a2_b(tv0, a0)) {
			tv0 = a0;
			@Face(a0);
		}
	}

	void OnHear(object a0)
	{
		if (tv1) {
			return;
		}
		if (f_6dc_a1_b(a0) && f_6ea_a2_b(tv0, a0)) {
			tv0 = a0;
			@Face(a0);
		}
	}

	void OnAttacked(object a0)
	{
		f_5f7_a1_v(a0);
		if (!f_27a_a1_b(a0) || !f_6c1_a1_b(a0)) {
			return;
		}
		tv0 = a0;
		tv1 = true;
		@Face(a0);
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_643_a3_b(a0, a1, a2)) {
			OnAttacked(a0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 75) {
			@ResetAAS();
		} else {
			f_65d_a1_v(a0);
		}
	}
}

task t2
{
	void init(object a0)
	{
		@KillTimer(75);
		if (f_1f7_a1_b(a0)) {
			object L0;
			@GetScene(L0);
			L0->RemoveStationaryActor(f_39f_a0_o());
		}
		f_12c_a1_v(a0);
	}

	void f_12c_a1_v(object a0)
	{
		bool L0;
		@KillTimer(70);
		f_527_a1_v(false);
		@RemoveActor(g0);
		@IsPlayerActor(a0, L0);
		if (L0) {
			f_443_a0_v();
		}
		f_42b_a0_v();
		f_146_a1_v(a0);
	}

	void f_146_a1_v(object a0)
	{
		disable OnUse;
		f_15f_a1_v(a0);
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
			f_3ee_a1_v(a0);
		}
	}

	void f_15f_a1_v(object a0)
	{
		if (a0 == null) {
			f_1ba_a1_v("fdie");
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
			f_31f_a1_v(L4);
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

	void f_1ba_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_31f_a1_v(a0);
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

string f_1da_a1_s(int a0)
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

Vector f_1e8_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_1ef_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1f7_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_1fc_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_208_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_1fc_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_1fc_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_1da_a1_s(a2);
	if (!f_1fc_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_3af_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_3b6_a3_f(L4 - L5, 0, 1));
	if (f_1f7_a1_b(a0)) {
		f_3cc_a1_v(-L5);
	}
	return L5;
}

bool f_251_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_256_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_251_a1_b(a0)) {
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

bool f_27a_a1_b(object a0)
{
	int L0;
	if (!f_256_a1_b(a0)) {
		return false;
	}
	if (!f_1fc_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_292_a1_v(object a0)
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

void f_2be_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_3a5_a1_V(f_1e8_a1_V(a0));
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
			f_302_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_292_a1_v(a0);
}

void f_302_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_292_a1_v(a0);
}

void f_310_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_3c1_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

void f_31f_a1_v(string a0)
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

bool f_348_a1_b(string a0)
{
	return a0 == "woman" || a0 == "worker" || a0 == "butcher" || a0 == "wasted_girl" || a0 == "boy" || a0 == "vaxxabitka" || a0 == "unosha" || a0 == "wasted_male" || a0 == "alkash" || a0 == "dohodyaga" || a0 == "vaxxabit" || a0 == "nudegirl" || a0 == "morlok";
}

object f_39f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_3a5_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_3af_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_3b6_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_3c1_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

object f_3c6_a0_o(void)
{
	object L0;
	@CreateObjectSet(L0);
	return L0;
}

void f_3cc_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

void f_3dd_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_39f_a0_o(), L0);
}

int f_3e8_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_3ee_a1_v(object a0)
{
	if (f_3e8_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_3fb_a2_v(int a0, int a1)
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
	@AddItem(L1, f_471_a1_i("Money"), 0, L0);
}

void f_41a_a1_v(string a0)
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

void f_42b_a0_v(void)
{
	if (f_3e8_a0_i() != 1) {
		return;
	}
	f_41a_a1_v("liver");
	f_41a_a1_v("kidney");
	f_41a_a1_v("heart");
	f_41a_a1_v("blood");
}

void f_443_a0_v(void)
{
	int L0;
	bool L1;
	@ClearSubContainer(0);
	f_3fb_a2_v(600, 1500);
	f_310_a4_v("rusk", 1, 3, 2);
	f_310_a4_v("alpha_pills", 1, 3, 5);
	f_310_a4_v("beta_pills", 1, 6, 4);
	f_310_a4_v("gamma_pills", 1, 12, 3);
	@AddItem(L1, f_471_a1_i("ognemet_ammo"), 0, 1);
}

int f_471_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

bool f_476_a2_b(object a0, bool a1)
{
	string L0;
	if (!f_1fc_a2_b(a0, "class")) {
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

void f_4fe_a0_v(void)
{
	float L0;
	object L1;
	object L2;
	g4 = f_3c6_a0_o();
	@GetAttackDistance(L0);
	g2 = L0 / 600.0;
	@GetScene(L1);
	@AddActorByType(L2, "flame", L1, [0.0, 0.0, 0.0]);
	L2->Attach(f_39f_a0_o(), "flame");
	g3 = false;
	L2->SetLength(0.05000000074505806);
	g0 = L2;
	@SetTimer(70, 0.10000000149011612);
}

void f_527_a1_v(bool a0)
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

void f_55f_a1_v(Vector a0)
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

void f_57e_a1_v(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	if (a0->FuncExist("@GetHeight", 1)) {
		float L1;
		a0->GetHeight(L1);
		L0.y += L1 / 2;
	}
	f_55f_a1_v(L0);
}

bool f_591_a1_b(object a0)
{
	if (!f_27a_a1_b(a0)) {
		return false;
	}
	bool L0;
	g4->in(L0, a0);
	if (L0) {
		return true;
	}
	if (f_1f7_a1_b(a0)) {
		float L1;
		float L2;
		a0->GetProperty("reputation", L1);
		if (L1 < 0.33000001311302185) {
			return true;
		}
		a0->GetProperty("disease", L2);
		return L2 > 0.33000001311302185;
	}
	if (!f_1fc_a2_b(a0, "class")) {
		return false;
	}
	string L3;
	a0->GetProperty("class", L3);
	if (L3 == "bomber" || L3 == "hunter" || L3 == "grabitel" || L3 == "rat_big") {
		return true;
	}
	if (!f_1fc_a2_b(a0, "disease")) {
		return false;
	}
	if (f_348_a1_b(L3) || L3 == "dog") {
		float L4;
		a0->GetProperty("disease", L4);
		return L4 > 0;
	}
	return false;
}

void f_5f7_a1_v(object a0)
{
	bool L0;
	if (a0 == null) {
		return;
	}
	g4->in(L0, a0);
	if (!L0) {
		g4->add(a0);
	}
	if (f_1f7_a1_b(a0)) {
		@ReportReputationChange(a0, f_39f_a0_o(), -0.07000000029802322);
	}
}

void f_60f_a1_v(object a0)
{
	@ReportReputationChange(a0, f_39f_a0_o(), -0.12999999523162842, true);
	t2{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_2be_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_302_a5_v(a0, a1, a2, a4, a5);
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
	f_60f_a1_v(a0);
}

bool f_643_a3_b(object a0, object a1, bool a2)
{
	if (f_476_a2_b(a1, !a2)) {
		bool L0;
		@CanSee(L0, a0);
		if (L0 || f_1ef_a1_f(a0) <= 490000.0) {
			return true;
		}
	}
	return false;
}

void f_65d_a1_v(int a0)
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
	g0->SetLength(g3 ? f_3af_a2_f(L1, g2) : 0.05000000074505806);
	f_3dd_a0_v();
	while (L0->Next(L3, L2), L3) {
		if (L2 != null && L2 != f_39f_a0_o()) {
			string L4;
			if (f_1fc_a2_b(L2, "class")) {
				L2->GetProperty("class", L4);
			}
			if (L4 != "sanitar") {
				float L5;
				L5 = f_208_a3_f(L2, 0.10000000149011612, 2);
				if (f_1fc_a2_b(L2, "disease")) {
					float L6;
					L2->GetProperty("disease", L6);
					if (L6 <= 0.10000000149011612) {
						L6 = 0;
					} else {
						L6 = L6 - 0.10000000149011612;
					}
					L2->SetProperty("disease", L6);
				}
				if (f_1fc_a2_b(L2, "fire")) {
					float L7;
					L2->GetProperty("fire", L7);
					L2->SetProperty("fire", L7 + 0.10000000149011612);
				}
			}
		}
	}
}

bool f_6c1_a1_b(object a0)
{
	return a0 != null && f_1ef_a1_f(a0) <= 302500.0;
}

bool f_6ce_a1_b(object a0)
{
	return f_704_a1_b(a0) && f_6c1_a1_b(a0);
}

bool f_6dc_a1_b(object a0)
{
	return f_704_a1_b(a0) && f_6c1_a1_b(a0);
}

bool f_6ea_a2_b(object a0, object a1)
{
	if (a1 == null) {
		return false;
	}
	return !f_704_a1_b(a0) || f_1ef_a1_f(a1) < f_1ef_a1_f(a0) - 25;
}

bool f_704_a1_b(object a0)
{
	return f_591_a1_b(a0);
}

