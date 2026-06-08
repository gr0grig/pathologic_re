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
		} while (!f_28f_a0_b());
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
		f_2e9_a1_b(f_396_a0_o());
		if (!f_294_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3ce_a0_i());
		L0->SetNPCDescription(f_3cc_a0_i());
		L0->SetPhoto(f_3d0_a0_s());
		L0->SetPhoto2(f_3d2_a0_s());
		L0->SetPlayerName(f_45d_a0_i());
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
		f_2d8_a1_v(a0);
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
			if (!f_403_a1_b(tv1) && f_40f_a1_b(tv1)) {
				f_3f2_a2_v(tv1, tv0);
				f_da_a1_v("Neutral");
				tv0->SetMessage(522023);
				tv0->ClearReplies();
				tv0->AddReply(523350, 24567, 24566);
				break;
			}
			if (!f_403_a1_b(tv1)) {
				f_da_a1_v("Neutral");
				tv0->SetMessage(522028);
				tv0->ClearReplies();
				tv0->AddReply(522029, -1, 23199);
				tv0->AddReply(522030, -1, 23200);
				break;
			}
			f_da_a1_v("Neutral");
			tv0->SetMessage(522031);
			tv0->ClearReplies();
			tv0->AddReply(522032, -1, 23202);
			if (f_41b_a1_b(tv1)) {
				tv0->AddReply(523383, -1, 24601);
			}
			break;
			return;
		}
		if (f_3d4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_373_a1_v(tv2);
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

	void f_da_a1_v(string a0)
	{
		if (!f_3d4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_37a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_38f_a0_v();
			if (a1 == 23196) {
				f_3df_a2_v(tv1, tv0);
				f_3f8_a2_v(tv1, tv0);
				f_3d6_a2_v(tv1, tv0);
			}
			if (a1 == 23199) {
				f_3df_a2_v(tv1, tv0);
				f_3f8_a2_v(tv1, tv0);
				f_3d6_a2_v(tv1, tv0);
			}
			if (a0 == 23193) {
				if (!f_403_a1_b(tv1) && f_40f_a1_b(tv1)) {
					f_3f2_a2_v(tv1, tv0);
					f_da_a1_v("Neutral");
					tv0->SetMessage(522023);
					tv0->ClearReplies();
					tv0->AddReply(523350, 24567, 24566);
					return;
				}
				if (!f_403_a1_b(tv1)) {
					f_da_a1_v("Neutral");
					tv0->SetMessage(522028);
					tv0->ClearReplies();
					tv0->AddReply(522029, -1, 23199);
					tv0->AddReply(522030, -1, 23200);
					return;
				}
				f_da_a1_v("Neutral");
				tv0->SetMessage(522031);
				tv0->ClearReplies();
				tv0->AddReply(522032, -1, 23202);
				if (f_41b_a1_b(tv1)) {
					tv0->AddReply(523383, -1, 24601);
				}
				return;
			}
			if (a0 == 24567) {
				f_da_a1_v("Neutral");
				tv0->SetMessage(523351);
				tv0->ClearReplies();
				tv0->AddReply(523352, 24569, 24568);
				tv0->AddReply(523360, 24577, 24576);
				tv0->AddReply(523369, 24586, 24585);
				return;
			}
			if (a0 == 24586) {
				f_da_a1_v("Neutral");
				tv0->SetMessage(523370);
				tv0->ClearReplies();
				tv0->AddReply(523371, 24588, 24587);
				return;
				f_da_a1_v("Neutral");
				tv0->SetMessage(523374);
				tv0->ClearReplies();
				tv0->AddReply(523375, 24582, 24592);
				return;
			}
			if (a0 == 24588) {
				f_da_a1_v("Neutral");
				tv0->SetMessage(523372);
				tv0->ClearReplies();
				tv0->AddReply(523373, 24582, 24589);
				return;
			}
			if (a0 == 24577) {
				f_da_a1_v("Neutral");
				tv0->SetMessage(523361);
				tv0->ClearReplies();
				tv0->AddReply(523362, 24579, 24578);
				return;
			}
			if (a0 == 24579) {
				f_da_a1_v("Neutral");
				tv0->SetMessage(523363);
				tv0->ClearReplies();
				tv0->AddReply(523364, 24573, 24580);
				tv0->AddReply(523365, 24582, 24581);
				return;
			}
			if (a0 == 24582) {
				f_da_a1_v("Neutral");
				tv0->SetMessage(523366);
				tv0->ClearReplies();
				tv0->AddReply(523367, 24573, 24583);
				tv0->AddReply(523368, 24573, 24584);
				return;
			}
			if (a0 == 24569) {
				f_da_a1_v("Neutral");
				tv0->SetMessage(523353);
				tv0->ClearReplies();
				tv0->AddReply(523354, 24571, 24570);
				return;
			}
			if (a0 == 24571) {
				f_da_a1_v("Neutral");
				tv0->SetMessage(523355);
				tv0->ClearReplies();
				tv0->AddReply(523356, 24573, 24572);
				return;
			}
			if (a0 == 24573) {
				f_da_a1_v("Neutral");
				tv0->SetMessage(523357);
				tv0->ClearReplies();
				tv0->AddReply(522026, -1, 23196);
				tv0->AddReply(523359, -1, 24575);
				return;
			}
			tv3 = true;
			if (f_3d4_a0_b()) {
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
	void f_24a_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		if (!f_28f_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_373_a1_v("Neutral");
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
			f_286_a1_b(a0);
			enable OnUse;
			f_24a_a1_v(a0);
		}
	}
}

bool f_27c_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_286_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_27c_a1_b(L0);
}

bool f_28f_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_294_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_39c_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_3d4_a0_b()) {
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

void f_2d8_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_3d4_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2e9_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_323_a1_b(a0)) {
			if (!f_348_a1_b(a0)) {
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
		if (!f_348_a1_b(a0)) {
			if (!f_323_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_323_a1_b(object a0)
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
	return f_380_a1_b(L4);
}

bool f_348_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_3c3_a0_i() + "m";
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
	return f_380_a1_b(L4);
}

void f_373_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_37a_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_380_a1_b(string a0)
{
	if (f_3d4_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_38f_a0_v(void)
{
	if (f_3d4_a0_b()) {
		@lshStopSpeech();
	}
}

object f_396_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_39c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3a6_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_3ab_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

bool f_3b7_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

int f_3c3_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_3cc_a0_i(void)
{
	return 515537;
}

int f_3ce_a0_i(void)
{
	return 502862;
}

string f_3d0_a0_s(void)
{
	return "ui/NPC_Julia.png";
}

string f_3d2_a0_s(void)
{
	return "ui/NPC_Julia_b.png";
}

bool f_3d4_a0_b(void)
{
	return true;
}

void f_3d6_a2_v(object a0, object a1)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	f_427_a0_v();
}

void f_3df_a2_v(object a0, object a1)
{
	@SetVariable("b11q01VictimChoosed", 1);
	@SetVariable("b11q01KillJulia", 1);
	f_3b7_a3_b("volonteers_danko", "kill", "julia");
	@Trace("Julia is dead");
}

void f_3f2_a2_v(object a0, object a1)
{
	@SetVariable("oob11Julia1", 1);
}

void f_3f8_a2_v(object a0, object a1)
{
	@SetVariable("b11q01", 2);
	f_3ab_a2_b("quest_b11_01", "open_well_exit");
}

bool f_403_a1_b(object a0)
{
	if (f_3a6_a1_i("b11q01VictimChoosed") != 0) {
		return true;
	}
	return false;
}

bool f_40f_a1_b(object a0)
{
	if (f_3a6_a1_i("oob11Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_41b_a1_b(object a0)
{
	if (f_3a6_a1_i("b11q01KillJulia") != 0) {
		return true;
	}
	return false;
}

void f_427_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 315, 1, 522057);
	f_441_a2_b(L0, 313);
}

object f_434_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_441_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_434_a0_o();
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

int f_45d_a0_i(void)
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

