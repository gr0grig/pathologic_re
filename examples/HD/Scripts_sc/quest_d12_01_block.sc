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
		if (!f_273_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_47f_a0_i());
		L0->SetNPCDescription(f_47d_a0_i());
		L0->SetPhoto(f_481_a0_s());
		L0->SetPhoto2(f_483_a0_s());
		L0->SetPlayerName(f_46c_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2ca_a1_b(f_389_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2b8_a1_v(a0);
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
			if (!f_3eb_a1_b(tv1)) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(535541);
				tv0->ClearReplies();
				tv0->AddReply(535542, 37226, 37225);
				tv0->AddReply(540019, 41991, 41990);
				if (f_3f7_a1_b(tv1)) {
					tv0->AddReply(535545, 42317, 37228);
				}
				if (f_403_a1_b(tv1)) {
					tv0->AddReply(535559, 37243, 37242);
				}
				tv0->AddReply(540276, 42323, 42256);
				break;
			}
			f_b9_a1_v("Neutral");
			tv0->SetMessage(535564);
			tv0->ClearReplies();
			tv0->AddReply(535565, -1, 37248);
			break;
			return;
		}
		if (f_485_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_354_a1_v(tv2);
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

	void f_b9_a1_v(string a0)
	{
		if (!f_485_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_364_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_382_a0_v();
			if (a1 == 37241) {
				f_3be_a2_v(tv1, tv0);
				f_3dc_a2_v(tv1, tv0);
				f_3ca_a2_v(tv1, tv0);
			}
			if (a1 == 37236) {
				f_3b8_a2_v(tv1, tv0);
				f_3e6_a2_v(tv1, tv0);
				f_3ca_a2_v(tv1, tv0);
			}
			if (a1 == 37246) {
				f_3c4_a2_v(tv1, tv0);
				f_3e1_a2_v(tv1, tv0);
				f_3ca_a2_v(tv1, tv0);
			}
			if (a1 == 42258) {
				f_3d1_a2_v(tv1, tv0);
				f_3ca_a2_v(tv1, tv0);
				f_3d7_a2_v(tv1, tv0);
			}
			if (a0 == 37224) {
				if (!f_3eb_a1_b(tv1)) {
					f_b9_a1_v("Neutral");
					tv0->SetMessage(535541);
					tv0->ClearReplies();
					tv0->AddReply(535542, 37226, 37225);
					tv0->AddReply(540019, 41991, 41990);
					if (f_3f7_a1_b(tv1)) {
						tv0->AddReply(535545, 42317, 37228);
					}
					if (f_403_a1_b(tv1)) {
						tv0->AddReply(535559, 37243, 37242);
					}
					tv0->AddReply(540276, 42323, 42256);
					return;
				}
				f_b9_a1_v("Neutral");
				tv0->SetMessage(535564);
				tv0->ClearReplies();
				tv0->AddReply(535565, -1, 37248);
				return;
			}
			if (a0 == 42323) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(540340);
				tv0->ClearReplies();
				tv0->AddReply(540278, -1, 42258);
				return;
			}
			if (a0 == 37243) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(535560);
				tv0->ClearReplies();
				tv0->AddReply(535561, 37245, 37244);
				return;
			}
			if (a0 == 37245) {
				f_b9_a1_v("Doubt");
				tv0->SetMessage(535562);
				tv0->ClearReplies();
				tv0->AddReply(535563, -1, 37246);
				return;
			}
			if (a0 == 42317) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(540334);
				tv0->ClearReplies();
				tv0->AddReply(540336, 42320, 42319);
				return;
			}
			if (a0 == 42320) {
				f_b9_a1_v("Doubt");
				tv0->SetMessage(540337);
				tv0->ClearReplies();
				tv0->AddReply(535553, -1, 37236);
				return;
			}
			if (a0 == 41991) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(540020);
				tv0->ClearReplies();
				tv0->AddReply(540021, 41993, 41992);
				return;
			}
			if (a0 == 41993) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(540022);
				tv0->ClearReplies();
				tv0->AddReply(540023, 41995, 41994);
				return;
			}
			if (a0 == 41995) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(540024);
				tv0->ClearReplies();
				tv0->AddReply(540025, 37238, 41996);
				return;
			}
			if (a0 == 37238) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(535555);
				tv0->ClearReplies();
				tv0->AddReply(535556, 37240, 37239);
				return;
			}
			if (a0 == 37240) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(535557);
				tv0->ClearReplies();
				tv0->AddReply(535558, -1, 37241);
				return;
			}
			if (a0 == 37226) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(535543);
				tv0->ClearReplies();
				tv0->AddReply(535544, -1, 37227);
				return;
			}
			tv3 = true;
			if (f_485_a0_b()) {
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
		f_241_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_241_a0_v(void)
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
			if (!L0 && f_271_a0_b()) {
				@RemoveActor(f_389_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_271_a0_b()) {
			@RemoveActor(f_389_a0_o());
		}
	}
}

