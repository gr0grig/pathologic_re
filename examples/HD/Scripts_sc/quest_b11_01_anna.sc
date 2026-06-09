event evt_11 11;
event OnUnload 6;
event OnLoad 5;
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
		if (!f_2a0_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3ee_a0_i());
		L0->SetNPCDescription(f_3ec_a0_i());
		L0->SetPhoto(f_3f0_a0_s());
		L0->SetPhoto2(f_3f2_a0_s());
		L0->SetPlayerName(f_47d_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2f7_a1_b(f_3b6_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2e5_a1_v(a0);
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
			if (!f_423_a1_b(tv1) && f_42f_a1_b(tv1)) {
				f_412_a2_v(tv1, tv0);
				f_d7_a1_v("Dream");
				tv0->SetMessage(522034);
				tv0->ClearReplies();
				tv0->AddReply(523328, 24543, 24542);
				break;
			}
			if (!f_423_a1_b(tv1)) {
				f_d7_a1_v("Neutral");
				tv0->SetMessage(522039);
				tv0->ClearReplies();
				tv0->AddReply(522040, -1, 23210);
				tv0->AddReply(522041, -1, 23211);
				break;
			}
			f_d7_a1_v("Neutral");
			tv0->SetMessage(522042);
			tv0->ClearReplies();
			tv0->AddReply(522043, -1, 23213);
			if (f_43b_a1_b(tv1)) {
				tv0->AddReply(522602, -1, 23788);
			}
			if (f_43b_a1_b(tv1)) {
				tv0->AddReply(522603, -1, 23789);
			}
			break;
			return;
		}
		if (f_3f4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_381_a1_v(tv2);
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

	void f_d7_a1_v(string a0)
	{
		if (!f_3f4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_391_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_3af_a0_v();
			if (a1 == 23207) {
				f_3ff_a2_v(tv1, tv0);
				f_418_a2_v(tv1, tv0);
				f_3f6_a2_v(tv1, tv0);
			}
			if (a1 == 23210) {
				f_3ff_a2_v(tv1, tv0);
				f_418_a2_v(tv1, tv0);
				f_3f6_a2_v(tv1, tv0);
			}
			if (a0 == 23204) {
				if (!f_423_a1_b(tv1) && f_42f_a1_b(tv1)) {
					f_412_a2_v(tv1, tv0);
					f_d7_a1_v("Dream");
					tv0->SetMessage(522034);
					tv0->ClearReplies();
					tv0->AddReply(523328, 24543, 24542);
					return;
				}
				if (!f_423_a1_b(tv1)) {
					f_d7_a1_v("Neutral");
					tv0->SetMessage(522039);
					tv0->ClearReplies();
					tv0->AddReply(522040, -1, 23210);
					tv0->AddReply(522041, -1, 23211);
					return;
				}
				f_d7_a1_v("Neutral");
				tv0->SetMessage(522042);
				tv0->ClearReplies();
				tv0->AddReply(522043, -1, 23213);
				if (f_43b_a1_b(tv1)) {
					tv0->AddReply(522602, -1, 23788);
				}
				if (f_43b_a1_b(tv1)) {
					tv0->AddReply(522603, -1, 23789);
				}
				return;
			}
			if (a0 == 24543) {
				f_d7_a1_v("Dream");
				tv0->SetMessage(523329);
				tv0->ClearReplies();
				tv0->AddReply(523323, 24540, 24537);
				tv0->AddReply(523322, 24538, 24536);
				tv0->AddReply(522035, 24546, 23205);
				return;
			}
			if (a0 == 24546) {
				f_d7_a1_v("Dream");
				tv0->SetMessage(523332);
				tv0->ClearReplies();
				tv0->AddReply(523337, 24555, 24551);
				tv0->AddReply(541843, 24548, 44061);
				return;
			}
			if (a0 == 24548) {
				f_d7_a1_v("Dream");
				tv0->SetMessage(523334);
				tv0->ClearReplies();
				tv0->AddReply(523335, 24550, 24549);
				return;
			}
			if (a0 == 24555) {
				f_d7_a1_v("Dream");
				tv0->SetMessage(523340);
				tv0->ClearReplies();
				tv0->AddReply(523341, 24550, 24556);
				return;
			}
			if (a0 == 24538) {
				f_d7_a1_v("Dream");
				tv0->SetMessage(523324);
				tv0->ClearReplies();
				tv0->AddReply(523325, 23214, 24539);
				return;
			}
			if (a0 == 23214) {
				f_d7_a1_v("Dream");
				tv0->SetMessage(522044);
				tv0->ClearReplies();
				tv0->AddReply(522045, -1, 23215);
				tv0->AddReply(523321, 24550, 24535);
				return;
			}
			if (a0 == 24550) {
				f_d7_a1_v("Dream");
				tv0->SetMessage(523336);
				tv0->ClearReplies();
				tv0->AddReply(523338, -1, 24553);
				tv0->AddReply(523339, -1, 24554);
				return;
			}
			if (a0 == 24540) {
				f_d7_a1_v("Dream");
				tv0->SetMessage(523326);
				tv0->ClearReplies();
				tv0->AddReply(523327, 24544, 24541);
				return;
			}
			if (a0 == 24544) {
				f_d7_a1_v("Dream");
				tv0->SetMessage(523330);
				tv0->ClearReplies();
				tv0->AddReply(523331, 23206, 24545);
				return;
			}
			if (a0 == 23206) {
				f_d7_a1_v("Dream");
				tv0->SetMessage(522036);
				tv0->ClearReplies();
				tv0->AddReply(522037, -1, 23207);
				tv0->AddReply(522038, -1, 23208);
				return;
			}
			tv3 = true;
			if (f_3f4_a0_b()) {
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
	void f_259_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		if (!f_29b_a0_b()) {
			@Hold();
		}
		for (; ; ) {
			f_381_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void OnUnload(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_292_a1_b(a0);
			enable OnUse;
			f_259_a1_v(a0);
		}
	}
}

bool f_288_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_292_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_288_a1_b(L0);
}

bool f_29b_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2a0_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3bc_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_3f4_a0_b()) {
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

void f_2e5_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_3f4_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2f7_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_331_a1_b(a0)) {
			if (!f_356_a1_b(a0)) {
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
		if (!f_356_a1_b(a0)) {
			if (!f_331_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_331_a1_b(object a0)
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
	return f_3a0_a1_b(L4);
}

bool f_356_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_3e3_a0_i() + "m";
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
	return f_3a0_a1_b(L4);
}

void f_381_a1_v(string a0)
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

void f_391_a2_v(string a0, bool a1)
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

bool f_3a0_a1_b(string a0)
{
	if (f_3f4_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_3af_a0_v(void)
{
	if (f_3f4_a0_b()) {
		@lshStopSpeech();
	}
}

object f_3b6_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_3bc_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3c6_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_3cb_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

bool f_3d7_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

int f_3e3_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_3ec_a0_i(void)
{
	return 515530;
}

int f_3ee_a0_i(void)
{
	return 502856;
}

string f_3f0_a0_s(void)
{
	return "ui/NPC_Anna.png";
}

string f_3f2_a0_s(void)
{
	return "ui/NPC_Anna_b.png";
}

bool f_3f4_a0_b(void)
{
	return true;
}

void f_3f6_a2_v(object a0, object a1)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	f_447_a0_v();
}

void f_3ff_a2_v(object a0, object a1)
{
	@SetVariable("b11q01VictimChoosed", 1);
	@SetVariable("b11q01KillAnna", 1);
	f_3d7_a3_b("volonteers_burah", "disease", "anna");
	@Trace("Anna is diseased");
}

void f_412_a2_v(object a0, object a1)
{
	@SetVariable("oob11Anna1", 1);
}

void f_418_a2_v(object a0, object a1)
{
	@SetVariable("b11q01", 2);
	f_3cb_a2_b("quest_b11_01", "open_well_exit");
}

bool f_423_a1_b(object a0)
{
	if (f_3c6_a1_i("b11q01VictimChoosed") != 0) {
		return true;
	}
	return false;
}

bool f_42f_a1_b(object a0)
{
	if (f_3c6_a1_i("oob11Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_43b_a1_b(object a0)
{
	if (f_3c6_a1_i("b11q01KillAnna") != 0) {
		return true;
	}
	return false;
}

void f_447_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 315, 1, 522057);
	f_461_a2_b(L0, 313);
}

object f_454_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_461_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_454_a0_o();
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

int f_47d_a0_i(void)
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

