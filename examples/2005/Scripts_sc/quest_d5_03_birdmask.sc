event OnDialogReply 11;
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
		if (!f_2b0_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4e3_a0_i());
		L0->SetNPCDescription(f_4e1_a0_i());
		L0->SetPhoto(f_4e5_a0_s());
		L0->SetPhoto2(f_4e7_a0_s());
		L0->SetPlayerName(f_4d0_a0_i());
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
		f_2f4_a1_v(a0);
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
			if (f_434_a1_b(tv1)) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(512551);
				tv0->ClearReplies();
				tv0->AddReply(512552, 13722, 13721);
				tv0->AddReply(515690, -1, 16737);
				break;
			}
			f_c9_a1_v("Neutral");
			tv0->SetMessage(512562);
			tv0->ClearReplies();
			if (f_41e_a1_b(tv1) && f_458_a1_b(tv1)) {
				tv0->AddReply(512563, 13734, 13732);
			}
			if (f_428_a1_b(tv1) && !f_440_a1_b(tv1) && !f_44c_a1_b(tv1)) {
				tv0->AddReply(512567, 13737, 13736);
			}
			tv0->AddReply(512564, -1, 13733);
			break;
			return;
		}
		if (f_4e9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_305_a1_v(tv2);
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

	void f_c9_a1_v(string a0)
	{
		if (!f_4e9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_30c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_312_a0_v();
			if (a1 == 13729) {
				f_3b6_a2_v(tv1, tv0);
				f_3ac_a2_v(tv1, tv0);
				f_3a0_a2_v(tv1, tv0);
			}
			if (a1 == 13730) {
				f_3ee_a2_v(tv1, tv0);
			}
			if (a1 == 16739) {
				f_417_a2_v(tv1, tv0);
			}
			if (a1 == 16737) {
				f_396_a2_v(tv1, tv0);
			}
			if (a1 == 13735) {
				f_3ac_a2_v(tv1, tv0);
				f_3a0_a2_v(tv1, tv0);
				f_3b6_a2_v(tv1, tv0);
			}
			if (a1 == 13738) {
				f_3a6_a2_v(tv1, tv0);
			}
			if (a0 == 13720) {
				if (f_434_a1_b(tv1)) {
					f_c9_a1_v("Neutral");
					tv0->SetMessage(512551);
					tv0->ClearReplies();
					tv0->AddReply(512552, 13722, 13721);
					tv0->AddReply(515690, -1, 16737);
					return;
				}
				f_c9_a1_v("Neutral");
				tv0->SetMessage(512562);
				tv0->ClearReplies();
				if (f_41e_a1_b(tv1) && f_458_a1_b(tv1)) {
					tv0->AddReply(512563, 13734, 13732);
				}
				if (f_428_a1_b(tv1) && !f_440_a1_b(tv1) && !f_44c_a1_b(tv1)) {
					tv0->AddReply(512567, 13737, 13736);
				}
				tv0->AddReply(512564, -1, 13733);
				return;
			}
			if (a0 == 13737) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(512568);
				tv0->ClearReplies();
				tv0->AddReply(512609, 13785, 13784);
				tv0->AddReply(515693, 13785, 16740);
				return;
			}
			if (a0 == 13785) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(512610);
				tv0->ClearReplies();
				tv0->AddReply(512569, -1, 13738);
				return;
			}
			if (a0 == 13734) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(512565);
				tv0->ClearReplies();
				tv0->AddReply(512566, -1, 13735);
				return;
			}
			if (a0 == 13722) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(512553);
				tv0->ClearReplies();
				tv0->AddReply(512554, 13724, 13723);
				tv0->AddReply(512604, 13778, 13777);
				return;
			}
			if (a0 == 13778) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(512605);
				tv0->ClearReplies();
				tv0->AddReply(512606, 13724, 13779);
				tv0->AddReply(515691, 13724, 16738);
				return;
			}
			if (a0 == 13724) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(512555);
				tv0->ClearReplies();
				tv0->AddReply(512556, 13726, 13725);
				tv0->AddReply(512607, 13726, 13781);
				return;
			}
			if (a0 == 13726) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(512557);
				tv0->ClearReplies();
				tv0->AddReply(512558, 13728, 13727);
				return;
			}
			if (a0 == 13728) {
				f_c9_a1_v("Neutral");
				tv0->SetMessage(512559);
				tv0->ClearReplies();
				if (f_41e_a1_b(tv1)) {
					tv0->AddReply(512560, -1, 13729);
				}
				tv0->AddReply(512561, -1, 13730);
				tv0->AddReply(515692, -1, 16739);
				return;
			}
			tv3 = true;
			if (f_4e9_a0_b()) {
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
			f_385_a2_b("quest_d5_03", "completed");
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
			if (!L0 && f_285_a0_b()) {
				@RemoveActor(f_319_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_285_a0_b()) {
			@RemoveActor(f_319_a0_o());
		}
	}
}

