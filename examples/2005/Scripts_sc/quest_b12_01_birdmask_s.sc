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
		if (!f_36a_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_42c_a0_i());
		L0->SetNPCDescription(f_42a_a0_i());
		L0->SetPhoto(f_42e_a0_s());
		L0->SetPhoto2(f_430_a0_s());
		L0->SetPlayerName(f_4af_a0_i());
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
		f_3ae_a1_v(a0);
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
			if (!f_45a_a1_b(tv1)) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522134);
				tv0->ClearReplies();
				if (f_486_a1_b(tv1)) {
					tv0->AddReply(522135, 23323, 23302);
				}
				if (f_492_a1_b(tv1)) {
					tv0->AddReply(522157, 23325, 23324);
				}
				tv0->AddReply(522166, -1, 23333);
				break;
			}
			if (!f_464_a1_b(tv1)) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522130);
				tv0->ClearReplies();
				if (f_47a_a1_b(tv1)) {
					tv0->AddReply(522132, 23308, 23299);
				}
				tv0->AddReply(522140, -1, 23307);
				break;
			}
			if (f_46e_a1_b(tv1) && f_45a_a1_b(tv1)) {
				f_434_a2_v(tv1, tv0);
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522136);
				tv0->ClearReplies();
				tv0->AddReply(522137, -1, 23304);
				break;
			}
			f_e9_a1_v("Neutral");
			tv0->SetMessage(522138);
			tv0->ClearReplies();
			tv0->AddReply(522139, -1, 23306);
			break;
			return;
		}
		if (f_432_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3bf_a1_v(tv2);
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

	void f_e9_a1_v(string a0)
	{
		if (!f_432_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3c6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3d7_a0_v();
			if (a1 == 23302) {
				f_447_a2_v(tv1, tv0);
			}
			if (a1 == 23324) {
				f_44d_a2_v(tv1, tv0);
			}
			if (a1 == 23299) {
				f_441_a2_v(tv1, tv0);
			}
			if (a1 == 23304) {
				f_453_a2_v(tv1, tv0);
				f_43a_a2_v(tv1, tv0);
			}
			if (a0 == 23301) {
				if (!f_45a_a1_b(tv1)) {
					f_e9_a1_v("Neutral");
					tv0->SetMessage(522134);
					tv0->ClearReplies();
					if (f_486_a1_b(tv1)) {
						tv0->AddReply(522135, 23323, 23302);
					}
					if (f_492_a1_b(tv1)) {
						tv0->AddReply(522157, 23325, 23324);
					}
					tv0->AddReply(522166, -1, 23333);
					return;
				}
				if (!f_464_a1_b(tv1)) {
					f_e9_a1_v("Neutral");
					tv0->SetMessage(522130);
					tv0->ClearReplies();
					if (f_47a_a1_b(tv1)) {
						tv0->AddReply(522132, 23308, 23299);
					}
					tv0->AddReply(522140, -1, 23307);
					return;
				}
				if (f_46e_a1_b(tv1) && f_45a_a1_b(tv1)) {
					f_434_a2_v(tv1, tv0);
					f_e9_a1_v("Neutral");
					tv0->SetMessage(522136);
					tv0->ClearReplies();
					tv0->AddReply(522137, -1, 23304);
					return;
				}
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522138);
				tv0->ClearReplies();
				tv0->AddReply(522139, -1, 23306);
				return;
			}
			if (a0 == 23308) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522141);
				tv0->ClearReplies();
				tv0->AddReply(522142, 23311, 23309);
				tv0->AddReply(522143, -1, 23310);
				return;
			}
			if (a0 == 23311) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522144);
				tv0->ClearReplies();
				tv0->AddReply(522145, 23314, 23312);
				tv0->AddReply(522146, -1, 23313);
				return;
			}
			if (a0 == 23314) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522147);
				tv0->ClearReplies();
				tv0->AddReply(522148, 23317, 23315);
				tv0->AddReply(522149, -1, 23316);
				return;
			}
			if (a0 == 23317) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522150);
				tv0->ClearReplies();
				tv0->AddReply(522151, 23320, 23318);
				tv0->AddReply(522152, -1, 23319);
				return;
			}
			if (a0 == 23320) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522153);
				tv0->ClearReplies();
				tv0->AddReply(522154, -1, 23321);
				tv0->AddReply(522155, -1, 23322);
				return;
			}
			if (a0 == 23325) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522158);
				tv0->ClearReplies();
				tv0->AddReply(522159, 23327, 23326);
				tv0->AddReply(522161, 23997, 23328);
				return;
			}
			if (a0 == 23997) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522814);
				tv0->ClearReplies();
				tv0->AddReply(522815, -1, 23998);
				return;
			}
			if (a0 == 23327) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522160);
				tv0->ClearReplies();
				tv0->AddReply(522162, 23330, 23329);
				return;
			}
			if (a0 == 23330) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522163);
				tv0->ClearReplies();
				tv0->AddReply(522164, -1, 23331);
				tv0->AddReply(522165, -1, 23332);
				return;
			}
			if (a0 == 23323) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522156);
				tv0->ClearReplies();
				tv0->AddReply(522808, 23992, 23991);
				tv0->AddReply(522807, -1, 23990);
				return;
			}
			if (a0 == 23992) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(522809);
				tv0->ClearReplies();
				tv0->AddReply(522810, -1, 23993);
				return;
			}
			tv3 = true;
			if (f_432_a0_b()) {
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
		while (true) {
			f_2b8_a2_v(300, 100);
			@Sleep(1);
		}
	}

	void OnUse(object a0)
	{
		f_2f9_a0_v();
		t0{a0};
	}

	void f_2b8_a2_v(float a0, float a1)
	{
		if (!f_365_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_307_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_2d3_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_35d_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_2d3_a0_b()) {
				if (!tv2) {
					f_3cc_a1_v(tv4);
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

	void f_2f9_a0_v(void)
	{
		f_358_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_307_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_365_a0_b()) {
		return;
	}
	L0 = f_419_a0_i();
	for (L1 = 0; L1 < 5 && f_365_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_412_a1_s(L3));
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
		if (!f_356_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_356_a0_b(void)
{
	return true;
}

void f_358_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_35d_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_365_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_36a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3de_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_432_a0_b()) {
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

void f_3ae_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_432_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_3bf_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_3c6_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_3cc_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_3d7_a0_v(void)
{
	if (f_432_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_3de_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3e8_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_3ed_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_3fe_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_40a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

string f_412_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_419_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_412_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_42a_a0_i(void)
{
	return 515571;
}

int f_42c_a0_i(void)
{
	return 504029;
}

string f_42e_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_430_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_432_a0_b(void)
{
	return false;
}

void f_434_a2_v(object a0, object a1)
{
	@SetVariable("oob12BirdmaskS1", 1);
}

void f_43a_a2_v(object a0, object a1)
{
	f_3fe_a2_b("quest_b12_01", "init_sobor");
}

void f_441_a2_v(object a0, object a1)
{
	@SetVariable("oob12BirdmaskS2", 1);
}

void f_447_a2_v(object a0, object a1)
{
	@SetVariable("oob12BirdmaskS3", 1);
}

void f_44d_a2_v(object a0, object a1)
{
	@SetVariable("oob12BirdmaskS4", 1);
}

void f_453_a2_v(object a0, object a1)
{
	f_3ed_a2_v("sobor@door1", false);
}

bool f_45a_a1_b(object a0)
{
	if (f_49e_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_464_a1_b(object a0)
{
	if (f_4a4_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_46e_a1_b(object a0)
{
	if (f_3e8_a1_i("oob12BirdmaskS1") == 0) {
		return true;
	}
	return false;
}

bool f_47a_a1_b(object a0)
{
	if (f_3e8_a1_i("oob12BirdmaskS2") == 0) {
		return true;
	}
	return false;
}

bool f_486_a1_b(object a0)
{
	if (f_3e8_a1_i("oob12BirdmaskS3") == 0) {
		return true;
	}
	return false;
}

bool f_492_a1_b(object a0)
{
	if (f_3e8_a1_i("oob12BirdmaskS4") == 0) {
		return true;
	}
	return false;
}

bool f_49e_a1_b(object a0)
{
	return f_4f5_a0_b();
}

bool f_4a4_a1_b(object a0)
{
	if (f_40a_a0_i() >= 19) {
		return true;
	}
	return false;
}

int f_4af_a0_i(void)
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

void f_4c0_a3_v(object a0, bool a1, int a2)
{
	a0->add(18);
	a0->add(24);
	a0->add(20);
	a0->add(14);
	if (a1 == false) {
		a0->add(10);
		a0->add(17);
		a0->add(8);
	} else {
		if (a2 != 1) {
			a0->add(10);
		}
	}
}

bool f_4e1_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_4eb_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

bool f_4f5_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_4c0_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_4eb_a1_b(L3) || f_4e1_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

