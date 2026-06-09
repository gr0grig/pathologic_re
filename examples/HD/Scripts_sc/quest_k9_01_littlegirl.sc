event evt_11 11;
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
		if (!f_288_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_394_a0_i());
		L0->SetNPCDescription(f_392_a0_i());
		L0->SetPhoto(f_396_a0_s());
		L0->SetPhoto2(f_398_a0_s());
		L0->SetPlayerName(f_381_a0_i());
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
		f_2cd_a1_v(a0);
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
			if (f_33f_a1_b(tv1)) {
				f_325_a2_v(tv1, tv0);
				f_32b_a2_v(tv1, tv0);
				f_a7_a1_v("Neutral");
				tv0->SetMessage(529769);
				tv0->ClearReplies();
				tv0->AddReply(529773, 31230, 31229);
				tv0->AddReply(529776, 31233, 31232);
				break;
			}
			f_a7_a1_v("Neutral");
			tv0->SetMessage(529770);
			tv0->ClearReplies();
			tv0->AddReply(529771, -1, 31227);
			tv0->AddReply(529772, -1, 31228);
			break;
			return;
		}
		if (f_39a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2df_a1_v(tv2);
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

	void f_a7_a1_v(string a0)
	{
		if (!f_39a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2ef_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_309_a0_v();
			if (a0 == 31225) {
				if (f_33f_a1_b(tv1)) {
					f_325_a2_v(tv1, tv0);
					f_32b_a2_v(tv1, tv0);
					f_a7_a1_v("Neutral");
					tv0->SetMessage(529769);
					tv0->ClearReplies();
					tv0->AddReply(529773, 31230, 31229);
					tv0->AddReply(529776, 31233, 31232);
					return;
				}
				f_a7_a1_v("Neutral");
				tv0->SetMessage(529770);
				tv0->ClearReplies();
				tv0->AddReply(529771, -1, 31227);
				tv0->AddReply(529772, -1, 31228);
				return;
			}
			if (a0 == 31233) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(529777);
				tv0->ClearReplies();
				tv0->AddReply(529778, 31230, 31234);
				return;
			}
			if (a0 == 31230) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(529774);
				tv0->ClearReplies();
				tv0->AddReply(529775, 31236, 31231);
				return;
			}
			if (a0 == 31236) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(529779);
				tv0->ClearReplies();
				tv0->AddReply(529780, 31238, 31237);
				return;
			}
			if (a0 == 31238) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(529781);
				tv0->ClearReplies();
				tv0->AddReply(529782, 31243, 31239);
				tv0->AddReply(529783, 31241, 31240);
				return;
			}
			if (a0 == 31241) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(529784);
				tv0->ClearReplies();
				tv0->AddReply(529785, 31243, 31242);
				return;
			}
			if (a0 == 31243) {
				f_a7_a1_v("Neutral");
				tv0->SetMessage(529786);
				tv0->ClearReplies();
				tv0->AddReply(529787, -1, 31245);
				tv0->AddReply(529788, -1, 31246);
				return;
			}
			tv3 = true;
			if (f_39a_a0_b()) {
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
		f_191_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_217_a0_v();
		t0{a0};
	}

	void f_191_a2_v(float a0, float a1)
	{
		tv6 = false;
		for (; ; ) {
			float L0;
			bool L1;
			@rand(L0, 3);
			@Sleep(L0 + 3, L1);
			tv6 = true;
			f_1d6_a2_v(a0, a1);
			tv6 = false;
		}
	}

	void f_1a3_a0_v(void)
	{
		tv5 = true;
		if (!f_283_a0_b() && f_1d4_a0_b()) {
			@RemoveActor(f_310_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_1a3_a0_v();
		}
	}

	void OnUnload(void)
	{
		if (tv6) {
			f_217_a0_v();
		}
		if (tv5 && f_1d4_a0_b()) {
			@RemoveActor(f_310_a0_o());
		}
	}

	bool f_1d4_a0_b(void)
	{
		return true;
	}

	void f_1d6_a2_v(float a0, float a1)
	{
		if (!f_283_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_225_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_1f1_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_27b_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_1f1_a0_b()) {
				if (!tv2) {
					f_2fe_a1_v(tv4);
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

	void f_217_a0_v(void)
	{
		f_276_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_225_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_283_a0_b()) {
		return;
	}
	L0 = f_3a3_a0_i();
	for (L1 = 0; L1 < 5 && f_283_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_39c_a1_s(L3));
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
		if (!f_274_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_274_a0_b(void)
{
	return true;
}

void f_276_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_27b_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_283_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_288_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_316_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_39a_a0_b()) {
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

void f_2cd_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_39a_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2df_a1_v(string a0)
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

void f_2ef_a2_v(string a0, bool a1)
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

void f_2fe_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_309_a0_v(void)
{
	if (f_39a_a0_b()) {
		@lshStopSpeech();
	}
}

object f_310_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_316_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_320_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_325_a2_v(object a0, object a1)
{
	@SetVariable("ook9Littlegirl1", 1);
}

void f_32b_a2_v(object a0, object a1)
{
	if (f_320_a1_i("k9q01ChildTalk") == 0) {
		@SetVariable("k9q01ChildTalk", 1);
		@SetVariable("k9q01", 7);
		f_34b_a0_v();
	}
}

bool f_33f_a1_b(object a0)
{
	if (f_320_a1_i("ook9Littlegirl1") == 0) {
		return true;
	}
	return false;
}

void f_34b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 524, 1, 529816);
	f_365_a2_b(L0, 517);
}

object f_358_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_365_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_358_a0_o();
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

int f_381_a0_i(void)
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

int f_392_a0_i(void)
{
	return 515561;
}

int f_394_a0_i(void)
{
	return 503346;
}

string f_396_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_398_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_39a_a0_b(void)
{
	return false;
}

string f_39c_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_3a3_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_39c_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

