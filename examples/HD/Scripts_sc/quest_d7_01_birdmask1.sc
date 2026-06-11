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
		if (!f_277_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3ca_a0_i());
		L0->SetNPCDescription(f_3c8_a0_i());
		L0->SetPhoto(f_3cc_a0_s());
		L0->SetPhoto2(f_3ce_a0_s());
		L0->SetPlayerName(f_3b7_a0_i());
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
		f_2bc_a1_v(a0);
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
			if (f_365_a1_b(tv1) && f_37b_a1_b(tv1)) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(512188);
				tv0->ClearReplies();
				tv0->AddReply(512189, 14396, 13344);
				break;
			}
			if (f_371_a1_b(tv1) && f_359_a1_b(tv1)) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(513197);
				tv0->ClearReplies();
				tv0->AddReply(513198, 14433, 14421);
				tv0->AddReply(513199, 14428, 14422);
				tv0->AddReply(513200, 14424, 14423);
				break;
			}
			if (f_359_a1_b(tv1)) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(513175);
				tv0->ClearReplies();
				tv0->AddReply(513177, 14398, 14397);
				tv0->AddReply(513195, 14411, 14417);
				tv0->AddReply(513193, -1, 14415);
				break;
			}
			return;
		}
		if (f_3d0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2ce_a1_v(tv2);
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

	void f_d2_a1_v(string a0)
	{
		if (!f_3d0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2de_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_2ed_a0_v();
			if (a1 == 14419) {
				f_341_a2_v(tv1, tv0);
				f_347_a2_v(tv1, tv0);
				f_33b_a2_v(tv1, tv0);
			}
			if (a1 == 14487) {
				f_352_a2_v(tv1, tv0);
			}
			if (a1 == 14432) {
				f_352_a2_v(tv1, tv0);
			}
			if (a1 == 14414) {
				f_352_a2_v(tv1, tv0);
			}
			if (a0 == 13343) {
				if (f_365_a1_b(tv1) && f_37b_a1_b(tv1)) {
					f_d2_a1_v("Neutral");
					tv0->SetMessage(512188);
					tv0->ClearReplies();
					tv0->AddReply(512189, 14396, 13344);
					return;
				}
				if (f_371_a1_b(tv1) && f_359_a1_b(tv1)) {
					f_d2_a1_v("Neutral");
					tv0->SetMessage(513197);
					tv0->ClearReplies();
					tv0->AddReply(513198, 14433, 14421);
					tv0->AddReply(513199, 14428, 14422);
					tv0->AddReply(513200, 14424, 14423);
					return;
				}
				if (f_359_a1_b(tv1)) {
					f_d2_a1_v("Neutral");
					tv0->SetMessage(513175);
					tv0->ClearReplies();
					tv0->AddReply(513177, 14398, 14397);
					tv0->AddReply(513195, 14411, 14417);
					tv0->AddReply(513193, -1, 14415);
					return;
				}
			}
			if (a0 == 14398) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(513178);
				tv0->ClearReplies();
				tv0->AddReply(513179, 14402, 14399);
				tv0->AddReply(513180, 14403, 14400);
				tv0->AddReply(513181, 14404, 14401);
				return;
			}
			if (a0 == 14404) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(513184);
				tv0->ClearReplies();
				tv0->AddReply(513189, -1, 14409);
				tv0->AddReply(513190, 14411, 14410);
				return;
			}
			if (a0 == 14403) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(513183);
				tv0->ClearReplies();
				tv0->AddReply(513187, -1, 14407);
				tv0->AddReply(513188, 14411, 14408);
				return;
			}
			if (a0 == 14402) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(513182);
				tv0->ClearReplies();
				tv0->AddReply(513185, 14411, 14405);
				tv0->AddReply(513186, -1, 14406);
				return;
			}
			if (a0 == 14411) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(513191);
				tv0->ClearReplies();
				tv0->AddReply(513192, -1, 14414);
				return;
			}
			if (a0 == 14424) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(513201);
				tv0->ClearReplies();
				tv0->AddReply(513202, 14429, 14425);
				tv0->AddReply(513203, 14433, 14426);
				tv0->AddReply(513204, 14428, 14427);
				return;
			}
			if (a0 == 14429) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(513206);
				tv0->ClearReplies();
				tv0->AddReply(513207, -1, 14430);
				return;
			}
			if (a0 == 14428) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(513205);
				tv0->ClearReplies();
				tv0->AddReply(513209, -1, 14432);
				tv0->AddReply(541590, -1, 43759);
				return;
			}
			if (a0 == 14433) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(513210);
				tv0->ClearReplies();
				tv0->AddReply(513211, -1, 14434);
				tv0->AddReply(513260, -1, 14487);
				return;
			}
			if (a0 == 14396) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(513176);
				tv0->ClearReplies();
				tv0->AddReply(513196, -1, 14419);
				return;
			}
			tv3 = true;
			if (f_3d0_a0_b()) {
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

bool f_277_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_2f4_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_3d0_a0_b()) {
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

void f_2bc_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_3d0_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2ce_a1_v(string a0)
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

void f_2de_a2_v(string a0, bool a1)
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

void f_2ed_a0_v(void)
{
	if (f_3d0_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_2f4_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2fe_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_303_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_30f_a3_v(object a0, object a1, int a2)
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
		f_303_a2_v(L0, a2);
	}
}

void f_322_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_30f_a3_v(a0, L0, a2);
}

bool f_32f_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_33b_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_341_a2_v(object a0, object a1)
{
	@SetVariable("ood7UBirdmask1", 1);
}

void f_347_a2_v(object a0, object a1)
{
	@Trace("ureport is given");
	f_322_a3_v(a0, "d7q01_ureport", 1);
}

void f_352_a2_v(object a0, object a1)
{
	f_32f_a2_b("quest_d7_01", "kill_player");
}

bool f_359_a1_b(object a0)
{
	if (f_2fe_a1_i("d7q01") == 2) {
		return true;
	}
	return false;
}

bool f_365_a1_b(object a0)
{
	if (f_2fe_a1_i("d7q01") == 1) {
		return true;
	}
	return false;
}

bool f_371_a1_b(object a0)
{
	if (f_387_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_37b_a1_b(object a0)
{
	if (f_2fe_a1_i("ood7UBirdmask1") == 0) {
		return true;
	}
	return false;
}

bool f_387_a1_b(object a0)
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

int f_3b7_a0_i(void)
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

int f_3c8_a0_i(void)
{
	return 515571;
}

int f_3ca_a0_i(void)
{
	return 504029;
}

string f_3cc_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_3ce_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_3d0_a0_b(void)
{
	return false;
}

