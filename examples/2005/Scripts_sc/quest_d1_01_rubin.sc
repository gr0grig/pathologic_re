event OnLoad 5;
event evt_11 11;
event OnTrigger 26;
event OnUnload 6;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_3d1_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_42b_a1_b(f_4d8_a0_o());
		if (!f_3d6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_56c_a0_i());
		L0->SetNPCDescription(f_56a_a0_i());
		L0->SetPhoto(f_56e_a0_s());
		L0->SetPhoto2(f_570_a0_s());
		L0->SetPlayerName(f_559_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_41a_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t2
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
			if (f_517_a1_b(tv1)) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(509170);
				tv0->ClearReplies();
				tv0->AddReply(509171, 10056, 10055);
				tv0->AddReply(509175, 10062, 10061);
				tv0->AddReply(509187, 10077, 10076);
				break;
			}
			f_b6_a1_v("Neutral");
			tv0->SetMessage(531961);
			tv0->ClearReplies();
			tv0->AddReply(532856, -1, 34341);
			tv0->AddReply(531962, -1, 33366);
			break;
			return;
		}
		if (f_572_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_4b5_a1_v(tv2);
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
		if (!f_572_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_4bc_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_4d1_a0_v();
			if (a1 == 10088) {
				f_50e_a2_v(tv1, tv0);
			}
			if (a1 == 34358) {
				f_50e_a2_v(tv1, tv0);
			}
			if (a1 == 10081) {
				f_50e_a2_v(tv1, tv0);
			}
			if (a0 == 10054) {
				if (f_517_a1_b(tv1)) {
					f_b6_a1_v("Neutral");
					tv0->SetMessage(509170);
					tv0->ClearReplies();
					tv0->AddReply(509171, 10056, 10055);
					tv0->AddReply(509175, 10062, 10061);
					tv0->AddReply(509187, 10077, 10076);
					return;
				}
				f_b6_a1_v("Neutral");
				tv0->SetMessage(531961);
				tv0->ClearReplies();
				tv0->AddReply(532856, -1, 34341);
				tv0->AddReply(531962, -1, 33366);
				return;
			}
			if (a0 == 10077) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(509188);
				tv0->ClearReplies();
				tv0->AddReply(509190, 10080, 10079);
				tv0->AddReply(509189, -1, 10078);
				return;
			}
			if (a0 == 10080) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(509191);
				tv0->ClearReplies();
				tv0->AddReply(509193, 10083, 10082);
				tv0->AddReply(509192, -1, 10081);
				return;
			}
			if (a0 == 10083) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(509194);
				tv0->ClearReplies();
				tv0->AddReply(509195, 10085, 10084);
				tv0->AddReply(509202, 10085, 10093);
				return;
			}
			if (a0 == 10085) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(509196);
				tv0->ClearReplies();
				tv0->AddReply(509197, 10087, 10086);
				tv0->AddReply(509200, 34347, 10089);
				tv0->AddReply(509201, 34339, 10091);
				return;
			}
			if (a0 == 34339) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(532854);
				tv0->ClearReplies();
				tv0->AddReply(532855, 10087, 34340);
				return;
			}
			if (a0 == 34347) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(532861);
				tv0->ClearReplies();
				tv0->AddReply(532862, 34349, 34348);
				tv0->AddReply(532865, 34352, 34351);
				return;
			}
			if (a0 == 34352) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(532866);
				tv0->ClearReplies();
				tv0->AddReply(532867, 34354, 34353);
				return;
			}
			if (a0 == 34349) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(532863);
				tv0->ClearReplies();
				tv0->AddReply(532864, 34354, 34350);
				return;
			}
			if (a0 == 34354) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(532868);
				tv0->ClearReplies();
				tv0->AddReply(532869, 10087, 34356);
				return;
			}
			if (a0 == 10087) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(509198);
				tv0->ClearReplies();
				tv0->AddReply(509199, -1, 10088);
				tv0->AddReply(532870, -1, 34358);
				return;
			}
			if (a0 == 10062) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(509176);
				tv0->ClearReplies();
				tv0->AddReply(509177, 10064, 10063);
				return;
			}
			if (a0 == 10064) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(509178);
				tv0->ClearReplies();
				tv0->AddReply(509179, 10066, 10065);
				tv0->AddReply(509185, 10066, 10073);
				return;
			}
			if (a0 == 10066) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(509180);
				tv0->ClearReplies();
				tv0->AddReply(509181, 10068, 10067);
				tv0->AddReply(509184, 10068, 10071);
				return;
			}
			if (a0 == 10068) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(509182);
				tv0->ClearReplies();
				tv0->AddReply(509183, 10085, 10069);
				return;
			}
			if (a0 == 10056) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(509172);
				tv0->ClearReplies();
				tv0->AddReply(509173, 34342, 10057);
				tv0->AddReply(509174, 34342, 10059);
				return;
			}
			if (a0 == 34342) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(532857);
				tv0->ClearReplies();
				tv0->AddReply(532858, 10064, 34343);
				tv0->AddReply(532860, 10064, 34345);
				return;
			}
			tv3 = true;
			if (f_572_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t3
{
	var Vector tv0;
	var bool tv1;

	void f_283_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_2b4_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_4d8_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv1 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv1) {
			@RemoveActor(f_4d8_a0_o());
			@Hold();
		}
		f_325_a0_v();
	}

	void OnLoad(void)
	{
		f_334_a0_v();
	}

	void f_2b4_a0_v(void)
	{
		if (!f_3d1_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_36a_a0_v();
		}
	}

	bool f_2c8_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_3c8_a1_b(L0);
	}

	void f_2d7_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_2dc_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_3b6_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_2f2_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_2fb_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_2fb_a0_v();
			if (f_3d1_a0_b() && f_2dc_a0_b()) {
				if (f_2c8_a0_b()) {
					f_465_a1_b(f_4d8_a0_o());
				}
			} else {
				f_2d7_a0_v();
				f_2f2_a0_v();
			}
		}
	}

	void f_325_a0_v(void)
	{
		f_3b1_a0_v();
		f_2fb_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_334_a0_v(void)
	{
		@StopGroup0();
		f_2fb_a0_v();
		f_4b5_a1_v("Neutral");
		f_2f2_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_2f2_a0_v();
		} else {
			f_4b5_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_3b1_a0_v();
			f_3c8_a1_b(a0);
			enable OnUse;
			f_283_a1_v(a0);
			f_4b5_a1_v("Neutral");
			f_2fb_a0_v();
			f_2f2_a0_v();
		}
	}
}

