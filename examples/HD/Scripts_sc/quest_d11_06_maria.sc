event OnDialogReply 11;
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
		if (!f_351_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_508_a0_i());
		L0->SetNPCDescription(f_506_a0_i());
		L0->SetPhoto(f_50a_a0_s());
		L0->SetPhoto2(f_50c_a0_s());
		L0->SetPlayerName(f_4f5_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_3a8_a1_b(f_467_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_396_a1_v(a0);
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
			f_90_a1_v("Staring");
			tv0->SetMessage(534532);
			tv0->ClearReplies();
			if (f_4b3_a1_b(tv1)) {
				tv0->AddReply(539632, 41601, 41578);
			}
			tv0->AddReply(534533, -1, 36174);
			break;
			return;
		}
		if (f_50e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_432_a1_v(tv2);
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
		if (!f_50e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_442_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_460_a0_v();
			if (a1 == 36172) {
				f_4a9_a2_v(tv1, tv0);
			}
			if (a1 == 41620) {
				f_4a9_a2_v(tv1, tv0);
			}
			if (a0 == 36173) {
				f_90_a1_v("Staring");
				tv0->SetMessage(534532);
				tv0->ClearReplies();
				if (f_4b3_a1_b(tv1)) {
					tv0->AddReply(539632, 41601, 41578);
				}
				tv0->AddReply(534533, -1, 36174);
				return;
			}
			if (a0 == 41601) {
				f_90_a1_v("Staring");
				tv0->SetMessage(539655);
				tv0->ClearReplies();
				tv0->AddReply(539656, 41603, 41602);
				tv0->AddReply(539669, 41607, 41615);
				return;
			}
			if (a0 == 41603) {
				f_90_a1_v("Mysterious");
				tv0->SetMessage(539657);
				tv0->ClearReplies();
				tv0->AddReply(539658, 41605, 41604);
				return;
			}
			if (a0 == 41605) {
				f_90_a1_v("Mysterious");
				tv0->SetMessage(539659);
				tv0->ClearReplies();
				tv0->AddReply(539660, 41607, 41606);
				tv0->AddReply(539670, 41607, 41616);
				return;
			}
			if (a0 == 41607) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(539661);
				tv0->ClearReplies();
				tv0->AddReply(539662, 41609, 41608);
				return;
			}
			if (a0 == 41609) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(539663);
				tv0->ClearReplies();
				tv0->AddReply(539664, 41579, 41610);
				return;
			}
			if (a0 == 41579) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(539633);
				tv0->ClearReplies();
				tv0->AddReply(539634, 41581, 41580);
				tv0->AddReply(539675, 41623, 41622);
				return;
			}
			if (a0 == 41623) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(539676);
				tv0->ClearReplies();
				tv0->AddReply(539677, 41612, 41624);
				return;
			}
			if (a0 == 41581) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(539635);
				tv0->ClearReplies();
				tv0->AddReply(539665, 41612, 41611);
				return;
			}
			if (a0 == 41612) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(539666);
				tv0->ClearReplies();
				tv0->AddReply(539667, 41614, 41613);
				tv0->AddReply(539678, 41627, 41626);
				return;
			}
			if (a0 == 41627) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(539679);
				tv0->ClearReplies();
				tv0->AddReply(539680, 41629, 41628);
				tv0->AddReply(539682, 41614, 41630);
				return;
			}
			if (a0 == 41629) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(539681);
				tv0->ClearReplies();
				tv0->AddReply(539683, 41634, 41632);
				return;
			}
			if (a0 == 41634) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(539684);
				tv0->ClearReplies();
				tv0->AddReply(539685, 41619, 41635);
				tv0->AddReply(539686, 41619, 41636);
				return;
			}
			if (a0 == 41614) {
				f_90_a1_v("Mysterious");
				tv0->SetMessage(539668);
				tv0->ClearReplies();
				tv0->AddReply(539672, 41619, 41618);
				return;
			}
			if (a0 == 41619) {
				f_90_a1_v("Mysterious");
				tv0->SetMessage(539673);
				tv0->ClearReplies();
				tv0->AddReply(534531, -1, 36172);
				tv0->AddReply(539674, -1, 41620);
				return;
			}
			tv3 = true;
			if (f_50e_a0_b()) {
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

	void f_204_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_235_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_467_a0_o());
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
			@RemoveActor(f_467_a0_o());
			@Hold();
		}
		f_2a0_a0_v();
	}

	void OnLoad(void)
	{
		f_2af_a0_v();
	}

	void f_235_a0_v(void)
	{
		if (!f_34c_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_2e5_a0_v();
		}
	}

	bool f_243_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_343_a1_b(L0);
	}

	void f_252_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_257_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_331_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_26d_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_276_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_276_a0_v();
			if (f_34c_a0_b() && f_257_a0_b()) {
				if (f_243_a0_b()) {
					f_3e2_a1_b(f_467_a0_o());
				}
			} else {
				f_252_a0_v();
				f_26d_a0_v();
			}
		}
	}

	void f_2a0_a0_v(void)
	{
		f_32c_a0_v();
		f_276_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_2af_a0_v(void)
	{
		@StopGroup0();
		f_276_a0_v();
		f_432_a1_v("Neutral");
		f_26d_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_26d_a0_v();
		} else {
			f_432_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_32c_a0_v();
			f_343_a1_b(a0);
			enable OnUse;
			f_204_a1_v(a0);
			f_432_a1_v("Neutral");
			f_276_a0_v();
			f_26d_a0_v();
		}
	}
}

void f_2e5_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_34c_a0_b()) {
		return;
	}
	L0 = f_498_a0_i();
	for (L1 = 0; L1 < 5 && f_34c_a0_b(); L1++) {
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
			@PlayAnimation("all", f_491_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_32a_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_32a_a0_b(void)
{
	return true;
}

void f_32c_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_331_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_339_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_343_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_339_a1_b(L0);
}

bool f_34c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_351_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_46d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_50e_a0_b()) {
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

void f_396_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_50e_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_3a8_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3e2_a1_b(a0)) {
			if (!f_407_a1_b(a0)) {
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
		if (!f_407_a1_b(a0)) {
			if (!f_3e2_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3e2_a1_b(object a0)
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
	return f_451_a1_b(L4);
}

bool f_407_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_488_a0_i() + "m";
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
	return f_451_a1_b(L4);
}

void f_432_a1_v(string a0)
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

void f_442_a2_v(string a0, bool a1)
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

bool f_451_a1_b(string a0)
{
	if (f_50e_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_460_a0_v(void)
{
	if (f_50e_a0_b()) {
		@lshStopSpeech();
	}
}

object f_467_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_46d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_477_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_47c_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_488_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_491_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_498_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_491_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_4a9_a2_v(object a0, object a1)
{
	f_4bf_a0_v();
	f_47c_a2_b("quest_d11_06", "completed");
}

bool f_4b3_a1_b(object a0)
{
	if (f_477_a1_i("d11q06") == 3) {
		return true;
	}
	return false;
}

void f_4bf_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 692, 2, 534540);
	f_4d9_a2_b(L0, 686);
}

object f_4cc_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_4d9_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_4cc_a0_o();
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

int f_4f5_a0_i(void)
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

int f_506_a0_i(void)
{
	return 515543;
}

int f_508_a0_i(void)
{
	return 502868;
}

string f_50a_a0_s(void)
{
	return "ui/NPC_Maria.png";
}

string f_50c_a0_s(void)
{
	return "ui/NPC_Maria_b.png";
}

bool f_50e_a0_b(void)
{
	return true;
}

