event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnUnload 6;
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
		if (!f_38c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4c7_a0_i());
		L0->SetNPCDescription(f_4c5_a0_i());
		L0->SetPhoto(f_4c9_a0_s());
		L0->SetPhoto2(f_4cb_a0_s());
		L0->SetPlayerName(f_4b4_a0_i());
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
		f_3d1_a1_v(a0);
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
			if (f_455_a1_b(tv1)) {
				f_449_a2_v(tv1, tv0);
				f_429_a2_v(tv1, tv0);
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514956);
				tv0->ClearReplies();
				tv0->AddReply(514957, 16211, 16210);
				tv0->AddReply(514975, 42184, 16230);
				tv0->AddReply(514977, 16233, 16232);
				break;
			}
			f_bb_a1_v("Neutral");
			tv0->SetMessage(514988);
			tv0->ClearReplies();
			if (f_461_a1_b(tv1)) {
				tv0->AddReply(514990, 16246, 16245);
			}
			if (f_461_a1_b(tv1)) {
				tv0->AddReply(515000, 16257, 16256);
			}
			tv0->AddReply(514989, -1, 16244);
			break;
			return;
		}
		if (f_4cd_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3e3_a1_v(tv2);
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

	void f_bb_a1_v(string a0)
	{
		if (!f_4cd_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3f3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_40d_a0_v();
			if (a1 == 16245) {
				f_44f_a2_v(tv1, tv0);
			}
			if (a1 == 16256) {
				f_44f_a2_v(tv1, tv0);
			}
			if (a0 == 16209) {
				if (f_455_a1_b(tv1)) {
					f_449_a2_v(tv1, tv0);
					f_429_a2_v(tv1, tv0);
					f_bb_a1_v("Neutral");
					tv0->SetMessage(514956);
					tv0->ClearReplies();
					tv0->AddReply(514957, 16211, 16210);
					tv0->AddReply(514975, 42184, 16230);
					tv0->AddReply(514977, 16233, 16232);
					return;
				}
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514988);
				tv0->ClearReplies();
				if (f_461_a1_b(tv1)) {
					tv0->AddReply(514990, 16246, 16245);
				}
				if (f_461_a1_b(tv1)) {
					tv0->AddReply(515000, 16257, 16256);
				}
				tv0->AddReply(514989, -1, 16244);
				return;
			}
			if (a0 == 16257) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(515001);
				tv0->ClearReplies();
				tv0->AddReply(515002, 16251, 16258);
				tv0->AddReply(515003, 16248, 16260);
				return;
			}
			if (a0 == 16246) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514991);
				tv0->ClearReplies();
				tv0->AddReply(514992, 16248, 16247);
				tv0->AddReply(514999, 16248, 16254);
				return;
			}
			if (a0 == 16248) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514993);
				tv0->ClearReplies();
				tv0->AddReply(514994, -1, 16249);
				tv0->AddReply(514995, 16251, 16250);
				return;
			}
			if (a0 == 16251) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514996);
				tv0->ClearReplies();
				tv0->AddReply(514997, -1, 16252);
				tv0->AddReply(514998, -1, 16253);
				return;
			}
			if (a0 == 16233) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514978);
				tv0->ClearReplies();
				tv0->AddReply(514979, 16235, 16234);
				tv0->AddReply(514987, 16215, 16242);
				return;
			}
			if (a0 == 16235) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514980);
				tv0->ClearReplies();
				tv0->AddReply(514981, 16237, 16236);
				tv0->AddReply(514986, 16213, 16241);
				return;
			}
			if (a0 == 16237) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514982);
				tv0->ClearReplies();
				tv0->AddReply(514983, -1, 16238);
				tv0->AddReply(514984, -1, 16239);
				return;
			}
			if (a0 == 42184) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(540206);
				tv0->ClearReplies();
				tv0->AddReply(540207, 42186, 42185);
				return;
			}
			if (a0 == 42186) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(540208);
				tv0->ClearReplies();
				tv0->AddReply(540209, 16233, 42187);
				return;
			}
			if (a0 == 16211) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514958);
				tv0->ClearReplies();
				tv0->AddReply(514959, 16213, 16212);
				tv0->AddReply(514974, 16213, 16228);
				return;
			}
			if (a0 == 16213) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514960);
				tv0->ClearReplies();
				tv0->AddReply(514961, 16215, 16214);
				tv0->AddReply(514973, 16215, 16226);
				return;
			}
			if (a0 == 16215) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514962);
				tv0->ClearReplies();
				tv0->AddReply(514963, 16217, 16216);
				tv0->AddReply(514968, 16222, 16221);
				return;
			}
			if (a0 == 16222) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514969);
				tv0->ClearReplies();
				tv0->AddReply(514970, -1, 16223);
				tv0->AddReply(514971, -1, 16224);
				tv0->AddReply(514972, -1, 16225);
				return;
			}
			if (a0 == 16217) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(514964);
				tv0->ClearReplies();
				tv0->AddReply(514965, -1, 16218);
				tv0->AddReply(514966, -1, 16219);
				tv0->AddReply(514967, -1, 16220);
				return;
			}
			tv3 = true;
			if (f_4cd_a0_b()) {
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
	var bool tv5;
	var bool tv6;

	void init(void)
	{
		f_295_a2_v(300, 100);
	}

	void OnUse(object a0)
	{
		f_31b_a0_v();
		t0{a0};
	}

	void f_295_a2_v(float a0, float a1)
	{
		tv6 = false;
		for (; ; ) {
			float L0;
			bool L1;
			@rand(L0, 3);
			@Sleep(L0 + 3, L1);
			tv6 = true;
			f_2da_a2_v(a0, a1);
			tv6 = false;
		}
	}

	void f_2a7_a0_v(void)
	{
		tv5 = true;
		if (!f_387_a0_b() && f_2d8_a0_b()) {
			@RemoveActor(f_414_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_2a7_a0_v();
		}
	}

	void OnUnload(void)
	{
		if (tv6) {
			f_31b_a0_v();
		}
		if (tv5 && f_2d8_a0_b()) {
			@RemoveActor(f_414_a0_o());
		}
	}

	bool f_2d8_a0_b(void)
	{
		return true;
	}

	void f_2da_a2_v(float a0, float a1)
	{
		if (!f_387_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_329_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_2f5_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_37f_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_2f5_a0_b()) {
				if (!tv2) {
					f_402_a1_v(tv4);
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

	void f_31b_a0_v(void)
	{
		f_37a_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}
}

void f_329_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_387_a0_b()) {
		return;
	}
	L0 = f_4d6_a0_i();
	for (L1 = 0; L1 < 5 && f_387_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_4cf_a1_s(L3));
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
		if (!f_378_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_378_a0_b(void)
{
	return true;
}

void f_37a_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_37f_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_387_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_38c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_41a_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_4cd_a0_b()) {
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

void f_3d1_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_4cd_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_3e3_a1_v(string a0)
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

void f_3f3_a2_v(string a0, bool a1)
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

void f_402_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_40d_a0_v(void)
{
	if (f_4cd_a0_b()) {
		@lshStopSpeech();
	}
}

object f_414_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_41a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_424_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_429_a2_v(object a0, object a1)
{
	if (f_424_a1_i("D_Mission5") == 0) {
		@SetVariable("D_Mission5", 1);
		f_46d_a0_v();
		f_4a3_a1_b(30);
		f_4a3_a1_b(3);
		f_4a3_a1_b(4);
		f_4a3_a1_b(5);
	}
}

void f_449_a2_v(object a0, object a1)
{
	@SetVariable("ood12Littleboy1", 1);
}

void f_44f_a2_v(object a0, object a1)
{
	@SetVariable("ood12Littleboy2", 1);
}

bool f_455_a1_b(object a0)
{
	if (f_424_a1_i("ood12Littleboy1") == 0) {
		return true;
	}
	return false;
}

bool f_461_a1_b(object a0)
{
	if (f_424_a1_i("ood12Littleboy2") == 0) {
		return true;
	}
	return false;
}

void f_46d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 561, 0, 530575);
	f_487_a2_b(L0, -1);
}

object f_47a_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_487_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_47a_a0_o();
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

bool f_4a3_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_47a_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

int f_4b4_a0_i(void)
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

int f_4c5_a0_i(void)
{
	return 515560;
}

int f_4c7_a0_i(void)
{
	return 503345;
}

string f_4c9_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_4cb_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_4cd_a0_b(void)
{
	return false;
}

string f_4cf_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_4d6_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_4cf_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