void f_36a_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_3d1_a0_b()) {
		return;
	}
	L0 = f_4fd_a0_i();
	for (L1 = 0; L1 < 5 && f_3d1_a0_b(); L1 = L1 + 1) {
		if (!L0) {
			bool L2;
			@Sleep(3, L2);
			if (!L2) {
				break;
			}
		} else {
			int L3;
			int L4;
			bool L5;
			@irand(L3, L0);
			@irand(L4, 5);
			if (L4 != 0) {
				L3 = 0;
			}
			@PlayAnimation("all", f_4f6_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_3af_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_3af_a0_b(void)
{
	return true;
}

void f_3b1_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_3b6_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_3be_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_3c8_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_3be_a1_b(L0);
}

bool f_3d1_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_3d6_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_4de_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_572_a0_b()) {
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

void f_41a_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_572_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_42b_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_465_a1_b(a0)) {
			if (!f_48a_a1_b(a0)) {
				return false;
			}
		}
		@irand(L1, 2);
		if (L1) {
			@SetVariable("voice_common", (L0 + 1) % 3);
		} else {
			@SetVariable("voice_common", 0);
		}
	} else {
		if (!f_48a_a1_b(a0)) {
			if (!f_465_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_465_a1_b(object a0)
{
	string L0;
	L0 = "c";
	int L1;
	L1 = 0;
	while (1) {
		bool L2;
		a0->HasProperty(L0 + (L1 + 1), L2);
		if (!L2) {
			break;
		}
		L1 = L1 + 1;
	}
	if (!L1) {
		return false;
	}
	int L3;
	L3 = 0;
	if (L1 > 1) {
		@irand(L3, L1);
	}
	string L4;
	a0->GetProperty(L0 + (L3 + 1), L4);
	return f_4c2_a1_b(L4);
}

bool f_48a_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_4ed_a0_i() + "m";
	int L1;
	L1 = 0;
	while (1) {
		bool L2;
		a0->HasProperty(L0 + (L1 + 1), L2);
		if (!L2) {
			break;
		}
		L1 = L1 + 1;
	}
	if (!L1) {
		return false;
	}
	int L3;
	L3 = 0;
	if (L1 > 1) {
		@irand(L3, L1);
	}
	string L4;
	a0->GetProperty(L0 + (L3 + 1), L4);
	return f_4c2_a1_b(L4);
}

void f_4b5_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_4bc_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_4c2_a1_b(string a0)
{
	if (f_572_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_4d1_a0_v(void)
{
	if (f_572_a0_b()) {
		@lshStopSpeech();
	}
}

object f_4d8_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_4de_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_4e8_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_4ed_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_4f6_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_4fd_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_4f6_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_50e_a2_v(object a0, object a1)
{
	@SetVariable("d1q01", 8);
	f_523_a0_v();
}

bool f_517_a1_b(object a0)
{
	if (f_4e8_a1_i("d1q01") == 7) {
		return true;
	}
	return false;
}

void f_523_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 621, 1, 532195);
	f_53d_a2_b(L0, 2);
}

object f_530_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_53d_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_530_a0_o();
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

int f_559_a0_i(void)
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

int f_56a_a0_i(void)
{
	return 515551;
}

int f_56c_a0_i(void)
{
	return 502876;
}

string f_56e_a0_s(void)
{
	return "ui/NPC_Rubin.png";
}

string f_570_a0_s(void)
{
	return "ui/NPC_Rubin_b.png";
}

bool f_572_a0_b(void)
{
	return true;
}

