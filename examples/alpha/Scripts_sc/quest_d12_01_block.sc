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
		if (!f_16a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1da_a0_i());
		L0->SetPhoto(f_1dc_a0_s());
		L0->SetPlayerName(f_1c9_a0_i());
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
		f_1a2_a1_v(a0);
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
			f_83_a1_v("Neutral");
			tv0->SetMessage(14884);
			tv0->ClearReplies();
			tv0->AddReply(14885, 16132, 16131);
			tv0->AddReply(14905, 16132, 16151);
			tv0->AddReply(14906, 16132, 16153);
			tv0->AddReply(14907, 16132, 16155);
			break;
			return;
		}
		if (f_1de_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a6_a1_v(tv2);
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

	void f_83_a1_v(string a0)
	{
		if (!f_1de_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a6_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1b8_a0_v();
			if (a0 == 16130) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14884);
				tv0->ClearReplies();
				tv0->AddReply(14885, 16132, 16131);
				tv0->AddReply(14905, 16132, 16151);
				tv0->AddReply(14906, 16132, 16153);
				tv0->AddReply(14907, 16132, 16155);
				return;
			}
			if (a0 == 16132) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14886);
				tv0->ClearReplies();
				tv0->AddReply(14887, 16134, 16133);
				tv0->AddReply(14893, 16140, 16139);
				tv0->AddReply(14899, 16146, 16145);
				return;
			}
			if (a0 == 16146) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14900);
				tv0->ClearReplies();
				tv0->AddReply(14901, 16148, 16147);
				tv0->AddReply(14904, -1, 16150);
				return;
			}
			if (a0 == 16148) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14902);
				tv0->ClearReplies();
				tv0->AddReply(14903, -1, 16149);
				return;
			}
			if (a0 == 16140) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14894);
				tv0->ClearReplies();
				tv0->AddReply(14895, 16142, 16141);
				tv0->AddReply(14898, -1, 16144);
				return;
			}
			if (a0 == 16142) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14896);
				tv0->ClearReplies();
				tv0->AddReply(14897, -1, 16143);
				return;
			}
			if (a0 == 16134) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14888);
				tv0->ClearReplies();
				tv0->AddReply(14889, 16136, 16135);
				tv0->AddReply(14892, -1, 16138);
				return;
			}
			if (a0 == 16136) {
				f_83_a1_v("Neutral");
				tv0->SetMessage(14890);
				tv0->ClearReplies();
				tv0->AddReply(14891, -1, 16137);
				return;
			}
			tv3 = true;
			if (f_1de_a0_b()) {
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

bool f_16a_a1_b(object a0)
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
	L5 = L3 * 70 + f_1bf_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1a2_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1a6_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_1b8_a0_v(void)
{
	if (f_1de_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_1bf_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1c9_a0_i(void)
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

int f_1da_a0_i(void)
{
	return 14840;
}

string f_1dc_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_1de_a0_b(void)
{
	return true;
}

