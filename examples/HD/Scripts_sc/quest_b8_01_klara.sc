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
		if (!f_361_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_52e_a0_i());
		L0->SetNPCDescription(f_52c_a0_i());
		L0->SetPhoto(f_530_a0_s());
		L0->SetPhoto2(f_532_a0_s());
		L0->SetPlayerName(f_51b_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_3b8_a1_b(f_477_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_3a6_a1_v(a0);
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
			f_9a_a1_v("Grin");
			tv0->SetMessage(521402);
			tv0->ClearReplies();
			if (f_4cc_a1_b(tv1)) {
				tv0->AddReply(523899, 25181, 25179);
			}
			if (f_4cc_a1_b(tv1)) {
				tv0->AddReply(521403, 22582, 22581);
			}
			tv0->AddReply(521406, -1, 22584);
			break;
			return;
		}
		if (f_534_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_442_a1_v(tv2);
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

	void f_9a_a1_v(string a0)
	{
		if (!f_534_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_452_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_470_a0_v();
			if (a1 == 22583) {
				f_4b9_a2_v(tv1, tv0);
			}
			if (a1 == 25211) {
				f_4b9_a2_v(tv1, tv0);
			}
			if (a1 == 25212) {
				f_4b9_a2_v(tv1, tv0);
			}
			if (a1 == 25197) {
				f_4c2_a2_v(tv1, tv0);
			}
			if (a1 == 25198) {
				f_4c2_a2_v(tv1, tv0);
			}
			if (a1 == 25189) {
				f_4c2_a2_v(tv1, tv0);
			}
			if (a0 == 22580) {
				f_9a_a1_v("Grin");
				tv0->SetMessage(521402);
				tv0->ClearReplies();
				if (f_4cc_a1_b(tv1)) {
					tv0->AddReply(523899, 25181, 25179);
				}
				if (f_4cc_a1_b(tv1)) {
					tv0->AddReply(521403, 22582, 22581);
				}
				tv0->AddReply(521406, -1, 22584);
				return;
			}
			if (a0 == 22582) {
				f_9a_a1_v("Grin");
				tv0->SetMessage(521404);
				tv0->ClearReplies();
				tv0->AddReply(523900, 25190, 25180);
				tv0->AddReply(523911, 25192, 25191);
				tv0->AddReply(523909, -1, 25189);
				return;
			}
			if (a0 == 25192) {
				f_9a_a1_v("Sly");
				tv0->SetMessage(523912);
				tv0->ClearReplies();
				tv0->AddReply(523913, 25190, 25193);
				return;
			}
			if (a0 == 25190) {
				f_9a_a1_v("Grin");
				tv0->SetMessage(523910);
				tv0->ClearReplies();
				tv0->AddReply(523914, 25196, 25195);
				return;
			}
			if (a0 == 25196) {
				f_9a_a1_v("Smile");
				tv0->SetMessage(523915);
				tv0->ClearReplies();
				tv0->AddReply(523916, -1, 25197);
				tv0->AddReply(523917, -1, 25198);
				return;
			}
			if (a0 == 25181) {
				f_9a_a1_v("Grin");
				tv0->SetMessage(523901);
				tv0->ClearReplies();
				tv0->AddReply(523902, 25183, 25182);
				return;
			}
			if (a0 == 25183) {
				f_9a_a1_v("Sly");
				tv0->SetMessage(523903);
				tv0->ClearReplies();
				tv0->AddReply(523904, 25185, 25184);
				tv0->AddReply(523918, 25200, 25199);
				return;
			}
			if (a0 == 25200) {
				f_9a_a1_v("Smile");
				tv0->SetMessage(523919);
				tv0->ClearReplies();
				tv0->AddReply(523920, 25196, 25201);
				return;
			}
			if (a0 == 25185) {
				f_9a_a1_v("Sly");
				tv0->SetMessage(523905);
				tv0->ClearReplies();
				tv0->AddReply(523906, 25187, 25186);
				tv0->AddReply(523921, 25204, 25203);
				return;
			}
			if (a0 == 25204) {
				f_9a_a1_v("Grin");
				tv0->SetMessage(523922);
				tv0->ClearReplies();
				tv0->AddReply(523923, 25200, 25205);
				return;
			}
			if (a0 == 25187) {
				f_9a_a1_v("Grin");
				tv0->SetMessage(523907);
				tv0->ClearReplies();
				tv0->AddReply(523924, 25208, 25207);
				tv0->AddReply(523926, 25210, 25209);
				return;
			}
			if (a0 == 25210) {
				f_9a_a1_v("Grin");
				tv0->SetMessage(523927);
				tv0->ClearReplies();
				tv0->AddReply(523928, -1, 25211);
				tv0->AddReply(523929, -1, 25212);
				return;
			}
			if (a0 == 25208) {
				f_9a_a1_v("Fear");
				tv0->SetMessage(523925);
				tv0->ClearReplies();
				tv0->AddReply(521405, -1, 22583);
				return;
			}
			tv3 = true;
			if (f_534_a0_b()) {
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

	void f_214_a1_v(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		f_245_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_477_a0_o());
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
			@RemoveActor(f_477_a0_o());
			@Hold();
		}
		f_2b0_a0_v();
	}

	void OnLoad(void)
	{
		f_2bf_a0_v();
	}

	void f_245_a0_v(void)
	{
		if (!f_35c_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_2f5_a0_v();
		}
	}

	bool f_253_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_353_a1_b(L0);
	}

	void f_262_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_267_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_341_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_27d_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_286_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_286_a0_v();
			if (f_35c_a0_b() && f_267_a0_b()) {
				if (f_253_a0_b()) {
					f_3f2_a1_b(f_477_a0_o());
				}
			} else {
				f_262_a0_v();
				f_27d_a0_v();
			}
		}
	}

	void f_2b0_a0_v(void)
	{
		f_33c_a0_v();
		f_286_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_2bf_a0_v(void)
	{
		@StopGroup0();
		f_286_a0_v();
		f_442_a1_v("Neutral");
		f_27d_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_27d_a0_v();
		} else {
			f_442_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_33c_a0_v();
			f_353_a1_b(a0);
			enable OnUse;
			f_214_a1_v(a0);
			f_442_a1_v("Neutral");
			f_286_a0_v();
			f_27d_a0_v();
		}
	}
}

