event OnLoad 5;
event evt_11 11;
event OnDispose 32;
event OnTrigger 26;
event OnUnload 6;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_409_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_463_a1_b(f_510_a0_o());
		if (!f_40e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_669_a0_i());
		L0->SetNPCDescription(f_667_a0_i());
		L0->SetPhoto(f_66b_a0_s());
		L0->SetPhoto2(f_66d_a0_s());
		L0->SetPlayerName(f_656_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_452_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t2
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
			f_5b2_a2_v(tv1, tv0);
			f_d3_a1_v("Neutral");
			tv0->SetMessage(520559);
			tv0->ClearReplies();
			if (f_5be_a1_b(tv1) && f_5ca_a1_b(tv1)) {
				tv0->AddReply(520560, 21763, 21762);
			}
			if (!f_5be_a1_b(tv1) && f_5d6_a1_b(tv1)) {
				tv0->AddReply(520583, 21789, 21788);
			}
			if (!f_5be_a1_b(tv1) && f_5e2_a1_b(tv1)) {
				tv0->AddReply(520588, 21794, 21793);
			}
			tv0->AddReply(520593, -1, 21798);
			break;
			return;
		}
		if (f_66f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_4ed_a1_v(tv2);
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

	void f_d3_a1_v(string a0)
	{
		if (!f_66f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_4f4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_509_a0_v();
			if (a1 == 21762) {
				f_568_a2_v(tv1, tv0);
			}
			if (a1 == 21883) {
				f_56e_a2_v(tv1, tv0);
				f_59b_a2_v(tv1, tv0);
				f_5a2_a2_v(tv1, tv0);
			}
			if (a1 == 21780) {
				f_56e_a2_v(tv1, tv0);
				f_59b_a2_v(tv1, tv0);
				f_5b8_a2_v(tv1, tv0);
				f_5a2_a2_v(tv1, tv0);
			}
			if (a1 == 21788) {
				f_58f_a2_v(tv1, tv0);
			}
			if (a1 == 21793) {
				f_595_a2_v(tv1, tv0);
			}
			if (a0 == 21761) {
				f_5b2_a2_v(tv1, tv0);
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520559);
				tv0->ClearReplies();
				if (f_5be_a1_b(tv1) && f_5ca_a1_b(tv1)) {
					tv0->AddReply(520560, 21763, 21762);
				}
				if (!f_5be_a1_b(tv1) && f_5d6_a1_b(tv1)) {
					tv0->AddReply(520583, 21789, 21788);
				}
				if (!f_5be_a1_b(tv1) && f_5e2_a1_b(tv1)) {
					tv0->AddReply(520588, 21794, 21793);
				}
				tv0->AddReply(520593, -1, 21798);
				return;
			}
			if (a0 == 21794) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520589);
				tv0->ClearReplies();
				tv0->AddReply(520590, 21796, 21795);
				return;
			}
			if (a0 == 21796) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520591);
				tv0->ClearReplies();
				tv0->AddReply(520592, -1, 21797);
				return;
			}
			if (a0 == 21789) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520584);
				tv0->ClearReplies();
				tv0->AddReply(520585, 21791, 21790);
				return;
			}
			if (a0 == 21791) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520586);
				tv0->ClearReplies();
				tv0->AddReply(520587, -1, 21792);
				tv0->AddReply(528358, 29730, 29729);
				return;
			}
			if (a0 == 29730) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(528359);
				tv0->ClearReplies();
				tv0->AddReply(528360, -1, 29731);
				return;
			}
			if (a0 == 21763) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520561);
				tv0->ClearReplies();
				tv0->AddReply(520562, 21765, 21764);
				tv0->AddReply(520582, 21769, 21787);
				return;
			}
			if (a0 == 21765) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520563);
				tv0->ClearReplies();
				tv0->AddReply(520564, 21767, 21766);
				return;
			}
			if (a0 == 21767) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520565);
				tv0->ClearReplies();
				tv0->AddReply(520566, 21769, 21768);
				tv0->AddReply(528361, 21769, 29732);
				return;
			}
			if (a0 == 21769) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520567);
				tv0->ClearReplies();
				tv0->AddReply(520568, 21771, 21770);
				tv0->AddReply(520581, 21771, 21785);
				return;
			}
			if (a0 == 21771) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520569);
				tv0->ClearReplies();
				tv0->AddReply(520570, 21773, 21772);
				tv0->AddReply(520580, 21773, 21783);
				return;
			}
			if (a0 == 21773) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520571);
				tv0->ClearReplies();
				tv0->AddReply(520572, 21775, 21774);
				tv0->AddReply(520579, 21775, 21781);
				return;
			}
			if (a0 == 21775) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520573);
				tv0->ClearReplies();
				tv0->AddReply(520574, 21777, 21776);
				return;
			}
			if (a0 == 21777) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520575);
				tv0->ClearReplies();
				tv0->AddReply(520576, 21779, 21778);
				tv0->AddReply(520578, -1, 21780);
				return;
			}
			if (a0 == 21779) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(520577);
				tv0->ClearReplies();
				tv0->AddReply(520675, -1, 21883);
				return;
			}
			tv3 = true;
			if (f_66f_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t3
{
	var Vector tv0;
	var bool tv1;

	void init(void)
	{
		@SetVariable("b6q01KlaraLaska", 1);
		f_2c3_a0_v();
	}

	void f_2b6_a1_v(object a0)
	{
		t1{a0};
	}

	void OnDispose(void)
	{
		@SetVariable("b6q01KlaraLaska", 0);
	}

	void f_2c3_a0_v(void)
	{
		f_2ec_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_510_a0_o());
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
			@RemoveActor(f_510_a0_o());
			@Hold();
		}
		f_35d_a0_v();
	}

	void OnLoad(void)
	{
		f_36c_a0_v();
	}

	void f_2ec_a0_v(void)
	{
		if (!f_409_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_3a2_a0_v();
		}
	}

	bool f_300_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_400_a1_b(L0);
	}

	void f_30f_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_314_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_3ee_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_32a_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_333_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_333_a0_v();
			if (f_409_a0_b() && f_314_a0_b()) {
				if (f_300_a0_b()) {
					f_49d_a1_b(f_510_a0_o());
				}
			} else {
				f_30f_a0_v();
				f_32a_a0_v();
			}
		}
	}

	void f_35d_a0_v(void)
	{
		f_3e9_a0_v();
		f_333_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_36c_a0_v(void)
	{
		@StopGroup0();
		f_333_a0_v();
		f_4ed_a1_v("Neutral");
		f_32a_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_32a_a0_v();
		} else {
			f_4ed_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_3e9_a0_v();
			f_400_a1_b(a0);
			enable OnUse;
			f_2b6_a1_v(a0);
			f_4ed_a1_v("Neutral");
			f_333_a0_v();
			f_32a_a0_v();
		}
	}
}

