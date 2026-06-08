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
		} while (!f_ced_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			if (f_e73_a0_b()) {
				f_e0c_a1_v("Neutral");
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
		if (f_e73_a0_b()) {
			@lshStopAnimation();
		} else {
			@StopAnimation();
		}
		@StopTrade();
		tv0 = true;
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
		f_d47_a1_b(f_e2f_a0_o());
		if (!f_cf2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e6d_a0_i());
		L0->SetNPCDescription(f_e6b_a0_i());
		L0->SetPhoto(f_e6f_a0_s());
		L0->SetPhoto2(f_e71_a0_s());
		L0->SetPlayerName(f_f13_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d36_a1_v(a0);
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
			f_ca_a1_v("Neutral");
			tv0->SetMessage(525362);
			tv0->ClearReplies();
			tv0->AddReply(525363, -1, 26731);
			if (f_e8c_a1_b(tv1)) {
				tv0->AddReply(525364, 26733, 26732);
			}
			tv0->AddReply(525368, -1, 26736);
			break;
			return;
		}
		if (f_e73_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e0c_a1_v(tv2);
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

	void f_ca_a1_v(string a0)
	{
		if (!f_e73_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e13_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e28_a0_v();
			if (a1 == 26731) {
				f_e87_a2_v(tv1, tv0);
			}
			if (a1 == 26734) {
				f_e75_a2_v(tv1, tv0);
				f_e87_a2_v(tv1, tv0);
			}
			if (a1 == 26735) {
				f_e75_a2_v(tv1, tv0);
			}
			if (a0 == 26730) {
				f_ca_a1_v("Neutral");
				tv0->SetMessage(525362);
				tv0->ClearReplies();
				tv0->AddReply(525363, -1, 26731);
				if (f_e8c_a1_b(tv1)) {
					tv0->AddReply(525364, 26733, 26732);
				}
				tv0->AddReply(525368, -1, 26736);
				return;
			}
			if (a0 == 26733) {
				f_ca_a1_v("Neutral");
				tv0->SetMessage(525365);
				tv0->ClearReplies();
				tv0->AddReply(529141, 30588, 30587);
				return;
			}
			if (a0 == 30588) {
				f_ca_a1_v("Neutral");
				tv0->SetMessage(529142);
				tv0->ClearReplies();
				tv0->AddReply(529143, 30590, 30589);
				return;
			}
			if (a0 == 30590) {
				f_ca_a1_v("Neutral");
				tv0->SetMessage(529144);
				tv0->ClearReplies();
				tv0->AddReply(525366, -1, 26734);
				tv0->AddReply(525367, -1, 26735);
				return;
			}
			tv3 = true;
			if (f_e73_a0_b()) {
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
		f_d47_a1_b(f_e2f_a0_o());
		if (!f_cf2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e6d_a0_i());
		L0->SetNPCDescription(f_e6b_a0_i());
		L0->SetPhoto(f_e6f_a0_s());
		L0->SetPhoto2(f_e71_a0_s());
		L0->SetPlayerName(f_f13_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d36_a1_v(a0);
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
			f_1f7_a1_v("Neutral");
			tv0->SetMessage(525462);
			tv0->ClearReplies();
			tv0->AddReply(529295, 30750, 30749);
			tv0->AddReply(525463, -1, 26819);
			break;
			return;
		}
		if (f_e73_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e0c_a1_v(tv2);
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

	void f_1f7_a1_v(string a0)
	{
		if (!f_e73_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e13_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e28_a0_v();
			if (a0 == 26818) {
				f_1f7_a1_v("Neutral");
				tv0->SetMessage(525462);
				tv0->ClearReplies();
				tv0->AddReply(529295, 30750, 30749);
				tv0->AddReply(525463, -1, 26819);
				return;
			}
			if (a0 == 30750) {
				f_1f7_a1_v("Neutral");
				tv0->SetMessage(529296);
				tv0->ClearReplies();
				tv0->AddReply(529297, -1, 30751);
				tv0->AddReply(529298, -1, 30752);
				return;
			}
			tv3 = true;
			if (f_e73_a0_b()) {
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
		f_d47_a1_b(f_e2f_a0_o());
		if (!f_cf2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e6d_a0_i());
		L0->SetNPCDescription(f_e6b_a0_i());
		L0->SetPhoto(f_e6f_a0_s());
		L0->SetPhoto2(f_e71_a0_s());
		L0->SetPlayerName(f_f13_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d36_a1_v(a0);
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
			f_2e8_a1_v("Neutral");
			tv0->SetMessage(525919);
			tv0->ClearReplies();
			if (f_e98_a1_b(tv1)) {
				tv0->AddReply(525920, 42995, 27212);
			}
			tv0->AddReply(529685, -1, 31148);
			tv0->AddReply(525923, -1, 27215);
			tv0->AddReply(529057, -1, 30499);
			break;
			return;
		}
		if (f_e73_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e0c_a1_v(tv2);
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

	void f_2e8_a1_v(string a0)
	{
		if (!f_e73_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e13_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e28_a0_v();
			if (a1 == 27214) {
				f_e7e_a2_v(tv1, tv0);
			}
			if (a1 == 43013) {
				f_e7e_a2_v(tv1, tv0);
			}
			if (a1 == 43010) {
				f_e7e_a2_v(tv1, tv0);
			}
			if (a1 == 43005) {
				f_e7e_a2_v(tv1, tv0);
			}
			if (a1 == 43002) {
				f_e7e_a2_v(tv1, tv0);
			}
			if (a1 == 43000) {
				f_e7e_a2_v(tv1, tv0);
			}
			if (a1 == 31148) {
				f_e87_a2_v(tv1, tv0);
			}
			if (a0 == 27211) {
				f_2e8_a1_v("Neutral");
				tv0->SetMessage(525919);
				tv0->ClearReplies();
				if (f_e98_a1_b(tv1)) {
					tv0->AddReply(525920, 42995, 27212);
				}
				tv0->AddReply(529685, -1, 31148);
				tv0->AddReply(525923, -1, 27215);
				tv0->AddReply(529057, -1, 30499);
				return;
			}
			if (a0 == 42995) {
				f_2e8_a1_v("Neutral");
				tv0->SetMessage(540917);
				tv0->ClearReplies();
				tv0->AddReply(540918, 27213, 42996);
				tv0->AddReply(540919, 42998, 42997);
				return;
			}
			if (a0 == 42998) {
				f_2e8_a1_v("Neutral");
				tv0->SetMessage(540920);
				tv0->ClearReplies();
				tv0->AddReply(540921, 27213, 42999);
				tv0->AddReply(540922, -1, 43000);
				return;
			}
			if (a0 == 27213) {
				f_2e8_a1_v("Neutral");
				tv0->SetMessage(525921);
				tv0->ClearReplies();
				tv0->AddReply(529058, 30501, 30500);
				tv0->AddReply(529062, 30503, 30504);
				return;
			}
			if (a0 == 30501) {
				f_2e8_a1_v("Neutral");
				tv0->SetMessage(529059);
				tv0->ClearReplies();
				tv0->AddReply(529060, 30503, 30502);
				tv0->AddReply(540923, -1, 43002);
				return;
			}
			if (a0 == 30503) {
				f_2e8_a1_v("Neutral");
				tv0->SetMessage(529061);
				tv0->ClearReplies();
				tv0->AddReply(540924, 43004, 43003);
				return;
			}
			if (a0 == 43004) {
				f_2e8_a1_v("Neutral");
				tv0->SetMessage(540925);
				tv0->ClearReplies();
				tv0->AddReply(529063, 30507, 30506);
				tv0->AddReply(540926, -1, 43005);
				return;
			}
			if (a0 == 30507) {
				f_2e8_a1_v("Neutral");
				tv0->SetMessage(529064);
				tv0->ClearReplies();
				tv0->AddReply(540927, 43007, 43006);
				tv0->AddReply(540931, -1, 43010);
				return;
			}
			if (a0 == 43007) {
				f_2e8_a1_v("Neutral");
				tv0->SetMessage(540928);
				tv0->ClearReplies();
				tv0->AddReply(540929, 43009, 43008);
				tv0->AddReply(540932, 43009, 43011);
				return;
			}
			if (a0 == 43009) {
				f_2e8_a1_v("Neutral");
				tv0->SetMessage(540930);
				tv0->ClearReplies();
				tv0->AddReply(525922, -1, 27214);
				tv0->AddReply(540933, -1, 43013);
				return;
			}
			tv3 = true;
			if (f_e73_a0_b()) {
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
		f_d47_a1_b(f_e2f_a0_o());
		if (!f_cf2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e6d_a0_i());
		L0->SetNPCDescription(f_e6b_a0_i());
		L0->SetPhoto(f_e6f_a0_s());
		L0->SetPhoto2(f_e71_a0_s());
		L0->SetPlayerName(f_f13_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d36_a1_v(a0);
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
			f_4c4_a1_v("Neutral");
			tv0->SetMessage(529678);
			tv0->ClearReplies();
			tv0->AddReply(529679, -1, 31142);
			tv0->AddReply(529680, -1, 31143);
			break;
			return;
		}
		if (f_e73_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e0c_a1_v(tv2);
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

	void f_4c4_a1_v(string a0)
	{
		if (!f_e73_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e13_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e28_a0_v();
			if (a1 == 31142) {
				f_e87_a2_v(tv1, tv0);
			}
			if (a0 == 31141) {
				f_4c4_a1_v("Neutral");
				tv0->SetMessage(529678);
				tv0->ClearReplies();
				tv0->AddReply(529679, -1, 31142);
				tv0->AddReply(529680, -1, 31143);
				return;
			}
			tv3 = true;
			if (f_e73_a0_b()) {
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
		f_d47_a1_b(f_e2f_a0_o());
		if (!f_cf2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e6d_a0_i());
		L0->SetNPCDescription(f_e6b_a0_i());
		L0->SetPhoto(f_e6f_a0_s());
		L0->SetPhoto2(f_e71_a0_s());
		L0->SetPlayerName(f_f13_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d36_a1_v(a0);
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
			f_597_a1_v("Neutral");
			tv0->SetMessage(529682);
			tv0->ClearReplies();
			tv0->AddReply(529683, -1, 31146);
			tv0->AddReply(529684, -1, 31147);
			break;
			return;
		}
		if (f_e73_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e0c_a1_v(tv2);
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

	void f_597_a1_v(string a0)
	{
		if (!f_e73_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e13_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e28_a0_v();
			if (a1 == 31146) {
				f_e87_a2_v(tv1, tv0);
			}
			if (a0 == 31145) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(529682);
				tv0->ClearReplies();
				tv0->AddReply(529683, -1, 31146);
				tv0->AddReply(529684, -1, 31147);
				return;
			}
			tv3 = true;
			if (f_e73_a0_b()) {
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
		f_d47_a1_b(f_e2f_a0_o());
		if (!f_cf2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e6d_a0_i());
		L0->SetNPCDescription(f_e6b_a0_i());
		L0->SetPhoto(f_e6f_a0_s());
		L0->SetPhoto2(f_e71_a0_s());
		L0->SetPlayerName(f_f13_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d36_a1_v(a0);
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
			f_66a_a1_v("Neutral");
			tv0->SetMessage(529687);
			tv0->ClearReplies();
			tv0->AddReply(529688, -1, 31151);
			tv0->AddReply(529689, -1, 31152);
			break;
			return;
		}
		if (f_e73_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e0c_a1_v(tv2);
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

	void f_66a_a1_v(string a0)
	{
		if (!f_e73_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e13_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e28_a0_v();
			if (a1 == 31151) {
				f_e87_a2_v(tv1, tv0);
			}
			if (a0 == 31150) {
				f_66a_a1_v("Neutral");
				tv0->SetMessage(529687);
				tv0->ClearReplies();
				tv0->AddReply(529688, -1, 31151);
				tv0->AddReply(529689, -1, 31152);
				return;
			}
			tv3 = true;
			if (f_e73_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t14
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_d47_a1_b(f_e2f_a0_o());
		if (!f_cf2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e6d_a0_i());
		L0->SetNPCDescription(f_e6b_a0_i());
		L0->SetPhoto(f_e6f_a0_s());
		L0->SetPhoto2(f_e71_a0_s());
		L0->SetPlayerName(f_f13_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d36_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t15
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
			f_73d_a1_v("Neutral");
			tv0->SetMessage(529691);
			tv0->ClearReplies();
			tv0->AddReply(529692, -1, 31155);
			tv0->AddReply(529693, -1, 31156);
			break;
			return;
		}
		if (f_e73_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e0c_a1_v(tv2);
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

	void f_73d_a1_v(string a0)
	{
		if (!f_e73_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e13_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e28_a0_v();
			if (a1 == 31155) {
				f_e87_a2_v(tv1, tv0);
			}
			if (a0 == 31154) {
				f_73d_a1_v("Neutral");
				tv0->SetMessage(529691);
				tv0->ClearReplies();
				tv0->AddReply(529692, -1, 31155);
				tv0->AddReply(529693, -1, 31156);
				return;
			}
			tv3 = true;
			if (f_e73_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t16
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_d47_a1_b(f_e2f_a0_o());
		if (!f_cf2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e6d_a0_i());
		L0->SetNPCDescription(f_e6b_a0_i());
		L0->SetPhoto(f_e6f_a0_s());
		L0->SetPhoto2(f_e71_a0_s());
		L0->SetPlayerName(f_f13_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d36_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t17
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
			f_810_a1_v("Neutral");
			tv0->SetMessage(529695);
			tv0->ClearReplies();
			tv0->AddReply(529696, -1, 31159);
			tv0->AddReply(529697, -1, 31160);
			break;
			return;
		}
		if (f_e73_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e0c_a1_v(tv2);
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

	void f_810_a1_v(string a0)
	{
		if (!f_e73_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e13_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e28_a0_v();
			if (a1 == 31159) {
				f_e87_a2_v(tv1, tv0);
			}
			if (a0 == 31158) {
				f_810_a1_v("Neutral");
				tv0->SetMessage(529695);
				tv0->ClearReplies();
				tv0->AddReply(529696, -1, 31159);
				tv0->AddReply(529697, -1, 31160);
				return;
			}
			tv3 = true;
			if (f_e73_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t18
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_d47_a1_b(f_e2f_a0_o());
		if (!f_cf2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e6d_a0_i());
		L0->SetNPCDescription(f_e6b_a0_i());
		L0->SetPhoto(f_e6f_a0_s());
		L0->SetPhoto2(f_e71_a0_s());
		L0->SetPlayerName(f_f13_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t19{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d36_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t19
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
			f_8e3_a1_v("Neutral");
			tv0->SetMessage(529699);
			tv0->ClearReplies();
			tv0->AddReply(529700, -1, 31163);
			tv0->AddReply(529701, -1, 31164);
			break;
			return;
		}
		if (f_e73_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e0c_a1_v(tv2);
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

	void f_8e3_a1_v(string a0)
	{
		if (!f_e73_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e13_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e28_a0_v();
			if (a1 == 31163) {
				f_e87_a2_v(tv1, tv0);
			}
			if (a0 == 31162) {
				f_8e3_a1_v("Neutral");
				tv0->SetMessage(529699);
				tv0->ClearReplies();
				tv0->AddReply(529700, -1, 31163);
				tv0->AddReply(529701, -1, 31164);
				return;
			}
			tv3 = true;
			if (f_e73_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t20
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_d47_a1_b(f_e2f_a0_o());
		if (!f_cf2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e6d_a0_i());
		L0->SetNPCDescription(f_e6b_a0_i());
		L0->SetPhoto(f_e6f_a0_s());
		L0->SetPhoto2(f_e71_a0_s());
		L0->SetPlayerName(f_f13_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t21{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d36_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t21
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
			f_9b6_a1_v("Neutral");
			tv0->SetMessage(529703);
			tv0->ClearReplies();
			tv0->AddReply(529704, -1, 31167);
			tv0->AddReply(529705, -1, 31168);
			break;
			return;
		}
		if (f_e73_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e0c_a1_v(tv2);
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

	void f_9b6_a1_v(string a0)
	{
		if (!f_e73_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e13_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e28_a0_v();
			if (a1 == 31167) {
				f_e87_a2_v(tv1, tv0);
			}
			if (a0 == 31166) {
				f_9b6_a1_v("Neutral");
				tv0->SetMessage(529703);
				tv0->ClearReplies();
				tv0->AddReply(529704, -1, 31167);
				tv0->AddReply(529705, -1, 31168);
				return;
			}
			tv3 = true;
			if (f_e73_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t22
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_d47_a1_b(f_e2f_a0_o());
		if (!f_cf2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e6d_a0_i());
		L0->SetNPCDescription(f_e6b_a0_i());
		L0->SetPhoto(f_e6f_a0_s());
		L0->SetPhoto2(f_e71_a0_s());
		L0->SetPlayerName(f_f13_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t23{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d36_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t23
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
			f_a8e_a1_v("Neutral");
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_e73_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e0c_a1_v(tv2);
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

	void f_a8e_a1_v(string a0)
	{
		if (!f_e73_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e13_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e28_a0_v();
			if (a0 == 36906) {
				f_a8e_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_a8e_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_a8e_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_e73_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t24
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_d47_a1_b(f_e2f_a0_o());
		if (!f_cf2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e6d_a0_i());
		L0->SetNPCDescription(f_e6b_a0_i());
		L0->SetPhoto(f_e6f_a0_s());
		L0->SetPhoto2(f_e71_a0_s());
		L0->SetPlayerName(f_f13_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t25{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d36_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t25
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
			f_b8c_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_e73_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e0c_a1_v(tv2);
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

	void f_b8c_a1_v(string a0)
	{
		if (!f_e73_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e13_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e28_a0_v();
			if (a0 == 42554) {
				f_b8c_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_e73_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t26
{
	var Vector tv0;

	void init(void)
	{
		f_bd0_a0_v();
	}

	void f_bd0_a0_v(void)
	{
		if (!f_ced_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_c86_a0_v();
		}
	}

	bool f_be4_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_ce4_a1_b(L0);
	}

	void f_bf3_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_bf8_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_cd2_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_c0e_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_c17_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_c17_a0_v();
			if (f_ced_a0_b() && f_bf8_a0_b()) {
				if (f_be4_a0_b()) {
					f_d81_a1_b(f_e2f_a0_o());
				}
			} else {
				f_bf3_a0_v();
				f_c0e_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_ccd_a0_v();
		f_c17_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_c17_a0_v();
		f_e0c_a1_v("Neutral");
		f_c0e_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_c0e_a0_v();
		} else {
			f_e0c_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_ccd_a0_v();
			f_ce4_a1_b(a0);
			enable OnUse;
			f_f24_a1_v(a0);
			f_e0c_a1_v("Neutral");
			f_c17_a0_v();
			f_c0e_a0_v();
		}
	}
}

void f_c86_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_ced_a0_b()) {
		return;
	}
	L0 = f_e5a_a0_i();
	for (L1 = 0; L1 < 5 && f_ced_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_e53_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_ccb_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_ccb_a0_b(void)
{
	return true;
}

void f_ccd_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_cd2_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_cda_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_ce4_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_cda_a1_b(L0);
}

bool f_ced_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_cf2_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_e35_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_e73_a0_b()) {
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

void f_d36_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_e73_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_d47_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_d81_a1_b(a0)) {
			if (!f_da6_a1_b(a0)) {
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
		if (!f_da6_a1_b(a0)) {
			if (!f_d81_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_d81_a1_b(object a0)
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
	return f_e19_a1_b(L4);
}

bool f_da6_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_e44_a0_i() + "m";
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
	return f_e19_a1_b(L4);
}

bool f_dd1_a1_b(object a0)
{
	return f_dd9_a2_b(a0, 70);
}

bool f_dd9_a2_b(object a0, float a1)
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

void f_e08_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_e0c_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_e13_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_e19_a1_b(string a0)
{
	if (f_e73_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_e28_a0_v(void)
{
	if (f_e73_a0_b()) {
		@lshStopSpeech();
	}
}

object f_e2f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_e35_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_e3f_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_e44_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_e4d_a1_b(int a0)
{
	return f_e44_a0_i() == a0;
}

string f_e53_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_e5a_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_e53_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_e6b_a0_i(void)
{
	return 515529;
}

int f_e6d_a0_i(void)
{
	return 502855;
}

string f_e6f_a0_s(void)
{
	return "ui/NPC_Andrei.png";
}

string f_e71_a0_s(void)
{
	return "ui/NPC_Andrei_b.png";
}

bool f_e73_a0_b(void)
{
	return true;
}

void f_e75_a2_v(object a0, object a1)
{
	@SetVariable("k2q04", 3);
	f_ea4_a0_v();
}

void f_e7e_a2_v(object a0, object a1)
{
	@SetVariable("k5q02", 5);
	f_eb1_a0_v();
}

void f_e87_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_e8c_a1_b(object a0)
{
	if (f_e3f_a1_i("k2q04") == 2) {
		return true;
	}
	return false;
}

bool f_e98_a1_b(object a0)
{
	if (f_e3f_a1_i("k5q02") == 4) {
		return true;
	}
	return false;
}

void f_ea4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 512, 2, 529711);
	f_ecb_a2_b(L0, 507);
}

void f_eb1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 402, 2, 525940);
	f_ecb_a2_b(L0, 397);
}

object f_ebe_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_ecb_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_ebe_a0_o();
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

void f_ee7_a0_v(void)
{
	int L0;
	bool L1;
	int L2;
	int L3;
	@ClearSubContainer(0);
	@irand(L2, 8);
	L2 = L2 + 2;
	for (L3 = 0; L3 < L2; L3 = L3 + 1) {
		object L4;
		int L5;
		bool L6;
		@CreateInvItem(L4);
		L4->SetItemName("grass_combination");
		@irand(L5, 50);
		L5 = L5 + 30;
		L4->SetProperty("im_inc", L5 / 100.0);
		@irand(L5, 40);
		L4->SetProperty("hl_inc", -(L5 / 100.0));
		@AddItem(L6, L4, 0);
	}
}

int f_f13_a0_i(void)
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

void f_f24_a1_v(object a0)
{
	int L0;
	int L1;
	@GetVariable("tr_andrei", L0);
	if (L0 != f_e44_a0_i()) {
		f_ee7_a0_v();
		@SetVariable("tr_andrei", f_e44_a0_i());
	}
	@GetVariable("mt_andrei", L1);
	if (!L1) {
		t4{a0};
		@SetVariable("mt_andrei", 1);
	}
	if (f_e4d_a1_b(2)) {
		if (1000 == t2{a0}) {
			if (!f_dd1_a1_b(a0)) {
				return;
			}
			t1{a0};
			f_e08_a1_v(a0);
		}
		return;
	}
	if (f_e4d_a1_b(3)) {
		if (1000 == t8{a0}) {
			if (!f_dd1_a1_b(a0)) {
				return;
			}
			t1{a0};
			f_e08_a1_v(a0);
		}
		return;
	}
	if (f_e4d_a1_b(4)) {
		if (1000 == t10{a0}) {
			if (!f_dd1_a1_b(a0)) {
				return;
			}
			t1{a0};
			f_e08_a1_v(a0);
		}
		return;
	}
	if (f_e4d_a1_b(5)) {
		if (1000 == t6{a0}) {
			if (!f_dd1_a1_b(a0)) {
				return;
			}
			t1{a0};
			f_e08_a1_v(a0);
		}
		return;
	}
	if (f_e4d_a1_b(6)) {
		if (1000 == t12{a0}) {
			if (!f_dd1_a1_b(a0)) {
				return;
			}
			t1{a0};
			f_e08_a1_v(a0);
		}
		return;
	}
	if (f_e4d_a1_b(7)) {
		if (1000 == t14{a0}) {
			if (!f_dd1_a1_b(a0)) {
				return;
			}
			t1{a0};
			f_e08_a1_v(a0);
		}
		return;
	}
	if (f_e4d_a1_b(8)) {
		if (1000 == t16{a0}) {
			if (!f_dd1_a1_b(a0)) {
				return;
			}
			t1{a0};
			f_e08_a1_v(a0);
		}
		return;
	}
	if (f_e4d_a1_b(9)) {
		if (1000 == t18{a0}) {
			if (!f_dd1_a1_b(a0)) {
				return;
			}
			t1{a0};
			f_e08_a1_v(a0);
		}
		return;
	}
	if (f_e4d_a1_b(10)) {
		if (1000 == t20{a0}) {
			if (!f_dd1_a1_b(a0)) {
				return;
			}
			t1{a0};
			f_e08_a1_v(a0);
		}
		return;
	}
	if (f_e4d_a1_b(12)) {
		t22{a0};
		return;
	}
	t24{a0};
}

