event OnDialogReply 11;
event OnUse 0;
event OnTimer 7;

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
		if (!f_4c7_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_81c_a0_i());
		L0->SetNPCDescription(f_81a_a0_i());
		L0->SetPhoto(f_81e_a0_s());
		L0->SetPhoto2(f_820_a0_s());
		L0->SetPlayerName(f_641_a0_i());
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
		f_50b_a1_v(a0);
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
			f_84_a1_v("Neutral");
			tv0->SetMessage(533911);
			tv0->ClearReplies();
			tv0->AddReply(533912, -1, 35471);
			tv0->AddReply(533913, -1, 35472);
			break;
			return;
		}
		if (f_822_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_51c_a1_v(tv2);
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

	void f_84_a1_v(string a0)
	{
		if (!f_822_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_523_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_534_a0_v();
			if (a0 == 35470) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(533911);
				tv0->ClearReplies();
				tv0->AddReply(533912, -1, 35471);
				tv0->AddReply(533913, -1, 35472);
				return;
			}
			tv3 = true;
			if (f_822_a0_b()) {
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
		if (!f_4c7_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_81c_a0_i());
		L0->SetNPCDescription(f_81a_a0_i());
		L0->SetPhoto(f_81e_a0_s());
		L0->SetPhoto2(f_820_a0_s());
		L0->SetPlayerName(f_641_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_50b_a1_v(a0);
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
			if (f_619_a1_b(tv1)) {
				f_5b0_a2_v(tv1, tv0);
				f_19d_a1_v("Neutral");
				tv0->SetMessage(514075);
				tv0->ClearReplies();
				tv0->AddReply(514076, 15314, 15313);
				tv0->AddReply(534587, -1, 36225);
				break;
			}
			f_19d_a1_v("Neutral");
			tv0->SetMessage(514079);
			tv0->ClearReplies();
			if (f_603_a1_b(tv1)) {
				tv0->AddReply(514080, 15318, 15317);
			}
			if (f_60e_a1_b(tv1)) {
				tv0->AddReply(514110, 15326, 15325);
			}
			if (f_5ed_a1_b(tv1) && !f_623_a1_b(tv1)) {
				tv0->AddReply(532117, 33529, 33528);
			}
			if (f_5f8_a1_b(tv1) && !f_623_a1_b(tv1)) {
				tv0->AddReply(532120, 33532, 33531);
			}
			tv0->AddReply(514082, -1, 15319);
			break;
			return;
		}
		if (f_822_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_51c_a1_v(tv2);
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

	void f_19d_a1_v(string a0)
	{
		if (!f_822_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_523_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_534_a0_v();
			if (a1 == 15324) {
				f_5c2_a2_v(tv1, tv0);
				f_5c8_a2_v(tv1, tv0);
				f_5aa_a2_v(tv1, tv0);
			}
			if (a1 == 15327) {
				f_5bc_a2_v(tv1, tv0);
				f_5c8_a2_v(tv1, tv0);
				f_5aa_a2_v(tv1, tv0);
			}
			if (a1 == 33530) {
				f_579_a2_v(tv1, tv0);
				f_5a4_a2_v(tv1, tv0);
				f_5aa_a2_v(tv1, tv0);
			}
			if (a1 == 33533) {
				f_579_a2_v(tv1, tv0);
				f_59e_a2_v(tv1, tv0);
				f_5aa_a2_v(tv1, tv0);
			}
			if (a0 == 15312) {
				if (f_619_a1_b(tv1)) {
					f_5b0_a2_v(tv1, tv0);
					f_19d_a1_v("Neutral");
					tv0->SetMessage(514075);
					tv0->ClearReplies();
					tv0->AddReply(514076, 15314, 15313);
					tv0->AddReply(534587, -1, 36225);
					return;
				}
				f_19d_a1_v("Neutral");
				tv0->SetMessage(514079);
				tv0->ClearReplies();
				if (f_603_a1_b(tv1)) {
					tv0->AddReply(514080, 15318, 15317);
				}
				if (f_60e_a1_b(tv1)) {
					tv0->AddReply(514110, 15326, 15325);
				}
				if (f_5ed_a1_b(tv1) && !f_623_a1_b(tv1)) {
					tv0->AddReply(532117, 33529, 33528);
				}
				if (f_5f8_a1_b(tv1) && !f_623_a1_b(tv1)) {
					tv0->AddReply(532120, 33532, 33531);
				}
				tv0->AddReply(514082, -1, 15319);
				return;
			}
			if (a0 == 33532) {
				f_19d_a1_v("Neutral");
				tv0->SetMessage(532121);
				tv0->ClearReplies();
				tv0->AddReply(532122, -1, 33533);
				return;
			}
			if (a0 == 33529) {
				f_19d_a1_v("Neutral");
				tv0->SetMessage(532118);
				tv0->ClearReplies();
				tv0->AddReply(532119, -1, 33530);
				return;
			}
			if (a0 == 15326) {
				f_19d_a1_v("Neutral");
				tv0->SetMessage(514111);
				tv0->ClearReplies();
				tv0->AddReply(514112, -1, 15327);
				tv0->AddReply(529951, -1, 31335);
				return;
			}
			if (a0 == 15318) {
				f_19d_a1_v("Neutral");
				tv0->SetMessage(514081);
				tv0->ClearReplies();
				tv0->AddReply(514109, -1, 15324);
				return;
			}
			if (a0 == 15314) {
				f_19d_a1_v("Neutral");
				tv0->SetMessage(514077);
				tv0->ClearReplies();
				tv0->AddReply(514078, -1, 15315);
				tv0->AddReply(534588, 36227, 36226);
				return;
			}
			if (a0 == 36227) {
				f_19d_a1_v("Neutral");
				tv0->SetMessage(534589);
				tv0->ClearReplies();
				tv0->AddReply(534590, -1, 36228);
				return;
			}
			tv3 = true;
			if (f_822_a0_b()) {
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
		if (!f_4c7_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_81c_a0_i());
		L0->SetNPCDescription(f_81a_a0_i());
		L0->SetPhoto(f_81e_a0_s());
		L0->SetPhoto2(f_820_a0_s());
		L0->SetPlayerName(f_641_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_50b_a1_v(a0);
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
			f_374_a1_v("Neutral");
			tv0->SetMessage(521530);
			tv0->ClearReplies();
			tv0->AddReply(521531, 36229, 22692);
			tv0->AddReply(534594, 36233, 36232);
			break;
			return;
		}
		if (f_822_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_51c_a1_v(tv2);
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

	void f_374_a1_v(string a0)
	{
		if (!f_822_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_523_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_534_a0_v();
			if (a0 == 22691) {
				f_374_a1_v("Neutral");
				tv0->SetMessage(521530);
				tv0->ClearReplies();
				tv0->AddReply(521531, 36229, 22692);
				tv0->AddReply(534594, 36233, 36232);
				return;
			}
			if (a0 == 36233) {
				f_374_a1_v("Neutral");
				tv0->SetMessage(534595);
				tv0->ClearReplies();
				tv0->AddReply(534596, -1, 36234);
				tv0->AddReply(534597, -1, 36235);
				return;
			}
			if (a0 == 36229) {
				f_374_a1_v("Neutral");
				tv0->SetMessage(534591);
				tv0->ClearReplies();
				tv0->AddReply(534592, -1, 36230);
				tv0->AddReply(534593, -1, 36231);
				return;
			}
			tv3 = true;
			if (f_822_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t6
{
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;

	void init(void)
	{
		for (; ; ) {
			@Sleep(3);
			f_428_a2_v(300, 100);
		}
	}

	void OnUse(object a0)
	{
		string L0;
		@GetProperty("npc", L0);
		@Trace(L0);
		@Trace(f_658_a1_i(L0));
		if (f_810_a1_b(f_658_a1_i(L0))) {
			t4{a0};
		} else {
			if (f_7fc_a1_b(f_658_a1_i(L0))) {
				t0{a0};
			} else {
				if (f_806_a1_b(f_658_a1_i(L0))) {
					t2{a0};
				}
			}
		}
	}

	void f_428_a2_v(float a0, float a1)
	{
		if (!f_4c2_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_469_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_443_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_4ba_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_443_a0_b()) {
				if (!tv2) {
					f_529_a1_v(tv4);
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
}

void f_469_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_4c2_a0_b()) {
		return;
	}
	L0 = f_568_a0_i();
	for (L1 = 0; L1 < 5 && f_4c2_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_561_a1_s(L3));
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
		if (!f_4b8_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_4b8_a0_b(void)
{
	return true;
}

float f_4ba_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_4c2_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_4c7_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_53b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_822_a0_b()) {
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

void f_50b_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_822_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_51c_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_523_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_529_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_534_a0_v(void)
{
	if (f_822_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_53b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_545_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_54c_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

int f_558_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_561_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_568_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_561_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_579_a2_v(object a0, object a1)
{
	string L0;
	@GetProperty("npc", L0);
	if (f_652_a0_i() == 0) {
		f_54c_a3_b("volonteers_danko", "rescue_oneday", L0);
	} else {
		if (f_652_a0_i() == 1) {
			f_54c_a3_b("volonteers_burah", "rescue_oneday", L0);
		} else {
			f_54c_a3_b("volonteers_klara", "rescue_oneday", L0);
		}
	}
}

void f_59e_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "feromicin", 1);
}

void f_5a4_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "monomicin", 1);
}

void f_5aa_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_5b0_a2_v(object a0, object a1)
{
	string L0;
	@GetProperty("npc", L0);
	@SetVariable("oo" + L0 + "1", 1);
}

void f_5bc_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "powder", 1);
}

void f_5c2_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "burah_serum", 1);
}

void f_5c8_a2_v(object a0, object a1)
{
	string L0;
	@GetProperty("npc", L0);
	if (f_652_a0_i() == 0) {
		f_54c_a3_b("volonteers_danko", "rescue", L0);
	} else {
		if (f_652_a0_i() == 1) {
			f_54c_a3_b("volonteers_burah", "rescue", L0);
		} else {
			f_54c_a3_b("volonteers_klara", "rescue", L0);
		}
	}
}

bool f_5ed_a1_b(object a0)
{
	if (f_545_a2_b(a0, "monomicin")) {
		return true;
	}
	return false;
}

bool f_5f8_a1_b(object a0)
{
	if (f_545_a2_b(a0, "feromicin")) {
		return true;
	}
	return false;
}

bool f_603_a1_b(object a0)
{
	if (f_545_a2_b(a0, "burah_serum")) {
		return true;
	}
	return false;
}

bool f_60e_a1_b(object a0)
{
	if (f_545_a2_b(a0, "powder")) {
		return true;
	}
	return false;
}

bool f_619_a1_b(object a0)
{
	if (f_62d_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_623_a1_b(object a0)
{
	if (f_63a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_62d_a1_b(object a0)
{
	string L0;
	int L1;
	@GetProperty("npc", L0);
	@GetVariable("oo" + L0 + "1", L1);
	return L1 == 0;
}

bool f_63a_a1_b(object a0)
{
	return f_558_a0_i() == 12;
}

int f_641_a0_i(void)
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

int f_652_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

int f_658_a1_i(string a0)
{
	@_strlwr(a0);
	if (a0 == "alexandr") {
		return 1;
	}
	if (a0 == "andrei") {
		return 2;
	}
	if (a0 == "anna") {
		return 3;
	}
	if (a0 == "bigvlad") {
		return 4;
	}
	if (a0 == "eva") {
		return 5;
	}
	if (a0 == "georg") {
		return 6;
	}
	if (a0 == "grif") {
		return 7;
	}
	if (a0 == "han") {
		return 8;
	}
	if (a0 == "julia") {
		return 9;
	}
	if (a0 == "kapella") {
		return 10;
	}
	if (a0 == "katerina") {
		return 11;
	}
	if (a0 == "klara") {
		return 12;
	}
	if (a0 == "lara") {
		return 13;
	}
	if (a0 == "laska") {
		return 14;
	}
	if (a0 == "maria") {
		return 15;
	}
	if (a0 == "mark") {
		return 16;
	}
	if (a0 == "mat") {
		return 17;
	}
	if (a0 == "mishka") {
		return 18;
	}
	if (a0 == "mladvlad") {
		return 19;
	}
	if (a0 == "notkin") {
		return 20;
	}
	if (a0 == "ospina") {
		return 21;
	}
	if (a0 == "petr") {
		return 22;
	}
	if (a0 == "rubin") {
		return 23;
	}
	if (a0 == "spi4ka") {
		return 24;
	}
	if (a0 == "starshina") {
		return 25;
	}
	if (a0 == "viktor") {
		return 26;
	}
	if (a0 == "wasted_woman") {
		return 27;
	}
	if (a0 == "wasted_male") {
		return 28;
	}
	if (a0 == "alkash") {
		return 29;
	}
	if (a0 == "boy") {
		return 30;
	}
	if (a0 == "girl") {
		return 31;
	}
	if (a0 == "littleboy") {
		return 32;
	}
	if (a0 == "littlegirl") {
		return 33;
	}
	if (a0 == "butcher") {
		return 34;
	}
	if (a0 == "dohodyaga") {
		return 35;
	}
	if (a0 == "unosha") {
		return 36;
	}
	if (a0 == "vaxxabit") {
		return 37;
	}
	if (a0 == "vaxxabitka") {
		return 38;
	}
	if (a0 == "woman") {
		return 39;
	}
	if (a0 == "worker") {
		return 40;
	}
	if (a0 == "whitemask") {
		return 42;
	}
	if (a0 == "birdmask") {
		return 43;
	}
	if (a0 == "birdmask") {
		return 44;
	}
	if (a0 == "patrol") {
		return 46;
	}
	if (a0 == "danko") {
		return 47;
	}
	if (a0 == "alkash_d") {
		return 48;
	}
	if (a0 == "boy_d") {
		return 49;
	}
	if (a0 == "butcher_d") {
		return 50;
	}
	if (a0 == "dohodyaga_d") {
		return 51;
	}
	if (a0 == "girl_d") {
		return 52;
	}
	if (a0 == "littleboy_d") {
		return 53;
	}
	if (a0 == "littlegirl_d") {
		return 54;
	}
	if (a0 == "unosha2") {
		return 55;
	}
	if (a0 == "unosha_d") {
		return 56;
	}
	if (a0 == "unosha2_d") {
		return 57;
	}
	if (a0 == "vaxxabit_d") {
		return 58;
	}
	if (a0 == "vaxxabitka_d") {
		return 59;
	}
	if (a0 == "wasted_male_d") {
		return 60;
	}
	if (a0 == "wasted_woman_d") {
		return 61;
	}
	if (a0 == "woman_d") {
		return 62;
	}
	if (a0 == "worker2") {
		return 63;
	}
	if (a0 == "worker_d") {
		return 64;
	}
	if (a0 == "worker2_d") {
		return 65;
	}
	if (a0 == "burah") {
		return 66;
	}
	if (a0 == "gorbun_daughter") {
		return 67;
	}
	if (a0 == "gorbun") {
		return 68;
	}
	if (a0 == "albinos") {
		return 69;
	}
	if (a0 == "aglaja") {
		return 70;
	}
	if (a0 == "nude") {
		return 71;
	}
	if (a0 == "block") {
		return 72;
	}
	if (a0 == "officer") {
		return 73;
	}
	if (a0 == "doberman") {
		return 74;
	}
	if (a0 == "grabitel") {
		return 75;
	}
	if (a0 == "gatherer_wife") {
		return 76;
	}
	if (a0 == "rat_prophet") {
		return 77;
	}
	if (a0 == "morlok") {
		return 78;
	}
	if (a0 == "soldier") {
		return 79;
	}
	if (a0 == "britva") {
		return 80;
	}
	if (a0 == "kabaktchik") {
		return 81;
	}
	if (a0 == "sanitar") {
		return 82;
	}
	if (a0 == "salesman") {
		return 83;
	}
	if (a0 == "ayyan") {
		return 84;
	}
	if (a0 == "petrbirdmask") {
		return 85;
	}
	return -1;
}

bool f_7fc_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 32) != 0;
}

bool f_806_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_810_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

int f_81a_a0_i(void)
{
	return 515571;
}

int f_81c_a0_i(void)
{
	return 504029;
}

string f_81e_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_820_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_822_a0_b(void)
{
	return false;
}

