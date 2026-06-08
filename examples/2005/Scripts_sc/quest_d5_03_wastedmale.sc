event evt_11 11;
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
		if (!f_1df_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_29a_a0_i());
		L0->SetNPCDescription(f_298_a0_i());
		L0->SetPhoto(f_29c_a0_s());
		L0->SetPhoto2(f_29e_a0_s());
		L0->SetPlayerName(f_287_a0_i());
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
		f_223_a1_v(a0);
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
			if (f_27b_a1_b(tv1)) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(511803);
				tv0->ClearReplies();
				tv0->AddReply(511804, 13015, 13014);
				tv0->AddReply(511808, 13019, 13018);
				break;
			}
			f_98_a1_v("Neutral");
			tv0->SetMessage(512549);
			tv0->ClearReplies();
			tv0->AddReply(512550, -1, 13719);
			break;
			return;
		}
		if (f_2a0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_234_a1_v(tv2);
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

	void f_98_a1_v(string a0)
	{
		if (!f_2a0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_23b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_241_a0_v();
			if (a1 == 13016) {
				f_275_a2_v(tv1, tv0);
			}
			if (a1 == 13017) {
				f_275_a2_v(tv1, tv0);
			}
			if (a0 == 13013) {
				if (f_27b_a1_b(tv1)) {
					f_98_a1_v("Neutral");
					tv0->SetMessage(511803);
					tv0->ClearReplies();
					tv0->AddReply(511804, 13015, 13014);
					tv0->AddReply(511808, 13019, 13018);
					return;
				}
				f_98_a1_v("Neutral");
				tv0->SetMessage(512549);
				tv0->ClearReplies();
				tv0->AddReply(512550, -1, 13719);
				return;
			}
			if (a0 == 13019) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(511809);
				tv0->ClearReplies();
				tv0->AddReply(511810, 13015, 13020);
				tv0->AddReply(511811, 13015, 13022);
				return;
			}
			if (a0 == 13015) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(511805);
				tv0->ClearReplies();
				tv0->AddReply(511806, -1, 13016);
				tv0->AddReply(511807, -1, 13017);
				return;
			}
			tv3 = true;
			if (f_2a0_a0_b()) {
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

	int f_12a_a1_i(object a0)
	{
		return t0{a0};
	}

	void OnUse(object a0)
	{
		f_1d5_a0_v();
		f_12a_a1_i(a0);
	}

	void init(void)
	{
		for (; ; ) {
			float L0;
			while (!f_1da_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_184_a0_v();
		}
	}

	void f_151_a0_v(void)
	{
		bool L0;
		tv0 = true;
		@IsLoaded(L0);
		if (!L0 && f_182_a0_b()) {
			@RemoveActor(f_248_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_151_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_182_a0_b()) {
			@RemoveActor(f_248_a0_o());
		}
	}
}

bool f_182_a0_b(void)
{
	return true;
}

void f_184_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1da_a0_b()) {
		return;
	}
	L0 = f_264_a0_i();
	for (L1 = 0; L1 < 5 && f_1da_a0_b(); L1 = L1 + 1) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_25d_a1_s(L3));
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
		if (!f_1d3_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1d3_a0_b(void)
{
	return true;
}

void f_1d5_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_1da_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1df_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_24e_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_2a0_a0_b()) {
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

void f_223_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_2a0_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_234_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_23b_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_241_a0_v(void)
{
	if (f_2a0_a0_b()) {
		@lshStopSpeech();
	}
}

object f_248_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_24e_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_258_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

string f_25d_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_264_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_25d_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_275_a2_v(object a0, object a1)
{
	@SetVariable("ood5Prisoner1", 1);
}

bool f_27b_a1_b(object a0)
{
	if (f_258_a1_i("ood5Prisoner1") == 0) {
		return true;
	}
	return false;
}

int f_287_a0_i(void)
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

int f_298_a0_i(void)
{
	return 515556;
}

int f_29a_a0_i(void)
{
	return 503341;
}

string f_29c_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_29e_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_2a0_a0_b(void)
{
	return false;
}

