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
		if (!f_315_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4db_a0_i());
		L0->SetNPCDescription(f_4d9_a0_i());
		L0->SetPhoto(f_4dd_a0_s());
		L0->SetPhoto2(f_4df_a0_s());
		L0->SetPlayerName(f_4c8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_36c_a1_b(f_42b_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_35a_a1_v(a0);
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
			if (f_479_a1_b(tv1)) {
				f_473_a2_v(tv1, tv0);
				f_a9_a1_v("Agression");
				tv0->SetMessage(525808);
				tv0->ClearReplies();
				tv0->AddReply(542324, 44685, 44683);
				tv0->AddReply(542325, 44686, 44684);
				break;
			}
			f_a9_a1_v("Smile");
			tv0->SetMessage(525811);
			tv0->ClearReplies();
			tv0->AddReply(525812, -1, 27118);
			tv0->AddReply(529232, -1, 30686);
			break;
			return;
		}
		if (f_4e1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3f6_a1_v(tv2);
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
		if (!f_4e1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_406_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_424_a0_v();
			if (a1 == 27115) {
				f_461_a2_v(tv1, tv0);
			}
			if (a1 == 27116) {
				f_46a_a2_v(tv1, tv0);
			}
			if (a1 == 44698) {
				f_461_a2_v(tv1, tv0);
			}
			if (a0 == 27114) {
				if (f_479_a1_b(tv1)) {
					f_473_a2_v(tv1, tv0);
					f_a9_a1_v("Agression");
					tv0->SetMessage(525808);
					tv0->ClearReplies();
					tv0->AddReply(542324, 44685, 44683);
					tv0->AddReply(542325, 44686, 44684);
					return;
				}
				f_a9_a1_v("Smile");
				tv0->SetMessage(525811);
				tv0->ClearReplies();
				tv0->AddReply(525812, -1, 27118);
				tv0->AddReply(529232, -1, 30686);
				return;
			}
			if (a0 == 44686) {
				f_a9_a1_v("Agression");
				tv0->SetMessage(542327);
				tv0->ClearReplies();
				tv0->AddReply(542330, 44690, 44689);
				tv0->AddReply(542332, 44692, 44691);
				return;
			}
			if (a0 == 44692) {
				f_a9_a1_v("Sorrow");
				tv0->SetMessage(542333);
				tv0->ClearReplies();
				tv0->AddReply(542334, 44694, 44693);
				return;
			}
			if (a0 == 44694) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(542335);
				tv0->ClearReplies();
				tv0->AddReply(542336, 44697, 44695);
				tv0->AddReply(542337, 44697, 44696);
				return;
			}
			if (a0 == 44697) {
				f_a9_a1_v("Agression");
				tv0->SetMessage(542338);
				tv0->ClearReplies();
				tv0->AddReply(542339, -1, 44698);
				tv0->AddReply(542340, 44690, 44700);
				return;
			}
			if (a0 == 44690) {
				f_a9_a1_v("Doubt");
				tv0->SetMessage(542331);
				tv0->ClearReplies();
				tv0->AddReply(542341, 44704, 44702);
				tv0->AddReply(542342, 44704, 44703);
				return;
			}
			if (a0 == 44704) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(542343);
				tv0->ClearReplies();
				tv0->AddReply(525810, -1, 27116);
				return;
			}
			if (a0 == 44685) {
				f_a9_a1_v("Sorrow");
				tv0->SetMessage(542326);
				tv0->ClearReplies();
				tv0->AddReply(542328, 44688, 44687);
				tv0->AddReply(542344, 44688, 44706);
				return;
			}
			if (a0 == 44688) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(542329);
				tv0->ClearReplies();
				tv0->AddReply(525809, -1, 27115);
				return;
			}
			tv3 = true;
			if (f_4e1_a0_b()) {
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

	void f_1c8_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_1f9_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_42b_a0_o());
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
			@RemoveActor(f_42b_a0_o());
			@Hold();
		}
		f_264_a0_v();
	}

	void OnLoad(void)
	{
		f_273_a0_v();
	}

	void f_1f9_a0_v(void)
	{
		if (!f_310_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_2a9_a0_v();
		}
	}

	bool f_207_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_307_a1_b(L0);
	}

	void f_216_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_21b_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_2f5_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_231_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_23a_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_23a_a0_v();
			if (f_310_a0_b() && f_21b_a0_b()) {
				if (f_207_a0_b()) {
					f_3a6_a1_b(f_42b_a0_o());
				}
			} else {
				f_216_a0_v();
				f_231_a0_v();
			}
		}
	}

	void f_264_a0_v(void)
	{
		f_2f0_a0_v();
		f_23a_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_273_a0_v(void)
	{
		@StopGroup0();
		f_23a_a0_v();
		f_3f6_a1_v("Neutral");
		f_231_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_231_a0_v();
		} else {
			f_3f6_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_2f0_a0_v();
			f_307_a1_b(a0);
			enable OnUse;
			f_1c8_a1_v(a0);
			f_3f6_a1_v("Neutral");
			f_23a_a0_v();
			f_231_a0_v();
		}
	}
}

void f_2a9_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_310_a0_b()) {
		return;
	}
	L0 = f_450_a0_i();
	for (L1 = 0; L1 < 5 && f_310_a0_b(); L1++) {
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
			@PlayAnimation("all", f_449_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_2ee_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2ee_a0_b(void)
{
	return true;
}

void f_2f0_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2f5_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2fd_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_307_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_2fd_a1_b(L0);
}

bool f_310_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_315_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_431_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_4e1_a0_b()) {
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

void f_35a_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_4e1_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_36c_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3a6_a1_b(a0)) {
			if (!f_3cb_a1_b(a0)) {
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
		if (!f_3cb_a1_b(a0)) {
			if (!f_3a6_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3a6_a1_b(object a0)
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
	return f_415_a1_b(L4);
}

bool f_3cb_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_440_a0_i() + "m";
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
	return f_415_a1_b(L4);
}

void f_3f6_a1_v(string a0)
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

void f_406_a2_v(string a0, bool a1)
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

bool f_415_a1_b(string a0)
{
	if (f_4e1_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_424_a0_v(void)
{
	if (f_4e1_a0_b()) {
		@lshStopSpeech();
	}
}

object f_42b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_431_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_43b_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_440_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_449_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_450_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_449_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_461_a2_v(object a0, object a1)
{
	@SetVariable("k4q03", 3);
	f_492_a0_v();
}

void f_46a_a2_v(object a0, object a1)
{
	@SetVariable("k4q03", 4);
	f_485_a0_v();
}

void f_473_a2_v(object a0, object a1)
{
	@SetVariable("ook4BurahIndoor1", 1);
}

bool f_479_a1_b(object a0)
{
	if (f_43b_a1_i("ook4BurahIndoor1") == 0) {
		return true;
	}
	return false;
}

void f_485_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 506, 2, 529270);
	f_4ac_a2_b(L0, 384);
}

void f_492_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 505, 2, 529269);
	f_4ac_a2_b(L0, 384);
}

object f_49f_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_4ac_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_49f_a0_o();
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

int f_4c8_a0_i(void)
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

int f_4d9_a0_i(void)
{
	return 515592;
}

int f_4db_a0_i(void)
{
	return 511961;
}

string f_4dd_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_4df_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_4e1_a0_b(void)
{
	return true;
}

