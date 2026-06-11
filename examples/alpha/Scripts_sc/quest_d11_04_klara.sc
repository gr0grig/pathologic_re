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
		if (!f_1a5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_232_a0_i());
		L0->SetPhoto(f_234_a0_s());
		L0->SetPlayerName(f_221_a0_i());
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
		f_1dd_a1_v(a0);
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
			if (f_215_a1_b(tv1)) {
				f_20f_a2_v(tv1, tv0);
				f_8d_a1_v("Neutral");
				tv0->SetMessage(14350);
				tv0->ClearReplies();
				tv0->AddReply(14351, 15575, 15574);
				break;
			}
			f_8d_a1_v("Neutral");
			tv0->SetMessage(14514);
			tv0->ClearReplies();
			tv0->AddReply(14515, -1, 15754);
			break;
			return;
		}
		if (f_236_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e1_a1_v(tv2);
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

	void f_8d_a1_v(string a0)
	{
		if (!f_236_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e1_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1f3_a0_v();
			if (a0 == 15573) {
				if (f_215_a1_b(tv1)) {
					f_20f_a2_v(tv1, tv0);
					f_8d_a1_v("Neutral");
					tv0->SetMessage(14350);
					tv0->ClearReplies();
					tv0->AddReply(14351, 15575, 15574);
					return;
				}
				f_8d_a1_v("Neutral");
				tv0->SetMessage(14514);
				tv0->ClearReplies();
				tv0->AddReply(14515, -1, 15754);
				return;
			}
			if (a0 == 15575) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(14352);
				tv0->ClearReplies();
				tv0->AddReply(14353, 15577, 15576);
				return;
			}
			if (a0 == 15577) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(14354);
				tv0->ClearReplies();
				tv0->AddReply(14355, 15579, 15578);
				return;
			}
			if (a0 == 15579) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(14356);
				tv0->ClearReplies();
				tv0->AddReply(14357, 15581, 15580);
				return;
			}
			if (a0 == 15581) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(14358);
				tv0->ClearReplies();
				tv0->AddReply(14359, 15583, 15582);
				return;
			}
			if (a0 == 15583) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(14360);
				tv0->ClearReplies();
				tv0->AddReply(14361, 15585, 15584);
				return;
			}
			if (a0 == 15585) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(14362);
				tv0->ClearReplies();
				tv0->AddReply(14363, 15587, 15586);
				return;
			}
			if (a0 == 15587) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(14364);
				tv0->ClearReplies();
				tv0->AddReply(14365, 15589, 15588);
				return;
			}
			if (a0 == 15589) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(14366);
				tv0->ClearReplies();
				tv0->AddReply(14367, -1, 15590);
				return;
			}
			tv3 = true;
			if (f_236_a0_b()) {
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
			if (!L0 && f_1a3_a0_b()) {
				@RemoveActor(f_1fa_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_1a3_a0_b()) {
			@RemoveActor(f_1fa_a0_o());
		}
	}
}

bool f_1a3_a0_b(void)
{
	return true;
}

bool f_1a5_a1_b(object a0)
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
	L5 = L3 * 70 + f_200_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1dd_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1e1_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_1f3_a0_v(void)
{
	if (f_236_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1fa_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_200_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_20a_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_20f_a2_v(object a0, object a1)
{
	@SetVariable("ood11Klara1", 1);
}

bool f_215_a1_b(object a0)
{
	if (f_20a_a1_i("ood11Klara1") == 0) {
		return true;
	}
	return false;
}

int f_221_a0_i(void)
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

int f_232_a0_i(void)
{
	return 2865;
}

string f_234_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

bool f_236_a0_b(void)
{
	return true;
}

