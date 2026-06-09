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
event OnCollision 10;
event OnActorStuck 28;
event OnHit2 43;

var bool g0;

task t0
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			if (f_dfd_a0_b()) {
				f_a92_a1_v("Neutral");
				@lshWaitForAnimEnd();
			} else {
				@WaitForAnimEnd();
				@PlayAnimation("all", "idle");
			}
			if (tv0) {
				return;
			}
		}
	}

	void evt_11(int a0)
	{
		if (f_dfd_a0_b()) {
			@lshStopAnimation();
		} else {
			@StopAnimation();
		}
		@StopTrade();
		tv0 = true;
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
		if (!f_a02_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_df7_a0_i());
		L0->SetNPCDescription(f_df5_a0_i());
		L0->SetPhoto(f_df9_a0_s());
		L0->SetPhoto2(f_dfb_a0_s());
		L0->SetPlayerName(f_b41_a0_i());
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
		f_a46_a1_v(a0);
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
			f_ba_a1_v("Neutral");
			tv0->SetMessage(538136);
			tv0->ClearReplies();
			if (f_b24_a1_b(tv1) && f_b30_a1_b(tv1)) {
				tv0->AddReply(538137, 40009, 40008);
			}
			tv0->AddReply(538165, -1, 40040);
			break;
			return;
		}
		if (f_dfd_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a92_a1_v(tv2);
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

	void f_ba_a1_v(string a0)
	{
		if (!f_dfd_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a99_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_aaa_a0_v();
			if (a0 == 40007) {
				f_ba_a1_v("Neutral");
				tv0->SetMessage(538136);
				tv0->ClearReplies();
				if (f_b24_a1_b(tv1) && f_b30_a1_b(tv1)) {
					tv0->AddReply(538137, 40009, 40008);
				}
				tv0->AddReply(538165, -1, 40040);
				return;
			}
			if (a0 == 40009) {
				f_ba_a1_v("Neutral");
				tv0->SetMessage(538138);
				tv0->ClearReplies();
				tv0->AddReply(538139, 40011, 40010);
				tv0->AddReply(538164, 40019, 40038);
				return;
			}
			if (a0 == 40011) {
				f_ba_a1_v("Neutral");
				tv0->SetMessage(538140);
				tv0->ClearReplies();
				tv0->AddReply(538141, 40013, 40012);
				tv0->AddReply(538163, 40019, 40036);
				return;
			}
			if (a0 == 40013) {
				f_ba_a1_v("Neutral");
				tv0->SetMessage(538142);
				tv0->ClearReplies();
				tv0->AddReply(538143, 40015, 40014);
				tv0->AddReply(538162, 40015, 40034);
				return;
			}
			if (a0 == 40015) {
				f_ba_a1_v("Neutral");
				tv0->SetMessage(538144);
				tv0->ClearReplies();
				tv0->AddReply(538145, 40017, 40016);
				tv0->AddReply(538157, 40017, 40028);
				tv0->AddReply(538158, 40031, 40030);
				return;
			}
			if (a0 == 40031) {
				f_ba_a1_v("Neutral");
				tv0->SetMessage(538159);
				tv0->ClearReplies();
				tv0->AddReply(538160, -1, 40032);
				tv0->AddReply(538161, -1, 40033);
				return;
			}
			if (a0 == 40017) {
				f_ba_a1_v("Neutral");
				tv0->SetMessage(538146);
				tv0->ClearReplies();
				tv0->AddReply(538147, 40019, 40018);
				return;
			}
			if (a0 == 40019) {
				f_ba_a1_v("Neutral");
				tv0->SetMessage(538148);
				tv0->ClearReplies();
				tv0->AddReply(538149, 40021, 40020);
				tv0->AddReply(538156, -1, 40027);
				return;
			}
			if (a0 == 40021) {
				f_ba_a1_v("Neutral");
				tv0->SetMessage(538150);
				tv0->ClearReplies();
				tv0->AddReply(538151, -1, 40022);
				tv0->AddReply(538152, 40024, 40023);
				return;
			}
			if (a0 == 40024) {
				f_ba_a1_v("Neutral");
				tv0->SetMessage(538153);
				tv0->ClearReplies();
				tv0->AddReply(538154, -1, 40025);
				tv0->AddReply(538155, -1, 40026);
				return;
			}
			tv3 = true;
			if (f_dfd_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t3
{
	void init(object a0)
	{
		disable OnUse;
		f_1f8_a1_v(a0);
		f_e3a_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_db5_a1_i(a0);
		if (L0 > 0) {
			f_db8_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_dbe_a0_v();
	}

	void f_1f8_a1_v(object a0)
	{
		if (a0 == null) {
			f_253_a1_v("fdie");
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
			f_ab1_a1_v(L4);
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

	void f_253_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_ab1_a1_v(a0);
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

maintask t4
{
	var bool tv0;
	var bool tv1;
	var bool tv2;

	void init(void)
	{
		@SensePlayerOnly(true);
		f_dff_a0_v();
		f_282_a0_v();
		for (; ; ) {
			tv2 = false;
			f_387_a0_v();
		}
	}

	void f_282_a0_v(void)
	{
		if (!f_9fd_a0_b()) {
			f_dbe_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_db5_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_346_a0_v();
			}
			f_db8_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_cf2_a1_v(a0);
		L0 = f_d45_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_346_a0_v();
			}
			f_d4f_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_e31_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_d57_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_346_a0_v();
				}
				f_d61_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_dab_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_346_a0_v();
			}
			f_dae_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_c9c_a2_b(a0, a1)) {
			f_346_a0_v();
			f_cbc_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_db0_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_346_a0_v();
				}
				f_db3_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_cff_a1_b(a0)) {
			f_346_a0_v();
			f_d0f_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_cd5_a1_b(a0)) {
			f_346_a0_v();
			f_cec_a1_v(a0);
		} else {
			f_35f_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		f_35f_a1_v(a0);
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
		f_346_a0_v();
		f_dbe_a0_v();
	}

	void f_346_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_3ce_a0_v();
	}

	void f_34e_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_3d5_a0_v();
	}

	void OnDeath(object a0)
	{
		f_346_a0_v();
		global.OnDeath(a0);
	}

	void f_35f_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_95c_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_d34_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_34e_a0_v();
			}
			f_d3d_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_387_a0_v(void)
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
					@GetRandomPFPointInCircle(L1, L2, f_3c2_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_3de_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_3dc_a0_b(), L5);
					L4 = null;
					if (L5) {
						t5{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_3c2_a0_f(void)
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

	void f_3ce_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_3d5_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_3dc_a0_b(void)
	{
		return false;
	}

	object f_3de_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t5
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_db5_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_4d9_a0_v();
			}
			f_db8_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_cf2_a1_v(a0);
		L0 = f_d45_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_4d9_a0_v();
			}
			f_d4f_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_e31_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_d57_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_4d9_a0_v();
				}
				f_d61_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_dab_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_4d9_a0_v();
			}
			f_dae_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_c9c_a2_b(a0, a1)) {
			f_4d9_a0_v();
			f_cbc_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_db0_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_4d9_a0_v();
				}
				f_db3_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_cff_a1_b(a0)) {
			f_4d9_a0_v();
			f_d0f_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_4d9_a0_v();
		f_dbe_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_cd5_a1_b(a0)) {
			f_4d9_a0_v();
			f_cec_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_9fd_a0_b()) {
			return;
		}
		L0 = f_d23_a0_i();
		for (L1 = 0; L1 < 5 && f_9fd_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_d1c_a1_s(L3));
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
			if (!f_4d7_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_4d7_a0_b(void)
	{
		return true;
	}

	void f_4d9_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t6
{
	var object tv0;

	void init(object a0)
	{
		Vector L0;
		Vector L1;
		bool L2;
		tv0 = a0;
		f_511_a0_v();
		@GetDirection(L0);
		L1 = f_913_a1_V(tv0);
		if (f_b05_a2_f(L0, L1) < 0) {
			f_9f2_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_9f2_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_511_a0_v(void)
	{
		f_a9f_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_db5_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_5a5_a0_v();
			}
			f_db8_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_cf2_a1_v(a0);
		L0 = f_d45_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_5a5_a0_v();
			}
			f_d4f_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_e31_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_d57_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_5a5_a0_v();
				}
				f_d61_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_dab_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_5a5_a0_v();
			}
			f_dae_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_c9c_a2_b(a0, a1)) {
			f_5a5_a0_v();
			f_cbc_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_db0_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_5a5_a0_v();
				}
				f_db3_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_cff_a1_b(a0)) {
			f_5a5_a0_v();
			f_d0f_a1_v(a0);
		}
	}

	void f_5a5_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_5a5_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_95c_a1_b(tv0)) {
			f_5a5_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_913_a1_V(tv0);
		if (f_b05_a2_f(L0, L1) < 0.4999999701976776) {
			f_9f2_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_5a5_a0_v();
		f_dbe_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_cd5_a1_b(a0)) {
			f_5a5_a0_v();
			f_cec_a1_v(a0);
		}
	}
}

