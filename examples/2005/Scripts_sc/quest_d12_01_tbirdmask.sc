event OnDialogReply 11;
event OnUse 0;
event OnTrigger 26;
event OnLoad 5;
event OnUnload 6;
event OnTimer 7;

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
		if (!f_2bf_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_39d_a0_i());
		L0->SetNPCDescription(f_39b_a0_i());
		L0->SetPhoto(f_39f_a0_s());
		L0->SetPhoto2(f_3a1_a0_s());
		L0->SetPlayerName(f_38a_a0_i());
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
		f_303_a1_v(a0);
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
			f_371_a2_v(tv1, tv0);
			f_8e_a1_v("Neutral");
			tv0->SetMessage(515498);
			tv0->ClearReplies();
			if (f_37e_a1_b(tv1)) {
				tv0->AddReply(515499, 16596, 16595);
			}
			tv0->AddReply(535660, -1, 37346);
			break;
			return;
		}
		if (f_3a3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_314_a1_v(tv2);
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

	void f_8e_a1_v(string a0)
	{
		if (!f_3a3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_31b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_32c_a0_v();
			if (a1 == 16595) {
				f_378_a2_v(tv1, tv0);
			}
			if (a0 == 16594) {
				f_371_a2_v(tv1, tv0);
				f_8e_a1_v("Neutral");
				tv0->SetMessage(515498);
				tv0->ClearReplies();
				if (f_37e_a1_b(tv1)) {
					tv0->AddReply(515499, 16596, 16595);
				}
				tv0->AddReply(535660, -1, 37346);
				return;
			}
			if (a0 == 16596) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(515500);
				tv0->ClearReplies();
				tv0->AddReply(515501, 16598, 16597);
				tv0->AddReply(515523, 16620, 16619);
				return;
			}
			if (a0 == 16620) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(515524);
				tv0->ClearReplies();
				tv0->AddReply(515525, -1, 16621);
				return;
			}
			if (a0 == 16598) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(515502);
				tv0->ClearReplies();
				tv0->AddReply(515503, 16600, 16599);
				tv0->AddReply(515522, 16600, 16618);
				return;
			}
			if (a0 == 16600) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(515504);
				tv0->ClearReplies();
				tv0->AddReply(515505, 16602, 16601);
				return;
			}
			if (a0 == 16602) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(515506);
				tv0->ClearReplies();
				tv0->AddReply(515507, 16604, 16603);
				tv0->AddReply(515513, 16610, 16609);
				return;
			}
			if (a0 == 16610) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(515514);
				tv0->ClearReplies();
				tv0->AddReply(515516, 16613, 16612);
				return;
			}
			if (a0 == 16613) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(515517);
				tv0->ClearReplies();
				tv0->AddReply(515518, -1, 16614);
				tv0->AddReply(515519, 16616, 16615);
				return;
			}
			if (a0 == 16616) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(515520);
				tv0->ClearReplies();
				tv0->AddReply(515521, -1, 16617);
				return;
			}
			if (a0 == 16604) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(515508);
				tv0->ClearReplies();
				tv0->AddReply(515509, 16606, 16605);
				tv0->AddReply(515512, -1, 16608);
				return;
			}
			if (a0 == 16606) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(515510);
				tv0->ClearReplies();
				tv0->AddReply(515511, -1, 16607);
				return;
			}
			tv3 = true;
			if (f_3a3_a0_b()) {
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
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;
	var bool tv5;

	void init(void)
	{
		f_1be_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_24e_a0_v();
		t0{a0};
	}

	void f_1be_a2_v(float a0, float a1)
	{
		for (; ; ) {
			float L0;
			while (!f_2ba_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_20d_a2_v(a0, a1);
			@sync();
		}
	}

	void f_1d7_a0_v(void)
	{
		bool L0;
		tv5 = true;
		@IsLoaded(L0);
		if (!L0 && f_20b_a0_b()) {
			@RemoveActor(f_333_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_1d7_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		f_24e_a0_v();
		if (tv5 && f_20b_a0_b()) {
			@RemoveActor(f_333_a0_o());
		}
	}

	bool f_20b_a0_b(void)
	{
		return true;
	}

	void f_20d_a2_v(float a0, float a1)
	{
		if (!f_2ba_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_25c_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_228_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_2b2_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_228_a0_b()) {
				if (!tv2) {
					f_321_a1_v(tv4);
					tv2 = true;
				}
			} else {
				if (tv2) {
					@UnlookAsync("head");
					tv2 = false;
				}
			}
		}
	}

	void f_24e_a0_v(void)
	{
		f_2ad_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_25c_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2ba_a0_b()) {
		return;
	}
	L0 = f_360_a0_i();
	for (L1 = 0; L1 < 5 && f_2ba_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_359_a1_s(L3));
				@WaitForAnimEnd(L4);
				if (!L4) {
					break;
				}
			}
		} else {
			if (L2 == 1) {
				float L5;
				bool L6;
				@rand(L5, 4);
				@Sleep(L5 + 1, L6);
				if (!L6) {
					break;
				}
			} else {
				if (L1) {
					break;
				}
			}
		}
		if (!f_2ab_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2ab_a0_b(void)
{
	return true;
}

void f_2ad_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2b2_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2ba_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2bf_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_339_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_3a3_a0_b()) {
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

void f_303_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_3a3_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_314_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_31b_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_321_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_32c_a0_v(void)
{
	if (f_3a3_a0_b()) {
		@lshStopSpeech();
	}
}

object f_333_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_339_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_343_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_348_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

string f_359_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_360_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_359_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_371_a2_v(object a0, object a1)
{
	f_348_a2_v("itheater@door1", false);
}

void f_378_a2_v(object a0, object a1)
{
	@SetVariable("ood12TBirdmask1", 1);
}

bool f_37e_a1_b(object a0)
{
	if (f_343_a1_i("ood12TBirdmask1") == 0) {
		return true;
	}
	return false;
}

int f_38a_a0_i(void)
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

int f_39b_a0_i(void)
{
	return 515571;
}

int f_39d_a0_i(void)
{
	return 504029;
}

string f_39f_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_3a1_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_3a3_a0_b(void)
{
	return false;
}

