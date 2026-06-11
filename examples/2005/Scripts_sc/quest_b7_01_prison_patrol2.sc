event OnDialogReply 11;
event OnUse 0;
event OnTrigger 26;
event OnLoad 5;
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
		if (!f_184_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_228_a0_i());
		L0->SetNPCDescription(f_226_a0_i());
		L0->SetPhoto(f_22a_a0_s());
		L0->SetPhoto2(f_22c_a0_s());
		L0->SetPlayerName(f_215_a0_i());
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
		f_1c8_a1_v(a0);
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
			f_84_a1_v("Neutral");
			tv0->SetMessage(520994);
			tv0->ClearReplies();
			tv0->AddReply(520995, 29851, 22208);
			tv0->AddReply(528463, -1, 29850);
			break;
			return;
		}
		if (f_22e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1d9_a1_v(tv2);
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

	void f_84_a1_v(string a0)
	{
		if (!f_22e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e0_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1e6_a0_v();
			if (a0 == 22207) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(520994);
				tv0->ClearReplies();
				tv0->AddReply(520995, 29851, 22208);
				tv0->AddReply(528463, -1, 29850);
				return;
			}
			if (a0 == 29851) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(528464);
				tv0->ClearReplies();
				tv0->AddReply(528465, -1, 29852);
				return;
			}
			tv3 = true;
			if (f_22e_a0_b()) {
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
		f_17a_a0_v();
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			float L0;
			while (!f_17f_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_129_a0_v();
		}
	}

	void f_f6_a0_v(void)
	{
		bool L0;
		tv0 = true;
		@IsLoaded(L0);
		if (!L0 && f_127_a0_b()) {
			@RemoveActor(f_1ed_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_f6_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_127_a0_b()) {
			@RemoveActor(f_1ed_a0_o());
		}
	}
}

bool f_127_a0_b(void)
{
	return true;
}

void f_129_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_17f_a0_b()) {
		return;
	}
	L0 = f_204_a0_i();
	for (L1 = 0; L1 < 5 && f_17f_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_1fd_a1_s(L3));
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
		if (!f_178_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_178_a0_b(void)
{
	return true;
}

void f_17a_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_17f_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_184_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1f3_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_22e_a0_b()) {
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

void f_1c8_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_22e_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_1d9_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1e0_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_1e6_a0_v(void)
{
	if (f_22e_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1ed_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1f3_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

string f_1fd_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_204_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1fd_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_215_a0_i(void)
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

int f_226_a0_i(void)
{
	return 515572;
}

int f_228_a0_i(void)
{
	return 504031;
}

string f_22a_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_22c_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_22e_a0_b(void)
{
	return false;
}

