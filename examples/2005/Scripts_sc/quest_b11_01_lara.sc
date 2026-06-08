event OnLoad 5;
event evt_11 11;
event OnUnload 6;
event OnUse 0;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_2c7_a0_b());
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
		f_321_a1_b(f_3ce_a0_o());
		if (!f_2cc_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_406_a0_i());
		L0->SetNPCDescription(f_404_a0_i());
		L0->SetPhoto(f_408_a0_s());
		L0->SetPhoto2(f_40a_a0_s());
		L0->SetPlayerName(f_495_a0_i());
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
		f_310_a1_v(a0);
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
			if (!f_43b_a1_b(tv1) && f_447_a1_b(tv1)) {
				f_42a_a2_v(tv1, tv0);
				f_e4_a1_v("Neutral");
				tv0->SetMessage(522012);
				tv0->ClearReplies();
				tv0->AddReply(523423, 24645, 24644);
				break;
			}
			if (!f_43b_a1_b(tv1)) {
				f_e4_a1_v("Neutral");
				tv0->SetMessage(522016);
				tv0->ClearReplies();
				tv0->AddReply(522017, -1, 23187);
				tv0->AddReply(522018, -1, 23188);
				break;
			}
			f_e4_a1_v("Neutral");
			tv0->SetMessage(522014);
			tv0->ClearReplies();
			tv0->AddReply(523455, -1, 24681);
			if (f_453_a1_b(tv1)) {
				tv0->AddReply(522015, -1, 23185);
			}
			if (f_453_a1_b(tv1)) {
				tv0->AddReply(523456, -1, 24682);
			}
			break;
			return;
		}
		if (f_40c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3ab_a1_v(tv2);
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

	void f_e4_a1_v(string a0)
	{
		if (!f_40c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3b2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_3c7_a0_v();
			if (a1 == 23190) {
				f_417_a2_v(tv1, tv0);
				f_430_a2_v(tv1, tv0);
				f_40e_a2_v(tv1, tv0);
			}
			if (a1 == 23187) {
				f_417_a2_v(tv1, tv0);
				f_430_a2_v(tv1, tv0);
				f_40e_a2_v(tv1, tv0);
			}
			if (a0 == 23182) {
				if (!f_43b_a1_b(tv1) && f_447_a1_b(tv1)) {
					f_42a_a2_v(tv1, tv0);
					f_e4_a1_v("Neutral");
					tv0->SetMessage(522012);
					tv0->ClearReplies();
					tv0->AddReply(523423, 24645, 24644);
					return;
				}
				if (!f_43b_a1_b(tv1)) {
					f_e4_a1_v("Neutral");
					tv0->SetMessage(522016);
					tv0->ClearReplies();
					tv0->AddReply(522017, -1, 23187);
					tv0->AddReply(522018, -1, 23188);
					return;
				}
				f_e4_a1_v("Neutral");
				tv0->SetMessage(522014);
				tv0->ClearReplies();
				tv0->AddReply(523455, -1, 24681);
				if (f_453_a1_b(tv1)) {
					tv0->AddReply(522015, -1, 23185);
				}
				if (f_453_a1_b(tv1)) {
					tv0->AddReply(523456, -1, 24682);
				}
				return;
			}
			if (a0 == 24645) {
				f_e4_a1_v("Neutral");
				tv0->SetMessage(523424);
				tv0->ClearReplies();
				tv0->AddReply(523425, 24647, 24646);
				tv0->AddReply(523435, 24659, 24656);
				tv0->AddReply(523444, 24669, 24668);
				return;
			}
			if (a0 == 24669) {
				f_e4_a1_v("Neutral");
				tv0->SetMessage(523445);
				tv0->ClearReplies();
				tv0->AddReply(523446, 24671, 24670);
				return;
				f_e4_a1_v("Neutral");
				tv0->SetMessage(523449);
				tv0->ClearReplies();
				tv0->AddReply(523459, 24686, 24685);
				return;
			}
			if (a0 == 24686) {
				f_e4_a1_v("Neutral");
				tv0->SetMessage(523460);
				tv0->ClearReplies();
				tv0->AddReply(523450, 24663, 24675);
				return;
			}
			if (a0 == 24671) {
				f_e4_a1_v("Neutral");
				tv0->SetMessage(523447);
				tv0->ClearReplies();
				tv0->AddReply(523457, 24684, 24683);
				return;
			}
			if (a0 == 24684) {
				f_e4_a1_v("Neutral");
				tv0->SetMessage(523458);
				tv0->ClearReplies();
				tv0->AddReply(523461, 24688, 24687);
				return;
			}
			if (a0 == 24688) {
				f_e4_a1_v("Neutral");
				tv0->SetMessage(523462);
				tv0->ClearReplies();
				tv0->AddReply(523448, 24663, 24672);
				return;
			}
			if (a0 == 24659) {
				f_e4_a1_v("Neutral");
				tv0->SetMessage(523438);
				tv0->ClearReplies();
				tv0->AddReply(523439, 24651, 24660);
				tv0->AddReply(523440, 24663, 24662);
				return;
			}
			if (a0 == 24663) {
				f_e4_a1_v("Neutral");
				tv0->SetMessage(523441);
				tv0->ClearReplies();
				tv0->AddReply(523442, 24651, 24664);
				tv0->AddReply(523443, 24651, 24666);
				return;
			}
			if (a0 == 24647) {
				f_e4_a1_v("Neutral");
				tv0->SetMessage(523426);
				tv0->ClearReplies();
				tv0->AddReply(523427, 24649, 24648);
				return;
			}
			if (a0 == 24649) {
				f_e4_a1_v("Neutral");
				tv0->SetMessage(523428);
				tv0->ClearReplies();
				tv0->AddReply(523429, 24651, 24650);
				return;
			}
			if (a0 == 24651) {
				f_e4_a1_v("Neutral");
				tv0->SetMessage(523430);
				tv0->ClearReplies();
				tv0->AddReply(522020, -1, 23190);
				tv0->AddReply(523434, -1, 24655);
				return;
			}
			tv3 = true;
			if (f_40c_a0_b()) {
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
	void f_282_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		if (!f_2c7_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_3ab_a1_v("Neutral");
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
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_2be_a1_b(a0);
			enable OnUse;
			f_282_a1_v(a0);
		}
	}
}

bool f_2b4_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_2be_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_2b4_a1_b(L0);
}

bool f_2c7_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2cc_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3d4_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_40c_a0_b()) {
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

void f_310_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_40c_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_321_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_35b_a1_b(a0)) {
			if (!f_380_a1_b(a0)) {
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
		if (!f_380_a1_b(a0)) {
			if (!f_35b_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_35b_a1_b(object a0)
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
	return f_3b8_a1_b(L4);
}

bool f_380_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_3fb_a0_i() + "m";
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
	return f_3b8_a1_b(L4);
}

void f_3ab_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_3b2_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_3b8_a1_b(string a0)
{
	if (f_40c_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_3c7_a0_v(void)
{
	if (f_40c_a0_b()) {
		@lshStopSpeech();
	}
}

object f_3ce_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_3d4_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3de_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_3e3_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

bool f_3ef_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

int f_3fb_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_404_a0_i(void)
{
	return 515541;
}

int f_406_a0_i(void)
{
	return 502866;
}

string f_408_a0_s(void)
{
	return "ui/NPC_Lara.png";
}

string f_40a_a0_s(void)
{
	return "ui/NPC_Lara_b.png";
}

bool f_40c_a0_b(void)
{
	return true;
}

void f_40e_a2_v(object a0, object a1)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	f_45f_a0_v();
}

void f_417_a2_v(object a0, object a1)
{
	@SetVariable("b11q01VictimChoosed", 1);
	@SetVariable("b11q01KillLara", 1);
	f_3ef_a3_b("volonteers_danko", "kill", "lara");
	@Trace("Lara is dead");
}

void f_42a_a2_v(object a0, object a1)
{
	@SetVariable("oob11Lara1", 1);
}

void f_430_a2_v(object a0, object a1)
{
	@SetVariable("b11q01", 2);
	f_3e3_a2_b("quest_b11_01", "open_well_exit");
}

bool f_43b_a1_b(object a0)
{
	if (f_3de_a1_i("b11q01VictimChoosed") != 0) {
		return true;
	}
	return false;
}

bool f_447_a1_b(object a0)
{
	if (f_3de_a1_i("oob11Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_453_a1_b(object a0)
{
	if (f_3de_a1_i("b11q01KillLara") != 0) {
		return true;
	}
	return false;
}

void f_45f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 315, 1, 522057);
	f_479_a2_b(L0, 313);
}

object f_46c_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_479_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_46c_a0_o();
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

int f_495_a0_i(void)
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