task t7
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
		f_632_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_6af_a0_v();
		f_dbe_a0_v();
	}

	Vector f_614_a1_V(float a0)
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
		L3 = f_ae0_a1_V(f_ae0_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_632_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_614_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_614_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_90e_a0_V() + L0;
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
				L3 = f_614_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_90e_a0_V() + L3;
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
			L2 = f_614_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_6bf_a0_b())) {
				@Stop();
				tv1 = f_90e_a0_V() + L2;
			}
		}
	}

	void f_6af_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_6af_a0_v();
		global.OnDeath(a0);
	}

	bool f_6bf_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_913_a1_V(tv0);
		return f_aea_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t8
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_6cf_a1_V(float a0)
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
		L3 = f_ae0_a1_V(f_ae0_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_6cf_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_6cf_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_90e_a0_V() + L0;
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
				L3 = f_6cf_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_90e_a0_V() + L3;
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
			L2 = f_6cf_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_77a_a0_b())) {
				@Stop();
				tv1 = f_90e_a0_V() + L2;
			}
		}
	}

	void f_76a_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_76a_a0_v();
		global.OnDeath(a0);
	}

	bool f_77a_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_913_a1_V(tv0);
		return f_aea_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t9
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_82c_a0_v();
		f_dbe_a0_v();
	}

	Vector f_791_a1_V(float a0)
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
		L3 = f_ae0_a1_V(f_ae0_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_791_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_791_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_90e_a0_V() + L0;
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
				L3 = f_791_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_90e_a0_V() + L3;
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
			L2 = f_791_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_83c_a0_b())) {
				@Stop();
				tv1 = f_90e_a0_V() + L2;
			}
		}
	}

	void f_82c_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_82c_a0_v();
		global.OnDeath(a0);
	}

	bool f_83c_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_913_a1_V(tv0);
		return f_aea_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t10
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_8ee_a0_v();
		f_dbe_a0_v();
	}

	Vector f_853_a1_V(float a0)
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
		L3 = f_ae0_a1_V(f_ae0_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_853_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_853_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_90e_a0_V() + L0;
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
				L3 = f_853_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_90e_a0_V() + L3;
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
			L2 = f_853_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_8fe_a0_b())) {
				@Stop();
				tv1 = f_90e_a0_V() + L2;
			}
		}
	}

	void f_8ee_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_8ee_a0_v();
		global.OnDeath(a0);
	}

	bool f_8fe_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_913_a1_V(tv0);
		return f_aea_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_90e_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_913_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_91a_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_922_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_927_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_933_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_938_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_933_a1_b(a0)) {
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

bool f_95c_a1_b(object a0)
{
	int L0;
	if (!f_938_a1_b(a0)) {
		return false;
	}
	if (!f_927_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_974_a1_v(object a0)
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

void f_9a0_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_ae0_a1_V(f_913_a1_V(a0));
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
			f_9e4_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_974_a1_v(a0);
}

void f_9e4_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_974_a1_v(a0);
}

void f_9f2_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_9fd_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_a02_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_ae0_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_dfd_a0_b()) {
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

void f_a46_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_dfd_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_a57_a1_b(object a0)
{
	return f_a5f_a2_b(a0, 70);
}

bool f_a5f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 - [0.0, 10.0, 0.0];
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

void f_a8e_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_a92_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_a99_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

void f_a9f_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_aaa_a0_v(void)
{
	if (f_dfd_a0_b()) {
		@lshStopSpeech();
	}
}

void f_ab1_a1_v(string a0)
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

object f_ada_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_ae0_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_aea_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_af2_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_afb_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_b05_a2_f(Vector a0, Vector a1)
{
	return f_af2_a2_f(a0, a1) / (f_afb_a1_f(a0) * f_afb_a1_f(a1));
}

int f_b16_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_b1b_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_b24_a1_b(object a0)
{
	if (f_b16_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_b30_a1_b(object a0)
{
	if (f_b3a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_b3a_a1_b(object a0)
{
	return f_b1b_a0_i() == 7;
}

int f_b41_a0_i(void)
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

int f_b52_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

float f_b58_a0_f(void)
{
	object L0;
	float L1;
	@FindActor(L0, "player");
	if (!L0) {
		return 0;
	}
	L0->GetProperty("reputation", L1);
	return L1;
}

void f_b66_a1_v(object a0)
{
	if (f_b52_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_b73_a2_v(int a0, int a1)
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
	@AddItem(L1, f_c6a_a1_i("Money"), 0, L0);
}

void f_b92_a1_v(string a0)
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

void f_ba3_a0_v(void)
{
	if (f_b52_a0_i() != 1) {
		return;
	}
	f_b92_a1_v("liver");
	f_b92_a1_v("kidney");
	f_b92_a1_v("heart");
	f_b92_a1_v("blood");
}

void f_bbb_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_b73_a2_v(0, 100 + f_b1b_a0_i() * 100);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_c6a_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_c6a_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_c6a_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_c6a_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_c6a_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_c6a_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_b73_a2_v(0, 50 + f_b1b_a0_i() * 50);
		@irand(L0, 7);
		if (L0 == 0) {
			@AddItem(L1, f_c6a_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_c6a_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_c6a_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_c6a_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_c6a_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_c6a_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_c6a_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_c6f_a1_v(object a0)
{
	t3{a0};
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
	f_c6f_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_9a0_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_9e4_a5_v(a0, a1, a2, a4, a5);
}

bool f_c9c_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_dbf_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_dcc_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_de3_a1_b(a0);
			}
		}
	}
	return false;
}

void f_cbc_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_dc4_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_ddb_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_dea_a1_v(a0);
			}
		}
	}
}

