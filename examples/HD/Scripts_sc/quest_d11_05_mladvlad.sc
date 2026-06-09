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
		if (!f_321_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_53b_a0_i());
		L0->SetNPCDescription(f_539_a0_i());
		L0->SetPhoto(f_53d_a0_s());
		L0->SetPhoto2(f_53f_a0_s());
		L0->SetPlayerName(f_528_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_378_a1_b(f_437_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_366_a1_v(a0);
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
			f_a0_a1_v("Neutral");
			tv0->SetMessage(520941);
			tv0->ClearReplies();
			if (f_4bf_a1_b(tv1)) {
				tv0->AddReply(534490, 38444, 36135);
			}
			if (!f_4cb_a1_b(tv1)) {
				tv0->AddReply(520942, 22160, 22159);
			}
			tv0->AddReply(520946, -1, 22163);
			tv0->AddReply(536616, -1, 38443);
			break;
			return;
		}
		if (f_541_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_402_a1_v(tv2);
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

	void f_a0_a1_v(string a0)
	{
		if (!f_541_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_412_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_430_a0_v();
			if (a1 == 36141) {
				f_4aa_a2_v(tv1, tv0);
			}
			if (a1 == 38456) {
				f_4aa_a2_v(tv1, tv0);
			}
			if (a1 == 22161) {
				f_4b9_a2_v(tv1, tv0);
				f_498_a2_v(tv1, tv0);
				f_4a3_a2_v(tv1, tv0);
			}
			if (a0 == 22158) {
				f_a0_a1_v("Neutral");
				tv0->SetMessage(520941);
				tv0->ClearReplies();
				if (f_4bf_a1_b(tv1)) {
					tv0->AddReply(534490, 38444, 36135);
				}
				if (!f_4cb_a1_b(tv1)) {
					tv0->AddReply(520942, 22160, 22159);
				}
				tv0->AddReply(520946, -1, 22163);
				tv0->AddReply(536616, -1, 38443);
				return;
			}
			if (a0 == 22160) {
				f_a0_a1_v("Neutral");
				tv0->SetMessage(520943);
				tv0->ClearReplies();
				if (f_4d5_a1_b(tv1)) {
					tv0->AddReply(520944, -1, 22161);
				}
				tv0->AddReply(520945, -1, 22162);
				return;
			}
			if (a0 == 38444) {
				f_a0_a1_v("Neutral");
				tv0->SetMessage(536617);
				tv0->ClearReplies();
				tv0->AddReply(536618, 38446, 38445);
				return;
			}
			if (a0 == 38446) {
				f_a0_a1_v("Fear");
				tv0->SetMessage(536619);
				tv0->ClearReplies();
				tv0->AddReply(536620, 36136, 38447);
				return;
			}
			if (a0 == 36136) {
				f_a0_a1_v("Fear");
				tv0->SetMessage(534491);
				tv0->ClearReplies();
				tv0->AddReply(534492, 36138, 36137);
				tv0->AddReply(536621, 38449, 38448);
				return;
			}
			if (a0 == 38449) {
				f_a0_a1_v("Fear");
				tv0->SetMessage(536622);
				tv0->ClearReplies();
				tv0->AddReply(536625, 36140, 38452);
				return;
			}
			if (a0 == 36138) {
				f_a0_a1_v("Neutral");
				tv0->SetMessage(534493);
				tv0->ClearReplies();
				tv0->AddReply(534494, 36140, 36139);
				tv0->AddReply(536623, 38451, 38450);
				return;
			}
			if (a0 == 38451) {
				f_a0_a1_v("Sly");
				tv0->SetMessage(536624);
				tv0->ClearReplies();
				tv0->AddReply(536626, 38455, 38454);
				return;
			}
			if (a0 == 38455) {
				f_a0_a1_v("Untrust");
				tv0->SetMessage(536627);
				tv0->ClearReplies();
				tv0->AddReply(536628, -1, 38456);
				return;
			}
			if (a0 == 36140) {
				f_a0_a1_v("Untrust");
				tv0->SetMessage(534495);
				tv0->ClearReplies();
				tv0->AddReply(534496, -1, 36141);
				return;
			}
			tv3 = true;
			if (f_541_a0_b()) {
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

	void f_1cd_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_1fe_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_437_a0_o());
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
			@RemoveActor(f_437_a0_o());
			@Hold();
		}
		f_269_a0_v();
	}

	void OnLoad(void)
	{
		f_278_a0_v();
	}

	void f_1fe_a0_v(void)
	{
		if (!f_31c_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_2ae_a0_v();
		}
	}

	bool f_20c_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_313_a1_b(L0);
	}

	void f_21b_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_220_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_2fa_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_236_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_23f_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_23f_a0_v();
			if (f_31c_a0_b() && f_220_a0_b()) {
				if (f_20c_a0_b()) {
					f_3b2_a1_b(f_437_a0_o());
				}
			} else {
				f_21b_a0_v();
				f_236_a0_v();
			}
		}
	}

	void f_269_a0_v(void)
	{
		f_2f5_a0_v();
		f_23f_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_278_a0_v(void)
	{
		@StopGroup0();
		f_23f_a0_v();
		f_402_a1_v("Neutral");
		f_236_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_236_a0_v();
		} else {
			f_402_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_2f5_a0_v();
			f_313_a1_b(a0);
			enable OnUse;
			f_1cd_a1_v(a0);
			f_402_a1_v("Neutral");
			f_23f_a0_v();
			f_236_a0_v();
		}
	}
}

