event OnDialogReply 11;
event OnUse 0;

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
		if (!f_1d0_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_27d_a0_i());
		L0->SetNPCDescription(f_27b_a0_i());
		L0->SetPhoto(f_27f_a0_s());
		L0->SetPhoto2(f_281_a0_s());
		L0->SetPlayerName(f_285_a0_i());
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
		f_215_a1_v(a0);
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
			tv0->SetMessage(524883);
			tv0->ClearReplies();
			tv0->AddReply(524884, 26209, 26208);
			tv0->AddReply(524898, 26224, 26223);
			break;
			return;
		}
		if (f_283_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_227_a1_v(tv2);
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
		if (!f_283_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_237_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_246_a0_v();
			if (a0 == 26207) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524883);
				tv0->ClearReplies();
				tv0->AddReply(524884, 26209, 26208);
				tv0->AddReply(524898, 26224, 26223);
				return;
			}
			if (a0 == 26224) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524899);
				tv0->ClearReplies();
				tv0->AddReply(524900, 26226, 26225);
				return;
			}
			if (a0 == 26226) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524901);
				tv0->ClearReplies();
				tv0->AddReply(524902, 26209, 26227);
				return;
			}
			if (a0 == 26209) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524885);
				tv0->ClearReplies();
				tv0->AddReply(524886, 26211, 26210);
				tv0->AddReply(524893, 26218, 26217);
				return;
			}
			if (a0 == 26218) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524894);
				tv0->ClearReplies();
				tv0->AddReply(524895, 26211, 26219);
				return;
			}
			if (a0 == 26211) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524887);
				tv0->ClearReplies();
				tv0->AddReply(524888, 26213, 26212);
				return;
			}
			if (a0 == 26213) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524889);
				tv0->ClearReplies();
				tv0->AddReply(524890, 26215, 26214);
				return;
			}
			if (a0 == 26215) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524891);
				tv0->ClearReplies();
				tv0->AddReply(524892, -1, 26216);
				tv0->AddReply(524897, -1, 26222);
				return;
			}
			tv3 = true;
			if (f_283_a0_b()) {
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
		tv0 = false;
		f_16d_a0_v();
	}

	void OnUse(object a0)
	{
		if (!tv0) {
			int L0;
			f_1c6_a0_v();
			t0{a0};
			tv0 = true;
			@GetVariable("d1q01wmask", L0);
			@SetVariable("d1q01bmask", 1);
			if (L0) {
				f_257_a2_b("quest_d1_01", "remove_masks");
			}
		}
	}
}

void f_16d_a0_v(void)
{
	for (; ; ) {
		f_175_a0_v();
		@Sleep(3);
	}
}

void f_175_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1cb_a0_b()) {
		return;
	}
	L0 = f_26a_a0_i();
	for (L1 = 0; L1 < 5 && f_1cb_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_263_a1_s(L3));
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
		if (!f_1c4_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1c4_a0_b(void)
{
	return true;
}

void f_1c6_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_1cb_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1d0_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_24d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_283_a0_b()) {
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

void f_215_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_283_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_227_a1_v(string a0)
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

void f_237_a2_v(string a0, bool a1)
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

void f_246_a0_v(void)
{
	if (f_283_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_24d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_257_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_263_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_26a_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_263_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_27b_a0_i(void)
{
	return 515571;
}

int f_27d_a0_i(void)
{
	return 504029;
}

string f_27f_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_281_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_283_a0_b(void)
{
	return false;
}

int f_285_a0_i(void)
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

