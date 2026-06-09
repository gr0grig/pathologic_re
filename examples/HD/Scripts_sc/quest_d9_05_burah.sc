event evt_11 11;
event OnTrigger 26;
event OnUnload 6;
event OnLoad 5;
event OnTimer 7;
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
		if (!f_32d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_47b_a0_i());
		L0->SetNPCDescription(f_479_a0_i());
		L0->SetPhoto(f_47d_a0_s());
		L0->SetPhoto2(f_47f_a0_s());
		L0->SetPlayerName(f_4e0_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_384_a1_b(f_443_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_372_a1_v(a0);
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
			f_9a_a1_v("Neutral");
			tv0->SetMessage(513949);
			tv0->ClearReplies();
			if (f_492_a1_b(tv1)) {
				tv0->AddReply(513950, 15186, 15185);
			}
			if (f_49e_a1_b(tv1)) {
				tv0->AddReply(513977, 15213, 15212);
			}
			tv0->AddReply(513980, -1, 15215);
			break;
			return;
		}
		if (f_481_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_40e_a1_v(tv2);
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

	void f_9a_a1_v(string a0)
	{
		if (!f_481_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_41e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_43c_a0_v();
			if (a1 == 15199) {
				f_483_a2_v(tv1, tv0);
			}
			if (a1 == 40555) {
				f_483_a2_v(tv1, tv0);
			}
			if (a1 == 40548) {
				f_483_a2_v(tv1, tv0);
			}
			if (a1 == 15212) {
				f_48c_a2_v(tv1, tv0);
			}
			if (a0 == 15184) {
				f_9a_a1_v("Neutral");
				tv0->SetMessage(513949);
				tv0->ClearReplies();
				if (f_492_a1_b(tv1)) {
					tv0->AddReply(513950, 15186, 15185);
				}
				if (f_49e_a1_b(tv1)) {
					tv0->AddReply(513977, 15213, 15212);
				}
				tv0->AddReply(513980, -1, 15215);
				return;
			}
			if (a0 == 15213) {
				f_9a_a1_v("Smile");
				tv0->SetMessage(513978);
				tv0->ClearReplies();
				tv0->AddReply(513979, -1, 15214);
				tv0->AddReply(538655, -1, 40549);
				return;
			}
			if (a0 == 15186) {
				f_9a_a1_v("Sorrow");
				tv0->SetMessage(513951);
				tv0->ClearReplies();
				tv0->AddReply(513952, 15188, 15187);
				tv0->AddReply(538654, -1, 40548);
				return;
			}
			if (a0 == 15188) {
				f_9a_a1_v("Sorrow");
				tv0->SetMessage(513953);
				tv0->ClearReplies();
				tv0->AddReply(513954, 15190, 15189);
				return;
			}
			if (a0 == 15190) {
				f_9a_a1_v("Neutral");
				tv0->SetMessage(513955);
				tv0->ClearReplies();
				tv0->AddReply(538657, 40553, 40551);
				tv0->AddReply(538658, 40554, 40552);
				return;
			}
			if (a0 == 40554) {
				f_9a_a1_v("Neutral");
				tv0->SetMessage(538660);
				tv0->ClearReplies();
				tv0->AddReply(538661, -1, 40555);
				tv0->AddReply(538662, 40553, 40556);
				return;
			}
			if (a0 == 40553) {
				f_9a_a1_v("Neutral");
				tv0->SetMessage(538659);
				tv0->ClearReplies();
				tv0->AddReply(513956, 15192, 15191);
				tv0->AddReply(538663, 15194, 40558);
				return;
			}
			if (a0 == 15192) {
				f_9a_a1_v("Doubt");
				tv0->SetMessage(513957);
				tv0->ClearReplies();
				tv0->AddReply(513958, 15194, 15193);
				tv0->AddReply(538664, 15196, 40560);
				return;
			}
			if (a0 == 15194) {
				f_9a_a1_v("Agression");
				tv0->SetMessage(513959);
				tv0->ClearReplies();
				tv0->AddReply(513960, 15196, 15195);
				return;
			}
			if (a0 == 15196) {
				f_9a_a1_v("Agression");
				tv0->SetMessage(513961);
				tv0->ClearReplies();
				tv0->AddReply(513962, 15198, 15197);
				tv0->AddReply(538665, 15198, 40562);
				return;
			}
			if (a0 == 15198) {
				f_9a_a1_v("Doubt");
				tv0->SetMessage(513963);
				tv0->ClearReplies();
				tv0->AddReply(513964, -1, 15199);
				return;
			}
			tv3 = true;
			if (f_481_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t2
{
	var Vector tv0;
	var bool tv1;

	void f_1e0_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_211_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_443_a0_o());
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
			@RemoveActor(f_443_a0_o());
			@Hold();
		}
		f_27c_a0_v();
	}

	void OnLoad(void)
	{
		f_28b_a0_v();
	}

	void f_211_a0_v(void)
	{
		if (!f_328_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_2c1_a0_v();
		}
	}

	bool f_21f_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_31f_a1_b(L0);
	}

	void f_22e_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_233_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_30d_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_249_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_252_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_252_a0_v();
			if (f_328_a0_b() && f_233_a0_b()) {
				if (f_21f_a0_b()) {
					f_3be_a1_b(f_443_a0_o());
				}
			} else {
				f_22e_a0_v();
				f_249_a0_v();
			}
		}
	}

	void f_27c_a0_v(void)
	{
		f_308_a0_v();
		f_252_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_28b_a0_v(void)
	{
		@StopGroup0();
		f_252_a0_v();
		f_40e_a1_v("Neutral");
		f_249_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_249_a0_v();
		} else {
			f_40e_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_308_a0_v();
			f_31f_a1_b(a0);
			enable OnUse;
			f_1e0_a1_v(a0);
			f_40e_a1_v("Neutral");
			f_252_a0_v();
			f_249_a0_v();
		}
	}
}

