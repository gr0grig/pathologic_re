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
		if (!f_20f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2cb_a0_i());
		L0->SetNPCDescription(f_2c9_a0_i());
		L0->SetPhoto(f_2cd_a0_s());
		L0->SetPhoto2(f_2cf_a0_s());
		L0->SetPlayerName(f_33b_a0_i());
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
		f_254_a1_v(a0);
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
			f_89_a1_v("Neutral");
			tv0->SetMessage(530443);
			tv0->ClearReplies();
			if (f_2fd_a1_b(tv1)) {
				tv0->AddReply(530444, 31811, 31810);
			}
			tv0->AddReply(530447, -1, 31813);
			break;
			return;
		}
		if (f_2d1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_266_a1_v(tv2);
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

	void f_89_a1_v(string a0)
	{
		if (!f_2d1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_276_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_290_a0_v();
			if (a1 == 31810) {
				f_2d3_a2_v(tv1, tv0);
			}
			if (a1 == 31812) {
				f_2d9_a2_v(tv1, tv0);
				f_2ed_a2_v(tv1, tv0);
			}
			if (a1 == 32837) {
				f_2d9_a2_v(tv1, tv0);
				f_2ed_a2_v(tv1, tv0);
			}
			if (a0 == 31809) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(530443);
				tv0->ClearReplies();
				if (f_2fd_a1_b(tv1)) {
					tv0->AddReply(530444, 31811, 31810);
				}
				tv0->AddReply(530447, -1, 31813);
				return;
			}
			if (a0 == 31811) {
				f_89_a1_v("Neutral");
				tv0->SetMessage(530445);
				tv0->ClearReplies();
				tv0->AddReply(530446, -1, 31812);
				tv0->AddReply(531483, -1, 32837);
				return;
			}
			tv3 = true;
			if (f_2d1_a0_b()) {
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
		f_118_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_19e_a0_v();
		t0{a0};
	}

	void f_118_a2_v(float a0, float a1)
	{
		tv6 = false;
		for (; ; ) {
			float L0;
			bool L1;
			@rand(L0, 3);
			@Sleep(L0 + 3, L1);
			tv6 = true;
			f_15d_a2_v(a0, a1);
			tv6 = false;
		}
	}

	void f_12a_a0_v(void)
	{
		tv5 = true;
		if (!f_20a_a0_b() && f_15b_a0_b()) {
			@RemoveActor(f_297_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_12a_a0_v();
		}
	}

	void OnUnload(void)
	{
		if (tv6) {
			f_19e_a0_v();
		}
		if (tv5 && f_15b_a0_b()) {
			@RemoveActor(f_297_a0_o());
		}
	}

	bool f_15b_a0_b(void)
	{
		return true;
	}

	void f_15d_a2_v(float a0, float a1)
	{
		if (!f_20a_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_1ac_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_178_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_202_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_178_a0_b()) {
				if (!tv2) {
					f_285_a1_v(tv4);
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

	void f_19e_a0_v(void)
	{
		f_1fd_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_1ac_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_20a_a0_b()) {
		return;
	}
	L0 = f_2b8_a0_i();
	for (L1 = 0; L1 < 5 && f_20a_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_2b1_a1_s(L3));
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
		if (!f_1fb_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1fb_a0_b(void)
{
	return true;
}

void f_1fd_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_202_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_20a_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_20f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_29d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_2d1_a0_b()) {
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

void f_254_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_2d1_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_266_a1_v(string a0)
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

void f_276_a2_v(string a0, bool a1)
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

void f_285_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_290_a0_v(void)
{
	if (f_2d1_a0_b()) {
		@lshStopSpeech();
	}
}

object f_297_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_29d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2a7_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

float f_2ac_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

string f_2b1_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_2b8_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_2b1_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_2c9_a0_i(void)
{
	return 515559;
}

int f_2cb_a0_i(void)
{
	return 503344;
}

string f_2cd_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_2cf_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_2d1_a0_b(void)
{
	return false;
}

void f_2d3_a2_v(object a0, object a1)
{
	@SetVariable("oob10GirlLaska1", 1);
}

void f_2d9_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b10q04GirlGotoKapella", 1);
	L0 = f_309_a0_o();
	L0->AddMark("b10q04GirlGotoKapella", "pt_map_kapella", 0, 530490, f_2ac_a0_f());
}

void f_2ed_a2_v(object a0, object a1)
{
	f_31a_a3_v(f_309_a0_o(), "pt_map_kapella", 2);
	a1->ShowMap(f_309_a0_o());
}

bool f_2fd_a1_b(object a0)
{
	if (f_2a7_a1_i("oob10GirlLaska1") == 0) {
		return true;
	}
	return false;
}

object f_309_a0_o(void)
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

void f_31a_a3_v(object a0, string a1, float a2)
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

int f_33b_a0_i(void)
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

