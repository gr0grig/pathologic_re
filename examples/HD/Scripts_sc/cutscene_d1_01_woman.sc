event OnDialogReply 11;
event OnUse 0;
event OnUnload 6;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnSteal 40;
event OnMessage 42;
event OnTrigger 26;
event OnSee 1;
event OnCollision 10;
event OnActorStuck 28;
event OnTimer 7;
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
		if (!f_5ee_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8ab_a0_i());
		L0->SetNPCDescription(f_8a9_a0_i());
		L0->SetPhoto(f_8ad_a0_s());
		L0->SetPhoto2(f_8af_a0_s());
		L0->SetPlayerName(f_6b5_a0_i());
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
		f_633_a1_v(a0);
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
			tv0->SetMessage(518110);
			tv0->ClearReplies();
			tv0->AddReply(518111, -1, 19230);
			tv0->AddReply(534585, -1, 36223);
			break;
			return;
		}
		if (f_8b1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_645_a1_v(tv2);
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
		if (!f_8b1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_655_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_664_a0_v();
			if (a0 == 19229) {
				f_84_a1_v("Neutral");
				tv0->SetMessage(518110);
				tv0->ClearReplies();
				tv0->AddReply(518111, -1, 19230);
				tv0->AddReply(534585, -1, 36223);
				return;
			}
			tv3 = true;
			if (f_8b1_a0_b()) {
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
	void init(object a0)
	{
		disable OnUse;
		f_e5_a1_v(a0);
		f_8cb_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_88c_a1_i(a0);
		if (L0 > 0) {
			f_88f_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_8c3_a0_v();
	}

	void f_e5_a1_v(object a0)
	{
		if (a0 == null) {
			f_140_a1_v("fdie");
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
			f_66b_a1_v(L4);
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

	void f_140_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_66b_a1_v(a0);
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

task t3
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_88c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_255_a0_v();
			}
			f_88f_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_81c_a1_v(a0);
		L0 = f_85e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_255_a0_v();
			}
			f_868_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_8c0_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_870_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_255_a0_v();
				}
				f_87a_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_882_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_255_a0_v();
			}
			f_885_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_7c6_a2_b(a0, a1)) {
			f_255_a0_v();
			f_7e6_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_887_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_255_a0_v();
				}
				f_88a_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_829_a1_b(a0)) {
			f_255_a0_v();
			f_839_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_255_a0_v();
		f_8c3_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_7ff_a1_b(a0)) {
			f_255_a0_v();
			f_816_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_5e9_a0_b()) {
			return;
		}
		L0 = f_84d_a0_i();
		for (L1 = 0; L1 < 5 && f_5e9_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_846_a1_s(L3));
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
			if (!f_253_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_253_a0_b(void)
	{
		return true;
	}

	void f_255_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

maintask t4
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		@SensePlayerOnly(true);
		f_8b3_a0_v();
		f_268_a0_v();
		for (; ; ) {
			f_315_a0_v();
		}
	}

	void f_268_a0_v(void)
	{
		if (!f_5e9_a0_b()) {
			f_8c3_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_88c_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35c_a0_v();
			}
			f_88f_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_81c_a1_v(a0);
		L0 = f_85e_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35c_a0_v();
			}
			f_868_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_8c0_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_870_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_35c_a0_v();
				}
				f_87a_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_882_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_35c_a0_v();
			}
			f_885_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_7c6_a2_b(a0, a1)) {
			f_35c_a0_v();
			f_7e6_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_887_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_35c_a0_v();
				}
				f_88a_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_829_a1_b(a0)) {
			f_35c_a0_v();
			f_839_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_7ff_a1_b(a0)) {
			f_35c_a0_v();
			f_816_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_35c_a0_v();
		f_8c3_a0_v();
	}

	void f_315_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_350_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_36e_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_36c_a0_b(), L5);
					L4 = null;
					if (L5) {
						t3{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_350_a0_f(void)
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

	void f_35c_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object a0)
	{
		f_35c_a0_v();
		global.OnDeath(a0);
	}

	bool f_36c_a0_b(void)
	{
		return false;
	}

	object f_36e_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t5
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void init(object a0)
	{
		@Face(a0);
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
		@PlayAnimation("all", "attack_stay");
		@WaitForAnimEnd();
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		@StopAsync();
		f_3b5_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_432_a0_v();
		f_8c3_a0_v();
	}

	Vector f_397_a1_V(float a0)
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
		L3 = f_69a_a1_V(f_69a_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_3b5_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_397_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_397_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_50d_a0_V() + L0;
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
				L3 = f_397_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_50d_a0_V() + L3;
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
			L2 = f_397_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_442_a0_b())) {
				@Stop();
				tv1 = f_50d_a0_V() + L2;
			}
		}
	}

	void f_432_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_432_a0_v();
		global.OnDeath(a0);
	}

	bool f_442_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_512_a1_V(tv0);
		return f_6a4_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t6
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_452_a1_V(float a0)
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
		L3 = f_69a_a1_V(f_69a_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_452_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_452_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_50d_a0_V() + L0;
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
				L3 = f_452_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_50d_a0_V() + L3;
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
			L2 = f_452_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_4fd_a0_b())) {
				@Stop();
				tv1 = f_50d_a0_V() + L2;
			}
		}
	}

	void f_4ed_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_4ed_a0_v();
		global.OnDeath(a0);
	}

	bool f_4fd_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_512_a1_V(tv0);
		return f_6a4_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_50d_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_512_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

