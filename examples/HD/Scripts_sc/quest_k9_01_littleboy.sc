event OnDialogReply 11;
event OnUse 0;
event OnTrigger 26;
event OnUnload 6;
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
		if (!f_26c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_378_a0_i());
		L0->SetNPCDescription(f_376_a0_i());
		L0->SetPhoto(f_37a_a0_s());
		L0->SetPhoto2(f_37c_a0_s());
		L0->SetPlayerName(f_365_a0_i());
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
		f_2b1_a1_v(a0);
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
			if (f_323_a1_b(tv1)) {
				f_309_a2_v(tv1, tv0);
				f_30f_a2_v(tv1, tv0);
				f_a2_a1_v("Neutral");
				tv0->SetMessage(529790);
				tv0->ClearReplies();
				tv0->AddReply(529794, 31253, 31252);
				break;
			}
			f_a2_a1_v("Neutral");
			tv0->SetMessage(529791);
			tv0->ClearReplies();
			tv0->AddReply(529792, -1, 31250);
			tv0->AddReply(529793, -1, 31251);
			break;
			return;
		}
		if (f_37e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2c3_a1_v(tv2);
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

	void f_a2_a1_v(string a0)
	{
		if (!f_37e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2d3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_2ed_a0_v();
			if (a0 == 31248) {
				if (f_323_a1_b(tv1)) {
					f_309_a2_v(tv1, tv0);
					f_30f_a2_v(tv1, tv0);
					f_a2_a1_v("Neutral");
					tv0->SetMessage(529790);
					tv0->ClearReplies();
					tv0->AddReply(529794, 31253, 31252);
					return;
				}
				f_a2_a1_v("Neutral");
				tv0->SetMessage(529791);
				tv0->ClearReplies();
				tv0->AddReply(529792, -1, 31250);
				tv0->AddReply(529793, -1, 31251);
				return;
			}
			if (a0 == 31253) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(529795);
				tv0->ClearReplies();
				tv0->AddReply(529796, 31255, 31254);
				return;
			}
			if (a0 == 31255) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(529797);
				tv0->ClearReplies();
				tv0->AddReply(529798, 31257, 31256);
				tv0->AddReply(529803, 31262, 31261);
				return;
			}
			if (a0 == 31257) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(529799);
				tv0->ClearReplies();
				tv0->AddReply(529800, 31259, 31258);
				return;
			}
			if (a0 == 31259) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(529801);
				tv0->ClearReplies();
				tv0->AddReply(529802, 31262, 31260);
				return;
			}
			if (a0 == 31262) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(529804);
				tv0->ClearReplies();
				tv0->AddReply(529805, -1, 31264);
				tv0->AddReply(529806, -1, 31265);
				return;
			}
			tv3 = true;
			if (f_37e_a0_b()) {
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
	var bool tv6;

	void init(void)
	{
		f_175_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_1fb_a0_v();
		t0{a0};
	}

	void f_175_a2_v(float a0, float a1)
	{
		tv6 = false;
		for (; ; ) {
			float L0;
			bool L1;
			@rand(L0, 3);
			@Sleep(L0 + 3, L1);
			tv6 = true;
			f_1ba_a2_v(a0, a1);
			tv6 = false;
		}
	}

	void f_187_a0_v(void)
	{
		tv5 = true;
		if (!f_267_a0_b() && f_1b8_a0_b()) {
			@RemoveActor(f_2f4_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_187_a0_v();
		}
	}

	void OnUnload(void)
	{
		if (tv6) {
			f_1fb_a0_v();
		}
		if (tv5 && f_1b8_a0_b()) {
			@RemoveActor(f_2f4_a0_o());
		}
	}

	bool f_1b8_a0_b(void)
	{
		return true;
	}

	void f_1ba_a2_v(float a0, float a1)
	{
		if (!f_267_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_209_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_1d5_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_25f_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_1d5_a0_b()) {
				if (!tv2) {
					f_2e2_a1_v(tv4);
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

	void f_1fb_a0_v(void)
	{
		f_25a_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_209_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_267_a0_b()) {
		return;
	}
	L0 = f_387_a0_i();
	for (L1 = 0; L1 < 5 && f_267_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_380_a1_s(L3));
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
		if (!f_258_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_258_a0_b(void)
{
	return true;
}

void f_25a_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_25f_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_267_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_26c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_2fa_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_37e_a0_b()) {
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

void f_2b1_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_37e_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2c3_a1_v(string a0)
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

void f_2d3_a2_v(string a0, bool a1)
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

void f_2e2_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_2ed_a0_v(void)
{
	if (f_37e_a0_b()) {
		@lshStopSpeech();
	}
}

object f_2f4_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_2fa_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_304_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_309_a2_v(object a0, object a1)
{
	@SetVariable("ook9Littleboy1", 1);
}

void f_30f_a2_v(object a0, object a1)
{
	if (f_304_a1_i("k9q01ChildTalk") == 0) {
		@SetVariable("k9q01ChildTalk", 1);
		@SetVariable("k9q01", 7);
		f_32f_a0_v();
	}
}

bool f_323_a1_b(object a0)
{
	if (f_304_a1_i("ook9Littleboy1") == 0) {
		return true;
	}
	return false;
}

void f_32f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 524, 1, 529816);
	f_349_a2_b(L0, 517);
}

object f_33c_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_349_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_33c_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SendWorldWndMessage(7);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

int f_365_a0_i(void)
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

int f_376_a0_i(void)
{
	return 515560;
}

int f_378_a0_i(void)
{
	return 503345;
}

string f_37a_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_37c_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_37e_a0_b(void)
{
	return false;
}

string f_380_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_387_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_380_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

