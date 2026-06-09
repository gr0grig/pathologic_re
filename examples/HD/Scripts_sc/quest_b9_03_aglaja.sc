event evt_11 11;
event OnTrigger 26;
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
		if (!f_239_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_36f_a0_i());
		L0->SetNPCDescription(f_36d_a0_i());
		L0->SetPhoto(f_371_a0_s());
		L0->SetPhoto2(f_373_a0_s());
		L0->SetPlayerName(f_389_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_290_a1_b(f_34f_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_27e_a1_v(a0);
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
			if (!f_37d_a1_b(tv1)) {
				f_377_a2_v(tv1, tv0);
				f_aa_a1_v("Isee");
				tv0->SetMessage(530278);
				tv0->ClearReplies();
				tv0->AddReply(530919, 32247, 32246);
				tv0->AddReply(530923, 32251, 32250);
				break;
			}
			f_aa_a1_v("Neutral");
			tv0->SetMessage(530288);
			tv0->ClearReplies();
			tv0->AddReply(530289, -1, 31677);
			tv0->AddReply(530918, -1, 32245);
			break;
			return;
		}
		if (f_375_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_31a_a1_v(tv2);
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

	void f_aa_a1_v(string a0)
	{
		if (!f_375_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_32a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_348_a0_v();
			if (a0 == 31666) {
				if (!f_37d_a1_b(tv1)) {
					f_377_a2_v(tv1, tv0);
					f_aa_a1_v("Isee");
					tv0->SetMessage(530278);
					tv0->ClearReplies();
					tv0->AddReply(530919, 32247, 32246);
					tv0->AddReply(530923, 32251, 32250);
					return;
				}
				f_aa_a1_v("Neutral");
				tv0->SetMessage(530288);
				tv0->ClearReplies();
				tv0->AddReply(530289, -1, 31677);
				tv0->AddReply(530918, -1, 32245);
				return;
			}
			if (a0 == 32251) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(530924);
				tv0->ClearReplies();
				tv0->AddReply(530926, 32247, 32253);
				tv0->AddReply(530925, 32247, 32252);
				return;
			}
			if (a0 == 32247) {
				f_aa_a1_v("Isee");
				tv0->SetMessage(530920);
				tv0->ClearReplies();
				tv0->AddReply(530921, 32249, 32248);
				tv0->AddReply(531006, -1, 32333);
				return;
			}
			if (a0 == 32249) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(530922);
				tv0->ClearReplies();
				tv0->AddReply(530279, 31668, 31667);
				tv0->AddReply(531005, 32334, 32332);
				return;
			}
			if (a0 == 32334) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531007);
				tv0->ClearReplies();
				tv0->AddReply(531008, 31668, 32335);
				return;
			}
			if (a0 == 31668) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(530280);
				tv0->ClearReplies();
				tv0->AddReply(531011, 32340, 32339);
				tv0->AddReply(531009, 32338, 32337);
				return;
			}
			if (a0 == 32338) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531010);
				tv0->ClearReplies();
				tv0->AddReply(531013, 32340, 32341);
				tv0->AddReply(531014, -1, 32342);
				return;
			}
			if (a0 == 32340) {
				f_aa_a1_v("Threat");
				tv0->SetMessage(531012);
				tv0->ClearReplies();
				tv0->AddReply(530281, 31670, 31669);
				tv0->AddReply(531016, -1, 32345);
				return;
			}
			if (a0 == 31670) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(530282);
				tv0->ClearReplies();
				tv0->AddReply(530283, -1, 31671);
				tv0->AddReply(531015, 32346, 32344);
				return;
			}
			if (a0 == 32346) {
				f_aa_a1_v("Neutral");
				tv0->SetMessage(531017);
				tv0->ClearReplies();
				tv0->AddReply(531018, -1, 32347);
				tv0->AddReply(531019, -1, 32348);
				return;
			}
			tv3 = true;
			if (f_375_a0_b()) {
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

	void f_1d3_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		if (!f_234_a0_b()) {
			@Hold();
		}
		for (; ; ) {
			f_31a_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_34f_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0) {
			@RemoveActor(f_34f_a0_o());
			@Hold();
		}
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_22b_a1_b(a0);
			enable OnUse;
			f_1d3_a1_v(a0);
		}
	}
}

bool f_221_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_22b_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_221_a1_b(L0);
}

bool f_234_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_239_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_355_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_375_a0_b()) {
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

void f_27e_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_375_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_290_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_2ca_a1_b(a0)) {
			if (!f_2ef_a1_b(a0)) {
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
		if (!f_2ef_a1_b(a0)) {
			if (!f_2ca_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_2ca_a1_b(object a0)
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
	return f_339_a1_b(L4);
}

bool f_2ef_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_364_a0_i() + "m";
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
	return f_339_a1_b(L4);
}

void f_31a_a1_v(string a0)
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

void f_32a_a2_v(string a0, bool a1)
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

bool f_339_a1_b(string a0)
{
	if (f_375_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_348_a0_v(void)
{
	if (f_375_a0_b()) {
		@lshStopSpeech();
	}
}

object f_34f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_355_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_35f_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_364_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_36d_a0_i(void)
{
	return 515527;
}

int f_36f_a0_i(void)
{
	return 513334;
}

string f_371_a0_s(void)
{
	return "ui/NPC_Aglaja.png";
}

string f_373_a0_s(void)
{
	return "ui/NPC_Aglaja_b.png";
}

bool f_375_a0_b(void)
{
	return true;
}

void f_377_a2_v(object a0, object a1)
{
	@SetVariable("b9q03AglajaTalk", 1);
}

bool f_37d_a1_b(object a0)
{
	if (f_35f_a1_i("b9q03AglajaTalk") != 0) {
		return true;
	}
	return false;
}

int f_389_a0_i(void)
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

