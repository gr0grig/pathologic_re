event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnLoad 5;
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
		if (!f_21d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_317_a0_i());
		L0->SetNPCDescription(f_315_a0_i());
		L0->SetPhoto(f_319_a0_s());
		L0->SetPhoto2(f_31b_a0_s());
		L0->SetPlayerName(f_304_a0_i());
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
		f_261_a1_v(a0);
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
			if (f_2c2_a1_b(tv1)) {
				f_2bc_a2_v(tv1, tv0);
				f_9d_a1_v("Neutral");
				tv0->SetMessage(521181);
				tv0->ClearReplies();
				tv0->AddReply(528428, 29813, 29812);
				tv0->AddReply(528434, 29819, 29818);
				break;
			}
			f_9d_a1_v("Neutral");
			tv0->SetMessage(521197);
			tv0->ClearReplies();
			tv0->AddReply(521198, -1, 22395);
			break;
			return;
		}
		if (f_31d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_272_a1_v(tv2);
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

	void f_9d_a1_v(string a0)
	{
		if (!f_31d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_279_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27f_a0_v();
			if (a1 == 22397) {
				f_2b3_a2_v(tv1, tv0);
			}
			if (a0 == 22383) {
				if (f_2c2_a1_b(tv1)) {
					f_2bc_a2_v(tv1, tv0);
					f_9d_a1_v("Neutral");
					tv0->SetMessage(521181);
					tv0->ClearReplies();
					tv0->AddReply(528428, 29813, 29812);
					tv0->AddReply(528434, 29819, 29818);
					return;
				}
				f_9d_a1_v("Neutral");
				tv0->SetMessage(521197);
				tv0->ClearReplies();
				tv0->AddReply(521198, -1, 22395);
				return;
			}
			if (a0 == 29819) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(528435);
				tv0->ClearReplies();
				tv0->AddReply(528436, 29821, 29820);
				return;
			}
			if (a0 == 29821) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(528437);
				tv0->ClearReplies();
				tv0->AddReply(528438, 29815, 29822);
				return;
			}
			if (a0 == 29813) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(528429);
				tv0->ClearReplies();
				tv0->AddReply(528430, 29815, 29814);
				return;
			}
			if (a0 == 29815) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(528431);
				tv0->ClearReplies();
				tv0->AddReply(528432, 29817, 29816);
				tv0->AddReply(528439, 29817, 29824);
				return;
			}
			if (a0 == 29817) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(528433);
				tv0->ClearReplies();
				tv0->AddReply(521182, 22396, 22384);
				return;
			}
			if (a0 == 22396) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(521199);
				tv0->ClearReplies();
				tv0->AddReply(521200, -1, 22397);
				return;
			}
			tv3 = true;
			if (f_31d_a0_b()) {
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
		f_213_a0_v();
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			float L0;
			while (!f_218_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_1c2_a0_v();
		}
	}

	void f_18f_a0_v(void)
	{
		bool L0;
		tv0 = true;
		@IsLoaded(L0);
		if (!L0 && f_1c0_a0_b()) {
			@RemoveActor(f_286_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_18f_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_1c0_a0_b()) {
			@RemoveActor(f_286_a0_o());
		}
	}
}

bool f_1c0_a0_b(void)
{
	return true;
}

void f_1c2_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_218_a0_b()) {
		return;
	}
	L0 = f_2a2_a0_i();
	for (L1 = 0; L1 < 5 && f_218_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_29b_a1_s(L3));
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
		if (!f_211_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_211_a0_b(void)
{
	return true;
}

void f_213_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_218_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_21d_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_28c_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_31d_a0_b()) {
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

void f_261_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_31d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_272_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_279_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_27f_a0_v(void)
{
	if (f_31d_a0_b()) {
		@lshStopSpeech();
	}
}

object f_286_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_28c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_296_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

string f_29b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_2a2_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_29b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_2b3_a2_v(object a0, object a1)
{
	@SetVariable("b6q02", 2);
	f_2ce_a0_v();
}

void f_2bc_a2_v(object a0, object a1)
{
	@SetVariable("oob6Prophet1", 1);
}

bool f_2c2_a1_b(object a0)
{
	if (f_296_a1_i("oob6Prophet1") == 0) {
		return true;
	}
	return false;
}

void f_2ce_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 268, 2, 521195);
	f_2e8_a2_b(L0, 266);
}

object f_2db_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2e8_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2db_a0_o();
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

int f_304_a0_i(void)
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

int f_315_a0_i(void)
{
	return 518716;
}

int f_317_a0_i(void)
{
	return 518715;
}

string f_319_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_31b_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_31d_a0_b(void)
{
	return false;
}

