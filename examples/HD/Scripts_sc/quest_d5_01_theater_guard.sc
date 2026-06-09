event evt_11 11;
event OnUse 0;
event OnTimer 7;

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
		if (!f_283_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_369_a0_i());
		L0->SetNPCDescription(f_367_a0_i());
		L0->SetPhoto(f_36b_a0_s());
		L0->SetPhoto2(f_36d_a0_s());
		L0->SetPlayerName(f_356_a0_i());
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
		f_2c8_a1_v(a0);
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
			f_93_a1_v("Neutral");
			tv0->SetMessage(502916);
			tv0->ClearReplies();
			if (f_33e_a1_b(tv1)) {
				tv0->AddReply(502917, 3252, 3243);
			}
			if (f_34a_a1_b(tv1)) {
				tv0->AddReply(502918, 3245, 3244);
			}
			tv0->AddReply(536324, -1, 38104);
			break;
			return;
		}
		if (f_36f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2da_a1_v(tv2);
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

	void f_93_a1_v(string a0)
	{
		if (!f_36f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2ea_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_304_a0_v();
			if (a1 == 3243) {
				f_332_a2_v(tv1, tv0);
			}
			if (a1 == 3244) {
				f_338_a2_v(tv1, tv0);
			}
			if (a0 == 3242) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(502916);
				tv0->ClearReplies();
				if (f_33e_a1_b(tv1)) {
					tv0->AddReply(502917, 3252, 3243);
				}
				if (f_34a_a1_b(tv1)) {
					tv0->AddReply(502918, 3245, 3244);
				}
				tv0->AddReply(536324, -1, 38104);
				return;
			}
			if (a0 == 3245) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(502919);
				tv0->ClearReplies();
				tv0->AddReply(502920, 3247, 3246);
				tv0->AddReply(502922, 3249, 3248);
				return;
			}
			if (a0 == 3249) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(502923);
				tv0->ClearReplies();
				tv0->AddReply(502924, -1, 3250);
				tv0->AddReply(502925, -1, 3251);
				return;
			}
			if (a0 == 3247) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(502921);
				tv0->ClearReplies();
				tv0->AddReply(515526, -1, 16622);
				return;
			}
			if (a0 == 3252) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(502926);
				tv0->ClearReplies();
				tv0->AddReply(502927, 3258, 3253);
				tv0->AddReply(502928, 3255, 3254);
				return;
			}
			if (a0 == 3255) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(502929);
				tv0->ClearReplies();
				tv0->AddReply(502931, 3258, 3257);
				tv0->AddReply(502930, -1, 3256);
				return;
			}
			if (a0 == 3258) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(502932);
				tv0->ClearReplies();
				tv0->AddReply(502938, 3265, 3264);
				tv0->AddReply(502934, 3261, 3260);
				tv0->AddReply(502933, -1, 3259);
				return;
			}
			if (a0 == 3261) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(502935);
				tv0->ClearReplies();
				tv0->AddReply(502936, -1, 3262);
				tv0->AddReply(502937, -1, 3263);
				return;
			}
			if (a0 == 3265) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(502939);
				tv0->ClearReplies();
				tv0->AddReply(502940, 3261, 3266);
				tv0->AddReply(502941, 3269, 3267);
				return;
			}
			if (a0 == 3269) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(502942);
				tv0->ClearReplies();
				tv0->AddReply(502943, -1, 3270);
				return;
			}
			tv3 = true;
			if (f_36f_a0_b()) {
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
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;

	void init(void)
	{
		for (; ; ) {
			@Sleep(1);
			f_1d1_a2_v(300, 100);
		}
	}

	void OnUse(object a0)
	{
		f_212_a0_v();
		t0{a0};
	}

	void f_1d1_a2_v(float a0, float a1)
	{
		if (!f_27e_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_220_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_1ec_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_276_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_1ec_a0_b()) {
				if (!tv2) {
					f_2f9_a1_v(tv4);
					tv2 = true;
				}
			} else {
				if (tv2) {
					@UnlookAsync("head");
					tv2 = false;
				}
			}
		}
	}

	void f_212_a0_v(void)
	{
		f_271_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_220_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_27e_a0_b()) {
		return;
	}
	L0 = f_321_a0_i();
	for (L1 = 0; L1 < 5 && f_27e_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_31a_a1_s(L3));
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
		if (!f_26f_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_26f_a0_b(void)
{
	return true;
}

void f_271_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_276_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_27e_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_283_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_30b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_36f_a0_b()) {
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

void f_2c8_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_36f_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2da_a1_v(string a0)
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

void f_2ea_a2_v(string a0, bool a1)
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

void f_2f9_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_304_a0_v(void)
{
	if (f_36f_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_30b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_315_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

string f_31a_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_321_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_31a_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_332_a2_v(object a0, object a1)
{
	@SetVariable("ood5Whitemask1", 1);
}

void f_338_a2_v(object a0, object a1)
{
	@SetVariable("ood5Whitemask2", 1);
}

bool f_33e_a1_b(object a0)
{
	if (f_315_a1_i("ood5Whitemask1") == 0) {
		return true;
	}
	return false;
}

bool f_34a_a1_b(object a0)
{
	if (f_315_a1_i("ood5Whitemask2") == 0) {
		return true;
	}
	return false;
}

int f_356_a0_i(void)
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

int f_367_a0_i(void)
{
	return 515569;
}

int f_369_a0_i(void)
{
	return 503354;
}

string f_36b_a0_s(void)
{
	return "ui/NPC_wmask.png";
}

string f_36d_a0_s(void)
{
	return "ui/NPC_wmask_b.png";
}

bool f_36f_a0_b(void)
{
	return false;
}

