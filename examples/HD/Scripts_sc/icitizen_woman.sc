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
		if (!f_d5c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_130e_a0_i());
		L0->SetNPCDescription(f_130c_a0_i());
		L0->SetPhoto(f_1310_a0_s());
		L0->SetPhoto2(f_1312_a0_s());
		L0->SetPlayerName(f_f6f_a0_i());
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
		f_da1_a1_v(a0);
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
			if (f_e82_a1_b(tv1)) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(543180);
				tv0->ClearReplies();
				if (f_e8e_a1_b(tv1) || f_ea2_a1_b(tv1) || f_eac_a1_b(tv1) || f_eb6_a1_b(tv1)) {
					tv0->AddReply(543189, 45648, 45645);
				}
				if (f_e98_a1_b(tv1) || f_ec0_a1_b(tv1) || f_ede_a1_b(tv1) || f_ee8_a1_b(tv1)) {
					tv0->AddReply(543190, 45655, 45646);
				}
				if (f_eca_a1_b(tv1) || f_ed4_a1_b(tv1) || f_ea2_a1_b(tv1)) {
					tv0->AddReply(543191, 45656, 45647);
				}
				if (f_e8e_a1_b(tv1) || f_e98_a1_b(tv1) || f_ea2_a1_b(tv1)) {
					tv0->AddReply(543182, -1, 45638);
				}
				if (f_e8e_a1_b(tv1) || f_e98_a1_b(tv1) || f_ea2_a1_b(tv1) || f_eac_a1_b(tv1)) {
					tv0->AddReply(543183, -1, 45639);
				}
				if (f_eac_a1_b(tv1) || f_eb6_a1_b(tv1) || f_ec0_a1_b(tv1) || f_eca_a1_b(tv1) || f_ed4_a1_b(tv1)) {
					tv0->AddReply(543187, -1, 45643);
				}
				if (f_ede_a1_b(tv1) || f_ee8_a1_b(tv1) || f_ef2_a1_b(tv1) || f_efc_a1_b(tv1)) {
					tv0->AddReply(543208, -1, 45664);
				}
				if (f_e8e_a1_b(tv1) || f_e98_a1_b(tv1) || f_ea2_a1_b(tv1)) {
					tv0->AddReply(543181, -1, 45637);
				}
				if (f_eac_a1_b(tv1) || f_eb6_a1_b(tv1) || f_ec0_a1_b(tv1)) {
					tv0->AddReply(543184, -1, 45640);
				}
				if (f_ea2_a1_b(tv1) || f_ec0_a1_b(tv1) || f_eca_a1_b(tv1) || f_ed4_a1_b(tv1)) {
					tv0->AddReply(543185, -1, 45641);
				}
				if (f_ede_a1_b(tv1) || f_ee8_a1_b(tv1) || f_ef2_a1_b(tv1)) {
					tv0->AddReply(543186, -1, 45642);
				}
				if (f_ec0_a1_b(tv1) || f_ed4_a1_b(tv1) || f_ede_a1_b(tv1) || f_efc_a1_b(tv1) || f_ee8_a1_b(tv1)) {
					tv0->AddReply(543188, -1, 45644);
				}
				break;
			}
			f_289_a1_v("Neutral");
			tv0->SetMessage(538167);
			tv0->ClearReplies();
			tv0->AddReply(538168, -1, 40043);
			if (f_e8e_a1_b(tv1) && f_e6a_a1_b(tv1)) {
				tv0->AddReply(538169, 40045, 40044);
			}
			if (f_e8e_a1_b(tv1) && f_f06_a1_b(tv1) && f_e6a_a1_b(tv1)) {
				tv0->AddReply(538179, 40055, 40054);
			}
			if (f_e98_a1_b(tv1) && f_e6a_a1_b(tv1)) {
				tv0->AddReply(538190, 40067, 40066);
			}
			if (f_e6a_a1_b(tv1) || f_e76_a1_b(tv1)) {
				tv0->AddReply(538204, -1, 40081);
			}
			tv0->AddReply(538205, -1, 40082);
			break;
			return;
		}
		if (f_1314_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_db3_a1_v(tv2);
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

	void f_289_a1_v(string a0)
	{
		if (!f_1314_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_dc3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ddd_a0_v();
			if (a1 == 45638) {
				f_e65_a2_v(tv1, tv0);
			}
			if (a1 == 45639) {
				f_e65_a2_v(tv1, tv0);
			}
			if (a1 == 45643) {
				f_e65_a2_v(tv1, tv0);
			}
			if (a1 == 45664) {
				f_e65_a2_v(tv1, tv0);
			}
			if (a1 == 40043) {
				f_e65_a2_v(tv1, tv0);
			}
			if (a0 == 45636) {
				if (f_e82_a1_b(tv1)) {
					f_289_a1_v("Neutral");
					tv0->SetMessage(543180);
					tv0->ClearReplies();
					if (f_e8e_a1_b(tv1) || f_ea2_a1_b(tv1) || f_eac_a1_b(tv1) || f_eb6_a1_b(tv1)) {
						tv0->AddReply(543189, 45648, 45645);
					}
					if (f_e98_a1_b(tv1) || f_ec0_a1_b(tv1) || f_ede_a1_b(tv1) || f_ee8_a1_b(tv1)) {
						tv0->AddReply(543190, 45655, 45646);
					}
					if (f_eca_a1_b(tv1) || f_ed4_a1_b(tv1) || f_ea2_a1_b(tv1)) {
						tv0->AddReply(543191, 45656, 45647);
					}
					if (f_e8e_a1_b(tv1) || f_e98_a1_b(tv1) || f_ea2_a1_b(tv1)) {
						tv0->AddReply(543182, -1, 45638);
					}
					if (f_e8e_a1_b(tv1) || f_e98_a1_b(tv1) || f_ea2_a1_b(tv1) || f_eac_a1_b(tv1)) {
						tv0->AddReply(543183, -1, 45639);
					}
					if (f_eac_a1_b(tv1) || f_eb6_a1_b(tv1) || f_ec0_a1_b(tv1) || f_eca_a1_b(tv1) || f_ed4_a1_b(tv1)) {
						tv0->AddReply(543187, -1, 45643);
					}
					if (f_ede_a1_b(tv1) || f_ee8_a1_b(tv1) || f_ef2_a1_b(tv1) || f_efc_a1_b(tv1)) {
						tv0->AddReply(543208, -1, 45664);
					}
					if (f_e8e_a1_b(tv1) || f_e98_a1_b(tv1) || f_ea2_a1_b(tv1)) {
						tv0->AddReply(543181, -1, 45637);
					}
					if (f_eac_a1_b(tv1) || f_eb6_a1_b(tv1) || f_ec0_a1_b(tv1)) {
						tv0->AddReply(543184, -1, 45640);
					}
					if (f_ea2_a1_b(tv1) || f_ec0_a1_b(tv1) || f_eca_a1_b(tv1) || f_ed4_a1_b(tv1)) {
						tv0->AddReply(543185, -1, 45641);
					}
					if (f_ede_a1_b(tv1) || f_ee8_a1_b(tv1) || f_ef2_a1_b(tv1)) {
						tv0->AddReply(543186, -1, 45642);
					}
					if (f_ec0_a1_b(tv1) || f_ed4_a1_b(tv1) || f_ede_a1_b(tv1) || f_efc_a1_b(tv1) || f_ee8_a1_b(tv1)) {
						tv0->AddReply(543188, -1, 45644);
					}
					return;
				}
				f_289_a1_v("Neutral");
				tv0->SetMessage(538167);
				tv0->ClearReplies();
				tv0->AddReply(538168, -1, 40043);
				if (f_e8e_a1_b(tv1) && f_e6a_a1_b(tv1)) {
					tv0->AddReply(538169, 40045, 40044);
				}
				if (f_e8e_a1_b(tv1) && f_f06_a1_b(tv1) && f_e6a_a1_b(tv1)) {
					tv0->AddReply(538179, 40055, 40054);
				}
				if (f_e98_a1_b(tv1) && f_e6a_a1_b(tv1)) {
					tv0->AddReply(538190, 40067, 40066);
				}
				if (f_e6a_a1_b(tv1) || f_e76_a1_b(tv1)) {
					tv0->AddReply(538204, -1, 40081);
				}
				tv0->AddReply(538205, -1, 40082);
				return;
			}
			if (a0 == 40067) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(538191);
				tv0->ClearReplies();
				tv0->AddReply(538192, 40069, 40068);
				tv0->AddReply(538203, 40069, 40079);
				return;
			}
			if (a0 == 40069) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(538193);
				tv0->ClearReplies();
				tv0->AddReply(538194, 40071, 40070);
				tv0->AddReply(538202, -1, 40078);
				return;
			}
			if (a0 == 40071) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(538195);
				tv0->ClearReplies();
				tv0->AddReply(538196, 40073, 40072);
				tv0->AddReply(538201, -1, 40077);
				return;
			}
			if (a0 == 40073) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(538197);
				tv0->ClearReplies();
				tv0->AddReply(538198, -1, 40074);
				tv0->AddReply(538199, -1, 40075);
				tv0->AddReply(538200, -1, 40076);
				return;
			}
			if (a0 == 40055) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(538180);
				tv0->ClearReplies();
				tv0->AddReply(538181, 40057, 40056);
				tv0->AddReply(538188, 40057, 40063);
				tv0->AddReply(538189, -1, 40065);
				return;
			}
			if (a0 == 40057) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(538182);
				tv0->ClearReplies();
				tv0->AddReply(538183, 40059, 40058);
				tv0->AddReply(538187, -1, 40062);
				return;
			}
			if (a0 == 40059) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(538184);
				tv0->ClearReplies();
				tv0->AddReply(538185, -1, 40060);
				tv0->AddReply(538186, -1, 40061);
				return;
			}
			if (a0 == 40045) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(538170);
				tv0->ClearReplies();
				tv0->AddReply(538171, 40047, 40046);
				tv0->AddReply(538175, 40051, 40050);
				tv0->AddReply(538178, -1, 40053);
				return;
			}
			if (a0 == 40051) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(538176);
				tv0->ClearReplies();
				tv0->AddReply(538177, -1, 40052);
				return;
			}
			if (a0 == 40047) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(538172);
				tv0->ClearReplies();
				tv0->AddReply(538173, -1, 40048);
				tv0->AddReply(538174, -1, 40049);
				return;
			}
			if (a0 == 45656) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(543200);
				tv0->ClearReplies();
				tv0->AddReply(543205, -1, 45661);
				tv0->AddReply(543206, -1, 45662);
				tv0->AddReply(543207, -1, 45663);
				return;
			}
			if (a0 == 45655) {
				f_289_a1_v("Neutral");
				tv0->SetMessage(543199);
				tv0->ClearReplies();
				tv0->AddReply(543201, -1, 45657);
				tv0->AddReply(543202, -1, 45658);
				if (f_e98_a1_b(tv1)) {
					tv0->AddReply(543203, -1, 45659);
				}
				if (f_ec0_a1_b(tv1)) {
					tv0->AddReply(543204, -1, 45660);
				}
				return;
			}
			if (a0 == 45648) {
				if (f_e8e_a1_b(tv1)) {
					f_289_a1_v("Neutral");
					tv0->SetMessage(543192);
					tv0->ClearReplies();
					tv0->AddReply(543193, -1, 45649);
					tv0->AddReply(543194, -1, 45650);
					tv0->AddReply(543195, -1, 45651);
					return;
				}
				if (f_ea2_a1_b(tv1) || f_eac_a1_b(tv1) || f_eb6_a1_b(tv1)) {
					f_289_a1_v("Neutral");
					tv0->SetMessage(543196);
					tv0->ClearReplies();
					tv0->AddReply(543197, -1, 45653);
					tv0->AddReply(543198, -1, 45654);
					return;
				}
			}
			tv3 = true;
			if (f_1314_a0_b()) {
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
		f_69a_a1_v(a0);
		f_1360_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_11f8_a1_i(a0);
		if (L0 > 0) {
			f_11fb_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_1201_a0_v();
	}

	void f_69a_a1_v(object a0)
	{
		if (a0 == null) {
			f_6f5_a1_v("fdie");
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
			f_de4_a1_v(L4);
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

	void f_6f5_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_de4_a1_v(a0);
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
		f_1316_a0_v();
		f_737_a0_v();
		for (; ; ) {
			int L0;
			@irand(L0, 2);
			if (L0 == 0) {
				tv0 = true;
				f_1330_a0_v();
				tv0 = false;
				@ResetAAS();
			} else {
				int L1;
				@irand(L1, 4);
				@Sleep(L1 + 1);
			}
		}
	}

	void f_737_a0_v(void)
	{
		if (!f_d57_a0_b()) {
			f_1201_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_11f8_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_801_a0_v();
			}
			f_11fb_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1157_a1_v(a0);
		L0 = f_1192_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_801_a0_v();
			}
			f_119c_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_1350_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_11a4_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_801_a0_v();
				}
				f_11ae_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_1202_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_801_a0_v();
			}
			f_1212_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_1101_a2_b(a0, a1)) {
			f_801_a0_v();
			f_1121_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_1218_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_801_a0_v();
				}
				f_121b_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1164_a1_b(a0)) {
			f_801_a0_v();
			f_1174_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (tv0) {
			return;
		}
		if (f_113a_a1_b(a0)) {
			f_801_a0_v();
			f_1151_a1_v(a0);
		} else {
			f_817_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		if (tv0) {
			return;
		}
		f_817_a1_v(a0);
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
		f_801_a0_v();
		f_1201_a0_v();
	}

	void f_801_a0_v(void)
	{
		@KillTimer(110);
		tv1 = false;
		if (tv0) {
			f_134b_a0_v();
		} else {
			@Stop();
		}
	}

	void OnDeath(object a0)
	{
		f_801_a0_v();
		global.OnDeath(a0);
	}

	void f_817_a1_v(object a0)
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
		L1 = f_1181_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_801_a0_v();
			}
			f_118a_a1_v(a0);
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
		f_86b_a0_v();
		@GetDirection(L0);
		L1 = f_c6d_a1_V(tv0);
		if (f_e3e_a2_f(L0, L1) < 0) {
			f_d4c_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_d4c_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_86b_a0_v(void)
	{
		f_dd2_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_11f8_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_8ff_a0_v();
			}
			f_11fb_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1157_a1_v(a0);
		L0 = f_1192_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_8ff_a0_v();
			}
			f_119c_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_1350_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_11a4_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_8ff_a0_v();
				}
				f_11ae_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_1202_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_8ff_a0_v();
			}
			f_1212_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_1101_a2_b(a0, a1)) {
			f_8ff_a0_v();
			f_1121_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_1218_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_8ff_a0_v();
				}
				f_121b_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1164_a1_b(a0)) {
			f_8ff_a0_v();
			f_1174_a1_v(a0);
		}
	}

	void f_8ff_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_8ff_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_cb6_a1_b(tv0)) {
			f_8ff_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_c6d_a1_V(tv0);
		if (f_e3e_a2_f(L0, L1) < 0.4999999701976776) {
			f_d4c_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_8ff_a0_v();
		f_1201_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_113a_a1_b(a0)) {
			f_8ff_a0_v();
			f_1151_a1_v(a0);
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
		f_98c_a1_v(a0);
	}

	void OnUnload(void)
	{
		f_a09_a0_v();
		f_1201_a0_v();
	}

	Vector f_96e_a1_V(float a0)
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
		L3 = f_e13_a1_V(f_e13_a1_V(L0 - L1) + L2 * 0.75);
		@FindLongestDir(L4, L5, L3, a0, 32, 7000.0);
		L5 = L5 - 100;
		if (L5 < 0) {
			L5 = 0;
		}
		return L4 * L5;
	}

	void f_98c_a1_v(object a0)
	{
		Vector L0;
		float L1;
		tv0 = a0;
		L0 = f_96e_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_96e_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_c68_a0_V() + L0;
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
				L3 = f_96e_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_c68_a0_V() + L3;
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
			L2 = f_96e_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_a19_a0_b())) {
				@Stop();
				tv1 = f_c68_a0_V() + L2;
			}
		}
	}

	void f_a09_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_a09_a0_v();
		global.OnDeath(a0);
	}

	bool f_a19_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_c6d_a1_V(tv0);
		return f_e23_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t6
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	Vector f_a29_a1_V(float a0)
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
		L3 = f_e13_a1_V(f_e13_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_a29_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_a29_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_c68_a0_V() + L0;
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
				L3 = f_a29_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_c68_a0_V() + L3;
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
			L2 = f_a29_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_ad4_a0_b())) {
				@Stop();
				tv1 = f_c68_a0_V() + L2;
			}
		}
	}

	void f_ac4_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_ac4_a0_v();
		global.OnDeath(a0);
	}

	bool f_ad4_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_c6d_a1_V(tv0);
		return f_e23_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t7
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_b86_a0_v();
		f_1201_a0_v();
	}

	Vector f_aeb_a1_V(float a0)
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
		L3 = f_e13_a1_V(f_e13_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_aeb_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_aeb_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_c68_a0_V() + L0;
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
				L3 = f_aeb_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_c68_a0_V() + L3;
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
			L2 = f_aeb_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_b96_a0_b())) {
				@Stop();
				tv1 = f_c68_a0_V() + L2;
			}
		}
	}

	void f_b86_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_b86_a0_v();
		global.OnDeath(a0);
	}

	bool f_b96_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_c6d_a1_V(tv0);
		return f_e23_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

