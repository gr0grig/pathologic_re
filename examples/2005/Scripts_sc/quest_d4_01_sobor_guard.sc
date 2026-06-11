event OnDialogReply 11;
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
		if (!f_256_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_340_a0_i());
		L0->SetNPCDescription(f_33e_a0_i());
		L0->SetPhoto(f_342_a0_s());
		L0->SetPhoto2(f_344_a0_s());
		L0->SetPlayerName(f_32d_a0_i());
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
		f_29a_a1_v(a0);
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
			if (f_2fd_a1_b(tv1) && !f_309_a1_b(tv1)) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(536270);
				tv0->ClearReplies();
				if (f_315_a1_b(tv1)) {
					tv0->AddReply(536271, 38074, 38055);
				}
				tv0->AddReply(536289, -1, 38073);
				break;
			}
			f_b6_a1_v("Neutral");
			tv0->SetMessage(536284);
			tv0->ClearReplies();
			if (f_321_a1_b(tv1)) {
				tv0->AddReply(536285, 38070, 38069);
			}
			tv0->AddReply(536288, -1, 38072);
			tv0->AddReply(536291, -1, 38075);
			break;
			return;
		}
		if (f_346_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2ab_a1_v(tv2);
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

	void f_b6_a1_v(string a0)
	{
		if (!f_346_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2b2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_2c3_a0_v();
			if (a1 == 38055) {
				f_2f1_a2_v(tv1, tv0);
			}
			if (a1 == 38069) {
				f_2f7_a2_v(tv1, tv0);
			}
			if (a0 == 38054) {
				if (f_2fd_a1_b(tv1) && !f_309_a1_b(tv1)) {
					f_b6_a1_v("Neutral");
					tv0->SetMessage(536270);
					tv0->ClearReplies();
					if (f_315_a1_b(tv1)) {
						tv0->AddReply(536271, 38074, 38055);
					}
					tv0->AddReply(536289, -1, 38073);
					return;
				}
				f_b6_a1_v("Neutral");
				tv0->SetMessage(536284);
				tv0->ClearReplies();
				if (f_321_a1_b(tv1)) {
					tv0->AddReply(536285, 38070, 38069);
				}
				tv0->AddReply(536288, -1, 38072);
				tv0->AddReply(536291, -1, 38075);
				return;
			}
			if (a0 == 38070) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(536286);
				tv0->ClearReplies();
				tv0->AddReply(536287, 38076, 38071);
				return;
			}
			if (a0 == 38076) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(536292);
				tv0->ClearReplies();
				tv0->AddReply(536293, 38079, 38077);
				tv0->AddReply(536294, -1, 38078);
				return;
			}
			if (a0 == 38079) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(536295);
				tv0->ClearReplies();
				tv0->AddReply(536296, -1, 38080);
				return;
			}
			if (a0 == 38074) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(536290);
				tv0->ClearReplies();
				tv0->AddReply(536297, -1, 38081);
				tv0->AddReply(536298, -1, 38082);
				tv0->AddReply(536299, -1, 38083);
				return;
			}
			tv3 = true;
			if (f_346_a0_b()) {
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
			f_1a4_a2_v(300, 100);
		}
	}

	void OnUse(object a0)
	{
		f_1e5_a0_v();
		t0{a0};
	}

	void f_1a4_a2_v(float a0, float a1)
	{
		if (!f_251_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_1f3_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_1bf_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_249_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_1bf_a0_b()) {
				if (!tv2) {
					f_2b8_a1_v(tv4);
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

	void f_1e5_a0_v(void)
	{
		f_244_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_1f3_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_251_a0_b()) {
		return;
	}
	L0 = f_2e0_a0_i();
	for (L1 = 0; L1 < 5 && f_251_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_2d9_a1_s(L3));
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
		if (!f_242_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_242_a0_b(void)
{
	return true;
}

void f_244_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_249_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_251_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_256_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_2ca_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_346_a0_b()) {
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

void f_29a_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_346_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2ab_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_2b2_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_2b8_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_2c3_a0_v(void)
{
	if (f_346_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_2ca_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2d4_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

string f_2d9_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_2e0_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_2d9_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_2f1_a2_v(object a0, object a1)
{
	@SetVariable("ood4SoborGuard1", 1);
}

void f_2f7_a2_v(object a0, object a1)
{
	@SetVariable("ood4TheaterGuard2", 1);
}

bool f_2fd_a1_b(object a0)
{
	if (f_2d4_a1_i("d4q01KeyWasted") != 0) {
		return true;
	}
	return false;
}

bool f_309_a1_b(object a0)
{
	if (f_2d4_a1_i("d4q01") == 1000) {
		return true;
	}
	return false;
}

bool f_315_a1_b(object a0)
{
	if (f_2d4_a1_i("ood4SoborGuard1") == 0) {
		return true;
	}
	return false;
}

bool f_321_a1_b(object a0)
{
	if (f_2d4_a1_i("ood4TheaterGuard2") == 0) {
		return true;
	}
	return false;
}

int f_32d_a0_i(void)
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

int f_33e_a0_i(void)
{
	return 515556;
}

int f_340_a0_i(void)
{
	return 503341;
}

string f_342_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_344_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_346_a0_b(void)
{
	return false;
}

