event OnDialogReply 11;
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
		if (!f_232_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_397_a0_i());
		L0->SetNPCDescription(f_395_a0_i());
		L0->SetPhoto(f_399_a0_s());
		L0->SetPhoto2(f_39b_a0_s());
		L0->SetPlayerName(f_384_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_289_a1_b(f_348_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_277_a1_v(a0);
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
			if (!f_36c_a1_b(tv1)) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(522180);
				tv0->ClearReplies();
				if (f_378_a1_b(tv1)) {
					tv0->AddReply(523135, 24336, 24335);
				}
				tv0->AddReply(522181, -1, 23348);
				break;
			}
			f_a5_a1_v("Neutral");
			tv0->SetMessage(523165);
			tv0->ClearReplies();
			tv0->AddReply(523166, -1, 24368);
			break;
			return;
		}
		if (f_39d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_313_a1_v(tv2);
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

	void f_a5_a1_v(string a0)
	{
		if (!f_39d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_323_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_341_a0_v();
			if (a1 == 24335) {
				f_366_a2_v(tv1, tv0);
			}
			if (a0 == 23347) {
				if (!f_36c_a1_b(tv1)) {
					f_a5_a1_v("Neutral");
					tv0->SetMessage(522180);
					tv0->ClearReplies();
					if (f_378_a1_b(tv1)) {
						tv0->AddReply(523135, 24336, 24335);
					}
					tv0->AddReply(522181, -1, 23348);
					return;
				}
				f_a5_a1_v("Neutral");
				tv0->SetMessage(523165);
				tv0->ClearReplies();
				tv0->AddReply(523166, -1, 24368);
				return;
			}
			if (a0 == 24336) {
				f_a5_a1_v("Strength");
				tv0->SetMessage(523136);
				tv0->ClearReplies();
				tv0->AddReply(523137, 24338, 24337);
				tv0->AddReply(540123, 42093, 42092);
				return;
			}
			if (a0 == 42093) {
				f_a5_a1_v("Strength");
				tv0->SetMessage(540124);
				tv0->ClearReplies();
				tv0->AddReply(540125, 42095, 42094);
				tv0->AddReply(540128, 42095, 42097);
				return;
			}
			if (a0 == 42095) {
				f_a5_a1_v("Strength");
				tv0->SetMessage(540126);
				tv0->ClearReplies();
				tv0->AddReply(540127, 24338, 42096);
				return;
			}
			if (a0 == 24338) {
				f_a5_a1_v("Sympathy");
				tv0->SetMessage(523138);
				tv0->ClearReplies();
				tv0->AddReply(523139, 24340, 24339);
				tv0->AddReply(523149, 24350, 24349);
				return;
			}
			if (a0 == 24350) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(523150);
				tv0->ClearReplies();
				tv0->AddReply(523151, -1, 24351);
				tv0->AddReply(523152, 24340, 24352);
				return;
			}
			if (a0 == 24340) {
				f_a5_a1_v("Sympathy");
				tv0->SetMessage(523140);
				tv0->ClearReplies();
				tv0->AddReply(523141, 24342, 24341);
				tv0->AddReply(523153, 24355, 24354);
				return;
			}
			if (a0 == 24355) {
				f_a5_a1_v("Sympathy");
				tv0->SetMessage(523154);
				tv0->ClearReplies();
				tv0->AddReply(523155, 24357, 24356);
				return;
			}
			if (a0 == 24357) {
				f_a5_a1_v("Strength");
				tv0->SetMessage(523156);
				tv0->ClearReplies();
				tv0->AddReply(523157, 24342, 24358);
				return;
			}
			if (a0 == 24342) {
				f_a5_a1_v("Sympathy");
				tv0->SetMessage(523142);
				tv0->ClearReplies();
				tv0->AddReply(523143, 24344, 24343);
				return;
			}
			if (a0 == 24344) {
				f_a5_a1_v("Sympathy");
				tv0->SetMessage(523144);
				tv0->ClearReplies();
				tv0->AddReply(523145, 24346, 24345);
				return;
			}
			if (a0 == 24346) {
				f_a5_a1_v("Sympathy");
				tv0->SetMessage(523146);
				tv0->ClearReplies();
				tv0->AddReply(523147, 24348, 24347);
				return;
			}
			if (a0 == 24348) {
				f_a5_a1_v("Fear");
				tv0->SetMessage(523148);
				tv0->ClearReplies();
				tv0->AddReply(523158, -1, 24360);
				return;
			}
			tv3 = true;
			if (f_39d_a0_b()) {
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
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_230_a0_b()) {
				@RemoveActor(f_348_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_230_a0_b()) {
			@RemoveActor(f_348_a0_o());
		}
	}
}

bool f_230_a0_b(void)
{
	return true;
}

bool f_232_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_34e_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_39d_a0_b()) {
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

void f_277_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_39d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_289_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_2c3_a1_b(a0)) {
			if (!f_2e8_a1_b(a0)) {
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
		if (!f_2e8_a1_b(a0)) {
			if (!f_2c3_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_2c3_a1_b(object a0)
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
	return f_332_a1_b(L4);
}

bool f_2e8_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_35d_a0_i() + "m";
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
	return f_332_a1_b(L4);
}

void f_313_a1_v(string a0)
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

void f_323_a2_v(string a0, bool a1)
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

bool f_332_a1_b(string a0)
{
	if (f_39d_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_341_a0_v(void)
{
	if (f_39d_a0_b()) {
		@lshStopSpeech();
	}
}

object f_348_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_34e_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_358_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_35d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_366_a2_v(object a0, object a1)
{
	@SetVariable("oob12KapellaSobor1", 1);
}

bool f_36c_a1_b(object a0)
{
	if (f_358_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_378_a1_b(object a0)
{
	if (f_358_a1_i("oob12KapellaSobor1") == 0) {
		return true;
	}
	return false;
}

int f_384_a0_i(void)
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

int f_395_a0_i(void)
{
	return 515538;
}

int f_397_a0_i(void)
{
	return 502863;
}

string f_399_a0_s(void)
{
	return "ui/NPC_Kapella.png";
}

string f_39b_a0_s(void)
{
	return "ui/NPC_Kapella_b.png";
}

bool f_39d_a0_b(void)
{
	return true;
}

