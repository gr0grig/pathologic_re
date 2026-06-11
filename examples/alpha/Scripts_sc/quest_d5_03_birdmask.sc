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
		if (!f_24d_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_403_a0_i());
		L0->SetPhoto(f_405_a0_s());
		L0->SetPlayerName(f_3d2_a0_i());
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
		f_285_a1_v(a0);
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
			if (f_35c_a1_b(tv1)) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(12551);
				tv0->ClearReplies();
				tv0->AddReply(12552, 13722, 13721);
				break;
			}
			f_b9_a1_v("Neutral");
			tv0->SetMessage(12562);
			tv0->ClearReplies();
			if (f_346_a1_b(tv1) && f_380_a1_b(tv1)) {
				tv0->AddReply(12563, 13734, 13732);
			}
			if (f_350_a1_b(tv1) && !f_368_a1_b(tv1) && !f_374_a1_b(tv1)) {
				tv0->AddReply(12567, 13737, 13736);
			}
			tv0->AddReply(12564, -1, 13733);
			break;
			return;
		}
		if (f_407_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_289_a1_v(tv2);
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

	void f_b9_a1_v(string a0)
	{
		if (!f_407_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_289_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_29b_a0_v();
			if (a1 == 13729) {
				f_2e5_a2_v(tv1, tv0);
				f_2d4_a2_v(tv1, tv0);
				f_2c8_a2_v(tv1, tv0);
			}
			if (a1 == 13730) {
				f_31d_a2_v(tv1, tv0);
			}
			if (a1 == 13735) {
				f_2d4_a2_v(tv1, tv0);
				f_2c8_a2_v(tv1, tv0);
				f_2e5_a2_v(tv1, tv0);
			}
			if (a1 == 13738) {
				f_2ce_a2_v(tv1, tv0);
			}
			if (a0 == 13720) {
				if (f_35c_a1_b(tv1)) {
					f_b9_a1_v("Neutral");
					tv0->SetMessage(12551);
					tv0->ClearReplies();
					tv0->AddReply(12552, 13722, 13721);
					return;
				}
				f_b9_a1_v("Neutral");
				tv0->SetMessage(12562);
				tv0->ClearReplies();
				if (f_346_a1_b(tv1) && f_380_a1_b(tv1)) {
					tv0->AddReply(12563, 13734, 13732);
				}
				if (f_350_a1_b(tv1) && !f_368_a1_b(tv1) && !f_374_a1_b(tv1)) {
					tv0->AddReply(12567, 13737, 13736);
				}
				tv0->AddReply(12564, -1, 13733);
				return;
			}
			if (a0 == 13737) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(12568);
				tv0->ClearReplies();
				tv0->AddReply(12609, 13785, 13784);
				return;
			}
			if (a0 == 13785) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(12610);
				tv0->ClearReplies();
				tv0->AddReply(12569, -1, 13738);
				return;
			}
			if (a0 == 13734) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(12565);
				tv0->ClearReplies();
				tv0->AddReply(12566, -1, 13735);
				return;
			}
			if (a0 == 13722) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(12553);
				tv0->ClearReplies();
				tv0->AddReply(12554, 13724, 13723);
				tv0->AddReply(12604, 13778, 13777);
				return;
			}
			if (a0 == 13778) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(12605);
				tv0->ClearReplies();
				tv0->AddReply(12606, 13724, 13779);
				return;
			}
			if (a0 == 13724) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(12555);
				tv0->ClearReplies();
				tv0->AddReply(12556, 13726, 13725);
				tv0->AddReply(12607, 13726, 13781);
				return;
			}
			if (a0 == 13726) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(12557);
				tv0->ClearReplies();
				tv0->AddReply(12558, 13728, 13727);
				return;
			}
			if (a0 == 13728) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(12559);
				tv0->ClearReplies();
				if (f_346_a1_b(tv1)) {
					tv0->AddReply(12560, -1, 13729);
				}
				tv0->AddReply(12561, -1, 13730);
				return;
			}
			tv3 = true;
			if (f_407_a0_b()) {
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
		if (t0{a0} == 1) {
			f_2b7_a2_b("quest_d5_03", "completed");
		}
	}

	void init(void)
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
			if (!L0 && f_24b_a0_b()) {
				@RemoveActor(f_2a2_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_24b_a0_b()) {
			@RemoveActor(f_2a2_a0_o());
		}
	}
}

bool f_24b_a0_b(void)
{
	return true;
}

bool f_24d_a1_b(object a0)
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
	L5 = L3 * 70 + f_2a8_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_285_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_289_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_29b_a0_v(void)
{
	if (f_407_a0_b()) {
		@lshStopSpeech();
	}
}

object f_2a2_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_2a8_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2b2_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_2b7_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_2c3_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_2c8_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_2ce_a2_v(object a0, object a1)
{
	@SetVariable("ood5Birdmask1", 1);
}

void f_2d4_a2_v(object a0, object a1)
{
	float L0;
	a0->GetProperty("money", L0);
	L0 = L0 - 50000;
	if (L0 < 0) {
		L0 = 0;
	}
	a0->SetProperty("money", L0);
	@Trace("money 50000 removed");
}

void f_2e5_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_3c1_a0_o();
	L0->FindMark(L1, "d5q03BirdmaskBringMoneySelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q03BirdmaskGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q03BirdmaskGotoViktor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q03MladVladSavePrisonersSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q03SavePrisoners");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q03ViktorSavePrisonersSelf");
	if (L1) {
		L1->Remove();
	}
	f_3f3_a0_v();
	a1->SetReturnValue(1);
}

void f_31d_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q03", 2);
	L0 = f_3c1_a0_o();
	L0->AddMark("d5q03BirdmaskBringMoneySelf", "pt_map_uprava_prison", 0, 15372, f_2c3_a0_f());
	L0->AddMark("d5q03BirdmaskGotoMladVlad", "pt_map_mladvlad", 0, 15374, f_2c3_a0_f());
	L0->AddMark("d5q03BirdmaskGotoViktor", "pt_map_viktor", 0, 15373, f_2c3_a0_f());
	f_3e3_a0_v();
}

bool f_346_a1_b(object a0)
{
	if (f_38c_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_350_a1_b(object a0)
{
	if (f_2b2_a1_i("ood5Birdmask1") == 0) {
		return true;
	}
	return false;
}

bool f_35c_a1_b(object a0)
{
	if (f_2b2_a1_i("d5q03") == 1) {
		return true;
	}
	return false;
}

bool f_368_a1_b(object a0)
{
	if (f_2b2_a1_i("d5q03") == 1000) {
		return true;
	}
	return false;
}

bool f_374_a1_b(object a0)
{
	if (f_2b2_a1_i("d5q03") == -1) {
		return true;
	}
	return false;
}

bool f_380_a1_b(object a0)
{
	if (f_2b2_a1_i("d5q03") == 2) {
		return true;
	}
	return false;
}

bool f_38c_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 50000) {
		return true;
	}
	return false;
}

object f_397_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_3a4_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_397_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SetVariable("player_diary", 1);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

object f_3c1_a0_o(void)
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

int f_3d2_a0_i(void)
{
	int L0;
	@GetVariable("player", L0);
	if (L0 == 0) {
		return 200001;
	} else {
		if (L0 == 1) {
			return 200002;
		}
	}
	return 200003;
}

void f_3e3_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 156, 2, 15367);
	f_3a4_a2_b(L0, 154);
}

void f_3f3_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 157, 2, 15368);
	f_3a4_a2_b(L0, 154);
}

int f_403_a0_i(void)
{
	return 4029;
}

string f_405_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_407_a0_b(void)
{
	return false;
}

