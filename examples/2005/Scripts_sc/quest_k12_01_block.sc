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
		f_2b6_a1_b(f_363_a0_o());
		if (!f_261_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_45c_a0_i());
		L0->SetNPCDescription(f_45a_a0_i());
		L0->SetPhoto(f_45e_a0_s());
		L0->SetPhoto2(f_460_a0_s());
		L0->SetPlayerName(f_449_a0_i());
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
		f_2a5_a1_v(a0);
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
			if (!f_3c8_a1_b(tv1)) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(539253);
				tv0->ClearReplies();
				tv0->AddReply(539254, 41198, 41197);
				tv0->AddReply(539271, 41215, 41214);
				if (f_3e0_a1_b(tv1)) {
					tv0->AddReply(539257, 41201, 41200);
				}
				if (f_3d4_a1_b(tv1)) {
					tv0->AddReply(539262, 41206, 41205);
				}
				tv0->AddReply(540270, 42254, 42253);
				break;
			}
			f_b9_a1_v("Neutral");
			tv0->SetMessage(539276);
			tv0->ClearReplies();
			tv0->AddReply(539277, -1, 41220);
			break;
			return;
		}
		if (f_462_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_340_a1_v(tv2);
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

	void f_b9_a1_v(string a0)
	{
		if (!f_462_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_347_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_35c_a0_v();
			if (a1 == 41218) {
				f_39e_a2_v(tv1, tv0);
				f_3a4_a2_v(tv1, tv0);
				f_3b0_a2_v(tv1, tv0);
			}
			if (a1 == 41204) {
				f_398_a2_v(tv1, tv0);
				f_3a4_a2_v(tv1, tv0);
				f_3ab_a2_v(tv1, tv0);
			}
			if (a1 == 41213) {
				f_392_a2_v(tv1, tv0);
				f_3a4_a2_v(tv1, tv0);
				f_3b5_a2_v(tv1, tv0);
			}
			if (a1 == 42255) {
				f_3ba_a2_v(tv1, tv0);
				f_3a4_a2_v(tv1, tv0);
				f_3c3_a2_v(tv1, tv0);
			}
			if (a0 == 41196) {
				if (!f_3c8_a1_b(tv1)) {
					f_b9_a1_v("Neutral");
					tv0->SetMessage(539253);
					tv0->ClearReplies();
					tv0->AddReply(539254, 41198, 41197);
					tv0->AddReply(539271, 41215, 41214);
					if (f_3e0_a1_b(tv1)) {
						tv0->AddReply(539257, 41201, 41200);
					}
					if (f_3d4_a1_b(tv1)) {
						tv0->AddReply(539262, 41206, 41205);
					}
					tv0->AddReply(540270, 42254, 42253);
					return;
				}
				f_b9_a1_v("Neutral");
				tv0->SetMessage(539276);
				tv0->ClearReplies();
				tv0->AddReply(539277, -1, 41220);
				return;
			}
			if (a0 == 42254) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(540271);
				tv0->ClearReplies();
				tv0->AddReply(540272, -1, 42255);
				return;
			}
			if (a0 == 41206) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(539263);
				tv0->ClearReplies();
				tv0->AddReply(539264, 41208, 41207);
				return;
			}
			if (a0 == 41208) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(539265);
				tv0->ClearReplies();
				tv0->AddReply(539266, 41210, 41209);
				return;
			}
			if (a0 == 41210) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(539267);
				tv0->ClearReplies();
				tv0->AddReply(539268, 41212, 41211);
				return;
			}
			if (a0 == 41212) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(539269);
				tv0->ClearReplies();
				tv0->AddReply(539270, -1, 41213);
				return;
			}
			if (a0 == 41201) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(539258);
				tv0->ClearReplies();
				tv0->AddReply(539259, 41203, 41202);
				return;
			}
			if (a0 == 41203) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(539260);
				tv0->ClearReplies();
				tv0->AddReply(539261, -1, 41204);
				return;
			}
			if (a0 == 41215) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(539272);
				tv0->ClearReplies();
				tv0->AddReply(539273, 41217, 41216);
				return;
			}
			if (a0 == 41217) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(539274);
				tv0->ClearReplies();
				tv0->AddReply(539275, -1, 41218);
				return;
			}
			if (a0 == 41198) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(539255);
				tv0->ClearReplies();
				tv0->AddReply(539256, -1, 41199);
				return;
			}
			tv3 = true;
			if (f_462_a0_b()) {
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
		f_22f_a0_v();
	}

	void OnUse(object a0)
	{
		t0{a0};
	}

	void f_22f_a0_v(void)
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
			if (!L0 && f_25f_a0_b()) {
				@RemoveActor(f_363_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_25f_a0_b()) {
			@RemoveActor(f_363_a0_o());
		}
	}
}

bool f_25f_a0_b(void)
{
	return true;
}

bool f_261_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_369_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_462_a0_b()) {
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

void f_2a5_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_462_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2b6_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_2f0_a1_b(a0)) {
			if (!f_315_a1_b(a0)) {
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
		if (!f_315_a1_b(a0)) {
			if (!f_2f0_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_2f0_a1_b(object a0)
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
	return f_34d_a1_b(L4);
}

bool f_315_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_389_a0_i() + "m";
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
	return f_34d_a1_b(L4);
}

void f_340_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_347_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_34d_a1_b(string a0)
{
	if (f_462_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_35c_a0_v(void)
{
	if (f_462_a0_b()) {
		@lshStopSpeech();
	}
}

object f_363_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_369_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_373_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_378_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

int f_389_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_392_a2_v(object a0, object a1)
{
	@SetVariable("game_final", 1);
}

void f_398_a2_v(object a0, object a1)
{
	@SetVariable("game_final", 2);
}

void f_39e_a2_v(object a0, object a1)
{
	@SetVariable("game_final", 3);
}

void f_3a4_a2_v(object a0, object a1)
{
	f_378_a2_v("isobor@door1", false);
}

void f_3ab_a2_v(object a0, object a1)
{
	f_413_a0_v();
}

void f_3b0_a2_v(object a0, object a1)
{
	f_3f9_a0_v();
}

void f_3b5_a2_v(object a0, object a1)
{
	f_406_a0_v();
}

void f_3ba_a2_v(object a0, object a1)
{
	@SetVariable("game_final", f_373_a1_i("c_iFinalEmpty"));
}

void f_3c3_a2_v(object a0, object a1)
{
	f_3ec_a0_v();
}

bool f_3c8_a1_b(object a0)
{
	if (f_373_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_3d4_a1_b(object a0)
{
	if (f_373_a1_i("k12q01BurahInSobor") != 0) {
		return true;
	}
	return false;
}

bool f_3e0_a1_b(object a0)
{
	if (f_373_a1_i("k12q01DankoInSobor") != 0) {
		return true;
	}
	return false;
}

void f_3ec_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 774, 1, 540275);
	f_42d_a2_b(L0, 729);
}

void f_3f9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 734, 1, 539364);
	f_42d_a2_b(L0, 729);
}

void f_406_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 732, 1, 539362);
	f_42d_a2_b(L0, 729);
}

void f_413_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 733, 1, 539363);
	f_42d_a2_b(L0, 729);
}

object f_420_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_42d_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_420_a0_o();
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

int f_449_a0_i(void)
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

int f_45a_a0_i(void)
{
	return 515532;
}

int f_45c_a0_i(void)
{
	return 514840;
}

string f_45e_a0_s(void)
{
	return "ui/NPC_Block.png";
}

string f_460_a0_s(void)
{
	return "ui/NPC_Block_b.png";
}

bool f_462_a0_b(void)
{
	return true;
}

