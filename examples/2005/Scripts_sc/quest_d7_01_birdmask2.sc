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
		if (!f_301_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_44d_a0_i());
		L0->SetNPCDescription(f_44b_a0_i());
		L0->SetPhoto(f_44f_a0_s());
		L0->SetPhoto2(f_451_a0_s());
		L0->SetPlayerName(f_43a_a0_i());
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
		f_345_a1_v(a0);
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
			if (f_3fb_a1_b(tv1) && f_3e5_a1_b(tv1)) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513261);
				tv0->ClearReplies();
				tv0->AddReply(513262, 14492, 14491);
				break;
			}
			if (f_3d9_a1_b(tv1) && f_3f1_a1_b(tv1)) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513279);
				tv0->ClearReplies();
				if (f_3cf_a1_b(tv1)) {
					tv0->AddReply(513280, 14511, 14510);
				}
				if (f_3cf_a1_b(tv1)) {
					tv0->AddReply(513284, 14515, 14514);
				}
				if (f_3cf_a1_b(tv1)) {
					tv0->AddReply(513288, 14511, 14518);
				}
				break;
			}
			if (f_3d9_a1_b(tv1)) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513289);
				tv0->ClearReplies();
				tv0->AddReply(513290, 14522, 14521);
				tv0->AddReply(513304, 14538, 14535);
				tv0->AddReply(513305, -1, 14536);
				break;
			}
			return;
		}
		if (f_453_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_356_a1_v(tv2);
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

	void f_e1_a1_v(string a0)
	{
		if (!f_453_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_35d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_363_a0_v();
			if (a1 == 14497) {
				f_3b7_a2_v(tv1, tv0);
				f_3c2_a2_v(tv1, tv0);
				f_3b1_a2_v(tv1, tv0);
			}
			if (a1 == 14502) {
				f_3b1_a2_v(tv1, tv0);
				f_3c2_a2_v(tv1, tv0);
				f_3b7_a2_v(tv1, tv0);
			}
			if (a1 == 14513) {
				f_3c8_a2_v(tv1, tv0);
			}
			if (a1 == 14517) {
				f_3c8_a2_v(tv1, tv0);
			}
			if (a1 == 14539) {
				f_3c8_a2_v(tv1, tv0);
			}
			if (a0 == 14490) {
				if (f_3fb_a1_b(tv1) && f_3e5_a1_b(tv1)) {
					f_e1_a1_v("Neutral");
					tv0->SetMessage(513261);
					tv0->ClearReplies();
					tv0->AddReply(513262, 14492, 14491);
					return;
				}
				if (f_3d9_a1_b(tv1) && f_3f1_a1_b(tv1)) {
					f_e1_a1_v("Neutral");
					tv0->SetMessage(513279);
					tv0->ClearReplies();
					if (f_3cf_a1_b(tv1)) {
						tv0->AddReply(513280, 14511, 14510);
					}
					if (f_3cf_a1_b(tv1)) {
						tv0->AddReply(513284, 14515, 14514);
					}
					if (f_3cf_a1_b(tv1)) {
						tv0->AddReply(513288, 14511, 14518);
					}
					return;
				}
				if (f_3d9_a1_b(tv1)) {
					f_e1_a1_v("Neutral");
					tv0->SetMessage(513289);
					tv0->ClearReplies();
					tv0->AddReply(513290, 14522, 14521);
					tv0->AddReply(513304, 14538, 14535);
					tv0->AddReply(513305, -1, 14536);
					return;
				}
			}
			if (a0 == 14522) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513291);
				tv0->ClearReplies();
				tv0->AddReply(513292, 14524, 14523);
				tv0->AddReply(513296, 14528, 14527);
				tv0->AddReply(513300, 14532, 14531);
				return;
			}
			if (a0 == 14532) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513301);
				tv0->ClearReplies();
				tv0->AddReply(513302, 14540, 14533);
				tv0->AddReply(513303, 14538, 14534);
				return;
			}
			if (a0 == 14540) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513309);
				tv0->ClearReplies();
				tv0->AddReply(513310, 14524, 14541);
				return;
			}
			if (a0 == 14528) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513297);
				tv0->ClearReplies();
				tv0->AddReply(513298, -1, 14529);
				tv0->AddReply(513299, 14538, 14530);
				return;
			}
			if (a0 == 14524) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513293);
				tv0->ClearReplies();
				tv0->AddReply(513295, -1, 14526);
				tv0->AddReply(513306, 14538, 14537);
				return;
			}
			if (a0 == 14538) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513307);
				tv0->ClearReplies();
				tv0->AddReply(513308, -1, 14539);
				return;
			}
			if (a0 == 14515) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513285);
				tv0->ClearReplies();
				tv0->AddReply(513286, -1, 14516);
				tv0->AddReply(513287, -1, 14517);
				return;
			}
			if (a0 == 14511) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513281);
				tv0->ClearReplies();
				tv0->AddReply(513282, -1, 14512);
				tv0->AddReply(513283, -1, 14513);
				return;
			}
			if (a0 == 14492) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513263);
				tv0->ClearReplies();
				tv0->AddReply(513264, 14494, 14493);
				tv0->AddReply(513269, 14506, 14498);
				tv0->AddReply(513274, 14504, 14503);
				return;
			}
			if (a0 == 14504) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513275);
				tv0->ClearReplies();
				tv0->AddReply(513276, 14499, 14505);
				return;
			}
			if (a0 == 14506) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513277);
				tv0->ClearReplies();
				tv0->AddReply(513278, 14499, 14507);
				return;
			}
			if (a0 == 14499) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513270);
				tv0->ClearReplies();
				tv0->AddReply(513271, 14501, 14500);
				return;
			}
			if (a0 == 14501) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513272);
				tv0->ClearReplies();
				tv0->AddReply(513273, -1, 14502);
				return;
			}
			if (a0 == 14494) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513265);
				tv0->ClearReplies();
				tv0->AddReply(513266, 14496, 14495);
				return;
			}
			if (a0 == 14496) {
				f_e1_a1_v("Neutral");
				tv0->SetMessage(513267);
				tv0->ClearReplies();
				tv0->AddReply(513268, -1, 14497);
				return;
			}
			tv3 = true;
			if (f_453_a0_b()) {
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

bool f_301_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_36a_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_453_a0_b()) {
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

void f_345_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_453_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_356_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_35d_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_363_a0_v(void)
{
	if (f_453_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_36a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_374_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_379_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_385_a3_v(object a0, object a1, int a2)
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
		f_379_a2_v(L0, a2);
	}
}

void f_398_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_385_a3_v(a0, L0, a2);
}

