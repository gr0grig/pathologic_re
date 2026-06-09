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
event OnTrigger 26;
event OnSee 1;
event OnHear 3;
event OnTimer 7;
event OnHit2 43;

var bool g0;

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
		if (!f_949_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e31_a0_i());
		L0->SetNPCDescription(f_e2f_a0_i());
		L0->SetPhoto(f_e33_a0_s());
		L0->SetPhoto2(f_e35_a0_s());
		L0->SetPlayerName(f_a92_a0_i());
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
		f_98d_a1_v(a0);
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
			f_d9_a1_v("Neutral");
			tv0->SetMessage(538167);
			tv0->ClearReplies();
			tv0->AddReply(538168, -1, 40043);
			if (f_a5b_a1_b(tv1) && f_a43_a1_b(tv1)) {
				tv0->AddReply(538169, 40045, 40044);
			}
			if (f_a5b_a1_b(tv1) && f_a6f_a1_b(tv1) && f_a43_a1_b(tv1)) {
				tv0->AddReply(538179, 40055, 40054);
			}
			if (f_a65_a1_b(tv1) && f_a43_a1_b(tv1)) {
				tv0->AddReply(538190, 40067, 40066);
			}
			if (f_a43_a1_b(tv1) || f_a4f_a1_b(tv1)) {
				tv0->AddReply(538204, -1, 40081);
			}
			tv0->AddReply(538205, -1, 40082);
			break;
			return;
		}
		if (f_e37_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_99e_a1_v(tv2);
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

	void f_d9_a1_v(string a0)
	{
		if (!f_e37_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9a5_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_9b6_a0_v();
			if (a1 == 40043) {
				f_a3e_a2_v(tv1, tv0);
			}
			if (a0 == 40042) {
				f_d9_a1_v("Neutral");
				tv0->SetMessage(538167);
				tv0->ClearReplies();
				tv0->AddReply(538168, -1, 40043);
				if (f_a5b_a1_b(tv1) && f_a43_a1_b(tv1)) {
					tv0->AddReply(538169, 40045, 40044);
				}
				if (f_a5b_a1_b(tv1) && f_a6f_a1_b(tv1) && f_a43_a1_b(tv1)) {
					tv0->AddReply(538179, 40055, 40054);
				}
				if (f_a65_a1_b(tv1) && f_a43_a1_b(tv1)) {
					tv0->AddReply(538190, 40067, 40066);
				}
				if (f_a43_a1_b(tv1) || f_a4f_a1_b(tv1)) {
					tv0->AddReply(538204, -1, 40081);
				}
				tv0->AddReply(538205, -1, 40082);
				return;
			}
			if (a0 == 40067) {
				f_d9_a1_v("Neutral");
				tv0->SetMessage(538191);
				tv0->ClearReplies();
				tv0->AddReply(538192, 40069, 40068);
				tv0->AddReply(538203, 40069, 40079);
				return;
			}
			if (a0 == 40069) {
				f_d9_a1_v("Neutral");
				tv0->SetMessage(538193);
				tv0->ClearReplies();
				tv0->AddReply(538194, 40071, 40070);
				tv0->AddReply(538202, -1, 40078);
				return;
			}
			if (a0 == 40071) {
				f_d9_a1_v("Neutral");
				tv0->SetMessage(538195);
				tv0->ClearReplies();
				tv0->AddReply(538196, 40073, 40072);
				tv0->AddReply(538201, -1, 40077);
				return;
			}
			if (a0 == 40073) {
				f_d9_a1_v("Neutral");
				tv0->SetMessage(538197);
				tv0->ClearReplies();
				tv0->AddReply(538198, -1, 40074);
				tv0->AddReply(538199, -1, 40075);
				tv0->AddReply(538200, -1, 40076);
				return;
			}
			if (a0 == 40055) {
				f_d9_a1_v("Neutral");
				tv0->SetMessage(538180);
				tv0->ClearReplies();
				tv0->AddReply(538181, 40057, 40056);
				tv0->AddReply(538188, 40057, 40063);
				tv0->AddReply(538189, -1, 40065);
				return;
			}
			if (a0 == 40057) {
				f_d9_a1_v("Neutral");
				tv0->SetMessage(538182);
				tv0->ClearReplies();
				tv0->AddReply(538183, 40059, 40058);
				tv0->AddReply(538187, -1, 40062);
				return;
			}
			if (a0 == 40059) {
				f_d9_a1_v("Neutral");
				tv0->SetMessage(538184);
				tv0->ClearReplies();
				tv0->AddReply(538185, -1, 40060);
				tv0->AddReply(538186, -1, 40061);
				return;
			}
			if (a0 == 40045) {
				f_d9_a1_v("Neutral");
				tv0->SetMessage(538170);
				tv0->ClearReplies();
				tv0->AddReply(538171, 40047, 40046);
				tv0->AddReply(538175, 40051, 40050);
				tv0->AddReply(538178, -1, 40053);
				return;
			}
			if (a0 == 40051) {
				f_d9_a1_v("Neutral");
				tv0->SetMessage(538176);
				tv0->ClearReplies();
				tv0->AddReply(538177, -1, 40052);
				return;
			}
			if (a0 == 40047) {
				f_d9_a1_v("Neutral");
				tv0->SetMessage(538172);
				tv0->ClearReplies();
				tv0->AddReply(538173, -1, 40048);
				tv0->AddReply(538174, -1, 40049);
				return;
			}
			tv3 = true;
			if (f_e37_a0_b()) {
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
		f_287_a1_v(a0);
		f_e83_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_d1b_a1_i(a0);
		if (L0 > 0) {
			f_d1e_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_d24_a0_v();
	}

	void f_287_a1_v(object a0)
	{
		if (a0 == null) {
			f_2e2_a1_v("fdie");
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
			f_9bd_a1_v(L4);
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

	void f_2e2_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_9bd_a1_v(a0);
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

maintask t3
{
	var bool tv0;
	var bool tv1;

	void init(void)
	{
		tv0 = false;
		@SensePlayerOnly(true);
		f_e39_a0_v();
		f_324_a0_v();
		for (; ; ) {
			int L0;
			@irand(L0, 2);
			if (L0 == 0) {
				tv0 = true;
				f_e53_a0_v();
				tv0 = false;
				@ResetAAS();
			} else {
				int L1;
				@irand(L1, 4);
				@Sleep(L1 + 1);
			}
		}
	}

	void f_324_a0_v(void)
	{
		if (!f_944_a0_b()) {
			f_d24_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_d1b_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_3ee_a0_v();
			}
			f_d1e_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_c7a_a1_v(a0);
		L0 = f_cb5_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_3ee_a0_v();
			}
			f_cbf_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_e73_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_cc7_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_3ee_a0_v();
				}
				f_cd1_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_d25_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_3ee_a0_v();
			}
			f_d35_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_c24_a2_b(a0, a1)) {
			f_3ee_a0_v();
			f_c44_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_d3b_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_3ee_a0_v();
				}
				f_d3e_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_c87_a1_b(a0)) {
			f_3ee_a0_v();
			f_c97_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (tv0) {
			return;
		}
		if (f_c5d_a1_b(a0)) {
			f_3ee_a0_v();
			f_c74_a1_v(a0);
		} else {
			f_404_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (tv0) {
			return;
		}
		f_404_a1_v(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 != 110) {
			return;
		}
		tv1 = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(void)
	{
		f_3ee_a0_v();
		f_d24_a0_v();
	}

	void f_3ee_a0_v(void)
	{
		@KillTimer(110);
		tv1 = false;
		if (tv0) {
			f_e6e_a0_v();
		} else {
			@Stop();
		}
	}

	void OnDeath(object a0)
	{
		f_3ee_a0_v();
		global.OnDeath(a0);
	}

	void f_404_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (tv1) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_ca4_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_3ee_a0_v();
			}
			f_cad_a1_v(a0);
			tv1 = true;
			@SetTimer(110, 5.0);
		}
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
		f_458_a0_v();
		@GetDirection(L0);
		L1 = f_85a_a1_V(tv0);
		if (f_a17_a2_f(L0, L1) < 0) {
			f_939_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_939_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_458_a0_v(void)
	{
		f_9ab_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_d1b_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_4ec_a0_v();
			}
			f_d1e_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_c7a_a1_v(a0);
		L0 = f_cb5_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_4ec_a0_v();
			}
			f_cbf_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_e73_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_cc7_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_4ec_a0_v();
				}
				f_cd1_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_d25_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_4ec_a0_v();
			}
			f_d35_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_c24_a2_b(a0, a1)) {
			f_4ec_a0_v();
			f_c44_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_d3b_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_4ec_a0_v();
				}
				f_d3e_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_c87_a1_b(a0)) {
			f_4ec_a0_v();
			f_c97_a1_v(a0);
		}
	}

	void f_4ec_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_4ec_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_8a3_a1_b(tv0)) {
			f_4ec_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_85a_a1_V(tv0);
		if (f_a17_a2_f(L0, L1) < 0.4999999701976776) {
			f_939_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_4ec_a0_v();
		f_d24_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_c5d_a1_b(a0)) {
			f_4ec_a0_v();
			f_c74_a1_v(a0);
		}
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
		f_579_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_5f6_a0_v();
		f_d24_a0_v();
	}

	Vector f_55b_a1_V(float a0)
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
		L3 = f_9ec_a1_V(f_9ec_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_579_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_55b_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_55b_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_855_a0_V() + L0;
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
				L3 = f_55b_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_855_a0_V() + L3;
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
			L2 = f_55b_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_606_a0_b())) {
				@Stop();
				tv1 = f_855_a0_V() + L2;
			}
		}
	}

	void f_5f6_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_5f6_a0_v();
		global.OnDeath(a0);
	}

	bool f_606_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_85a_a1_V(tv0);
		return f_9fc_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t6
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_616_a1_V(float a0)
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
		L3 = f_9ec_a1_V(f_9ec_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_616_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_616_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_855_a0_V() + L0;
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
				L3 = f_616_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_855_a0_V() + L3;
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
			L2 = f_616_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_6c1_a0_b())) {
				@Stop();
				tv1 = f_855_a0_V() + L2;
			}
		}
	}

	void f_6b1_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_6b1_a0_v();
		global.OnDeath(a0);
	}

	bool f_6c1_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_85a_a1_V(tv0);
		return f_9fc_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t7
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_773_a0_v();
		f_d24_a0_v();
	}

	Vector f_6d8_a1_V(float a0)
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
		L3 = f_9ec_a1_V(f_9ec_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_6d8_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_6d8_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_855_a0_V() + L0;
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
				L3 = f_6d8_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_855_a0_V() + L3;
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
			L2 = f_6d8_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_783_a0_b())) {
				@Stop();
				tv1 = f_855_a0_V() + L2;
			}
		}
	}

	void f_773_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_773_a0_v();
		global.OnDeath(a0);
	}

	bool f_783_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_85a_a1_V(tv0);
		return f_9fc_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t8
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_835_a0_v();
		f_d24_a0_v();
	}

	Vector f_79a_a1_V(float a0)
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
		L3 = f_9ec_a1_V(f_9ec_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_79a_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_79a_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_855_a0_V() + L0;
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
				L3 = f_79a_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_855_a0_V() + L3;
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
			L2 = f_79a_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_845_a0_b())) {
				@Stop();
				tv1 = f_855_a0_V() + L2;
			}
		}
	}

	void f_835_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_835_a0_v();
		global.OnDeath(a0);
	}

	bool f_845_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_85a_a1_V(tv0);
		return f_9fc_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_855_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_85a_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_861_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_869_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_86e_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_87a_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_87f_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_87a_a1_b(a0)) {
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

bool f_8a3_a1_b(object a0)
{
	int L0;
	if (!f_87f_a1_b(a0)) {
		return false;
	}
	if (!f_86e_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_8bb_a1_v(object a0)
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

void f_8e7_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_9ec_a1_V(f_85a_a1_V(a0));
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
			f_92b_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_8bb_a1_v(a0);
}

void f_92b_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_8bb_a1_v(a0);
}

void f_939_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_944_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_949_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_9ec_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_e37_a0_b()) {
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

void f_98d_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_e37_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_99e_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_9a5_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_9ab_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_9b6_a0_v(void)
{
	if (f_e37_a0_b()) {
		@lshStopSpeech();
	}
}

void f_9bd_a1_v(string a0)
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

object f_9e6_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_9ec_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

object f_9f6_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

float f_9fc_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_a04_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_a0d_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_a17_a2_f(Vector a0, Vector a1)
{
	return f_a04_a2_f(a0, a1) / (f_a0d_a1_f(a0) * f_a0d_a1_f(a1));
}

int f_a28_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_a2d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_a36_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

void f_a3e_a2_v(object a0, object a1)
{
	a1->SetReturnValue(100);
}

bool f_a43_a1_b(object a0)
{
	if (f_a28_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_a4f_a1_b(object a0)
{
	if (f_a28_a1_i("branch") == 1) {
		return true;
	}
	return false;
}

bool f_a5b_a1_b(object a0)
{
	if (f_a79_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_a65_a1_b(object a0)
{
	if (f_a80_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_a6f_a1_b(object a0)
{
	if (f_a87_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_a79_a1_b(object a0)
{
	return f_a2d_a0_i() == 1;
}

bool f_a80_a1_b(object a0)
{
	return f_a2d_a0_i() == 2;
}

bool f_a87_a1_b(object a0)
{
	if (f_a36_a0_i() >= 12) {
		return true;
	}
	return false;
}

int f_a92_a0_i(void)
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

int f_aa3_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

int f_aa9_a1_i(object a0)
{
	int L0;
	a0->GetItemID(L0);
	return L0;
}

int f_aae_a2_i(object a0, int a1)
{
	if (a1 == 0) {
		int L0;
		L0 = f_a2d_a0_i();
		int L1;
		L1 = 0;
		int L2;
		L2 = 1;
		for (; L2 <= L0; L2++) {
			string L3;
			bool L4;
			L3 = "Price";
			if (L2 != 1) {
				L3 = L3 + L2;
			}
			@HasInvItemProperty(L4, f_aa9_a1_i(a0), L3);
			if (!L4) {
				continue;
			}
			@GetInvItemProperty(L1, f_aa9_a1_i(a0), L3);
		}
		return L1;
	}
	bool L5;
	@HasInvItemProperty(L5, f_aa9_a1_i(a0), "BarterPrice" + a1);
	if (!L5) {
		return 0;
	}
	int L6;
	@GetInvItemProperty(L6, f_aa9_a1_i(a0), "BarterPrice" + a1);
	if (L6 > 0) {
		return L6;
	}
	return -L6;
}

void f_aee_a1_v(object a0)
{
	if (f_aa3_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_afb_a2_v(int a0, int a1)
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
	@AddItem(L1, f_bf2_a1_i("Money"), 0, L0);
}

void f_b1a_a1_v(string a0)
{
	object L0;
	int L1;
	bool L2;
	@CreateInvItem(L0);
	L0->SetItemName(a0);
	L0->SetProperty("Organ", 1);
	L0->GetItemID(L1);
	@AddItem(L2, L0, 0, 1);
}

void f_b2b_a0_v(void)
{
	if (f_aa3_a0_i() != 1) {
		return;
	}
	f_b1a_a1_v("liver");
	f_b1a_a1_v("kidney");
	f_b1a_a1_v("heart");
	f_b1a_a1_v("blood");
}

void f_b43_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_afb_a2_v(0, 100 + f_a2d_a0_i() * 100);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_bf2_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_bf2_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_bf2_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_bf2_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_bf2_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_bf2_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_afb_a2_v(0, 50 + f_a2d_a0_i() * 50);
		@irand(L0, 7);
		if (L0 == 0) {
			@AddItem(L1, f_bf2_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_bf2_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_bf2_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_bf2_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_bf2_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_bf2_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_bf2_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_bf7_a1_v(object a0)
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
	f_bf7_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_8e7_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_92b_a5_v(a0, a1, a2, a4, a5);
}

bool f_c24_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_d40_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_d4d_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_d64_a1_b(a0);
			}
		}
	}
	return false;
}

void f_c44_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_d45_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_d5c_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_d6b_a1_v(a0);
			}
		}
	}
}

bool f_c5d_a1_b(object a0)
{
	if (f_d40_a1_b(a0) && f_869_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_c74_a1_v(object a0)
{
	f_d45_a1_v(a0);
}

void f_c7a_a1_v(object a0)
{
	if (f_869_a1_b(a0)) {
		@ReportReputationChange(a0, f_9e6_a0_o(), -0.05000000074505806);
	}
}

bool f_c87_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_d71_a1_b(L0);
	}
	return false;
}

void f_c97_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_d74_a1_v(L0);
	}
}

int f_ca4_a1_i(object a0)
{
	return f_e71_a0_b() ? 2 : 0;
}

void f_cad_a1_v(object a0)
{
	t4{a0};
}

int f_cb5_a1_i(object a0)
{
	return f_8a3_a1_b(a0) ? 2 : 0;
}

void f_cbf_a1_v(object a0)
{
	t5{a0};
}

int f_cc7_a2_i(object a0, bool a1)
{
	return f_8a3_a1_b(a0) ? 2 : 0;
}

void f_cd1_a1_v(object a0)
{
	t6{a0};
}

bool f_cd9_a3_b(object a0, object a1, float a2)
{
	string L0;
	bool L1;
	if (!f_86e_a2_b(a1, "class")) {
		return false;
	}
	a1->GetProperty("class", L0);
	if (L0 == "rat") {
		return false;
	} else {
		if (L0 == "rat_big") {
			return false;
		} else {
			if (L0 == "dog") {
				return false;
			}
		}
	}
	@CanSee(L1, a0);
	if (L1 || f_861_a1_f(a0) <= a2 * a2) {
		return true;
	}
	@CanSee(L1, a1);
	if (L1 || f_861_a1_f(a1) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_d1b_a1_i(object a0)
{
	return 2;
}

void f_d1e_a1_v(object a0)
{
	f_e41_a1_v(a0);
}

void f_d24_a0_v(void)
{
}

int f_d25_a1_i(object a0)
{
	bool L0;
	@Trace("Received steal");
	@CanSee(L0, a0);
	if (L0) {
		return f_cb5_a1_i(a0);
	}
	return 0;
}

void f_d35_a1_v(object a0)
{
	f_cbf_a1_v(a0);
}

int f_d3b_a2_i(string a0, object a1)
{
	return 0;
}

void f_d3e_a2_v(string a0, object a1)
{
}

bool f_d40_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0;
}

void f_d45_a1_v(object a0)
{
	t7{a0};
}

bool f_d4d_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_861_a1_f(a0) <= 4000000;
}

void f_d5c_a1_v(object a0)
{
	t8{a0};
}

bool f_d64_a1_b(object a0)
{
	return f_d4d_a1_b(a0);
}

void f_d6b_a1_v(object a0)
{
	f_d5c_a1_v(a0);
}

bool f_d71_a1_b(object a0)
{
	return false;
}

void f_d74_a1_v(object a0)
{
}

void f_d76_a1_v(object a0)
{
	object L0;
	L0 = f_9f6_a0_o();
	object L1;
	@CreateIntVector(L1);
	object L2;
	@CreateIntVector(L2);
	object L3;
	@CreateIntVector(L3);
	int L4;
	a0->GetSubContainerCount(L4);
	int L5;
	for (L5 = 0; L5 < L4; L5++) {
		int L6;
		int L7;
		a0->GetItemCount(L6, L5);
		for (L7 = 0; L7 < L6; L7++) {
			object L8;
			int L9;
			bool L10;
			a0->GetItem(L8, L7, L5);
			L8->GetItemID(L9);
			@HasInvItemProperty(L10, L9, "HasDurability");
			if (L10) {
				L8->HasProperty(L10, "durability");
				if (L10) {
					int L11;
					L8->GetProperty(L11, "durability");
					if (L11 < 100 && f_e09_a1_b(L8)) {
						float L12;
						int L13;
						L0->add(L8);
						L1->add(L5);
						L2->add(L7);
						L12 = f_aae_a2_i(L8, 0);
						L13 = L12 * (1.0 + 2.0 * L11 / 100.0) * (100 - L11) / 300;
						if (!L13) {
							L13 = 1;
						}
						L3->add(L13);
					}
				}
			}
		}
	}
	object L14;
	@CreateIntVector(L14);
	@ChooseItem(L0, L14, L3, "repair.xml");
	int L15;
	L14->size(L15);
	if (!L15) {
		return;
	}
	int L16;
	L16 = 0;
	int L17;
	for (L17 = 0; L17 < L15; L17++) {
		int L18;
		int L19;
		L14->get(L18, L17);
		L3->get(L19, L18);
		L16 = L16 + L19;
	}
	int L20;
	a0->GetProperty("money", L20);
	L20 = L20 - L16;
	if (L20 < 0) {
		return;
	}
	a0->SetProperty("money", L20);
	int L21;
	for (L21 = 0; L21 < L15; L21++) {
		int L22;
		int L23;
		int L24;
		object L25;
		L14->get(L22, L21);
		L1->get(L23, L22);
		L2->get(L24, L22);
		a0->GetItem(L25, L24, L23);
		L25->SetProperty("durability", 100);
		a0->SetItem(L25, 1, L24, L23);
	}
}

bool f_e09_a1_b(object a0)
{
	int L0;
	bool L1;
	int L2;
	a0->GetItemID(L0);
	@HasInvItemProperty(L1, L0, "Category");
	if (!L1) {
		return false;
	}
	@GetInvItemProperty(L2, L0, "Category");
	return L2 == 1;
}

void f_e19_a1_v(object a0)
{
	if (t0{a0} == 100) {
		f_d76_a1_v(a0);
	}
}

string f_e28_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_e2f_a0_i(void)
{
	return 515567;
}

int f_e31_a0_i(void)
{
	return 503352;
}

string f_e33_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_e35_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_e37_a0_b(void)
{
	return false;
}

void f_e39_a0_v(void)
{
	g0 = false;
	f_b43_a1_v(false);
}

void f_e41_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_aee_a1_v(a0);
		}
		return;
	} else {
		f_e19_a1_v(a0);
	}
}

void f_e53_a0_v(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_e28_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	int L2;
	@irand(L2, L0);
	@PlayAnimation("all", f_e28_a1_s(L2));
	@WaitForAnimEnd();
}

void f_e6e_a0_v(void)
{
	@StopAnimation();
}

bool f_e71_a0_b(void)
{
	return true;
}

bool f_e73_a3_b(object a0, object a1, bool a2)
{
	if (f_cd9_a3_b(a0, a1, 500.0)) {
		@SetProperty("ToDie", true);
		return true;
	}
	return false;
}

void f_e83_a1_v(object a0)
{
	if (f_869_a1_b(a0)) {
		@ReportReputationChange(a0, f_9e6_a0_o(), -0.10000000149011612, true);
		f_b43_a1_v(false);
	}
	f_b2b_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

