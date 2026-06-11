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
		if (!f_10e_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_196_a0_i());
		L0->SetPhoto(f_198_a0_s());
		L0->SetPlayerName(f_185_a0_i());
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
		f_146_a1_v(a0);
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
			f_74_a1_v("Neutral");
			tv0->SetMessage(14175);
			tv0->ClearReplies();
			tv0->AddReply(14176, -1, 15390);
			break;
			return;
		}
		if (f_19a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_14a_a1_v(tv2);
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

	void f_74_a1_v(string a0)
	{
		if (!f_19a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_14a_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15c_a0_v();
			if (a0 == 15389) {
				f_74_a1_v("Neutral");
				tv0->SetMessage(14175);
				tv0->ClearReplies();
				tv0->AddReply(14176, -1, 15390);
				return;
			}
			tv3 = true;
			if (f_19a_a0_b()) {
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

	void f_a9_a1_v(object a0)
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
			f_e0_a1_v(a0);
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
		if (L0 == 2) {
			f_a9_a1_v(a0);
		}
	}

	void f_e0_a1_v(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_10c_a0_b()) {
				@RemoveActor(f_163_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_10c_a0_b()) {
			@RemoveActor(f_163_a0_o());
		}
	}
}

bool f_10c_a0_b(void)
{
	return true;
}

bool f_10e_a1_b(object a0)
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
	L5 = L3 * 70 + f_169_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_146_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_14a_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_15c_a0_v(void)
{
	if (f_19a_a0_b()) {
		@lshStopSpeech();
	}
}

object f_163_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_169_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_173_a2_b(string a0, string a1)
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
	f_173_a2_b("quest_d11_02", "actor_unload");
}

int f_185_a0_i(void)
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

int f_196_a0_i(void)
{
	return 3353;
}

string f_198_a0_s(void)
{
	return "ui/NPC_None.png";
}

bool f_19a_a0_b(void)
{
	return false;
}

