event evt_11 11;
event OnTrigger 26;
event OnLoad 5;
event OnUse 0;
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
		if (!f_12f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1e1_a0_i());
		L0->SetNPCDescription(f_1df_a0_i());
		L0->SetPhoto(f_1e3_a0_s());
		L0->SetPhoto2(f_1e5_a0_s());
		L0->SetPlayerName(f_1ce_a0_i());
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
		f_174_a1_v(a0);
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
			f_84_a1_v("Neutral");
			tv0->SetMessage(514175);
			tv0->ClearReplies();
			tv0->AddReply(514176, -1, 15390);
			tv0->AddReply(539614, -1, 41561);
			break;
			return;
		}
		if (f_1e7_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_186_a1_v(tv2);
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

	void f_84_a1_v(string a0)
	{
		if (!f_1e7_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_196_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1a5_a0_v();
			if (a0 == 15389) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(514175);
				tv0->ClearReplies();
				tv0->AddReply(514176, -1, 15390);
				tv0->AddReply(539614, -1, 41561);
				return;
			}
			tv3 = true;
			if (f_1e7_a0_b()) {
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
	var bool tv1;

	void f_c4_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		tv1 = false;
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "execute") {
			bool L0;
			tv1 = true;
			@PlayAnimation("all", "bdie");
			@WaitForAnimEnd(L0);
			if (L0) {
				@LockAnimationEnd("all", "bdie");
			}
		} else {
			f_101_a1_v(a0);
		}
	}

	void OnLoad(void)
	{
		if (tv1) {
			@LockAnimationEnd("all", "bdie");
		}
	}

	void OnUse(object a0)
	{
		int L0;
		@GetVariable("d11q02", L0);
		if (L0 == 2 && !tv1) {
			f_c4_a1_v(a0);
		}
	}

	void f_101_a1_v(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_12d_a0_b()) {
				@RemoveActor(f_1ac_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_12d_a0_b()) {
			@RemoveActor(f_1ac_a0_o());
		}
	}
}

bool f_12d_a0_b(void)
{
	return true;
}

bool f_12f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1b2_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1e7_a0_b()) {
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

void f_174_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1e7_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_186_a1_v(string a0)
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

void f_196_a2_v(string a0, bool a1)
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

void f_1a5_a0_v(void)
{
	if (f_1e7_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1ac_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1b2_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_1bc_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void OnUnload(void)
{
	f_1bc_a2_b("quest_d11_02", "actor_unload");
}

int f_1ce_a0_i(void)
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

int f_1df_a0_i(void)
{
	return 515568;
}

int f_1e1_a0_i(void)
{
	return 503353;
}

string f_1e3_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_1e5_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_1e7_a0_b(void)
{
	return false;
}

