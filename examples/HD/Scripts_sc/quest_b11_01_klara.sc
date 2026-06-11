event OnDialogReply 11;
event OnTrigger 26;
event OnUnload 6;
event OnLoad 5;
event OnTimer 7;
event OnLSHAnimationEnd 45;
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
		if (!f_3b1_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4ff_a0_i());
		L0->SetNPCDescription(f_4fd_a0_i());
		L0->SetPhoto(f_501_a0_s());
		L0->SetPhoto2(f_503_a0_s());
		L0->SetPlayerName(f_525_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_408_a1_b(f_4c7_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_3f6_a1_v(a0);
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
			if (!f_50d_a1_b(tv1) && f_519_a1_b(tv1)) {
				f_507_a2_v(tv1, tv0);
				f_cc_a1_v("Neutral");
				tv0->SetMessage(522009);
				tv0->ClearReplies();
				tv0->AddReply(523279, 24484, 24483);
				tv0->AddReply(522010, 24503, 23180);
				tv0->AddReply(523284, 24490, 24489);
				tv0->AddReply(523286, 24492, 24491);
				tv0->AddReply(523305, 24514, 24513);
				tv0->AddReply(523278, 24486, 24482);
				tv0->AddReply(523304, -1, 24512);
				break;
			}
			f_cc_a1_v("Fear");
			tv0->SetMessage(522096);
			tv0->ClearReplies();
			tv0->AddReply(522097, -1, 23266);
			tv0->AddReply(523318, 24533, 24532);
			break;
			return;
		}
		if (f_505_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_492_a1_v(tv2);
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

	void f_cc_a1_v(string a0)
	{
		if (!f_505_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_4a2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_4c0_a0_v();
			if (a0 == 23179) {
				if (!f_50d_a1_b(tv1) && f_519_a1_b(tv1)) {
					f_507_a2_v(tv1, tv0);
					f_cc_a1_v("Neutral");
					tv0->SetMessage(522009);
					tv0->ClearReplies();
					tv0->AddReply(523279, 24484, 24483);
					tv0->AddReply(522010, 24503, 23180);
					tv0->AddReply(523284, 24490, 24489);
					tv0->AddReply(523286, 24492, 24491);
					tv0->AddReply(523305, 24514, 24513);
					tv0->AddReply(523278, 24486, 24482);
					tv0->AddReply(523304, -1, 24512);
					return;
				}
				f_cc_a1_v("Fear");
				tv0->SetMessage(522096);
				tv0->ClearReplies();
				tv0->AddReply(522097, -1, 23266);
				tv0->AddReply(523318, 24533, 24532);
				return;
			}
			if (a0 == 24533) {
				f_cc_a1_v("Fear");
				tv0->SetMessage(523319);
				tv0->ClearReplies();
				tv0->AddReply(523320, -1, 24534);
				return;
			}
			if (a0 == 24514) {
				f_cc_a1_v("Fear");
				tv0->SetMessage(523306);
				tv0->ClearReplies();
				tv0->AddReply(523307, 24516, 24515);
				tv0->AddReply(523309, 24518, 24517);
				return;
			}
			if (a0 == 24518) {
				f_cc_a1_v("Fear");
				tv0->SetMessage(523310);
				tv0->ClearReplies();
				tv0->AddReply(523312, 24508, 24521);
				tv0->AddReply(523314, 24484, 24524);
				return;
			}
			if (a0 == 24516) {
				f_cc_a1_v("Fear");
				tv0->SetMessage(523308);
				tv0->ClearReplies();
				tv0->AddReply(523311, 24508, 24519);
				tv0->AddReply(523313, 24484, 24523);
				return;
			}
			if (a0 == 24492) {
				f_cc_a1_v("Fear");
				tv0->SetMessage(523287);
				tv0->ClearReplies();
				tv0->AddReply(523300, 24508, 24506);
				return;
			}
			if (a0 == 24490) {
				f_cc_a1_v("Fear");
				tv0->SetMessage(523285);
				tv0->ClearReplies();
				tv0->AddReply(523290, -1, 24495);
				tv0->AddReply(523291, -1, 24496);
				return;
			}
			if (a0 == 24503) {
				f_cc_a1_v("Fear");
				tv0->SetMessage(523298);
				tv0->ClearReplies();
				tv0->AddReply(523299, 24494, 24504);
				return;
			}
			if (a0 == 24484) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(523280);
				tv0->ClearReplies();
				tv0->AddReply(523281, 24486, 24485);
				tv0->AddReply(523315, 24494, 24527);
				return;
			}
			if (a0 == 24486) {
				f_cc_a1_v("Fear");
				tv0->SetMessage(523282);
				tv0->ClearReplies();
				tv0->AddReply(523288, 24494, 24493);
				tv0->AddReply(523316, 24498, 24529);
				return;
			}
			if (a0 == 24494) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(523289);
				tv0->ClearReplies();
				tv0->AddReply(523292, 24498, 24497);
				return;
			}
			if (a0 == 24498) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(523293);
				tv0->ClearReplies();
				tv0->AddReply(523294, 24508, 24499);
				tv0->AddReply(523295, 24501, 24500);
				return;
			}
			if (a0 == 24501) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(523296);
				tv0->ClearReplies();
				tv0->AddReply(523301, 24508, 24507);
				tv0->AddReply(523297, -1, 24502);
				return;
			}
			if (a0 == 24508) {
				f_cc_a1_v("Neutral");
				tv0->SetMessage(523302);
				tv0->ClearReplies();
				tv0->AddReply(523303, -1, 24509);
				tv0->AddReply(523317, -1, 24531);
				return;
			}
			tv3 = true;
			if (f_505_a0_b()) {
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
	var Vector tv0;
	var bool tv1;

	void f_264_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_295_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_4c7_a0_o());
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
			@RemoveActor(f_4c7_a0_o());
			@Hold();
		}
		f_300_a0_v();
	}

	void OnLoad(void)
	{
		f_30f_a0_v();
	}

	void f_295_a0_v(void)
	{
		if (!f_3ac_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_345_a0_v();
		}
	}

	bool f_2a3_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_3a3_a1_b(L0);
	}

	void f_2b2_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_2b7_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_391_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_2cd_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_2d6_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_2d6_a0_v();
			if (f_3ac_a0_b() && f_2b7_a0_b()) {
				if (f_2a3_a0_b()) {
					f_442_a1_b(f_4c7_a0_o());
				}
			} else {
				f_2b2_a0_v();
				f_2cd_a0_v();
			}
		}
	}

	void f_300_a0_v(void)
	{
		f_38c_a0_v();
		f_2d6_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_30f_a0_v(void)
	{
		@StopGroup0();
		f_2d6_a0_v();
		f_492_a1_v("Neutral");
		f_2cd_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_2cd_a0_v();
		} else {
			f_492_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_38c_a0_v();
			f_3a3_a1_b(a0);
			enable OnUse;
			f_264_a1_v(a0);
			f_492_a1_v("Neutral");
			f_2d6_a0_v();
			f_2cd_a0_v();
		}
	}
}

