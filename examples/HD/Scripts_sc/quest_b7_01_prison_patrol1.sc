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
		if (!f_1fc_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_36a_a0_i());
		L0->SetNPCDescription(f_368_a0_i());
		L0->SetPhoto(f_36c_a0_s());
		L0->SetPhoto2(f_36e_a0_s());
		L0->SetPlayerName(f_357_a0_i());
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
		f_241_a1_v(a0);
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
			if (f_2e3_a1_b(tv1)) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(520989);
				tv0->ClearReplies();
				tv0->AddReply(528466, 29854, 29853);
				break;
			}
			f_93_a1_v("Neutral");
			tv0->SetMessage(528472);
			tv0->ClearReplies();
			tv0->AddReply(520992, -1, 22205);
			break;
			return;
		}
		if (f_370_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_253_a1_v(tv2);
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

	void f_93_a1_v(string a0)
	{
		if (!f_370_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_263_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_272_a0_v();
			if (a1 == 22203) {
				f_2b7_a2_v(tv1, tv0);
				f_2d3_a2_v(tv1, tv0);
			}
			if (a0 == 22202) {
				if (f_2e3_a1_b(tv1)) {
					f_93_a1_v("Neutral");
					tv0->SetMessage(520989);
					tv0->ClearReplies();
					tv0->AddReply(528466, 29854, 29853);
					return;
				}
				f_93_a1_v("Neutral");
				tv0->SetMessage(528472);
				tv0->ClearReplies();
				tv0->AddReply(520992, -1, 22205);
				return;
			}
			if (a0 == 29854) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(528467);
				tv0->ClearReplies();
				tv0->AddReply(528468, 29856, 29855);
				return;
			}
			if (a0 == 29856) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(528469);
				tv0->ClearReplies();
				tv0->AddReply(528470, 29858, 29857);
				return;
			}
			if (a0 == 29858) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(528471);
				tv0->ClearReplies();
				tv0->AddReply(528473, 29861, 29860);
				tv0->AddReply(528477, 29863, 29864);
				return;
			}
			if (a0 == 29861) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(528474);
				tv0->ClearReplies();
				tv0->AddReply(528475, 29863, 29862);
				return;
			}
			if (a0 == 29863) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(528476);
				tv0->ClearReplies();
				tv0->AddReply(520990, -1, 22203);
				return;
			}
			tv3 = true;
			if (f_370_a0_b()) {
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
		f_1f2_a0_v();
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			float L0;
			while (!f_1f7_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_1a1_a0_v();
		}
	}

	void f_16e_a0_v(void)
	{
		bool L0;
		tv0 = true;
		@IsLoaded(L0);
		if (!L0 && f_19f_a0_b()) {
			@RemoveActor(f_279_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_16e_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_19f_a0_b()) {
			@RemoveActor(f_279_a0_o());
		}
	}
}

bool f_19f_a0_b(void)
{
	return true;
}

void f_1a1_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1f7_a0_b()) {
		return;
	}
	L0 = f_2a6_a0_i();
	for (L1 = 0; L1 < 5 && f_1f7_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_29f_a1_s(L3));
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
		if (!f_1f0_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1f0_a0_b(void)
{
	return true;
}

void f_1f2_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_1f7_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1fc_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_27f_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_370_a0_b()) {
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

void f_241_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_370_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_253_a1_v(string a0)
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

void f_263_a2_v(string a0, bool a1)
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

void f_272_a0_v(void)
{
	if (f_370_a0_b()) {
		@lshStopSpeech();
	}
}

object f_279_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_27f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_289_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_28e_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_29a_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

string f_29f_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_2a6_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_29f_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_2b7_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b7q01", 4);
	L0 = f_325_a0_o();
	L0->AddMark("b7q01PatrolGotoGorbun", "pt_map_gorbun", 1, 521025, f_29a_a0_f());
	f_2ef_a0_v();
	f_28e_a2_b("quest_b7_01", "init_gorbun_house");
}

void f_2d3_a2_v(object a0, object a1)
{
	f_336_a3_v(f_325_a0_o(), "pt_map_gorbun", 2);
	a1->ShowMap(f_325_a0_o());
}

bool f_2e3_a1_b(object a0)
{
	if (f_289_a1_i("b7q01") == 3) {
		return true;
	}
	return false;
}

void f_2ef_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 257, 1, 521029);
	f_309_a2_b(L0, 253);
}

object f_2fc_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_309_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2fc_a0_o();
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

object f_325_a0_o(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("Can't find main outdoor scene");
		L1 = null;
		return L1;
	}
	L0->GetMap(L1);
	return L1;
}

void f_336_a3_v(object a0, string a1, float a2)
{
	Vector L0;
	Vector L1;
	object L2;
	bool L3;
	@GetMainOutdoorScene(L2);
	if (L2 == null) {
		@Trace("Can't find main outdoor scene");
		return;
	}
	L2->GetLocator(a1, L3, L0, L1);
	if (!L3) {
		@Trace("Warning: outdoor scene locator " + a1 + " doesnt exist");
	}
	L2->GetMap(a0);
	if (a0 == null) {
		@Trace("Can't find map");
		return;
	}
	a0->SetMapParams(L0.x, L0.z, a2);
}

int f_357_a0_i(void)
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

int f_368_a0_i(void)
{
	return 515572;
}

int f_36a_a0_i(void)
{
	return 504031;
}

string f_36c_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_36e_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_370_a0_b(void)
{
	return false;
}

