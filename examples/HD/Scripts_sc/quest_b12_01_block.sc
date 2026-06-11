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
		if (!f_29c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4a8_a0_i());
		L0->SetNPCDescription(f_4a6_a0_i());
		L0->SetPhoto(f_4aa_a0_s());
		L0->SetPhoto2(f_4ac_a0_s());
		L0->SetPlayerName(f_495_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2f3_a1_b(f_3b2_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2e1_a1_v(a0);
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
			if (!f_414_a1_b(tv1)) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(522855);
				tv0->ClearReplies();
				tv0->AddReply(523022, 24216, 24215);
				tv0->AddReply(522876, 33440, 24060);
				if (f_420_a1_b(tv1)) {
					tv0->AddReply(540014, 41986, 41985);
				}
				if (f_42c_a1_b(tv1)) {
					tv0->AddReply(522878, 33448, 24064);
				}
				tv0->AddReply(540279, 42260, 42259);
				break;
			}
			f_b9_a1_v("Neutral");
			tv0->SetMessage(523170);
			tv0->ClearReplies();
			tv0->AddReply(523172, -1, 24374);
			break;
			return;
		}
		if (f_4ae_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_37d_a1_v(tv2);
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

	void f_b9_a1_v(string a0)
	{
		if (!f_4ae_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_38d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3ab_a0_v();
			if (a1 == 24053) {
				f_3e1_a2_v(tv1, tv0);
				f_3f3_a2_v(tv1, tv0);
				f_404_a2_v(tv1, tv0);
			}
			if (a1 == 41989) {
				f_3e7_a2_v(tv1, tv0);
				f_3f3_a2_v(tv1, tv0);
				f_3fa_a2_v(tv1, tv0);
			}
			if (a1 == 24059) {
				f_3ed_a2_v(tv1, tv0);
				f_3f3_a2_v(tv1, tv0);
				f_3ff_a2_v(tv1, tv0);
			}
			if (a1 == 42261) {
				f_409_a2_v(tv1, tv0);
				f_3f3_a2_v(tv1, tv0);
				f_40f_a2_v(tv1, tv0);
			}
			if (a0 == 24039) {
				if (!f_414_a1_b(tv1)) {
					f_b9_a1_v("Neutral");
					tv0->SetMessage(522855);
					tv0->ClearReplies();
					tv0->AddReply(523022, 24216, 24215);
					tv0->AddReply(522876, 33440, 24060);
					if (f_420_a1_b(tv1)) {
						tv0->AddReply(540014, 41986, 41985);
					}
					if (f_42c_a1_b(tv1)) {
						tv0->AddReply(522878, 33448, 24064);
					}
					tv0->AddReply(540279, 42260, 42259);
					return;
				}
				f_b9_a1_v("Neutral");
				tv0->SetMessage(523170);
				tv0->ClearReplies();
				tv0->AddReply(523172, -1, 24374);
				return;
			}
			if (a0 == 42260) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(540280);
				tv0->ClearReplies();
				tv0->AddReply(540281, -1, 42261);
				return;
			}
			if (a0 == 33448) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(532048);
				tv0->ClearReplies();
				tv0->AddReply(532049, 24055, 33449);
				return;
			}
			if (a0 == 24055) {
				f_b9_a1_v("Doubt");
				tv0->SetMessage(522871);
				tv0->ClearReplies();
				tv0->AddReply(522875, -1, 24059);
				return;
			}
			if (a0 == 41986) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(540015);
				tv0->ClearReplies();
				tv0->AddReply(540016, 41988, 41987);
				return;
			}
			if (a0 == 41988) {
				f_b9_a1_v("Doubt");
				tv0->SetMessage(540017);
				tv0->ClearReplies();
				tv0->AddReply(540018, -1, 41989);
				return;
			}
			if (a0 == 33440) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(532040);
				tv0->ClearReplies();
				tv0->AddReply(532041, 41997, 33441);
				return;
			}
			if (a0 == 41997) {
				f_b9_a1_v("Doubt");
				tv0->SetMessage(540026);
				tv0->ClearReplies();
				tv0->AddReply(540027, 33442, 41998);
				return;
			}
			if (a0 == 33442) {
				f_b9_a1_v("Doubt");
				tv0->SetMessage(532042);
				tv0->ClearReplies();
				tv0->AddReply(532043, 33446, 33443);
				return;
			}
			if (a0 == 33446) {
				f_b9_a1_v("Doubt");
				tv0->SetMessage(532046);
				tv0->ClearReplies();
				tv0->AddReply(532047, 24049, 33447);
				tv0->AddReply(540114, 42082, 42081);
				return;
			}
			if (a0 == 42082) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(540115);
				tv0->ClearReplies();
				tv0->AddReply(540116, 42084, 42083);
				return;
			}
			if (a0 == 42084) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(540117);
				tv0->ClearReplies();
				tv0->AddReply(540118, 24049, 42085);
				return;
			}
			if (a0 == 24049) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(522865);
				tv0->ClearReplies();
				tv0->AddReply(522869, -1, 24053);
				return;
			}
			if (a0 == 24216) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(523023);
				tv0->ClearReplies();
				tv0->AddReply(523024, -1, 24217);
				return;
			}
			tv3 = true;
			if (f_4ae_a0_b()) {
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
		f_26a_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_26a_a0_v(void)
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
			if (!L0 && f_29a_a0_b()) {
				@RemoveActor(f_3b2_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_29a_a0_b()) {
			@RemoveActor(f_3b2_a0_o());
		}
	}
}

