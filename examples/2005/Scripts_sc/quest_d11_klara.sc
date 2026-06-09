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
		} while (!f_4af_a0_b());
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
		f_509_a1_b(f_5b6_a0_o());
		if (!f_4b4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_6dd_a0_i());
		L0->SetNPCDescription(f_6db_a0_i());
		L0->SetPhoto(f_6df_a0_s());
		L0->SetPhoto2(f_6e1_a0_s());
		L0->SetPlayerName(f_6ca_a0_i());
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
		f_4f8_a1_v(a0);
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
			if (f_67b_a1_b(tv1)) {
				f_651_a2_v(tv1, tv0);
				f_d3_a1_v("Neutral");
				tv0->SetMessage(514350);
				tv0->ClearReplies();
				tv0->AddReply(514351, 15575, 15574);
				tv0->AddReply(538680, 15575, 40578);
				break;
			}
			f_d3_a1_v("Neutral");
			tv0->SetMessage(514514);
			tv0->ClearReplies();
			if (f_657_a1_b(tv1) && f_663_a1_b(tv1)) {
				tv0->AddReply(534506, 40595, 36147);
			}
			if (f_66f_a1_b(tv1)) {
				tv0->AddReply(538711, 40619, 40618);
			}
			tv0->AddReply(514515, -1, 15754);
			tv0->AddReply(538691, -1, 40594);
			break;
			return;
		}
		if (f_6e3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_593_a1_v(tv2);
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

	void f_d3_a1_v(string a0)
	{
		if (!f_6e3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_59a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_5af_a0_v();
			if (a1 == 36147) {
				f_645_a2_v(tv1, tv0);
			}
			if (a1 == 36151) {
				f_618_a2_v(tv1, tv0);
				f_62a_a2_v(tv1, tv0);
			}
			if (a1 == 40618) {
				f_64b_a2_v(tv1, tv0);
			}
			if (a0 == 15573) {
				if (f_67b_a1_b(tv1)) {
					f_651_a2_v(tv1, tv0);
					f_d3_a1_v("Neutral");
					tv0->SetMessage(514350);
					tv0->ClearReplies();
					tv0->AddReply(514351, 15575, 15574);
					tv0->AddReply(538680, 15575, 40578);
					return;
				}
				f_d3_a1_v("Neutral");
				tv0->SetMessage(514514);
				tv0->ClearReplies();
				if (f_657_a1_b(tv1) && f_663_a1_b(tv1)) {
					tv0->AddReply(534506, 40595, 36147);
				}
				if (f_66f_a1_b(tv1)) {
					tv0->AddReply(538711, 40619, 40618);
				}
				tv0->AddReply(514515, -1, 15754);
				tv0->AddReply(538691, -1, 40594);
				return;
			}
			if (a0 == 40619) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538712);
				tv0->ClearReplies();
				tv0->AddReply(538714, 40622, 40621);
				tv0->AddReply(538713, -1, 40620);
				return;
			}
			if (a0 == 40622) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538715);
				tv0->ClearReplies();
				tv0->AddReply(538716, 40624, 40623);
				return;
			}
			if (a0 == 40624) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538717);
				tv0->ClearReplies();
				tv0->AddReply(538718, -1, 40625);
				tv0->AddReply(538719, -1, 40626);
				return;
			}
			if (a0 == 40595) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538692);
				tv0->ClearReplies();
				tv0->AddReply(538693, 40616, 40596);
				tv0->AddReply(538699, 40604, 40603);
				return;
			}
			if (a0 == 40604) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538700);
				tv0->ClearReplies();
				tv0->AddReply(538701, 40607, 40605);
				tv0->AddReply(538702, 40609, 40606);
				return;
			}
			if (a0 == 40609) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538705);
				tv0->ClearReplies();
				tv0->AddReply(538707, 40600, 40612);
				tv0->AddReply(538708, 40600, 40613);
				return;
			}
			if (a0 == 40607) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538703);
				tv0->ClearReplies();
				tv0->AddReply(538704, -1, 40608);
				tv0->AddReply(538706, 40600, 40610);
				return;
			}
			if (a0 == 40616) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538709);
				tv0->ClearReplies();
				tv0->AddReply(538710, 40597, 40617);
				return;
			}
			if (a0 == 40597) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538694);
				tv0->ClearReplies();
				tv0->AddReply(538695, 40600, 40598);
				tv0->AddReply(538696, 40600, 40599);
				return;
			}
			if (a0 == 40600) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538697);
				tv0->ClearReplies();
				tv0->AddReply(538698, 36148, 40602);
				return;
			}
			if (a0 == 36148) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(534507);
				tv0->ClearReplies();
				tv0->AddReply(534508, 36150, 36149);
				return;
			}
			if (a0 == 36150) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(534509);
				tv0->ClearReplies();
				tv0->AddReply(534510, -1, 36151);
				return;
			}
			if (a0 == 15575) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(514352);
				tv0->ClearReplies();
				tv0->AddReply(514353, 15577, 15576);
				tv0->AddReply(538679, 15579, 40577);
				return;
			}
			if (a0 == 15577) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(514354);
				tv0->ClearReplies();
				tv0->AddReply(514355, 15579, 15578);
				tv0->AddReply(538681, 15581, 40581);
				return;
			}
			if (a0 == 15579) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(514356);
				tv0->ClearReplies();
				tv0->AddReply(514357, 15581, 15580);
				return;
			}
			if (a0 == 15581) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(514358);
				tv0->ClearReplies();
				tv0->AddReply(514359, 15583, 15582);
				tv0->AddReply(538682, 15587, 40583);
				return;
			}
			if (a0 == 15583) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(514360);
				tv0->ClearReplies();
				tv0->AddReply(514361, 15585, 15584);
				return;
			}
			if (a0 == 15585) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(514362);
				tv0->ClearReplies();
				tv0->AddReply(514363, 15587, 15586);
				return;
			}
			if (a0 == 15587) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(514364);
				tv0->ClearReplies();
				tv0->AddReply(514365, 15589, 15588);
				tv0->AddReply(538683, 40586, 40585);
				tv0->AddReply(539687, 41639, 41638);
				return;
			}
			if (a0 == 41639) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(539688);
				tv0->ClearReplies();
				tv0->AddReply(539689, 15589, 41640);
				return;
			}
			if (a0 == 40586) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538684);
				tv0->ClearReplies();
				tv0->AddReply(538686, 40589, 40588);
				return;
			}
			if (a0 == 40589) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538687);
				tv0->ClearReplies();
				tv0->AddReply(538688, 40591, 40590);
				return;
			}
			if (a0 == 40591) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(538689);
				tv0->ClearReplies();
				tv0->AddReply(538690, 15589, 40592);
				tv0->AddReply(539690, -1, 41642);
				return;
			}
			if (a0 == 15589) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(514366);
				tv0->ClearReplies();
				tv0->AddReply(514367, -1, 15590);
				tv0->AddReply(538685, -1, 40587);
				return;
			}
			tv3 = true;
			if (f_6e3_a0_b()) {
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

	void f_361_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_392_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_5b6_a0_o());
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
			@RemoveActor(f_5b6_a0_o());
			@Hold();
		}
		f_403_a0_v();
	}

	void OnLoad(void)
	{
		f_412_a0_v();
	}

	void f_392_a0_v(void)
	{
		if (!f_4af_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_448_a0_v();
		}
	}

	bool f_3a6_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_4a6_a1_b(L0);
	}

	void f_3b5_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_3ba_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_494_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_3d0_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_3d9_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_3d9_a0_v();
			if (f_4af_a0_b() && f_3ba_a0_b()) {
				if (f_3a6_a0_b()) {
					f_543_a1_b(f_5b6_a0_o());
				}
			} else {
				f_3b5_a0_v();
				f_3d0_a0_v();
			}
		}
	}

	void f_403_a0_v(void)
	{
		f_48f_a0_v();
		f_3d9_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_412_a0_v(void)
	{
		@StopGroup0();
		f_3d9_a0_v();
		f_593_a1_v("Neutral");
		f_3d0_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_3d0_a0_v();
		} else {
			f_593_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_48f_a0_v();
			f_4a6_a1_b(a0);
			enable OnUse;
			f_361_a1_v(a0);
			f_593_a1_v("Neutral");
			f_3d9_a0_v();
			f_3d0_a0_v();
		}
	}
}

