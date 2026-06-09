event evt_11 11;
event OnUnload 6;
event OnLoad 5;
event OnUse 0;
event OnTimer 7;

task t0
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			if (f_211_a0_b()) {
				f_167_a1_v("Neutral");
				@lshWaitForAnimEnd();
			} else {
				@WaitForAnimEnd();
				@PlayAnimation("all", "idle");
			}
			if (tv0) {
				return;
			}
		}
	}

	void evt_11(int a0)
	{
		if (f_211_a0_b()) {
			@lshStopAnimation();
		} else {
			@StopAnimation();
		}
		@StopTrade();
		tv0 = true;
	}
}

maintask t1
{
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;
	var bool tv5;
	var bool tv6;
	var bool tv7;
	var bool tv8;
	var bool tv9;
	var float tv10;

	void init(void)
	{
		if (!f_127_a0_b()) {
			@Hold();
		}
		while (true) {
			f_7a_a2_v(300, 100);
		}
	}

	void OnUnload(void)
	{
		f_bb_a0_v();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}

	void OnUse(object a0)
	{
		int L0;
		@GetVariable("tr_salesman_kabak", L0);
		if (L0 != f_19e_a0_i()) {
			@Trace("Updating salesman");
			@SetVariable("tr_salesman_kabak", f_19e_a0_i());
			f_66_a0_v();
		}
		if (f_12c_a1_b(a0)) {
			t0{a0};
			f_163_a1_v(a0);
		}
	}

	void f_66_a0_v(void)
	{
		int L0;
		L0 = f_19e_a0_i();
		@ClearSubContainer(0);
		f_1a7_a2_b(f_193_a0_o(), f_19e_a0_i());
	}

	void f_7a_a2_v(float a0, float a1)
	{
		if (!f_127_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_c9_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_95_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_11f_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_95_a0_b()) {
				if (!tv2) {
					f_16e_a1_v(tv4);
					tv2 = true;
				}
			} else {
				if (tv2) {
					@UnlookAsync("head");
					tv2 = false;
				}
			}
		}
	}

	void f_bb_a0_v(void)
	{
		f_11a_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_c9_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_127_a0_b()) {
		return;
	}
	L0 = f_200_a0_i();
	for (L1 = 0; L1 < 5 && f_127_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_1f9_a1_s(L3));
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
			} else {
				if (L1) {
					break;
				}
			}
		}
		if (!f_118_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_118_a0_b(void)
{
	return true;
}

void f_11a_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_11f_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_127_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_12c_a1_b(object a0)
{
	return f_134_a2_b(a0, 70);
}

bool f_134_a2_b(object a0, float a1)
{
	float L0;
	Vector L1;
	Vector L2;
	Vector L3;
	Vector L4;
	Vector L5;
	Vector L6;
	bool L7;
	a0->GetPosition(L1);
	a0->GetEyesHeight(L0);
	L1.y += L0;
	@GetPosition(L2);
	@GetEyesHeight(L0);
	L2.y += L0;
	L3 = L1 - L2;
	L3.y = 0;
	L3 = L3 / sqrt(L3 | L3);
	L4 = -L3;
	L5 = L3 * a1 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_163_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_167_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_16e_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_179_a4_v(object a0, string a1, int a2, int a3)
{
	if (f_199_a2_b(a2, a3)) {
		bool L0;
		a0->AddItem(L0, a1, 0);
	}
}

void f_184_a5_v(object a0, string a1, int a2, int a3, int a4)
{
	if (f_199_a2_b(a2, a3)) {
		int L0;
		bool L1;
		@irand(L0, a4);
		a0->AddItem(L1, a1, 0, a4 + 1);
	}
}

object f_193_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_199_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

int f_19e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1a7_a2_b(object a0, int a1)
{
	f_184_a5_v(a0, "coffee", 1, 1, 2);
	f_184_a5_v(a0, "tvirin", 1, 1, 2);
	f_179_a4_v(a0, "silver_ring", 1, 2);
	f_179_a4_v(a0, "gold_ring", 1, 2);
	f_179_a4_v(a0, "bracelet", 1, 2);
	f_179_a4_v(a0, "watch", 1, 2);
	f_179_a4_v(a0, "beads", 1, 2);
	f_179_a4_v(a0, "ear_ring", 1, 2);
	f_179_a4_v(a0, "flower", 1, 2);
	f_179_a4_v(a0, "hook", 1, 4);
	f_179_a4_v(a0, "morfin", 1, 4);
	return true;
}

string f_1f9_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_200_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1f9_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

bool f_211_a0_b(void)
{
	return false;
}

