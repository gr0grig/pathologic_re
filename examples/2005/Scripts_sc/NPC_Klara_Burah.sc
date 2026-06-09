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
		} while (!f_c13_a0_b());
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
		f_c6d_a1_b(f_d1a_a0_o());
		if (!f_c18_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dcb_a0_i());
		L0->SetNPCDescription(f_dc9_a0_i());
		L0->SetPhoto(f_dcd_a0_s());
		L0->SetPhoto2(f_dcf_a0_s());
		L0->SetPlayerName(f_103c_a0_i());
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
		f_c5c_a1_v(a0);
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
			f_9d_a1_v("Neutral");
			tv0->SetMessage(525257);
			tv0->ClearReplies();
			if (f_efb_a1_b(tv1)) {
				tv0->AddReply(525258, 30607, 26626);
			}
			tv0->AddReply(525261, -1, 26629);
			break;
			return;
		}
		if (f_dd1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_cf7_a1_v(tv2);
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

	void f_9d_a1_v(string a0)
	{
		if (!f_dd1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cfe_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_d13_a0_v();
			if (a1 == 26628) {
				f_e00_a2_v(tv1, tv0);
			}
			if (a0 == 26625) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(525257);
				tv0->ClearReplies();
				if (f_efb_a1_b(tv1)) {
					tv0->AddReply(525258, 30607, 26626);
				}
				tv0->AddReply(525261, -1, 26629);
				return;
			}
			if (a0 == 30607) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(529158);
				tv0->ClearReplies();
				tv0->AddReply(529159, 30609, 30608);
				tv0->AddReply(529161, 30611, 30610);
				return;
			}
			if (a0 == 30611) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(529162);
				tv0->ClearReplies();
				tv0->AddReply(529163, 26627, 30612);
				return;
			}
			if (a0 == 30609) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(529160);
				tv0->ClearReplies();
				tv0->AddReply(529164, 26627, 30613);
				return;
			}
			if (a0 == 26627) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(525259);
				tv0->ClearReplies();
				tv0->AddReply(525260, -1, 26628);
				tv0->AddReply(529166, -1, 30616);
				return;
			}
			tv3 = true;
			if (f_dd1_a0_b()) {
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
		f_c6d_a1_b(f_d1a_a0_o());
		if (!f_c18_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dcb_a0_i());
		L0->SetNPCDescription(f_dc9_a0_i());
		L0->SetPhoto(f_dcd_a0_s());
		L0->SetPhoto2(f_dcf_a0_s());
		L0->SetPlayerName(f_103c_a0_i());
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
		f_c5c_a1_v(a0);
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
			f_1c7_a1_v("Neutral");
			tv0->SetMessage(525471);
			tv0->ClearReplies();
			tv0->AddReply(525472, 27550, 26828);
			tv0->AddReply(526276, 28085, 27552);
			break;
			return;
		}
		if (f_dd1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_cf7_a1_v(tv2);
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

	void f_1c7_a1_v(string a0)
	{
		if (!f_dd1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cfe_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_d13_a0_v();
			if (a0 == 26827) {
				f_1c7_a1_v("Neutral");
				tv0->SetMessage(525471);
				tv0->ClearReplies();
				tv0->AddReply(525472, 27550, 26828);
				tv0->AddReply(526276, 28085, 27552);
				return;
			}
			if (a0 == 28085) {
				f_1c7_a1_v("Neutral");
				tv0->SetMessage(526805);
				tv0->ClearReplies();
				tv0->AddReply(526806, -1, 28086);
				return;
			}
			if (a0 == 27550) {
				f_1c7_a1_v("Neutral");
				tv0->SetMessage(526274);
				tv0->ClearReplies();
				tv0->AddReply(526275, -1, 27551);
				return;
			}
			tv3 = true;
			if (f_dd1_a0_b()) {
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
		f_c6d_a1_b(f_d1a_a0_o());
		if (!f_c18_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dcb_a0_i());
		L0->SetNPCDescription(f_dc9_a0_i());
		L0->SetPhoto(f_dcd_a0_s());
		L0->SetPhoto2(f_dcf_a0_s());
		L0->SetPlayerName(f_103c_a0_i());
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
		f_c5c_a1_v(a0);
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
			if (f_f36_a1_b(tv1)) {
				f_e5b_a2_v(tv1, tv0);
				f_30e_a1_v("Neutral");
				tv0->SetMessage(526373);
				tv0->ClearReplies();
				tv0->AddReply(526374, 27655, 27654);
				tv0->AddReply(528676, 27655, 30089);
				break;
			}
			f_30e_a1_v("Neutral");
			tv0->SetMessage(526173);
			tv0->ClearReplies();
			if (f_f12_a1_b(tv1) && f_f1e_a1_b(tv1)) {
				tv0->AddReply(526174, 27455, 27454);
			}
			if (f_f12_a1_b(tv1) && f_f07_a1_b(tv1)) {
				tv0->AddReply(526178, 27459, 27458);
			}
			if (f_f2a_a1_b(tv1)) {
				tv0->AddReply(526378, 27659, 27658);
			}
			if (f_f42_a1_b(tv1)) {
				tv0->AddReply(526387, 27668, 27667);
			}
			tv0->AddReply(526181, -1, 27461);
			tv0->AddReply(528675, -1, 30088);
			break;
			return;
		}
		if (f_dd1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_cf7_a1_v(tv2);
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

	void f_30e_a1_v(string a0)
	{
		if (!f_dd1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cfe_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_d13_a0_v();
			if (a1 == 27656) {
				f_e3c_a2_v(tv1, tv0);
				f_e98_a2_v(tv1, tv0);
				f_e61_a2_v(tv1, tv0);
				f_dd3_a2_v(tv1, tv0);
			}
			if (a1 == 27454) {
				f_e29_a2_v(tv1, tv0);
			}
			if (a1 == 27456) {
				f_e09_a2_v(tv1, tv0);
			}
			if (a1 == 27460) {
				f_e2f_a2_v(tv1, tv0);
			}
			if (a1 == 27660) {
				f_e3c_a2_v(tv1, tv0);
				f_e61_a2_v(tv1, tv0);
				f_e98_a2_v(tv1, tv0);
				f_dd3_a2_v(tv1, tv0);
			}
			if (a1 == 27669) {
				f_e6c_a2_v(tv1, tv0);
				f_e76_a2_v(tv1, tv0);
				f_e92_a2_v(tv1, tv0);
			}
			if (a0 == 27653) {
				if (f_f36_a1_b(tv1)) {
					f_e5b_a2_v(tv1, tv0);
					f_30e_a1_v("Neutral");
					tv0->SetMessage(526373);
					tv0->ClearReplies();
					tv0->AddReply(526374, 27655, 27654);
					tv0->AddReply(528676, 27655, 30089);
					return;
				}
				f_30e_a1_v("Neutral");
				tv0->SetMessage(526173);
				tv0->ClearReplies();
				if (f_f12_a1_b(tv1) && f_f1e_a1_b(tv1)) {
					tv0->AddReply(526174, 27455, 27454);
				}
				if (f_f12_a1_b(tv1) && f_f07_a1_b(tv1)) {
					tv0->AddReply(526178, 27459, 27458);
				}
				if (f_f2a_a1_b(tv1)) {
					tv0->AddReply(526378, 27659, 27658);
				}
				if (f_f42_a1_b(tv1)) {
					tv0->AddReply(526387, 27668, 27667);
				}
				tv0->AddReply(526181, -1, 27461);
				tv0->AddReply(528675, -1, 30088);
				return;
			}
			if (a0 == 27668) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(526388);
				tv0->ClearReplies();
				tv0->AddReply(526389, -1, 27669);
				return;
			}
			if (a0 == 27659) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(526379);
				tv0->ClearReplies();
				tv0->AddReply(526380, -1, 27660);
				return;
			}
			if (a0 == 27459) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(526179);
				tv0->ClearReplies();
				tv0->AddReply(528687, 30103, 30102);
				return;
			}
			if (a0 == 30103) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(528688);
				tv0->ClearReplies();
				tv0->AddReply(528689, 30105, 30104);
				return;
			}
			if (a0 == 30105) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(528690);
				tv0->ClearReplies();
				tv0->AddReply(528691, 30107, 30106);
				tv0->AddReply(528697, 30113, 30112);
				return;
			}
			if (a0 == 30113) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(528698);
				tv0->ClearReplies();
				tv0->AddReply(528699, 30107, 30114);
				return;
			}
			if (a0 == 30107) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(528692);
				tv0->ClearReplies();
				tv0->AddReply(528693, 30109, 30108);
				return;
			}
			if (a0 == 30109) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(528694);
				tv0->ClearReplies();
				tv0->AddReply(528702, 30118, 30117);
				tv0->AddReply(528700, 30116, 30115);
				return;
			}
			if (a0 == 30116) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(528701);
				tv0->ClearReplies();
				tv0->AddReply(528704, 30118, 30119);
				return;
			}
			if (a0 == 30118) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(528703);
				tv0->ClearReplies();
				tv0->AddReply(528695, 30111, 30110);
				return;
			}
			if (a0 == 30111) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(528696);
				tv0->ClearReplies();
				tv0->AddReply(526180, -1, 27460);
				return;
			}
			if (a0 == 27455) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(526175);
				tv0->ClearReplies();
				tv0->AddReply(528685, 30101, 30100);
				return;
			}
			if (a0 == 30101) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(528686);
				tv0->ClearReplies();
				if (!f_f07_a1_b(tv1)) {
					tv0->AddReply(526176, -1, 27456);
				}
				if (f_f07_a1_b(tv1)) {
					tv0->AddReply(526177, 27459, 27457);
				}
				return;
			}
			if (a0 == 27655) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(526375);
				tv0->ClearReplies();
				tv0->AddReply(528677, 30092, 30091);
				return;
			}
			if (a0 == 30092) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(528678);
				tv0->ClearReplies();
				tv0->AddReply(528679, 30094, 30093);
				tv0->AddReply(528681, 30094, 30095);
				return;
			}
			if (a0 == 30094) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(528680);
				tv0->ClearReplies();
				tv0->AddReply(528682, 30098, 30097);
				return;
			}
			if (a0 == 30098) {
				f_30e_a1_v("Neutral");
				tv0->SetMessage(528683);
				tv0->ClearReplies();
				tv0->AddReply(526376, -1, 27656);
				tv0->AddReply(526377, -1, 27657);
				return;
			}
			tv3 = true;
			if (f_dd1_a0_b()) {
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
		f_c6d_a1_b(f_d1a_a0_o());
		if (!f_c18_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dcb_a0_i());
		L0->SetNPCDescription(f_dc9_a0_i());
		L0->SetPhoto(f_dcd_a0_s());
		L0->SetPhoto2(f_dcf_a0_s());
		L0->SetPlayerName(f_103c_a0_i());
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
		f_c5c_a1_v(a0);
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
			f_5e4_a1_v("Neutral");
			tv0->SetMessage(527204);
			tv0->ClearReplies();
			tv0->AddReply(527205, 28514, 28513);
			tv0->AddReply(527210, -1, 28518);
			tv0->AddReply(527533, -1, 28871);
			break;
			return;
		}
		if (f_dd1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_cf7_a1_v(tv2);
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

	void f_5e4_a1_v(string a0)
	{
		if (!f_dd1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cfe_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_d13_a0_v();
			if (a1 == 28513) {
				f_e80_a2_v(tv1, tv0);
			}
			if (a1 == 28885) {
				f_e89_a2_v(tv1, tv0);
				f_de3_a2_v(tv1, tv0);
			}
			if (a0 == 28512) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(527204);
				tv0->ClearReplies();
				tv0->AddReply(527205, 28514, 28513);
				tv0->AddReply(527210, -1, 28518);
				tv0->AddReply(527533, -1, 28871);
				return;
			}
			if (a0 == 28514) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(527206);
				tv0->ClearReplies();
				tv0->AddReply(527207, 28516, 28515);
				return;
			}
			if (a0 == 28516) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(527208);
				tv0->ClearReplies();
				tv0->AddReply(527534, 28874, 28872);
				tv0->AddReply(527535, 28874, 28873);
				return;
			}
			if (a0 == 28874) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(527536);
				tv0->ClearReplies();
				tv0->AddReply(527537, 28876, 28875);
				tv0->AddReply(527539, 28876, 28878);
				return;
			}
			if (a0 == 28876) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(527538);
				tv0->ClearReplies();
				tv0->AddReply(527540, 28881, 28880);
				return;
			}
			if (a0 == 28881) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(527541);
				tv0->ClearReplies();
				tv0->AddReply(527542, 28883, 28882);
				return;
			}
			if (a0 == 28883) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(527543);
				tv0->ClearReplies();
				tv0->AddReply(527209, 28884, 28517);
				tv0->AddReply(527546, 28884, 28886);
				return;
			}
			if (a0 == 28884) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(527544);
				tv0->ClearReplies();
				tv0->AddReply(527545, -1, 28885);
				return;
			}
			tv3 = true;
			if (f_dd1_a0_b()) {
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
		f_c6d_a1_b(f_d1a_a0_o());
		if (!f_c18_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dcb_a0_i());
		L0->SetNPCDescription(f_dc9_a0_i());
		L0->SetPhoto(f_dcd_a0_s());
		L0->SetPhoto2(f_dcf_a0_s());
		L0->SetPlayerName(f_103c_a0_i());
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
		f_c5c_a1_v(a0);
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
			f_764_a1_v("Neutral");
			tv0->SetMessage(524702);
			tv0->ClearReplies();
			if (f_ee3_a1_b(tv1) && f_eef_a1_b(tv1)) {
				tv0->AddReply(524703, 28087, 26042);
			}
			tv0->AddReply(524704, -1, 26043);
			break;
			return;
		}
		if (f_dd1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_cf7_a1_v(tv2);
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

	void f_764_a1_v(string a0)
	{
		if (!f_dd1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cfe_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_d13_a0_v();
			if (a1 == 26042) {
				f_dea_a2_v(tv1, tv0);
			}
			if (a1 == 26045) {
				f_df0_a2_v(tv1, tv0);
				f_ebd_a2_v(tv1, tv0);
			}
			if (a0 == 26041) {
				f_764_a1_v("Neutral");
				tv0->SetMessage(524702);
				tv0->ClearReplies();
				if (f_ee3_a1_b(tv1) && f_eef_a1_b(tv1)) {
					tv0->AddReply(524703, 28087, 26042);
				}
				tv0->AddReply(524704, -1, 26043);
				return;
			}
			if (a0 == 28087) {
				f_764_a1_v("Neutral");
				tv0->SetMessage(526807);
				tv0->ClearReplies();
				tv0->AddReply(526808, 28089, 28088);
				return;
			}
			if (a0 == 28089) {
				f_764_a1_v("Neutral");
				tv0->SetMessage(526809);
				tv0->ClearReplies();
				tv0->AddReply(526810, 26044, 28090);
				tv0->AddReply(526811, 28092, 28091);
				return;
			}
			if (a0 == 28092) {
				f_764_a1_v("Neutral");
				tv0->SetMessage(526812);
				tv0->ClearReplies();
				tv0->AddReply(526813, 28095, 28093);
				tv0->AddReply(526814, 28095, 28094);
				return;
			}
			if (a0 == 28095) {
				f_764_a1_v("Neutral");
				tv0->SetMessage(526815);
				tv0->ClearReplies();
				tv0->AddReply(526816, 26044, 28097);
				return;
			}
			if (a0 == 26044) {
				f_764_a1_v("Neutral");
				tv0->SetMessage(524705);
				tv0->ClearReplies();
				tv0->AddReply(526817, 28100, 28099);
				return;
			}
			if (a0 == 28100) {
				f_764_a1_v("Neutral");
				tv0->SetMessage(526818);
				tv0->ClearReplies();
				tv0->AddReply(526819, 28102, 28101);
				return;
			}
			if (a0 == 28102) {
				f_764_a1_v("Neutral");
				tv0->SetMessage(526820);
				tv0->ClearReplies();
				tv0->AddReply(524706, -1, 26045);
				return;
			}
			tv3 = true;
			if (f_dd1_a0_b()) {
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
		f_c6d_a1_b(f_d1a_a0_o());
		if (!f_c18_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dcb_a0_i());
		L0->SetNPCDescription(f_dc9_a0_i());
		L0->SetPhoto(f_dcd_a0_s());
		L0->SetPhoto2(f_dcf_a0_s());
		L0->SetPlayerName(f_103c_a0_i());
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
		f_c5c_a1_v(a0);
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
			if (f_f5a_a1_b(tv1) && !f_ed7_a1_b(tv1)) {
				f_e9e_a2_v(tv1, tv0);
				f_91b_a1_v("Neutral");
				tv0->SetMessage(539318);
				tv0->ClearReplies();
				tv0->AddReply(539319, 41263, 41262);
				tv0->AddReply(539330, 41265, 41273);
				break;
			}
			f_91b_a1_v("Neutral");
			tv0->SetMessage(539331);
			tv0->ClearReplies();
			if (f_ecd_a1_b(tv1) && !f_f4e_a1_b(tv1) && !f_ed7_a1_b(tv1)) {
				tv0->AddReply(539332, 41277, 41276);
			}
			tv0->AddReply(539335, -1, 41279);
			break;
			return;
		}
		if (f_dd1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_cf7_a1_v(tv2);
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

	void f_91b_a1_v(string a0)
	{
		if (!f_dd1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cfe_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_d13_a0_v();
			if (a1 == 41268) {
				f_ead_a2_v(tv1, tv0);
			}
			if (a1 == 41271) {
				f_ea4_a2_v(tv1, tv0);
			}
			if (a1 == 41278) {
				f_ea4_a2_v(tv1, tv0);
			}
			if (a0 == 41261) {
				if (f_f5a_a1_b(tv1) && !f_ed7_a1_b(tv1)) {
					f_e9e_a2_v(tv1, tv0);
					f_91b_a1_v("Neutral");
					tv0->SetMessage(539318);
					tv0->ClearReplies();
					tv0->AddReply(539319, 41263, 41262);
					tv0->AddReply(539330, 41265, 41273);
					return;
				}
				f_91b_a1_v("Neutral");
				tv0->SetMessage(539331);
				tv0->ClearReplies();
				if (f_ecd_a1_b(tv1) && !f_f4e_a1_b(tv1) && !f_ed7_a1_b(tv1)) {
					tv0->AddReply(539332, 41277, 41276);
				}
				tv0->AddReply(539335, -1, 41279);
				return;
			}
			if (a0 == 41277) {
				f_91b_a1_v("Neutral");
				tv0->SetMessage(539333);
				tv0->ClearReplies();
				tv0->AddReply(539334, -1, 41278);
				return;
			}
			if (a0 == 41263) {
				f_91b_a1_v("Neutral");
				tv0->SetMessage(539320);
				tv0->ClearReplies();
				tv0->AddReply(539321, 41265, 41264);
				return;
			}
			if (a0 == 41265) {
				f_91b_a1_v("Neutral");
				tv0->SetMessage(539322);
				tv0->ClearReplies();
				tv0->AddReply(539323, 41267, 41266);
				return;
			}
			if (a0 == 41267) {
				if (!f_ecd_a1_b(tv1)) {
					f_91b_a1_v("Neutral");
					tv0->SetMessage(539324);
					tv0->ClearReplies();
					tv0->AddReply(539325, -1, 41268);
					tv0->AddReply(539326, -1, 41269);
					return;
				}
				if (f_ecd_a1_b(tv1)) {
					f_91b_a1_v("Neutral");
					tv0->SetMessage(539327);
					tv0->ClearReplies();
					tv0->AddReply(539328, -1, 41271);
					tv0->AddReply(539329, -1, 41272);
					return;
				}
			}
			tv3 = true;
			if (f_dd1_a0_b()) {
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
		f_c6d_a1_b(f_d1a_a0_o());
		if (!f_c18_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_dcb_a0_i());
		L0->SetNPCDescription(f_dc9_a0_i());
		L0->SetPhoto(f_dcd_a0_s());
		L0->SetPhoto2(f_dcf_a0_s());
		L0->SetPlayerName(f_103c_a0_i());
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
		f_c5c_a1_v(a0);
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
			f_aab_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_dd1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_cf7_a1_v(tv2);
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

	void f_aab_a1_v(string a0)
	{
		if (!f_dd1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cfe_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_d13_a0_v();
			if (a0 == 42554) {
				f_aab_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_dd1_a0_b()) {
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
		f_aef_a0_v();
	}

	void f_aef_a0_v(void)
	{
		if (!f_c13_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_ba5_a0_v();
		}
	}

	bool f_b03_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_c0a_a1_b(L0);
	}

	void f_b12_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_b17_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_bf1_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_b2d_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_b36_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_b36_a0_v();
			if (f_c13_a0_b() && f_b17_a0_b()) {
				if (f_b03_a0_b()) {
					f_ca7_a1_b(f_d1a_a0_o());
				}
			} else {
				f_b12_a0_v();
				f_b2d_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_bec_a0_v();
		f_b36_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_b36_a0_v();
		f_cf7_a1_v("Neutral");
		f_b2d_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_b2d_a0_v();
		} else {
			f_cf7_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_bec_a0_v();
			f_c0a_a1_b(a0);
			enable OnUse;
			f_10a8_a1_v(a0);
			f_cf7_a1_v("Neutral");
			f_b36_a0_v();
			f_b2d_a0_v();
		}
	}
}

void f_ba5_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_c13_a0_b()) {
		return;
	}
	L0 = f_db8_a0_i();
	for (L1 = 0; L1 < 5 && f_c13_a0_b(); L1++) {
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
			@PlayAnimation("all", f_db1_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_bea_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_bea_a0_b(void)
{
	return true;
}

void f_bec_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_bf1_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_bf9_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_c00_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_c0a_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_c00_a1_b(L0);
}

bool f_c13_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_c18_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_d20_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_dd1_a0_b()) {
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

void f_c5c_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_dd1_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_c6d_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_ca7_a1_b(a0)) {
			if (!f_ccc_a1_b(a0)) {
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
		if (!f_ccc_a1_b(a0)) {
			if (!f_ca7_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_ca7_a1_b(object a0)
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
	return f_d04_a1_b(L4);
}

bool f_ccc_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_da2_a0_i() + "m";
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
	return f_d04_a1_b(L4);
}

void f_cf7_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_cfe_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_d04_a1_b(string a0)
{
	if (f_dd1_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_d13_a0_v(void)
{
	if (f_dd1_a0_b()) {
		@lshStopSpeech();
	}
}

object f_d1a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_d20_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_d2a_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_d2f_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_d3a_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_d4b_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_d57_a2_v(object a0, int a1)
{
	f_bf9_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_d4b_a2_v(L0, a1);
	}
}

void f_d6a_a3_v(object a0, object a1, int a2)
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
		f_d4b_a2_v(L0, a2);
	}
}

void f_d7d_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_d6a_a3_v(a0, L0, a2);
}

bool f_d8a_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_d91_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_d9d_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_da2_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_dab_a1_b(int a0)
{
	return f_da2_a0_i() == a0;
}

string f_db1_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_db8_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_db1_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_dc9_a0_i(void)
{
	return 515592;
}

int f_dcb_a0_i(void)
{
	return 511961;
}

string f_dcd_a0_s(void)
{
	return "ui/NPC_Burah.png";
}

string f_dcf_a0_s(void)
{
	return "ui/NPC_Burah_b.png";
}

bool f_dd1_a0_b(void)
{
	return true;
}

void f_dd3_a2_v(object a0, object a1)
{
	f_101b_a3_v(f_100a_a0_o(), "pt_map_burah_home", 2);
	a1->ShowMap(f_100a_a0_o());
}

void f_de3_a2_v(object a0, object a1)
{
	f_d3a_a2_v("boiny@door1", false);
}

void f_dea_a2_v(object a0, object a1)
{
	@SetVariable("ook1Burah1", 1);
}

void f_df0_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_100a_a0_o();
	L0->AddMark("k1q01BurahGotoAnna", "pt_map_anna", 1, 524732, f_d9d_a0_f());
}

void f_e00_a2_v(object a0, object a1)
{
	@SetVariable("k2q01", 5);
	f_fa0_a0_v();
}

void f_e09_a2_v(object a0, object a1)
{
	if (f_d2a_a1_i("k7q01CorpseMark") == 0) {
		object L0;
		@SetVariable("k7q01CorpseMark", 1);
		L0 = f_100a_a0_o();
		L0->AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", 3, 526214, f_d9d_a0_f());
		f_d91_a2_b("quest_k7_01", "place_corpse");
	}
}

void f_e29_a2_v(object a0, object a1)
{
	@SetVariable("ook7Burah1", 1);
}

void f_e2f_a2_v(object a0, object a1)
{
	int L0;
	@SetVariable("k7q01", 4);
	f_fad_a0_v();
	a0->RemoveItemByType(L0, "bird_balahon", 1);
}

void f_e3c_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_100a_a0_o();
	L0->AddMark("k7q03BurahGotoFather", "pt_map_burah_home", 0, 526394, f_d9d_a0_f());
	f_fba_a0_v();
	f_fc7_a0_v();
	f_d2f_a1_o("quest_k7_03");
	f_d91_a2_b("quest_k7_03", "place_family");
}

void f_e5b_a2_v(object a0, object a1)
{
	@SetVariable("ook7Burah2", 1);
}

void f_e61_a2_v(object a0, object a1)
{
	@Trace("tvirin 5 is given");
	f_d7d_a3_v(a0, "tvirin", 5);
}

void f_e6c_a2_v(object a0, object a1)
{
	f_fd4_a0_v();
	f_d91_a2_b("quest_k7_03", "completed");
}

void f_e76_a2_v(object a0, object a1)
{
	@Trace("money2000 is given");
	f_d57_a2_v(a0, 2000);
}

void f_e80_a2_v(object a0, object a1)
{
	@SetVariable("k11q01", 4);
	f_f79_a0_v();
}

void f_e89_a2_v(object a0, object a1)
{
	@SetVariable("k11q01", 5);
	f_f6c_a0_v();
}

void f_e92_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_e98_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_e9e_a2_v(object a0, object a1)
{
	@SetVariable("ook12BurahFactory1", 1);
}

void f_ea4_a2_v(object a0, object a1)
{
	@SetVariable("k12q01BurahInSobor", 1);
	f_f86_a0_v();
}

void f_ead_a2_v(object a0, object a1)
{
	if (f_d2a_a1_i("k12q01_Burah") == 0) {
		@SetVariable("k12q01_Burah", 1);
		f_f93_a0_v();
	}
}

void f_ebd_a2_v(object a0, object a1)
{
	f_101b_a3_v(f_100a_a0_o(), "pt_map_anna", 2);
	a1->ShowMap(f_100a_a0_o());
}

bool f_ecd_a1_b(object a0)
{
	if (f_f66_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ed7_a1_b(object a0)
{
	if (f_d2a_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_ee3_a1_b(object a0)
{
	if (f_d2a_a1_i("k1q01LaskaGotoBurah") != 0) {
		return true;
	}
	return false;
}

bool f_eef_a1_b(object a0)
{
	if (f_d2a_a1_i("ook1Burah1") == 0) {
		return true;
	}
	return false;
}

bool f_efb_a1_b(object a0)
{
	if (f_d2a_a1_i("k2q01") == 4) {
		return true;
	}
	return false;
}

bool f_f07_a1_b(object a0)
{
	if (f_d8a_a2_b(a0, "bird_balahon")) {
		return true;
	}
	return false;
}

bool f_f12_a1_b(object a0)
{
	if (f_d2a_a1_i("k7q01") == 3) {
		return true;
	}
	return false;
}

bool f_f1e_a1_b(object a0)
{
	if (f_d2a_a1_i("ook7Burah1") == 0) {
		return true;
	}
	return false;
}

bool f_f2a_a1_b(object a0)
{
	if (f_d2a_a1_i("k7q03") == 0) {
		return true;
	}
	return false;
}

bool f_f36_a1_b(object a0)
{
	if (f_d2a_a1_i("ook7Burah2") == 0) {
		return true;
	}
	return false;
}

bool f_f42_a1_b(object a0)
{
	if (f_d2a_a1_i("k7q03") == 2) {
		return true;
	}
	return false;
}

bool f_f4e_a1_b(object a0)
{
	if (f_d2a_a1_i("k12q01BurahInSobor") != 0) {
		return true;
	}
	return false;
}

bool f_f5a_a1_b(object a0)
{
	if (f_d2a_a1_i("ook12BurahFactory1") == 0) {
		return true;
	}
	return false;
}

bool f_f66_a1_b(object a0)
{
	return f_1082_a0_b();
}

void f_f6c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 488, 1, 528055);
	f_fee_a2_b(L0, 480);
}

void f_f79_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 487, 1, 528054);
	f_fee_a2_b(L0, 480);
}

void f_f86_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 731, 1, 539361);
	f_fee_a2_b(L0, 729);
}

void f_f93_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 738, 1, 539368);
	f_fee_a2_b(L0, 729);
}

