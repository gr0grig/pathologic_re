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
		} while (!f_3e1_a0_b());
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
		f_43b_a1_b(f_4e8_a0_o());
		if (!f_3e6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_521_a0_i());
		L0->SetNPCDescription(f_51f_a0_i());
		L0->SetPhoto(f_523_a0_s());
		L0->SetPhoto2(f_525_a0_s());
		L0->SetPlayerName(f_529_a0_i());
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
		f_42a_a1_v(a0);
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
			f_98_a1_v("Neutral");
			tv0->SetMessage(525510);
			tv0->ClearReplies();
			tv0->AddReply(525511, -1, 26867);
			tv0->AddReply(529288, 30743, 30742);
			break;
			return;
		}
		if (f_527_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_4c5_a1_v(tv2);
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

	void f_98_a1_v(string a0)
	{
		if (!f_527_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_4cc_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_4e1_a0_v();
			if (a0 == 26866) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(525510);
				tv0->ClearReplies();
				tv0->AddReply(525511, -1, 26867);
				tv0->AddReply(529288, 30743, 30742);
				return;
			}
			if (a0 == 30743) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(529289);
				tv0->ClearReplies();
				tv0->AddReply(529290, -1, 30744);
				tv0->AddReply(529291, -1, 30745);
				return;
			}
			tv3 = true;
			if (f_527_a0_b()) {
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
		f_43b_a1_b(f_4e8_a0_o());
		if (!f_3e6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_521_a0_i());
		L0->SetNPCDescription(f_51f_a0_i());
		L0->SetPhoto(f_523_a0_s());
		L0->SetPhoto2(f_525_a0_s());
		L0->SetPlayerName(f_529_a0_i());
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
		f_42a_a1_v(a0);
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
			f_17f_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_527_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_4c5_a1_v(tv2);
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

	void f_17f_a1_v(string a0)
	{
		if (!f_527_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_4cc_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_4e1_a0_v();
			if (a0 == 36960) {
				f_17f_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_17f_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_17f_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_527_a0_b()) {
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
		f_43b_a1_b(f_4e8_a0_o());
		if (!f_3e6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_521_a0_i());
		L0->SetNPCDescription(f_51f_a0_i());
		L0->SetPhoto(f_523_a0_s());
		L0->SetPhoto2(f_525_a0_s());
		L0->SetPlayerName(f_529_a0_i());
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
		f_42a_a1_v(a0);
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
			f_27d_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_527_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_4c5_a1_v(tv2);
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

	void f_27d_a1_v(string a0)
	{
		if (!f_527_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_4cc_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_4e1_a0_v();
			if (a0 == 42548) {
				f_27d_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_527_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t7
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_2c4_a0_v();
	}

	void f_2c4_a0_v(void)
	{
		if (!f_3e1_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_37a_a0_v();
		}
	}

	bool f_2d8_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_3d8_a1_b(L0);
	}

	void f_2e7_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_2ec_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_3c6_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_302_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_30b_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_30b_a0_v();
			if (f_3e1_a0_b() && f_2ec_a0_b()) {
				if (f_2d8_a0_b()) {
					f_475_a1_b(f_4e8_a0_o());
				}
			} else {
				f_2e7_a0_v();
				f_302_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_3c1_a0_v();
		f_30b_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_30b_a0_v();
		f_4c5_a1_v("Neutral");
		f_302_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_302_a0_v();
		} else {
			f_4c5_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_3c1_a0_v();
			f_3d8_a1_b(a0);
			enable OnUse;
			f_53a_a1_v(a0);
			f_4c5_a1_v("Neutral");
			f_30b_a0_v();
			f_302_a0_v();
		}
	}
}

void f_37a_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_3e1_a0_b()) {
		return;
	}
	L0 = f_50e_a0_i();
	for (L1 = 0; L1 < 5 && f_3e1_a0_b(); L1++) {
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
			@PlayAnimation("all", f_507_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_3bf_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_3bf_a0_b(void)
{
	return true;
}

void f_3c1_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_3c6_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_3ce_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_3d8_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_3ce_a1_b(L0);
}

bool f_3e1_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_3e6_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_4ee_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_527_a0_b()) {
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

void f_42a_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_527_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_43b_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_475_a1_b(a0)) {
			if (!f_49a_a1_b(a0)) {
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
		if (!f_49a_a1_b(a0)) {
			if (!f_475_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_475_a1_b(object a0)
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
	return f_4d2_a1_b(L4);
}

bool f_49a_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_4f8_a0_i() + "m";
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
	return f_4d2_a1_b(L4);
}

void f_4c5_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_4cc_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_4d2_a1_b(string a0)
{
	if (f_527_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_4e1_a0_v(void)
{
	if (f_527_a0_b()) {
		@lshStopSpeech();
	}
}

object f_4e8_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_4ee_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_4f8_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_501_a1_b(int a0)
{
	return f_4f8_a0_i() == a0;
}

string f_507_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_50e_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_507_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_51f_a0_i(void)
{
	return 515546;
}

int f_521_a0_i(void)
{
	return 502871;
}

string f_523_a0_s(void)
{
	return "ui/NPC_Mishka.png";
}

string f_525_a0_s(void)
{
	return "ui/NPC_Mishka_b.png";
}

bool f_527_a0_b(void)
{
	return true;
}

int f_529_a0_i(void)
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

void f_53a_a1_v(object a0)
{
	if (!g1) {
		t1{a0};
		g1 = true;
	}
	if (f_501_a1_b(12)) {
		t3{a0};
		return;
	}
	t5{a0};
}

