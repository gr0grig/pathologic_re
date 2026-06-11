event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnLoad 5;
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
		if (!f_2f9_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_39e_a0_i());
		L0->SetPhoto(f_3a0_a0_s());
		L0->SetPlayerName(f_38d_a0_i());
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
		f_331_a1_v(a0);
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
			if (f_375_a1_b(tv1)) {
				f_363_a2_v(tv1, tv0);
				f_36f_a2_v(tv1, tv0);
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14956);
				tv0->ClearReplies();
				tv0->AddReply(14957, 16211, 16210);
				tv0->AddReply(14975, 16231, 16230);
				tv0->AddReply(14977, 16233, 16232);
				break;
			}
			f_b0_a1_v("Neutral");
			tv0->SetMessage(14988);
			tv0->ClearReplies();
			if (f_381_a1_b(tv1)) {
				tv0->AddReply(14990, 16246, 16245);
			}
			if (f_381_a1_b(tv1)) {
				tv0->AddReply(15000, 16257, 16256);
			}
			tv0->AddReply(14989, -1, 16244);
			break;
			return;
		}
		if (f_3a2_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_335_a1_v(tv2);
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

	void f_b0_a1_v(string a0)
	{
		if (!f_3a2_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_335_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_347_a0_v();
			if (a1 == 16245) {
				f_369_a2_v(tv1, tv0);
			}
			if (a1 == 16256) {
				f_369_a2_v(tv1, tv0);
			}
			if (a0 == 16209) {
				if (f_375_a1_b(tv1)) {
					f_363_a2_v(tv1, tv0);
					f_36f_a2_v(tv1, tv0);
					f_b0_a1_v("Neutral");
					tv0->SetMessage(14956);
					tv0->ClearReplies();
					tv0->AddReply(14957, 16211, 16210);
					tv0->AddReply(14975, 16231, 16230);
					tv0->AddReply(14977, 16233, 16232);
					return;
				}
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14988);
				tv0->ClearReplies();
				if (f_381_a1_b(tv1)) {
					tv0->AddReply(14990, 16246, 16245);
				}
				if (f_381_a1_b(tv1)) {
					tv0->AddReply(15000, 16257, 16256);
				}
				tv0->AddReply(14989, -1, 16244);
				return;
			}
			if (a0 == 16257) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(15001);
				tv0->ClearReplies();
				tv0->AddReply(15002, 16251, 16258);
				tv0->AddReply(15003, 16248, 16260);
				return;
			}
			if (a0 == 16246) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14991);
				tv0->ClearReplies();
				tv0->AddReply(14992, 16248, 16247);
				tv0->AddReply(14999, 16248, 16254);
				return;
			}
			if (a0 == 16248) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14993);
				tv0->ClearReplies();
				tv0->AddReply(14994, -1, 16249);
				tv0->AddReply(14995, 16251, 16250);
				return;
			}
			if (a0 == 16251) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14996);
				tv0->ClearReplies();
				tv0->AddReply(14997, -1, 16252);
				tv0->AddReply(14998, -1, 16253);
				return;
			}
			if (a0 == 16233) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14978);
				tv0->ClearReplies();
				tv0->AddReply(14979, 16235, 16234);
				tv0->AddReply(14987, -1, 16242);
				return;
			}
			if (a0 == 16235) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14980);
				tv0->ClearReplies();
				tv0->AddReply(14981, 16237, 16236);
				tv0->AddReply(14986, -1, 16241);
				return;
			}
			if (a0 == 16237) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14982);
				tv0->ClearReplies();
				tv0->AddReply(14983, -1, 16238);
				tv0->AddReply(14984, -1, 16239);
				tv0->AddReply(14985, -1, 16240);
				return;
			}
			if (a0 == 16231) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14976);
				tv0->ClearReplies();
				return;
			}
			if (a0 == 16211) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14958);
				tv0->ClearReplies();
				tv0->AddReply(14959, 16213, 16212);
				tv0->AddReply(14974, 16213, 16228);
				return;
			}
			if (a0 == 16213) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14960);
				tv0->ClearReplies();
				tv0->AddReply(14961, 16215, 16214);
				tv0->AddReply(14973, 16215, 16226);
				return;
			}
			if (a0 == 16215) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14962);
				tv0->ClearReplies();
				tv0->AddReply(14963, 16217, 16216);
				tv0->AddReply(14968, 16222, 16221);
				return;
			}
			if (a0 == 16222) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14969);
				tv0->ClearReplies();
				tv0->AddReply(14970, -1, 16223);
				tv0->AddReply(14971, -1, 16224);
				tv0->AddReply(14972, -1, 16225);
				return;
			}
			if (a0 == 16217) {
				f_b0_a1_v("Neutral");
				tv0->SetMessage(14964);
				tv0->ClearReplies();
				tv0->AddReply(14965, -1, 16218);
				tv0->AddReply(14966, -1, 16219);
				tv0->AddReply(14967, -1, 16220);
				return;
			}
			tv3 = true;
			if (f_3a2_a0_b()) {
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

	void OnUse(object a0)
	{
		f_2ef_a0_v();
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			while (!f_2f4_a0_b()) {
				@Hold();
			}
			@Sleep(3);
			f_2aa_a0_v();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_2a8_a0_b()) {
				@RemoveActor(f_34e_a0_o());
			}
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_2a8_a0_b()) {
			@RemoveActor(f_34e_a0_o());
		}
	}
}

bool f_2a8_a0_b(void)
{
	return true;
}

void f_2aa_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_2f4_a0_b()) {
		return;
	}
	L0 = f_3ab_a0_i();
	L1 = 0;
	for (; L1 < 5 && f_2f4_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_3a4_a1_s(L3));
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

void f_2ef_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_2f4_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_2f9_a1_b(object a0)
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
	L5 = L3 * 70 + f_354_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_331_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_335_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_347_a0_v(void)
{
	if (f_3a2_a0_b()) {
		@lshStopSpeech();
	}
}

object f_34e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_354_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_35e_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_363_a2_v(object a0, object a1)
{
	@SetVariable("ood12Littleboy1", 1);
}

void f_369_a2_v(object a0, object a1)
{
	@SetVariable("ood12Littleboy2", 1);
}

void f_36f_a2_v(object a0, object a1)
{
	@SetVariable("d12q01DankoKnowHeIsToy", 1);
}

bool f_375_a1_b(object a0)
{
	if (f_35e_a1_i("ood12Littleboy1") == 0) {
		return true;
	}
	return false;
}

bool f_381_a1_b(object a0)
{
	if (f_35e_a1_i("ood12Littleboy2") == 0) {
		return true;
	}
	return false;
}

int f_38d_a0_i(void)
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

int f_39e_a0_i(void)
{
	return 3345;
}

string f_3a0_a0_s(void)
{
	return "ui/NPC_None.png";
}

bool f_3a2_a0_b(void)
{
	return false;
}

string f_3a4_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_3ab_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_3a4_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

