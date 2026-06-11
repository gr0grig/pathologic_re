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
		} while (!f_2b7_a0_b());
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
		f_311_a1_b(f_3be_a0_o());
		if (!f_2bc_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_46c_a0_i());
		L0->SetNPCDescription(f_46a_a0_i());
		L0->SetPhoto(f_46e_a0_s());
		L0->SetPhoto2(f_470_a0_s());
		L0->SetPlayerName(f_459_a0_i());
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
		f_300_a1_v(a0);
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
			if (f_417_a1_b(tv1)) {
				f_400_a2_v(tv1, tv0);
				f_b6_a1_v("Neutral");
				tv0->SetMessage(526097);
				tv0->ClearReplies();
				tv0->AddReply(526098, 27386, 27384);
				tv0->AddReply(526099, 27386, 27385);
				break;
			}
			f_b6_a1_v("Neutral");
			tv0->SetMessage(526107);
			tv0->ClearReplies();
			tv0->AddReply(526108, -1, 27395);
			tv0->AddReply(528917, -1, 30347);
			break;
			return;
		}
		if (f_472_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_39b_a1_v(tv2);
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

	void f_b6_a1_v(string a0)
	{
		if (!f_472_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3a2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3b7_a0_v();
			if (a1 == 27393) {
				f_406_a2_v(tv1, tv0);
				f_40d_a2_v(tv1, tv0);
			}
			if (a1 == 27390) {
				f_406_a2_v(tv1, tv0);
				f_40d_a2_v(tv1, tv0);
			}
			if (a0 == 27383) {
				if (f_417_a1_b(tv1)) {
					f_400_a2_v(tv1, tv0);
					f_b6_a1_v("Neutral");
					tv0->SetMessage(526097);
					tv0->ClearReplies();
					tv0->AddReply(526098, 27386, 27384);
					tv0->AddReply(526099, 27386, 27385);
					return;
				}
				f_b6_a1_v("Neutral");
				tv0->SetMessage(526107);
				tv0->ClearReplies();
				tv0->AddReply(526108, -1, 27395);
				tv0->AddReply(528917, -1, 30347);
				return;
			}
			if (a0 == 27386) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(526100);
				tv0->ClearReplies();
				tv0->AddReply(526101, 27388, 27387);
				return;
			}
			if (a0 == 27388) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(526102);
				tv0->ClearReplies();
				tv0->AddReply(526103, 27392, 27389);
				tv0->AddReply(526104, -1, 27390);
				return;
			}
			if (a0 == 27392) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(526105);
				tv0->ClearReplies();
				tv0->AddReply(526106, -1, 27393);
				return;
			}
			tv3 = true;
			if (f_472_a0_b()) {
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

	void f_169_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_19a_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_3be_a0_o());
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
			@RemoveActor(f_3be_a0_o());
			@Hold();
		}
		f_20b_a0_v();
	}

	void OnLoad(void)
	{
		f_21a_a0_v();
	}

	void f_19a_a0_v(void)
	{
		if (!f_2b7_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_250_a0_v();
		}
	}

	bool f_1ae_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_2ae_a1_b(L0);
	}

	void f_1bd_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1c2_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_29c_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1d8_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1e1_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1e1_a0_v();
			if (f_2b7_a0_b() && f_1c2_a0_b()) {
				if (f_1ae_a0_b()) {
					f_34b_a1_b(f_3be_a0_o());
				}
			} else {
				f_1bd_a0_v();
				f_1d8_a0_v();
			}
		}
	}

	void f_20b_a0_v(void)
	{
		f_297_a0_v();
		f_1e1_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_21a_a0_v(void)
	{
		@StopGroup0();
		f_1e1_a0_v();
		f_39b_a1_v("Neutral");
		f_1d8_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1d8_a0_v();
		} else {
			f_39b_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_297_a0_v();
			f_2ae_a1_b(a0);
			enable OnUse;
			f_169_a1_v(a0);
			f_39b_a1_v("Neutral");
			f_1e1_a0_v();
			f_1d8_a0_v();
		}
	}
}

void f_250_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2b7_a0_b()) {
		return;
	}
	L0 = f_3ef_a0_i();
	for (L1 = 0; L1 < 5 && f_2b7_a0_b(); L1++) {
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
			@PlayAnimation("all", f_3e8_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_295_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_295_a0_b(void)
{
	return true;
}

void f_297_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_29c_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2a4_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_2ae_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_2a4_a1_b(L0);
}

bool f_2b7_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2bc_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3c4_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_472_a0_b()) {
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

void f_300_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_472_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_311_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_34b_a1_b(a0)) {
			if (!f_370_a1_b(a0)) {
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
		if (!f_370_a1_b(a0)) {
			if (!f_34b_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_34b_a1_b(object a0)
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
	return f_3a8_a1_b(L4);
}

bool f_370_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_3df_a0_i() + "m";
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
	return f_3a8_a1_b(L4);
}

void f_39b_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_3a2_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_3a8_a1_b(string a0)
{
	if (f_472_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_3b7_a0_v(void)
{
	if (f_472_a0_b()) {
		@lshStopSpeech();
	}
}

object f_3be_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_3c4_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3ce_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_3d3_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_3df_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_3e8_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_3ef_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_3e8_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_400_a2_v(object a0, object a1)
{
	@SetVariable("ook6Danko1", 1);
}

void f_406_a2_v(object a0, object a1)
{
	f_3d3_a2_b("quest_k6_01", "teleport");
}

void f_40d_a2_v(object a0, object a1)
{
	f_423_a0_v();
	f_3d3_a2_b("quest_k6_01", "completed");
}

bool f_417_a1_b(object a0)
{
	if (f_3ce_a1_i("ook6Danko1") == 0) {
		return true;
	}
	return false;
}

void f_423_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 415, 1, 526116);
	f_43d_a2_b(L0, 408);
}

object f_430_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_43d_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_430_a0_o();
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

int f_459_a0_i(void)
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

int f_46a_a0_i(void)
{
	return 515573;
}

int f_46c_a0_i(void)
{
	return 504032;
}

string f_46e_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_470_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_472_a0_b(void)
{
	return true;
}

