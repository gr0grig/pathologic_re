event evt_11 11;
event OnUse 0;
event OnTimer 7;
event OnDeath 41;

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
		if (!f_28c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_31f_a0_i());
		L0->SetNPCDescription(f_31d_a0_i());
		L0->SetPhoto(f_321_a0_s());
		L0->SetPhoto2(f_323_a0_s());
		L0->SetPlayerName(f_397_a0_i());
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
		f_2d0_a1_v(a0);
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
			f_84_a1_v("Neutral");
			tv0->SetMessage(530185);
			tv0->ClearReplies();
			tv0->AddReply(530186, 31577, 31576);
			tv0->AddReply(530190, -1, 31579);
			break;
			return;
		}
		if (f_325_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2e1_a1_v(tv2);
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

	void f_84_a1_v(string a0)
	{
		if (!f_325_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2e8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_2f9_a0_v();
			if (a1 == 31578) {
				f_34f_a2_v(tv1, tv0);
				f_33f_a2_v(tv1, tv0);
			}
			if (a1 == 31579) {
				f_34f_a2_v(tv1, tv0);
				f_35f_a2_v(tv1, tv0);
			}
			if (a0 == 31575) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(530185);
				tv0->ClearReplies();
				tv0->AddReply(530186, 31577, 31576);
				tv0->AddReply(530190, -1, 31579);
				return;
			}
			if (a0 == 31577) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(530187);
				tv0->ClearReplies();
				tv0->AddReply(530188, -1, 31578);
				return;
			}
			tv3 = true;
			if (f_325_a0_b()) {
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
			f_113_a2_v(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object a0)
	{
		object L0;
		f_154_a0_v();
		t0{a0};
		@GetScene(L0);
		L0->RemoveStationaryActor(f_300_a0_o());
		t3{a0};
	}

	void f_113_a2_v(float a0, float a1)
	{
		if (!f_287_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_162_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_12e_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_27f_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_12e_a0_b()) {
				if (!tv2) {
					f_2ee_a1_v(tv4);
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

	void f_154_a0_v(void)
	{
		f_1b3_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}

	void f_162_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_287_a0_b()) {
			return;
		}
		L0 = f_32e_a0_i();
		for (L1 = 0; L1 < 5 && f_287_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_327_a1_s(L3));
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
			if (!f_1b1_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_1b1_a0_b(void)
	{
		return true;
	}

	void f_1b3_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t3
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_1b8_a1_V(float a0)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		Vector L3;
		Vector L4;
		float L5;
		@GetPosition(L0);
		tv0->GetPosition(L1);
		@GetDirection(L2);
		L3 = f_306_a1_V(f_306_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void init(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_1b8_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_1b8_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_273_a0_V() + L0;
		@SetTimer(120, 0.5);
		tv2 = false;
		do {
			bool L2;
			@MovePoint(tv1, 1, L2);
			if (L2) {
				Vector L3;
				float L4;
				if (tv0 == null) {
					break;
					continue;
				}
				L3 = f_1b8_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_273_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void OnTimer(int a0)
	{
		if (a0 != 120) {
			return;
		}
		if (tv0 == null) {
			@Stop();
			@KillTimer(1);
			tv2 = true;
		} else {
			Vector L0;
			float L1;
			Vector L2;
			float L3;
			@GetDirection(L0);
			@FindDirLength(L1, L0, 7000.0);
			L2 = f_1b8_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_263_a0_b())) {
				@Stop();
				tv1 = f_273_a0_V() + L2;
			}
		}
	}

	void f_253_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_253_a0_v();
		global.OnDeath(a0);
	}

	bool f_263_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_278_a1_V(tv0);
		return f_310_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_273_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_278_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_27f_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_287_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_28c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_306_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_325_a0_b()) {
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

void f_2d0_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_325_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2e1_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_2e8_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_2ee_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_2f9_a0_v(void)
{
	if (f_325_a0_b()) {
		@lshStopSpeech();
	}
}

object f_300_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_306_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_310_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_318_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_31d_a0_i(void)
{
	return 515558;
}

int f_31f_a0_i(void)
{
	return 503343;
}

string f_321_a0_s(void)
{
	return "ui/NPC_None.png";
}

string f_323_a0_s(void)
{
	return "ui/NPC_Black_b.png";
}

bool f_325_a0_b(void)
{
	return false;
}

string f_327_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_32e_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_327_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_33f_a2_v(object a0, object a1)
{
	f_376_a3_v(f_365_a0_o(), "pt_map_eva", 2);
	a1->ShowMap(f_365_a0_o());
}

void f_34f_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_365_a0_o();
	L0->AddMark("b4q01BoyGotoDanko", "pt_map_eva", 3, 530189, f_318_a0_f());
}

void f_35f_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

object f_365_a0_o(void)
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

void f_376_a3_v(object a0, string a1, float a2)
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

int f_397_a0_i(void)
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

void OnDeath(object a0)
{
}