void f_2f5_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_35c_a0_b()) {
		return;
	}
	L0 = f_4a8_a0_i();
	for (L1 = 0; L1 < 5 && f_35c_a0_b(); L1++) {
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
			@PlayAnimation("all", f_4a1_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_33a_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_33a_a0_b(void)
{
	return true;
}

void f_33c_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_341_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_349_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_353_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_349_a1_b(L0);
}

bool f_35c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_361_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_47d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_534_a0_b()) {
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

void f_3a6_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_534_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_3b8_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3f2_a1_b(a0)) {
			if (!f_417_a1_b(a0)) {
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
		if (!f_417_a1_b(a0)) {
			if (!f_3f2_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3f2_a1_b(object a0)
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
	return f_461_a1_b(L4);
}

bool f_417_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_498_a0_i() + "m";
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
	return f_461_a1_b(L4);
}

void f_442_a1_v(string a0)
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

void f_452_a2_v(string a0, bool a1)
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

bool f_461_a1_b(string a0)
{
	if (f_534_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_470_a0_v(void)
{
	if (f_534_a0_b()) {
		@lshStopSpeech();
	}
}

object f_477_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_47d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_487_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_48c_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_498_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_4a1_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_4a8_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_4a1_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_4b9_a2_v(object a0, object a1)
{
	@SetVariable("b8q01", 3);
	f_4e5_a0_v();
}

void f_4c2_a2_v(object a0, object a1)
{
	f_4d8_a0_v();
	f_48c_a2_b("quest_b8_01", "fail");
}

bool f_4cc_a1_b(object a0)
{
	if (f_487_a1_i("b8q01") == 2) {
		return true;
	}
	return false;
}

void f_4d8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 693, 1, 535229);
	f_4ff_a2_b(L0, 284);
}

void f_4e5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 287, 1, 521458);
	f_4ff_a2_b(L0, 284);
}

object f_4f2_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_4ff_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_4f2_a0_o();
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

int f_51b_a0_i(void)
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

int f_52c_a0_i(void)
{
	return 515540;
}

int f_52e_a0_i(void)
{
	return 502865;
}

string f_530_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

string f_532_a0_s(void)
{
	return "ui/NPC_Klara_b.png";
}

bool f_534_a0_b(void)
{
	return true;
}

