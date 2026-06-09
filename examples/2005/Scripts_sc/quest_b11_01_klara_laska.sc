event OnLoad 5;
event evt_11 11;
event OnTrigger 26;
event OnUnload 6;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_484_a0_b());
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
		f_4de_a1_b(f_58b_a0_o());
		if (!f_489_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_5c3_a0_i());
		L0->SetNPCDescription(f_5c1_a0_i());
		L0->SetPhoto(f_5c5_a0_s());
		L0->SetPhoto2(f_5c7_a0_s());
		L0->SetPlayerName(f_637_a0_i());
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
		f_4cd_a1_v(a0);
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
			if (f_5e3_a1_b(tv1) && f_5fb_a1_b(tv1) || f_5ef_a1_b(tv1) && f_5fb_a1_b(tv1)) {
				f_5cb_a2_v(tv1, tv0);
				f_10f_a1_v("Neutral");
				tv0->SetMessage(522101);
				tv0->ClearReplies();
				tv0->AddReply(522102, 24452, 23269);
				tv0->AddReply(522103, 24448, 23270);
				break;
			}
			f_10f_a1_v("Neutral");
			tv0->SetMessage(522104);
			tv0->ClearReplies();
			if (f_5e3_a1_b(tv1) && f_5ef_a1_b(tv1) && !f_607_a1_b(tv1)) {
				tv0->AddReply(523263, 24464, 24463);
			}
			if (f_607_a1_b(tv1) && f_613_a1_b(tv1)) {
				tv0->AddReply(522105, 24443, 23272);
			}
			if (f_61f_a1_b(tv1) && f_62b_a1_b(tv1)) {
				tv0->AddReply(534577, 36216, 36215);
			}
			tv0->AddReply(523242, -1, 24442);
			break;
			return;
		}
		if (f_5c9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_568_a1_v(tv2);
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

	void f_10f_a1_v(string a0)
	{
		if (!f_5c9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_56f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_584_a0_v();
			if (a1 == 24461) {
				f_5d1_a2_v(tv1, tv0);
			}
			if (a1 == 24478) {
				f_5d1_a2_v(tv1, tv0);
			}
			if (a1 == 24467) {
				f_5d1_a2_v(tv1, tv0);
			}
			if (a1 == 24468) {
				f_5d1_a2_v(tv1, tv0);
			}
			if (a1 == 23272) {
				f_5d7_a2_v(tv1, tv0);
			}
			if (a1 == 36215) {
				f_5dd_a2_v(tv1, tv0);
			}
			if (a0 == 23268) {
				if (f_5e3_a1_b(tv1) && f_5fb_a1_b(tv1) || f_5ef_a1_b(tv1) && f_5fb_a1_b(tv1)) {
					f_5cb_a2_v(tv1, tv0);
					f_10f_a1_v("Neutral");
					tv0->SetMessage(522101);
					tv0->ClearReplies();
					tv0->AddReply(522102, 24452, 23269);
					tv0->AddReply(522103, 24448, 23270);
					return;
				}
				f_10f_a1_v("Neutral");
				tv0->SetMessage(522104);
				tv0->ClearReplies();
				if (f_5e3_a1_b(tv1) && f_5ef_a1_b(tv1) && !f_607_a1_b(tv1)) {
					tv0->AddReply(523263, 24464, 24463);
				}
				if (f_607_a1_b(tv1) && f_613_a1_b(tv1)) {
					tv0->AddReply(522105, 24443, 23272);
				}
				if (f_61f_a1_b(tv1) && f_62b_a1_b(tv1)) {
					tv0->AddReply(534577, 36216, 36215);
				}
				tv0->AddReply(523242, -1, 24442);
				return;
			}
			if (a0 == 36216) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(534578);
				tv0->ClearReplies();
				tv0->AddReply(534579, 36219, 36217);
				tv0->AddReply(534580, -1, 36218);
				return;
			}
			if (a0 == 36219) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(534581);
				tv0->ClearReplies();
				tv0->AddReply(534582, -1, 36220);
				tv0->AddReply(534583, -1, 36221);
				return;
			}
			if (a0 == 24443) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523243);
				tv0->ClearReplies();
				tv0->AddReply(523244, -1, 24444);
				tv0->AddReply(523245, 24446, 24445);
				return;
			}
			if (a0 == 24446) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523246);
				tv0->ClearReplies();
				tv0->AddReply(523247, -1, 24447);
				return;
			}
			if (a0 == 24464) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523264);
				tv0->ClearReplies();
				tv0->AddReply(523265, 24466, 24465);
				return;
			}
			if (a0 == 24466) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523266);
				tv0->ClearReplies();
				tv0->AddReply(523267, -1, 24467);
				tv0->AddReply(523268, -1, 24468);
				return;
			}
			if (a0 == 24448) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523248);
				tv0->ClearReplies();
				tv0->AddReply(523250, 24452, 24450);
				tv0->AddReply(523249, 24452, 24449);
				return;
			}
			if (a0 == 24452) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523252);
				tv0->ClearReplies();
				tv0->AddReply(523253, 24451, 24453);
				return;
			}
			if (a0 == 24451) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523251);
				tv0->ClearReplies();
				tv0->AddReply(523254, 24456, 24454);
				tv0->AddReply(523255, 24469, 24455);
				return;
			}
			if (a0 == 24469) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523269);
				tv0->ClearReplies();
				tv0->AddReply(523270, 24456, 24470);
				return;
			}
			if (a0 == 24456) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523256);
				tv0->ClearReplies();
				tv0->AddReply(523257, 24458, 24457);
				tv0->AddReply(523271, 24473, 24472);
				return;
			}
			if (a0 == 24473) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523272);
				tv0->ClearReplies();
				tv0->AddReply(523273, 24475, 24474);
				tv0->AddReply(523275, 24475, 24476);
				return;
			}
			if (a0 == 24475) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523274);
				tv0->ClearReplies();
				tv0->AddReply(523276, -1, 24478);
				tv0->AddReply(523277, -1, 24479);
				return;
			}
			if (a0 == 24458) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523258);
				tv0->ClearReplies();
				tv0->AddReply(523259, 24460, 24459);
				return;
			}
			if (a0 == 24460) {
				f_10f_a1_v("Neutral");
				tv0->SetMessage(523260);
				tv0->ClearReplies();
				tv0->AddReply(523261, -1, 24461);
				tv0->AddReply(523262, -1, 24462);
				return;
			}
			tv3 = true;
			if (f_5c9_a0_b()) {
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
	var Vector tv0;
	var bool tv1;

	void f_336_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_367_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_58b_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv1 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv1) {
			@RemoveActor(f_58b_a0_o());
			@Hold();
		}
		f_3d8_a0_v();
	}

	void OnLoad(void)
	{
		f_3e7_a0_v();
	}

	void f_367_a0_v(void)
	{
		if (!f_484_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_41d_a0_v();
		}
	}

	bool f_37b_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_47b_a1_b(L0);
	}

	void f_38a_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_38f_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_469_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_3a5_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_3ae_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_3ae_a0_v();
			if (f_484_a0_b() && f_38f_a0_b()) {
				if (f_37b_a0_b()) {
					f_518_a1_b(f_58b_a0_o());
				}
			} else {
				f_38a_a0_v();
				f_3a5_a0_v();
			}
		}
	}

	void f_3d8_a0_v(void)
	{
		f_464_a0_v();
		f_3ae_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_3e7_a0_v(void)
	{
		@StopGroup0();
		f_3ae_a0_v();
		f_568_a1_v("Neutral");
		f_3a5_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_3a5_a0_v();
		} else {
			f_568_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_464_a0_v();
			f_47b_a1_b(a0);
			enable OnUse;
			f_336_a1_v(a0);
			f_568_a1_v("Neutral");
			f_3ae_a0_v();
			f_3a5_a0_v();
		}
	}
}

