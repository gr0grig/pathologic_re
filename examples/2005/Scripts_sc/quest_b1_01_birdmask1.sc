event evt_11 11;
event OnUse 0;
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
		if (!f_32e_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3bf_a0_i());
		L0->SetNPCDescription(f_3bd_a0_i());
		L0->SetPhoto(f_3c1_a0_s());
		L0->SetPhoto2(f_3c3_a0_s());
		L0->SetPlayerName(f_438_a0_i());
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
		f_372_a1_v(a0);
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
			if (f_3fa_a1_b(tv1)) {
				f_3df_a2_v(tv1, tv0);
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518119);
				tv0->ClearReplies();
				tv0->AddReply(518120, 19389, 19239);
				tv0->AddReply(518319, 19426, 19423);
				break;
			}
			f_a2_a1_v("Neutral");
			tv0->SetMessage(520033);
			tv0->ClearReplies();
			tv0->AddReply(520034, -1, 21218);
			tv0->AddReply(527016, -1, 28299);
			break;
			return;
		}
		if (f_3c5_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_383_a1_v(tv2);
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

	void f_a2_a1_v(string a0)
	{
		if (!f_3c5_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_38a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_39b_a0_v();
			if (a1 == 19421) {
				f_3ea_a2_v(tv1, tv0);
			}
			if (a1 == 19422) {
				f_3ea_a2_v(tv1, tv0);
			}
			if (a0 == 19238) {
				if (f_3fa_a1_b(tv1)) {
					f_3df_a2_v(tv1, tv0);
					f_a2_a1_v("Neutral");
					tv0->SetMessage(518119);
					tv0->ClearReplies();
					tv0->AddReply(518120, 19389, 19239);
					tv0->AddReply(518319, 19426, 19423);
					return;
				}
				f_a2_a1_v("Neutral");
				tv0->SetMessage(520033);
				tv0->ClearReplies();
				tv0->AddReply(520034, -1, 21218);
				tv0->AddReply(527016, -1, 28299);
				return;
			}
			if (a0 == 19426) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518322);
				tv0->ClearReplies();
				tv0->AddReply(518323, 19429, 19427);
				tv0->AddReply(518328, 28297, 19433);
				return;
			}
			if (a0 == 28297) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527014);
				tv0->ClearReplies();
				tv0->AddReply(527015, 19389, 28298);
				return;
			}
			if (a0 == 19429) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518325);
				tv0->ClearReplies();
				tv0->AddReply(518326, 19389, 19430);
				return;
			}
			if (a0 == 19389) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518286);
				tv0->ClearReplies();
				tv0->AddReply(518287, 19391, 19390);
				tv0->AddReply(518320, 19391, 19424);
				tv0->AddReply(518327, 19391, 19432);
				return;
			}
			if (a0 == 19391) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518288);
				tv0->ClearReplies();
				tv0->AddReply(518307, 19412, 19411);
				tv0->AddReply(518321, 19436, 19425);
				return;
			}
			if (a0 == 19436) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518330);
				tv0->ClearReplies();
				tv0->AddReply(518332, 19412, 19440);
				tv0->AddReply(518333, -1, 19441);
				return;
			}
			if (a0 == 19412) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518308);
				tv0->ClearReplies();
				tv0->AddReply(518334, 19444, 19443);
				return;
			}
			if (a0 == 19444) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518335);
				tv0->ClearReplies();
				tv0->AddReply(518309, 19414, 19413);
				tv0->AddReply(518340, 19451, 19450);
				return;
			}
			if (a0 == 19451) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518341);
				tv0->ClearReplies();
				tv0->AddReply(518342, 19414, 19452);
				return;
			}
			if (a0 == 19414) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518310);
				tv0->ClearReplies();
				tv0->AddReply(518311, 19417, 19415);
				tv0->AddReply(527138, 19417, 28436);
				return;
			}
			if (a0 == 19417) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518313);
				tv0->ClearReplies();
				tv0->AddReply(527017, 28301, 28300);
				tv0->AddReply(518343, 19455, 19454);
				return;
			}
			if (a0 == 19455) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518344);
				tv0->ClearReplies();
				tv0->AddReply(518345, 19457, 19456);
				return;
			}
			if (a0 == 19457) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518346);
				tv0->ClearReplies();
				tv0->AddReply(518347, 19418, 19458);
				tv0->AddReply(518348, -1, 19459);
				return;
			}
			if (a0 == 28301) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(527018);
				tv0->ClearReplies();
				tv0->AddReply(518312, 19418, 19416);
				return;
			}
			if (a0 == 19418) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518314);
				tv0->ClearReplies();
				tv0->AddReply(518315, 19420, 19419);
				tv0->AddReply(518339, 19420, 19449);
				return;
			}
			if (a0 == 19420) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518316);
				tv0->ClearReplies();
				tv0->AddReply(518317, -1, 19421);
				tv0->AddReply(518318, -1, 19422);
				return;
			}
			tv3 = true;
			if (f_3c5_a0_b()) {
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

	void init(void)
	{
		for (; ; ) {
			f_27c_a2_v(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object a0)
	{
		f_2bd_a0_v();
		t0{a0};
	}

	void f_27c_a2_v(float a0, float a1)
	{
		if (!f_329_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_2cb_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_297_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_321_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_297_a0_b()) {
				if (!tv2) {
					f_390_a1_v(tv4);
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

	void f_2bd_a0_v(void)
	{
		f_31c_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_2cb_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_329_a0_b()) {
		return;
	}
	L0 = f_3ce_a0_i();
	for (L1 = 0; L1 < 5 && f_329_a0_b(); L1 = L1 + 1) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_3c7_a1_s(L3));
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
		if (!f_31a_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_31a_a0_b(void)
{
	return true;
}

void f_31c_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_321_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_329_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_32e_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3a2_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_3c5_a0_b()) {
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

void f_372_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_3c5_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_383_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_38a_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_390_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_39b_a0_v(void)
{
	if (f_3c5_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_3a2_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3ac_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_3b1_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_3bd_a0_i(void)
{
	return 515571;
}

int f_3bf_a0_i(void)
{
	return 504029;
}

string f_3c1_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_3c3_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_3c5_a0_b(void)
{
	return false;
}

string f_3c7_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_3ce_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_3c7_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_3df_a2_v(object a0, object a1)
{
	@SetVariable("oob1Birdmask1_1", 1);
	f_3b1_a2_b("quest_b1_01", "remove1");
}

void f_3ea_a2_v(object a0, object a1)
{
	f_417_a3_v(f_406_a0_o(), "pt_map_bigvlad", 2);
	a1->ShowMap(f_406_a0_o());
}

bool f_3fa_a1_b(object a0)
{
	if (f_3ac_a1_i("oob1Birdmask1_1") == 0) {
		return true;
	}
	return false;
}

object f_406_a0_o(void)
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

void f_417_a3_v(object a0, string a1, float a2)
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

int f_438_a0_i(void)
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

