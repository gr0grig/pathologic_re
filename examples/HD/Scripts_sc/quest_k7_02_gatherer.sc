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
		if (!f_1f1_a2_b(a0, 110.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2bd_a0_i());
		L0->SetNPCDescription(f_2bb_a0_i());
		L0->SetPhoto(f_2bf_a0_s());
		L0->SetPhoto2(f_2c1_a0_s());
		L0->SetPlayerName(f_34a_a0_i());
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
		f_236_a1_v(a0);
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
			f_97_a1_v("Neutral");
			tv0->SetMessage(526360);
			tv0->ClearReplies();
			if (f_2fd_a1_b(tv1) && f_309_a1_b(tv1)) {
				tv0->AddReply(526361, 30084, 27646);
			}
			tv0->AddReply(526364, -1, 27649);
			tv0->AddReply(528671, -1, 30083);
			break;
			return;
		}
		if (f_2c3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_248_a1_v(tv2);
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

	void f_97_a1_v(string a0)
	{
		if (!f_2c3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_258_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_272_a0_v();
			if (a1 == 27648) {
				f_2dd_a2_v(tv1, tv0);
				f_2e6_a2_v(tv1, tv0);
				f_2f1_a2_v(tv1, tv0);
				f_2f7_a2_v(tv1, tv0);
			}
			if (a0 == 27645) {
				f_97_a1_v("Neutral");
				tv0->SetMessage(526360);
				tv0->ClearReplies();
				if (f_2fd_a1_b(tv1) && f_309_a1_b(tv1)) {
					tv0->AddReply(526361, 30084, 27646);
				}
				tv0->AddReply(526364, -1, 27649);
				tv0->AddReply(528671, -1, 30083);
				return;
			}
			if (a0 == 30084) {
				f_97_a1_v("Neutral");
				tv0->SetMessage(528672);
				tv0->ClearReplies();
				tv0->AddReply(528673, 27647, 30085);
				tv0->AddReply(528674, 27647, 30086);
				return;
			}
			if (a0 == 27647) {
				f_97_a1_v("Neutral");
				tv0->SetMessage(526362);
				tv0->ClearReplies();
				tv0->AddReply(526363, -1, 27648);
				return;
			}
			tv3 = true;
			if (f_2c3_a0_b()) {
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
			f_13f_a2_v(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object a0)
	{
		f_180_a0_v();
		t0{a0};
	}

	void f_13f_a2_v(float a0, float a1)
	{
		if (!f_1ec_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_18e_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_15a_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_1e4_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_15a_a0_b()) {
				if (!tv2) {
					f_267_a1_v(tv4);
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

	void f_180_a0_v(void)
	{
		f_1df_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_18e_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1ec_a0_b()) {
		return;
	}
	L0 = f_2cc_a0_i();
	for (L1 = 0; L1 < 5 && f_1ec_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_2c5_a1_s(L3));
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
		if (!f_1dd_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1dd_a0_b(void)
{
	return true;
}

void f_1df_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1e4_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1ec_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1f1_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_279_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_2c3_a0_b()) {
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

void f_236_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_2c3_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_248_a1_v(string a0)
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

void f_258_a2_v(string a0, bool a1)
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

void f_267_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_272_a0_v(void)
{
	if (f_2c3_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_279_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_283_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_288_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_294_a3_v(object a0, object a1, int a2)
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
		f_288_a2_v(L0, a2);
	}
}

void f_2a7_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_294_a3_v(a0, L0, a2);
}

bool f_2b4_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

int f_2bb_a0_i(void)
{
	return 521048;
}

int f_2bd_a0_i(void)
{
	return 521047;
}

string f_2bf_a0_s(void)
{
	return "ui/NPC_Morlok.png";
}

string f_2c1_a0_s(void)
{
	return "ui/NPC_Morlok_b.png";
}

bool f_2c3_a0_b(void)
{
	return false;
}

string f_2c5_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_2cc_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_2c5_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_2dd_a2_v(object a0, object a1)
{
	@SetVariable("k7q02", 2);
	f_314_a0_v();
}

void f_2e6_a2_v(object a0, object a1)
{
	@Trace("white plet 10 is given");
	f_2a7_a3_v(a0, "grass_white_plet", 10);
}

void f_2f1_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_2f7_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "Samopal", 1);
}

bool f_2fd_a1_b(object a0)
{
	if (f_283_a1_i("k7q02") == 1) {
		return true;
	}
	return false;
}

bool f_309_a1_b(object a0)
{
	if (f_2b4_a2_b(a0, "Samopal")) {
		return true;
	}
	return false;
}

void f_314_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 432, 2, 526370);
	f_32e_a2_b(L0, 430);
}

object f_321_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_32e_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_321_a0_o();
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

int f_34a_a0_i(void)
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