bool f_519_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_51e_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_52a_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_52f_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_52a_a1_b(a0)) {
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

bool f_553_a1_b(object a0)
{
	int L0;
	if (!f_52f_a1_b(a0)) {
		return false;
	}
	if (!f_51e_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_56b_a1_v(object a0)
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

void f_597_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_69a_a1_V(f_512_a1_V(a0));
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
			f_5db_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_56b_a1_v(a0);
}

void f_5db_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_56b_a1_v(a0);
}

bool f_5e9_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_5ee_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_69a_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_8b1_a0_b()) {
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

void f_633_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_8b1_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_645_a1_v(string a0)
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

void f_655_a2_v(string a0, bool a1)
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

void f_664_a0_v(void)
{
	if (f_8b1_a0_b()) {
		@lshStopSpeech();
	}
}

void f_66b_a1_v(string a0)
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

object f_694_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_69a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_6a4_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

int f_6ac_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_6b5_a0_i(void)
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

void f_6c6_a2_v(int a0, int a1)
{
	int L0;
	bool L1;
	if (a0 > a1) {
		@Trace("GenerateMoney: iMin > iMax");
		return;
	}
	L0 = 0;
	if (a0 != a1) {
		@irand(L0, a1 - a0);
	} else {
		if (a0 == 0) {
			return;
		}
	}
	L0 = L0 + a0;
	if (L0 == 0) {
		return;
	}
	@AddItem(L1, f_794_a1_i("Money"), 0, L0);
}

void f_6e5_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_6c6_a2_v(0, 100 + f_6ac_a0_i() * 100);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_794_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_794_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_794_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_794_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_794_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_794_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_6c6_a2_v(0, 50 + f_6ac_a0_i() * 50);
		@irand(L0, 7);
		if (L0 == 0) {
			@AddItem(L1, f_794_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_794_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_794_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_794_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_794_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_794_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_794_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_799_a1_v(object a0)
{
	t2{a0};
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
	f_799_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_597_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_5db_a5_v(a0, a1, a2, a4, a5);
}

bool f_7c6_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_895_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_89a_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_89f_a1_b(a0);
			}
		}
	}
	return false;
}

void f_7e6_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_898_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_89d_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_8a2_a1_v(a0);
			}
		}
	}
}

bool f_7ff_a1_b(object a0)
{
	if (f_895_a1_b(a0) && f_519_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_816_a1_v(object a0)
{
	f_898_a1_v(a0);
}

void f_81c_a1_v(object a0)
{
	if (f_519_a1_b(a0)) {
		@ReportReputationChange(a0, f_694_a0_o(), -0.05000000074505806);
	}
}

bool f_829_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_8a4_a1_b(L0);
	}
	return false;
}

void f_839_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_8a7_a1_v(L0);
	}
}

string f_846_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_84d_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_846_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_85e_a1_i(object a0)
{
	return f_553_a1_b(a0) ? 2 : 0;
}

void f_868_a1_v(object a0)
{
	t5{a0};
}

int f_870_a2_i(object a0, bool a1)
{
	return f_553_a1_b(a0) ? 2 : 0;
}

void f_87a_a1_v(object a0)
{
	t6{a0};
}

int f_882_a1_i(object a0)
{
	return 0;
}

void f_885_a1_v(object a0)
{
}

int f_887_a2_i(string a0, object a1)
{
	return 0;
}

void f_88a_a2_v(string a0, object a1)
{
}

int f_88c_a1_i(object a0)
{
	return 2;
}

void f_88f_a1_v(object a0)
{
	f_8b8_a1_v(a0);
}

bool f_895_a1_b(object a0)
{
	return false;
}

void f_898_a1_v(object a0)
{
}

bool f_89a_a1_b(object a0)
{
	return false;
}

void f_89d_a1_v(object a0)
{
}

bool f_89f_a1_b(object a0)
{
	return false;
}

void f_8a2_a1_v(object a0)
{
}

bool f_8a4_a1_b(object a0)
{
	return false;
}

void f_8a7_a1_v(object a0)
{
}

int f_8a9_a0_i(void)
{
	return 515567;
}

int f_8ab_a0_i(void)
{
	return 503352;
}

string f_8ad_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_8af_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_8b1_a0_b(void)
{
	return false;
}

void f_8b3_a0_v(void)
{
	f_6e5_a1_v(true);
}

void f_8b8_a1_v(object a0)
{
	t0{a0};
}

bool f_8c0_a3_b(object a0, object a1, bool a2)
{
	return true;
}

void f_8c3_a0_v(void)
{
	@RemoveActor(f_694_a0_o());
	@Hold();
}

void f_8cb_a1_v(object a0)
{
}

