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
		if (!f_18a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_289_a0_i());
		L0->SetPhoto(f_28b_a0_s());
		L0->SetPlayerName(f_268_a0_i());
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
		f_1c2_a1_v(a0);
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
			if (f_221_a1_b(tv1)) {
				f_79_a1_v("Neutral");
				tv0->SetMessage(11988);
				tv0->ClearReplies();
				tv0->AddReply(11989, 13205, 13204);
				break;
			}
			return;
		}
		if (f_28d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c6_a1_v(tv2);
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

	void f_79_a1_v(string a0)
	{
		if (!f_28d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c6_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1d8_a0_v();
			if (a1 == 13218) {
				f_205_a2_v(tv1, tv0);
			}
			if (a1 == 13214) {
				f_205_a2_v(tv1, tv0);
			}
			if (a1 == 13215) {
				f_205_a2_v(tv1, tv0);
			}
			if (a0 == 13203) {
				if (f_221_a1_b(tv1)) {
					f_79_a1_v("Neutral");
					tv0->SetMessage(11988);
					tv0->ClearReplies();
					tv0->AddReply(11989, 13205, 13204);
					return;
				}
			}
			if (a0 == 13205) {
				f_79_a1_v("Neutral");
				tv0->SetMessage(11990);
				tv0->ClearReplies();
				tv0->AddReply(11991, 13207, 13206);
				tv0->AddReply(12004, 13207, 13219);
				return;
			}
			if (a0 == 13207) {
				f_79_a1_v("Neutral");
				tv0->SetMessage(11992);
				tv0->ClearReplies();
				tv0->AddReply(11993, 13209, 13208);
				tv0->AddReply(12005, 13209, 13221);
				return;
			}
			if (a0 == 13209) {
				f_79_a1_v("Neutral");
				tv0->SetMessage(11994);
				tv0->ClearReplies();
				tv0->AddReply(11995, 13211, 13210);
				tv0->AddReply(12006, 13213, 13223);
				return;
			}
			if (a0 == 13211) {
				f_79_a1_v("Neutral");
				tv0->SetMessage(11996);
				tv0->ClearReplies();
				tv0->AddReply(11997, 13213, 13212);
				return;
			}
			if (a0 == 13213) {
				f_79_a1_v("Neutral");
				tv0->SetMessage(11998);
				tv0->ClearReplies();
				tv0->AddReply(12001, 13217, 13216);
				tv0->AddReply(11999, -1, 13214);
				tv0->AddReply(12000, -1, 13215);
				return;
			}
			if (a0 == 13217) {
				f_79_a1_v("Neutral");
				tv0->SetMessage(12002);
				tv0->ClearReplies();
				tv0->AddReply(12003, -1, 13218);
				return;
			}
			tv3 = true;
			if (f_28d_a0_b()) {
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
			if (!L0 && f_188_a0_b()) {
				@RemoveActor(f_1df_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_188_a0_b()) {
			@RemoveActor(f_1df_a0_o());
		}
	}
}

bool f_188_a0_b(void)
{
	return true;
}

bool f_18a_a1_b(object a0)
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
	L5 = L3 * 70 + f_1e5_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1c2_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1c6_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_1d8_a0_v(void)
{
	if (f_28d_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1df_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1e5_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1ef_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_1f4_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_200_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_205_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q02", 4);
	L0 = f_257_a0_o();
	L0->AddMark("d5q02NudeMeeting", "pt_d5q01_girl_corpse1", 0, 15364, f_200_a0_f());
	f_279_a0_v();
	f_1f4_a2_b("quest_d5_02", "remove_girl");
}

bool f_221_a1_b(object a0)
{
	if (f_1ef_a1_i("d5q02") == 3) {
		return true;
	}
	return false;
}

object f_22d_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_23a_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_22d_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SetVariable("player_diary", 1);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

object f_257_a0_o(void)
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

int f_268_a0_i(void)
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

void f_279_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 152, 2, 15358);
	f_23a_a2_b(L0, 148);
}

int f_289_a0_i(void)
{
	return 12582;
}

string f_28b_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_28d_a0_b(void)
{
	return false;
}

