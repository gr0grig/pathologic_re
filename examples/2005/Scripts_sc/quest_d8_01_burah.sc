event OnDialogReply 11;
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
		f_313_a1_b(f_3c0_a0_o());
		if (!f_2be_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4da_a0_i());
		L0->SetNPCDescription(f_4d8_a0_i());
		L0->SetPhoto(f_4dc_a0_s());
		L0->SetPhoto2(f_4de_a0_s());
		L0->SetPlayerName(f_4c7_a0_i());
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
		f_302_a1_v(a0);
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
			f_ad_a1_v("Neutral");
			tv0->SetMessage(513423);
			tv0->ClearReplies();
			if (f_447_a1_b(tv1)) {
				tv0->AddReply(513424, 14661, 14660);
			}
			if (f_453_a1_b(tv1) && f_45f_a1_b(tv1)) {
				tv0->AddReply(513447, 14684, 14683);
			}
			if (f_46b_a1_b(tv1)) {
				tv0->AddReply(513433, 14670, 14669);
			}
			tv0->AddReply(513460, -1, 14697);
			break;
			return;
		}
		if (f_4e0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_39d_a1_v(tv2);
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

	void f_ad_a1_v(string a0)
	{
		if (!f_4e0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3a4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3b9_a0_v();
			if (a1 == 14668) {
				f_410_a2_v(tv1, tv0);
				f_422_a2_v(tv1, tv0);
				f_40a_a2_v(tv1, tv0);
			}
			if (a1 == 14696) {
				f_436_a2_v(tv1, tv0);
				f_40a_a2_v(tv1, tv0);
				f_419_a2_v(tv1, tv0);
			}
			if (a1 == 14692) {
				f_42d_a2_v(tv1, tv0);
			}
			if (a1 == 14669) {
				f_441_a2_v(tv1, tv0);
			}
			if (a0 == 14659) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513423);
				tv0->ClearReplies();
				if (f_447_a1_b(tv1)) {
					tv0->AddReply(513424, 14661, 14660);
				}
				if (f_453_a1_b(tv1) && f_45f_a1_b(tv1)) {
					tv0->AddReply(513447, 14684, 14683);
				}
				if (f_46b_a1_b(tv1)) {
					tv0->AddReply(513433, 14670, 14669);
				}
				tv0->AddReply(513460, -1, 14697);
				return;
			}
			if (a0 == 14670) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513434);
				tv0->ClearReplies();
				tv0->AddReply(513435, 14672, 14671);
				return;
			}
			if (a0 == 14672) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513436);
				tv0->ClearReplies();
				tv0->AddReply(513437, 14674, 14673);
				return;
			}
			if (a0 == 14674) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513438);
				tv0->ClearReplies();
				tv0->AddReply(513494, 14736, 14735);
				tv0->AddReply(513491, 14732, 14731);
				return;
			}
			if (a0 == 14732) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513492);
				tv0->ClearReplies();
				tv0->AddReply(513493, 14678, 14733);
				return;
			}
			if (a0 == 14736) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513495);
				tv0->ClearReplies();
				tv0->AddReply(513439, 14676, 14675);
				return;
			}
			if (a0 == 14676) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513440);
				tv0->ClearReplies();
				tv0->AddReply(513441, 14678, 14677);
				return;
			}
			if (a0 == 14678) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513442);
				tv0->ClearReplies();
				tv0->AddReply(513444, 14681, 14680);
				return;
			}
			if (a0 == 14681) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513445);
				tv0->ClearReplies();
				tv0->AddReply(513446, -1, 14682);
				return;
			}
			if (a0 == 14684) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513448);
				tv0->ClearReplies();
				tv0->AddReply(513449, 14686, 14685);
				tv0->AddReply(513451, 14688, 14687);
				return;
			}
			if (a0 == 14688) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513452);
				tv0->ClearReplies();
				tv0->AddReply(513453, 14690, 14689);
				return;
			}
			if (a0 == 14690) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513454);
				tv0->ClearReplies();
				tv0->AddReply(513455, 14694, 14691);
				tv0->AddReply(513456, -1, 14692);
				return;
			}
			if (a0 == 14686) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513450);
				tv0->ClearReplies();
				tv0->AddReply(513457, 14694, 14693);
				return;
			}
			if (a0 == 14694) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513458);
				tv0->ClearReplies();
				tv0->AddReply(513459, -1, 14696);
				return;
			}
			if (a0 == 14661) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513425);
				tv0->ClearReplies();
				tv0->AddReply(513426, 14663, 14662);
				return;
			}
			if (a0 == 14663) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513427);
				tv0->ClearReplies();
				tv0->AddReply(513428, 14665, 14664);
				return;
			}
			if (a0 == 14665) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513429);
				tv0->ClearReplies();
				tv0->AddReply(513430, 14667, 14666);
				return;
			}
			if (a0 == 14667) {
				f_ad_a1_v("Neutral");
				tv0->SetMessage(513431);
				tv0->ClearReplies();
				tv0->AddReply(513432, -1, 14668);
				return;
			}
			tv3 = true;
			if (f_4e0_a0_b()) {
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

	void OnUse(object a0)
	{
		t0{a0};
	}

	void init(void)
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
			if (!L0 && f_2bc_a0_b()) {
				@RemoveActor(f_3c0_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_2bc_a0_b()) {
			@RemoveActor(f_3c0_a0_o());
		}
	}
}

