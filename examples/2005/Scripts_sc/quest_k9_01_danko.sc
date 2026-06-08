event OnLoad 5;
event evt_11 11;
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
		} while (!f_2a6_a0_b());
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
		f_300_a1_b(f_3ad_a0_o());
		if (!f_2ab_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_46b_a0_i());
		L0->SetNPCDescription(f_469_a0_i());
		L0->SetPhoto(f_46d_a0_s());
		L0->SetPhoto2(f_46f_a0_s());
		L0->SetPlayerName(f_458_a0_i());
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
		f_2ef_a1_v(a0);
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
			f_ab_a1_v("Neutral");
			tv0->SetMessage(526491);
			tv0->ClearReplies();
			if (f_40a_a1_b(tv1) && f_416_a1_b(tv1)) {
				tv0->AddReply(526492, 27759, 27758);
			}
			tv0->AddReply(526497, -1, 27763);
			tv0->AddReply(528836, -1, 30254);
			break;
			return;
		}
		if (f_471_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_38a_a1_v(tv2);
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

	void f_ab_a1_v(string a0)
	{
		if (!f_471_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_391_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_3a6_a0_v();
			if (a1 == 27758) {
				f_3e3_a2_v(tv1, tv0);
				f_3e9_a2_v(tv1, tv0);
				f_3ef_a2_v(tv1, tv0);
			}
			if (a0 == 27757) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(526491);
				tv0->ClearReplies();
				if (f_40a_a1_b(tv1) && f_416_a1_b(tv1)) {
					tv0->AddReply(526492, 27759, 27758);
				}
				tv0->AddReply(526497, -1, 27763);
				tv0->AddReply(528836, -1, 30254);
				return;
			}
			if (a0 == 27759) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(526493);
				tv0->ClearReplies();
				tv0->AddReply(528837, 30256, 30255);
				return;
			}
			if (a0 == 30256) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(528838);
				tv0->ClearReplies();
				tv0->AddReply(528839, 30258, 30257);
				return;
			}
			if (a0 == 30258) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(528840);
				tv0->ClearReplies();
				tv0->AddReply(526494, 27761, 27760);
				return;
			}
			if (a0 == 27761) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(526495);
				tv0->ClearReplies();
				tv0->AddReply(526496, -1, 27762);
				return;
			}
			tv3 = true;
			if (f_471_a0_b()) {
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

	void f_158_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_189_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_3ad_a0_o());
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
			@RemoveActor(f_3ad_a0_o());
			@Hold();
		}
		f_1fa_a0_v();
	}

	void OnLoad(void)
	{
		f_209_a0_v();
	}

	void f_189_a0_v(void)
	{
		if (!f_2a6_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_23f_a0_v();
		}
	}

	bool f_19d_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_29d_a1_b(L0);
	}

	void f_1ac_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1b1_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_28b_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1c7_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1d0_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1d0_a0_v();
			if (f_2a6_a0_b() && f_1b1_a0_b()) {
				if (f_19d_a0_b()) {
					f_33a_a1_b(f_3ad_a0_o());
				}
			} else {
				f_1ac_a0_v();
				f_1c7_a0_v();
			}
		}
	}

	void f_1fa_a0_v(void)
	{
		f_286_a0_v();
		f_1d0_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_209_a0_v(void)
	{
		@StopGroup0();
		f_1d0_a0_v();
		f_38a_a1_v("Neutral");
		f_1c7_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1c7_a0_v();
		} else {
			f_38a_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_286_a0_v();
			f_29d_a1_b(a0);
			enable OnUse;
			f_158_a1_v(a0);
			f_38a_a1_v("Neutral");
			f_1d0_a0_v();
			f_1c7_a0_v();
		}
	}
}

void f_23f_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2a6_a0_b()) {
		return;
	}
	L0 = f_3d2_a0_i();
	for (L1 = 0; L1 < 5 && f_2a6_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_3cb_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_284_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_284_a0_b(void)
{
	return true;
}

void f_286_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_28b_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_293_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_29d_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_293_a1_b(L0);
}

bool f_2a6_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2ab_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3b3_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_471_a0_b()) {
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

void f_2ef_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_471_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_300_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_33a_a1_b(a0)) {
			if (!f_35f_a1_b(a0)) {
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
		if (!f_35f_a1_b(a0)) {
			if (!f_33a_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_33a_a1_b(object a0)
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
	return f_397_a1_b(L4);
}

bool f_35f_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_3c2_a0_i() + "m";
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
	return f_397_a1_b(L4);
}

void f_38a_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_391_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_397_a1_b(string a0)
{
	if (f_471_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_3a6_a0_v(void)
{
	if (f_471_a0_b()) {
		@lshStopSpeech();
	}
}

object f_3ad_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_3b3_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3bd_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_3c2_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_3cb_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_3d2_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_3cb_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_3e3_a2_v(object a0, object a1)
{
	@SetVariable("ook9DankoTermitnik2_1", 1);
}

void f_3e9_a2_v(object a0, object a1)
{
	@SetVariable("k9q01DankoTalk", 1);
}

void f_3ef_a2_v(object a0, object a1)
{
	if (f_3bd_a1_i("k9q01BurahTalk") != 0 && f_3bd_a1_i("k9q01DankoTalk") != 0) {
		@SetVariable("k9q01", 3);
		f_422_a0_v();
	}
}

bool f_40a_a1_b(object a0)
{
	if (f_3bd_a1_i("k9q01") == 2) {
		return true;
	}
	return false;
}

bool f_416_a1_b(object a0)
{
	if (f_3bd_a1_i("ook9DankoTermitnik2_1") == 0) {
		return true;
	}
	return false;
}

void f_422_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 520, 1, 529812);
	f_43c_a2_b(L0, 517);
}

object f_42f_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_43c_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_42f_a0_o();
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

int f_458_a0_i(void)
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

int f_469_a0_i(void)
{
	return 515573;
}

int f_46b_a0_i(void)
{
	return 504032;
}

string f_46d_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_46f_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_471_a0_b(void)
{
	return true;
}

