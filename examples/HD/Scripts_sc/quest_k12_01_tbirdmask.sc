event OnDialogReply 11;
event OnUse 0;
event OnTrigger 26;
event OnUnload 6;
event OnTimer 7;

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
		if (!f_501_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_61d_a0_i());
		L0->SetNPCDescription(f_61b_a0_i());
		L0->SetPhoto(f_61f_a0_s());
		L0->SetPhoto2(f_621_a0_s());
		L0->SetPlayerName(f_60a_a0_i());
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
		f_546_a1_v(a0);
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
			f_5c7_a2_v(tv1, tv0);
			f_a2_a1_v("Neutral");
			tv0->SetMessage(541007);
			tv0->ClearReplies();
			if (f_5e6_a1_b(tv1)) {
				tv0->AddReply(541347, 43494, 43493);
			}
			if (f_5f2_a1_b(tv1) && !f_5e6_a1_b(tv1)) {
				tv0->AddReply(542740, 45157, 45156);
			}
			tv0->AddReply(541034, -1, 43128);
			break;
			return;
		}
		if (f_623_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_558_a1_v(tv2);
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

	void f_a2_a1_v(string a0)
	{
		if (!f_623_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_568_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_582_a0_v();
			if (a1 == 43493) {
				f_5ce_a2_v(tv1, tv0);
			}
			if (a1 == 45156) {
				f_5d4_a2_v(tv1, tv0);
			}
			if (a0 == 43100) {
				f_5c7_a2_v(tv1, tv0);
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541007);
				tv0->ClearReplies();
				if (f_5e6_a1_b(tv1)) {
					tv0->AddReply(541347, 43494, 43493);
				}
				if (f_5f2_a1_b(tv1) && !f_5e6_a1_b(tv1)) {
					tv0->AddReply(542740, 45157, 45156);
				}
				tv0->AddReply(541034, -1, 43128);
				return;
			}
			if (a0 == 45157) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542741);
				tv0->ClearReplies();
				tv0->AddReply(542742, 45163, 45158);
				tv0->AddReply(542743, 45160, 45159);
				return;
			}
			if (a0 == 45160) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542744);
				tv0->ClearReplies();
				tv0->AddReply(542745, 45169, 45161);
				tv0->AddReply(542746, -1, 45162);
				return;
			}
			if (a0 == 45163) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542747);
				tv0->ClearReplies();
				tv0->AddReply(542748, 45166, 45165);
				tv0->AddReply(542751, 45169, 45168);
				return;
			}
			if (a0 == 45166) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542749);
				tv0->ClearReplies();
				tv0->AddReply(542750, 45169, 45167);
				return;
			}
			if (a0 == 45169) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542752);
				tv0->ClearReplies();
				tv0->AddReply(542753, 45173, 45172);
				return;
			}
			if (a0 == 45173) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542754);
				tv0->ClearReplies();
				tv0->AddReply(542755, 45177, 45174);
				tv0->AddReply(542756, 45178, 45175);
				tv0->AddReply(542757, -1, 45176);
				return;
			}
			if (a0 == 45178) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542759);
				tv0->ClearReplies();
				tv0->AddReply(542760, -1, 45179);
				tv0->AddReply(542761, 45177, 45180);
				return;
			}
			if (a0 == 45177) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542758);
				tv0->ClearReplies();
				tv0->AddReply(542762, -1, 45182);
				return;
			}
			if (a0 == 43494) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541348);
				tv0->ClearReplies();
				tv0->AddReply(541349, 43496, 43495);
				return;
			}
			if (a0 == 43496) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541350);
				tv0->ClearReplies();
				tv0->AddReply(541351, 43498, 43497);
				tv0->AddReply(541356, 43503, 43502);
				return;
			}
			if (a0 == 43503) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541357);
				tv0->ClearReplies();
				tv0->AddReply(541358, 43505, 43504);
				tv0->AddReply(541361, 43508, 43507);
				return;
			}
			if (a0 == 43508) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541362);
				tv0->ClearReplies();
				tv0->AddReply(541363, 43498, 43509);
				return;
			}
			if (a0 == 43505) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541359);
				tv0->ClearReplies();
				tv0->AddReply(541360, 43498, 43506);
				return;
			}
			if (a0 == 43498) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541352);
				tv0->ClearReplies();
				tv0->AddReply(541353, 43500, 43499);
				tv0->AddReply(541364, -1, 43510);
				return;
			}
			if (a0 == 43500) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541354);
				tv0->ClearReplies();
				tv0->AddReply(541355, 43513, 43501);
				tv0->AddReply(541368, 43517, 43516);
				return;
			}
			if (a0 == 43517) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541369);
				tv0->ClearReplies();
				tv0->AddReply(541370, 43515, 43518);
				tv0->AddReply(541373, 43523, 43522);
				tv0->AddReply(542700, 45109, 45108);
				return;
			}
			if (a0 == 45109) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542701);
				tv0->ClearReplies();
				tv0->AddReply(542702, 45111, 45110);
				return;
			}
			if (a0 == 45111) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542703);
				tv0->ClearReplies();
				if (f_5da_a1_b(tv1)) {
					tv0->AddReply(542704, 45117, 45112);
				}
				tv0->AddReply(542705, 45114, 45113);
				return;
			}
			if (a0 == 45114) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542706);
				tv0->ClearReplies();
				tv0->AddReply(542707, 43523, 45115);
				return;
			}
			if (a0 == 45117) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542708);
				tv0->ClearReplies();
				tv0->AddReply(542709, 45119, 45118);
				return;
			}
			if (a0 == 45119) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542710);
				tv0->ClearReplies();
				tv0->AddReply(542711, 45122, 45120);
				tv0->AddReply(542712, 45122, 45121);
				return;
			}
			if (a0 == 45122) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542713);
				tv0->ClearReplies();
				tv0->AddReply(542714, 45125, 45123);
				return;
			}
			if (a0 == 45125) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542715);
				tv0->ClearReplies();
				tv0->AddReply(542716, 43523, 45126);
				tv0->AddReply(542717, -1, 45127);
				return;
			}
			if (a0 == 43513) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541365);
				tv0->ClearReplies();
				tv0->AddReply(541366, 43515, 43514);
				tv0->AddReply(541372, 43523, 43521);
				tv0->AddReply(542718, 45130, 45129);
				return;
			}
			if (a0 == 45130) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542719);
				tv0->ClearReplies();
				tv0->AddReply(542736, 45151, 45150);
				return;
			}
			if (a0 == 45151) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542737);
				tv0->ClearReplies();
				tv0->AddReply(542738, 45153, 45152);
				return;
			}
			if (a0 == 45153) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542739);
				tv0->ClearReplies();
				tv0->AddReply(542720, 45132, 45131);
				return;
			}
			if (a0 == 45132) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542721);
				tv0->ClearReplies();
				if (f_5fe_a1_b(tv1)) {
					tv0->AddReply(542722, 45134, 45133);
				}
				tv0->AddReply(542733, 45147, 45146);
				return;
			}
			if (a0 == 45147) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542734);
				tv0->ClearReplies();
				tv0->AddReply(542735, 43523, 45148);
				return;
			}
			if (a0 == 45134) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542723);
				tv0->ClearReplies();
				tv0->AddReply(542724, 45136, 45135);
				return;
			}
			if (a0 == 45136) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542725);
				tv0->ClearReplies();
				tv0->AddReply(542726, 45138, 45137);
				tv0->AddReply(542732, 45138, 45144);
				return;
			}
			if (a0 == 45138) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542727);
				tv0->ClearReplies();
				tv0->AddReply(542728, 45140, 45139);
				return;
			}
			if (a0 == 45140) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(542729);
				tv0->ClearReplies();
				tv0->AddReply(542730, 43523, 45141);
				tv0->AddReply(542731, -1, 45143);
				return;
			}
			if (a0 == 43523) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541374);
				tv0->ClearReplies();
				tv0->AddReply(541375, -1, 43525);
				tv0->AddReply(541376, -1, 43526);
				return;
			}
			if (a0 == 43515) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(541367);
				tv0->ClearReplies();
				tv0->AddReply(541371, -1, 43520);
				return;
			}
			tv3 = true;
			if (f_623_a0_b()) {
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
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;
	var bool tv5;
	var bool tv6;

	void init(void)
	{
		f_40a_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_490_a0_v();
		t0{a0};
	}

	void f_40a_a2_v(float a0, float a1)
	{
		tv6 = false;
		for (; ; ) {
			float L0;
			bool L1;
			@rand(L0, 3);
			@Sleep(L0 + 3, L1);
			tv6 = true;
			f_44f_a2_v(a0, a1);
			tv6 = false;
		}
	}

	void f_41c_a0_v(void)
	{
		tv5 = true;
		if (!f_4fc_a0_b() && f_44d_a0_b()) {
			@RemoveActor(f_589_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_41c_a0_v();
		}
	}

	void OnUnload(void)
	{
		if (tv6) {
			f_490_a0_v();
		}
		if (tv5 && f_44d_a0_b()) {
			@RemoveActor(f_589_a0_o());
		}
	}

	bool f_44d_a0_b(void)
	{
		return true;
	}

	void f_44f_a2_v(float a0, float a1)
	{
		if (!f_4fc_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_49e_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_46a_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_4f4_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_46a_a0_b()) {
				if (!tv2) {
					f_577_a1_v(tv4);
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

	void f_490_a0_v(void)
	{
		f_4ef_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_49e_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_4fc_a0_b()) {
		return;
	}
	L0 = f_5b6_a0_i();
	for (L1 = 0; L1 < 5 && f_4fc_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_5af_a1_s(L3));
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
		if (!f_4ed_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_4ed_a0_b(void)
{
	return true;
}

void f_4ef_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_4f4_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_4fc_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_501_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_58f_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_623_a0_b()) {
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

void f_546_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_623_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_558_a1_v(string a0)
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

void f_568_a2_v(string a0, bool a1)
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

void f_577_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_582_a0_v(void)
{
	if (f_623_a0_b()) {
		@lshStopSpeech();
	}
}

object f_589_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_58f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_599_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_59e_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

string f_5af_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_5b6_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_5af_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_5c7_a2_v(object a0, object a1)
{
	f_59e_a2_v("itheater@door1", false);
}

void f_5ce_a2_v(object a0, object a1)
{
	@SetVariable("ook12TBirdmask1", 1);
}

void f_5d4_a2_v(object a0, object a1)
{
	@SetVariable("ook12TBirdmask2", 1);
}

bool f_5da_a1_b(object a0)
{
	if (f_599_a1_i("k12DankoVisit") != 0) {
		return true;
	}
	return false;
}

bool f_5e6_a1_b(object a0)
{
	if (f_599_a1_i("ook12TBirdmask1") == 0) {
		return true;
	}
	return false;
}

bool f_5f2_a1_b(object a0)
{
	if (f_599_a1_i("ook12TBirdmask2") == 0) {
		return true;
	}
	return false;
}

bool f_5fe_a1_b(object a0)
{
	if (f_599_a1_i("k12BurahVisit") != 0) {
		return true;
	}
	return false;
}

int f_60a_a0_i(void)
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

int f_61b_a0_i(void)
{
	return 515571;
}

int f_61d_a0_i(void)
{
	return 504029;
}

string f_61f_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_621_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_623_a0_b(void)
{
	return false;
}

