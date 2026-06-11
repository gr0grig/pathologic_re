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
		if (!f_251_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_412_a0_i());
		L0->SetNPCDescription(f_410_a0_i());
		L0->SetPhoto(f_414_a0_s());
		L0->SetPhoto2(f_416_a0_s());
		L0->SetPlayerName(f_3ff_a0_i());
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
		f_296_a1_v(a0);
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
			if (f_387_a1_b(tv1)) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(511843);
				tv0->ClearReplies();
				tv0->AddReply(511844, 13058, 13057);
				tv0->AddReply(536103, 37857, 37856);
				break;
			}
			if (!f_39f_a1_b(tv1)) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(511847);
				tv0->ClearReplies();
				tv0->AddReply(511848, -1, 13061);
				break;
			}
			if (f_393_a1_b(tv1) && f_39f_a1_b(tv1)) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(511849);
				tv0->ClearReplies();
				tv0->AddReply(536115, 13064, 37870);
				tv0->AddReply(511850, 13064, 13063);
				break;
			}
			return;
		}
		if (f_418_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2a8_a1_v(tv2);
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
		if (!f_418_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2b8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_2c7_a0_v();
			if (a1 == 13059) {
				f_33e_a2_v(tv1, tv0);
				f_37d_a2_v(tv1, tv0);
			}
			if (a1 == 13065) {
				f_344_a2_v(tv1, tv0);
				f_333_a2_v(tv1, tv0);
				f_32d_a2_v(tv1, tv0);
				f_34a_a2_v(tv1, tv0);
			}
			if (a0 == 13056) {
				if (f_387_a1_b(tv1)) {
					f_c0_a1_v("Neutral");
					tv0->SetMessage(511843);
					tv0->ClearReplies();
					tv0->AddReply(511844, 13058, 13057);
					tv0->AddReply(536103, 37857, 37856);
					return;
				}
				if (!f_39f_a1_b(tv1)) {
					f_c0_a1_v("Neutral");
					tv0->SetMessage(511847);
					tv0->ClearReplies();
					tv0->AddReply(511848, -1, 13061);
					return;
				}
				if (f_393_a1_b(tv1) && f_39f_a1_b(tv1)) {
					f_c0_a1_v("Neutral");
					tv0->SetMessage(511849);
					tv0->ClearReplies();
					tv0->AddReply(536115, 13064, 37870);
					tv0->AddReply(511850, 13064, 13063);
					return;
				}
			}
			if (a0 == 13064) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(511851);
				tv0->ClearReplies();
				tv0->AddReply(511852, -1, 13065);
				return;
			}
			if (a0 == 37857) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(536104);
				tv0->ClearReplies();
				tv0->AddReply(536105, 13058, 37858);
				return;
			}
			if (a0 == 13058) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(511845);
				tv0->ClearReplies();
				tv0->AddReply(536106, 37861, 37860);
				return;
			}
			if (a0 == 37861) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(536107);
				tv0->ClearReplies();
				tv0->AddReply(536108, 37863, 37862);
				tv0->AddReply(536114, 37863, 37868);
				return;
			}
			if (a0 == 37863) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(536109);
				tv0->ClearReplies();
				tv0->AddReply(536110, 37865, 37864);
				return;
			}
			if (a0 == 37865) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(536111);
				tv0->ClearReplies();
				tv0->AddReply(536112, 37867, 37866);
				return;
			}
			if (a0 == 37867) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(536113);
				tv0->ClearReplies();
				tv0->AddReply(511846, -1, 13059);
				return;
			}
			tv3 = true;
			if (f_418_a0_b()) {
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
			@Sleep(3);
			f_1f6_a0_v();
		}
	}

	void OnUse(object a0)
	{
		f_247_a0_v();
		t0{a0};
	}
}

void f_1f6_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_24c_a0_b()) {
		return;
	}
	L0 = f_31c_a0_i();
	for (L1 = 0; L1 < 5 && f_24c_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_315_a1_s(L3));
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
		if (!f_245_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_245_a0_b(void)
{
	return true;
}

void f_247_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_24c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_251_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_2ce_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_418_a0_b()) {
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

void f_296_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_418_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2a8_a1_v(string a0)
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

void f_2b8_a2_v(string a0, bool a1)
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

void f_2c7_a0_v(void)
{
	if (f_418_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_2ce_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2d8_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_2dd_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_2e9_a3_v(object a0, object a1, int a2)
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
		f_2dd_a2_v(L0, a2);
	}
}

void f_2fc_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_2e9_a3_v(a0, L0, a2);
}

bool f_309_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_315_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_31c_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_315_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_32d_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_333_a2_v(object a0, object a1)
{
	@Trace("powder is given");
	f_2fc_a3_v(a0, "powder", 1);
}

void f_33e_a2_v(object a0, object a1)
{
	@SetVariable("ood4BirdmaskHome1", 1);
}

void f_344_a2_v(object a0, object a1)
{
	@SetVariable("ood4BirdmaskHome2", 1);
}

void f_34a_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_3ee_a0_o();
	L0->FindMark(L1, "d4q02BirdmaskNearHome");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q02MladVladGotoAJLSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q02MladVladGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q02MladVladGotoJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q02MladVladGotoLara");
	if (L1) {
		L1->Remove();
	}
	f_3b8_a0_v();
	f_309_a2_b("quest_d4_02", "completed");
}

void f_37d_a2_v(object a0, object a1)
{
	f_3ab_a0_v();
	f_309_a2_b("quest_d4_02", "birdmask_talk");
}

bool f_387_a1_b(object a0)
{
	if (f_2d8_a1_i("ood4BirdmaskHome1") == 0) {
		return true;
	}
	return false;
}

bool f_393_a1_b(object a0)
{
	if (f_2d8_a1_i("ood4BirdmaskHome2") == 0) {
		return true;
	}
	return false;
}

bool f_39f_a1_b(object a0)
{
	if (f_2d8_a1_i("d4q02_survived") == 1) {
		return true;
	}
	return false;
}

void f_3ab_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 138, 2, 515329);
	f_3d2_a2_b(L0, 21);
}

void f_3b8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 94, 2, 512176);
	f_3d2_a2_b(L0, 21);
}

object f_3c5_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_3d2_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_3c5_a0_o();
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

object f_3ee_a0_o(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("Can't find main outdoor scene");
		L1 = null;
		return L1;
	}
	L0->GetMap(L1);
	return L1;
}

int f_3ff_a0_i(void)
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

int f_410_a0_i(void)
{
	return 515571;
}

int f_412_a0_i(void)
{
	return 504029;
}

string f_414_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_416_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_418_a0_b(void)
{
	return false;
}