bool f_2bc_a0_b(void)
{
	return true;
}

bool f_2be_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3c6_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_4e0_a0_b()) {
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

void f_302_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_4e0_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_313_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_34d_a1_b(a0)) {
			if (!f_372_a1_b(a0)) {
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
		if (!f_372_a1_b(a0)) {
			if (!f_34d_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_34d_a1_b(object a0)
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
	return f_3aa_a1_b(L4);
}

bool f_372_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_401_a0_i() + "m";
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
	return f_3aa_a1_b(L4);
}

void f_39d_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_3a4_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_3aa_a1_b(string a0)
{
	if (f_4e0_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_3b9_a0_v(void)
{
	if (f_4e0_a0_b()) {
		@lshStopSpeech();
	}
}

object f_3c0_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_3c6_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3d0_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_3d5_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_3e1_a3_v(object a0, object a1, int a2)
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
		f_3d5_a2_v(L0, a2);
	}
}

void f_3f4_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_3e1_a3_v(a0, L0, a2);
}

int f_401_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_40a_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_410_a2_v(object a0, object a1)
{
	@SetVariable("d8q03", 1);
	f_477_a0_v();
}

void f_419_a2_v(object a0, object a1)
{
	@SetVariable("d8q03", 1000);
	f_484_a0_v();
}

void f_422_a2_v(object a0, object a1)
{
	@Trace("burah gives blood");
	f_3f4_a3_v(a0, "d8q03_blood", 1);
}

void f_42d_a2_v(object a0, object a1)
{
	@SetVariable("d8q03", -1);
	f_491_a0_v();
}

void f_436_a2_v(object a0, object a1)
{
	@Trace("burah gives serum");
	f_3f4_a3_v(a0, "burah_serum", 1);
}

void f_441_a2_v(object a0, object a1)
{
	@SetVariable("ood8Burah1", 1);
}

bool f_447_a1_b(object a0)
{
	if (f_3d0_a1_i("d8q03") == 0) {
		return true;
	}
	return false;
}

bool f_453_a1_b(object a0)
{
	if (f_3d0_a1_i("microscope_d8q03_blood") == 1) {
		return true;
	}
	return false;
}

bool f_45f_a1_b(object a0)
{
	if (f_3d0_a1_i("d8q03") == 1) {
		return true;
	}
	return false;
}

bool f_46b_a1_b(object a0)
{
	if (f_3d0_a1_i("ood8Burah1") == 0) {
		return true;
	}
	return false;
}

void f_477_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 124, 2, 513763);
	f_4ab_a2_b(L0, -1);
}

void f_484_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 125, 2, 513764);
	f_4ab_a2_b(L0, 124);
}

void f_491_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 126, 2, 513765);
	f_4ab_a2_b(L0, 124);
}

object f_49e_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_4ab_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_49e_a0_o();
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

int f_4c7_a0_i(void)
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

int f_4d8_a0_i(void)
{
	return 515592;
}

int f_4da_a0_i(void)
{
	return 511961;
}

string f_4dc_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_4de_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_4e0_a0_b(void)
{
	return true;
}

