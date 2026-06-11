event OnDialogReply 11;
event OnUse 0;
event OnTrigger 26;
event OnLoad 5;
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
		if (!f_375_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_559_a0_i());
		L0->SetNPCDescription(f_557_a0_i());
		L0->SetPhoto(f_55b_a0_s());
		L0->SetPhoto2(f_55d_a0_s());
		L0->SetPlayerName(f_546_a0_i());
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
		f_3b9_a1_v(a0);
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
			f_a5_a1_v("Neutral");
			tv0->SetMessage(518626);
			tv0->ClearReplies();
			if (f_4a5_a1_b(tv1) && f_4b1_a1_b(tv1) && f_49b_a1_b(tv1)) {
				tv0->AddReply(518627, 19969, 19719);
			}
			if (f_4bd_a1_b(tv1)) {
				tv0->AddReply(518857, 19965, 19964);
			}
			tv0->AddReply(518632, -1, 19724);
			break;
			return;
		}
		if (f_55f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3ca_a1_v(tv2);
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

	void f_a5_a1_v(string a0)
	{
		if (!f_55f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3d1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3e2_a0_v();
			if (a1 == 19719) {
				f_455_a2_v(tv1, tv0);
				f_42f_a2_v(tv1, tv0);
			}
			if (a1 == 19992) {
				f_435_a2_v(tv1, tv0);
				f_45b_a2_v(tv1, tv0);
				f_476_a2_v(tv1, tv0);
				f_47b_a2_v(tv1, tv0);
			}
			if (a1 == 19723) {
				f_435_a2_v(tv1, tv0);
				f_45b_a2_v(tv1, tv0);
				f_476_a2_v(tv1, tv0);
				f_48b_a2_v(tv1, tv0);
			}
			if (a1 == 19990) {
				f_435_a2_v(tv1, tv0);
				f_45b_a2_v(tv1, tv0);
				f_476_a2_v(tv1, tv0);
				f_47b_a2_v(tv1, tv0);
			}
			if (a1 == 19989) {
				f_435_a2_v(tv1, tv0);
				f_45b_a2_v(tv1, tv0);
				f_47b_a2_v(tv1, tv0);
			}
			if (a1 == 19964) {
				f_470_a2_v(tv1, tv0);
			}
			if (a0 == 19718) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518626);
				tv0->ClearReplies();
				if (f_4a5_a1_b(tv1) && f_4b1_a1_b(tv1) && f_49b_a1_b(tv1)) {
					tv0->AddReply(518627, 19969, 19719);
				}
				if (f_4bd_a1_b(tv1)) {
					tv0->AddReply(518857, 19965, 19964);
				}
				tv0->AddReply(518632, -1, 19724);
				return;
			}
			if (a0 == 19965) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518858);
				tv0->ClearReplies();
				tv0->AddReply(518859, 19967, 19966);
				return;
			}
			if (a0 == 19967) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518860);
				tv0->ClearReplies();
				tv0->AddReply(518861, -1, 19968);
				return;
			}
			if (a0 == 19969) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518862);
				tv0->ClearReplies();
				tv0->AddReply(518863, 19971, 19970);
				tv0->AddReply(518865, 19973, 19972);
				return;
			}
			if (a0 == 19973) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518866);
				tv0->ClearReplies();
				tv0->AddReply(518868, 19978, 19975);
				return;
			}
			if (a0 == 19971) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518864);
				tv0->ClearReplies();
				tv0->AddReply(518867, 19976, 19974);
				return;
			}
			if (a0 == 19976) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518869);
				tv0->ClearReplies();
				tv0->AddReply(518870, 19978, 19977);
				return;
			}
			if (a0 == 19978) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518871);
				tv0->ClearReplies();
				tv0->AddReply(518872, 19982, 19980);
				tv0->AddReply(518873, 19982, 19981);
				return;
			}
			if (a0 == 19982) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518874);
				tv0->ClearReplies();
				tv0->AddReply(518875, 19985, 19984);
				return;
			}
			if (a0 == 19985) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518876);
				tv0->ClearReplies();
				tv0->AddReply(518877, 19987, 19986);
				tv0->AddReply(518880, -1, 19989);
				return;
			}
			if (a0 == 19987) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518878);
				tv0->ClearReplies();
				tv0->AddReply(518879, 19991, 19988);
				tv0->AddReply(518881, -1, 19990);
				return;
			}
			if (a0 == 19991) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518882);
				tv0->ClearReplies();
				tv0->AddReply(518883, -1, 19992);
				tv0->AddReply(518884, 19994, 19993);
				return;
			}
			if (a0 == 19994) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(518885);
				tv0->ClearReplies();
				tv0->AddReply(518631, -1, 19723);
				return;
			}
			tv3 = true;
			if (f_55f_a0_b()) {
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

	void init(void)
	{
		f_274_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_304_a0_v();
		t0{a0};
	}

	void f_274_a2_v(float a0, float a1)
	{
		for (; ; ) {
			float L0;
			while (!f_370_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_2c3_a2_v(a0, a1);
			@sync();
		}
	}

	void f_28d_a0_v(void)
	{
		bool L0;
		tv5 = true;
		@IsLoaded(L0);
		if (!L0 && f_2c1_a0_b()) {
			@RemoveActor(f_3e9_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_28d_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		f_304_a0_v();
		if (tv5 && f_2c1_a0_b()) {
			@RemoveActor(f_3e9_a0_o());
		}
	}

	bool f_2c1_a0_b(void)
	{
		return true;
	}

	void f_2c3_a2_v(float a0, float a1)
	{
		if (!f_370_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_312_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_2de_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_368_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_2de_a0_b()) {
				if (!tv2) {
					f_3d7_a1_v(tv4);
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

	void f_304_a0_v(void)
	{
		f_363_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_312_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_370_a0_b()) {
		return;
	}
	L0 = f_41e_a0_i();
	for (L1 = 0; L1 < 5 && f_370_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_417_a1_s(L3));
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
		if (!f_361_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_361_a0_b(void)
{
	return true;
}

void f_363_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_368_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_370_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_375_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3ef_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_55f_a0_b()) {
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

void f_3b9_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_55f_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_3ca_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_3d1_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_3d7_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_3e2_a0_v(void)
{
	if (f_55f_a0_b()) {
		@lshStopSpeech();
	}
}

object f_3e9_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_3ef_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3f9_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_3fe_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_40a_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_40f_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

string f_417_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_41e_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_417_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_42f_a2_v(object a0, object a1)
{
	@SetVariable("b5q01TalkToVera", 1);
}

void f_435_a2_v(object a0, object a1)
{
	if (f_3f9_a1_i("b5q01PlaceButchers") == 0) {
		object L0;
		@SetVariable("b5q01PlaceButchers", 1);
		L0 = f_514_a0_o();
		L0->AddMark("b5q01GathererWife", "pt_gatherer3", 1, 530181, f_40a_a0_f());
		f_3fe_a2_b("quest_b5_01", "place_butchers");
	}
}

void f_455_a2_v(object a0, object a1)
{
	@SetVariable("oob5Vera1_1", 1);
}

void f_45b_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_514_a0_o();
	L0->AddMark("b5q01VeraGotoStvorki", "pt_b5q01_vera", 1, 519747, f_40a_a0_f());
	f_3fe_a2_b("quest_b5_01", "vera_stvorki");
}

void f_470_a2_v(object a0, object a1)
{
	@SetVariable("oob5Vera1_2", 1);
}

void f_476_a2_v(object a0, object a1)
{
	f_4de_a0_v();
}

void f_47b_a2_v(object a0, object a1)
{
	f_525_a3_v(f_514_a0_o(), "pt_gatherer3", 2);
	a1->ShowMap(f_514_a0_o());
}

void f_48b_a2_v(object a0, object a1)
{
	f_525_a3_v(f_514_a0_o(), "pt_b5q01_vera", 2);
	a1->ShowMap(f_514_a0_o());
}

bool f_49b_a1_b(object a0)
{
	if (f_4c9_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_4a5_a1_b(object a0)
{
	if (f_3f9_a1_i("b5q01") == 1) {
		return true;
	}
	return false;
}

bool f_4b1_a1_b(object a0)
{
	if (f_3f9_a1_i("oob5Vera1_1") == 0) {
		return true;
	}
	return false;
}

bool f_4bd_a1_b(object a0)
{
	if (f_3f9_a1_i("oob5Vera1_2") == 0) {
		return true;
	}
	return false;
}

bool f_4c9_a1_b(object a0)
{
	if (f_40f_a0_i() >= 0 && f_40f_a0_i() < 20) {
		return true;
	}
	return false;
}

void f_4de_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 389, 1, 525828);
	f_4f8_a2_b(L0, 238);
}

object f_4eb_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_4f8_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_4eb_a0_o();
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

object f_514_a0_o(void)
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

void f_525_a3_v(object a0, string a1, float a2)
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

int f_546_a0_i(void)
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

int f_557_a0_i(void)
{
	return 515593;
}

int f_559_a0_i(void)
{
	return 512582;
}

string f_55b_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_55d_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_55f_a0_b(void)
{
	return false;
}