void f_345_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_3ac_a0_b()) {
		return;
	}
	L0 = f_4ec_a0_i();
	for (L1 = 0; L1 < 5 && f_3ac_a0_b(); L1++) {
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
			@PlayAnimation("all", f_4e5_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_38a_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_38a_a0_b(void)
{
	return true;
}

void f_38c_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_391_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_399_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_3a3_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_399_a1_b(L0);
}

bool f_3ac_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_3b1_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_4cd_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_505_a0_b()) {
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

void f_3f6_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_505_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_408_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_442_a1_b(a0)) {
			if (!f_467_a1_b(a0)) {
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
		if (!f_467_a1_b(a0)) {
			if (!f_442_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_442_a1_b(object a0)
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
	return f_4b1_a1_b(L4);
}

bool f_467_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_4dc_a0_i() + "m";
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
	return f_4b1_a1_b(L4);
}

void f_492_a1_v(string a0)
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

void f_4a2_a2_v(string a0, bool a1)
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

bool f_4b1_a1_b(string a0)
{
	if (f_505_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_4c0_a0_v(void)
{
	if (f_505_a0_b()) {
		@lshStopSpeech();
	}
}

object f_4c7_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_4cd_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_4d7_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_4dc_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_4e5_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_4ec_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_4e5_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_4fd_a0_i(void)
{
	return 515540;
}

int f_4ff_a0_i(void)
{
	return 502865;
}

string f_501_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

string f_503_a0_s(void)
{
	return "ui/NPC_Klara_b.png";
}

bool f_505_a0_b(void)
{
	return true;
}

void f_507_a2_v(object a0, object a1)
{
	@SetVariable("oob11KlaraD1", 1);
}

bool f_50d_a1_b(object a0)
{
	if (f_4d7_a1_i("b11q01VictimChoosed") != 0) {
		return true;
	}
	return false;
}

bool f_519_a1_b(object a0)
{
	if (f_4d7_a1_i("oob11KlaraD1") == 0) {
		return true;
	}
	return false;
}

int f_525_a0_i(void)
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

