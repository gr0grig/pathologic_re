event evt_11 11;
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
		if (!f_294_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3e2_a0_i());
		L0->SetPhoto(f_3e4_a0_s());
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
		f_2cc_a1_v(a0);
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
			if (f_35b_a1_b(tv1)) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13212);
				tv0->ClearReplies();
				tv0->AddReply(13213, 14437, 14436);
				break;
			}
			if (f_345_a1_b(tv1) && f_351_a1_b(tv1)) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13216);
				tv0->ClearReplies();
				tv0->AddReply(13217, 14441, 14440);
				tv0->AddReply(13220, 14444, 14443);
				tv0->AddReply(13224, 14441, 14447);
				break;
			}
			if (f_345_a1_b(tv1)) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13231);
				tv0->ClearReplies();
				tv0->AddReply(13232, 14456, 14455);
				tv0->AddReply(13248, 16562, 14473);
				tv0->AddReply(13249, -1, 14475);
				break;
			}
			return;
		}
		if (f_3e6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2d0_a1_v(tv2);
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

	void f_be_a1_v(string a0)
	{
		if (!f_3e6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2d0_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_2e2_a0_v();
			if (a1 == 14438) {
				f_338_a2_v(tv1, tv0);
				f_32d_a2_v(tv1, tv0);
				f_31e_a2_v(tv1, tv0);
			}
			if (a1 == 14485) {
				f_324_a2_v(tv1, tv0);
				f_33e_a2_v(tv1, tv0);
			}
			if (a1 == 14446) {
				f_324_a2_v(tv1, tv0);
				f_33e_a2_v(tv1, tv0);
			}
			if (a1 == 16565) {
				f_324_a2_v(tv1, tv0);
				f_33e_a2_v(tv1, tv0);
			}
			if (a1 == 16566) {
				f_324_a2_v(tv1, tv0);
				f_33e_a2_v(tv1, tv0);
			}
			if (a0 == 14435) {
				if (f_35b_a1_b(tv1)) {
					f_be_a1_v("Neutral");
					tv0->SetMessage(13212);
					tv0->ClearReplies();
					tv0->AddReply(13213, 14437, 14436);
					return;
				}
				if (f_345_a1_b(tv1) && f_351_a1_b(tv1)) {
					f_be_a1_v("Neutral");
					tv0->SetMessage(13216);
					tv0->ClearReplies();
					tv0->AddReply(13217, 14441, 14440);
					tv0->AddReply(13220, 14444, 14443);
					tv0->AddReply(13224, 14441, 14447);
					return;
				}
				if (f_345_a1_b(tv1)) {
					f_be_a1_v("Neutral");
					tv0->SetMessage(13231);
					tv0->ClearReplies();
					tv0->AddReply(13232, 14456, 14455);
					tv0->AddReply(13248, 16562, 14473);
					tv0->AddReply(13249, -1, 14475);
					return;
				}
			}
			if (a0 == 14456) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13233);
				tv0->ClearReplies();
				tv0->AddReply(13234, 14458, 14457);
				tv0->AddReply(13240, 14469, 14463);
				tv0->AddReply(13244, 14464, 14468);
				return;
			}
			if (a0 == 14464) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13241);
				tv0->ClearReplies();
				tv0->AddReply(13242, -1, 14465);
				tv0->AddReply(13243, 16562, 14466);
				return;
			}
			if (a0 == 14469) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13245);
				tv0->ClearReplies();
				tv0->AddReply(13246, -1, 14470);
				tv0->AddReply(13247, 16562, 14471);
				return;
			}
			if (a0 == 14458) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13235);
				tv0->ClearReplies();
				tv0->AddReply(13236, 16562, 14459);
				tv0->AddReply(13239, -1, 14462);
				return;
			}
			if (a0 == 16562) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(15419);
				tv0->ClearReplies();
				tv0->AddReply(15420, -1, 16565);
				tv0->AddReply(15421, -1, 16566);
				return;
			}
			if (a0 == 14444) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13221);
				tv0->ClearReplies();
				tv0->AddReply(13222, -1, 14445);
				tv0->AddReply(13223, -1, 14446);
				return;
			}
			if (a0 == 14441) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13218);
				tv0->ClearReplies();
				tv0->AddReply(13219, -1, 14442);
				tv0->AddReply(13259, -1, 14485);
				return;
			}
			if (a0 == 14437) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13214);
				tv0->ClearReplies();
				tv0->AddReply(13250, 14478, 14476);
				tv0->AddReply(13251, 14482, 14477);
				return;
			}
			if (a0 == 14482) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13256);
				tv0->ClearReplies();
				tv0->AddReply(13257, 14484, 14483);
				return;
			}
			if (a0 == 14484) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13258);
				tv0->ClearReplies();
				tv0->AddReply(13215, -1, 14438);
				return;
			}
			if (a0 == 14478) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13252);
				tv0->ClearReplies();
				tv0->AddReply(13253, 14480, 14479);
				return;
			}
			if (a0 == 14480) {
				f_be_a1_v("Neutral");
				tv0->SetMessage(13254);
				tv0->ClearReplies();
				tv0->AddReply(13255, -1, 14481);
				return;
			}
			tv3 = true;
			if (f_3e6_a0_b()) {
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
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		t0{a0};
	}
}

bool f_294_a1_b(object a0)
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
	L5 = L3 * 70 + f_2e9_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_2cc_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_2d0_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_2e2_a0_v(void)
{
	if (f_3e6_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_2e9_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2f3_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_2f8_a3_v(object a0, object a1, int a2)
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

void f_305_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_2f8_a3_v(a0, L0, a2);
}

bool f_312_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_31e_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_324_a2_v(object a0, object a1)
{
	@SetVariable("d7q01", 3);
	f_3d2_a0_v();
}

void f_32d_a2_v(object a0, object a1)
{
	@Trace("mreport is given");
	f_305_a3_v(a0, "d7q01_mreport", 1);
}

void f_338_a2_v(object a0, object a1)
{
	@SetVariable("ood7MBirdmask1", 1);
}

void f_33e_a2_v(object a0, object a1)
{
	f_312_a2_b("quest_d7_01", "sobor_teleport");
}

bool f_345_a1_b(object a0)
{
	if (f_2f3_a1_i("d7q01") == 2) {
		return true;
	}
	return false;
}

bool f_351_a1_b(object a0)
{
	if (f_367_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_35b_a1_b(object a0)
{
	if (f_2f3_a1_i("ood7MBirdmask1") == 0) {
		return true;
	}
	return false;
}

bool f_367_a1_b(object a0)
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
	@CreateDiaryEntry(L0, 169, 1, 15418);
	f_3a4_a2_b(L0, 165);
}

int f_3e2_a0_i(void)
{
	return 4029;
}

string f_3e4_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_3e6_a0_b(void)
{
	return false;
}

