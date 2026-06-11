event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
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
		if (!f_568_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_6bc_a0_i());
		L0->SetNPCDescription(f_6ba_a0_i());
		L0->SetPhoto(f_6be_a0_s());
		L0->SetPhoto2(f_6c0_a0_s());
		L0->SetPlayerName(f_70f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_5bf_a1_b(f_67e_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_5ad_a1_v(a0);
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
			f_95_a1_v("Neutral");
			tv0->SetMessage(526521);
			tv0->ClearReplies();
			if (f_6cd_a1_b(tv1)) {
				tv0->AddReply(526522, 27789, 27788);
			}
			tv0->AddReply(526525, -1, 27791);
			tv0->AddReply(541603, -1, 43771);
			break;
			return;
		}
		if (f_6c2_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_649_a1_v(tv2);
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

	void f_95_a1_v(string a0)
	{
		if (!f_6c2_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_659_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_677_a0_v();
			if (a1 == 30413) {
				f_6c4_a2_v(tv1, tv0);
			}
			if (a0 == 27787) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(526521);
				tv0->ClearReplies();
				if (f_6cd_a1_b(tv1)) {
					tv0->AddReply(526522, 27789, 27788);
				}
				tv0->AddReply(526525, -1, 27791);
				tv0->AddReply(541603, -1, 43771);
				return;
			}
			if (a0 == 27789) {
				f_95_a1_v("Doubt");
				tv0->SetMessage(526523);
				tv0->ClearReplies();
				tv0->AddReply(526524, 30396, 27790);
				tv0->AddReply(528967, 30396, 30402);
				return;
			}
			if (a0 == 30396) {
				f_95_a1_v("Doubt");
				tv0->SetMessage(528961);
				tv0->ClearReplies();
				tv0->AddReply(528962, 30398, 30397);
				return;
			}
			if (a0 == 30398) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(528963);
				tv0->ClearReplies();
				tv0->AddReply(528964, 30400, 30399);
				return;
			}
			if (a0 == 30400) {
				f_95_a1_v("Grin");
				tv0->SetMessage(528965);
				tv0->ClearReplies();
				tv0->AddReply(528968, 30405, 30404);
				return;
			}
			if (a0 == 30405) {
				f_95_a1_v("Doubt");
				tv0->SetMessage(528969);
				tv0->ClearReplies();
				tv0->AddReply(528970, 30407, 30406);
				return;
			}
			if (a0 == 30407) {
				f_95_a1_v("Questioning");
				tv0->SetMessage(528971);
				tv0->ClearReplies();
				tv0->AddReply(528966, 30411, 30401);
				tv0->AddReply(528972, 30409, 30408);
				return;
			}
			if (a0 == 30409) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(528973);
				tv0->ClearReplies();
				tv0->AddReply(528974, 30411, 30410);
				return;
			}
			if (a0 == 30411) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(528975);
				tv0->ClearReplies();
				tv0->AddReply(528976, -1, 30413);
				return;
			}
			tv3 = true;
			if (f_6c2_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t2
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_568_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_6bc_a0_i());
		L0->SetNPCDescription(f_6ba_a0_i());
		L0->SetPhoto(f_6be_a0_s());
		L0->SetPhoto2(f_6c0_a0_s());
		L0->SetPlayerName(f_70f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_5bf_a1_b(f_67e_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_5ad_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t3
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
			f_20c_a1_v("Neutral");
			tv0->SetMessage(529675);
			tv0->ClearReplies();
			tv0->AddReply(529676, 43773, 31139);
			tv0->AddReply(541604, 43774, 43772);
			break;
			return;
		}
		if (f_6c2_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_649_a1_v(tv2);
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

	void f_20c_a1_v(string a0)
	{
		if (!f_6c2_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_659_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_677_a0_v();
			if (a0 == 31138) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(529675);
				tv0->ClearReplies();
				tv0->AddReply(529676, 43773, 31139);
				tv0->AddReply(541604, 43774, 43772);
				return;
			}
			if (a0 == 43774) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(541606);
				tv0->ClearReplies();
				tv0->AddReply(541607, 43773, 43775);
				tv0->AddReply(541608, 43773, 43776);
				return;
			}
			if (a0 == 43773) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(541605);
				tv0->ClearReplies();
				tv0->AddReply(541609, -1, 43778);
				tv0->AddReply(541610, -1, 43781);
				return;
			}
			tv3 = true;
			if (f_6c2_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t4
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_568_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_6bc_a0_i());
		L0->SetNPCDescription(f_6ba_a0_i());
		L0->SetPhoto(f_6be_a0_s());
		L0->SetPhoto2(f_6c0_a0_s());
		L0->SetPlayerName(f_70f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_5bf_a1_b(f_67e_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_5ad_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t5
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
			f_30a_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_6c2_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_649_a1_v(tv2);
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

	void f_30a_a1_v(string a0)
	{
		if (!f_6c2_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_659_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_677_a0_v();
			if (a0 == 36960) {
				f_30a_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_30a_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_30a_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_6c2_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t6
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_568_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_6bc_a0_i());
		L0->SetNPCDescription(f_6ba_a0_i());
		L0->SetPhoto(f_6be_a0_s());
		L0->SetPhoto2(f_6c0_a0_s());
		L0->SetPlayerName(f_70f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_5bf_a1_b(f_67e_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_5ad_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t7
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
			f_408_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_6c2_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_649_a1_v(tv2);
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

	void f_408_a1_v(string a0)
	{
		if (!f_6c2_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_659_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_677_a0_v();
			if (a0 == 42554) {
				f_408_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_6c2_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t8
{
	var Vector tv0;

	void init(void)
	{
		f_44c_a0_v();
	}

	void f_44c_a0_v(void)
	{
		if (!f_563_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_4fc_a0_v();
		}
	}

	bool f_45a_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_55a_a1_b(L0);
	}

	void f_469_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_46e_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_548_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_484_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_48d_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_48d_a0_v();
			if (f_563_a0_b() && f_46e_a0_b()) {
				if (f_45a_a0_b()) {
					f_5f9_a1_b(f_67e_a0_o());
				}
			} else {
				f_469_a0_v();
				f_484_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_543_a0_v();
		f_48d_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_48d_a0_v();
		f_649_a1_v("Neutral");
		f_484_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_484_a0_v();
		} else {
			f_649_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_543_a0_v();
			f_55a_a1_b(a0);
			enable OnUse;
			f_720_a1_v(a0);
			f_649_a1_v("Neutral");
			f_48d_a0_v();
			f_484_a0_v();
		}
	}
}

void f_4fc_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_563_a0_b()) {
		return;
	}
	L0 = f_6a9_a0_i();
	for (L1 = 0; L1 < 5 && f_563_a0_b(); L1++) {
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
			@PlayAnimation("all", f_6a2_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_541_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_541_a0_b(void)
{
	return true;
}

void f_543_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_548_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_550_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_55a_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_550_a1_b(L0);
}

bool f_563_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_568_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_684_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_6c2_a0_b()) {
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

void f_5ad_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_6c2_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_5bf_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_5f9_a1_b(a0)) {
			if (!f_61e_a1_b(a0)) {
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
		if (!f_61e_a1_b(a0)) {
			if (!f_5f9_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_5f9_a1_b(object a0)
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
	return f_668_a1_b(L4);
}

bool f_61e_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_693_a0_i() + "m";
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
	return f_668_a1_b(L4);
}

void f_649_a1_v(string a0)
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

void f_659_a2_v(string a0, bool a1)
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

bool f_668_a1_b(string a0)
{
	if (f_6c2_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_677_a0_v(void)
{
	if (f_6c2_a0_b()) {
		@lshStopSpeech();
	}
}

object f_67e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_684_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_68e_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_693_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_69c_a1_b(int a0)
{
	return f_693_a0_i() == a0;
}

string f_6a2_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_6a9_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_6a2_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_6ba_a0_i(void)
{
	return 515536;
}

int f_6bc_a0_i(void)
{
	return 502861;
}

string f_6be_a0_s(void)
{
	return "ui/NPC_Han.png";
}

string f_6c0_a0_s(void)
{
	return "ui/NPC_Han_b.png";
}

bool f_6c2_a0_b(void)
{
	return true;
}

void f_6c4_a2_v(object a0, object a1)
{
	@SetVariable("k9q01", 6);
	f_6d9_a0_v();
}

bool f_6cd_a1_b(object a0)
{
	if (f_68e_a1_i("k9q01") == 5) {
		return true;
	}
	return false;
}

void f_6d9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 523, 1, 529815);
	f_6f3_a2_b(L0, 517);
}

object f_6e6_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_6f3_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_6e6_a0_o();
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

int f_70f_a0_i(void)
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

void f_720_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_han", L0);
	if (!L0) {
		t2{a0};
		@SetVariable("mt_han", 1);
	}
	if (f_69c_a1_b(9)) {
		t0{a0};
		return;
	}
	if (f_69c_a1_b(12)) {
		t4{a0};
		return;
	}
	t6{a0};
}

