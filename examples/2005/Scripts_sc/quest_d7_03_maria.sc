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
		f_1e8_a1_b(f_295_a0_o());
		if (!f_193_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2d8_a0_i());
		L0->SetNPCDescription(f_2d6_a0_i());
		L0->SetPhoto(f_2da_a0_s());
		L0->SetPhoto2(f_2dc_a0_s());
		L0->SetPlayerName(f_2c5_a0_i());
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
		f_1d7_a1_v(a0);
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
			if (f_2b9_a1_b(tv1)) {
				f_2b3_a2_v(tv1, tv0);
				f_a9_a1_v("Neutral");
				tv0->SetMessage(533260);
				tv0->ClearReplies();
				tv0->AddReply(533261, 34776, 34775);
				tv0->AddReply(535781, 34776, 37465);
				break;
			}
			f_a9_a1_v("Neutral");
			tv0->SetMessage(533258);
			tv0->ClearReplies();
			tv0->AddReply(533259, -1, 34773);
			tv0->AddReply(535778, -1, 37462);
			break;
			return;
		}
		if (f_2de_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_272_a1_v(tv2);
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

	void f_a9_a1_v(string a0)
	{
		if (!f_2de_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_279_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_28e_a0_v();
			if (a0 == 34774) {
				if (f_2b9_a1_b(tv1)) {
					f_2b3_a2_v(tv1, tv0);
					f_a9_a1_v("Neutral");
					tv0->SetMessage(533260);
					tv0->ClearReplies();
					tv0->AddReply(533261, 34776, 34775);
					tv0->AddReply(535781, 34776, 37465);
					return;
				}
				f_a9_a1_v("Neutral");
				tv0->SetMessage(533258);
				tv0->ClearReplies();
				tv0->AddReply(533259, -1, 34773);
				tv0->AddReply(535778, -1, 37462);
				return;
			}
			if (a0 == 34776) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(533262);
				tv0->ClearReplies();
				tv0->AddReply(533263, 37460, 34777);
				tv0->AddReply(535782, 37467, 37466);
				return;
			}
			if (a0 == 37467) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(535783);
				tv0->ClearReplies();
				tv0->AddReply(535784, 37463, 37468);
				return;
			}
			if (a0 == 37460) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(535776);
				tv0->ClearReplies();
				tv0->AddReply(535777, 37463, 37461);
				return;
			}
			if (a0 == 37463) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(535779);
				tv0->ClearReplies();
				tv0->AddReply(535780, -1, 37464);
				tv0->AddReply(535785, -1, 37469);
				return;
			}
			tv3 = true;
			if (f_2de_a0_b()) {
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

	void OnUse(object a0)
	{
		t0{a0};
	}

	void init(void)
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
			if (!L0 && f_191_a0_b()) {
				@RemoveActor(f_295_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_191_a0_b()) {
			@RemoveActor(f_295_a0_o());
		}
	}
}

bool f_191_a0_b(void)
{
	return true;
}

bool f_193_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_29b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_2de_a0_b()) {
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

void f_1d7_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_2de_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1e8_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_222_a1_b(a0)) {
			if (!f_247_a1_b(a0)) {
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
		if (!f_247_a1_b(a0)) {
			if (!f_222_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_222_a1_b(object a0)
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
	return f_27f_a1_b(L4);
}

bool f_247_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_2aa_a0_i() + "m";
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
	return f_27f_a1_b(L4);
}

void f_272_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_279_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_27f_a1_b(string a0)
{
	if (f_2de_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_28e_a0_v(void)
{
	if (f_2de_a0_b()) {
		@lshStopSpeech();
	}
}

object f_295_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_29b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2a5_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_2aa_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_2b3_a2_v(object a0, object a1)
{
	@SetVariable("ood7MariaPetr1", 1);
}

bool f_2b9_a1_b(object a0)
{
	if (f_2a5_a1_i("ood7MariaPetr1") == 0) {
		return true;
	}
	return false;
}

int f_2c5_a0_i(void)
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

int f_2d6_a0_i(void)
{
	return 515543;
}

int f_2d8_a0_i(void)
{
	return 502868;
}

string f_2da_a0_s(void)
{
	return "ui/NPC_Maria.png";
}

string f_2dc_a0_s(void)
{
	return "ui/NPC_Maria_b.png";
}

bool f_2de_a0_b(void)
{
	return true;
}