void f_3a2_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_409_a0_b()) {
		return;
	}
	L0 = f_557_a0_i();
	for (L1 = 0; L1 < 5 && f_409_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_550_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_3e7_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_3e7_a0_b(void)
{
	return true;
}

void f_3e9_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_3ee_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_3f6_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_400_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_3f6_a1_b(L0);
}

bool f_409_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_40e_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_516_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_66f_a0_b()) {
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

void f_452_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_66f_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_463_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_49d_a1_b(a0)) {
			if (!f_4c2_a1_b(a0)) {
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
		if (!f_4c2_a1_b(a0)) {
			if (!f_49d_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_49d_a1_b(object a0)
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
	return f_4fa_a1_b(L4);
}

bool f_4c2_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_547_a0_i() + "m";
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
	return f_4fa_a1_b(L4);
}

void f_4ed_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_4f4_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_4fa_a1_b(string a0)
{
	if (f_66f_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_509_a0_v(void)
{
	if (f_66f_a0_b()) {
		@lshStopSpeech();
	}
}

object f_510_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_516_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_520_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_525_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_536_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_542_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_547_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_550_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_557_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_550_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_568_a2_v(object a0, object a1)
{
	@SetVariable("oob6Klara1", 1);
}

void f_56e_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b6q01", 2);
	L0 = f_624_a0_o();
	L0->AddMark("b6q01KlaraGotoTermitnik2", "pt_map_termitnik2", 1, 525668, f_542_a0_f());
	f_5ee_a0_v();
	f_536_a2_b("quest_b6_01", "remove_klara");
	f_536_a2_b("quest_b6_01", "init_termitnik");
}

void f_58f_a2_v(object a0, object a1)
{
	@SetVariable("oob6Klara2", 1);
}

void f_595_a2_v(object a0, object a1)
{
	@SetVariable("oob6Klara3", 1);
}

void f_59b_a2_v(object a0, object a1)
{
	f_525_a2_v("termitnik2@door1", false);
}

void f_5a2_a2_v(object a0, object a1)
{
	f_635_a3_v(f_624_a0_o(), "pt_map_termitnik2", 2);
	a1->ShowMap(f_624_a0_o());
}

void f_5b2_a2_v(object a0, object a1)
{
	@SetVariable("b6q01KlaraVisit", 1);
}

void f_5b8_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

bool f_5be_a1_b(object a0)
{
	if (f_520_a1_i("oob6Klara1") == 0) {
		return true;
	}
	return false;
}

bool f_5ca_a1_b(object a0)
{
	if (f_520_a1_i("b6q01") == 1) {
		return true;
	}
	return false;
}

bool f_5d6_a1_b(object a0)
{
	if (f_520_a1_i("oob6Klara2") == 0) {
		return true;
	}
	return false;
}

bool f_5e2_a1_b(object a0)
{
	if (f_520_a1_i("oob6Klara3") == 0) {
		return true;
	}
	return false;
}

void f_5ee_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 362, 1, 525662);
	f_608_a2_b(L0, 265);
}

object f_5fb_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_608_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_5fb_a0_o();
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

object f_624_a0_o(void)
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

void f_635_a3_v(object a0, string a1, float a2)
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

int f_656_a0_i(void)
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

int f_667_a0_i(void)
{
	return 515540;
}

int f_669_a0_i(void)
{
	return 502865;
}

string f_66b_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

string f_66d_a0_s(void)
{
	return "ui/NPC_Klara_b.png";
}

bool f_66f_a0_b(void)
{
	return true;
}

