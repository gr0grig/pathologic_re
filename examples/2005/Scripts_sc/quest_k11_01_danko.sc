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
		} while (!f_39f_a0_b());
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
		f_3f9_a1_b(f_4a6_a0_o());
		if (!f_3a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_53a_a0_i());
		L0->SetNPCDescription(f_538_a0_i());
		L0->SetPhoto(f_53c_a0_s());
		L0->SetPhoto2(f_53e_a0_s());
		L0->SetPlayerName(f_527_a0_i());
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
		f_3e8_a1_v(a0);
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
			f_a2_a1_v("Neutral");
			tv0->SetMessage(527198);
			tv0->ClearReplies();
			if (f_4e5_a1_b(tv1)) {
				tv0->AddReply(527199, 28789, 28507);
			}
			tv0->AddReply(527202, -1, 28510);
			tv0->AddReply(527506, -1, 28838);
			break;
			return;
		}
		if (f_540_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_483_a1_v(tv2);
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
		if (!f_540_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_48a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_49f_a0_v();
			if (a1 == 28833) {
				f_4dc_a2_v(tv1, tv0);
			}
			if (a1 == 28836) {
				f_4dc_a2_v(tv1, tv0);
			}
			if (a1 == 28837) {
				f_4dc_a2_v(tv1, tv0);
			}
			if (a0 == 28506) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527198);
				tv0->ClearReplies();
				if (f_4e5_a1_b(tv1)) {
					tv0->AddReply(527199, 28789, 28507);
				}
				tv0->AddReply(527202, -1, 28510);
				tv0->AddReply(527506, -1, 28838);
				return;
			}
			if (a0 == 28789) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527465);
				tv0->ClearReplies();
				tv0->AddReply(527466, 28792, 28791);
				tv0->AddReply(527468, 28792, 28793);
				return;
			}
			if (a0 == 28792) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527467);
				tv0->ClearReplies();
				tv0->AddReply(527469, 28796, 28795);
				return;
			}
			if (a0 == 28796) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527470);
				tv0->ClearReplies();
				tv0->AddReply(527477, 28804, 28803);
				tv0->AddReply(527471, 28798, 28797);
				return;
			}
			if (a0 == 28798) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527472);
				tv0->ClearReplies();
				tv0->AddReply(527473, 28800, 28799);
				return;
			}
			if (a0 == 28800) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527474);
				tv0->ClearReplies();
				tv0->AddReply(527475, 28802, 28801);
				return;
			}
			if (a0 == 28802) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527476);
				tv0->ClearReplies();
				tv0->AddReply(527491, 28804, 28818);
				return;
			}
			if (a0 == 28804) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527478);
				tv0->ClearReplies();
				tv0->AddReply(527479, 28806, 28805);
				tv0->AddReply(527493, 28806, 28822);
				return;
			}
			if (a0 == 28806) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527480);
				tv0->ClearReplies();
				tv0->AddReply(527481, 28808, 28807);
				tv0->AddReply(527494, 28808, 28824);
				return;
			}
			if (a0 == 28808) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527482);
				tv0->ClearReplies();
				tv0->AddReply(527483, 28810, 28809);
				tv0->AddReply(527492, 28810, 28820);
				return;
			}
			if (a0 == 28810) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527484);
				tv0->ClearReplies();
				tv0->AddReply(527485, 28813, 28811);
				tv0->AddReply(527486, 28813, 28812);
				return;
			}
			if (a0 == 28813) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527487);
				tv0->ClearReplies();
				tv0->AddReply(527488, 28816, 28815);
				return;
			}
			if (a0 == 28816) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527489);
				tv0->ClearReplies();
				tv0->AddReply(527490, 28827, 28817);
				tv0->AddReply(527495, 28827, 28826);
				return;
			}
			if (a0 == 28827) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527496);
				tv0->ClearReplies();
				tv0->AddReply(527497, 28829, 28828);
				return;
			}
			if (a0 == 28829) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527498);
				tv0->ClearReplies();
				tv0->AddReply(527499, 28832, 28831);
				return;
			}
			if (a0 == 28832) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527500);
				tv0->ClearReplies();
				tv0->AddReply(527501, -1, 28833);
				tv0->AddReply(527502, 28835, 28834);
				return;
			}
			if (a0 == 28835) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527503);
				tv0->ClearReplies();
				tv0->AddReply(527504, -1, 28836);
				tv0->AddReply(527505, -1, 28837);
				return;
			}
			tv3 = true;
			if (f_540_a0_b()) {
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

	void f_251_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_282_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_4a6_a0_o());
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
			@RemoveActor(f_4a6_a0_o());
			@Hold();
		}
		f_2f3_a0_v();
	}

	void OnLoad(void)
	{
		f_302_a0_v();
	}

	void f_282_a0_v(void)
	{
		if (!f_39f_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_338_a0_v();
		}
	}

	bool f_296_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_396_a1_b(L0);
	}

	void f_2a5_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_2aa_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_384_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_2c0_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_2c9_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_2c9_a0_v();
			if (f_39f_a0_b() && f_2aa_a0_b()) {
				if (f_296_a0_b()) {
					f_433_a1_b(f_4a6_a0_o());
				}
			} else {
				f_2a5_a0_v();
				f_2c0_a0_v();
			}
		}
	}

	void f_2f3_a0_v(void)
	{
		f_37f_a0_v();
		f_2c9_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_302_a0_v(void)
	{
		@StopGroup0();
		f_2c9_a0_v();
		f_483_a1_v("Neutral");
		f_2c0_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_2c0_a0_v();
		} else {
			f_483_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_37f_a0_v();
			f_396_a1_b(a0);
			enable OnUse;
			f_251_a1_v(a0);
			f_483_a1_v("Neutral");
			f_2c9_a0_v();
			f_2c0_a0_v();
		}
	}
}

void f_338_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_39f_a0_b()) {
		return;
	}
	L0 = f_4cb_a0_i();
	for (L1 = 0; L1 < 5 && f_39f_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_4c4_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_37d_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_37d_a0_b(void)
{
	return true;
}

void f_37f_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_384_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_38c_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_396_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_38c_a1_b(L0);
}

bool f_39f_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_3a4_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_4ac_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_540_a0_b()) {
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

void f_3e8_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_540_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_3f9_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_433_a1_b(a0)) {
			if (!f_458_a1_b(a0)) {
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
		if (!f_458_a1_b(a0)) {
			if (!f_433_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_433_a1_b(object a0)
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
	return f_490_a1_b(L4);
}

bool f_458_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_4bb_a0_i() + "m";
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
	return f_490_a1_b(L4);
}

void f_483_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_48a_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_490_a1_b(string a0)
{
	if (f_540_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_49f_a0_v(void)
{
	if (f_540_a0_b()) {
		@lshStopSpeech();
	}
}

object f_4a6_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_4ac_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_4b6_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_4bb_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_4c4_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_4cb_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_4c4_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_4dc_a2_v(object a0, object a1)
{
	@SetVariable("k11q01", 4);
	f_4f1_a0_v();
}

bool f_4e5_a1_b(object a0)
{
	if (f_4b6_a1_i("k11q01") == 3) {
		return true;
	}
	return false;
}

void f_4f1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 487, 1, 528054);
	f_50b_a2_b(L0, 480);
}

object f_4fe_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_50b_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_4fe_a0_o();
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

int f_527_a0_i(void)
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

int f_538_a0_i(void)
{
	return 515573;
}

int f_53a_a0_i(void)
{
	return 504032;
}

string f_53c_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_53e_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_540_a0_b(void)
{
	return true;
}

