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
		if (!f_25c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2ef_a0_i());
		L0->SetNPCDescription(f_2ed_a0_i());
		L0->SetPhoto(f_2f1_a0_s());
		L0->SetPhoto2(f_2f3_a0_s());
		L0->SetPlayerName(f_2f7_a0_i());
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
		f_2a0_a1_v(a0);
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
			f_89_a1_v("Neutral");
			tv0->SetMessage(517835);
			tv0->ClearReplies();
			tv0->AddReply(517836, 18972, 18971);
			tv0->AddReply(517855, 18992, 18991);
			tv0->AddReply(517859, -1, 18996);
			break;
			return;
		}
		if (f_2f5_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2b1_a1_v(tv2);
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

	void f_89_a1_v(string a0)
	{
		if (!f_2f5_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2b8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_2be_a0_v();
			if (a0 == 18970) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(517835);
				tv0->ClearReplies();
				tv0->AddReply(517836, 18972, 18971);
				tv0->AddReply(517855, 18992, 18991);
				tv0->AddReply(517859, -1, 18996);
				return;
			}
			if (a0 == 18992) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(517856);
				tv0->ClearReplies();
				tv0->AddReply(517857, 18972, 18993);
				tv0->AddReply(517858, -1, 18995);
				return;
			}
			if (a0 == 18972) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(517837);
				tv0->ClearReplies();
				tv0->AddReply(517838, 18974, 18973);
				tv0->AddReply(517854, 18974, 18989);
				return;
			}
			if (a0 == 18974) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(517839);
				tv0->ClearReplies();
				tv0->AddReply(517840, 18976, 18975);
				tv0->AddReply(532787, -1, 34258);
				return;
			}
			if (a0 == 18976) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(517841);
				tv0->ClearReplies();
				tv0->AddReply(517842, 18978, 18977);
				return;
			}
			if (a0 == 18978) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(517843);
				tv0->ClearReplies();
				tv0->AddReply(517844, 18980, 18979);
				tv0->AddReply(532788, -1, 34259);
				return;
			}
			if (a0 == 18980) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(517845);
				tv0->ClearReplies();
				tv0->AddReply(517846, 18982, 18981);
				return;
			}
			if (a0 == 18982) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(517847);
				tv0->ClearReplies();
				tv0->AddReply(517848, 18984, 18983);
				return;
			}
			if (a0 == 18984) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(517849);
				tv0->ClearReplies();
				tv0->AddReply(517850, 18986, 18985);
				tv0->AddReply(517853, -1, 18988);
				return;
			}
			if (a0 == 18986) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(517851);
				tv0->ClearReplies();
				tv0->AddReply(517852, -1, 18987);
				return;
			}
			tv3 = true;
			if (f_2f5_a0_b()) {
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
	var bool tv1;

	void init(void)
	{
		tv1 = false;
		f_1b1_a1_v(true);
		f_1b9_a0_v();
	}

	void OnUse(object a0)
	{
		if (!tv1) {
			f_252_a0_v();
			t0{a0};
			tv1 = true;
			OnTrigger("cleanup");
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_1b1_a1_v(false);
		}
		f_1e2_a1_v(a0);
	}

	void f_1b1_a1_v(bool a0)
	{
		object L0;
		@FindActor(L0, "tutorial_light_2");
		L0->Switch(a0);
	}

	void f_1b9_a0_v(void)
	{
		for (; ; ) {
			float L0;
			while (!f_257_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_201_a0_v();
		}
	}

	void f_1ce_a0_v(void)
	{
		bool L0;
		tv0 = true;
		@IsLoaded(L0);
		if (!L0 && f_1ff_a0_b()) {
			@RemoveActor(f_2c5_a0_o());
		}
	}

	void f_1e2_a1_v(string a0)
	{
		if (a0 == "cleanup") {
			f_1ce_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_1ff_a0_b()) {
			@RemoveActor(f_2c5_a0_o());
		}
	}
}

bool f_1ff_a0_b(void)
{
	return true;
}

void f_201_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_257_a0_b()) {
		return;
	}
	L0 = f_2dc_a0_i();
	for (L1 = 0; L1 < 5 && f_257_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_2d5_a1_s(L3));
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
		if (!f_250_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_250_a0_b(void)
{
	return true;
}

void f_252_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_257_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_25c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_2cb_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_2f5_a0_b()) {
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

void f_2a0_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_2f5_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2b1_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_2b8_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_2be_a0_v(void)
{
	if (f_2f5_a0_b()) {
		@lshStopSpeech();
	}
}

object f_2c5_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_2cb_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

string f_2d5_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_2dc_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_2d5_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_2ed_a0_i(void)
{
	return 515569;
}

int f_2ef_a0_i(void)
{
	return 503354;
}

string f_2f1_a0_s(void)
{
	return "ui/NPC_wmask.png";
}

string f_2f3_a0_s(void)
{
	return "ui/NPC_wmask_b.png";
}

bool f_2f5_a0_b(void)
{
	return false;
}

int f_2f7_a0_i(void)
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

