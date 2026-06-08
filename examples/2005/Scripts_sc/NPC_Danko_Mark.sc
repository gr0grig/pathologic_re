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
		} while (!f_bc4_a0_b());
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
		f_c1e_a1_b(f_ccb_a0_o());
		if (!f_bc9_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d25_a0_i());
		L0->SetNPCDescription(f_d23_a0_i());
		L0->SetPhoto(f_d27_a0_s());
		L0->SetPhoto2(f_d29_a0_s());
		L0->SetPlayerName(f_eae_a0_i());
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
		f_c0d_a1_v(a0);
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
			f_a2_a1_v("Neutral");
			tv0->SetMessage(533341);
			tv0->ClearReplies();
			if (f_dbc_a1_b(tv1)) {
				tv0->AddReply(533342, 34847, 34846);
			}
			tv0->AddReply(533345, -1, 34849);
			tv0->AddReply(536042, -1, 37783);
			break;
			return;
		}
		if (f_d2b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ca8_a1_v(tv2);
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

	void f_a2_a1_v(string a0)
	{
		if (!f_d2b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_caf_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_cc4_a0_v();
			if (a1 == 34848) {
				f_d3d_a2_v(tv1, tv0);
			}
			if (a1 == 37812) {
				f_d3d_a2_v(tv1, tv0);
			}
			if (a1 == 37815) {
				f_d3d_a2_v(tv1, tv0);
			}
			if (a1 == 37814) {
				f_d3d_a2_v(tv1, tv0);
			}
			if (a1 == 37797) {
				f_d3d_a2_v(tv1, tv0);
			}
			if (a0 == 34845) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(533341);
				tv0->ClearReplies();
				if (f_dbc_a1_b(tv1)) {
					tv0->AddReply(533342, 34847, 34846);
				}
				tv0->AddReply(533345, -1, 34849);
				tv0->AddReply(536042, -1, 37783);
				return;
			}
			if (a0 == 34847) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(533343);
				tv0->ClearReplies();
				tv0->AddReply(536043, 37790, 37784);
				tv0->AddReply(536053, 37795, 37794);
				return;
			}
			if (a0 == 37795) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536054);
				tv0->ClearReplies();
				tv0->AddReply(536055, 37789, 37796);
				tv0->AddReply(536056, -1, 37797);
				return;
			}
			if (a0 == 37790) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536049);
				tv0->ClearReplies();
				tv0->AddReply(536050, 37792, 37791);
				return;
			}
			if (a0 == 37792) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536051);
				tv0->ClearReplies();
				tv0->AddReply(536052, 37785, 37793);
				return;
			}
			if (a0 == 37785) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536044);
				tv0->ClearReplies();
				tv0->AddReply(536045, 37787, 37786);
				tv0->AddReply(536057, 37799, 37798);
				return;
			}
			if (a0 == 37799) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536058);
				tv0->ClearReplies();
				tv0->AddReply(536059, 37803, 37800);
				tv0->AddReply(536063, 37807, 37806);
				return;
			}
			if (a0 == 37807) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536064);
				tv0->ClearReplies();
				tv0->AddReply(536065, 37809, 37808);
				return;
			}
			if (a0 == 37809) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536066);
				tv0->ClearReplies();
				tv0->AddReply(536067, 37803, 37811);
				tv0->AddReply(536069, -1, 37814);
				return;
			}
			if (a0 == 37787) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536046);
				tv0->ClearReplies();
				tv0->AddReply(536047, 37803, 37788);
				tv0->AddReply(536060, 37803, 37802);
				return;
			}
			if (a0 == 37803) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536061);
				tv0->ClearReplies();
				tv0->AddReply(536062, 37789, 37804);
				tv0->AddReply(536070, -1, 37815);
				return;
			}
			if (a0 == 37789) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536048);
				tv0->ClearReplies();
				tv0->AddReply(533344, -1, 34848);
				tv0->AddReply(536068, -1, 37812);
				return;
			}
			tv3 = true;
			if (f_d2b_a0_b()) {
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
		f_c1e_a1_b(f_ccb_a0_o());
		if (!f_bc9_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d25_a0_i());
		L0->SetNPCDescription(f_d23_a0_i());
		L0->SetPhoto(f_d27_a0_s());
		L0->SetPhoto2(f_d29_a0_s());
		L0->SetPlayerName(f_eae_a0_i());
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
		f_c0d_a1_v(a0);
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
			if (f_dc8_a1_b(tv1)) {
				f_d47_a2_v(tv1, tv0);
				f_d4d_a2_v(tv1, tv0);
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(534127);
				tv0->ClearReplies();
				tv0->AddReply(536495, 38296, 38295);
				tv0->AddReply(536508, 38310, 38309);
				break;
			}
			f_2b5_a1_v("Neutral");
			tv0->SetMessage(534129);
			tv0->ClearReplies();
			if (f_dd4_a1_b(tv1)) {
				tv0->AddReply(534146, 38315, 35733);
			}
			tv0->AddReply(534130, -1, 35717);
			break;
			return;
		}
		if (f_d2b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ca8_a1_v(tv2);
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

	void f_2b5_a1_v(string a0)
	{
		if (!f_d2b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_caf_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_cc4_a0_v();
			if (a1 == 35715) {
				f_d53_a2_v(tv1, tv0);
			}
			if (a1 == 35737) {
				f_d63_a2_v(tv1, tv0);
				f_d2d_a2_v(tv1, tv0);
			}
			if (a1 == 38334) {
				f_d80_a2_v(tv1, tv0);
			}
			if (a1 == 38333) {
				f_d80_a2_v(tv1, tv0);
			}
			if (a0 == 35714) {
				if (f_dc8_a1_b(tv1)) {
					f_d47_a2_v(tv1, tv0);
					f_d4d_a2_v(tv1, tv0);
					f_2b5_a1_v("Neutral");
					tv0->SetMessage(534127);
					tv0->ClearReplies();
					tv0->AddReply(536495, 38296, 38295);
					tv0->AddReply(536508, 38310, 38309);
					return;
				}
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(534129);
				tv0->ClearReplies();
				if (f_dd4_a1_b(tv1)) {
					tv0->AddReply(534146, 38315, 35733);
				}
				tv0->AddReply(534130, -1, 35717);
				return;
			}
			if (a0 == 38315) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(536512);
				tv0->ClearReplies();
				tv0->AddReply(536513, 38317, 38316);
				tv0->AddReply(536516, 38317, 38319);
				return;
			}
			if (a0 == 38317) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(536514);
				tv0->ClearReplies();
				tv0->AddReply(536515, 35734, 38318);
				tv0->AddReply(536517, 35734, 38321);
				return;
			}
			if (a0 == 35734) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(534147);
				tv0->ClearReplies();
				tv0->AddReply(536518, 38324, 38323);
				tv0->AddReply(536524, 38330, 38329);
				tv0->AddReply(536522, 38328, 38327);
				return;
			}
			if (a0 == 38328) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(536523);
				tv0->ClearReplies();
				tv0->AddReply(536526, 38330, 38331);
				return;
			}
			if (a0 == 38330) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(536525);
				tv0->ClearReplies();
				tv0->AddReply(536529, 38324, 38335);
				return;
			}
			if (a0 == 38324) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(536519);
				tv0->ClearReplies();
				tv0->AddReply(536520, 38326, 38325);
				tv0->AddReply(536527, -1, 38333);
				return;
			}
			if (a0 == 38326) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(536521);
				tv0->ClearReplies();
				tv0->AddReply(534148, 35736, 35735);
				tv0->AddReply(536528, -1, 38334);
				return;
			}
			if (a0 == 35736) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(534149);
				tv0->ClearReplies();
				tv0->AddReply(534150, -1, 35737);
				return;
			}
			if (a0 == 38310) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(536509);
				tv0->ClearReplies();
				tv0->AddReply(536510, 38298, 38311);
				return;
			}
			if (a0 == 38296) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(536496);
				tv0->ClearReplies();
				tv0->AddReply(536497, 38298, 38297);
				return;
			}
			if (a0 == 38298) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(536498);
				tv0->ClearReplies();
				tv0->AddReply(536499, 38300, 38299);
				return;
			}
			if (a0 == 38300) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(536500);
				tv0->ClearReplies();
				tv0->AddReply(536501, 38302, 38301);
				tv0->AddReply(536511, 38304, 38313);
				return;
			}
			if (a0 == 38302) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(536502);
				tv0->ClearReplies();
				tv0->AddReply(536503, 38304, 38303);
				return;
			}
			if (a0 == 38304) {
				f_2b5_a1_v("Neutral");
				tv0->SetMessage(536504);
				tv0->ClearReplies();
				tv0->AddReply(534128, -1, 35715);
				return;
			}
			tv3 = true;
			if (f_d2b_a0_b()) {
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
		f_c1e_a1_b(f_ccb_a0_o());
		if (!f_bc9_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d25_a0_i());
		L0->SetNPCDescription(f_d23_a0_i());
		L0->SetPhoto(f_d27_a0_s());
		L0->SetPhoto2(f_d29_a0_s());
		L0->SetPlayerName(f_eae_a0_i());
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
		f_c0d_a1_v(a0);
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
			f_4f1_a1_v("Neutral");
			tv0->SetMessage(535680);
			tv0->ClearReplies();
			tv0->AddReply(535681, 42137, 37367);
			tv0->AddReply(540004, -1, 41975);
			tv0->AddReply(540218, -1, 42198);
			break;
			return;
		}
		if (f_d2b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ca8_a1_v(tv2);
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

	void f_4f1_a1_v(string a0)
	{
		if (!f_d2b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_caf_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_cc4_a0_v();
			if (a0 == 37366) {
				f_4f1_a1_v("Neutral");
				tv0->SetMessage(535680);
				tv0->ClearReplies();
				tv0->AddReply(535681, 42137, 37367);
				tv0->AddReply(540004, -1, 41975);
				tv0->AddReply(540218, -1, 42198);
				return;
			}
			if (a0 == 42137) {
				f_4f1_a1_v("Neutral");
				tv0->SetMessage(540162);
				tv0->ClearReplies();
				tv0->AddReply(540163, 42140, 42138);
				tv0->AddReply(540164, 42140, 42139);
				return;
			}
			if (a0 == 42140) {
				f_4f1_a1_v("Neutral");
				tv0->SetMessage(540165);
				tv0->ClearReplies();
				tv0->AddReply(540166, 42144, 42142);
				tv0->AddReply(540167, 42144, 42143);
				return;
			}
			if (a0 == 42144) {
				f_4f1_a1_v("Neutral");
				tv0->SetMessage(540168);
				tv0->ClearReplies();
				tv0->AddReply(540169, 42147, 42146);
				return;
			}
			if (a0 == 42147) {
				f_4f1_a1_v("Neutral");
				tv0->SetMessage(540170);
				tv0->ClearReplies();
				tv0->AddReply(540171, -1, 42148);
				tv0->AddReply(540172, -1, 42149);
				return;
			}
			tv3 = true;
			if (f_d2b_a0_b()) {
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
		f_c1e_a1_b(f_ccb_a0_o());
		if (!f_bc9_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d25_a0_i());
		L0->SetNPCDescription(f_d23_a0_i());
		L0->SetPhoto(f_d27_a0_s());
		L0->SetPhoto2(f_d29_a0_s());
		L0->SetPlayerName(f_eae_a0_i());
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
		f_c0d_a1_v(a0);
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
			f_db6_a2_v(tv1, tv0);
			f_61d_a1_v("Neutral");
			tv0->SetMessage(500424);
			tv0->ClearReplies();
			tv0->AddReply(500425, 494, 493);
			tv0->AddReply(500429, 498, 497);
			break;
			return;
		}
		if (f_d2b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ca8_a1_v(tv2);
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

	void f_61d_a1_v(string a0)
	{
		if (!f_d2b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_caf_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_cc4_a0_v();
			if (a0 == 492) {
				f_db6_a2_v(tv1, tv0);
				f_61d_a1_v("Neutral");
				tv0->SetMessage(500424);
				tv0->ClearReplies();
				tv0->AddReply(500425, 494, 493);
				tv0->AddReply(500429, 498, 497);
				return;
			}
			if (a0 == 498) {
				f_61d_a1_v("Neutral");
				tv0->SetMessage(500430);
				tv0->ClearReplies();
				tv0->AddReply(500431, 501, 499);
				tv0->AddReply(500432, 494, 500);
				return;
			}
			if (a0 == 501) {
				f_61d_a1_v("Neutral");
				tv0->SetMessage(500433);
				tv0->ClearReplies();
				tv0->AddReply(500435, -1, 503);
				tv0->AddReply(500434, -1, 502);
				return;
			}
			if (a0 == 494) {
				f_61d_a1_v("Neutral");
				tv0->SetMessage(500426);
				tv0->ClearReplies();
				tv0->AddReply(500427, 504, 495);
				tv0->AddReply(500438, -1, 506);
				return;
			}
			if (a0 == 504) {
				f_61d_a1_v("Neutral");
				tv0->SetMessage(500436);
				tv0->ClearReplies();
				tv0->AddReply(500437, 501, 505);
				tv0->AddReply(500439, -1, 508);
				return;
			}
			tv3 = true;
			if (f_d2b_a0_b()) {
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
		f_c1e_a1_b(f_ccb_a0_o());
		if (!f_bc9_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d25_a0_i());
		L0->SetNPCDescription(f_d23_a0_i());
		L0->SetPhoto(f_d27_a0_s());
		L0->SetPhoto2(f_d29_a0_s());
		L0->SetPlayerName(f_eae_a0_i());
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
		f_c0d_a1_v(a0);
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
			f_74e_a1_v("Neutral");
			tv0->SetMessage(509489);
			tv0->ClearReplies();
			if (f_de0_a1_b(tv1)) {
				tv0->AddReply(509490, 10433, 10432);
			}
			tv0->AddReply(509499, -1, 10441);
			break;
			return;
		}
		if (f_d2b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ca8_a1_v(tv2);
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

	void f_74e_a1_v(string a0)
	{
		if (!f_d2b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_caf_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_cc4_a0_v();
			if (a1 == 10432) {
				f_d7a_a2_v(tv1, tv0);
			}
			if (a0 == 10431) {
				f_74e_a1_v("Neutral");
				tv0->SetMessage(509489);
				tv0->ClearReplies();
				if (f_de0_a1_b(tv1)) {
					tv0->AddReply(509490, 10433, 10432);
				}
				tv0->AddReply(509499, -1, 10441);
				return;
			}
			if (a0 == 10433) {
				f_74e_a1_v("Neutral");
				tv0->SetMessage(509491);
				tv0->ClearReplies();
				tv0->AddReply(509492, 10435, 10434);
				tv0->AddReply(509496, 10439, 10438);
				return;
			}
			if (a0 == 10439) {
				f_74e_a1_v("Neutral");
				tv0->SetMessage(509497);
				tv0->ClearReplies();
				tv0->AddReply(509498, -1, 10440);
				return;
			}
			if (a0 == 10435) {
				f_74e_a1_v("Neutral");
				tv0->SetMessage(509493);
				tv0->ClearReplies();
				tv0->AddReply(509494, -1, 10436);
				tv0->AddReply(509495, -1, 10437);
				return;
			}
			tv3 = true;
			if (f_d2b_a0_b()) {
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
		f_c1e_a1_b(f_ccb_a0_o());
		if (!f_bc9_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d25_a0_i());
		L0->SetNPCDescription(f_d23_a0_i());
		L0->SetPhoto(f_d27_a0_s());
		L0->SetPhoto2(f_d29_a0_s());
		L0->SetPlayerName(f_eae_a0_i());
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
		f_c0d_a1_v(a0);
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
			f_861_a1_v("Neutral");
			tv0->SetMessage(510917);
			tv0->ClearReplies();
			tv0->AddReply(510918, -1, 12067);
			break;
			return;
		}
		if (f_d2b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ca8_a1_v(tv2);
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

	void f_861_a1_v(string a0)
	{
		if (!f_d2b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_caf_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_cc4_a0_v();
			if (a0 == 12066) {
				f_861_a1_v("Neutral");
				tv0->SetMessage(510917);
				tv0->ClearReplies();
				tv0->AddReply(510918, -1, 12067);
				return;
			}
			tv3 = true;
			if (f_d2b_a0_b()) {
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
		f_c1e_a1_b(f_ccb_a0_o());
		if (!f_bc9_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d25_a0_i());
		L0->SetNPCDescription(f_d23_a0_i());
		L0->SetPhoto(f_d27_a0_s());
		L0->SetPhoto2(f_d29_a0_s());
		L0->SetPlayerName(f_eae_a0_i());
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
		f_c0d_a1_v(a0);
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
			f_92c_a1_v("Neutral");
			tv0->SetMessage(513312);
			tv0->ClearReplies();
			if (f_dec_a1_b(tv1)) {
				tv0->AddReply(513314, 14550, 14549);
			}
			tv0->AddReply(513313, -1, 14548);
			break;
			return;
		}
		if (f_d2b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ca8_a1_v(tv2);
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

	void f_92c_a1_v(string a0)
	{
		if (!f_d2b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_caf_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_cc4_a0_v();
			if (a1 == 14570) {
				f_d8a_a2_v(tv1, tv0);
			}
			if (a0 == 14547) {
				f_92c_a1_v("Neutral");
				tv0->SetMessage(513312);
				tv0->ClearReplies();
				if (f_dec_a1_b(tv1)) {
					tv0->AddReply(513314, 14550, 14549);
				}
				tv0->AddReply(513313, -1, 14548);
				return;
			}
			if (a0 == 14550) {
				f_92c_a1_v("Neutral");
				tv0->SetMessage(513315);
				tv0->ClearReplies();
				tv0->AddReply(513317, 14553, 14552);
				tv0->AddReply(513316, 14555, 14551);
				return;
			}
			if (a0 == 14553) {
				f_92c_a1_v("Neutral");
				tv0->SetMessage(513318);
				tv0->ClearReplies();
				tv0->AddReply(513319, 14555, 14554);
				return;
			}
			if (a0 == 14555) {
				f_92c_a1_v("Neutral");
				tv0->SetMessage(513320);
				tv0->ClearReplies();
				tv0->AddReply(513335, 14567, 14566);
				return;
			}
			if (a0 == 14567) {
				f_92c_a1_v("Neutral");
				tv0->SetMessage(513336);
				tv0->ClearReplies();
				tv0->AddReply(513337, 14569, 14568);
				return;
			}
			if (a0 == 14569) {
				f_92c_a1_v("Neutral");
				tv0->SetMessage(513338);
				tv0->ClearReplies();
				tv0->AddReply(513339, -1, 14570);
				return;
			}
			tv3 = true;
			if (f_d2b_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t15
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_c1e_a1_b(f_ccb_a0_o());
		if (!f_bc9_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d25_a0_i());
		L0->SetNPCDescription(f_d23_a0_i());
		L0->SetPhoto(f_d27_a0_s());
		L0->SetPhoto2(f_d29_a0_s());
		L0->SetPlayerName(f_eae_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t16{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c0d_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t16
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
			f_a63_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_d2b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ca8_a1_v(tv2);
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

	void f_a63_a1_v(string a0)
	{
		if (!f_d2b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_caf_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_cc4_a0_v();
			if (a0 == 42551) {
				f_a63_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_d2b_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t17
{
	var Vector tv0;

	void init(void)
	{
		f_aa7_a0_v();
	}

	void f_aa7_a0_v(void)
	{
		if (!f_bc4_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_b5d_a0_v();
		}
	}

	bool f_abb_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_bbb_a1_b(L0);
	}

	void f_aca_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_acf_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_ba9_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_ae5_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_aee_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_aee_a0_v();
			if (f_bc4_a0_b() && f_acf_a0_b()) {
				if (f_abb_a0_b()) {
					f_c58_a1_b(f_ccb_a0_o());
				}
			} else {
				f_aca_a0_v();
				f_ae5_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_ba4_a0_v();
		f_aee_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_aee_a0_v();
		f_ca8_a1_v("Neutral");
		f_ae5_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_ae5_a0_v();
		} else {
			f_ca8_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_ba4_a0_v();
			f_bbb_a1_b(a0);
			enable OnUse;
			f_ebf_a1_v(a0);
			f_ca8_a1_v("Neutral");
			f_aee_a0_v();
			f_ae5_a0_v();
		}
	}
}

void f_b5d_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_bc4_a0_b()) {
		return;
	}
	L0 = f_d12_a0_i();
	for (L1 = 0; L1 < 5 && f_bc4_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_d0b_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_ba2_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_ba2_a0_b(void)
{
	return true;
}

void f_ba4_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_ba9_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_bb1_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_bbb_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_bb1_a1_b(L0);
}

bool f_bc4_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_bc9_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_cd1_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_d2b_a0_b()) {
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

void f_c0d_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_d2b_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_c1e_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_c58_a1_b(a0)) {
			if (!f_c7d_a1_b(a0)) {
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
		if (!f_c7d_a1_b(a0)) {
			if (!f_c58_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_c58_a1_b(object a0)
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
	return f_cb5_a1_b(L4);
}

bool f_c7d_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_cfc_a0_i() + "m";
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
	return f_cb5_a1_b(L4);
}

void f_ca8_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_caf_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_cb5_a1_b(string a0)
{
	if (f_d2b_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_cc4_a0_v(void)
{
	if (f_d2b_a0_b()) {
		@lshStopSpeech();
	}
}

object f_ccb_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_cd1_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_cdb_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_ce0_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

bool f_ceb_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_cf7_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_cfc_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_d05_a1_b(int a0)
{
	return f_cfc_a0_i() == a0;
}

string f_d0b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_d12_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_d0b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_d23_a0_i(void)
{
	return 515544;
}

int f_d25_a0_i(void)
{
	return 502869;
}

string f_d27_a0_s(void)
{
	return "ui/NPC_Mark.png";
}

string f_d29_a0_s(void)
{
	return "ui/NPC_Mark_b.png";
}

bool f_d2b_a0_b(void)
{
	return true;
}

void f_d2d_a2_v(object a0, object a1)
{
	f_e8d_a3_v(f_e7c_a0_o(), "pt_map_uprava_admin", 2);
	a1->ShowMap(f_e7c_a0_o());
}

void f_d3d_a2_v(object a0, object a1)
{
	f_e46_a0_v();
	f_ceb_a2_b("quest_d8_04", "completed");
}

void f_d47_a2_v(object a0, object a1)
{
	@SetVariable("ood10Mark1", 1);
}

void f_d4d_a2_v(object a0, object a1)
{
	@SetVariable("d10MarkVisit", 1);
}

void f_d53_a2_v(object a0, object a1)
{
	@SetVariable("d10q03", 1);
	f_df8_a0_v();
	f_e1f_a0_v();
	f_ce0_a1_o("quest_d10_03");
}

void f_d63_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d10q03", 3);
	L0 = f_e7c_a0_o();
	L0->AddMark("d10q03MarkGotoBlock", "pt_map_uprava_admin", 0, 515301, f_cf7_a0_f());
	f_e12_a0_v();
}

void f_d7a_a2_v(object a0, object a1)
{
	@SetVariable("ood2Mark1", 1);
}

void f_d80_a2_v(object a0, object a1)
{
	f_e05_a0_v();
	f_ceb_a2_b("quest_d10_03", "fail");
}

void f_d8a_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d7q02", 1);
	L0 = f_e7c_a0_o();
	L0->AddMark("d7q02MarkGotoCemetery", "pt_d7q02_corpse", 0, 515427, f_cf7_a0_f());
	L0->AddMark("d7q02MarkGotoAlexandr", "pt_map_alexandr", 0, 515428, f_cf7_a0_f());
	f_e2c_a0_v();
	f_e39_a0_v();
	f_ce0_a1_o("quest_d7_02");
	f_ceb_a2_b("quest_d7_02", "place_corpse");
}

void f_db6_a2_v(object a0, object a1)
{
	@SetVariable("KnowMark", 1);
}

bool f_dbc_a1_b(object a0)
{
	if (f_cdb_a1_i("d8q04") == 3) {
		return true;
	}
	return false;
}

bool f_dc8_a1_b(object a0)
{
	if (f_cdb_a1_i("ood10Mark1") == 0) {
		return true;
	}
	return false;
}

bool f_dd4_a1_b(object a0)
{
	if (f_cdb_a1_i("d10q03") == 2) {
		return true;
	}
	return false;
}

bool f_de0_a1_b(object a0)
{
	if (f_cdb_a1_i("ood2Mark1") == 0) {
		return true;
	}
	return false;
}

bool f_dec_a1_b(object a0)
{
	if (f_cdb_a1_i("d7q02") == 0) {
		return true;
	}
	return false;
}

void f_df8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 672, 2, 534157);
	f_e60_a2_b(L0, -1);
}

void f_e05_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 763, 2, 540030);
	f_e60_a2_b(L0, 672);
}

void f_e12_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 675, 2, 534160);
	f_e60_a2_b(L0, 672);
}

void f_e1f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 673, 2, 534158);
	f_e60_a2_b(L0, 672);
}

void f_e2c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 170, 2, 515422);
	f_e60_a2_b(L0, -1);
}

void f_e39_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 171, 2, 515423);
	f_e60_a2_b(L0, 170);
}

void f_e46_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 653, 2, 533366);
	f_e60_a2_b(L0, 649);
}

object f_e53_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_e60_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_e53_a0_o();
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

object f_e7c_a0_o(void)
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

void f_e8d_a3_v(object a0, string a1, float a2)
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

int f_eae_a0_i(void)
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

void f_ebf_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_mark", L0);
	if (!L0) {
		t7{a0};
		@SetVariable("mt_mark", 1);
	}
	if (f_d05_a1_b(1)) {
		return;
	}
	if (f_d05_a1_b(2)) {
		t9{a0};
		return;
	}
	if (f_d05_a1_b(4)) {
		t11{a0};
		return;
	}
	if (f_d05_a1_b(7)) {
		t13{a0};
		return;
	}
	if (f_d05_a1_b(8)) {
		t1{a0};
		return;
	}
	if (f_d05_a1_b(10)) {
		t3{a0};
		return;
	}
	if (f_d05_a1_b(12)) {
		t5{a0};
		return;
	}
	t15{a0};
}

