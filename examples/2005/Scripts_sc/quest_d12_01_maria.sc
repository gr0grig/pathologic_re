event OnDialogReply 11;
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
		f_207_a1_b(f_2b4_a0_o());
		if (!f_1b2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2f7_a0_i());
		L0->SetNPCDescription(f_2f5_a0_i());
		L0->SetPhoto(f_2f9_a0_s());
		L0->SetPhoto2(f_2fb_a0_s());
		L0->SetPlayerName(f_2e4_a0_i());
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
		f_1f6_a1_v(a0);
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
			f_90_a1_v("Neutral");
			tv0->SetMessage(535639);
			tv0->ClearReplies();
			if (f_2d8_a1_b(tv1)) {
				tv0->AddReply(535640, 42495, 37326);
			}
			tv0->AddReply(540495, -1, 42494);
			break;
			return;
		}
		if (f_2fd_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_291_a1_v(tv2);
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

	void f_90_a1_v(string a0)
	{
		if (!f_2fd_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_298_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_2ad_a0_v();
			if (a1 == 37326) {
				f_2d2_a2_v(tv1, tv0);
			}
			if (a0 == 37325) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(535639);
				tv0->ClearReplies();
				if (f_2d8_a1_b(tv1)) {
					tv0->AddReply(535640, 42495, 37326);
				}
				tv0->AddReply(540495, -1, 42494);
				return;
			}
			if (a0 == 42495) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(540496);
				tv0->ClearReplies();
				tv0->AddReply(540500, 42500, 42499);
				tv0->AddReply(540498, -1, 42497);
				return;
			}
			if (a0 == 42500) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(540501);
				tv0->ClearReplies();
				tv0->AddReply(540497, 42498, 42496);
				return;
			}
			if (a0 == 42498) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(540499);
				tv0->ClearReplies();
				tv0->AddReply(540502, 42502, 42501);
				tv0->AddReply(540511, 42511, 42510);
				return;
			}
			if (a0 == 42511) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(540512);
				tv0->ClearReplies();
				tv0->AddReply(540513, 42504, 42512);
				tv0->AddReply(540514, -1, 42514);
				return;
			}
			if (a0 == 42502) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(540503);
				tv0->ClearReplies();
				tv0->AddReply(540504, 42504, 42503);
				tv0->AddReply(540506, -1, 42505);
				return;
			}
			if (a0 == 42504) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(540505);
				tv0->ClearReplies();
				tv0->AddReply(540507, 42507, 42506);
				return;
			}
			if (a0 == 42507) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(540508);
				tv0->ClearReplies();
				tv0->AddReply(540509, -1, 42508);
				tv0->AddReply(540510, -1, 42509);
				return;
			}
			tv3 = true;
			if (f_2fd_a0_b()) {
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
		f_180_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_180_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_1b0_a0_b()) {
				@RemoveActor(f_2b4_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_1b0_a0_b()) {
			@RemoveActor(f_2b4_a0_o());
		}
	}
}

bool f_1b0_a0_b(void)
{
	return true;
}

bool f_1b2_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_2ba_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_2fd_a0_b()) {
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

void f_1f6_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_2fd_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_207_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_241_a1_b(a0)) {
			if (!f_266_a1_b(a0)) {
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
		if (!f_266_a1_b(a0)) {
			if (!f_241_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_241_a1_b(object a0)
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
	return f_29e_a1_b(L4);
}

bool f_266_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_2c9_a0_i() + "m";
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
	return f_29e_a1_b(L4);
}

void f_291_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_298_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_29e_a1_b(string a0)
{
	if (f_2fd_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_2ad_a0_v(void)
{
	if (f_2fd_a0_b()) {
		@lshStopSpeech();
	}
}

object f_2b4_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_2ba_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2c4_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_2c9_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_2d2_a2_v(object a0, object a1)
{
	@SetVariable("ood12MariaSobor1", 1);
}

bool f_2d8_a1_b(object a0)
{
	if (f_2c4_a1_i("ood12MariaSobor1") == 0) {
		return true;
	}
	return false;
}

int f_2e4_a0_i(void)
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

int f_2f5_a0_i(void)
{
	return 515543;
}

int f_2f7_a0_i(void)
{
	return 502868;
}

string f_2f9_a0_s(void)
{
	return "ui/NPC_Maria.png";
}

string f_2fb_a0_s(void)
{
	return "ui/NPC_Maria_b.png";
}

bool f_2fd_a0_b(void)
{
	return true;
}

