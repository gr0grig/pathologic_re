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
		if (!f_1eb_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_350_a0_i());
		L0->SetNPCDescription(f_34e_a0_i());
		L0->SetPhoto(f_352_a0_s());
		L0->SetPhoto2(f_354_a0_s());
		L0->SetPlayerName(f_33d_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_242_a1_b(f_301_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_230_a1_v(a0);
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
			if (!f_325_a1_b(tv1)) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(539204);
				tv0->ClearReplies();
				if (f_331_a1_b(tv1)) {
					tv0->AddReply(539205, 43669, 41148);
				}
				if (f_331_a1_b(tv1)) {
					tv0->AddReply(541506, 45318, 43668);
				}
				tv0->AddReply(543011, -1, 45463);
				break;
			}
			f_b4_a1_v("Neutral");
			tv0->SetMessage(539206);
			tv0->ClearReplies();
			tv0->AddReply(539207, -1, 41150);
			tv0->AddReply(541505, -1, 43667);
			break;
			return;
		}
		if (f_356_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2cc_a1_v(tv2);
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

	void f_b4_a1_v(string a0)
	{
		if (!f_356_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2dc_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_2fa_a0_v();
			if (a1 == 41148) {
				f_31f_a2_v(tv1, tv0);
			}
			if (a1 == 43668) {
				f_31f_a2_v(tv1, tv0);
			}
			if (a0 == 41147) {
				if (!f_325_a1_b(tv1)) {
					f_b4_a1_v("Neutral");
					tv0->SetMessage(539204);
					tv0->ClearReplies();
					if (f_331_a1_b(tv1)) {
						tv0->AddReply(539205, 43669, 41148);
					}
					if (f_331_a1_b(tv1)) {
						tv0->AddReply(541506, 45318, 43668);
					}
					tv0->AddReply(543011, -1, 45463);
					return;
				}
				f_b4_a1_v("Neutral");
				tv0->SetMessage(539206);
				tv0->ClearReplies();
				tv0->AddReply(539207, -1, 41150);
				tv0->AddReply(541505, -1, 43667);
				return;
			}
			if (a0 == 43669) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(541507);
				tv0->ClearReplies();
				tv0->AddReply(541508, 43671, 43670);
				tv0->AddReply(541510, 43673, 43672);
				return;
			}
			if (a0 == 43671) {
				f_b4_a1_v("Sorrow");
				tv0->SetMessage(541509);
				tv0->ClearReplies();
				tv0->AddReply(541513, 43673, 43675);
				return;
			}
			if (a0 == 43673) {
				f_b4_a1_v("Sorrow");
				tv0->SetMessage(541511);
				tv0->ClearReplies();
				tv0->AddReply(541512, 45318, 43674);
				tv0->AddReply(541514, 45318, 43677);
				return;
			}
			if (a0 == 45318) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(542892);
				tv0->ClearReplies();
				tv0->AddReply(542893, -1, 45319);
				tv0->AddReply(542894, 45323, 45320);
				return;
			}
			if (a0 == 45323) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(542895);
				tv0->ClearReplies();
				tv0->AddReply(542896, 45325, 45324);
				return;
			}
			if (a0 == 45325) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(542897);
				tv0->ClearReplies();
				tv0->AddReply(542899, -1, 45328);
				tv0->AddReply(542900, -1, 45329);
				return;
			}
			tv3 = true;
			if (f_356_a0_b()) {
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

	void init(void)
	{
		f_1b9_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_1b9_a0_v(void)
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
			if (!L0 && f_1e9_a0_b()) {
				@RemoveActor(f_301_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_1e9_a0_b()) {
			@RemoveActor(f_301_a0_o());
		}
	}
}

bool f_1e9_a0_b(void)
{
	return true;
}

bool f_1eb_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_307_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_356_a0_b()) {
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

void f_230_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_356_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_242_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_27c_a1_b(a0)) {
			if (!f_2a1_a1_b(a0)) {
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
		if (!f_2a1_a1_b(a0)) {
			if (!f_27c_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_27c_a1_b(object a0)
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
	return f_2eb_a1_b(L4);
}

bool f_2a1_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_316_a0_i() + "m";
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
	return f_2eb_a1_b(L4);
}

void f_2cc_a1_v(string a0)
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

void f_2dc_a2_v(string a0, bool a1)
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

bool f_2eb_a1_b(string a0)
{
	if (f_356_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_2fa_a0_v(void)
{
	if (f_356_a0_b()) {
		@lshStopSpeech();
	}
}

object f_301_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_307_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_311_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_316_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_31f_a2_v(object a0, object a1)
{
	@SetVariable("ook12DankoSobor1", 1);
}

bool f_325_a1_b(object a0)
{
	if (f_311_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_331_a1_b(object a0)
{
	if (f_311_a1_i("ook12DankoSobor1") == 0) {
		return true;
	}
	return false;
}

int f_33d_a0_i(void)
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

int f_34e_a0_i(void)
{
	return 515573;
}

int f_350_a0_i(void)
{
	return 504032;
}

string f_352_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_354_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_356_a0_b(void)
{
	return true;
}

