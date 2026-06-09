event evt_11 11;
event OnTrigger 26;
event OnUnload 6;
event OnLoad 5;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

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
		if (!f_37e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_542_a0_i());
		L0->SetNPCDescription(f_540_a0_i());
		L0->SetPhoto(f_544_a0_s());
		L0->SetPhoto2(f_546_a0_s());
		L0->SetPlayerName(f_52f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_3d5_a1_b(f_494_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_3c3_a1_v(a0);
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
			if (f_4f1_a1_b(tv1)) {
				f_4eb_a2_v(tv1, tv0);
				f_a4_a1_v("Neutral");
				tv0->SetMessage(514326);
				tv0->ClearReplies();
				tv0->AddReply(514327, 15550, 15549);
				break;
			}
			f_a4_a1_v("Neutral");
			tv0->SetMessage(514532);
			tv0->ClearReplies();
			tv0->AddReply(514533, -1, 15764);
			tv0->AddReply(539713, -1, 41672);
			break;
			return;
		}
		if (f_548_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_45f_a1_v(tv2);
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
		if (!f_548_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_46f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_48d_a0_v();
			if (a1 == 15565) {
				f_4ca_a2_v(tv1, tv0);
				f_4db_a2_v(tv1, tv0);
			}
			if (a1 == 41689) {
				f_4ca_a2_v(tv1, tv0);
				f_4db_a2_v(tv1, tv0);
			}
			if (a0 == 15548) {
				if (f_4f1_a1_b(tv1)) {
					f_4eb_a2_v(tv1, tv0);
					f_a4_a1_v("Neutral");
					tv0->SetMessage(514326);
					tv0->ClearReplies();
					tv0->AddReply(514327, 15550, 15549);
					return;
				}
				f_a4_a1_v("Neutral");
				tv0->SetMessage(514532);
				tv0->ClearReplies();
				tv0->AddReply(514533, -1, 15764);
				tv0->AddReply(539713, -1, 41672);
				return;
			}
			if (a0 == 15550) {
				f_a4_a1_v("Sorrow");
				tv0->SetMessage(514328);
				tv0->ClearReplies();
				tv0->AddReply(514329, 15552, 15551);
				tv0->AddReply(539714, 41674, 41673);
				return;
			}
			if (a0 == 41674) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(539715);
				tv0->ClearReplies();
				tv0->AddReply(539716, 15552, 41675);
				return;
			}
			if (a0 == 15552) {
				f_a4_a1_v("Sorrow");
				tv0->SetMessage(514330);
				tv0->ClearReplies();
				tv0->AddReply(514331, 15554, 15553);
				tv0->AddReply(514344, 15567, 15566);
				return;
			}
			if (a0 == 15567) {
				f_a4_a1_v("Sorrow");
				tv0->SetMessage(514345);
				tv0->ClearReplies();
				tv0->AddReply(514346, 15569, 15568);
				return;
			}
			if (a0 == 15569) {
				f_a4_a1_v("Sorrow");
				tv0->SetMessage(514347);
				tv0->ClearReplies();
				tv0->AddReply(514348, 15554, 15570);
				return;
			}
			if (a0 == 15554) {
				f_a4_a1_v("Sorrow");
				tv0->SetMessage(514332);
				tv0->ClearReplies();
				tv0->AddReply(514333, 15556, 15555);
				tv0->AddReply(539717, 41678, 41677);
				return;
			}
			if (a0 == 41678) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(539718);
				tv0->ClearReplies();
				tv0->AddReply(539719, 41680, 41679);
				return;
			}
			if (a0 == 41680) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(539720);
				tv0->ClearReplies();
				tv0->AddReply(539721, 15560, 41681);
				return;
			}
			if (a0 == 15556) {
				f_a4_a1_v("Smile");
				tv0->SetMessage(514334);
				tv0->ClearReplies();
				tv0->AddReply(514335, 15558, 15557);
				return;
			}
			if (a0 == 15558) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(514336);
				tv0->ClearReplies();
				tv0->AddReply(514337, 15560, 15559);
				return;
			}
			if (a0 == 15560) {
				f_a4_a1_v("Doubt");
				tv0->SetMessage(514338);
				tv0->ClearReplies();
				tv0->AddReply(514339, 15562, 15561);
				tv0->AddReply(539722, 41684, 41683);
				return;
			}
			if (a0 == 41684) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(539723);
				tv0->ClearReplies();
				tv0->AddReply(539724, 15562, 41685);
				return;
			}
			if (a0 == 15562) {
				f_a4_a1_v("Agression");
				tv0->SetMessage(514340);
				tv0->ClearReplies();
				tv0->AddReply(514341, 15564, 15563);
				tv0->AddReply(539725, 15564, 41687);
				return;
			}
			if (a0 == 15564) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(514342);
				tv0->ClearReplies();
				tv0->AddReply(514343, -1, 15565);
				tv0->AddReply(539726, -1, 41689);
				return;
			}
			tv3 = true;
			if (f_548_a0_b()) {
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
	var Vector tv0;
	var bool tv1;

	void f_231_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_262_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_494_a0_o());
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
			@RemoveActor(f_494_a0_o());
			@Hold();
		}
		f_2cd_a0_v();
	}

	void OnLoad(void)
	{
		f_2dc_a0_v();
	}

	void f_262_a0_v(void)
	{
		if (!f_379_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_312_a0_v();
		}
	}

	bool f_270_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_370_a1_b(L0);
	}

	void f_27f_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_284_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_35e_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_29a_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_2a3_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_2a3_a0_v();
			if (f_379_a0_b() && f_284_a0_b()) {
				if (f_270_a0_b()) {
					f_40f_a1_b(f_494_a0_o());
				}
			} else {
				f_27f_a0_v();
				f_29a_a0_v();
			}
		}
	}

	void f_2cd_a0_v(void)
	{
		f_359_a0_v();
		f_2a3_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_2dc_a0_v(void)
	{
		@StopGroup0();
		f_2a3_a0_v();
		f_45f_a1_v("Neutral");
		f_29a_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_29a_a0_v();
		} else {
			f_45f_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_359_a0_v();
			f_370_a1_b(a0);
			enable OnUse;
			f_231_a1_v(a0);
			f_45f_a1_v("Neutral");
			f_2a3_a0_v();
			f_29a_a0_v();
		}
	}
}