task t8
{
	var object tv0;
	var Vector tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_c48_a0_v();
		f_1201_a0_v();
	}

	Vector f_bad_a1_V(float a0)
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
		L3 = f_e13_a1_V(f_e13_a1_V(L0 - L1) + L2 * 0.75);
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
		L0 = f_bad_a1_V(1.7453293800354004);
		L1 = L0 | L0;
		if (L1 < 2500.0) {
			L0 = f_bad_a1_V(2.6179938316345215);
			L1 = L0 | L0;
			if (L1 < 2500.0) {
				@Trace("Can't retreat, distance: " + sqrt(L1));
				@Sleep(0.5);
				return;
			}
		}
		@Rotate(L0.x, L0.z);
		tv1 = f_c68_a0_V() + L0;
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
				L3 = f_bad_a1_V(2.6179938316345215);
				L4 = L3 | L3;
				if (L4 >= 2500.0) {
					tv1 = f_c68_a0_V() + L3;
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
			L2 = f_bad_a1_V(1.7453293800354004);
			L3 = L2 | L2;
			if (L3 >= 2500.0 && (L3 >= L1 * L1 * 2.25 || f_c58_a0_b())) {
				@Stop();
				tv1 = f_c68_a0_V() + L2;
			}
		}
	}

	void f_c48_a0_v(void)
	{
		@Stop();
		@KillTimer(120);
		tv2 = true;
	}

	void OnDeath(object a0)
	{
		f_c48_a0_v();
		global.OnDeath(a0);
	}

	bool f_c58_a0_b(void)
	{
		Vector L0;
		Vector L1;
		@GetDirection(L0);
		L1 = f_c6d_a1_V(tv0);
		return f_e23_a2_f(L0, L1) >= -0.3420201241970062;
	}
}

