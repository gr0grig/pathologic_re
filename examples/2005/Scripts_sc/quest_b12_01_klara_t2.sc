event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnUnload 6;

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
		f_550_a1_b(f_5fd_a0_o());
		if (!f_4fb_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_772_a0_i());
		L0->SetNPCDescription(f_770_a0_i());
		L0->SetPhoto(f_774_a0_s());
		L0->SetPhoto2(f_776_a0_s());
		L0->SetPlayerName(f_705_a0_i());
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
		f_53f_a1_v(a0);
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
			if (f_652_a1_b(tv1) && !f_68e_a1_b(tv1)) {
				f_624_a2_v(tv1, tv0);
				f_62a_a2_v(tv1, tv0);
				f_106_a1_v("Neutral");
				tv0->SetMessage(522115);
				tv0->ClearReplies();
				tv0->AddReply(522117, 24242, 23284);
				tv0->AddReply(522116, 24254, 23283);
				break;
			}
			f_62a_a2_v(tv1, tv0);
			f_106_a1_v("Neutral");
			tv0->SetMessage(531990);
			tv0->ClearReplies();
			if (f_69a_a1_b(tv1) && !f_6a4_a1_b(tv1) && !f_68e_a1_b(tv1)) {
				tv0->AddReply(540264, 42248, 42247);
			}
			if (f_65e_a1_b(tv1) && f_676_a1_b(tv1)) {
				tv0->AddReply(522121, 24262, 23288);
			}
			if (f_66a_a1_b(tv1) && f_682_a1_b(tv1)) {
				tv0->AddReply(523066, 24282, 24260);
			}
			if (f_6b0_a1_b(tv1)) {
				tv0->AddReply(540135, 42108, 42107);
			}
			tv0->AddReply(532038, -1, 33438);
			break;
			return;
		}
		if (f_778_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5da_a1_v(tv2);
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

	void f_106_a1_v(string a0)
	{
		if (!f_778_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5e1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_5f6_a0_v();
			if (a1 == 33431) {
				f_63c_a2_v(tv1, tv0);
			}
			if (a1 == 33401) {
				f_61b_a2_v(tv1, tv0);
			}
			if (a1 == 24256) {
				f_63c_a2_v(tv1, tv0);
			}
			if (a1 == 33403) {
				f_61b_a2_v(tv1, tv0);
			}
			if (a1 == 42249) {
				f_61b_a2_v(tv1, tv0);
			}
			if (a1 == 23288) {
				f_630_a2_v(tv1, tv0);
			}
			if (a1 == 24260) {
				f_636_a2_v(tv1, tv0);
			}
			if (a1 == 42107) {
				f_64c_a2_v(tv1, tv0);
			}
			if (a0 == 23282) {
				if (f_652_a1_b(tv1) && !f_68e_a1_b(tv1)) {
					f_624_a2_v(tv1, tv0);
					f_62a_a2_v(tv1, tv0);
					f_106_a1_v("Neutral");
					tv0->SetMessage(522115);
					tv0->ClearReplies();
					tv0->AddReply(522117, 24242, 23284);
					tv0->AddReply(522116, 24254, 23283);
					return;
				}
				f_62a_a2_v(tv1, tv0);
				f_106_a1_v("Neutral");
				tv0->SetMessage(531990);
				tv0->ClearReplies();
				if (f_69a_a1_b(tv1) && !f_6a4_a1_b(tv1) && !f_68e_a1_b(tv1)) {
					tv0->AddReply(540264, 42248, 42247);
				}
				if (f_65e_a1_b(tv1) && f_676_a1_b(tv1)) {
					tv0->AddReply(522121, 24262, 23288);
				}
				if (f_66a_a1_b(tv1) && f_682_a1_b(tv1)) {
					tv0->AddReply(523066, 24282, 24260);
				}
				if (f_6b0_a1_b(tv1)) {
					tv0->AddReply(540135, 42108, 42107);
				}
				tv0->AddReply(532038, -1, 33438);
				return;
			}
			if (a0 == 42108) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(540136);
				tv0->ClearReplies();
				tv0->AddReply(540137, -1, 42109);
				return;
			}
			if (a0 == 24282) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523086);
				tv0->ClearReplies();
				tv0->AddReply(523087, 24300, 24283);
				tv0->AddReply(523088, 24285, 24284);
				return;
			}
			if (a0 == 24285) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523089);
				tv0->ClearReplies();
				tv0->AddReply(523090, -1, 24286);
				tv0->AddReply(523091, 24288, 24287);
				return;
			}
			if (a0 == 24288) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523092);
				tv0->ClearReplies();
				tv0->AddReply(523093, 24292, 24289);
				tv0->AddReply(523094, 24292, 24290);
				tv0->AddReply(523095, 24292, 24291);
				return;
			}
			if (a0 == 24292) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523096);
				tv0->ClearReplies();
				tv0->AddReply(523097, -1, 24295);
				tv0->AddReply(523098, 24297, 24296);
				return;
			}
			if (a0 == 24297) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523099);
				tv0->ClearReplies();
				tv0->AddReply(523100, -1, 24298);
				tv0->AddReply(523101, -1, 24299);
				return;
			}
			if (a0 == 24300) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523102);
				tv0->ClearReplies();
				tv0->AddReply(523103, 24302, 24301);
				return;
			}
			if (a0 == 24302) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523104);
				tv0->ClearReplies();
				tv0->AddReply(523105, 24304, 24303);
				return;
			}
			if (a0 == 24304) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523106);
				tv0->ClearReplies();
				tv0->AddReply(523107, 24308, 24305);
				tv0->AddReply(523108, 24308, 24306);
				tv0->AddReply(523109, 24308, 24307);
				return;
			}
			if (a0 == 24308) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523110);
				tv0->ClearReplies();
				tv0->AddReply(523111, -1, 24311);
				tv0->AddReply(523112, -1, 24312);
				return;
			}
			if (a0 == 24262) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523068);
				tv0->ClearReplies();
				tv0->AddReply(523069, 24271, 24263);
				tv0->AddReply(523070, 24265, 24264);
				return;
			}
			if (a0 == 24265) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523071);
				tv0->ClearReplies();
				tv0->AddReply(523072, 24267, 24266);
				return;
			}
			if (a0 == 24267) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523073);
				tv0->ClearReplies();
				tv0->AddReply(523074, 24271, 24268);
				tv0->AddReply(523075, 24271, 24269);
				return;
			}
			if (a0 == 24271) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523077);
				tv0->ClearReplies();
				tv0->AddReply(523078, 24275, 24274);
				return;
			}
			if (a0 == 24275) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523079);
				tv0->ClearReplies();
				tv0->AddReply(523080, 24277, 24276);
				return;
			}
			if (a0 == 24277) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523081);
				tv0->ClearReplies();
				tv0->AddReply(523082, -1, 24278);
				tv0->AddReply(523083, 24280, 24279);
				return;
			}
			if (a0 == 24280) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523084);
				tv0->ClearReplies();
				tv0->AddReply(523085, -1, 24281);
				return;
			}
			if (a0 == 42248) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(540265);
				tv0->ClearReplies();
				tv0->AddReply(540266, -1, 42249);
				return;
			}
			if (a0 == 24242) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523049);
				tv0->ClearReplies();
				tv0->AddReply(523050, 24244, 24243);
				return;
			}
			if (a0 == 24244) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523051);
				tv0->ClearReplies();
				tv0->AddReply(523052, 24246, 24245);
				return;
			}
			if (a0 == 24246) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523053);
				tv0->ClearReplies();
				tv0->AddReply(523058, 24252, 24251);
				tv0->AddReply(523054, 24248, 24247);
				return;
			}
			if (a0 == 24248) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523055);
				tv0->ClearReplies();
				tv0->AddReply(523056, 24254, 24249);
				tv0->AddReply(523057, -1, 24250);
				return;
			}
			if (a0 == 24254) {
				if (!f_69a_a1_b(tv1)) {
					f_106_a1_v("Neutral");
					tv0->SetMessage(523061);
					tv0->ClearReplies();
					tv0->AddReply(540121, 42091, 42090);
					return;
				}
				if (f_69a_a1_b(tv1)) {
					f_106_a1_v("Neutral");
					tv0->SetMessage(531996);
					tv0->ClearReplies();
					tv0->AddReply(531997, -1, 33403);
					tv0->AddReply(531998, -1, 33404);
					return;
				}
			}
			if (a0 == 42091) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(540122);
				tv0->ClearReplies();
				tv0->AddReply(523063, -1, 24256);
				return;
			}
			if (a0 == 24252) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(523059);
				tv0->ClearReplies();
				tv0->AddReply(523060, 24248, 24253);
				tv0->AddReply(531991, 33398, 33397);
				return;
			}
			if (a0 == 33398) {
				if (!f_69a_a1_b(tv1)) {
					f_106_a1_v("Neutral");
					tv0->SetMessage(531992);
					tv0->ClearReplies();
					tv0->AddReply(532023, 33424, 33423);
					return;
				}
				if (f_69a_a1_b(tv1)) {
					f_106_a1_v("Neutral");
					tv0->SetMessage(531994);
					tv0->ClearReplies();
					tv0->AddReply(532035, 33436, 33435);
					return;
				}
			}
			if (a0 == 33436) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(532036);
				tv0->ClearReplies();
				tv0->AddReply(531995, -1, 33401);
				return;
			}
			if (a0 == 33424) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(532024);
				tv0->ClearReplies();
				tv0->AddReply(532025, 33426, 33425);
				tv0->AddReply(532033, -1, 33433);
				return;
			}
			if (a0 == 33426) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(532026);
				tv0->ClearReplies();
				tv0->AddReply(532027, 33428, 33427);
				tv0->AddReply(532032, -1, 33432);
				return;
			}
			if (a0 == 33428) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(532028);
				tv0->ClearReplies();
				tv0->AddReply(532029, 33430, 33429);
				return;
			}
			if (a0 == 33430) {
				f_106_a1_v("Neutral");
				tv0->SetMessage(532030);
				tv0->ClearReplies();
				tv0->AddReply(532031, -1, 33431);
				return;
			}
			tv3 = true;
			if (f_778_a0_b()) {
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
	var bool tv0;

	void init(void)
	{
		f_4c9_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_4c9_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_4f9_a0_b()) {
				@RemoveActor(f_5fd_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_4f9_a0_b()) {
			@RemoveActor(f_5fd_a0_o());
		}
	}
}

