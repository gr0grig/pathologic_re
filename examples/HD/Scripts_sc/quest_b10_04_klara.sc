event OnTrigger 26;
event OnUnload 6;
event OnLoad 5;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

maintask t0
{
	var Vector tv0;
	var bool tv1;

	void f_0_a1_v(object a0)
	{
	}

	void init(void)
	{
		f_2b_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_18b_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv1 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv1) {
			@RemoveActor(f_18b_a0_o());
			@Hold();
		}
		f_96_a0_v();
	}

	void OnLoad(void)
	{
		f_a5_a0_v();
	}

	void f_2b_a0_v(void)
	{
		if (!f_142_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_db_a0_v();
		}
	}

	bool f_39_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_139_a1_b(L0);
	}

	void f_48_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_4d_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_127_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_63_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_6c_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_6c_a0_v();
			if (f_142_a0_b() && f_4d_a0_b()) {
				if (f_39_a0_b()) {
					f_147_a1_b(f_18b_a0_o());
				}
			} else {
				f_48_a0_v();
				f_63_a0_v();
			}
		}
	}

	void f_96_a0_v(void)
	{
		f_122_a0_v();
		f_6c_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_a5_a0_v(void)
	{
		@StopGroup0();
		f_6c_a0_v();
		f_16c_a1_v("Neutral");
		f_63_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_63_a0_v();
		} else {
			f_16c_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_122_a0_v();
			f_139_a1_b(a0);
			enable OnUse;
			f_0_a1_v(a0);
			f_16c_a1_v("Neutral");
			f_6c_a0_v();
			f_63_a0_v();
		}
	}
}

void f_db_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_142_a0_b()) {
		return;
	}
	L0 = f_198_a0_i();
	for (L1 = 0; L1 < 5 && f_142_a0_b(); L1++) {
		if (!L0) {
			bool L2;
			@Sleep(3, L2);
			if (!L2) {
				break;
			}
		} else {
			int L3;
			int L4;
			bool L5;
			@irand(L3, L0);
			@irand(L4, 5);
			if (L4 != 0) {
				L3 = 0;
			}
			@PlayAnimation("all", f_191_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_120_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_120_a0_b(void)
{
	return true;
}

void f_122_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_127_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_12f_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_139_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_12f_a1_b(L0);
}

bool f_142_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_147_a1_b(object a0)
{
	string L0;
	L0 = "c";
	int L1;
	L1 = 0;
	while (1) {
		bool L2;
		a0->HasProperty(L0 + (L1 + 1), L2);
		if (!L2) {
			break;
		}
		L1 = L1 + 1;
	}
	if (!L1) {
		return false;
	}
	int L3;
	L3 = 0;
	if (L1 > 1) {
		@irand(L3, L1);
	}
	string L4;
	a0->GetProperty(L0 + (L3 + 1), L4);
	return f_17c_a1_b(L4);
}

void f_16c_a1_v(string a0)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, false);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

bool f_17c_a1_b(string a0)
{
	if (f_1a9_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

object f_18b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

string f_191_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_198_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_191_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

bool f_1a9_a0_b(void)
{
	return true;
}

