event OnTimer 7;

var float g0;
var bool g1;
var object g2;
var object g3;

maintask t0
{
	void init(void)
	{
		bool L0;
		f_a7_a0_v();
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd(L0);
		f_11f_a1_v(true);
		for (; ; ) {
			@PlayAnimation("all", "cattack");
			@WaitForAnimEnd(L0);
		}
	}
}

string f_16_a1_s(int a0)
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

bool f_24_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_29_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_35_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_29_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_29_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_16_a1_s(a2);
	if (!f_29_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_84_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_8b_a3_f(L4 - L5, 0, 1));
	if (f_24_a1_b(a0)) {
		f_96_a1_v(-L5);
	}
	return L5;
}

object f_7e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_84_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_8b_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_96_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

void f_a7_a0_v(void)
{
	float L0;
	object L1;
	object L2;
	@GetAttackDistance(L0);
	g0 = L0 / 600.0;
	@GetScene(L1);
	@AddActorByType(L2, "flame", L1, [0.0, 0.0, 0.0]);
	L2->Attach(f_7e_a0_o(), "flame");
	g1 = false;
	L2->SetLength(0.05000000074505806);
	g2 = L2;
	@SetTimer(70, 0.10000000149011612);
}

void OnTimer(int a0)
{
	object L0;
	float L1;
	object L2;
	bool L3;
	if (a0 != 70) {
		return;
	}
	if (g2 == null) {
		return;
	}
	g2->Intersect(L0, L1);
	g2->SetLength(g1 ? f_84_a2_f(L1, g0) : 0.05000000074505806);
	while (L0->Next(L3, L2), L3) {
		if (L2 != null && L2 != f_7e_a0_o()) {
			float L4;
			L4 = f_35_a3_f(L2, 0.10000000149011612, 2);
			if (f_29_a2_b(L2, "disease")) {
				float L5;
				L2->GetProperty("disease", L5);
				if (L5 <= 0.019999999552965164) {
					L5 = 0;
				} else {
					L5 = L5 - 0.019999999552965164;
				}
				L2->SetProperty("disease", L5);
			}
			if (f_29_a2_b(L2, "fire")) {
				float L6;
				L2->GetProperty("fire", L6);
				L2->SetProperty("fire", L6 + 0.10000000149011612);
			}
		}
	}
}

void f_11f_a1_v(bool a0)
{
	float L0;
	float L1;
	if (a0) {
		L0 = g0;
	} else {
		L0 = 0.05000000074505806;
	}
	g2->GetLength(L1);
	if (L0 < L1) {
		L1 = L0;
	}
	g2->SetLength(L1);
	if (g1 != a0) {
		if (a0) {
			if (g3 == null) {
				object L2;
				Vector L3;
				float L4;
				L3 = [0.0, 0.0, 0.0];
				@GetHeight(L4);
				L3.y = L4;
				@PlayLoopedGlobalSound(L2, "flame_loop", L3, 0, 200);
				g3 = L2;
			}
			g3->FadeIn(2);
		} else {
			if (g3 != null) {
				g3->FadeOut(2);
			}
		}
		g1 = a0;
	}
}

