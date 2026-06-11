event evt_11 11;
event OnUse 0;
event OnUnload 6;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnSteal 40;
event OnMessage 42;
event OnSee 1;
event OnHear 3;
event OnTimer 7;
event OnCollision 10;
event OnActorStuck 28;

var object g0;
var bool g1;

task t0
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			@WaitForAnimEnd();
			@PlayAnimation("all", "idle");
			if (tv0) {
				return;
			}
		}
	}

	void evt_11(int a0)
	{
		@StopAnimation();
		@StopTrade();
		tv0 = true;
	}
}

task t1
{
	void init(object a0)
	{
		disable OnUse;
		f_37_a1_v(a0);
		f_9e8_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_8b1_a1_i(a0);
		if (L0 > 0) {
			f_8b4_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_8ba_a0_v();
	}

	void f_37_a1_v(object a0)
	{
		if (a0 == null) {
			f_8e_a1_v("fdie");
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

	void f_8e_a1_v(string a0)
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

maintask t2
{
	var bool tv0;
	var bool tv1;
	var bool tv2;

	void init(void)
	{
		@SensePlayerOnly(true);
		f_988_a0_v();
		f_b9_a0_v();
		for (; ; ) {
			tv2 = false;
			f_18e_a0_v();
		}
	}

	void f_b9_a0_v(void)
	{
		if (!f_769_a0_b()) {
			f_8ba_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_8b1_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_14d_a0_v();
			}
			f_8b4_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_88d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_14d_a0_v();
			}
			f_897_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_9b8_a2_b(a0, a1)) {
			int L0;
			L0 = f_89f_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_14d_a0_v();
				}
				f_8a9_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_8bb_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_14d_a0_v();
			}
			f_8c8_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_8ce_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_14d_a0_v();
			}
			f_8d1_a2_v(a1, a0);
		}
	}

	void OnSee(object a0)
	{
		f_166_a1_v(a0);
	}

	void OnHear(object a0)
	{
		f_166_a1_v(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 != 110) {
			return;
		}
		tv2 = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(void)
	{
		f_14d_a0_v();
		f_8ba_a0_v();
	}

	void f_14d_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_1ce_a0_v();
	}

	void f_155_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_1d5_a0_v();
	}

	void OnDeath(object a0)
	{
		f_14d_a0_v();
		global.OnDeath(a0);
	}

	void f_166_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_703_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_87c_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_155_a0_v();
			}
			f_885_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_18e_a0_v(void)
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
					float L3;
					bool L4;
					@GetPosition(L2);
					@GetCameraFarDistance(L3);
					L3 = L3 * 2.5;
					@GetRandomPFPointInCircle(L1, L2, L3, L4);
					if (L4) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L5;
			@FindShiftedPathTo(L5, L1);
			if (L5 != null) {
				bool L6;
				@RotatePath(L5, L6);
				if (L6) {
					@FollowPath(L5, f_1dc_a0_b(), L6);
					L5 = null;
					if (L6) {
						t3{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void OnActorStuck(void)
	{
		@Stop();
	}

	void f_1ce_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_1d5_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_1dc_a0_b(void)
	{
		return false;
	}
}

task t3
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_8b1_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_296_a0_v();
			}
			f_8b4_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_88d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_296_a0_v();
			}
			f_897_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_9b8_a2_b(a0, a1)) {
			int L0;
			L0 = f_89f_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_296_a0_v();
				}
				f_8a9_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_8bb_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_296_a0_v();
			}
			f_8c8_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_8ce_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_296_a0_v();
			}
			f_8d1_a2_v(a1, a0);
		}
	}

	void OnUnload(void)
	{
		f_296_a0_v();
		f_8ba_a0_v();
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_769_a0_b()) {
			return;
		}
		L0 = f_86b_a0_i();
		L1 = 0;
		for (; L1 < 5 && f_769_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_864_a1_s(L3));
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

	void f_296_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t4
{
	var object tv0;

	void init(object a0)
	{
		Vector L0;
		Vector L1;
		bool L2;
		tv0 = a0;
		f_2ce_a0_v();
		@GetDirection(L0);
		L1 = f_6bf_a1_V(tv0);
		if (f_827_a2_f(L0, L1) < 0) {
			f_75e_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_75e_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_2ce_a0_v(void)
	{
		f_7f0_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_8b1_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_33f_a0_v();
			}
			f_8b4_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		L0 = f_88d_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_33f_a0_v();
			}
			f_897_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1)
	{
		if (f_9b8_a2_b(a0, a1)) {
			int L0;
			L0 = f_89f_a1_i(a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_33f_a0_v();
				}
				f_8a9_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_8bb_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_33f_a0_v();
			}
			f_8c8_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		int L0;
		L0 = f_8ce_a2_i(a1, a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_33f_a0_v();
			}
			f_8d1_a2_v(a1, a0);
		}
	}

	void f_33f_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_33f_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_703_a1_b(tv0)) {
			f_33f_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_6bf_a1_V(tv0);
		if (f_827_a2_f(L0, L1) < 0.4999999701976776) {
			f_75e_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_33f_a0_v();
		f_8ba_a0_v();
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
		f_3be_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_432_a0_v();
		f_8ba_a0_v();
	}

	Vector f_3a0_a1_V(float a0)
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
		L3 = f_802_a1_V(f_802_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_3be_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_3a0_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 10000.0) {
			@Trace("Can't retreat, distance: " + sqrt(L1));
			@Sleep(0.5);
			return;
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_6ba_a0_V() + L0;
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
				L3 = f_3a0_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 10000.0) {
					tv1 = f_6ba_a0_V() + L3;
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
			L2 = f_3a0_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 10000.0 && (L3 >= L1 * L1 * 2.25 || f_442_a0_b())) {
				@Stop();
				tv1 = f_6ba_a0_V() + L2;
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
		L1 = f_6bf_a1_V(tv0);
		return f_80c_a2_f(L0, L1) >= -0.3420201241970062;
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
		L3 = f_802_a1_V(f_802_a1_V(L0 - L1) + L2 * 0.75);
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
		if (L1 < 10000.0) {
			@Trace("Can't retreat, distance: " + sqrt(L1));
			@Sleep(0.5);
			return;
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_6ba_a0_V() + L0;
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
				if (L4 >= 10000.0) {
					tv1 = f_6ba_a0_V() + L3;
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
			if (L3 >= 10000.0 && (L3 >= L1 * L1 * 2.25 || f_4f4_a0_b())) {
				@Stop();
				tv1 = f_6ba_a0_V() + L2;
			}
		}
	}

	void f_4e4_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_4e4_a0_v();
		global.OnDeath(a0);
	}

	bool f_4f4_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_6bf_a1_V(tv0);
		return f_80c_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t7
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_76e_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_982_a0_i());
		L0->SetPhoto(f_984_a0_s());
		L0->SetPlayerName(f_8d8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t8{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_7a6_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t8
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
			f_5aa_a1_v("Neutral");
			tv0->SetMessage(13406);
			tv0->ClearReplies();
			tv0->AddReply(13407, -1, 14641);
			tv0->AddReply(13408, -1, 14642);
			break;
			f_5aa_a1_v("Neutral");
			tv0->SetMessage(14721);
			tv0->ClearReplies();
			tv0->AddReply(14722, 15966, 15965);
			tv0->AddReply(14732, -1, 15976);
			tv0->AddReply(14733, -1, 15977);
			break;
			f_5aa_a1_v("Neutral");
			tv0->SetMessage(14734);
			tv0->ClearReplies();
			tv0->AddReply(14735, 15980, 15979);
			tv0->AddReply(14748, 15980, 15993);
			break;
			return;
		}
		if (f_986_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_7de_a1_v(tv2);
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

	void f_5aa_a1_v(string a0)
	{
		if (!f_986_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_7de_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_7fb_a0_v();
			if (a1 == 14641) {
				f_8d3_a2_v(tv1, tv0);
			}
			if (a0 == 14640) {
				f_5aa_a1_v("Neutral");
				tv0->SetMessage(13406);
				tv0->ClearReplies();
				tv0->AddReply(13407, -1, 14641);
				tv0->AddReply(13408, -1, 14642);
				return;
				f_5aa_a1_v("Neutral");
				tv0->SetMessage(14721);
				tv0->ClearReplies();
				tv0->AddReply(14722, 15966, 15965);
				tv0->AddReply(14732, -1, 15976);
				tv0->AddReply(14733, -1, 15977);
				return;
				f_5aa_a1_v("Neutral");
				tv0->SetMessage(14734);
				tv0->ClearReplies();
				tv0->AddReply(14735, 15980, 15979);
				tv0->AddReply(14748, 15980, 15993);
				return;
			}
			if (a0 == 15980) {
				f_5aa_a1_v("Neutral");
				tv0->SetMessage(14736);
				tv0->ClearReplies();
				tv0->AddReply(14737, 15982, 15981);
				tv0->AddReply(14744, 15989, 15988);
				return;
			}
			if (a0 == 15989) {
				f_5aa_a1_v("Neutral");
				tv0->SetMessage(14745);
				tv0->ClearReplies();
				tv0->AddReply(14746, 15982, 15990);
				tv0->AddReply(14747, -1, 15992);
				return;
			}
			if (a0 == 15982) {
				f_5aa_a1_v("Neutral");
				tv0->SetMessage(14738);
				tv0->ClearReplies();
				tv0->AddReply(14739, 15984, 15983);
				tv0->AddReply(14743, -1, 15987);
				return;
			}
			if (a0 == 15984) {
				f_5aa_a1_v("Neutral");
				tv0->SetMessage(14740);
				tv0->ClearReplies();
				tv0->AddReply(14741, -1, 15985);
				tv0->AddReply(14742, -1, 15986);
				return;
			}
			if (a0 == 15966) {
				f_5aa_a1_v("Neutral");
				tv0->SetMessage(14723);
				tv0->ClearReplies();
				tv0->AddReply(14724, 15968, 15967);
				tv0->AddReply(14731, 15968, 15974);
				return;
			}
			if (a0 == 15968) {
				f_5aa_a1_v("Neutral");
				tv0->SetMessage(14725);
				tv0->ClearReplies();
				tv0->AddReply(14726, 15970, 15969);
				tv0->AddReply(14730, -1, 15973);
				return;
			}
			if (a0 == 15970) {
				f_5aa_a1_v("Neutral");
				tv0->SetMessage(14727);
				tv0->ClearReplies();
				tv0->AddReply(14728, -1, 15971);
				tv0->AddReply(14729, -1, 15972);
				return;
			}
			tv3 = true;
			if (f_986_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

Vector f_6ba_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_6bf_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_6c6_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_6ce_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_6da_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_6df_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_6da_a1_b(a0)) {
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

bool f_703_a1_b(object a0)
{
	int L0;
	if (!f_6df_a1_b(a0)) {
		return false;
	}
	if (!f_6ce_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_71b_a3_v(object a0, int a1, float a2)
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

void f_75e_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_769_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_76e_a1_b(object a0)
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
	L5 = L3 * 70 + f_802_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_7a6_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

bool f_7aa_a1_b(object a0)
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
	L5 = L3 * 70 - [0.0, 10.0, 0.0];
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

void f_7da_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_7de_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_7f0_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_7fb_a0_v(void)
{
	if (f_986_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_802_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_80c_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_814_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_81d_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_827_a2_f(Vector a0, Vector a1)
{
	return f_814_a2_f(a0, a1) / (f_81d_a1_f(a0) * f_81d_a1_f(a1));
}

int f_838_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_841_a1_v(object a0)
{
	t1{a0};
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
	f_841_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_71b_a3_v(a0, a1, a2);
}

string f_864_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_86b_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_864_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_87c_a1_i(object a0)
{
	return f_9b6_a0_b() ? 2 : 0;
}

void f_885_a1_v(object a0)
{
	t4{a0};
}

int f_88d_a1_i(object a0)
{
	return f_703_a1_b(a0) ? 2 : 0;
}

void f_897_a1_v(object a0)
{
	t5{a0};
}

int f_89f_a1_i(object a0)
{
	return f_703_a1_b(a0) ? 2 : 0;
}

void f_8a9_a1_v(object a0)
{
	t6{a0};
}

int f_8b1_a1_i(object a0)
{
	return 2;
}

void f_8b4_a1_v(object a0)
{
	f_990_a1_v(a0);
}

void f_8ba_a0_v(void)
{
}

int f_8bb_a1_i(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	if (L0) {
		return f_88d_a1_i(a0);
	}
	return 0;
}

void f_8c8_a1_v(object a0)
{
	f_897_a1_v(a0);
}

int f_8ce_a2_i(string a0, object a1)
{
	return 0;
}

void f_8d1_a2_v(string a0, object a1)
{
}

void f_8d3_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

int f_8d8_a0_i(void)
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

void f_8e9_a2_v(int a0, int a1)
{
	if (a0 > a1) {
		@Trace("GenerateMoney: iMin > iMax");
		return;
	}
	int L0;
	L0 = 0;
	if (a0 != a1) {
		int L1;
		@irand(L1, a1 - a0);
	} else {
		if (a0 == 0) {
			return;
		}
	}
	L0 = L0 + a0;
	if (L0 == 0) {
		return;
	}
	int L2;
	@GetInvItemByName(L2, "Money");
	bool L3;
	@AddItem(L3, L2, 0, L0);
}

void f_907_a1_v(bool a0)
{
	bool L0;
	int L1;
	@ClearSubContainer(0);
	f_8e9_a2_v(0, 10 + f_838_a0_i() * 10);
	@irand(L1, 4);
	if (L1 == 0) {
		@AddItem(L0, f_97d_a1_i("hook"), 0, 1);
	}
	@irand(L1, 10);
	if (L1 == 0) {
		@AddItem(L0, f_97d_a1_i("watch"), 0, 1);
	}
}

void f_933_a1_v(bool a0)
{
	int L0;
	bool L1;
	@ClearSubContainer(0);
	if (a0) {
		@irand(L0, 3);
		if (L0 != 0) {
			@AddItem(L1, f_97d_a1_i("alpha_pills"), 0, L0);
		}
		@irand(L0, 3);
		if (L0 != 0) {
			@AddItem(L1, f_97d_a1_i("meradorm"), 0, L0);
		}
	} else {
		@irand(L0, 3);
		if (L0 == 0) {
			@AddItem(L1, f_97d_a1_i("lockpick"), 0, 1);
		}
		@irand(L0, 4);
		if (L0 != 0) {
			@AddItem(L1, f_97d_a1_i("rifle_ammo"), 0, L0);
		}
		@irand(L0, 4);
		if (L0 != 0) {
			@AddItem(L1, f_97d_a1_i("revolver_ammo"), 0, L0);
		}
	}
}

int f_97d_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

int f_982_a0_i(void)
{
	return 3344;
}

string f_984_a0_s(void)
{
	return "ui/NPC_None.png";
}

bool f_986_a0_b(void)
{
	return false;
}

void f_988_a0_v(void)
{
	g1 = false;
	f_933_a1_v(false);
}

void f_990_a1_v(object a0)
{
	if (g1) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			@WorkWithCorpse(a0);
		}
		return;
	} else {
		if (1000 == t7{a0}) {
			if (!f_7aa_a1_b(a0)) {
				return;
			}
			t0{a0};
			f_7da_a1_v(a0);
		}
	}
}

bool f_9b6_a0_b(void)
{
	return true;
}

bool f_9b8_a2_b(object a0, object a1)
{
	bool L0;
	@CanSee(L0, a0);
	if (L0 || f_6c6_a1_f(a0) <= 250000.0) {
		@ReportReputationChange(a0, a1, -0.30000001192092896);
		@SetProperty("ToDie", true);
		return true;
	}
	@CanSee(L0, a1);
	if (L0 || f_6c6_a1_f(a1) <= 250000.0) {
		@SetProperty("ToDie", true);
		return true;
	}
	return false;
}

void f_9e8_a1_v(object a0)
{
	g1 = true;
	@SetRTEnvelope(50, 40);
	f_907_a1_v(false);
}

