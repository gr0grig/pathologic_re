event OnDialogReply 11;
event OnUse 0;
event OnAttacked 17;
event OnTrigger 26;
event OnTimer 7;
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
		if (!f_43f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_555_a0_i());
		L0->SetNPCDescription(f_553_a0_i());
		L0->SetPhoto(f_557_a0_s());
		L0->SetPhoto2(f_559_a0_s());
		L0->SetPlayerName(f_52f_a0_i());
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
		f_483_a1_v(a0);
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
			if (f_523_a1_b(tv1)) {
				f_51d_a2_v(tv1, tv0);
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518656);
				tv0->ClearReplies();
				tv0->AddReply(518795, 19900, 19898);
				tv0->AddReply(518796, 19900, 19899);
				break;
			}
			f_a2_a1_v("Neutral");
			tv0->SetMessage(518660);
			tv0->ClearReplies();
			tv0->AddReply(518661, -1, 19753);
			tv0->AddReply(518800, -1, 19903);
			break;
			return;
		}
		if (f_55b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_494_a1_v(tv2);
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

	void f_a2_a1_v(string a0)
	{
		if (!f_55b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_49b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_4ac_a0_v();
			if (a0 == 19748) {
				if (f_523_a1_b(tv1)) {
					f_51d_a2_v(tv1, tv0);
					f_a2_a1_v("Neutral");
					tv0->SetMessage(518656);
					tv0->ClearReplies();
					tv0->AddReply(518795, 19900, 19898);
					tv0->AddReply(518796, 19900, 19899);
					return;
				}
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518660);
				tv0->ClearReplies();
				tv0->AddReply(518661, -1, 19753);
				tv0->AddReply(518800, -1, 19903);
				return;
			}
			if (a0 == 19900) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518797);
				tv0->ClearReplies();
				tv0->AddReply(518799, 19750, 19902);
				tv0->AddReply(518798, 19907, 19901);
				return;
			}
			if (a0 == 19907) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518804);
				tv0->ClearReplies();
				tv0->AddReply(518805, 19750, 19908);
				tv0->AddReply(518806, -1, 19909);
				return;
			}
			if (a0 == 19750) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518658);
				tv0->ClearReplies();
				tv0->AddReply(518659, 19904, 19751);
				tv0->AddReply(518802, -1, 19905);
				return;
			}
			if (a0 == 19904) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518801);
				tv0->ClearReplies();
				tv0->AddReply(518807, 19911, 19910);
				return;
			}
			if (a0 == 19911) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(518808);
				tv0->ClearReplies();
				tv0->AddReply(518809, -1, 19914);
				tv0->AddReply(518810, -1, 19915);
				return;
			}
			tv3 = true;
			if (f_55b_a0_b()) {
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
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;

	void init(void)
	{
		for (; ; ) {
			f_194_a2_v(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object a0)
	{
		f_1d5_a0_v();
		t0{a0};
	}

	void OnAttacked(object a0)
	{
		@SignalDeath(a0);
	}

	void OnTrigger(string a0)
	{
		if (a0 == "retreat") {
			f_1d5_a0_v();
			t3{};
		}
	}

	void f_194_a2_v(float a0, float a1)
	{
		if (!f_43a_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_1e3_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_1af_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_3ad_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_1af_a0_b()) {
				if (!tv2) {
					f_4a1_a1_v(tv4);
					tv2 = true;
				}
			} else {
				if (tv2) {
					@UnlookAsync("head");
					tv2 = false;
				}
			}
		}
	}

	void f_1d5_a0_v(void)
	{
		f_234_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}

	void f_1e3_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_43a_a0_b()) {
			return;
		}
		L0 = f_50c_a0_i();
		for (L1 = 0; L1 < 5 && f_43a_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_505_a1_s(L3));
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
			if (!f_232_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_232_a0_b(void)
	{
		return true;
	}

	void f_234_a0_v(void)
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

	void init(void)
	{
		object L0;
		@GetScene(L0);
		L0->RemoveStationaryActor(f_4dc_a0_o());
		for (; ; ) {
			f_270_a1_v(f_3b5_a0_o());
			@Sleep(1);
		}
	}

	void OnAttacked(object a0)
	{
		@SignalDeath(a0);
	}

	Vector f_252_a1_V(float a0)
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
		L3 = f_4e2_a1_V(f_4e2_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_270_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_252_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_252_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_3a1_a0_V() + L0;
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
				L3 = f_252_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_3a1_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void OnTimer(int a0)
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
			L2 = f_252_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_2fd_a0_b())) {
				@Stop();
				tv1 = f_3a1_a0_V() + L2;
			}
		}
	}

	void f_2ed_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_2ed_a0_v();
		global.OnDeath(a0);
	}

	bool f_2fd_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_3a6_a1_V(tv0);
		return f_4ec_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t4
{
	void init(object a0)
	{
		disable OnUse;
		f_326_a1_v(a0);
		@SetRTEnvelope(50, 40);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_546_a1_v(a0);
		}
	}

	void f_326_a1_v(object a0)
	{
		if (a0 == null) {
			f_381_a1_v("fdie");
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
			f_4b3_a1_v(L4);
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

	void f_381_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_4b3_a1_v(a0);
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

Vector f_3a1_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_3a6_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_3ad_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

object f_3b5_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_3bc_a1_v(object a0)
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

void f_3e8_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_4e2_a1_V(f_3a6_a1_V(a0));
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
			f_42c_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_3bc_a1_v(a0);
}

void f_42c_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_3bc_a1_v(a0);
}

bool f_43a_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_43f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_4e2_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_55b_a0_b()) {
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

void f_483_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_55b_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_494_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_49b_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_4a1_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_4ac_a0_v(void)
{
	if (f_55b_a0_b()) {
		@lshStopSpeech();
	}
}

void f_4b3_a1_v(string a0)
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

object f_4dc_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_4e2_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_4ec_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

int f_4f4_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_4f9_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_505_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_50c_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_505_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_51d_a2_v(object a0, object a1)
{
	@SetVariable("oob5GathererWife1", 1);
}

bool f_523_a1_b(object a0)
{
	if (f_4f4_a1_i("oob5GathererWife1") == 0) {
		return true;
	}
	return false;
}

int f_52f_a0_i(void)
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

int f_540_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_546_a1_v(object a0)
{
	if (f_540_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

int f_553_a0_i(void)
{
	return 518607;
}

int f_555_a0_i(void)
{
	return 518606;
}

string f_557_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_559_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_55b_a0_b(void)
{
	return false;
}

void f_55d_a1_v(object a0)
{
	object L0;
	@GetScene(L0);
	L0->RemoveStationaryActor(f_4dc_a0_o());
	@SetVariable("b5q01NudeDead", true);
	f_4f9_a2_b("quest_b5_01", "gwife_dead");
	t4{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_3e8_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_42c_a5_v(a0, a1, a2, a4, a5);
}

void OnDeath(object a0)
{
	f_55d_a1_v(a0);
}