bool f_29a_a0_b(void)
{
	return true;
}

bool f_29c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3b8_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_4ae_a0_b()) {
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

void f_2e1_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_4ae_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2f3_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_32d_a1_b(a0)) {
			if (!f_352_a1_b(a0)) {
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
		if (!f_352_a1_b(a0)) {
			if (!f_32d_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_32d_a1_b(object a0)
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
	return f_39c_a1_b(L4);
}

bool f_352_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_3d8_a0_i() + "m";
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
	return f_39c_a1_b(L4);
}

void f_37d_a1_v(string a0)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, false);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

void f_38d_a2_v(string a0, bool a1)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, a1);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

bool f_39c_a1_b(string a0)
{
	if (f_4ae_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_3ab_a0_v(void)
{
	if (f_4ae_a0_b()) {
		@lshStopSpeech();
	}
}

object f_3b2_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_3b8_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3c2_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_3c7_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

int f_3d8_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_3e1_a2_v(object a0, object a1)
{
	@SetVariable("game_final", 1);
}

void f_3e7_a2_v(object a0, object a1)
{
	@SetVariable("game_final", 2);
}

void f_3ed_a2_v(object a0, object a1)
{
	@SetVariable("game_final", 3);
}

void f_3f3_a2_v(object a0, object a1)
{
	f_3c7_a2_v("isobor@door1", false);
}

void f_3fa_a2_v(object a0, object a1)
{
	f_45f_a0_v();
}

void f_3ff_a2_v(object a0, object a1)
{
	f_445_a0_v();
}

void f_404_a2_v(object a0, object a1)
{
	f_452_a0_v();
}

void f_409_a2_v(object a0, object a1)
{
	@SetVariable("game_final", 4);
}

void f_40f_a2_v(object a0, object a1)
{
	f_438_a0_v();
}

bool f_414_a1_b(object a0)
{
	if (f_3c2_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_420_a1_b(object a0)
{
	if (f_3c2_a1_i("b12q01DankoInSobor") != 0) {
		return true;
	}
	return false;
}

bool f_42c_a1_b(object a0)
{
	if (f_3c2_a1_i("b12q01KlaraInSobor") != 0) {
		return true;
	}
	return false;
}

void f_438_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 772, 1, 540273);
	f_479_a2_b(L0, 613);
}

void f_445_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 618, 1, 532007);
	f_479_a2_b(L0, 613);
}

void f_452_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 616, 1, 532005);
	f_479_a2_b(L0, 613);
}

void f_45f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 617, 1, 532006);
	f_479_a2_b(L0, 613);
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

int f_4a6_a0_i(void)
{
	return 515532;
}

int f_4a8_a0_i(void)
{
	return 514840;
}

string f_4aa_a0_s(void)
{
	return "ui/NPC_Block.png";
}

string f_4ac_a0_s(void)
{
	return "ui/NPC_Block_b.png";
}

bool f_4ae_a0_b(void)
{
	return true;
}

