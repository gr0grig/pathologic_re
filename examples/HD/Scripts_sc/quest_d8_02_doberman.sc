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
		if (!f_2ba_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_438_a0_i());
		L0->SetNPCDescription(f_436_a0_i());
		L0->SetPhoto(f_43a_a0_s());
		L0->SetPhoto2(f_43c_a0_s());
		L0->SetPlayerName(f_40d_a0_i());
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
		f_2ff_a1_v(a0);
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
			tv0->SetMessage(533313);
			tv0->ClearReplies();
			if (f_38c_a1_b(tv1)) {
				tv0->AddReply(535847, 37548, 37547);
			}
			tv0->AddReply(535882, -1, 37588);
			tv0->AddReply(535851, -1, 37551);
			break;
			return;
		}
		if (f_43e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_311_a1_v(tv2);
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
		if (!f_43e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_321_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_33b_a0_v();
			if (a1 == 37547) {
				f_35c_a2_v(tv1, tv0);
			}
			if (a1 == 34820) {
				f_372_a2_v(tv1, tv0);
				f_362_a2_v(tv1, tv0);
			}
			if (a1 == 37604) {
				f_372_a2_v(tv1, tv0);
				f_362_a2_v(tv1, tv0);
			}
			if (a0 == 34821) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(533313);
				tv0->ClearReplies();
				if (f_38c_a1_b(tv1)) {
					tv0->AddReply(535847, 37548, 37547);
				}
				tv0->AddReply(535882, -1, 37588);
				tv0->AddReply(535851, -1, 37551);
				return;
			}
			if (a0 == 37548) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(535848);
				tv0->ClearReplies();
				tv0->AddReply(535883, 37590, 37589);
				tv0->AddReply(535849, 37590, 37549);
				return;
			}
			if (a0 == 37590) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(535884);
				tv0->ClearReplies();
				tv0->AddReply(535885, 37550, 37591);
				tv0->AddReply(535886, 37550, 37592);
				return;
			}
			if (a0 == 37550) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(535850);
				tv0->ClearReplies();
				tv0->AddReply(535887, 37595, 37594);
				return;
			}
			if (a0 == 37595) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(535888);
				tv0->ClearReplies();
				tv0->AddReply(533308, 34817, 34816);
				tv0->AddReply(535889, 37605, 37597);
				return;
			}
			if (a0 == 37605) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(535896);
				tv0->ClearReplies();
				tv0->AddReply(535897, 37600, 37606);
				return;
			}
			if (a0 == 34817) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(533309);
				tv0->ClearReplies();
				tv0->AddReply(533310, 34819, 34818);
				tv0->AddReply(535890, 37601, 37598);
				return;
			}
			if (a0 == 37601) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(535893);
				tv0->ClearReplies();
				tv0->AddReply(535894, 37600, 37602);
				return;
			}
			if (a0 == 34819) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(533311);
				tv0->ClearReplies();
				tv0->AddReply(535891, 37600, 37599);
				return;
			}
			if (a0 == 37600) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(535892);
				tv0->ClearReplies();
				tv0->AddReply(533312, -1, 34820);
				tv0->AddReply(535895, -1, 37604);
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
		f_1c3_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_1c3_a2_v(float a0, float a1)
	{
		tv6 = false;
		for (; ; ) {
			float L0;
			bool L1;
			@rand(L0, 3);
			@Sleep(L0 + 3, L1);
			tv6 = true;
			f_208_a2_v(a0, a1);
			tv6 = false;
		}
	}

	void f_1d5_a0_v(void)
	{
		tv5 = true;
		if (!f_2b5_a0_b() && f_206_a0_b()) {
			@RemoveActor(f_342_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_1d5_a0_v();
		}
	}

	void OnUnload(void)
	{
		if (tv6) {
			f_249_a0_v();
		}
		if (tv5 && f_206_a0_b()) {
			@RemoveActor(f_342_a0_o());
		}
	}

	bool f_206_a0_b(void)
	{
		return true;
	}

	void f_208_a2_v(float a0, float a1)
	{
		if (!f_2b5_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_257_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_223_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_2ad_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_223_a0_b()) {
				if (!tv2) {
					f_330_a1_v(tv4);
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

	void f_249_a0_v(void)
	{
		f_2a8_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_257_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2b5_a0_b()) {
		return;
	}
	L0 = f_425_a0_i();
	for (L1 = 0; L1 < 5 && f_2b5_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_41e_a1_s(L3));
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
		if (!f_2a6_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2a6_a0_b(void)
{
	return true;
}

void f_2a8_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2ad_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_2b5_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2ba_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_348_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
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

void f_2ff_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_43e_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_311_a1_v(string a0)
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

void f_321_a2_v(string a0, bool a1)
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

void f_330_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_33b_a0_v(void)
{
	if (f_43e_a0_b()) {
		@lshStopSpeech();
	}
}

object f_342_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_348_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_352_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

float f_357_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_35c_a2_v(object a0, object a1)
{
	@SetVariable("ood8Doberman1", 1);
}

void f_362_a2_v(object a0, object a1)
{
	f_3ec_a3_v(f_3db_a0_o(), "pt_map_kapella", 2);
	a1->ShowMap(f_3db_a0_o());
}

void f_372_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d8q02", 1);
	L0 = f_3db_a0_o();
	L0->AddMark("d8q02GotoKapella", "pt_map_kapella", 0, 540068, f_357_a0_f());
	f_398_a0_v();
	f_3a5_a0_v();
}

bool f_38c_a1_b(object a0)
{
	if (f_352_a1_i("ood8Doberman1") == 0) {
		return true;
	}
	return false;
}

void f_398_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 127, 2, 513772);
	f_3bf_a2_b(L0, -1);
}

void f_3a5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 648, 2, 533321);
	f_3bf_a2_b(L0, 127);
}

object f_3b2_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_3bf_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_3b2_a0_o();
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

object f_3db_a0_o(void)
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

void f_3ec_a3_v(object a0, string a1, float a2)
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

int f_40d_a0_i(void)
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
	return 518097;
}

int f_438_a0_i(void)
{
	return 518096;
}

string f_43a_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_43c_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_43e_a0_b(void)
{
	return false;
}

