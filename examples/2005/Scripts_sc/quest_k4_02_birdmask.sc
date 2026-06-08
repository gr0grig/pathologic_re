event evt_11 11;
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
		if (!f_286_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_34f_a0_i());
		L0->SetNPCDescription(f_34d_a0_i());
		L0->SetPhoto(f_351_a0_s());
		L0->SetPhoto2(f_353_a0_s());
		L0->SetPlayerName(f_407_a0_i());
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
		f_2ca_a1_v(a0);
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
			if (f_38c_a1_b(tv1) && !f_3b0_a1_b(tv1)) {
				f_b5_a1_v("Neutral");
				tv0->SetMessage(525749);
				tv0->ClearReplies();
				tv0->AddReply(525750, 27063, 27062);
				tv0->AddReply(540951, 43036, 43035);
				break;
			}
			f_b5_a1_v("Neutral");
			tv0->SetMessage(525753);
			tv0->ClearReplies();
			if (f_398_a1_b(tv1) && f_3a4_a1_b(tv1)) {
				tv0->AddReply(525768, 27081, 27080);
			}
			tv0->AddReply(525754, -1, 27066);
			break;
			return;
		}
		if (f_355_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2db_a1_v(tv2);
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

	void f_b5_a1_v(string a0)
	{
		if (!f_355_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2e2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_2f3_a0_v();
			if (a1 == 27064) {
				f_375_a2_v(tv1, tv0);
				f_385_a2_v(tv1, tv0);
			}
			if (a1 == 43039) {
				f_375_a2_v(tv1, tv0);
			}
			if (a1 == 27080) {
				f_36f_a2_v(tv1, tv0);
			}
			if (a1 == 27082) {
				f_37e_a2_v(tv1, tv0);
			}
			if (a0 == 27061) {
				if (f_38c_a1_b(tv1) && !f_3b0_a1_b(tv1)) {
					f_b5_a1_v("Neutral");
					tv0->SetMessage(525749);
					tv0->ClearReplies();
					tv0->AddReply(525750, 27063, 27062);
					tv0->AddReply(540951, 43036, 43035);
					return;
				}
				f_b5_a1_v("Neutral");
				tv0->SetMessage(525753);
				tv0->ClearReplies();
				if (f_398_a1_b(tv1) && f_3a4_a1_b(tv1)) {
					tv0->AddReply(525768, 27081, 27080);
				}
				tv0->AddReply(525754, -1, 27066);
				return;
			}
			if (a0 == 27081) {
				f_b5_a1_v("Neutral");
				tv0->SetMessage(525769);
				tv0->ClearReplies();
				tv0->AddReply(525770, -1, 27082);
				return;
			}
			if (a0 == 43036) {
				f_b5_a1_v("Neutral");
				tv0->SetMessage(540952);
				tv0->ClearReplies();
				tv0->AddReply(540953, 27063, 43037);
				return;
			}
			if (a0 == 27063) {
				f_b5_a1_v("Neutral");
				tv0->SetMessage(525751);
				tv0->ClearReplies();
				tv0->AddReply(529230, 30685, 30684);
				return;
			}
			if (a0 == 30685) {
				f_b5_a1_v("Neutral");
				tv0->SetMessage(529231);
				tv0->ClearReplies();
				if (f_3bc_a1_b(tv1)) {
					tv0->AddReply(525752, -1, 27064);
				}
				tv0->AddReply(540954, -1, 43039);
				return;
			}
			tv3 = true;
			if (f_355_a0_b()) {
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
		for (; ; ) {
			f_1b2_a2_v(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object a0)
	{
		f_1f3_a0_v();
		t0{a0};
	}

	void f_1b2_a2_v(float a0, float a1)
	{
		if (!f_281_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_201_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_1cd_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_257_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_1cd_a0_b()) {
				if (!tv2) {
					f_2e8_a1_v(tv4);
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

	void f_1f3_a0_v(void)
	{
		f_252_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_201_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_281_a0_b()) {
		return;
	}
	L0 = f_35e_a0_i();
	for (L1 = 0; L1 < 5 && f_281_a0_b(); L1 = L1 + 1) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_357_a1_s(L3));
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

float f_257_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_25f_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_26b_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_25f_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_304_a3_f(L0 + a2, a3, a4));
	return true;
}

bool f_281_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_286_a2_b(object a0, float a1)
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
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_355_a0_b()) {
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

void f_2ca_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_355_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2db_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_2e2_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_2e8_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_2f3_a0_v(void)
{
	if (f_355_a0_b()) {
		@lshStopSpeech();
	}
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

float f_304_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_30f_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_314_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_337_a1_v(a1);
	f_26b_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_337_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_341_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_34d_a0_i(void)
{
	return 515571;
}

int f_34f_a0_i(void)
{
	return 504029;
}

string f_351_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_353_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_355_a0_b(void)
{
	return false;
}

string f_357_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_35e_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_357_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_36f_a2_v(object a0, object a1)
{
	@SetVariable("ook4BirdmaskTheater1", 1);
}

void f_375_a2_v(object a0, object a1)
{
	@SetVariable("k4q02BirdmaskGotoMaria", 1);
	f_3d1_a0_v();
}

void f_37e_a2_v(object a0, object a1)
{
	f_341_a2_b("quest_k4_02", "init_theater");
}

void f_385_a2_v(object a0, object a1)
{
	f_314_a2_b(a0, 0.10000000149011612);
}

bool f_38c_a1_b(object a0)
{
	if (f_30f_a1_i("k4q02") == 1) {
		return true;
	}
	return false;
}

bool f_398_a1_b(object a0)
{
	if (f_30f_a1_i("k4q02") == 2) {
		return true;
	}
	return false;
}

bool f_3a4_a1_b(object a0)
{
	if (f_30f_a1_i("ook4BirdmaskTheater1") == 0) {
		return true;
	}
	return false;
}

bool f_3b0_a1_b(object a0)
{
	if (f_30f_a1_i("k4q02BirdmaskGotoMaria") != 0) {
		return true;
	}
	return false;
}

bool f_3bc_a1_b(object a0)
{
	if (f_3c6_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_3c6_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 500) {
		return true;
	}
	return false;
}

void f_3d1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 380, 2, 525786);
	f_3eb_a2_b(L0, 378);
}

object f_3de_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_3eb_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_3de_a0_o();
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

int f_407_a0_i(void)
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

