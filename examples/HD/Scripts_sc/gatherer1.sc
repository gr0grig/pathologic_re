event OnDialogReply 11;
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
			if (f_72d_a0_b()) {
				f_5a8_a1_v("Neutral");
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

	void OnDialogReply(int a0)
	{
		if (f_72d_a0_b()) {
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
		if (!f_51c_a2_b(a0, 110.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_727_a0_i());
		L0->SetNPCDescription(f_725_a0_i());
		L0->SetPhoto(f_729_a0_s());
		L0->SetPhoto2(f_72b_a0_s());
		L0->SetPlayerName(f_70e_a0_i());
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
		f_561_a1_v(a0);
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
			if (!f_683_a1_b(tv1) && !f_678_a1_b(tv1)) {
				f_f8_a1_v("Neutral");
				tv0->SetMessage(518145);
				tv0->ClearReplies();
				tv0->AddReply(518146, 19260, 19259);
				tv0->AddReply(529952, -1, 31336);
				break;
			}
			if (f_678_a1_b(tv1) && !f_683_a1_b(tv1)) {
				f_f8_a1_v("Neutral");
				tv0->SetMessage(518150);
				tv0->ClearReplies();
				tv0->AddReply(518151, 19265, 19264);
				break;
			}
			f_f8_a1_v("Neutral");
			tv0->SetMessage(518155);
			tv0->ClearReplies();
			tv0->AddReply(518156, -1, 19269);
			if (f_66c_a1_b(tv1)) {
				tv0->AddReply(518199, 19313, 19312);
			}
			tv0->AddReply(518157, -1, 19270);
			break;
			return;
		}
		if (f_72d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5a8_a1_v(tv2);
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

	void f_f8_a1_v(string a0)
	{
		if (!f_72d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5b8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_5d2_a0_v();
			if (a1 == 19266) {
				f_61b_a2_v(tv1, tv0);
				f_649_a2_v(tv1, tv0);
			}
			if (a1 == 19269) {
				f_64f_a2_v(tv1, tv0);
			}
			if (a1 == 19312) {
				f_643_a2_v(tv1, tv0);
			}
			if (a0 == 19258) {
				if (!f_683_a1_b(tv1) && !f_678_a1_b(tv1)) {
					f_f8_a1_v("Neutral");
					tv0->SetMessage(518145);
					tv0->ClearReplies();
					tv0->AddReply(518146, 19260, 19259);
					tv0->AddReply(529952, -1, 31336);
					return;
				}
				if (f_678_a1_b(tv1) && !f_683_a1_b(tv1)) {
					f_f8_a1_v("Neutral");
					tv0->SetMessage(518150);
					tv0->ClearReplies();
					tv0->AddReply(518151, 19265, 19264);
					return;
				}
				f_f8_a1_v("Neutral");
				tv0->SetMessage(518155);
				tv0->ClearReplies();
				tv0->AddReply(518156, -1, 19269);
				if (f_66c_a1_b(tv1)) {
					tv0->AddReply(518199, 19313, 19312);
				}
				tv0->AddReply(518157, -1, 19270);
				return;
			}
			if (a0 == 19313) {
				f_f8_a1_v("Neutral");
				tv0->SetMessage(518200);
				tv0->ClearReplies();
				tv0->AddReply(534598, 36237, 36236);
				tv0->AddReply(518201, -1, 19314);
				return;
			}
			if (a0 == 36237) {
				f_f8_a1_v("Neutral");
				tv0->SetMessage(534599);
				tv0->ClearReplies();
				tv0->AddReply(534600, -1, 36238);
				tv0->AddReply(534601, 36240, 36239);
				return;
			}
			if (a0 == 36240) {
				f_f8_a1_v("Neutral");
				tv0->SetMessage(534602);
				tv0->ClearReplies();
				tv0->AddReply(534603, -1, 36241);
				tv0->AddReply(534604, -1, 36242);
				return;
			}
			if (a0 == 19265) {
				f_f8_a1_v("Neutral");
				tv0->SetMessage(518152);
				tv0->ClearReplies();
				tv0->AddReply(518153, -1, 19266);
				tv0->AddReply(518154, -1, 19267);
				return;
			}
			if (a0 == 19260) {
				f_f8_a1_v("Neutral");
				tv0->SetMessage(518147);
				tv0->ClearReplies();
				tv0->AddReply(529953, 31339, 31337);
				tv0->AddReply(529954, -1, 31338);
				return;
			}
			if (a0 == 31339) {
				f_f8_a1_v("Neutral");
				tv0->SetMessage(529955);
				tv0->ClearReplies();
				tv0->AddReply(518148, -1, 19261);
				tv0->AddReply(518162, -1, 19275);
				return;
			}
			tv3 = true;
			if (f_72d_a0_b()) {
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
		if (!f_51c_a2_b(a0, 110.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_727_a0_i());
		L0->SetNPCDescription(f_725_a0_i());
		L0->SetPhoto(f_729_a0_s());
		L0->SetPhoto2(f_72b_a0_s());
		L0->SetPlayerName(f_70e_a0_i());
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
		f_561_a1_v(a0);
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
			f_2c2_a1_v("Neutral");
			tv0->SetMessage(525385);
			tv0->ClearReplies();
			if (f_654_a1_b(tv1) && f_660_a1_b(tv1)) {
				tv0->AddReply(525387, 40946, 26755);
			}
			tv0->AddReply(539023, -1, 40966);
			tv0->AddReply(539024, -1, 40967);
			break;
			return;
		}
		if (f_72d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5a8_a1_v(tv2);
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

	void f_2c2_a1_v(string a0)
	{
		if (!f_72d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5b8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_5d2_a0_v();
			if (a1 == 26755) {
				f_62a_a2_v(tv1, tv0);
			}
			if (a1 == 40957) {
				f_630_a2_v(tv1, tv0);
			}
			if (a1 == 40958) {
				f_630_a2_v(tv1, tv0);
			}
			if (a1 == 40959) {
				f_630_a2_v(tv1, tv0);
			}
			if (a1 == 26757) {
				f_630_a2_v(tv1, tv0);
			}
			if (a0 == 26753) {
				f_2c2_a1_v("Neutral");
				tv0->SetMessage(525385);
				tv0->ClearReplies();
				if (f_654_a1_b(tv1) && f_660_a1_b(tv1)) {
					tv0->AddReply(525387, 40946, 26755);
				}
				tv0->AddReply(539023, -1, 40966);
				tv0->AddReply(539024, -1, 40967);
				return;
			}
			if (a0 == 40946) {
				f_2c2_a1_v("Neutral");
				tv0->SetMessage(539004);
				tv0->ClearReplies();
				tv0->AddReply(539005, 40948, 40947);
				tv0->AddReply(539022, 40948, 40964);
				return;
			}
			if (a0 == 40948) {
				f_2c2_a1_v("Neutral");
				tv0->SetMessage(539006);
				tv0->ClearReplies();
				tv0->AddReply(539007, 40950, 40949);
				return;
			}
			if (a0 == 40950) {
				f_2c2_a1_v("Neutral");
				tv0->SetMessage(539008);
				tv0->ClearReplies();
				tv0->AddReply(539009, 40952, 40951);
				tv0->AddReply(539021, -1, 40963);
				return;
			}
			if (a0 == 40952) {
				f_2c2_a1_v("Neutral");
				tv0->SetMessage(539010);
				tv0->ClearReplies();
				tv0->AddReply(539011, 40954, 40953);
				tv0->AddReply(539018, 40961, 40960);
				return;
			}
			if (a0 == 40961) {
				f_2c2_a1_v("Neutral");
				tv0->SetMessage(539019);
				tv0->ClearReplies();
				tv0->AddReply(525389, -1, 26757);
				return;
			}
			if (a0 == 40954) {
				f_2c2_a1_v("Neutral");
				tv0->SetMessage(539012);
				tv0->ClearReplies();
				tv0->AddReply(539013, 40956, 40955);
				tv0->AddReply(539017, -1, 40959);
				return;
			}
			if (a0 == 40956) {
				f_2c2_a1_v("Neutral");
				tv0->SetMessage(539014);
				tv0->ClearReplies();
				tv0->AddReply(539015, -1, 40957);
				tv0->AddReply(539016, -1, 40958);
				return;
			}
			tv3 = true;
			if (f_72d_a0_b()) {
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
	var bool tv6;
	var int tv7;

	void init(void)
	{
		tv7 = f_5fa_a0_i();
		f_6e0_a0_v();
		f_425_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		int L0;
		f_4ab_a0_v();
		if (f_71f_a0_i() == 1) {
			L0 = t1{a0};
		} else {
			if (f_71f_a0_i() == 2) {
				L0 = t3{a0};
			} else {
				return;
			}
		}
		if (1000 == L0) {
			if (!f_573_a2_b(a0, 110.0)) {
				return;
			}
			t0{a0};
			f_5a3_a1_v(a0);
		}
	}

	void OnLoad(void)
	{
		if (tv7 != f_5fa_a0_i()) {
			f_6e0_a0_v();
			tv7 = f_5fa_a0_i();
		}
	}

	void f_425_a2_v(float a0, float a1)
	{
		tv6 = false;
		for (; ; ) {
			float L0;
			bool L1;
			@rand(L0, 3);
			@Sleep(L0 + 3, L1);
			tv6 = true;
			f_46a_a2_v(a0, a1);
			tv6 = false;
		}
	}

	void f_437_a0_v(void)
	{
		tv5 = true;
		if (!f_517_a0_b() && f_468_a0_b()) {
			@RemoveActor(f_5d9_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_437_a0_v();
		}
	}

	void OnUnload(void)
	{
		if (tv6) {
			f_4ab_a0_v();
		}
		if (tv5 && f_468_a0_b()) {
			@RemoveActor(f_5d9_a0_o());
		}
	}

	bool f_468_a0_b(void)
	{
		return true;
	}

	void f_46a_a2_v(float a0, float a1)
	{
		if (!f_517_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_4b9_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_485_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_50f_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_485_a0_b()) {
				if (!tv2) {
					f_5c7_a1_v(tv4);
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

	void f_4ab_a0_v(void)
	{
		f_50a_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_4b9_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_517_a0_b()) {
		return;
	}
	L0 = f_60a_a0_i();
	for (L1 = 0; L1 < 5 && f_517_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_603_a1_s(L3));
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
		if (!f_508_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_508_a0_b(void)
{
	return true;
}

void f_50a_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_50f_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_517_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_51c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_5df_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_72d_a0_b()) {
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

void f_561_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_72d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_573_a2_b(object a0, float a1)
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
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_5a3_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
}

void f_5a8_a1_v(string a0)
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

void f_5b8_a2_v(string a0, bool a1)
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

void f_5c7_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_5d2_a0_v(void)
{
	if (f_72d_a0_b()) {
		@lshStopSpeech();
	}
}

object f_5d9_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_5df_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_5e9_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_5ee_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

float f_5f5_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_5fa_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_603_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_60a_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_603_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_61b_a2_v(object a0, object a1)
{
	int L0;
	int L1;
	L0 = f_5fa_a0_i();
	@SetVariable("Gatherer1_" + L0, 1);
	a0->RemoveItemByType(L1, "blood", 1);
}

void f_62a_a2_v(object a0, object a1)
{
	@SetVariable("ookGatherer1", 1);
}

void f_630_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_6cf_a0_o();
	L0->AddMark("k2q04MorlokGotoAndrei", "pt_map_andrei", 0, 539378, f_5f5_a0_f());
	f_699_a0_v();
}

void f_643_a2_v(object a0, object a1)
{
	@SetVariable("oobSysGatherer1_1", 1);
}

void f_649_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_64f_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_654_a1_b(object a0)
{
	if (f_5e9_a1_i("k2q04") == 2) {
		return true;
	}
	return false;
}

bool f_660_a1_b(object a0)
{
	if (f_5e9_a1_i("ookGatherer1") == 0) {
		return true;
	}
	return false;
}

bool f_66c_a1_b(object a0)
{
	if (f_5e9_a1_i("oobSysGatherer1_1") == 0) {
		return true;
	}
	return false;
}

bool f_678_a1_b(object a0)
{
	if (f_5ee_a2_b(a0, "blood")) {
		return true;
	}
	return false;
}

bool f_683_a1_b(object a0)
{
	if (f_68d_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_68d_a1_b(object a0)
{
	int L0;
	int L1;
	L0 = f_5fa_a0_i();
	@GetVariable("Gatherer1_" + L0, L1);
	return L1 != 0;
}

void f_699_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 511, 2, 529710);
	f_6b3_a2_b(L0, 507);
}

object f_6a6_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_6b3_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_6a6_a0_o();
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

object f_6cf_a0_o(void)
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

void f_6e0_a0_v(void)
{
	bool L0;
	int L1;
	@ClearSubContainer(0);
	@irand(L1, 15);
	L1 = L1 + 5;
	@AddItem(L0, f_709_a1_i("grass_black_tvir"), 0, L1);
	@irand(L1, 15);
	L1 = L1 + 5;
	@AddItem(L0, f_709_a1_i("grass_blood_tvir"), 0, L1);
	@irand(L1, 15);
	L1 = L1 + 5;
	@AddItem(L0, f_709_a1_i("grass_brown_tvir"), 0, L1);
}

int f_709_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

int f_70e_a0_i(void)
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

int f_71f_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

int f_725_a0_i(void)
{
	return 521048;
}

int f_727_a0_i(void)
{
	return 521047;
}

string f_729_a0_s(void)
{
	return "ui/NPC_Morlok.png";
}

string f_72b_a0_s(void)
{
	return "ui/NPC_Morlok_b.png";
}

bool f_72d_a0_b(void)
{
	return false;
}

