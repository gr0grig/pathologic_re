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
		if (!f_213_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3cc_a0_i());
		L0->SetNPCDescription(f_3ca_a0_i());
		L0->SetPhoto(f_3ce_a0_s());
		L0->SetPhoto2(f_3d0_a0_s());
		L0->SetPlayerName(f_3b9_a0_i());
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
		f_258_a1_v(a0);
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
			if (f_321_a1_b(tv1)) {
				f_d0_a1_v("Neutral");
				tv0->SetMessage(514142);
				tv0->ClearReplies();
				tv0->AddReply(514143, 41559, 15357);
				tv0->AddReply(539612, 41559, 41558);
				break;
			}
			f_d0_a1_v("Neutral");
			tv0->SetMessage(514147);
			tv0->ClearReplies();
			if (f_32d_a1_b(tv1) && f_351_a1_b(tv1) || f_345_a1_b(tv1) && f_351_a1_b(tv1)) {
				tv0->AddReply(514149, 15364, 15363);
			}
			if (f_339_a1_b(tv1) && f_35d_a1_b(tv1)) {
				tv0->AddReply(514152, 15367, 15366);
			}
			tv0->AddReply(514148, -1, 15362);
			break;
			return;
		}
		if (f_3d2_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_26a_a1_v(tv2);
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

	void f_d0_a1_v(string a0)
	{
		if (!f_3d2_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_27a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_289_a0_v();
			if (a1 == 15360) {
				f_2ee_a2_v(tv1, tv0);
			}
			if (a1 == 15363) {
				f_310_a2_v(tv1, tv0);
			}
			if (a1 == 15365) {
				f_2ff_a2_v(tv1, tv0);
				f_2e3_a2_v(tv1, tv0);
				f_2dd_a2_v(tv1, tv0);
				f_31c_a2_v(tv1, tv0);
			}
			if (a1 == 15366) {
				f_316_a2_v(tv1, tv0);
			}
			if (a1 == 15368) {
				f_31c_a2_v(tv1, tv0);
			}
			if (a0 == 15356) {
				if (f_321_a1_b(tv1)) {
					f_d0_a1_v("Neutral");
					tv0->SetMessage(514142);
					tv0->ClearReplies();
					tv0->AddReply(514143, 41559, 15357);
					tv0->AddReply(539612, 41559, 41558);
					return;
				}
				f_d0_a1_v("Neutral");
				tv0->SetMessage(514147);
				tv0->ClearReplies();
				if (f_32d_a1_b(tv1) && f_351_a1_b(tv1) || f_345_a1_b(tv1) && f_351_a1_b(tv1)) {
					tv0->AddReply(514149, 15364, 15363);
				}
				if (f_339_a1_b(tv1) && f_35d_a1_b(tv1)) {
					tv0->AddReply(514152, 15367, 15366);
				}
				tv0->AddReply(514148, -1, 15362);
				return;
			}
			if (a0 == 15367) {
				f_d0_a1_v("Neutral");
				tv0->SetMessage(514153);
				tv0->ClearReplies();
				tv0->AddReply(514154, -1, 15368);
				return;
			}
			if (a0 == 15364) {
				f_d0_a1_v("Neutral");
				tv0->SetMessage(514150);
				tv0->ClearReplies();
				tv0->AddReply(514151, -1, 15365);
				return;
			}
			if (a0 == 41559) {
				f_d0_a1_v("Neutral");
				tv0->SetMessage(539613);
				tv0->ClearReplies();
				tv0->AddReply(514146, -1, 15360);
				tv0->AddReply(514144, -1, 15358);
				return;
			}
			tv3 = true;
			if (f_3d2_a0_b()) {
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
		f_1e1_a0_v();
	}

	void OnUse(object a0)
	{
		if (tv1) {
			if (t0{a0} == 1000) {
				tv1 = false;
			}
		}
	}

	void f_1e1_a0_v(void)
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
			if (!L0 && f_211_a0_b()) {
				@RemoveActor(f_290_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_211_a0_b()) {
			@RemoveActor(f_290_a0_o());
		}
	}
}

bool f_211_a0_b(void)
{
	return true;
}

bool f_213_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_296_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_3d2_a0_b()) {
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

void f_258_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_3d2_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_26a_a1_v(string a0)
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

void f_27a_a2_v(string a0, bool a1)
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

void f_289_a0_v(void)
{
	if (f_3d2_a0_b()) {
		@lshStopSpeech();
	}
}

object f_290_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_296_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2a0_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_2a5_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_2b1_a3_v(object a0, object a1, int a2)
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
		f_2a5_a2_v(L0, a2);
	}
}

void f_2c4_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_2b1_a3_v(a0, L0, a2);
}

bool f_2d1_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_2dd_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_2e3_a2_v(object a0, object a1)
{
	@Trace("revolver ammo6 is given");
	f_2c4_a3_v(a0, "revolver_ammo", 6);
}

void f_2ee_a2_v(object a0, object a1)
{
	@SetVariable("d11q02", 1);
	f_369_a0_v();
	f_383_a0_v();
	f_2d1_a2_b("quest_d11_02", "init_graveyard");
}

void f_2ff_a2_v(object a0, object a1)
{
	if (f_2a0_a1_i("d11q02") != 1000) {
		f_376_a0_v();
		f_2d1_a2_b("quest_d11_02", "completed");
	}
}

void f_310_a2_v(object a0, object a1)
{
	@SetVariable("ood11ULittleBoy1", 1);
}

void f_316_a2_v(object a0, object a1)
{
	@SetVariable("ood11ULittleBoy2", 1);
}

void f_31c_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_321_a1_b(object a0)
{
	if (f_2a0_a1_i("d11q02") == 0) {
		return true;
	}
	return false;
}

bool f_32d_a1_b(object a0)
{
	if (f_2a0_a1_i("d11q02") == 2) {
		return true;
	}
	return false;
}

bool f_339_a1_b(object a0)
{
	if (f_2a0_a1_i("d11q02") == -1) {
		return true;
	}
	return false;
}

bool f_345_a1_b(object a0)
{
	if (f_2a0_a1_i("d11q02") == 1000) {
		return true;
	}
	return false;
}

bool f_351_a1_b(object a0)
{
	if (f_2a0_a1_i("ood11ULittleBoy1") == 0) {
		return true;
	}
	return false;
}

bool f_35d_a1_b(object a0)
{
	if (f_2a0_a1_i("ood11ULittleBoy2") == 0) {
		return true;
	}
	return false;
}

void f_369_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 197, 2, 515485);
	f_39d_a2_b(L0, -1);
}

void f_376_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 198, 2, 515486);
	f_39d_a2_b(L0, 197);
}

void f_383_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 199, 2, 515487);
	f_39d_a2_b(L0, 197);
}

object f_390_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_39d_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_390_a0_o();
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

int f_3b9_a0_i(void)
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

int f_3ca_a0_i(void)
{
	return 515560;
}

int f_3cc_a0_i(void)
{
	return 503345;
}

string f_3ce_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_3d0_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_3d2_a0_b(void)
{
	return false;
}

