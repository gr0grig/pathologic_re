event evt_11 11;
event OnAttacked 17;
event OnUse 0;
event OnTimer 7;
event OnUnload 6;
event OnDeath 41;
event OnHit 22;
event OnPropertyChange 16;
event OnHit2 43;

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
		f_48f_a1_b(f_565_a0_o());
		if (!f_43a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_5f6_a0_i());
		L0->SetNPCDescription(f_5f4_a0_i());
		L0->SetPhoto(f_5f8_a0_s());
		L0->SetPhoto2(f_5fa_a0_s());
		L0->SetPlayerName(f_5e3_a0_i());
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
		f_47e_a1_v(a0);
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
			if (f_5d7_a1_b(tv1)) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(512071);
				tv0->ClearReplies();
				tv0->AddReply(512072, 13294, 13293);
				tv0->AddReply(512083, 13294, 13306);
				break;
			}
			f_a4_a1_v("Neutral");
			tv0->SetMessage(513029);
			tv0->ClearReplies();
			tv0->AddReply(513030, -1, 14237);
			tv0->AddReply(536131, -1, 37890);
			break;
			return;
		}
		if (f_5fc_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_519_a1_v(tv2);
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

	void f_a4_a1_v(string a0)
	{
		if (!f_5fc_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_520_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_535_a0_v();
			if (a1 == 13311) {
				f_5cb_a2_v(tv1, tv0);
				f_5d1_a2_v(tv1, tv0);
			}
			if (a0 == 13292) {
				if (f_5d7_a1_b(tv1)) {
					f_a4_a1_v("Neutral");
					tv0->SetMessage(512071);
					tv0->ClearReplies();
					tv0->AddReply(512072, 13294, 13293);
					tv0->AddReply(512083, 13294, 13306);
					return;
				}
				f_a4_a1_v("Neutral");
				tv0->SetMessage(513029);
				tv0->ClearReplies();
				tv0->AddReply(513030, -1, 14237);
				tv0->AddReply(536131, -1, 37890);
				return;
			}
			if (a0 == 13294) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(512073);
				tv0->ClearReplies();
				tv0->AddReply(512074, 13298, 13295);
				tv0->AddReply(512075, 13298, 13296);
				tv0->AddReply(512076, 13298, 13297);
				return;
			}
			if (a0 == 13298) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(512077);
				tv0->ClearReplies();
				tv0->AddReply(512078, 13302, 13301);
				tv0->AddReply(512082, 13302, 13305);
				return;
			}
			if (a0 == 13302) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(512079);
				tv0->ClearReplies();
				tv0->AddReply(512080, 13304, 13303);
				tv0->AddReply(512084, 13304, 13309);
				return;
			}
			if (a0 == 13304) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(512081);
				tv0->ClearReplies();
				tv0->AddReply(512085, -1, 13311);
				return;
			}
			tv3 = true;
			if (f_5fc_a0_b()) {
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
			f_191_a0_v();
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
		f_1e2_a0_v();
		t0{a0};
	}

	void OnTimer(int a0)
	{
		if (a0 == 100) {
			f_60e_a0_v();
		}
	}

	void f_191_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_435_a0_b()) {
			return;
		}
		L0 = f_5ba_a0_i();
		for (L1 = 0; L1 < 5 && f_435_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_5b3_a1_s(L3));
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
				} else {
					if (L1) {
						break;
					}
				}
			}
			if (!f_1e0_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_1e0_a0_b(void)
	{
		return true;
	}

	void f_1e2_a0_v(void)
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
		f_59e_a2_b("quest_d6_03", "albinos_retreated");
		@Hold();
	}

	void OnTimer(int a0)
	{
		if (a0 == 100) {
			f_60e_a0_v();
		} else {
			f_263_a1_v(a0);
		}
	}

	Vector f_1fc_a1_V(float a0)
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
		L3 = f_56b_a1_V(f_56b_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_1fc_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_1fc_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_349_a0_V() + L0;
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
				L3 = f_1fc_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_349_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void f_263_a1_v(int a0)
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
			L2 = f_1fc_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_2a7_a0_b())) {
				@Stop();
				tv1 = f_349_a0_V() + L2;
			}
		}
	}

	void f_297_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_297_a0_v();
		global.OnDeath(a0);
	}

	bool f_2a7_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_34e_a1_V(tv0);
		return f_587_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t4
{
	void init(object a0)
	{
		f_2c0_a1_v(a0);
		for (; ; ) {
			@Hold();
		}
	}

	void f_2c0_a1_v(object a0)
	{
		if (a0 == null) {
			f_31b_a1_v("fdie");
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
			f_53c_a1_v(L4);
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

	void f_31b_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_53c_a1_v(a0);
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

string f_33b_a1_s(int a0)
{
	if (a0 == 2) {
		return "fire";
	} else {
		if (a0 == 1) {
			return "bullet";
		}
	}
	return "phys";
}

Vector f_349_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_34e_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_355_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_35d_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_362_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_36e_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_362_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_362_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_33b_a1_s(a2);
	if (!f_362_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_575_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_57c_a3_f(L4 - L5, 0, 1));
	if (f_35d_a1_b(a0)) {
		f_594_a1_v(-L5);
	}
	return L5;
}

void f_3b7_a1_v(object a0)
{
	bool L0;
	int L1;
	Vector L2;
	Vector L3;
	Vector L4;
	Vector L5;
	string L6;
	if (a0 == null) {
		return;
	}
	@IsDead(L0);
	if (L0) {
		return;
	}
	@GetSecondaryAnimationType(L1);
	if (L1 < 0) {
		return;
	}
	a0->GetPosition(L2);
	@GetPosition(L3);
	@GetDirection(L4);
	L5 = L3 - L2;
	if (L5.x * L4.x + L5.z * L4.z >= 0) {
		L6 = "fhit";
	} else {
		L6 = "bhit";
	}
	@FadeSecondaryAnimation("hit_react", L6 + "1", L6 + "2", -10);
}

void f_3e3_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_56b_a1_V(f_34e_a1_V(a0));
		object L1;
		@CreateVectorVector(L1);
		int L2;
		for (L2 = 1; ; L2++) {
			bool L3;
			Vector L4;
			Vector L5;
			@GetGeometryLocator("hit" + L2, L3, L4, L5);
			if (!L3) {
				break;
			}
			if ((L5 | L0) >= 0.7071067690849304) {
				L1->add(L4);
			}
		}
		int L6;
		L1->size(L6);
		if (L6) {
			int L7;
			Vector L8;
			@irand(L7, L6);
			L1->get(L8, L7);
			f_427_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_3b7_a1_v(a0);
}

void f_427_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_3b7_a1_v(a0);
}

bool f_435_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_43a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_56b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_5fc_a0_b()) {
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

void f_47e_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_5fc_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_48f_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_4c9_a1_b(a0)) {
			if (!f_4ee_a1_b(a0)) {
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
		if (!f_4ee_a1_b(a0)) {
			if (!f_4c9_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_4c9_a1_b(object a0)
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
	return f_526_a1_b(L4);
}

bool f_4ee_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_5aa_a0_i() + "m";
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
	return f_526_a1_b(L4);
}

void f_519_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_520_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_526_a1_b(string a0)
{
	if (f_5fc_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_535_a0_v(void)
{
	if (f_5fc_a0_b()) {
		@lshStopSpeech();
	}
}

void f_53c_a1_v(string a0)
{
	bool L0;
	@IsExisting3DSound(L0, a0);
	if (!L0) {
		int L1;
		for (L1 = 0; ; L1++) {
			bool L2;
			@IsExisting3DSound(L2, a0 + (L1 + 1));
			if (!L2) {
				break;
			}
		}
		if (!L1) {
			return;
		}
		int L3;
		@irand(L3, L1);
		a0 = a0 + (L3 + 1);
	}
	bool L4;
	@Is3DSoundLoaded(L4, a0);
	if (L4) {
		float L5;
		Vector L6;
		Vector L7;
		@GetEyesHeight(L5);
		@GetDirection(L6);
		L7 = L6 * 50;
		L7.y += L5;
		@PlayGlobalSound(a0, L7);
	}
}

object f_565_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_56b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_575_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_57c_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_587_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

int f_58f_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_594_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(15, L0);
}

bool f_59e_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_5aa_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_5b3_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_5ba_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_5b3_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_5cb_a2_v(object a0, object a1)
{
	@SetVariable("d6q03", 2);
}

void f_5d1_a2_v(object a0, object a1)
{
	@SetVariable("ood6Albinos1", 1);
}

bool f_5d7_a1_b(object a0)
{
	if (f_58f_a1_i("ood6Albinos1") == 0) {
		return true;
	}
	return false;
}

int f_5e3_a0_i(void)
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

int f_5f4_a0_i(void)
{
	return 515595;
}

int f_5f6_a0_i(void)
{
	return 512611;
}

string f_5f8_a0_s(void)
{
	return "ui/NPC_Black.png";
}

string f_5fa_a0_s(void)
{
	return "ui/NPC_Black_b.png";
}

bool f_5fc_a0_b(void)
{
	return false;
}

void f_5fe_a1_v(object a0)
{
	@KillTimer(100);
	f_59e_a2_b("quest_d6_03", "albinos_dead");
	t4{a0};
}

void f_60e_a0_v(void)
{
	object L0;
	@FindActor(L0, "player");
	if (L0) {
		if (f_355_a1_f(L0) <= 640000.0) {
			float L1;
			L1 = f_36e_a3_f(L0, 0.05000000074505806, 0);
			@ReportHit(L0, 6, L1, 0.05000000074505806);
		}
	}
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_3e3_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_427_a5_v(a0, a1, a2, a4, a5);
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
	f_5fe_a1_v(a0);
}

