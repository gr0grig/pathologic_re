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
		if (!f_2f0_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_414_a0_i());
		L0->SetPhoto(f_416_a0_s());
		L0->SetPlayerName(f_403_a0_i());
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
		f_328_a1_v(a0);
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
			if (f_3c4_a1_b(tv1) && f_3ae_a1_b(tv1)) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13261);
				tv0->ClearReplies();
				tv0->AddReply(13262, 14492, 14491);
				break;
			}
			if (f_3a2_a1_b(tv1) && f_3ba_a1_b(tv1)) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13279);
				tv0->ClearReplies();
				if (f_398_a1_b(tv1)) {
					tv0->AddReply(13280, 14511, 14510);
				}
				if (f_398_a1_b(tv1)) {
					tv0->AddReply(13284, 14515, 14514);
				}
				if (f_398_a1_b(tv1)) {
					tv0->AddReply(13288, 14511, 14518);
				}
				break;
			}
			if (f_3a2_a1_b(tv1)) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13289);
				tv0->ClearReplies();
				tv0->AddReply(13290, 14522, 14521);
				tv0->AddReply(13304, 14538, 14535);
				tv0->AddReply(13305, -1, 14536);
				break;
			}
			return;
		}
		if (f_418_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_32c_a1_v(tv2);
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

	void f_d6_a1_v(string a0)
	{
		if (!f_418_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_32c_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_33e_a0_v();
			if (a1 == 14497) {
				f_380_a2_v(tv1, tv0);
				f_38b_a2_v(tv1, tv0);
				f_37a_a2_v(tv1, tv0);
			}
			if (a1 == 14502) {
				f_37a_a2_v(tv1, tv0);
				f_38b_a2_v(tv1, tv0);
				f_380_a2_v(tv1, tv0);
			}
			if (a1 == 14513) {
				f_391_a2_v(tv1, tv0);
			}
			if (a1 == 14517) {
				f_391_a2_v(tv1, tv0);
			}
			if (a1 == 14539) {
				f_391_a2_v(tv1, tv0);
			}
			if (a0 == 14490) {
				if (f_3c4_a1_b(tv1) && f_3ae_a1_b(tv1)) {
					f_d6_a1_v("Neutral");
					tv0->SetMessage(13261);
					tv0->ClearReplies();
					tv0->AddReply(13262, 14492, 14491);
					return;
				}
				if (f_3a2_a1_b(tv1) && f_3ba_a1_b(tv1)) {
					f_d6_a1_v("Neutral");
					tv0->SetMessage(13279);
					tv0->ClearReplies();
					if (f_398_a1_b(tv1)) {
						tv0->AddReply(13280, 14511, 14510);
					}
					if (f_398_a1_b(tv1)) {
						tv0->AddReply(13284, 14515, 14514);
					}
					if (f_398_a1_b(tv1)) {
						tv0->AddReply(13288, 14511, 14518);
					}
					return;
				}
				if (f_3a2_a1_b(tv1)) {
					f_d6_a1_v("Neutral");
					tv0->SetMessage(13289);
					tv0->ClearReplies();
					tv0->AddReply(13290, 14522, 14521);
					tv0->AddReply(13304, 14538, 14535);
					tv0->AddReply(13305, -1, 14536);
					return;
				}
			}
			if (a0 == 14522) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13291);
				tv0->ClearReplies();
				tv0->AddReply(13292, 14524, 14523);
				tv0->AddReply(13296, 14528, 14527);
				tv0->AddReply(13300, 14532, 14531);
				return;
			}
			if (a0 == 14532) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13301);
				tv0->ClearReplies();
				tv0->AddReply(13302, 14540, 14533);
				tv0->AddReply(13303, 14538, 14534);
				return;
			}
			if (a0 == 14540) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13309);
				tv0->ClearReplies();
				tv0->AddReply(13310, 14524, 14541);
				return;
			}
			if (a0 == 14528) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13297);
				tv0->ClearReplies();
				tv0->AddReply(13298, -1, 14529);
				tv0->AddReply(13299, 14538, 14530);
				return;
			}
			if (a0 == 14524) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13293);
				tv0->ClearReplies();
				tv0->AddReply(13295, -1, 14526);
				tv0->AddReply(13306, 14538, 14537);
				return;
			}
			if (a0 == 14538) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13307);
				tv0->ClearReplies();
				tv0->AddReply(13308, -1, 14539);
				return;
			}
			if (a0 == 14515) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13285);
				tv0->ClearReplies();
				tv0->AddReply(13286, -1, 14516);
				tv0->AddReply(13287, -1, 14517);
				return;
			}
			if (a0 == 14511) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13281);
				tv0->ClearReplies();
				tv0->AddReply(13282, -1, 14512);
				tv0->AddReply(13283, -1, 14513);
				return;
			}
			if (a0 == 14492) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13263);
				tv0->ClearReplies();
				tv0->AddReply(13264, 14494, 14493);
				tv0->AddReply(13269, 14506, 14498);
				tv0->AddReply(13274, 14504, 14503);
				return;
			}
			if (a0 == 14504) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13275);
				tv0->ClearReplies();
				tv0->AddReply(13276, 14499, 14505);
				return;
			}
			if (a0 == 14506) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13277);
				tv0->ClearReplies();
				tv0->AddReply(13278, 14499, 14507);
				return;
			}
			if (a0 == 14499) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13270);
				tv0->ClearReplies();
				tv0->AddReply(13271, 14501, 14500);
				return;
			}
			if (a0 == 14501) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13272);
				tv0->ClearReplies();
				tv0->AddReply(13273, -1, 14502);
				return;
			}
			if (a0 == 14494) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13265);
				tv0->ClearReplies();
				tv0->AddReply(13266, 14496, 14495);
				return;
			}
			if (a0 == 14496) {
				f_d6_a1_v("Neutral");
				tv0->SetMessage(13267);
				tv0->ClearReplies();
				tv0->AddReply(13268, -1, 14497);
				return;
			}
			tv3 = true;
			if (f_418_a0_b()) {
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

bool f_2f0_a1_b(object a0)
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
	L5 = L3 * 70 + f_345_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_328_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_32c_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_33e_a0_v(void)
{
	if (f_418_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_345_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_34f_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_354_a3_v(object a0, object a1, int a2)
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

void f_361_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_354_a3_v(a0, L0, a2);
}

bool f_36e_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_37a_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_380_a2_v(object a0, object a1)
{
	@Trace("dreport is given");
	f_361_a3_v(a0, "d7q01_dreport", 1);
}

void f_38b_a2_v(object a0, object a1)
{
	@SetVariable("ood7DBirdmask1", 1);
}

void f_391_a2_v(object a0, object a1)
{
	f_36e_a2_b("quest_d7_01", "kill_player");
}

bool f_398_a1_b(object a0)
{
	if (f_3d0_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_3a2_a1_b(object a0)
{
	if (f_34f_a1_i("d7q01") == 2) {
		return true;
	}
	return false;
}

bool f_3ae_a1_b(object a0)
{
	if (f_34f_a1_i("d7q01") == 1) {
		return true;
	}
	return false;
}

bool f_3ba_a1_b(object a0)
{
	if (f_3d3_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_3c4_a1_b(object a0)
{
	if (f_34f_a1_i("ood7DBirdmask1") == 0) {
		return true;
	}
	return false;
}

bool f_3d0_a1_b(object a0)
{
	return false;
}

bool f_3d3_a1_b(object a0)
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

int f_403_a0_i(void)
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

int f_414_a0_i(void)
{
	return 4029;
}

string f_416_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_418_a0_b(void)
{
	return false;
}

