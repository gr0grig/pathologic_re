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
		if (!f_35a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_637_a0_i());
		L0->SetNPCDescription(f_635_a0_i());
		L0->SetPhoto(f_639_a0_s());
		L0->SetPhoto2(f_63b_a0_s());
		L0->SetPlayerName(f_624_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_3b1_a1_b(f_470_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_39f_a1_v(a0);
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
			if (f_58a_a1_b(tv1)) {
				f_544_a2_v(tv1, tv0);
				f_bd_a1_v("Fear");
				tv0->SetMessage(521178);
				tv0->ClearReplies();
				tv0->AddReply(528362, 29735, 29734);
				break;
			}
			f_bd_a1_v("Fear");
			tv0->SetMessage(521184);
			tv0->ClearReplies();
			if (f_596_a1_b(tv1)) {
				tv0->AddReply(521185, 22388, 22387);
			}
			if (f_57e_a1_b(tv1) && !f_572_a1_b(tv1)) {
				tv0->AddReply(521188, 22391, 22390);
			}
			tv0->AddReply(521191, -1, 22393);
			break;
			return;
		}
		if (f_63d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_43b_a1_v(tv2);
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

	void f_bd_a1_v(string a0)
	{
		if (!f_63d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_44b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_469_a0_v();
			if (a1 == 22381) {
				f_51b_a2_v(tv1, tv0);
				f_55b_a2_v(tv1, tv0);
			}
			if (a1 == 29741) {
				f_56b_a2_v(tv1, tv0);
			}
			if (a1 == 22389) {
				f_51b_a2_v(tv1, tv0);
				f_55b_a2_v(tv1, tv0);
			}
			if (a1 == 22392) {
				f_53a_a2_v(tv1, tv0);
				f_54a_a2_v(tv1, tv0);
				f_550_a2_v(tv1, tv0);
			}
			if (a0 == 22380) {
				if (f_58a_a1_b(tv1)) {
					f_544_a2_v(tv1, tv0);
					f_bd_a1_v("Fear");
					tv0->SetMessage(521178);
					tv0->ClearReplies();
					tv0->AddReply(528362, 29735, 29734);
					return;
				}
				f_bd_a1_v("Fear");
				tv0->SetMessage(521184);
				tv0->ClearReplies();
				if (f_596_a1_b(tv1)) {
					tv0->AddReply(521185, 22388, 22387);
				}
				if (f_57e_a1_b(tv1) && !f_572_a1_b(tv1)) {
					tv0->AddReply(521188, 22391, 22390);
				}
				tv0->AddReply(521191, -1, 22393);
				return;
			}
			if (a0 == 22391) {
				f_bd_a1_v("Saveyouall");
				tv0->SetMessage(521189);
				tv0->ClearReplies();
				tv0->AddReply(528371, 29744, 29743);
				tv0->AddReply(528373, 29744, 29745);
				return;
			}
			if (a0 == 29744) {
				f_bd_a1_v("Saveyouall");
				tv0->SetMessage(528372);
				tv0->ClearReplies();
				tv0->AddReply(521190, -1, 22392);
				return;
			}
			if (a0 == 22388) {
				f_bd_a1_v("Saveyouall");
				tv0->SetMessage(521186);
				tv0->ClearReplies();
				tv0->AddReply(521187, -1, 22389);
				return;
			}
			if (a0 == 29735) {
				f_bd_a1_v("Fear");
				tv0->SetMessage(528363);
				tv0->ClearReplies();
				tv0->AddReply(528364, 29737, 29736);
				return;
			}
			if (a0 == 29737) {
				f_bd_a1_v("Fear");
				tv0->SetMessage(528365);
				tv0->ClearReplies();
				tv0->AddReply(528366, 29739, 29738);
				return;
			}
			if (a0 == 29739) {
				f_bd_a1_v("Fear");
				tv0->SetMessage(528367);
				tv0->ClearReplies();
				tv0->AddReply(521183, 29740, 22385);
				return;
			}
			if (a0 == 29740) {
				f_bd_a1_v("Saveyouall");
				tv0->SetMessage(528368);
				tv0->ClearReplies();
				tv0->AddReply(521179, -1, 22381);
				tv0->AddReply(528369, -1, 29741);
				return;
			}
			tv3 = true;
			if (f_63d_a0_b()) {
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

	void f_1eb_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_21c_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_470_a0_o());
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
			@RemoveActor(f_470_a0_o());
			@Hold();
		}
		f_287_a0_v();
	}

	void OnLoad(void)
	{
		f_296_a0_v();
	}

	void f_21c_a0_v(void)
	{
		if (!f_355_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_2cc_a0_v();
		}
	}

	bool f_22a_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_34c_a1_b(L0);
	}

	void f_239_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_23e_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_318_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_254_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_25d_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_25d_a0_v();
			if (f_355_a0_b() && f_23e_a0_b()) {
				if (f_22a_a0_b()) {
					f_3eb_a1_b(f_470_a0_o());
				}
			} else {
				f_239_a0_v();
				f_254_a0_v();
			}
		}
	}

	void f_287_a0_v(void)
	{
		f_313_a0_v();
		f_25d_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_296_a0_v(void)
	{
		@StopGroup0();
		f_25d_a0_v();
		f_43b_a1_v("Neutral");
		f_254_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_254_a0_v();
		} else {
			f_43b_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_313_a0_v();
			f_34c_a1_b(a0);
			enable OnUse;
			f_1eb_a1_v(a0);
			f_43b_a1_v("Neutral");
			f_25d_a0_v();
			f_254_a0_v();
		}
	}
}

