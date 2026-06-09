event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnUnload 6;
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
		if (!f_2e4_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3dc_a0_i());
		L0->SetNPCDescription(f_3da_a0_i());
		L0->SetPhoto(f_3de_a0_s());
		L0->SetPhoto2(f_3e0_a0_s());
		L0->SetPlayerName(f_3c9_a0_i());
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
		f_329_a1_v(a0);
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
			if (f_3bd_a1_b(tv1)) {
				f_3aa_a2_v(tv1, tv0);
				f_3b0_a2_v(tv1, tv0);
				f_3b7_a2_v(tv1, tv0);
				f_a7_a1_v("Neutral");
				tv0->SetMessage(522931);
				tv0->ClearReplies();
				tv0->AddReply(522932, 24124, 24123);
				break;
			}
			f_a7_a1_v("Neutral");
			tv0->SetMessage(523192);
			tv0->ClearReplies();
			tv0->AddReply(523193, -1, 24396);
			tv0->AddReply(523194, -1, 24397);
			break;
			return;
		}
		if (f_3e2_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_33b_a1_v(tv2);
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

	void f_a7_a1_v(string a0)
	{
		if (!f_3e2_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_34b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_365_a0_v();
			if (a0 == 24122) {
				if (f_3bd_a1_b(tv1)) {
					f_3aa_a2_v(tv1, tv0);
					f_3b0_a2_v(tv1, tv0);
					f_3b7_a2_v(tv1, tv0);
					f_a7_a1_v("Neutral");
					tv0->SetMessage(522931);
					tv0->ClearReplies();
					tv0->AddReply(522932, 24124, 24123);
					return;
				}
				f_a7_a1_v("Neutral");
				tv0->SetMessage(523192);
				tv0->ClearReplies();
				tv0->AddReply(523193, -1, 24396);
				tv0->AddReply(523194, -1, 24397);
				return;
			}
			if (a0 == 24124) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(522933);
				tv0->ClearReplies();
				tv0->AddReply(522934, 24126, 24125);
				tv0->AddReply(522956, 24148, 24147);
				return;
			}
			if (a0 == 24148) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(522957);
				tv0->ClearReplies();
				tv0->AddReply(522958, 24128, 24149);
				return;
			}
			if (a0 == 24126) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(522935);
				tv0->ClearReplies();
				tv0->AddReply(522936, 24128, 24127);
				tv0->AddReply(522955, 24128, 24146);
				return;
			}
			if (a0 == 24128) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(522937);
				tv0->ClearReplies();
				tv0->AddReply(522938, 24130, 24129);
				return;
			}
			if (a0 == 24130) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(522939);
				tv0->ClearReplies();
				tv0->AddReply(522940, 24132, 24131);
				tv0->AddReply(522946, 24138, 24137);
				return;
			}
			if (a0 == 24138) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(522947);
				tv0->ClearReplies();
				tv0->AddReply(522948, 24134, 24139);
				tv0->AddReply(522949, 24141, 24140);
				return;
			}
			if (a0 == 24141) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(522950);
				tv0->ClearReplies();
				tv0->AddReply(522951, 24134, 24142);
				tv0->AddReply(522952, 24144, 24143);
				return;
			}
			if (a0 == 24144) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(522953);
				tv0->ClearReplies();
				tv0->AddReply(522954, 24134, 24145);
				return;
			}
			if (a0 == 24132) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(522941);
				tv0->ClearReplies();
				tv0->AddReply(522942, 24134, 24133);
				tv0->AddReply(522945, -1, 24136);
				return;
			}
			if (a0 == 24134) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(522943);
				tv0->ClearReplies();
				tv0->AddReply(522944, -1, 24135);
				return;
			}
			tv3 = true;
			if (f_3e2_a0_b()) {
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
	var bool tv5;
	var bool tv6;

	void init(void)
	{
		f_1ed_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_273_a0_v();
		t0{a0};
	}

	void f_1ed_a2_v(float a0, float a1)
	{
		tv6 = false;
		for (; ; ) {
			float L0;
			bool L1;
			@rand(L0, 3);
			@Sleep(L0 + 3, L1);
			tv6 = true;
			f_232_a2_v(a0, a1);
			tv6 = false;
		}
	}

	void f_1ff_a0_v(void)
	{
		tv5 = true;
		if (!f_2df_a0_b() && f_230_a0_b()) {
			@RemoveActor(f_36c_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_1ff_a0_v();
		}
	}

	void OnUnload(void)
	{
		if (tv6) {
			f_273_a0_v();
		}
		if (tv5 && f_230_a0_b()) {
			@RemoveActor(f_36c_a0_o());
		}
	}

	bool f_230_a0_b(void)
	{
		return true;
	}

	void f_232_a2_v(float a0, float a1)
	{
		if (!f_2df_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_281_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_24d_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_2d7_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_24d_a0_b()) {
				if (!tv2) {
					f_35a_a1_v(tv4);
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

	void f_273_a0_v(void)
	{
		f_2d2_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_281_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2df_a0_b()) {
		return;
	}
	L0 = f_399_a0_i();
	for (L1 = 0; L1 < 5 && f_2df_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_392_a1_s(L3));
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
		if (!f_2d0_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2d0_a0_b(void)
{
	return true;
}

void f_2d2_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2d7_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2df_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2e4_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_372_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_3e2_a0_b()) {
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

void f_329_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_3e2_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_33b_a1_v(string a0)
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

void f_34b_a2_v(string a0, bool a1)
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

void f_35a_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_365_a0_v(void)
{
	if (f_3e2_a0_b()) {
		@lshStopSpeech();
	}
}

object f_36c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_372_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_37c_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_381_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

string f_392_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_399_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_392_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_3aa_a2_v(object a0, object a1)
{
	@SetVariable("oob12TBirdmask1", 1);
}

void f_3b0_a2_v(object a0, object a1)
{
	f_381_a2_v("itheater@door1", false);
}

void f_3b7_a2_v(object a0, object a1)
{
	@SetVariable("b12q01TheaterIsVisited", 1);
}

bool f_3bd_a1_b(object a0)
{
	if (f_37c_a1_i("oob12TBirdmask1") == 0) {
		return true;
	}
	return false;
}

int f_3c9_a0_i(void)
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

int f_3da_a0_i(void)
{
	return 515571;
}

int f_3dc_a0_i(void)
{
	return 504029;
}

string f_3de_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_3e0_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_3e2_a0_b(void)
{
	return false;
}

