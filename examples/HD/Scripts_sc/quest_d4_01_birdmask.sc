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
		if (!f_1bb_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2d0_a0_i());
		L0->SetNPCDescription(f_2ce_a0_i());
		L0->SetPhoto(f_2d2_a0_s());
		L0->SetPhoto2(f_2d4_a0_s());
		L0->SetPlayerName(f_2bd_a0_i());
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
		f_200_a1_v(a0);
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
			tv0->SetMessage(509650);
			tv0->ClearReplies();
			tv0->AddReply(509651, 10621, 10620);
			tv0->AddReply(509661, 10633, 10632);
			tv0->AddReply(509665, 10625, 10638);
			break;
			return;
		}
		if (f_2d6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_212_a1_v(tv2);
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
		if (!f_2d6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_222_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_231_a0_v();
			if (a1 == 10626) {
				f_26b_a2_v(tv1, tv0);
				f_27b_a2_v(tv1, tv0);
			}
			if (a1 == 10627) {
				f_26b_a2_v(tv1, tv0);
				f_27b_a2_v(tv1, tv0);
			}
			if (a0 == 10619) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(509650);
				tv0->ClearReplies();
				tv0->AddReply(509651, 10621, 10620);
				tv0->AddReply(509661, 10633, 10632);
				tv0->AddReply(509665, 10625, 10638);
				return;
			}
			if (a0 == 10633) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(509662);
				tv0->ClearReplies();
				tv0->AddReply(509663, 10625, 10634);
				tv0->AddReply(509664, 10621, 10636);
				return;
			}
			if (a0 == 10621) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(509652);
				tv0->ClearReplies();
				tv0->AddReply(509653, 10623, 10622);
				tv0->AddReply(509660, 10625, 10630);
				return;
			}
			if (a0 == 10623) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(509654);
				tv0->ClearReplies();
				tv0->AddReply(509655, 10625, 10624);
				tv0->AddReply(509659, 10625, 10628);
				return;
			}
			if (a0 == 10625) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(509656);
				tv0->ClearReplies();
				tv0->AddReply(509657, -1, 10626);
				tv0->AddReply(509658, -1, 10627);
				return;
			}
			tv3 = true;
			if (f_2d6_a0_b()) {
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
		for (; ; ) {
			@Sleep(3);
			f_160_a0_v();
		}
	}

	void OnUse(object a0)
	{
		if (!tv0) {
			tv0 = true;
			f_1b1_a0_v();
			t0{a0};
			f_242_a2_b("quest_d4_01", "birdmask_done");
		}
	}
}

void f_160_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1b6_a0_b()) {
		return;
	}
	L0 = f_25a_a0_i();
	for (L1 = 0; L1 < 5 && f_1b6_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_253_a1_s(L3));
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
		if (!f_1af_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1af_a0_b(void)
{
	return true;
}

void f_1b1_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_1b6_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1bb_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_238_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_2d6_a0_b()) {
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

void f_200_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_2d6_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_212_a1_v(string a0)
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

void f_222_a2_v(string a0, bool a1)
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

void f_231_a0_v(void)
{
	if (f_2d6_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_238_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_242_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_24e_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

string f_253_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_25a_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_253_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_26b_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_28b_a0_o();
	L0->AddMark("d4q01Whitemask", "pt_d4q01_key1_region", 1, 511523, f_24e_a0_f());
}

void f_27b_a2_v(object a0, object a1)
{
	f_29c_a3_v(f_28b_a0_o(), "pt_d4q01_key1_region", 2);
	a1->ShowMap(f_28b_a0_o());
}

object f_28b_a0_o(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("Can't find main outdoor scene");
		L1 = null;
		return L1;
	}
	L0->GetMap(L1);
	return L1;
}

void f_29c_a3_v(object a0, string a1, float a2)
{
	Vector L0;
	Vector L1;
	object L2;
	bool L3;
	@GetMainOutdoorScene(L2);
	if (L2 == null) {
		@Trace("Can't find main outdoor scene");
		return;
	}
	L2->GetLocator(a1, L3, L0, L1);
	if (!L3) {
		@Trace("Warning: outdoor scene locator " + a1 + " doesnt exist");
	}
	L2->GetMap(a0);
	if (a0 == null) {
		@Trace("Can't find map");
		return;
	}
	a0->SetMapParams(L0.x, L0.z, a2);
}

int f_2bd_a0_i(void)
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

int f_2ce_a0_i(void)
{
	return 515571;
}

int f_2d0_a0_i(void)
{
	return 504029;
}

string f_2d2_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_2d4_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_2d6_a0_b(void)
{
	return false;
}

