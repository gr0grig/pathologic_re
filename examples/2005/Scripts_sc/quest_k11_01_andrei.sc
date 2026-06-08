event OnLoad 5;
event evt_11 11;
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
		} while (!f_26b_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_2c5_a1_b(f_372_a0_o());
		if (!f_270_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3cd_a0_i());
		L0->SetNPCDescription(f_3cb_a0_i());
		L0->SetPhoto(f_3cf_a0_s());
		L0->SetPhoto2(f_3d1_a0_s());
		L0->SetPlayerName(f_3ba_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2b4_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t2
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
			f_a2_a1_v("Neutral");
			tv0->SetMessage(528036);
			tv0->ClearReplies();
			if (f_3ae_a1_b(tv1)) {
				tv0->AddReply(528037, 29400, 29399);
			}
			tv0->AddReply(528040, -1, 29402);
			tv0->AddReply(541066, -1, 43171);
			break;
			return;
		}
		if (f_3d3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_34f_a1_v(tv2);
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

	void f_a2_a1_v(string a0)
	{
		if (!f_3d3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_356_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_36b_a0_v();
			if (a1 == 29399) {
				f_3a8_a2_v(tv1, tv0);
			}
			if (a0 == 29398) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(528036);
				tv0->ClearReplies();
				if (f_3ae_a1_b(tv1)) {
					tv0->AddReply(528037, 29400, 29399);
				}
				tv0->AddReply(528040, -1, 29402);
				tv0->AddReply(541066, -1, 43171);
				return;
			}
			if (a0 == 29400) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(528038);
				tv0->ClearReplies();
				tv0->AddReply(528039, 43172, 29401);
				return;
			}
			if (a0 == 43172) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541067);
				tv0->ClearReplies();
				tv0->AddReply(541068, -1, 43173);
				tv0->AddReply(541069, -1, 43174);
				return;
			}
			tv3 = true;
			if (f_3d3_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t3
{
	var Vector tv0;
	var bool tv1;

	void f_11d_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_14e_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_372_a0_o());
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
			@RemoveActor(f_372_a0_o());
			@Hold();
		}
		f_1bf_a0_v();
	}

	void OnLoad(void)
	{
		f_1ce_a0_v();
	}

	void f_14e_a0_v(void)
	{
		if (!f_26b_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_204_a0_v();
		}
	}

	bool f_162_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_262_a1_b(L0);
	}

	void f_171_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_176_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_250_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_18c_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_195_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_195_a0_v();
			if (f_26b_a0_b() && f_176_a0_b()) {
				if (f_162_a0_b()) {
					f_2ff_a1_b(f_372_a0_o());
				}
			} else {
				f_171_a0_v();
				f_18c_a0_v();
			}
		}
	}

	void f_1bf_a0_v(void)
	{
		f_24b_a0_v();
		f_195_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_1ce_a0_v(void)
	{
		@StopGroup0();
		f_195_a0_v();
		f_34f_a1_v("Neutral");
		f_18c_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_18c_a0_v();
		} else {
			f_34f_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_24b_a0_v();
			f_262_a1_b(a0);
			enable OnUse;
			f_11d_a1_v(a0);
			f_34f_a1_v("Neutral");
			f_195_a0_v();
			f_18c_a0_v();
		}
	}
}

void f_204_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_26b_a0_b()) {
		return;
	}
	L0 = f_397_a0_i();
	for (L1 = 0; L1 < 5 && f_26b_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_390_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_249_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_249_a0_b(void)
{
	return true;
}

void f_24b_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_250_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_258_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_262_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_258_a1_b(L0);
}

bool f_26b_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_270_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_378_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_3d3_a0_b()) {
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

void f_2b4_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_3d3_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2c5_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_2ff_a1_b(a0)) {
			if (!f_324_a1_b(a0)) {
				return false;
			}
		}
		@irand(L1, 2);
		if (L1) {
			@SetVariable("voice_common", (L0 + 1) % 3);
		} else {
			@SetVariable("voice_common", 0);
		}
	} else {
		if (!f_324_a1_b(a0)) {
			if (!f_2ff_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_2ff_a1_b(object a0)
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
	return f_35c_a1_b(L4);
}

bool f_324_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_387_a0_i() + "m";
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
	return f_35c_a1_b(L4);
}

void f_34f_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_356_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_35c_a1_b(string a0)
{
	if (f_3d3_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_36b_a0_v(void)
{
	if (f_3d3_a0_b()) {
		@lshStopSpeech();
	}
}

object f_372_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_378_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_382_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_387_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_390_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_397_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_390_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_3a8_a2_v(object a0, object a1)
{
	@SetVariable("ook11Andrei1", 1);
}

bool f_3ae_a1_b(object a0)
{
	if (f_382_a1_i("ook11Andrei1") == 0) {
		return true;
	}
	return false;
}

int f_3ba_a0_i(void)
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

int f_3cb_a0_i(void)
{
	return 515529;
}

int f_3cd_a0_i(void)
{
	return 502855;
}

string f_3cf_a0_s(void)
{
	return "ui/NPC_Andrei.png";
}

string f_3d1_a0_s(void)
{
	return "ui/NPC_Andrei_b.png";
}

bool f_3d3_a0_b(void)
{
	return true;
}

