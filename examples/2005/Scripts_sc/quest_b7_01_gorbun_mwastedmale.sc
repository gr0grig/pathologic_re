event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnLoad 5;
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
		if (!f_267_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3c2_a0_i());
		L0->SetNPCDescription(f_3c0_a0_i());
		L0->SetPhoto(f_3c4_a0_s());
		L0->SetPhoto2(f_3c6_a0_s());
		L0->SetPlayerName(f_3af_a0_i());
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
		f_2ab_a1_v(a0);
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
			if (f_33b_a1_b(tv1)) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(520997);
				tv0->ClearReplies();
				tv0->AddReply(524092, 25396, 25395);
				tv0->AddReply(524096, 25405, 25399);
				break;
			}
			f_a2_a1_v("Neutral");
			tv0->SetMessage(520999);
			tv0->ClearReplies();
			if (f_32f_a1_b(tv1)) {
				tv0->AddReply(521000, 29872, 22213);
			}
			tv0->AddReply(528488, -1, 29877);
			break;
			return;
		}
		if (f_3c8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2bc_a1_v(tv2);
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
		if (!f_3c8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2c3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_2c9_a0_v();
			if (a1 == 22211) {
				f_302_a2_v(tv1, tv0);
				f_31f_a2_v(tv1, tv0);
			}
			if (a1 == 22213) {
				f_319_a2_v(tv1, tv0);
			}
			if (a0 == 22210) {
				if (f_33b_a1_b(tv1)) {
					f_a2_a1_v("Neutral");
					tv0->SetMessage(520997);
					tv0->ClearReplies();
					tv0->AddReply(524092, 25396, 25395);
					tv0->AddReply(524096, 25405, 25399);
					return;
				}
				f_a2_a1_v("Neutral");
				tv0->SetMessage(520999);
				tv0->ClearReplies();
				if (f_32f_a1_b(tv1)) {
					tv0->AddReply(521000, 29872, 22213);
				}
				tv0->AddReply(528488, -1, 29877);
				return;
			}
			if (a0 == 29872) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(528483);
				tv0->ClearReplies();
				tv0->AddReply(528484, 29874, 29873);
				return;
			}
			if (a0 == 29874) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(528485);
				tv0->ClearReplies();
				tv0->AddReply(528486, -1, 29875);
				tv0->AddReply(528487, -1, 29876);
				return;
			}
			if (a0 == 25405) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(524102);
				tv0->ClearReplies();
				tv0->AddReply(524103, 25401, 25406);
				return;
			}
			if (a0 == 25396) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(524093);
				tv0->ClearReplies();
				tv0->AddReply(524094, 25398, 25397);
				tv0->AddReply(524101, 25401, 25404);
				return;
			}
			if (a0 == 25398) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(524095);
				tv0->ClearReplies();
				tv0->AddReply(524097, 25401, 25400);
				tv0->AddReply(524104, 25408, 25407);
				return;
			}
			if (a0 == 25408) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(524105);
				tv0->ClearReplies();
				tv0->AddReply(524106, 25403, 25411);
				tv0->AddReply(524107, 25401, 25412);
				return;
			}
			if (a0 == 25401) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(524098);
				tv0->ClearReplies();
				tv0->AddReply(524099, 25403, 25402);
				return;
			}
			if (a0 == 25403) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(524100);
				tv0->ClearReplies();
				tv0->AddReply(520998, -1, 22211);
				return;
			}
			tv3 = true;
			if (f_3c8_a0_b()) {
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

	void OnUse(object a0)
	{
		f_25d_a0_v();
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			float L0;
			while (!f_262_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_20c_a0_v();
		}
	}

	void f_1d9_a0_v(void)
	{
		bool L0;
		tv0 = true;
		@IsLoaded(L0);
		if (!L0 && f_20a_a0_b()) {
			@RemoveActor(f_2d0_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_1d9_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_20a_a0_b()) {
			@RemoveActor(f_2d0_a0_o());
		}
	}
}

bool f_20a_a0_b(void)
{
	return true;
}

void f_20c_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_262_a0_b()) {
		return;
	}
	L0 = f_2f1_a0_i();
	for (L1 = 0; L1 < 5 && f_262_a0_b(); L1 = L1 + 1) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_2ea_a1_s(L3));
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
		if (!f_25b_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_25b_a0_b(void)
{
	return true;
}

void f_25d_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_262_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_267_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_2d6_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_3c8_a0_b()) {
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

void f_2ab_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_3c8_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2bc_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_2c3_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_2c9_a0_v(void)
{
	if (f_3c8_a0_b()) {
		@lshStopSpeech();
	}
}

object f_2d0_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_2d6_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2e0_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

float f_2e5_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

string f_2ea_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_2f1_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_2ea_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_302_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b7q01", 5);
	L0 = f_37d_a0_o();
	L0->AddMark("b7q01WastedGotoViktor", "pt_map_viktor", 1, 521026, f_2e5_a0_f());
	f_347_a0_v();
}

void f_319_a2_v(object a0, object a1)
{
	@SetVariable("oob7WastedMaleM1", 1);
}

void f_31f_a2_v(object a0, object a1)
{
	f_38e_a3_v(f_37d_a0_o(), "pt_map_viktor", 2);
	a1->ShowMap(f_37d_a0_o());
}

bool f_32f_a1_b(object a0)
{
	if (f_2e0_a1_i("oob7WastedMaleM1") == 0) {
		return true;
	}
	return false;
}

bool f_33b_a1_b(object a0)
{
	if (f_2e0_a1_i("b7q01") == 4) {
		return true;
	}
	return false;
}

void f_347_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 258, 1, 521030);
	f_361_a2_b(L0, 253);
}

object f_354_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_361_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_354_a0_o();
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

object f_37d_a0_o(void)
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

void f_38e_a3_v(object a0, string a1, float a2)
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

int f_3af_a0_i(void)
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

int f_3c0_a0_i(void)
{
	return 515556;
}

int f_3c2_a0_i(void)
{
	return 503341;
}

string f_3c4_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_3c6_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_3c8_a0_b(void)
{
	return false;
}

