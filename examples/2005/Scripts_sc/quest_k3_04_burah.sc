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
		} while (!f_2ce_a0_b());
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
		f_328_a1_b(f_3d5_a0_o());
		if (!f_2d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4d5_a0_i());
		L0->SetNPCDescription(f_4d3_a0_i());
		L0->SetPhoto(f_4d7_a0_s());
		L0->SetPhoto2(f_4d9_a0_s());
		L0->SetPlayerName(f_4c2_a0_i());
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
		f_317_a1_v(a0);
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
			if (f_480_a1_b(tv1)) {
				f_42a_a2_v(tv1, tv0);
				f_b6_a1_v("Neutral");
				tv0->SetMessage(525635);
				tv0->ClearReplies();
				tv0->AddReply(529332, 30788, 30787);
				tv0->AddReply(540664, 42695, 42694);
				break;
			}
			f_b6_a1_v("Neutral");
			tv0->SetMessage(525638);
			tv0->ClearReplies();
			tv0->AddReply(525639, -1, 26981);
			tv0->AddReply(529336, -1, 30791);
			break;
			return;
		}
		if (f_4db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3b2_a1_v(tv2);
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
		if (!f_4db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3b9_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_3ce_a0_v();
			if (a1 == 26978) {
				f_439_a2_v(tv1, tv0);
				f_446_a2_v(tv1, tv0);
				f_463_a2_v(tv1, tv0);
			}
			if (a1 == 26979) {
				f_430_a2_v(tv1, tv0);
			}
			if (a0 == 26977) {
				if (f_480_a1_b(tv1)) {
					f_42a_a2_v(tv1, tv0);
					f_b6_a1_v("Neutral");
					tv0->SetMessage(525635);
					tv0->ClearReplies();
					tv0->AddReply(529332, 30788, 30787);
					tv0->AddReply(540664, 42695, 42694);
					return;
				}
				f_b6_a1_v("Neutral");
				tv0->SetMessage(525638);
				tv0->ClearReplies();
				tv0->AddReply(525639, -1, 26981);
				tv0->AddReply(529336, -1, 30791);
				return;
			}
			if (a0 == 42695) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(540665);
				tv0->ClearReplies();
				tv0->AddReply(540666, 30788, 42696);
				tv0->AddReply(540667, -1, 42697);
				return;
			}
			if (a0 == 30788) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(529333);
				tv0->ClearReplies();
				tv0->AddReply(540668, 42699, 42698);
				return;
			}
			if (a0 == 42699) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(540669);
				tv0->ClearReplies();
				tv0->AddReply(529334, 30790, 30789);
				return;
			}
			if (a0 == 30790) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(529335);
				tv0->ClearReplies();
				tv0->AddReply(525636, -1, 26978);
				tv0->AddReply(525637, -1, 26979);
				return;
			}
			tv3 = true;
			if (f_4db_a0_b()) {
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

	void f_180_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_1b1_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_3d5_a0_o());
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
			@RemoveActor(f_3d5_a0_o());
			@Hold();
		}
		f_222_a0_v();
	}

	void OnLoad(void)
	{
		f_231_a0_v();
	}

	void f_1b1_a0_v(void)
	{
		if (!f_2ce_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_267_a0_v();
		}
	}

	bool f_1c5_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_2c5_a1_b(L0);
	}

	void f_1d4_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1d9_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_2b3_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1ef_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1f8_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1f8_a0_v();
			if (f_2ce_a0_b() && f_1d9_a0_b()) {
				if (f_1c5_a0_b()) {
					f_362_a1_b(f_3d5_a0_o());
				}
			} else {
				f_1d4_a0_v();
				f_1ef_a0_v();
			}
		}
	}

	void f_222_a0_v(void)
	{
		f_2ae_a0_v();
		f_1f8_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_231_a0_v(void)
	{
		@StopGroup0();
		f_1f8_a0_v();
		f_3b2_a1_v("Neutral");
		f_1ef_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1ef_a0_v();
		} else {
			f_3b2_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_2ae_a0_v();
			f_2c5_a1_b(a0);
			enable OnUse;
			f_180_a1_v(a0);
			f_3b2_a1_v("Neutral");
			f_1f8_a0_v();
			f_1ef_a0_v();
		}
	}
}

void f_267_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2ce_a0_b()) {
		return;
	}
	L0 = f_419_a0_i();
	for (L1 = 0; L1 < 5 && f_2ce_a0_b(); L1++) {
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
			@PlayAnimation("all", f_412_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_2ac_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2ac_a0_b(void)
{
	return true;
}

void f_2ae_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2b3_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2bb_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_2c5_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_2bb_a1_b(L0);
}

bool f_2ce_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2d3_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3db_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_4db_a0_b()) {
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

void f_317_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_4db_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_328_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_362_a1_b(a0)) {
			if (!f_387_a1_b(a0)) {
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
		if (!f_387_a1_b(a0)) {
			if (!f_362_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_362_a1_b(object a0)
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
	return f_3bf_a1_b(L4);
}

bool f_387_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_409_a0_i() + "m";
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
	return f_3bf_a1_b(L4);
}

void f_3b2_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_3b9_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_3bf_a1_b(string a0)
{
	if (f_4db_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_3ce_a0_v(void)
{
	if (f_4db_a0_b()) {
		@lshStopSpeech();
	}
}

object f_3d5_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_3db_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3e5_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_3ea_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_3f6_a3_v(object a0, object a1, int a2)
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
		f_3ea_a2_v(L0, a2);
	}
}

int f_409_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_412_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_419_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_412_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_42a_a2_v(object a0, object a1)
{
	@SetVariable("ook3BurahIndoor1", 1);
}

void f_430_a2_v(object a0, object a1)
{
	@SetVariable("k3q04", 3);
	f_48c_a0_v();
}

void f_439_a2_v(object a0, object a1)
{
	@SetVariable("k3q04", 3);
	@SetVariable("k3q04Promise", 1);
	f_48c_a0_v();
}

void f_446_a2_v(object a0, object a1)
{
	object L0;
	@Trace("grass combination (good) is given");
	@CreateInvItem(L0);
	L0->SetItemName("grass_combination");
	L0->SetProperty("im_inc", 0.4000000059604645);
	L0->SetProperty("hl_inc", -0.009999999776482582);
	L0->SetProperty("tr_inc", 0.029999999329447746);
	f_3f6_a3_v(a0, L0, 1);
}

void f_463_a2_v(object a0, object a1)
{
	object L0;
	@Trace("grass combination (bad) is given");
	@CreateInvItem(L0);
	L0->SetItemName("grass_combination");
	L0->SetProperty("im_inc", 0.20000000298023224);
	L0->SetProperty("hl_inc", -0.07999999821186066);
	L0->SetProperty("tr_inc", 0.11999999731779099);
	f_3f6_a3_v(a0, L0, 1);
}

bool f_480_a1_b(object a0)
{
	if (f_3e5_a1_i("ook3BurahIndoor1") == 0) {
		return true;
	}
	return false;
}

void f_48c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 357, 2, 525657);
	f_4a6_a2_b(L0, 354);
}

object f_499_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_4a6_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_499_a0_o();
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

int f_4c2_a0_i(void)
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

int f_4d3_a0_i(void)
{
	return 515592;
}

int f_4d5_a0_i(void)
{
	return 511961;
}

string f_4d7_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_4d9_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_4db_a0_b(void)
{
	return true;
}

