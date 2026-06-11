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
		if (!f_267_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3c0_a0_i());
		L0->SetNPCDescription(f_3be_a0_i());
		L0->SetPhoto(f_3c2_a0_s());
		L0->SetPhoto2(f_3c4_a0_s());
		L0->SetPlayerName(f_3ad_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2be_a1_b(f_37d_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2ac_a1_v(a0);
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
			f_a4_a1_v("Sexy");
			tv0->SetMessage(541659);
			tv0->ClearReplies();
			if (f_3a1_a1_b(tv1)) {
				tv0->AddReply(541660, 43852, 43835);
			}
			if (f_3a1_a1_b(tv1)) {
				tv0->AddReply(541664, 43840, 43839);
			}
			if (f_3a1_a1_b(tv1)) {
				tv0->AddReply(541668, 43845, 43844);
			}
			tv0->AddReply(541661, -1, 43836);
			break;
			return;
		}
		if (f_3c6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_348_a1_v(tv2);
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

	void f_a4_a1_v(string a0)
	{
		if (!f_3c6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_358_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_376_a0_v();
			if (a1 == 43835) {
				f_39b_a2_v(tv1, tv0);
			}
			if (a1 == 43839) {
				f_39b_a2_v(tv1, tv0);
			}
			if (a1 == 43844) {
				f_39b_a2_v(tv1, tv0);
			}
			if (a0 == 43834) {
				f_a4_a1_v("Sexy");
				tv0->SetMessage(541659);
				tv0->ClearReplies();
				if (f_3a1_a1_b(tv1)) {
					tv0->AddReply(541660, 43852, 43835);
				}
				if (f_3a1_a1_b(tv1)) {
					tv0->AddReply(541664, 43840, 43839);
				}
				if (f_3a1_a1_b(tv1)) {
					tv0->AddReply(541668, 43845, 43844);
				}
				tv0->AddReply(541661, -1, 43836);
				return;
			}
			if (a0 == 43845) {
				f_a4_a1_v("Love");
				tv0->SetMessage(541669);
				tv0->ClearReplies();
				tv0->AddReply(541670, 43840, 43846);
				tv0->AddReply(541682, 43860, 43859);
				return;
			}
			if (a0 == 43860) {
				f_a4_a1_v("Love");
				tv0->SetMessage(541683);
				tv0->ClearReplies();
				tv0->AddReply(541684, 43863, 43861);
				tv0->AddReply(541685, -1, 43862);
				return;
			}
			if (a0 == 43863) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(541686);
				tv0->ClearReplies();
				tv0->AddReply(541687, -1, 43864);
				tv0->AddReply(541688, -1, 43865);
				return;
			}
			if (a0 == 43840) {
				f_a4_a1_v("Sexy");
				tv0->SetMessage(541665);
				tv0->ClearReplies();
				tv0->AddReply(541666, 43852, 43841);
				tv0->AddReply(541667, 43851, 43842);
				return;
			}
			if (a0 == 43851) {
				f_a4_a1_v("Fear");
				tv0->SetMessage(541675);
				tv0->ClearReplies();
				tv0->AddReply(541680, 43838, 43856);
				tv0->AddReply(541681, -1, 43857);
				return;
			}
			if (a0 == 43852) {
				f_a4_a1_v("Sexy");
				tv0->SetMessage(541676);
				tv0->ClearReplies();
				tv0->AddReply(541677, 43854, 43853);
				tv0->AddReply(541689, -1, 43867);
				return;
			}
			if (a0 == 43854) {
				f_a4_a1_v("Sexy");
				tv0->SetMessage(541678);
				tv0->ClearReplies();
				tv0->AddReply(541679, 43838, 43855);
				tv0->AddReply(541690, 43850, 43869);
				return;
			}
			if (a0 == 43838) {
				f_a4_a1_v("Fear");
				tv0->SetMessage(541663);
				tv0->ClearReplies();
				tv0->AddReply(541671, 43848, 43847);
				tv0->AddReply(541691, 43871, 43870);
				return;
			}
			if (a0 == 43871) {
				f_a4_a1_v("Love");
				tv0->SetMessage(541692);
				tv0->ClearReplies();
				tv0->AddReply(541694, 43875, 43873);
				tv0->AddReply(541858, 43875, 44083);
				return;
			}
			if (a0 == 43848) {
				f_a4_a1_v("Fear");
				tv0->SetMessage(541672);
				tv0->ClearReplies();
				tv0->AddReply(541673, 43875, 43849);
				tv0->AddReply(541693, 43850, 43872);
				return;
			}
			if (a0 == 43850) {
				f_a4_a1_v("Fear");
				tv0->SetMessage(541674);
				tv0->ClearReplies();
				tv0->AddReply(541698, 43875, 43879);
				tv0->AddReply(541699, -1, 43881);
				return;
			}
			if (a0 == 43875) {
				f_a4_a1_v("Love");
				tv0->SetMessage(541695);
				tv0->ClearReplies();
				tv0->AddReply(541696, -1, 43876);
				tv0->AddReply(541697, -1, 43877);
				return;
			}
			tv3 = true;
			if (f_3c6_a0_b()) {
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
		f_235_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_235_a0_v(void)
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
			if (!L0 && f_265_a0_b()) {
				@RemoveActor(f_37d_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_265_a0_b()) {
			@RemoveActor(f_37d_a0_o());
		}
	}
}

bool f_265_a0_b(void)
{
	return true;
}

bool f_267_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_383_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_3c6_a0_b()) {
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

void f_2ac_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_3c6_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2be_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_2f8_a1_b(a0)) {
			if (!f_31d_a1_b(a0)) {
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
		if (!f_31d_a1_b(a0)) {
			if (!f_2f8_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_2f8_a1_b(object a0)
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
	return f_367_a1_b(L4);
}

bool f_31d_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_392_a0_i() + "m";
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
	return f_367_a1_b(L4);
}

void f_348_a1_v(string a0)
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

void f_358_a2_v(string a0, bool a1)
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

bool f_367_a1_b(string a0)
{
	if (f_3c6_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_376_a0_v(void)
{
	if (f_3c6_a0_b()) {
		@lshStopSpeech();
	}
}

object f_37d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_383_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_38d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_392_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_39b_a2_v(object a0, object a1)
{
	@SetVariable("ood12EvaRevenant1", 1);
}

bool f_3a1_a1_b(object a0)
{
	if (f_38d_a1_i("ood12EvaRevenant1") == 0) {
		return true;
	}
	return false;
}

int f_3ad_a0_i(void)
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

int f_3be_a0_i(void)
{
	return 515533;
}

int f_3c0_a0_i(void)
{
	return 502858;
}

string f_3c2_a0_s(void)
{
	return "ui/NPC_Eva.png";
}

string f_3c4_a0_s(void)
{
	return "ui/NPC_Eva_b.png";
}

bool f_3c6_a0_b(void)
{
	return true;
}

