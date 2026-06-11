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
		if (!f_299_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_454_a0_i());
		L0->SetNPCDescription(f_452_a0_i());
		L0->SetPhoto(f_456_a0_s());
		L0->SetPhoto2(f_458_a0_s());
		L0->SetPlayerName(f_441_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2f0_a1_b(f_3af_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2de_a1_v(a0);
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
			if (!f_3ff_a1_b(tv1)) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(530461);
				tv0->ClearReplies();
				tv0->AddReply(531473, 32825, 32824);
				tv0->AddReply(531479, 32825, 32830);
				break;
			}
			f_a5_a1_v("Neutral");
			tv0->SetMessage(530463);
			tv0->ClearReplies();
			tv0->AddReply(530464, -1, 31830);
			tv0->AddReply(531472, -1, 32823);
			break;
			return;
		}
		if (f_45a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_37a_a1_v(tv2);
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

	void f_a5_a1_v(string a0)
	{
		if (!f_45a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_38a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_3a8_a0_v();
			if (a1 == 31828) {
				f_3f1_a2_v(tv1, tv0);
			}
			if (a0 == 31827) {
				if (!f_3ff_a1_b(tv1)) {
					f_a5_a1_v("Neutral");
					tv0->SetMessage(530461);
					tv0->ClearReplies();
					tv0->AddReply(531473, 32825, 32824);
					tv0->AddReply(531479, 32825, 32830);
					return;
				}
				f_a5_a1_v("Neutral");
				tv0->SetMessage(530463);
				tv0->ClearReplies();
				tv0->AddReply(530464, -1, 31830);
				tv0->AddReply(531472, -1, 32823);
				return;
			}
			if (a0 == 32825) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(531474);
				tv0->ClearReplies();
				tv0->AddReply(531475, 32827, 32826);
				tv0->AddReply(531480, 32827, 32832);
				return;
			}
			if (a0 == 32827) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(531476);
				tv0->ClearReplies();
				tv0->AddReply(531477, 32829, 32828);
				tv0->AddReply(531481, 32829, 32834);
				return;
			}
			if (a0 == 32829) {
				f_a5_a1_v("Neutral");
				tv0->SetMessage(531478);
				tv0->ClearReplies();
				tv0->AddReply(530462, -1, 31828);
				tv0->AddReply(531482, -1, 32836);
				return;
			}
			tv3 = true;
			if (f_45a_a0_b()) {
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
	var Vector tv0;
	var bool tv1;

	void f_14c_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_17d_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_3af_a0_o());
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
			@RemoveActor(f_3af_a0_o());
			@Hold();
		}
		f_1e8_a0_v();
	}

	void OnLoad(void)
	{
		f_1f7_a0_v();
	}

	void f_17d_a0_v(void)
	{
		if (!f_294_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_22d_a0_v();
		}
	}

	bool f_18b_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_28b_a1_b(L0);
	}

	void f_19a_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_19f_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_279_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1b5_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1be_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1be_a0_v();
			if (f_294_a0_b() && f_19f_a0_b()) {
				if (f_18b_a0_b()) {
					f_32a_a1_b(f_3af_a0_o());
				}
			} else {
				f_19a_a0_v();
				f_1b5_a0_v();
			}
		}
	}

	void f_1e8_a0_v(void)
	{
		f_274_a0_v();
		f_1be_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_1f7_a0_v(void)
	{
		@StopGroup0();
		f_1be_a0_v();
		f_37a_a1_v("Neutral");
		f_1b5_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1b5_a0_v();
		} else {
			f_37a_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_274_a0_v();
			f_28b_a1_b(a0);
			enable OnUse;
			f_14c_a1_v(a0);
			f_37a_a1_v("Neutral");
			f_1be_a0_v();
			f_1b5_a0_v();
		}
	}
}

void f_22d_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_294_a0_b()) {
		return;
	}
	L0 = f_3e0_a0_i();
	for (L1 = 0; L1 < 5 && f_294_a0_b(); L1++) {
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
			@PlayAnimation("all", f_3d9_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_272_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_272_a0_b(void)
{
	return true;
}

void f_274_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_279_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_281_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_28b_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_281_a1_b(L0);
}

bool f_294_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_299_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_3b5_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_45a_a0_b()) {
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

void f_2de_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_45a_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2f0_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_32a_a1_b(a0)) {
			if (!f_34f_a1_b(a0)) {
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
		if (!f_34f_a1_b(a0)) {
			if (!f_32a_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_32a_a1_b(object a0)
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
	return f_399_a1_b(L4);
}

bool f_34f_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_3d0_a0_i() + "m";
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
	return f_399_a1_b(L4);
}

void f_37a_a1_v(string a0)
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

void f_38a_a2_v(string a0, bool a1)
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

bool f_399_a1_b(string a0)
{
	if (f_45a_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_3a8_a0_v(void)
{
	if (f_45a_a0_b()) {
		@lshStopSpeech();
	}
}

object f_3af_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_3b5_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_3bf_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_3c4_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_3d0_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_3d9_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_3e0_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_3d9_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_3f1_a2_v(object a0, object a1)
{
	@SetVariable("b10q04LaskaTalk", 9);
	f_40b_a0_v();
	f_3c4_a2_b("quest_b10_04", "restore_laska");
}

bool f_3ff_a1_b(object a0)
{
	if (f_3bf_a1_i("b10q04LaskaTalk") == 9) {
		return true;
	}
	return false;
}

void f_40b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 559, 2, 530538);
	f_425_a2_b(L0, 550);
}

object f_418_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_425_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_418_a0_o();
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

int f_441_a0_i(void)
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

int f_452_a0_i(void)
{
	return 515542;
}

int f_454_a0_i(void)
{
	return 502867;
}

string f_456_a0_s(void)
{
	return "ui/NPC_Laska.png";
}

string f_458_a0_s(void)
{
	return "ui/NPC_Laska_b.png";
}

bool f_45a_a0_b(void)
{
	return true;
}

