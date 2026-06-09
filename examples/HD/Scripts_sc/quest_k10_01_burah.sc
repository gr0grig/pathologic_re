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
		if (!f_2c9_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_484_a0_i());
		L0->SetNPCDescription(f_482_a0_i());
		L0->SetPhoto(f_486_a0_s());
		L0->SetPhoto2(f_488_a0_s());
		L0->SetPlayerName(f_471_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_320_a1_b(f_3df_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_30e_a1_v(a0);
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
			f_90_a1_v("Neutral");
			tv0->SetMessage(526985);
			tv0->ClearReplies();
			if (f_42f_a1_b(tv1)) {
				tv0->AddReply(526986, 29458, 28278);
			}
			tv0->AddReply(526991, -1, 28283);
			break;
			return;
		}
		if (f_48a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3aa_a1_v(tv2);
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

	void f_90_a1_v(string a0)
	{
		if (!f_48a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3ba_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_3d8_a0_v();
			if (a1 == 28282) {
				f_421_a2_v(tv1, tv0);
			}
			if (a0 == 28277) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(526985);
				tv0->ClearReplies();
				if (f_42f_a1_b(tv1)) {
					tv0->AddReply(526986, 29458, 28278);
				}
				tv0->AddReply(526991, -1, 28283);
				return;
			}
			if (a0 == 29458) {
				f_90_a1_v("Agression");
				tv0->SetMessage(528112);
				tv0->ClearReplies();
				tv0->AddReply(528113, 29460, 29459);
				return;
			}
			if (a0 == 29460) {
				f_90_a1_v("Agression");
				tv0->SetMessage(528114);
				tv0->ClearReplies();
				tv0->AddReply(528115, 28279, 29461);
				tv0->AddReply(528116, 29464, 29462);
				tv0->AddReply(528117, 29464, 29463);
				return;
			}
			if (a0 == 29464) {
				f_90_a1_v("Doubt");
				tv0->SetMessage(528118);
				tv0->ClearReplies();
				tv0->AddReply(528119, 28279, 29466);
				return;
			}
			if (a0 == 28279) {
				f_90_a1_v("Agression");
				tv0->SetMessage(526987);
				tv0->ClearReplies();
				tv0->AddReply(528120, 29468, 29467);
				return;
			}
			if (a0 == 29468) {
				f_90_a1_v("Doubt");
				tv0->SetMessage(528121);
				tv0->ClearReplies();
				tv0->AddReply(528122, 29470, 29469);
				tv0->AddReply(528124, 29472, 29471);
				return;
			}
			if (a0 == 29472) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(528125);
				tv0->ClearReplies();
				tv0->AddReply(528126, 28281, 29473);
				return;
			}
			if (a0 == 29470) {
				f_90_a1_v("Doubt");
				tv0->SetMessage(528123);
				tv0->ClearReplies();
				tv0->AddReply(526988, 28281, 28280);
				return;
			}
			if (a0 == 28281) {
				f_90_a1_v("Sorrow");
				tv0->SetMessage(526989);
				tv0->ClearReplies();
				tv0->AddReply(526990, -1, 28282);
				return;
			}
			tv3 = true;
			if (f_48a_a0_b()) {
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

	void f_17c_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_1ad_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_3df_a0_o());
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
			@RemoveActor(f_3df_a0_o());
			@Hold();
		}
		f_218_a0_v();
	}

	void OnLoad(void)
	{
		f_227_a0_v();
	}

	void f_1ad_a0_v(void)
	{
		if (!f_2c4_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_25d_a0_v();
		}
	}

	bool f_1bb_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_2bb_a1_b(L0);
	}

	void f_1ca_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1cf_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_2a9_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1e5_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1ee_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1ee_a0_v();
			if (f_2c4_a0_b() && f_1cf_a0_b()) {
				if (f_1bb_a0_b()) {
					f_35a_a1_b(f_3df_a0_o());
				}
			} else {
				f_1ca_a0_v();
				f_1e5_a0_v();
			}
		}
	}

	void f_218_a0_v(void)
	{
		f_2a4_a0_v();
		f_1ee_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_227_a0_v(void)
	{
		@StopGroup0();
		f_1ee_a0_v();
		f_3aa_a1_v("Neutral");
		f_1e5_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1e5_a0_v();
		} else {
			f_3aa_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_2a4_a0_v();
			f_2bb_a1_b(a0);
			enable OnUse;
			f_17c_a1_v(a0);
			f_3aa_a1_v("Neutral");
			f_1ee_a0_v();
			f_1e5_a0_v();
		}
	}
}

void f_25d_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2c4_a0_b()) {
		return;
	}
	L0 = f_410_a0_i();
	for (L1 = 0; L1 < 5 && f_2c4_a0_b(); L1++) {
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
			@PlayAnimation("all", f_409_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_2a2_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2a2_a0_b(void)
{
	return true;
}

void f_2a4_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2a9_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2b1_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_2bb_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_2b1_a1_b(L0);
}

bool f_2c4_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2c9_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3e5_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_48a_a0_b()) {
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

void f_30e_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_48a_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_320_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_35a_a1_b(a0)) {
			if (!f_37f_a1_b(a0)) {
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
		if (!f_37f_a1_b(a0)) {
			if (!f_35a_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_35a_a1_b(object a0)
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
	return f_3c9_a1_b(L4);
}

bool f_37f_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_400_a0_i() + "m";
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
	return f_3c9_a1_b(L4);
}

void f_3aa_a1_v(string a0)
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

void f_3ba_a2_v(string a0, bool a1)
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

bool f_3c9_a1_b(string a0)
{
	if (f_48a_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_3d8_a0_v(void)
{
	if (f_48a_a0_b()) {
		@lshStopSpeech();
	}
}

object f_3df_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_3e5_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3ef_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_3f4_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_400_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_409_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_410_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_409_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_421_a2_v(object a0, object a1)
{
	@SetVariable("k10q01", 7);
	f_43b_a0_v();
	f_3f4_a2_b("quest_k10_01", "place_prophet");
}

bool f_42f_a1_b(object a0)
{
	if (f_3ef_a1_i("k10q01") == 6) {
		return true;
	}
	return false;
}

void f_43b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 454, 1, 527012);
	f_455_a2_b(L0, 447);
}

object f_448_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_455_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_448_a0_o();
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

int f_471_a0_i(void)
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

int f_482_a0_i(void)
{
	return 515592;
}

int f_484_a0_i(void)
{
	return 511961;
}

string f_486_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_488_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_48a_a0_b(void)
{
	return true;
}

