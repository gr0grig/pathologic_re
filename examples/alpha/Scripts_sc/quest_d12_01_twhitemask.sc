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
		if (!f_1eb_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_284_a0_i());
		L0->SetPhoto(f_286_a0_s());
		L0->SetPlayerName(f_273_a0_i());
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
		f_223_a1_v(a0);
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
			if (f_25b_a1_b(tv1)) {
				f_24f_a2_v(tv1, tv0);
				f_b0_a1_v("Neutral");
				tv0->SetMessage(15058);
				tv0->ClearReplies();
				tv0->AddReply(15059, 16324, 16323);
				tv0->AddReply(15072, -1, 16336);
				break;
			}
			f_b0_a1_v("Neutral");
			tv0->SetMessage(15073);
			tv0->ClearReplies();
			if (f_267_a1_b(tv1)) {
				tv0->AddReply(15074, 16339, 16338);
			}
			if (f_267_a1_b(tv1)) {
				tv0->AddReply(15085, 16341, 16349);
			}
			if (f_267_a1_b(tv1)) {
				tv0->AddReply(15086, 16341, 16351);
			}
			tv0->AddReply(15087, -1, 16353);
			break;
			return;
		}
		if (f_288_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_227_a1_v(tv2);
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

	void f_b0_a1_v(string a0)
	{
		if (!f_288_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_227_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_239_a0_v();
			if (a1 == 16338) {
				f_255_a2_v(tv1, tv0);
			}
			if (a1 == 16349) {
				f_255_a2_v(tv1, tv0);
			}
			if (a1 == 16351) {
				f_255_a2_v(tv1, tv0);
			}
			if (a0 == 16322) {
				if (f_25b_a1_b(tv1)) {
					f_24f_a2_v(tv1, tv0);
					f_b0_a1_v("Neutral");
					tv0->SetMessage(15058);
					tv0->ClearReplies();
					tv0->AddReply(15059, 16324, 16323);
					tv0->AddReply(15072, -1, 16336);
					return;
				}
				f_b0_a1_v("Neutral");
				tv0->SetMessage(15073);
				tv0->ClearReplies();
				if (f_267_a1_b(tv1)) {
					tv0->AddReply(15074, 16339, 16338);
				}
				if (f_267_a1_b(tv1)) {
					tv0->AddReply(15085, 16341, 16349);
				}
				if (f_267_a1_b(tv1)) {
					tv0->AddReply(15086, 16341, 16351);
				}
				tv0->AddReply(15087, -1, 16353);
				return;
			}
			if (a0 == 16339) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(15075);
				tv0->ClearReplies();
				tv0->AddReply(15076, 16341, 16340);
				tv0->AddReply(15081, -1, 16345);
				tv0->AddReply(15082, 16347, 16346);
				return;
			}
			if (a0 == 16347) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(15083);
				tv0->ClearReplies();
				tv0->AddReply(15084, -1, 16348);
				return;
			}
			if (a0 == 16341) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(15077);
				tv0->ClearReplies();
				tv0->AddReply(15078, -1, 16342);
				tv0->AddReply(15079, -1, 16343);
				tv0->AddReply(15080, -1, 16344);
				return;
			}
			if (a0 == 16324) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(15060);
				tv0->ClearReplies();
				tv0->AddReply(15061, 16326, 16325);
				tv0->AddReply(15071, -1, 16335);
				return;
			}
			if (a0 == 16326) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(15062);
				tv0->ClearReplies();
				tv0->AddReply(15063, 16328, 16327);
				tv0->AddReply(15067, 16332, 16331);
				return;
			}
			if (a0 == 16332) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(15068);
				tv0->ClearReplies();
				tv0->AddReply(15069, -1, 16333);
				tv0->AddReply(15070, -1, 16334);
				return;
			}
			if (a0 == 16328) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(15064);
				tv0->ClearReplies();
				tv0->AddReply(15065, -1, 16329);
				tv0->AddReply(15066, -1, 16330);
				return;
			}
			tv3 = true;
			if (f_288_a0_b()) {
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

bool f_1eb_a1_b(object a0)
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
	L5 = L3 * 70 + f_240_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_223_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_227_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_239_a0_v(void)
{
	if (f_288_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_240_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_24a_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_24f_a2_v(object a0, object a1)
{
	@SetVariable("ood12Whitemask1", 1);
}

void f_255_a2_v(object a0, object a1)
{
	@SetVariable("ood12Whitemask2", 1);
}

bool f_25b_a1_b(object a0)
{
	if (f_24a_a1_i("ood12Whitemask1") == 0) {
		return true;
	}
	return false;
}

bool f_267_a1_b(object a0)
{
	if (f_24a_a1_i("ood12Whitemask2") == 0) {
		return true;
	}
	return false;
}

int f_273_a0_i(void)
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

int f_284_a0_i(void)
{
	return 3354;
}

string f_286_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_288_a0_b(void)
{
	return false;
}

