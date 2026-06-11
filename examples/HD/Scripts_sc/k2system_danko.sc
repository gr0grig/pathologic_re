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
		if (!f_460_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_60c_a0_i());
		L0->SetNPCDescription(f_60a_a0_i());
		L0->SetPhoto(f_60e_a0_s());
		L0->SetPhoto2(f_610_a0_s());
		L0->SetPlayerName(f_6e3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_4b7_a1_b(f_576_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_4a5_a1_v(a0);
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
			tv0->SetMessage(539066);
			tv0->ClearReplies();
			tv0->AddReply(539067, -1, 41015);
			tv0->AddReply(541074, -1, 43179);
			break;
			return;
		}
		if (f_612_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_541_a1_v(tv2);
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
		if (!f_612_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_551_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_56f_a0_v();
			if (a0 == 41014) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(539066);
				tv0->ClearReplies();
				tv0->AddReply(539067, -1, 41015);
				tv0->AddReply(541074, -1, 43179);
				return;
			}
			tv3 = true;
			if (f_612_a0_b()) {
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
		if (!f_460_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_60c_a0_i());
		L0->SetNPCDescription(f_60a_a0_i());
		L0->SetPhoto(f_60e_a0_s());
		L0->SetPhoto2(f_610_a0_s());
		L0->SetPlayerName(f_6e3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_4b7_a1_b(f_576_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_4a5_a1_v(a0);
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
			f_17e_a1_v("Neutral");
			tv0->SetMessage(539760);
			tv0->ClearReplies();
			if (f_66d_a1_b(tv1)) {
				tv0->AddReply(539761, 41714, 41713);
			}
			if (f_66d_a1_b(tv1)) {
				tv0->AddReply(539764, 41717, 41716);
			}
			if (f_663_a1_b(tv1)) {
				tv0->AddReply(539767, 41720, 41719);
			}
			if (f_677_a1_b(tv1)) {
				tv0->AddReply(539770, 41723, 41722);
			}
			tv0->AddReply(539773, -1, 41725);
			tv0->AddReply(541091, -1, 43200);
			break;
			return;
		}
		if (f_612_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_541_a1_v(tv2);
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

	void f_17e_a1_v(string a0)
	{
		if (!f_612_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_551_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_56f_a0_v();
			if (a1 == 41715) {
				f_628_a2_v(tv1, tv0);
				f_641_a2_v(tv1, tv0);
				f_614_a2_v(tv1, tv0);
			}
			if (a1 == 41718) {
				f_62d_a2_v(tv1, tv0);
			}
			if (a1 == 41721) {
				f_632_a2_v(tv1, tv0);
				f_63c_a2_v(tv1, tv0);
				f_641_a2_v(tv1, tv0);
				f_61b_a2_v(tv1, tv0);
				f_646_a2_v(tv1, tv0);
				f_622_a2_v(tv1, tv0);
			}
			if (a1 == 41724) {
				f_637_a2_v(tv1, tv0);
				f_651_a2_v(tv1, tv0);
				f_622_a2_v(tv1, tv0);
				f_65c_a2_v(tv1, tv0);
			}
			if (a0 == 41712) {
				f_17e_a1_v("Neutral");
				tv0->SetMessage(539760);
				tv0->ClearReplies();
				if (f_66d_a1_b(tv1)) {
					tv0->AddReply(539761, 41714, 41713);
				}
				if (f_66d_a1_b(tv1)) {
					tv0->AddReply(539764, 41717, 41716);
				}
				if (f_663_a1_b(tv1)) {
					tv0->AddReply(539767, 41720, 41719);
				}
				if (f_677_a1_b(tv1)) {
					tv0->AddReply(539770, 41723, 41722);
				}
				tv0->AddReply(539773, -1, 41725);
				tv0->AddReply(541091, -1, 43200);
				return;
			}
			if (a0 == 41723) {
				f_17e_a1_v("Neutral");
				tv0->SetMessage(539771);
				tv0->ClearReplies();
				tv0->AddReply(541092, 43203, 43201);
				tv0->AddReply(541093, 43203, 43202);
				return;
			}
			if (a0 == 43203) {
				f_17e_a1_v("Neutral");
				tv0->SetMessage(541094);
				tv0->ClearReplies();
				tv0->AddReply(539772, -1, 41724);
				return;
			}
			if (a0 == 41720) {
				f_17e_a1_v("Neutral");
				tv0->SetMessage(539768);
				tv0->ClearReplies();
				tv0->AddReply(541095, 43207, 43205);
				tv0->AddReply(541096, 43207, 43206);
				return;
			}
			if (a0 == 43207) {
				f_17e_a1_v("Neutral");
				tv0->SetMessage(541097);
				tv0->ClearReplies();
				tv0->AddReply(541098, 43211, 43209);
				tv0->AddReply(541099, 43211, 43210);
				return;
			}
			if (a0 == 43211) {
				f_17e_a1_v("Neutral");
				tv0->SetMessage(541100);
				tv0->ClearReplies();
				tv0->AddReply(539769, -1, 41721);
				return;
			}
			if (a0 == 41717) {
				f_17e_a1_v("Neutral");
				tv0->SetMessage(539765);
				tv0->ClearReplies();
				tv0->AddReply(541101, 43215, 43213);
				tv0->AddReply(541102, 43216, 43214);
				return;
			}
			if (a0 == 43216) {
				f_17e_a1_v("Neutral");
				tv0->SetMessage(541104);
				tv0->ClearReplies();
				tv0->AddReply(541105, 43215, 43217);
				return;
			}
			if (a0 == 43215) {
				f_17e_a1_v("Neutral");
				tv0->SetMessage(541103);
				tv0->ClearReplies();
				tv0->AddReply(539766, -1, 41718);
				return;
			}
			if (a0 == 41714) {
				f_17e_a1_v("Neutral");
				tv0->SetMessage(539762);
				tv0->ClearReplies();
				tv0->AddReply(539763, -1, 41715);
				return;
			}
			tv3 = true;
			if (f_612_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t4
{
	var Vector tv0;
	var bool tv1;

	void init(void)
	{
		f_2f2_a0_v();
	}

	void f_2f2_a0_v(void)
	{
		f_31b_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_576_a0_o());
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
			@RemoveActor(f_576_a0_o());
			@Hold();
		}
		f_386_a0_v();
	}

	void OnLoad(void)
	{
		f_395_a0_v();
	}

	void f_31b_a0_v(void)
	{
		if (!f_45b_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_3cb_a0_v();
		}
	}

	bool f_329_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_452_a1_b(L0);
	}

	void f_338_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_33d_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_417_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_353_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_35c_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_35c_a0_v();
			if (f_45b_a0_b() && f_33d_a0_b()) {
				if (f_329_a0_b()) {
					f_4f1_a1_b(f_576_a0_o());
				}
			} else {
				f_338_a0_v();
				f_353_a0_v();
			}
		}
	}

	void f_386_a0_v(void)
	{
		f_412_a0_v();
		f_35c_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_395_a0_v(void)
	{
		@StopGroup0();
		f_35c_a0_v();
		f_541_a1_v("Neutral");
		f_353_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_353_a0_v();
		} else {
			f_541_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_412_a0_v();
			f_452_a1_b(a0);
			enable OnUse;
			f_780_a1_v(a0);
			f_541_a1_v("Neutral");
			f_35c_a0_v();
			f_353_a0_v();
		}
	}
}

void f_3cb_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_45b_a0_b()) {
		return;
	}
	L0 = f_5f9_a0_i();
	for (L1 = 0; L1 < 5 && f_45b_a0_b(); L1++) {
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
			@PlayAnimation("all", f_5f2_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_410_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_410_a0_b(void)
{
	return true;
}

void f_412_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_417_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_41f_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_42b_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_41f_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_586_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_441_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_448_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_452_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_448_a1_b(L0);
}

bool f_45b_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_460_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_57c_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_612_a0_b()) {
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

void f_4a5_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_612_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_4b7_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_4f1_a1_b(a0)) {
			if (!f_516_a1_b(a0)) {
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
		if (!f_516_a1_b(a0)) {
			if (!f_4f1_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_4f1_a1_b(object a0)
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
	return f_560_a1_b(L4);
}

bool f_516_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_5e9_a0_i() + "m";
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
	return f_560_a1_b(L4);
}

void f_541_a1_v(string a0)
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

void f_551_a2_v(string a0, bool a1)
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

bool f_560_a1_b(string a0)
{
	if (f_612_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_56f_a0_v(void)
{
	if (f_612_a0_b()) {
		@lshStopSpeech();
	}
}

object f_576_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_57c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_586_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_591_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_59d_a2_v(object a0, int a1)
{
	f_441_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_591_a2_v(L0, a1);
	}
}

bool f_5b0_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_5d3_a1_v(a1);
	f_42b_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_5d3_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_5dd_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_5e9_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_5f2_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_5f9_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_5f2_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_60a_a0_i(void)
{
	return 515573;
}

int f_60c_a0_i(void)
{
	return 504032;
}

string f_60e_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_610_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_612_a0_b(void)
{
	return true;
}

void f_614_a2_v(object a0, object a1)
{
	f_5b0_a2_b(a0, 0.05000000074505806);
}

void f_61b_a2_v(object a0, object a1)
{
	f_5b0_a2_b(a0, -0.05000000074505806);
}

void f_622_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_628_a2_v(object a0, object a1)
{
	f_751_a0_v();
}

void f_62d_a2_v(object a0, object a1)
{
	f_759_a0_v();
}

void f_632_a2_v(object a0, object a1)
{
	f_767_a0_v();
}

void f_637_a2_v(object a0, object a1)
{
	f_77b_a0_v();
}

void f_63c_a2_v(object a0, object a1)
{
	f_6fa_a0_v();
}

void f_641_a2_v(object a0, object a1)
{
	f_6f4_a0_v();
}

void f_646_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_59d_a2_v(a0, L0 + 3000);
}

void f_651_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_59d_a2_v(a0, L0 + 4000);
}

void f_65c_a2_v(object a0, object a1)
{
	f_5b0_a2_b(a0, -0.30000001192092896);
}

bool f_663_a1_b(object a0)
{
	if (f_681_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_66d_a1_b(object a0)
{
	if (f_687_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_677_a1_b(object a0)
{
	if (f_68d_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_681_a1_b(object a0)
{
	return f_76f_a0_b();
}

bool f_687_a1_b(object a0)
{
	return f_761_a0_b();
}

bool f_68d_a1_b(object a0)
{
	return f_775_a0_b();
}

void f_693_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 755, 2, 539740);
	f_6c7_a2_b(L0, 751);
}

void f_6a0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 759, 2, 539744);
	f_6c7_a2_b(L0, 757);
}

void f_6ad_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 760, 2, 539745);
	f_6c7_a2_b(L0, 757);
}

object f_6ba_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_6c7_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_6ba_a0_o();
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

int f_6e3_a0_i(void)
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

void f_6f4_a0_v(void)
{
	f_5dd_a2_b("klara2_npc_positioner", "remove_danko");
}

void f_6fa_a0_v(void)
{
	f_5dd_a2_b("klara2_npc_positioner", "remove_burah");
}

int f_700_a0_i(void)
{
	int L0;
	@GetVariable("k2system_klara_day", L0);
	return L0;
}

int f_706_a0_i(void)
{
	int L0;
	@GetVariable("k2system_burah_day", L0);
	return L0;
}

int f_70c_a0_i(void)
{
	int L0;
	@GetVariable("k2system_danko_day", L0);
	return L0;
}

int f_712_a0_i(void)
{
	int L0;
	int L1;
	L0 = f_706_a0_i();
	@GetVariable("k2system_burah_state" + L0, L1);
	return L1;
}

void f_71d_a1_v(int a0)
{
	int L0;
	L0 = f_706_a0_i();
	@SetVariable("k2system_burah_state" + L0, a0);
}

int f_727_a0_i(void)
{
	int L0;
	int L1;
	L0 = f_70c_a0_i();
	@GetVariable("k2system_danko_state" + L0, L1);
	return L1;
}

void f_732_a1_v(int a0)
{
	int L0;
	L0 = f_70c_a0_i();
	@SetVariable("k2system_danko_state" + L0, a0);
}

int f_73c_a0_i(void)
{
	int L0;
	int L1;
	L0 = f_700_a0_i();
	@GetVariable("k2system_klara_state" + L0, L1);
	return L1;
}

void f_747_a1_v(int a0)
{
	int L0;
	L0 = f_700_a0_i();
	@SetVariable("k2system_klara_state" + L0, a0);
}

void f_751_a0_v(void)
{
	f_6a0_a0_v();
	f_732_a1_v(2);
}

void f_759_a0_v(void)
{
	f_6ad_a0_v();
	f_732_a1_v(1);
}

bool f_761_a0_b(void)
{
	return f_727_a0_i() == 0;
}

void f_767_a0_v(void)
{
	f_693_a0_v();
	f_71d_a1_v(3);
}

bool f_76f_a0_b(void)
{
	return f_712_a0_i() == 1;
}

bool f_775_a0_b(void)
{
	return f_73c_a0_i() == 1;
}

void f_77b_a0_v(void)
{
	f_747_a1_v(3);
}

void f_780_a1_v(object a0)
{
	int L0;
	@GetProperty("day", L0);
	if (L0 == f_5e9_a0_i()) {
		t2{a0};
	} else {
		t0{a0};
	}
}

