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
		} while (!f_5ff_a0_b());
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
		if (!f_604_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_750_a0_i());
		L0->SetNPCDescription(f_74e_a0_i());
		L0->SetPhoto(f_752_a0_s());
		L0->SetPhoto2(f_754_a0_s());
		L0->SetPlayerName(f_7cc_a0_i());
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
		f_648_a1_v(a0);
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
			if (f_771_a1_b(tv1)) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531123);
				tv0->ClearReplies();
				tv0->AddReply(531124, 32443, 32442);
				tv0->AddReply(531403, 32745, 32744);
				break;
			}
			f_aa_a1_v("Neutral");
			tv0->SetMessage(531127);
			tv0->ClearReplies();
			tv0->AddReply(531128, -1, 32446);
			tv0->AddReply(531398, -1, 32739);
			break;
			return;
		}
		if (f_756_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6e3_a1_v(tv2);
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

	void f_aa_a1_v(string a0)
	{
		if (!f_756_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6ea_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_6ff_a0_v();
			if (a1 == 32444) {
				f_758_a2_v(tv1, tv0);
			}
			if (a1 == 32756) {
				f_758_a2_v(tv1, tv0);
			}
			if (a1 == 32750) {
				f_761_a2_v(tv1, tv0);
			}
			if (a0 == 32441) {
				if (f_771_a1_b(tv1)) {
					f_aa_a1_v("Neutral");
					tv0->SetMessage(531123);
					tv0->ClearReplies();
					tv0->AddReply(531124, 32443, 32442);
					tv0->AddReply(531403, 32745, 32744);
					return;
				}
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531127);
				tv0->ClearReplies();
				tv0->AddReply(531128, -1, 32446);
				tv0->AddReply(531398, -1, 32739);
				return;
			}
			if (a0 == 32745) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531404);
				tv0->ClearReplies();
				tv0->AddReply(531405, 32749, 32746);
				tv0->AddReply(531406, 32443, 32747);
				return;
			}
			if (a0 == 32443) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531125);
				tv0->ClearReplies();
				tv0->AddReply(531399, 32741, 32740);
				return;
			}
			if (a0 == 32741) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531400);
				tv0->ClearReplies();
				tv0->AddReply(531401, 32757, 32742);
				tv0->AddReply(531407, 32749, 32748);
				return;
			}
			if (a0 == 32749) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531408);
				tv0->ClearReplies();
				tv0->AddReply(531409, -1, 32750);
				return;
			}
			if (a0 == 32757) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531415);
				tv0->ClearReplies();
				tv0->AddReply(531417, 32760, 32759);
				tv0->AddReply(531416, 32743, 32758);
				return;
			}
			if (a0 == 32743) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531402);
				tv0->ClearReplies();
				tv0->AddReply(531126, -1, 32444);
				tv0->AddReply(531410, 32753, 32752);
				return;
			}
			if (a0 == 32753) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531411);
				tv0->ClearReplies();
				tv0->AddReply(531412, 32755, 32754);
				return;
			}
			if (a0 == 32755) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531413);
				tv0->ClearReplies();
				tv0->AddReply(531414, -1, 32756);
				return;
			}
			if (a0 == 32760) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531418);
				tv0->ClearReplies();
				tv0->AddReply(531419, 32743, 32761);
				return;
			}
			tv3 = true;
			if (f_756_a0_b()) {
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
		f_659_a1_b(f_706_a0_o());
		if (!f_604_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_750_a0_i());
		L0->SetNPCDescription(f_74e_a0_i());
		L0->SetPhoto(f_752_a0_s());
		L0->SetPhoto2(f_754_a0_s());
		L0->SetPlayerName(f_7cc_a0_i());
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
		f_648_a1_v(a0);
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
			f_261_a1_v("Neutral");
			tv0->SetMessage(535268);
			tv0->ClearReplies();
			if (f_77d_a1_b(tv1)) {
				tv0->AddReply(535269, 37004, 36944);
			}
			tv0->AddReply(535322, -1, 37003);
			break;
			return;
		}
		if (f_756_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6e3_a1_v(tv2);
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

	void f_261_a1_v(string a0)
	{
		if (!f_756_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6ea_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_6ff_a0_v();
			if (a1 == 36944) {
				f_76b_a2_v(tv1, tv0);
			}
			if (a0 == 36943) {
				f_261_a1_v("Neutral");
				tv0->SetMessage(535268);
				tv0->ClearReplies();
				if (f_77d_a1_b(tv1)) {
					tv0->AddReply(535269, 37004, 36944);
				}
				tv0->AddReply(535322, -1, 37003);
				return;
			}
			if (a0 == 37004) {
				f_261_a1_v("Neutral");
				tv0->SetMessage(535323);
				tv0->ClearReplies();
				tv0->AddReply(535325, 37007, 37006);
				tv0->AddReply(535324, 37008, 37005);
				return;
			}
			if (a0 == 37008) {
				f_261_a1_v("Neutral");
				tv0->SetMessage(535327);
				tv0->ClearReplies();
				tv0->AddReply(535328, 37015, 37009);
				tv0->AddReply(535329, 37011, 37010);
				return;
			}
			if (a0 == 37011) {
				f_261_a1_v("Neutral");
				tv0->SetMessage(535330);
				tv0->ClearReplies();
				tv0->AddReply(535331, 37007, 37012);
				return;
			}
			if (a0 == 37015) {
				f_261_a1_v("Neutral");
				tv0->SetMessage(535334);
				tv0->ClearReplies();
				tv0->AddReply(535336, -1, 37017);
				tv0->AddReply(535335, -1, 37016);
				return;
			}
			if (a0 == 37007) {
				f_261_a1_v("Neutral");
				tv0->SetMessage(535326);
				tv0->ClearReplies();
				tv0->AddReply(535332, 37014, 37013);
				return;
			}
			if (a0 == 37014) {
				f_261_a1_v("Neutral");
				tv0->SetMessage(535333);
				tv0->ClearReplies();
				tv0->AddReply(535337, -1, 37019);
				tv0->AddReply(535338, -1, 37020);
				return;
			}
			tv3 = true;
			if (f_756_a0_b()) {
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
		f_659_a1_b(f_706_a0_o());
		if (!f_604_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_750_a0_i());
		L0->SetNPCDescription(f_74e_a0_i());
		L0->SetPhoto(f_752_a0_s());
		L0->SetPhoto2(f_754_a0_s());
		L0->SetPlayerName(f_7cc_a0_i());
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
		f_648_a1_v(a0);
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
			f_3b9_a1_v("Neutral");
			tv0->SetMessage(518009);
			tv0->ClearReplies();
			tv0->AddReply(518010, 32920, 19143);
			tv0->AddReply(531560, -1, 32919);
			break;
			return;
		}
		if (f_756_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6e3_a1_v(tv2);
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

	void f_3b9_a1_v(string a0)
	{
		if (!f_756_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6ea_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_6ff_a0_v();
			if (a0 == 19142) {
				f_3b9_a1_v("Neutral");
				tv0->SetMessage(518009);
				tv0->ClearReplies();
				tv0->AddReply(518010, 32920, 19143);
				tv0->AddReply(531560, -1, 32919);
				return;
			}
			if (a0 == 32920) {
				f_3b9_a1_v("Neutral");
				tv0->SetMessage(531561);
				tv0->ClearReplies();
				tv0->AddReply(531562, -1, 32921);
				tv0->AddReply(531563, -1, 32922);
				return;
			}
			tv3 = true;
			if (f_756_a0_b()) {
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
		f_659_a1_b(f_706_a0_o());
		if (!f_604_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_750_a0_i());
		L0->SetNPCDescription(f_74e_a0_i());
		L0->SetPhoto(f_752_a0_s());
		L0->SetPhoto2(f_754_a0_s());
		L0->SetPlayerName(f_7cc_a0_i());
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
		f_648_a1_v(a0);
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
			f_49b_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_756_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_6e3_a1_v(tv2);
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

	void f_49b_a1_v(string a0)
	{
		if (!f_756_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_6ea_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_6ff_a0_v();
			if (a0 == 42563) {
				f_49b_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_756_a0_b()) {
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
		f_4e2_a0_v();
	}

	void f_4e2_a0_v(void)
	{
		if (!f_5ff_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_598_a0_v();
		}
	}

	bool f_4f6_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_5f6_a1_b(L0);
	}

	void f_505_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_50a_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_5e4_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_520_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_529_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_529_a0_v();
			if (f_5ff_a0_b() && f_50a_a0_b()) {
				if (f_4f6_a0_b()) {
					f_693_a1_b(f_706_a0_o());
				}
			} else {
				f_505_a0_v();
				f_520_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_5df_a0_v();
		f_529_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_529_a0_v();
		f_6e3_a1_v("Neutral");
		f_520_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_520_a0_v();
		} else {
			f_6e3_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_5df_a0_v();
			f_5f6_a1_b(a0);
			enable OnUse;
			f_7dd_a1_v(a0);
			f_6e3_a1_v("Neutral");
			f_529_a0_v();
			f_520_a0_v();
		}
	}
}

void f_598_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_5ff_a0_b()) {
		return;
	}
	L0 = f_73d_a0_i();
	for (L1 = 0; L1 < 5 && f_5ff_a0_b(); L1++) {
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
			@PlayAnimation("all", f_736_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_5dd_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_5dd_a0_b(void)
{
	return true;
}

void f_5df_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_5e4_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_5ec_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_5f6_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_5ec_a1_b(L0);
}

bool f_5ff_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_604_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_70c_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_756_a0_b()) {
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

void f_648_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_756_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_659_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_693_a1_b(a0)) {
			if (!f_6b8_a1_b(a0)) {
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
		if (!f_6b8_a1_b(a0)) {
			if (!f_693_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_693_a1_b(object a0)
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
	return f_6f0_a1_b(L4);
}

bool f_6b8_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_727_a0_i() + "m";
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
	return f_6f0_a1_b(L4);
}

void f_6e3_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_6ea_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_6f0_a1_b(string a0)
{
	if (f_756_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_6ff_a0_v(void)
{
	if (f_756_a0_b()) {
		@lshStopSpeech();
	}
}

object f_706_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_70c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_716_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_71b_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_727_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_730_a1_b(int a0)
{
	return f_727_a0_i() == a0;
}

string f_736_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_73d_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_736_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_74e_a0_i(void)
{
	return 515536;
}

int f_750_a0_i(void)
{
	return 502861;
}

string f_752_a0_s(void)
{
	return "ui/NPC_Han.png";
}

string f_754_a0_s(void)
{
	return "ui/NPC_Han_b.png";
}

bool f_756_a0_b(void)
{
	return true;
}

void f_758_a2_v(object a0, object a1)
{
	@SetVariable("b11q02", 4);
	f_796_a0_v();
}

void f_761_a2_v(object a0, object a1)
{
	f_789_a0_v();
	f_71b_a2_b("quest_b11_02", "fail");
}

void f_76b_a2_v(object a0, object a1)
{
	@SetVariable("oob12Han1", 1);
}

bool f_771_a1_b(object a0)
{
	if (f_716_a1_i("b11q02") == 3) {
		return true;
	}
	return false;
}

bool f_77d_a1_b(object a0)
{
	if (f_716_a1_i("oob12Han1") == 0) {
		return true;
	}
	return false;
}

void f_789_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 611, 2, 531506);
	f_7b0_a2_b(L0, 598);
}

void f_796_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 601, 2, 531152);
	f_7b0_a2_b(L0, 598);
}

object f_7a3_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_7b0_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_7a3_a0_o();
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

int f_7cc_a0_i(void)
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

void f_7dd_a1_v(object a0)
{
	if (!g1) {
		t5{a0};
		g1 = true;
	}
	if (f_730_a1_b(11)) {
		t1{a0};
		return;
	}
	if (f_730_a1_b(12)) {
		t3{a0};
		return;
	}
	t7{a0};
}

