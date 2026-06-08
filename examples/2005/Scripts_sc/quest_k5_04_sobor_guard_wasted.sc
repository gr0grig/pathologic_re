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
		if (!f_2ae_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_40e_a0_i());
		L0->SetNPCDescription(f_40c_a0_i());
		L0->SetPhoto(f_410_a0_s());
		L0->SetPhoto2(f_412_a0_s());
		L0->SetPlayerName(f_3fb_a0_i());
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
		f_2f2_a1_v(a0);
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
			f_e2_a1_v("Neutral");
			tv0->SetMessage(539441);
			tv0->ClearReplies();
			if (f_38b_a1_b(tv1) && !f_397_a1_b(tv1) || f_37f_a1_b(tv1) && !f_397_a1_b(tv1)) {
				tv0->AddReply(539442, 41374, 41373);
			}
			if (f_38b_a1_b(tv1) && f_397_a1_b(tv1) && f_3a3_a1_b(tv1) || f_397_a1_b(tv1) && f_3a3_a1_b(tv1) && f_37f_a1_b(tv1)) {
				tv0->AddReply(539445, 41377, 41376);
			}
			tv0->AddReply(539450, -1, 41381);
			tv0->AddReply(540739, -1, 42777);
			break;
			return;
		}
		if (f_414_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_303_a1_v(tv2);
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

	void f_e2_a1_v(string a0)
	{
		if (!f_414_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_30a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_31b_a0_v();
			if (a1 == 41375) {
				f_35a_a2_v(tv1, tv0);
			}
			if (a1 == 41380) {
				f_363_a2_v(tv1, tv0);
				f_36c_a2_v(tv1, tv0);
				f_372_a2_v(tv1, tv0);
				f_378_a2_v(tv1, tv0);
			}
			if (a0 == 41372) {
				f_e2_a1_v("Neutral");
				tv0->SetMessage(539441);
				tv0->ClearReplies();
				if (f_38b_a1_b(tv1) && !f_397_a1_b(tv1) || f_37f_a1_b(tv1) && !f_397_a1_b(tv1)) {
					tv0->AddReply(539442, 41374, 41373);
				}
				if (f_38b_a1_b(tv1) && f_397_a1_b(tv1) && f_3a3_a1_b(tv1) || f_397_a1_b(tv1) && f_3a3_a1_b(tv1) && f_37f_a1_b(tv1)) {
					tv0->AddReply(539445, 41377, 41376);
				}
				tv0->AddReply(539450, -1, 41381);
				tv0->AddReply(540739, -1, 42777);
				return;
			}
			if (a0 == 41377) {
				f_e2_a1_v("Neutral");
				tv0->SetMessage(539446);
				tv0->ClearReplies();
				tv0->AddReply(540737, 42776, 42775);
				return;
			}
			if (a0 == 42776) {
				f_e2_a1_v("Neutral");
				tv0->SetMessage(540738);
				tv0->ClearReplies();
				tv0->AddReply(539447, 41379, 41378);
				return;
			}
			if (a0 == 41379) {
				f_e2_a1_v("Neutral");
				tv0->SetMessage(539448);
				tv0->ClearReplies();
				tv0->AddReply(539449, -1, 41380);
				return;
			}
			if (a0 == 41374) {
				f_e2_a1_v("Neutral");
				tv0->SetMessage(539443);
				tv0->ClearReplies();
				tv0->AddReply(539444, -1, 41375);
				return;
			}
			tv3 = true;
			if (f_414_a0_b()) {
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
			@Sleep(1);
			f_1fc_a2_v(300, 100);
		}
	}

	void OnUse(object a0)
	{
		f_23d_a0_v();
		t0{a0};
	}

	void f_1fc_a2_v(float a0, float a1)
	{
		if (!f_2a9_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_24b_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_217_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_2a1_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_217_a0_b()) {
				if (!tv2) {
					f_310_a1_v(tv4);
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

	void f_23d_a0_v(void)
	{
		f_29c_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_24b_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2a9_a0_b()) {
		return;
	}
	L0 = f_349_a0_i();
	for (L1 = 0; L1 < 5 && f_2a9_a0_b(); L1 = L1 + 1) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_342_a1_s(L3));
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
		if (!f_29a_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_29a_a0_b(void)
{
	return true;
}

void f_29c_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2a1_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2a9_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2ae_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_322_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_414_a0_b()) {
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

void f_2f2_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_414_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_303_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_30a_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_310_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_31b_a0_v(void)
{
	if (f_414_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_322_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_32c_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_331_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

string f_342_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_349_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_342_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_35a_a2_v(object a0, object a1)
{
	@SetVariable("k5q04_bring_water", 1);
	f_3b8_a0_v();
}

void f_363_a2_v(object a0, object a1)
{
	@SetVariable("k5q04", 4);
	f_3c5_a0_v();
}

void f_36c_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "bottle_water", 20);
}

void f_372_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_378_a2_v(object a0, object a1)
{
	f_331_a2_v("sobor@door1", false);
}

bool f_37f_a1_b(object a0)
{
	if (f_32c_a1_i("k5q04") == 2) {
		return true;
	}
	return false;
}

bool f_38b_a1_b(object a0)
{
	if (f_32c_a1_i("k5q04") == 3) {
		return true;
	}
	return false;
}

bool f_397_a1_b(object a0)
{
	if (f_32c_a1_i("k5q04_bring_water") != 0) {
		return true;
	}
	return false;
}

bool f_3a3_a1_b(object a0)
{
	if (f_3ad_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_3ad_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "bottle_water");
	if (L0 >= 20) {
		return true;
	}
	return false;
}

void f_3b8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 744, 2, 539461);
	f_3df_a2_b(L0, 740);
}

void f_3c5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 745, 2, 539462);
	f_3df_a2_b(L0, 740);
}

object f_3d2_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_3df_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_3d2_a0_o();
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

int f_3fb_a0_i(void)
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

int f_40c_a0_i(void)
{
	return 515556;
}

int f_40e_a0_i(void)
{
	return 503341;
}

string f_410_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_412_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_414_a0_b(void)
{
	return false;
}

