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
		if (!f_259_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3dc_a0_i());
		L0->SetNPCDescription(f_3da_a0_i());
		L0->SetPhoto(f_3de_a0_s());
		L0->SetPhoto2(f_3e0_a0_s());
		L0->SetPlayerName(f_3c9_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2b0_a1_b(f_36f_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_29e_a1_v(a0);
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
			if (f_399_a1_b(tv1) && !f_3a5_a1_b(tv1) && f_3b1_a1_b(tv1)) {
				f_38d_a2_v(tv1, tv0);
				f_e3_a1_v("Neutral");
				tv0->SetMessage(524699);
				tv0->ClearReplies();
				tv0->AddReply(524700, 28105, 26039);
				tv0->AddReply(526838, 28123, 28122);
				tv0->AddReply(542096, 28125, 44396);
				break;
			}
			if (f_3a5_a1_b(tv1) && f_3bd_a1_b(tv1)) {
				f_393_a2_v(tv1, tv0);
				f_e3_a1_v("Neutral");
				tv0->SetMessage(524714);
				tv0->ClearReplies();
				tv0->AddReply(524715, 28112, 26054);
				break;
			}
			f_e3_a1_v("Neutral");
			tv0->SetMessage(526834);
			tv0->ClearReplies();
			tv0->AddReply(526835, -1, 28118);
			tv0->AddReply(526836, -1, 28119);
			break;
			return;
		}
		if (f_3e2_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_33a_a1_v(tv2);
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

	void f_e3_a1_v(string a0)
	{
		if (!f_3e2_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_34a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_368_a0_v();
			if (a0 == 26038) {
				if (f_399_a1_b(tv1) && !f_3a5_a1_b(tv1) && f_3b1_a1_b(tv1)) {
					f_38d_a2_v(tv1, tv0);
					f_e3_a1_v("Neutral");
					tv0->SetMessage(524699);
					tv0->ClearReplies();
					tv0->AddReply(524700, 28105, 26039);
					tv0->AddReply(526838, 28123, 28122);
					tv0->AddReply(542096, 28125, 44396);
					return;
				}
				if (f_3a5_a1_b(tv1) && f_3bd_a1_b(tv1)) {
					f_393_a2_v(tv1, tv0);
					f_e3_a1_v("Neutral");
					tv0->SetMessage(524714);
					tv0->ClearReplies();
					tv0->AddReply(524715, 28112, 26054);
					return;
				}
				f_e3_a1_v("Neutral");
				tv0->SetMessage(526834);
				tv0->ClearReplies();
				tv0->AddReply(526835, -1, 28118);
				tv0->AddReply(526836, -1, 28119);
				return;
			}
			if (a0 == 28112) {
				f_e3_a1_v("Smile");
				tv0->SetMessage(526830);
				tv0->ClearReplies();
				tv0->AddReply(526831, 26055, 28113);
				tv0->AddReply(526832, 26055, 28114);
				return;
			}
			if (a0 == 26055) {
				f_e3_a1_v("Smile");
				tv0->SetMessage(524716);
				tv0->ClearReplies();
				tv0->AddReply(524717, -1, 26056);
				tv0->AddReply(526829, -1, 28111);
				return;
			}
			if (a0 == 28123) {
				f_e3_a1_v("Menace");
				tv0->SetMessage(526839);
				tv0->ClearReplies();
				tv0->AddReply(526840, 28125, 28124);
				return;
			}
			if (a0 == 28125) {
				f_e3_a1_v("Menace");
				tv0->SetMessage(526841);
				tv0->ClearReplies();
				tv0->AddReply(526842, 28127, 28126);
				return;
			}
			if (a0 == 28127) {
				f_e3_a1_v("Smile");
				tv0->SetMessage(526843);
				tv0->ClearReplies();
				tv0->AddReply(526844, 28105, 28128);
				tv0->AddReply(542097, 28107, 44398);
				return;
			}
			if (a0 == 28105) {
				f_e3_a1_v("Menace");
				tv0->SetMessage(526823);
				tv0->ClearReplies();
				tv0->AddReply(526824, 28107, 28106);
				return;
			}
			if (a0 == 28107) {
				f_e3_a1_v("Menace");
				tv0->SetMessage(526825);
				tv0->ClearReplies();
				tv0->AddReply(526826, 28109, 28108);
				return;
			}
			if (a0 == 28109) {
				f_e3_a1_v("Untrust");
				tv0->SetMessage(526827);
				tv0->ClearReplies();
				tv0->AddReply(526828, -1, 28110);
				tv0->AddReply(526833, -1, 28115);
				return;
			}
			tv3 = true;
			if (f_3e2_a0_b()) {
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
		t0{a0};
	}

	void init(void)
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
			if (!L0 && f_257_a0_b()) {
				@RemoveActor(f_36f_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_257_a0_b()) {
			@RemoveActor(f_36f_a0_o());
		}
	}
}

bool f_257_a0_b(void)
{
	return true;
}

bool f_259_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_375_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_3e2_a0_b()) {
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

void f_29e_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_3e2_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2b0_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_2ea_a1_b(a0)) {
			if (!f_30f_a1_b(a0)) {
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
		if (!f_30f_a1_b(a0)) {
			if (!f_2ea_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_2ea_a1_b(object a0)
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
	return f_359_a1_b(L4);
}

bool f_30f_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_384_a0_i() + "m";
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
	return f_359_a1_b(L4);
}

void f_33a_a1_v(string a0)
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

void f_34a_a2_v(string a0, bool a1)
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

bool f_359_a1_b(string a0)
{
	if (f_3e2_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_368_a0_v(void)
{
	if (f_3e2_a0_b()) {
		@lshStopSpeech();
	}
}

object f_36f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_375_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_37f_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_384_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_38d_a2_v(object a0, object a1)
{
	@SetVariable("ook1Danko1", 1);
}

void f_393_a2_v(object a0, object a1)
{
	@SetVariable("ook1Danko2", 1);
}

bool f_399_a1_b(object a0)
{
	if (f_37f_a1_i("k1q01") == 4) {
		return true;
	}
	return false;
}

bool f_3a5_a1_b(object a0)
{
	if (f_37f_a1_i("k1q01Healed") != 0) {
		return true;
	}
	return false;
}

bool f_3b1_a1_b(object a0)
{
	if (f_37f_a1_i("ook1Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_3bd_a1_b(object a0)
{
	if (f_37f_a1_i("ook1Danko2") == 0) {
		return true;
	}
	return false;
}

int f_3c9_a0_i(void)
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

int f_3da_a0_i(void)
{
	return 515573;
}

int f_3dc_a0_i(void)
{
	return 504032;
}

string f_3de_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_3e0_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_3e2_a0_b(void)
{
	return true;
}

