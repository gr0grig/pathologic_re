event evt_11 11;
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
		if (!f_287_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3e8_a0_i());
		L0->SetPhoto(f_3ea_a0_s());
		L0->SetPlayerName(f_3c7_a0_i());
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
		f_2bf_a1_v(a0);
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
			if (f_34b_a1_b(tv1) && f_361_a1_b(tv1)) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(12188);
				tv0->ClearReplies();
				tv0->AddReply(12189, 14396, 13344);
				break;
			}
			if (f_357_a1_b(tv1) && f_33f_a1_b(tv1)) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13197);
				tv0->ClearReplies();
				tv0->AddReply(13198, 14433, 14421);
				tv0->AddReply(13199, 14428, 14422);
				tv0->AddReply(13200, 14424, 14423);
				tv0->AddReply(13330, -1, 14562);
				tv0->AddReply(13331, -1, 14563);
				break;
			}
			if (f_33f_a1_b(tv1)) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13175);
				tv0->ClearReplies();
				tv0->AddReply(13177, 14398, 14397);
				tv0->AddReply(13195, 14411, 14417);
				tv0->AddReply(13193, -1, 14415);
				break;
			}
			return;
		}
		if (f_3ec_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2c3_a1_v(tv2);
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

	void f_d1_a1_v(string a0)
	{
		if (!f_3ec_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2c3_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_2d5_a0_v();
			if (a1 == 14419) {
				f_320_a2_v(tv1, tv0);
				f_326_a2_v(tv1, tv0);
				f_311_a2_v(tv1, tv0);
			}
			if (a1 == 14487) {
				f_331_a2_v(tv1, tv0);
			}
			if (a1 == 14432) {
				f_331_a2_v(tv1, tv0);
			}
			if (a1 == 14562) {
				f_331_a2_v(tv1, tv0);
			}
			if (a1 == 14563) {
				f_338_a2_v(tv1, tv0);
				f_317_a2_v(tv1, tv0);
			}
			if (a0 == 13343) {
				if (f_34b_a1_b(tv1) && f_361_a1_b(tv1)) {
					f_d1_a1_v("Neutral");
					tv0->SetMessage(12188);
					tv0->ClearReplies();
					tv0->AddReply(12189, 14396, 13344);
					return;
				}
				if (f_357_a1_b(tv1) && f_33f_a1_b(tv1)) {
					f_d1_a1_v("Neutral");
					tv0->SetMessage(13197);
					tv0->ClearReplies();
					tv0->AddReply(13198, 14433, 14421);
					tv0->AddReply(13199, 14428, 14422);
					tv0->AddReply(13200, 14424, 14423);
					tv0->AddReply(13330, -1, 14562);
					tv0->AddReply(13331, -1, 14563);
					return;
				}
				if (f_33f_a1_b(tv1)) {
					f_d1_a1_v("Neutral");
					tv0->SetMessage(13175);
					tv0->ClearReplies();
					tv0->AddReply(13177, 14398, 14397);
					tv0->AddReply(13195, 14411, 14417);
					tv0->AddReply(13193, -1, 14415);
					return;
				}
			}
			if (a0 == 14398) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13178);
				tv0->ClearReplies();
				tv0->AddReply(13179, 14402, 14399);
				tv0->AddReply(13180, 14403, 14400);
				tv0->AddReply(13181, 14404, 14401);
				return;
			}
			if (a0 == 14404) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13184);
				tv0->ClearReplies();
				tv0->AddReply(13189, -1, 14409);
				tv0->AddReply(13190, 14411, 14410);
				return;
			}
			if (a0 == 14403) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13183);
				tv0->ClearReplies();
				tv0->AddReply(13187, -1, 14407);
				tv0->AddReply(13188, 14411, 14408);
				return;
			}
			if (a0 == 14402) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13182);
				tv0->ClearReplies();
				tv0->AddReply(13185, 14411, 14405);
				tv0->AddReply(13186, -1, 14406);
				return;
			}
			if (a0 == 14411) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13191);
				tv0->ClearReplies();
				tv0->AddReply(13192, -1, 14414);
				return;
			}
			if (a0 == 14424) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13201);
				tv0->ClearReplies();
				tv0->AddReply(13202, 14429, 14425);
				tv0->AddReply(13203, 14433, 14426);
				tv0->AddReply(13204, 14428, 14427);
				return;
			}
			if (a0 == 14429) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13206);
				tv0->ClearReplies();
				tv0->AddReply(13207, -1, 14430);
				return;
			}
			if (a0 == 14428) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13205);
				tv0->ClearReplies();
				tv0->AddReply(13208, -1, 14431);
				tv0->AddReply(13209, -1, 14432);
				return;
			}
			if (a0 == 14433) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13210);
				tv0->ClearReplies();
				tv0->AddReply(13211, -1, 14434);
				tv0->AddReply(13260, -1, 14487);
				return;
			}
			if (a0 == 14396) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13176);
				tv0->ClearReplies();
				tv0->AddReply(13196, -1, 14419);
				return;
			}
			tv3 = true;
			if (f_3ec_a0_b()) {
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
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		t0{a0};
	}
}

