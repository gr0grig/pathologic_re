event OnLoad 5;
event OnTrigger 26;
event OnUse 0;
event OnDeath 41;
event OnUnload 6;
event OnPropertyChange 16;
event OnHit2 43;

var bool g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_ef_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

maintask t1
{
	var int tv0;

	void OnTrigger(string a0)
	{
		if (a0 == "heal") {
			f_137_a2_b("quest_k11_01", "cure_officer");
		}
	}

	void OnUse(object a0)
	{
	}

	void init(void)
	{
		tv0 = 0;
		@RemoveEnvelope();
		@SetRTEnvelope(50, 40);
		if (!f_ef_a0_b()) {
			t0{};
		}
		for (; ; ) {
			bool L0;
			@Is3DSoundLoaded(L0, "agony");
			if (L0 && f_105_a1_b(0.3333333432674408)) {
				@PlayGlobalSound("agony", [0.0, 40.0, 0.0]);
			}
			@PlayAnimation("all", "agony");
			@Sleep(3.0);
		}
		for (; ; ) {
			@Hold();
		}
	}

	void OnDeath(object a0)
	{
		bool L0;
		if (tv0) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (L0) {
			bool L1;
			@IsDead(L1);
			if (!L1) {
				@SetDeathState();
				tv0 = -1;
				f_10a_a2_b(a0, -0.30000001192092896);
				@PlayGlobalSound("death", [0.0, 40.0, 0.0]);
				@PlayAnimation("all", "agony_die");
				@WaitForAnimEnd();
				@LockAnimationEnd("all", "agony_die");
			}
		}
	}

	void OnUnload(void)
	{
		global.OnUnload();
		f_90_a0_v();
		if (tv0) {
			@RemoveActor(f_f4_a0_o());
		}
		t0{};
	}

	void OnPropertyChange(object a0, string a1)
	{
		if (a1 == "agony") {
			float L0;
			@GetProperty("agony", L0);
			if (L0 < 0.0010000000474974513) {
				tv0 = 1;
			}
		}
		global.OnPropertyChange(a0, a1);
	}
}

void f_90_a0_v(void)
{
	@StopAnimation();
}

bool f_93_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_9f_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_93_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_fa_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_b5_a1_v(object a0)
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

void f_e1_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_b5_a1_v(a0);
}

bool f_ef_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_f4_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_fa_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_105_a1_b(float a0)
{
	float L0;
	@rand(L0);
	return L0 < a0;
}

bool f_10a_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_12d_a1_v(a1);
	f_9f_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_12d_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_137_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
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

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_e1_a5_v(a0, a1, a2, a4, a5);
}

void OnTrigger(string a0)
{
	if (a0 == "cleanup") {
		bool L0;
		g0 = true;
		@IsLoaded(L0);
		if (!L0) {
			@RemoveActor(f_f4_a0_o());
		}
	}
}

void OnUnload(void)
{
	if (g0) {
		@RemoveActor(f_f4_a0_o());
	}
}