bool f_4f9_a0_b(void)
{
	return true;
}

bool f_4fb_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_603_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_778_a0_b()) {
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

void f_53f_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_778_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_550_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_58a_a1_b(a0)) {
			if (!f_5af_a1_b(a0)) {
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
		if (!f_5af_a1_b(a0)) {
			if (!f_58a_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_58a_a1_b(object a0)
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
	return f_5e7_a1_b(L4);
}

bool f_5af_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_612_a0_i() + "m";
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
	return f_5e7_a1_b(L4);
}

void f_5da_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_5e1_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_5e7_a1_b(string a0)
{
	if (f_778_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_5f6_a0_v(void)
{
	if (f_778_a0_b()) {
		@lshStopSpeech();
	}
}

object f_5fd_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_603_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_60d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_612_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_61b_a2_v(object a0, object a1)
{
	@SetVariable("b12q01KlaraInSobor", 1);
	f_6c2_a0_v();
}

void f_624_a2_v(object a0, object a1)
{
	@SetVariable("oob12KlaraT2_1", 1);
}

void f_62a_a2_v(object a0, object a1)
{
	@SetVariable("b12q01KlaraVisit", 1);
}

void f_630_a2_v(object a0, object a1)
{
	@SetVariable("oob12KlaraT2_2", 1);
}

void f_636_a2_v(object a0, object a1)
{
	@SetVariable("oob12KlaraT2_3", 1);
}

void f_63c_a2_v(object a0, object a1)
{
	if (f_60d_a1_i("b12q01_Klara") == 0) {
		@SetVariable("b12q01_Klara", 1);
		f_6cf_a0_v();
	}
}

void f_64c_a2_v(object a0, object a1)
{
	@SetVariable("oob12KlaraT2_4", 1);
}

bool f_652_a1_b(object a0)
{
	if (f_60d_a1_i("oob12KlaraT2_1") == 0) {
		return true;
	}
	return false;
}

bool f_65e_a1_b(object a0)
{
	if (f_60d_a1_i("b12q01ChildsAreVisited") != 0) {
		return true;
	}
	return false;
}

bool f_66a_a1_b(object a0)
{
	if (f_60d_a1_i("b12q01TheaterIsVisited") != 0) {
		return true;
	}
	return false;
}

bool f_676_a1_b(object a0)
{
	if (f_60d_a1_i("oob12KlaraT2_2") == 0) {
		return true;
	}
	return false;
}

bool f_682_a1_b(object a0)
{
	if (f_60d_a1_i("oob12KlaraT2_3") == 0) {
		return true;
	}
	return false;
}

bool f_68e_a1_b(object a0)
{
	if (f_60d_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_69a_a1_b(object a0)
{
	if (f_6bc_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_6a4_a1_b(object a0)
{
	if (f_60d_a1_i("b12q01KlaraInSobor") != 0) {
		return true;
	}
	return false;
}

bool f_6b0_a1_b(object a0)
{
	if (f_60d_a1_i("oob12KlaraT2_4") == 0) {
		return true;
	}
	return false;
}

bool f_6bc_a1_b(object a0)
{
	return f_74a_a0_b();
}

void f_6c2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 615, 1, 532004);
	f_6e9_a2_b(L0, 613);
}

void f_6cf_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 696, 1, 535404);
	f_6e9_a2_b(L0, 613);
}

object f_6dc_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_6e9_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_6dc_a0_o();
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

int f_705_a0_i(void)
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

void f_716_a3_v(object a0, bool a1, int a2)
{
	a0->add(7);
	a0->add(23);
	a0->add(21);
	a0->add(9);
	a0->add(3);
	a0->add(1);
	a0->add(11);
	a0->add(13);
	if (a1 == false) {
		a0->add(25);
	}
}

bool f_736_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_740_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

bool f_74a_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_716_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_740_a1_b(L3) || f_736_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

int f_770_a0_i(void)
{
	return 515540;
}

int f_772_a0_i(void)
{
	return 502865;
}

string f_774_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

string f_776_a0_s(void)
{
	return "ui/NPC_Klara_b.png";
}

bool f_778_a0_b(void)
{
	return true;
}

