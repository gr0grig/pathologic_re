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
		f_2b6_a1_b(f_363_a0_o());
		if (!f_261_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3e8_a0_i());
		L0->SetNPCDescription(f_3e6_a0_i());
		L0->SetPhoto(f_3ea_a0_s());
		L0->SetPhoto2(f_3ec_a0_s());
		L0->SetPlayerName(f_3d5_a0_i());
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
		f_2a5_a1_v(a0);
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
			if (!f_399_a1_b(tv1)) {
				f_c8_a1_v("Neutral");
				tv0->SetMessage(522177);
				tv0->ClearReplies();
				if (f_3a5_a1_b(tv1)) {
					tv0->AddReply(522178, 24218, 23345);
				}
				if (f_3b1_a1_b(tv1)) {
					tv0->AddReply(523026, 24220, 24219);
				}
				if (f_3bd_a1_b(tv1)) {
					tv0->AddReply(523035, 24229, 24228);
				}
				if (f_3c9_a1_b(tv1)) {
					tv0->AddReply(523044, 24238, 24237);
				}
				tv0->AddReply(523028, -1, 24221);
				break;
			}
			f_c8_a1_v("Neutral");
			tv0->SetMessage(523163);
			tv0->ClearReplies();
			tv0->AddReply(523164, -1, 24366);
			tv0->AddReply(523174, -1, 24376);
			break;
			return;
		}
		if (f_3ee_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_340_a1_v(tv2);
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

	void f_c8_a1_v(string a0)
	{
		if (!f_3ee_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_347_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_35c_a0_v();
			if (a1 == 23345) {
				f_381_a2_v(tv1, tv0);
			}
			if (a1 == 24219) {
				f_387_a2_v(tv1, tv0);
			}
			if (a1 == 24228) {
				f_38d_a2_v(tv1, tv0);
			}
			if (a1 == 24237) {
				f_393_a2_v(tv1, tv0);
			}
			if (a0 == 23344) {
				if (!f_399_a1_b(tv1)) {
					f_c8_a1_v("Neutral");
					tv0->SetMessage(522177);
					tv0->ClearReplies();
					if (f_3a5_a1_b(tv1)) {
						tv0->AddReply(522178, 24218, 23345);
					}
					if (f_3b1_a1_b(tv1)) {
						tv0->AddReply(523026, 24220, 24219);
					}
					if (f_3bd_a1_b(tv1)) {
						tv0->AddReply(523035, 24229, 24228);
					}
					if (f_3c9_a1_b(tv1)) {
						tv0->AddReply(523044, 24238, 24237);
					}
					tv0->AddReply(523028, -1, 24221);
					return;
				}
				f_c8_a1_v("Neutral");
				tv0->SetMessage(523163);
				tv0->ClearReplies();
				tv0->AddReply(523164, -1, 24366);
				tv0->AddReply(523174, -1, 24376);
				return;
			}
			if (a0 == 24238) {
				f_c8_a1_v("Neutral");
				tv0->SetMessage(523045);
				tv0->ClearReplies();
				tv0->AddReply(523046, -1, 24239);
				return;
			}
			if (a0 == 24229) {
				f_c8_a1_v("Neutral");
				tv0->SetMessage(523036);
				tv0->ClearReplies();
				tv0->AddReply(523037, 24231, 24230);
				return;
			}
			if (a0 == 24231) {
				f_c8_a1_v("Neutral");
				tv0->SetMessage(523038);
				tv0->ClearReplies();
				tv0->AddReply(523039, 24233, 24232);
				return;
			}
			if (a0 == 24233) {
				f_c8_a1_v("Neutral");
				tv0->SetMessage(523040);
				tv0->ClearReplies();
				tv0->AddReply(523041, -1, 24234);
				return;
			}
			if (a0 == 24220) {
				f_c8_a1_v("Neutral");
				tv0->SetMessage(523027);
				tv0->ClearReplies();
				tv0->AddReply(531982, -1, 33388);
				return;
			}
			if (a0 == 24218) {
				f_c8_a1_v("Neutral");
				tv0->SetMessage(523025);
				tv0->ClearReplies();
				tv0->AddReply(523029, 24223, 24222);
				tv0->AddReply(538760, 24223, 40673);
				return;
			}
			if (a0 == 24223) {
				f_c8_a1_v("Neutral");
				tv0->SetMessage(523030);
				tv0->ClearReplies();
				tv0->AddReply(523034, 24235, 24227);
				return;
			}
			if (a0 == 24235) {
				f_c8_a1_v("Neutral");
				tv0->SetMessage(523042);
				tv0->ClearReplies();
				tv0->AddReply(523031, 24225, 24224);
				tv0->AddReply(523033, 24240, 24226);
				return;
			}
			if (a0 == 24240) {
				f_c8_a1_v("Neutral");
				tv0->SetMessage(523047);
				tv0->ClearReplies();
				tv0->AddReply(523048, -1, 24241);
				return;
			}
			if (a0 == 24225) {
				f_c8_a1_v("Neutral");
				tv0->SetMessage(523032);
				tv0->ClearReplies();
				tv0->AddReply(523043, -1, 24236);
				return;
			}
			tv3 = true;
			if (f_3ee_a0_b()) {
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
		f_22f_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_22f_a0_v(void)
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
			if (!L0 && f_25f_a0_b()) {
				@RemoveActor(f_363_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_25f_a0_b()) {
			@RemoveActor(f_363_a0_o());
		}
	}
}

bool f_25f_a0_b(void)
{
	return true;
}

bool f_261_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_369_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_3ee_a0_b()) {
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

void f_2a5_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_3ee_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2b6_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_2f0_a1_b(a0)) {
			if (!f_315_a1_b(a0)) {
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
		if (!f_315_a1_b(a0)) {
			if (!f_2f0_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_2f0_a1_b(object a0)
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
	return f_34d_a1_b(L4);
}

bool f_315_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_378_a0_i() + "m";
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
	return f_34d_a1_b(L4);
}

void f_340_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_347_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_34d_a1_b(string a0)
{
	if (f_3ee_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_35c_a0_v(void)
{
	if (f_3ee_a0_b()) {
		@lshStopSpeech();
	}
}

object f_363_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_369_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_373_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_378_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_381_a2_v(object a0, object a1)
{
	@SetVariable("oob12DankoSobor1", 1);
}

void f_387_a2_v(object a0, object a1)
{
	@SetVariable("oob12DankoSobor2", 1);
}

void f_38d_a2_v(object a0, object a1)
{
	@SetVariable("oob12DankoSobor3", 1);
}

void f_393_a2_v(object a0, object a1)
{
	@SetVariable("oob12DankoSobor4", 1);
}

bool f_399_a1_b(object a0)
{
	if (f_373_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_3a5_a1_b(object a0)
{
	if (f_373_a1_i("oob12DankoSobor1") == 0) {
		return true;
	}
	return false;
}

bool f_3b1_a1_b(object a0)
{
	if (f_373_a1_i("oob12DankoSobor2") == 0) {
		return true;
	}
	return false;
}

bool f_3bd_a1_b(object a0)
{
	if (f_373_a1_i("oob12DankoSobor3") == 0) {
		return true;
	}
	return false;
}

bool f_3c9_a1_b(object a0)
{
	if (f_373_a1_i("oob12DankoSobor4") == 0) {
		return true;
	}
	return false;
}

int f_3d5_a0_i(void)
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

int f_3e6_a0_i(void)
{
	return 515573;
}

int f_3e8_a0_i(void)
{
	return 504032;
}

string f_3ea_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_3ec_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_3ee_a0_b(void)
{
	return true;
}

