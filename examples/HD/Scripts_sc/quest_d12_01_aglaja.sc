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
		if (!f_213_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_36c_a0_i());
		L0->SetNPCDescription(f_36a_a0_i());
		L0->SetPhoto(f_36e_a0_s());
		L0->SetPhoto2(f_370_a0_s());
		L0->SetPlayerName(f_359_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_26a_a1_b(f_329_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_258_a1_v(a0);
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
			f_95_a1_v("Neutral");
			tv0->SetMessage(538452);
			tv0->ClearReplies();
			if (f_34d_a1_b(tv1)) {
				tv0->AddReply(538453, 40350, 40335);
			}
			tv0->AddReply(538470, -1, 40352);
			tv0->AddReply(538472, -1, 40354);
			break;
			return;
		}
		if (f_372_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2f4_a1_v(tv2);
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

	void f_95_a1_v(string a0)
	{
		if (!f_372_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_304_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_322_a0_v();
			if (a1 == 40335) {
				f_347_a2_v(tv1, tv0);
			}
			if (a0 == 40334) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(538452);
				tv0->ClearReplies();
				if (f_34d_a1_b(tv1)) {
					tv0->AddReply(538453, 40350, 40335);
				}
				tv0->AddReply(538470, -1, 40352);
				tv0->AddReply(538472, -1, 40354);
				return;
			}
			if (a0 == 40350) {
				f_95_a1_v("Isee");
				tv0->SetMessage(538468);
				tv0->ClearReplies();
				tv0->AddReply(539946, 41911, 41910);
				tv0->AddReply(539948, -1, 41912);
				return;
			}
			if (a0 == 41911) {
				f_95_a1_v("Isee");
				tv0->SetMessage(539947);
				tv0->ClearReplies();
				tv0->AddReply(539949, 41914, 41913);
				tv0->AddReply(539951, -1, 41915);
				return;
			}
			if (a0 == 41914) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(539950);
				tv0->ClearReplies();
				tv0->AddReply(538469, 40336, 40351);
				tv0->AddReply(539952, 40338, 41916);
				return;
			}
			if (a0 == 40336) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(538454);
				tv0->ClearReplies();
				tv0->AddReply(538455, 40338, 40337);
				tv0->AddReply(539953, 40342, 41918);
				return;
			}
			if (a0 == 40338) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(538456);
				tv0->ClearReplies();
				tv0->AddReply(538457, 40340, 40339);
				return;
			}
			if (a0 == 40340) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(538458);
				tv0->ClearReplies();
				tv0->AddReply(538459, 40342, 40341);
				return;
			}
			if (a0 == 40342) {
				f_95_a1_v("Threat");
				tv0->SetMessage(538460);
				tv0->ClearReplies();
				tv0->AddReply(538461, 40344, 40343);
				tv0->AddReply(538475, 40344, 40358);
				return;
			}
			if (a0 == 40344) {
				f_95_a1_v("Threat");
				tv0->SetMessage(538462);
				tv0->ClearReplies();
				tv0->AddReply(538463, 40346, 40345);
				return;
			}
			if (a0 == 40346) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(538464);
				tv0->ClearReplies();
				tv0->AddReply(538465, 40348, 40347);
				tv0->AddReply(538474, 40348, 40356);
				return;
			}
			if (a0 == 40348) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(538466);
				tv0->ClearReplies();
				tv0->AddReply(538467, 16089, 40349);
				tv0->AddReply(538473, 16089, 40355);
				return;
			}
			if (a0 == 16089) {
				f_95_a1_v("Arrogance");
				tv0->SetMessage(514843);
				tv0->ClearReplies();
				tv0->AddReply(514844, -1, 16090);
				tv0->AddReply(514845, -1, 16091);
				return;
			}
			tv3 = true;
			if (f_372_a0_b()) {
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
		f_1e1_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_1e1_a0_v(void)
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
			if (!L0 && f_211_a0_b()) {
				@RemoveActor(f_329_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_211_a0_b()) {
			@RemoveActor(f_329_a0_o());
		}
	}
}

bool f_211_a0_b(void)
{
	return true;
}

bool f_213_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_32f_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_372_a0_b()) {
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

void f_258_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_372_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_26a_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_2a4_a1_b(a0)) {
			if (!f_2c9_a1_b(a0)) {
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
		if (!f_2c9_a1_b(a0)) {
			if (!f_2a4_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_2a4_a1_b(object a0)
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
	return f_313_a1_b(L4);
}

bool f_2c9_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_33e_a0_i() + "m";
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
	return f_313_a1_b(L4);
}

void f_2f4_a1_v(string a0)
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

void f_304_a2_v(string a0, bool a1)
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

bool f_313_a1_b(string a0)
{
	if (f_372_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_322_a0_v(void)
{
	if (f_372_a0_b()) {
		@lshStopSpeech();
	}
}

object f_329_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_32f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_339_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_33e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_347_a2_v(object a0, object a1)
{
	@SetVariable("ood12AglajaSobor1", 1);
}

bool f_34d_a1_b(object a0)
{
	if (f_339_a1_i("ood12AglajaSobor1") == 0) {
		return true;
	}
	return false;
}

int f_359_a0_i(void)
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

int f_36a_a0_i(void)
{
	return 515527;
}

int f_36c_a0_i(void)
{
	return 513334;
}

string f_36e_a0_s(void)
{
	return "ui/NPC_Aglaja.png";
}

string f_370_a0_s(void)
{
	return "ui/NPC_Aglaja_b.png";
}

bool f_372_a0_b(void)
{
	return true;
}

