event OnLoad 5;
event evt_11 11;
event OnTimer 7;
event OnUnload 6;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_baf_a0_b());
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
		f_c09_a1_b(f_cb6_a0_o());
		if (!f_bb4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d87_a0_i());
		L0->SetNPCDescription(f_d85_a0_i());
		L0->SetPhoto(f_d89_a0_s());
		L0->SetPhoto2(f_d8b_a0_s());
		L0->SetPlayerName(f_1061_a0_i());
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
		f_bf8_a1_v(a0);
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
			if (f_ea8_a1_b(tv1) && !f_e9c_a1_b(tv1)) {
				f_d9f_a2_v(tv1, tv0);
				f_e7b_a2_v(tv1, tv0);
				f_ed_a1_v("Neutral");
				tv0->SetMessage(525316);
				tv0->ClearReplies();
				tv0->AddReply(525317, 41305, 26685);
				tv0->AddReply(539381, -1, 41304);
				break;
			}
			f_ed_a1_v("Neutral");
			tv0->SetMessage(525286);
			tv0->ClearReplies();
			if (f_e9c_a1_b(tv1)) {
				tv0->AddReply(525292, 26661, 26660);
			}
			if (f_eb4_a1_b(tv1) && !f_ea8_a1_b(tv1)) {
				tv0->AddReply(525325, 42565, 26693);
			}
			if (f_ec0_a1_b(tv1)) {
				tv0->AddReply(525334, 26703, 26702);
			}
			tv0->AddReply(525295, -1, 26663);
			tv0->AddReply(529185, -1, 30635);
			break;
			return;
		}
		if (f_d8d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c93_a1_v(tv2);
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

	void f_ed_a1_v(string a0)
	{
		if (!f_d8d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c9a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_caf_a0_v();
			if (a1 == 26691) {
				f_da5_a2_v(tv1, tv0);
				f_e5f_a2_v(tv1, tv0);
			}
			if (a1 == 41323) {
				f_da5_a2_v(tv1, tv0);
				f_e5f_a2_v(tv1, tv0);
			}
			if (a1 == 41324) {
				f_da5_a2_v(tv1, tv0);
				f_e5f_a2_v(tv1, tv0);
			}
			if (a1 == 26662) {
				f_d96_a2_v(tv1, tv0);
			}
			if (a1 == 26695) {
				f_da5_a2_v(tv1, tv0);
				f_e5f_a2_v(tv1, tv0);
			}
			if (a1 == 41327) {
				f_da5_a2_v(tv1, tv0);
				f_e5f_a2_v(tv1, tv0);
			}
			if (a1 == 26704) {
				f_dc8_a2_v(tv1, tv0);
				f_e6f_a2_v(tv1, tv0);
				f_e1c_a2_v(tv1, tv0);
			}
			if (a1 == 41332) {
				f_dc8_a2_v(tv1, tv0);
				f_d8f_a2_v(tv1, tv0);
			}
			if (a0 == 26684) {
				if (f_ea8_a1_b(tv1) && !f_e9c_a1_b(tv1)) {
					f_d9f_a2_v(tv1, tv0);
					f_e7b_a2_v(tv1, tv0);
					f_ed_a1_v("Neutral");
					tv0->SetMessage(525316);
					tv0->ClearReplies();
					tv0->AddReply(525317, 41305, 26685);
					tv0->AddReply(539381, -1, 41304);
					return;
				}
				f_ed_a1_v("Neutral");
				tv0->SetMessage(525286);
				tv0->ClearReplies();
				if (f_e9c_a1_b(tv1)) {
					tv0->AddReply(525292, 26661, 26660);
				}
				if (f_eb4_a1_b(tv1) && !f_ea8_a1_b(tv1)) {
					tv0->AddReply(525325, 42565, 26693);
				}
				if (f_ec0_a1_b(tv1)) {
					tv0->AddReply(525334, 26703, 26702);
				}
				tv0->AddReply(525295, -1, 26663);
				tv0->AddReply(529185, -1, 30635);
				return;
			}
			if (a0 == 26703) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(525335);
				tv0->ClearReplies();
				tv0->AddReply(539400, 41330, 41328);
				tv0->AddReply(539401, 41330, 41329);
				return;
			}
			if (a0 == 41330) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(539402);
				tv0->ClearReplies();
				tv0->AddReply(525336, -1, 26704);
				tv0->AddReply(539403, -1, 41332);
				return;
			}
			if (a0 == 42565) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(540556);
				tv0->ClearReplies();
				tv0->AddReply(540557, 26694, 42566);
				return;
			}
			if (a0 == 26694) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(525326);
				tv0->ClearReplies();
				tv0->AddReply(539397, 41326, 41325);
				tv0->AddReply(539399, -1, 41327);
				return;
			}
			if (a0 == 41326) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(539398);
				tv0->ClearReplies();
				tv0->AddReply(525327, -1, 26695);
				return;
			}
			if (a0 == 26661) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(525293);
				tv0->ClearReplies();
				tv0->AddReply(529186, 30637, 30636);
				return;
			}
			if (a0 == 30637) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(529187);
				tv0->ClearReplies();
				tv0->AddReply(525294, -1, 26662);
				return;
			}
			if (a0 == 41305) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(539382);
				tv0->ClearReplies();
				tv0->AddReply(539383, 41307, 41306);
				tv0->AddReply(539387, 41312, 41310);
				tv0->AddReply(539386, 26686, 41309);
				return;
			}
			if (a0 == 41307) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(539384);
				tv0->ClearReplies();
				tv0->AddReply(539388, 41312, 41311);
				tv0->AddReply(539385, 26686, 41308);
				return;
			}
			if (a0 == 41312) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(539389);
				tv0->ClearReplies();
				tv0->AddReply(539390, 26686, 41313);
				tv0->AddReply(539391, 26686, 41316);
				return;
			}
			if (a0 == 26686) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(525318);
				tv0->ClearReplies();
				tv0->AddReply(525319, 26688, 26687);
				tv0->AddReply(539392, 41321, 41319);
				return;
			}
			if (a0 == 41321) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(539394);
				tv0->ClearReplies();
				tv0->AddReply(539395, -1, 41323);
				tv0->AddReply(539396, -1, 41324);
				return;
			}
			if (a0 == 26688) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(525320);
				tv0->ClearReplies();
				tv0->AddReply(525321, 26690, 26689);
				tv0->AddReply(539393, 41321, 41320);
				return;
			}
			if (a0 == 26690) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(525322);
				tv0->ClearReplies();
				tv0->AddReply(525323, -1, 26691);
				tv0->AddReply(525324, -1, 26692);
				return;
			}
			tv3 = true;
			if (f_d8d_a0_b()) {
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
		f_c09_a1_b(f_cb6_a0_o());
		if (!f_bb4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d87_a0_i());
		L0->SetNPCDescription(f_d85_a0_i());
		L0->SetPhoto(f_d89_a0_s());
		L0->SetPhoto2(f_d8b_a0_s());
		L0->SetPlayerName(f_1061_a0_i());
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
		f_bf8_a1_v(a0);
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
			f_3a8_a1_v("Neutral");
			tv0->SetMessage(525495);
			tv0->ClearReplies();
			tv0->AddReply(525496, -1, 26852);
			tv0->AddReply(529314, -1, 30768);
			break;
			return;
		}
		if (f_d8d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c93_a1_v(tv2);
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

	void f_3a8_a1_v(string a0)
	{
		if (!f_d8d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c9a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_caf_a0_v();
			if (a0 == 26851) {
				f_3a8_a1_v("Neutral");
				tv0->SetMessage(525495);
				tv0->ClearReplies();
				tv0->AddReply(525496, -1, 26852);
				tv0->AddReply(529314, -1, 30768);
				return;
			}
			tv3 = true;
			if (f_d8d_a0_b()) {
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
		f_c09_a1_b(f_cb6_a0_o());
		if (!f_bb4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d87_a0_i());
		L0->SetNPCDescription(f_d85_a0_i());
		L0->SetPhoto(f_d89_a0_s());
		L0->SetPhoto2(f_d8b_a0_s());
		L0->SetPlayerName(f_1061_a0_i());
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
		f_bf8_a1_v(a0);
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
			if (f_ed8_a1_b(tv1)) {
				f_df0_a2_v(tv1, tv0);
				f_4c0_a1_v("Neutral");
				tv0->SetMessage(525791);
				tv0->ClearReplies();
				tv0->AddReply(529235, 30690, 30689);
				break;
			}
			f_4c0_a1_v("Neutral");
			tv0->SetMessage(525796);
			tv0->ClearReplies();
			if (f_ecc_a1_b(tv1)) {
				tv0->AddReply(525797, 27105, 27103);
			}
			if (f_ee4_a1_b(tv1)) {
				tv0->AddReply(525813, 27120, 27119);
			}
			if (f_ef0_a1_b(tv1) && f_efc_a1_b(tv1) || f_f08_a1_b(tv1) && f_efc_a1_b(tv1)) {
				tv0->AddReply(525819, 27126, 27125);
			}
			tv0->AddReply(525798, -1, 27104);
			break;
			return;
		}
		if (f_d8d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c93_a1_v(tv2);
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

	void f_4c0_a1_v(string a0)
	{
		if (!f_d8d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c9a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_caf_a0_v();
			if (a1 == 27101) {
				f_dd2_a2_v(tv1, tv0);
				f_e81_a2_v(tv1, tv0);
			}
			if (a1 == 27106) {
				f_dd2_a2_v(tv1, tv0);
				f_e81_a2_v(tv1, tv0);
			}
			if (a1 == 27121) {
				f_dfc_a2_v(tv1, tv0);
				f_e91_a2_v(tv1, tv0);
				f_e06_a2_v(tv1, tv0);
				f_e75_a2_v(tv1, tv0);
			}
			if (a1 == 27125) {
				f_df6_a2_v(tv1, tv0);
			}
			if (a0 == 27097) {
				if (f_ed8_a1_b(tv1)) {
					f_df0_a2_v(tv1, tv0);
					f_4c0_a1_v("Neutral");
					tv0->SetMessage(525791);
					tv0->ClearReplies();
					tv0->AddReply(529235, 30690, 30689);
					return;
				}
				f_4c0_a1_v("Neutral");
				tv0->SetMessage(525796);
				tv0->ClearReplies();
				if (f_ecc_a1_b(tv1)) {
					tv0->AddReply(525797, 27105, 27103);
				}
				if (f_ee4_a1_b(tv1)) {
					tv0->AddReply(525813, 27120, 27119);
				}
				if (f_ef0_a1_b(tv1) && f_efc_a1_b(tv1) || f_f08_a1_b(tv1) && f_efc_a1_b(tv1)) {
					tv0->AddReply(525819, 27126, 27125);
				}
				tv0->AddReply(525798, -1, 27104);
				return;
			}
			if (a0 == 27126) {
				f_4c0_a1_v("Neutral");
				tv0->SetMessage(525820);
				tv0->ClearReplies();
				tv0->AddReply(525821, -1, 27127);
				return;
			}
			if (a0 == 27120) {
				f_4c0_a1_v("Neutral");
				tv0->SetMessage(525814);
				tv0->ClearReplies();
				tv0->AddReply(525815, -1, 27121);
				return;
			}
			if (a0 == 27105) {
				f_4c0_a1_v("Neutral");
				tv0->SetMessage(525799);
				tv0->ClearReplies();
				tv0->AddReply(525800, -1, 27106);
				return;
			}
			if (a0 == 30690) {
				f_4c0_a1_v("Neutral");
				tv0->SetMessage(529236);
				tv0->ClearReplies();
				tv0->AddReply(529237, 30692, 30691);
				return;
			}
			if (a0 == 30692) {
				f_4c0_a1_v("Neutral");
				tv0->SetMessage(529238);
				tv0->ClearReplies();
				tv0->AddReply(525792, 27100, 27098);
				tv0->AddReply(525793, -1, 27099);
				return;
			}
			if (a0 == 27100) {
				f_4c0_a1_v("Neutral");
				tv0->SetMessage(525794);
				tv0->ClearReplies();
				tv0->AddReply(525795, -1, 27101);
				return;
			}
			tv3 = true;
			if (f_d8d_a0_b()) {
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
		f_c09_a1_b(f_cb6_a0_o());
		if (!f_bb4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d87_a0_i());
		L0->SetNPCDescription(f_d85_a0_i());
		L0->SetPhoto(f_d89_a0_s());
		L0->SetPhoto2(f_d8b_a0_s());
		L0->SetPlayerName(f_1061_a0_i());
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
		f_bf8_a1_v(a0);
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
			f_69e_a1_v("Neutral");
			tv0->SetMessage(526079);
			tv0->ClearReplies();
			if (f_f14_a1_b(tv1) && f_f20_a1_b(tv1) && f_f2c_a1_b(tv1)) {
				tv0->AddReply(526080, 27367, 27366);
			}
			tv0->AddReply(526083, -1, 27369);
			tv0->AddReply(528852, -1, 30272);
			break;
			return;
		}
		if (f_d8d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c93_a1_v(tv2);
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

	void f_69e_a1_v(string a0)
	{
		if (!f_d8d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c9a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_caf_a0_v();
			if (a1 == 27366) {
				f_e11_a2_v(tv1, tv0);
			}
			if (a1 == 27368) {
				f_e17_a2_v(tv1, tv0);
			}
			if (a0 == 27365) {
				f_69e_a1_v("Neutral");
				tv0->SetMessage(526079);
				tv0->ClearReplies();
				if (f_f14_a1_b(tv1) && f_f20_a1_b(tv1) && f_f2c_a1_b(tv1)) {
					tv0->AddReply(526080, 27367, 27366);
				}
				tv0->AddReply(526083, -1, 27369);
				tv0->AddReply(528852, -1, 30272);
				return;
			}
			if (a0 == 27367) {
				f_69e_a1_v("Neutral");
				tv0->SetMessage(526081);
				tv0->ClearReplies();
				tv0->AddReply(528853, 30274, 30273);
				tv0->AddReply(528858, 30280, 30279);
				return;
			}
			if (a0 == 30280) {
				f_69e_a1_v("Neutral");
				tv0->SetMessage(528859);
				tv0->ClearReplies();
				tv0->AddReply(528860, 30277, 30281);
				return;
			}
			if (a0 == 30274) {
				f_69e_a1_v("Neutral");
				tv0->SetMessage(528854);
				tv0->ClearReplies();
				tv0->AddReply(528855, 30277, 30275);
				tv0->AddReply(528856, 30277, 30276);
				return;
			}
			if (a0 == 30277) {
				f_69e_a1_v("Neutral");
				tv0->SetMessage(528857);
				tv0->ClearReplies();
				tv0->AddReply(526082, -1, 27368);
				return;
			}
			tv3 = true;
			if (f_d8d_a0_b()) {
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
		f_c09_a1_b(f_cb6_a0_o());
		if (!f_bb4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d87_a0_i());
		L0->SetNPCDescription(f_d85_a0_i());
		L0->SetPhoto(f_d89_a0_s());
		L0->SetPhoto2(f_d8b_a0_s());
		L0->SetPlayerName(f_1061_a0_i());
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
		f_bf8_a1_v(a0);
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
			f_7f5_a1_v("Neutral");
			tv0->SetMessage(527588);
			tv0->ClearReplies();
			if (f_f44_a1_b(tv1) && f_f38_a1_b(tv1)) {
				tv0->AddReply(527592, 28936, 28935);
			}
			tv0->AddReply(527589, -1, 28932);
			break;
			return;
		}
		if (f_d8d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c93_a1_v(tv2);
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

	void f_7f5_a1_v(string a0)
	{
		if (!f_d8d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c9a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_caf_a0_v();
			if (a1 == 28935) {
				f_e59_a2_v(tv1, tv0);
			}
			if (a1 == 28947) {
				f_e26_a2_v(tv1, tv0);
			}
			if (a0 == 28931) {
				f_7f5_a1_v("Neutral");
				tv0->SetMessage(527588);
				tv0->ClearReplies();
				if (f_f44_a1_b(tv1) && f_f38_a1_b(tv1)) {
					tv0->AddReply(527592, 28936, 28935);
				}
				tv0->AddReply(527589, -1, 28932);
				return;
			}
			if (a0 == 28936) {
				f_7f5_a1_v("Neutral");
				tv0->SetMessage(527593);
				tv0->ClearReplies();
				tv0->AddReply(527594, 28938, 28937);
				tv0->AddReply(527609, 28954, 28953);
				return;
			}
			if (a0 == 28954) {
				f_7f5_a1_v("Neutral");
				tv0->SetMessage(527610);
				tv0->ClearReplies();
				tv0->AddReply(527611, 28940, 28955);
				return;
			}
			if (a0 == 28938) {
				f_7f5_a1_v("Neutral");
				tv0->SetMessage(527595);
				tv0->ClearReplies();
				tv0->AddReply(527596, 28940, 28939);
				return;
			}
			if (a0 == 28940) {
				f_7f5_a1_v("Neutral");
				tv0->SetMessage(527597);
				tv0->ClearReplies();
				tv0->AddReply(527598, 28942, 28941);
				return;
			}
			if (a0 == 28942) {
				f_7f5_a1_v("Neutral");
				tv0->SetMessage(527599);
				tv0->ClearReplies();
				tv0->AddReply(527600, 28944, 28943);
				return;
			}
			if (a0 == 28944) {
				f_7f5_a1_v("Neutral");
				tv0->SetMessage(527601);
				tv0->ClearReplies();
				tv0->AddReply(527602, 28946, 28945);
				return;
			}
			if (a0 == 28946) {
				f_7f5_a1_v("Neutral");
				tv0->SetMessage(527603);
				tv0->ClearReplies();
				tv0->AddReply(527604, -1, 28947);
				return;
			}
			tv3 = true;
			if (f_d8d_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t11
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_c09_a1_b(f_cb6_a0_o());
		if (!f_bb4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d87_a0_i());
		L0->SetNPCDescription(f_d85_a0_i());
		L0->SetPhoto(f_d89_a0_s());
		L0->SetPhoto2(f_d8b_a0_s());
		L0->SetPlayerName(f_1061_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t12{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bf8_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t12
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
			f_95c_a1_v("Neutral");
			tv0->SetMessage(539312);
			tv0->ClearReplies();
			tv0->AddReply(539313, -1, 41256);
			break;
			return;
		}
		if (f_d8d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c93_a1_v(tv2);
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

	void f_95c_a1_v(string a0)
	{
		if (!f_d8d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c9a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_caf_a0_v();
			if (a0 == 41255) {
				f_95c_a1_v("Neutral");
				tv0->SetMessage(539312);
				tv0->ClearReplies();
				tv0->AddReply(539313, -1, 41256);
				return;
			}
			tv3 = true;
			if (f_d8d_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t13
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_c09_a1_b(f_cb6_a0_o());
		if (!f_bb4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d87_a0_i());
		L0->SetNPCDescription(f_d85_a0_i());
		L0->SetPhoto(f_d89_a0_s());
		L0->SetPhoto2(f_d8b_a0_s());
		L0->SetPlayerName(f_1061_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t14{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bf8_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t14
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
			f_a22_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_d8d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c93_a1_v(tv2);
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

	void f_a22_a1_v(string a0)
	{
		if (!f_d8d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c9a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_caf_a0_v();
			if (a0 == 42548) {
				f_a22_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_d8d_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t15
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_a69_a0_v();
	}

	void f_a69_a0_v(void)
	{
		if (!f_baf_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_b1f_a0_v();
		}
	}

	bool f_a7d_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_ba6_a1_b(L0);
	}

	void f_a8c_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_a91_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_b6b_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_aa7_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_ab0_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_ab0_a0_v();
			if (f_baf_a0_b() && f_a91_a0_b()) {
				if (f_a7d_a0_b()) {
					f_c43_a1_b(f_cb6_a0_o());
				}
			} else {
				f_a8c_a0_v();
				f_aa7_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_b66_a0_v();
		f_ab0_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_ab0_a0_v();
		f_c93_a1_v("Neutral");
		f_aa7_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_aa7_a0_v();
		} else {
			f_c93_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_b66_a0_v();
			f_ba6_a1_b(a0);
			enable OnUse;
			f_1072_a1_v(a0);
			f_c93_a1_v("Neutral");
			f_ab0_a0_v();
			f_aa7_a0_v();
		}
	}
}

void f_b1f_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_baf_a0_b()) {
		return;
	}
	L0 = f_d74_a0_i();
	for (L1 = 0; L1 < 5 && f_baf_a0_b(); L1++) {
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
			@PlayAnimation("all", f_d6d_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_b64_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_b64_a0_b(void)
{
	return true;
}

void f_b66_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_b6b_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_b73_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_b7f_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_b73_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_cc6_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_b95_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_b9c_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_ba6_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_b9c_a1_b(L0);
}

bool f_baf_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_bb4_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_cbc_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_d8d_a0_b()) {
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

void f_bf8_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_d8d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_c09_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_c43_a1_b(a0)) {
			if (!f_c68_a1_b(a0)) {
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
		if (!f_c68_a1_b(a0)) {
			if (!f_c43_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_c43_a1_b(object a0)
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
	return f_ca0_a1_b(L4);
}

bool f_c68_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_d5e_a0_i() + "m";
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
	return f_ca0_a1_b(L4);
}

void f_c93_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_c9a_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_ca0_a1_b(string a0)
{
	if (f_d8d_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_caf_a0_v(void)
{
	if (f_d8d_a0_b()) {
		@lshStopSpeech();
	}
}

object f_cb6_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_cbc_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_cc6_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_cd1_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_cd6_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_ce1_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_ced_a2_v(object a0, int a1)
{
	f_b95_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_ce1_a2_v(L0, a1);
	}
}

void f_d00_a3_v(object a0, object a1, int a2)
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
		f_ce1_a2_v(L0, a2);
	}
}

void f_d13_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_d00_a3_v(a0, L0, a2);
}

bool f_d20_a2_b(object a0, float a1)
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
	f_d43_a1_v(a1);
	f_b7f_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_d43_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_d4d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_d59_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_d5e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_d67_a1_b(int a0)
{
	return f_d5e_a0_i() == a0;
}

string f_d6d_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_d74_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_d6d_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_d85_a0_i(void)
{
	return 515541;
}

int f_d87_a0_i(void)
{
	return 502866;
}

string f_d89_a0_s(void)
{
	return "ui/NPC_Lara.png";
}

string f_d8b_a0_s(void)
{
	return "ui/NPC_Lara_b.png";
}

bool f_d8d_a0_b(void)
{
	return true;
}

void f_d8f_a2_v(object a0, object a1)
{
	f_d20_a2_b(a0, 0.05000000074505806);
}

void f_d96_a2_v(object a0, object a1)
{
	@SetVariable("k2q02", 2);
	f_f9e_a0_v();
}

void f_d9f_a2_v(object a0, object a1)
{
	@SetVariable("ook2Lara1", 1);
}

void f_da5_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k2q03", 1);
	L0 = f_102f_a0_o();
	L0->AddMark("k2q03Arfist", "pt_map_k2q03_arfist", 0, 529268, f_d59_a0_f());
	f_fab_a0_v();
	f_fc5_a0_v();
	f_cd6_a1_o("quest_k2_03");
	f_d4d_a2_b("quest_k2_03", "place_arfist");
}

void f_dc8_a2_v(object a0, object a1)
{
	f_fb8_a0_v();
	f_d4d_a2_b("quest_k2_03", "completed");
}

void f_dd2_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k4q03", 1);
	L0 = f_102f_a0_o();
	L0->AddMark("k4q03LaraGotoAlexandr", "pt_map_alexandr", 0, 515280, f_d59_a0_f());
	f_fd2_a0_v();
	f_fec_a0_v();
	f_cd6_a1_o("quest_k4_03");
}

void f_df0_a2_v(object a0, object a1)
{
	@SetVariable("ook4Lara1", 1);
}

void f_df6_a2_v(object a0, object a1)
{
	@SetVariable("ook4Lara2", 1);
}

void f_dfc_a2_v(object a0, object a1)
{
	f_fdf_a0_v();
	f_d4d_a2_b("quest_k4_03", "completed");
}

void f_e06_a2_v(object a0, object a1)
{
	@Trace("smoked_meat2 is given");
	f_d13_a3_v(a0, "smoked_meat", 2);
}

void f_e11_a2_v(object a0, object a1)
{
	@SetVariable("ook6Lara1", 1);
}

void f_e17_a2_v(object a0, object a1)
{
	f_ff9_a0_v();
}

void f_e1c_a2_v(object a0, object a1)
{
	@Trace("money2000 is given");
	f_ced_a2_v(a0, 2000);
}

void f_e26_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("k11q01SoulCount", L0);
	@SetVariable("k11q01SoulCount", L0 + 1);
	if (L0 == 2) {
		f_f91_a0_v();
	} else {
		if (L0 == 3) {
			f_f84_a0_v();
		} else {
			if (L0 == 4) {
				f_f77_a0_v();
			} else {
				if (L0 == 5) {
					f_f6a_a0_v();
				} else {
					if (L0 == 6) {
						f_f5d_a0_v();
					} else {
						if (L0 == 7) {
							f_f50_a0_v();
						}
					}
				}
			}
		}
	}
}

void f_e59_a2_v(object a0, object a1)
{
	@SetVariable("ook11Lara1", 1);
}

void f_e5f_a2_v(object a0, object a1)
{
	f_1040_a3_v(f_102f_a0_o(), "pt_map_k2q03_arfist", 2);
	a1->ShowMap(f_102f_a0_o());
}

void f_e6f_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_e75_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_e7b_a2_v(object a0, object a1)
{
	@SetVariable("k2LaraVisit", 1);
}

void f_e81_a2_v(object a0, object a1)
{
	f_1040_a3_v(f_102f_a0_o(), "pt_map_alexandr", 2);
	a1->ShowMap(f_102f_a0_o());
}

void f_e91_a2_v(object a0, object a1)
{
	@Trace("etorfin is given");
	f_d13_a3_v(a0, "etorfin", 1);
}

bool f_e9c_a1_b(object a0)
{
	if (f_cd1_a1_i("k2q02") == 1) {
		return true;
	}
	return false;
}

bool f_ea8_a1_b(object a0)
{
	if (f_cd1_a1_i("ook2Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_eb4_a1_b(object a0)
{
	if (f_cd1_a1_i("k2q03") == 0) {
		return true;
	}
	return false;
}

bool f_ec0_a1_b(object a0)
{
	if (f_cd1_a1_i("k2q03") == 2) {
		return true;
	}
	return false;
}

bool f_ecc_a1_b(object a0)
{
	if (f_cd1_a1_i("k4q03") == 0) {
		return true;
	}
	return false;
}

bool f_ed8_a1_b(object a0)
{
	if (f_cd1_a1_i("ook4Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_ee4_a1_b(object a0)
{
	if (f_cd1_a1_i("k4q03") == 3) {
		return true;
	}
	return false;
}

bool f_ef0_a1_b(object a0)
{
	if (f_cd1_a1_i("k4q03") == 4) {
		return true;
	}
	return false;
}

bool f_efc_a1_b(object a0)
{
	if (f_cd1_a1_i("ook4Lara2") == 0) {
		return true;
	}
	return false;
}

bool f_f08_a1_b(object a0)
{
	if (f_cd1_a1_i("k4q03") == -1) {
		return true;
	}
	return false;
}

bool f_f14_a1_b(object a0)
{
	if (f_cd1_a1_i("k6q01") == 2) {
		return true;
	}
	return false;
}

bool f_f20_a1_b(object a0)
{
	if (f_cd1_a1_i("k6q01DankoPos") > 2) {
		return true;
	}
	return false;
}

bool f_f2c_a1_b(object a0)
{
	if (f_cd1_a1_i("ook6Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_f38_a1_b(object a0)
{
	if (f_cd1_a1_i("k11q01") == 9) {
		return true;
	}
	return false;
}

bool f_f44_a1_b(object a0)
{
	if (f_cd1_a1_i("ook11Lara1") == 0) {
		return true;
	}
	return false;
}

void f_f50_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 498, 1, 528065);
	f_1013_a2_b(L0, 480);
}

void f_f5d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 497, 1, 528064);
	f_1013_a2_b(L0, 480);
}

void f_f6a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 496, 1, 528063);
	f_1013_a2_b(L0, 480);
}

void f_f77_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 495, 1, 528062);
	f_1013_a2_b(L0, 480);
}

void f_f84_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 494, 1, 528061);
	f_1013_a2_b(L0, 480);
}

void f_f91_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 493, 1, 528060);
	f_1013_a2_b(L0, 480);
}

void f_f9e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 472, 2, 527788);
	f_1013_a2_b(L0, 470);
}

void f_fab_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 476, 2, 527792);
	f_1013_a2_b(L0, -1);
}

void f_fb8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 479, 2, 527795);
	f_1013_a2_b(L0, 476);
}

void f_fc5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 477, 2, 527793);
	f_1013_a2_b(L0, 476);
}

void f_fd2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 384, 2, 525822);
	f_1013_a2_b(L0, -1);
}

void f_fdf_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 387, 2, 525825);
	f_1013_a2_b(L0, 384);
}

