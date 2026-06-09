event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnUnload 6;

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
		if (!f_1ac_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2ff_a0_i());
		L0->SetNPCDescription(f_2fd_a0_i());
		L0->SetPhoto(f_301_a0_s());
		L0->SetPhoto2(f_303_a0_s());
		L0->SetPlayerName(f_2ec_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_203_a1_b(f_2c2_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1f1_a1_v(a0);
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
			if (!f_2e0_a1_b(tv1)) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(539199);
				tv0->ClearReplies();
				tv0->AddReply(540975, 43646, 43065);
				tv0->AddReply(539200, 43646, 41143);
				break;
			}
			f_a5_a1_v("Neutral");
			tv0->SetMessage(539201);
			tv0->ClearReplies();
			tv0->AddReply(539202, -1, 41145);
			tv0->AddReply(540976, -1, 43066);
			break;
			return;
		}
		if (f_305_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_28d_a1_v(tv2);
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

	void f_a5_a1_v(string a0)
	{
		if (!f_305_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_29d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_2bb_a0_v();
			if (a0 == 41142) {
				if (!f_2e0_a1_b(tv1)) {
					f_a5_a1_v("Neutral");
					tv0->SetMessage(539199);
					tv0->ClearReplies();
					tv0->AddReply(540975, 43646, 43065);
					tv0->AddReply(539200, 43646, 41143);
					return;
				}
				f_a5_a1_v("Neutral");
				tv0->SetMessage(539201);
				tv0->ClearReplies();
				tv0->AddReply(539202, -1, 41145);
				tv0->AddReply(540976, -1, 43066);
				return;
			}
			if (a0 == 43646) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(541486);
				tv0->ClearReplies();
				tv0->AddReply(541487, 43653, 43647);
				tv0->AddReply(541488, 43649, 43648);
				return;
			}
			if (a0 == 43649) {
				f_a5_a1_v("Isee");
				tv0->SetMessage(541489);
				tv0->ClearReplies();
				tv0->AddReply(541490, 45215, 43650);
				tv0->AddReply(541491, 43653, 43651);
				return;
			}
			if (a0 == 43653) {
				f_a5_a1_v("Confusion");
				tv0->SetMessage(541492);
				tv0->ClearReplies();
				tv0->AddReply(541493, 43657, 43655);
				tv0->AddReply(541494, 45215, 43656);
				return;
			}
			if (a0 == 43657) {
				f_a5_a1_v("Confusion");
				tv0->SetMessage(541495);
				tv0->ClearReplies();
				tv0->AddReply(541496, 45215, 43658);
				tv0->AddReply(541497, 45215, 43659);
				return;
			}
			if (a0 == 45215) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(542795);
				tv0->ClearReplies();
				tv0->AddReply(542797, -1, 45220);
				tv0->AddReply(542796, -1, 45219);
				return;
			}
			tv3 = true;
			if (f_305_a0_b()) {
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
	var bool tv0;

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_1aa_a0_b()) {
				@RemoveActor(f_2c2_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_1aa_a0_b()) {
			@RemoveActor(f_2c2_a0_o());
		}
	}
}

bool f_1aa_a0_b(void)
{
	return true;
}

bool f_1ac_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_2c8_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_305_a0_b()) {
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

void f_1f1_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_305_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_203_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_23d_a1_b(a0)) {
			if (!f_262_a1_b(a0)) {
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
		if (!f_262_a1_b(a0)) {
			if (!f_23d_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_23d_a1_b(object a0)
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
	return f_2ac_a1_b(L4);
}

bool f_262_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_2d7_a0_i() + "m";
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
	return f_2ac_a1_b(L4);
}

void f_28d_a1_v(string a0)
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

void f_29d_a2_v(string a0, bool a1)
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

bool f_2ac_a1_b(string a0)
{
	if (f_305_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_2bb_a0_v(void)
{
	if (f_305_a0_b()) {
		@lshStopSpeech();
	}
}

object f_2c2_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_2c8_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2d2_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_2d7_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_2e0_a1_b(object a0)
{
	if (f_2d2_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

int f_2ec_a0_i(void)
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

int f_2fd_a0_i(void)
{
	return 515527;
}

int f_2ff_a0_i(void)
{
	return 513334;
}

string f_301_a0_s(void)
{
	return "ui/NPC_Aglaja.png";
}

string f_303_a0_s(void)
{
	return "ui/NPC_Aglaja_b.png";
}

bool f_305_a0_b(void)
{
	return true;
}

