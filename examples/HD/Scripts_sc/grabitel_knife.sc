event OnUnload 6;
event OnCollision 10;

property object Owner;
property Vector StartDirection;
property object Target;
var object g3;

maintask t0
{
	void init(void)
	{
		object L0;
		@CreateRigidBody(L0, [0.0, 0.0, 0.0], 50, StartDirection, [20.0, 20.0, 20.0], Owner);
		L0->Enable(true);
		g3 = L0;
		@Attach(L0);
		@FindGeometry("knife", L0);
		L0->SetRotation(StartDirection);
		L0->Enable(true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnUnload(void)
	{
		@RemoveActor(f_137_a0_o());
		@sync();
	}

	void OnCollision(object a0, object a1, Vector a2, Vector a3)
	{
		float L0;
		g3->Enable(false);
		@RemoveActor(f_137_a0_o());
		if (!a1 || !a1->FuncExist("GetScene", 1) || !f_11f_a1_b(a1)) {
			return;
		}
		L0 = f_8e_a3_f(a1, 0.8999999761581421, 0);
		if (f_11f_a1_b(Owner)) {
			@ReportAttack(a1, Owner);
			if (L0) {
				@ReportHit(a1, Owner, 1, L0, 0.8999999761581421);
				if (a1 == Target && f_d7_a1_b(a1)) {
					@Trigger(Owner, "kill");
				}
			}
		}
	}
}

string f_6f_a1_s(int a0)
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

bool f_7d_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_82_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_8e_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_82_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_82_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_6f_a1_s(a2);
	if (!f_82_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_13d_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_144_a3_f(L4 - L5, 0, 1));
	if (f_7d_a1_b(a0)) {
		f_14f_a1_v(-L5);
	}
	return L5;
}

bool f_d7_a1_b(object a0)
{
	float L0;
	if (!f_82_a2_b(a0, "health")) {
		return false;
	}
	if (f_7d_a1_b(a0) && f_160_a0_b()) {
		return false;
	}
	a0->GetProperty("health", L0);
	return L0 <= 0.0;
}

bool f_f6_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_fb_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_f6_a1_b(a0)) {
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

bool f_11f_a1_b(object a0)
{
	int L0;
	if (!f_fb_a1_b(a0)) {
		return false;
	}
	if (!f_82_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

object f_137_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_13d_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_144_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_14f_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

bool f_160_a0_b(void)
{
	bool L0;
	@GetVariable("god_mode", L0);
	return L0;
}

