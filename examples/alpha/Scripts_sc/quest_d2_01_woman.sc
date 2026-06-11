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
		if (!f_1ac_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2da_a0_i());
		L0->SetPhoto(f_2dc_a0_s());
		L0->SetPlayerName(f_2b9_a0_i());
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
		f_1e4_a1_v(a0);
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
			if (f_272_a1_b(tv1)) {
				f_92_a1_v("Neutral");
				tv0->SetMessage(6748);
				tv0->ClearReplies();
				tv0->AddReply(6749, 7440, 7439);
				tv0->AddReply(7345, 7440, 8098);
				tv0->AddReply(7350, 7440, 8104);
				break;
			}
			f_92_a1_v("Neutral");
			tv0->SetMessage(6753);
			tv0->ClearReplies();
			tv0->AddReply(6754, 8102, 7444);
			break;
			return;
		}
		if (f_2de_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e8_a1_v(tv2);
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

	void f_92_a1_v(string a0)
	{
		if (!f_2de_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1fa_a0_v();
			if (a1 == 8110) {
				f_247_a2_v(tv1, tv0);
				f_24d_a2_v(tv1, tv0);
				f_241_a2_v(tv1, tv0);
			}
			if (a0 == 7438) {
				if (f_272_a1_b(tv1)) {
					f_92_a1_v("Neutral");
					tv0->SetMessage(6748);
					tv0->ClearReplies();
					tv0->AddReply(6749, 7440, 7439);
					tv0->AddReply(7345, 7440, 8098);
					tv0->AddReply(7350, 7440, 8104);
					return;
				}
				f_92_a1_v("Neutral");
				tv0->SetMessage(6753);
				tv0->ClearReplies();
				tv0->AddReply(6754, 8102, 7444);
				return;
			}
			if (a0 == 8102) {
				f_92_a1_v("Neutral");
				tv0->SetMessage(7348);
				tv0->ClearReplies();
				tv0->AddReply(7349, -1, 8103);
				return;
			}
			if (a0 == 7440) {
				f_92_a1_v("Neutral");
				tv0->SetMessage(6750);
				tv0->ClearReplies();
				tv0->AddReply(6751, 8099, 7441);
				tv0->AddReply(7356, 8106, 8111);
				return;
			}
			if (a0 == 8099) {
				f_92_a1_v("Neutral");
				tv0->SetMessage(7346);
				tv0->ClearReplies();
				tv0->AddReply(7347, 8106, 8100);
				return;
			}
			if (a0 == 8106) {
				f_92_a1_v("Neutral");
				tv0->SetMessage(7351);
				tv0->ClearReplies();
				tv0->AddReply(7352, 7442, 8107);
				tv0->AddReply(7357, 7442, 8113);
				return;
			}
			if (a0 == 7442) {
				f_92_a1_v("Neutral");
				tv0->SetMessage(6752);
				tv0->ClearReplies();
				tv0->AddReply(7353, 8109, 8108);
				tv0->AddReply(7358, 8109, 8115);
				return;
			}
			if (a0 == 8109) {
				f_92_a1_v("Neutral");
				tv0->SetMessage(7354);
				tv0->ClearReplies();
				tv0->AddReply(7355, -1, 8110);
				return;
			}
			tv3 = true;
			if (f_2de_a0_b()) {
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
			if (!L0 && f_1aa_a0_b()) {
				@RemoveActor(f_201_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_1aa_a0_b()) {
			@RemoveActor(f_201_a0_o());
		}
	}
}

bool f_1aa_a0_b(void)
{
	return true;
}

bool f_1ac_a1_b(object a0)
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
	L5 = L3 * 70 + f_207_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1e4_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1e8_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_1fa_a0_v(void)
{
	if (f_2de_a0_b()) {
		@lshStopSpeech();
	}
}

object f_201_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_207_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_211_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_216_a3_v(object a0, object a1, int a2)
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

void f_223_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_216_a3_v(a0, L0, a2);
}

bool f_230_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_23c_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_241_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_247_a2_v(object a0, object a1)
{
	@SetVariable("ood2WomanD1", 1);
}

void f_24d_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q01", 5);
	L0 = f_2a8_a0_o();
	L0->AddMark("d2q01WomanDGotoAlexandr", "pt_map_alexandr", 1, 15271, f_23c_a0_f());
	f_2ca_a0_v();
	@Trace("key is given");
	f_223_a3_v(a0, "d2q01_key", 1);
	f_230_a2_b("quest_d2_01", "cursed_women");
}

bool f_272_a1_b(object a0)
{
	if (f_211_a1_i("ood2WomanD1") == 0) {
		return true;
	}
	return false;
}

object f_27e_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_28b_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_27e_a0_o();
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

object f_2a8_a0_o(void)
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

int f_2b9_a0_i(void)
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

void f_2ca_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 54, 1, 12136);
	f_28b_a2_b(L0, 10);
}

int f_2da_a0_i(void)
{
	return 3352;
}

string f_2dc_a0_s(void)
{
	return "ui/NPC_None.png";
}

bool f_2de_a0_b(void)
{
	return false;
}