bool f_287_a1_b(object a0)
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
	L5 = L3 * 70 + f_2dc_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_2bf_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_2c3_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_2d5_a0_v(void)
{
	if (f_3ec_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_2dc_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2e6_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_2eb_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	}
}

void f_2f8_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_2eb_a3_v(a0, L0, a2);
}

bool f_305_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_311_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_317_a2_v(object a0, object a1)
{
	@SetVariable("d7q01", 3);
	f_3d8_a0_v();
}

void f_320_a2_v(object a0, object a1)
{
	@SetVariable("ood7UBirdmask1", 1);
}

void f_326_a2_v(object a0, object a1)
{
	@Trace("ureport is given");
	f_2f8_a3_v(a0, "d7q01_ureport", 1);
}

void f_331_a2_v(object a0, object a1)
{
	f_305_a2_b("quest_d7_01", "kill_player");
}

void f_338_a2_v(object a0, object a1)
{
	f_305_a2_b("quest_d7_01", "sobor_teleport");
}

bool f_33f_a1_b(object a0)
{
	if (f_2e6_a1_i("d7q01") == 2) {
		return true;
	}
	return false;
}

bool f_34b_a1_b(object a0)
{
	if (f_2e6_a1_i("d7q01") == 1) {
		return true;
	}
	return false;
}

bool f_357_a1_b(object a0)
{
	if (f_36d_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_361_a1_b(object a0)
{
	if (f_2e6_a1_i("ood7UBirdmask1") == 0) {
		return true;
	}
	return false;
}

bool f_36d_a1_b(object a0)
{
	int L0;
	int L1;
	int L2;
	bool L3;
	bool L4;
	int L5;
	a0->GetItemCount(L0, 1);
	@GetInvItemByName(L1, "bird_mask");
	@GetInvItemByName(L2, "bird_balahon");
	L3 = false;
	L4 = false;
	for (L5 = 0; L5 < L0; L5++) {
		object L6;
		int L7;
		a0->GetItem(L6, L5, 1);
		L6->GetItemID(L7);
		if (L7 == L1) {
			bool L8;
			a0->IsItemSelected(L8, L5, 1);
			if (L8) {
				L3 = true;
			}
		} else {
			if (L7 == L2) {
				bool L9;
				a0->IsItemSelected(L9, L5, 1);
				if (L9) {
					L4 = true;
				}
			}
		}
	}
	return L3 && L4;
}

object f_39d_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_3aa_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_39d_a0_o();
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

int f_3c7_a0_i(void)
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

void f_3d8_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 169, 1, 15418);
	f_3aa_a2_b(L0, 165);
}

int f_3e8_a0_i(void)
{
	return 4029;
}

string f_3ea_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_3ec_a0_b(void)
{
	return false;
}

