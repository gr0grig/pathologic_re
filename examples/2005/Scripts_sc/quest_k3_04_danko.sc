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
		} while (!f_3c1_a0_b());
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
		f_41b_a1_b(f_4c8_a0_o());
		if (!f_3c6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_60a_a0_i());
		L0->SetNPCDescription(f_608_a0_i());
		L0->SetPhoto(f_60c_a0_s());
		L0->SetPhoto2(f_60e_a0_s());
		L0->SetPlayerName(f_5f7_a0_i());
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
		f_40a_a1_v(a0);
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
			if (f_59b_a1_b(tv1)) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(525642);
				tv0->ClearReplies();
				tv0->AddReply(525640, 26983, 26982);
				tv0->AddReply(539159, 41099, 41098);
				break;
			}
			if (f_58f_a1_b(tv1)) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(525624);
				tv0->ClearReplies();
				tv0->AddReply(525625, 41108, 26967);
				break;
			}
			f_c5_a1_v("Neutral");
			tv0->SetMessage(525632);
			tv0->ClearReplies();
			tv0->AddReply(525633, -1, 26975);
			tv0->AddReply(539168, -1, 41107);
			break;
			return;
		}
		if (f_610_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_4a5_a1_v(tv2);
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

	void f_c5_a1_v(string a0)
	{
		if (!f_610_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_4ac_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_4c1_a0_v();
			if (a1 == 26986) {
				f_561_a2_v(tv1, tv0);
				f_574_a2_v(tv1, tv0);
				f_584_a2_v(tv1, tv0);
				f_57e_a2_v(tv1, tv0);
			}
			if (a1 == 41106) {
				f_561_a2_v(tv1, tv0);
				f_574_a2_v(tv1, tv0);
				f_57e_a2_v(tv1, tv0);
				f_584_a2_v(tv1, tv0);
			}
			if (a1 == 26985) {
				f_557_a2_v(tv1, tv0);
			}
			if (a1 == 41103) {
				f_557_a2_v(tv1, tv0);
			}
			if (a1 == 41102) {
				f_557_a2_v(tv1, tv0);
			}
			if (a1 == 41122) {
				f_549_a2_v(tv1, tv0);
			}
			if (a1 == 26973) {
				f_549_a2_v(tv1, tv0);
			}
			if (a1 == 41121) {
				f_549_a2_v(tv1, tv0);
			}
			if (a0 == 26984) {
				if (f_59b_a1_b(tv1)) {
					f_c5_a1_v("Neutral");
					tv0->SetMessage(525642);
					tv0->ClearReplies();
					tv0->AddReply(525640, 26983, 26982);
					tv0->AddReply(539159, 41099, 41098);
					return;
				}
				if (f_58f_a1_b(tv1)) {
					f_c5_a1_v("Neutral");
					tv0->SetMessage(525624);
					tv0->ClearReplies();
					tv0->AddReply(525625, 41108, 26967);
					return;
				}
				f_c5_a1_v("Neutral");
				tv0->SetMessage(525632);
				tv0->ClearReplies();
				tv0->AddReply(525633, -1, 26975);
				tv0->AddReply(539168, -1, 41107);
				return;
			}
			if (a0 == 41108) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(539169);
				tv0->ClearReplies();
				tv0->AddReply(539170, 41111, 41109);
				tv0->AddReply(539171, -1, 41110);
				return;
			}
			if (a0 == 41111) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(539172);
				tv0->ClearReplies();
				tv0->AddReply(539173, 26968, 41112);
				tv0->AddReply(539174, 26968, 41113);
				return;
			}
			if (a0 == 26968) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(525626);
				tv0->ClearReplies();
				tv0->AddReply(539175, 41116, 41115);
				tv0->AddReply(539177, 41118, 41117);
				return;
			}
			if (a0 == 41118) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(539178);
				tv0->ClearReplies();
				tv0->AddReply(539179, 41116, 41119);
				tv0->AddReply(539180, -1, 41121);
				return;
			}
			if (a0 == 41116) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(539176);
				tv0->ClearReplies();
				tv0->AddReply(525627, 26970, 26969);
				tv0->AddReply(525631, -1, 26973);
				return;
			}
			if (a0 == 26970) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(525628);
				tv0->ClearReplies();
				tv0->AddReply(539181, -1, 41122);
				return;
			}
			if (a0 == 41099) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(539160);
				tv0->ClearReplies();
				tv0->AddReply(539161, 41101, 41100);
				tv0->AddReply(539163, -1, 41102);
				return;
			}
			if (a0 == 41101) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(539162);
				tv0->ClearReplies();
				tv0->AddReply(525643, -1, 26985);
				tv0->AddReply(539164, -1, 41103);
				return;
			}
			if (a0 == 26983) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(525641);
				tv0->ClearReplies();
				tv0->AddReply(525644, -1, 26986);
				tv0->AddReply(539165, 41105, 41104);
				return;
			}
			if (a0 == 41105) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(539166);
				tv0->ClearReplies();
				tv0->AddReply(539167, -1, 41106);
				return;
			}
			tv3 = true;
			if (f_610_a0_b()) {
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

	void f_26c_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_29d_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_4c8_a0_o());
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
			@RemoveActor(f_4c8_a0_o());
			@Hold();
		}
		f_30e_a0_v();
	}

	void OnLoad(void)
	{
		f_31d_a0_v();
	}

	void f_29d_a0_v(void)
	{
		if (!f_3c1_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_353_a0_v();
		}
	}

	bool f_2b1_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_3b8_a1_b(L0);
	}

	void f_2c0_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_2c5_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_39f_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_2db_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_2e4_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_2e4_a0_v();
			if (f_3c1_a0_b() && f_2c5_a0_b()) {
				if (f_2b1_a0_b()) {
					f_455_a1_b(f_4c8_a0_o());
				}
			} else {
				f_2c0_a0_v();
				f_2db_a0_v();
			}
		}
	}

	void f_30e_a0_v(void)
	{
		f_39a_a0_v();
		f_2e4_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_31d_a0_v(void)
	{
		@StopGroup0();
		f_2e4_a0_v();
		f_4a5_a1_v("Neutral");
		f_2db_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_2db_a0_v();
		} else {
			f_4a5_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_39a_a0_v();
			f_3b8_a1_b(a0);
			enable OnUse;
			f_26c_a1_v(a0);
			f_4a5_a1_v("Neutral");
			f_2e4_a0_v();
			f_2db_a0_v();
		}
	}
}

