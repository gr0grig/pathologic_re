event evt_11 11;
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
		if (!f_1cb_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_42e_a0_i());
		L0->SetPhoto(f_430_a0_s());
		L0->SetPlayerName(f_2ab_a0_i());
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
		f_203_a1_v(a0);
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
			if (f_294_a1_b(tv1)) {
				f_25b_a2_v(tv1, tv0);
				f_a1_a1_v("Neutral");
				tv0->SetMessage(14075);
				tv0->ClearReplies();
				tv0->AddReply(14076, 15314, 15313);
				break;
			}
			f_a1_a1_v("Neutral");
			tv0->SetMessage(14079);
			tv0->ClearReplies();
			if (f_27e_a1_b(tv1)) {
				tv0->AddReply(14080, 15318, 15317);
			}
			if (f_289_a1_b(tv1)) {
				tv0->AddReply(14110, 15326, 15325);
			}
			tv0->AddReply(14082, -1, 15319);
			break;
			return;
		}
		if (f_432_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_207_a1_v(tv2);
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

	void f_a1_a1_v(string a0)
	{
		if (!f_432_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_207_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_219_a0_v();
			if (a1 == 15324) {
				f_26d_a2_v(tv1, tv0);
				f_273_a2_v(tv1, tv0);
				f_255_a2_v(tv1, tv0);
			}
			if (a1 == 15327) {
				f_267_a2_v(tv1, tv0);
				f_273_a2_v(tv1, tv0);
				f_255_a2_v(tv1, tv0);
			}
			if (a0 == 15312) {
				if (f_294_a1_b(tv1)) {
					f_25b_a2_v(tv1, tv0);
					f_a1_a1_v("Neutral");
					tv0->SetMessage(14075);
					tv0->ClearReplies();
					tv0->AddReply(14076, 15314, 15313);
					return;
				}
				f_a1_a1_v("Neutral");
				tv0->SetMessage(14079);
				tv0->ClearReplies();
				if (f_27e_a1_b(tv1)) {
					tv0->AddReply(14080, 15318, 15317);
				}
				if (f_289_a1_b(tv1)) {
					tv0->AddReply(14110, 15326, 15325);
				}
				tv0->AddReply(14082, -1, 15319);
				return;
			}
			if (a0 == 15326) {
				f_a1_a1_v("Neutral");
				tv0->SetMessage(14111);
				tv0->ClearReplies();
				tv0->AddReply(14112, -1, 15327);
				return;
			}
			if (a0 == 15318) {
				f_a1_a1_v("Neutral");
				tv0->SetMessage(14081);
				tv0->ClearReplies();
				tv0->AddReply(14109, -1, 15324);
				return;
			}
			if (a0 == 15314) {
				f_a1_a1_v("Neutral");
				tv0->SetMessage(14077);
				tv0->ClearReplies();
				tv0->AddReply(14078, -1, 15315);
				return;
			}
			tv3 = true;
			if (f_432_a0_b()) {
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
	void init(void)
	{
		for (; ; ) {
			@Sleep(3);
			f_181_a0_v();
		}
	}

	void OnUse(object a0)
	{
		string L0;
		@GetProperty("npc", L0);
		@Trace(L0);
		@Trace(f_2bc_a1_i(L0));
		if (f_424_a1_b(f_2bc_a1_i(L0))) {
			t0{a0};
		}
	}
}

void f_181_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1c6_a0_b()) {
		return;
	}
	L0 = f_244_a0_i();
	L1 = 0;
	for (; L1 < 5 && f_1c6_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_23d_a1_s(L3));
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
				continue;
			}
			if (L1) {
				break;
			}
		}
	}
}

bool f_1c6_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1cb_a1_b(object a0)
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
	L5 = L3 * 70 + f_220_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_203_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_207_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_219_a0_v(void)
{
	if (f_432_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_220_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_22a_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_231_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

string f_23d_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_244_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_23d_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_255_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_25b_a2_v(object a0, object a1)
{
	string L0;
	@GetProperty("npc", L0);
	@SetVariable("oo" + L0 + "1", 1);
}

void f_267_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "powder", 1);
}

void f_26d_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "burah_serum", 1);
}

void f_273_a2_v(object a0, object a1)
{
	string L0;
	@GetProperty("npc", L0);
	f_231_a3_b("volonteers_danko", "rescue", L0);
}

bool f_27e_a1_b(object a0)
{
	if (f_22a_a2_b(a0, "burah_serum")) {
		return true;
	}
	return false;
}

bool f_289_a1_b(object a0)
{
	if (f_22a_a2_b(a0, "powder")) {
		return true;
	}
	return false;
}

