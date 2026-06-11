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
		if (!f_2a6_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_402_a0_i());
		L0->SetPhoto(f_404_a0_s());
		L0->SetPlayerName(f_3c1_a0_i());
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
		f_2de_a1_v(a0);
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
			f_9b_a1_v("Neutral");
			tv0->SetMessage(13423);
			tv0->ClearReplies();
			if (f_367_a1_b(tv1)) {
				tv0->AddReply(13424, 14661, 14660);
			}
			if (f_373_a1_b(tv1) && f_37f_a1_b(tv1)) {
				tv0->AddReply(13447, 14684, 14683);
			}
			if (f_38b_a1_b(tv1)) {
				tv0->AddReply(13433, 14670, 14669);
			}
			tv0->AddReply(13460, -1, 14697);
			break;
			return;
		}
		if (f_406_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2e2_a1_v(tv2);
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

	void f_9b_a1_v(string a0)
	{
		if (!f_406_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2e2_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_2f4_a0_v();
			if (a1 == 14668) {
				f_330_a2_v(tv1, tv0);
				f_342_a2_v(tv1, tv0);
				f_32a_a2_v(tv1, tv0);
			}
			if (a1 == 14696) {
				f_356_a2_v(tv1, tv0);
				f_32a_a2_v(tv1, tv0);
				f_339_a2_v(tv1, tv0);
			}
			if (a1 == 14692) {
				f_34d_a2_v(tv1, tv0);
			}
			if (a1 == 14669) {
				f_361_a2_v(tv1, tv0);
			}
			if (a0 == 14659) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13423);
				tv0->ClearReplies();
				if (f_367_a1_b(tv1)) {
					tv0->AddReply(13424, 14661, 14660);
				}
				if (f_373_a1_b(tv1) && f_37f_a1_b(tv1)) {
					tv0->AddReply(13447, 14684, 14683);
				}
				if (f_38b_a1_b(tv1)) {
					tv0->AddReply(13433, 14670, 14669);
				}
				tv0->AddReply(13460, -1, 14697);
				return;
			}
			if (a0 == 14670) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13434);
				tv0->ClearReplies();
				tv0->AddReply(13435, 14672, 14671);
				return;
			}
			if (a0 == 14672) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13436);
				tv0->ClearReplies();
				tv0->AddReply(13437, 14674, 14673);
				return;
			}
			if (a0 == 14674) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13438);
				tv0->ClearReplies();
				tv0->AddReply(13494, 14736, 14735);
				tv0->AddReply(13491, 14732, 14731);
				return;
			}
			if (a0 == 14732) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13492);
				tv0->ClearReplies();
				tv0->AddReply(13493, 14678, 14733);
				return;
			}
			if (a0 == 14736) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13495);
				tv0->ClearReplies();
				tv0->AddReply(13439, 14676, 14675);
				return;
			}
			if (a0 == 14676) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13440);
				tv0->ClearReplies();
				tv0->AddReply(13441, 14678, 14677);
				return;
			}
			if (a0 == 14678) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13442);
				tv0->ClearReplies();
				tv0->AddReply(13444, 14681, 14680);
				return;
			}
			if (a0 == 14681) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13445);
				tv0->ClearReplies();
				tv0->AddReply(13446, -1, 14682);
				return;
			}
			if (a0 == 14684) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13448);
				tv0->ClearReplies();
				tv0->AddReply(13449, 14686, 14685);
				tv0->AddReply(13451, 14688, 14687);
				return;
			}
			if (a0 == 14688) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13452);
				tv0->ClearReplies();
				tv0->AddReply(13453, 14690, 14689);
				return;
			}
			if (a0 == 14690) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13454);
				tv0->ClearReplies();
				tv0->AddReply(13455, 14694, 14691);
				tv0->AddReply(13456, -1, 14692);
				return;
			}
			if (a0 == 14686) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13450);
				tv0->ClearReplies();
				tv0->AddReply(13457, 14694, 14693);
				return;
			}
			if (a0 == 14694) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13458);
				tv0->ClearReplies();
				tv0->AddReply(13459, -1, 14696);
				return;
			}
			if (a0 == 14661) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13425);
				tv0->ClearReplies();
				tv0->AddReply(13426, 14663, 14662);
				return;
			}
			if (a0 == 14663) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13427);
				tv0->ClearReplies();
				tv0->AddReply(13428, 14665, 14664);
				return;
			}
			if (a0 == 14665) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13429);
				tv0->ClearReplies();
				tv0->AddReply(13430, 14667, 14666);
				return;
			}
			if (a0 == 14667) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(13431);
				tv0->ClearReplies();
				tv0->AddReply(13432, -1, 14668);
				return;
			}
			tv3 = true;
			if (f_406_a0_b()) {
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
			if (!L0 && f_2a4_a0_b()) {
				@RemoveActor(f_2fb_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_2a4_a0_b()) {
			@RemoveActor(f_2fb_a0_o());
		}
	}
}

bool f_2a4_a0_b(void)
{
	return true;
}

bool f_2a6_a1_b(object a0)
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
	L5 = L3 * 70 + f_301_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_2de_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_2e2_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_2f4_a0_v(void)
{
	if (f_406_a0_b()) {
		@lshStopSpeech();
	}
}

object f_2fb_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_301_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_30b_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_310_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	}
}

void f_31d_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_310_a3_v(a0, L0, a2);
}

void f_32a_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_330_a2_v(object a0, object a1)
{
	@SetVariable("d8q03", 1);
	f_3d2_a0_v();
}

void f_339_a2_v(object a0, object a1)
{
	@SetVariable("d8q03", 1000);
	f_3e2_a0_v();
}

void f_342_a2_v(object a0, object a1)
{
	@Trace("burah gives blood");
	f_31d_a3_v(a0, "d8q03_blood", 1);
}

void f_34d_a2_v(object a0, object a1)
{
	@SetVariable("d8q03", -1);
	f_3f2_a0_v();
}

void f_356_a2_v(object a0, object a1)
{
	@Trace("burah gives serum");
	f_31d_a3_v(a0, "burah_serum", 1);
}

void f_361_a2_v(object a0, object a1)
{
	@SetVariable("ood8Burah1", 1);
}

bool f_367_a1_b(object a0)
{
	if (f_30b_a1_i("d8q03") == 0) {
		return true;
	}
	return false;
}

bool f_373_a1_b(object a0)
{
	if (f_30b_a1_i("microscope_d8q03_blood") == 1) {
		return true;
	}
	return false;
}

bool f_37f_a1_b(object a0)
{
	if (f_30b_a1_i("d8q03") == 1) {
		return true;
	}
	return false;
}

bool f_38b_a1_b(object a0)
{
	if (f_30b_a1_i("ood8Burah1") == 0) {
		return true;
	}
	return false;
}

object f_397_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_3a4_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_397_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SetVariable("player_diary", 1);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

int f_3c1_a0_i(void)
{
	int L0;
	@GetVariable("player", L0);
	if (L0 == 0) {
		return 200001;
	} else {
		if (L0 == 1) {
			return 200002;
		}
	}
	return 200003;
}

void f_3d2_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 124, 2, 13763);
	f_3a4_a2_b(L0, -1);
}

void f_3e2_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 125, 2, 13764);
	f_3a4_a2_b(L0, 124);
}

void f_3f2_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 126, 2, 13765);
	f_3a4_a2_b(L0, 124);
}

int f_402_a0_i(void)
{
	return 11961;
}

string f_404_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

bool f_406_a0_b(void)
{
	return true;
}

