event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event evt_11 11;

var object g0;

task t0
{
	void init(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

maintask t1
{
	void init(void)
	{
		f_770_a0_v();
		if (!f_5fb_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_63c_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void OnUnload(void)
	{
		t0{};
	}

	void OnUse(object a0)
	{
		f_771_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_5ef_a1_b(a0);
		@WaitForAnimEnd();
	}
}

task t2
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_600_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_696_a0_i());
		L0->SetPhoto(f_698_a0_s());
		L0->SetPlayerName(f_75f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_638_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t3
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
			f_6a2_a2_v(tv1, tv0);
			f_d1_a1_v("Neutral");
			tv0->SetMessage(13882);
			tv0->ClearReplies();
			if (f_6e6_a1_b(tv1)) {
				tv0->AddReply(13883, 15111, 15110);
			}
			if (f_6f0_a1_b(tv1) && f_6fc_a1_b(tv1)) {
				tv0->AddReply(13906, 15138, 15137);
			}
			if (f_750_a1_b(tv1)) {
				tv0->AddReply(13924, 15156, 15155);
			}
			tv0->AddReply(13947, -1, 15182);
			break;
			return;
		}
		if (f_69a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_63c_a1_v(tv2);
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
		if (!f_69a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_63c_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_64e_a0_v();
			if (a1 == 15137) {
				f_6a8_a2_v(tv1, tv0);
			}
			if (a1 == 15149) {
				f_6ae_a2_v(tv1, tv0);
				f_69c_a2_v(tv1, tv0);
				f_6d5_a2_v(tv1, tv0);
			}
			if (a1 == 15150) {
				f_6ae_a2_v(tv1, tv0);
				f_69c_a2_v(tv1, tv0);
				f_6d5_a2_v(tv1, tv0);
			}
			if (a1 == 15155) {
				f_6e0_a2_v(tv1, tv0);
			}
			if (a0 == 15109) {
				f_6a2_a2_v(tv1, tv0);
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13882);
				tv0->ClearReplies();
				if (f_6e6_a1_b(tv1)) {
					tv0->AddReply(13883, 15111, 15110);
				}
				if (f_6f0_a1_b(tv1) && f_6fc_a1_b(tv1)) {
					tv0->AddReply(13906, 15138, 15137);
				}
				if (f_750_a1_b(tv1)) {
					tv0->AddReply(13924, 15156, 15155);
				}
				tv0->AddReply(13947, -1, 15182);
				return;
			}
			if (a0 == 15156) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13925);
				tv0->ClearReplies();
				tv0->AddReply(13926, 15158, 15157);
				tv0->AddReply(13946, 15158, 15180);
				return;
			}
			if (a0 == 15158) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13927);
				tv0->ClearReplies();
				tv0->AddReply(13928, 15160, 15159);
				tv0->AddReply(13945, 15160, 15178);
				return;
			}
			if (a0 == 15160) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13929);
				tv0->ClearReplies();
				tv0->AddReply(13930, 15162, 15161);
				tv0->AddReply(13944, 15162, 15176);
				return;
			}
			if (a0 == 15162) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13931);
				tv0->ClearReplies();
				tv0->AddReply(13932, 15164, 15163);
				tv0->AddReply(13941, 15173, 15172);
				return;
			}
			if (a0 == 15173) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13942);
				tv0->ClearReplies();
				tv0->AddReply(13943, 15166, 15174);
				return;
			}
			if (a0 == 15164) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13933);
				tv0->ClearReplies();
				tv0->AddReply(13934, 15166, 15165);
				return;
			}
			if (a0 == 15166) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13935);
				tv0->ClearReplies();
				tv0->AddReply(13936, 15168, 15167);
				return;
			}
			if (a0 == 15168) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13937);
				tv0->ClearReplies();
				tv0->AddReply(13938, 15170, 15169);
				return;
			}
			if (a0 == 15170) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13939);
				tv0->ClearReplies();
				tv0->AddReply(13940, -1, 15171);
				return;
			}
			if (a0 == 15138) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13907);
				tv0->ClearReplies();
				tv0->AddReply(13908, 15140, 15139);
				return;
			}
			if (a0 == 15140) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13909);
				tv0->ClearReplies();
				tv0->AddReply(13910, 15142, 15141);
				return;
			}
			if (a0 == 15142) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13911);
				tv0->ClearReplies();
				tv0->AddReply(13912, 15144, 15143);
				tv0->AddReply(13920, 15152, 15151);
				return;
			}
			if (a0 == 15152) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13921);
				tv0->ClearReplies();
				tv0->AddReply(13922, 15154, 15153);
				return;
			}
			if (a0 == 15154) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13923);
				tv0->ClearReplies();
				tv0->AddReply(14067, -1, 15304);
				return;
			}
			if (a0 == 15144) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13913);
				tv0->ClearReplies();
				tv0->AddReply(13914, 15146, 15145);
				tv0->AddReply(13919, -1, 15150);
				return;
			}
			if (a0 == 15146) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13915);
				tv0->ClearReplies();
				tv0->AddReply(13916, 15148, 15147);
				return;
			}
			if (a0 == 15148) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13917);
				tv0->ClearReplies();
				tv0->AddReply(13918, -1, 15149);
				return;
			}
			if (a0 == 15111) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13884);
				tv0->ClearReplies();
				tv0->AddReply(13885, 15113, 15112);
				tv0->AddReply(13905, 15113, 15135);
				return;
			}
			if (a0 == 15113) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13886);
				tv0->ClearReplies();
				tv0->AddReply(13887, 15115, 15114);
				tv0->AddReply(13899, 15128, 15127);
				return;
			}
			if (a0 == 15128) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13900);
				tv0->ClearReplies();
				tv0->AddReply(13901, 15130, 15129);
				tv0->AddReply(13904, 15115, 15133);
				return;
			}
			if (a0 == 15130) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13902);
				tv0->ClearReplies();
				tv0->AddReply(13903, 15121, 15131);
				return;
			}
			if (a0 == 15115) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13888);
				tv0->ClearReplies();
				tv0->AddReply(13889, 15117, 15116);
				tv0->AddReply(13898, 15117, 15125);
				return;
			}
			if (a0 == 15117) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13890);
				tv0->ClearReplies();
				tv0->AddReply(13891, 15119, 15118);
				tv0->AddReply(13897, -1, 15124);
				return;
			}
			if (a0 == 15119) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13892);
				tv0->ClearReplies();
				tv0->AddReply(13893, 15121, 15120);
				return;
			}
			if (a0 == 15121) {
				f_d1_a1_v("Neutral");
				tv0->SetMessage(13894);
				tv0->ClearReplies();
				tv0->AddReply(13895, -1, 15122);
				tv0->AddReply(13896, -1, 15123);
				return;
			}
			tv3 = true;
			if (f_69a_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t4
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_600_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_696_a0_i());
		L0->SetPhoto(f_698_a0_s());
		L0->SetPlayerName(f_75f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_638_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t5
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
			f_411_a1_v("Neutral");
			tv0->SetMessage(14280);
			tv0->ClearReplies();
			if (f_714_a1_b(tv1) && f_720_a1_b(tv1)) {
				tv0->AddReply(14281, 15502, 15501);
			}
			if (f_72c_a1_b(tv1) && f_738_a1_b(tv1)) {
				tv0->AddReply(14306, 15529, 15528);
			}
			if (f_708_a1_b(tv1) && f_744_a1_b(tv1)) {
				tv0->AddReply(14317, 15540, 15539);
			}
			tv0->AddReply(14324, -1, 15546);
			break;
			return;
		}
		if (f_69a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_63c_a1_v(tv2);
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

	void f_411_a1_v(string a0)
	{
		if (!f_69a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_63c_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_64e_a0_v();
			if (a1 == 15501) {
				f_6c3_a2_v(tv1, tv0);
			}
			if (a1 == 15528) {
				f_6c9_a2_v(tv1, tv0);
			}
			if (a1 == 15539) {
				f_6cf_a2_v(tv1, tv0);
			}
			if (a0 == 15500) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14280);
				tv0->ClearReplies();
				if (f_714_a1_b(tv1) && f_720_a1_b(tv1)) {
					tv0->AddReply(14281, 15502, 15501);
				}
				if (f_72c_a1_b(tv1) && f_738_a1_b(tv1)) {
					tv0->AddReply(14306, 15529, 15528);
				}
				if (f_708_a1_b(tv1) && f_744_a1_b(tv1)) {
					tv0->AddReply(14317, 15540, 15539);
				}
				tv0->AddReply(14324, -1, 15546);
				return;
			}
			if (a0 == 15540) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14318);
				tv0->ClearReplies();
				tv0->AddReply(14319, 15542, 15541);
				return;
			}
			if (a0 == 15542) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14320);
				tv0->ClearReplies();
				tv0->AddReply(14321, 15544, 15543);
				return;
			}
			if (a0 == 15544) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14322);
				tv0->ClearReplies();
				tv0->AddReply(14323, -1, 15545);
				return;
			}
			if (a0 == 15529) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14307);
				tv0->ClearReplies();
				tv0->AddReply(14308, 15531, 15530);
				return;
			}
			if (a0 == 15531) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14309);
				tv0->ClearReplies();
				tv0->AddReply(14310, 15533, 15532);
				return;
			}
			if (a0 == 15533) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14311);
				tv0->ClearReplies();
				tv0->AddReply(14312, 15535, 15534);
				return;
			}
			if (a0 == 15535) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14313);
				tv0->ClearReplies();
				tv0->AddReply(14314, 15537, 15536);
				return;
			}
			if (a0 == 15537) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14315);
				tv0->ClearReplies();
				tv0->AddReply(14316, -1, 15538);
				return;
			}
			if (a0 == 15502) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14282);
				tv0->ClearReplies();
				tv0->AddReply(14283, 15504, 15503);
				return;
			}
			if (a0 == 15504) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14284);
				tv0->ClearReplies();
				tv0->AddReply(14285, 15506, 15505);
				tv0->AddReply(14290, 15511, 15510);
				return;
			}
			if (a0 == 15511) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14291);
				tv0->ClearReplies();
				tv0->AddReply(14292, 15513, 15512);
				tv0->AddReply(14299, 15520, 15519);
				return;
			}
			if (a0 == 15520) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14300);
				tv0->ClearReplies();
				tv0->AddReply(14301, 15513, 15521);
				tv0->AddReply(14302, 15524, 15523);
				return;
			}
			if (a0 == 15524) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14303);
				tv0->ClearReplies();
				tv0->AddReply(14304, 15513, 15525);
				tv0->AddReply(14305, -1, 15527);
				return;
			}
			if (a0 == 15513) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14293);
				tv0->ClearReplies();
				tv0->AddReply(14294, 15515, 15514);
				return;
			}
			if (a0 == 15515) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14295);
				tv0->ClearReplies();
				tv0->AddReply(14296, 15517, 15516);
				return;
			}
			if (a0 == 15517) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14297);
				tv0->ClearReplies();
				tv0->AddReply(14298, -1, 15518);
				return;
			}
			if (a0 == 15506) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14286);
				tv0->ClearReplies();
				tv0->AddReply(14287, 15508, 15507);
				return;
			}
			if (a0 == 15508) {
				f_411_a1_v("Neutral");
				tv0->SetMessage(14288);
				tv0->ClearReplies();
				tv0->AddReply(14289, -1, 15509);
				return;
			}
			tv3 = true;
			if (f_69a_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_5ef_a1_b(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	bool L3;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@Rotate(L2.x, L2.z, L3);
	return L3;
}

bool f_5fb_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_600_a1_b(object a0)
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
	L5 = L3 * 70 + f_655_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_638_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_63c_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_64e_a0_v(void)
{
	if (f_69a_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_655_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_65f_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_664_a3_v(object a0, object a1, int a2)
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

void f_671_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_664_a3_v(a0, L0, a2);
}

int f_67e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_687_a1_b(int a0)
{
	return f_67e_a0_i() == a0;
}

bool f_68d_a0_b(void)
{
	bool L0;
	f_63c_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_696_a0_i(void)
{
	return 11961;
}

string f_698_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

bool f_69a_a0_b(void)
{
	return true;
}

void f_69c_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_6a2_a2_v(object a0, object a1)
{
	@SetVariable("d9TalkToPolkovodec", 1);
}

void f_6a8_a2_v(object a0, object a1)
{
	@SetVariable("ood9Block1", 1);
}

void f_6ae_a2_v(object a0, object a1)
{
	object L0;
	@Trace("Rifle is given");
	@CreateInvItem(L0);
	L0->SetItemName("Rifle");
	L0->SetProperty("durability", 100);
	f_664_a3_v(a0, L0, 1);
}

void f_6c3_a2_v(object a0, object a1)
{
	@SetVariable("ood11Block1", 1);
}

void f_6c9_a2_v(object a0, object a1)
{
	@SetVariable("ood11Block2", 1);
}

void f_6cf_a2_v(object a0, object a1)
{
	@SetVariable("ood11Block3", 1);
}

void f_6d5_a2_v(object a0, object a1)
{
	@Trace("rifle ammo10 is given");
	f_671_a3_v(a0, "rifle_ammo", 10);
}

void f_6e0_a2_v(object a0, object a1)
{
	@SetVariable("ood9Block2", 1);
}

bool f_6e6_a1_b(object a0)
{
	if (f_75c_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_6f0_a1_b(object a0)
{
	if (f_65f_a1_i("d9q01") == 2) {
		return true;
	}
	return false;
}

bool f_6fc_a1_b(object a0)
{
	if (f_65f_a1_i("ood9Block1") == 0) {
		return true;
	}
	return false;
}

bool f_708_a1_b(object a0)
{
	if (f_65f_a1_i("d11q02") == 1) {
		return true;
	}
	return false;
}

bool f_714_a1_b(object a0)
{
	if (f_65f_a1_i("d11q01") == 2) {
		return true;
	}
	return false;
}

bool f_720_a1_b(object a0)
{
	if (f_65f_a1_i("ood11Block1") == 0) {
		return true;
	}
	return false;
}

bool f_72c_a1_b(object a0)
{
	if (f_65f_a1_i("d11q01") >= 3) {
		return true;
	}
	return false;
}

bool f_738_a1_b(object a0)
{
	if (f_65f_a1_i("ood11Block2") == 0) {
		return true;
	}
	return false;
}

bool f_744_a1_b(object a0)
{
	if (f_65f_a1_i("ood11Block3") == 0) {
		return true;
	}
	return false;
}

bool f_750_a1_b(object a0)
{
	if (f_65f_a1_i("ood9Block2") == 0) {
		return true;
	}
	return false;
}

bool f_75c_a1_b(object a0)
{
	return false;
}

int f_75f_a0_i(void)
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

void f_770_a0_v(void)
{
}

void f_771_a1_v(object a0)
{
	if (f_687_a1_b(9)) {
		t2{a0};
		return;
	}
	if (f_687_a1_b(11)) {
		t4{a0};
		return;
	}
	f_68d_a0_b();
}

