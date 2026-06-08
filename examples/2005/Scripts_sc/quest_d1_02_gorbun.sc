event evt_11 11;
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
		if (!f_316_a2_b(a0, 100.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3cc_a0_i());
		L0->SetNPCDescription(f_3ca_a0_i());
		L0->SetPhoto(f_3ce_a0_s());
		L0->SetPhoto2(f_3d0_a0_s());
		L0->SetPlayerName(f_4c8_a0_i());
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
		f_35a_a1_v(a0);
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
			f_ae_a1_v("Neutral");
			tv0->SetMessage(532716);
			tv0->ClearReplies();
			if (f_45d_a1_b(tv1) && f_439_a1_b(tv1)) {
				tv0->AddReply(532717, 34571, 34192);
			}
			if (f_42f_a1_b(tv1) && f_445_a1_b(tv1) && f_451_a1_b(tv1)) {
				tv0->AddReply(532721, 34197, 34196);
			}
			tv0->AddReply(532724, -1, 34199);
			break;
			return;
		}
		if (f_3d2_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_36b_a1_v(tv2);
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

	void f_ae_a1_v(string a0)
	{
		if (!f_3d2_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_372_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_383_a0_v();
			if (a1 == 34192) {
				f_40a_a2_v(tv1, tv0);
			}
			if (a1 == 34194) {
				f_429_a2_v(tv1, tv0);
				f_3ec_a2_v(tv1, tv0);
				f_419_a2_v(tv1, tv0);
			}
			if (a1 == 34195) {
				f_410_a2_v(tv1, tv0);
			}
			if (a1 == 34196) {
				f_423_a2_v(tv1, tv0);
			}
			if (a1 == 34198) {
				f_3ec_a2_v(tv1, tv0);
				f_429_a2_v(tv1, tv0);
				f_419_a2_v(tv1, tv0);
			}
			if (a1 == 34591) {
				f_3ec_a2_v(tv1, tv0);
				f_429_a2_v(tv1, tv0);
				f_419_a2_v(tv1, tv0);
			}
			if (a0 == 34191) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(532716);
				tv0->ClearReplies();
				if (f_45d_a1_b(tv1) && f_439_a1_b(tv1)) {
					tv0->AddReply(532717, 34571, 34192);
				}
				if (f_42f_a1_b(tv1) && f_445_a1_b(tv1) && f_451_a1_b(tv1)) {
					tv0->AddReply(532721, 34197, 34196);
				}
				tv0->AddReply(532724, -1, 34199);
				return;
			}
			if (a0 == 34197) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(532722);
				tv0->ClearReplies();
				tv0->AddReply(532723, -1, 34198);
				tv0->AddReply(533075, 34590, 34589);
				return;
			}
			if (a0 == 34590) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(533076);
				tv0->ClearReplies();
				tv0->AddReply(533077, -1, 34591);
				return;
			}
			if (a0 == 34571) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(533060);
				tv0->ClearReplies();
				tv0->AddReply(533061, 34573, 34572);
				tv0->AddReply(533071, 34573, 34583);
				return;
			}
			if (a0 == 34573) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(533062);
				tv0->ClearReplies();
				tv0->AddReply(533063, 34575, 34574);
				tv0->AddReply(533072, 34193, 34585);
				return;
			}
			if (a0 == 34575) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(533064);
				tv0->ClearReplies();
				tv0->AddReply(533065, 34193, 34576);
				return;
			}
			if (a0 == 34193) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(532718);
				tv0->ClearReplies();
				tv0->AddReply(533073, 34588, 34587);
				return;
			}
			if (a0 == 34588) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(533074);
				tv0->ClearReplies();
				if (f_42f_a1_b(tv1)) {
					tv0->AddReply(532719, -1, 34194);
				}
				tv0->AddReply(532720, -1, 34195);
				return;
			}
			tv3 = true;
			if (f_3d2_a0_b()) {
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
		f_20e_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_29e_a0_v();
		t0{a0};
	}

	void f_20e_a2_v(float a0, float a1)
	{
		for (; ; ) {
			float L0;
			while (!f_311_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_25d_a2_v(a0, a1);
			@sync();
		}
	}

	void f_227_a0_v(void)
	{
		bool L0;
		tv5 = true;
		@IsLoaded(L0);
		if (!L0 && f_25b_a0_b()) {
			@RemoveActor(f_38a_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_227_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		f_29e_a0_v();
		if (tv5 && f_25b_a0_b()) {
			@RemoveActor(f_38a_a0_o());
		}
	}

	bool f_25b_a0_b(void)
	{
		return true;
	}

	void f_25d_a2_v(float a0, float a1)
	{
		if (!f_311_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_2ac_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_278_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_302_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_278_a0_b()) {
				if (!tv2) {
					f_378_a1_v(tv4);
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

	void f_29e_a0_v(void)
	{
		f_2fd_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_2ac_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_311_a0_b()) {
		return;
	}
	L0 = f_3db_a0_i();
	for (L1 = 0; L1 < 5 && f_311_a0_b(); L1 = L1 + 1) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_3d4_a1_s(L3));
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
		if (!f_2fb_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2fb_a0_b(void)
{
	return true;
}

void f_2fd_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_302_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_30a_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_311_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_316_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_390_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_3d2_a0_b()) {
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

void f_35a_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_3d2_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_36b_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_372_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_378_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_383_a0_v(void)
{
	if (f_3d2_a0_b()) {
		@lshStopSpeech();
	}
}

object f_38a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_390_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_39a_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_39f_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_3ab_a2_v(object a0, int a1)
{
	f_30a_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_39f_a2_v(L0, a1);
	}
}

bool f_3be_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_3ca_a0_i(void)
{
	return 515594;
}

int f_3cc_a0_i(void)
{
	return 512583;
}

string f_3ce_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_3d0_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_3d2_a0_b(void)
{
	return false;
}

string f_3d4_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_3db_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_3d4_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_3ec_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_4b7_a0_o();
	L0->FindMark(L1, "d1q02AnnaGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q02JuliaGotoAnna");
	if (L1) {
		L1->Remove();
	}
	f_474_a0_v();
	f_3be_a2_b("quest_d1_02", "completed");
}

void f_40a_a2_v(object a0, object a1)
{
	@SetVariable("ood1GorbunLaska1", 1);
}

void f_410_a2_v(object a0, object a1)
{
	@SetVariable("d1q02", 4);
	f_481_a0_v();
}

void f_419_a2_v(object a0, object a1)
{
	@Trace("money 2000 removed");
	f_3ab_a2_v(a0, -2000);
}

void f_423_a2_v(object a0, object a1)
{
	@SetVariable("ood1GorbunLaska2", 1);
}

void f_429_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

bool f_42f_a1_b(object a0)
{
	if (f_469_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_439_a1_b(object a0)
{
	if (f_39a_a1_i("ood1GorbunLaska1") == 0) {
		return true;
	}
	return false;
}

bool f_445_a1_b(object a0)
{
	if (f_39a_a1_i("ood1GorbunLaska2") == 0) {
		return true;
	}
	return false;
}

bool f_451_a1_b(object a0)
{
	if (f_39a_a1_i("d1q02") == 4) {
		return true;
	}
	return false;
}

bool f_45d_a1_b(object a0)
{
	if (f_39a_a1_i("d1q02") == 2) {
		return true;
	}
	return false;
}

bool f_469_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 2000) {
		return true;
	}
	return false;
}

void f_474_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 36, 2, 512118);
	f_49b_a2_b(L0, 7);
}

void f_481_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 625, 2, 532728);
	f_49b_a2_b(L0, 7);
}

object f_48e_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_49b_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_48e_a0_o();
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

object f_4b7_a0_o(void)
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

int f_4c8_a0_i(void)
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

