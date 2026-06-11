event OnDialogReply 11;
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
		if (!f_28c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3da_a0_i());
		L0->SetNPCDescription(f_3d8_a0_i());
		L0->SetPhoto(f_3dc_a0_s());
		L0->SetPhoto2(f_3de_a0_s());
		L0->SetPlayerName(f_469_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2e3_a1_b(f_3a2_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2d1_a1_v(a0);
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
			if (!f_40f_a1_b(tv1) && f_41b_a1_b(tv1)) {
				f_3fe_a2_v(tv1, tv0);
				f_cd_a1_v("Untrust");
				tv0->SetMessage(522023);
				tv0->ClearReplies();
				tv0->AddReply(523350, 24567, 24566);
				break;
			}
			if (!f_40f_a1_b(tv1)) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(522028);
				tv0->ClearReplies();
				tv0->AddReply(522029, -1, 23199);
				tv0->AddReply(522030, -1, 23200);
				break;
			}
			f_cd_a1_v("Neutral");
			tv0->SetMessage(522031);
			tv0->ClearReplies();
			tv0->AddReply(522032, -1, 23202);
			if (f_427_a1_b(tv1)) {
				tv0->AddReply(523383, -1, 24601);
			}
			break;
			return;
		}
		if (f_3e0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_36d_a1_v(tv2);
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

	void f_cd_a1_v(string a0)
	{
		if (!f_3e0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_37d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_39b_a0_v();
			if (a1 == 23196) {
				f_3eb_a2_v(tv1, tv0);
				f_404_a2_v(tv1, tv0);
				f_3e2_a2_v(tv1, tv0);
			}
			if (a1 == 23199) {
				f_3eb_a2_v(tv1, tv0);
				f_404_a2_v(tv1, tv0);
				f_3e2_a2_v(tv1, tv0);
			}
			if (a0 == 23193) {
				if (!f_40f_a1_b(tv1) && f_41b_a1_b(tv1)) {
					f_3fe_a2_v(tv1, tv0);
					f_cd_a1_v("Untrust");
					tv0->SetMessage(522023);
					tv0->ClearReplies();
					tv0->AddReply(523350, 24567, 24566);
					return;
				}
				if (!f_40f_a1_b(tv1)) {
					f_cd_a1_v("Neutral");
					tv0->SetMessage(522028);
					tv0->ClearReplies();
					tv0->AddReply(522029, -1, 23199);
					tv0->AddReply(522030, -1, 23200);
					return;
				}
				f_cd_a1_v("Neutral");
				tv0->SetMessage(522031);
				tv0->ClearReplies();
				tv0->AddReply(522032, -1, 23202);
				if (f_427_a1_b(tv1)) {
					tv0->AddReply(523383, -1, 24601);
				}
				return;
			}
			if (a0 == 24567) {
				f_cd_a1_v("Untrust");
				tv0->SetMessage(523351);
				tv0->ClearReplies();
				tv0->AddReply(523352, 24569, 24568);
				tv0->AddReply(523360, 24577, 24576);
				tv0->AddReply(523369, 24586, 24585);
				return;
			}
			if (a0 == 24586) {
				f_cd_a1_v("Untrust");
				tv0->SetMessage(523370);
				tv0->ClearReplies();
				tv0->AddReply(523371, 24588, 24587);
				tv0->AddReply(541842, 24591, 44060);
				return;
			}
			if (a0 == 24591) {
				f_cd_a1_v("Untrust");
				tv0->SetMessage(523374);
				tv0->ClearReplies();
				tv0->AddReply(523375, 24582, 24592);
				return;
			}
			if (a0 == 24588) {
				f_cd_a1_v("Untrust");
				tv0->SetMessage(523372);
				tv0->ClearReplies();
				tv0->AddReply(523373, 24582, 24589);
				return;
			}
			if (a0 == 24577) {
				f_cd_a1_v("Fear");
				tv0->SetMessage(523361);
				tv0->ClearReplies();
				tv0->AddReply(523362, 24579, 24578);
				return;
			}
			if (a0 == 24579) {
				f_cd_a1_v("Fear");
				tv0->SetMessage(523363);
				tv0->ClearReplies();
				tv0->AddReply(523364, 24573, 24580);
				tv0->AddReply(523365, 24582, 24581);
				return;
			}
			if (a0 == 24582) {
				f_cd_a1_v("Fear");
				tv0->SetMessage(523366);
				tv0->ClearReplies();
				tv0->AddReply(523367, 24573, 24583);
				tv0->AddReply(523368, 24573, 24584);
				return;
			}
			if (a0 == 24569) {
				f_cd_a1_v("Fear");
				tv0->SetMessage(523353);
				tv0->ClearReplies();
				tv0->AddReply(523354, 24571, 24570);
				return;
			}
			if (a0 == 24571) {
				f_cd_a1_v("Fear");
				tv0->SetMessage(523355);
				tv0->ClearReplies();
				tv0->AddReply(523356, 24573, 24572);
				return;
			}
			if (a0 == 24573) {
				f_cd_a1_v("Fear");
				tv0->SetMessage(523357);
				tv0->ClearReplies();
				tv0->AddReply(522026, -1, 23196);
				tv0->AddReply(523359, -1, 24575);
				return;
			}
			tv3 = true;
			if (f_3e0_a0_b()) {
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
	void f_245_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		if (!f_287_a0_b()) {
			@Hold();
		}
		for (; ; ) {
			f_36d_a1_v("Neutral");
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
			f_27e_a1_b(a0);
			enable OnUse;
			f_245_a1_v(a0);
		}
	}
}

bool f_274_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_27e_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_274_a1_b(L0);
}

bool f_287_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_28c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3a8_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_3e0_a0_b()) {
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

void f_2d1_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_3e0_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2e3_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_31d_a1_b(a0)) {
			if (!f_342_a1_b(a0)) {
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
		if (!f_342_a1_b(a0)) {
			if (!f_31d_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_31d_a1_b(object a0)
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
	return f_38c_a1_b(L4);
}

bool f_342_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_3cf_a0_i() + "m";
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
	return f_38c_a1_b(L4);
}

void f_36d_a1_v(string a0)
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

void f_37d_a2_v(string a0, bool a1)
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

bool f_38c_a1_b(string a0)
{
	if (f_3e0_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_39b_a0_v(void)
{
	if (f_3e0_a0_b()) {
		@lshStopSpeech();
	}
}

object f_3a2_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_3a8_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3b2_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_3b7_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

bool f_3c3_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

int f_3cf_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_3d8_a0_i(void)
{
	return 515537;
}

int f_3da_a0_i(void)
{
	return 502862;
}

string f_3dc_a0_s(void)
{
	return "ui/NPC_Julia.png";
}

string f_3de_a0_s(void)
{
	return "ui/NPC_Julia_b.png";
}

bool f_3e0_a0_b(void)
{
	return true;
}

void f_3e2_a2_v(object a0, object a1)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	f_433_a0_v();
}

void f_3eb_a2_v(object a0, object a1)
{
	@SetVariable("b11q01VictimChoosed", 1);
	@SetVariable("b11q01KillJulia", 1);
	f_3c3_a3_b("volonteers_burah", "disease", "julia");
	@Trace("Julia is diseased");
}

void f_3fe_a2_v(object a0, object a1)
{
	@SetVariable("oob11Julia1", 1);
}

void f_404_a2_v(object a0, object a1)
{
	@SetVariable("b11q01", 2);
	f_3b7_a2_b("quest_b11_01", "open_well_exit");
}

bool f_40f_a1_b(object a0)
{
	if (f_3b2_a1_i("b11q01VictimChoosed") != 0) {
		return true;
	}
	return false;
}

bool f_41b_a1_b(object a0)
{
	if (f_3b2_a1_i("oob11Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_427_a1_b(object a0)
{
	if (f_3b2_a1_i("b11q01KillJulia") != 0) {
		return true;
	}
	return false;
}

void f_433_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 315, 1, 522057);
	f_44d_a2_b(L0, 313);
}

object f_440_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_44d_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_440_a0_o();
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

int f_469_a0_i(void)
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

