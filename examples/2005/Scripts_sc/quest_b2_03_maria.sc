event OnLoad 5;
event OnDialogReply 11;
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
		} while (!f_3a7_a0_b());
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
		f_401_a1_b(f_4ae_a0_o());
		if (!f_3ac_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_5fd_a0_i());
		L0->SetNPCDescription(f_5fb_a0_i());
		L0->SetPhoto(f_5ff_a0_s());
		L0->SetPhoto2(f_601_a0_s());
		L0->SetPlayerName(f_5ea_a0_i());
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
		f_3f0_a1_v(a0);
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
			if (f_576_a1_b(tv1) && !f_56a_a1_b(tv1)) {
				f_535_a2_v(tv1, tv0);
				f_ed_a1_v("Neutral");
				tv0->SetMessage(531063);
				tv0->ClearReplies();
				tv0->AddReply(531064, 32569, 32389);
				tv0->AddReply(531269, 32569, 32581);
				break;
			}
			if (f_56a_a1_b(tv1)) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(531077);
				tv0->ClearReplies();
				tv0->AddReply(531078, -1, 32400);
				tv0->AddReply(531255, -1, 32571);
				break;
			}
			f_ed_a1_v("Neutral");
			tv0->SetMessage(531066);
			tv0->ClearReplies();
			if (f_582_a1_b(tv1)) {
				tv0->AddReply(531067, 32395, 32392);
			}
			if (f_58e_a1_b(tv1)) {
				tv0->AddReply(531068, 32397, 32393);
			}
			tv0->AddReply(531069, -1, 32394);
			tv0->AddReply(531256, -1, 32572);
			break;
			return;
		}
		if (f_603_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_48b_a1_v(tv2);
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

	void f_ed_a1_v(string a0)
	{
		if (!f_603_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_492_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_4a7_a0_v();
			if (a1 == 32390) {
				f_53b_a2_v(tv1, tv0);
			}
			if (a1 == 32396) {
				f_53b_a2_v(tv1, tv0);
			}
			if (a1 == 32574) {
				f_53b_a2_v(tv1, tv0);
			}
			if (a1 == 32398) {
				f_547_a2_v(tv1, tv0);
				f_560_a2_v(tv1, tv0);
				f_555_a2_v(tv1, tv0);
				f_52f_a2_v(tv1, tv0);
			}
			if (a1 == 32573) {
				f_547_a2_v(tv1, tv0);
				f_560_a2_v(tv1, tv0);
				f_555_a2_v(tv1, tv0);
				f_52f_a2_v(tv1, tv0);
			}
			if (a0 == 32388) {
				if (f_576_a1_b(tv1) && !f_56a_a1_b(tv1)) {
					f_535_a2_v(tv1, tv0);
					f_ed_a1_v("Neutral");
					tv0->SetMessage(531063);
					tv0->ClearReplies();
					tv0->AddReply(531064, 32569, 32389);
					tv0->AddReply(531269, 32569, 32581);
					return;
				}
				if (f_56a_a1_b(tv1)) {
					f_ed_a1_v("Neutral");
					tv0->SetMessage(531077);
					tv0->ClearReplies();
					tv0->AddReply(531078, -1, 32400);
					tv0->AddReply(531255, -1, 32571);
					return;
				}
				f_ed_a1_v("Neutral");
				tv0->SetMessage(531066);
				tv0->ClearReplies();
				if (f_582_a1_b(tv1)) {
					tv0->AddReply(531067, 32395, 32392);
				}
				if (f_58e_a1_b(tv1)) {
					tv0->AddReply(531068, 32397, 32393);
				}
				tv0->AddReply(531069, -1, 32394);
				tv0->AddReply(531256, -1, 32572);
				return;
			}
			if (a0 == 32397) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(531072);
				tv0->ClearReplies();
				tv0->AddReply(531073, -1, 32398);
				tv0->AddReply(531257, -1, 32573);
				return;
			}
			if (a0 == 32395) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(531070);
				tv0->ClearReplies();
				tv0->AddReply(531071, -1, 32396);
				tv0->AddReply(531258, -1, 32574);
				return;
			}
			if (a0 == 32569) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(531253);
				tv0->ClearReplies();
				tv0->AddReply(531254, 32576, 32570);
				tv0->AddReply(531270, -1, 32583);
				return;
			}
			if (a0 == 32576) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(531264);
				tv0->ClearReplies();
				tv0->AddReply(531265, 32578, 32577);
				tv0->AddReply(531271, -1, 32584);
				return;
			}
			if (a0 == 32578) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(531266);
				tv0->ClearReplies();
				tv0->AddReply(531267, 32580, 32579);
				tv0->AddReply(531272, 32580, 32585);
				return;
			}
			if (a0 == 32580) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(531268);
				tv0->ClearReplies();
				tv0->AddReply(531065, -1, 32390);
				tv0->AddReply(531273, -1, 32587);
				return;
			}
			tv3 = true;
			if (f_603_a0_b()) {
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

	void f_252_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_283_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_4ae_a0_o());
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
			@RemoveActor(f_4ae_a0_o());
			@Hold();
		}
		f_2f4_a0_v();
	}

	void OnLoad(void)
	{
		f_303_a0_v();
	}

	void f_283_a0_v(void)
	{
		if (!f_3a7_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_339_a0_v();
		}
	}

	bool f_297_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_39e_a1_b(L0);
	}

	void f_2a6_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_2ab_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_385_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_2c1_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_2ca_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_2ca_a0_v();
			if (f_3a7_a0_b() && f_2ab_a0_b()) {
				if (f_297_a0_b()) {
					f_43b_a1_b(f_4ae_a0_o());
				}
			} else {
				f_2a6_a0_v();
				f_2c1_a0_v();
			}
		}
	}

	void f_2f4_a0_v(void)
	{
		f_380_a0_v();
		f_2ca_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_303_a0_v(void)
	{
		@StopGroup0();
		f_2ca_a0_v();
		f_48b_a1_v("Neutral");
		f_2c1_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_2c1_a0_v();
		} else {
			f_48b_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_380_a0_v();
			f_39e_a1_b(a0);
			enable OnUse;
			f_252_a1_v(a0);
			f_48b_a1_v("Neutral");
			f_2ca_a0_v();
			f_2c1_a0_v();
		}
	}
}

