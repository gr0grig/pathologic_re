event OnDialogReply 11;
event OnUse 0;
event OnTrigger 26;
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
		if (!f_2bc_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_37e_a0_i());
		L0->SetNPCDescription(f_37c_a0_i());
		L0->SetPhoto(f_380_a0_s());
		L0->SetPhoto2(f_382_a0_s());
		L0->SetPlayerName(f_36b_a0_i());
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
		f_301_a1_v(a0);
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
			f_8e_a1_v("Neutral");
			tv0->SetMessage(541166);
			tv0->ClearReplies();
			if (f_35f_a1_b(tv1)) {
				tv0->AddReply(542863, 45290, 45289);
			}
			tv0->AddReply(542768, -1, 45189);
			tv0->AddReply(542791, -1, 45213);
			break;
			return;
		}
		if (f_384_a0_b()) {
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

	void f_8e_a1_v(string a0)
	{
		if (!f_384_a0_b()) {
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
			f_33d_a0_v();
			if (a1 == 45289) {
				f_359_a2_v(tv1, tv0);
			}
			if (a0 == 43292) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(541166);
				tv0->ClearReplies();
				if (f_35f_a1_b(tv1)) {
					tv0->AddReply(542863, 45290, 45289);
				}
				tv0->AddReply(542768, -1, 45189);
				tv0->AddReply(542791, -1, 45213);
				return;
			}
			if (a0 == 45290) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542864);
				tv0->ClearReplies();
				tv0->AddReply(542865, 45297, 45291);
				tv0->AddReply(542866, 45293, 45292);
				return;
			}
			if (a0 == 45293) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542867);
				tv0->ClearReplies();
				tv0->AddReply(542868, -1, 45294);
				tv0->AddReply(542869, -1, 45295);
				tv0->AddReply(542870, -1, 45296);
				return;
			}
			if (a0 == 45297) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542871);
				tv0->ClearReplies();
				tv0->AddReply(542872, 45300, 45298);
				tv0->AddReply(542873, -1, 45299);
				return;
			}
			if (a0 == 45300) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542874);
				tv0->ClearReplies();
				tv0->AddReply(542875, 45311, 45301);
				tv0->AddReply(542876, 45303, 45302);
				return;
			}
			if (a0 == 45303) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542877);
				tv0->ClearReplies();
				tv0->AddReply(542878, 45305, 45304);
				tv0->AddReply(542882, 45309, 45308);
				return;
			}
			if (a0 == 45309) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542883);
				tv0->ClearReplies();
				tv0->AddReply(542884, -1, 45310);
				return;
			}
			if (a0 == 45305) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542879);
				tv0->ClearReplies();
				tv0->AddReply(542880, -1, 45306);
				tv0->AddReply(542881, -1, 45307);
				return;
			}
			if (a0 == 45311) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542885);
				tv0->ClearReplies();
				tv0->AddReply(542886, 45314, 45312);
				tv0->AddReply(542887, -1, 45313);
				return;
			}
			if (a0 == 45314) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542888);
				tv0->ClearReplies();
				tv0->AddReply(542889, -1, 45315);
				tv0->AddReply(542890, -1, 45316);
				tv0->AddReply(542891, -1, 45317);
				return;
			}
			tv3 = true;
			if (f_384_a0_b()) {
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
	var bool tv6;

	void init(void)
	{
		f_1c5_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_24b_a0_v();
		t0{a0};
	}

	void f_1c5_a2_v(float a0, float a1)
	{
		tv6 = false;
		for (; ; ) {
			float L0;
			bool L1;
			@rand(L0, 3);
			@Sleep(L0 + 3, L1);
			tv6 = true;
			f_20a_a2_v(a0, a1);
			tv6 = false;
		}
	}

	void f_1d7_a0_v(void)
	{
		tv5 = true;
		if (!f_2b7_a0_b() && f_208_a0_b()) {
			@RemoveActor(f_344_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_1d7_a0_v();
		}
	}

	void OnUnload(void)
	{
		if (tv6) {
			f_24b_a0_v();
		}
		if (tv5 && f_208_a0_b()) {
			@RemoveActor(f_344_a0_o());
		}
	}

	bool f_208_a0_b(void)
	{
		return true;
	}

	void f_20a_a2_v(float a0, float a1)
	{
		if (!f_2b7_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_259_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_225_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_2af_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_225_a0_b()) {
				if (!tv2) {
					f_332_a1_v(tv4);
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

	void f_24b_a0_v(void)
	{
		f_2aa_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_259_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2b7_a0_b()) {
		return;
	}
	L0 = f_38d_a0_i();
	for (L1 = 0; L1 < 5 && f_2b7_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_386_a1_s(L3));
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
		if (!f_2a8_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2a8_a0_b(void)
{
	return true;
}

void f_2aa_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2af_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2b7_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2bc_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_34a_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_384_a0_b()) {
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

void f_301_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_384_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
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

void f_332_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_33d_a0_v(void)
{
	if (f_384_a0_b()) {
		@lshStopSpeech();
	}
}

object f_344_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_34a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_354_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_359_a2_v(object a0, object a1)
{
	@SetVariable("ook12Littleboy1", 1);
}

bool f_35f_a1_b(object a0)
{
	if (f_354_a1_i("ook12Littleboy1") == 0) {
		return true;
	}
	return false;
}

int f_36b_a0_i(void)
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

int f_37c_a0_i(void)
{
	return 515560;
}

int f_37e_a0_i(void)
{
	return 503345;
}

string f_380_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_382_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_384_a0_b(void)
{
	return false;
}

string f_386_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_38d_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_386_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

