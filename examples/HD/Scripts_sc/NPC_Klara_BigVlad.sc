event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;

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
		if (!f_5bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_768_a0_i());
		L0->SetNPCDescription(f_766_a0_i());
		L0->SetPhoto(f_76a_a0_s());
		L0->SetPhoto2(f_76c_a0_s());
		L0->SetPlayerName(f_7a0_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_614_a1_b(f_6d3_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_602_a1_v(a0);
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
			f_9e_a1_v("Neutral");
			tv0->SetMessage(525245);
			tv0->ClearReplies();
			if (f_788_a1_b(tv1) && f_794_a1_b(tv1)) {
				tv0->AddReply(525246, 44478, 26614);
			}
			tv0->AddReply(525249, -1, 26617);
			tv0->AddReply(529151, -1, 30598);
			break;
			return;
		}
		if (f_76e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_69e_a1_v(tv2);
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

	void f_9e_a1_v(string a0)
	{
		if (!f_76e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6ae_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_6cc_a0_v();
			if (a1 == 26614) {
				f_782_a2_v(tv1, tv0);
			}
			if (a1 == 26616) {
				f_770_a2_v(tv1, tv0);
			}
			if (a1 == 44497) {
				f_777_a2_v(tv1, tv0);
			}
			if (a0 == 26613) {
				f_9e_a1_v("Neutral");
				tv0->SetMessage(525245);
				tv0->ClearReplies();
				if (f_788_a1_b(tv1) && f_794_a1_b(tv1)) {
					tv0->AddReply(525246, 44478, 26614);
				}
				tv0->AddReply(525249, -1, 26617);
				tv0->AddReply(529151, -1, 30598);
				return;
			}
			if (a0 == 44478) {
				f_9e_a1_v("Distrust");
				tv0->SetMessage(542162);
				tv0->ClearReplies();
				tv0->AddReply(542163, 30599, 44479);
				tv0->AddReply(542164, 44481, 44480);
				return;
			}
			if (a0 == 44481) {
				f_9e_a1_v("Anger");
				tv0->SetMessage(542165);
				tv0->ClearReplies();
				tv0->AddReply(542169, 30599, 44485);
				tv0->AddReply(542170, -1, 44486);
				return;
			}
			if (a0 == 30599) {
				f_9e_a1_v("Distrust");
				tv0->SetMessage(529152);
				tv0->ClearReplies();
				tv0->AddReply(529153, 30601, 30600);
				tv0->AddReply(529155, 30601, 30602);
				return;
			}
			if (a0 == 30601) {
				f_9e_a1_v("Anger");
				tv0->SetMessage(529154);
				tv0->ClearReplies();
				tv0->AddReply(529156, 26615, 30604);
				tv0->AddReply(529157, 44482, 30605);
				return;
			}
			if (a0 == 44482) {
				f_9e_a1_v("Distrust");
				tv0->SetMessage(542166);
				tv0->ClearReplies();
				tv0->AddReply(542167, 26615, 44483);
				tv0->AddReply(542168, 44494, 44484);
				return;
			}
			if (a0 == 26615) {
				f_9e_a1_v("Anger");
				tv0->SetMessage(525247);
				tv0->ClearReplies();
				tv0->AddReply(542171, 44494, 44488);
				tv0->AddReply(542176, 44494, 44493);
				return;
			}
			if (a0 == 44494) {
				f_9e_a1_v("Repentance");
				tv0->SetMessage(542177);
				tv0->ClearReplies();
				tv0->AddReply(525248, -1, 26616);
				tv0->AddReply(542178, -1, 44497);
				return;
			}
			tv3 = true;
			if (f_76e_a0_b()) {
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
		if (!f_5bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_768_a0_i());
		L0->SetNPCDescription(f_766_a0_i());
		L0->SetPhoto(f_76a_a0_s());
		L0->SetPhoto2(f_76c_a0_s());
		L0->SetPlayerName(f_7a0_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_614_a1_b(f_6d3_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_602_a1_v(a0);
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
			f_235_a1_v("Neutral");
			tv0->SetMessage(525468);
			tv0->ClearReplies();
			tv0->AddReply(525469, 30746, 26825);
			tv0->AddReply(542158, 44475, 44474);
			break;
			return;
		}
		if (f_76e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_69e_a1_v(tv2);
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

	void f_235_a1_v(string a0)
	{
		if (!f_76e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6ae_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_6cc_a0_v();
			if (a0 == 26824) {
				f_235_a1_v("Neutral");
				tv0->SetMessage(525468);
				tv0->ClearReplies();
				tv0->AddReply(525469, 30746, 26825);
				tv0->AddReply(542158, 44475, 44474);
				return;
			}
			if (a0 == 44475) {
				f_235_a1_v("Neutral");
				tv0->SetMessage(542159);
				tv0->ClearReplies();
				tv0->AddReply(542160, -1, 44476);
				tv0->AddReply(542161, -1, 44477);
				return;
			}
			if (a0 == 30746) {
				f_235_a1_v("Neutral");
				tv0->SetMessage(529292);
				tv0->ClearReplies();
				tv0->AddReply(529293, -1, 30747);
				tv0->AddReply(529294, -1, 30748);
				return;
			}
			tv3 = true;
			if (f_76e_a0_b()) {
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
		if (!f_5bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_768_a0_i());
		L0->SetNPCDescription(f_766_a0_i());
		L0->SetPhoto(f_76a_a0_s());
		L0->SetPhoto2(f_76c_a0_s());
		L0->SetPlayerName(f_7a0_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_614_a1_b(f_6d3_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_602_a1_v(a0);
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
			f_333_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_76e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_69e_a1_v(tv2);
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

	void f_333_a1_v(string a0)
	{
		if (!f_76e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6ae_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_6cc_a0_v();
			if (a0 == 36960) {
				f_333_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_333_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_333_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_76e_a0_b()) {
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
		if (!f_5bd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_768_a0_i());
		L0->SetNPCDescription(f_766_a0_i());
		L0->SetPhoto(f_76a_a0_s());
		L0->SetPhoto2(f_76c_a0_s());
		L0->SetPlayerName(f_7a0_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_614_a1_b(f_6d3_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_602_a1_v(a0);
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
			f_431_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_76e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_69e_a1_v(tv2);
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

	void f_431_a1_v(string a0)
	{
		if (!f_76e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6ae_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_6cc_a0_v();
			if (a0 == 42554) {
				f_431_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_76e_a0_b()) {
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
		g1 = false;
		f_478_a0_v();
	}

	void f_478_a0_v(void)
	{
		if (!f_5b8_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_528_a0_v();
		}
	}

	bool f_486_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_5af_a1_b(L0);
	}

	void f_495_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_49a_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_574_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_4b0_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_4b9_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_4b9_a0_v();
			if (f_5b8_a0_b() && f_49a_a0_b()) {
				if (f_486_a0_b()) {
					f_64e_a1_b(f_6d3_a0_o());
				}
			} else {
				f_495_a0_v();
				f_4b0_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_56f_a0_v();
		f_4b9_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_4b9_a0_v();
		f_69e_a1_v("Neutral");
		f_4b0_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_4b0_a0_v();
		} else {
			f_69e_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_56f_a0_v();
			f_5af_a1_b(a0);
			enable OnUse;
			f_7b1_a1_v(a0);
			f_69e_a1_v("Neutral");
			f_4b9_a0_v();
			f_4b0_a0_v();
		}
	}
}

void f_528_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_5b8_a0_b()) {
		return;
	}
	L0 = f_755_a0_i();
	for (L1 = 0; L1 < 5 && f_5b8_a0_b(); L1++) {
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
			@PlayAnimation("all", f_74e_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_56d_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_56d_a0_b(void)
{
	return true;
}

void f_56f_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_574_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_57c_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_588_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_57c_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_6e3_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_59e_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_5a5_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_5af_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_5a5_a1_b(L0);
}

bool f_5b8_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_5bd_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_6d9_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_76e_a0_b()) {
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

void f_602_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_76e_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_614_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_64e_a1_b(a0)) {
			if (!f_673_a1_b(a0)) {
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
		if (!f_673_a1_b(a0)) {
			if (!f_64e_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_64e_a1_b(object a0)
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
	return f_6bd_a1_b(L4);
}

bool f_673_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_73f_a0_i() + "m";
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
	return f_6bd_a1_b(L4);
}

void f_69e_a1_v(string a0)
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

void f_6ae_a2_v(string a0, bool a1)
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

bool f_6bd_a1_b(string a0)
{
	if (f_76e_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_6cc_a0_v(void)
{
	if (f_76e_a0_b()) {
		@lshStopSpeech();
	}
}

object f_6d3_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_6d9_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_6e3_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_6ee_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_6f3_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_6ff_a2_v(object a0, int a1)
{
	f_59e_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_6f3_a2_v(L0, a1);
	}
}

bool f_712_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_735_a1_v(a1);
	f_588_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_735_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

int f_73f_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_748_a1_b(int a0)
{
	return f_73f_a0_i() == a0;
}

string f_74e_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_755_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_74e_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_766_a0_i(void)
{
	return 515531;
}

int f_768_a0_i(void)
{
	return 502857;
}

string f_76a_a0_s(void)
{
	return "ui/NPC_BigVlad.png";
}

string f_76c_a0_s(void)
{
	return "ui/NPC_BigVlad_b.png";
}

bool f_76e_a0_b(void)
{
	return true;
}

void f_770_a2_v(object a0, object a1)
{
	f_712_a2_b(a0, 0.019999999552965164);
}

void f_777_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_6ff_a2_v(a0, L0 + 2000);
}

void f_782_a2_v(object a0, object a1)
{
	@SetVariable("ook2BigVlad1", 1);
}

bool f_788_a1_b(object a0)
{
	if (f_6ee_a1_i("k2q01") == 2) {
		return true;
	}
	return false;
}

bool f_794_a1_b(object a0)
{
	if (f_6ee_a1_i("ook2BigVlad1") == 0) {
		return true;
	}
	return false;
}

int f_7a0_a0_i(void)
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

void f_7b1_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_748_a1_b(2)) {
		t0{a0};
		return;
	}
	if (f_748_a1_b(12)) {
		t4{a0};
		return;
	}
	t6{a0};
}

