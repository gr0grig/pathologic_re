event OnCollision 10;
event OnUnload 6;

property object Owner;
property Vector StartVelocity;
property float DamageAmount;
property int DamageType;
var object g4;
var object g5;

maintask t0
{
	void OnCollision(object a0, object a1, Vector a2, Vector a3)
	{
		object L0;
		object L1;
		bool L2;
		object L3;
		Vector L4;
		Vector L5;
		float L6;
		float L7;
		object L8;
		object L9;
		disable OnCollision;
		@Trace("on collision");
		g5->Enable(false);
		@PlayGlobalSound("bottle", [0.0, 0.0, 0.0], 1, 300);
		@PlayLoopedGlobalSound(L0, "fire_loop", [0.0, 10.0, 0.0], 200);
		if (L0 != null) {
			L0->FadeIn(1.0);
		}
		@Intersect(a2, 300.0, L2, L1);
		L4 = f_e5_a0_V();
		while (L1->Next(L2, L3), L2) {
			L5 = f_ea_a1_V(L3);
			L6 = 1.0 - f_13b_a2_f(L5, L4) / 300.0;
			if (L6 < 0.4000000059604645) {
				L6 = 0.4000000059604645;
			}
			if (L6 > 0.800000011920929) {
				L6 = 1;
			}
			L6 = L6 * DamageAmount;
			L7 = f_fb_a3_f(L3, L6, DamageType);
			@ReportHit(L3, Owner, 3, L7, L6);
			@Trace("Hit: " + L3);
		}
		L1 = null;
		@SetPosition(a2);
		@FindGeometry("grenade", L8);
		L8->Enable(false);
		@FindParticleSystem("grenadefire", L9);
		if (L9 == null) {
			@Trace("Can't find fire particle system");
			return;
		}
		L9->AddSource([0.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0);
		L9->AddSource([50.0, 0.0, 50.0], [0.0, 1.0, 0.0], 0);
		L9->AddSource([-50.0, 0.0, 50.0], [0.0, 1.0, 0.0], 0);
		L9->AddSource([-50.0, 0.0, -50.0], [0.0, 1.0, 0.0], 0);
		L9->AddSource([50.0, 0.0, -50.0], [0.0, 1.0, 0.0], 0);
		L9->AddSource([25.0, 0.0, 25.0], [0.0, 1.0, 0.0], 0);
		L9->AddSource([-25.0, 0.0, 25.0], [0.0, 1.0, 0.0], 0);
		L9->AddSource([-25.0, 0.0, -25.0], [0.0, 1.0, 0.0], 0);
		L9->AddSource([25.0, 0.0, -25.0], [0.0, 1.0, 0.0], 0);
		L9->Enable();
		L9->Fade(false);
		g4->Fade();
		@Sleep(10.0);
		L9->Fade();
		if (L0 != null) {
			L0->FadeOut(1.0);
		}
		@Sleep(2.0);
		@SetDeathStateAndRemove();
	}

	void init(void)
	{
		object L0;
		object L1;
		object L2;
		@CreateRigidBody(L0, [0.0, 0.0, 0.0], 50, StartVelocity, [2.0, 2.0, 2.0], Owner);
		L0->Enable(true);
		g5 = L0;
		@FindParticleSystem("smoke", L1);
		L1->AddSource([0.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0);
		L1->Enable(true);
		L1->Fade(false);
		g4 = L1;
		@FindGeometry("grenade", L2);
		L2->Enable(true);
		@Attach(L0);
		for (; ; ) {
			@Hold();
		}
	}

	void OnUnload(void)
	{
		@SetDeathStateAndRemove();
		@sync();
	}
}

string f_dd_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

Vector f_e5_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_ea_a1_V(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return L0;
}

bool f_ef_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_fb_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_ef_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_ef_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_dd_a1_s(a2);
	if (!f_ef_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_140_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_147_a3_f(L4 - L5, 0, 1));
	return L5;
}

float f_13b_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return sqrt(L0 | L0);
}

float f_140_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_147_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

