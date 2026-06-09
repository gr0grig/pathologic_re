event evt_11 11;
event OnUse 0;
event OnTrigger 26;
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
		f_373_a1_b(f_420_a0_o());
		if (!f_31e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_566_a0_i());
		L0->SetNPCDescription(f_564_a0_i());
		L0->SetPhoto(f_568_a0_s());
		L0->SetPhoto2(f_56a_a0_s());
		L0->SetPlayerName(f_4f8_a0_i());
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
		f_362_a1_v(a0);
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
			if (f_497_a1_b(tv1) && !f_47f_a1_b(tv1)) {
				f_43e_a2_v(tv1, tv0);
				f_45d_a2_v(tv1, tv0);
				f_e9_a1_v("Neutral");
				tv0->SetMessage(535567);
				tv0->ClearReplies();
				tv0->AddReply(535568, 37252, 37251);
				tv0->AddReply(535587, 42035, 37272);
				break;
			}
			f_45d_a2_v(tv1, tv0);
			f_e9_a1_v("Neutral");
			tv0->SetMessage(535630);
			tv0->ClearReplies();
			if (!f_48b_a1_b(tv1) && f_469_a1_b(tv1) && !f_47f_a1_b(tv1)) {
				tv0->AddReply(535631, 37319, 37317);
			}
			if (f_473_a1_b(tv1) && f_4a3_a1_b(tv1)) {
				tv0->AddReply(540355, 42339, 42338);
			}
			tv0->AddReply(535632, -1, 37318);
			break;
			return;
		}
		if (f_56c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3fd_a1_v(tv2);
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

	void f_e9_a1_v(string a0)
	{
		if (!f_56c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_404_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_419_a0_v();
			if (a1 == 37261) {
				f_44d_a2_v(tv1, tv0);
			}
			if (a1 == 37264) {
				f_444_a2_v(tv1, tv0);
			}
			if (a1 == 37320) {
				f_444_a2_v(tv1, tv0);
			}
			if (a1 == 42338) {
				f_463_a2_v(tv1, tv0);
			}
			if (a0 == 37250) {
				if (f_497_a1_b(tv1) && !f_47f_a1_b(tv1)) {
					f_43e_a2_v(tv1, tv0);
					f_45d_a2_v(tv1, tv0);
					f_e9_a1_v("Neutral");
					tv0->SetMessage(535567);
					tv0->ClearReplies();
					tv0->AddReply(535568, 37252, 37251);
					tv0->AddReply(535587, 42035, 37272);
					return;
				}
				f_45d_a2_v(tv1, tv0);
				f_e9_a1_v("Neutral");
				tv0->SetMessage(535630);
				tv0->ClearReplies();
				if (!f_48b_a1_b(tv1) && f_469_a1_b(tv1) && !f_47f_a1_b(tv1)) {
					tv0->AddReply(535631, 37319, 37317);
				}
				if (f_473_a1_b(tv1) && f_4a3_a1_b(tv1)) {
					tv0->AddReply(540355, 42339, 42338);
				}
				tv0->AddReply(535632, -1, 37318);
				return;
			}
			if (a0 == 42339) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(540356);
				tv0->ClearReplies();
				tv0->AddReply(540357, 42341, 42340);
				return;
			}
			if (a0 == 42341) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(540358);
				tv0->ClearReplies();
				tv0->AddReply(540359, 42343, 42342);
				return;
			}
			if (a0 == 42343) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(540360);
				tv0->ClearReplies();
				tv0->AddReply(540361, 42345, 42344);
				return;
			}
			if (a0 == 42345) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(540362);
				tv0->ClearReplies();
				tv0->AddReply(540363, 42347, 42346);
				tv0->AddReply(540366, -1, 42349);
				return;
			}
			if (a0 == 42347) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(540364);
				tv0->ClearReplies();
				tv0->AddReply(540365, -1, 42348);
				tv0->AddReply(540367, -1, 42350);
				return;
			}
			if (a0 == 37319) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(535633);
				tv0->ClearReplies();
				tv0->AddReply(535634, -1, 37320);
				return;
			}
			if (a0 == 37252) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(535569);
				tv0->ClearReplies();
				tv0->AddReply(535570, 42035, 37253);
				tv0->AddReply(540085, 42050, 42049);
				return;
			}
			if (a0 == 42050) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(540086);
				tv0->ClearReplies();
				tv0->AddReply(540087, 42035, 42051);
				tv0->AddReply(540090, 42055, 42056);
				return;
			}
			if (a0 == 42035) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(540072);
				tv0->ClearReplies();
				tv0->AddReply(540073, 42037, 42036);
				tv0->AddReply(540084, 42039, 42047);
				return;
			}
			if (a0 == 42037) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(540074);
				tv0->ClearReplies();
				tv0->AddReply(540088, 42055, 42054);
				return;
			}
			if (a0 == 42055) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(540089);
				tv0->ClearReplies();
				tv0->AddReply(540075, 42039, 42038);
				return;
			}
			if (a0 == 42039) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(540076);
				tv0->ClearReplies();
				tv0->AddReply(540077, 37260, 42040);
				return;
			}
			if (a0 == 37260) {
				if (!f_469_a1_b(tv1)) {
					f_e9_a1_v("Neutral");
					tv0->SetMessage(535577);
					tv0->ClearReplies();
					tv0->AddReply(540353, 42337, 42336);
					tv0->AddReply(535579, -1, 37262);
					return;
				}
				if (f_469_a1_b(tv1)) {
					f_e9_a1_v("Neutral");
					tv0->SetMessage(535580);
					tv0->ClearReplies();
					tv0->AddReply(535581, -1, 37264);
					tv0->AddReply(535582, -1, 37265);
					return;
				}
			}
			if (a0 == 42337) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(540354);
				tv0->ClearReplies();
				tv0->AddReply(535578, -1, 37261);
				return;
			}
			tv3 = true;
			if (f_56c_a0_b()) {
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
		f_2ec_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_2ec_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_31c_a0_b()) {
				@RemoveActor(f_420_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_31c_a0_b()) {
			@RemoveActor(f_420_a0_o());
		}
	}
}

