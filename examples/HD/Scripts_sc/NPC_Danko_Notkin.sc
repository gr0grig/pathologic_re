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
		if (!f_a96_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ca9_a0_i());
		L0->SetNPCDescription(f_ca7_a0_i());
		L0->SetPhoto(f_cab_a0_s());
		L0->SetPhoto2(f_cad_a0_s());
		L0->SetPlayerName(f_c96_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_aed_a1_b(f_bac_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_adb_a1_v(a0);
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
			f_c0c_a2_v(tv1, tv0);
			f_90_a1_v("Neutral");
			tv0->SetMessage(500205);
			tv0->ClearReplies();
			tv0->AddReply(500207, 256, 245);
			tv0->AddReply(500206, 246, 244);
			break;
			return;
		}
		if (f_caf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b77_a1_v(tv2);
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

	void f_90_a1_v(string a0)
	{
		if (!f_caf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b87_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ba5_a0_v();
			if (a0 == 243) {
				f_c0c_a2_v(tv1, tv0);
				f_90_a1_v("Neutral");
				tv0->SetMessage(500205);
				tv0->ClearReplies();
				tv0->AddReply(500207, 256, 245);
				tv0->AddReply(500206, 246, 244);
				return;
			}
			if (a0 == 246) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(500208);
				tv0->ClearReplies();
				tv0->AddReply(500209, 249, 247);
				tv0->AddReply(500210, 250, 248);
				return;
			}
			if (a0 == 250) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(500212);
				tv0->ClearReplies();
				tv0->AddReply(500215, 249, 253);
				return;
			}
			if (a0 == 249) {
				f_c06_a2_v(tv1, tv0);
				f_90_a1_v("Neutral");
				tv0->SetMessage(500211);
				tv0->ClearReplies();
				tv0->AddReply(500213, 252, 251);
				return;
			}
			if (a0 == 252) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(500214);
				tv0->ClearReplies();
				tv0->AddReply(500216, -1, 255);
				return;
			}
			if (a0 == 256) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(500217);
				tv0->ClearReplies();
				tv0->AddReply(500218, -1, 257);
				tv0->AddReply(500219, -1, 258);
				return;
			}
			tv3 = true;
			if (f_caf_a0_b()) {
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
		if (!f_a96_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ca9_a0_i());
		L0->SetNPCDescription(f_ca7_a0_i());
		L0->SetPhoto(f_cab_a0_s());
		L0->SetPhoto2(f_cad_a0_s());
		L0->SetPlayerName(f_c96_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_aed_a1_b(f_bac_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_adb_a1_v(a0);
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
			f_1ce_a1_v("Pride");
			tv0->SetMessage(507472);
			tv0->ClearReplies();
			if (f_c4e_a1_b(tv1)) {
				tv0->AddReply(541871, 10302, 44102);
			}
			tv0->AddReply(541869, -1, 44100);
			break;
			return;
		}
		if (f_caf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b77_a1_v(tv2);
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

	void f_1ce_a1_v(string a0)
	{
		if (!f_caf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b87_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ba5_a0_v();
			if (a1 == 44102) {
				f_c00_a2_v(tv1, tv0);
			}
			if (a0 == 8248) {
				f_1ce_a1_v("Pride");
				tv0->SetMessage(507472);
				tv0->ClearReplies();
				if (f_c4e_a1_b(tv1)) {
					tv0->AddReply(541871, 10302, 44102);
				}
				tv0->AddReply(541869, -1, 44100);
				return;
			}
			if (a0 == 10302) {
				f_1ce_a1_v("Neutral");
				tv0->SetMessage(509377);
				tv0->ClearReplies();
				tv0->AddReply(509378, 10304, 10303);
				return;
			}
			if (a0 == 10304) {
				f_1ce_a1_v("Neutral");
				tv0->SetMessage(509379);
				tv0->ClearReplies();
				tv0->AddReply(509380, 10306, 10305);
				tv0->AddReply(509387, 10306, 10313);
				return;
			}
			if (a0 == 10306) {
				f_1ce_a1_v("Pride");
				tv0->SetMessage(509381);
				tv0->ClearReplies();
				tv0->AddReply(509382, 10308, 10307);
				tv0->AddReply(509386, 10308, 10311);
				return;
			}
			if (a0 == 10308) {
				f_1ce_a1_v("Distrust");
				tv0->SetMessage(509383);
				tv0->ClearReplies();
				tv0->AddReply(509384, -1, 10309);
				tv0->AddReply(509385, -1, 10310);
				return;
			}
			tv3 = true;
			if (f_caf_a0_b()) {
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
		if (!f_a96_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ca9_a0_i());
		L0->SetNPCDescription(f_ca7_a0_i());
		L0->SetPhoto(f_cab_a0_s());
		L0->SetPhoto2(f_cad_a0_s());
		L0->SetPlayerName(f_c96_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_aed_a1_b(f_bac_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_adb_a1_v(a0);
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
			f_31b_a1_v("Neutral");
			tv0->SetMessage(509978);
			tv0->ClearReplies();
			if (f_c72_a1_b(tv1)) {
				tv0->AddReply(509979, 35759, 10997);
			}
			if (f_c1e_a1_b(tv1)) {
				tv0->AddReply(534183, 35767, 35766);
			}
			if (f_c2a_a1_b(tv1)) {
				tv0->AddReply(534202, 35786, 35785);
			}
			tv0->AddReply(509990, -1, 11009);
			tv0->AddReply(509991, -1, 11011);
			break;
			return;
		}
		if (f_caf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b77_a1_v(tv2);
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

	void f_31b_a1_v(string a0)
	{
		if (!f_caf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b87_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ba5_a0_v();
			if (a1 == 10997) {
				f_c12_a2_v(tv1, tv0);
			}
			if (a1 == 35766) {
				f_be8_a2_v(tv1, tv0);
			}
			if (a1 == 35785) {
				f_bee_a2_v(tv1, tv0);
			}
			if (a0 == 10996) {
				f_31b_a1_v("Neutral");
				tv0->SetMessage(509978);
				tv0->ClearReplies();
				if (f_c72_a1_b(tv1)) {
					tv0->AddReply(509979, 35759, 10997);
				}
				if (f_c1e_a1_b(tv1)) {
					tv0->AddReply(534183, 35767, 35766);
				}
				if (f_c2a_a1_b(tv1)) {
					tv0->AddReply(534202, 35786, 35785);
				}
				tv0->AddReply(509990, -1, 11009);
				tv0->AddReply(509991, -1, 11011);
				return;
			}
			if (a0 == 35786) {
				f_31b_a1_v("Distrust");
				tv0->SetMessage(534203);
				tv0->ClearReplies();
				tv0->AddReply(534204, 35788, 35787);
				tv0->AddReply(534215, -1, 35798);
				return;
			}
			if (a0 == 35788) {
				f_31b_a1_v("Distrust");
				tv0->SetMessage(534205);
				tv0->ClearReplies();
				tv0->AddReply(534206, 35790, 35789);
				tv0->AddReply(534214, -1, 35797);
				return;
			}
			if (a0 == 35790) {
				f_31b_a1_v("Neutral");
				tv0->SetMessage(534207);
				tv0->ClearReplies();
				tv0->AddReply(534208, 35792, 35791);
				tv0->AddReply(534211, 35795, 35794);
				return;
			}
			if (a0 == 35795) {
				f_31b_a1_v("Distrust");
				tv0->SetMessage(534212);
				tv0->ClearReplies();
				tv0->AddReply(534213, -1, 35796);
				return;
			}
			if (a0 == 35792) {
				f_31b_a1_v("Neutral");
				tv0->SetMessage(534209);
				tv0->ClearReplies();
				tv0->AddReply(534210, -1, 35793);
				return;
			}
			if (a0 == 35767) {
				f_31b_a1_v("Smile");
				tv0->SetMessage(534184);
				tv0->ClearReplies();
				tv0->AddReply(534185, 35769, 35768);
				tv0->AddReply(534198, 35782, 35781);
				return;
			}
			if (a0 == 35782) {
				f_31b_a1_v("Think");
				tv0->SetMessage(534199);
				tv0->ClearReplies();
				tv0->AddReply(534200, -1, 35783);
				tv0->AddReply(534201, -1, 35784);
				return;
			}
			if (a0 == 35769) {
				f_31b_a1_v("Smile");
				tv0->SetMessage(534186);
				tv0->ClearReplies();
				tv0->AddReply(534187, 35771, 35770);
				tv0->AddReply(534195, 35779, 35778);
				return;
			}
			if (a0 == 35779) {
				f_31b_a1_v("Distrust");
				tv0->SetMessage(534196);
				tv0->ClearReplies();
				tv0->AddReply(534197, -1, 35780);
				return;
			}
			if (a0 == 35771) {
				f_31b_a1_v("Neutral");
				tv0->SetMessage(534188);
				tv0->ClearReplies();
				tv0->AddReply(534189, 35773, 35772);
				return;
			}
			if (a0 == 35773) {
				f_31b_a1_v("Neutral");
				tv0->SetMessage(534190);
				tv0->ClearReplies();
				tv0->AddReply(534191, -1, 35774);
				tv0->AddReply(534192, 35776, 35775);
				return;
			}
			if (a0 == 35776) {
				f_31b_a1_v("Neutral");
				tv0->SetMessage(534193);
				tv0->ClearReplies();
				tv0->AddReply(534194, -1, 35777);
				return;
			}
			if (a0 == 35759) {
				f_31b_a1_v("Distrust");
				tv0->SetMessage(534176);
				tv0->ClearReplies();
				tv0->AddReply(534177, 10998, 35760);
				tv0->AddReply(534178, 35800, 35761);
				return;
			}
			if (a0 == 35800) {
				f_31b_a1_v("Distrust");
				tv0->SetMessage(534217);
				tv0->ClearReplies();
				tv0->AddReply(534218, 35802, 35801);
				tv0->AddReply(534223, 35802, 35806);
				return;
			}
			if (a0 == 35802) {
				f_31b_a1_v("Neutral");
				tv0->SetMessage(534219);
				tv0->ClearReplies();
				tv0->AddReply(534220, -1, 35803);
				tv0->AddReply(534221, -1, 35804);
				return;
			}
			if (a0 == 10998) {
				f_31b_a1_v("Think");
				tv0->SetMessage(509980);
				tv0->ClearReplies();
				tv0->AddReply(509981, 11000, 10999);
				tv0->AddReply(509988, 11000, 11006);
				tv0->AddReply(509989, -1, 11008);
				return;
			}
			if (a0 == 11000) {
				f_31b_a1_v("Distrust");
				tv0->SetMessage(509982);
				tv0->ClearReplies();
				tv0->AddReply(509983, -1, 11001);
				tv0->AddReply(509984, 11003, 11002);
				return;
			}
			if (a0 == 11003) {
				f_31b_a1_v("Think");
				tv0->SetMessage(509985);
				tv0->ClearReplies();
				tv0->AddReply(509986, -1, 11004);
				tv0->AddReply(509987, -1, 11005);
				return;
			}
			tv3 = true;
			if (f_caf_a0_b()) {
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
		if (!f_a96_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ca9_a0_i());
		L0->SetNPCDescription(f_ca7_a0_i());
		L0->SetPhoto(f_cab_a0_s());
		L0->SetPhoto2(f_cad_a0_s());
		L0->SetPlayerName(f_c96_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_aed_a1_b(f_bac_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_adb_a1_v(a0);
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
			f_5ee_a1_v("Neutral");
			tv0->SetMessage(511211);
			tv0->ClearReplies();
			if (f_c5a_a1_b(tv1) && f_c8a_a1_b(tv1) && !f_c66_a1_b(tv1) || f_c7e_a1_b(tv1) && f_c8a_a1_b(tv1) && !f_c66_a1_b(tv1)) {
				tv0->AddReply(511212, 12401, 12400);
			}
			if (f_c36_a1_b(tv1)) {
				tv0->AddReply(534224, 35809, 35808);
			}
			if (f_c42_a1_b(tv1)) {
				tv0->AddReply(534252, 35840, 35839);
			}
			tv0->AddReply(515335, -1, 16558);
			break;
			return;
		}
		if (f_caf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b77_a1_v(tv2);
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

	void f_5ee_a1_v(string a0)
	{
		if (!f_caf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b87_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ba5_a0_v();
			if (a1 == 12400) {
				f_c18_a2_v(tv1, tv0);
			}
			if (a1 == 35808) {
				f_bf4_a2_v(tv1, tv0);
			}
			if (a1 == 35839) {
				f_bfa_a2_v(tv1, tv0);
			}
			if (a0 == 12399) {
				f_5ee_a1_v("Neutral");
				tv0->SetMessage(511211);
				tv0->ClearReplies();
				if (f_c5a_a1_b(tv1) && f_c8a_a1_b(tv1) && !f_c66_a1_b(tv1) || f_c7e_a1_b(tv1) && f_c8a_a1_b(tv1) && !f_c66_a1_b(tv1)) {
					tv0->AddReply(511212, 12401, 12400);
				}
				if (f_c36_a1_b(tv1)) {
					tv0->AddReply(534224, 35809, 35808);
				}
				if (f_c42_a1_b(tv1)) {
					tv0->AddReply(534252, 35840, 35839);
				}
				tv0->AddReply(515335, -1, 16558);
				return;
			}
			if (a0 == 35840) {
				f_5ee_a1_v("Triumph");
				tv0->SetMessage(534253);
				tv0->ClearReplies();
				tv0->AddReply(534254, 35842, 35841);
				tv0->AddReply(534266, 35842, 35853);
				return;
			}
			if (a0 == 35842) {
				f_5ee_a1_v("Triumph");
				tv0->SetMessage(534255);
				tv0->ClearReplies();
				tv0->AddReply(534256, 35844, 35843);
				tv0->AddReply(534263, 35851, 35850);
				return;
			}
			if (a0 == 35851) {
				f_5ee_a1_v("Neutral");
				tv0->SetMessage(534264);
				tv0->ClearReplies();
				tv0->AddReply(534265, -1, 35852);
				return;
			}
			if (a0 == 35844) {
				f_5ee_a1_v("Distrust");
				tv0->SetMessage(534257);
				tv0->ClearReplies();
				tv0->AddReply(534258, 35846, 35845);
				tv0->AddReply(534262, -1, 35849);
				return;
			}
			if (a0 == 35846) {
				f_5ee_a1_v("Neutral");
				tv0->SetMessage(534259);
				tv0->ClearReplies();
				tv0->AddReply(534260, -1, 35847);
				tv0->AddReply(534261, -1, 35848);
				return;
			}
			if (a0 == 35809) {
				f_5ee_a1_v("Think");
				tv0->SetMessage(534225);
				tv0->ClearReplies();
				tv0->AddReply(534226, 35811, 35810);
				return;
			}
			if (a0 == 35811) {
				f_5ee_a1_v("Think");
				tv0->SetMessage(534227);
				tv0->ClearReplies();
				tv0->AddReply(534228, 35813, 35812);
				tv0->AddReply(534234, 35813, 35818);
				return;
			}
			if (a0 == 35813) {
				f_5ee_a1_v("Neutral");
				tv0->SetMessage(534229);
				tv0->ClearReplies();
				tv0->AddReply(534230, -1, 35814);
				tv0->AddReply(534233, -1, 35817);
				return;
			}
			if (a0 == 12401) {
				f_5ee_a1_v("Pride");
				tv0->SetMessage(511213);
				tv0->ClearReplies();
				tv0->AddReply(511214, 12403, 12402);
				tv0->AddReply(511223, 12413, 12412);
				return;
			}
			if (a0 == 12413) {
				f_5ee_a1_v("Neutral");
				tv0->SetMessage(511224);
				tv0->ClearReplies();
				tv0->AddReply(511225, 12405, 12414);
				return;
			}
			if (a0 == 12403) {
				f_5ee_a1_v("Pride");
				tv0->SetMessage(511215);
				tv0->ClearReplies();
				tv0->AddReply(511220, 12409, 12408);
				tv0->AddReply(511216, 12405, 12404);
				return;
			}
			if (a0 == 12405) {
				f_5ee_a1_v("Pride");
				tv0->SetMessage(511217);
				tv0->ClearReplies();
				tv0->AddReply(511218, -1, 12406);
				tv0->AddReply(511219, -1, 12407);
				return;
			}
			if (a0 == 12409) {
				f_5ee_a1_v("Think");
				tv0->SetMessage(511221);
				tv0->ClearReplies();
				tv0->AddReply(511222, 12405, 12410);
				return;
			}
			tv3 = true;
			if (f_caf_a0_b()) {
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
		if (!f_a96_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ca9_a0_i());
		L0->SetNPCDescription(f_ca7_a0_i());
		L0->SetPhoto(f_cab_a0_s());
		L0->SetPhoto2(f_cad_a0_s());
		L0->SetPlayerName(f_c96_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_aed_a1_b(f_bac_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_adb_a1_v(a0);
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
			f_835_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_caf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b77_a1_v(tv2);
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

	void f_835_a1_v(string a0)
	{
		if (!f_caf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b87_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ba5_a0_v();
			if (a0 == 36960) {
				f_835_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_835_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_835_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_caf_a0_b()) {
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
		if (!f_a96_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ca9_a0_i());
		L0->SetNPCDescription(f_ca7_a0_i());
		L0->SetPhoto(f_cab_a0_s());
		L0->SetPhoto2(f_cad_a0_s());
		L0->SetPlayerName(f_c96_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_aed_a1_b(f_bac_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_adb_a1_v(a0);
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
			f_933_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_caf_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b77_a1_v(tv2);
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
		if (!f_caf_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b87_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_ba5_a0_v();
			if (a0 == 42551) {
				f_933_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_caf_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t12
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_97a_a0_v();
	}

	void f_97a_a0_v(void)
	{
		if (!f_a91_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_a2a_a0_v();
		}
	}

	bool f_988_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_a88_a1_b(L0);
	}

	void f_997_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_99c_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_a76_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_9b2_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_9bb_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_9bb_a0_v();
			if (f_a91_a0_b() && f_99c_a0_b()) {
				if (f_988_a0_b()) {
					f_b27_a1_b(f_bac_a0_o());
				}
			} else {
				f_997_a0_v();
				f_9b2_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_a71_a0_v();
		f_9bb_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_9bb_a0_v();
		f_b77_a1_v("Neutral");
		f_9b2_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_9b2_a0_v();
		} else {
			f_b77_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_a71_a0_v();
			f_a88_a1_b(a0);
			enable OnUse;
			f_cb1_a1_v(a0);
			f_b77_a1_v("Neutral");
			f_9bb_a0_v();
			f_9b2_a0_v();
		}
	}
}

void f_a2a_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_a91_a0_b()) {
		return;
	}
	L0 = f_bd7_a0_i();
	for (L1 = 0; L1 < 5 && f_a91_a0_b(); L1++) {
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
			@PlayAnimation("all", f_bd0_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_a6f_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_a6f_a0_b(void)
{
	return true;
}

void f_a71_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_a76_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_a7e_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_a88_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_a7e_a1_b(L0);
}

bool f_a91_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_a96_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_bb2_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_caf_a0_b()) {
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

void f_adb_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_caf_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_aed_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_b27_a1_b(a0)) {
			if (!f_b4c_a1_b(a0)) {
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
		if (!f_b4c_a1_b(a0)) {
			if (!f_b27_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_b27_a1_b(object a0)
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
	return f_b96_a1_b(L4);
}

bool f_b4c_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_bc1_a0_i() + "m";
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
	return f_b96_a1_b(L4);
}

void f_b77_a1_v(string a0)
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

void f_b87_a2_v(string a0, bool a1)
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

bool f_b96_a1_b(string a0)
{
	if (f_caf_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_ba5_a0_v(void)
{
	if (f_caf_a0_b()) {
		@lshStopSpeech();
	}
}

object f_bac_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_bb2_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_bbc_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_bc1_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_bca_a1_b(int a0)
{
	return f_bc1_a0_i() == a0;
}

string f_bd0_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_bd7_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_bd0_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_be8_a2_v(object a0, object a1)
{
	@SetVariable("ood3Notkin2", 1);
}

void f_bee_a2_v(object a0, object a1)
{
	@SetVariable("ood3Notkin3", 1);
}

void f_bf4_a2_v(object a0, object a1)
{
	@SetVariable("ood4Notkin2", 1);
}

void f_bfa_a2_v(object a0, object a1)
{
	@SetVariable("ood4Notkin3", 1);
}

void f_c00_a2_v(object a0, object a1)
{
	@SetVariable("ood7Notkin1", 1);
}

void f_c06_a2_v(object a0, object a1)
{
	@SetVariable("KnowTwoSouls", 1);
}

void f_c0c_a2_v(object a0, object a1)
{
	@SetVariable("KnowNotkin", 1);
}

void f_c12_a2_v(object a0, object a1)
{
	@SetVariable("ood3Notkin1", 1);
}

void f_c18_a2_v(object a0, object a1)
{
	@SetVariable("ood4Notkin1", 1);
}

bool f_c1e_a1_b(object a0)
{
	if (f_bbc_a1_i("ood3Notkin2") == 0) {
		return true;
	}
	return false;
}

bool f_c2a_a1_b(object a0)
{
	if (f_bbc_a1_i("ood3Notkin3") == 0) {
		return true;
	}
	return false;
}

bool f_c36_a1_b(object a0)
{
	if (f_bbc_a1_i("ood4Notkin2") == 0) {
		return true;
	}
	return false;
}

bool f_c42_a1_b(object a0)
{
	if (f_bbc_a1_i("ood4Notkin3") == 0) {
		return true;
	}
	return false;
}

bool f_c4e_a1_b(object a0)
{
	if (f_bbc_a1_i("ood7Notkin1") == 0) {
		return true;
	}
	return false;
}

bool f_c5a_a1_b(object a0)
{
	if (f_bbc_a1_i("d4q03") == 2) {
		return true;
	}
	return false;
}

bool f_c66_a1_b(object a0)
{
	if (f_bbc_a1_i("d4q03_alldead") == 1) {
		return true;
	}
	return false;
}

bool f_c72_a1_b(object a0)
{
	if (f_bbc_a1_i("ood3Notkin1") == 0) {
		return true;
	}
	return false;
}

bool f_c7e_a1_b(object a0)
{
	if (f_bbc_a1_i("d4q03") == 3) {
		return true;
	}
	return false;
}

bool f_c8a_a1_b(object a0)
{
	if (f_bbc_a1_i("ood4Notkin1") == 0) {
		return true;
	}
	return false;
}

int f_c96_a0_i(void)
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

int f_ca7_a0_i(void)
{
	return 515548;
}

int f_ca9_a0_i(void)
{
	return 502873;
}

string f_cab_a0_s(void)
{
	return "ui/NPC_Notkin.png";
}

string f_cad_a0_s(void)
{
	return "ui/NPC_Notkin_b.png";
}

bool f_caf_a0_b(void)
{
	return true;
}

void f_cb1_a1_v(object a0)
{
	if (!g1) {
		t0{a0};
		g1 = true;
	}
	if (f_bca_a1_b(1)) {
		return;
	}
	if (f_bca_a1_b(3)) {
		t4{a0};
		return;
	}
	if (f_bca_a1_b(4)) {
		t6{a0};
		return;
	}
	if (f_bca_a1_b(7)) {
		t2{a0};
		return;
	}
	if (f_bca_a1_b(12)) {
		t8{a0};
		return;
	}
	t10{a0};
}