void f_2ae_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_31c_a0_b()) {
		return;
	}
	L0 = f_487_a0_i();
	for (L1 = 0; L1 < 5 && f_31c_a0_b(); L1++) {
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
			@PlayAnimation("all", f_480_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_2f3_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_2f3_a0_b(void)
{
	return true;
}

void f_2f5_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_2fa_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_302_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_309_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_313_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_309_a1_b(L0);
}

bool f_31c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_321_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_43d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_541_a0_b()) {
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

void f_366_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_541_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_378_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3b2_a1_b(a0)) {
			if (!f_3d7_a1_b(a0)) {
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
		if (!f_3d7_a1_b(a0)) {
			if (!f_3b2_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3b2_a1_b(object a0)
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
	return f_421_a1_b(L4);
}

bool f_3d7_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_477_a0_i() + "m";
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
	return f_421_a1_b(L4);
}

void f_402_a1_v(string a0)
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

void f_412_a2_v(string a0, bool a1)
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

bool f_421_a1_b(string a0)
{
	if (f_541_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_430_a0_v(void)
{
	if (f_541_a0_b()) {
		@lshStopSpeech();
	}
}

object f_437_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_43d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_447_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_44c_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_458_a2_v(object a0, int a1)
{
	f_302_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_44c_a2_v(L0, a1);
	}
}

bool f_46b_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_477_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_480_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_487_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_480_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_498_a2_v(object a0, object a1)
{
	int L0;
	L0 = f_477_a0_i();
	@SetVariable("RMap" + L0, 1);
}

void f_4a3_a2_v(object a0, object a1)
{
	f_458_a2_v(a0, -1000);
}

void f_4aa_a2_v(object a0, object a1)
{
	f_4f2_a0_v();
	f_46b_a2_b("quest_d11_05", "place_enemy_after");
	f_46b_a2_b("quest_d11_05", "completed");
}

void f_4b9_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

bool f_4bf_a1_b(object a0)
{
	if (f_447_a1_i("d11q05") == 2) {
		return true;
	}
	return false;
}

bool f_4cb_a1_b(object a0)
{
	if (f_4df_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_4d5_a1_b(object a0)
{
	if (f_4eb_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_4df_a1_b(object a0)
{
	int L0;
	int L1;
	L0 = f_477_a0_i();
	@GetVariable("RMap" + L0, L1);
	return L1 != 0;
}

bool f_4eb_a1_b(object a0)
{
	int L0;
	a0->GetProperty("money", L0);
	return L0 >= 1000;
}

void f_4f2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 685, 2, 534500);
	f_50c_a2_b(L0, 682);
}

object f_4ff_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_50c_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_4ff_a0_o();
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

int f_528_a0_i(void)
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

int f_539_a0_i(void)
{
	return 515547;
}

int f_53b_a0_i(void)
{
	return 502872;
}

string f_53d_a0_s(void)
{
	return "ui/NPC_MladVlad.png";
}

string f_53f_a0_s(void)
{
	return "ui/NPC_MladVlad_b.png";
}

bool f_541_a0_b(void)
{
	return true;
}