void f_fa0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 466, 1, 527782);
	f_fee_a2_b(L0, 461);
}

void f_fad_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 422, 1, 526221);
	f_fee_a2_b(L0, 416);
}

void f_fba_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 434, 2, 526390);
	f_fee_a2_b(L0, -1);
}

void f_fc7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 435, 2, 526391);
	f_fee_a2_b(L0, 434);
}

void f_fd4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 437, 2, 526393);
	f_fee_a2_b(L0, 434);
}

object f_fe1_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_fee_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_fe1_a0_o();
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

object f_100a_a0_o(void)
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

void f_101b_a3_v(object a0, string a1, float a2)
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

int f_103c_a0_i(void)
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

void f_104d_a3_v(object a0, bool a1, int a2)
{
	a0->add(18);
	a0->add(24);
	a0->add(20);
	a0->add(14);
	if (a1 == false) {
		a0->add(10);
		a0->add(17);
		a0->add(8);
	} else {
		if (a2 != 1) {
			a0->add(10);
		}
	}
}

bool f_106e_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_1078_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

bool f_1082_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_104d_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_1078_a1_b(L3) || f_106e_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

void f_10a8_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_burah", L0);
	if (!L0) {
		t3{a0};
		@SetVariable("mt_burah", 1);
	}
	if (f_dab_a1_b(1)) {
		t9{a0};
		return;
	}
	if (f_dab_a1_b(2)) {
		t1{a0};
		return;
	}
	if (f_dab_a1_b(7)) {
		t5{a0};
		return;
	}
	if (f_dab_a1_b(11)) {
		t7{a0};
		return;
	}
	if (f_dab_a1_b(12)) {
		t11{a0};
		return;
	}
	t13{a0};
}

