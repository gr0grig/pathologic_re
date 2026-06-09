event evt_11 11;
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
		if (!f_511_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_665_a0_i());
		L0->SetNPCDescription(f_663_a0_i());
		L0->SetPhoto(f_667_a0_s());
		L0->SetPhoto2(f_669_a0_s());
		L0->SetPlayerName(f_67f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_568_a1_b(f_627_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_556_a1_v(a0);
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
			f_8b_a1_v("Neutral");
			tv0->SetMessage(518045);
			tv0->ClearReplies();
			tv0->AddReply(518046, 32123, 19179);
			tv0->AddReply(530814, 32123, 32122);
			break;
			return;
		}
		if (f_66b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5f2_a1_v(tv2);
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

	void f_8b_a1_v(string a0)
	{
		if (!f_66b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_602_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_620_a0_v();
			if (a0 == 19178) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(518045);
				tv0->ClearReplies();
				tv0->AddReply(518046, 32123, 19179);
				tv0->AddReply(530814, 32123, 32122);
				return;
			}
			if (a0 == 32123) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(530815);
				tv0->ClearReplies();
				tv0->AddReply(530816, -1, 32125);
				tv0->AddReply(530817, -1, 32126);
				return;
			}
			tv3 = true;
			if (f_66b_a0_b()) {
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
		if (!f_511_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_665_a0_i());
		L0->SetNPCDescription(f_663_a0_i());
		L0->SetPhoto(f_667_a0_s());
		L0->SetPhoto2(f_669_a0_s());
		L0->SetPlayerName(f_67f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_568_a1_b(f_627_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_556_a1_v(a0);
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
			f_172_a1_v("Neutral");
			tv0->SetMessage(518209);
			tv0->ClearReplies();
			if (f_673_a1_b(tv1)) {
				tv0->AddReply(519429, 20597, 20596);
			}
			tv0->AddReply(518211, -1, 19324);
			break;
			return;
		}
		if (f_66b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5f2_a1_v(tv2);
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

	void f_172_a1_v(string a0)
	{
		if (!f_66b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_602_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_620_a0_v();
			if (a1 == 20596) {
				f_66d_a2_v(tv1, tv0);
			}
			if (a0 == 19322) {
				f_172_a1_v("Neutral");
				tv0->SetMessage(518209);
				tv0->ClearReplies();
				if (f_673_a1_b(tv1)) {
					tv0->AddReply(519429, 20597, 20596);
				}
				tv0->AddReply(518211, -1, 19324);
				return;
			}
			if (a0 == 20597) {
				f_172_a1_v("Neutral");
				tv0->SetMessage(519430);
				tv0->ClearReplies();
				tv0->AddReply(519431, 20599, 20598);
				tv0->AddReply(519438, -1, 20605);
				return;
			}
			if (a0 == 20599) {
				f_172_a1_v("Untrust");
				tv0->SetMessage(519432);
				tv0->ClearReplies();
				tv0->AddReply(519433, 20601, 20600);
				tv0->AddReply(519439, 20607, 20606);
				return;
			}
			if (a0 == 20607) {
				f_172_a1_v("Neutral");
				tv0->SetMessage(519440);
				tv0->ClearReplies();
				tv0->AddReply(519441, 20601, 20608);
				return;
			}
			if (a0 == 20601) {
				f_172_a1_v("Untrust");
				tv0->SetMessage(519434);
				tv0->ClearReplies();
				tv0->AddReply(519435, 20603, 20602);
				return;
			}
			if (a0 == 20603) {
				f_172_a1_v("Untrust");
				tv0->SetMessage(519436);
				tv0->ClearReplies();
				tv0->AddReply(519437, -1, 20604);
				return;
			}
			tv3 = true;
			if (f_66b_a0_b()) {
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
		if (!f_511_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_665_a0_i());
		L0->SetNPCDescription(f_663_a0_i());
		L0->SetPhoto(f_667_a0_s());
		L0->SetPhoto2(f_669_a0_s());
		L0->SetPlayerName(f_67f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_568_a1_b(f_627_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_556_a1_v(a0);
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
			f_2b3_a1_v("Neutral");
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_66b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5f2_a1_v(tv2);
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

	void f_2b3_a1_v(string a0)
	{
		if (!f_66b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_602_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_620_a0_v();
			if (a0 == 36906) {
				f_2b3_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_2b3_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_2b3_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_66b_a0_b()) {
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
		if (!f_511_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_665_a0_i());
		L0->SetNPCDescription(f_663_a0_i());
		L0->SetPhoto(f_667_a0_s());
		L0->SetPhoto2(f_669_a0_s());
		L0->SetPlayerName(f_67f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_568_a1_b(f_627_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_556_a1_v(a0);
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
			f_3b1_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_66b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5f2_a1_v(tv2);
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

	void f_3b1_a1_v(string a0)
	{
		if (!f_66b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_602_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_620_a0_v();
			if (a0 == 42563) {
				f_3b1_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_66b_a0_b()) {
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
		f_3f5_a0_v();
	}

	void f_3f5_a0_v(void)
	{
		if (!f_50c_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_4a5_a0_v();
		}
	}

	bool f_403_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_503_a1_b(L0);
	}

	void f_412_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_417_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_4f1_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_42d_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_436_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_436_a0_v();
			if (f_50c_a0_b() && f_417_a0_b()) {
				if (f_403_a0_b()) {
					f_5a2_a1_b(f_627_a0_o());
				}
			} else {
				f_412_a0_v();
				f_42d_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_4ec_a0_v();
		f_436_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_436_a0_v();
		f_5f2_a1_v("Neutral");
		f_42d_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_42d_a0_v();
		} else {
			f_5f2_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_4ec_a0_v();
			f_503_a1_b(a0);
			enable OnUse;
			f_690_a1_v(a0);
			f_5f2_a1_v("Neutral");
			f_436_a0_v();
			f_42d_a0_v();
		}
	}
}

void f_4a5_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_50c_a0_b()) {
		return;
	}
	L0 = f_652_a0_i();
	for (L1 = 0; L1 < 5 && f_50c_a0_b(); L1++) {
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
			@PlayAnimation("all", f_64b_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_4ea_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_4ea_a0_b(void)
{
	return true;
}

void f_4ec_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_4f1_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_4f9_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_503_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_4f9_a1_b(L0);
}

bool f_50c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_511_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_62d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_66b_a0_b()) {
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

void f_556_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_66b_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_568_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_5a2_a1_b(a0)) {
			if (!f_5c7_a1_b(a0)) {
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
		if (!f_5c7_a1_b(a0)) {
			if (!f_5a2_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_5a2_a1_b(object a0)
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
	return f_611_a1_b(L4);
}

bool f_5c7_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_63c_a0_i() + "m";
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
	return f_611_a1_b(L4);
}

void f_5f2_a1_v(string a0)
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

void f_602_a2_v(string a0, bool a1)
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

bool f_611_a1_b(string a0)
{
	if (f_66b_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_620_a0_v(void)
{
	if (f_66b_a0_b()) {
		@lshStopSpeech();
	}
}

object f_627_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_62d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_637_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_63c_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_645_a1_b(int a0)
{
	return f_63c_a0_i() == a0;
}

string f_64b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_652_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_64b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_663_a0_i(void)
{
	return 515550;
}

int f_665_a0_i(void)
{
	return 502875;
}

string f_667_a0_s(void)
{
	return "ui/NPC_Petr.png";
}

string f_669_a0_s(void)
{
	return "ui/NPC_Petr_b.png";
}

bool f_66b_a0_b(void)
{
	return true;
}

void f_66d_a2_v(object a0, object a1)
{
	@SetVariable("oob2Petr1", 1);
}

bool f_673_a1_b(object a0)
{
	if (f_637_a1_i("oob2Petr1") == 0) {
		return true;
	}
	return false;
}

int f_67f_a0_i(void)
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

void f_690_a1_v(object a0)
{
	int L0;
	int L1;
	@GetVariable("mt_petr", L0);
	if (!L0) {
		t0{a0};
		@SetVariable("mt_petr", 1);
	}
	if (f_645_a1_b(2)) {
		t2{a0};
		return;
	}
	@GetVariable("d12_petr", L1);
	if (f_645_a1_b(12) && L1) {
		t4{a0};
		@SetVariable("d12_petr", 1);
		return;
	}
	t6{a0};
}