void f_2cc_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_355_a0_b()) {
		return;
	}
	L0 = f_50a_a0_i();
	for (L1 = 0; L1 < 5 && f_355_a0_b(); L1++) {
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
			@PlayAnimation("all", f_503_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_311_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_311_a0_b(void)
{
	return true;
}

void f_313_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_318_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_320_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_32c_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_320_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_480_a3_f(L0 + a2, a3, a4));
	return true;
}

bool f_342_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_34c_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_342_a1_b(L0);
}

bool f_355_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_35a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_476_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_63d_a0_b()) {
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

void f_39f_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_63d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_3b1_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3eb_a1_b(a0)) {
			if (!f_410_a1_b(a0)) {
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
		if (!f_410_a1_b(a0)) {
			if (!f_3eb_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3eb_a1_b(object a0)
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
	return f_45a_a1_b(L4);
}

bool f_410_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_4fa_a0_i() + "m";
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
	return f_45a_a1_b(L4);
}

void f_43b_a1_v(string a0)
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

void f_44b_a2_v(string a0, bool a1)
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

bool f_45a_a1_b(string a0)
{
	if (f_63d_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_469_a0_v(void)
{
	if (f_63d_a0_b()) {
		@lshStopSpeech();
	}
}

object f_470_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_476_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_480_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_48b_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_490_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_49c_a3_v(object a0, object a1, int a2)
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
		f_490_a2_v(L0, a2);
	}
}

void f_4af_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_49c_a3_v(a0, L0, a2);
}

bool f_4bc_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_4df_a1_v(a1);
	f_32c_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_4df_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_4e9_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_4f5_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_4fa_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_503_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_50a_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_503_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_51b_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b6q02", 1);
	L0 = f_5f2_a0_o();
	L0->AddMark("b6q02KlaraGotoRat", "pt_map_theater", 0, 521207, f_4f5_a0_f());
	f_5a2_a0_v();
	f_5bc_a0_v();
	f_4e9_a2_b("quest_b6_02", "init_maze");
}

void f_53a_a2_v(object a0, object a1)
{
	f_5af_a0_v();
	f_4e9_a2_b("quest_b6_02", "completed");
}

void f_544_a2_v(object a0, object a1)
{
	@SetVariable("oob6Klara2_1", 1);
}

void f_54a_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_550_a2_v(object a0, object a1)
{
	@Trace("recipe7 is given");
	f_4af_a3_v(a0, "recipe7", 1);
}

void f_55b_a2_v(object a0, object a1)
{
	f_603_a3_v(f_5f2_a0_o(), "pt_map_theater", 2);
	a1->ShowMap(f_5f2_a0_o());
}

void f_56b_a2_v(object a0, object a1)
{
	f_4bc_a2_b(a0, -0.10000000149011612);
}

bool f_572_a1_b(object a0)
{
	if (f_48b_a1_i("b6q02") == 1000) {
		return true;
	}
	return false;
}

bool f_57e_a1_b(object a0)
{
	if (f_48b_a1_i("b6q02") == 2) {
		return true;
	}
	return false;
}

bool f_58a_a1_b(object a0)
{
	if (f_48b_a1_i("oob6Klara2_1") == 0) {
		return true;
	}
	return false;
}

bool f_596_a1_b(object a0)
{
	if (f_48b_a1_i("b6q02") == 0) {
		return true;
	}
	return false;
}

void f_5a2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 266, 2, 521193);
	f_5d6_a2_b(L0, -1);
}

void f_5af_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 269, 2, 521196);
	f_5d6_a2_b(L0, 266);
}

void f_5bc_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 267, 2, 521194);
	f_5d6_a2_b(L0, 266);
}

object f_5c9_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_5d6_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_5c9_a0_o();
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

object f_5f2_a0_o(void)
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

void f_603_a3_v(object a0, string a1, float a2)
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

int f_624_a0_i(void)
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

int f_635_a0_i(void)
{
	return 515540;
}

int f_637_a0_i(void)
{
	return 502865;
}

string f_639_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

string f_63b_a0_s(void)
{
	return "ui/NPC_Klara_b.png";
}

bool f_63d_a0_b(void)
{
	return true;
}

