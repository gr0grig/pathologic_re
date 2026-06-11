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
		if (!f_324_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4be_a0_i());
		L0->SetPhoto(f_4c0_a0_s());
		L0->SetPlayerName(f_48d_a0_i());
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
		f_35c_a1_v(a0);
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
			if (f_40a_a1_b(tv1) && f_416_a1_b(tv1)) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11917);
				tv0->ClearReplies();
				tv0->AddReply(11918, 13135, 13134);
				break;
			}
			f_cb_a1_v("Neutral");
			tv0->SetMessage(11935);
			tv0->ClearReplies();
			if (f_40a_a1_b(tv1)) {
				tv0->AddReply(12489, 13660, 13658);
			}
			if (f_422_a1_b(tv1) && !f_42e_a1_b(tv1) && f_446_a1_b(tv1)) {
				tv0->AddReply(11936, 13155, 13153);
			}
			if (f_42e_a1_b(tv1) && f_43a_a1_b(tv1)) {
				tv0->AddReply(11937, 13156, 13154);
			}
			tv0->AddReply(12490, -1, 13659);
			break;
			return;
		}
		if (f_4c2_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_360_a1_v(tv2);
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

	void f_cb_a1_v(string a0)
	{
		if (!f_4c2_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_360_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_372_a0_v();
			if (a1 == 13144) {
				f_3a4_a2_v(tv1, tv0);
				f_3bb_a2_v(tv1, tv0);
				f_393_a2_v(tv1, tv0);
				f_39e_a2_v(tv1, tv0);
			}
			if (a1 == 13151) {
				f_3bb_a2_v(tv1, tv0);
			}
			if (a1 == 13661) {
				f_3a4_a2_v(tv1, tv0);
				f_393_a2_v(tv1, tv0);
				f_39e_a2_v(tv1, tv0);
			}
			if (a1 == 13170) {
				f_3f9_a2_v(tv1, tv0);
				f_3ff_a2_v(tv1, tv0);
				f_39e_a2_v(tv1, tv0);
			}
			if (a1 == 13172) {
				f_3c1_a2_v(tv1, tv0);
				f_3f3_a2_v(tv1, tv0);
			}
			if (a0 == 13133) {
				if (f_40a_a1_b(tv1) && f_416_a1_b(tv1)) {
					f_cb_a1_v("Neutral");
					tv0->SetMessage(11917);
					tv0->ClearReplies();
					tv0->AddReply(11918, 13135, 13134);
					return;
				}
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11935);
				tv0->ClearReplies();
				if (f_40a_a1_b(tv1)) {
					tv0->AddReply(12489, 13660, 13658);
				}
				if (f_422_a1_b(tv1) && !f_42e_a1_b(tv1) && f_446_a1_b(tv1)) {
					tv0->AddReply(11936, 13155, 13153);
				}
				if (f_42e_a1_b(tv1) && f_43a_a1_b(tv1)) {
					tv0->AddReply(11937, 13156, 13154);
				}
				tv0->AddReply(12490, -1, 13659);
				return;
			}
			if (a0 == 13156) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11939);
				tv0->ClearReplies();
				tv0->AddReply(11947, 13165, 13164);
				return;
			}
			if (a0 == 13165) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11948);
				tv0->ClearReplies();
				tv0->AddReply(11949, 13167, 13166);
				return;
			}
			if (a0 == 13167) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11950);
				tv0->ClearReplies();
				tv0->AddReply(11951, 13171, 13168);
				return;
			}
			if (a0 == 13171) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11954);
				tv0->ClearReplies();
				tv0->AddReply(11955, -1, 13172);
				return;
			}
			if (a0 == 13155) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11938);
				tv0->ClearReplies();
				tv0->AddReply(11940, 13158, 13157);
				return;
			}
			if (a0 == 13158) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11941);
				tv0->ClearReplies();
				tv0->AddReply(11942, 13160, 13159);
				return;
			}
			if (a0 == 13160) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11943);
				tv0->ClearReplies();
				tv0->AddReply(11944, 13162, 13161);
				return;
			}
			if (a0 == 13162) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11945);
				tv0->ClearReplies();
				tv0->AddReply(11946, 13169, 13163);
				return;
			}
			if (a0 == 13169) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11952);
				tv0->ClearReplies();
				tv0->AddReply(11953, -1, 13170);
				return;
			}
			if (a0 == 13660) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(12491);
				tv0->ClearReplies();
				tv0->AddReply(12492, -1, 13661);
				return;
			}
			if (a0 == 13135) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11919);
				tv0->ClearReplies();
				tv0->AddReply(11920, 13137, 13136);
				return;
			}
			if (a0 == 13137) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11921);
				tv0->ClearReplies();
				tv0->AddReply(11924, 13141, 13140);
				tv0->AddReply(11922, 13139, 13138);
				return;
			}
			if (a0 == 13139) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11923);
				tv0->ClearReplies();
				tv0->AddReply(11929, 13141, 13145);
				return;
			}
			if (a0 == 13141) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11925);
				tv0->ClearReplies();
				tv0->AddReply(11926, 13143, 13142);
				tv0->AddReply(11930, 13148, 13147);
				return;
			}
			if (a0 == 13148) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11931);
				tv0->ClearReplies();
				tv0->AddReply(11932, 13150, 13149);
				return;
			}
			if (a0 == 13150) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11933);
				tv0->ClearReplies();
				tv0->AddReply(11934, -1, 13151);
				return;
			}
			if (a0 == 13143) {
				f_cb_a1_v("Neutral");
				tv0->SetMessage(11927);
				tv0->ClearReplies();
				tv0->AddReply(11928, -1, 13144);
				return;
			}
			tv3 = true;
			if (f_4c2_a0_b()) {
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
		t0{a0};
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
			if (!L0 && f_31b_a0_b()) {
				@RemoveActor(f_379_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_31b_a0_b()) {
			@RemoveActor(f_379_a0_o());
		}
	}
}

