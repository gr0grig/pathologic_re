event OnLoad 5;
event evt_11 11;
event OnTrigger 26;
event OnUnload 6;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_2f9_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_353_a1_b(f_400_a0_o());
		if (!f_2fe_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_438_a0_i());
		L0->SetNPCDescription(f_436_a0_i());
		L0->SetPhoto(f_43a_a0_s());
		L0->SetPhoto2(f_43c_a0_s());
		L0->SetPlayerName(f_452_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_342_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t2
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
			if (f_446_a1_b(tv1)) {
				f_440_a2_v(tv1, tv0);
				f_b1_a1_v("Neutral");
				tv0->SetMessage(530337);
				tv0->ClearReplies();
				tv0->AddReply(530338, 32415, 31725);
				tv0->AddReply(531096, 32418, 32414);
				break;
			}
			f_b1_a1_v("Neutral");
			tv0->SetMessage(530341);
			tv0->ClearReplies();
			tv0->AddReply(530342, -1, 31729);
			break;
			return;
		}
		if (f_43e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3dd_a1_v(tv2);
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

	void f_b1_a1_v(string a0)
	{
		if (!f_43e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3e4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_3f9_a0_v();
			if (a0 == 31724) {
				if (f_446_a1_b(tv1)) {
					f_440_a2_v(tv1, tv0);
					f_b1_a1_v("Neutral");
					tv0->SetMessage(530337);
					tv0->ClearReplies();
					tv0->AddReply(530338, 32415, 31725);
					tv0->AddReply(531096, 32418, 32414);
					return;
				}
				f_b1_a1_v("Neutral");
				tv0->SetMessage(530341);
				tv0->ClearReplies();
				tv0->AddReply(530342, -1, 31729);
				return;
			}
			if (a0 == 32418) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(531100);
				tv0->ClearReplies();
				tv0->AddReply(531101, -1, 32419);
				tv0->AddReply(531102, 31726, 32420);
				return;
			}
			if (a0 == 31726) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(530339);
				tv0->ClearReplies();
				tv0->AddReply(531202, 32518, 32511);
				tv0->AddReply(530340, -1, 31727);
				return;
			}
			if (a0 == 32518) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(531208);
				tv0->ClearReplies();
				tv0->AddReply(531209, -1, 32519);
				tv0->AddReply(531210, 32521, 32520);
				return;
			}
			if (a0 == 32521) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(531211);
				tv0->ClearReplies();
				tv0->AddReply(531212, -1, 32522);
				tv0->AddReply(531213, -1, 32523);
				return;
			}
			if (a0 == 32415) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(531097);
				tv0->ClearReplies();
				tv0->AddReply(531098, 32417, 32416);
				tv0->AddReply(531207, 32417, 32516);
				return;
			}
			if (a0 == 32417) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(531099);
				tv0->ClearReplies();
				tv0->AddReply(531103, 32512, 32421);
				tv0->AddReply(531206, -1, 32515);
				return;
			}
			if (a0 == 32512) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(531203);
				tv0->ClearReplies();
				tv0->AddReply(531204, -1, 32513);
				tv0->AddReply(531205, -1, 32514);
				return;
			}
			tv3 = true;
			if (f_43e_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t3
{
	var Vector tv0;
	var bool tv1;

	void f_1ab_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_1dc_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_400_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv1 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv1) {
			@RemoveActor(f_400_a0_o());
			@Hold();
		}
		f_24d_a0_v();
	}

	void OnLoad(void)
	{
		f_25c_a0_v();
	}

	void f_1dc_a0_v(void)
	{
		if (!f_2f9_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_292_a0_v();
		}
	}

	bool f_1f0_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_2f0_a1_b(L0);
	}

	void f_1ff_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_204_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_2de_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_21a_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_223_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_223_a0_v();
			if (f_2f9_a0_b() && f_204_a0_b()) {
				if (f_1f0_a0_b()) {
					f_38d_a1_b(f_400_a0_o());
				}
			} else {
				f_1ff_a0_v();
				f_21a_a0_v();
			}
		}
	}

	void f_24d_a0_v(void)
	{
		f_2d9_a0_v();
		f_223_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_25c_a0_v(void)
	{
		@StopGroup0();
		f_223_a0_v();
		f_3dd_a1_v("Neutral");
		f_21a_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_21a_a0_v();
		} else {
			f_3dd_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_2d9_a0_v();
			f_2f0_a1_b(a0);
			enable OnUse;
			f_1ab_a1_v(a0);
			f_3dd_a1_v("Neutral");
			f_223_a0_v();
			f_21a_a0_v();
		}
	}
}

void f_292_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2f9_a0_b()) {
		return;
	}
	L0 = f_425_a0_i();
	for (L1 = 0; L1 < 5 && f_2f9_a0_b(); L1++) {
		if (!L0) {
			bool L2;
			@Sleep(3, L2);
			if (!L2) {
				break;
			}
		} else {
			int L3;
			int L4;
			bool L5;
			@irand(L3, L0);
			@irand(L4, 5);
			if (L4 != 0) {
				L3 = 0;
			}
			@PlayAnimation("all", f_41e_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_2d7_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2d7_a0_b(void)
{
	return true;
}

void f_2d9_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2de_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2e6_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_2f0_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_2e6_a1_b(L0);
}

bool f_2f9_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2fe_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_406_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_43e_a0_b()) {
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

void f_342_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_43e_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_353_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_38d_a1_b(a0)) {
			if (!f_3b2_a1_b(a0)) {
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
		if (!f_3b2_a1_b(a0)) {
			if (!f_38d_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_38d_a1_b(object a0)
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
	return f_3ea_a1_b(L4);
}

bool f_3b2_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_415_a0_i() + "m";
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
	return f_3ea_a1_b(L4);
}

void f_3dd_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_3e4_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_3ea_a1_b(string a0)
{
	if (f_43e_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_3f9_a0_v(void)
{
	if (f_43e_a0_b()) {
		@lshStopSpeech();
	}
}

object f_400_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_406_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_410_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_415_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_41e_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_425_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_41e_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_436_a0_i(void)
{
	return 515552;
}

int f_438_a0_i(void)
{
	return 502877;
}

string f_43a_a0_s(void)
{
	return "ui/NPC_Spi4ka.png";
}

string f_43c_a0_s(void)
{
	return "ui/NPC_Spi4ka_b.png";
}

bool f_43e_a0_b(void)
{
	return true;
}

void f_440_a2_v(object a0, object a1)
{
	@SetVariable("oob9Spi4ka_Kapella1", 1);
}

bool f_446_a1_b(object a0)
{
	if (f_410_a1_i("oob9Spi4ka_Kapella1") == 0) {
		return true;
	}
	return false;
}

int f_452_a0_i(void)
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