void f_41d_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_484_a0_b()) {
		return;
	}
	L0 = f_5b0_a0_i();
	for (L1 = 0; L1 < 5 && f_484_a0_b(); L1++) {
		if (!L0) {
			bool L2;
			@Sleep(3, L2);
			if (!L2) {
				break;
			}
		} else {
			int L3;
			int L4;
			bool L5;
			@irand(L3, L0);
			@irand(L4, 5);
			if (L4 != 0) {
				L3 = 0;
			}
			@PlayAnimation("all", f_5a9_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_462_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_462_a0_b(void)
{
	return true;
}

void f_464_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_469_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_471_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_47b_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_471_a1_b(L0);
}

bool f_484_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_489_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_591_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_5c9_a0_b()) {
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

void f_4cd_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_5c9_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_4de_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_518_a1_b(a0)) {
			if (!f_53d_a1_b(a0)) {
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
		if (!f_53d_a1_b(a0)) {
			if (!f_518_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_518_a1_b(object a0)
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
	return f_575_a1_b(L4);
}

bool f_53d_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_5a0_a0_i() + "m";
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
	return f_575_a1_b(L4);
}

void f_568_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_56f_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_575_a1_b(string a0)
{
	if (f_5c9_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_584_a0_v(void)
{
	if (f_5c9_a0_b()) {
		@lshStopSpeech();
	}
}

object f_58b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_591_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_59b_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_5a0_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_5a9_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_5b0_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_5a9_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_5c1_a0_i(void)
{
	return 515540;
}

int f_5c3_a0_i(void)
{
	return 502865;
}

string f_5c5_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

string f_5c7_a0_s(void)
{
	return "ui/NPC_Klara_b.png";
}

bool f_5c9_a0_b(void)
{
	return true;
}

void f_5cb_a2_v(object a0, object a1)
{
	@SetVariable("oob11Klara1", 1);
}

void f_5d1_a2_v(object a0, object a1)
{
	@SetVariable("b11q01KlaraWillHelp", 1);
}

void f_5d7_a2_v(object a0, object a1)
{
	@SetVariable("oob11Klara2", 1);
}

void f_5dd_a2_v(object a0, object a1)
{
	@SetVariable("oob11Klara3", 1);
}

bool f_5e3_a1_b(object a0)
{
	if (f_59b_a1_i("b11q01") == 0) {
		return true;
	}
	return false;
}

bool f_5ef_a1_b(object a0)
{
	if (f_59b_a1_i("b11q01") == 1) {
		return true;
	}
	return false;
}

bool f_5fb_a1_b(object a0)
{
	if (f_59b_a1_i("oob11Klara1") == 0) {
		return true;
	}
	return false;
}

bool f_607_a1_b(object a0)
{
	if (f_59b_a1_i("b11q01KlaraWillHelp") != 0) {
		return true;
	}
	return false;
}

bool f_613_a1_b(object a0)
{
	if (f_59b_a1_i("oob11Klara2") == 0) {
		return true;
	}
	return false;
}

bool f_61f_a1_b(object a0)
{
	if (f_59b_a1_i("b9KlaraLetter") != 0) {
		return true;
	}
	return false;
}

bool f_62b_a1_b(object a0)
{
	if (f_59b_a1_i("oob11Klara3") == 0) {
		return true;
	}
	return false;
}

int f_637_a0_i(void)
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

