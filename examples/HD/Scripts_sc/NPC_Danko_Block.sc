event evt_11 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

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
		if (!f_c36_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dca_a0_i());
		L0->SetNPCDescription(f_dc8_a0_i());
		L0->SetPhoto(f_dcc_a0_s());
		L0->SetPhoto2(f_dce_a0_s());
		L0->SetPlayerName(f_f51_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c8d_a1_b(f_d4c_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c7b_a1_v(a0);
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
			f_e0d_a2_v(tv1, tv0);
			f_c5_a1_v("Neutral");
			tv0->SetMessage(513882);
			tv0->ClearReplies();
			if (f_e5b_a1_b(tv1) && f_e67_a1_b(tv1)) {
				tv0->AddReply(513883, 15111, 15110);
			}
			if (f_e97_a1_b(tv1) && f_ea3_a1_b(tv1)) {
				tv0->AddReply(513906, 15138, 15137);
			}
			if (f_ef7_a1_b(tv1)) {
				tv0->AddReply(513924, 15156, 15155);
			}
			if (f_e73_a1_b(tv1)) {
				tv0->AddReply(533537, 35070, 35069);
			}
			tv0->AddReply(513947, -1, 15182);
			break;
			return;
		}
		if (f_dd0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_d17_a1_v(tv2);
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

	void f_c5_a1_v(string a0)
	{
		if (!f_dd0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_d27_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_d45_a0_v();
			if (a1 == 15110) {
				f_dd8_a2_v(tv1, tv0);
			}
			if (a1 == 15137) {
				f_e13_a2_v(tv1, tv0);
			}
			if (a1 == 15149) {
				f_e19_a2_v(tv1, tv0);
				f_dd2_a2_v(tv1, tv0);
				f_e40_a2_v(tv1, tv0);
			}
			if (a1 == 15150) {
				f_e19_a2_v(tv1, tv0);
				f_dd2_a2_v(tv1, tv0);
				f_e40_a2_v(tv1, tv0);
			}
			if (a1 == 15155) {
				f_e4b_a2_v(tv1, tv0);
			}
			if (a1 == 35071) {
				f_dde_a2_v(tv1, tv0);
				f_dec_a2_v(tv1, tv0);
			}
			if (a0 == 15109) {
				f_e0d_a2_v(tv1, tv0);
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513882);
				tv0->ClearReplies();
				if (f_e5b_a1_b(tv1) && f_e67_a1_b(tv1)) {
					tv0->AddReply(513883, 15111, 15110);
				}
				if (f_e97_a1_b(tv1) && f_ea3_a1_b(tv1)) {
					tv0->AddReply(513906, 15138, 15137);
				}
				if (f_ef7_a1_b(tv1)) {
					tv0->AddReply(513924, 15156, 15155);
				}
				if (f_e73_a1_b(tv1)) {
					tv0->AddReply(533537, 35070, 35069);
				}
				tv0->AddReply(513947, -1, 15182);
				return;
			}
			if (a0 == 35070) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(533538);
				tv0->ClearReplies();
				tv0->AddReply(536553, 38366, 38365);
				tv0->AddReply(536557, -1, 38369);
				return;
			}
			if (a0 == 38366) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(536554);
				tv0->ClearReplies();
				tv0->AddReply(536555, 38368, 38367);
				tv0->AddReply(536558, 38368, 38370);
				return;
			}
			if (a0 == 38368) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(536556);
				tv0->ClearReplies();
				tv0->AddReply(536559, 38372, 38371);
				return;
			}
			if (a0 == 38372) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(536560);
				tv0->ClearReplies();
				tv0->AddReply(533539, -1, 35071);
				return;
			}
			if (a0 == 15156) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513925);
				tv0->ClearReplies();
				tv0->AddReply(513926, 15158, 15157);
				tv0->AddReply(513946, 15158, 15180);
				return;
			}
			if (a0 == 15158) {
				f_c5_a1_v("Untrust");
				tv0->SetMessage(513927);
				tv0->ClearReplies();
				tv0->AddReply(513928, 15160, 15159);
				tv0->AddReply(513945, 15160, 15178);
				return;
			}
			if (a0 == 15160) {
				f_c5_a1_v("Untrust");
				tv0->SetMessage(513929);
				tv0->ClearReplies();
				tv0->AddReply(513930, 15162, 15161);
				tv0->AddReply(513944, 15162, 15176);
				return;
			}
			if (a0 == 15162) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513931);
				tv0->ClearReplies();
				tv0->AddReply(513932, 15164, 15163);
				tv0->AddReply(513941, 15173, 15172);
				return;
			}
			if (a0 == 15173) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513942);
				tv0->ClearReplies();
				tv0->AddReply(513943, 15166, 15174);
				return;
			}
			if (a0 == 15164) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513933);
				tv0->ClearReplies();
				tv0->AddReply(513934, 15166, 15165);
				return;
			}
			if (a0 == 15166) {
				f_c5_a1_v("Untrust");
				tv0->SetMessage(513935);
				tv0->ClearReplies();
				tv0->AddReply(513936, 15168, 15167);
				return;
			}
			if (a0 == 15168) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513937);
				tv0->ClearReplies();
				tv0->AddReply(513938, 15170, 15169);
				return;
			}
			if (a0 == 15170) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513939);
				tv0->ClearReplies();
				tv0->AddReply(513940, -1, 15171);
				return;
			}
			if (a0 == 15138) {
				f_c5_a1_v("Untrust");
				tv0->SetMessage(513907);
				tv0->ClearReplies();
				tv0->AddReply(513908, 15140, 15139);
				return;
			}
			if (a0 == 15140) {
				f_c5_a1_v("Untrust");
				tv0->SetMessage(513909);
				tv0->ClearReplies();
				tv0->AddReply(513910, 15142, 15141);
				return;
			}
			if (a0 == 15142) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513911);
				tv0->ClearReplies();
				tv0->AddReply(513912, 15144, 15143);
				tv0->AddReply(513920, 15152, 15151);
				return;
			}
			if (a0 == 15152) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513921);
				tv0->ClearReplies();
				tv0->AddReply(513922, 15154, 15153);
				return;
			}
			if (a0 == 15154) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513923);
				tv0->ClearReplies();
				tv0->AddReply(514067, -1, 15304);
				return;
			}
			if (a0 == 15144) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513913);
				tv0->ClearReplies();
				tv0->AddReply(513914, 15146, 15145);
				tv0->AddReply(513919, -1, 15150);
				return;
			}
			if (a0 == 15146) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513915);
				tv0->ClearReplies();
				tv0->AddReply(513916, 15148, 15147);
				return;
			}
			if (a0 == 15148) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513917);
				tv0->ClearReplies();
				tv0->AddReply(513918, -1, 15149);
				return;
			}
			if (a0 == 15111) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513884);
				tv0->ClearReplies();
				tv0->AddReply(513885, 15113, 15112);
				tv0->AddReply(513905, 15113, 15135);
				return;
			}
			if (a0 == 15113) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513886);
				tv0->ClearReplies();
				tv0->AddReply(513887, 15115, 15114);
				tv0->AddReply(513899, 15128, 15127);
				return;
			}
			if (a0 == 15128) {
				f_c5_a1_v("Doubt");
				tv0->SetMessage(513900);
				tv0->ClearReplies();
				tv0->AddReply(513901, 15130, 15129);
				tv0->AddReply(513904, 15115, 15133);
				return;
			}
			if (a0 == 15130) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513902);
				tv0->ClearReplies();
				tv0->AddReply(513903, 15121, 15131);
				return;
			}
			if (a0 == 15115) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513888);
				tv0->ClearReplies();
				tv0->AddReply(513889, 15117, 15116);
				tv0->AddReply(513898, 15117, 15125);
				return;
			}
			if (a0 == 15117) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513890);
				tv0->ClearReplies();
				tv0->AddReply(513891, 15119, 15118);
				tv0->AddReply(513897, 15121, 15124);
				return;
			}
			if (a0 == 15119) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513892);
				tv0->ClearReplies();
				tv0->AddReply(513893, 15121, 15120);
				return;
			}
			if (a0 == 15121) {
				f_c5_a1_v("Neutral");
				tv0->SetMessage(513894);
				tv0->ClearReplies();
				tv0->AddReply(513895, -1, 15122);
				tv0->AddReply(513896, -1, 15123);
				return;
			}
			tv3 = true;
			if (f_dd0_a0_b()) {
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
		if (!f_c36_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dca_a0_i());
		L0->SetNPCDescription(f_dc8_a0_i());
		L0->SetPhoto(f_dcc_a0_s());
		L0->SetPhoto2(f_dce_a0_s());
		L0->SetPlayerName(f_f51_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c8d_a1_b(f_d4c_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c7b_a1_v(a0);
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
			f_497_a1_v("Neutral");
			tv0->SetMessage(514280);
			tv0->ClearReplies();
			if (f_ebb_a1_b(tv1) && f_ec7_a1_b(tv1)) {
				tv0->AddReply(514281, 15502, 15501);
			}
			if (f_ed3_a1_b(tv1) && f_edf_a1_b(tv1)) {
				tv0->AddReply(514306, 15529, 15528);
			}
			if (f_eaf_a1_b(tv1) && f_eeb_a1_b(tv1)) {
				tv0->AddReply(514317, 15540, 15539);
			}
			tv0->AddReply(514324, -1, 15546);
			break;
			return;
		}
		if (f_dd0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_d17_a1_v(tv2);
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

	void f_497_a1_v(string a0)
	{
		if (!f_dd0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_d27_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_d45_a0_v();
			if (a1 == 15501) {
				f_e2e_a2_v(tv1, tv0);
			}
			if (a1 == 15528) {
				f_e34_a2_v(tv1, tv0);
				f_e07_a2_v(tv1, tv0);
			}
			if (a1 == 15539) {
				f_e3a_a2_v(tv1, tv0);
			}
			if (a0 == 15500) {
				f_497_a1_v("Neutral");
				tv0->SetMessage(514280);
				tv0->ClearReplies();
				if (f_ebb_a1_b(tv1) && f_ec7_a1_b(tv1)) {
					tv0->AddReply(514281, 15502, 15501);
				}
				if (f_ed3_a1_b(tv1) && f_edf_a1_b(tv1)) {
					tv0->AddReply(514306, 15529, 15528);
				}
				if (f_eaf_a1_b(tv1) && f_eeb_a1_b(tv1)) {
					tv0->AddReply(514317, 15540, 15539);
				}
				tv0->AddReply(514324, -1, 15546);
				return;
			}
			if (a0 == 15540) {
				f_497_a1_v("Neutral");
				tv0->SetMessage(514318);
				tv0->ClearReplies();
				tv0->AddReply(514319, 15542, 15541);
				tv0->AddReply(539610, 41557, 41556);
				return;
			}
			if (a0 == 41557) {
				f_497_a1_v("Neutral");
				tv0->SetMessage(539611);
				tv0->ClearReplies();
				tv0->AddReply(539729, 15542, 41692);
				return;
			}
			if (a0 == 15542) {
				f_497_a1_v("Doubt");
				tv0->SetMessage(514320);
				tv0->ClearReplies();
				tv0->AddReply(514321, 15544, 15543);
				return;
			}
			if (a0 == 15544) {
				f_497_a1_v("Doubt");
				tv0->SetMessage(514322);
				tv0->ClearReplies();
				tv0->AddReply(514323, 41695, 15545);
				tv0->AddReply(539730, -1, 41694);
				return;
			}
			if (a0 == 41695) {
				f_497_a1_v("Neutral");
				tv0->SetMessage(539731);
				tv0->ClearReplies();
				tv0->AddReply(539732, -1, 41696);
				tv0->AddReply(539733, -1, 41697);
				return;
			}
			if (a0 == 15529) {
				f_497_a1_v("Neutral");
				tv0->SetMessage(514307);
				tv0->ClearReplies();
				tv0->AddReply(514308, 15531, 15530);
				return;
			}
			if (a0 == 15531) {
				f_497_a1_v("Agression");
				tv0->SetMessage(514309);
				tv0->ClearReplies();
				tv0->AddReply(514310, 15533, 15532);
				return;
			}
			if (a0 == 15533) {
				f_497_a1_v("Agression");
				tv0->SetMessage(514311);
				tv0->ClearReplies();
				tv0->AddReply(514312, 15535, 15534);
				tv0->AddReply(539728, -1, 41691);
				return;
			}
			if (a0 == 15535) {
				f_497_a1_v("Agression");
				tv0->SetMessage(514313);
				tv0->ClearReplies();
				tv0->AddReply(514314, 15537, 15536);
				return;
			}
			if (a0 == 15537) {
				f_497_a1_v("Agression");
				tv0->SetMessage(514315);
				tv0->ClearReplies();
				tv0->AddReply(514316, -1, 15538);
				tv0->AddReply(539727, -1, 41690);
				return;
			}
			if (a0 == 15502) {
				f_497_a1_v("Untrust");
				tv0->SetMessage(514282);
				tv0->ClearReplies();
				tv0->AddReply(514283, 15504, 15503);
				tv0->AddReply(539903, 41864, 41863);
				return;
			}
			if (a0 == 41864) {
				f_497_a1_v("Neutral");
				tv0->SetMessage(539904);
				tv0->ClearReplies();
				tv0->AddReply(539905, 15504, 41865);
				return;
			}
			if (a0 == 15504) {
				f_497_a1_v("Untrust");
				tv0->SetMessage(514284);
				tv0->ClearReplies();
				tv0->AddReply(514285, 15506, 15505);
				tv0->AddReply(514290, 15511, 15510);
				return;
			}
			if (a0 == 15511) {
				f_497_a1_v("Neutral");
				tv0->SetMessage(514291);
				tv0->ClearReplies();
				tv0->AddReply(514292, 15513, 15512);
				tv0->AddReply(514299, 15520, 15519);
				return;
			}
			if (a0 == 15520) {
				f_497_a1_v("Untrust");
				tv0->SetMessage(514300);
				tv0->ClearReplies();
				tv0->AddReply(514301, 15513, 15521);
				tv0->AddReply(514302, 15524, 15523);
				return;
			}
			if (a0 == 15524) {
				f_497_a1_v("Neutral");
				tv0->SetMessage(514303);
				tv0->ClearReplies();
				tv0->AddReply(514304, 15513, 15525);
				tv0->AddReply(514305, -1, 15527);
				return;
			}
			if (a0 == 15513) {
				f_497_a1_v("Untrust");
				tv0->SetMessage(514293);
				tv0->ClearReplies();
				tv0->AddReply(514294, 15515, 15514);
				return;
			}
			if (a0 == 15515) {
				f_497_a1_v("Neutral");
				tv0->SetMessage(514295);
				tv0->ClearReplies();
				tv0->AddReply(514296, 15517, 15516);
				return;
			}
			if (a0 == 15517) {
				f_497_a1_v("Neutral");
				tv0->SetMessage(514297);
				tv0->ClearReplies();
				tv0->AddReply(514298, -1, 15518);
				return;
			}
			if (a0 == 15506) {
				f_497_a1_v("Neutral");
				tv0->SetMessage(514286);
				tv0->ClearReplies();
				tv0->AddReply(514287, 15508, 15507);
				return;
			}
			if (a0 == 15508) {
				f_497_a1_v("Neutral");
				tv0->SetMessage(514288);
				tv0->ClearReplies();
				tv0->AddReply(514289, -1, 15509);
				tv0->AddReply(539734, -1, 41698);
				return;
			}
			tv3 = true;
			if (f_dd0_a0_b()) {
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
		if (!f_c36_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dca_a0_i());
		L0->SetNPCDescription(f_dc8_a0_i());
		L0->SetPhoto(f_dcc_a0_s());
		L0->SetPhoto2(f_dce_a0_s());
		L0->SetPlayerName(f_f51_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c8d_a1_b(f_d4c_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c7b_a1_v(a0);
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
			f_76e_a1_v("Neutral");
			tv0->SetMessage(534152);
			tv0->ClearReplies();
			if (f_e7f_a1_b(tv1)) {
				tv0->AddReply(534153, 38340, 35740);
			}
			tv0->AddReply(534154, -1, 35741);
			tv0->AddReply(536532, -1, 38339);
			break;
			return;
		}
		if (f_dd0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_d17_a1_v(tv2);
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

	void f_76e_a1_v(string a0)
	{
		if (!f_dd0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_d27_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_d45_a0_v();
			if (a1 == 35743) {
				f_df2_a2_v(tv1, tv0);
			}
			if (a1 == 38363) {
				f_df2_a2_v(tv1, tv0);
			}
			if (a0 == 35739) {
				f_76e_a1_v("Neutral");
				tv0->SetMessage(534152);
				tv0->ClearReplies();
				if (f_e7f_a1_b(tv1)) {
					tv0->AddReply(534153, 38340, 35740);
				}
				tv0->AddReply(534154, -1, 35741);
				tv0->AddReply(536532, -1, 38339);
				return;
			}
			if (a0 == 38340) {
				f_76e_a1_v("Neutral");
				tv0->SetMessage(536533);
				tv0->ClearReplies();
				tv0->AddReply(536534, 38342, 38341);
				tv0->AddReply(536539, 38347, 38346);
				return;
			}
			if (a0 == 38347) {
				f_76e_a1_v("Doubt");
				tv0->SetMessage(536540);
				tv0->ClearReplies();
				tv0->AddReply(536541, 38351, 38348);
				tv0->AddReply(536542, -1, 38349);
				return;
			}
			if (a0 == 38342) {
				f_76e_a1_v("Neutral");
				tv0->SetMessage(536535);
				tv0->ClearReplies();
				tv0->AddReply(536536, 38344, 38343);
				tv0->AddReply(536543, 38351, 38350);
				return;
			}
			if (a0 == 38344) {
				f_76e_a1_v("Neutral");
				tv0->SetMessage(536537);
				tv0->ClearReplies();
				tv0->AddReply(536538, 38351, 38345);
				return;
			}
			if (a0 == 38351) {
				f_76e_a1_v("Neutral");
				tv0->SetMessage(536544);
				tv0->ClearReplies();
				tv0->AddReply(536545, 38359, 38352);
				tv0->AddReply(536546, 38358, 38355);
				return;
			}
			if (a0 == 38358) {
				f_76e_a1_v("Neutral");
				tv0->SetMessage(536548);
				tv0->ClearReplies();
				tv0->AddReply(536550, 35742, 38360);
				return;
			}
			if (a0 == 38359) {
				f_76e_a1_v("Neutral");
				tv0->SetMessage(536549);
				tv0->ClearReplies();
				tv0->AddReply(536551, 35742, 38361);
				return;
			}
			if (a0 == 35742) {
				f_76e_a1_v("Doubt");
				tv0->SetMessage(534155);
				tv0->ClearReplies();
				tv0->AddReply(534156, -1, 35743);
				tv0->AddReply(536552, -1, 38363);
				return;
			}
			tv3 = true;
			if (f_dd0_a0_b()) {
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
		if (!f_c36_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dca_a0_i());
		L0->SetNPCDescription(f_dc8_a0_i());
		L0->SetPhoto(f_dcc_a0_s());
		L0->SetPhoto2(f_dce_a0_s());
		L0->SetPlayerName(f_f51_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c8d_a1_b(f_d4c_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c7b_a1_v(a0);
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
			if (f_e8b_a1_b(tv1) && !f_e51_a1_b(tv1)) {
				f_e01_a2_v(tv1, tv0);
				f_933_a1_v("Neutral");
				tv0->SetMessage(535510);
				tv0->ClearReplies();
				tv0->AddReply(535511, 37194, 37193);
				break;
			}
			if (f_e51_a1_b(tv1)) {
				f_933_a1_v("Neutral");
				tv0->SetMessage(535528);
				tv0->ClearReplies();
				tv0->AddReply(535529, -1, 37212);
				tv0->AddReply(535530, -1, 37213);
				break;
			}
			f_933_a1_v("Neutral");
			tv0->SetMessage(535531);
			tv0->ClearReplies();
			tv0->AddReply(535539, -1, 37222);
			break;
			return;
		}
		if (f_dd0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_d17_a1_v(tv2);
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

	void f_933_a1_v(string a0)
	{
		if (!f_dd0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_d27_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_d45_a0_v();
			if (a0 == 37192) {
				if (f_e8b_a1_b(tv1) && !f_e51_a1_b(tv1)) {
					f_e01_a2_v(tv1, tv0);
					f_933_a1_v("Neutral");
					tv0->SetMessage(535510);
					tv0->ClearReplies();
					tv0->AddReply(535511, 37194, 37193);
					return;
				}
				if (f_e51_a1_b(tv1)) {
					f_933_a1_v("Neutral");
					tv0->SetMessage(535528);
					tv0->ClearReplies();
					tv0->AddReply(535529, -1, 37212);
					tv0->AddReply(535530, -1, 37213);
					return;
				}
				f_933_a1_v("Neutral");
				tv0->SetMessage(535531);
				tv0->ClearReplies();
				tv0->AddReply(535539, -1, 37222);
				return;
			}
			if (a0 == 37194) {
				f_933_a1_v("Neutral");
				tv0->SetMessage(535512);
				tv0->ClearReplies();
				tv0->AddReply(535513, 37196, 37195);
				tv0->AddReply(535525, 37208, 37207);
				return;
			}
			if (a0 == 37208) {
				f_933_a1_v("Neutral");
				tv0->SetMessage(535526);
				tv0->ClearReplies();
				tv0->AddReply(535527, 37196, 37209);
				tv0->AddReply(539998, 41968, 41967);
				return;
			}
			if (a0 == 41968) {
				f_933_a1_v("Doubt");
				tv0->SetMessage(539999);
				tv0->ClearReplies();
				tv0->AddReply(540000, 37196, 41969);
				tv0->AddReply(540001, 37196, 41970);
				return;
			}
			if (a0 == 37196) {
				f_933_a1_v("Neutral");
				tv0->SetMessage(535514);
				tv0->ClearReplies();
				tv0->AddReply(535515, 37198, 37197);
				tv0->AddReply(535524, -1, 37206);
				return;
			}
			if (a0 == 37198) {
				f_933_a1_v("Neutral");
				tv0->SetMessage(535516);
				tv0->ClearReplies();
				tv0->AddReply(535517, 37200, 37199);
				tv0->AddReply(535523, -1, 37205);
				return;
			}
			if (a0 == 37200) {
				f_933_a1_v("Neutral");
				tv0->SetMessage(535518);
				tv0->ClearReplies();
				tv0->AddReply(535519, 37202, 37201);
				tv0->AddReply(542998, -1, 45446);
				return;
			}
			if (a0 == 37202) {
				f_933_a1_v("Neutral");
				tv0->SetMessage(535520);
				tv0->ClearReplies();
				tv0->AddReply(535521, -1, 37203);
				tv0->AddReply(535522, -1, 37204);
				return;
			}
			tv3 = true;
			if (f_dd0_a0_b()) {
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
		if (!f_c36_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dca_a0_i());
		L0->SetNPCDescription(f_dc8_a0_i());
		L0->SetPhoto(f_dcc_a0_s());
		L0->SetPhoto2(f_dce_a0_s());
		L0->SetPlayerName(f_f51_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c8d_a1_b(f_d4c_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c7b_a1_v(a0);
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
			f_ad6_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_dd0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_d17_a1_v(tv2);
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

	void f_ad6_a1_v(string a0)
	{
		if (!f_dd0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_d27_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_d45_a0_v();
			if (a0 == 42551) {
				f_ad6_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_dd0_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t10
{
	var Vector tv0;

	void init(void)
	{
		f_b1a_a0_v();
	}

	void f_b1a_a0_v(void)
	{
		if (!f_c31_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_bca_a0_v();
		}
	}

	bool f_b28_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_c28_a1_b(L0);
	}

	void f_b37_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_b3c_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_c16_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_b52_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_b5b_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_b5b_a0_v();
			if (f_c31_a0_b() && f_b3c_a0_b()) {
				if (f_b28_a0_b()) {
					f_cc7_a1_b(f_d4c_a0_o());
				}
			} else {
				f_b37_a0_v();
				f_b52_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_c11_a0_v();
		f_b5b_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_b5b_a0_v();
		f_d17_a1_v("Neutral");
		f_b52_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_b52_a0_v();
		} else {
			f_d17_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_c11_a0_v();
			f_c28_a1_b(a0);
			enable OnUse;
			f_f62_a1_v(a0);
			f_d17_a1_v("Neutral");
			f_b5b_a0_v();
			f_b52_a0_v();
		}
	}
}

void f_bca_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_c31_a0_b()) {
		return;
	}
	L0 = f_db7_a0_i();
	for (L1 = 0; L1 < 5 && f_c31_a0_b(); L1++) {
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
			@PlayAnimation("all", f_db0_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_c0f_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_c0f_a0_b(void)
{
	return true;
}

void f_c11_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_c16_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_c1e_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_c28_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_c1e_a1_b(L0);
}

bool f_c31_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_c36_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_d52_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_dd0_a0_b()) {
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

void f_c7b_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_dd0_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_c8d_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_cc7_a1_b(a0)) {
			if (!f_cec_a1_b(a0)) {
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
		if (!f_cec_a1_b(a0)) {
			if (!f_cc7_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_cc7_a1_b(object a0)
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
	return f_d36_a1_b(L4);
}

bool f_cec_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_d99_a0_i() + "m";
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
	return f_d36_a1_b(L4);
}

void f_d17_a1_v(string a0)
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

void f_d27_a2_v(string a0, bool a1)
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

bool f_d36_a1_b(string a0)
{
	if (f_dd0_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_d45_a0_v(void)
{
	if (f_dd0_a0_b()) {
		@lshStopSpeech();
	}
}

object f_d4c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_d52_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_d5c_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_d61_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_d6d_a3_v(object a0, object a1, int a2)
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
		f_d61_a2_v(L0, a2);
	}
}

void f_d80_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_d6d_a3_v(a0, L0, a2);
}

bool f_d8d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_d99_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_da2_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_daa_a1_b(int a0)
{
	return f_d99_a0_i() == a0;
}

string f_db0_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_db7_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_db0_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_dc8_a0_i(void)
{
	return 515532;
}

int f_dca_a0_i(void)
{
	return 514840;
}

string f_dcc_a0_s(void)
{
	return "ui/NPC_Block.png";
}

string f_dce_a0_s(void)
{
	return "ui/NPC_Block_b.png";
}

bool f_dd0_a0_b(void)
{
	return true;
}

void f_dd2_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_dd8_a2_v(object a0, object a1)
{
	@SetVariable("ood9Block3", 1);
}

void f_dde_a2_v(object a0, object a1)
{
	@SetVariable("d9q02", 2);
	f_f1b_a0_v();
	f_d8d_a2_b("quest_d9_02", "init_soldiers");
}

void f_dec_a2_v(object a0, object a1)
{
	@SetVariable("d9LaraIsSaved", 1);
}

void f_df2_a2_v(object a0, object a1)
{
	f_f0e_a0_v();
	f_d8d_a2_b("quest_d10_03", "place_sanitars");
	f_d8d_a2_b("quest_d10_03", "completed");
}

void f_e01_a2_v(object a0, object a1)
{
	@SetVariable("ood12Block1", 1);
}

void f_e07_a2_v(object a0, object a1)
{
	@SetVariable("d11RotaTalk", 1);
}

void f_e0d_a2_v(object a0, object a1)
{
	@SetVariable("d9TalkToPolkovodec", 1);
}

void f_e13_a2_v(object a0, object a1)
{
	@SetVariable("ood9Block1", 1);
}

void f_e19_a2_v(object a0, object a1)
{
	object L0;
	@Trace("Rifle is given");
	@CreateInvItem(L0);
	L0->SetItemName("Rifle");
	L0->SetProperty("durability", 100);
	f_d6d_a3_v(a0, L0, 1);
}

void f_e2e_a2_v(object a0, object a1)
{
	@SetVariable("ood11Block1", 1);
}

void f_e34_a2_v(object a0, object a1)
{
	@SetVariable("ood11Block2", 1);
}

void f_e3a_a2_v(object a0, object a1)
{
	@SetVariable("ood11Block3", 1);
}

void f_e40_a2_v(object a0, object a1)
{
	@Trace("rifle ammo10 is given");
	f_d80_a3_v(a0, "rifle_ammo", 10);
}

void f_e4b_a2_v(object a0, object a1)
{
	@SetVariable("ood9Block2", 1);
}

bool f_e51_a1_b(object a0)
{
	if (f_f03_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_e5b_a1_b(object a0)
{
	if (f_d5c_a1_i("d8q01") == 1000) {
		return true;
	}
	return false;
}

bool f_e67_a1_b(object a0)
{
	if (f_d5c_a1_i("ood9Block3") == 0) {
		return true;
	}
	return false;
}

bool f_e73_a1_b(object a0)
{
	if (f_d5c_a1_i("d9q02") == 1) {
		return true;
	}
	return false;
}

bool f_e7f_a1_b(object a0)
{
	if (f_d5c_a1_i("d10q03") == 3) {
		return true;
	}
	return false;
}

bool f_e8b_a1_b(object a0)
{
	if (f_d5c_a1_i("ood12Block1") == 0) {
		return true;
	}
	return false;
}

bool f_e97_a1_b(object a0)
{
	if (f_d5c_a1_i("d9q01") == 2) {
		return true;
	}
	return false;
}

bool f_ea3_a1_b(object a0)
{
	if (f_d5c_a1_i("ood9Block1") == 0) {
		return true;
	}
	return false;
}

bool f_eaf_a1_b(object a0)
{
	if (f_d5c_a1_i("d11q02") == 1) {
		return true;
	}
	return false;
}

bool f_ebb_a1_b(object a0)
{
	if (f_d5c_a1_i("d11q01") == 2) {
		return true;
	}
	return false;
}

bool f_ec7_a1_b(object a0)
{
	if (f_d5c_a1_i("ood11Block1") == 0) {
		return true;
	}
	return false;
}

bool f_ed3_a1_b(object a0)
{
	if (f_d5c_a1_i("d11q01") >= 3) {
		return true;
	}
	return false;
}

bool f_edf_a1_b(object a0)
{
	if (f_d5c_a1_i("ood11Block2") == 0) {
		return true;
	}
	return false;
}

bool f_eeb_a1_b(object a0)
{
	if (f_d5c_a1_i("ood11Block3") == 0) {
		return true;
	}
	return false;
}

bool f_ef7_a1_b(object a0)
{
	if (f_d5c_a1_i("ood9Block2") == 0) {
		return true;
	}
	return false;
}

bool f_f03_a1_b(object a0)
{
	if (f_da2_a0_i() >= 19) {
		return true;
	}
	return false;
}

void f_f0e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 676, 2, 534161);
	f_f35_a2_b(L0, 672);
}

void f_f1b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 657, 2, 533575);
	f_f35_a2_b(L0, 655);
}

object f_f28_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_f35_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_f28_a0_o();
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

int f_f51_a0_i(void)
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

void f_f62_a1_v(object a0)
{
	if (f_daa_a1_b(9)) {
		t0{a0};
		return;
	}
	if (f_daa_a1_b(10)) {
		t4{a0};
		return;
	}
	if (f_daa_a1_b(11)) {
		t2{a0};
		return;
	}
	if (f_daa_a1_b(12)) {
		t6{a0};
		return;
	}
	t8{a0};
}