void f_fec_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 385, 2, 525823);
	f_1013_a2_b(L0, 384);
}

void f_ff9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 413, 1, 526114);
	f_1013_a2_b(L0, 408);
}

object f_1006_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1013_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1006_a0_o();
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

object f_102f_a0_o(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("Can't find main outdoor scene");
		L1 = null;
		return L1;
	}
	L0->GetMap(L1);
	return L1;
}

void f_1040_a3_v(object a0, string a1, float a2)
{
	Vector L0;
	Vector L1;
	object L2;
	bool L3;
	@GetMainOutdoorScene(L2);
	if (L2 == null) {
		@Trace("Can't find main outdoor scene");
		return;
	}
	L2->GetLocator(a1, L3, L0, L1);
	if (!L3) {
		@Trace("Warning: outdoor scene locator " + a1 + " doesnt exist");
	}
	L2->GetMap(a0);
	if (a0 == null) {
		@Trace("Can't find map");
		return;
	}
	a0->SetMapParams(L0.x, L0.z, a2);
}

int f_1061_a0_i(void)
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

void f_1072_a1_v(object a0)
{
	if (!g1) {
		t3{a0};
		g1 = true;
	}
	if (f_d67_a1_b(2)) {
		t1{a0};
		return;
	}
	if (f_d67_a1_b(4)) {
		t5{a0};
		return;
	}
	if (f_d67_a1_b(6)) {
		t7{a0};
		return;
	}
	if (f_d67_a1_b(11)) {
		t9{a0};
		return;
	}
	if (f_d67_a1_b(12)) {
		t11{a0};
		return;
	}
	t13{a0};
}

