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
		f_17e_a1_b(f_22b_a0_o());
		if (!f_129_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_268_a0_i());
		L0->SetNPCDescription(f_266_a0_i());
		L0->SetPhoto(f_26a_a0_s());
		L0->SetPhoto2(f_26c_a0_s());
		L0->SetPlayerName(f_255_a0_i());
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
		f_16d_a1_v(a0);
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
			if (!f_249_a1_b(tv1)) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(539204);
				tv0->ClearReplies();
				tv0->AddReply(539205, -1, 41148);
				break;
			}
			f_9b_a1_v("Neutral");
			tv0->SetMessage(539206);
			tv0->ClearReplies();
			tv0->AddReply(539207, -1, 41150);
			break;
			return;
		}
		if (f_26e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_208_a1_v(tv2);
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

	void f_9b_a1_v(string a0)
	{
		if (!f_26e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_20f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_224_a0_v();
			if (a0 == 41147) {
				if (!f_249_a1_b(tv1)) {
					f_9b_a1_v("Neutral");
					tv0->SetMessage(539204);
					tv0->ClearReplies();
					tv0->AddReply(539205, -1, 41148);
					return;
				}
				f_9b_a1_v("Neutral");
				tv0->SetMessage(539206);
				tv0->ClearReplies();
				tv0->AddReply(539207, -1, 41150);
				return;
			}
			tv3 = true;
			if (f_26e_a0_b()) {
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
		f_f7_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_f7_a0_v(void)
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
			if (!L0 && f_127_a0_b()) {
				@RemoveActor(f_22b_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_127_a0_b()) {
			@RemoveActor(f_22b_a0_o());
		}
	}
}

bool f_127_a0_b(void)
{
	return true;
}

bool f_129_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_231_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_26e_a0_b()) {
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

void f_16d_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_26e_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_17e_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1b8_a1_b(a0)) {
			if (!f_1dd_a1_b(a0)) {
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
		if (!f_1dd_a1_b(a0)) {
			if (!f_1b8_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1b8_a1_b(object a0)
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
	return f_215_a1_b(L4);
}

bool f_1dd_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_240_a0_i() + "m";
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
	return f_215_a1_b(L4);
}

void f_208_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_20f_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_215_a1_b(string a0)
{
	if (f_26e_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_224_a0_v(void)
{
	if (f_26e_a0_b()) {
		@lshStopSpeech();
	}
}

object f_22b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_231_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_23b_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_240_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_249_a1_b(object a0)
{
	if (f_23b_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

int f_255_a0_i(void)
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

int f_266_a0_i(void)
{
	return 515573;
}

int f_268_a0_i(void)
{
	return 504032;
}

string f_26a_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_26c_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_26e_a0_b(void)
{
	return true;
}

