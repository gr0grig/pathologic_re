event OnDialogReply 11;
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
		if (!f_3ca_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4f2_a0_i());
		L0->SetNPCDescription(f_4f0_a0_i());
		L0->SetPhoto(f_4f4_a0_s());
		L0->SetPhoto2(f_4f6_a0_s());
		L0->SetPlayerName(f_4c8_a0_i());
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
		f_40e_a1_v(a0);
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
			f_8e_a1_v("Neutral");
			tv0->SetMessage(538595);
			tv0->ClearReplies();
			if (f_495_a1_b(tv1)) {
				tv0->AddReply(538598, 40487, 40486);
			}
			tv0->AddReply(538596, -1, 40484);
			tv0->AddReply(538597, -1, 40485);
			break;
			return;
		}
		if (f_4f8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_41f_a1_v(tv2);
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

	void f_8e_a1_v(string a0)
	{
		if (!f_4f8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_426_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_437_a0_v();
			if (a1 == 40486) {
				f_475_a2_v(tv1, tv0);
			}
			if (a0 == 40483) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(538595);
				tv0->ClearReplies();
				if (f_495_a1_b(tv1)) {
					tv0->AddReply(538598, 40487, 40486);
				}
				tv0->AddReply(538596, -1, 40484);
				tv0->AddReply(538597, -1, 40485);
				return;
			}
			if (a0 == 40487) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(538599);
				tv0->ClearReplies();
				tv0->AddReply(538600, -1, 40488);
				tv0->AddReply(538601, -1, 40489);
				return;
			}
			tv3 = true;
			if (f_4f8_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t2
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_3ca_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4f2_a0_i());
		L0->SetNPCDescription(f_4f0_a0_i());
		L0->SetPhoto(f_4f4_a0_s());
		L0->SetPhoto2(f_4f6_a0_s());
		L0->SetPlayerName(f_4c8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_40e_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t3
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
			if (f_49f_a1_b(tv1)) {
				f_489_a2_v(tv1, tv0);
				f_1b7_a1_v("Neutral");
				tv0->SetMessage(538603);
				tv0->ClearReplies();
				tv0->AddReply(538604, 40494, 40492);
				tv0->AddReply(538605, 40496, 40493);
				tv0->AddReply(538621, -1, 40512);
				break;
			}
			if (f_4a9_a1_b(tv1)) {
				f_1b7_a1_v("Neutral");
				tv0->SetMessage(538622);
				tv0->ClearReplies();
				tv0->AddReply(538623, -1, 40514);
				tv0->AddReply(538624, -1, 40515);
				break;
			}
			f_1b7_a1_v("Neutral");
			tv0->SetMessage(538625);
			tv0->ClearReplies();
			tv0->AddReply(538626, 40519, 40517);
			tv0->AddReply(538627, -1, 40518);
			break;
			return;
		}
		if (f_4f8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_41f_a1_v(tv2);
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

	void f_1b7_a1_v(string a0)
	{
		if (!f_4f8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_426_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_437_a0_v();
			if (a1 == 40508) {
				f_482_a2_v(tv1, tv0);
				f_48f_a2_v(tv1, tv0);
			}
			if (a1 == 40511) {
				f_48f_a2_v(tv1, tv0);
			}
			if (a1 == 40507) {
				f_47b_a2_v(tv1, tv0);
			}
			if (a1 == 40510) {
				f_48f_a2_v(tv1, tv0);
			}
			if (a0 == 40491) {
				if (f_49f_a1_b(tv1)) {
					f_489_a2_v(tv1, tv0);
					f_1b7_a1_v("Neutral");
					tv0->SetMessage(538603);
					tv0->ClearReplies();
					tv0->AddReply(538604, 40494, 40492);
					tv0->AddReply(538605, 40496, 40493);
					tv0->AddReply(538621, -1, 40512);
					return;
				}
				if (f_4a9_a1_b(tv1)) {
					f_1b7_a1_v("Neutral");
					tv0->SetMessage(538622);
					tv0->ClearReplies();
					tv0->AddReply(538623, -1, 40514);
					tv0->AddReply(538624, -1, 40515);
					return;
				}
				f_1b7_a1_v("Neutral");
				tv0->SetMessage(538625);
				tv0->ClearReplies();
				tv0->AddReply(538626, 40519, 40517);
				tv0->AddReply(538627, -1, 40518);
				return;
			}
			if (a0 == 40519) {
				f_1b7_a1_v("Neutral");
				tv0->SetMessage(538628);
				tv0->ClearReplies();
				tv0->AddReply(538629, -1, 40520);
				tv0->AddReply(538630, -1, 40521);
				return;
			}
			if (a0 == 40496) {
				f_1b7_a1_v("Neutral");
				tv0->SetMessage(538608);
				tv0->ClearReplies();
				tv0->AddReply(538609, 40501, 40497);
				tv0->AddReply(538611, 40500, 40499);
				return;
			}
			if (a0 == 40500) {
				f_1b7_a1_v("Neutral");
				tv0->SetMessage(538612);
				tv0->ClearReplies();
				tv0->AddReply(538614, 40498, 40502);
				tv0->AddReply(538615, 40501, 40503);
				return;
			}
			if (a0 == 40501) {
				f_1b7_a1_v("Neutral");
				tv0->SetMessage(538613);
				tv0->ClearReplies();
				tv0->AddReply(538617, -1, 40507);
				tv0->AddReply(538619, -1, 40510);
				return;
			}
			if (a0 == 40494) {
				f_1b7_a1_v("Neutral");
				tv0->SetMessage(538606);
				tv0->ClearReplies();
				tv0->AddReply(538607, 40498, 40495);
				tv0->AddReply(538616, 40500, 40505);
				return;
			}
			if (a0 == 40498) {
				f_1b7_a1_v("Neutral");
				tv0->SetMessage(538610);
				tv0->ClearReplies();
				tv0->AddReply(538618, -1, 40508);
				tv0->AddReply(538620, -1, 40511);
				return;
			}
			tv3 = true;
			if (f_4f8_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t4
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
			f_318_a2_v(300, 100);
		}
	}

	void OnUse(object a0)
	{
		int L0;
		f_359_a0_v();
		@GetProperty("day", L0);
		if (L0 == f_454_a0_i()) {
			int L1;
			L1 = t2{a0};
			if (L1 == 1) {
				f_448_a2_b("klara2_svita_positioner", "wonder");
			} else {
				if (L1 == 2) {
					f_448_a2_b("klara2_svita_positioner", "wrong_wonder");
				}
			}
		} else {
			t0{a0};
		}
	}

	void f_318_a2_v(float a0, float a1)
	{
		if (!f_3c5_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_367_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_333_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_3bd_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_333_a0_b()) {
				if (!tv2) {
					f_42c_a1_v(tv4);
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

	void f_359_a0_v(void)
	{
		f_3b8_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_367_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_3c5_a0_b()) {
		return;
	}
	L0 = f_464_a0_i();
	for (L1 = 0; L1 < 5 && f_3c5_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_45d_a1_s(L3));
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
		if (!f_3b6_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_3b6_a0_b(void)
{
	return true;
}

void f_3b8_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_3bd_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_3c5_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_3ca_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_43e_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_4f8_a0_b()) {
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

void f_40e_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_4f8_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_41f_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_426_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_42c_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_437_a0_v(void)
{
	if (f_4f8_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_43e_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_448_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_454_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_45d_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_464_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_45d_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_475_a2_v(object a0, object a1)
{
	f_4d9_a1_v("AlbinosLate1");
}

void f_47b_a2_v(object a0, object a1)
{
	f_448_a2_b("klara2_svita_positioner", "wonder");
}

void f_482_a2_v(object a0, object a1)
{
	f_448_a2_b("klara2_svita_positioner", "bad_wonder");
}

void f_489_a2_v(object a0, object a1)
{
	f_4d9_a1_v("Albinos1");
}

void f_48f_a2_v(object a0, object a1)
{
	f_4d9_a1_v("BadKlara");
}

bool f_495_a1_b(object a0)
{
	if (f_4b3_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_49f_a1_b(object a0)
{
	if (f_4ba_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_4a9_a1_b(object a0)
{
	if (f_4c1_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_4b3_a1_b(object a0)
{
	return f_4e4_a1_b("AlbinosLate1");
}

bool f_4ba_a1_b(object a0)
{
	return f_4e4_a1_b("Albinos1");
}

bool f_4c1_a1_b(object a0)
{
	return !f_4e4_a1_b("BadKlara");
}

int f_4c8_a0_i(void)
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

void f_4d9_a1_v(string a0)
{
	int L0;
	@GetProperty("day", L0);
	@SetVariable("K2S_Klara2Svita" + a0 + L0, 1);
}

bool f_4e4_a1_b(string a0)
{
	int L0;
	int L1;
	@GetProperty("day", L0);
	@GetVariable("K2S_Klara2Svita" + a0 + L0, L1);
	return L1 == 0;
}

int f_4f0_a0_i(void)
{
	return 515595;
}

int f_4f2_a0_i(void)
{
	return 512611;
}

string f_4f4_a0_s(void)
{
	return "ui/NPC_Black.png";
}

string f_4f6_a0_s(void)
{
	return "ui/NPC_Black_b.png";
}

bool f_4f8_a0_b(void)
{
	return false;
}

