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
		if (!f_251_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_38b_a0_i());
		L0->SetNPCDescription(f_389_a0_i());
		L0->SetPhoto(f_38d_a0_s());
		L0->SetPhoto2(f_38f_a0_s());
		L0->SetPlayerName(f_378_a0_i());
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
		f_296_a1_v(a0);
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
			if (f_325_a1_b(tv1)) {
				f_b7_a1_v("Neutral");
				tv0->SetMessage(521352);
				tv0->ClearReplies();
				tv0->AddReply(524063, 25361, 25360);
				break;
			}
			if (!f_331_a1_b(tv1)) {
				f_b7_a1_v("Neutral");
				tv0->SetMessage(521356);
				tv0->ClearReplies();
				tv0->AddReply(521357, 25366, 22544);
				tv0->AddReply(524069, 25368, 25367);
				break;
			}
			if (f_331_a1_b(tv1)) {
				f_31f_a2_v(tv1, tv0);
				f_b7_a1_v("Neutral");
				tv0->SetMessage(521358);
				tv0->ClearReplies();
				tv0->AddReply(521359, -1, 22546);
				break;
			}
			return;
		}
		if (f_391_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2a8_a1_v(tv2);
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

	void f_b7_a1_v(string a0)
	{
		if (!f_391_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2b8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_2c7_a0_v();
			if (a1 == 22542) {
				f_307_a2_v(tv1, tv0);
			}
			if (a0 == 22539) {
				if (f_325_a1_b(tv1)) {
					f_b7_a1_v("Neutral");
					tv0->SetMessage(521352);
					tv0->ClearReplies();
					tv0->AddReply(524063, 25361, 25360);
					return;
				}
				if (!f_331_a1_b(tv1)) {
					f_b7_a1_v("Neutral");
					tv0->SetMessage(521356);
					tv0->ClearReplies();
					tv0->AddReply(521357, 25366, 22544);
					tv0->AddReply(524069, 25368, 25367);
					return;
				}
				if (f_331_a1_b(tv1)) {
					f_31f_a2_v(tv1, tv0);
					f_b7_a1_v("Neutral");
					tv0->SetMessage(521358);
					tv0->ClearReplies();
					tv0->AddReply(521359, -1, 22546);
					return;
				}
			}
			if (a0 == 25368) {
				f_b7_a1_v("Neutral");
				tv0->SetMessage(524070);
				tv0->ClearReplies();
				tv0->AddReply(524071, 25366, 25369);
				return;
			}
			if (a0 == 25366) {
				f_b7_a1_v("Neutral");
				tv0->SetMessage(524068);
				tv0->ClearReplies();
				tv0->AddReply(524072, 25372, 25371);
				return;
			}
			if (a0 == 25372) {
				f_b7_a1_v("Neutral");
				tv0->SetMessage(524073);
				tv0->ClearReplies();
				tv0->AddReply(524074, -1, 25373);
				return;
			}
			if (a0 == 25361) {
				f_b7_a1_v("Neutral");
				tv0->SetMessage(524064);
				tv0->ClearReplies();
				tv0->AddReply(524065, 25363, 25362);
				return;
			}
			if (a0 == 25363) {
				f_b7_a1_v("Neutral");
				tv0->SetMessage(524066);
				tv0->ClearReplies();
				tv0->AddReply(521353, 22541, 22540);
				tv0->AddReply(524067, 22541, 25364);
				return;
			}
			if (a0 == 22541) {
				f_b7_a1_v("Neutral");
				tv0->SetMessage(521354);
				tv0->ClearReplies();
				tv0->AddReply(521355, -1, 22542);
				return;
			}
			tv3 = true;
			if (f_391_a0_b()) {
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
		f_247_a0_v();
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			float L0;
			while (!f_24c_a0_b()) {
				@Hold();
			}
			@rand(L0, 3);
			@Sleep(L0 + 3);
			f_1f6_a0_v();
		}
	}

	void f_1c3_a0_v(void)
	{
		bool L0;
		tv0 = true;
		@IsLoaded(L0);
		if (!L0 && f_1f4_a0_b()) {
			@RemoveActor(f_2ce_a0_o());
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			f_1c3_a0_v();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_1f4_a0_b()) {
			@RemoveActor(f_2ce_a0_o());
		}
	}
}

bool f_1f4_a0_b(void)
{
	return true;
}

void f_1f6_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_24c_a0_b()) {
		return;
	}
	L0 = f_2f6_a0_i();
	for (L1 = 0; L1 < 5 && f_24c_a0_b(); L1++) {
		int L2;
		@irand(L2, 3);
		if (L2 == 0) {
			if (L0) {
				int L3;
				bool L4;
				@irand(L3, L0);
				@PlayAnimation("all", f_2ef_a1_s(L3));
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
		if (!f_245_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_245_a0_b(void)
{
	return true;
}

void f_247_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

bool f_24c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_251_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_2d4_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_391_a0_b()) {
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

void f_296_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_391_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_2a8_a1_v(string a0)
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

void f_2b8_a2_v(string a0, bool a1)
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

void f_2c7_a0_v(void)
{
	if (f_391_a0_b()) {
		@lshStopSpeech();
	}
}

object f_2ce_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_2d4_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_2de_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_2e3_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_2ef_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_2f6_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_2ef_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_307_a2_v(object a0, object a1)
{
	float L0;
	@SetVariable("b7q03", 2);
	f_342_a0_v();
	a0->GetProperty("disease", L0);
	if (L0 < 0.5) {
		a0->SetProperty("disease", 0.5);
	}
	f_2e3_a2_b("quest_b7_03", "remove_birdmask");
}

void f_31f_a2_v(object a0, object a1)
{
	@SetVariable("b7q03SerumWorks", 1);
}

bool f_325_a1_b(object a0)
{
	if (f_2de_a1_i("b7q03") == 1) {
		return true;
	}
	return false;
}

bool f_331_a1_b(object a0)
{
	if (f_33b_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_33b_a1_b(object a0)
{
	float L0;
	a0->GetProperty("disease", L0);
	return L0 == 0;
}

void f_342_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 282, 2, 521365);
	f_35c_a2_b(L0, 280);
}

object f_34f_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_35c_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_34f_a0_o();
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

int f_378_a0_i(void)
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

int f_389_a0_i(void)
{
	return 515571;
}

int f_38b_a0_i(void)
{
	return 504029;
}

string f_38d_a0_s(void)
{
	return "ui/NPC_bmask.png";
}

string f_38f_a0_s(void)
{
	return "ui/NPC_bmask_b.png";
}

bool f_391_a0_b(void)
{
	return false;
}