void f_312_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_379_a0_b()) {
		return;
	}
	L0 = f_4b9_a0_i();
	for (L1 = 0; L1 < 5 && f_379_a0_b(); L1++) {
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
			@PlayAnimation("all", f_4b2_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_357_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_357_a0_b(void)
{
	return true;
}

void f_359_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_35e_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_366_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_370_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_366_a1_b(L0);
}

bool f_379_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_37e_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_49a_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_548_a0_b()) {
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

void f_3c3_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_548_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_3d5_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_40f_a1_b(a0)) {
			if (!f_434_a1_b(a0)) {
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
		if (!f_434_a1_b(a0)) {
			if (!f_40f_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_40f_a1_b(object a0)
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
	return f_47e_a1_b(L4);
}

bool f_434_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_4a9_a0_i() + "m";
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
	return f_47e_a1_b(L4);
}

void f_45f_a1_v(string a0)
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

void f_46f_a2_v(string a0, bool a1)
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

bool f_47e_a1_b(string a0)
{
	if (f_548_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_48d_a0_v(void)
{
	if (f_548_a0_b()) {
		@lshStopSpeech();
	}
}

object f_494_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_49a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_4a4_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_4a9_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_4b2_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_4b9_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_4b2_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_4ca_a2_v(object a0, object a1)
{
	if (f_4a4_a1_i("map_chertez_state") <= 5) {
		@SetVariable("map_chertez_state", 5);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_4db_a2_v(object a0, object a1)
{
	f_50e_a3_v(f_4fd_a0_o(), "pt_map_aglaja", -1);
	a1->ShowMap(f_4fd_a0_o());
}

void f_4eb_a2_v(object a0, object a1)
{
	@SetVariable("ood11Burah1", 1);
}

bool f_4f1_a1_b(object a0)
{
	if (f_4a4_a1_i("ood11Burah1") == 0) {
		return true;
	}
	return false;
}

object f_4fd_a0_o(void)
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

void f_50e_a3_v(object a0, string a1, float a2)
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

int f_52f_a0_i(void)
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

int f_540_a0_i(void)
{
	return 515592;
}

int f_542_a0_i(void)
{
	return 511961;
}

string f_544_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_546_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_548_a0_b(void)
{
	return true;
}

