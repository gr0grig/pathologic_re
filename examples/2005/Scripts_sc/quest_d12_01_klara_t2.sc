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
		f_515_a1_b(f_5c2_a0_o());
		if (!f_4c0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_725_a0_i());
		L0->SetNPCDescription(f_723_a0_i());
		L0->SetPhoto(f_727_a0_s());
		L0->SetPhoto2(f_729_a0_s());
		L0->SetPlayerName(f_6b8_a0_i());
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
		f_504_a1_v(a0);
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
			if (!f_61d_a1_b(tv1) && f_63f_a1_b(tv1)) {
				f_5e9_a2_v(tv1, tv0);
				f_60b_a2_v(tv1, tv0);
				f_fc_a1_v("Neutral");
				tv0->SetMessage(535645);
				tv0->ClearReplies();
				tv0->AddReply(540387, 42374, 42373);
				tv0->AddReply(540424, 42403, 42411);
				break;
			}
			f_60b_a2_v(tv1, tv0);
			f_fc_a1_v("Neutral");
			tv0->SetMessage(535653);
			tv0->ClearReplies();
			if (f_629_a1_b(tv1) && !f_633_a1_b(tv1) && !f_61d_a1_b(tv1)) {
				tv0->AddReply(535654, 37341, 37340);
			}
			if (f_663_a1_b(tv1) && f_64b_a1_b(tv1)) {
				tv0->AddReply(540429, 42419, 42418);
			}
			if (f_611_a1_b(tv1) && f_657_a1_b(tv1)) {
				tv0->AddReply(540447, 42439, 42438);
			}
			tv0->AddReply(540478, -1, 42473);
			break;
			return;
		}
		if (f_72b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_59f_a1_v(tv2);
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

	void f_fc_a1_v(string a0)
	{
		if (!f_72b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5a6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_5bb_a0_v();
			if (a1 == 37334) {
				f_5ef_a2_v(tv1, tv0);
			}
			if (a1 == 37337) {
				f_5e0_a2_v(tv1, tv0);
			}
			if (a1 == 42406) {
				f_5ef_a2_v(tv1, tv0);
			}
			if (a1 == 42408) {
				f_5e0_a2_v(tv1, tv0);
			}
			if (a1 == 37342) {
				f_5e0_a2_v(tv1, tv0);
			}
			if (a1 == 42418) {
				f_5ff_a2_v(tv1, tv0);
			}
			if (a1 == 42438) {
				f_605_a2_v(tv1, tv0);
			}
			if (a0 == 37331) {
				if (!f_61d_a1_b(tv1) && f_63f_a1_b(tv1)) {
					f_5e9_a2_v(tv1, tv0);
					f_60b_a2_v(tv1, tv0);
					f_fc_a1_v("Neutral");
					tv0->SetMessage(535645);
					tv0->ClearReplies();
					tv0->AddReply(540387, 42374, 42373);
					tv0->AddReply(540424, 42403, 42411);
					return;
				}
				f_60b_a2_v(tv1, tv0);
				f_fc_a1_v("Neutral");
				tv0->SetMessage(535653);
				tv0->ClearReplies();
				if (f_629_a1_b(tv1) && !f_633_a1_b(tv1) && !f_61d_a1_b(tv1)) {
					tv0->AddReply(535654, 37341, 37340);
				}
				if (f_663_a1_b(tv1) && f_64b_a1_b(tv1)) {
					tv0->AddReply(540429, 42419, 42418);
				}
				if (f_611_a1_b(tv1) && f_657_a1_b(tv1)) {
					tv0->AddReply(540447, 42439, 42438);
				}
				tv0->AddReply(540478, -1, 42473);
				return;
			}
			if (a0 == 42439) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540448);
				tv0->ClearReplies();
				tv0->AddReply(540449, 42441, 42440);
				tv0->AddReply(540461, 42455, 42454);
				return;
			}
			if (a0 == 42455) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540462);
				tv0->ClearReplies();
				tv0->AddReply(540463, -1, 42456);
				tv0->AddReply(540464, 42458, 42457);
				return;
			}
			if (a0 == 42458) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540465);
				tv0->ClearReplies();
				tv0->AddReply(540466, 42460, 42459);
				tv0->AddReply(540473, 42460, 42466);
				tv0->AddReply(540474, 42460, 42468);
				return;
			}
			if (a0 == 42460) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540467);
				tv0->ClearReplies();
				tv0->AddReply(540468, -1, 42461);
				tv0->AddReply(540469, 42463, 42462);
				return;
			}
			if (a0 == 42463) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540470);
				tv0->ClearReplies();
				tv0->AddReply(540471, -1, 42464);
				tv0->AddReply(540472, -1, 42465);
				return;
			}
			if (a0 == 42441) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540450);
				tv0->ClearReplies();
				tv0->AddReply(540451, 42443, 42442);
				return;
			}
			if (a0 == 42443) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540452);
				tv0->ClearReplies();
				tv0->AddReply(540453, 42445, 42444);
				return;
			}
			if (a0 == 42445) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540454);
				tv0->ClearReplies();
				tv0->AddReply(540455, 42447, 42446);
				tv0->AddReply(540459, 42447, 42450);
				tv0->AddReply(540460, 42447, 42452);
				return;
			}
			if (a0 == 42447) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540456);
				tv0->ClearReplies();
				tv0->AddReply(540457, -1, 42448);
				tv0->AddReply(540458, -1, 42449);
				return;
			}
			if (a0 == 42419) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540430);
				tv0->ClearReplies();
				tv0->AddReply(540431, 42421, 42420);
				tv0->AddReply(540441, 42431, 42430);
				return;
			}
			if (a0 == 42431) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540442);
				tv0->ClearReplies();
				tv0->AddReply(540443, 42433, 42432);
				return;
			}
			if (a0 == 42433) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540444);
				tv0->ClearReplies();
				tv0->AddReply(540445, 42421, 42434);
				tv0->AddReply(540446, 42421, 42436);
				return;
			}
			if (a0 == 42421) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540432);
				tv0->ClearReplies();
				tv0->AddReply(540433, 42423, 42422);
				return;
			}
			if (a0 == 42423) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540434);
				tv0->ClearReplies();
				tv0->AddReply(540435, 42425, 42424);
				return;
			}
			if (a0 == 42425) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540436);
				tv0->ClearReplies();
				tv0->AddReply(540437, -1, 42426);
				tv0->AddReply(540438, 42428, 42427);
				return;
			}
			if (a0 == 42428) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540439);
				tv0->ClearReplies();
				tv0->AddReply(540440, -1, 42429);
				return;
			}
			if (a0 == 37341) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(535655);
				tv0->ClearReplies();
				tv0->AddReply(535656, -1, 37342);
				return;
			}
			if (a0 == 42374) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540388);
				tv0->ClearReplies();
				tv0->AddReply(540389, 42376, 42375);
				return;
			}
			if (a0 == 42376) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540390);
				tv0->ClearReplies();
				tv0->AddReply(540391, 42378, 42377);
				return;
			}
			if (a0 == 42378) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540392);
				tv0->ClearReplies();
				tv0->AddReply(540393, 42380, 42379);
				tv0->AddReply(540413, 42401, 42400);
				return;
			}
			if (a0 == 42401) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540414);
				tv0->ClearReplies();
				tv0->AddReply(540415, 42403, 42402);
				tv0->AddReply(540423, -1, 42410);
				return;
			}
			if (a0 == 42403) {
				if (!f_629_a1_b(tv1)) {
					f_fc_a1_v("Neutral");
					tv0->SetMessage(540416);
					tv0->ClearReplies();
					tv0->AddReply(540417, 42405, 42404);
					return;
				}
				if (f_629_a1_b(tv1)) {
					f_fc_a1_v("Neutral");
					tv0->SetMessage(540420);
					tv0->ClearReplies();
					tv0->AddReply(540421, -1, 42408);
					tv0->AddReply(540422, -1, 42409);
					return;
				}
			}
			if (a0 == 42405) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540418);
				tv0->ClearReplies();
				tv0->AddReply(540419, -1, 42406);
				return;
			}
			if (a0 == 42380) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540394);
				tv0->ClearReplies();
				tv0->AddReply(540395, 42401, 42381);
				tv0->AddReply(540396, 37333, 42383);
				return;
			}
			if (a0 == 37333) {
				if (!f_629_a1_b(tv1)) {
					f_fc_a1_v("Neutral");
					tv0->SetMessage(535647);
					tv0->ClearReplies();
					tv0->AddReply(540398, 42386, 42385);
					return;
				}
				if (f_629_a1_b(tv1)) {
					f_fc_a1_v("Neutral");
					tv0->SetMessage(535650);
					tv0->ClearReplies();
					tv0->AddReply(535651, -1, 37337);
					tv0->AddReply(535652, -1, 37338);
					return;
				}
			}
			if (a0 == 42386) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540399);
				tv0->ClearReplies();
				tv0->AddReply(540400, 42388, 42387);
				tv0->AddReply(540408, 42390, 42395);
				return;
			}
			if (a0 == 42388) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540401);
				tv0->ClearReplies();
				tv0->AddReply(540402, 42390, 42389);
				tv0->AddReply(540407, -1, 42394);
				return;
			}
			if (a0 == 42390) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540403);
				tv0->ClearReplies();
				tv0->AddReply(540404, 42392, 42391);
				return;
			}
			if (a0 == 42392) {
				f_fc_a1_v("Neutral");
				tv0->SetMessage(540405);
				tv0->ClearReplies();
				tv0->AddReply(535648, -1, 37334);
				return;
			}
			tv3 = true;
			if (f_72b_a0_b()) {
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

	void init(void)
	{
		f_48e_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_48e_a0_v(void)
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
			if (!L0 && f_4be_a0_b()) {
				@RemoveActor(f_5c2_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_4be_a0_b()) {
			@RemoveActor(f_5c2_a0_o());
		}
	}
}

bool f_4be_a0_b(void)
{
	return true;
}

bool f_4c0_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_5c8_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_72b_a0_b()) {
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

void f_504_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_72b_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_515_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_54f_a1_b(a0)) {
			if (!f_574_a1_b(a0)) {
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
		if (!f_574_a1_b(a0)) {
			if (!f_54f_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_54f_a1_b(object a0)
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
	return f_5ac_a1_b(L4);
}

bool f_574_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_5d7_a0_i() + "m";
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
	return f_5ac_a1_b(L4);
}

void f_59f_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_5a6_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_5ac_a1_b(string a0)
{
	if (f_72b_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_5bb_a0_v(void)
{
	if (f_72b_a0_b()) {
		@lshStopSpeech();
	}
}

object f_5c2_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_5c8_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_5d2_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_5d7_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_5e0_a2_v(object a0, object a1)
{
	@SetVariable("d12q01KlaraInSobor", 1);
	f_675_a0_v();
}

void f_5e9_a2_v(object a0, object a1)
{
	@SetVariable("ood12KlaraT2_1", 1);
}

void f_5ef_a2_v(object a0, object a1)
{
	if (f_5d2_a1_i("d12q01_Klara") == 0) {
		@SetVariable("d12q01_Klara", 1);
		f_682_a0_v();
	}
}

void f_5ff_a2_v(object a0, object a1)
{
	@SetVariable("ood12KlaraT2_2", 1);
}

void f_605_a2_v(object a0, object a1)
{
	@SetVariable("ood12KlaraT2_3", 1);
}

void f_60b_a2_v(object a0, object a1)
{
	@SetVariable("d12q01KlaraVisit", 1);
}

bool f_611_a1_b(object a0)
{
	if (f_5d2_a1_i("b12q01TheaterIsVisited") != 0) {
		return true;
	}
	return false;
}

bool f_61d_a1_b(object a0)
{
	if (f_5d2_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_629_a1_b(object a0)
{
	if (f_66f_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_633_a1_b(object a0)
{
	if (f_5d2_a1_i("d12q01KlaraInSobor") != 0) {
		return true;
	}
	return false;
}

bool f_63f_a1_b(object a0)
{
	if (f_5d2_a1_i("ood12KlaraT2_1") == 0) {
		return true;
	}
	return false;
}

bool f_64b_a1_b(object a0)
{
	if (f_5d2_a1_i("ood12KlaraT2_2") == 0) {
		return true;
	}
	return false;
}

bool f_657_a1_b(object a0)
{
	if (f_5d2_a1_i("ood12KlaraT2_3") == 0) {
		return true;
	}
	return false;
}

bool f_663_a1_b(object a0)
{
	if (f_5d2_a1_i("d12q01ChildsAreVisited") != 0) {
		return true;
	}
	return false;
}

bool f_66f_a1_b(object a0)
{
	return f_6fd_a0_b();
}

void f_675_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 701, 1, 535684);
	f_69c_a2_b(L0, 699);
}

void f_682_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 707, 1, 535690);
	f_69c_a2_b(L0, 699);
}

object f_68f_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_69c_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_68f_a0_o();
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

int f_6b8_a0_i(void)
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

void f_6c9_a3_v(object a0, bool a1, int a2)
{
	a0->add(7);
	a0->add(23);
	a0->add(21);
	a0->add(9);
	a0->add(3);
	a0->add(1);
	a0->add(11);
	a0->add(13);
	if (a1 == false) {
		a0->add(25);
	}
}

bool f_6e9_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_6f3_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

bool f_6fd_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_6c9_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_6f3_a1_b(L3) || f_6e9_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

int f_723_a0_i(void)
{
	return 515540;
}

int f_725_a0_i(void)
{
	return 502865;
}

string f_727_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

string f_729_a0_s(void)
{
	return "ui/NPC_Klara_b.png";
}

bool f_72b_a0_b(void)
{
	return true;
}