bool f_31c_a0_b(void)
{
	return true;
}

bool f_31e_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_426_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_56c_a0_b()) {
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

void f_362_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_56c_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_373_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3ad_a1_b(a0)) {
			if (!f_3d2_a1_b(a0)) {
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
		if (!f_3d2_a1_b(a0)) {
			if (!f_3ad_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3ad_a1_b(object a0)
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
	return f_40a_a1_b(L4);
}

bool f_3d2_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_435_a0_i() + "m";
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
	return f_40a_a1_b(L4);
}

void f_3fd_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_404_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_40a_a1_b(string a0)
{
	if (f_56c_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_419_a0_v(void)
{
	if (f_56c_a0_b()) {
		@lshStopSpeech();
	}
}

object f_420_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_426_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_430_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_435_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_43e_a2_v(object a0, object a1)
{
	@SetVariable("ood12BurahFactory1", 1);
}

void f_444_a2_v(object a0, object a1)
{
	@SetVariable("d12q01BurahInSobor", 1);
	f_4b5_a0_v();
}

void f_44d_a2_v(object a0, object a1)
{
	if (f_430_a1_i("d12q01_Burah") == 0) {
		@SetVariable("d12q01_Burah", 1);
		f_4c2_a0_v();
	}
}

void f_45d_a2_v(object a0, object a1)
{
	@SetVariable("d12q01BurahVisit", 1);
}

void f_463_a2_v(object a0, object a1)
{
	@SetVariable("ood12BurahFactory2", 1);
}

bool f_469_a1_b(object a0)
{
	if (f_4af_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_473_a1_b(object a0)
{
	if (f_430_a1_i("b12q01ChildsAreVisited") != 0) {
		return true;
	}
	return false;
}

bool f_47f_a1_b(object a0)
{
	if (f_430_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_48b_a1_b(object a0)
{
	if (f_430_a1_i("d12q01BurahInSobor") != 0) {
		return true;
	}
	return false;
}

bool f_497_a1_b(object a0)
{
	if (f_430_a1_i("ood12BurahFactory1") == 0) {
		return true;
	}
	return false;
}

bool f_4a3_a1_b(object a0)
{
	if (f_430_a1_i("ood12BurahFactory2") == 0) {
		return true;
	}
	return false;
}

bool f_4af_a1_b(object a0)
{
	return f_53e_a0_b();
}

void f_4b5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 700, 1, 535683);
	f_4dc_a2_b(L0, 699);
}

void f_4c2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 706, 1, 535689);
	f_4dc_a2_b(L0, 699);
}

object f_4cf_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_4dc_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_4cf_a0_o();
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

int f_4f8_a0_i(void)
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

void f_509_a3_v(object a0, bool a1, int a2)
{
	a0->add(18);
	a0->add(24);
	a0->add(20);
	a0->add(14);
	if (a1 == false) {
		a0->add(10);
		a0->add(17);
		a0->add(8);
	} else {
		if (a2 != 1) {
			a0->add(10);
		}
	}
}

bool f_52a_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_534_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

bool f_53e_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_509_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_534_a1_b(L3) || f_52a_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

int f_564_a0_i(void)
{
	return 515592;
}

int f_566_a0_i(void)
{
	return 511961;
}

string f_568_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_56a_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_56c_a0_b(void)
{
	return true;
}

