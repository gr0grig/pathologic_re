event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnLoad 5;
event OnUnload 6;

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
		if (!f_1dc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_275_a0_i());
		L0->SetPhoto(f_277_a0_s());
		L0->SetPlayerName(f_264_a0_i());
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
		f_214_a1_v(a0);
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
			if (f_24c_a1_b(tv1) && f_258_a1_b(tv1)) {
				f_246_a2_v(tv1, tv0);
				f_91_a1_v("Neutral");
				tv0->SetMessage(15005);
				tv0->ClearReplies();
				tv0->AddReply(15006, 16265, 16264);
				tv0->AddReply(15017, -1, 16276);
				tv0->AddReply(15018, 16278, 16277);
				break;
			}
			return;
		}
		if (f_279_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_218_a1_v(tv2);
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

	void f_91_a1_v(string a0)
	{
		if (!f_279_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_218_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_22a_a0_v();
			if (a0 == 16263) {
				if (f_24c_a1_b(tv1) && f_258_a1_b(tv1)) {
					f_246_a2_v(tv1, tv0);
					f_91_a1_v("Neutral");
					tv0->SetMessage(15005);
					tv0->ClearReplies();
					tv0->AddReply(15006, 16265, 16264);
					tv0->AddReply(15017, -1, 16276);
					tv0->AddReply(15018, 16278, 16277);
					return;
				}
			}
			if (a0 == 16278) {
				f_91_a1_v("Neutral");
				tv0->SetMessage(15019);
				tv0->ClearReplies();
				tv0->AddReply(15020, -1, 16279);
				tv0->AddReply(15021, -1, 16280);
				return;
			}
			if (a0 == 16265) {
				f_91_a1_v("Neutral");
				tv0->SetMessage(15007);
				tv0->ClearReplies();
				tv0->AddReply(15008, 16267, 16266);
				return;
			}
			if (a0 == 16267) {
				f_91_a1_v("Neutral");
				tv0->SetMessage(15009);
				tv0->ClearReplies();
				tv0->AddReply(15010, -1, 16268);
				tv0->AddReply(15011, -1, 16269);
				tv0->AddReply(15012, 16271, 16270);
				tv0->AddReply(15016, 16271, 16274);
				return;
			}
			if (a0 == 16271) {
				f_91_a1_v("Neutral");
				tv0->SetMessage(15013);
				tv0->ClearReplies();
				tv0->AddReply(15014, -1, 16272);
				tv0->AddReply(15015, -1, 16273);
				return;
			}
			tv3 = true;
			if (f_279_a0_b()) {
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
	var bool tv0;

	void OnUse(object a0)
	{
		f_1d2_a0_v();
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			while (!f_1d7_a0_b()) {
				@Hold();
			}
			@Sleep(3);
			f_18d_a0_v();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_18b_a0_b()) {
				@RemoveActor(f_231_a0_o());
			}
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_18b_a0_b()) {
			@RemoveActor(f_231_a0_o());
		}
	}
}

bool f_18b_a0_b(void)
{
	return true;
}

void f_18d_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1d7_a0_b()) {
		return;
	}
	L0 = f_282_a0_i();
	L1 = 0;
	for (; L1 < 5 && f_1d7_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_27b_a1_s(L3));
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
				continue;
			}
			if (L1) {
				break;
			}
		}
	}
}

void f_1d2_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_1d7_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1dc_a1_b(object a0)
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
	L5 = L3 * 70 + f_237_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_214_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_218_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_22a_a0_v(void)
{
	if (f_279_a0_b()) {
		@lshStopSpeech();
	}
}

object f_231_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_237_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_241_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_246_a2_v(object a0, object a1)
{
	@SetVariable("ood12Littlegirl1", 1);
}

bool f_24c_a1_b(object a0)
{
	if (f_241_a1_i("d12q01DankoKnowHeIsToy") != 0) {
		return true;
	}
	return false;
}

bool f_258_a1_b(object a0)
{
	if (f_241_a1_i("ood12Littlegirl1") == 0) {
		return true;
	}
	return false;
}

int f_264_a0_i(void)
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

int f_275_a0_i(void)
{
	return 3346;
}

string f_277_a0_s(void)
{
	return "ui/NPC_None.png";
}

bool f_279_a0_b(void)
{
	return false;
}

string f_27b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_282_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_27b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

