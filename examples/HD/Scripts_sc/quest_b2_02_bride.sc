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
		if (!f_2a8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_391_a0_i());
		L0->SetNPCDescription(f_38f_a0_i());
		L0->SetPhoto(f_393_a0_s());
		L0->SetPhoto2(f_395_a0_s());
		L0->SetPlayerName(f_452_a0_i());
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
		f_2ed_a1_v(a0);
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
			f_b0_a1_v("Neutral");
			tv0->SetMessage(518265);
			tv0->ClearReplies();
			if (f_403_a1_b(tv1) && !f_3eb_a1_b(tv1) && !f_3df_a1_b(tv1) && f_3f7_a1_b(tv1)) {
				tv0->AddReply(518266, 20687, 19375);
			}
			if (f_3d3_a1_b(tv1)) {
				tv0->AddReply(527751, 29118, 29108);
			}
			tv0->AddReply(518267, -1, 19376);
			break;
			return;
		}
		if (f_397_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2ff_a1_v(tv2);
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

	void f_b0_a1_v(string a0)
	{
		if (!f_397_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_30f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_329_a0_v();
			if (a1 == 19375) {
				f_399_a2_v(tv1, tv0);
			}
			if (a1 == 29121) {
				f_3c2_a2_v(tv1, tv0);
				f_3b7_a2_v(tv1, tv0);
				f_3cd_a2_v(tv1, tv0);
				f_39f_a2_v(tv1, tv0);
			}
			if (a1 == 29122) {
				f_3a9_a2_v(tv1, tv0);
			}
			if (a0 == 19374) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(518265);
				tv0->ClearReplies();
				if (f_403_a1_b(tv1) && !f_3eb_a1_b(tv1) && !f_3df_a1_b(tv1) && f_3f7_a1_b(tv1)) {
					tv0->AddReply(518266, 20687, 19375);
				}
				if (f_3d3_a1_b(tv1)) {
					tv0->AddReply(527751, 29118, 29108);
				}
				tv0->AddReply(518267, -1, 19376);
				return;
			}
			if (a0 == 29118) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(527761);
				tv0->ClearReplies();
				tv0->AddReply(527762, 29120, 29119);
				return;
			}
			if (a0 == 29120) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(527763);
				tv0->ClearReplies();
				tv0->AddReply(527764, -1, 29121);
				tv0->AddReply(527861, 29203, 29205);
				return;
			}
			if (a0 == 29203) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(527859);
				tv0->ClearReplies();
				tv0->AddReply(527765, -1, 29122);
				return;
			}
			if (a0 == 20687) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(519514);
				tv0->ClearReplies();
				tv0->AddReply(519515, 20689, 20688);
				return;
			}
			if (a0 == 20689) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(519516);
				tv0->ClearReplies();
				tv0->AddReply(519517, 20691, 20690);
				return;
			}
			if (a0 == 20691) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(519518);
				tv0->ClearReplies();
				tv0->AddReply(519519, 20693, 20692);
				tv0->AddReply(527857, 20693, 29200);
				return;
			}
			if (a0 == 20693) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(519520);
				tv0->ClearReplies();
				tv0->AddReply(519521, 20695, 20694);
				return;
			}
			if (a0 == 20695) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(519522);
				tv0->ClearReplies();
				tv0->AddReply(519523, -1, 20696);
				tv0->AddReply(527858, -1, 29202);
				return;
			}
			tv3 = true;
			if (f_397_a0_b()) {
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
		while (true) {
			f_1f6_a2_v(300, 100);
		}
	}

	void OnUse(object a0)
	{
		f_237_a0_v();
		t0{a0};
	}

	void f_1f6_a2_v(float a0, float a1)
	{
		if (!f_2a3_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_245_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_211_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_29b_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_211_a0_b()) {
				if (!tv2) {
					f_31e_a1_v(tv4);
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

	void f_237_a0_v(void)
	{
		f_296_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_245_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2a3_a0_b()) {
		return;
	}
	L0 = f_37e_a0_i();
	for (L1 = 0; L1 < 5 && f_2a3_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_377_a1_s(L3));
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
		if (!f_294_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_294_a0_b(void)
{
	return true;
}

void f_296_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_29b_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2a3_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2a8_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_330_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_397_a0_b()) {
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

void f_2ed_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_397_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2ff_a1_v(string a0)
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

void f_30f_a2_v(string a0, bool a1)
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

void f_31e_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_329_a0_v(void)
{
	if (f_397_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_330_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_33a_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_33f_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_34b_a3_v(object a0, object a1, int a2)
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
		f_33f_a2_v(L0, a2);
	}
}

void f_35e_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_34b_a3_v(a0, L0, a2);
}

bool f_36b_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_377_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_37e_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_377_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_38f_a0_i(void)
{
	return 515596;
}

int f_391_a0_i(void)
{
	return 514839;
}

string f_393_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_395_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_397_a0_b(void)
{
	return false;
}

void f_399_a2_v(object a0, object a1)
{
	@SetVariable("oob2TravnikWife1", 1);
}

void f_39f_a2_v(object a0, object a1)
{
	f_41c_a0_v();
	f_36b_a2_b("quest_b2_02", "fail");
}

void f_3a9_a2_v(object a0, object a1)
{
	@SetVariable("b2q02", 2);
	f_40f_a0_v();
	f_36b_a2_b("quest_b2_02", "move_bride");
}

void f_3b7_a2_v(object a0, object a1)
{
	@Trace("white plet 3 is given");
	f_35e_a3_v(a0, "grass_white_plet", 3);
}

void f_3c2_a2_v(object a0, object a1)
{
	@Trace("savyur 3 is given");
	f_35e_a3_v(a0, "grass_savyur", 3);
}

void f_3cd_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

bool f_3d3_a1_b(object a0)
{
	if (f_33a_a1_i("b2q02") == 1) {
		return true;
	}
	return false;
}

bool f_3df_a1_b(object a0)
{
	if (f_33a_a1_i("b2q02") == 2) {
		return true;
	}
	return false;
}

bool f_3eb_a1_b(object a0)
{
	if (f_33a_a1_i("b2q02") == -1) {
		return true;
	}
	return false;
}

bool f_3f7_a1_b(object a0)
{
	if (f_33a_a1_i("b2q02") == 1000) {
		return true;
	}
	return false;
}

bool f_403_a1_b(object a0)
{
	if (f_33a_a1_i("oob2TravnikWife1") == 0) {
		return true;
	}
	return false;
}

void f_40f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 458, 2, 527774);
	f_436_a2_b(L0, 456);
}

void f_41c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 460, 2, 527776);
	f_436_a2_b(L0, 456);
}

object f_429_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_436_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_429_a0_o();
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

int f_452_a0_i(void)
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

