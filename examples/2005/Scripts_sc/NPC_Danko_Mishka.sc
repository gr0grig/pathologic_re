event OnLoad 5;
event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_644_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
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
		f_69e_a1_b(f_74b_a0_o());
		if (!f_649_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_789_a0_i());
		L0->SetNPCDescription(f_787_a0_i());
		L0->SetPhoto(f_78b_a0_s());
		L0->SetPhoto2(f_78d_a0_s());
		L0->SetPlayerName(f_7b5_a0_i());
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
		f_68d_a1_v(a0);
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
			f_9d_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_78f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_728_a1_v(tv2);
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
		if (!f_78f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_72f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_744_a0_v();
			if (a0 == 36960) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_78f_a0_b()) {
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
		f_69e_a1_b(f_74b_a0_o());
		if (!f_649_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_789_a0_i());
		L0->SetNPCDescription(f_787_a0_i());
		L0->SetPhoto(f_78b_a0_s());
		L0->SetPhoto2(f_78d_a0_s());
		L0->SetPlayerName(f_7b5_a0_i());
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
		f_68d_a1_v(a0);
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
			f_797_a2_v(tv1, tv0);
			f_1a5_a1_v("Neutral");
			tv0->SetMessage(500457);
			tv0->ClearReplies();
			tv0->AddReply(500458, 530, 527);
			tv0->AddReply(500459, 532, 528);
			tv0->AddReply(500460, 530, 529);
			break;
			return;
		}
		if (f_78f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_728_a1_v(tv2);
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

	void f_1a5_a1_v(string a0)
	{
		if (!f_78f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_72f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_744_a0_v();
			if (a0 == 526) {
				f_797_a2_v(tv1, tv0);
				f_1a5_a1_v("Neutral");
				tv0->SetMessage(500457);
				tv0->ClearReplies();
				tv0->AddReply(500458, 530, 527);
				tv0->AddReply(500459, 532, 528);
				tv0->AddReply(500460, 530, 529);
				return;
			}
			if (a0 == 532) {
				f_1a5_a1_v("Neutral");
				tv0->SetMessage(500462);
				tv0->ClearReplies();
				tv0->AddReply(500466, 538, 536);
				tv0->AddReply(500467, -1, 537);
				return;
			}
			if (a0 == 538) {
				f_1a5_a1_v("Neutral");
				tv0->SetMessage(500468);
				tv0->ClearReplies();
				tv0->AddReply(500470, -1, 540);
				tv0->AddReply(500471, -1, 541);
				return;
			}
			if (a0 == 530) {
				f_1a5_a1_v("Neutral");
				tv0->SetMessage(500461);
				tv0->ClearReplies();
				tv0->AddReply(500463, 535, 533);
				tv0->AddReply(500464, -1, 534);
				return;
			}
			if (a0 == 535) {
				f_1a5_a1_v("Neutral");
				tv0->SetMessage(500465);
				tv0->ClearReplies();
				tv0->AddReply(506269, -1, 6939);
				return;
			}
			tv3 = true;
			if (f_78f_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t5
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_69e_a1_b(f_74b_a0_o());
		if (!f_649_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_789_a0_i());
		L0->SetNPCDescription(f_787_a0_i());
		L0->SetPhoto(f_78b_a0_s());
		L0->SetPhoto2(f_78d_a0_s());
		L0->SetPlayerName(f_7b5_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t6{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_68d_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t6
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
			f_2cc_a1_v("Neutral");
			tv0->SetMessage(510004);
			tv0->ClearReplies();
			tv0->AddReply(510015, -1, 11037);
			break;
			return;
		}
		if (f_78f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_728_a1_v(tv2);
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

	void f_2cc_a1_v(string a0)
	{
		if (!f_78f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_72f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_744_a0_v();
			if (a0 == 11026) {
				f_2cc_a1_v("Neutral");
				tv0->SetMessage(510004);
				tv0->ClearReplies();
				tv0->AddReply(510015, -1, 11037);
				return;
			}
			tv3 = true;
			if (f_78f_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t7
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_69e_a1_b(f_74b_a0_o());
		if (!f_649_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_789_a0_i());
		L0->SetNPCDescription(f_787_a0_i());
		L0->SetPhoto(f_78b_a0_s());
		L0->SetPhoto2(f_78d_a0_s());
		L0->SetPlayerName(f_7b5_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t8{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_68d_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t8
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
			f_3a0_a1_v("Neutral");
			tv0->SetMessage(512800);
			tv0->ClearReplies();
			if (f_79d_a1_b(tv1) && f_7a9_a1_b(tv1)) {
				tv0->AddReply(512801, 14001, 14000);
			}
			tv0->AddReply(512813, -1, 14013);
			break;
			return;
		}
		if (f_78f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_728_a1_v(tv2);
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

	void f_3a0_a1_v(string a0)
	{
		if (!f_78f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_72f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_744_a0_v();
			if (a1 == 14011) {
				f_791_a2_v(tv1, tv0);
			}
			if (a0 == 13999) {
				f_3a0_a1_v("Neutral");
				tv0->SetMessage(512800);
				tv0->ClearReplies();
				if (f_79d_a1_b(tv1) && f_7a9_a1_b(tv1)) {
					tv0->AddReply(512801, 14001, 14000);
				}
				tv0->AddReply(512813, -1, 14013);
				return;
			}
			if (a0 == 14001) {
				f_3a0_a1_v("Neutral");
				tv0->SetMessage(512802);
				tv0->ClearReplies();
				tv0->AddReply(512803, 14003, 14002);
				return;
			}
			if (a0 == 14003) {
				f_3a0_a1_v("Neutral");
				tv0->SetMessage(512804);
				tv0->ClearReplies();
				tv0->AddReply(512805, 14005, 14004);
				tv0->AddReply(512808, 14005, 14007);
				return;
			}
			if (a0 == 14005) {
				f_3a0_a1_v("Neutral");
				tv0->SetMessage(512806);
				tv0->ClearReplies();
				tv0->AddReply(512807, 14008, 14006);
				return;
			}
			if (a0 == 14008) {
				f_3a0_a1_v("Neutral");
				tv0->SetMessage(512809);
				tv0->ClearReplies();
				tv0->AddReply(512810, 14010, 14009);
				return;
			}
			if (a0 == 14010) {
				f_3a0_a1_v("Neutral");
				tv0->SetMessage(512811);
				tv0->ClearReplies();
				tv0->AddReply(512812, -1, 14011);
				return;
			}
			tv3 = true;
			if (f_78f_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t9
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_69e_a1_b(f_74b_a0_o());
		if (!f_649_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_789_a0_i());
		L0->SetNPCDescription(f_787_a0_i());
		L0->SetPhoto(f_78b_a0_s());
		L0->SetPhoto2(f_78d_a0_s());
		L0->SetPlayerName(f_7b5_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t10{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_68d_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t10
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
			f_4e0_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_78f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_728_a1_v(tv2);
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

	void f_4e0_a1_v(string a0)
	{
		if (!f_78f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_72f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_744_a0_v();
			if (a0 == 42557) {
				f_4e0_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_78f_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t11
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_527_a0_v();
	}

	void f_527_a0_v(void)
	{
		if (!f_644_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_5dd_a0_v();
		}
	}

	bool f_53b_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_63b_a1_b(L0);
	}

	void f_54a_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_54f_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_629_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_565_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_56e_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_56e_a0_v();
			if (f_644_a0_b() && f_54f_a0_b()) {
				if (f_53b_a0_b()) {
					f_6d8_a1_b(f_74b_a0_o());
				}
			} else {
				f_54a_a0_v();
				f_565_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_624_a0_v();
		f_56e_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_56e_a0_v();
		f_728_a1_v("Neutral");
		f_565_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_565_a0_v();
		} else {
			f_728_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_624_a0_v();
			f_63b_a1_b(a0);
			enable OnUse;
			f_7c6_a1_v(a0);
			f_728_a1_v("Neutral");
			f_56e_a0_v();
			f_565_a0_v();
		}
	}
}

void f_5dd_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_644_a0_b()) {
		return;
	}
	L0 = f_776_a0_i();
	for (L1 = 0; L1 < 5 && f_644_a0_b(); L1++) {
		if (!L0) {
			bool L2;
			@Sleep(3, L2);
			if (!L2) {
				break;
			}
		} else {
			int L3;
			int L4;
			bool L5;
			@irand(L3, L0);
			@irand(L4, 5);
			if (L4 != 0) {
				L3 = 0;
			}
			@PlayAnimation("all", f_76f_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_622_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_622_a0_b(void)
{
	return true;
}

void f_624_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_629_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_631_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_63b_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_631_a1_b(L0);
}

bool f_644_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_649_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_751_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_78f_a0_b()) {
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

void f_68d_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_78f_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_69e_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_6d8_a1_b(a0)) {
			if (!f_6fd_a1_b(a0)) {
				return false;
			}
		}
		@irand(L1, 2);
		if (L1) {
			@SetVariable("voice_common", (L0 + 1) % 3);
		} else {
			@SetVariable("voice_common", 0);
		}
	} else {
		if (!f_6fd_a1_b(a0)) {
			if (!f_6d8_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_6d8_a1_b(object a0)
{
	string L0;
	L0 = "c";
	int L1;
	L1 = 0;
	while (1) {
		bool L2;
		a0->HasProperty(L0 + (L1 + 1), L2);
		if (!L2) {
			break;
		}
		L1 = L1 + 1;
	}
	if (!L1) {
		return false;
	}
	int L3;
	L3 = 0;
	if (L1 > 1) {
		@irand(L3, L1);
	}
	string L4;
	a0->GetProperty(L0 + (L3 + 1), L4);
	return f_735_a1_b(L4);
}

bool f_6fd_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_760_a0_i() + "m";
	int L1;
	L1 = 0;
	while (1) {
		bool L2;
		a0->HasProperty(L0 + (L1 + 1), L2);
		if (!L2) {
			break;
		}
		L1 = L1 + 1;
	}
	if (!L1) {
		return false;
	}
	int L3;
	L3 = 0;
	if (L1 > 1) {
		@irand(L3, L1);
	}
	string L4;
	a0->GetProperty(L0 + (L3 + 1), L4);
	return f_735_a1_b(L4);
}

void f_728_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_72f_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_735_a1_b(string a0)
{
	if (f_78f_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_744_a0_v(void)
{
	if (f_78f_a0_b()) {
		@lshStopSpeech();
	}
}

object f_74b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_751_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_75b_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_760_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_769_a1_b(int a0)
{
	return f_760_a0_i() == a0;
}

string f_76f_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_776_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_76f_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_787_a0_i(void)
{
	return 515546;
}

int f_789_a0_i(void)
{
	return 502871;
}

string f_78b_a0_s(void)
{
	return "ui/NPC_Mishka.png";
}

string f_78d_a0_s(void)
{
	return "ui/NPC_Mishka_b.png";
}

bool f_78f_a0_b(void)
{
	return true;
}

void f_791_a2_v(object a0, object a1)
{
	@SetVariable("ood6Mishka1", 1);
}

void f_797_a2_v(object a0, object a1)
{
	@SetVariable("KnowMishka", 1);
}

bool f_79d_a1_b(object a0)
{
	if (f_75b_a1_i("d6q01") == 4) {
		return true;
	}
	return false;
}

bool f_7a9_a1_b(object a0)
{
	if (f_75b_a1_i("ood6Mishka1") == 0) {
		return true;
	}
	return false;
}

int f_7b5_a0_i(void)
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

void f_7c6_a1_v(object a0)
{
	if (!g1) {
		t3{a0};
		g1 = true;
	}
	if (f_769_a1_b(3)) {
		t5{a0};
		return;
	}
	if (f_769_a1_b(6)) {
		t7{a0};
		return;
	}
	if (f_769_a1_b(12)) {
		t1{a0};
		return;
	}
	t9{a0};
}

