event evt_11 11;
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
		if (!f_228_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_3cd_a0_i());
		L0->SetNPCDescription(f_3cb_a0_i());
		L0->SetPhoto(f_3cf_a0_s());
		L0->SetPhoto2(f_3d1_a0_s());
		L0->SetPlayerName(f_3ba_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_27f_a1_b(f_33e_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_26d_a1_v(a0);
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
			if (f_378_a1_b(tv1)) {
				f_368_a2_v(tv1, tv0);
				f_a9_a1_v("Grin");
				tv0->SetMessage(533209);
				tv0->ClearReplies();
				tv0->AddReply(535195, 36867, 36866);
				tv0->AddReply(535202, 36867, 36873);
				break;
			}
			f_a9_a1_v("Untrust");
			tv0->SetMessage(533219);
			tv0->ClearReplies();
			tv0->AddReply(533220, -1, 34740);
			tv0->AddReply(535201, -1, 36872);
			break;
			return;
		}
		if (f_3d3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_309_a1_v(tv2);
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

	void f_a9_a1_v(string a0)
	{
		if (!f_3d3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_319_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_337_a0_v();
			if (a1 == 34738) {
				f_36e_a2_v(tv1, tv0);
			}
			if (a1 == 37544) {
				f_36e_a2_v(tv1, tv0);
			}
			if (a0 == 34729) {
				if (f_378_a1_b(tv1)) {
					f_368_a2_v(tv1, tv0);
					f_a9_a1_v("Grin");
					tv0->SetMessage(533209);
					tv0->ClearReplies();
					tv0->AddReply(535195, 36867, 36866);
					tv0->AddReply(535202, 36867, 36873);
					return;
				}
				f_a9_a1_v("Untrust");
				tv0->SetMessage(533219);
				tv0->ClearReplies();
				tv0->AddReply(533220, -1, 34740);
				tv0->AddReply(535201, -1, 36872);
				return;
			}
			if (a0 == 36867) {
				f_a9_a1_v("Untrust");
				tv0->SetMessage(535196);
				tv0->ClearReplies();
				tv0->AddReply(535197, 36869, 36868);
				tv0->AddReply(535200, 37527, 36871);
				return;
			}
			if (a0 == 36869) {
				f_a9_a1_v("Untrust");
				tv0->SetMessage(535198);
				tv0->ClearReplies();
				tv0->AddReply(535831, 37526, 37525);
				tv0->AddReply(535828, 37538, 37522);
				return;
			}
			if (a0 == 37526) {
				f_a9_a1_v("Untrust");
				tv0->SetMessage(535832);
				tv0->ClearReplies();
				tv0->AddReply(535199, 37527, 36870);
				tv0->AddReply(535194, 34731, 36865);
				return;
			}
			if (a0 == 34731) {
				f_a9_a1_v("Untrust");
				tv0->SetMessage(533211);
				tv0->ClearReplies();
				tv0->AddReply(533212, 34733, 34732);
				tv0->AddReply(535834, 37538, 37528);
				return;
			}
			if (a0 == 37538) {
				f_a9_a1_v("Smile");
				tv0->SetMessage(535843);
				tv0->ClearReplies();
				tv0->AddReply(535844, 37533, 37539);
				return;
			}
			if (a0 == 37527) {
				f_a9_a1_v("Untrust");
				tv0->SetMessage(535833);
				tv0->ClearReplies();
				tv0->AddReply(535835, 34733, 37529);
				tv0->AddReply(535845, 37533, 37542);
				return;
			}
			if (a0 == 34733) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(533213);
				tv0->ClearReplies();
				tv0->AddReply(533214, 34735, 34734);
				tv0->AddReply(535842, 34735, 37537);
				return;
			}
			if (a0 == 34735) {
				f_a9_a1_v("Neutral");
				tv0->SetMessage(533215);
				tv0->ClearReplies();
				tv0->AddReply(533216, 37533, 34736);
				return;
			}
			if (a0 == 37533) {
				f_a9_a1_v("Untrust");
				tv0->SetMessage(535838);
				tv0->ClearReplies();
				tv0->AddReply(535840, 37536, 37535);
				tv0->AddReply(535846, -1, 37544);
				return;
			}
			if (a0 == 37536) {
				f_a9_a1_v("Untrust");
				tv0->SetMessage(535841);
				tv0->ClearReplies();
				tv0->AddReply(533218, -1, 34738);
				return;
			}
			tv3 = true;
			if (f_3d3_a0_b()) {
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
			if (!L0 && f_226_a0_b()) {
				@RemoveActor(f_33e_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_226_a0_b()) {
			@RemoveActor(f_33e_a0_o());
		}
	}
}

bool f_226_a0_b(void)
{
	return true;
}

bool f_228_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_344_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_3d3_a0_b()) {
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

void f_26d_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_3d3_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_27f_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_2b9_a1_b(a0)) {
			if (!f_2de_a1_b(a0)) {
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
		if (!f_2de_a1_b(a0)) {
			if (!f_2b9_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_2b9_a1_b(object a0)
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
	return f_328_a1_b(L4);
}

bool f_2de_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_35f_a0_i() + "m";
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
	return f_328_a1_b(L4);
}

void f_309_a1_v(string a0)
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

void f_319_a2_v(string a0, bool a1)
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

bool f_328_a1_b(string a0)
{
	if (f_3d3_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_337_a0_v(void)
{
	if (f_3d3_a0_b()) {
		@lshStopSpeech();
	}
}

object f_33e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_344_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_34e_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_353_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_35f_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_368_a2_v(object a0, object a1)
{
	@SetVariable("ood7AndreiPrisoned1", 1);
}

void f_36e_a2_v(object a0, object a1)
{
	f_384_a0_v();
	f_353_a2_b("quest_d7_04", "completed");
}

bool f_378_a1_b(object a0)
{
	if (f_34e_a1_i("ood7AndreiPrisoned1") == 0) {
		return true;
	}
	return false;
}

void f_384_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 640, 2, 533226);
	f_39e_a2_b(L0, 637);
}

object f_391_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_39e_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_391_a0_o();
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

int f_3ba_a0_i(void)
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

int f_3cb_a0_i(void)
{
	return 515529;
}

int f_3cd_a0_i(void)
{
	return 502855;
}

string f_3cf_a0_s(void)
{
	return "ui/NPC_Andrei.png";
}

string f_3d1_a0_s(void)
{
	return "ui/NPC_Andrei_b.png";
}

bool f_3d3_a0_b(void)
{
	return true;
}