bool f_3a5_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_3b1_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_3b7_a2_v(object a0, object a1)
{
	@Trace("dreport is given");
	f_398_a3_v(a0, "d7q01_dreport", 1);
}

void f_3c2_a2_v(object a0, object a1)
{
	@SetVariable("ood7DBirdmask1", 1);
}

void f_3c8_a2_v(object a0, object a1)
{
	f_3a5_a2_b("quest_d7_01", "kill_player");
}

bool f_3cf_a1_b(object a0)
{
	if (f_407_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_3d9_a1_b(object a0)
{
	if (f_374_a1_i("d7q01") == 2) {
		return true;
	}
	return false;
}

bool f_3e5_a1_b(object a0)
{
	if (f_374_a1_i("d7q01") == 1) {
		return true;
	}
	return false;
}

bool f_3f1_a1_b(object a0)
{
	if (f_40a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_3fb_a1_b(object a0)
{
	if (f_374_a1_i("ood7DBirdmask1") == 0) {
		return true;
	}
	return false;
}

bool f_407_a1_b(object a0)
{
	return false;
}

bool f_40a_a1_b(object a0)
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
	for (L5 = 0; L5 < L0; L5 = L5 + 1) {
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

int f_43a_a0_i(void)
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

int f_44b_a0_i(void)
{
	return 515571;
}

int f_44d_a0_i(void)
{
	return 504029;
}

string f_44f_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_451_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_453_a0_b(void)
{
	return false;
}

