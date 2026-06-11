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
		if (!f_1f8_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_37f_a0_i());
		L0->SetPhoto(f_381_a0_s());
		L0->SetPlayerName(f_33e_a0_i());
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
		f_230_a1_v(a0);
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
			if (f_2cc_a1_b(tv1)) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(14142);
				tv0->ClearReplies();
				tv0->AddReply(14143, 15359, 15357);
				break;
			}
			f_c0_a1_v("Neutral");
			tv0->SetMessage(14147);
			tv0->ClearReplies();
			if (f_2d8_a1_b(tv1) && f_2fc_a1_b(tv1) || f_2f0_a1_b(tv1) && f_2fc_a1_b(tv1)) {
				tv0->AddReply(14149, 15364, 15363);
			}
			if (f_2e4_a1_b(tv1) && f_308_a1_b(tv1)) {
				tv0->AddReply(14152, 15367, 15366);
			}
			tv0->AddReply(14148, -1, 15362);
			break;
			return;
		}
		if (f_383_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_234_a1_v(tv2);
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

	void f_c0_a1_v(string a0)
	{
		if (!f_383_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_234_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_246_a0_v();
			if (a1 == 15360) {
				f_299_a2_v(tv1, tv0);
			}
			if (a1 == 15363) {
				f_2bb_a2_v(tv1, tv0);
			}
			if (a1 == 15365) {
				f_2aa_a2_v(tv1, tv0);
				f_28e_a2_v(tv1, tv0);
				f_288_a2_v(tv1, tv0);
				f_2c7_a2_v(tv1, tv0);
			}
			if (a1 == 15366) {
				f_2c1_a2_v(tv1, tv0);
			}
			if (a1 == 15368) {
				f_2c7_a2_v(tv1, tv0);
			}
			if (a0 == 15356) {
				if (f_2cc_a1_b(tv1)) {
					f_c0_a1_v("Neutral");
					tv0->SetMessage(14142);
					tv0->ClearReplies();
					tv0->AddReply(14143, 15359, 15357);
					return;
				}
				f_c0_a1_v("Neutral");
				tv0->SetMessage(14147);
				tv0->ClearReplies();
				if (f_2d8_a1_b(tv1) && f_2fc_a1_b(tv1) || f_2f0_a1_b(tv1) && f_2fc_a1_b(tv1)) {
					tv0->AddReply(14149, 15364, 15363);
				}
				if (f_2e4_a1_b(tv1) && f_308_a1_b(tv1)) {
					tv0->AddReply(14152, 15367, 15366);
				}
				tv0->AddReply(14148, -1, 15362);
				return;
			}
			if (a0 == 15367) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(14153);
				tv0->ClearReplies();
				tv0->AddReply(14154, -1, 15368);
				return;
			}
			if (a0 == 15364) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(14150);
				tv0->ClearReplies();
				tv0->AddReply(14151, -1, 15365);
				return;
			}
			if (a0 == 15359) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(14145);
				tv0->ClearReplies();
				tv0->AddReply(14146, -1, 15360);
				tv0->AddReply(14144, -1, 15358);
				return;
			}
			tv3 = true;
			if (f_383_a0_b()) {
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
	var bool tv1;

	void init(void)
	{
		tv1 = true;
		f_1c6_a0_v();
	}

	void OnUse(object a0)
	{
		if (tv1) {
			if (t0{a0} == 1000) {
				tv1 = false;
			}
		}
	}

	void f_1c6_a0_v(void)
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
			if (!L0 && f_1f6_a0_b()) {
				@RemoveActor(f_24d_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_1f6_a0_b()) {
			@RemoveActor(f_24d_a0_o());
		}
	}
}

bool f_1f6_a0_b(void)
{
	return true;
}

bool f_1f8_a1_b(object a0)
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
	L5 = L3 * 70 + f_253_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_230_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_234_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_246_a0_v(void)
{
	if (f_383_a0_b()) {
		@lshStopSpeech();
	}
}

object f_24d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_253_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_25d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_262_a3_v(object a0, object a1, int a2)
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

void f_26f_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_262_a3_v(a0, L0, a2);
}

bool f_27c_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_288_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_28e_a2_v(object a0, object a1)
{
	@Trace("revolver ammo6 is given");
	f_26f_a3_v(a0, "revolver_ammo", 6);
}

void f_299_a2_v(object a0, object a1)
{
	@SetVariable("d11q02", 1);
	f_34f_a0_v();
	f_36f_a0_v();
	f_27c_a2_b("quest_d11_02", "init_graveyard");
}

void f_2aa_a2_v(object a0, object a1)
{
	if (f_25d_a1_i("d11q02") != 1000) {
		f_35f_a0_v();
		f_27c_a2_b("quest_d11_02", "completed");
	}
}

void f_2bb_a2_v(object a0, object a1)
{
	@SetVariable("ood11ULittleBoy1", 1);
}

void f_2c1_a2_v(object a0, object a1)
{
	@SetVariable("ood11ULittleBoy2", 1);
}

void f_2c7_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_2cc_a1_b(object a0)
{
	if (f_25d_a1_i("d11q02") == 0) {
		return true;
	}
	return false;
}

bool f_2d8_a1_b(object a0)
{
	if (f_25d_a1_i("d11q02") == 2) {
		return true;
	}
	return false;
}

bool f_2e4_a1_b(object a0)
{
	if (f_25d_a1_i("d11q02") == -1) {
		return true;
	}
	return false;
}

bool f_2f0_a1_b(object a0)
{
	if (f_25d_a1_i("d11q02") == 1000) {
		return true;
	}
	return false;
}

bool f_2fc_a1_b(object a0)
{
	if (f_25d_a1_i("ood11ULittleBoy1") == 0) {
		return true;
	}
	return false;
}

bool f_308_a1_b(object a0)
{
	if (f_25d_a1_i("ood11ULittleBoy2") == 0) {
		return true;
	}
	return false;
}

object f_314_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_321_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_314_a0_o();
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

int f_33e_a0_i(void)
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

void f_34f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 197, 2, 15485);
	f_321_a2_b(L0, -1);
}

void f_35f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 198, 2, 15486);
	f_321_a2_b(L0, 197);
}

void f_36f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 199, 2, 15487);
	f_321_a2_b(L0, 197);
}

int f_37f_a0_i(void)
{
	return 3345;
}

string f_381_a0_s(void)
{
	return "ui/NPC_None.png";
}

bool f_383_a0_b(void)
{
	return false;
}

