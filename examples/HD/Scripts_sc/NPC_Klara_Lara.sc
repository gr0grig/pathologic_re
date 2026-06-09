event evt_11 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;

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
		if (!f_ccc_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eb3_a0_i());
		L0->SetNPCDescription(f_eb1_a0_i());
		L0->SetPhoto(f_eb5_a0_s());
		L0->SetPhoto2(f_eb7_a0_s());
		L0->SetPlayerName(f_1193_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_d23_a1_b(f_de2_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d11_a1_v(a0);
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
			if (f_fda_a1_b(tv1) && !f_fce_a1_b(tv1)) {
				f_ecb_a2_v(tv1, tv0);
				f_fa7_a2_v(tv1, tv0);
				f_e0_a1_v("Neutral");
				tv0->SetMessage(525316);
				tv0->ClearReplies();
				tv0->AddReply(525317, 41305, 26685);
				tv0->AddReply(539381, -1, 41304);
				break;
			}
			f_e0_a1_v("Neutral");
			tv0->SetMessage(525286);
			tv0->ClearReplies();
			if (f_fce_a1_b(tv1)) {
				tv0->AddReply(525292, 44884, 26660);
			}
			if (f_fe6_a1_b(tv1) && !f_fda_a1_b(tv1)) {
				tv0->AddReply(525325, 42565, 26693);
			}
			if (f_ff2_a1_b(tv1)) {
				tv0->AddReply(525334, 26703, 26702);
			}
			tv0->AddReply(525295, -1, 26663);
			tv0->AddReply(529185, -1, 30635);
			break;
			return;
		}
		if (f_eb9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dad_a1_v(tv2);
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

	void f_e0_a1_v(string a0)
	{
		if (!f_eb9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_dbd_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ddb_a0_v();
			if (a1 == 26691) {
				f_ed1_a2_v(tv1, tv0);
				f_f8b_a2_v(tv1, tv0);
			}
			if (a1 == 41323) {
				f_ed1_a2_v(tv1, tv0);
				f_f8b_a2_v(tv1, tv0);
			}
			if (a1 == 41324) {
				f_ed1_a2_v(tv1, tv0);
				f_f8b_a2_v(tv1, tv0);
			}
			if (a1 == 26662) {
				f_ec2_a2_v(tv1, tv0);
			}
			if (a1 == 26695) {
				f_ed1_a2_v(tv1, tv0);
				f_f8b_a2_v(tv1, tv0);
			}
			if (a1 == 41327) {
				f_ed1_a2_v(tv1, tv0);
				f_f8b_a2_v(tv1, tv0);
			}
			if (a1 == 26704) {
				f_ef4_a2_v(tv1, tv0);
				f_f9b_a2_v(tv1, tv0);
				f_f48_a2_v(tv1, tv0);
			}
			if (a1 == 41332) {
				f_ef4_a2_v(tv1, tv0);
				f_ebb_a2_v(tv1, tv0);
			}
			if (a0 == 26684) {
				if (f_fda_a1_b(tv1) && !f_fce_a1_b(tv1)) {
					f_ecb_a2_v(tv1, tv0);
					f_fa7_a2_v(tv1, tv0);
					f_e0_a1_v("Neutral");
					tv0->SetMessage(525316);
					tv0->ClearReplies();
					tv0->AddReply(525317, 41305, 26685);
					tv0->AddReply(539381, -1, 41304);
					return;
				}
				f_e0_a1_v("Neutral");
				tv0->SetMessage(525286);
				tv0->ClearReplies();
				if (f_fce_a1_b(tv1)) {
					tv0->AddReply(525292, 44884, 26660);
				}
				if (f_fe6_a1_b(tv1) && !f_fda_a1_b(tv1)) {
					tv0->AddReply(525325, 42565, 26693);
				}
				if (f_ff2_a1_b(tv1)) {
					tv0->AddReply(525334, 26703, 26702);
				}
				tv0->AddReply(525295, -1, 26663);
				tv0->AddReply(529185, -1, 30635);
				return;
			}
			if (a0 == 26703) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(525335);
				tv0->ClearReplies();
				tv0->AddReply(539400, 41330, 41328);
				tv0->AddReply(539401, 41330, 41329);
				return;
			}
			if (a0 == 41330) {
				f_e0_a1_v("Sympathy");
				tv0->SetMessage(539402);
				tv0->ClearReplies();
				tv0->AddReply(525336, -1, 26704);
				tv0->AddReply(539403, -1, 41332);
				return;
			}
			if (a0 == 42565) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(540556);
				tv0->ClearReplies();
				tv0->AddReply(540557, 26694, 42566);
				return;
			}
			if (a0 == 26694) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(525326);
				tv0->ClearReplies();
				tv0->AddReply(539397, 41326, 41325);
				tv0->AddReply(539399, -1, 41327);
				return;
			}
			if (a0 == 41326) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(539398);
				tv0->ClearReplies();
				tv0->AddReply(525327, -1, 26695);
				return;
			}
			if (a0 == 44884) {
				f_e0_a1_v("Fear");
				tv0->SetMessage(542495);
				tv0->ClearReplies();
				tv0->AddReply(542496, 44887, 44885);
				tv0->AddReply(542497, 44888, 44886);
				return;
			}
			if (a0 == 44888) {
				f_e0_a1_v("Confusion");
				tv0->SetMessage(542499);
				tv0->ClearReplies();
				tv0->AddReply(542502, 44890, 44891);
				tv0->AddReply(542505, 44890, 44895);
				return;
			}
			if (a0 == 44887) {
				f_e0_a1_v("Fear");
				tv0->SetMessage(542498);
				tv0->ClearReplies();
				tv0->AddReply(542500, 44890, 44889);
				return;
			}
			if (a0 == 44890) {
				f_e0_a1_v("Confusion");
				tv0->SetMessage(542501);
				tv0->ClearReplies();
				tv0->AddReply(542503, 26661, 44893);
				tv0->AddReply(542504, 26661, 44894);
				return;
			}
			if (a0 == 26661) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(525293);
				tv0->ClearReplies();
				tv0->AddReply(529186, 30637, 30636);
				return;
			}
			if (a0 == 30637) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(529187);
				tv0->ClearReplies();
				tv0->AddReply(525294, -1, 26662);
				return;
			}
			if (a0 == 41305) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(539382);
				tv0->ClearReplies();
				tv0->AddReply(539383, 41307, 41306);
				tv0->AddReply(539387, 41312, 41310);
				tv0->AddReply(539386, 26686, 41309);
				return;
			}
			if (a0 == 41307) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(539384);
				tv0->ClearReplies();
				tv0->AddReply(539388, 41312, 41311);
				tv0->AddReply(539385, 26686, 41308);
				return;
			}
			if (a0 == 41312) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(539389);
				tv0->ClearReplies();
				tv0->AddReply(539390, 26686, 41313);
				tv0->AddReply(539391, 26686, 41316);
				return;
			}
			if (a0 == 26686) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(525318);
				tv0->ClearReplies();
				tv0->AddReply(525319, 26688, 26687);
				tv0->AddReply(539392, 41321, 41319);
				return;
			}
			if (a0 == 41321) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(539394);
				tv0->ClearReplies();
				tv0->AddReply(539395, -1, 41323);
				tv0->AddReply(539396, -1, 41324);
				return;
			}
			if (a0 == 26688) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(525320);
				tv0->ClearReplies();
				tv0->AddReply(525321, 26690, 26689);
				tv0->AddReply(541566, 43739, 43738);
				tv0->AddReply(539393, 41321, 41320);
				return;
			}
			if (a0 == 43739) {
				f_e0_a1_v("Fear");
				tv0->SetMessage(541567);
				tv0->ClearReplies();
				tv0->AddReply(541568, 43741, 43740);
				return;
			}
			if (a0 == 43741) {
				f_e0_a1_v("Neutral");
				tv0->SetMessage(541569);
				tv0->ClearReplies();
				tv0->AddReply(541570, 26690, 43742);
				return;
			}
			if (a0 == 26690) {
				f_e0_a1_v("Confusion");
				tv0->SetMessage(525322);
				tv0->ClearReplies();
				tv0->AddReply(525323, -1, 26691);
				tv0->AddReply(525324, -1, 26692);
				return;
			}
			tv3 = true;
			if (f_eb9_a0_b()) {
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
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_ccc_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eb3_a0_i());
		L0->SetNPCDescription(f_eb1_a0_i());
		L0->SetPhoto(f_eb5_a0_s());
		L0->SetPhoto2(f_eb7_a0_s());
		L0->SetPlayerName(f_1193_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_d23_a1_b(f_de2_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d11_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t3
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
			f_41b_a1_v("Neutral");
			tv0->SetMessage(525495);
			tv0->ClearReplies();
			tv0->AddReply(525496, -1, 26852);
			tv0->AddReply(529314, -1, 30768);
			break;
			return;
		}
		if (f_eb9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dad_a1_v(tv2);
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

	void f_41b_a1_v(string a0)
	{
		if (!f_eb9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_dbd_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ddb_a0_v();
			if (a0 == 26851) {
				f_41b_a1_v("Neutral");
				tv0->SetMessage(525495);
				tv0->ClearReplies();
				tv0->AddReply(525496, -1, 26852);
				tv0->AddReply(529314, -1, 30768);
				return;
			}
			tv3 = true;
			if (f_eb9_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t4
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_ccc_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eb3_a0_i());
		L0->SetNPCDescription(f_eb1_a0_i());
		L0->SetPhoto(f_eb5_a0_s());
		L0->SetPhoto2(f_eb7_a0_s());
		L0->SetPlayerName(f_1193_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_d23_a1_b(f_de2_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d11_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t5
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
			if (f_100a_a1_b(tv1)) {
				f_f1c_a2_v(tv1, tv0);
				f_fad_a2_v(tv1, tv0);
				f_538_a1_v("Neutral");
				tv0->SetMessage(525791);
				tv0->ClearReplies();
				tv0->AddReply(529235, 30690, 30689);
				break;
			}
			f_538_a1_v("Neutral");
			tv0->SetMessage(525796);
			tv0->ClearReplies();
			if (f_ffe_a1_b(tv1)) {
				tv0->AddReply(525797, 27105, 27103);
			}
			if (f_1016_a1_b(tv1)) {
				tv0->AddReply(525813, 27120, 27119);
			}
			if (f_1022_a1_b(tv1) && f_102e_a1_b(tv1) || f_103a_a1_b(tv1) && f_102e_a1_b(tv1)) {
				tv0->AddReply(525819, 27126, 27125);
			}
			tv0->AddReply(525798, -1, 27104);
			break;
			return;
		}
		if (f_eb9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dad_a1_v(tv2);
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

	void f_538_a1_v(string a0)
	{
		if (!f_eb9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_dbd_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ddb_a0_v();
			if (a1 == 27101) {
				f_efe_a2_v(tv1, tv0);
				f_fb3_a2_v(tv1, tv0);
			}
			if (a1 == 27106) {
				f_efe_a2_v(tv1, tv0);
				f_fb3_a2_v(tv1, tv0);
			}
			if (a1 == 27121) {
				f_f28_a2_v(tv1, tv0);
				f_fc3_a2_v(tv1, tv0);
				f_f32_a2_v(tv1, tv0);
				f_fa1_a2_v(tv1, tv0);
			}
			if (a1 == 27125) {
				f_f22_a2_v(tv1, tv0);
			}
			if (a0 == 27097) {
				if (f_100a_a1_b(tv1)) {
					f_f1c_a2_v(tv1, tv0);
					f_fad_a2_v(tv1, tv0);
					f_538_a1_v("Neutral");
					tv0->SetMessage(525791);
					tv0->ClearReplies();
					tv0->AddReply(529235, 30690, 30689);
					return;
				}
				f_538_a1_v("Neutral");
				tv0->SetMessage(525796);
				tv0->ClearReplies();
				if (f_ffe_a1_b(tv1)) {
					tv0->AddReply(525797, 27105, 27103);
				}
				if (f_1016_a1_b(tv1)) {
					tv0->AddReply(525813, 27120, 27119);
				}
				if (f_1022_a1_b(tv1) && f_102e_a1_b(tv1) || f_103a_a1_b(tv1) && f_102e_a1_b(tv1)) {
					tv0->AddReply(525819, 27126, 27125);
				}
				tv0->AddReply(525798, -1, 27104);
				return;
			}
			if (a0 == 27126) {
				f_538_a1_v("Confusion");
				tv0->SetMessage(525820);
				tv0->ClearReplies();
				tv0->AddReply(525821, -1, 27127);
				return;
			}
			if (a0 == 27120) {
				f_538_a1_v("Sympathy");
				tv0->SetMessage(525814);
				tv0->ClearReplies();
				tv0->AddReply(525815, -1, 27121);
				return;
			}
			if (a0 == 27105) {
				f_538_a1_v("Sympathy");
				tv0->SetMessage(525799);
				tv0->ClearReplies();
				tv0->AddReply(525800, -1, 27106);
				return;
			}
			if (a0 == 30690) {
				f_538_a1_v("Confusion");
				tv0->SetMessage(529236);
				tv0->ClearReplies();
				tv0->AddReply(529237, 30692, 30691);
				return;
			}
			if (a0 == 30692) {
				f_538_a1_v("Confusion");
				tv0->SetMessage(529238);
				tv0->ClearReplies();
				tv0->AddReply(525792, 27100, 27098);
				tv0->AddReply(525793, -1, 27099);
				return;
			}
			if (a0 == 27100) {
				f_538_a1_v("Sympathy");
				tv0->SetMessage(525794);
				tv0->ClearReplies();
				tv0->AddReply(525795, -1, 27101);
				return;
			}
			tv3 = true;
			if (f_eb9_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t6
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_ccc_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eb3_a0_i());
		L0->SetNPCDescription(f_eb1_a0_i());
		L0->SetPhoto(f_eb5_a0_s());
		L0->SetPhoto2(f_eb7_a0_s());
		L0->SetPlayerName(f_1193_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_d23_a1_b(f_de2_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d11_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t7
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
			f_71b_a1_v("Neutral");
			tv0->SetMessage(526079);
			tv0->ClearReplies();
			if (f_1046_a1_b(tv1) && f_1052_a1_b(tv1) && f_105e_a1_b(tv1)) {
				tv0->AddReply(526080, 27367, 27366);
			}
			tv0->AddReply(526083, -1, 27369);
			tv0->AddReply(528852, -1, 30272);
			break;
			return;
		}
		if (f_eb9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dad_a1_v(tv2);
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

	void f_71b_a1_v(string a0)
	{
		if (!f_eb9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_dbd_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ddb_a0_v();
			if (a1 == 27366) {
				f_f3d_a2_v(tv1, tv0);
			}
			if (a1 == 27368) {
				f_f43_a2_v(tv1, tv0);
			}
			if (a0 == 27365) {
				f_71b_a1_v("Neutral");
				tv0->SetMessage(526079);
				tv0->ClearReplies();
				if (f_1046_a1_b(tv1) && f_1052_a1_b(tv1) && f_105e_a1_b(tv1)) {
					tv0->AddReply(526080, 27367, 27366);
				}
				tv0->AddReply(526083, -1, 27369);
				tv0->AddReply(528852, -1, 30272);
				return;
			}
			if (a0 == 27367) {
				f_71b_a1_v("Fear");
				tv0->SetMessage(526081);
				tv0->ClearReplies();
				tv0->AddReply(528853, 30274, 30273);
				tv0->AddReply(528858, 30280, 30279);
				return;
			}
			if (a0 == 30280) {
				f_71b_a1_v("Fear");
				tv0->SetMessage(528859);
				tv0->ClearReplies();
				tv0->AddReply(528860, 30277, 30281);
				return;
			}
			if (a0 == 30274) {
				f_71b_a1_v("Neutral");
				tv0->SetMessage(528854);
				tv0->ClearReplies();
				tv0->AddReply(528855, 30277, 30275);
				tv0->AddReply(528856, 30277, 30276);
				return;
			}
			if (a0 == 30277) {
				f_71b_a1_v("Neutral");
				tv0->SetMessage(528857);
				tv0->ClearReplies();
				tv0->AddReply(526082, -1, 27368);
				return;
			}
			tv3 = true;
			if (f_eb9_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t8
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_ccc_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eb3_a0_i());
		L0->SetNPCDescription(f_eb1_a0_i());
		L0->SetPhoto(f_eb5_a0_s());
		L0->SetPhoto2(f_eb7_a0_s());
		L0->SetPlayerName(f_1193_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_d23_a1_b(f_de2_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d11_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t9
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
			f_872_a1_v("Neutral");
			tv0->SetMessage(527588);
			tv0->ClearReplies();
			if (f_1076_a1_b(tv1) && f_106a_a1_b(tv1)) {
				tv0->AddReply(527592, 28936, 28935);
			}
			tv0->AddReply(527589, -1, 28932);
			break;
			return;
		}
		if (f_eb9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dad_a1_v(tv2);
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

	void f_872_a1_v(string a0)
	{
		if (!f_eb9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_dbd_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ddb_a0_v();
			if (a1 == 28935) {
				f_f85_a2_v(tv1, tv0);
			}
			if (a1 == 28947) {
				f_f52_a2_v(tv1, tv0);
			}
			if (a0 == 28931) {
				f_872_a1_v("Neutral");
				tv0->SetMessage(527588);
				tv0->ClearReplies();
				if (f_1076_a1_b(tv1) && f_106a_a1_b(tv1)) {
					tv0->AddReply(527592, 28936, 28935);
				}
				tv0->AddReply(527589, -1, 28932);
				return;
			}
			if (a0 == 28936) {
				f_872_a1_v("Fear");
				tv0->SetMessage(527593);
				tv0->ClearReplies();
				tv0->AddReply(527594, 28938, 28937);
				tv0->AddReply(527609, 28954, 28953);
				return;
			}
			if (a0 == 28954) {
				f_872_a1_v("Neutral");
				tv0->SetMessage(527610);
				tv0->ClearReplies();
				tv0->AddReply(527611, 28940, 28955);
				return;
			}
			if (a0 == 28938) {
				f_872_a1_v("Sympathy");
				tv0->SetMessage(527595);
				tv0->ClearReplies();
				tv0->AddReply(527596, 28940, 28939);
				return;
			}
			if (a0 == 28940) {
				f_872_a1_v("Neutral");
				tv0->SetMessage(527597);
				tv0->ClearReplies();
				tv0->AddReply(527598, 28942, 28941);
				return;
			}
			if (a0 == 28942) {
				f_872_a1_v("Neutral");
				tv0->SetMessage(527599);
				tv0->ClearReplies();
				tv0->AddReply(527600, 28944, 28943);
				return;
			}
			if (a0 == 28944) {
				f_872_a1_v("Sympathy");
				tv0->SetMessage(527601);
				tv0->ClearReplies();
				tv0->AddReply(527602, 28946, 28945);
				return;
			}
			if (a0 == 28946) {
				f_872_a1_v("Sympathy");
				tv0->SetMessage(527603);
				tv0->ClearReplies();
				tv0->AddReply(527604, -1, 28947);
				return;
			}
			tv3 = true;
			if (f_eb9_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t10
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_ccc_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eb3_a0_i());
		L0->SetNPCDescription(f_eb1_a0_i());
		L0->SetPhoto(f_eb5_a0_s());
		L0->SetPhoto2(f_eb7_a0_s());
		L0->SetPlayerName(f_1193_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_d23_a1_b(f_de2_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d11_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t11
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
			f_9e3_a1_v("Tiredness");
			tv0->SetMessage(539312);
			tv0->ClearReplies();
			tv0->AddReply(542603, 45006, 45004);
			tv0->AddReply(539313, -1, 41256);
			tv0->AddReply(542604, -1, 45005);
			break;
			return;
		}
		if (f_eb9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dad_a1_v(tv2);
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

	void f_9e3_a1_v(string a0)
	{
		if (!f_eb9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_dbd_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ddb_a0_v();
			if (a0 == 41255) {
				f_9e3_a1_v("Tiredness");
				tv0->SetMessage(539312);
				tv0->ClearReplies();
				tv0->AddReply(542603, 45006, 45004);
				tv0->AddReply(539313, -1, 41256);
				tv0->AddReply(542604, -1, 45005);
				return;
			}
			if (a0 == 45006) {
				f_9e3_a1_v("Confusion");
				tv0->SetMessage(542605);
				tv0->ClearReplies();
				tv0->AddReply(542606, 45011, 45007);
				tv0->AddReply(542607, 45009, 45008);
				return;
			}
			if (a0 == 45009) {
				f_9e3_a1_v("Neutral");
				tv0->SetMessage(542608);
				tv0->ClearReplies();
				tv0->AddReply(542609, -1, 45010);
				return;
			}
			if (a0 == 45011) {
				f_9e3_a1_v("Sympathy");
				tv0->SetMessage(542610);
				tv0->ClearReplies();
				tv0->AddReply(542611, 45014, 45012);
				tv0->AddReply(542612, 45020, 45013);
				return;
			}
			if (a0 == 45014) {
				f_9e3_a1_v("Sympathy");
				tv0->SetMessage(542613);
				tv0->ClearReplies();
				tv0->AddReply(542614, 45016, 45015);
				return;
			}
			if (a0 == 45016) {
				f_9e3_a1_v("Sympathy");
				tv0->SetMessage(542615);
				tv0->ClearReplies();
				tv0->AddReply(542616, 45018, 45017);
				return;
			}
			if (a0 == 45018) {
				f_9e3_a1_v("Neutral");
				tv0->SetMessage(542617);
				tv0->ClearReplies();
				tv0->AddReply(542618, 45020, 45019);
				return;
			}
			if (a0 == 45020) {
				f_9e3_a1_v("Neutral");
				tv0->SetMessage(542619);
				tv0->ClearReplies();
				tv0->AddReply(542620, -1, 45022);
				tv0->AddReply(542621, -1, 45023);
				return;
			}
			tv3 = true;
			if (f_eb9_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t12
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_ccc_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eb3_a0_i());
		L0->SetNPCDescription(f_eb1_a0_i());
		L0->SetPhoto(f_eb5_a0_s());
		L0->SetPhoto2(f_eb7_a0_s());
		L0->SetPlayerName(f_1193_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_d23_a1_b(f_de2_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d11_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t13
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
			f_b40_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_eb9_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dad_a1_v(tv2);
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

	void f_b40_a1_v(string a0)
	{
		if (!f_eb9_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_dbd_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ddb_a0_v();
			if (a0 == 42548) {
				f_b40_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_eb9_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t14
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_b87_a0_v();
	}

	void f_b87_a0_v(void)
	{
		if (!f_cc7_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_c37_a0_v();
		}
	}

	bool f_b95_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_cbe_a1_b(L0);
	}

	void f_ba4_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_ba9_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_c83_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_bbf_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_bc8_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_bc8_a0_v();
			if (f_cc7_a0_b() && f_ba9_a0_b()) {
				if (f_b95_a0_b()) {
					f_d5d_a1_b(f_de2_a0_o());
				}
			} else {
				f_ba4_a0_v();
				f_bbf_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_c7e_a0_v();
		f_bc8_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_bc8_a0_v();
		f_dad_a1_v("Neutral");
		f_bbf_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_bbf_a0_v();
		} else {
			f_dad_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_c7e_a0_v();
			f_cbe_a1_b(a0);
			enable OnUse;
			f_11a4_a1_v(a0);
			f_dad_a1_v("Neutral");
			f_bc8_a0_v();
			f_bbf_a0_v();
		}
	}
}

void f_c37_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_cc7_a0_b()) {
		return;
	}
	L0 = f_ea0_a0_i();
	for (L1 = 0; L1 < 5 && f_cc7_a0_b(); L1++) {
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
			@PlayAnimation("all", f_e99_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_c7c_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_c7c_a0_b(void)
{
	return true;
}

void f_c7e_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_c83_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_c8b_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_c97_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_c8b_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_df2_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_cad_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_cb4_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_cbe_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_cb4_a1_b(L0);
}

bool f_cc7_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_ccc_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_de8_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_eb9_a0_b()) {
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

void f_d11_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_eb9_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_d23_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_d5d_a1_b(a0)) {
			if (!f_d82_a1_b(a0)) {
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
		if (!f_d82_a1_b(a0)) {
			if (!f_d5d_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_d5d_a1_b(object a0)
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
	return f_dcc_a1_b(L4);
}

bool f_d82_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_e8a_a0_i() + "m";
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
	return f_dcc_a1_b(L4);
}

void f_dad_a1_v(string a0)
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

void f_dbd_a2_v(string a0, bool a1)
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

bool f_dcc_a1_b(string a0)
{
	if (f_eb9_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_ddb_a0_v(void)
{
	if (f_eb9_a0_b()) {
		@lshStopSpeech();
	}
}

object f_de2_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_de8_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_df2_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_dfd_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_e02_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_e0d_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_e19_a2_v(object a0, int a1)
{
	f_cad_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_e0d_a2_v(L0, a1);
	}
}

void f_e2c_a3_v(object a0, object a1, int a2)
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
		f_e0d_a2_v(L0, a2);
	}
}

void f_e3f_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_e2c_a3_v(a0, L0, a2);
}

bool f_e4c_a2_b(object a0, float a1)
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
	f_e6f_a1_v(a1);
	f_c97_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_e6f_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_e79_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_e85_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_e8a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_e93_a1_b(int a0)
{
	return f_e8a_a0_i() == a0;
}

string f_e99_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_ea0_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_e99_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_eb1_a0_i(void)
{
	return 515541;
}

int f_eb3_a0_i(void)
{
	return 502866;
}

string f_eb5_a0_s(void)
{
	return "ui/NPC_Lara.png";
}

string f_eb7_a0_s(void)
{
	return "ui/NPC_Lara_b.png";
}

bool f_eb9_a0_b(void)
{
	return true;
}

void f_ebb_a2_v(object a0, object a1)
{
	f_e4c_a2_b(a0, 0.05000000074505806);
}

void f_ec2_a2_v(object a0, object a1)
{
	@SetVariable("k2q02", 2);
	f_10d0_a0_v();
}

void f_ecb_a2_v(object a0, object a1)
{
	@SetVariable("ook2Lara1", 1);
}

void f_ed1_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k2q03", 1);
	L0 = f_1161_a0_o();
	L0->AddMark("k2q03Arfist", "pt_map_k2q03_arfist", 0, 529268, f_e85_a0_f());
	f_10dd_a0_v();
	f_10f7_a0_v();
	f_e02_a1_o("quest_k2_03");
	f_e79_a2_b("quest_k2_03", "place_arfist");
}

void f_ef4_a2_v(object a0, object a1)
{
	f_10ea_a0_v();
	f_e79_a2_b("quest_k2_03", "completed");
}

void f_efe_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k4q03", 1);
	L0 = f_1161_a0_o();
	L0->AddMark("k4q03LaraGotoAlexandr", "pt_map_alexandr", 0, 515280, f_e85_a0_f());
	f_1104_a0_v();
	f_111e_a0_v();
	f_e02_a1_o("quest_k4_03");
}

void f_f1c_a2_v(object a0, object a1)
{
	@SetVariable("ook4Lara1", 1);
}

void f_f22_a2_v(object a0, object a1)
{
	@SetVariable("ook4Lara2", 1);
}

void f_f28_a2_v(object a0, object a1)
{
	f_1111_a0_v();
	f_e79_a2_b("quest_k4_03", "completed");
}

void f_f32_a2_v(object a0, object a1)
{
	@Trace("smoked_meat2 is given");
	f_e3f_a3_v(a0, "smoked_meat", 2);
}

void f_f3d_a2_v(object a0, object a1)
{
	@SetVariable("ook6Lara1", 1);
}

void f_f43_a2_v(object a0, object a1)
{
	f_112b_a0_v();
}

void f_f48_a2_v(object a0, object a1)
{
	@Trace("money2000 is given");
	f_e19_a2_v(a0, 2000);
}

void f_f52_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("k11q01SoulCount", L0);
	L0 = L0 + 1;
	@SetVariable("k11q01SoulCount", L0);
	if (L0 == 2) {
		f_10c3_a0_v();
	} else {
		if (L0 == 3) {
			f_10b6_a0_v();
		} else {
			if (L0 == 4) {
				f_10a9_a0_v();
			} else {
				if (L0 == 5) {
					f_109c_a0_v();
				} else {
					if (L0 == 6) {
						f_108f_a0_v();
					} else {
						if (L0 == 7) {
							f_1082_a0_v();
						}
					}
				}
			}
		}
	}
}

void f_f85_a2_v(object a0, object a1)
{
	@SetVariable("ook11Lara1", 1);
}

void f_f8b_a2_v(object a0, object a1)
{
	f_1172_a3_v(f_1161_a0_o(), "pt_map_k2q03_arfist", 2);
	a1->ShowMap(f_1161_a0_o());
}

void f_f9b_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_fa1_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_fa7_a2_v(object a0, object a1)
{
	@SetVariable("k2LaraVisit", 1);
}

void f_fad_a2_v(object a0, object a1)
{
	@SetVariable("k4LaraVisit", 1);
}

void f_fb3_a2_v(object a0, object a1)
{
	f_1172_a3_v(f_1161_a0_o(), "pt_map_alexandr", 2);
	a1->ShowMap(f_1161_a0_o());
}

void f_fc3_a2_v(object a0, object a1)
{
	@Trace("etorfin is given");
	f_e3f_a3_v(a0, "etorfin", 1);
}

bool f_fce_a1_b(object a0)
{
	if (f_dfd_a1_i("k2q02") == 1) {
		return true;
	}
	return false;
}

bool f_fda_a1_b(object a0)
{
	if (f_dfd_a1_i("ook2Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_fe6_a1_b(object a0)
{
	if (f_dfd_a1_i("k2q03") == 0) {
		return true;
	}
	return false;
}

bool f_ff2_a1_b(object a0)
{
	if (f_dfd_a1_i("k2q03") == 2) {
		return true;
	}
	return false;
}

bool f_ffe_a1_b(object a0)
{
	if (f_dfd_a1_i("k4q03") == 0) {
		return true;
	}
	return false;
}

bool f_100a_a1_b(object a0)
{
	if (f_dfd_a1_i("ook4Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_1016_a1_b(object a0)
{
	if (f_dfd_a1_i("k4q03") == 3) {
		return true;
	}
	return false;
}

bool f_1022_a1_b(object a0)
{
	if (f_dfd_a1_i("k4q03") == 4) {
		return true;
	}
	return false;
}

bool f_102e_a1_b(object a0)
{
	if (f_dfd_a1_i("ook4Lara2") == 0) {
		return true;
	}
	return false;
}

bool f_103a_a1_b(object a0)
{
	if (f_dfd_a1_i("k4q03") == -1) {
		return true;
	}
	return false;
}

bool f_1046_a1_b(object a0)
{
	if (f_dfd_a1_i("k6q01") == 2) {
		return true;
	}
	return false;
}

bool f_1052_a1_b(object a0)
{
	if (f_dfd_a1_i("k6q01DankoPos") > 2) {
		return true;
	}
	return false;
}

bool f_105e_a1_b(object a0)
{
	if (f_dfd_a1_i("ook6Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_106a_a1_b(object a0)
{
	if (f_dfd_a1_i("k11q01") == 9) {
		return true;
	}
	return false;
}

bool f_1076_a1_b(object a0)
{
	if (f_dfd_a1_i("ook11Lara1") == 0) {
		return true;
	}
	return false;
}

void f_1082_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 498, 1, 528065);
	f_1145_a2_b(L0, 480);
}

void f_108f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 497, 1, 528064);
	f_1145_a2_b(L0, 480);
}

void f_109c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 496, 1, 528063);
	f_1145_a2_b(L0, 480);
}

void f_10a9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 495, 1, 528062);
	f_1145_a2_b(L0, 480);
}

void f_10b6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 494, 1, 528061);
	f_1145_a2_b(L0, 480);
}

void f_10c3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 493, 1, 528060);
	f_1145_a2_b(L0, 480);
}

void f_10d0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 472, 2, 527788);
	f_1145_a2_b(L0, 470);
}

void f_10dd_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 476, 2, 527792);
	f_1145_a2_b(L0, -1);
}

void f_10ea_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 479, 2, 527795);
	f_1145_a2_b(L0, 476);
}

void f_10f7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 477, 2, 527793);
	f_1145_a2_b(L0, 476);
}

void f_1104_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 384, 2, 525822);
	f_1145_a2_b(L0, -1);
}

void f_1111_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 387, 2, 525825);
	f_1145_a2_b(L0, 384);
}

void f_111e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 385, 2, 525823);
	f_1145_a2_b(L0, 384);
}

void f_112b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 413, 1, 526114);
	f_1145_a2_b(L0, 408);
}

object f_1138_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1145_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1138_a0_o();
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

object f_1161_a0_o(void)
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

void f_1172_a3_v(object a0, string a1, float a2)
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

int f_1193_a0_i(void)
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

void f_11a4_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_e93_a1_b(2)) {
		t0{a0};
		return;
	}
	if (f_e93_a1_b(4)) {
		t4{a0};
		return;
	}
	if (f_e93_a1_b(6)) {
		t6{a0};
		return;
	}
	if (f_e93_a1_b(11)) {
		t8{a0};
		return;
	}
	if (f_e93_a1_b(12)) {
		t10{a0};
		return;
	}
	t12{a0};
}

