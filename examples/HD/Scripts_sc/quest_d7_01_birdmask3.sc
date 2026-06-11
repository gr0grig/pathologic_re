event OnDialogReply 11;
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
		if (!f_2ce_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_454_a0_i());
		L0->SetNPCDescription(f_452_a0_i());
		L0->SetPhoto(f_456_a0_s());
		L0->SetPhoto2(f_458_a0_s());
		L0->SetPlayerName(f_441_a0_i());
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
		f_313_a1_v(a0);
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
			if (f_3cf_a1_b(tv1)) {
				f_3ac_a2_v(tv1, tv0);
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513212);
				tv0->ClearReplies();
				tv0->AddReply(513213, 14437, 14436);
				break;
			}
			if (f_3b9_a1_b(tv1) && f_3c5_a1_b(tv1)) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513216);
				tv0->ClearReplies();
				tv0->AddReply(513217, 14441, 14440);
				tv0->AddReply(513220, 14444, 14443);
				tv0->AddReply(513224, 14441, 14447);
				break;
			}
			if (f_3b9_a1_b(tv1)) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513231);
				tv0->ClearReplies();
				tv0->AddReply(513232, 14456, 14455);
				tv0->AddReply(513248, 16562, 14473);
				tv0->AddReply(513249, -1, 14475);
				break;
			}
			return;
		}
		if (f_45a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_325_a1_v(tv2);
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

	void f_ce_a1_v(string a0)
	{
		if (!f_45a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_335_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_344_a0_v();
			if (a1 == 43785) {
				f_3a1_a2_v(tv1, tv0);
				f_392_a2_v(tv1, tv0);
			}
			if (a1 == 14438) {
				f_3a1_a2_v(tv1, tv0);
				f_392_a2_v(tv1, tv0);
			}
			if (a1 == 14485) {
				f_398_a2_v(tv1, tv0);
				f_3b2_a2_v(tv1, tv0);
			}
			if (a1 == 14446) {
				f_398_a2_v(tv1, tv0);
				f_3b2_a2_v(tv1, tv0);
			}
			if (a1 == 16565) {
				f_398_a2_v(tv1, tv0);
				f_3b2_a2_v(tv1, tv0);
			}
			if (a1 == 16566) {
				f_398_a2_v(tv1, tv0);
				f_3b2_a2_v(tv1, tv0);
			}
			if (a0 == 14435) {
				if (f_3cf_a1_b(tv1)) {
					f_3ac_a2_v(tv1, tv0);
					f_ce_a1_v("Neutral");
					tv0->SetMessage(513212);
					tv0->ClearReplies();
					tv0->AddReply(513213, 14437, 14436);
					return;
				}
				if (f_3b9_a1_b(tv1) && f_3c5_a1_b(tv1)) {
					f_ce_a1_v("Neutral");
					tv0->SetMessage(513216);
					tv0->ClearReplies();
					tv0->AddReply(513217, 14441, 14440);
					tv0->AddReply(513220, 14444, 14443);
					tv0->AddReply(513224, 14441, 14447);
					return;
				}
				if (f_3b9_a1_b(tv1)) {
					f_ce_a1_v("Neutral");
					tv0->SetMessage(513231);
					tv0->ClearReplies();
					tv0->AddReply(513232, 14456, 14455);
					tv0->AddReply(513248, 16562, 14473);
					tv0->AddReply(513249, -1, 14475);
					return;
				}
			}
			if (a0 == 14456) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513233);
				tv0->ClearReplies();
				tv0->AddReply(513234, 14458, 14457);
				tv0->AddReply(513240, 14469, 14463);
				tv0->AddReply(513244, 14464, 14468);
				return;
			}
			if (a0 == 14464) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513241);
				tv0->ClearReplies();
				tv0->AddReply(513242, -1, 14465);
				tv0->AddReply(513243, 16562, 14466);
				return;
			}
			if (a0 == 14469) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513245);
				tv0->ClearReplies();
				tv0->AddReply(513246, -1, 14470);
				tv0->AddReply(513247, 16562, 14471);
				return;
			}
			if (a0 == 14458) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513235);
				tv0->ClearReplies();
				tv0->AddReply(513236, 16562, 14459);
				tv0->AddReply(513239, -1, 14462);
				return;
			}
			if (a0 == 16562) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(515419);
				tv0->ClearReplies();
				tv0->AddReply(515420, -1, 16565);
				tv0->AddReply(515421, -1, 16566);
				return;
			}
			if (a0 == 14444) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513221);
				tv0->ClearReplies();
				tv0->AddReply(513222, -1, 14445);
				tv0->AddReply(513223, -1, 14446);
				return;
			}
			if (a0 == 14441) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513218);
				tv0->ClearReplies();
				tv0->AddReply(513219, -1, 14442);
				tv0->AddReply(513259, -1, 14485);
				return;
			}
			if (a0 == 14437) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513214);
				tv0->ClearReplies();
				tv0->AddReply(513250, 14478, 14476);
				tv0->AddReply(513251, 14482, 14477);
				return;
			}
			if (a0 == 14482) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513256);
				tv0->ClearReplies();
				tv0->AddReply(513257, 14484, 14483);
				return;
			}
			if (a0 == 14484) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513258);
				tv0->ClearReplies();
				tv0->AddReply(513215, -1, 14438);
				return;
			}
			if (a0 == 14478) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513252);
				tv0->ClearReplies();
				tv0->AddReply(513253, 14480, 14479);
				return;
			}
			if (a0 == 14480) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(513254);
				tv0->ClearReplies();
				tv0->AddReply(513255, 43784, 14481);
				tv0->AddReply(541612, 14482, 43783);
				return;
			}
			if (a0 == 43784) {
				f_ce_a1_v("Neutral");
				tv0->SetMessage(541613);
				tv0->ClearReplies();
				tv0->AddReply(541614, -1, 43785);
				return;
			}
			tv3 = true;
			if (f_45a_a0_b()) {
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

bool f_2ce_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_34b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_45a_a0_b()) {
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

void f_313_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_45a_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_325_a1_v(string a0)
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

void f_335_a2_v(string a0, bool a1)
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

void f_344_a0_v(void)
{
	if (f_45a_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_34b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_355_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_35a_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_366_a3_v(object a0, object a1, int a2)
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
		f_35a_a2_v(L0, a2);
	}
}

void f_379_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_366_a3_v(a0, L0, a2);
}

