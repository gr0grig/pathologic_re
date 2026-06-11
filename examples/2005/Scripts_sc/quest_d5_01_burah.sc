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
		f_2a4_a1_b(f_351_a0_o());
		if (!f_24f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_408_a0_i());
		L0->SetNPCDescription(f_406_a0_i());
		L0->SetPhoto(f_40a_a0_s());
		L0->SetPhoto2(f_40c_a0_s());
		L0->SetPlayerName(f_3f5_a0_i());
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
		f_293_a1_v(a0);
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
			if (f_3a2_a1_b(tv1)) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(510543);
				tv0->ClearReplies();
				tv0->AddReply(510544, 11634, 11633);
				tv0->AddReply(510560, 16756, 11649);
				tv0->AddReply(510566, 11634, 11655);
				break;
			}
			return;
		}
		if (f_40e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_32e_a1_v(tv2);
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

	void f_95_a1_v(string a0)
	{
		if (!f_40e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_335_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_34a_a0_v();
			if (a1 == 13708) {
				f_39c_a2_v(tv1, tv0);
				f_380_a2_v(tv1, tv0);
			}
			if (a0 == 11632) {
				if (f_3a2_a1_b(tv1)) {
					f_95_a1_v("Neutral");
					tv0->SetMessage(510543);
					tv0->ClearReplies();
					tv0->AddReply(510544, 11634, 11633);
					tv0->AddReply(510560, 16756, 11649);
					tv0->AddReply(510566, 11634, 11655);
					return;
				}
			}
			if (a0 == 16756) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(515702);
				tv0->ClearReplies();
				tv0->AddReply(515703, 11650, 16757);
				return;
			}
			if (a0 == 11650) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(510561);
				tv0->ClearReplies();
				tv0->AddReply(510562, 11652, 11651);
				return;
			}
			if (a0 == 11652) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(510563);
				tv0->ClearReplies();
				tv0->AddReply(510564, 16749, 11653);
				tv0->AddReply(510565, -1, 11654);
				return;
			}
			if (a0 == 11634) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(510545);
				tv0->ClearReplies();
				tv0->AddReply(510546, 11636, 11635);
				tv0->AddReply(510553, 11643, 11642);
				tv0->AddReply(510557, 11647, 11646);
				return;
			}
			if (a0 == 11647) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(510558);
				tv0->ClearReplies();
				tv0->AddReply(510559, 16743, 11648);
				return;
			}
			if (a0 == 11643) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(510554);
				tv0->ClearReplies();
				tv0->AddReply(510555, 16743, 11644);
				tv0->AddReply(510556, -1, 11645);
				return;
			}
			if (a0 == 11636) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(510547);
				tv0->ClearReplies();
				tv0->AddReply(510548, 16743, 11637);
				tv0->AddReply(510549, 11639, 11638);
				return;
			}
			if (a0 == 11639) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(510550);
				tv0->ClearReplies();
				tv0->AddReply(510551, 16743, 11640);
				tv0->AddReply(510552, 16743, 11641);
				return;
			}
			if (a0 == 16743) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(515695);
				tv0->ClearReplies();
				tv0->AddReply(515696, 16749, 16748);
				tv0->AddReply(515701, 16752, 16754);
				return;
			}
			if (a0 == 16749) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(515697);
				tv0->ClearReplies();
				tv0->AddReply(515698, 16752, 16750);
				tv0->AddReply(515699, 16752, 16751);
				return;
			}
			if (a0 == 16752) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(515700);
				tv0->ClearReplies();
				tv0->AddReply(515704, 16760, 16759);
				return;
			}
			if (a0 == 16760) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(515705);
				tv0->ClearReplies();
				tv0->AddReply(515706, 16762, 16761);
				tv0->AddReply(515708, 16764, 16763);
				return;
			}
			if (a0 == 16764) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(515709);
				tv0->ClearReplies();
				tv0->AddReply(515710, 16762, 16765);
				return;
			}
			if (a0 == 16762) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(515707);
				tv0->ClearReplies();
				tv0->AddReply(512539, -1, 13708);
				return;
			}
			tv3 = true;
			if (f_40e_a0_b()) {
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
			if (!L0 && f_24d_a0_b()) {
				@RemoveActor(f_351_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_24d_a0_b()) {
			@RemoveActor(f_351_a0_o());
		}
	}
}

bool f_24d_a0_b(void)
{
	return true;
}

bool f_24f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_357_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_40e_a0_b()) {
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

void f_293_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_40e_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2a4_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_2de_a1_b(a0)) {
			if (!f_303_a1_b(a0)) {
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
		if (!f_303_a1_b(a0)) {
			if (!f_2de_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_2de_a1_b(object a0)
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
	return f_33b_a1_b(L4);
}

bool f_303_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_377_a0_i() + "m";
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
	return f_33b_a1_b(L4);
}

void f_32e_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_335_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_33b_a1_b(string a0)
{
	if (f_40e_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_34a_a0_v(void)
{
	if (f_40e_a0_b()) {
		@lshStopSpeech();
	}
}

object f_351_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_357_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_361_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_366_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_372_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_377_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_380_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q01", 7);
	L0 = f_3e4_a0_o();
	L0->AddMark("d5q01BurahMeeting", "pt_d5q01_girl_corpse1", 1, 515351, f_372_a0_f());
	f_3ae_a0_v();
	f_366_a2_b("quest_d5_01", "burah_free");
}

void f_39c_a2_v(object a0, object a1)
{
	@SetVariable("ood5Burah1", 1);
}

bool f_3a2_a1_b(object a0)
{
	if (f_361_a1_i("ood5Burah1") == 0) {
		return true;
	}
	return false;
}

void f_3ae_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 146, 1, 515346);
	f_3c8_a2_b(L0, 139);
}

object f_3bb_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_3c8_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_3bb_a0_o();
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

object f_3e4_a0_o(void)
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

int f_3f5_a0_i(void)
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

int f_406_a0_i(void)
{
	return 515592;
}

int f_408_a0_i(void)
{
	return 511961;
}

string f_40a_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_40c_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_40e_a0_b(void)
{
	return true;
}

