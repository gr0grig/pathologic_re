event OnDialogReply 11;
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
		if (!f_210_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_36d_a0_i());
		L0->SetNPCDescription(f_36b_a0_i());
		L0->SetPhoto(f_36f_a0_s());
		L0->SetPhoto2(f_371_a0_s());
		L0->SetPlayerName(f_35a_a0_i());
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
		f_255_a1_v(a0);
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
			if (f_2e6_a1_b(tv1)) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(520971);
				tv0->ClearReplies();
				tv0->AddReply(520972, 22186, 22185);
				tv0->AddReply(524081, 25382, 25381);
				tv0->AddReply(524088, 25386, 25388);
				break;
			}
			f_9d_a1_v("Neutral");
			tv0->SetMessage(520975);
			tv0->ClearReplies();
			tv0->AddReply(520976, -1, 22189);
			break;
			return;
		}
		if (f_373_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_267_a1_v(tv2);
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

	void f_9d_a1_v(string a0)
	{
		if (!f_373_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_277_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_286_a0_v();
			if (a1 == 22187) {
				f_2bf_a2_v(tv1, tv0);
				f_2d6_a2_v(tv1, tv0);
			}
			if (a0 == 22184) {
				if (f_2e6_a1_b(tv1)) {
					f_9d_a1_v("Neutral");
					tv0->SetMessage(520971);
					tv0->ClearReplies();
					tv0->AddReply(520972, 22186, 22185);
					tv0->AddReply(524081, 25382, 25381);
					tv0->AddReply(524088, 25386, 25388);
					return;
				}
				f_9d_a1_v("Neutral");
				tv0->SetMessage(520975);
				tv0->ClearReplies();
				tv0->AddReply(520976, -1, 22189);
				return;
			}
			if (a0 == 25382) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(524082);
				tv0->ClearReplies();
				tv0->AddReply(524083, 25384, 25383);
				tv0->AddReply(524089, 25392, 25391);
				return;
			}
			if (a0 == 25392) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(524090);
				tv0->ClearReplies();
				tv0->AddReply(524091, 22186, 25393);
				return;
			}
			if (a0 == 25384) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(524084);
				tv0->ClearReplies();
				tv0->AddReply(524085, 25386, 25385);
				return;
			}
			if (a0 == 25386) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(524086);
				tv0->ClearReplies();
				tv0->AddReply(524087, 22186, 25387);
				return;
			}
			if (a0 == 22186) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(520973);
				tv0->ClearReplies();
				tv0->AddReply(520974, -1, 22187);
				return;
			}
			tv3 = true;
			if (f_373_a0_b()) {
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
		f_206_a0_v();
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			float L0;
			while (!f_20b_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_1b5_a0_v();
		}
	}

	void f_182_a0_v(void)
	{
		bool L0;
		tv0 = true;
		@IsLoaded(L0);
		if (!L0 && f_1b3_a0_b()) {
			@RemoveActor(f_28d_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_182_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_1b3_a0_b()) {
			@RemoveActor(f_28d_a0_o());
		}
	}
}

bool f_1b3_a0_b(void)
{
	return true;
}

void f_1b5_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_20b_a0_b()) {
		return;
	}
	L0 = f_2ae_a0_i();
	for (L1 = 0; L1 < 5 && f_20b_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_2a7_a1_s(L3));
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
		if (!f_204_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_204_a0_b(void)
{
	return true;
}

void f_206_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_20b_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_210_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_293_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_373_a0_b()) {
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

void f_255_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_373_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_267_a1_v(string a0)
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

void f_277_a2_v(string a0, bool a1)
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

void f_286_a0_v(void)
{
	if (f_373_a0_b()) {
		@lshStopSpeech();
	}
}

object f_28d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_293_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_29d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

float f_2a2_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

string f_2a7_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_2ae_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_2a7_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_2bf_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b7q01", 2);
	L0 = f_328_a0_o();
	L0->AddMark("b7q01BirdmaskGotoMat", "pt_map_mat", 1, 521022, f_2a2_a0_f());
	f_2f2_a0_v();
}

void f_2d6_a2_v(object a0, object a1)
{
	f_339_a3_v(f_328_a0_o(), "pt_map_mat", 2);
	a1->ShowMap(f_328_a0_o());
}

bool f_2e6_a1_b(object a0)
{
	if (f_29d_a1_i("b7q01") == 1) {
		return true;
	}
	return false;
}

void f_2f2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 255, 1, 521023);
	f_30c_a2_b(L0, 253);
}

object f_2ff_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_30c_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2ff_a0_o();
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

object f_328_a0_o(void)
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

void f_339_a3_v(object a0, string a1, float a2)
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

int f_35a_a0_i(void)
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

int f_36b_a0_i(void)
{
	return 515571;
}

int f_36d_a0_i(void)
{
	return 504029;
}

string f_36f_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_371_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_373_a0_b(void)
{
	return false;
}

