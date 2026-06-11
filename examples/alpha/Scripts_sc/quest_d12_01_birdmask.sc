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
		if (!f_238_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2fc_a0_i());
		L0->SetPhoto(f_2fe_a0_s());
		L0->SetPlayerName(f_2eb_a0_i());
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
		f_270_a1_v(a0);
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
			if (f_2d3_a1_b(tv1)) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14847);
				tv0->ClearReplies();
				tv0->AddReply(14848, -1, 16094);
				break;
			}
			f_ab_a1_v("Neutral");
			tv0->SetMessage(14849);
			tv0->ClearReplies();
			if (f_2c9_a1_b(tv1)) {
				tv0->AddReply(14850, 16097, 16096);
			}
			if (f_2c9_a1_b(tv1)) {
				tv0->AddReply(14852, 16099, 16098);
			}
			tv0->AddReply(15494, 16591, 16590);
			break;
			f_ab_a1_v("Neutral");
			tv0->SetMessage(14855);
			tv0->ClearReplies();
			tv0->AddReply(14856, 16103, 16102);
			break;
			return;
		}
		if (f_300_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_274_a1_v(tv2);
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

	void f_ab_a1_v(string a0)
	{
		if (!f_300_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_274_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_286_a0_v();
			if (a1 == 16592) {
				f_2bb_a2_v(tv1, tv0);
				f_2c2_a2_v(tv1, tv0);
			}
			if (a0 == 16093) {
				if (f_2d3_a1_b(tv1)) {
					f_ab_a1_v("Neutral");
					tv0->SetMessage(14847);
					tv0->ClearReplies();
					tv0->AddReply(14848, -1, 16094);
					return;
				}
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14849);
				tv0->ClearReplies();
				if (f_2c9_a1_b(tv1)) {
					tv0->AddReply(14850, 16097, 16096);
				}
				if (f_2c9_a1_b(tv1)) {
					tv0->AddReply(14852, 16099, 16098);
				}
				tv0->AddReply(15494, 16591, 16590);
				return;
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14855);
				tv0->ClearReplies();
				tv0->AddReply(14856, 16103, 16102);
				return;
			}
			if (a0 == 16103) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14857);
				tv0->ClearReplies();
				tv0->AddReply(14858, 16105, 16104);
				tv0->AddReply(14880, 16127, 16126);
				return;
			}
			if (a0 == 16127) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14881);
				tv0->ClearReplies();
				tv0->AddReply(14882, -1, 16128);
				return;
			}
			if (a0 == 16105) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14859);
				tv0->ClearReplies();
				tv0->AddReply(14860, 16107, 16106);
				tv0->AddReply(14879, -1, 16125);
				return;
			}
			if (a0 == 16107) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14861);
				tv0->ClearReplies();
				tv0->AddReply(14862, 16109, 16108);
				return;
			}
			if (a0 == 16109) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14863);
				tv0->ClearReplies();
				tv0->AddReply(14864, 16111, 16110);
				tv0->AddReply(14870, 16117, 16116);
				return;
			}
			if (a0 == 16117) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14871);
				tv0->ClearReplies();
				tv0->AddReply(14872, -1, 16118);
				tv0->AddReply(14873, 16120, 16119);
				return;
			}
			if (a0 == 16120) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14874);
				tv0->ClearReplies();
				tv0->AddReply(14875, -1, 16121);
				tv0->AddReply(14876, 16123, 16122);
				return;
			}
			if (a0 == 16123) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14877);
				tv0->ClearReplies();
				tv0->AddReply(14878, -1, 16124);
				return;
			}
			if (a0 == 16111) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14865);
				tv0->ClearReplies();
				tv0->AddReply(14866, 16113, 16112);
				tv0->AddReply(14869, -1, 16115);
				return;
			}
			if (a0 == 16113) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14867);
				tv0->ClearReplies();
				tv0->AddReply(14868, -1, 16114);
				return;
			}
			if (a0 == 16591) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(15495);
				tv0->ClearReplies();
				tv0->AddReply(15496, -1, 16592);
				return;
			}
			if (a0 == 16099) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14853);
				tv0->ClearReplies();
				tv0->AddReply(14854, -1, 16100);
				return;
			}
			if (a0 == 16097) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(14851);
				tv0->ClearReplies();
				tv0->AddReply(15337, -1, 16560);
				return;
			}
			tv3 = true;
			if (f_300_a0_b()) {
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

bool f_238_a1_b(object a0)
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
	L5 = L3 * 70 + f_28d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_270_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_274_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_286_a0_v(void)
{
	if (f_300_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_28d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

void f_297_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

bool f_2a7_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_2b3_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

void f_2bb_a2_v(object a0, object a1)
{
	f_297_a2_v("sobor@door1", false);
}

void f_2c2_a2_v(object a0, object a1)
{
	f_2a7_a2_b("quest_d12_01", "init_sobor");
}

bool f_2c9_a1_b(object a0)
{
	if (f_2dd_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2d3_a1_b(object a0)
{
	if (f_2e0_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2dd_a1_b(object a0)
{
	return false;
}

bool f_2e0_a1_b(object a0)
{
	if (f_2b3_a0_i() < 19) {
		return true;
	}
	return false;
}

int f_2eb_a0_i(void)
{
	int L0;
	@GetVariable("player", L0);
	if (L0 == 0) {
		return 200001;
	} else {
		if (L0 == 1) {
			return 200002;
		}
	}
	return 200003;
}

int f_2fc_a0_i(void)
{
	return 4029;
}

string f_2fe_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_300_a0_b(void)
{
	return false;
}

