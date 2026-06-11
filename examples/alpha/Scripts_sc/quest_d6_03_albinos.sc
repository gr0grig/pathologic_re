event evt_11 11;
event OnAttacked 17;
event OnUse 0;
event OnTimer 7;
event OnUnload 6;
event OnDeath 41;
event OnHit 22;
event OnPropertyChange 16;

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
		if (!f_3ac_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_477_a0_i());
		L0->SetPhoto(f_479_a0_s());
		L0->SetPlayerName(f_466_a0_i());
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
		f_3e4_a1_v(a0);
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
			if (f_45a_a1_b(tv1)) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(12071);
				tv0->ClearReplies();
				tv0->AddReply(12072, 13294, 13293);
				tv0->AddReply(12083, 13294, 13306);
				break;
			}
			f_8d_a1_v("Neutral");
			tv0->SetMessage(13029);
			tv0->ClearReplies();
			tv0->AddReply(13030, -1, 14237);
			break;
			return;
		}
		if (f_47b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_3e8_a1_v(tv2);
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
		if (!f_47b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_3e8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_3fa_a0_v();
			if (a1 == 13311) {
				f_44e_a2_v(tv1, tv0);
				f_454_a2_v(tv1, tv0);
			}
			if (a0 == 13292) {
				if (f_45a_a1_b(tv1)) {
					f_8d_a1_v("Neutral");
					tv0->SetMessage(12071);
					tv0->ClearReplies();
					tv0->AddReply(12072, 13294, 13293);
					tv0->AddReply(12083, 13294, 13306);
					return;
				}
				f_8d_a1_v("Neutral");
				tv0->SetMessage(13029);
				tv0->ClearReplies();
				tv0->AddReply(13030, -1, 14237);
				return;
			}
			if (a0 == 13294) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(12073);
				tv0->ClearReplies();
				tv0->AddReply(12074, 13298, 13295);
				tv0->AddReply(12075, 13298, 13296);
				tv0->AddReply(12076, 13298, 13297);
				return;
			}
			if (a0 == 13298) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(12077);
				tv0->ClearReplies();
				tv0->AddReply(12078, 13302, 13301);
				tv0->AddReply(12082, 13302, 13305);
				return;
			}
			if (a0 == 13302) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(12079);
				tv0->ClearReplies();
				tv0->AddReply(12080, 13304, 13303);
				tv0->AddReply(12084, 13304, 13309);
				return;
			}
			if (a0 == 13304) {
				f_8d_a1_v("Neutral");
				tv0->SetMessage(12081);
				tv0->ClearReplies();
				tv0->AddReply(12085, -1, 13311);
				return;
			}
			tv3 = true;
			if (f_47b_a0_b()) {
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
	void init(void)
	{
		@SetTimer(100, 1.0);
		for (; ; ) {
			@Sleep(3);
			f_16f_a0_v();
		}
	}

	void OnAttacked(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			t3{a0};
		}
	}

	void OnUse(object a0)
	{
		f_1b4_a0_v();
		t0{a0};
	}

	void OnTimer(int a0)
	{
		if (a0 == 100) {
			f_48d_a0_v();
		}
	}

	void f_16f_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_3a7_a0_b()) {
			return;
		}
		L0 = f_43d_a0_i();
		L1 = 0;
		for (; L1 < 5 && f_3a7_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_436_a1_s(L3));
					@WaitForAnimEnd(L4);
					if (!L4) {
						break;
					}
				}
			} else {
				if (L2 == 1) {
					float L5;
					bool L6;
					@rand(L5, 4);
					@Sleep(L5 + 1, L6);
					if (!L6) {
						break;
					}
					continue;
				}
				if (L1) {
					break;
				}
			}
		}
	}

	void f_1b4_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t3
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_42a_a2_b("quest_d6_03", "albinos_retreated");
		@Hold();
	}

	void OnTimer(int a0)
	{
		if (a0 == 100) {
			f_48d_a0_v();
		} else {
			f_22c_a1_v(a0);
		}
	}

	Vector f_1ce_a1_V(float a0)
	{
		Vector L0;
		Vector L1;
		Vector L2;
		Vector L3;
		Vector L4;
		float L5;
		@GetPosition(L0);
		tv0->GetPosition(L1);
		@GetDirection(L2);
		L3 = f_401_a1_V(f_401_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void init(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_1ce_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 10000.0) {
			@Trace("Can't retreat, distance: " + sqrt(L1));
			@Sleep(0.5);
			return;
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_304_a0_V() + L0;
		@SetTimer(120, 0.5);
		tv2 = false;
		do {
			bool L2;
			@MovePoint(tv1, 1, L2);
			if (L2) {
				Vector L3;
				float L4;
				if (tv0 == null) {
					break;
					continue;
				}
				L3 = f_1ce_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 10000.0) {
					tv1 = f_304_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void f_22c_a1_v(int a0)
	{
		if (a0 != 120) {
			return;
		}
		if (tv0 == null) {
			@Stop();
			@KillTimer(1);
			tv2 = true;
		} else {
			Vector L0;
			float L1;
			Vector L2;
			float L3;
			@GetDirection(L0);
			@FindDirLength(L1, L0, 7000.0);
			L2 = f_1ce_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 10000.0 && (L3 >= L1 * L1 * 2.25 || f_270_a0_b())) {
				@Stop();
				tv1 = f_304_a0_V() + L2;
			}
		}
	}

	void f_260_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_260_a0_v();
		global.OnDeath(a0);
	}

	bool f_270_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_309_a1_V(tv0);
		return f_41d_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t4
{
	void init(object a0)
	{
		f_289_a1_v(a0);
		for (; ; ) {
			@Hold();
		}
	}

	void f_289_a1_v(object a0)
	{
		if (a0 == null) {
			f_2e0_a1_v("fdie");
		} else {
			Vector L0;
			a0->GetPosition(L0);
			Vector L1;
			@GetPosition(L1);
			Vector L2;
			@GetDirection(L2);
			Vector L3;
			L3 = L1 - L0;
			string L4;
			if (L3.x * L2.x + L3.z * L2.z >= 0) {
				L4 = "fdie";
			} else {
				L4 = "bdie";
			}
			@RemoveRTEnvelope();
			@SetDeathState();
			@Stop();
			@StopAsync();
			object L5;
			L5 = a0;
			if (a0->FuncExist("GetScriptProperty", 2)) {
				bool L6;
				a0->HasScriptProperty(L6, "Owner");
				if (L6) {
					a0->GetScriptProperty(L5, "Owner");
					if (L5 == null) {
						L5 = a0;
					}
				}
			}
			bool L7;
			if (L5->FuncExist("@GetEyesHeight", 1)) {
				float L8;
				Vector L9;
				L5->GetEyesHeight(L8);
				L9 = [0.0, 0.0, 0.0];
				L9.y = L8;
				@LookAsync(a0, "head", L9);
				L7 = true;
			} else {
				L7 = false;
			}
			@PlayAnimation("all", L4);
			@WaitForAnimEnd();
			if (L7) {
				@StopAsync();
				@UnlookAsync("head");
			}
			@LockAnimationEnd("all", L4);
			@RemoveEnvelope();
		}
	}

	void f_2e0_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		@PlayAnimation("all", a0);
		@WaitForAnimEnd();
		@LockAnimationEnd("all", a0);
		@RemoveEnvelope();
	}

	void OnHit(object a0, int a1, float a2, float a3)
	{
	}

	void OnPropertyChange(object a0, string a1)
	{
	}

	void OnDeath(object a0)
	{
	}
}

string f_2fc_a1_s(int a0)
{
	if (a0 == 1) {
		return "fire";
	}
	return "phys";
}

Vector f_304_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_309_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_310_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_318_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_324_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_318_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_318_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_2fc_a1_s(a2);
	if (!f_318_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_40b_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_412_a3_f(L4 - L5, 0, 1));
	return L5;
}

void f_364_a3_v(object a0, int a1, float a2)
{
	if (a1 != 4 && a1 != 5) {
		object L0;
		object L1;
		Vector L2;
		float L3;
		@GetScene(L0);
		@GetPosition(L2);
		@GetEyesHeight(L3);
		L2.y += L3 / 2;
		@AddActorByType(L1, "scripted", L0, L2, [0.0, 0.0, 1.0], "blood.xml");
	}
	if (a0 == null) {
		return;
	}
	int L4;
	@GetSecondaryAnimationType(L4);
	if (L4 < 0) {
		return;
	}
	Vector L5;
	a0->GetPosition(L5);
	Vector L6;
	@GetPosition(L6);
	Vector L7;
	@GetDirection(L7);
	Vector L8;
	L8 = L6 - L5;
	string L9;
	if (L8.x * L7.x + L8.z * L7.z >= 0) {
		L9 = "fhit";
	} else {
		L9 = "bhit";
	}
	@FadeSecondaryAnimation("hit_react", L9 + "1", L9 + "2", -10);
}

bool f_3a7_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_3ac_a1_b(object a0)
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
	L5 = L3 * 70 + f_401_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_3e4_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_3e8_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_3fa_a0_v(void)
{
	if (f_47b_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_401_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_40b_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_412_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_41d_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

int f_425_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_42a_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_436_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_43d_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_436_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_44e_a2_v(object a0, object a1)
{
	@SetVariable("d6q03", 2);
}

void f_454_a2_v(object a0, object a1)
{
	@SetVariable("ood6Albinos1", 1);
}

bool f_45a_a1_b(object a0)
{
	if (f_425_a1_i("ood6Albinos1") == 0) {
		return true;
	}
	return false;
}

int f_466_a0_i(void)
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

int f_477_a0_i(void)
{
	return 12611;
}

string f_479_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_47b_a0_b(void)
{
	return false;
}

void f_47d_a1_v(object a0)
{
	@KillTimer(100);
	f_42a_a2_b("quest_d6_03", "albinos_dead");
	t4{a0};
}

void f_48d_a0_v(void)
{
	object L0;
	@FindActor(L0, "player");
	if (L0) {
		if (f_310_a1_f(L0) <= 640000.0) {
			float L1;
			L1 = f_324_a3_f(L0, 0.05000000074505806, 0);
			@ReportHit(L0, 6, L1, 0.05000000074505806);
		}
	}
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_364_a3_v(a0, a1, a2);
}

void OnPropertyChange(object a0, string a1)
{
	if (a1 == "health") {
		float L0;
		@GetProperty("health", L0);
		if (L0 <= 0) {
			@SignalDeath(a0);
		}
	}
}

void OnDeath(object a0)
{
	f_47d_a1_v(a0);
}