bool f_cd5_a1_b(object a0)
{
	if (f_dbf_a1_b(a0) && f_922_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_cec_a1_v(object a0)
{
	f_dc4_a1_v(a0);
}

void f_cf2_a1_v(object a0)
{
	if (f_922_a1_b(a0)) {
		@ReportReputationChange(a0, f_ada_a0_o(), -0.05000000074505806);
	}
}

bool f_cff_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_df0_a1_b(L0);
	}
	return false;
}

void f_d0f_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_df3_a1_v(L0);
	}
}

string f_d1c_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_d23_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_d1c_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_d34_a1_i(object a0)
{
	return f_e2b_a0_b() ? 2 : 0;
}

void f_d3d_a1_v(object a0)
{
	t6{a0};
}

int f_d45_a1_i(object a0)
{
	return f_95c_a1_b(a0) ? 2 : 0;
}

void f_d4f_a1_v(object a0)
{
	t7{a0};
}

int f_d57_a2_i(object a0, bool a1)
{
	return f_95c_a1_b(a0) ? 2 : 0;
}

void f_d61_a1_v(object a0)
{
	t8{a0};
}

bool f_d69_a3_b(object a0, object a1, float a2)
{
	string L0;
	bool L1;
	if (!f_927_a2_b(a1, "class")) {
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
	if (L1 || f_91a_a1_f(a0) <= a2 * a2) {
		return true;
	}
	@CanSee(L1, a1);
	if (L1 || f_91a_a1_f(a1) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_dab_a1_i(object a0)
{
	return 0;
}

void f_dae_a1_v(object a0)
{
}

int f_db0_a2_i(string a0, object a1)
{
	return 0;
}

void f_db3_a2_v(string a0, object a1)
{
}

int f_db5_a1_i(object a0)
{
	return 2;
}

void f_db8_a1_v(object a0)
{
	f_e03_a1_v(a0);
}

void f_dbe_a0_v(void)
{
}

bool f_dbf_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0;
}

void f_dc4_a1_v(object a0)
{
	t9{a0};
}

bool f_dcc_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_91a_a1_f(a0) <= 4000000;
}

void f_ddb_a1_v(object a0)
{
	t10{a0};
}

bool f_de3_a1_b(object a0)
{
	return f_dcc_a1_b(a0);
}

void f_dea_a1_v(object a0)
{
	f_ddb_a1_v(a0);
}

bool f_df0_a1_b(object a0)
{
	return false;
}

void f_df3_a1_v(object a0)
{
}

int f_df5_a0_i(void)
{
	return 515555;
}

int f_df7_a0_i(void)
{
	return 503340;
}

string f_df9_a0_s(void)
{
	return "ui/NPC_Citizen2.png";
}

string f_dfb_a0_s(void)
{
	return "ui/NPC_Citizen2_b.png";
}

bool f_dfd_a0_b(void)
{
	return false;
}

void f_dff_a0_v(void)
{
	g0 = false;
}

void f_e03_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_b66_a1_v(a0);
		}
		return;
	} else {
		if (1000 == t1{a0}) {
			if (!f_a57_a1_b(a0)) {
				return;
			}
			t0{a0};
			f_a8e_a1_v(a0);
		}
	}
}

bool f_e2b_a0_b(void)
{
	return f_b58_a0_f() > 0.699999988079071;
}

bool f_e31_a3_b(object a0, object a1, bool a2)
{
	return f_d69_a3_b(a0, a1, 700.0);
}

void f_e3a_a1_v(object a0)
{
	if (f_922_a1_b(a0)) {
		@ReportReputationChange(a0, f_ada_a0_o(), -0.10000000149011612, true);
		f_bbb_a1_v(false);
	}
	f_ba3_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

