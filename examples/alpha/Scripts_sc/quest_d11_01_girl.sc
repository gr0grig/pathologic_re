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
		if (!f_1e5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_2f6_a0_i());
		L0->SetPhoto(f_2f8_a0_s());
		L0->SetPlayerName(f_2d5_a0_i());
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
		f_21d_a1_v(a0);
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
			if (f_282_a1_b(tv1) && f_28e_a1_b(tv1)) {
				f_260_a2_v(tv1, tv0);
				f_9b_a1_v("Neutral");
				tv0->SetMessage(14421);
				tv0->ClearReplies();
				tv0->AddReply(14422, 15648, 15647);
				tv0->AddReply(14443, 15650, 15670);
				break;
			}
			f_9b_a1_v("Neutral");
			tv0->SetMessage(14502);
			tv0->ClearReplies();
			tv0->AddReply(14503, -1, 15740);
			break;
			return;
		}
		if (f_2fa_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_221_a1_v(tv2);
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

	void f_9b_a1_v(string a0)
	{
		if (!f_2fa_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_221_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_233_a0_v();
			if (a1 == 15659) {
				f_266_a2_v(tv1, tv0);
			}
			if (a1 == 15660) {
				f_266_a2_v(tv1, tv0);
			}
			if (a0 == 15646) {
				if (f_282_a1_b(tv1) && f_28e_a1_b(tv1)) {
					f_260_a2_v(tv1, tv0);
					f_9b_a1_v("Neutral");
					tv0->SetMessage(14421);
					tv0->ClearReplies();
					tv0->AddReply(14422, 15648, 15647);
					tv0->AddReply(14443, 15650, 15670);
					return;
				}
				f_9b_a1_v("Neutral");
				tv0->SetMessage(14502);
				tv0->ClearReplies();
				tv0->AddReply(14503, -1, 15740);
				return;
			}
			if (a0 == 15648) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(14423);
				tv0->ClearReplies();
				tv0->AddReply(14424, 15650, 15649);
				tv0->AddReply(14440, 15667, 15666);
				return;
			}
			if (a0 == 15667) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(14441);
				tv0->ClearReplies();
				tv0->AddReply(14442, 15650, 15668);
				return;
			}
			if (a0 == 15650) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(14425);
				tv0->ClearReplies();
				tv0->AddReply(14426, 15652, 15651);
				tv0->AddReply(14436, 15662, 15661);
				return;
			}
			if (a0 == 15662) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(14437);
				tv0->ClearReplies();
				tv0->AddReply(14438, 15652, 15663);
				tv0->AddReply(14439, 15652, 15665);
				return;
			}
			if (a0 == 15652) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(14427);
				tv0->ClearReplies();
				tv0->AddReply(14428, 15654, 15653);
				return;
			}
			if (a0 == 15654) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(14429);
				tv0->ClearReplies();
				tv0->AddReply(14430, 15656, 15655);
				return;
			}
			if (a0 == 15656) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(14431);
				tv0->ClearReplies();
				tv0->AddReply(14432, 15658, 15657);
				return;
			}
			if (a0 == 15658) {
				f_9b_a1_v("Neutral");
				tv0->SetMessage(14433);
				tv0->ClearReplies();
				tv0->AddReply(14434, -1, 15659);
				tv0->AddReply(14435, -1, 15660);
				return;
			}
			tv3 = true;
			if (f_2fa_a0_b()) {
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
			if (!L0 && f_1e3_a0_b()) {
				@RemoveActor(f_23a_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_1e3_a0_b()) {
			@RemoveActor(f_23a_a0_o());
		}
	}
}

bool f_1e3_a0_b(void)
{
	return true;
}

bool f_1e5_a1_b(object a0)
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
	L5 = L3 * 70 + f_240_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_21d_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_221_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_233_a0_v(void)
{
	if (f_2fa_a0_b()) {
		@lshStopSpeech();
	}
}

object f_23a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_240_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_24a_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_24f_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_25b_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_260_a2_v(object a0, object a1)
{
	@SetVariable("ood11Nude1", 1);
}

void f_266_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d11q01", 2);
	L0 = f_2c4_a0_o();
	L0->AddMark("d11q01NudeGotoRastrel", "pt_d11q01_msoldier", 1, 15482, f_25b_a0_f());
	f_2e6_a0_v();
	f_24f_a2_b("quest_d11_01", "init_soldiers");
}

bool f_282_a1_b(object a0)
{
	if (f_24a_a1_i("d11q01") == 1) {
		return true;
	}
	return false;
}

bool f_28e_a1_b(object a0)
{
	if (f_24a_a1_i("ood11Nude1") == 0) {
		return true;
	}
	return false;
}

object f_29a_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2a7_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_29a_a0_o();
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

object f_2c4_a0_o(void)
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

int f_2d5_a0_i(void)
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

void f_2e6_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 194, 1, 15479);
	f_2a7_a2_b(L0, 192);
}

int f_2f6_a0_i(void)
{
	return 14839;
}

string f_2f8_a0_s(void)
{
	return "ui/NPC_None.png";
}

bool f_2fa_a0_b(void)
{
	return false;
}

