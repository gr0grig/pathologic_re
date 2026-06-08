event evt_11 11;
event OnUnload 6;
event OnLoad 5;
event OnUse 0;
event OnTimer 7;

task t0
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			if (f_598_a0_b()) {
				f_332_a1_v("Neutral");
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
		if (f_598_a0_b()) {
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
		if (!f_2a2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_592_a0_i());
		L0->SetNPCDescription(f_590_a0_i());
		L0->SetPhoto(f_594_a0_s());
		L0->SetPhoto2(f_596_a0_s());
		L0->SetPlayerName(f_567_a0_i());
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
		f_2e6_a1_v(a0);
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
			tv0->SetMessage(520509);
			tv0->ClearReplies();
			tv0->AddReply(524384, 25709, 25708);
			tv0->AddReply(520510, -1, 21713);
			break;
			return;
		}
		if (f_598_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_332_a1_v(tv2);
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
		if (!f_598_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_339_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_34a_a0_v();
			if (a0 == 21712) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(520509);
				tv0->ClearReplies();
				tv0->AddReply(524384, 25709, 25708);
				tv0->AddReply(520510, -1, 21713);
				return;
			}
			if (a0 == 25709) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(524385);
				tv0->ClearReplies();
				tv0->AddReply(524387, -1, 25711);
				tv0->AddReply(524386, -1, 25710);
				return;
			}
			tv3 = true;
			if (f_598_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t3
{
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;
	var bool tv5;
	var bool tv6;
	var bool tv7;
	var bool tv8;
	var bool tv9;
	var float tv10;
	var int tv11;

	void init(void)
	{
		tv11 = -1;
		f_14d_a0_v();
		if (!f_29d_a0_b()) {
			@Hold();
		}
		while (true) {
			f_1e4_a2_v(300, 100);
		}
	}

	void OnUnload(void)
	{
		f_225_a0_v();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}

	void OnUse(object a0)
	{
		if (tv10 > f_59a_a1_f(a0)) {
			t1{a0};
			return;
		}
		if (tv11 != f_3ab_a0_i()) {
			@Trace("Updating salesman");
			tv11 = f_3ab_a0_i();
			f_1a4_a0_v();
		}
		if (f_2f7_a1_b(a0)) {
			t0{a0};
			f_32e_a1_v(a0);
		}
	}

	void f_14d_a0_v(void)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		int L4;
		float L5;
		if (f_291_a2_b(f_396_a0_o(), "clothes")) {
			@GetProperty("clothes", L0);
		}
		if (f_291_a2_b(f_396_a0_o(), "weapon")) {
			@GetProperty("weapon", L1);
		}
		if (f_291_a2_b(f_396_a0_o(), "food")) {
			@GetProperty("food", L2);
		}
		if (f_291_a2_b(f_396_a0_o(), "medcine")) {
			@GetProperty("medcine", L3);
		}
		if (f_291_a2_b(f_396_a0_o(), "other")) {
			@GetProperty("other", L4);
		}
		if (f_291_a2_b(f_396_a0_o(), "rep_threshold")) {
			@GetProperty("rep_threshold", L5);
		} else {
			L5 = 0.33000001311302185;
		}
		tv5 = L0 != 0;
		tv6 = L1 != 0;
		tv7 = L2 != 0;
		tv8 = L3 != 0;
		tv9 = L4 != 0;
		tv10 = L5;
	}

	void f_1a4_a0_v(void)
	{
		int L0;
		L0 = f_3ab_a0_i();
		@ClearSubContainer(0);
		if (tv5) {
			f_3b4_a3_b(f_396_a0_o(), L0, 1);
		}
		if (tv6) {
			f_3b4_a3_b(f_396_a0_o(), L0, 0);
		}
		if (tv7) {
			f_3b4_a3_b(f_396_a0_o(), L0, 3);
		}
		if (tv8) {
			f_3b4_a3_b(f_396_a0_o(), L0, 2);
		}
		if (tv9) {
			f_3b4_a3_b(f_396_a0_o(), L0, 4);
		}
	}

	void f_1e4_a2_v(float a0, float a1)
	{
		if (!f_29d_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_233_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_1ff_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_289_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_1ff_a0_b()) {
				if (!tv2) {
					f_33f_a1_v(tv4);
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

	void f_225_a0_v(void)
	{
		f_284_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_233_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_29d_a0_b()) {
		return;
	}
	L0 = f_57f_a0_i();
	for (L1 = 0; L1 < 5 && f_29d_a0_b(); L1 = L1 + 1) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_578_a1_s(L3));
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
		if (!f_282_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_282_a0_b(void)
{
	return true;
}

void f_284_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_289_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_291_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_29d_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2a2_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_39c_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_598_a0_b()) {
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

void f_2e6_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_598_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2f7_a1_b(object a0)
{
	return f_2ff_a2_b(a0, 70);
}

bool f_2ff_a2_b(object a0, float a1)
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

void f_32e_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_332_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_339_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_33f_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_34a_a0_v(void)
{
	if (f_598_a0_b()) {
		@lshStopSpeech();
	}
}

void f_351_a4_v(object a0, string a1, int a2, int a3)
{
	if (f_3a6_a2_b(a2, a3)) {
		bool L0;
		a0->AddItem(L0, a1, 0);
	}
}

void f_35c_a5_v(object a0, string a1, int a2, int a3, int a4)
{
	if (f_3a6_a2_b(a2, a3)) {
		int L0;
		bool L1;
		@irand(L0, a4);
		a0->AddItem(L1, a1, 0, a4 + 1);
	}
}

void f_36b_a3_v(string a0, int a1, int a2)
{
	if (f_3a6_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_376_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_3a6_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

void f_385_a5_v(string a0, int a1, int a2, int a3, int a4)
{
	if (f_3a6_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a4 - a3 + 1);
		@AddItem(L1, a0, 0, L0 + a3);
	}
}

object f_396_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_39c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_3a6_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

int f_3ab_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_3b4_a3_b(object a0, int a1, int a2)
{
	if (a2 == 0) {
		return f_3e7_a2_b(a0, a1);
	} else {
		if (a2 == 1) {
			return f_3ea_a2_b(a0, a1);
		} else {
			if (a2 == 2) {
				return f_447_a2_b(a0, a1);
			} else {
				if (a2 == 3) {
					return f_4c0_a2_b(a0, a1);
				}
			}
		}
	}
	return f_545_a2_b(a0, a1);
}

bool f_3e7_a2_b(object a0, int a1)
{
	return true;
}

bool f_3ea_a2_b(object a0, int a1)
{
	f_36b_a3_v("drapery", 1, 2);
	if (a1 >= 2) {
		f_36b_a3_v("halfboot_repel", 1, 3);
		f_36b_a3_v("glove_disp", 1, 3);
		f_36b_a3_v("drapery", 1, 3);
	}
	if (a1 >= 4) {
		f_36b_a3_v("glove", 1, 4);
		f_36b_a3_v("cloak_repel", 1, 4);
	}
	if (a1 >= 5) {
		f_36b_a3_v("mask", 1, 8);
		f_36b_a3_v("boot_repel", 1, 4);
	}
	if (a1 >= 7) {
		f_36b_a3_v("raincoat_repel", 1, 4);
	}
	if (a1 >= 9) {
		f_36b_a3_v("glove_army", 1, 5);
		f_36b_a3_v("boot_army", 1, 5);
	}
	if (a1 >= 10) {
		f_36b_a3_v("balahon", 1, 9);
	}
	return true;
}

bool f_447_a2_b(object a0, int a1)
{
	bool L0;
	f_35c_a5_v(a0, "tourniquet", 1, 2, 10);
	f_35c_a5_v(a0, "alpha_pills", 1, 1, 10);
	f_35c_a5_v(a0, "meradorm", 1, 1, 2);
	if (a1 >= 3) {
		f_35c_a5_v(a0, "neomicin", 1, 1, 2);
	}
	if (a1 >= 4) {
		f_351_a4_v(a0, "novocaine", 1, 2);
		f_35c_a5_v(a0, "gamma_pills", 1, 2, 2);
		f_35c_a5_v(a0, "beta_pills", 1, 2, 2);
	}
	if (a1 >= 6) {
		f_351_a4_v(a0, "packet", 1, 4);
		f_351_a4_v(a0, "morfin", 1, 2);
		f_351_a4_v(a0, "Scalpel", 1, 8);
		f_35c_a5_v(a0, "monomicin", 1, 2, 2);
	}
	if (a1 >= 9) {
		f_351_a4_v(a0, "etorfin", 1, 2);
		f_351_a4_v(a0, "feromicin", 1, 2);
		f_35c_a5_v(a0, "delta_pills", 1, 2, 2);
	}
	return true;
}

bool f_4c0_a2_b(object a0, int a1)
{
	bool L0;
	int L1;
	int L2;
	if (a1 < 3) {
		L2 = 2;
	} else {
		if (a1 < 5) {
			L2 = 3;
		} else {
			if (a1 < 7) {
				L2 = 3;
			} else {
				if (a1 < 7) {
					L2 = 4;
				} else {
					L2 = 5;
				}
			}
		}
	}
	f_36b_a3_v("lemon", 1, L2);
	f_36b_a3_v("rusk", 1, L2);
	if (a1 == 2) {
		f_376_a4_v("dried_fish", 1, 1, 2);
		f_376_a4_v("smoked_meat", 1, 1, 2);
		f_376_a4_v("bread", 1, 1, 2);
	} else {
		f_36b_a3_v("dried_fish", 1, L2);
		f_36b_a3_v("smoked_meat", 1, L2);
		f_36b_a3_v("bread", 1, L2);
	}
	f_36b_a3_v("egg", 1, L2);
	f_36b_a3_v("vegetables", 1, L2);
	f_36b_a3_v("milk", 1, L2);
	f_36b_a3_v("dried_meat", 1, L2);
	f_36b_a3_v("fresh_fish", 1, L2);
	f_36b_a3_v("fresh_meat", 1, L2);
	f_36b_a3_v("funduk", 1, 20);
	f_36b_a3_v("peanut", 1, 20);
	f_36b_a3_v("walnut", 1, 20);
	return true;
}

bool f_545_a2_b(object a0, int a1)
{
	f_36b_a3_v("hook", 1, 5);
	f_376_a4_v("needle", 2, 3, 3);
	f_385_a5_v("kerosene", 9, 10, 4, 20);
	if (a1 >= 9) {
		f_376_a4_v("rifle_ammo", 1, 2, 5);
	}
	return true;
}

int f_567_a0_i(void)
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

string f_578_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_57f_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_578_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_590_a0_i(void)
{
	return 531557;
}

int f_592_a0_i(void)
{
	return 531556;
}

string f_594_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_596_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_598_a0_b(void)
{
	return false;
}

float f_59a_a1_f(object a0)
{
	float L0;
	a0->GetProperty("reputation", L0);
	return L0;
}

