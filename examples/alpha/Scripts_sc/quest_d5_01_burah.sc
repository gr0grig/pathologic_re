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
		if (!f_230_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_34b_a0_i());
		L0->SetPhoto(f_34d_a0_s());
		L0->SetPlayerName(f_32a_a0_i());
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
		f_268_a1_v(a0);
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
			if (f_2d6_a1_b(tv1)) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(10543);
				tv0->ClearReplies();
				tv0->AddReply(10544, 11634, 11633);
				tv0->AddReply(10560, 11650, 11649);
				tv0->AddReply(10566, 11634, 11655);
				break;
			}
			if (f_2d6_a1_b(tv1)) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(11865);
				tv0->ClearReplies();
				tv0->AddReply(11866, 13080, 13079);
				break;
			}
			if (f_2e0_a1_b(tv1)) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(12536);
				tv0->ClearReplies();
				tv0->AddReply(12537, 13707, 13706);
				break;
			}
			return;
		}
		if (f_34f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_26c_a1_v(tv2);
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

	void f_ab_a1_v(string a0)
	{
		if (!f_34f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_26c_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_27e_a0_v();
			if (a1 == 13708) {
				f_2d0_a2_v(tv1, tv0);
				f_2ab_a2_v(tv1, tv0);
			}
			if (a0 == 11632) {
				if (f_2d6_a1_b(tv1)) {
					f_ab_a1_v("Neutral");
					tv0->SetMessage(10543);
					tv0->ClearReplies();
					tv0->AddReply(10544, 11634, 11633);
					tv0->AddReply(10560, 11650, 11649);
					tv0->AddReply(10566, 11634, 11655);
					return;
				}
				if (f_2d6_a1_b(tv1)) {
					f_ab_a1_v("Neutral");
					tv0->SetMessage(11865);
					tv0->ClearReplies();
					tv0->AddReply(11866, 13080, 13079);
					return;
				}
				if (f_2e0_a1_b(tv1)) {
					f_ab_a1_v("Neutral");
					tv0->SetMessage(12536);
					tv0->ClearReplies();
					tv0->AddReply(12537, 13707, 13706);
					return;
				}
			}
			if (a0 == 13707) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(12538);
				tv0->ClearReplies();
				tv0->AddReply(12539, -1, 13708);
				return;
			}
			if (a0 == 13080) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(11867);
				tv0->ClearReplies();
				tv0->AddReply(11868, 13082, 13081);
				return;
			}
			if (a0 == 13082) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(11869);
				tv0->ClearReplies();
				tv0->AddReply(11870, -1, 13083);
				return;
			}
			if (a0 == 11650) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(10561);
				tv0->ClearReplies();
				tv0->AddReply(10562, 11652, 11651);
				return;
			}
			if (a0 == 11652) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(10563);
				tv0->ClearReplies();
				tv0->AddReply(10564, -1, 11653);
				tv0->AddReply(10565, -1, 11654);
				return;
			}
			if (a0 == 11634) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(10545);
				tv0->ClearReplies();
				tv0->AddReply(10546, 11636, 11635);
				tv0->AddReply(10553, 11643, 11642);
				tv0->AddReply(10557, 11647, 11646);
				return;
			}
			if (a0 == 11647) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(10558);
				tv0->ClearReplies();
				tv0->AddReply(10559, -1, 11648);
				return;
			}
			if (a0 == 11643) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(10554);
				tv0->ClearReplies();
				tv0->AddReply(10555, -1, 11644);
				tv0->AddReply(10556, -1, 11645);
				return;
			}
			if (a0 == 11636) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(10547);
				tv0->ClearReplies();
				tv0->AddReply(10548, -1, 11637);
				tv0->AddReply(10549, 11639, 11638);
				return;
			}
			if (a0 == 11639) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(10550);
				tv0->ClearReplies();
				tv0->AddReply(10551, -1, 11640);
				tv0->AddReply(10552, -1, 11641);
				return;
			}
			tv3 = true;
			if (f_34f_a0_b()) {
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
			if (!L0 && f_22e_a0_b()) {
				@RemoveActor(f_285_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_22e_a0_b()) {
			@RemoveActor(f_285_a0_o());
		}
	}
}

bool f_22e_a0_b(void)
{
	return true;
}

bool f_230_a1_b(object a0)
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
	L5 = L3 * 70 + f_28b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_268_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_26c_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_27e_a0_v(void)
{
	if (f_34f_a0_b()) {
		@lshStopSpeech();
	}
}

object f_285_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_28b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_295_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_29a_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_2a6_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_2ab_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q01", 7);
	L0 = f_319_a0_o();
	L0->AddMark("d5q01BurahMeeting1", "pt_d5q01_girl_corpse1", 1, 15351, f_2a6_a0_f());
	L0->AddMark("d5q01BurahMeeting2", "pt_d5q01_girl_corpse2", 1, 15352, f_2a6_a0_f());
	f_33b_a0_v();
	f_29a_a2_b("quest_d5_01", "burah_free");
}

void f_2d0_a2_v(object a0, object a1)
{
	@SetVariable("ood5Burah1", 1);
}

bool f_2d6_a1_b(object a0)
{
	if (f_2ec_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2e0_a1_b(object a0)
{
	if (f_295_a1_i("ood5Burah1") == 0) {
		return true;
	}
	return false;
}

bool f_2ec_a1_b(object a0)
{
	return false;
}

object f_2ef_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2fc_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2ef_a0_o();
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

object f_319_a0_o(void)
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

int f_32a_a0_i(void)
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

void f_33b_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 146, 1, 15346);
	f_2fc_a2_b(L0, 139);
}

int f_34b_a0_i(void)
{
	return 11961;
}

string f_34d_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

bool f_34f_a0_b(void)
{
	return true;
}

