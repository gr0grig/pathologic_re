event OnLoad 5;
event OnUse 0;
event OnDeath 41;
event OnUnload 6;
event OnPropertyChange 16;
event OnHit2 43;
event OnTrigger 26;

var bool g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_137_a0_b());
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

	void init(void)
	{
		@SetProperty("agony", 0.5);
		f_19_a0_v();
	}

	void f_15_a0_v(void)
	{
		f_1f6_a0_v();
	}

	void f_19_a0_v(void)
	{
		tv0 = 0;
		@RemoveEnvelope();
		@SetRTEnvelope(50, 40);
		if (!f_137_a0_b()) {
			t0{};
		}
		for (; ; ) {
			bool L0;
			@Is3DSoundLoaded(L0, "agony");
			if (L0 && f_167_a1_b(0.3333333432674408)) {
				@PlayGlobalSound("agony", [0.0, 40.0, 0.0]);
			}
			@PlayAnimation("all", "agony");
			@WaitForAnimEnd(L0);
			if (tv0 > 0) {
				if (L0) {
					@PlayGlobalSound("sleep", [0.0, 40.0, 0.0]);
					@PlayAnimation("all", "agony_sleep");
					@WaitForAnimEnd();
					@LockAnimationEnd("all", "agony_sleep");
				}
				@SetDeathState();
				f_15_a0_v();
				break;
			} else {
				if (tv0 < 0) {
					break;
				}
			}
		}
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsDead(L0);
		if (L0) {
			bool L1;
			@IsOverrideActive(L1);
			if (!L1) {
				@Barter(a0);
			}
		} else {
			float L2;
			bool L3;
			@GetProperty("agony", L2);
			if (L2 == 0) {
				return;
			}
			@IsOverrideActive(L3);
			if (!L3) {
				float L4;
				@ShowWindow("agony.xml", true, false, f_156_a0_o());
				@GetProperty("agony", L4);
				if (L4 < 0.0010000000474974513) {
					f_171_a2_b(a0, 0.20000000298023224);
				}
			}
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
				f_171_a2_b(a0, -0.30000001192092896);
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
		f_d8_a0_v();
		if (tv0) {
			@RemoveActor(f_156_a0_o());
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

void f_d8_a0_v(void)
{
	@StopAnimation();
}

bool f_db_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_e7_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_db_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_15c_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_fd_a1_v(object a0)
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

void f_129_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_fd_a1_v(a0);
}

bool f_137_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

void f_13c_a3_v(string a0, int a1, int a2)
{
	if (f_16c_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_147_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_16c_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

object f_156_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_15c_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_167_a1_b(float a0)
{
	float L0;
	@rand(L0);
	return L0 < a0;
}

bool f_16c_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

bool f_171_a2_b(object a0, float a1)
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
	f_194_a1_v(a1);
	f_e7_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_194_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

int f_19e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
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
	f_129_a5_v(a0, a1, a2, a4, a5);
}

void OnTrigger(string a0)
{
	if (a0 == "cleanup") {
		bool L0;
		g0 = true;
		@IsLoaded(L0);
		if (!L0) {
			@RemoveActor(f_156_a0_o());
		}
	}
}

void OnUnload(void)
{
	if (g0) {
		@RemoveActor(f_156_a0_o());
	}
}

void f_1d7_a2_v(int a0, int a1)
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
	@AddItem(L1, f_210_a1_i("Money"), 0, L0);
}

void f_1f6_a0_v(void)
{
	bool L0;
	f_1d7_a2_v(0, 10 + f_19e_a0_i() * 100);
	f_147_a4_v("bottle_water", 1, 4, 4);
	f_13c_a3_v("lockpick", 1, 6);
}

int f_210_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

