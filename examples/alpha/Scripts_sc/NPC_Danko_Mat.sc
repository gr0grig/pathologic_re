event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event evt_11 11;

var object g0;
var bool g1;

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
		f_8a8_a0_v();
		if (!f_61c_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_65d_a1_v("Neutral");
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
		f_8ac_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_610_a1_b(a0);
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
		if (!f_621_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_6b5_a0_i());
		L0->SetPhoto(f_6b7_a0_s());
		L0->SetPlayerName(f_847_a0_i());
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
		f_659_a1_v(a0);
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
			if (f_745_a1_b(tv1) && f_751_a1_b(tv1)) {
				f_6c3_a2_v(tv1, tv0);
				f_717_a2_v(tv1, tv0);
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13496);
				tv0->ClearReplies();
				tv0->AddReply(13504, 14773, 14746);
				tv0->AddReply(13505, 14748, 14747);
				break;
			}
			f_717_a2_v(tv1, tv0);
			f_15d_a1_v("Neutral");
			tv0->SetMessage(12350);
			tv0->ClearReplies();
			if (f_75d_a1_b(tv1) && f_769_a1_b(tv1) && f_774_a1_b(tv1)) {
				tv0->AddReply(13563, 14813, 14812);
			}
			if (f_780_a1_b(tv1)) {
				tv0->AddReply(12352, 13512, 13511);
			}
			if (f_78c_a1_b(tv1)) {
				tv0->AddReply(12366, 13527, 13526);
			}
			if (f_798_a1_b(tv1)) {
				tv0->AddReply(12357, 13518, 13517);
			}
			if (f_7a4_a1_b(tv1) && f_7bc_a1_b(tv1)) {
				tv0->AddReply(13752, 14997, 14996);
			}
			if (f_7b0_a1_b(tv1) && f_7c8_a1_b(tv1)) {
				tv0->AddReply(13568, 14818, 14817);
			}
			if (f_7d4_a1_b(tv1) && f_7e0_a1_b(tv1)) {
				tv0->AddReply(13766, 15006, 15005);
			}
			if (f_7d4_a1_b(tv1) && !f_7e0_a1_b(tv1)) {
				tv0->AddReply(13769, 15009, 15008);
			}
			tv0->AddReply(12351, -1, 13510);
			break;
			return;
		}
		if (f_6b9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_65d_a1_v(tv2);
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

	void f_15d_a1_v(string a0)
	{
		if (!f_6b9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_65d_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_66f_a0_v();
			if (a1 == 14805) {
				f_6c9_a2_v(tv1, tv0);
			}
			if (a1 == 14811) {
				f_6d2_a2_v(tv1, tv0);
				f_735_a2_v(tv1, tv0);
			}
			if (a1 == 14812) {
				f_6e9_a2_v(tv1, tv0);
			}
			if (a1 == 14816) {
				f_6ef_a2_v(tv1, tv0);
			}
			if (a1 == 13511) {
				f_6f9_a2_v(tv1, tv0);
			}
			if (a1 == 13526) {
				f_6ff_a2_v(tv1, tv0);
			}
			if (a1 == 13517) {
				f_705_a2_v(tv1, tv0);
			}
			if (a1 == 14996) {
				f_70b_a2_v(tv1, tv0);
			}
			if (a1 == 15004) {
				f_6ef_a2_v(tv1, tv0);
			}
			if (a1 == 14817) {
				f_711_a2_v(tv1, tv0);
			}
			if (a1 == 15002) {
				f_6ef_a2_v(tv1, tv0);
			}
			if (a1 == 15007) {
				f_72f_a2_v(tv1, tv0);
				f_6bb_a2_v(tv1, tv0);
				f_71d_a2_v(tv1, tv0);
				f_6c1_a2_v(tv1, tv0);
			}
			if (a1 == 15010) {
				f_726_a2_v(tv1, tv0);
			}
			if (a0 == 14737) {
				if (f_745_a1_b(tv1) && f_751_a1_b(tv1)) {
					f_6c3_a2_v(tv1, tv0);
					f_717_a2_v(tv1, tv0);
					f_15d_a1_v("Neutral");
					tv0->SetMessage(13496);
					tv0->ClearReplies();
					tv0->AddReply(13504, 14773, 14746);
					tv0->AddReply(13505, 14748, 14747);
					return;
				}
				f_717_a2_v(tv1, tv0);
				f_15d_a1_v("Neutral");
				tv0->SetMessage(12350);
				tv0->ClearReplies();
				if (f_75d_a1_b(tv1) && f_769_a1_b(tv1) && f_774_a1_b(tv1)) {
					tv0->AddReply(13563, 14813, 14812);
				}
				if (f_780_a1_b(tv1)) {
					tv0->AddReply(12352, 13512, 13511);
				}
				if (f_78c_a1_b(tv1)) {
					tv0->AddReply(12366, 13527, 13526);
				}
				if (f_798_a1_b(tv1)) {
					tv0->AddReply(12357, 13518, 13517);
				}
				if (f_7a4_a1_b(tv1) && f_7bc_a1_b(tv1)) {
					tv0->AddReply(13752, 14997, 14996);
				}
				if (f_7b0_a1_b(tv1) && f_7c8_a1_b(tv1)) {
					tv0->AddReply(13568, 14818, 14817);
				}
				if (f_7d4_a1_b(tv1) && f_7e0_a1_b(tv1)) {
					tv0->AddReply(13766, 15006, 15005);
				}
				if (f_7d4_a1_b(tv1) && !f_7e0_a1_b(tv1)) {
					tv0->AddReply(13769, 15009, 15008);
				}
				tv0->AddReply(12351, -1, 13510);
				return;
			}
			if (a0 == 15009) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13770);
				tv0->ClearReplies();
				tv0->AddReply(13771, -1, 15010);
				return;
			}
			if (a0 == 15006) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13767);
				tv0->ClearReplies();
				tv0->AddReply(13768, -1, 15007);
				return;
			}
			if (a0 == 14818) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13569);
				tv0->ClearReplies();
				tv0->AddReply(13570, 14820, 14819);
				return;
			}
			if (a0 == 14820) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13571);
				tv0->ClearReplies();
				tv0->AddReply(13572, 15001, 14821);
				return;
			}
			if (a0 == 15001) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13757);
				tv0->ClearReplies();
				tv0->AddReply(13758, -1, 15002);
				return;
			}
			if (a0 == 14997) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13753);
				tv0->ClearReplies();
				tv0->AddReply(13754, 14999, 14998);
				return;
			}
			if (a0 == 14999) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13755);
				tv0->ClearReplies();
				tv0->AddReply(13756, 15003, 15000);
				return;
			}
			if (a0 == 15003) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13759);
				tv0->ClearReplies();
				tv0->AddReply(13760, -1, 15004);
				return;
			}
			if (a0 == 13518) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(12358);
				tv0->ClearReplies();
				tv0->AddReply(12359, 13520, 13519);
				tv0->AddReply(13497, 14739, 14738);
				return;
			}
			if (a0 == 14739) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13498);
				tv0->ClearReplies();
				tv0->AddReply(13499, 14741, 14740);
				return;
			}
			if (a0 == 14741) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13500);
				tv0->ClearReplies();
				tv0->AddReply(13501, 14743, 14742);
				return;
			}
			if (a0 == 14743) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13502);
				tv0->ClearReplies();
				tv0->AddReply(13503, 13524, 14744);
				return;
			}
			if (a0 == 13520) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(12360);
				tv0->ClearReplies();
				tv0->AddReply(12361, 13522, 13521);
				return;
			}
			if (a0 == 13522) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(12362);
				tv0->ClearReplies();
				tv0->AddReply(12363, 13524, 13523);
				return;
			}
			if (a0 == 13524) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(12364);
				tv0->ClearReplies();
				tv0->AddReply(12365, -1, 13525);
				return;
			}
			if (a0 == 13527) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(12367);
				tv0->ClearReplies();
				tv0->AddReply(12368, 13529, 13528);
				return;
			}
			if (a0 == 13529) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(12369);
				tv0->ClearReplies();
				tv0->AddReply(12370, 13531, 13530);
				return;
			}
			if (a0 == 13531) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(12371);
				tv0->ClearReplies();
				tv0->AddReply(12372, -1, 13532);
				return;
			}
			if (a0 == 13512) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(12353);
				tv0->ClearReplies();
				tv0->AddReply(13529, 14775, 14774);
				return;
			}
			if (a0 == 14775) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13530);
				tv0->ClearReplies();
				tv0->AddReply(13531, 14777, 14776);
				return;
			}
			if (a0 == 14777) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13532);
				tv0->ClearReplies();
				tv0->AddReply(13533, 14779, 14778);
				tv0->AddReply(13536, 14782, 14781);
				return;
			}
			if (a0 == 14782) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13537);
				tv0->ClearReplies();
				tv0->AddReply(13538, 14784, 14783);
				return;
			}
			if (a0 == 14784) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13539);
				tv0->ClearReplies();
				tv0->AddReply(13540, 14786, 14785);
				return;
			}
			if (a0 == 14786) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13541);
				tv0->ClearReplies();
				tv0->AddReply(13542, -1, 14787);
				return;
			}
			if (a0 == 14779) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13534);
				tv0->ClearReplies();
				tv0->AddReply(13535, 14788, 14780);
				return;
			}
			if (a0 == 14788) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13543);
				tv0->ClearReplies();
				tv0->AddReply(13544, 14790, 14789);
				return;
			}
			if (a0 == 14790) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13545);
				tv0->ClearReplies();
				tv0->AddReply(13546, -1, 14791);
				return;
			}
			if (a0 == 14813) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13564);
				tv0->ClearReplies();
				tv0->AddReply(13565, 14815, 14814);
				return;
			}
			if (a0 == 14815) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13566);
				tv0->ClearReplies();
				tv0->AddReply(13567, -1, 14816);
				return;
			}
			if (a0 == 14748) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13506);
				tv0->ClearReplies();
				tv0->AddReply(13507, 14750, 14749);
				tv0->AddReply(13513, 14756, 14755);
				return;
			}
			if (a0 == 14756) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13514);
				tv0->ClearReplies();
				tv0->AddReply(13515, 14758, 14757);
				tv0->AddReply(13517, 14760, 14759);
				return;
			}
			if (a0 == 14760) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13518);
				tv0->ClearReplies();
				tv0->AddReply(13520, 14750, 14763);
				return;
			}
			if (a0 == 14758) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13516);
				tv0->ClearReplies();
				tv0->AddReply(13519, 14750, 14761);
				return;
			}
			if (a0 == 14750) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13508);
				tv0->ClearReplies();
				tv0->AddReply(13521, 14766, 14765);
				tv0->AddReply(13509, 14752, 14751);
				return;
			}
			if (a0 == 14752) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13510);
				tv0->ClearReplies();
				tv0->AddReply(13511, 14754, 14753);
				return;
			}
			if (a0 == 14754) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13512);
				tv0->ClearReplies();
				tv0->AddReply(13547, 14773, 14792);
				return;
			}
			if (a0 == 14766) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13522);
				tv0->ClearReplies();
				tv0->AddReply(13523, 14769, 14767);
				tv0->AddReply(13524, 14769, 14768);
				return;
			}
			if (a0 == 14769) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13525);
				tv0->ClearReplies();
				tv0->AddReply(13526, 14773, 14770);
				tv0->AddReply(13527, -1, 14772);
				return;
			}
			if (a0 == 14773) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13528);
				tv0->ClearReplies();
				tv0->AddReply(13548, 14796, 14795);
				return;
			}
			if (a0 == 14796) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13549);
				tv0->ClearReplies();
				tv0->AddReply(13550, 14800, 14797);
				tv0->AddReply(13551, 14799, 14798);
				return;
			}
			if (a0 == 14799) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13552);
				tv0->ClearReplies();
				tv0->AddReply(13554, 14800, 14801);
				return;
			}
			if (a0 == 14800) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13553);
				tv0->ClearReplies();
				tv0->AddReply(13556, -1, 14805);
				tv0->AddReply(13557, 14807, 14806);
				return;
			}
			if (a0 == 14807) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13558);
				tv0->ClearReplies();
				tv0->AddReply(13559, 14810, 14808);
				tv0->AddReply(13560, -1, 14809);
				return;
			}
			if (a0 == 14810) {
				f_15d_a1_v("Neutral");
				tv0->SetMessage(13561);
				tv0->ClearReplies();
				tv0->AddReply(13562, -1, 14811);
				return;
			}
			tv3 = true;
			if (f_6b9_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_610_a1_b(object a0)
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

bool f_61c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_621_a1_b(object a0)
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
	L5 = L3 * 70 + f_676_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_659_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_65d_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_66f_a0_v(void)
{
	if (f_6b9_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_676_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_680_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_685_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_68c_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_698_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_69d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_6a6_a1_b(int a0)
{
	return f_69d_a0_i() == a0;
}

bool f_6ac_a0_b(void)
{
	bool L0;
	f_65d_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_6b5_a0_i(void)
{
	return 2870;
}

string f_6b7_a0_s(void)
{
	return "ui/NPC_Mat.png";
}

bool f_6b9_a0_b(void)
{
	return true;
}

void f_6bb_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_6c1_a2_v(object a0, object a1)
{
}

void f_6c3_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat1", 1);
}

void f_6c9_a2_v(object a0, object a1)
{
	@SetVariable("d8q01BringBadBoy", 1);
	f_858_a0_v();
}

void f_6d2_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d8q01MatBringToy", 1);
	L0 = f_815_a0_o();
	L0->AddMark("d8q01MatGotoToyHouse", "pt_map_d8q01_toyhouse", 1, 15444, f_698_a0_f());
	f_868_a0_v();
}

void f_6e9_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat2", 1);
}

void f_6ef_a2_v(object a0, object a1)
{
	f_878_a0_v();
	f_68c_a2_b("quest_d8_01", "unlock_boiny");
}

void f_6f9_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat3", 1);
}

