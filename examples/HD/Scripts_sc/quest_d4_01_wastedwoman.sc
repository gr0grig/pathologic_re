event OnDialogReply 11;
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
		if (!f_1e2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2f7_a0_i());
		L0->SetNPCDescription(f_2f5_a0_i());
		L0->SetPhoto(f_2f9_a0_s());
		L0->SetPhoto2(f_2fb_a0_s());
		L0->SetPlayerName(f_2e4_a0_i());
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
		f_227_a1_v(a0);
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
			f_84_a1_v("Neutral");
			tv0->SetMessage(509726);
			tv0->ClearReplies();
			tv0->AddReply(509727, 10711, 10710);
			tv0->AddReply(509742, 10728, 10727);
			break;
			return;
		}
		if (f_2fd_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_239_a1_v(tv2);
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

	void f_84_a1_v(string a0)
	{
		if (!f_2fd_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_249_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_258_a0_v();
			if (a1 == 10714) {
				f_292_a2_v(tv1, tv0);
				f_2a2_a2_v(tv1, tv0);
			}
			if (a1 == 10717) {
				f_292_a2_v(tv1, tv0);
				f_2a2_a2_v(tv1, tv0);
			}
			if (a1 == 10718) {
				f_292_a2_v(tv1, tv0);
				f_2a2_a2_v(tv1, tv0);
			}
			if (a0 == 10709) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509726);
				tv0->ClearReplies();
				tv0->AddReply(509727, 10711, 10710);
				tv0->AddReply(509742, 10728, 10727);
				return;
			}
			if (a0 == 10728) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509743);
				tv0->ClearReplies();
				tv0->AddReply(509744, 10711, 10729);
				return;
			}
			if (a0 == 10711) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509728);
				tv0->ClearReplies();
				tv0->AddReply(509729, 10713, 10712);
				tv0->AddReply(509736, 10720, 10719);
				return;
			}
			if (a0 == 10720) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509737);
				tv0->ClearReplies();
				tv0->AddReply(509738, 10722, 10721);
				tv0->AddReply(509741, 10713, 10725);
				return;
			}
			if (a0 == 10722) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509739);
				tv0->ClearReplies();
				tv0->AddReply(509740, 10713, 10723);
				return;
			}
			if (a0 == 10713) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509730);
				tv0->ClearReplies();
				tv0->AddReply(509731, -1, 10714);
				tv0->AddReply(509732, 10716, 10715);
				return;
			}
			if (a0 == 10716) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(509733);
				tv0->ClearReplies();
				tv0->AddReply(509734, -1, 10717);
				tv0->AddReply(509735, -1, 10718);
				return;
			}
			tv3 = true;
			if (f_2fd_a0_b()) {
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

	void init(void)
	{
		tv0 = false;
		for (; ; ) {
			@Sleep(3);
			f_187_a0_v();
		}
	}

	void OnUse(object a0)
	{
		if (!tv0) {
			tv0 = true;
			f_1d8_a0_v();
			t0{a0};
			f_269_a2_b("quest_d4_01", "wastedwoman_done");
		}
	}
}

void f_187_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1dd_a0_b()) {
		return;
	}
	L0 = f_281_a0_i();
	for (L1 = 0; L1 < 5 && f_1dd_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_27a_a1_s(L3));
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
		if (!f_1d6_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1d6_a0_b(void)
{
	return true;
}

void f_1d8_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_1dd_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1e2_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_25f_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_2fd_a0_b()) {
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

void f_227_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_2fd_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_239_a1_v(string a0)
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

void f_249_a2_v(string a0, bool a1)
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

void f_258_a0_v(void)
{
	if (f_2fd_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_25f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_269_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_275_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

string f_27a_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_281_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_27a_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_292_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2b2_a0_o();
	L0->AddMark("d4q01WastedMale", "pt_d4q01_key2_region", 1, 511522, f_275_a0_f());
}

void f_2a2_a2_v(object a0, object a1)
{
	f_2c3_a3_v(f_2b2_a0_o(), "pt_d4q01_key2_region", 2);
	a1->ShowMap(f_2b2_a0_o());
}

object f_2b2_a0_o(void)
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

void f_2c3_a3_v(object a0, string a1, float a2)
{
	Vector L0;
	Vector L1;
	object L2;
	bool L3;
	@GetMainOutdoorScene(L2);
	if (L2 == null) {
		@Trace("Can't find main outdoor scene");
		return;
	}
	L2->GetLocator(a1, L3, L0, L1);
	if (!L3) {
		@Trace("Warning: outdoor scene locator " + a1 + " doesnt exist");
	}
	L2->GetMap(a0);
	if (a0 == null) {
		@Trace("Can't find map");
		return;
	}
	a0->SetMapParams(L0.x, L0.z, a2);
}

int f_2e4_a0_i(void)
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

int f_2f5_a0_i(void)
{
	return 515555;
}

int f_2f7_a0_i(void)
{
	return 503340;
}

string f_2f9_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_2fb_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_2fd_a0_b(void)
{
	return false;
}

