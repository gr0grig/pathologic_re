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
		if (!f_32c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4ec_a0_i());
		L0->SetNPCDescription(f_4ea_a0_i());
		L0->SetPhoto(f_4ee_a0_s());
		L0->SetPhoto2(f_4f0_a0_s());
		L0->SetPlayerName(f_4d9_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_383_a1_b(f_442_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_371_a1_v(a0);
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
			if (f_48a_a1_b(tv1)) {
				f_484_a2_v(tv1, tv0);
				f_a9_a1_v("Neutral");
				tv0->SetMessage(526934);
				tv0->ClearReplies();
				tv0->AddReply(527936, 29290, 29289);
				tv0->AddReply(527942, 29297, 29295);
				break;
			}
			f_a9_a1_v("Neutral");
			tv0->SetMessage(526936);
			tv0->ClearReplies();
			tv0->AddReply(527935, -1, 29288);
			tv0->AddReply(526937, -1, 28229);
			break;
			return;
		}
		if (f_4f2_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_40d_a1_v(tv2);
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

	void f_a9_a1_v(string a0)
	{
		if (!f_4f2_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_41d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_43b_a0_v();
			if (a1 == 28227) {
				f_478_a2_v(tv1, tv0);
			}
			if (a0 == 28226) {
				if (f_48a_a1_b(tv1)) {
					f_484_a2_v(tv1, tv0);
					f_a9_a1_v("Neutral");
					tv0->SetMessage(526934);
					tv0->ClearReplies();
					tv0->AddReply(527936, 29290, 29289);
					tv0->AddReply(527942, 29297, 29295);
					return;
				}
				f_a9_a1_v("Neutral");
				tv0->SetMessage(526936);
				tv0->ClearReplies();
				tv0->AddReply(527935, -1, 29288);
				tv0->AddReply(526937, -1, 28229);
				return;
			}
			if (a0 == 29297) {
				f_a9_a1_v("Sorrow");
				tv0->SetMessage(527943);
				tv0->ClearReplies();
				tv0->AddReply(527944, 29292, 29298);
				return;
			}
			if (a0 == 29290) {
				f_a9_a1_v("Smile");
				tv0->SetMessage(527937);
				tv0->ClearReplies();
				tv0->AddReply(527945, 29300, 29299);
				return;
			}
			if (a0 == 29300) {
				f_a9_a1_v("Smile");
				tv0->SetMessage(527946);
				tv0->ClearReplies();
				tv0->AddReply(527947, 29292, 29301);
				return;
			}
			if (a0 == 29292) {
				f_a9_a1_v("Sorrow");
				tv0->SetMessage(527939);
				tv0->ClearReplies();
				tv0->AddReply(527948, 29304, 29303);
				tv0->AddReply(527940, 29294, 29293);
				return;
			}
			if (a0 == 29294) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(527941);
				tv0->ClearReplies();
				tv0->AddReply(527953, 29309, 29308);
				return;
			}
			if (a0 == 29309) {
				f_a9_a1_v("Untrust");
				tv0->SetMessage(527954);
				tv0->ClearReplies();
				tv0->AddReply(527956, 29304, 29311);
				return;
			}
			if (a0 == 29304) {
				f_a9_a1_v("Sorrow");
				tv0->SetMessage(527949);
				tv0->ClearReplies();
				tv0->AddReply(527950, 29310, 29305);
				return;
			}
			if (a0 == 29310) {
				f_a9_a1_v("Sorrow");
				tv0->SetMessage(527955);
				tv0->ClearReplies();
				tv0->AddReply(527960, 29317, 29316);
				tv0->AddReply(527957, 29314, 29313);
				return;
			}
			if (a0 == 29314) {
				f_a9_a1_v("Untrust");
				tv0->SetMessage(527958);
				tv0->ClearReplies();
				tv0->AddReply(527959, 29319, 29315);
				return;
			}
			if (a0 == 29317) {
				f_a9_a1_v("Untrust");
				tv0->SetMessage(527961);
				tv0->ClearReplies();
				tv0->AddReply(527962, 29319, 29318);
				return;
			}
			if (a0 == 29319) {
				f_a9_a1_v("Untrust");
				tv0->SetMessage(527963);
				tv0->ClearReplies();
				tv0->AddReply(526935, -1, 28227);
				return;
			}
			tv3 = true;
			if (f_4f2_a0_b()) {
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

	void f_1df_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_210_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_442_a0_o());
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
			@RemoveActor(f_442_a0_o());
			@Hold();
		}
		f_27b_a0_v();
	}

	void OnLoad(void)
	{
		f_28a_a0_v();
	}

	void f_210_a0_v(void)
	{
		if (!f_327_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_2c0_a0_v();
		}
	}

	bool f_21e_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_31e_a1_b(L0);
	}

	void f_22d_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_232_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_30c_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_248_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_251_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_251_a0_v();
			if (f_327_a0_b() && f_232_a0_b()) {
				if (f_21e_a0_b()) {
					f_3bd_a1_b(f_442_a0_o());
				}
			} else {
				f_22d_a0_v();
				f_248_a0_v();
			}
		}
	}

	void f_27b_a0_v(void)
	{
		f_307_a0_v();
		f_251_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_28a_a0_v(void)
	{
		@StopGroup0();
		f_251_a0_v();
		f_40d_a1_v("Neutral");
		f_248_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_248_a0_v();
		} else {
			f_40d_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_307_a0_v();
			f_31e_a1_b(a0);
			enable OnUse;
			f_1df_a1_v(a0);
			f_40d_a1_v("Neutral");
			f_251_a0_v();
			f_248_a0_v();
		}
	}
}