bool f_271_a0_b(void)
{
	return true;
}

bool f_273_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_38f_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_485_a0_b()) {
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

void f_2b8_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_485_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2ca_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_304_a1_b(a0)) {
			if (!f_329_a1_b(a0)) {
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
		if (!f_329_a1_b(a0)) {
			if (!f_304_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_304_a1_b(object a0)
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
	return f_373_a1_b(L4);
}

bool f_329_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_3af_a0_i() + "m";
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
	return f_373_a1_b(L4);
}

void f_354_a1_v(string a0)
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

void f_364_a2_v(string a0, bool a1)
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

bool f_373_a1_b(string a0)
{
	if (f_485_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_382_a0_v(void)
{
	if (f_485_a0_b()) {
		@lshStopSpeech();
	}
}

object f_389_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_38f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_399_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_39e_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

int f_3af_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_3b8_a2_v(object a0, object a1)
{
	@SetVariable("game_final", 1);
}

void f_3be_a2_v(object a0, object a1)
{
	@SetVariable("game_final", 2);
}

void f_3c4_a2_v(object a0, object a1)
{
	@SetVariable("game_final", 3);
}

void f_3ca_a2_v(object a0, object a1)
{
	f_39e_a2_v("isobor@door1", false);
}

void f_3d1_a2_v(object a0, object a1)
{
	@SetVariable("game_final", 4);
}

void f_3d7_a2_v(object a0, object a1)
{
	f_40f_a0_v();
}

void f_3dc_a2_v(object a0, object a1)
{
	f_436_a0_v();
}

void f_3e1_a2_v(object a0, object a1)
{
	f_41c_a0_v();
}

void f_3e6_a2_v(object a0, object a1)
{
	f_429_a0_v();
}

bool f_3eb_a1_b(object a0)
{
	if (f_399_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_3f7_a1_b(object a0)
{
	if (f_399_a1_i("d12q01BurahInSobor") != 0) {
		return true;
	}
	return false;
}

bool f_403_a1_b(object a0)
{
	if (f_399_a1_i("d12q01KlaraInSobor") != 0) {
		return true;
	}
	return false;
}

void f_40f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 773, 1, 540274);
	f_450_a2_b(L0, 699);
}

void f_41c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 704, 1, 535687);
	f_450_a2_b(L0, 699);
}

void f_429_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 702, 1, 535685);
	f_450_a2_b(L0, 699);
}

void f_436_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 703, 1, 535686);
	f_450_a2_b(L0, 699);
}

object f_443_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_450_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_443_a0_o();
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

int f_46c_a0_i(void)
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

int f_47d_a0_i(void)
{
	return 515532;
}

int f_47f_a0_i(void)
{
	return 514840;
}

string f_481_a0_s(void)
{
	return "ui/NPC_Block.png";
}

string f_483_a0_s(void)
{
	return "ui/NPC_Block_b.png";
}

bool f_485_a0_b(void)
{
	return true;
}

