event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnUnload 6;

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
		f_261_a1_b(f_30e_a0_o());
		if (!f_20c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3df_a0_i());
		L0->SetNPCDescription(f_3dd_a0_i());
		L0->SetPhoto(f_3e1_a0_s());
		L0->SetPhoto2(f_3e3_a0_s());
		L0->SetPlayerName(f_3cc_a0_i());
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
		f_250_a1_v(a0);
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
			if (f_358_a1_b(tv1)) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(525762);
				tv0->ClearReplies();
				tv0->AddReply(529224, 43014, 30677);
				tv0->AddReply(529229, 30678, 30682);
				break;
			}
			f_a4_a1_v("Neutral");
			tv0->SetMessage(525766);
			tv0->ClearReplies();
			tv0->AddReply(525767, -1, 27079);
			tv0->AddReply(529227, -1, 30680);
			break;
			return;
		}
		if (f_3e5_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2eb_a1_v(tv2);
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

	void f_a4_a1_v(string a0)
	{
		if (!f_3e5_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2f2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_307_a0_v();
			if (a1 == 27077) {
				f_331_a2_v(tv1, tv0);
				f_348_a2_v(tv1, tv0);
			}
			if (a1 == 43034) {
				f_331_a2_v(tv1, tv0);
				f_348_a2_v(tv1, tv0);
			}
			if (a0 == 27074) {
				if (f_358_a1_b(tv1)) {
					f_a4_a1_v("Neutral");
					tv0->SetMessage(525762);
					tv0->ClearReplies();
					tv0->AddReply(529224, 43014, 30677);
					tv0->AddReply(529229, 30678, 30682);
					return;
				}
				f_a4_a1_v("Neutral");
				tv0->SetMessage(525766);
				tv0->ClearReplies();
				tv0->AddReply(525767, -1, 27079);
				tv0->AddReply(529227, -1, 30680);
				return;
			}
			if (a0 == 43014) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540934);
				tv0->ClearReplies();
				tv0->AddReply(540935, 43016, 43015);
				tv0->AddReply(540938, 43019, 43018);
				return;
			}
			if (a0 == 43019) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540939);
				tv0->ClearReplies();
				tv0->AddReply(540940, 43016, 43020);
				return;
			}
			if (a0 == 43016) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540936);
				tv0->ClearReplies();
				tv0->AddReply(540937, 43022, 43017);
				tv0->AddReply(540943, 43022, 43024);
				return;
			}
			if (a0 == 43022) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540941);
				tv0->ClearReplies();
				tv0->AddReply(540942, 30678, 43023);
				tv0->AddReply(540944, 43027, 43026);
				return;
			}
			if (a0 == 43027) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540945);
				tv0->ClearReplies();
				tv0->AddReply(540946, 43029, 43028);
				return;
			}
			if (a0 == 43029) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540947);
				tv0->ClearReplies();
				tv0->AddReply(540948, 30678, 43030);
				return;
			}
			if (a0 == 30678) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(529225);
				tv0->ClearReplies();
				tv0->AddReply(529226, 30681, 30679);
				tv0->AddReply(540949, 30681, 43032);
				return;
			}
			if (a0 == 30681) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(529228);
				tv0->ClearReplies();
				tv0->AddReply(525763, 27076, 27075);
				return;
			}
			if (a0 == 27076) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(525764);
				tv0->ClearReplies();
				tv0->AddReply(525765, -1, 27077);
				tv0->AddReply(540950, -1, 43034);
				return;
			}
			tv3 = true;
			if (f_3e5_a0_b()) {
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
	var bool tv0;

	void OnUse(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_20a_a0_b()) {
				@RemoveActor(f_30e_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_20a_a0_b()) {
			@RemoveActor(f_30e_a0_o());
		}
	}
}

bool f_20a_a0_b(void)
{
	return true;
}

bool f_20c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_314_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_3e5_a0_b()) {
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

void f_250_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_3e5_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_261_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_29b_a1_b(a0)) {
			if (!f_2c0_a1_b(a0)) {
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
		if (!f_2c0_a1_b(a0)) {
			if (!f_29b_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_29b_a1_b(object a0)
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
	return f_2f8_a1_b(L4);
}

bool f_2c0_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_328_a0_i() + "m";
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
	return f_2f8_a1_b(L4);
}

void f_2eb_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_2f2_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_2f8_a1_b(string a0)
{
	if (f_3e5_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_307_a0_v(void)
{
	if (f_3e5_a0_b()) {
		@lshStopSpeech();
	}
}

object f_30e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_314_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_31e_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

float f_323_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_328_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_331_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k4q02", 2);
	L0 = f_39a_a0_o();
	L0->AddMark("k4q02MarkGotoTheater", "pt_map_theater", 0, 539602, f_323_a0_f());
	f_364_a0_v();
}

void f_348_a2_v(object a0, object a1)
{
	f_3ab_a3_v(f_39a_a0_o(), "pt_map_theater", 2);
	a1->ShowMap(f_39a_a0_o());
}

bool f_358_a1_b(object a0)
{
	if (f_31e_a1_i("k4q02") == 1) {
		return true;
	}
	return false;
}

void f_364_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 381, 2, 525787);
	f_37e_a2_b(L0, 378);
}

object f_371_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_37e_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_371_a0_o();
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

object f_39a_a0_o(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("Can't find main outdoor scene");
		L1 = null;
		return L1;
	}
	L0->GetMap(L1);
	return L1;
}

void f_3ab_a3_v(object a0, string a1, float a2)
{
	Vector L0;
	Vector L1;
	object L2;
	bool L3;
	@GetMainOutdoorScene(L2);
	if (L2 == null) {
		@Trace("Can't find main outdoor scene");
		return;
	}
	L2->GetLocator(a1, L3, L0, L1);
	if (!L3) {
		@Trace("Warning: outdoor scene locator " + a1 + " doesnt exist");
	}
	L2->GetMap(a0);
	if (a0 == null) {
		@Trace("Can't find map");
		return;
	}
	a0->SetMapParams(L0.x, L0.z, a2);
}

int f_3cc_a0_i(void)
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

int f_3dd_a0_i(void)
{
	return 515544;
}

int f_3df_a0_i(void)
{
	return 502869;
}

string f_3e1_a0_s(void)
{
	return "ui/NPC_Mark.png";
}

string f_3e3_a0_s(void)
{
	return "ui/NPC_Mark_b.png";
}

bool f_3e5_a0_b(void)
{
	return true;
}

