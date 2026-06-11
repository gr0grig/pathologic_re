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
		f_291_a1_b(f_33e_a0_o());
		if (!f_23c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3a5_a0_i());
		L0->SetNPCDescription(f_3a3_a0_i());
		L0->SetPhoto(f_3a7_a0_s());
		L0->SetPhoto2(f_3a9_a0_s());
		L0->SetPlayerName(f_392_a0_i());
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
		f_280_a1_v(a0);
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
			f_a4_a1_v("Neutral");
			tv0->SetMessage(540306);
			tv0->ClearReplies();
			if (f_36e_a1_b(tv1)) {
				tv0->AddReply(540307, 42289, 42288);
			}
			if (f_37a_a1_b(tv1)) {
				tv0->AddReply(540320, 42303, 42302);
			}
			if (f_386_a1_b(tv1)) {
				tv0->AddReply(540323, 42306, 42305);
			}
			tv0->AddReply(540333, -1, 42315);
			break;
			return;
		}
		if (f_3ab_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_31b_a1_v(tv2);
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
		if (!f_3ab_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_322_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_337_a0_v();
			if (a1 == 42288) {
				f_35c_a2_v(tv1, tv0);
			}
			if (a1 == 42302) {
				f_362_a2_v(tv1, tv0);
			}
			if (a1 == 42305) {
				f_368_a2_v(tv1, tv0);
			}
			if (a0 == 42287) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540306);
				tv0->ClearReplies();
				if (f_36e_a1_b(tv1)) {
					tv0->AddReply(540307, 42289, 42288);
				}
				if (f_37a_a1_b(tv1)) {
					tv0->AddReply(540320, 42303, 42302);
				}
				if (f_386_a1_b(tv1)) {
					tv0->AddReply(540323, 42306, 42305);
				}
				tv0->AddReply(540333, -1, 42315);
				return;
			}
			if (a0 == 42306) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540324);
				tv0->ClearReplies();
				tv0->AddReply(540325, 42308, 42307);
				tv0->AddReply(540384, -1, 42370);
				return;
			}
			if (a0 == 42308) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540326);
				tv0->ClearReplies();
				tv0->AddReply(540327, 42310, 42309);
				return;
			}
			if (a0 == 42310) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540328);
				tv0->ClearReplies();
				tv0->AddReply(540329, -1, 42311);
				tv0->AddReply(540385, -1, 42371);
				return;
			}
			if (a0 == 42303) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540321);
				tv0->ClearReplies();
				tv0->AddReply(540322, -1, 42304);
				tv0->AddReply(540372, -1, 42355);
				return;
			}
			if (a0 == 42289) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540308);
				tv0->ClearReplies();
				tv0->AddReply(540309, 42356, 42290);
				tv0->AddReply(540319, 42351, 42300);
				return;
			}
			if (a0 == 42351) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540368);
				tv0->ClearReplies();
				tv0->AddReply(540369, 42354, 42352);
				tv0->AddReply(540370, 42356, 42353);
				return;
			}
			if (a0 == 42354) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540371);
				tv0->ClearReplies();
				tv0->AddReply(540375, 42360, 42359);
				return;
			}
			if (a0 == 42356) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540373);
				tv0->ClearReplies();
				tv0->AddReply(540374, 42360, 42358);
				return;
			}
			if (a0 == 42360) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540376);
				tv0->ClearReplies();
				tv0->AddReply(540377, 42363, 42362);
				tv0->AddReply(540379, 42365, 42364);
				return;
			}
			if (a0 == 42365) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540380);
				tv0->ClearReplies();
				tv0->AddReply(540381, 42363, 42366);
				return;
			}
			if (a0 == 42363) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(540378);
				tv0->ClearReplies();
				tv0->AddReply(540382, -1, 42368);
				tv0->AddReply(540383, -1, 42369);
				return;
			}
			tv3 = true;
			if (f_3ab_a0_b()) {
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
		f_20a_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_20a_a0_v(void)
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
			if (!L0 && f_23a_a0_b()) {
				@RemoveActor(f_33e_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_23a_a0_b()) {
			@RemoveActor(f_33e_a0_o());
		}
	}
}

bool f_23a_a0_b(void)
{
	return true;
}

bool f_23c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_344_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_3ab_a0_b()) {
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

void f_280_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_3ab_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_291_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_2cb_a1_b(a0)) {
			if (!f_2f0_a1_b(a0)) {
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
		if (!f_2f0_a1_b(a0)) {
			if (!f_2cb_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_2cb_a1_b(object a0)
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
	return f_328_a1_b(L4);
}

bool f_2f0_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_353_a0_i() + "m";
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
	return f_328_a1_b(L4);
}

void f_31b_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_322_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_328_a1_b(string a0)
{
	if (f_3ab_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_337_a0_v(void)
{
	if (f_3ab_a0_b()) {
		@lshStopSpeech();
	}
}

object f_33e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_344_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_34e_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_353_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_35c_a2_v(object a0, object a1)
{
	@SetVariable("ood12BurahSobor1", 1);
}

void f_362_a2_v(object a0, object a1)
{
	@SetVariable("ood12BurahSobor2", 1);
}

void f_368_a2_v(object a0, object a1)
{
	@SetVariable("ood12BurahSobor3", 1);
}

bool f_36e_a1_b(object a0)
{
	if (f_34e_a1_i("ood12BurahSobor1") == 0) {
		return true;
	}
	return false;
}

bool f_37a_a1_b(object a0)
{
	if (f_34e_a1_i("ood12BurahSobor2") == 0) {
		return true;
	}
	return false;
}

bool f_386_a1_b(object a0)
{
	if (f_34e_a1_i("ood12BurahSobor3") == 0) {
		return true;
	}
	return false;
}

int f_392_a0_i(void)
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

int f_3a3_a0_i(void)
{
	return 515592;
}

int f_3a5_a0_i(void)
{
	return 511961;
}

string f_3a7_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_3a9_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_3ab_a0_b(void)
{
	return true;
}

