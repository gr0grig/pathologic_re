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
		if (!f_2b5_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_355_a0_i());
		L0->SetNPCDescription(f_353_a0_i());
		L0->SetPhoto(f_357_a0_s());
		L0->SetPhoto2(f_359_a0_s());
		L0->SetPlayerName(f_37c_a0_i());
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
		f_2fa_a1_v(a0);
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
			f_375_a2_v(tv1, tv0);
			f_8e_a1_v("Neutral");
			tv0->SetMessage(525968);
			tv0->ClearReplies();
			tv0->AddReply(525969, 27254, 27253);
			tv0->AddReply(525988, 27273, 27272);
			tv0->AddReply(525996, 27284, 27283);
			break;
			return;
		}
		if (f_35b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_30c_a1_v(tv2);
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

	void f_8e_a1_v(string a0)
	{
		if (!f_35b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_31c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_336_a0_v();
			if (a0 == 27252) {
				f_375_a2_v(tv1, tv0);
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525968);
				tv0->ClearReplies();
				tv0->AddReply(525969, 27254, 27253);
				tv0->AddReply(525988, 27273, 27272);
				tv0->AddReply(525996, 27284, 27283);
				return;
			}
			if (a0 == 27284) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525997);
				tv0->ClearReplies();
				tv0->AddReply(526229, 27273, 27495);
				tv0->AddReply(526230, 27254, 27496);
				return;
			}
			if (a0 == 27273) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525989);
				tv0->ClearReplies();
				tv0->AddReply(525990, 27254, 27274);
				return;
			}
			if (a0 == 27254) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525970);
				tv0->ClearReplies();
				tv0->AddReply(525971, 27256, 27255);
				tv0->AddReply(526231, -1, 27499);
				return;
			}
			if (a0 == 27256) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525972);
				tv0->ClearReplies();
				tv0->AddReply(525973, 27258, 27257);
				tv0->AddReply(526232, 27258, 27501);
				return;
			}
			if (a0 == 27258) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525974);
				tv0->ClearReplies();
				tv0->AddReply(525975, 27260, 27259);
				return;
			}
			if (a0 == 27260) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525976);
				tv0->ClearReplies();
				tv0->AddReply(525977, 27262, 27261);
				return;
			}
			if (a0 == 27262) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525978);
				tv0->ClearReplies();
				tv0->AddReply(525979, 27264, 27263);
				tv0->AddReply(541736, 43931, 43930);
				return;
			}
			if (a0 == 43931) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(541737);
				tv0->ClearReplies();
				tv0->AddReply(541738, 27264, 43932);
				tv0->AddReply(541739, 27264, 43933);
				return;
			}
			if (a0 == 27264) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525980);
				tv0->ClearReplies();
				tv0->AddReply(525981, 27266, 27265);
				tv0->AddReply(541740, 27504, 43936);
				return;
			}
			if (a0 == 27266) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525982);
				tv0->ClearReplies();
				tv0->AddReply(525983, 27504, 27267);
				tv0->AddReply(526233, 27504, 27503);
				return;
			}
			if (a0 == 27504) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(526234);
				tv0->ClearReplies();
				tv0->AddReply(526235, 27507, 27506);
				tv0->AddReply(526238, 27510, 27509);
				return;
			}
			if (a0 == 27510) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(526239);
				tv0->ClearReplies();
				tv0->AddReply(526240, -1, 27511);
				return;
			}
			if (a0 == 27507) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(526236);
				tv0->ClearReplies();
				tv0->AddReply(526237, -1, 27508);
				return;
			}
			tv3 = true;
			if (f_35b_a0_b()) {
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

	void init(void)
	{
		for (; ; ) {
			f_203_a2_v(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object a0)
	{
		if (tv5) {
			return;
		}
		f_244_a0_v();
		t0{a0};
		tv5 = true;
	}

	void f_203_a2_v(float a0, float a1)
	{
		if (!f_2b0_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_252_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_21e_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_2a8_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_21e_a0_b()) {
				if (!tv2) {
					f_32b_a1_v(tv4);
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

	void f_244_a0_v(void)
	{
		f_2a3_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_252_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2b0_a0_b()) {
		return;
	}
	L0 = f_364_a0_i();
	for (L1 = 0; L1 < 5 && f_2b0_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_35d_a1_s(L3));
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
		if (!f_2a1_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2a1_a0_b(void)
{
	return true;
}

void f_2a3_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2a8_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2b0_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2b5_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_33d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_35b_a0_b()) {
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

void f_2fa_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_35b_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_30c_a1_v(string a0)
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

void f_31c_a2_v(string a0, bool a1)
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

void f_32b_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_336_a0_v(void)
{
	if (f_35b_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_33d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_347_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_353_a0_i(void)
{
	return 515571;
}

int f_355_a0_i(void)
{
	return 504029;
}

string f_357_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_359_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_35b_a0_b(void)
{
	return false;
}

string f_35d_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_364_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_35d_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_375_a2_v(object a0, object a1)
{
	f_347_a2_b("quest_k1_01", "remove_birdmask");
}

int f_37c_a0_i(void)
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