void f_339_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_3a7_a0_b()) {
		return;
	}
	L0 = f_51e_a0_i();
	for (L1 = 0; L1 < 5 && f_3a7_a0_b(); L1++) {
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
			@PlayAnimation("all", f_517_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_37e_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_37e_a0_b(void)
{
	return true;
}

void f_380_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_385_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_38d_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_394_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_39e_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_394_a1_b(L0);
}

bool f_3a7_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_3ac_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_4b4_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_603_a0_b()) {
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

void f_3f0_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_603_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_401_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_43b_a1_b(a0)) {
			if (!f_460_a1_b(a0)) {
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
		if (!f_460_a1_b(a0)) {
			if (!f_43b_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_43b_a1_b(object a0)
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
	return f_498_a1_b(L4);
}

bool f_460_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_50e_a0_i() + "m";
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
	return f_498_a1_b(L4);
}

void f_48b_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_492_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_498_a1_b(string a0)
{
	if (f_603_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_4a7_a0_v(void)
{
	if (f_603_a0_b()) {
		@lshStopSpeech();
	}
}

object f_4ae_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_4b4_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_4be_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_4c3_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_4cf_a2_v(object a0, int a1)
{
	f_38d_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_4c3_a2_v(L0, a1);
	}
}

void f_4e2_a3_v(object a0, object a1, int a2)
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
		f_4c3_a2_v(L0, a2);
	}
}

void f_4f5_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_4e2_a3_v(a0, L0, a2);
}

bool f_502_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_50e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_517_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_51e_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_517_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_52f_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_535_a2_v(object a0, object a1)
{
	@SetVariable("oob2MariaKabak1", 1);
}

void f_53b_a2_v(object a0, object a1)
{
	@SetVariable("b2q03_1", 1);
	f_59a_a0_v();
	f_5b4_a0_v();
}

void f_547_a2_v(object a0, object a1)
{
	@SetVariable("b2q03_1", 1000);
	f_5a7_a0_v();
	f_502_a2_b("quest_b2_03", "fail");
}

void f_555_a2_v(object a0, object a1)
{
	@Trace("recipe5 is given");
	f_4f5_a3_v(a0, "recipe5", 1);
}

void f_560_a2_v(object a0, object a1)
{
	@Trace("money 5000 is given");
	f_4cf_a2_v(a0, 5000);
}

bool f_56a_a1_b(object a0)
{
	if (f_4be_a1_i("b2q03") == 1000) {
		return true;
	}
	return false;
}

bool f_576_a1_b(object a0)
{
	if (f_4be_a1_i("oob2MariaKabak1") == 0) {
		return true;
	}
	return false;
}

bool f_582_a1_b(object a0)
{
	if (f_4be_a1_i("b2q03_1") == 0) {
		return true;
	}
	return false;
}

bool f_58e_a1_b(object a0)
{
	if (f_4be_a1_i("b2q03_1") == 2) {
		return true;
	}
	return false;
}

void f_59a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 588, 2, 531074);
	f_5ce_a2_b(L0, -1);
}

void f_5a7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 590, 2, 531076);
	f_5ce_a2_b(L0, 588);
}

void f_5b4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 589, 2, 531075);
	f_5ce_a2_b(L0, 588);
}

object f_5c1_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_5ce_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_5c1_a0_o();
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

int f_5ea_a0_i(void)
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

int f_5fb_a0_i(void)
{
	return 515543;
}

int f_5fd_a0_i(void)
{
	return 502868;
}

string f_5ff_a0_s(void)
{
	return "ui/NPC_Maria.png";
}

string f_601_a0_s(void)
{
	return "ui/NPC_Maria_b.png";
}

bool f_603_a0_b(void)
{
	return true;
}

