event evt_11 11;
event OnUse 0;
event OnAttacked 17;
event OnCollision 10;
event OnActorStuck 28;
event OnDeath 41;
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
		if (!f_4b1_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_63d_a0_i());
		L0->SetNPCDescription(f_63b_a0_i());
		L0->SetPhoto(f_63f_a0_s());
		L0->SetPhoto2(f_641_a0_s());
		L0->SetPlayerName(f_62a_a0_i());
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
		f_4f6_a1_v(a0);
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
			f_84_a1_v("Neutral");
			tv0->SetMessage(510904);
			tv0->ClearReplies();
			tv0->AddReply(510905, 35745, 12053);
			tv0->AddReply(534166, -1, 35746);
			break;
			return;
		}
		if (f_643_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_508_a1_v(tv2);
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

	void f_84_a1_v(string a0)
	{
		if (!f_643_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_518_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_527_a0_v();
			if (a1 == 12062) {
				f_5bf_a2_v(tv1, tv0);
				f_5d2_a2_v(tv1, tv0);
				f_5b9_a2_v(tv1, tv0);
			}
			if (a1 == 35869) {
				f_5dd_a2_v(tv1, tv0);
			}
			if (a1 == 35746) {
				f_5dd_a2_v(tv1, tv0);
			}
			if (a0 == 12052) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(510904);
				tv0->ClearReplies();
				tv0->AddReply(510905, 35745, 12053);
				tv0->AddReply(534166, -1, 35746);
				return;
			}
			if (a0 == 35745) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(534165);
				tv0->ClearReplies();
				tv0->AddReply(534167, 12054, 35747);
				tv0->AddReply(534169, 35750, 35749);
				return;
			}
			if (a0 == 35750) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(534170);
				tv0->ClearReplies();
				tv0->AddReply(534272, 35857, 35861);
				return;
			}
			if (a0 == 12054) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(510906);
				tv0->ClearReplies();
				tv0->AddReply(510907, 12056, 12055);
				return;
			}
			if (a0 == 12056) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(510908);
				tv0->ClearReplies();
				tv0->AddReply(510909, 12058, 12057);
				tv0->AddReply(534168, 35857, 35748);
				return;
			}
			if (a0 == 12058) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(510910);
				tv0->ClearReplies();
				tv0->AddReply(534268, 35857, 35856);
				tv0->AddReply(534270, 35860, 35859);
				return;
			}
			if (a0 == 35860) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(534271);
				tv0->ClearReplies();
				tv0->AddReply(534276, 12061, 35865);
				return;
			}
			if (a0 == 35857) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(534269);
				tv0->ClearReplies();
				tv0->AddReply(510911, 12061, 12059);
				tv0->AddReply(510912, 12061, 12060);
				return;
			}
			if (a0 == 12061) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(510913);
				tv0->ClearReplies();
				tv0->AddReply(534273, 35864, 35862);
				tv0->AddReply(534274, 35864, 35863);
				return;
			}
			if (a0 == 35864) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(534275);
				tv0->ClearReplies();
				tv0->AddReply(510914, -1, 12062);
				tv0->AddReply(534277, -1, 35869);
				return;
			}
			tv3 = true;
			if (f_643_a0_b()) {
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
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		t0{a0};
		t3{};
	}
}

