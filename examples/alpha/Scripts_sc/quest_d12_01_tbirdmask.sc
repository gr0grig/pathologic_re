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
		if (!f_187_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f7_a0_i());
		L0->SetPhoto(f_1f9_a0_s());
		L0->SetPlayerName(f_1e6_a0_i());
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
		f_1bf_a1_v(a0);
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
			f_74_a1_v("Neutral");
			tv0->SetMessage(15498);
			tv0->ClearReplies();
			tv0->AddReply(15499, 16596, 16595);
			break;
			return;
		}
		if (f_1fb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c3_a1_v(tv2);
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

	void f_74_a1_v(string a0)
	{
		if (!f_1fb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c3_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1d5_a0_v();
			if (a0 == 16594) {
				f_74_a1_v("Neutral");
				tv0->SetMessage(15498);
				tv0->ClearReplies();
				tv0->AddReply(15499, 16596, 16595);
				return;
			}
			if (a0 == 16596) {
				f_74_a1_v("Neutral");
				tv0->SetMessage(15500);
				tv0->ClearReplies();
				tv0->AddReply(15501, 16598, 16597);
				tv0->AddReply(15523, 16620, 16619);
				return;
			}
			if (a0 == 16620) {
				f_74_a1_v("Neutral");
				tv0->SetMessage(15524);
				tv0->ClearReplies();
				tv0->AddReply(15525, -1, 16621);
				return;
			}
			if (a0 == 16598) {
				f_74_a1_v("Neutral");
				tv0->SetMessage(15502);
				tv0->ClearReplies();
				tv0->AddReply(15503, 16600, 16599);
				tv0->AddReply(15522, -1, 16618);
				return;
			}
			if (a0 == 16600) {
				f_74_a1_v("Neutral");
				tv0->SetMessage(15504);
				tv0->ClearReplies();
				tv0->AddReply(15505, 16602, 16601);
				return;
			}
			if (a0 == 16602) {
				f_74_a1_v("Neutral");
				tv0->SetMessage(15506);
				tv0->ClearReplies();
				tv0->AddReply(15507, 16604, 16603);
				tv0->AddReply(15513, 16610, 16609);
				return;
			}
			if (a0 == 16610) {
				f_74_a1_v("Neutral");
				tv0->SetMessage(15514);
				tv0->ClearReplies();
				tv0->AddReply(15515, -1, 16611);
				tv0->AddReply(15516, 16613, 16612);
				return;
			}
			if (a0 == 16613) {
				f_74_a1_v("Neutral");
				tv0->SetMessage(15517);
				tv0->ClearReplies();
				tv0->AddReply(15518, -1, 16614);
				tv0->AddReply(15519, 16616, 16615);
				return;
			}
			if (a0 == 16616) {
				f_74_a1_v("Neutral");
				tv0->SetMessage(15520);
				tv0->ClearReplies();
				tv0->AddReply(15521, -1, 16617);
				return;
			}
			if (a0 == 16604) {
				f_74_a1_v("Neutral");
				tv0->SetMessage(15508);
				tv0->ClearReplies();
				tv0->AddReply(15509, 16606, 16605);
				tv0->AddReply(15512, -1, 16608);
				return;
			}
			if (a0 == 16606) {
				f_74_a1_v("Neutral");
				tv0->SetMessage(15510);
				tv0->ClearReplies();
				tv0->AddReply(15511, -1, 16607);
				return;
			}
			tv3 = true;
			if (f_1fb_a0_b()) {
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

bool f_187_a1_b(object a0)
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
	L5 = L3 * 70 + f_1dc_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1bf_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1c3_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_1d5_a0_v(void)
{
	if (f_1fb_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_1dc_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1e6_a0_i(void)
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

int f_1f7_a0_i(void)
{
	return 4029;
}

string f_1f9_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_1fb_a0_b(void)
{
	return false;
}