bool f_31b_a0_b(void)
{
	return true;
}

void f_31d_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_324_a1_b(object a0)
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
	L5 = L3 * 70 + f_37f_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_35c_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_360_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_372_a0_v(void)
{
	if (f_4c2_a0_b()) {
		@lshStopSpeech();
	}
}

object f_379_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_37f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_389_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

float f_38e_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_393_a2_v(object a0, object a1)
{
	@Trace("money10000 is given");
	f_31d_a3_v(a0, "money", 10000);
}

void f_39e_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_3a4_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q02", 2);
	L0 = f_47c_a0_o();
	L0->AddMark("d5q02GorbunFindTheDaughter", "pt_map_gorbun", 0, 15362, f_38e_a0_f());
	f_49e_a0_v();
}

void f_3bb_a2_v(object a0, object a1)
{
	@SetVariable("ood5Gorbun1", 1);
}

void f_3c1_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	@SetVariable("d5q02", 1000);
	L0 = f_47c_a0_o();
	L0->FindMark(L1, "d5q02AnnaGotoGorbun");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02AnnaGotoGorbunSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02AnnaGotoKabak");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02GorbunFindTheDaughter");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02NudeMeeting");
	if (L1) {
		L1->Remove();
	}
	f_4ae_a0_v();
}

void f_3f3_a2_v(object a0, object a1)
{
	@SetVariable("ood5Gorbun2", 1);
}

void f_3f9_a2_v(object a0, object a1)
{
	@SetVariable("ood5Gorbun3", 1);
}

void f_3ff_a2_v(object a0, object a1)
{
	@Trace("money 50000 is given");
	f_31d_a3_v(a0, "money", 50000);
}

bool f_40a_a1_b(object a0)
{
	if (f_389_a1_i("d5q02") == 1) {
		return true;
	}
	return false;
}

bool f_416_a1_b(object a0)
{
	if (f_389_a1_i("ood5Gorbun1") == 0) {
		return true;
	}
	return false;
}

bool f_422_a1_b(object a0)
{
	if (f_389_a1_i("d5q02") == 4) {
		return true;
	}
	return false;
}

bool f_42e_a1_b(object a0)
{
	if (f_389_a1_i("d5q02KnowNudeIsDead") == 1) {
		return true;
	}
	return false;
}

bool f_43a_a1_b(object a0)
{
	if (f_389_a1_i("ood5Gorbun2") == 0) {
		return true;
	}
	return false;
}

bool f_446_a1_b(object a0)
{
	if (f_389_a1_i("ood5Gorbun3") == 0) {
		return true;
	}
	return false;
}

object f_452_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_45f_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_452_a0_o();
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

object f_47c_a0_o(void)
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

int f_48d_a0_i(void)
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

void f_49e_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 150, 2, 15356);
	f_45f_a2_b(L0, 148);
}

void f_4ae_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 153, 2, 15359);
	f_45f_a2_b(L0, 148);
}

int f_4be_a0_i(void)
{
	return 12583;
}

string f_4c0_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_4c2_a0_b(void)
{
	return false;
}