void f_6ff_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat4", 1);
}

void f_705_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat5", 1);
}

void f_70b_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat6", 1);
}

void f_711_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat7", 1);
}

void f_717_a2_v(object a0, object a1)
{
	@SetVariable("d8TalkToMat", 1);
}

void f_71d_a2_v(object a0, object a1)
{
	@SetVariable("d8q02", 1000);
	f_888_a0_v();
}

void f_726_a2_v(object a0, object a1)
{
	@SetVariable("d8q02", -1);
	f_898_a0_v();
}

void f_72f_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "feromicin", 1);
}

void f_735_a2_v(object a0, object a1)
{
	f_826_a3_v(f_815_a0_o(), "pt_map_d8q01_toyhouse", 2);
	a1->ShowMap(f_815_a0_o());
}

bool f_745_a1_b(object a0)
{
	if (f_680_a1_i("d8q01") == 1) {
		return true;
	}
	return false;
}

bool f_751_a1_b(object a0)
{
	if (f_680_a1_i("ood8Mat1") == 0) {
		return true;
	}
	return false;
}

bool f_75d_a1_b(object a0)
{
	if (f_680_a1_i("d8q01MatBringToy") == 1) {
		return true;
	}
	return false;
}

bool f_769_a1_b(object a0)
{
	if (f_685_a2_b(a0, "toy_horse")) {
		return true;
	}
	return false;
}

