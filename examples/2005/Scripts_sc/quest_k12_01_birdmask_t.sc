event OnDialogReply 11;
event OnUse 0;
event OnTimer 7;

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
		if (!f_297_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_340_a0_i());
		L0->SetNPCDescription(f_33e_a0_i());
		L0->SetPhoto(f_342_a0_s());
		L0->SetPhoto2(f_344_a0_s());
		L0->SetPlayerName(f_38f_a0_i());
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
		f_2db_a1_v(a0);
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
			if (!f_35b_a1_b(tv1) && !f_365_a1_b(tv1)) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(539228);
				tv0->ClearReplies();
				if (f_37d_a1_b(tv1)) {
					tv0->AddReply(539229, 41173, 41172);
				}
				tv0->AddReply(539242, -1, 41185);
				break;
			}
			if (f_365_a1_b(tv1) && f_35b_a1_b(tv1) && f_371_a1_b(tv1)) {
				f_348_a2_v(tv1, tv0);
				f_d3_a1_v("Neutral");
				tv0->SetMessage(539243);
				tv0->ClearReplies();
				tv0->AddReply(539244, -1, 41187);
				break;
			}
			f_d3_a1_v("Neutral");
			tv0->SetMessage(539245);
			tv0->ClearReplies();
			tv0->AddReply(539246, -1, 41189);
			break;
			return;
		}
		if (f_346_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2ec_a1_v(tv2);
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
		if (!f_346_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2f3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_304_a0_v();
			if (a1 == 41172) {
				f_355_a2_v(tv1, tv0);
			}
			if (a1 == 41187) {
				f_34e_a2_v(tv1, tv0);
			}
			if (a0 == 41171) {
				if (!f_35b_a1_b(tv1) && !f_365_a1_b(tv1)) {
					f_d3_a1_v("Neutral");
					tv0->SetMessage(539228);
					tv0->ClearReplies();
					if (f_37d_a1_b(tv1)) {
						tv0->AddReply(539229, 41173, 41172);
					}
					tv0->AddReply(539242, -1, 41185);
					return;
				}
				if (f_365_a1_b(tv1) && f_35b_a1_b(tv1) && f_371_a1_b(tv1)) {
					f_348_a2_v(tv1, tv0);
					f_d3_a1_v("Neutral");
					tv0->SetMessage(539243);
					tv0->ClearReplies();
					tv0->AddReply(539244, -1, 41187);
					return;
				}
				f_d3_a1_v("Neutral");
				tv0->SetMessage(539245);
				tv0->ClearReplies();
				tv0->AddReply(539246, -1, 41189);
				return;
			}
			if (a0 == 41173) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(539230);
				tv0->ClearReplies();
				tv0->AddReply(539231, 41175, 41174);
				tv0->AddReply(539235, 41179, 41178);
				return;
			}
			if (a0 == 41179) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(539236);
				tv0->ClearReplies();
				tv0->AddReply(539237, 41181, 41180);
				tv0->AddReply(539241, -1, 41184);
				return;
			}
			if (a0 == 41181) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(539238);
				tv0->ClearReplies();
				tv0->AddReply(539239, -1, 41182);
				tv0->AddReply(539240, -1, 41183);
				return;
			}
			if (a0 == 41175) {
				f_d3_a1_v("Neutral");
				tv0->SetMessage(539232);
				tv0->ClearReplies();
				tv0->AddReply(539233, -1, 41176);
				tv0->AddReply(539234, -1, 41177);
				return;
			}
			tv3 = true;
			if (f_346_a0_b()) {
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
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;

	void init(void)
	{
		while (true) {
			f_1e5_a2_v(300, 100);
			@Sleep(1);
		}
	}

	void OnUse(object a0)
	{
		f_226_a0_v();
		t0{a0};
	}

	void f_1e5_a2_v(float a0, float a1)
	{
		if (!f_292_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_234_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_200_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_28a_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_200_a0_b()) {
				if (!tv2) {
					f_2f9_a1_v(tv4);
					tv2 = true;
				}
			} else {
				if (tv2) {
					@UnlookAsync("head");
					tv2 = false;
				}
			}
		}
	}

	void f_226_a0_v(void)
	{
		f_285_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_234_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_292_a0_b()) {
		return;
	}
	L0 = f_32d_a0_i();
	for (L1 = 0; L1 < 5 && f_292_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_326_a1_s(L3));
				@WaitForAnimEnd(L4);
				if (!L4) {
					break;
				}
			}
		} else {
			if (L2 == 1) {
				float L5;
				bool L6;
				@rand(L5, 4);
				@Sleep(L5 + 1, L6);
				if (!L6) {
					break;
				}
			} else {
				if (L1) {
					break;
				}
			}
		}
		if (!f_283_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_283_a0_b(void)
{
	return true;
}

void f_285_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_28a_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_292_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_297_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_30b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_346_a0_b()) {
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

void f_2db_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_346_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2ec_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_2f3_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_2f9_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_304_a0_v(void)
{
	if (f_346_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_30b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_315_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_31a_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_326_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_32d_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_326_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_33e_a0_i(void)
{
	return 515571;
}

int f_340_a0_i(void)
{
	return 504029;
}

string f_342_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_344_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_346_a0_b(void)
{
	return false;
}

void f_348_a2_v(object a0, object a1)
{
	@SetVariable("ook12BirdmaskT1", 1);
}

void f_34e_a2_v(object a0, object a1)
{
	f_31a_a2_b("quest_k12_01", "init_theater");
}

void f_355_a2_v(object a0, object a1)
{
	@SetVariable("ook12BirdmaskT2", 1);
}

bool f_35b_a1_b(object a0)
{
	if (f_389_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_365_a1_b(object a0)
{
	if (f_315_a1_i("k12q01ChildsAreVisited") != 0) {
		return true;
	}
	return false;
}

bool f_371_a1_b(object a0)
{
	if (f_315_a1_i("ook12BirdmaskT1") == 0) {
		return true;
	}
	return false;
}

bool f_37d_a1_b(object a0)
{
	if (f_315_a1_i("ook12BirdmaskT2") == 0) {
		return true;
	}
	return false;
}

bool f_389_a1_b(object a0)
{
	return f_48b_a0_b();
}

int f_38f_a0_i(void)
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

void f_3a0_a3_v(object a0, bool a1, int a2)
{
	a0->add(18);
	a0->add(24);
	a0->add(20);
	a0->add(14);
	if (a1 == false) {
		a0->add(10);
		a0->add(17);
		a0->add(8);
	} else {
		if (a2 != 1) {
			a0->add(10);
		}
	}
}

void f_3c1_a3_v(object a0, bool a1, int a2)
{
	a0->add(6);
	a0->add(26);
	a0->add(2);
	a0->add(22);
	if (a1 == false) {
		a0->add(15);
		a0->add(5);
		a0->add(16);
		a0->add(19);
	} else {
		if (a2 != 0) {
			a0->add(15);
		}
	}
}

void f_3e5_a3_v(object a0, bool a1, int a2)
{
	a0->add(7);
	a0->add(23);
	a0->add(21);
	a0->add(9);
	a0->add(3);
	a0->add(1);
	a0->add(11);
	a0->add(13);
	if (a1 == false) {
		a0->add(25);
	}
}

bool f_405_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_40f_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

bool f_419_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_3a0_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_40f_a1_b(L3) || f_405_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

bool f_43f_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_3c1_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_40f_a1_b(L3) || f_405_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

bool f_465_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_3e5_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_40f_a1_b(L3) || f_405_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

bool f_48b_a0_b(void)
{
	return f_465_a0_b() && f_43f_a0_b() && f_419_a0_b();
}

