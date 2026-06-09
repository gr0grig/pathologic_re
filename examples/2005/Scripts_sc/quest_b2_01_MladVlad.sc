event OnLoad 5;
event evt_11 11;
event OnTrigger 26;
event OnUnload 6;
event OnTimer 7;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_330_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_38a_a1_b(f_437_a0_o());
		if (!f_335_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_4e6_a0_i());
		L0->SetNPCDescription(f_4e4_a0_i());
		L0->SetPhoto(f_4e8_a0_s());
		L0->SetPhoto2(f_4ea_a0_s());
		L0->SetPlayerName(f_4d3_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_379_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t2
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
			f_b1_a1_v("Neutral");
			tv0->SetMessage(520225);
			tv0->ClearReplies();
			if (f_4af_a1_b(tv1)) {
				tv0->AddReply(520226, 21419, 21418);
			}
			if (f_4bb_a1_b(tv1)) {
				tv0->AddReply(520231, 21424, 21423);
			}
			if (f_4c7_a1_b(tv1)) {
				tv0->AddReply(520239, 21432, 21431);
			}
			tv0->AddReply(520246, -1, 21438);
			break;
			return;
		}
		if (f_4ec_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_414_a1_v(tv2);
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

	void f_b1_a1_v(string a0)
	{
		if (!f_4ec_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_41b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_430_a0_v();
			if (a1 == 21418) {
				f_479_a2_v(tv1, tv0);
				f_48b_a2_v(tv1, tv0);
			}
			if (a1 == 21423) {
				f_47f_a2_v(tv1, tv0);
				f_48b_a2_v(tv1, tv0);
			}
			if (a1 == 21431) {
				f_485_a2_v(tv1, tv0);
				f_48b_a2_v(tv1, tv0);
			}
			if (a0 == 21417) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(520225);
				tv0->ClearReplies();
				if (f_4af_a1_b(tv1)) {
					tv0->AddReply(520226, 21419, 21418);
				}
				if (f_4bb_a1_b(tv1)) {
					tv0->AddReply(520231, 21424, 21423);
				}
				if (f_4c7_a1_b(tv1)) {
					tv0->AddReply(520239, 21432, 21431);
				}
				tv0->AddReply(520246, -1, 21438);
				return;
			}
			if (a0 == 21432) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(520240);
				tv0->ClearReplies();
				tv0->AddReply(520241, 21434, 21433);
				return;
			}
			if (a0 == 21434) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(520242);
				tv0->ClearReplies();
				tv0->AddReply(520243, 21436, 21435);
				tv0->AddReply(530818, 32128, 32127);
				return;
			}
			if (a0 == 32128) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(530819);
				tv0->ClearReplies();
				tv0->AddReply(530820, 21436, 32129);
				return;
			}
			if (a0 == 21436) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(520244);
				tv0->ClearReplies();
				tv0->AddReply(520245, -1, 21437);
				tv0->AddReply(527839, -1, 29182);
				return;
			}
			if (a0 == 21424) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(520232);
				tv0->ClearReplies();
				tv0->AddReply(520233, 21426, 21425);
				return;
			}
			if (a0 == 21426) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(520234);
				tv0->ClearReplies();
				tv0->AddReply(520235, 21428, 21427);
				tv0->AddReply(520238, -1, 21430);
				return;
			}
			if (a0 == 21428) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(520236);
				tv0->ClearReplies();
				tv0->AddReply(520237, -1, 21429);
				return;
			}
			if (a0 == 21419) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(520227);
				tv0->ClearReplies();
				tv0->AddReply(520228, 21421, 21420);
				return;
			}
			if (a0 == 21421) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(520229);
				tv0->ClearReplies();
				tv0->AddReply(520230, -1, 21422);
				return;
			}
			tv3 = true;
			if (f_4ec_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t3
{
	var Vector tv0;
	var bool tv1;

	void f_1e2_a1_v(object a0)
	{
		t1{a0};
	}

	void init(void)
	{
		f_213_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv1 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_437_a0_o());
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
			@RemoveActor(f_437_a0_o());
			@Hold();
		}
		f_284_a0_v();
	}

	void OnLoad(void)
	{
		f_293_a0_v();
	}

	void f_213_a0_v(void)
	{
		if (!f_330_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_2c9_a0_v();
		}
	}

	bool f_227_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_327_a1_b(L0);
	}

	void f_236_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_23b_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_315_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_251_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_25a_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_25a_a0_v();
			if (f_330_a0_b() && f_23b_a0_b()) {
				if (f_227_a0_b()) {
					f_3c4_a1_b(f_437_a0_o());
				}
			} else {
				f_236_a0_v();
				f_251_a0_v();
			}
		}
	}

	void f_284_a0_v(void)
	{
		f_310_a0_v();
		f_25a_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void f_293_a0_v(void)
	{
		@StopGroup0();
		f_25a_a0_v();
		f_414_a1_v("Neutral");
		f_251_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_251_a0_v();
		} else {
			f_414_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_310_a0_v();
			f_327_a1_b(a0);
			enable OnUse;
			f_1e2_a1_v(a0);
			f_414_a1_v("Neutral");
			f_25a_a0_v();
			f_251_a0_v();
		}
	}
}

