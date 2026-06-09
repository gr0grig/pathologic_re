event OnLoad 5;
event evt_11 11;
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
		} while (!f_5fd_a0_b());
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
		f_657_a1_b(f_704_a0_o());
		if (!f_602_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_74e_a0_i());
		L0->SetNPCDescription(f_74c_a0_i());
		L0->SetPhoto(f_750_a0_s());
		L0->SetPhoto2(f_752_a0_s());
		L0->SetPlayerName(f_7df_a0_i());
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
		f_646_a1_v(a0);
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
			f_93_a1_v("Neutral");
			tv0->SetMessage(525507);
			tv0->ClearReplies();
			tv0->AddReply(525508, 30772, 26864);
			break;
			return;
		}
		if (f_754_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6e1_a1_v(tv2);
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

	void f_93_a1_v(string a0)
	{
		if (!f_754_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6e8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_6fd_a0_v();
			if (a0 == 26863) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(525507);
				tv0->ClearReplies();
				tv0->AddReply(525508, 30772, 26864);
				return;
			}
			if (a0 == 30772) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(529318);
				tv0->ClearReplies();
				tv0->AddReply(529319, -1, 30773);
				tv0->AddReply(529320, -1, 30774);
				return;
			}
			tv3 = true;
			if (f_754_a0_b()) {
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
		f_657_a1_b(f_704_a0_o());
		if (!f_602_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_74e_a0_i());
		L0->SetNPCDescription(f_74c_a0_i());
		L0->SetPhoto(f_750_a0_s());
		L0->SetPhoto2(f_752_a0_s());
		L0->SetPlayerName(f_7df_a0_i());
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
		f_646_a1_v(a0);
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
			f_184_a1_v("Neutral");
			tv0->SetMessage(526405);
			tv0->ClearReplies();
			if (f_777_a1_b(tv1)) {
				tv0->AddReply(526406, 27682, 27681);
			}
			if (f_783_a1_b(tv1)) {
				tv0->AddReply(526420, 27696, 27695);
			}
			tv0->AddReply(526411, -1, 27686);
			tv0->AddReply(529012, -1, 30452);
			break;
			return;
		}
		if (f_754_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6e1_a1_v(tv2);
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

	void f_184_a1_v(string a0)
	{
		if (!f_754_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6e8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_6fd_a0_v();
			if (a1 == 27685) {
				f_756_a2_v(tv1, tv0);
			}
			if (a1 == 30467) {
				f_76d_a2_v(tv1, tv0);
			}
			if (a1 == 30471) {
				f_76d_a2_v(tv1, tv0);
			}
			if (a1 == 27703) {
				f_75f_a2_v(tv1, tv0);
			}
			if (a1 == 30462) {
				f_76d_a2_v(tv1, tv0);
			}
			if (a0 == 27680) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(526405);
				tv0->ClearReplies();
				if (f_777_a1_b(tv1)) {
					tv0->AddReply(526406, 27682, 27681);
				}
				if (f_783_a1_b(tv1)) {
					tv0->AddReply(526420, 27696, 27695);
				}
				tv0->AddReply(526411, -1, 27686);
				tv0->AddReply(529012, -1, 30452);
				return;
			}
			if (a0 == 27696) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(526421);
				tv0->ClearReplies();
				tv0->AddReply(526422, 30457, 27697);
				return;
			}
			if (a0 == 30457) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(529017);
				tv0->ClearReplies();
				tv0->AddReply(529018, 27698, 30458);
				return;
			}
			if (a0 == 27698) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(526423);
				tv0->ClearReplies();
				tv0->AddReply(529019, 30464, 30459);
				tv0->AddReply(529020, 30468, 30460);
				tv0->AddReply(526424, 30461, 27699);
				return;
			}
			if (a0 == 30461) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(529021);
				tv0->ClearReplies();
				tv0->AddReply(529023, 30472, 30463);
				tv0->AddReply(529022, -1, 30462);
				return;
			}
			if (a0 == 30472) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(529032);
				tv0->ClearReplies();
				tv0->AddReply(529033, 27700, 30473);
				return;
			}
			if (a0 == 27700) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(526425);
				tv0->ClearReplies();
				tv0->AddReply(526426, 27702, 27701);
				return;
			}
			if (a0 == 27702) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(526427);
				tv0->ClearReplies();
				tv0->AddReply(526428, -1, 27703);
				return;
			}
			if (a0 == 30468) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(529028);
				tv0->ClearReplies();
				tv0->AddReply(529029, 30470, 30469);
				return;
			}
			if (a0 == 30470) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(529030);
				tv0->ClearReplies();
				tv0->AddReply(529031, -1, 30471);
				return;
			}
			if (a0 == 30464) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(529024);
				tv0->ClearReplies();
				tv0->AddReply(529025, 30466, 30465);
				return;
			}
			if (a0 == 30466) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(529026);
				tv0->ClearReplies();
				tv0->AddReply(529027, -1, 30467);
				return;
			}
			if (a0 == 27682) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(526407);
				tv0->ClearReplies();
				tv0->AddReply(526408, 30453, 27683);
				return;
			}
			if (a0 == 30453) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(529013);
				tv0->ClearReplies();
				tv0->AddReply(529014, 27684, 30454);
				return;
			}
			if (a0 == 27684) {
				f_184_a1_v("Neutral");
				tv0->SetMessage(526409);
				tv0->ClearReplies();
				tv0->AddReply(526410, -1, 27685);
				return;
			}
			tv3 = true;
			if (f_754_a0_b()) {
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
		f_657_a1_b(f_704_a0_o());
		if (!f_602_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_74e_a0_i());
		L0->SetNPCDescription(f_74c_a0_i());
		L0->SetPhoto(f_750_a0_s());
		L0->SetPhoto2(f_752_a0_s());
		L0->SetPlayerName(f_7df_a0_i());
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
		f_646_a1_v(a0);
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
			f_39b_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_754_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6e1_a1_v(tv2);
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

	void f_39b_a1_v(string a0)
	{
		if (!f_754_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6e8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_6fd_a0_v();
			if (a0 == 36960) {
				f_39b_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_39b_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_39b_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_754_a0_b()) {
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
		f_657_a1_b(f_704_a0_o());
		if (!f_602_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_74e_a0_i());
		L0->SetNPCDescription(f_74c_a0_i());
		L0->SetPhoto(f_750_a0_s());
		L0->SetPhoto2(f_752_a0_s());
		L0->SetPlayerName(f_7df_a0_i());
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
		f_646_a1_v(a0);
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
			f_499_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_754_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6e1_a1_v(tv2);
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

	void f_499_a1_v(string a0)
	{
		if (!f_754_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6e8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_6fd_a0_v();
			if (a0 == 42548) {
				f_499_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_754_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t9
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_4e0_a0_v();
	}

	void f_4e0_a0_v(void)
	{
		if (!f_5fd_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_596_a0_v();
		}
	}

	bool f_4f4_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_5f4_a1_b(L0);
	}

	void f_503_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_508_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_5e2_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_51e_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_527_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_527_a0_v();
			if (f_5fd_a0_b() && f_508_a0_b()) {
				if (f_4f4_a0_b()) {
					f_691_a1_b(f_704_a0_o());
				}
			} else {
				f_503_a0_v();
				f_51e_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_5dd_a0_v();
		f_527_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_527_a0_v();
		f_6e1_a1_v("Neutral");
		f_51e_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_51e_a0_v();
		} else {
			f_6e1_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_5dd_a0_v();
			f_5f4_a1_b(a0);
			enable OnUse;
			f_7f0_a1_v(a0);
			f_6e1_a1_v("Neutral");
			f_527_a0_v();
			f_51e_a0_v();
		}
	}
}

void f_596_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_5fd_a0_b()) {
		return;
	}
	L0 = f_73b_a0_i();
	for (L1 = 0; L1 < 5 && f_5fd_a0_b(); L1++) {
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
			@PlayAnimation("all", f_734_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_5db_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_5db_a0_b(void)
{
	return true;
}

void f_5dd_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_5e2_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_5ea_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_5f4_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_5ea_a1_b(L0);
}

bool f_5fd_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_602_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_70a_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_754_a0_b()) {
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

void f_646_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_754_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_657_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_691_a1_b(a0)) {
			if (!f_6b6_a1_b(a0)) {
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
		if (!f_6b6_a1_b(a0)) {
			if (!f_691_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_691_a1_b(object a0)
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
	return f_6ee_a1_b(L4);
}

bool f_6b6_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_725_a0_i() + "m";
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
	return f_6ee_a1_b(L4);
}

void f_6e1_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_6e8_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_6ee_a1_b(string a0)
{
	if (f_754_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_6fd_a0_v(void)
{
	if (f_754_a0_b()) {
		@lshStopSpeech();
	}
}

object f_704_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_70a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_714_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_719_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_725_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_72e_a1_b(int a0)
{
	return f_725_a0_i() == a0;
}

string f_734_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_73b_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_734_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_74c_a0_i(void)
{
	return 515545;
}

int f_74e_a0_i(void)
{
	return 502870;
}

string f_750_a0_s(void)
{
	return "ui/NPC_Mat.png";
}

string f_752_a0_s(void)
{
	return "ui/NPC_Mat_b.png";
}

bool f_754_a0_b(void)
{
	return true;
}

void f_756_a2_v(object a0, object a1)
{
	@SetVariable("k8q01", 2);
	f_79c_a0_v();
}

void f_75f_a2_v(object a0, object a1)
{
	@SetVariable("k8q01", 4);
	f_7a9_a0_v();
	f_719_a2_b("quest_k8_01", "unlock_boiny");
}

void f_76d_a2_v(object a0, object a1)
{
	f_78f_a0_v();
	f_719_a2_b("quest_k8_01", "fail");
}

bool f_777_a1_b(object a0)
{
	if (f_714_a1_i("k8q01") == 1) {
		return true;
	}
	return false;
}

bool f_783_a1_b(object a0)
{
	if (f_714_a1_i("k8q01") == 3) {
		return true;
	}
	return false;
}

void f_78f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 530, 1, 530194);
	f_7c3_a2_b(L0, 438);
}

void f_79c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 440, 1, 526465);
	f_7c3_a2_b(L0, 438);
}

void f_7a9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 442, 1, 526467);
	f_7c3_a2_b(L0, 438);
}

object f_7b6_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_7c3_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_7b6_a0_o();
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

int f_7df_a0_i(void)
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

void f_7f0_a1_v(object a0)
{
	if (!g1) {
		t1{a0};
		g1 = true;
	}
	if (f_72e_a1_b(8)) {
		t3{a0};
		return;
	}
	if (f_72e_a1_b(12)) {
		t5{a0};
		return;
	}
	t7{a0};
}