bool f_294_a1_b(object a0)
{
	if (f_29e_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_29e_a1_b(object a0)
{
	string L0;
	int L1;
	@GetProperty("npc", L0);
	@GetVariable("oo" + L0 + "1", L1);
	return L1 == 0;
}

int f_2ab_a0_i(void)
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

int f_2bc_a1_i(string a0)
{
	@_strlwr(a0);
	if (a0 == "alexandr") {
		return 1;
	}
	if (a0 == "andrei") {
		return 2;
	}
	if (a0 == "anna") {
		return 3;
	}
	if (a0 == "bigvlad") {
		return 4;
	}
	if (a0 == "eva") {
		return 5;
	}
	if (a0 == "georg") {
		return 6;
	}
	if (a0 == "grif") {
		return 7;
	}
	if (a0 == "han") {
		return 8;
	}
	if (a0 == "julia") {
		return 9;
	}
	if (a0 == "kapella") {
		return 10;
	}
	if (a0 == "katerina") {
		return 11;
	}
	if (a0 == "klara") {
		return 12;
	}
	if (a0 == "lara") {
		return 13;
	}
	if (a0 == "laska") {
		return 14;
	}
	if (a0 == "maria") {
		return 15;
	}
	if (a0 == "mark") {
		return 16;
	}
	if (a0 == "mat") {
		return 17;
	}
	if (a0 == "mishka") {
		return 18;
	}
	if (a0 == "mladvlad") {
		return 19;
	}
	if (a0 == "notkin") {
		return 20;
	}
	if (a0 == "ospina") {
		return 21;
	}
	if (a0 == "petr") {
		return 22;
	}
	if (a0 == "rubin") {
		return 23;
	}
	if (a0 == "spi4ka") {
		return 24;
	}
	if (a0 == "starshina") {
		return 25;
	}
	if (a0 == "viktor") {
		return 26;
	}
	if (a0 == "wasted_woman") {
		return 27;
	}
	if (a0 == "wasted_male") {
		return 28;
	}
	if (a0 == "alkash") {
		return 29;
	}
	if (a0 == "boy") {
		return 30;
	}
	if (a0 == "girl") {
		return 31;
	}
	if (a0 == "littleboy") {
		return 32;
	}
	if (a0 == "littlegirl") {
		return 33;
	}
	if (a0 == "butcher") {
		return 34;
	}
	if (a0 == "dohodyaga") {
		return 35;
	}
	if (a0 == "unosha") {
		return 36;
	}
	if (a0 == "vaxxabit") {
		return 37;
	}
	if (a0 == "vaxxabitka") {
		return 38;
	}
	if (a0 == "woman") {
		return 39;
	}
	if (a0 == "worker") {
		return 40;
	}
	if (a0 == "whitemask") {
		return 42;
	}
	if (a0 == "birdmask") {
		return 43;
	}
	if (a0 == "birdmask") {
		return 44;
	}
	if (a0 == "patrol") {
		return 46;
	}
	if (a0 == "danko") {
		return 47;
	}
	if (a0 == "alkash_d") {
		return 48;
	}
	if (a0 == "boy_d") {
		return 49;
	}
	if (a0 == "butcher_d") {
		return 50;
	}
	if (a0 == "dohodyaga_d") {
		return 51;
	}
	if (a0 == "girl_d") {
		return 52;
	}
	if (a0 == "littleboy_d") {
		return 53;
	}
	if (a0 == "littlegirl_d") {
		return 54;
	}
	if (a0 == "unosha2") {
		return 55;
	}
	if (a0 == "unosha_d") {
		return 56;
	}
	if (a0 == "unosha2_d") {
		return 57;
	}
	if (a0 == "vaxxabit_d") {
		return 58;
	}
	if (a0 == "vaxxabitka_d") {
		return 59;
	}
	if (a0 == "wasted_male_d") {
		return 60;
	}
	if (a0 == "wasted_woman_d") {
		return 61;
	}
	if (a0 == "woman_d") {
		return 62;
	}
	if (a0 == "worker2") {
		return 63;
	}
	if (a0 == "worker_d") {
		return 64;
	}
	if (a0 == "worker2_d") {
		return 65;
	}
	if (a0 == "burah") {
		return 66;
	}
	if (a0 == "gorbun_daughter") {
		return 67;
	}
	if (a0 == "gorbun") {
		return 68;
	}
	if (a0 == "albinos") {
		return 69;
	}
	if (a0 == "aglaja") {
		return 70;
	}
	if (a0 == "nude") {
		return 71;
	}
	if (a0 == "block") {
		return 72;
	}
	if (a0 == "officer") {
		return 73;
	}
	return -1;
}

bool f_424_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

int f_42e_a0_i(void)
{
	return 4029;
}

string f_430_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_432_a0_b(void)
{
	return false;
}