Vector f_c68_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

Vector f_c6d_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_c74_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_c7c_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_c81_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_c8d_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_c92_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_c8d_a1_b(a0)) {
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

bool f_cb6_a1_b(object a0)
{
	int L0;
	if (!f_c92_a1_b(a0)) {
		return false;
	}
	if (!f_c81_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_cce_a1_v(object a0)
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

void f_cfa_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_e13_a1_V(f_c6d_a1_V(a0));
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
			f_d3e_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_cce_a1_v(a0);
}

void f_d3e_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_cce_a1_v(a0);
}

void f_d4c_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_d57_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_d5c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_e13_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1314_a0_b()) {
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

void f_da1_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1314_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_db3_a1_v(string a0)
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

void f_dc3_a2_v(string a0, bool a1)
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

void f_dd2_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_ddd_a0_v(void)
{
	if (f_1314_a0_b()) {
		@lshStopSpeech();
	}
}

void f_de4_a1_v(string a0)
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

object f_e0d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_e13_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

object f_e1d_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

float f_e23_a2_f(Vector a0, Vector a1)
{
	return (a0 | a1) / sqrt((a0 | a0) * (a1 | a1));
}

float f_e2b_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_e34_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_e3e_a2_f(Vector a0, Vector a1)
{
	return f_e2b_a2_f(a0, a1) / (f_e34_a1_f(a0) * f_e34_a1_f(a1));
}

int f_e4f_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_e54_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_e5d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

void f_e65_a2_v(object a0, object a1)
{
	a1->SetReturnValue(100);
}

bool f_e6a_a1_b(object a0)
{
	if (f_e4f_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_e76_a1_b(object a0)
{
	if (f_e4f_a1_i("branch") == 1) {
		return true;
	}
	return false;
}

bool f_e82_a1_b(object a0)
{
	if (f_e4f_a1_i("branch") == 2) {
		return true;
	}
	return false;
}

bool f_e8e_a1_b(object a0)
{
	if (f_f10_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_e98_a1_b(object a0)
{
	if (f_f17_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ea2_a1_b(object a0)
{
	if (f_f1e_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_eac_a1_b(object a0)
{
	if (f_f25_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_eb6_a1_b(object a0)
{
	if (f_f2c_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ec0_a1_b(object a0)
{
	if (f_f33_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_eca_a1_b(object a0)
{
	if (f_f3a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ed4_a1_b(object a0)
{
	if (f_f41_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ede_a1_b(object a0)
{
	if (f_f48_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ee8_a1_b(object a0)
{
	if (f_f4f_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ef2_a1_b(object a0)
{
	if (f_f56_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_efc_a1_b(object a0)
{
	if (f_f5d_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_f06_a1_b(object a0)
{
	if (f_f64_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_f10_a1_b(object a0)
{
	return f_e54_a0_i() == 1;
}

bool f_f17_a1_b(object a0)
{
	return f_e54_a0_i() == 2;
}

bool f_f1e_a1_b(object a0)
{
	return f_e54_a0_i() == 3;
}

bool f_f25_a1_b(object a0)
{
	return f_e54_a0_i() == 4;
}

bool f_f2c_a1_b(object a0)
{
	return f_e54_a0_i() == 5;
}

bool f_f33_a1_b(object a0)
{
	return f_e54_a0_i() == 6;
}

bool f_f3a_a1_b(object a0)
{
	return f_e54_a0_i() == 7;
}

bool f_f41_a1_b(object a0)
{
	return f_e54_a0_i() == 8;
}

bool f_f48_a1_b(object a0)
{
	return f_e54_a0_i() == 9;
}

bool f_f4f_a1_b(object a0)
{
	return f_e54_a0_i() == 10;
}

bool f_f56_a1_b(object a0)
{
	return f_e54_a0_i() == 11;
}

bool f_f5d_a1_b(object a0)
{
	return f_e54_a0_i() == 12;
}

bool f_f64_a1_b(object a0)
{
	if (f_e5d_a0_i() >= 12) {
		return true;
	}
	return false;
}

int f_f6f_a0_i(void)
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

int f_f80_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

int f_f86_a1_i(object a0)
{
	int L0;
	a0->GetItemID(L0);
	return L0;
}

int f_f8b_a2_i(object a0, int a1)
{
	if (a1 == 0) {
		int L0;
		L0 = f_e54_a0_i();
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
			@HasInvItemProperty(L4, f_f86_a1_i(a0), L3);
			if (!L4) {
				continue;
			}
			@GetInvItemProperty(L1, f_f86_a1_i(a0), L3);
		}
		return L1;
	}
	bool L5;
	@HasInvItemProperty(L5, f_f86_a1_i(a0), "BarterPrice" + a1);
	if (!L5) {
		return 0;
	}
	int L6;
	@GetInvItemProperty(L6, f_f86_a1_i(a0), "BarterPrice" + a1);
	if (L6 > 0) {
		return L6;
	}
	return -L6;
}

void f_fcb_a1_v(object a0)
{
	if (f_f80_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_fd8_a2_v(int a0, int a1)
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
	@AddItem(L1, f_10cf_a1_i("Money"), 0, L0);
}

void f_ff7_a1_v(string a0)
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

void f_1008_a0_v(void)
{
	if (f_f80_a0_i() != 1) {
		return;
	}
	f_ff7_a1_v("liver");
	f_ff7_a1_v("kidney");
	f_ff7_a1_v("heart");
	f_ff7_a1_v("blood");
}

void f_1020_a1_v(bool a0)
{
	int L0;
	bool L1;
	if (a0) {
		f_fd8_a2_v(0, 100 + f_e54_a0_i() * 100);
		@irand(L0, 8);
		if (L0 == 0) {
			@AddItem(L1, f_10cf_a1_i("lemon"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_10cf_a1_i("rusk"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_10cf_a1_i("hook"), 0, 1);
				} else {
					if (L0 == 4) {
						@AddItem(L1, f_10cf_a1_i("syringe"), 0, 1);
					} else {
						if (L0 == 5) {
							@AddItem(L1, f_10cf_a1_i("watch"), 0, 1);
						} else {
							if (L0 == 6) {
								@AddItem(L1, f_10cf_a1_i("razor"), 0, 1);
							}
						}
					}
				}
			}
		}
	} else {
		f_fd8_a2_v(0, 50 + f_e54_a0_i() * 50);
		@irand(L0, 7);
		if (L0 == 0) {
			@AddItem(L1, f_10cf_a1_i("beads"), 0, 1);
		} else {
			if (L0 == 1) {
				@AddItem(L1, f_10cf_a1_i("bracelet"), 0, 1);
			} else {
				if (L0 == 2) {
					@AddItem(L1, f_10cf_a1_i("ear_ring"), 0, 1);
				} else {
					if (L0 == 3) {
						@AddItem(L1, f_10cf_a1_i("gold_ring"), 0, 1);
					} else {
						if (L0 == 4) {
							@AddItem(L1, f_10cf_a1_i("silver_ring"), 0, 1);
						} else {
							if (L0 == 5) {
								@AddItem(L1, f_10cf_a1_i("flower"), 0, 1);
							}
						}
					}
				}
			}
		}
	}
}

int f_10cf_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_10d4_a1_v(object a0)
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
	f_10d4_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_cfa_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_d3e_a5_v(a0, a1, a2, a4, a5);
}

bool f_1101_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_121d_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_122a_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_1241_a1_b(a0);
			}
		}
	}
	return false;
}

void f_1121_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_1222_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_1239_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_1248_a1_v(a0);
			}
		}
	}
}

bool f_113a_a1_b(object a0)
{
	if (f_121d_a1_b(a0) && f_c7c_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_1151_a1_v(object a0)
{
	f_1222_a1_v(a0);
}

void f_1157_a1_v(object a0)
{
	if (f_c7c_a1_b(a0)) {
		@ReportReputationChange(a0, f_e0d_a0_o(), -0.05000000074505806);
	}
}

bool f_1164_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_124e_a1_b(L0);
	}
	return false;
}

void f_1174_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_1251_a1_v(L0);
	}
}

int f_1181_a1_i(object a0)
{
	return f_134e_a0_b() ? 2 : 0;
}

void f_118a_a1_v(object a0)
{
	t4{a0};
}

int f_1192_a1_i(object a0)
{
	return f_cb6_a1_b(a0) ? 2 : 0;
}

void f_119c_a1_v(object a0)
{
	t5{a0};
}

int f_11a4_a2_i(object a0, bool a1)
{
	return f_cb6_a1_b(a0) ? 2 : 0;
}

void f_11ae_a1_v(object a0)
{
	t6{a0};
}

bool f_11b6_a3_b(object a0, object a1, float a2)
{
	string L0;
	bool L1;
	if (!f_c81_a2_b(a1, "class")) {
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
	if (L1 || f_c74_a1_f(a0) <= a2 * a2) {
		return true;
	}
	@CanSee(L1, a1);
	if (L1 || f_c74_a1_f(a1) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_11f8_a1_i(object a0)
{
	return 2;
}

void f_11fb_a1_v(object a0)
{
	f_131e_a1_v(a0);
}

void f_1201_a0_v(void)
{
}

int f_1202_a1_i(object a0)
{
	bool L0;
	@Trace("Received steal");
	@CanSee(L0, a0);
	if (L0) {
		return f_1192_a1_i(a0);
	}
	return 0;
}

void f_1212_a1_v(object a0)
{
	f_119c_a1_v(a0);
}

int f_1218_a2_i(string a0, object a1)
{
	return 0;
}

void f_121b_a2_v(string a0, object a1)
{
}

bool f_121d_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0;
}

void f_1222_a1_v(object a0)
{
	t7{a0};
}

bool f_122a_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_c74_a1_f(a0) <= 4000000;
}

void f_1239_a1_v(object a0)
{
	t8{a0};
}

bool f_1241_a1_b(object a0)
{
	return f_122a_a1_b(a0);
}

void f_1248_a1_v(object a0)
{
	f_1239_a1_v(a0);
}

bool f_124e_a1_b(object a0)
{
	return false;
}

void f_1251_a1_v(object a0)
{
}

void f_1253_a1_v(object a0)
{
	object L0;
	L0 = f_e1d_a0_o();
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
					if (L11 < 100 && f_12e6_a1_b(L8)) {
						float L12;
						int L13;
						L0->add(L8);
						L1->add(L5);
						L2->add(L7);
						L12 = f_f8b_a2_i(L8, 0);
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

bool f_12e6_a1_b(object a0)
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

void f_12f6_a1_v(object a0)
{
	if (t0{a0} == 100) {
		f_1253_a1_v(a0);
	}
}

string f_1305_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_130c_a0_i(void)
{
	return 515567;
}

int f_130e_a0_i(void)
{
	return 503352;
}

string f_1310_a0_s(void)
{
	return "ui/NPC_Citizen3.png";
}

string f_1312_a0_s(void)
{
	return "ui/NPC_Citizen3_b.png";
}

bool f_1314_a0_b(void)
{
	return false;
}

void f_1316_a0_v(void)
{
	g0 = false;
	f_1020_a1_v(false);
}

void f_131e_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_fcb_a1_v(a0);
		}
		return;
	} else {
		f_12f6_a1_v(a0);
	}
}

void f_1330_a0_v(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1305_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	int L2;
	@irand(L2, L0);
	@PlayAnimation("all", f_1305_a1_s(L2));
	@WaitForAnimEnd();
}

void f_134b_a0_v(void)
{
	@StopAnimation();
}

bool f_134e_a0_b(void)
{
	return true;
}

bool f_1350_a3_b(object a0, object a1, bool a2)
{
	if (f_11b6_a3_b(a0, a1, 500.0)) {
		@SetProperty("ToDie", true);
		return true;
	}
	return false;
}

void f_1360_a1_v(object a0)
{
	if (f_c7c_a1_b(a0)) {
		@ReportReputationChange(a0, f_e0d_a0_o(), -0.10000000149011612, true);
		f_1020_a1_v(false);
	}
	f_1008_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

