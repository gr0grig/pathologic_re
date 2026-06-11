event OnLoad 5;
event OnDialogReply 11;
event OnTrigger 26;
event OnUnload 6;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_317_a0_b());
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
		f_371_a1_b(f_41e_a0_o());
		if (!f_31c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4b2_a0_i());
		L0->SetNPCDescription(f_4b0_a0_i());
		L0->SetPhoto(f_4b4_a0_s());
		L0->SetPhoto2(f_4b6_a0_s());
		L0->SetPlayerName(f_49f_a0_i());
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
		f_360_a1_v(a0);
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
			tv0->SetMessage(527220);
			tv0->ClearReplies();
			if (f_45d_a1_b(tv1)) {
				tv0->AddReply(527221, 28839, 28529);
			}
			tv0->AddReply(527224, -1, 28532);
			break;
			return;
		}
		if (f_4b8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3fb_a1_v(tv2);
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
		if (!f_4b8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_402_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_417_a0_v();
			if (a1 == 28869) {
				f_454_a2_v(tv1, tv0);
			}
			if (a1 == 28870) {
				f_454_a2_v(tv1, tv0);
			}
			if (a0 == 28528) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(527220);
				tv0->ClearReplies();
				if (f_45d_a1_b(tv1)) {
					tv0->AddReply(527221, 28839, 28529);
				}
				tv0->AddReply(527224, -1, 28532);
				return;
			}
			if (a0 == 28839) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(527507);
				tv0->ClearReplies();
				tv0->AddReply(527508, 28842, 28840);
				tv0->AddReply(527509, 28842, 28841);
				return;
			}
			if (a0 == 28842) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(527510);
				tv0->ClearReplies();
				tv0->AddReply(527511, 28845, 28843);
				tv0->AddReply(527512, 28845, 28844);
				return;
			}
			if (a0 == 28845) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(527513);
				tv0->ClearReplies();
				tv0->AddReply(527514, 28850, 28846);
				return;
			}
			if (a0 == 28850) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(527516);
				tv0->ClearReplies();
				tv0->AddReply(527517, 28853, 28851);
				tv0->AddReply(527518, 28853, 28852);
				return;
			}
			if (a0 == 28853) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(527519);
				tv0->ClearReplies();
				tv0->AddReply(527520, 28530, 28855);
				tv0->AddReply(527521, 28530, 28856);
				return;
			}
			if (a0 == 28530) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(527222);
				tv0->ClearReplies();
				tv0->AddReply(527223, 28863, 28531);
				tv0->AddReply(527523, -1, 28859);
				return;
			}
			if (a0 == 28863) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(527526);
				tv0->ClearReplies();
				tv0->AddReply(527527, 28866, 28864);
				tv0->AddReply(527528, 28866, 28865);
				return;
			}
			if (a0 == 28866) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(527529);
				tv0->ClearReplies();
				tv0->AddReply(527530, 28858, 28867);
				return;
			}
			if (a0 == 28858) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(527522);
				tv0->ClearReplies();
				tv0->AddReply(527524, 28862, 28861);
				return;
			}
			if (a0 == 28862) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(527525);
				tv0->ClearReplies();
				tv0->AddReply(527531, -1, 28869);
				tv0->AddReply(527532, -1, 28870);
				return;
			}
			tv3 = true;
			if (f_4b8_a0_b()) {
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
	var Vector tv0;
	var bool tv1;

	void f_1c9_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_1fa_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_41e_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv1 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv1) {
			@RemoveActor(f_41e_a0_o());
			@Hold();
		}
		f_26b_a0_v();
	}

	void OnLoad(void)
	{
		f_27a_a0_v();
	}

	void f_1fa_a0_v(void)
	{
		if (!f_317_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_2b0_a0_v();
		}
	}

	bool f_20e_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_30e_a1_b(L0);
	}

	void f_21d_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_222_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_2fc_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_238_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_241_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_241_a0_v();
			if (f_317_a0_b() && f_222_a0_b()) {
				if (f_20e_a0_b()) {
					f_3ab_a1_b(f_41e_a0_o());
				}
			} else {
				f_21d_a0_v();
				f_238_a0_v();
			}
		}
	}

	void f_26b_a0_v(void)
	{
		f_2f7_a0_v();
		f_241_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_27a_a0_v(void)
	{
		@StopGroup0();
		f_241_a0_v();
		f_3fb_a1_v("Neutral");
		f_238_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_238_a0_v();
		} else {
			f_3fb_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_2f7_a0_v();
			f_30e_a1_b(a0);
			enable OnUse;
			f_1c9_a1_v(a0);
			f_3fb_a1_v("Neutral");
			f_241_a0_v();
			f_238_a0_v();
		}
	}
}

void f_2b0_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_317_a0_b()) {
		return;
	}
	L0 = f_443_a0_i();
	for (L1 = 0; L1 < 5 && f_317_a0_b(); L1++) {
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
			@PlayAnimation("all", f_43c_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_2f5_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2f5_a0_b(void)
{
	return true;
}

void f_2f7_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2fc_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_304_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_30e_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_304_a1_b(L0);
}

bool f_317_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_31c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_424_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_4b8_a0_b()) {
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

void f_360_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_4b8_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_371_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3ab_a1_b(a0)) {
			if (!f_3d0_a1_b(a0)) {
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
		if (!f_3d0_a1_b(a0)) {
			if (!f_3ab_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3ab_a1_b(object a0)
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
	return f_408_a1_b(L4);
}

bool f_3d0_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_433_a0_i() + "m";
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
	return f_408_a1_b(L4);
}

void f_3fb_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_402_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_408_a1_b(string a0)
{
	if (f_4b8_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_417_a0_v(void)
{
	if (f_4b8_a0_b()) {
		@lshStopSpeech();
	}
}

object f_41e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_424_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_42e_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_433_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_43c_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_443_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_43c_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_454_a2_v(object a0, object a1)
{
	@SetVariable("k11q01", 7);
	f_469_a0_v();
}

bool f_45d_a1_b(object a0)
{
	if (f_42e_a1_i("k11q01") == 6) {
		return true;
	}
	return false;
}

void f_469_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 490, 1, 528057);
	f_483_a2_b(L0, 480);
}

object f_476_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_483_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_476_a0_o();
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

int f_49f_a0_i(void)
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

int f_4b0_a0_i(void)
{
	return 515592;
}

int f_4b2_a0_i(void)
{
	return 511961;
}

string f_4b4_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_4b6_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_4b8_a0_b(void)
{
	return true;
}

