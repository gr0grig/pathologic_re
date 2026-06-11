event OnDialogReply 11;
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
		if (!f_2e7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_422_a0_i());
		L0->SetNPCDescription(f_420_a0_i());
		L0->SetPhoto(f_424_a0_s());
		L0->SetPhoto2(f_426_a0_s());
		L0->SetPlayerName(f_4be_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_33e_a1_b(f_3fd_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_32c_a1_v(a0);
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
			if (f_46b_a1_b(tv1)) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519294);
				tv0->ClearReplies();
				tv0->AddReply(519295, 20450, 20449);
				tv0->AddReply(519300, 20455, 20454);
				break;
			}
			f_a9_a1_v("Neutral");
			tv0->SetMessage(519643);
			tv0->ClearReplies();
			if (f_45f_a1_b(tv1)) {
				tv0->AddReply(519644, 20823, 20821);
			}
			tv0->AddReply(519645, -1, 20822);
			break;
			return;
		}
		if (f_428_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3c8_a1_v(tv2);
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

	void f_a9_a1_v(string a0)
	{
		if (!f_428_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3d8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3f6_a0_v();
			if (a1 == 20471) {
				f_442_a2_v(tv1, tv0);
			}
			if (a1 == 20472) {
				f_442_a2_v(tv1, tv0);
			}
			if (a1 == 20821) {
				f_459_a2_v(tv1, tv0);
			}
			if (a0 == 20448) {
				if (f_46b_a1_b(tv1)) {
					f_a9_a1_v("Neutral");
					tv0->SetMessage(519294);
					tv0->ClearReplies();
					tv0->AddReply(519295, 20450, 20449);
					tv0->AddReply(519300, 20455, 20454);
					return;
				}
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519643);
				tv0->ClearReplies();
				if (f_45f_a1_b(tv1)) {
					tv0->AddReply(519644, 20823, 20821);
				}
				tv0->AddReply(519645, -1, 20822);
				return;
			}
			if (a0 == 20823) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519646);
				tv0->ClearReplies();
				tv0->AddReply(519647, 20825, 20824);
				tv0->AddReply(527865, 20825, 29210);
				return;
			}
			if (a0 == 20825) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519648);
				tv0->ClearReplies();
				tv0->AddReply(519649, -1, 20826);
				return;
			}
			if (a0 == 20455) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519301);
				tv0->ClearReplies();
				tv0->AddReply(519304, 20459, 20458);
				return;
			}
			if (a0 == 20450) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519296);
				tv0->ClearReplies();
				tv0->AddReply(519297, 20452, 20451);
				return;
			}
			if (a0 == 20452) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519298);
				tv0->ClearReplies();
				tv0->AddReply(519299, 20456, 20453);
				tv0->AddReply(519317, 20474, 20473);
				return;
			}
			if (a0 == 20474) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519318);
				tv0->ClearReplies();
				tv0->AddReply(519319, 20476, 20475);
				tv0->AddReply(519322, 20456, 20479);
				return;
			}
			if (a0 == 20476) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519320);
				tv0->ClearReplies();
				tv0->AddReply(519321, 20456, 20477);
				return;
			}
			if (a0 == 20456) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519302);
				tv0->ClearReplies();
				tv0->AddReply(519303, 20459, 20457);
				return;
			}
			if (a0 == 20459) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519305);
				tv0->ClearReplies();
				tv0->AddReply(519306, 20462, 20461);
				tv0->AddReply(519638, 20817, 20816);
				return;
			}
			if (a0 == 20817) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519639);
				tv0->ClearReplies();
				tv0->AddReply(519640, 20470, 20818);
				return;
			}
			if (a0 == 20462) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519307);
				tv0->ClearReplies();
				tv0->AddReply(519308, 20464, 20463);
				return;
			}
			if (a0 == 20464) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519309);
				tv0->ClearReplies();
				tv0->AddReply(519310, 20467, 20465);
				tv0->AddReply(519311, 20467, 20466);
				return;
			}
			if (a0 == 20467) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519312);
				tv0->ClearReplies();
				tv0->AddReply(519313, 20470, 20469);
				return;
			}
			if (a0 == 20470) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(519314);
				tv0->ClearReplies();
				tv0->AddReply(519315, -1, 20471);
				tv0->AddReply(519316, -1, 20472);
				return;
			}
			tv3 = true;
			if (f_428_a0_b()) {
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
		f_2dd_a0_v();
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			float L0;
			while (!f_2e2_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_28c_a0_v();
		}
	}

	void f_259_a0_v(void)
	{
		bool L0;
		tv0 = true;
		@IsLoaded(L0);
		if (!L0 && f_28a_a0_b()) {
			@RemoveActor(f_3fd_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_259_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_28a_a0_b()) {
			@RemoveActor(f_3fd_a0_o());
		}
	}
}

bool f_28a_a0_b(void)
{
	return true;
}

void f_28c_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2e2_a0_b()) {
		return;
	}
	L0 = f_431_a0_i();
	for (L1 = 0; L1 < 5 && f_2e2_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_42a_a1_s(L3));
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
		if (!f_2db_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2db_a0_b(void)
{
	return true;
}

void f_2dd_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_2e2_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2e7_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_403_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_428_a0_b()) {
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

void f_32c_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_428_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_33e_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_378_a1_b(a0)) {
			if (!f_39d_a1_b(a0)) {
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
		if (!f_39d_a1_b(a0)) {
			if (!f_378_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_378_a1_b(object a0)
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
	return f_3e7_a1_b(L4);
}

bool f_39d_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_417_a0_i() + "m";
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
	return f_3e7_a1_b(L4);
}

void f_3c8_a1_v(string a0)
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

void f_3d8_a2_v(string a0, bool a1)
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

bool f_3e7_a1_b(string a0)
{
	if (f_428_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_3f6_a0_v(void)
{
	if (f_428_a0_b()) {
		@lshStopSpeech();
	}
}

object f_3fd_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_403_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_40d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

float f_412_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_417_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_420_a0_i(void)
{
	return 515562;
}

int f_422_a0_i(void)
{
	return 503347;
}

string f_424_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_426_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_428_a0_b(void)
{
	return false;
}

string f_42a_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_431_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_42a_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_442_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b3q01", 3);
	L0 = f_4ad_a0_o();
	L0->AddMark("b3q01ButcherGotoBigVlad", "pt_map_bigvlad", 1, 519641, f_412_a0_f());
	f_477_a0_v();
}

void f_459_a2_v(object a0, object a1)
{
	@SetVariable("oob3Butcher1", 1);
}

bool f_45f_a1_b(object a0)
{
	if (f_40d_a1_i("oob3Butcher1") == 0) {
		return true;
	}
	return false;
}

bool f_46b_a1_b(object a0)
{
	if (f_40d_a1_i("b3q01") == 2) {
		return true;
	}
	return false;
}

void f_477_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 224, 1, 519642);
	f_491_a2_b(L0, 221);
}

object f_484_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_491_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_484_a0_o();
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

object f_4ad_a0_o(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("Can't find main outdoor scene");
		L1 = null;
		return L1;
	}
	L0->GetMap(L1);
	return L1;
}

int f_4be_a0_i(void)
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

