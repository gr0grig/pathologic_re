event OnDialogReply 11;
event OnUse 0;
event OnAttacked 17;
event OnDeath 41;
event OnUnload 6;
event OnTimer 7;
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
		if (!f_57a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_6a1_a0_i());
		L0->SetNPCDescription(f_69f_a0_i());
		L0->SetPhoto(f_6a3_a0_s());
		L0->SetPhoto2(f_6a5_a0_s());
		L0->SetPlayerName(f_701_a0_i());
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
		f_5bf_a1_v(a0);
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
			f_6c1_a2_v(tv1, tv0);
			f_8e_a1_v("Neutral");
			tv0->SetMessage(525951);
			tv0->ClearReplies();
			tv0->AddReply(525952, 27237, 27236);
			tv0->AddReply(542446, 27239, 44835);
			tv0->AddReply(542447, 27241, 44837);
			break;
			return;
		}
		if (f_6a7_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_5d1_a1_v(tv2);
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

	void f_8e_a1_v(string a0)
	{
		if (!f_6a7_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_5e1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_5fb_a0_v();
			if (a0 == 27235) {
				f_6c1_a2_v(tv1, tv0);
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525951);
				tv0->ClearReplies();
				tv0->AddReply(525952, 27237, 27236);
				tv0->AddReply(542446, 27239, 44835);
				tv0->AddReply(542447, 27241, 44837);
				return;
			}
			if (a0 == 27237) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525953);
				tv0->ClearReplies();
				tv0->AddReply(525954, 27239, 27238);
				tv0->AddReply(542448, 44839, 44838);
				return;
			}
			if (a0 == 44839) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542449);
				tv0->ClearReplies();
				tv0->AddReply(542450, 44841, 44840);
				return;
			}
			if (a0 == 44841) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542451);
				tv0->ClearReplies();
				tv0->AddReply(542452, 27239, 44842);
				tv0->AddReply(542453, 27241, 44844);
				return;
			}
			if (a0 == 27239) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525955);
				tv0->ClearReplies();
				tv0->AddReply(525956, 27241, 27240);
				tv0->AddReply(529036, 27241, 30476);
				return;
			}
			if (a0 == 27241) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525957);
				tv0->ClearReplies();
				tv0->AddReply(525958, 27243, 27242);
				tv0->AddReply(542454, 44847, 44846);
				return;
			}
			if (a0 == 44847) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542455);
				tv0->ClearReplies();
				tv0->AddReply(542456, 27245, 44848);
				return;
			}
			if (a0 == 27243) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525959);
				tv0->ClearReplies();
				tv0->AddReply(525960, 27245, 27244);
				return;
			}
			if (a0 == 27245) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525961);
				tv0->ClearReplies();
				tv0->AddReply(525962, 27247, 27246);
				tv0->AddReply(542457, -1, 44850);
				return;
			}
			if (a0 == 27247) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525963);
				tv0->ClearReplies();
				tv0->AddReply(525964, 27249, 27248);
				tv0->AddReply(542458, 44852, 44851);
				return;
			}
			if (a0 == 44852) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(542459);
				tv0->ClearReplies();
				tv0->AddReply(542460, -1, 44853);
				tv0->AddReply(542461, -1, 44854);
				return;
			}
			if (a0 == 27249) {
				f_8e_a1_v("Neutral");
				tv0->SetMessage(525965);
				tv0->ClearReplies();
				tv0->AddReply(525966, -1, 27250);
				tv0->AddReply(542462, -1, 44855);
				return;
			}
			tv3 = true;
			if (f_6a7_a0_b()) {
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
	var int tv0;
	var int tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;

	void init(void)
	{
		for (; ; ) {
			f_1f5_a2_v(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object a0)
	{
		f_236_a0_v();
		t0{a0};
		t4{a0, false};
	}

	void OnAttacked(object a0)
	{
	}

	void OnDeath(object a0)
	{
		f_236_a0_v();
		global.OnDeath(a0);
	}

	void OnUnload(void)
	{
		f_693_a2_b("quest_k5_03", "abinos_unload");
		@Hold();
	}

	void f_1f5_a2_v(float a0, float a1)
	{
		if (!f_575_a0_b()) {
			return;
		}
		@FindActor(tv4, "player");
		tv2 = false;
		tv3 = false;
		tv0 = a0;
		tv1 = a1;
		@SetTimer(10, 1.0);
		f_244_a0_v();
		if (!tv3) {
			@KillTimer(10);
		}
	}

	bool f_210_a0_b(void)
	{
		float L0;
		if (tv4 == null) {
			return false;
		}
		L0 = sqrt(f_47f_a1_f(tv4));
		if (tv2) {
			L0 = L0 - tv1;
		}
		return L0 < tv0;
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			if (f_210_a0_b()) {
				if (!tv2) {
					f_5f0_a1_v(tv4);
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

	void f_236_a0_v(void)
	{
		f_295_a0_v();
		@KillTimer(10);
		if (tv2) {
			@UnlookAsync("head");
			tv2 = false;
		}
		tv3 = true;
	}

	void f_244_a0_v(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_575_a0_b()) {
			return;
		}
		L0 = f_6b0_a0_i();
		for (L1 = 0; L1 < 5 && f_575_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_6a9_a1_s(L3));
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
			if (!f_293_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_293_a0_b(void)
	{
		return true;
	}

	void f_295_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

maintask t3
{
	var bool tv0;
	var int tv1;

	void init(void)
	{
		object L0;
		@GetScene(L0);
		L0->RemoveStationaryActor(f_62b_a0_o());
		@GetVariable("pt_k5q03_albinos_path", tv1);
		if (tv1 != -1) {
			f_2c8_a3_b("pt_k5q03_albinos_path", tv1, true);
		}
		t2{};
	}

	void OnAttacked(object a0)
	{
	}

	void OnDeath(object a0)
	{
		f_2fd_a0_v();
		global.OnDeath(a0);
	}

	void OnUnload(void)
	{
		f_693_a2_b("quest_k5_03", "abinos_unload");
		@Hold();
	}

	bool f_2c8_a3_b(string a0, int a1, bool a2)
	{
		object L0;
		Vector L1;
		bool L2;
		@GetScene(L0);
		for (; ; ) {
			bool L3;
			Vector L4;
			Vector L5;
			L0->GetLocator(a0 + (a1 + 1), L3, L4, L5);
			if (!L3) {
				break;
			}
			L1 = L5;
			@MovePoint(L4, a2, L2);
			if (L2) {
				f_303_a3_v(a1, L4, L5);
				a1 = a1 + 1;
			} else {
				if (tv0) {
					return false;
				}
			}
		}
		@WaitForAnimEnd(L2);
		if (!L2) {
			if (tv0) {
				return false;
			}
		}
		for (; ; ) {
			bool L6;
			@Rotate(L1.x, L1.z, L6);
			if (L6) {
				break;
			}
			if (tv0) {
				return false;
			}
		}
		return true;
	}

	void f_2fd_a0_v(void)
	{
		@Stop();
		@StopAnimation();
		tv0 = true;
	}

	void f_303_a3_v(int a0, Vector a1, Vector a2)
	{
	}
}

task t4
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void init(object a0, bool a1)
	{
		if (a1) {
			@SetTimer(100, 1.0);
		}
		f_344_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_693_a2_b("quest_k5_03", "albinos_retreated");
		@Hold();
	}

	void OnTimer(int a0)
	{
		if (a0 == 100) {
			f_712_a0_v();
		} else {
			f_38d_a1_v(a0);
		}
	}

	Vector f_326_a1_V(float a0)
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
		L3 = f_631_a1_V(f_631_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_344_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_326_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_326_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_473_a0_V() + L0;
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
				L3 = f_326_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_473_a0_V() + L3;
					@SetTimer(120, 0.5);
					continue;
				}
				break;
			}
		} while (!tv2);
	}

	void f_38d_a1_v(int a0)
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
			L2 = f_326_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_3d1_a0_b())) {
				@Stop();
				tv1 = f_473_a0_V() + L2;
			}
		}
	}

	void f_3c1_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_3c1_a0_v();
		global.OnDeath(a0);
	}

	bool f_3d1_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_478_a1_V(tv0);
		return f_64d_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t5
{
	void init(object a0)
	{
		f_3ea_a1_v(a0);
		for (; ; ) {
			@Hold();
		}
	}

	void f_3ea_a1_v(object a0)
	{
		if (a0 == null) {
			f_445_a1_v("fdie");
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
			f_602_a1_v(L4);
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

	void f_445_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_602_a1_v(a0);
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

string f_465_a1_s(int a0)
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

Vector f_473_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_478_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_47f_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_487_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_48c_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_498_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_48c_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_642_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_4ae_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_48c_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_48c_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_465_a1_s(a2);
	if (!f_48c_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_63b_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_642_a3_f(L4 - L5, 0, 1));
	if (f_487_a1_b(a0)) {
		f_678_a1_v(-L5);
	}
	return L5;
}

void f_4f7_a1_v(object a0)
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

void f_523_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_631_a1_V(f_478_a1_V(a0));
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
			f_567_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_4f7_a1_v(a0);
}

void f_567_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_4f7_a1_v(a0);
}

