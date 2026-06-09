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
		} while (!f_ae0_a0_b());
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
		f_b3a_a1_b(f_be7_a0_o());
		if (!f_ae5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c3c_a0_i());
		L0->SetNPCDescription(f_c3a_a0_i());
		L0->SetPhoto(f_c3e_a0_s());
		L0->SetPhoto2(f_c40_a0_s());
		L0->SetPlayerName(f_e02_a0_i());
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
		f_b29_a1_v(a0);
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
			f_d5_a1_v("Neutral");
			tv0->SetMessage(525297);
			tv0->ClearReplies();
			if (f_d23_a1_b(tv1) && f_d0b_a1_b(tv1) || f_d17_a1_b(tv1) && f_d23_a1_b(tv1)) {
				tv0->AddReply(525298, 26667, 26666);
			}
			if (f_d0b_a1_b(tv1) && !f_d23_a1_b(tv1) && f_d42_a1_b(tv1)) {
				tv0->AddReply(525310, 26679, 26678);
			}
			tv0->AddReply(525305, -1, 26673);
			break;
			return;
		}
		if (f_c42_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bc4_a1_v(tv2);
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

	void f_d5_a1_v(string a0)
	{
		if (!f_c42_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bcb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_be0_a0_v();
			if (a1 == 26672) {
				f_c74_a2_v(tv1, tv0);
				f_cdb_a2_v(tv1, tv0);
			}
			if (a1 == 30634) {
				f_c74_a2_v(tv1, tv0);
				f_cdb_a2_v(tv1, tv0);
			}
			if (a1 == 26678) {
				f_c89_a2_v(tv1, tv0);
			}
			if (a0 == 26665) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(525297);
				tv0->ClearReplies();
				if (f_d23_a1_b(tv1) && f_d0b_a1_b(tv1) || f_d17_a1_b(tv1) && f_d23_a1_b(tv1)) {
					tv0->AddReply(525298, 26667, 26666);
				}
				if (f_d0b_a1_b(tv1) && !f_d23_a1_b(tv1) && f_d42_a1_b(tv1)) {
					tv0->AddReply(525310, 26679, 26678);
				}
				tv0->AddReply(525305, -1, 26673);
				return;
			}
			if (a0 == 26679) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(525311);
				tv0->ClearReplies();
				tv0->AddReply(525312, 42889, 26680);
				tv0->AddReply(540831, -1, 42888);
				return;
			}
			if (a0 == 42889) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(540832);
				tv0->ClearReplies();
				tv0->AddReply(540833, -1, 42890);
				tv0->AddReply(540834, -1, 42891);
				return;
			}
			if (a0 == 26667) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(525299);
				tv0->ClearReplies();
				tv0->AddReply(529180, 30631, 30630);
				tv0->AddReply(540812, 30633, 42864);
				return;
			}
			if (a0 == 30631) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(529181);
				tv0->ClearReplies();
				tv0->AddReply(529182, 30633, 30632);
				return;
			}
			if (a0 == 30633) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(529183);
				tv0->ClearReplies();
				tv0->AddReply(525300, 26669, 26668);
				tv0->AddReply(540813, 42867, 42866);
				return;
			}
			if (a0 == 42867) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(540814);
				tv0->ClearReplies();
				tv0->AddReply(540819, 26669, 42872);
				tv0->AddReply(540820, 42875, 42874);
				return;
			}
			if (a0 == 42875) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(540821);
				tv0->ClearReplies();
				tv0->AddReply(540822, 42868, 42876);
				return;
			}
			if (a0 == 26669) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(525301);
				tv0->ClearReplies();
				tv0->AddReply(525302, 42868, 26670);
				tv0->AddReply(540826, 42882, 42881);
				return;
			}
			if (a0 == 42882) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(540827);
				tv0->ClearReplies();
				tv0->AddReply(540828, 42879, 42883);
				return;
			}
			if (a0 == 42868) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(540815);
				tv0->ClearReplies();
				tv0->AddReply(540816, 42870, 42869);
				tv0->AddReply(540823, 42879, 42878);
				return;
			}
			if (a0 == 42879) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(540824);
				tv0->ClearReplies();
				tv0->AddReply(540825, 42870, 42880);
				return;
			}
			if (a0 == 42870) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(540817);
				tv0->ClearReplies();
				tv0->AddReply(540818, 26671, 42871);
				return;
			}
			if (a0 == 26671) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(525303);
				tv0->ClearReplies();
				tv0->AddReply(525304, -1, 26672);
				tv0->AddReply(540829, 42887, 42886);
				return;
			}
			if (a0 == 42887) {
				f_d5_a1_v("Neutral");
				tv0->SetMessage(540830);
				tv0->ClearReplies();
				tv0->AddReply(529184, -1, 30634);
				return;
			}
			tv3 = true;
			if (f_c42_a0_b()) {
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
		f_b3a_a1_b(f_be7_a0_o());
		if (!f_ae5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c3c_a0_i());
		L0->SetNPCDescription(f_c3a_a0_i());
		L0->SetPhoto(f_c3e_a0_s());
		L0->SetPhoto2(f_c40_a0_s());
		L0->SetPlayerName(f_e02_a0_i());
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
		f_b29_a1_v(a0);
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
			f_323_a1_v("Neutral");
			tv0->SetMessage(525498);
			tv0->ClearReplies();
			tv0->AddReply(525499, -1, 26855);
			tv0->AddReply(526256, -1, 27530);
			break;
			return;
		}
		if (f_c42_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bc4_a1_v(tv2);
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

	void f_323_a1_v(string a0)
	{
		if (!f_c42_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bcb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_be0_a0_v();
			if (a0 == 26854) {
				f_323_a1_v("Neutral");
				tv0->SetMessage(525498);
				tv0->ClearReplies();
				tv0->AddReply(525499, -1, 26855);
				tv0->AddReply(526256, -1, 27530);
				return;
			}
			tv3 = true;
			if (f_c42_a0_b()) {
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
		f_b3a_a1_b(f_be7_a0_o());
		if (!f_ae5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c3c_a0_i());
		L0->SetNPCDescription(f_c3a_a0_i());
		L0->SetPhoto(f_c3e_a0_s());
		L0->SetPhoto2(f_c40_a0_s());
		L0->SetPlayerName(f_e02_a0_i());
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
		f_b29_a1_v(a0);
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
			if (f_d4e_a1_b(tv1)) {
				f_ca9_a2_v(tv1, tv0);
				f_caf_a2_v(tv1, tv0);
				f_40c_a1_v("Neutral");
				tv0->SetMessage(525944);
				tv0->ClearReplies();
				tv0->AddReply(529090, 30536, 30535);
				break;
			}
			f_40c_a1_v("Neutral");
			tv0->SetMessage(525948);
			tv0->ClearReplies();
			tv0->AddReply(525949, -1, 27233);
			tv0->AddReply(529092, -1, 30537);
			break;
			return;
		}
		if (f_c42_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bc4_a1_v(tv2);
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

	void f_40c_a1_v(string a0)
	{
		if (!f_c42_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bcb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_be0_a0_v();
			if (a1 == 27231) {
				f_c8f_a2_v(tv1, tv0);
				f_ce1_a2_v(tv1, tv0);
			}
			if (a0 == 27228) {
				if (f_d4e_a1_b(tv1)) {
					f_ca9_a2_v(tv1, tv0);
					f_caf_a2_v(tv1, tv0);
					f_40c_a1_v("Neutral");
					tv0->SetMessage(525944);
					tv0->ClearReplies();
					tv0->AddReply(529090, 30536, 30535);
					return;
				}
				f_40c_a1_v("Neutral");
				tv0->SetMessage(525948);
				tv0->ClearReplies();
				tv0->AddReply(525949, -1, 27233);
				tv0->AddReply(529092, -1, 30537);
				return;
			}
			if (a0 == 30536) {
				f_40c_a1_v("Neutral");
				tv0->SetMessage(529091);
				tv0->ClearReplies();
				tv0->AddReply(525945, 27230, 27229);
				return;
			}
			if (a0 == 27230) {
				f_40c_a1_v("Neutral");
				tv0->SetMessage(525946);
				tv0->ClearReplies();
				tv0->AddReply(529093, 30539, 30538);
				return;
			}
			if (a0 == 30539) {
				f_40c_a1_v("Neutral");
				tv0->SetMessage(529094);
				tv0->ClearReplies();
				tv0->AddReply(525947, -1, 27231);
				return;
			}
			tv3 = true;
			if (f_c42_a0_b()) {
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
		f_b3a_a1_b(f_be7_a0_o());
		if (!f_ae5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c3c_a0_i());
		L0->SetNPCDescription(f_c3a_a0_i());
		L0->SetPhoto(f_c3e_a0_s());
		L0->SetPhoto2(f_c40_a0_s());
		L0->SetPlayerName(f_e02_a0_i());
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
		f_b29_a1_v(a0);
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
			if (f_d5a_a1_b(tv1)) {
				f_cb5_a2_v(tv1, tv0);
				f_cbb_a2_v(tv1, tv0);
				f_55b_a1_v("Neutral");
				tv0->SetMessage(528802);
				tv0->ClearReplies();
				tv0->AddReply(526757, 30208, 28034);
				tv0->AddReply(528803, 30208, 30216);
				break;
			}
			f_55b_a1_v("Neutral");
			tv0->SetMessage(526758);
			tv0->ClearReplies();
			tv0->AddReply(526759, -1, 28036);
			tv0->AddReply(528801, -1, 30214);
			break;
			return;
		}
		if (f_c42_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bc4_a1_v(tv2);
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

	void f_55b_a1_v(string a0)
	{
		if (!f_c42_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bcb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_be0_a0_v();
			if (a1 == 30213) {
				f_cc1_a2_v(tv1, tv0);
				f_ce1_a2_v(tv1, tv0);
			}
			if (a0 == 30215) {
				if (f_d5a_a1_b(tv1)) {
					f_cb5_a2_v(tv1, tv0);
					f_cbb_a2_v(tv1, tv0);
					f_55b_a1_v("Neutral");
					tv0->SetMessage(528802);
					tv0->ClearReplies();
					tv0->AddReply(526757, 30208, 28034);
					tv0->AddReply(528803, 30208, 30216);
					return;
				}
				f_55b_a1_v("Neutral");
				tv0->SetMessage(526758);
				tv0->ClearReplies();
				tv0->AddReply(526759, -1, 28036);
				tv0->AddReply(528801, -1, 30214);
				return;
			}
			if (a0 == 30208) {
				f_55b_a1_v("Neutral");
				tv0->SetMessage(528795);
				tv0->ClearReplies();
				tv0->AddReply(528796, 30210, 30209);
				tv0->AddReply(541035, -1, 43129);
				return;
			}
			if (a0 == 30210) {
				f_55b_a1_v("Neutral");
				tv0->SetMessage(528797);
				tv0->ClearReplies();
				tv0->AddReply(528798, 30212, 30211);
				return;
			}
			if (a0 == 30212) {
				f_55b_a1_v("Neutral");
				tv0->SetMessage(528799);
				tv0->ClearReplies();
				tv0->AddReply(528800, -1, 30213);
				return;
			}
			tv3 = true;
			if (f_c42_a0_b()) {
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
		f_b3a_a1_b(f_be7_a0_o());
		if (!f_ae5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c3c_a0_i());
		L0->SetNPCDescription(f_c3a_a0_i());
		L0->SetPhoto(f_c3e_a0_s());
		L0->SetPhoto2(f_c40_a0_s());
		L0->SetPlayerName(f_e02_a0_i());
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
		f_b29_a1_v(a0);
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
			f_696_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_c42_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bc4_a1_v(tv2);
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

	void f_696_a1_v(string a0)
	{
		if (!f_c42_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bcb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_be0_a0_v();
			if (a0 == 36960) {
				f_696_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_696_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_696_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_c42_a0_b()) {
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
		f_b3a_a1_b(f_be7_a0_o());
		if (!f_ae5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c3c_a0_i());
		L0->SetNPCDescription(f_c3a_a0_i());
		L0->SetPhoto(f_c3e_a0_s());
		L0->SetPhoto2(f_c40_a0_s());
		L0->SetPlayerName(f_e02_a0_i());
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
		f_b29_a1_v(a0);
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
			if (f_ce7_a1_b(tv1) && !f_cf3_a1_b(tv1)) {
				f_c54_a2_v(tv1, tv0);
				f_7ca_a1_v("Neutral");
				tv0->SetMessage(524644);
				tv0->ClearReplies();
				tv0->AddReply(526298, 27579, 27578);
				tv0->AddReply(526300, 27581, 27580);
				break;
			}
			f_7ca_a1_v("Neutral");
			tv0->SetMessage(524648);
			tv0->ClearReplies();
			if (f_cf3_a1_b(tv1) && f_cff_a1_b(tv1)) {
				tv0->AddReply(524681, 26021, 26020);
			}
			tv0->AddReply(524649, -1, 25988);
			break;
			return;
		}
		if (f_c42_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bc4_a1_v(tv2);
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

	void f_7ca_a1_v(string a0)
	{
		if (!f_c42_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bcb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_be0_a0_v();
			if (a1 == 26020) {
				f_c5a_a2_v(tv1, tv0);
			}
			if (a1 == 26022) {
				f_c60_a2_v(tv1, tv0);
				f_c44_a2_v(tv1, tv0);
			}
			if (a0 == 25983) {
				if (f_ce7_a1_b(tv1) && !f_cf3_a1_b(tv1)) {
					f_c54_a2_v(tv1, tv0);
					f_7ca_a1_v("Neutral");
					tv0->SetMessage(524644);
					tv0->ClearReplies();
					tv0->AddReply(526298, 27579, 27578);
					tv0->AddReply(526300, 27581, 27580);
					return;
				}
				f_7ca_a1_v("Neutral");
				tv0->SetMessage(524648);
				tv0->ClearReplies();
				if (f_cf3_a1_b(tv1) && f_cff_a1_b(tv1)) {
					tv0->AddReply(524681, 26021, 26020);
				}
				tv0->AddReply(524649, -1, 25988);
				return;
			}
			if (a0 == 26021) {
				f_7ca_a1_v("Neutral");
				tv0->SetMessage(524682);
				tv0->ClearReplies();
				tv0->AddReply(526310, 27593, 27592);
				return;
			}
			if (a0 == 27593) {
				f_7ca_a1_v("Neutral");
				tv0->SetMessage(526311);
				tv0->ClearReplies();
				tv0->AddReply(526312, 27595, 27594);
				return;
			}
			if (a0 == 27595) {
				f_7ca_a1_v("Neutral");
				tv0->SetMessage(526313);
				tv0->ClearReplies();
				tv0->AddReply(524683, -1, 26022);
				return;
			}
			if (a0 == 27581) {
				f_7ca_a1_v("Neutral");
				tv0->SetMessage(526301);
				tv0->ClearReplies();
				tv0->AddReply(526302, 27579, 27582);
				return;
			}
			if (a0 == 27579) {
				f_7ca_a1_v("Neutral");
				tv0->SetMessage(526299);
				tv0->ClearReplies();
				tv0->AddReply(526303, 27585, 27584);
				return;
			}
			if (a0 == 27585) {
				f_7ca_a1_v("Neutral");
				tv0->SetMessage(526304);
				tv0->ClearReplies();
				tv0->AddReply(524645, 25985, 25984);
				tv0->AddReply(526305, 25985, 27586);
				return;
			}
			if (a0 == 25985) {
				f_7ca_a1_v("Neutral");
				tv0->SetMessage(524646);
				tv0->ClearReplies();
				tv0->AddReply(524647, -1, 25986);
				tv0->AddReply(526306, 27589, 27588);
				return;
			}
			if (a0 == 27589) {
				f_7ca_a1_v("Neutral");
				tv0->SetMessage(526307);
				tv0->ClearReplies();
				tv0->AddReply(526308, -1, 27590);
				tv0->AddReply(526309, -1, 27591);
				return;
			}
			tv3 = true;
			if (f_c42_a0_b()) {
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
		f_b3a_a1_b(f_be7_a0_o());
		if (!f_ae5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c3c_a0_i());
		L0->SetNPCDescription(f_c3a_a0_i());
		L0->SetPhoto(f_c3e_a0_s());
		L0->SetPhoto2(f_c40_a0_s());
		L0->SetPlayerName(f_e02_a0_i());
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
		f_b29_a1_v(a0);
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
			f_97f_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_c42_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bc4_a1_v(tv2);
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

	void f_97f_a1_v(string a0)
	{
		if (!f_c42_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bcb_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_be0_a0_v();
			if (a0 == 42548) {
				f_97f_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_c42_a0_b()) {
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
		f_9c3_a0_v();
	}

	void f_9c3_a0_v(void)
	{
		if (!f_ae0_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_a79_a0_v();
		}
	}

	bool f_9d7_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_ad7_a1_b(L0);
	}

	void f_9e6_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_9eb_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_ac5_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_a01_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_a0a_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_a0a_a0_v();
			if (f_ae0_a0_b() && f_9eb_a0_b()) {
				if (f_9d7_a0_b()) {
					f_b74_a1_b(f_be7_a0_o());
				}
			} else {
				f_9e6_a0_v();
				f_a01_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_ac0_a0_v();
		f_a0a_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_a0a_a0_v();
		f_bc4_a1_v("Neutral");
		f_a01_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_a01_a0_v();
		} else {
			f_bc4_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_ac0_a0_v();
			f_ad7_a1_b(a0);
			enable OnUse;
			f_e13_a1_v(a0);
			f_bc4_a1_v("Neutral");
			f_a0a_a0_v();
			f_a01_a0_v();
		}
	}
}

void f_a79_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_ae0_a0_b()) {
		return;
	}
	L0 = f_c29_a0_i();
	for (L1 = 0; L1 < 5 && f_ae0_a0_b(); L1++) {
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
			@PlayAnimation("all", f_c22_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_abe_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_abe_a0_b(void)
{
	return true;
}

void f_ac0_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_ac5_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_acd_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_ad7_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_acd_a1_b(L0);
}

bool f_ae0_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_ae5_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_bed_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_c42_a0_b()) {
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

void f_b29_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_c42_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_b3a_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_b74_a1_b(a0)) {
			if (!f_b99_a1_b(a0)) {
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
		if (!f_b99_a1_b(a0)) {
			if (!f_b74_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_b74_a1_b(object a0)
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
	return f_bd1_a1_b(L4);
}

bool f_b99_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_c13_a0_i() + "m";
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
	return f_bd1_a1_b(L4);
}

void f_bc4_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_bcb_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_bd1_a1_b(string a0)
{
	if (f_c42_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_be0_a0_v(void)
{
	if (f_c42_a0_b()) {
		@lshStopSpeech();
	}
}

object f_be7_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_bed_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_bf7_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_bfc_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

bool f_c07_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

float f_c0e_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_c13_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_c1c_a1_b(int a0)
{
	return f_c13_a0_i() == a0;
}

string f_c22_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_c29_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_c22_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_c3a_a0_i(void)
{
	return 515542;
}

int f_c3c_a0_i(void)
{
	return 502867;
}

string f_c3e_a0_s(void)
{
	return "ui/NPC_Laska.png";
}

string f_c40_a0_s(void)
{
	return "ui/NPC_Laska_b.png";
}

bool f_c42_a0_b(void)
{
	return true;
}

void f_c44_a2_v(object a0, object a1)
{
	f_de1_a3_v(f_dd0_a0_o(), "pt_map_burah_home", 2);
	a1->ShowMap(f_dd0_a0_o());
}

void f_c54_a2_v(object a0, object a1)
{
	@SetVariable("ook1Laska1", 1);
}

void f_c5a_a2_v(object a0, object a1)
{
	@SetVariable("ook1Laska2", 1);
}

void f_c60_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k1q01LaskaGotoBurah", 1);
	L0 = f_dd0_a0_o();
	L0->AddMark("k1q01LaskaGotoBurah", "pt_map_burah_home", 1, 524731, f_c0e_a0_f());
}

void f_c74_a2_v(object a0, object a1)
{
	int L0;
	@SetVariable("k2q02", 3);
	f_d66_a0_v();
	a0->RemoveItemByType(L0, "milk", 1);
	a0->RemoveItemByType(L0, "bread", 1);
	a0->RemoveItemByType(L0, "flower", 1);
}

void f_c89_a2_v(object a0, object a1)
{
	@SetVariable("ook2Laska1", 1);
}

void f_c8f_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_dd0_a0_o();
	L0->AddMark("k5q03LaskaGotoAlbinos", "pt_k5q03_albinos_path12", 0, 526026, f_c0e_a0_f());
	f_d73_a0_v();
	f_d80_a0_v();
	f_bfc_a1_o("quest_k5_03");
}

void f_ca9_a2_v(object a0, object a1)
{
	@SetVariable("ook5Laska1", 1);
}

void f_caf_a2_v(object a0, object a1)
{
	@SetVariable("k5LaskaVisit", 1);
}

void f_cb5_a2_v(object a0, object a1)
{
	@SetVariable("k6LaskaVisit", 1);
}

void f_cbb_a2_v(object a0, object a1)
{
	@SetVariable("ook6Laska1", 1);
}

void f_cc1_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_dd0_a0_o();
	L0->AddMark("k6q03LaskaGotoAlbinos", "pt_k6q03_albinos_path9", 0, 511153, f_c0e_a0_f());
	f_d8d_a0_v();
	f_d9a_a0_v();
	f_bfc_a1_o("quest_k6_03");
}

void f_cdb_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_ce1_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

bool f_ce7_a1_b(object a0)
{
	if (f_bf7_a1_i("ook1Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_cf3_a1_b(object a0)
{
	if (f_bf7_a1_i("k1q01") == 4) {
		return true;
	}
	return false;
}

bool f_cff_a1_b(object a0)
{
	if (f_bf7_a1_i("ook1Laska2") == 0) {
		return true;
	}
	return false;
}

bool f_d0b_a1_b(object a0)
{
	if (f_bf7_a1_i("k2q02") == 1) {
		return true;
	}
	return false;
}

bool f_d17_a1_b(object a0)
{
	if (f_bf7_a1_i("k2q02") == 2) {
		return true;
	}
	return false;
}

bool f_d23_a1_b(object a0)
{
	if (f_c07_a2_b(a0, "flower") && f_c07_a2_b(a0, "milk") && f_c07_a2_b(a0, "bread")) {
		return true;
	}
	return false;
}

bool f_d42_a1_b(object a0)
{
	if (f_bf7_a1_i("ook2Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_d4e_a1_b(object a0)
{
	if (f_bf7_a1_i("ook5Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_d5a_a1_b(object a0)
{
	if (f_bf7_a1_i("ook6Laska1") == 0) {
		return true;
	}
	return false;
}

void f_d66_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 473, 2, 527789);
	f_db4_a2_b(L0, 470);
}

void f_d73_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 405, 2, 526023);
	f_db4_a2_b(L0, -1);
}

void f_d80_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 406, 2, 526024);
	f_db4_a2_b(L0, 405);
}

void f_d8d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 748, 2, 539627);
	f_db4_a2_b(L0, -1);
}

void f_d9a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 749, 2, 539628);
	f_db4_a2_b(L0, 748);
}

object f_da7_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_db4_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_da7_a0_o();
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

object f_dd0_a0_o(void)
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

void f_de1_a3_v(object a0, string a1, float a2)
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

int f_e02_a0_i(void)
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

void f_e13_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_laska", L0);
	if (!L0) {
		t3{a0};
		@SetVariable("mt_laska", 1);
	}
	if (f_c1c_a1_b(1)) {
		t11{a0};
		return;
	}
	if (f_c1c_a1_b(2)) {
		t1{a0};
		return;
	}
	if (f_c1c_a1_b(5)) {
		t5{a0};
		return;
	}
	if (f_c1c_a1_b(6)) {
		t7{a0};
		return;
	}
	if (f_c1c_a1_b(12)) {
		t9{a0};
		return;
	}
	t13{a0};
}