void f_353_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_3c1_a0_b()) {
		return;
	}
	L0 = f_538_a0_i();
	for (L1 = 0; L1 < 5 && f_3c1_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_531_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_398_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_398_a0_b(void)
{
	return true;
}

void f_39a_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_39f_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_3a7_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_3ae_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_3b8_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_3ae_a1_b(L0);
}

bool f_3c1_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_3c6_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_4ce_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_610_a0_b()) {
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

void f_40a_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_610_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_41b_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_455_a1_b(a0)) {
			if (!f_47a_a1_b(a0)) {
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
		if (!f_47a_a1_b(a0)) {
			if (!f_455_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_455_a1_b(object a0)
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
	return f_4b2_a1_b(L4);
}

bool f_47a_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_528_a0_i() + "m";
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
	return f_4b2_a1_b(L4);
}

void f_4a5_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_4ac_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_4b2_a1_b(string a0)
{
	if (f_610_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_4c1_a0_v(void)
{
	if (f_610_a0_b()) {
		@lshStopSpeech();
	}
}

object f_4c8_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_4ce_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_4d8_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_4dd_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_4e9_a2_v(object a0, int a1)
{
	f_3a7_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_4dd_a2_v(L0, a1);
	}
}

void f_4fc_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	} else {
		f_4dd_a2_v(L0, a2);
	}
}

void f_50f_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_4fc_a3_v(a0, L0, a2);
}

bool f_51c_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_528_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_531_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_538_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_531_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_549_a2_v(object a0, object a1)
{
	@SetVariable("k3q04", 2);
	f_5c1_a0_v();
	f_51c_a2_b("quest_k3_04", "place_burah_lopuh");
}

void f_557_a2_v(object a0, object a1)
{
	f_5b4_a0_v();
	f_51c_a2_b("quest_k3_04", "completed");
}

void f_561_a2_v(object a0, object a1)
{
	int L0;
	f_5a7_a0_v();
	f_51c_a2_b("quest_k3_04", "completed");
	@GetVariable("k3q04Promise", L0);
	if (L0) {
		@SetVariable("k3q04SendBurahMail", 1);
	}
}

void f_574_a2_v(object a0, object a1)
{
	@Trace("money2000 is given");
	f_4e9_a2_v(a0, 2000);
}

void f_57e_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_584_a2_v(object a0, object a1)
{
	@Trace("neomicin is given");
	f_50f_a3_v(a0, "neomicin", 1);
}

bool f_58f_a1_b(object a0)
{
	if (f_4d8_a1_i("k3q04") == 1) {
		return true;
	}
	return false;
}

bool f_59b_a1_b(object a0)
{
	if (f_4d8_a1_i("k3q04") == 3) {
		return true;
	}
	return false;
}

void f_5a7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 359, 2, 525659);
	f_5db_a2_b(L0, 354);
}

void f_5b4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 358, 2, 525658);
	f_5db_a2_b(L0, 354);
}

void f_5c1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 356, 2, 525656);
	f_5db_a2_b(L0, 354);
}

object f_5ce_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_5db_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_5ce_a0_o();
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

int f_5f7_a0_i(void)
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

int f_608_a0_i(void)
{
	return 515573;
}

int f_60a_a0_i(void)
{
	return 504032;
}

string f_60c_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_60e_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_610_a0_b(void)
{
	return true;
}