task t3
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		f_595_a2_b("quest_d3_03", "boy_free");
		@SetProperty("noaccess", 0);
		for (; ; ) {
			f_1d5_a0_v();
		}
	}

	bool f_1c5_a0_b(void)
	{
		return true;
	}

	void OnAttacked(object a0)
	{
		if (f_672_a1_b(a0)) {
			f_21c_a0_v();
			f_679_a1_v(a0);
		}
	}

	void f_1d5_a0_v(void)
	{
		float L0;
		tv0 = false;
		tv1 = false;
		@rand(L0, 0.5);
		@Sleep(L0);
		while (!tv0) {
			Vector L1;
			if (!tv1) {
				for (; ; ) {
					Vector L2;
					bool L3;
					@GetPosition(L2);
					@GetRandomPFPointInCircle(L1, L2, f_210_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_22c_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_1c5_a0_b(), L5);
					L4 = null;
					if (L5) {
						t4{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_210_a0_f(void)
	{
		float L0;
		@GetCameraFarDistance(L0);
		return L0;
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void OnActorStuck(void)
	{
		@Stop();
	}

	void f_21c_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_21c_a0_v();
		global.OnDeath(a0);
	}

	object f_22c_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t4
{
	void OnAttacked(object a0)
	{
		if (f_672_a1_b(a0)) {
			f_291_a0_v();
			f_679_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_4ac_a0_b()) {
			return;
		}
		L0 = f_5a8_a0_i();
		for (L1 = 0; L1 < 5 && f_4ac_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_5a1_a1_s(L3));
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
			if (!f_28f_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_28f_a0_b(void)
	{
		return true;
	}

	void f_291_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t5
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_296_a1_V(float a0)
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
		L3 = f_557_a1_V(f_557_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_296_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_296_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_3d5_a0_V() + L0;
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
				L3 = f_296_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_3d5_a0_V() + L3;
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
			L2 = f_296_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_341_a0_b())) {
				@Stop();
				tv1 = f_3d5_a0_V() + L2;
			}
		}
	}

	void f_331_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_331_a0_v();
		global.OnDeath(a0);
	}

	bool f_341_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_3da_a1_V(tv0);
		return f_561_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t6
{
	void init(object a0)
	{
		f_35a_a1_v(a0);
		for (; ; ) {
			@Hold();
		}
	}

	void f_35a_a1_v(object a0)
	{
		if (a0 == null) {
			f_3b5_a1_v("fdie");
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
			f_52e_a1_v(L4);
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

	void f_3b5_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_52e_a1_v(a0);
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

Vector f_3d5_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_3da_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

bool f_3e1_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_3ed_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_3f2_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_3ed_a1_b(a0)) {
		return false;
	}
	@GetScene(L0);
	if (L0 == null) {
		return false;
	}
	a0->GetScene(L1);
	if (L0 != L1) {
		return false;
	}
	return true;
}

bool f_416_a1_b(object a0)
{
	int L0;
	if (!f_3f2_a1_b(a0)) {
		return false;
	}
	if (!f_3e1_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_42e_a1_v(object a0)
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

void f_45a_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_557_a1_V(f_3da_a1_V(a0));
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
			f_49e_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_42e_a1_v(a0);
}

void f_49e_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_42e_a1_v(a0);
}

bool f_4ac_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_4b1_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_557_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_643_a0_b()) {
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

void f_4f6_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_643_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_508_a1_v(string a0)
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

void f_518_a2_v(string a0, bool a1)
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

void f_527_a0_v(void)
{
	if (f_643_a0_b()) {
		@lshStopSpeech();
	}
}

void f_52e_a1_v(string a0)
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

Vector f_557_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_561_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

void f_569_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_575_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	} else {
		f_569_a2_v(L0, a2);
	}
}

void f_588_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_575_a3_v(a0, L0, a2);
}

bool f_595_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

string f_5a1_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_5a8_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_5a1_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_5b9_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_5bf_a2_v(object a0, object a1)
{
	float L0;
	@SetVariable("d3q03", 2);
	f_5e7_a0_v();
	a0->GetProperty("disease", L0);
	if (L0 < 0.5) {
		a0->SetProperty("disease", 0.5);
	}
}

void f_5d2_a2_v(object a0, object a1)
{
	@Trace("powder is given");
	f_588_a3_v(a0, "powder", 1);
}

void f_5dd_a2_v(object a0, object a1)
{
	f_5f4_a0_v();
	f_595_a2_b("quest_d3_03", "fail");
}

void f_5e7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 84, 2, 512166);
	f_60e_a2_b(L0, 27);
}

void f_5f4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 86, 2, 512168);
	f_60e_a2_b(L0, 27);
}

object f_601_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_60e_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_601_a0_o();
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

int f_62a_a0_i(void)
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

int f_63b_a0_i(void)
{
	return 515560;
}

int f_63d_a0_i(void)
{
	return 503345;
}

string f_63f_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_641_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_643_a0_b(void)
{
	return false;
}

void f_645_a1_v(object a0)
{
	t6{a0};
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_45a_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_49e_a5_v(a0, a1, a2, a4, a5);
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
	f_645_a1_v(a0);
}

bool f_672_a1_b(object a0)
{
	return f_416_a1_b(a0);
}

void f_679_a1_v(object a0)
{
	t5{a0};
}

void OnAttacked(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		f_595_a2_b("quest_d3_03", "boy_attacked");
	}
}