bool f_285_a0_b(void)
{
	return true;
}

bool f_287_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_293_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_287_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_329_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_2a9_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_2b0_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_31f_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_4e9_a0_b()) {
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

void f_2f4_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_4e9_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_305_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_30c_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_312_a0_v(void)
{
	if (f_4e9_a0_b()) {
		@lshStopSpeech();
	}
}

object f_319_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_31f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_329_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_334_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_339_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_345_a2_v(object a0, int a1)
{
	f_2a9_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_339_a2_v(L0, a1);
	}
}

bool f_358_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_37b_a1_v(a1);
	f_293_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_37b_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_385_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_391_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_396_a2_v(object a0, object a1)
{
	f_46f_a0_v();
	f_385_a2_b("quest_d5_03", "fail");
}

void f_3a0_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_3a6_a2_v(object a0, object a1)
{
	@SetVariable("ood5Birdmask1", 1);
}

void f_3ac_a2_v(object a0, object a1)
{
	@Trace("money 50000 removed");
	f_345_a2_v(a0, -50000);
}

void f_3b6_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_4bf_a0_o();
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
	f_489_a0_v();
	a1->SetReturnValue(1);
}

void f_3ee_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q03", 2);
	L0 = f_4bf_a0_o();
	L0->AddMark("d5q03BirdmaskBringMoneySelf", "pt_map_uprava_prison", 0, 515372, f_391_a0_f());
	L0->AddMark("d5q03BirdmaskGotoMladVlad", "pt_map_mladvlad", 0, 515374, f_391_a0_f());
	L0->AddMark("d5q03BirdmaskGotoViktor", "pt_map_viktor", 0, 515373, f_391_a0_f());
	f_47c_a0_v();
}

void f_417_a2_v(object a0, object a1)
{
	f_358_a2_b(a0, -0.30000001192092896);
}

bool f_41e_a1_b(object a0)
{
	if (f_464_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_428_a1_b(object a0)
{
	if (f_334_a1_i("ood5Birdmask1") == 0) {
		return true;
	}
	return false;
}

bool f_434_a1_b(object a0)
{
	if (f_334_a1_i("d5q03") == 1) {
		return true;
	}
	return false;
}

bool f_440_a1_b(object a0)
{
	if (f_334_a1_i("d5q03") == 1000) {
		return true;
	}
	return false;
}

bool f_44c_a1_b(object a0)
{
	if (f_334_a1_i("d5q03") == -1) {
		return true;
	}
	return false;
}

bool f_458_a1_b(object a0)
{
	if (f_334_a1_i("d5q03") == 2) {
		return true;
	}
	return false;
}

bool f_464_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 50000) {
		return true;
	}
	return false;
}

void f_46f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 714, 2, 536322);
	f_4a3_a2_b(L0, 154);
}

void f_47c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 156, 2, 515367);
	f_4a3_a2_b(L0, 154);
}

void f_489_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 157, 2, 515368);
	f_4a3_a2_b(L0, 154);
}

object f_496_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_4a3_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_496_a0_o();
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

object f_4bf_a0_o(void)
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

int f_4d0_a0_i(void)
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

int f_4e1_a0_i(void)
{
	return 515571;
}

int f_4e3_a0_i(void)
{
	return 504029;
}

string f_4e5_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_4e7_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_4e9_a0_b(void)
{
	return false;
}