bool f_774_a1_b(object a0)
{
	if (f_680_a1_i("ood8Mat2") == 0) {
		return true;
	}
	return false;
}

bool f_780_a1_b(object a0)
{
	if (f_680_a1_i("ood8Mat3") == 0) {
		return true;
	}
	return false;
}

bool f_78c_a1_b(object a0)
{
	if (f_680_a1_i("ood8Mat4") == 0) {
		return true;
	}
	return false;
}

bool f_798_a1_b(object a0)
{
	if (f_680_a1_i("ood8Mat5") == 0) {
		return true;
	}
	return false;
}

bool f_7a4_a1_b(object a0)
{
	if (f_680_a1_i("d8q01BigVladIsVictim") == 1) {
		return true;
	}
	return false;
}

bool f_7b0_a1_b(object a0)
{
	if (f_680_a1_i("d8q01MladVladIsVictim") == 1) {
		return true;
	}
	return false;
}

bool f_7bc_a1_b(object a0)
{
	if (f_680_a1_i("ood8Mat6") == 0) {
		return true;
	}
	return false;
}

bool f_7c8_a1_b(object a0)
{
	if (f_680_a1_i("ood8Mat7") == 0) {
		return true;
	}
	return false;
}

bool f_7d4_a1_b(object a0)
{
	if (f_680_a1_i("d8q02") == 1) {
		return true;
	}
	return false;
}

bool f_7e0_a1_b(object a0)
{
	if (f_685_a2_b(a0, "feromicin")) {
		return true;
	}
	return false;
}

object f_7eb_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_7f8_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_7eb_a0_o();
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

object f_815_a0_o(void)
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

void f_826_a3_v(object a0, string a1, float a2)
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

int f_847_a0_i(void)
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

void f_858_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 179, 1, 15441);
	f_7f8_a2_b(L0, 175);
}

void f_868_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 180, 1, 15442);
	f_7f8_a2_b(L0, 175);
}

void f_878_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 181, 1, 15443);
	f_7f8_a2_b(L0, 175);
}

void f_888_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 128, 2, 13773);
	f_7f8_a2_b(L0, 127);
}

void f_898_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 129, 2, 13774);
	f_7f8_a2_b(L0, 127);
}

void f_8a8_a0_v(void)
{
	g1 = false;
}

void f_8ac_a1_v(object a0)
{
	if (f_6a6_a1_b(8)) {
		t2{a0};
		return;
	}
	f_6ac_a0_b();
}

