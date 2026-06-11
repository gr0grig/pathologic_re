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
		if (!f_27f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3f6_a0_i());
		L0->SetNPCDescription(f_3f4_a0_i());
		L0->SetPhoto(f_3f8_a0_s());
		L0->SetPhoto2(f_3fa_a0_s());
		L0->SetPlayerName(f_3e3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2d6_a1_b(f_395_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2c4_a1_v(a0);
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
			if (!f_3bf_a1_b(tv1)) {
				f_b4_a1_v("Saveyouall");
				tv0->SetMessage(540282);
				tv0->ClearReplies();
				if (f_3cb_a1_b(tv1)) {
					tv0->AddReply(540283, 42264, 42263);
				}
				if (f_3d7_a1_b(tv1)) {
					tv0->AddReply(540296, 42278, 42277);
				}
				tv0->AddReply(540305, -1, 42286);
				break;
			}
			f_b4_a1_v("Neutral");
			tv0->SetMessage(541639);
			tv0->ClearReplies();
			tv0->AddReply(541640, -1, 43812);
			tv0->AddReply(541641, -1, 43813);
			break;
			return;
		}
		if (f_3fc_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_360_a1_v(tv2);
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

	void f_b4_a1_v(string a0)
	{
		if (!f_3fc_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_370_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_38e_a0_v();
			if (a1 == 42263) {
				f_3b3_a2_v(tv1, tv0);
			}
			if (a1 == 42277) {
				f_3b9_a2_v(tv1, tv0);
			}
			if (a0 == 42262) {
				if (!f_3bf_a1_b(tv1)) {
					f_b4_a1_v("Saveyouall");
					tv0->SetMessage(540282);
					tv0->ClearReplies();
					if (f_3cb_a1_b(tv1)) {
						tv0->AddReply(540283, 42264, 42263);
					}
					if (f_3d7_a1_b(tv1)) {
						tv0->AddReply(540296, 42278, 42277);
					}
					tv0->AddReply(540305, -1, 42286);
					return;
				}
				f_b4_a1_v("Neutral");
				tv0->SetMessage(541639);
				tv0->ClearReplies();
				tv0->AddReply(541640, -1, 43812);
				tv0->AddReply(541641, -1, 43813);
				return;
			}
			if (a0 == 42278) {
				f_b4_a1_v("Saveyouall");
				tv0->SetMessage(540297);
				tv0->ClearReplies();
				tv0->AddReply(540298, 42280, 42279);
				tv0->AddReply(540479, 42283, 42474);
				return;
			}
			if (a0 == 42280) {
				f_b4_a1_v("Smile");
				tv0->SetMessage(540299);
				tv0->ClearReplies();
				tv0->AddReply(540300, 42476, 42281);
				tv0->AddReply(540301, 42283, 42282);
				return;
			}
			if (a0 == 42283) {
				f_b4_a1_v("Saveyouall");
				tv0->SetMessage(540302);
				tv0->ClearReplies();
				tv0->AddReply(540303, 42476, 42284);
				tv0->AddReply(540304, 42478, 42285);
				return;
			}
			if (a0 == 42478) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(540481);
				tv0->ClearReplies();
				tv0->AddReply(540482, -1, 42479);
				tv0->AddReply(540483, 42476, 42480);
				return;
			}
			if (a0 == 42476) {
				f_b4_a1_v("Fear");
				tv0->SetMessage(540480);
				tv0->ClearReplies();
				tv0->AddReply(540484, -1, 42482);
				tv0->AddReply(540485, 42484, 42483);
				return;
			}
			if (a0 == 42484) {
				f_b4_a1_v("Fear");
				tv0->SetMessage(540486);
				tv0->ClearReplies();
				tv0->AddReply(540487, -1, 42485);
				tv0->AddReply(540488, -1, 42486);
				return;
			}
			if (a0 == 42264) {
				f_b4_a1_v("Saveyouall");
				tv0->SetMessage(540284);
				tv0->ClearReplies();
				tv0->AddReply(540285, 42266, 42265);
				tv0->AddReply(540489, 42266, 42487);
				return;
			}
			if (a0 == 42266) {
				f_b4_a1_v("Saveyouall");
				tv0->SetMessage(540286);
				tv0->ClearReplies();
				tv0->AddReply(540287, 42268, 42267);
				tv0->AddReply(540295, 42270, 42275);
				return;
			}
			if (a0 == 42268) {
				f_b4_a1_v("Smile");
				tv0->SetMessage(540288);
				tv0->ClearReplies();
				tv0->AddReply(540289, 42270, 42269);
				tv0->AddReply(540490, 42490, 42489);
				return;
			}
			if (a0 == 42490) {
				f_b4_a1_v("Sly");
				tv0->SetMessage(540491);
				tv0->ClearReplies();
				tv0->AddReply(540492, -1, 42491);
				tv0->AddReply(540493, -1, 42492);
				return;
			}
			if (a0 == 42270) {
				f_b4_a1_v("Smile");
				tv0->SetMessage(540290);
				tv0->ClearReplies();
				tv0->AddReply(540291, 42272, 42271);
				tv0->AddReply(540494, -1, 42493);
				return;
			}
			if (a0 == 42272) {
				f_b4_a1_v("Sly");
				tv0->SetMessage(540292);
				tv0->ClearReplies();
				tv0->AddReply(540293, -1, 42273);
				tv0->AddReply(540294, -1, 42274);
				return;
			}
			tv3 = true;
			if (f_3fc_a0_b()) {
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
		f_24d_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_24d_a0_v(void)
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
			if (!L0 && f_27d_a0_b()) {
				@RemoveActor(f_395_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_27d_a0_b()) {
			@RemoveActor(f_395_a0_o());
		}
	}
}

bool f_27d_a0_b(void)
{
	return true;
}

bool f_27f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_39b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_3fc_a0_b()) {
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

void f_2c4_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_3fc_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2d6_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_310_a1_b(a0)) {
			if (!f_335_a1_b(a0)) {
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
		if (!f_335_a1_b(a0)) {
			if (!f_310_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_310_a1_b(object a0)
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
	return f_37f_a1_b(L4);
}

bool f_335_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_3aa_a0_i() + "m";
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
	return f_37f_a1_b(L4);
}

void f_360_a1_v(string a0)
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

void f_370_a2_v(string a0, bool a1)
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

bool f_37f_a1_b(string a0)
{
	if (f_3fc_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_38e_a0_v(void)
{
	if (f_3fc_a0_b()) {
		@lshStopSpeech();
	}
}

object f_395_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_39b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3a5_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_3aa_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_3b3_a2_v(object a0, object a1)
{
	@SetVariable("ood12KlaraSobor1", 1);
}

void f_3b9_a2_v(object a0, object a1)
{
	@SetVariable("ood12KlaraSobor2", 1);
}

bool f_3bf_a1_b(object a0)
{
	if (f_3a5_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_3cb_a1_b(object a0)
{
	if (f_3a5_a1_i("ood12KlaraSobor1") == 0) {
		return true;
	}
	return false;
}

bool f_3d7_a1_b(object a0)
{
	if (f_3a5_a1_i("ood12KlaraSobor2") == 0) {
		return true;
	}
	return false;
}

int f_3e3_a0_i(void)
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

int f_3f4_a0_i(void)
{
	return 515540;
}

int f_3f6_a0_i(void)
{
	return 502865;
}

string f_3f8_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

string f_3fa_a0_s(void)
{
	return "ui/NPC_Klara_b.png";
}

bool f_3fc_a0_b(void)
{
	return true;
}

