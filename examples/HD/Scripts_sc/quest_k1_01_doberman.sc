event evt_11 11;
event OnUse 0;
event OnTimer 7;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
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
		if (!f_3fd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_525_a0_i());
		L0->SetNPCDescription(f_523_a0_i());
		L0->SetPhoto(f_527_a0_s());
		L0->SetPhoto2(f_529_a0_s());
		L0->SetPlayerName(f_4ff_a0_i());
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
		f_442_a1_v(a0);
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
			if (f_4e7_a1_b(tv1) && f_4f3_a1_b(tv1)) {
				f_4e1_a2_v(tv1, tv0);
				f_a6_a1_v("Neutral");
				tv0->SetMessage(524677);
				tv0->ClearReplies();
				tv0->AddReply(541777, 43984, 43983);
				break;
			}
			f_a6_a1_v("Neutral");
			tv0->SetMessage(524679);
			tv0->ClearReplies();
			tv0->AddReply(524680, -1, 26019);
			tv0->AddReply(526801, -1, 28081);
			break;
			return;
		}
		if (f_52b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_454_a1_v(tv2);
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

	void f_a6_a1_v(string a0)
	{
		if (!f_52b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_464_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_47e_a0_v();
			if (a0 == 26016) {
				if (f_4e7_a1_b(tv1) && f_4f3_a1_b(tv1)) {
					f_4e1_a2_v(tv1, tv0);
					f_a6_a1_v("Neutral");
					tv0->SetMessage(524677);
					tv0->ClearReplies();
					tv0->AddReply(541777, 43984, 43983);
					return;
				}
				f_a6_a1_v("Neutral");
				tv0->SetMessage(524679);
				tv0->ClearReplies();
				tv0->AddReply(524680, -1, 26019);
				tv0->AddReply(526801, -1, 28081);
				return;
			}
			if (a0 == 43984) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(541778);
				tv0->ClearReplies();
				tv0->AddReply(524678, 28065, 26017);
				tv0->AddReply(541766, 43969, 43968);
				return;
			}
			if (a0 == 43969) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(541767);
				tv0->ClearReplies();
				tv0->AddReply(541768, 43971, 43970);
				tv0->AddReply(541773, 43975, 43976);
				return;
			}
			if (a0 == 43971) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(541769);
				tv0->ClearReplies();
				tv0->AddReply(541770, 28065, 43972);
				tv0->AddReply(541771, 43975, 43974);
				return;
			}
			if (a0 == 43975) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(541772);
				tv0->ClearReplies();
				tv0->AddReply(541774, 28065, 43978);
				return;
			}
			if (a0 == 28065) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(526785);
				tv0->ClearReplies();
				tv0->AddReply(526786, 28067, 28066);
				tv0->AddReply(541755, 28069, 43957);
				return;
			}
			if (a0 == 28067) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(526787);
				tv0->ClearReplies();
				tv0->AddReply(526788, 28069, 28068);
				tv0->AddReply(541779, -1, 43985);
				return;
			}
			if (a0 == 28069) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(526789);
				tv0->ClearReplies();
				tv0->AddReply(526795, 28076, 28075);
				return;
			}
			if (a0 == 28076) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(526796);
				tv0->ClearReplies();
				tv0->AddReply(526797, 28078, 28077);
				tv0->AddReply(541775, 28071, 43979);
				return;
			}
			if (a0 == 28078) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(526798);
				tv0->ClearReplies();
				tv0->AddReply(526799, 28080, 28079);
				tv0->AddReply(541776, 28071, 43981);
				return;
			}
			if (a0 == 28080) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(526800);
				tv0->ClearReplies();
				tv0->AddReply(526793, 28071, 28073);
				tv0->AddReply(526790, 28082, 28070);
				return;
			}
			if (a0 == 28082) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(526802);
				tv0->ClearReplies();
				tv0->AddReply(526803, -1, 28083);
				tv0->AddReply(526804, -1, 28084);
				return;
			}
			if (a0 == 28071) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(526791);
				tv0->ClearReplies();
				tv0->AddReply(526792, -1, 28072);
				tv0->AddReply(526794, -1, 28074);
				return;
			}
			tv3 = true;
			if (f_52b_a0_b()) {
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
			@Sleep(3);
			f_227_a2_v(300, 100);
		}
	}

	void OnUse(object a0)
	{
		f_268_a0_v();
		t0{a0};
	}

	void f_227_a2_v(float a0, float a1)
	{
		if (!f_3f8_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_276_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_242_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_372_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_242_a0_b()) {
				if (!tv2) {
					f_473_a1_v(tv4);
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

	void f_268_a0_v(void)
	{
		f_2c7_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}

	void f_276_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_3f8_a0_b()) {
			return;
		}
		L0 = f_4d0_a0_i();
		for (L1 = 0; L1 < 5 && f_3f8_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_4c9_a1_s(L3));
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
			if (!f_2c5_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_2c5_a0_b(void)
	{
		return true;
	}

	void f_2c7_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t3
{
	void init(object a0)
	{
		bool L0;
		@AddItem(L0, "lockpick", 0, 1);
		f_2d7_a1_v(a0);
	}

	void f_2d7_a1_v(object a0)
	{
		disable OnUse;
		f_2f0_a1_v(a0);
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
			f_516_a1_v(a0);
		}
	}

	void f_2f0_a1_v(object a0)
	{
		if (a0 == null) {
			f_34b_a1_v("fdie");
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
			f_485_a1_v(L4);
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

	void f_34b_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_485_a1_v(a0);
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

Vector f_36b_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_372_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_37a_a1_v(object a0)
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

void f_3a6_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_4ae_a1_V(f_36b_a1_V(a0));
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
			f_3ea_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_37a_a1_v(a0);
}

void f_3ea_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_37a_a1_v(a0);
}

bool f_3f8_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_3fd_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_4ae_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_52b_a0_b()) {
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

void f_442_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_52b_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_454_a1_v(string a0)
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

void f_464_a2_v(string a0, bool a1)
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

void f_473_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_47e_a0_v(void)
{
	if (f_52b_a0_b()) {
		@lshStopSpeech();
	}
}

void f_485_a1_v(string a0)
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

Vector f_4ae_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_4b8_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_4bd_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_4c9_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_4d0_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_4c9_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_4e1_a2_v(object a0, object a1)
{
	@SetVariable("ook1Lisa1", 1);
}

bool f_4e7_a1_b(object a0)
{
	if (f_4b8_a1_i("k1q01") == 4) {
		return true;
	}
	return false;
}

bool f_4f3_a1_b(object a0)
{
	if (f_4b8_a1_i("ook1Lisa1") == 0) {
		return true;
	}
	return false;
}

int f_4ff_a0_i(void)
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

int f_510_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_516_a1_v(object a0)
{
	if (f_510_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

int f_523_a0_i(void)
{
	return 518097;
}

int f_525_a0_i(void)
{
	return 518096;
}

string f_527_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_529_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_52b_a0_b(void)
{
	return false;
}

void f_52d_a1_v(object a0)
{
	t3{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_3a6_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_3ea_a5_v(a0, a1, a2, a4, a5);
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
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		f_4bd_a2_b("quest_k1_01", "doberman_dead");
	}
	f_52d_a1_v(a0);
}