bool f_575_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_57a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_631_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_6a7_a0_b()) {
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

void f_5bf_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_6a7_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_5d1_a1_v(string a0)
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

void f_5e1_a2_v(string a0, bool a1)
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

void f_5f0_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_5fb_a0_v(void)
{
	if (f_6a7_a0_b()) {
		@lshStopSpeech();
	}
}

void f_602_a1_v(string a0)
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

object f_62b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_631_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_63b_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_642_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_64d_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

bool f_655_a2_b(object a0, float a1)
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
	f_689_a1_v(a1);
	f_498_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_678_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

void f_689_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_693_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_69f_a0_i(void)
{
	return 515595;
}

int f_6a1_a0_i(void)
{
	return 512611;
}

string f_6a3_a0_s(void)
{
	return "ui/NPC_Albinos.png";
}

string f_6a5_a0_s(void)
{
	return "ui/NPC_Albinos_b.png";
}

bool f_6a7_a0_b(void)
{
	return false;
}

string f_6a9_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_6b0_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_6a9_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_6c1_a2_v(object a0, object a1)
{
	f_6cb_a0_v();
	f_693_a2_b("quest_k5_03", "completed");
}

void f_6cb_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 407, 2, 526025);
	f_6e5_a2_b(L0, 405);
}

object f_6d8_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_6e5_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_6d8_a0_o();
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

int f_701_a0_i(void)
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

void f_712_a0_v(void)
{
	object L0;
	@FindActor(L0, "player");
	if (L0) {
		if (f_47f_a1_f(L0) <= 640000.0) {
			float L1;
			L1 = f_4ae_a3_f(L0, 0.05000000074505806, 0);
			@ReportHit(L0, 6, L1, 0.05000000074505806);
		}
	}
}

void f_72c_a1_v(object a0)
{
	t5{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_523_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_567_a5_v(a0, a1, a2, a4, a5);
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
	if (f_487_a1_b(a0)) {
		f_655_a2_b(a0, -0.10000000149011612);
	}
	f_72c_a1_v(a0);
}