void f_2c1_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_328_a0_b()) {
		return;
	}
	L0 = f_468_a0_i();
	for (L1 = 0; L1 < 5 && f_328_a0_b(); L1++) {
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
			@PlayAnimation("all", f_461_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_306_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_306_a0_b(void)
{
	return true;
}

void f_308_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_30d_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_315_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_31f_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_315_a1_b(L0);
}

bool f_328_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_32d_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_449_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_481_a0_b()) {
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

void f_372_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_481_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_384_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3be_a1_b(a0)) {
			if (!f_3e3_a1_b(a0)) {
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
		if (!f_3e3_a1_b(a0)) {
			if (!f_3be_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3be_a1_b(object a0)
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
	return f_42d_a1_b(L4);
}

bool f_3e3_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_458_a0_i() + "m";
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
	return f_42d_a1_b(L4);
}

void f_40e_a1_v(string a0)
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

void f_41e_a2_v(string a0, bool a1)
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

bool f_42d_a1_b(string a0)
{
	if (f_481_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_43c_a0_v(void)
{
	if (f_481_a0_b()) {
		@lshStopSpeech();
	}
}

object f_443_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_449_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_453_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_458_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_461_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_468_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_461_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_479_a0_i(void)
{
	return 515592;
}

int f_47b_a0_i(void)
{
	return 511961;
}

string f_47d_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_47f_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_481_a0_b(void)
{
	return true;
}

void f_483_a2_v(object a0, object a1)
{
	@SetVariable("d9q05", 2);
	f_4aa_a0_v();
}

void f_48c_a2_v(object a0, object a1)
{
	@SetVariable("ood9Burah1", 1);
}

bool f_492_a1_b(object a0)
{
	if (f_453_a1_i("d9q05") == 1) {
		return true;
	}
	return false;
}

bool f_49e_a1_b(object a0)
{
	if (f_453_a1_i("ood9Burah1") == 0) {
		return true;
	}
	return false;
}

void f_4aa_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 766, 2, 540063);
	f_4c4_a2_b(L0, 764);
}

object f_4b7_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_4c4_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_4b7_a0_o();
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

int f_4e0_a0_i(void)
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

