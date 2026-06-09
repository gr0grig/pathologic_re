event evt_11 11;
event OnUse 0;
event OnLoad 5;
event OnTrigger 26;
event OnUnload 6;
event OnTimer 7;

task t0
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			if (f_5b6_a0_b()) {
				f_4cc_a1_v("Neutral");
				@lshWaitForAnimEnd();
			} else {
				@WaitForAnimEnd();
				@PlayAnimation("all", "idle");
			}
			if (tv0) {
				return;
			}
		}
	}

	void evt_11(int a0)
	{
		if (f_5b6_a0_b()) {
			@lshStopAnimation();
		} else {
			@StopAnimation();
		}
		@StopTrade();
		tv0 = true;
	}
}

task t1
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_444_a2_b(a0, 110.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_5b0_a0_i());
		L0->SetNPCDescription(f_5ae_a0_i());
		L0->SetPhoto(f_5b2_a0_s());
		L0->SetPhoto2(f_5b4_a0_s());
		L0->SetPlayerName(f_597_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_488_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t2
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
			f_ac_a1_v("Neutral");
			tv0->SetMessage(525391);
			tv0->ClearReplies();
			tv0->AddReply(525392, -1, 26760);
			tv0->AddReply(539025, -1, 40968);
			break;
			return;
		}
		if (f_5b6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_4cc_a1_v(tv2);
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

	void f_ac_a1_v(string a0)
	{
		if (!f_5b6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_4d3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_4e4_a0_v();
			if (a0 == 26759) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(525391);
				tv0->ClearReplies();
				tv0->AddReply(525392, -1, 26760);
				tv0->AddReply(539025, -1, 40968);
				return;
			}
			tv3 = true;
			if (f_5b6_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t3
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_444_a2_b(a0, 110.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_5b0_a0_i());
		L0->SetNPCDescription(f_5ae_a0_i());
		L0->SetPhoto(f_5b2_a0_s());
		L0->SetPhoto2(f_5b4_a0_s());
		L0->SetPlayerName(f_597_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t4{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_488_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t4
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
			if (!f_55e_a1_b(tv1) && !f_554_a1_b(tv1)) {
				f_1bc_a1_v("Neutral");
				tv0->SetMessage(518164);
				tv0->ClearReplies();
				tv0->AddReply(530150, 31544, 31543);
				tv0->AddReply(530158, -1, 31551);
				break;
			}
			if (f_55e_a1_b(tv1) && !f_554_a1_b(tv1)) {
				f_1bc_a1_v("Neutral");
				tv0->SetMessage(518169);
				tv0->ClearReplies();
				tv0->AddReply(518170, 19284, 19283);
				break;
			}
			f_1bc_a1_v("Neutral");
			tv0->SetMessage(518174);
			tv0->ClearReplies();
			tv0->AddReply(518175, -1, 19288);
			if (f_548_a1_b(tv1)) {
				tv0->AddReply(534605, 36244, 36243);
			}
			tv0->AddReply(518179, -1, 19292);
			break;
			return;
		}
		if (f_5b6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_4cc_a1_v(tv2);
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

	void f_1bc_a1_v(string a0)
	{
		if (!f_5b6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_4d3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_4e4_a0_v();
			if (a1 == 19285) {
				f_528_a2_v(tv1, tv0);
				f_53d_a2_v(tv1, tv0);
			}
			if (a1 == 19288) {
				f_543_a2_v(tv1, tv0);
			}
			if (a1 == 36243) {
				f_537_a2_v(tv1, tv0);
			}
			if (a0 == 19277) {
				if (!f_55e_a1_b(tv1) && !f_554_a1_b(tv1)) {
					f_1bc_a1_v("Neutral");
					tv0->SetMessage(518164);
					tv0->ClearReplies();
					tv0->AddReply(530150, 31544, 31543);
					tv0->AddReply(530158, -1, 31551);
					return;
				}
				if (f_55e_a1_b(tv1) && !f_554_a1_b(tv1)) {
					f_1bc_a1_v("Neutral");
					tv0->SetMessage(518169);
					tv0->ClearReplies();
					tv0->AddReply(518170, 19284, 19283);
					return;
				}
				f_1bc_a1_v("Neutral");
				tv0->SetMessage(518174);
				tv0->ClearReplies();
				tv0->AddReply(518175, -1, 19288);
				if (f_548_a1_b(tv1)) {
					tv0->AddReply(534605, 36244, 36243);
				}
				tv0->AddReply(518179, -1, 19292);
				return;
			}
			if (a0 == 36244) {
				f_1bc_a1_v("Neutral");
				tv0->SetMessage(534606);
				tv0->ClearReplies();
				tv0->AddReply(534607, 36246, 36245);
				tv0->AddReply(534614, -1, 36252);
				return;
			}
			if (a0 == 36246) {
				f_1bc_a1_v("Neutral");
				tv0->SetMessage(534608);
				tv0->ClearReplies();
				tv0->AddReply(534609, -1, 36247);
				tv0->AddReply(534610, 36249, 36248);
				return;
			}
			if (a0 == 36249) {
				f_1bc_a1_v("Neutral");
				tv0->SetMessage(534611);
				tv0->ClearReplies();
				tv0->AddReply(534612, -1, 36250);
				tv0->AddReply(534613, -1, 36251);
				return;
			}
			if (a0 == 19284) {
				f_1bc_a1_v("Neutral");
				tv0->SetMessage(518171);
				tv0->ClearReplies();
				tv0->AddReply(518172, -1, 19285);
				tv0->AddReply(518173, -1, 19286);
				return;
			}
			if (a0 == 31544) {
				f_1bc_a1_v("Neutral");
				tv0->SetMessage(530151);
				tv0->ClearReplies();
				tv0->AddReply(530152, 31546, 31545);
				tv0->AddReply(530156, -1, 31549);
				return;
			}
			if (a0 == 31546) {
				f_1bc_a1_v("Neutral");
				tv0->SetMessage(530153);
				tv0->ClearReplies();
				tv0->AddReply(530154, -1, 31547);
				tv0->AddReply(530155, -1, 31548);
				return;
			}
			tv3 = true;
			if (f_5b6_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t5
{
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;
	var bool tv5;
	var int tv6;

	void init(void)
	{
		tv6 = f_507_a0_i();
		f_575_a0_v();
		f_343_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		int L0;
		f_3d3_a0_v();
		if (f_5a8_a0_i() == 1) {
			L0 = t3{a0};
		} else {
			if (f_5a8_a0_i() == 2) {
				L0 = t1{a0};
			} else {
				return;
			}
		}
		if (1000 == L0) {
			if (!f_499_a2_b(a0, 110.0)) {
				return;
			}
			t0{a0};
			f_4c8_a1_v(a0);
		}
	}

	void OnLoad(void)
	{
		if (tv6 != f_507_a0_i()) {
			f_575_a0_v();
			tv6 = f_507_a0_i();
		}
		f_378_a0_v();
	}

	void f_343_a2_v(float a0, float a1)
	{
		for (; ; ) {
			float L0;
			while (!f_43f_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_392_a2_v(a0, a1);
			@sync();
		}
	}

	void f_35c_a0_v(void)
	{
		bool L0;
		tv5 = true;
		@IsLoaded(L0);
		if (!L0 && f_390_a0_b()) {
			@RemoveActor(f_4eb_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_35c_a0_v();
		}
	}

	void f_378_a0_v(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		f_3d3_a0_v();
		if (tv5 && f_390_a0_b()) {
			@RemoveActor(f_4eb_a0_o());
		}
	}

	bool f_390_a0_b(void)
	{
		return true;
	}

	void f_392_a2_v(float a0, float a1)
	{
		if (!f_43f_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_3e1_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_3ad_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_437_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_3ad_a0_b()) {
				if (!tv2) {
					f_4d9_a1_v(tv4);
					tv2 = true;
				}
			} else {
				if (tv2) {
					@UnlookAsync("head");
					tv2 = false;
				}
			}
		}
	}

	void f_3d3_a0_v(void)
	{
		f_432_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_3e1_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_43f_a0_b()) {
		return;
	}
	L0 = f_517_a0_i();
	for (L1 = 0; L1 < 5 && f_43f_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_510_a1_s(L3));
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
		if (!f_430_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_430_a0_b(void)
{
	return true;
}

void f_432_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_437_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_43f_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_444_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_4f1_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_5b6_a0_b()) {
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

void f_488_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_5b6_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_499_a2_b(object a0, float a1)
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
	L5 = L3 * a1 - [0.0, 10.0, 0.0];
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

void f_4c8_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_4cc_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_4d3_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_4d9_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_4e4_a0_v(void)
{
	if (f_5b6_a0_b()) {
		@lshStopSpeech();
	}
}

object f_4eb_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_4f1_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_4fb_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_500_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

int f_507_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_510_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_517_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_510_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_528_a2_v(object a0, object a1)
{
	int L0;
	int L1;
	L0 = f_507_a0_i();
	@SetVariable("Gatherer2_" + L0, 1);
	a0->RemoveItemByType(L1, "blood", 1);
}

void f_537_a2_v(object a0, object a1)
{
	@SetVariable("oobSysGatherer2_1", 1);
}

void f_53d_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_543_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_548_a1_b(object a0)
{
	if (f_4fb_a1_i("oobSysGatherer2_1") == 0) {
		return true;
	}
	return false;
}

bool f_554_a1_b(object a0)
{
	if (f_569_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_55e_a1_b(object a0)
{
	if (f_500_a2_b(a0, "blood")) {
		return true;
	}
	return false;
}

bool f_569_a1_b(object a0)
{
	int L0;
	int L1;
	L0 = f_507_a0_i();
	@GetVariable("Gatherer2_" + L0, L1);
	return L1 != 0;
}

void f_575_a0_v(void)
{
	bool L0;
	int L1;
	@ClearSubContainer(0);
	@irand(L1, 10);
	L1 = L1 + 3;
	@AddItem(L0, f_592_a1_i("grass_savyur"), 0, L1);
	@irand(L1, 10);
	L1 = L1 + 3;
	@AddItem(L0, f_592_a1_i("grass_white_plet"), 0, L1);
}

int f_592_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

int f_597_a0_i(void)
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

int f_5a8_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

int f_5ae_a0_i(void)
{
	return 521048;
}

int f_5b0_a0_i(void)
{
	return 521047;
}

string f_5b2_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_5b4_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_5b6_a0_b(void)
{
	return false;
}

