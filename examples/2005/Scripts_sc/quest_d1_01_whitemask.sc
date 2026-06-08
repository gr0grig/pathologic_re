event evt_11 11;
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
		if (!f_19f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_238_a0_i());
		L0->SetNPCDescription(f_236_a0_i());
		L0->SetPhoto(f_23a_a0_s());
		L0->SetPhoto2(f_23c_a0_s());
		L0->SetPlayerName(f_240_a0_i());
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
		f_1e3_a1_v(a0);
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
			tv0->SetMessage(524904);
			tv0->ClearReplies();
			tv0->AddReply(524905, 26232, 26231);
			tv0->AddReply(524911, 26243, 26237);
			break;
			return;
		}
		if (f_23e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1f4_a1_v(tv2);
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
		if (!f_23e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1fb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_201_a0_v();
			if (a0 == 26230) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524904);
				tv0->ClearReplies();
				tv0->AddReply(524905, 26232, 26231);
				tv0->AddReply(524911, 26243, 26237);
				return;
			}
			if (a0 == 26243) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524916);
				tv0->ClearReplies();
				tv0->AddReply(524917, 26232, 26244);
				tv0->AddReply(524918, 26234, 26245);
				return;
			}
			if (a0 == 26232) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524906);
				tv0->ClearReplies();
				tv0->AddReply(524907, 26234, 26233);
				tv0->AddReply(524913, -1, 26239);
				return;
			}
			if (a0 == 26234) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524908);
				tv0->ClearReplies();
				tv0->AddReply(524909, -1, 26235);
				tv0->AddReply(524914, 26242, 26241);
				return;
			}
			if (a0 == 26242) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(524915);
				tv0->ClearReplies();
				tv0->AddReply(524919, -1, 26248);
				return;
			}
			tv3 = true;
			if (f_23e_a0_b()) {
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
		f_13c_a0_v();
	}

	void OnUse(object a0)
	{
		if (!tv0) {
			int L0;
			f_195_a0_v();
			t0{a0};
			tv0 = true;
			@GetVariable("d1q01bmask", L0);
			@SetVariable("d1q01wmask", 1);
			if (L0) {
				f_212_a2_b("quest_d1_01", "remove_masks");
			}
		}
	}
}

void f_13c_a0_v(void)
{
	for (; ; ) {
		f_144_a0_v();
		@Sleep(3);
	}
}

void f_144_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_19a_a0_b()) {
		return;
	}
	L0 = f_225_a0_i();
	for (L1 = 0; L1 < 5 && f_19a_a0_b(); L1 = L1 + 1) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_21e_a1_s(L3));
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
		if (!f_193_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_193_a0_b(void)
{
	return true;
}

void f_195_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_19a_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_19f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_208_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_23e_a0_b()) {
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

void f_1e3_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_23e_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_1f4_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1fb_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_201_a0_v(void)
{
	if (f_23e_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_208_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_212_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_21e_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_225_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_21e_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_236_a0_i(void)
{
	return 515569;
}

int f_238_a0_i(void)
{
	return 503354;
}

string f_23a_a0_s(void)
{
	return "ui/NPC_wmask.png";
}

string f_23c_a0_s(void)
{
	return "ui/NPC_wmask_b.png";
}

bool f_23e_a0_b(void)
{
	return false;
}

int f_240_a0_i(void)
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

