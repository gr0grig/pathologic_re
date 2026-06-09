event OnLoad 5;
event OnTrigger 26;
event OnUnload 6;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_155_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

maintask t1
{
	var Vector tv0;
	var bool tv1;

	void f_d_a1_v(object a0)
	{
	}

	void init(void)
	{
		f_38_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_195_a0_o());
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
			@RemoveActor(f_195_a0_o());
			@Hold();
		}
		f_a9_a0_v();
	}

	void OnLoad(void)
	{
		f_b8_a0_v();
	}

	void f_38_a0_v(void)
	{
		if (!f_155_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_ee_a0_v();
		}
	}

	bool f_4c_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_14c_a1_b(L0);
	}

	void f_5b_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_60_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_13a_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_76_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_7f_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_7f_a0_v();
			if (f_155_a0_b() && f_60_a0_b()) {
				if (f_4c_a0_b()) {
					f_15a_a1_b(f_195_a0_o());
				}
			} else {
				f_5b_a0_v();
				f_76_a0_v();
			}
		}
	}

	void f_a9_a0_v(void)
	{
		f_135_a0_v();
		f_7f_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_b8_a0_v(void)
	{
		@StopGroup0();
		f_7f_a0_v();
		f_17f_a1_v("Neutral");
		f_76_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_76_a0_v();
		} else {
			f_17f_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_135_a0_v();
			f_14c_a1_b(a0);
			enable OnUse;
			f_d_a1_v(a0);
			f_17f_a1_v("Neutral");
			f_7f_a0_v();
			f_76_a0_v();
		}
	}
}

void f_ee_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_155_a0_b()) {
		return;
	}
	L0 = f_1a2_a0_i();
	for (L1 = 0; L1 < 5 && f_155_a0_b(); L1++) {
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
			@PlayAnimation("all", f_19b_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_133_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_133_a0_b(void)
{
	return true;
}

void f_135_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_13a_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_142_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_14c_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_142_a1_b(L0);
}

bool f_155_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_15a_a1_b(object a0)
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
	return f_186_a1_b(L4);
}

void f_17f_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

bool f_186_a1_b(string a0)
{
	if (f_1b3_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

object f_195_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

string f_19b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1a2_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_19b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

bool f_1b3_a0_b(void)
{
	return true;
}

