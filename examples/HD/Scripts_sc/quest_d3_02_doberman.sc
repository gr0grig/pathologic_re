event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnUnload 6;
event OnTimer 7;

var object g0;

task t0
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_1f0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2b3_a0_i());
		L0->SetNPCDescription(f_2b1_a0_i());
		L0->SetPhoto(f_2b5_a0_s());
		L0->SetPhoto2(f_2b7_a0_s());
		L0->SetPlayerName(f_2ce_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_235_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t1
{
	var object tv0;
	var object tv1;
	var string tv2;
	var bool tv3;

	void init(object a0, object a1)
	{
		tv0 = a1;
		tv1 = a0;
		tv3 = false;
		while (1) {
			f_89_a1_v("Neutral");
			tv0->SetMessage(535420);
			tv0->ClearReplies();
			if (f_2c2_a1_b(tv1)) {
				tv0->AddReply(535421, 37102, 37101);
			}
			tv0->AddReply(535424, -1, 37104);
			break;
			return;
		}
		if (f_2b9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_247_a1_v(tv2);
			}
		} else {
			@PlayAnimation("all", "idle");
			for (; ; ) {
				@WaitForAnimEnd();
				if (tv3) {
					break;
				}
				@PlayAnimation("all", "idle");
			}
		}
	}

	void f_89_a1_v(string a0)
	{
		if (!f_2b9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_257_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_271_a0_v();
			if (a1 == 37103) {
				f_2bb_a2_v(tv1, tv0);
			}
			if (a0 == 37100) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(535420);
				tv0->ClearReplies();
				if (f_2c2_a1_b(tv1)) {
					tv0->AddReply(535421, 37102, 37101);
				}
				tv0->AddReply(535424, -1, 37104);
				return;
			}
			if (a0 == 37102) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(535422);
				tv0->ClearReplies();
				tv0->AddReply(535423, -1, 37103);
				return;
			}
			tv3 = true;
			if (f_2b9_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t2
{
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;
	var bool tv5;
	var bool tv6;

	void init(void)
	{
		f_f9_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_17f_a0_v();
		t0{a0};
	}

	void f_f9_a2_v(float a0, float a1)
	{
		tv6 = false;
		for (; ; ) {
			float L0;
			bool L1;
			@rand(L0, 3);
			@Sleep(L0 + 3, L1);
			tv6 = true;
			f_13e_a2_v(a0, a1);
			tv6 = false;
		}
	}

	void f_10b_a0_v(void)
	{
		tv5 = true;
		if (!f_1eb_a0_b() && f_13c_a0_b()) {
			@RemoveActor(f_278_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_10b_a0_v();
		}
	}

	void OnUnload(void)
	{
		if (tv6) {
			f_17f_a0_v();
		}
		if (tv5 && f_13c_a0_b()) {
			@RemoveActor(f_278_a0_o());
		}
	}

	bool f_13c_a0_b(void)
	{
		return true;
	}

	void f_13e_a2_v(float a0, float a1)
	{
		if (!f_1eb_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_18d_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_159_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_1e3_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_159_a0_b()) {
				if (!tv2) {
					f_266_a1_v(tv4);
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

	void f_17f_a0_v(void)
	{
		f_1de_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_18d_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1eb_a0_b()) {
		return;
	}
	L0 = f_2a0_a0_i();
	for (L1 = 0; L1 < 5 && f_1eb_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_299_a1_s(L3));
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
		if (!f_1dc_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1dc_a0_b(void)
{
	return true;
}

void f_1de_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1e3_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1eb_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1f0_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_27e_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_2b9_a0_b()) {
	} else {
		bool L8;
		@HasAnimationTrack(L8, "head");
		if (L8) {
			@LookAsyncCamera("head");
		}
	}
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_235_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_2b9_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_247_a1_v(string a0)
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

void f_257_a2_v(string a0, bool a1)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, a1);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

void f_266_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_271_a0_v(void)
{
	if (f_2b9_a0_b()) {
		@lshStopSpeech();
	}
}

object f_278_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_27e_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_288_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_28d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_299_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_2a0_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_299_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_2b1_a0_i(void)
{
	return 518097;
}

int f_2b3_a0_i(void)
{
	return 518096;
}

string f_2b5_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_2b7_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_2b9_a0_b(void)
{
	return false;
}

void f_2bb_a2_v(object a0, object a1)
{
	f_28d_a2_b("quest_d3_02", "teleport");
}

bool f_2c2_a1_b(object a0)
{
	if (f_288_a1_i("d3q02") == 3) {
		return true;
	}
	return false;
}

int f_2ce_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	if (L0 == 0) {
		return 1;
	} else {
		if (L0 == 1) {
			return 2;
		}
	}
	return 3;
}