void f_2c9_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_330_a0_b()) {
		return;
	}
	L0 = f_468_a0_i();
	for (L1 = 0; L1 < 5 && f_330_a0_b(); L1++) {
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
			@PlayAnimation("all", f_461_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_30e_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_30e_a0_b(void)
{
	return true;
}

void f_310_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_315_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_31d_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_327_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_31d_a1_b(L0);
}

bool f_330_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_335_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_43d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_4ec_a0_b()) {
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

void f_379_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_4ec_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_38a_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_3c4_a1_b(a0)) {
			if (!f_3e9_a1_b(a0)) {
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
		if (!f_3e9_a1_b(a0)) {
			if (!f_3c4_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_3c4_a1_b(object a0)
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
	return f_421_a1_b(L4);
}

bool f_3e9_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_458_a0_i() + "m";
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
	return f_421_a1_b(L4);
}

void f_414_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_41b_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_421_a1_b(string a0)
{
	if (f_4ec_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_430_a0_v(void)
{
	if (f_4ec_a0_b()) {
		@lshStopSpeech();
	}
}

object f_437_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_43d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_447_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_44c_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_458_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_461_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_468_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_461_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_479_a2_v(object a0, object a1)
{
	@SetVariable("oob2MladVladFactory1", 1);
}

void f_47f_a2_v(object a0, object a1)
{
	@SetVariable("oob2MladVladFactory2", 1);
}

void f_485_a2_v(object a0, object a1)
{
	@SetVariable("oob2MladVladFactory3", 1);
}

void f_48b_a2_v(object a0, object a1)
{
	if (f_447_a1_i("oob2MladVladFactory1") != 0 && f_447_a1_i("oob2MladVladFactory2") != 0 && f_447_a1_i("oob2MladVladFactory3") != 0) {
		f_44c_a2_b("quest_b2_01", "remove_mladvlad");
	}
}

bool f_4af_a1_b(object a0)
{
	if (f_447_a1_i("oob2MladVladFactory1") == 0) {
		return true;
	}
	return false;
}

bool f_4bb_a1_b(object a0)
{
	if (f_447_a1_i("oob2MladVladFactory2") == 0) {
		return true;
	}
	return false;
}

bool f_4c7_a1_b(object a0)
{
	if (f_447_a1_i("oob2MladVladFactory3") == 0) {
		return true;
	}
	return false;
}

int f_4d3_a0_i(void)
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

int f_4e4_a0_i(void)
{
	return 515547;
}

int f_4e6_a0_i(void)
{
	return 502872;
}

string f_4e8_a0_s(void)
{
	return "ui/NPC_MladVlad.png";
}

string f_4ea_a0_s(void)
{
	return "ui/NPC_MladVlad_b.png";
}

bool f_4ec_a0_b(void)
{
	return true;
}