void f_2c0_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_327_a0_b()) {
		return;
	}
	L0 = f_467_a0_i();
	for (L1 = 0; L1 < 5 && f_327_a0_b(); L1++) {
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
			@PlayAnimation("all", f_460_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_305_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_305_a0_b(void)
{
	return true;
}

void f_307_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_30c_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_314_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_31e_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_314_a1_b(L0);
}

bool f_327_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_32c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_448_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_4f2_a0_b()) {
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

void f_371_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_4f2_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_383_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3bd_a1_b(a0)) {
			if (!f_3e2_a1_b(a0)) {
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
		if (!f_3e2_a1_b(a0)) {
			if (!f_3bd_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3bd_a1_b(object a0)
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
	return f_42c_a1_b(L4);
}

bool f_3e2_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_457_a0_i() + "m";
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
	return f_42c_a1_b(L4);
}

void f_40d_a1_v(string a0)
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

void f_41d_a2_v(string a0, bool a1)
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

bool f_42c_a1_b(string a0)
{
	if (f_4f2_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_43b_a0_v(void)
{
	if (f_4f2_a0_b()) {
		@lshStopSpeech();
	}
}

object f_442_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_448_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_452_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_457_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_460_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_467_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_460_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_478_a2_v(object a0, object a1)
{
	@SetVariable("k10q01", 1);
	f_496_a0_v();
	f_4a3_a0_v();
}

void f_484_a2_v(object a0, object a1)
{
	@SetVariable("k10q01KnowAboutRubin", 1);
}

bool f_48a_a1_b(object a0)
{
	if (f_452_a1_i("k10q01") == 0) {
		return true;
	}
	return false;
}

void f_496_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 447, 1, 527005);
	f_4bd_a2_b(L0, -1);
}

void f_4a3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 448, 1, 527006);
	f_4bd_a2_b(L0, 447);
}

object f_4b0_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_4bd_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_4b0_a0_o();
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

int f_4d9_a0_i(void)
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

int f_4ea_a0_i(void)
{
	return 515573;
}

int f_4ec_a0_i(void)
{
	return 504032;
}

string f_4ee_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_4f0_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_4f2_a0_b(void)
{
	return true;
}