void f_448_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_4af_a0_b()) {
		return;
	}
	L0 = f_607_a0_i();
	for (L1 = 0; L1 < 5 && f_4af_a0_b(); L1++) {
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
			@PlayAnimation("all", f_600_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_48d_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_48d_a0_b(void)
{
	return true;
}

void f_48f_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_494_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_49c_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_4a6_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_49c_a1_b(L0);
}

bool f_4af_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_4b4_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_5bc_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_6e3_a0_b()) {
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

void f_4f8_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_6e3_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_509_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_543_a1_b(a0)) {
			if (!f_568_a1_b(a0)) {
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
		if (!f_568_a1_b(a0)) {
			if (!f_543_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_543_a1_b(object a0)
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
	return f_5a0_a1_b(L4);
}

bool f_568_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_5f7_a0_i() + "m";
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
	return f_5a0_a1_b(L4);
}

void f_593_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_59a_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_5a0_a1_b(string a0)
{
	if (f_6e3_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_5af_a0_v(void)
{
	if (f_6e3_a0_b()) {
		@lshStopSpeech();
	}
}

object f_5b6_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_5bc_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_5c6_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_5cb_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_5d7_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	} else {
		f_5cb_a2_v(L0, a2);
	}
}

void f_5ea_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_5d7_a3_v(a0, L0, a2);
}

int f_5f7_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_600_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_607_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_600_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_618_a2_v(object a0, object a1)
{
	@SetVariable("d11q06KlaraRing", 1);
	f_694_a0_v();
	@Trace("d11q06KlaraRing is given");
	f_5ea_a3_v(a0, "d11q06KlaraRing", 1);
}

void f_62a_a2_v(object a0, object a1)
{
	if (f_5c6_a1_i("d11q06KapellaRing") != 0 && f_5c6_a1_i("d11q06KlaraRing") != 0) {
		@SetVariable("d11q06", 2);
		f_687_a0_v();
	}
}

void f_645_a2_v(object a0, object a1)
{
	@SetVariable("ood11Klara2", 1);
}

void f_64b_a2_v(object a0, object a1)
{
	@SetVariable("ood11Klara3", 1);
}

void f_651_a2_v(object a0, object a1)
{
	@SetVariable("ood11Klara1", 1);
}

bool f_657_a1_b(object a0)
{
	if (f_5c6_a1_i("d11q06") == 1) {
		return true;
	}
	return false;
}

bool f_663_a1_b(object a0)
{
	if (f_5c6_a1_i("ood11Klara2") == 0) {
		return true;
	}
	return false;
}

bool f_66f_a1_b(object a0)
{
	if (f_5c6_a1_i("ood11Klara3") == 0) {
		return true;
	}
	return false;
}

bool f_67b_a1_b(object a0)
{
	if (f_5c6_a1_i("ood11Klara1") == 0) {
		return true;
	}
	return false;
}

void f_687_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 690, 2, 534538);
	f_6ae_a2_b(L0, 686);
}

void f_694_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 689, 2, 534537);
	f_6ae_a2_b(L0, 686);
}

object f_6a1_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_6ae_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_6a1_a0_o();
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

int f_6ca_a0_i(void)
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

int f_6db_a0_i(void)
{
	return 515540;
}

int f_6dd_a0_i(void)
{
	return 502865;
}

string f_6df_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

string f_6e1_a0_s(void)
{
	return "ui/NPC_Klara_b.png";
}

bool f_6e3_a0_b(void)
{
	return true;
}

