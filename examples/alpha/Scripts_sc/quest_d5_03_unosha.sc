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
		if (!f_1b8_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_25d_a0_i());
		L0->SetPhoto(f_25f_a0_s());
		L0->SetPlayerName(f_24c_a0_i());
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
		f_1f0_a1_v(a0);
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
			if (f_240_a1_b(tv1)) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(11803);
				tv0->ClearReplies();
				tv0->AddReply(11804, 13015, 13014);
				tv0->AddReply(11808, 13019, 13018);
				break;
			}
			f_8d_a1_v("Neutral");
			tv0->SetMessage(12549);
			tv0->ClearReplies();
			tv0->AddReply(12550, -1, 13719);
			break;
			return;
		}
		if (f_261_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1f4_a1_v(tv2);
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

	void f_8d_a1_v(string a0)
	{
		if (!f_261_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1f4_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_206_a0_v();
			if (a1 == 13016) {
				f_23a_a2_v(tv1, tv0);
			}
			if (a1 == 13017) {
				f_23a_a2_v(tv1, tv0);
			}
			if (a0 == 13013) {
				if (f_240_a1_b(tv1)) {
					f_8d_a1_v("Neutral");
					tv0->SetMessage(11803);
					tv0->ClearReplies();
					tv0->AddReply(11804, 13015, 13014);
					tv0->AddReply(11808, 13019, 13018);
					return;
				}
				f_8d_a1_v("Neutral");
				tv0->SetMessage(12549);
				tv0->ClearReplies();
				tv0->AddReply(12550, -1, 13719);
				return;
			}
			if (a0 == 13019) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(11809);
				tv0->ClearReplies();
				tv0->AddReply(11810, 13015, 13020);
				tv0->AddReply(11811, 13015, 13022);
				return;
			}
			if (a0 == 13015) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(11805);
				tv0->ClearReplies();
				tv0->AddReply(11806, -1, 13016);
				tv0->AddReply(11807, -1, 13017);
				return;
			}
			tv3 = true;
			if (f_261_a0_b()) {
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

	int f_119_a1_i(object a0)
	{
		return t0{a0};
	}

	void OnUse(object a0)
	{
		f_1ae_a0_v();
		f_119_a1_i(a0);
	}

	void init(void)
	{
		for (; ; ) {
			while (!f_1b3_a0_b()) {
				@Hold();
			}
			@Sleep(3);
			f_169_a0_v();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_167_a0_b()) {
				@RemoveActor(f_20d_a0_o());
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
		if (tv0 && f_167_a0_b()) {
			@RemoveActor(f_20d_a0_o());
		}
	}
}

bool f_167_a0_b(void)
{
	return true;
}

void f_169_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1b3_a0_b()) {
		return;
	}
	L0 = f_229_a0_i();
	L1 = 0;
	for (; L1 < 5 && f_1b3_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_222_a1_s(L3));
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

void f_1ae_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_1b3_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1b8_a1_b(object a0)
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
	L5 = L3 * 70 + f_213_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1f0_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1f4_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_206_a0_v(void)
{
	if (f_261_a0_b()) {
		@lshStopSpeech();
	}
}

object f_20d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_213_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_21d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

string f_222_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_229_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_222_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_23a_a2_v(object a0, object a1)
{
	@SetVariable("ood5Prisoner1", 1);
}

bool f_240_a1_b(object a0)
{
	if (f_21d_a1_i("ood5Prisoner1") == 0) {
		return true;
	}
	return false;
}

int f_24c_a0_i(void)
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

int f_25d_a0_i(void)
{
	return 3349;
}

string f_25f_a0_s(void)
{
	return "ui/NPC_None.png";
}

bool f_261_a0_b(void)
{
	return false;
}

