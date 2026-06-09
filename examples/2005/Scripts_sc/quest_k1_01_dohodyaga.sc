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
		if (!f_323_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_476_a0_i());
		L0->SetNPCDescription(f_474_a0_i());
		L0->SetPhoto(f_478_a0_s());
		L0->SetPhoto2(f_47a_a0_s());
		L0->SetPlayerName(f_463_a0_i());
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
		f_367_a1_v(a0);
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
			if (f_401_a1_b(tv1) && f_40d_a1_b(tv1)) {
				f_3c3_a2_v(tv1, tv0);
				f_d2_a1_v("Neutral");
				tv0->SetMessage(524672);
				tv0->ClearReplies();
				tv0->AddReply(526770, 28048, 28047);
				tv0->AddReply(526776, 28048, 28053);
				break;
			}
			if (f_419_a1_b(tv1) && f_425_a1_b(tv1) && !f_40d_a1_b(tv1)) {
				f_3c9_a2_v(tv1, tv0);
				f_d2_a1_v("Neutral");
				tv0->SetMessage(524668);
				tv0->ClearReplies();
				tv0->AddReply(526760, 28045, 28037);
				break;
			}
			f_d2_a1_v("Neutral");
			tv0->SetMessage(524670);
			tv0->ClearReplies();
			tv0->AddReply(524671, -1, 26010);
			break;
			return;
		}
		if (f_47c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_378_a1_v(tv2);
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

	void f_d2_a1_v(string a0)
	{
		if (!f_47c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_37f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_390_a0_v();
			if (a1 == 28060) {
				f_3cf_a2_v(tv1, tv0);
				f_3e6_a2_v(tv1, tv0);
			}
			if (a1 == 28061) {
				f_3cf_a2_v(tv1, tv0);
				f_3e6_a2_v(tv1, tv0);
			}
			if (a1 == 28062) {
				f_3cf_a2_v(tv1, tv0);
				f_3e6_a2_v(tv1, tv0);
			}
			if (a1 == 26008) {
				f_3cf_a2_v(tv1, tv0);
				f_3e6_a2_v(tv1, tv0);
			}
			if (a0 == 26011) {
				if (f_401_a1_b(tv1) && f_40d_a1_b(tv1)) {
					f_3c3_a2_v(tv1, tv0);
					f_d2_a1_v("Neutral");
					tv0->SetMessage(524672);
					tv0->ClearReplies();
					tv0->AddReply(526770, 28048, 28047);
					tv0->AddReply(526776, 28048, 28053);
					return;
				}
				if (f_419_a1_b(tv1) && f_425_a1_b(tv1) && !f_40d_a1_b(tv1)) {
					f_3c9_a2_v(tv1, tv0);
					f_d2_a1_v("Neutral");
					tv0->SetMessage(524668);
					tv0->ClearReplies();
					tv0->AddReply(526760, 28045, 28037);
					return;
				}
				f_d2_a1_v("Neutral");
				tv0->SetMessage(524670);
				tv0->ClearReplies();
				tv0->AddReply(524671, -1, 26010);
				return;
			}
			if (a0 == 28045) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(526768);
				tv0->ClearReplies();
				tv0->AddReply(526769, 28038, 28046);
				return;
			}
			if (a0 == 28038) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(526761);
				tv0->ClearReplies();
				tv0->AddReply(526762, 28040, 28039);
				return;
			}
			if (a0 == 28040) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(526763);
				tv0->ClearReplies();
				tv0->AddReply(526764, 28042, 28041);
				return;
			}
			if (a0 == 28042) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(526765);
				tv0->ClearReplies();
				tv0->AddReply(526766, 28044, 28043);
				return;
			}
			if (a0 == 28044) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(526767);
				tv0->ClearReplies();
				tv0->AddReply(524669, -1, 26008);
				return;
			}
			if (a0 == 28048) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(526771);
				tv0->ClearReplies();
				tv0->AddReply(526772, 28050, 28049);
				tv0->AddReply(526777, 28050, 28055);
				return;
			}
			if (a0 == 28050) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(526773);
				tv0->ClearReplies();
				tv0->AddReply(526774, 28052, 28051);
				tv0->AddReply(526778, 28052, 28056);
				return;
			}
			if (a0 == 28052) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(526775);
				tv0->ClearReplies();
				tv0->AddReply(524673, 26013, 26012);
				return;
			}
			if (a0 == 26013) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(524674);
				tv0->ClearReplies();
				tv0->AddReply(524675, 28059, 26014);
				tv0->AddReply(526782, -1, 28062);
				return;
			}
			if (a0 == 28059) {
				f_d2_a1_v("Neutral");
				tv0->SetMessage(526779);
				tv0->ClearReplies();
				tv0->AddReply(526780, -1, 28060);
				tv0->AddReply(526781, -1, 28061);
				return;
			}
			tv3 = true;
			if (f_47c_a0_b()) {
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
			@Sleep(3);
			f_271_a2_v(300, 100);
		}
	}

	void OnUse(object a0)
	{
		f_2b2_a0_v();
		t0{a0};
	}

	void f_271_a2_v(float a0, float a1)
	{
		if (!f_31e_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_2c0_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_28c_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_316_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_28c_a0_b()) {
				if (!tv2) {
					f_385_a1_v(tv4);
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

	void f_2b2_a0_v(void)
	{
		f_311_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_2c0_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_31e_a0_b()) {
		return;
	}
	L0 = f_3b2_a0_i();
	for (L1 = 0; L1 < 5 && f_31e_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_3ab_a1_s(L3));
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
		if (!f_30f_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_30f_a0_b(void)
{
	return true;
}

void f_311_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_316_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_31e_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_323_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_397_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_47c_a0_b()) {
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

void f_367_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_47c_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_378_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_37f_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_385_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_390_a0_v(void)
{
	if (f_47c_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_397_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3a1_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

float f_3a6_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

string f_3ab_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_3b2_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_3ab_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_3c3_a2_v(object a0, object a1)
{
	@SetVariable("ook1Dohodyaga1", 1);
}

void f_3c9_a2_v(object a0, object a1)
{
	@SetVariable("ook1Dohodyaga2", 1);
}

void f_3cf_a2_v(object a0, object a1)
{
	if (f_3a1_a1_i("k1q01ooStationGotoLaska") == 0) {
		object L0;
		L0 = f_431_a0_o();
		L0->AddMark("k1q01StationGotoLaska", "pt_map_laska", 1, 524730, f_3a6_a0_f());
	}
}

void f_3e6_a2_v(object a0, object a1)
{
	if (f_3a1_a1_i("k1q01ooStationGotoLaska") == 0) {
		@SetVariable("k1q01ooStationGotoLaska", 1);
		f_442_a3_v(f_431_a0_o(), "pt_map_laska", 2);
		a1->ShowMap(f_431_a0_o());
	}
}

bool f_401_a1_b(object a0)
{
	if (f_3a1_a1_i("ook1Dohodyaga1") == 0) {
		return true;
	}
	return false;
}

bool f_40d_a1_b(object a0)
{
	if (f_3a1_a1_i("k1q01DobermanDead") != 0) {
		return true;
	}
	return false;
}

bool f_419_a1_b(object a0)
{
	if (f_3a1_a1_i("k1q01") == 4) {
		return true;
	}
	return false;
}

bool f_425_a1_b(object a0)
{
	if (f_3a1_a1_i("ook1Dohodyaga2") == 0) {
		return true;
	}
	return false;
}

object f_431_a0_o(void)
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

void f_442_a3_v(object a0, string a1, float a2)
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

int f_463_a0_i(void)
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

int f_474_a0_i(void)
{
	return 515563;
}

int f_476_a0_i(void)
{
	return 503348;
}

string f_478_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_47a_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_47c_a0_b(void)
{
	return false;
}

