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
		if (!f_253_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_40c_a0_i());
		L0->SetNPCDescription(f_40a_a0_i());
		L0->SetPhoto(f_40e_a0_s());
		L0->SetPhoto2(f_410_a0_s());
		L0->SetPlayerName(f_3f9_a0_i());
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
		f_298_a1_v(a0);
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
			if (f_36d_a1_b(tv1)) {
				f_d0_a1_v("Neutral");
				tv0->SetMessage(514156);
				tv0->ClearReplies();
				tv0->AddReply(514169, 15384, 15383);
				tv0->AddReply(539603, 15384, 41547);
				break;
			}
			f_d0_a1_v("Neutral");
			tv0->SetMessage(514161);
			tv0->ClearReplies();
			if (f_379_a1_b(tv1) && f_391_a1_b(tv1) || f_39d_a1_b(tv1) && f_391_a1_b(tv1)) {
				tv0->AddReply(514162, 15377, 15376);
			}
			if (f_385_a1_b(tv1) && f_361_a1_b(tv1)) {
				tv0->AddReply(514165, 15380, 15379);
			}
			tv0->AddReply(514168, -1, 15382);
			break;
			return;
		}
		if (f_412_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2aa_a1_v(tv2);
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
		if (!f_412_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2ba_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_2c9_a0_v();
			if (a1 == 15373) {
				f_334_a2_v(tv1, tv0);
			}
			if (a1 == 15376) {
				f_356_a2_v(tv1, tv0);
			}
			if (a1 == 15378) {
				f_345_a2_v(tv1, tv0);
				f_323_a2_v(tv1, tv0);
				f_31d_a2_v(tv1, tv0);
				f_35c_a2_v(tv1, tv0);
			}
			if (a1 == 41554) {
				f_345_a2_v(tv1, tv0);
				f_35c_a2_v(tv1, tv0);
			}
			if (a1 == 15379) {
				f_32e_a2_v(tv1, tv0);
			}
			if (a1 == 15381) {
				f_35c_a2_v(tv1, tv0);
			}
			if (a0 == 15370) {
				if (f_36d_a1_b(tv1)) {
					f_d0_a1_v("Neutral");
					tv0->SetMessage(514156);
					tv0->ClearReplies();
					tv0->AddReply(514169, 15384, 15383);
					tv0->AddReply(539603, 15384, 41547);
					return;
				}
				f_d0_a1_v("Neutral");
				tv0->SetMessage(514161);
				tv0->ClearReplies();
				if (f_379_a1_b(tv1) && f_391_a1_b(tv1) || f_39d_a1_b(tv1) && f_391_a1_b(tv1)) {
					tv0->AddReply(514162, 15377, 15376);
				}
				if (f_385_a1_b(tv1) && f_361_a1_b(tv1)) {
					tv0->AddReply(514165, 15380, 15379);
				}
				tv0->AddReply(514168, -1, 15382);
				return;
			}
			if (a0 == 15380) {
				f_d0_a1_v("Neutral");
				tv0->SetMessage(514166);
				tv0->ClearReplies();
				tv0->AddReply(514167, -1, 15381);
				return;
			}
			if (a0 == 15377) {
				f_d0_a1_v("Neutral");
				tv0->SetMessage(514163);
				tv0->ClearReplies();
				tv0->AddReply(514164, -1, 15378);
				tv0->AddReply(539608, -1, 41554);
				return;
			}
			if (a0 == 15384) {
				f_d0_a1_v("Neutral");
				tv0->SetMessage(514170);
				tv0->ClearReplies();
				tv0->AddReply(514157, 15372, 15371);
				tv0->AddReply(539604, 41550, 41549);
				return;
			}
			if (a0 == 41550) {
				f_d0_a1_v("Neutral");
				tv0->SetMessage(539605);
				tv0->ClearReplies();
				tv0->AddReply(539606, 15372, 41551);
				tv0->AddReply(539609, -1, 41555);
				return;
			}
			if (a0 == 15372) {
				f_d0_a1_v("Neutral");
				tv0->SetMessage(514158);
				tv0->ClearReplies();
				tv0->AddReply(514159, -1, 15373);
				tv0->AddReply(514160, -1, 15374);
				return;
			}
			tv3 = true;
			if (f_412_a0_b()) {
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
		f_221_a0_v();
	}

	void OnUse(object a0)
	{
		if (tv1) {
			if (t0{a0} == 1000) {
				tv1 = false;
			}
		}
	}

	void f_221_a0_v(void)
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
			if (!L0 && f_251_a0_b()) {
				@RemoveActor(f_2d0_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_251_a0_b()) {
			@RemoveActor(f_2d0_a0_o());
		}
	}
}

bool f_251_a0_b(void)
{
	return true;
}

bool f_253_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_2d6_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_412_a0_b()) {
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

void f_298_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_412_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2aa_a1_v(string a0)
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

void f_2ba_a2_v(string a0, bool a1)
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

void f_2c9_a0_v(void)
{
	if (f_412_a0_b()) {
		@lshStopSpeech();
	}
}

object f_2d0_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_2d6_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2e0_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_2e5_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_2f1_a3_v(object a0, object a1, int a2)
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
		f_2e5_a2_v(L0, a2);
	}
}

void f_304_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_2f1_a3_v(a0, L0, a2);
}

bool f_311_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_31d_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_323_a2_v(object a0, object a1)
{
	@Trace("powder is given");
	f_304_a3_v(a0, "powder", 1);
}

void f_32e_a2_v(object a0, object a1)
{
	@SetVariable("ood11ULittleGirl1", 1);
}

void f_334_a2_v(object a0, object a1)
{
	@SetVariable("d11q02", 1);
	f_3a9_a0_v();
	f_3c3_a0_v();
	f_311_a2_b("quest_d11_02", "init_graveyard");
}

void f_345_a2_v(object a0, object a1)
{
	if (f_2e0_a1_i("d11q02") != 1000) {
		f_3b6_a0_v();
		f_311_a2_b("quest_d11_02", "completed");
	}
}

void f_356_a2_v(object a0, object a1)
{
	@SetVariable("ood11ULittleGirl2", 1);
}

void f_35c_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_361_a1_b(object a0)
{
	if (f_2e0_a1_i("ood11ULittleGirl1") == 0) {
		return true;
	}
	return false;
}

bool f_36d_a1_b(object a0)
{
	if (f_2e0_a1_i("d11q02") == 0) {
		return true;
	}
	return false;
}

bool f_379_a1_b(object a0)
{
	if (f_2e0_a1_i("d11q02") == 2) {
		return true;
	}
	return false;
}

bool f_385_a1_b(object a0)
{
	if (f_2e0_a1_i("d11q02") == -1) {
		return true;
	}
	return false;
}

bool f_391_a1_b(object a0)
{
	if (f_2e0_a1_i("ood11ULittleGirl2") == 0) {
		return true;
	}
	return false;
}

bool f_39d_a1_b(object a0)
{
	if (f_2e0_a1_i("d11q02") == 1000) {
		return true;
	}
	return false;
}

void f_3a9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 197, 2, 515485);
	f_3dd_a2_b(L0, -1);
}

void f_3b6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 198, 2, 515486);
	f_3dd_a2_b(L0, 197);
}

void f_3c3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 199, 2, 515487);
	f_3dd_a2_b(L0, 197);
}

object f_3d0_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_3dd_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_3d0_a0_o();
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

int f_3f9_a0_i(void)
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

int f_40a_a0_i(void)
{
	return 515561;
}

int f_40c_a0_i(void)
{
	return 503346;
}

string f_40e_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_410_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_412_a0_b(void)
{
	return false;
}

