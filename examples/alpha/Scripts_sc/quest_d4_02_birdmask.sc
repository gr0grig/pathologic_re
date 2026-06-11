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
		if (!f_1c1_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_34d_a0_i());
		L0->SetPhoto(f_34f_a0_s());
		L0->SetPlayerName(f_31c_a0_i());
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
		f_1f9_a1_v(a0);
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
			if (f_2bd_a1_b(tv1)) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(11843);
				tv0->ClearReplies();
				tv0->AddReply(11844, 13058, 13057);
				break;
			}
			if (!f_2d5_a1_b(tv1)) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(11847);
				tv0->ClearReplies();
				tv0->AddReply(11848, -1, 13061);
				break;
			}
			if (f_2c9_a1_b(tv1) && f_2d5_a1_b(tv1)) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(11849);
				tv0->ClearReplies();
				tv0->AddReply(11850, 13064, 13063);
				break;
			}
			return;
		}
		if (f_351_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1fd_a1_v(tv2);
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

	void f_ab_a1_v(string a0)
	{
		if (!f_351_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1fd_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_20f_a0_v();
			if (a1 == 13059) {
				f_274_a2_v(tv1, tv0);
				f_2b3_a2_v(tv1, tv0);
			}
			if (a1 == 13065) {
				f_27a_a2_v(tv1, tv0);
				f_269_a2_v(tv1, tv0);
				f_263_a2_v(tv1, tv0);
				f_280_a2_v(tv1, tv0);
			}
			if (a0 == 13056) {
				if (f_2bd_a1_b(tv1)) {
					f_ab_a1_v("Neutral");
					tv0->SetMessage(11843);
					tv0->ClearReplies();
					tv0->AddReply(11844, 13058, 13057);
					return;
				}
				if (!f_2d5_a1_b(tv1)) {
					f_ab_a1_v("Neutral");
					tv0->SetMessage(11847);
					tv0->ClearReplies();
					tv0->AddReply(11848, -1, 13061);
					return;
				}
				if (f_2c9_a1_b(tv1) && f_2d5_a1_b(tv1)) {
					f_ab_a1_v("Neutral");
					tv0->SetMessage(11849);
					tv0->ClearReplies();
					tv0->AddReply(11850, 13064, 13063);
					return;
				}
			}
			if (a0 == 13064) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(11851);
				tv0->ClearReplies();
				tv0->AddReply(11852, -1, 13065);
				return;
			}
			if (a0 == 13058) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(11845);
				tv0->ClearReplies();
				tv0->AddReply(11846, -1, 13059);
				return;
			}
			tv3 = true;
			if (f_351_a0_b()) {
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
			f_172_a0_v();
		}
	}

	void OnUse(object a0)
	{
		f_1b7_a0_v();
		t0{a0};
	}
}

void f_172_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1bc_a0_b()) {
		return;
	}
	L0 = f_252_a0_i();
	L1 = 0;
	for (; L1 < 5 && f_1bc_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_24b_a1_s(L3));
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
				continue;
			}
			if (L1) {
				break;
			}
		}
	}
}

void f_1b7_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_1bc_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1c1_a1_b(object a0)
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
	L5 = L3 * 70 + f_216_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1f9_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1fd_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_20f_a0_v(void)
{
	if (f_351_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_216_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_220_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_225_a3_v(object a0, object a1, int a2)
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

void f_232_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_225_a3_v(a0, L0, a2);
}

bool f_23f_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_24b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_252_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_24b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_263_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_269_a2_v(object a0, object a1)
{
	@Trace("powder is given");
	f_232_a3_v(a0, "powder", 1);
}

void f_274_a2_v(object a0, object a1)
{
	@SetVariable("ood4BirdmaskHome1", 1);
}

void f_27a_a2_v(object a0, object a1)
{
	@SetVariable("ood4BirdmaskHome2", 1);
}

void f_280_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_30b_a0_o();
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
	f_33d_a0_v();
	f_23f_a2_b("quest_d4_02", "completed");
}

void f_2b3_a2_v(object a0, object a1)
{
	f_32d_a0_v();
	f_23f_a2_b("quest_d4_02", "birdmask_talk");
}

bool f_2bd_a1_b(object a0)
{
	if (f_220_a1_i("ood4BirdmaskHome1") == 0) {
		return true;
	}
	return false;
}

bool f_2c9_a1_b(object a0)
{
	if (f_220_a1_i("ood4BirdmaskHome2") == 0) {
		return true;
	}
	return false;
}

bool f_2d5_a1_b(object a0)
{
	if (f_220_a1_i("d4q02_survived") == 1) {
		return true;
	}
	return false;
}

object f_2e1_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2ee_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2e1_a0_o();
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

object f_30b_a0_o(void)
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

int f_31c_a0_i(void)
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

void f_32d_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 138, 2, 15329);
	f_2ee_a2_b(L0, 21);
}

void f_33d_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 94, 2, 12176);
	f_2ee_a2_b(L0, 21);
}

int f_34d_a0_i(void)
{
	return 4029;
}

string f_34f_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_351_a0_b(void)
{
	return false;
}

