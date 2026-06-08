event OnLoad 5;
event evt_11 11;
event OnTimer 7;
event OnUnload 6;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_aa3_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
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
		f_afd_a1_b(f_baa_a0_o());
		if (!f_aa8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c6b_a0_i());
		L0->SetNPCDescription(f_c69_a0_i());
		L0->SetPhoto(f_c6d_a0_s());
		L0->SetPhoto2(f_c6f_a0_s());
		L0->SetPlayerName(f_e42_a0_i());
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
		f_aec_a1_v(a0);
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
			if (f_d01_a1_b(tv1)) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(526965);
				tv0->ClearReplies();
				tv0->AddReply(528076, 29419, 29418);
				break;
			}
			f_b6_a1_v("Neutral");
			tv0->SetMessage(526969);
			tv0->ClearReplies();
			if (f_d0d_a1_b(tv1)) {
				tv0->AddReply(526978, 29424, 28270);
			}
			tv0->AddReply(526970, -1, 28262);
			tv0->AddReply(528088, -1, 29431);
			break;
			return;
		}
		if (f_c71_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b87_a1_v(tv2);
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

	void f_b6_a1_v(string a0)
	{
		if (!f_c71_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b8e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ba3_a0_v();
			if (a1 == 28260) {
				f_c7a_a2_v(tv1, tv0);
			}
			if (a1 == 28272) {
				f_c8d_a2_v(tv1, tv0);
			}
			if (a0 == 28257) {
				if (f_d01_a1_b(tv1)) {
					f_b6_a1_v("Neutral");
					tv0->SetMessage(526965);
					tv0->ClearReplies();
					tv0->AddReply(528076, 29419, 29418);
					return;
				}
				f_b6_a1_v("Neutral");
				tv0->SetMessage(526969);
				tv0->ClearReplies();
				if (f_d0d_a1_b(tv1)) {
					tv0->AddReply(526978, 29424, 28270);
				}
				tv0->AddReply(526970, -1, 28262);
				tv0->AddReply(528088, -1, 29431);
				return;
			}
			if (a0 == 29424) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(528082);
				tv0->ClearReplies();
				tv0->AddReply(528083, 29426, 29425);
				return;
			}
			if (a0 == 29426) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(528084);
				tv0->ClearReplies();
				tv0->AddReply(528085, 28271, 29427);
				tv0->AddReply(528086, 28271, 29428);
				return;
			}
			if (a0 == 28271) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(526979);
				tv0->ClearReplies();
				tv0->AddReply(528089, 29433, 29432);
				return;
			}
			if (a0 == 29433) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(528090);
				tv0->ClearReplies();
				tv0->AddReply(526980, -1, 28272);
				return;
			}
			if (a0 == 29419) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(528077);
				tv0->ClearReplies();
				tv0->AddReply(528078, 29421, 29420);
				tv0->AddReply(528109, 29456, 29454);
				return;
			}
			if (a0 == 29456) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(528110);
				tv0->ClearReplies();
				tv0->AddReply(528111, 29421, 29457);
				return;
			}
			if (a0 == 29421) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(528079);
				tv0->ClearReplies();
				tv0->AddReply(528080, 29423, 29422);
				return;
			}
			if (a0 == 29423) {
				f_b6_a1_v("Neutral");
				tv0->SetMessage(528081);
				tv0->ClearReplies();
				tv0->AddReply(526968, -1, 28260);
				return;
			}
			tv3 = true;
			if (f_c71_a0_b()) {
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
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_afd_a1_b(f_baa_a0_o());
		if (!f_aa8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c6b_a0_i());
		L0->SetNPCDescription(f_c69_a0_i());
		L0->SetPhoto(f_c6d_a0_s());
		L0->SetPhoto2(f_c6f_a0_s());
		L0->SetPlayerName(f_e42_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t4{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_aec_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t4
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
			f_2bf_a1_v("Neutral");
			tv0->SetMessage(527190);
			tv0->ClearReplies();
			if (f_d19_a1_b(tv1)) {
				tv0->AddReply(527191, 28604, 28499);
			}
			if (f_d25_a1_b(tv1)) {
				tv0->AddReply(527234, 28615, 28542);
			}
			if (f_d3d_a1_b(tv1) && f_d31_a1_b(tv1)) {
				tv0->AddReply(527310, 28628, 28627);
			}
			if (f_d53_a1_b(tv1) && f_d5d_a1_b(tv1) && f_d7b_a1_b(tv1)) {
				tv0->AddReply(539861, 41814, 41813);
			}
			if (f_d53_a1_b(tv1) && f_d67_a1_b(tv1) && f_d87_a1_b(tv1)) {
				tv0->AddReply(539864, 41817, 41816);
			}
			if (f_d53_a1_b(tv1) && f_d71_a1_b(tv1) && f_d93_a1_b(tv1)) {
				tv0->AddReply(539867, 41820, 41819);
			}
			tv0->AddReply(527196, -1, 28504);
			break;
			return;
		}
		if (f_c71_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b87_a1_v(tv2);
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

	void f_2bf_a1_v(string a0)
	{
		if (!f_c71_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b8e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ba3_a0_v();
			if (a1 == 28503) {
				f_c9b_a2_v(tv1, tv0);
			}
			if (a1 == 28614) {
				f_c9b_a2_v(tv1, tv0);
			}
			if (a1 == 28691) {
				f_cae_a2_v(tv1, tv0);
			}
			if (a1 == 28692) {
				f_cae_a2_v(tv1, tv0);
			}
			if (a1 == 28639) {
				f_cbb_a2_v(tv1, tv0);
			}
			if (a1 == 41813) {
				f_cda_a2_v(tv1, tv0);
			}
			if (a1 == 41816) {
				f_ce0_a2_v(tv1, tv0);
			}
			if (a1 == 41818) {
				f_cd5_a2_v(tv1, tv0);
				f_cec_a2_v(tv1, tv0);
				f_ccf_a2_v(tv1, tv0);
				f_c73_a2_v(tv1, tv0);
				f_cf6_a2_v(tv1, tv0);
			}
			if (a1 == 41819) {
				f_ce6_a2_v(tv1, tv0);
			}
			if (a0 == 28498) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527190);
				tv0->ClearReplies();
				if (f_d19_a1_b(tv1)) {
					tv0->AddReply(527191, 28604, 28499);
				}
				if (f_d25_a1_b(tv1)) {
					tv0->AddReply(527234, 28615, 28542);
				}
				if (f_d3d_a1_b(tv1) && f_d31_a1_b(tv1)) {
					tv0->AddReply(527310, 28628, 28627);
				}
				if (f_d53_a1_b(tv1) && f_d5d_a1_b(tv1) && f_d7b_a1_b(tv1)) {
					tv0->AddReply(539861, 41814, 41813);
				}
				if (f_d53_a1_b(tv1) && f_d67_a1_b(tv1) && f_d87_a1_b(tv1)) {
					tv0->AddReply(539864, 41817, 41816);
				}
				if (f_d53_a1_b(tv1) && f_d71_a1_b(tv1) && f_d93_a1_b(tv1)) {
					tv0->AddReply(539867, 41820, 41819);
				}
				tv0->AddReply(527196, -1, 28504);
				return;
			}
			if (a0 == 41820) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(539868);
				tv0->ClearReplies();
				tv0->AddReply(539869, -1, 41821);
				return;
			}
			if (a0 == 41817) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(539865);
				tv0->ClearReplies();
				tv0->AddReply(539866, -1, 41818);
				return;
			}
			if (a0 == 41814) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(539862);
				tv0->ClearReplies();
				tv0->AddReply(539863, -1, 41815);
				return;
			}
			if (a0 == 28628) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527311);
				tv0->ClearReplies();
				tv0->AddReply(527312, 28632, 28629);
				tv0->AddReply(527357, 28632, 28676);
				return;
			}
			if (a0 == 28632) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527315);
				tv0->ClearReplies();
				tv0->AddReply(527316, 28634, 28633);
				tv0->AddReply(527358, 28634, 28678);
				return;
			}
			if (a0 == 28634) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527317);
				tv0->ClearReplies();
				tv0->AddReply(527318, 28636, 28635);
				tv0->AddReply(527359, 28638, 28680);
				return;
			}
			if (a0 == 28636) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527319);
				tv0->ClearReplies();
				tv0->AddReply(527320, 28638, 28637);
				return;
			}
			if (a0 == 28638) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527321);
				tv0->ClearReplies();
				tv0->AddReply(527322, -1, 28639);
				return;
			}
			if (a0 == 28615) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527299);
				tv0->ClearReplies();
				tv0->AddReply(527300, 28617, 28616);
				return;
			}
			if (a0 == 28617) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527301);
				tv0->ClearReplies();
				tv0->AddReply(527302, 28619, 28618);
				return;
			}
			if (a0 == 28619) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527303);
				tv0->ClearReplies();
				tv0->AddReply(527304, 28543, 28620);
				return;
			}
			if (a0 == 28543) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527235);
				tv0->ClearReplies();
				tv0->AddReply(527236, 28621, 28544);
				return;
			}
			if (a0 == 28621) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527305);
				tv0->ClearReplies();
				tv0->AddReply(527306, 28623, 28622);
				return;
			}
			if (a0 == 28623) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527307);
				tv0->ClearReplies();
				tv0->AddReply(527308, 28545, 28624);
				tv0->AddReply(527309, 28545, 28625);
				return;
			}
			if (a0 == 28545) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527237);
				tv0->ClearReplies();
				tv0->AddReply(527360, 28683, 28682);
				tv0->AddReply(527238, 28630, 28546);
				return;
			}
			if (a0 == 28630) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527313);
				tv0->ClearReplies();
				tv0->AddReply(527314, 28685, 28631);
				return;
			}
			if (a0 == 28683) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527361);
				tv0->ClearReplies();
				tv0->AddReply(527362, 28685, 28684);
				return;
			}
			if (a0 == 28685) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527363);
				tv0->ClearReplies();
				tv0->AddReply(527364, 28687, 28686);
				return;
			}
			if (a0 == 28687) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527365);
				tv0->ClearReplies();
				tv0->AddReply(527366, 28689, 28688);
				return;
			}
			if (a0 == 28689) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527367);
				tv0->ClearReplies();
				tv0->AddReply(527368, -1, 28691);
				tv0->AddReply(527369, -1, 28692);
				return;
			}
			if (a0 == 28604) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527290);
				tv0->ClearReplies();
				tv0->AddReply(527291, 28500, 28605);
				tv0->AddReply(527296, 28609, 28610);
				return;
			}
			if (a0 == 28500) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527192);
				tv0->ClearReplies();
				tv0->AddReply(527294, 28609, 28608);
				tv0->AddReply(527297, 28609, 28612);
				return;
			}
			if (a0 == 28609) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527295);
				tv0->ClearReplies();
				tv0->AddReply(527292, 28607, 28606);
				tv0->AddReply(527298, -1, 28614);
				return;
			}
			if (a0 == 28607) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527293);
				tv0->ClearReplies();
				tv0->AddReply(527193, 28502, 28501);
				return;
			}
			if (a0 == 28502) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(527194);
				tv0->ClearReplies();
				tv0->AddReply(527195, -1, 28503);
				return;
			}
			tv3 = true;
			if (f_c71_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t5
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_afd_a1_b(f_baa_a0_o());
		if (!f_aa8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c6b_a0_i());
		L0->SetNPCDescription(f_c69_a0_i());
		L0->SetPhoto(f_c6d_a0_s());
		L0->SetPhoto2(f_c6f_a0_s());
		L0->SetPlayerName(f_e42_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t6{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_aec_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t6
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
			if (f_d47_a1_b(tv1)) {
				f_664_a1_v("Neutral");
				tv0->SetMessage(529720);
				tv0->ClearReplies();
				tv0->AddReply(529743, 31200, 31198);
				tv0->AddReply(529744, 31206, 31199);
				break;
			}
			f_664_a1_v("Neutral");
			tv0->SetMessage(529758);
			tv0->ClearReplies();
			tv0->AddReply(529756, 31213, 31212);
			tv0->AddReply(529759, -1, 31215);
			break;
			return;
		}
		if (f_c71_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b87_a1_v(tv2);
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

	void f_664_a1_v(string a0)
	{
		if (!f_c71_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b8e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ba3_a0_v();
			if (a1 == 31266) {
				f_cc5_a2_v(tv1, tv0);
			}
			if (a1 == 31267) {
				f_cc5_a2_v(tv1, tv0);
			}
			if (a0 == 31174) {
				if (f_d47_a1_b(tv1)) {
					f_664_a1_v("Neutral");
					tv0->SetMessage(529720);
					tv0->ClearReplies();
					tv0->AddReply(529743, 31200, 31198);
					tv0->AddReply(529744, 31206, 31199);
					return;
				}
				f_664_a1_v("Neutral");
				tv0->SetMessage(529758);
				tv0->ClearReplies();
				tv0->AddReply(529756, 31213, 31212);
				tv0->AddReply(529759, -1, 31215);
				return;
			}
			if (a0 == 31213) {
				f_664_a1_v("Neutral");
				tv0->SetMessage(529757);
				tv0->ClearReplies();
				tv0->AddReply(529760, 31217, 31216);
				return;
			}
			if (a0 == 31217) {
				f_664_a1_v("Neutral");
				tv0->SetMessage(529761);
				tv0->ClearReplies();
				tv0->AddReply(529762, 31219, 31218);
				return;
			}
			if (a0 == 31219) {
				f_664_a1_v("Neutral");
				tv0->SetMessage(529763);
				tv0->ClearReplies();
				tv0->AddReply(529764, 31221, 31220);
				return;
			}
			if (a0 == 31221) {
				f_664_a1_v("Neutral");
				tv0->SetMessage(529765);
				tv0->ClearReplies();
				tv0->AddReply(529766, -1, 31222);
				tv0->AddReply(529767, -1, 31223);
				return;
			}
			if (a0 == 31200) {
				f_664_a1_v("Neutral");
				tv0->SetMessage(529745);
				tv0->ClearReplies();
				tv0->AddReply(529749, 31205, 31204);
				return;
			}
			if (a0 == 31205) {
				f_664_a1_v("Neutral");
				tv0->SetMessage(529750);
				tv0->ClearReplies();
				tv0->AddReply(529746, 31202, 31201);
				return;
			}
			if (a0 == 31202) {
				f_664_a1_v("Neutral");
				tv0->SetMessage(529747);
				tv0->ClearReplies();
				tv0->AddReply(529748, 31206, 31203);
				return;
			}
			if (a0 == 31206) {
				f_664_a1_v("Neutral");
				tv0->SetMessage(529751);
				tv0->ClearReplies();
				tv0->AddReply(529752, 31209, 31208);
				return;
			}
			if (a0 == 31209) {
				f_664_a1_v("Neutral");
				tv0->SetMessage(529753);
				tv0->ClearReplies();
				tv0->AddReply(529754, 31211, 31210);
				return;
			}
			if (a0 == 31211) {
				f_664_a1_v("Neutral");
				tv0->SetMessage(529755);
				tv0->ClearReplies();
				tv0->AddReply(529807, -1, 31266);
				tv0->AddReply(529808, -1, 31267);
				return;
			}
			tv3 = true;
			if (f_c71_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
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
		f_afd_a1_b(f_baa_a0_o());
		if (!f_aa8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c6b_a0_i());
		L0->SetNPCDescription(f_c69_a0_i());
		L0->SetPhoto(f_c6d_a0_s());
		L0->SetPhoto2(f_c6f_a0_s());
		L0->SetPlayerName(f_e42_a0_i());
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
		f_aec_a1_v(a0);
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
			f_81b_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_c71_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b87_a1_v(tv2);
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

	void f_81b_a1_v(string a0)
	{
		if (!f_c71_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b8e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ba3_a0_v();
			if (a0 == 36960) {
				f_81b_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_81b_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_81b_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_c71_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t9
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_afd_a1_b(f_baa_a0_o());
		if (!f_aa8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c6b_a0_i());
		L0->SetNPCDescription(f_c69_a0_i());
		L0->SetPhoto(f_c6d_a0_s());
		L0->SetPhoto2(f_c6f_a0_s());
		L0->SetPlayerName(f_e42_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t10{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_aec_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t10
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
			f_919_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_c71_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b87_a1_v(tv2);
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

	void f_919_a1_v(string a0)
	{
		if (!f_c71_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b8e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ba3_a0_v();
			if (a0 == 42554) {
				f_919_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_c71_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t11
{
	var Vector tv0;

	void init(void)
	{
		f_95d_a0_v();
	}

	void f_95d_a0_v(void)
	{
		if (!f_aa3_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_a13_a0_v();
		}
	}

	bool f_971_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_a9a_a1_b(L0);
	}

	void f_980_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_985_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_a5f_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_99b_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_9a4_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_9a4_a0_v();
			if (f_aa3_a0_b() && f_985_a0_b()) {
				if (f_971_a0_b()) {
					f_b37_a1_b(f_baa_a0_o());
				}
			} else {
				f_980_a0_v();
				f_99b_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_a5a_a0_v();
		f_9a4_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_9a4_a0_v();
		f_b87_a1_v("Neutral");
		f_99b_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_99b_a0_v();
		} else {
			f_b87_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_a5a_a0_v();
			f_a9a_a1_b(a0);
			enable OnUse;
			f_e7e_a1_v(a0);
			f_b87_a1_v("Neutral");
			f_9a4_a0_v();
			f_99b_a0_v();
		}
	}
}

void f_a13_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_aa3_a0_b()) {
		return;
	}
	L0 = f_c58_a0_i();
	for (L1 = 0; L1 < 5 && f_aa3_a0_b(); L1 = L1 + 1) {
		if (!L0) {
			bool L2;
			@Sleep(3, L2);
			if (!L2) {
				break;
			}
		} else {
			int L3;
			int L4;
			bool L5;
			@irand(L3, L0);
			@irand(L4, 5);
			if (L4 != 0) {
				L3 = 0;
			}
			@PlayAnimation("all", f_c51_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_a58_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_a58_a0_b(void)
{
	return true;
}

void f_a5a_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_a5f_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_a67_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_a73_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_a67_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_bba_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_a89_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_a90_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_a9a_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_a90_a1_b(L0);
}

bool f_aa3_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_aa8_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_bb0_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_c71_a0_b()) {
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

void f_aec_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_c71_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_afd_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_b37_a1_b(a0)) {
			if (!f_b5c_a1_b(a0)) {
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
		if (!f_b5c_a1_b(a0)) {
			if (!f_b37_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_b37_a1_b(object a0)
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
	return f_b94_a1_b(L4);
}

bool f_b5c_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_c42_a0_i() + "m";
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
	return f_b94_a1_b(L4);
}

void f_b87_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_b8e_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_b94_a1_b(string a0)
{
	if (f_c71_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_ba3_a0_v(void)
{
	if (f_c71_a0_b()) {
		@lshStopSpeech();
	}
}

object f_baa_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_bb0_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_bba_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_bc5_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_bca_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_bd6_a2_v(object a0, int a1)
{
	f_a89_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_bca_a2_v(L0, a1);
	}
}

void f_be9_a3_v(object a0, object a1, int a2)
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
		f_bca_a2_v(L0, a2);
	}
}

void f_bfc_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_be9_a3_v(a0, L0, a2);
}

bool f_c09_a2_b(object a0, float a1)
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
	f_c2c_a1_v(a1);
	f_a73_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_c2c_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_c36_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_c42_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_c4b_a1_b(int a0)
{
	return f_c42_a0_i() == a0;
}

string f_c51_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_c58_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_c51_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_c69_a0_i(void)
{
	return 515532;
}

int f_c6b_a0_i(void)
{
	return 514840;
}

string f_c6d_a0_s(void)
{
	return "ui/NPC_Block.png";
}

string f_c6f_a0_s(void)
{
	return "ui/NPC_Block_b.png";
}

bool f_c71_a0_b(void)
{
	return true;
}

void f_c73_a2_v(object a0, object a1)
{
	f_c09_a2_b(a0, 0.05000000074505806);
}

void f_c7a_a2_v(object a0, object a1)
{
	@SetVariable("k10q01", 3);
	f_dbe_a0_v();
	f_c36_a2_b("quest_k10_01", "remove_soldiers");
	f_c36_a2_b("quest_k10_01", "init_prison");
}

void f_c8d_a2_v(object a0, object a1)
{
	@SetVariable("k10q01", 5);
	f_dcb_a0_v();
	f_c36_a2_b("quest_k10_01", "free_prisoner");
}

void f_c9b_a2_v(object a0, object a1)
{
	@SetVariable("k11q01", 2);
	f_dd8_a0_v();
	f_c36_a2_b("quest_k11_01", "init_kabak");
	f_c36_a2_b("quest_k11_01", "init_gun");
}

void f_cae_a2_v(object a0, object a1)
{
	@SetVariable("k11q01", 9);
	@SetVariable("k11q01SoulCount", 1);
	f_de5_a0_v();
}

void f_cbb_a2_v(object a0, object a1)
{
	f_df2_a0_v();
	f_c36_a2_b("quest_k11_01", "completed");
}

void f_cc5_a2_v(object a0, object a1)
{
	f_e0c_a0_v();
	f_c36_a2_b("quest_k9_01", "completed");
}

void f_ccf_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_cd5_a2_v(object a0, object a1)
{
	f_dff_a0_v();
}

void f_cda_a2_v(object a0, object a1)
{
	@SetVariable("ook11Block1", 1);
}

void f_ce0_a2_v(object a0, object a1)
{
	@SetVariable("ook11Block2", 1);
}

void f_ce6_a2_v(object a0, object a1)
{
	@SetVariable("ook11Block3", 1);
}

void f_cec_a2_v(object a0, object a1)
{
	@Trace("money 5000 is given");
	f_bd6_a2_v(a0, 5000);
}

void f_cf6_a2_v(object a0, object a1)
{
	@Trace("delta_pills is given");
	f_bfc_a3_v(a0, "delta_pills", 1);
}

bool f_d01_a1_b(object a0)
{
	if (f_bc5_a1_i("k10q01") == 2) {
		return true;
	}
	return false;
}

bool f_d0d_a1_b(object a0)
{
	if (f_bc5_a1_i("k10q01") == 4) {
		return true;
	}
	return false;
}

bool f_d19_a1_b(object a0)
{
	if (f_bc5_a1_i("k11q01") == 1) {
		return true;
	}
	return false;
}

bool f_d25_a1_b(object a0)
{
	if (f_bc5_a1_i("k11q01") == 8) {
		return true;
	}
	return false;
}

bool f_d31_a1_b(object a0)
{
	if (f_bc5_a1_i("k11q01") == 9) {
		return true;
	}
	return false;
}

bool f_d3d_a1_b(object a0)
{
	if (f_d9f_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_d47_a1_b(object a0)
{
	if (f_bc5_a1_i("k9q01") == 8) {
		return true;
	}
	return false;
}

bool f_d53_a1_b(object a0)
{
	if (f_da6_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_d5d_a1_b(object a0)
{
	if (f_dac_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_d67_a1_b(object a0)
{
	if (f_db2_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_d71_a1_b(object a0)
{
	if (f_db8_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_d7b_a1_b(object a0)
{
	if (f_bc5_a1_i("ook11Block1") == 0) {
		return true;
	}
	return false;
}

bool f_d87_a1_b(object a0)
{
	if (f_bc5_a1_i("ook11Block2") == 0) {
		return true;
	}
	return false;
}

bool f_d93_a1_b(object a0)
{
	if (f_bc5_a1_i("ook11Block3") == 0) {
		return true;
	}
	return false;
}

bool f_d9f_a1_b(object a0)
{
	int L0;
	@GetVariable("k11q01SoulsCount", L0);
	return L0 >= 7;
}

bool f_da6_a1_b(object a0)
{
	return f_e64_a0_b();
}

bool f_dac_a1_b(object a0)
{
	return f_e78_a0_b();
}

bool f_db2_a1_b(object a0)
{
	return f_e6c_a0_b();
}

bool f_db8_a1_b(object a0)
{
	return f_e72_a0_b();
}

void f_dbe_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 450, 1, 527008);
	f_e26_a2_b(L0, 447);
}

void f_dcb_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 452, 1, 527010);
	f_e26_a2_b(L0, 447);
}

void f_dd8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 483, 1, 528050);
	f_e26_a2_b(L0, 480);
}

void f_de5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 492, 1, 528059);
	f_e26_a2_b(L0, 480);
}

void f_df2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 499, 1, 528066);
	f_e26_a2_b(L0, 480);
}

void f_dff_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 762, 2, 539747);
	f_e26_a2_b(L0, 757);
}

void f_e0c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 526, 1, 529818);
	f_e26_a2_b(L0, 517);
}

object f_e19_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_e26_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_e19_a0_o();
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

int f_e42_a0_i(void)
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

int f_e53_a0_i(void)
{
	int L0;
	@GetVariable("k2system_danko_day", L0);
	return L0;
}

int f_e59_a0_i(void)
{
	int L0;
	int L1;
	L0 = f_e53_a0_i();
	@GetVariable("k2system_danko_state" + L0, L1);
	return L1;
}

bool f_e64_a0_b(void)
{
	return f_c42_a0_i() == f_e53_a0_i();
}

bool f_e6c_a0_b(void)
{
	return f_e59_a0_i() == 2;
}

bool f_e72_a0_b(void)
{
	return f_e59_a0_i() == 3;
}

bool f_e78_a0_b(void)
{
	return f_e59_a0_i() == 0;
}

void f_e7e_a1_v(object a0)
{
	if (f_c4b_a1_b(10)) {
		t1{a0};
		return;
	}
	if (f_c4b_a1_b(9)) {
		t5{a0};
		return;
	}
	if (f_c4b_a1_b(11)) {
		t3{a0};
		return;
	}
	if (f_c4b_a1_b(12)) {
		t7{a0};
		return;
	}
	t9{a0};
}

