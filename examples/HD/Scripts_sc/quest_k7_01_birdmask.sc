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
		if (!f_371_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_43d_a0_i());
		L0->SetNPCDescription(f_43b_a0_i());
		L0->SetPhoto(f_43f_a0_s());
		L0->SetPhoto2(f_441_a0_s());
		L0->SetPlayerName(f_566_a0_i());
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
		f_3b6_a1_v(a0);
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
			if (f_4a6_a1_b(tv1)) {
				f_45d_a2_v(tv1, tv0);
				f_f5_a1_v("Neutral");
				tv0->SetMessage(530193);
				tv0->ClearReplies();
				tv0->AddReply(526124, 27404, 27403);
				break;
			}
			if (f_4d4_a1_b(tv1) && f_4de_a1_b(tv1)) {
				f_f5_a1_v("Neutral");
				tv0->SetMessage(526123);
				tv0->ClearReplies();
				if (f_4ca_a1_b(tv1) && f_4b2_a1_b(tv1)) {
					tv0->AddReply(528266, 29631, 29630);
				}
				tv0->AddReply(528258, -1, 29621);
				tv0->AddReply(526135, -1, 27414);
				break;
			}
			if (f_4ca_a1_b(tv1)) {
				f_49f_a2_v(tv1, tv0);
				f_f5_a1_v("Neutral");
				tv0->SetMessage(526136);
				tv0->ClearReplies();
				if (f_4be_a1_b(tv1)) {
					tv0->AddReply(528269, 29634, 29633);
				}
				tv0->AddReply(526137, -1, 27416);
				tv0->AddReply(528259, -1, 29622);
				break;
			}
			f_f5_a1_v("Neutral");
			tv0->SetMessage(530191);
			tv0->ClearReplies();
			tv0->AddReply(530192, -1, 31581);
			break;
			return;
		}
		if (f_443_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3c8_a1_v(tv2);
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

	void f_f5_a1_v(string a0)
	{
		if (!f_443_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3d8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3f2_a0_v();
			if (a1 == 27413) {
				f_463_a2_v(tv1, tv0);
				f_483_a2_v(tv1, tv0);
			}
			if (a1 == 43962) {
				f_463_a2_v(tv1, tv0);
				f_483_a2_v(tv1, tv0);
			}
			if (a1 == 29630) {
				f_493_a2_v(tv1, tv0);
			}
			if (a1 == 29633) {
				f_499_a2_v(tv1, tv0);
			}
			if (a0 == 31582) {
				if (f_4a6_a1_b(tv1)) {
					f_45d_a2_v(tv1, tv0);
					f_f5_a1_v("Neutral");
					tv0->SetMessage(530193);
					tv0->ClearReplies();
					tv0->AddReply(526124, 27404, 27403);
					return;
				}
				if (f_4d4_a1_b(tv1) && f_4de_a1_b(tv1)) {
					f_f5_a1_v("Neutral");
					tv0->SetMessage(526123);
					tv0->ClearReplies();
					if (f_4ca_a1_b(tv1) && f_4b2_a1_b(tv1)) {
						tv0->AddReply(528266, 29631, 29630);
					}
					tv0->AddReply(528258, -1, 29621);
					tv0->AddReply(526135, -1, 27414);
					return;
				}
				if (f_4ca_a1_b(tv1)) {
					f_49f_a2_v(tv1, tv0);
					f_f5_a1_v("Neutral");
					tv0->SetMessage(526136);
					tv0->ClearReplies();
					if (f_4be_a1_b(tv1)) {
						tv0->AddReply(528269, 29634, 29633);
					}
					tv0->AddReply(526137, -1, 27416);
					tv0->AddReply(528259, -1, 29622);
					return;
				}
				f_f5_a1_v("Neutral");
				tv0->SetMessage(530191);
				tv0->ClearReplies();
				tv0->AddReply(530192, -1, 31581);
				return;
			}
			if (a0 == 29634) {
				f_f5_a1_v("Neutral");
				tv0->SetMessage(528270);
				tv0->ClearReplies();
				tv0->AddReply(528271, 29636, 29635);
				return;
			}
			if (a0 == 29636) {
				f_f5_a1_v("Neutral");
				tv0->SetMessage(528272);
				tv0->ClearReplies();
				tv0->AddReply(528273, -1, 29637);
				tv0->AddReply(528274, -1, 29638);
				return;
			}
			if (a0 == 29631) {
				f_f5_a1_v("Neutral");
				tv0->SetMessage(528267);
				tv0->ClearReplies();
				tv0->AddReply(526132, 27412, 27411);
				return;
			}
			if (a0 == 27412) {
				f_f5_a1_v("Neutral");
				tv0->SetMessage(526133);
				tv0->ClearReplies();
				tv0->AddReply(528268, -1, 29632);
				return;
			}
			if (a0 == 27404) {
				f_f5_a1_v("Neutral");
				tv0->SetMessage(526125);
				tv0->ClearReplies();
				tv0->AddReply(528260, 29624, 29623);
				return;
			}
			if (a0 == 29624) {
				f_f5_a1_v("Neutral");
				tv0->SetMessage(528261);
				tv0->ClearReplies();
				tv0->AddReply(526126, 27406, 27405);
				tv0->AddReply(528262, 29626, 29625);
				return;
			}
			if (a0 == 29626) {
				f_f5_a1_v("Neutral");
				tv0->SetMessage(528263);
				tv0->ClearReplies();
				tv0->AddReply(528264, 27408, 29627);
				return;
			}
			if (a0 == 27406) {
				f_f5_a1_v("Neutral");
				tv0->SetMessage(526127);
				tv0->ClearReplies();
				tv0->AddReply(526128, 27408, 27407);
				tv0->AddReply(528265, 27408, 29629);
				return;
			}
			if (a0 == 27408) {
				f_f5_a1_v("Neutral");
				tv0->SetMessage(526129);
				tv0->ClearReplies();
				tv0->AddReply(526130, 27410, 27409);
				tv0->AddReply(541756, 43961, 43960);
				return;
			}
			if (a0 == 43961) {
				f_f5_a1_v("Neutral");
				tv0->SetMessage(541757);
				tv0->ClearReplies();
				tv0->AddReply(541758, -1, 43962);
				return;
			}
			if (a0 == 27410) {
				f_f5_a1_v("Neutral");
				tv0->SetMessage(526131);
				tv0->ClearReplies();
				tv0->AddReply(526134, -1, 27413);
				return;
			}
			tv3 = true;
			if (f_443_a0_b()) {
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
			f_2bf_a2_v(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object a0)
	{
		f_300_a0_v();
		t0{a0};
	}

	void f_2bf_a2_v(float a0, float a1)
	{
		if (!f_36c_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_30e_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_2da_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_364_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_2da_a0_b()) {
				if (!tv2) {
					f_3e7_a1_v(tv4);
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

	void f_300_a0_v(void)
	{
		f_35f_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_30e_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_36c_a0_b()) {
		return;
	}
	L0 = f_44c_a0_i();
	for (L1 = 0; L1 < 5 && f_36c_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_445_a1_s(L3));
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
		if (!f_35d_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_35d_a0_b(void)
{
	return true;
}

void f_35f_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_364_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_36c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_371_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3f9_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_443_a0_b()) {
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

void f_3b6_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_443_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_3c8_a1_v(string a0)
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

void f_3d8_a2_v(string a0, bool a1)
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

void f_3e7_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_3f2_a0_v(void)
{
	if (f_443_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_3f9_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_403_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_408_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_419_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_425_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_42a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_433_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

int f_43b_a0_i(void)
{
	return 515571;
}

int f_43d_a0_i(void)
{
	return 504029;
}

string f_43f_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_441_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_443_a0_b(void)
{
	return false;
}

string f_445_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_44c_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_445_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_45d_a2_v(object a0, object a1)
{
	@SetVariable("ook7Birdmask1", 1);
}

void f_463_a2_v(object a0, object a1)
{
	if (f_403_a1_i("k7q01CorpseMark") == 0) {
		object L0;
		@SetVariable("k7q01CorpseMark", 1);
		L0 = f_534_a0_o();
		L0->AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", 3, 526214, f_425_a0_f());
		f_419_a2_b("quest_k7_01", "place_corpse");
	}
}

void f_483_a2_v(object a0, object a1)
{
	f_545_a3_v(f_534_a0_o(), "pt_d7q02_corpse", 2);
	a1->ShowMap(f_534_a0_o());
}

void f_493_a2_v(object a0, object a1)
{
	@SetVariable("ook7Birdmask2", 1);
}

void f_499_a2_v(object a0, object a1)
{
	@SetVariable("ook7Birdmask3", 1);
}

void f_49f_a2_v(object a0, object a1)
{
	f_408_a2_v("sobor@door1", false);
}

bool f_4a6_a1_b(object a0)
{
	if (f_403_a1_i("ook7Birdmask1") == 0) {
		return true;
	}
	return false;
}

bool f_4b2_a1_b(object a0)
{
	if (f_403_a1_i("ook7Birdmask2") == 0) {
		return true;
	}
	return false;
}

bool f_4be_a1_b(object a0)
{
	if (f_403_a1_i("ook7Birdmask3") == 0) {
		return true;
	}
	return false;
}

bool f_4ca_a1_b(object a0)
{
	if (f_4e8_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_4d4_a1_b(object a0)
{
	if (f_518_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_4de_a1_b(object a0)
{
	if (f_51f_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_4e8_a1_b(object a0)
{
	int L0;
	int L1;
	int L2;
	bool L3;
	bool L4;
	int L5;
	a0->GetItemCount(L0, 1);
	@GetInvItemByName(L1, "bird_mask");
	@GetInvItemByName(L2, "bird_balahon");
	L3 = false;
	L4 = false;
	for (L5 = 0; L5 < L0; L5++) {
		object L6;
		int L7;
		a0->GetItem(L6, L5, 1);
		L6->GetItemID(L7);
		if (L7 == L1) {
			bool L8;
			a0->IsItemSelected(L8, L5, 1);
			if (L8) {
				L3 = true;
			}
		} else {
			if (L7 == L2) {
				bool L9;
				a0->IsItemSelected(L9, L5, 1);
				if (L9) {
					L4 = true;
				}
			}
		}
	}
	return L3 && L4;
}

bool f_518_a1_b(object a0)
{
	return f_42a_a0_i() == 7;
}

bool f_51f_a1_b(object a0)
{
	if (f_433_a0_i() >= 0 && f_433_a0_i() < 12) {
		return true;
	}
	return false;
}

object f_534_a0_o(void)
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

void f_545_a3_v(object a0, string a1, float a2)
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

int f_566_a0_i(void)
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