bool f_386_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_392_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_398_a2_v(object a0, object a1)
{
	@SetVariable("d7q01", 3);
	f_40b_a0_v();
}

void f_3a1_a2_v(object a0, object a1)
{
	@Trace("mreport is given");
	f_379_a3_v(a0, "d7q01_mreport", 1);
}

void f_3ac_a2_v(object a0, object a1)
{
	@SetVariable("ood7MBirdmask1", 1);
}

void f_3b2_a2_v(object a0, object a1)
{
	f_386_a2_b("quest_d7_01", "sobor_teleport");
}

bool f_3b9_a1_b(object a0)
{
	if (f_355_a1_i("d7q01") == 2) {
		return true;
	}
	return false;
}

bool f_3c5_a1_b(object a0)
{
	if (f_3db_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_3cf_a1_b(object a0)
{
	if (f_355_a1_i("ood7MBirdmask1") == 0) {
		return true;
	}
	return false;
}

bool f_3db_a1_b(object a0)
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

void f_40b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 169, 1, 515418);
	f_425_a2_b(L0, 165);
}

object f_418_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_425_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_418_a0_o();
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

int f_441_a0_i(void)
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

int f_452_a0_i(void)
{
	return 515571;
}

int f_454_a0_i(void)
{
	return 504029;
}

string f_456_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_458_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_45a_a0_b(void)
{
	return false;
}

