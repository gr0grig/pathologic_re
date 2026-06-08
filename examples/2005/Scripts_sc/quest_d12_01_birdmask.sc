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
		if (!f_249_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_324_a0_i());
		L0->SetNPCDescription(f_322_a0_i());
		L0->SetPhoto(f_326_a0_s());
		L0->SetPhoto2(f_328_a0_s());
		L0->SetPlayerName(f_311_a0_i());
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
		f_28d_a1_v(a0);
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
			if (f_2f9_a1_b(tv1)) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514847);
				tv0->ClearReplies();
				tv0->AddReply(514848, -1, 16094);
				break;
			}
			f_b6_a1_v("Neutral");
			tv0->SetMessage(514849);
			tv0->ClearReplies();
			if (f_2ef_a1_b(tv1)) {
				tv0->AddReply(514850, 16097, 16096);
			}
			if (f_2ef_a1_b(tv1)) {
				tv0->AddReply(514852, 16099, 16098);
			}
			tv0->AddReply(515494, 16591, 16590);
			break;
			f_b6_a1_v("Neutral");
			tv0->SetMessage(514855);
			tv0->ClearReplies();
			tv0->AddReply(514856, 16103, 16102);
			break;
			return;
		}
		if (f_32a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_29e_a1_v(tv2);
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
		if (!f_32a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2a5_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_2ab_a0_v();
			if (a1 == 16592) {
				f_2e1_a2_v(tv1, tv0);
				f_2e8_a2_v(tv1, tv0);
			}
			if (a0 == 16093) {
				if (f_2f9_a1_b(tv1)) {
					f_b6_a1_v("Neutral");
					tv0->SetMessage(514847);
					tv0->ClearReplies();
					tv0->AddReply(514848, -1, 16094);
					return;
				}
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514849);
				tv0->ClearReplies();
				if (f_2ef_a1_b(tv1)) {
					tv0->AddReply(514850, 16097, 16096);
				}
				if (f_2ef_a1_b(tv1)) {
					tv0->AddReply(514852, 16099, 16098);
				}
				tv0->AddReply(515494, 16591, 16590);
				return;
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514855);
				tv0->ClearReplies();
				tv0->AddReply(514856, 16103, 16102);
				return;
			}
			if (a0 == 16103) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514857);
				tv0->ClearReplies();
				tv0->AddReply(514858, 16105, 16104);
				tv0->AddReply(514880, 16127, 16126);
				return;
			}
			if (a0 == 16127) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514881);
				tv0->ClearReplies();
				tv0->AddReply(514882, -1, 16128);
				return;
			}
			if (a0 == 16105) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514859);
				tv0->ClearReplies();
				tv0->AddReply(514860, 16107, 16106);
				tv0->AddReply(514879, -1, 16125);
				return;
			}
			if (a0 == 16107) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514861);
				tv0->ClearReplies();
				tv0->AddReply(514862, 16109, 16108);
				return;
			}
			if (a0 == 16109) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514863);
				tv0->ClearReplies();
				tv0->AddReply(514864, 16111, 16110);
				tv0->AddReply(514870, 16117, 16116);
				return;
			}
			if (a0 == 16117) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514871);
				tv0->ClearReplies();
				tv0->AddReply(514872, -1, 16118);
				tv0->AddReply(514873, 16120, 16119);
				return;
			}
			if (a0 == 16120) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514874);
				tv0->ClearReplies();
				tv0->AddReply(514875, -1, 16121);
				tv0->AddReply(514876, 16123, 16122);
				return;
			}
			if (a0 == 16123) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514877);
				tv0->ClearReplies();
				tv0->AddReply(514878, -1, 16124);
				return;
			}
			if (a0 == 16111) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514865);
				tv0->ClearReplies();
				tv0->AddReply(514866, 16113, 16112);
				tv0->AddReply(514869, -1, 16115);
				return;
			}
			if (a0 == 16113) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514867);
				tv0->ClearReplies();
				tv0->AddReply(514868, -1, 16114);
				return;
			}
			if (a0 == 16591) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(515495);
				tv0->ClearReplies();
				tv0->AddReply(515496, -1, 16592);
				return;
			}
			if (a0 == 16099) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514853);
				tv0->ClearReplies();
				tv0->AddReply(514854, -1, 16100);
				return;
			}
			if (a0 == 16097) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(514851);
				tv0->ClearReplies();
				tv0->AddReply(515337, -1, 16560);
				return;
			}
			tv3 = true;
			if (f_32a_a0_b()) {
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
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		t0{a0};
	}
}

bool f_249_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_2b2_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_32a_a0_b()) {
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

void f_28d_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_32a_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_29e_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_2a5_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_2ab_a0_v(void)
{
	if (f_32a_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_2b2_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

void f_2bc_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_2cd_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_2d9_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

void f_2e1_a2_v(object a0, object a1)
{
	f_2bc_a2_v("sobor@door1", false);
}

void f_2e8_a2_v(object a0, object a1)
{
	f_2cd_a2_b("quest_d12_01", "init_sobor");
}

bool f_2ef_a1_b(object a0)
{
	if (f_303_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2f9_a1_b(object a0)
{
	if (f_306_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_303_a1_b(object a0)
{
	return false;
}

bool f_306_a1_b(object a0)
{
	if (f_2d9_a0_i() < 19) {
		return true;
	}
	return false;
}

int f_311_a0_i(void)
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

int f_322_a0_i(void)
{
	return 515571;
}

int f_324_a0_i(void)
{
	return 504029;
}

string f_326_a0_s(void)
{
	return "ui/NPC_Black.png";
}

string f_328_a0_s(void)
{
	return "ui/NPC_Black_b.png";
}

bool f_32a_a0_b(void)
{
	return false;
}

