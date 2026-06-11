event OnDialogReply 11;
event OnTrigger 26;
event OnUnload 6;
event OnLoad 5;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

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
		if (!f_508_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_65d_a0_i());
		L0->SetNPCDescription(f_65b_a0_i());
		L0->SetPhoto(f_65f_a0_s());
		L0->SetPhoto2(f_661_a0_s());
		L0->SetPlayerName(f_6cf_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_55f_a1_b(f_61e_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_54d_a1_v(a0);
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
			f_8b_a1_v("Neutral");
			tv0->SetMessage(538516);
			tv0->ClearReplies();
			tv0->AddReply(538517, 40400, 40395);
			tv0->AddReply(538518, 40397, 40396);
			break;
			return;
		}
		if (f_663_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5e9_a1_v(tv2);
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

	void f_8b_a1_v(string a0)
	{
		if (!f_663_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5f9_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_617_a0_v();
			if (a0 == 40394) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(538516);
				tv0->ClearReplies();
				tv0->AddReply(538517, 40400, 40395);
				tv0->AddReply(538518, 40397, 40396);
				return;
			}
			if (a0 == 40397) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(538519);
				tv0->ClearReplies();
				tv0->AddReply(538520, 40404, 40398);
				tv0->AddReply(538521, 40404, 40399);
				return;
			}
			if (a0 == 40400) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(538522);
				tv0->ClearReplies();
				tv0->AddReply(538523, 40404, 40401);
				tv0->AddReply(538524, 40397, 40402);
				return;
			}
			if (a0 == 40404) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(538525);
				tv0->ClearReplies();
				tv0->AddReply(538526, -1, 40407);
				tv0->AddReply(538527, -1, 40408);
				return;
			}
			tv3 = true;
			if (f_663_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t2
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_508_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_65d_a0_i());
		L0->SetNPCDescription(f_65b_a0_i());
		L0->SetPhoto(f_65f_a0_s());
		L0->SetPhoto2(f_661_a0_s());
		L0->SetPlayerName(f_6cf_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_54d_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t3
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
			f_19e_a1_v("Neutral");
			tv0->SetMessage(538529);
			tv0->ClearReplies();
			if (f_695_a1_b(tv1)) {
				tv0->AddReply(538538, 40420, 40419);
			}
			tv0->AddReply(538535, -1, 40416);
			tv0->AddReply(538536, -1, 40417);
			break;
			return;
		}
		if (f_663_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5e9_a1_v(tv2);
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

	void f_19e_a1_v(string a0)
	{
		if (!f_663_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5f9_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_617_a0_v();
			if (a1 == 40419) {
				f_66b_a2_v(tv1, tv0);
			}
			if (a1 == 40477) {
				f_671_a2_v(tv1, tv0);
				f_678_a2_v(tv1, tv0);
			}
			if (a1 == 40478) {
				f_671_a2_v(tv1, tv0);
				f_678_a2_v(tv1, tv0);
			}
			if (a1 == 40479) {
				f_678_a2_v(tv1, tv0);
				f_67f_a2_v(tv1, tv0);
				f_686_a2_v(tv1, tv0);
			}
			if (a1 == 40476) {
				f_671_a2_v(tv1, tv0);
				f_678_a2_v(tv1, tv0);
			}
			if (a0 == 40410) {
				f_19e_a1_v("Neutral");
				tv0->SetMessage(538529);
				tv0->ClearReplies();
				if (f_695_a1_b(tv1)) {
					tv0->AddReply(538538, 40420, 40419);
				}
				tv0->AddReply(538535, -1, 40416);
				tv0->AddReply(538536, -1, 40417);
				return;
			}
			if (a0 == 40420) {
				f_19e_a1_v("Neutral");
				tv0->SetMessage(538539);
				tv0->ClearReplies();
				tv0->AddReply(538540, 40426, 40421);
				tv0->AddReply(538541, 40424, 40422);
				tv0->AddReply(538542, 40425, 40423);
				return;
			}
			if (a0 == 40425) {
				f_19e_a1_v("Neutral");
				tv0->SetMessage(538544);
				tv0->ClearReplies();
				tv0->AddReply(538587, 40474, 40473);
				tv0->AddReply(538589, -1, 40476);
				return;
			}
			if (a0 == 40424) {
				f_19e_a1_v("Neutral");
				tv0->SetMessage(538543);
				tv0->ClearReplies();
				if (!f_69f_a1_b(tv1) && !f_6a9_a1_b(tv1)) {
					tv0->AddReply(538592, -1, 40479);
				}
				tv0->AddReply(538593, 40425, 40480);
				return;
			}
			if (a0 == 40426) {
				f_19e_a1_v("Neutral");
				tv0->SetMessage(538545);
				tv0->ClearReplies();
				tv0->AddReply(538585, 40424, 40470);
				tv0->AddReply(538586, 40474, 40471);
				return;
			}
			if (a0 == 40474) {
				f_19e_a1_v("Neutral");
				tv0->SetMessage(538588);
				tv0->ClearReplies();
				tv0->AddReply(538590, -1, 40477);
				tv0->AddReply(538591, -1, 40478);
				return;
			}
			tv3 = true;
			if (f_663_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t4
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_508_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_65d_a0_i());
		L0->SetNPCDescription(f_65b_a0_i());
		L0->SetPhoto(f_65f_a0_s());
		L0->SetPhoto2(f_661_a0_s());
		L0->SetPlayerName(f_6cf_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_54d_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t5
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
			f_33f_a1_v("Neutral");
			tv0->SetMessage(538575);
			tv0->ClearReplies();
			if (f_68b_a1_b(tv1)) {
				tv0->AddReply(538576, 40462, 40461);
			}
			tv0->AddReply(538581, -1, 40466);
			tv0->AddReply(538582, -1, 40467);
			break;
			return;
		}
		if (f_663_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5e9_a1_v(tv2);
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

	void f_33f_a1_v(string a0)
	{
		if (!f_663_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5f9_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_617_a0_v();
			if (a1 == 40461) {
				f_665_a2_v(tv1, tv0);
			}
			if (a0 == 40460) {
				f_33f_a1_v("Neutral");
				tv0->SetMessage(538575);
				tv0->ClearReplies();
				if (f_68b_a1_b(tv1)) {
					tv0->AddReply(538576, 40462, 40461);
				}
				tv0->AddReply(538581, -1, 40466);
				tv0->AddReply(538582, -1, 40467);
				return;
			}
			if (a0 == 40462) {
				f_33f_a1_v("Neutral");
				tv0->SetMessage(538577);
				tv0->ClearReplies();
				tv0->AddReply(538578, 40464, 40463);
				tv0->AddReply(538583, -1, 40468);
				return;
			}
			if (a0 == 40464) {
				f_33f_a1_v("Neutral");
				tv0->SetMessage(538579);
				tv0->ClearReplies();
				tv0->AddReply(538580, -1, 40465);
				tv0->AddReply(538584, -1, 40469);
				return;
			}
			tv3 = true;
			if (f_663_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t6
{
	var Vector tv0;
	var bool tv1;

	void init(void)
	{
		f_3c3_a0_v();
	}

	void f_3c3_a0_v(void)
	{
		f_3ec_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_61e_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv1 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv1) {
			@RemoveActor(f_61e_a0_o());
			@Hold();
		}
		f_457_a0_v();
	}

	void OnLoad(void)
	{
		f_466_a0_v();
	}

	void f_3ec_a0_v(void)
	{
		if (!f_503_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_49c_a0_v();
		}
	}

	bool f_3fa_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_4fa_a1_b(L0);
	}

	void f_409_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_40e_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_4e8_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_424_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_42d_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_42d_a0_v();
			if (f_503_a0_b() && f_40e_a0_b()) {
				if (f_3fa_a0_b()) {
					f_599_a1_b(f_61e_a0_o());
				}
			} else {
				f_409_a0_v();
				f_424_a0_v();
			}
		}
	}

	void f_457_a0_v(void)
	{
		f_4e3_a0_v();
		f_42d_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_466_a0_v(void)
	{
		@StopGroup0();
		f_42d_a0_v();
		f_5e9_a1_v("Neutral");
		f_424_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_424_a0_v();
		} else {
			f_5e9_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_4e3_a0_v();
			f_4fa_a1_b(a0);
			enable OnUse;
			f_70c_a1_v(a0);
			f_5e9_a1_v("Neutral");
			f_42d_a0_v();
			f_424_a0_v();
		}
	}
}

void f_49c_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_503_a0_b()) {
		return;
	}
	L0 = f_64a_a0_i();
	for (L1 = 0; L1 < 5 && f_503_a0_b(); L1++) {
		if (!L0) {
			bool L2;
			@Sleep(3, L2);
			if (!L2) {
				break;
			}
		} else {
			int L3;
			int L4;
			bool L5;
			@irand(L3, L0);
			@irand(L4, 5);
			if (L4 != 0) {
				L3 = 0;
			}
			@PlayAnimation("all", f_643_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_4e1_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_4e1_a0_b(void)
{
	return true;
}

void f_4e3_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_4e8_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_4f0_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_4fa_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_4f0_a1_b(L0);
}

bool f_503_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_508_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_624_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_663_a0_b()) {
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

void f_54d_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_663_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_55f_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_599_a1_b(a0)) {
			if (!f_5be_a1_b(a0)) {
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
		if (!f_5be_a1_b(a0)) {
			if (!f_599_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_599_a1_b(object a0)
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
	return f_608_a1_b(L4);
}

bool f_5be_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_63a_a0_i() + "m";
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
	return f_608_a1_b(L4);
}

void f_5e9_a1_v(string a0)
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

void f_5f9_a2_v(string a0, bool a1)
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

bool f_608_a1_b(string a0)
{
	if (f_663_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_617_a0_v(void)
{
	if (f_663_a0_b()) {
		@lshStopSpeech();
	}
}

object f_61e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_624_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_62e_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_63a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_643_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_64a_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_643_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_65b_a0_i(void)
{
	return 515540;
}

int f_65d_a0_i(void)
{
	return 502865;
}

string f_65f_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

string f_661_a0_s(void)
{
	return "ui/NPC_Klara_b.png";
}

bool f_663_a0_b(void)
{
	return true;
}

void f_665_a2_v(object a0, object a1)
{
	f_6e0_a1_v("Late1");
}

void f_66b_a2_v(object a0, object a1)
{
	f_6e0_a1_v("1");
}

void f_671_a2_v(object a0, object a1)
{
	f_62e_a2_b("klara2_positioner", "remove_klara");
}

void f_678_a2_v(object a0, object a1)
{
	f_62e_a2_b("klara2_svita_positioner", "place_svita");
}

void f_67f_a2_v(object a0, object a1)
{
	f_62e_a2_b("klara2_positioner", "klara_stay");
}

void f_686_a2_v(object a0, object a1)
{
	f_707_a0_v();
}

bool f_68b_a1_b(object a0)
{
	if (f_6b3_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_695_a1_b(object a0)
{
	if (f_6ba_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_69f_a1_b(object a0)
{
	if (f_6c1_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_6a9_a1_b(object a0)
{
	if (f_6c8_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_6b3_a1_b(object a0)
{
	return f_6eb_a1_b("Late1");
}

bool f_6ba_a1_b(object a0)
{
	return f_6eb_a1_b("1");
}

bool f_6c1_a1_b(object a0)
{
	return f_63a_a0_i() == 6;
}

bool f_6c8_a1_b(object a0)
{
	return f_63a_a0_i() == 7;
}

int f_6cf_a0_i(void)
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

void f_6e0_a1_v(string a0)
{
	int L0;
	@GetProperty("day", L0);
	@SetVariable("K2S_Klara2" + a0 + L0, 1);
}

bool f_6eb_a1_b(string a0)
{
	int L0;
	int L1;
	@GetProperty("day", L0);
	@GetVariable("K2S_Klara2" + a0 + L0, L1);
	return L1 == 0;
}

int f_6f7_a0_i(void)
{
	int L0;
	@GetVariable("k2system_klara_day", L0);
	return L0;
}

void f_6fd_a1_v(int a0)
{
	int L0;
	L0 = f_6f7_a0_i();
	@SetVariable("k2system_klara_state" + L0, a0);
}

void f_707_a0_v(void)
{
	f_6fd_a1_v(1);
}

void f_70c_a1_v(object a0)
{
	int L0;
	int L1;
	@GetVariable("mt_klara2", L0);
	if (!L0) {
		t0{a0};
		@SetVariable("mt_klara2", 1);
		@UnlockAchievement("ACHIEVEMENT_SOMETHING");
	}
	@GetProperty("day", L1);
	if (L1 == f_63a_a0_i()) {
		t2{a0};
	} else {
		t4{a0};
	}
}

