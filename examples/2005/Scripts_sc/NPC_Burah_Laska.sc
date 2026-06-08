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
		} while (!f_923_a0_b());
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
		f_97d_a1_b(f_a2a_a0_o());
		if (!f_928_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ab8_a0_i());
		L0->SetNPCDescription(f_ab6_a0_i());
		L0->SetPhoto(f_aba_a0_s());
		L0->SetPhoto2(f_abc_a0_s());
		L0->SetPlayerName(f_c84_a0_i());
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
		f_96c_a1_v(a0);
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
			tv0->SetMessage(535253);
			tv0->ClearReplies();
			if (f_b8f_a1_b(tv1)) {
				tv0->AddReply(535254, 37026, 36929);
			}
			tv0->AddReply(535341, -1, 37024);
			tv0->AddReply(535342, -1, 37025);
			break;
			return;
		}
		if (f_abe_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a07_a1_v(tv2);
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
		if (!f_abe_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a0e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a23_a0_v();
			if (a1 == 36929) {
				f_adc_a2_v(tv1, tv0);
			}
			if (a0 == 36928) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(535253);
				tv0->ClearReplies();
				if (f_b8f_a1_b(tv1)) {
					tv0->AddReply(535254, 37026, 36929);
				}
				tv0->AddReply(535341, -1, 37024);
				tv0->AddReply(535342, -1, 37025);
				return;
			}
			if (a0 == 37026) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(535343);
				tv0->ClearReplies();
				tv0->AddReply(535344, 37028, 37027);
				tv0->AddReply(535347, 37031, 37030);
				return;
			}
			if (a0 == 37031) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(535348);
				tv0->ClearReplies();
				tv0->AddReply(535349, 37033, 37032);
				return;
			}
			if (a0 == 37033) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(535350);
				tv0->ClearReplies();
				tv0->AddReply(535351, 37028, 37034);
				tv0->AddReply(535352, -1, 37035);
				return;
			}
			if (a0 == 37028) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(535345);
				tv0->ClearReplies();
				tv0->AddReply(535346, -1, 37029);
				tv0->AddReply(535353, -1, 37037);
				return;
			}
			tv3 = true;
			if (f_abe_a0_b()) {
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
		f_97d_a1_b(f_a2a_a0_o());
		if (!f_928_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ab8_a0_i());
		L0->SetNPCDescription(f_ab6_a0_i());
		L0->SetPhoto(f_aba_a0_s());
		L0->SetPhoto2(f_abc_a0_s());
		L0->SetPlayerName(f_c84_a0_i());
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
		f_96c_a1_v(a0);
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
			if (f_b9b_a1_b(tv1) && !f_bd1_a1_b(tv1)) {
				f_b10_a2_v(tv1, tv0);
				f_250_a1_v("Neutral");
				tv0->SetMessage(517892);
				tv0->ClearReplies();
				tv0->AddReply(519614, 20800, 20799);
				tv0->AddReply(520399, 21606, 21605);
				break;
			}
			f_250_a1_v("Neutral");
			tv0->SetMessage(517901);
			tv0->ClearReplies();
			if (f_ba7_a1_b(tv1) && !f_bd1_a1_b(tv1)) {
				tv0->AddReply(517902, 19042, 19040);
			}
			if (f_bb3_a1_b(tv1) && f_bc5_a1_b(tv1) && !f_bd1_a1_b(tv1)) {
				tv0->AddReply(517906, 19045, 19044);
			}
			if (f_bd1_a1_b(tv1) && f_bdd_a1_b(tv1)) {
				tv0->AddReply(517978, 20805, 19111);
			}
			if (f_b6b_a1_b(tv1) && f_b83_a1_b(tv1)) {
				tv0->AddReply(527102, 28401, 28400);
			}
			tv0->AddReply(517903, -1, 19041);
			break;
			return;
		}
		if (f_abe_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a07_a1_v(tv2);
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

	void f_250_a1_v(string a0)
	{
		if (!f_abe_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a0e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a23_a0_v();
			if (a1 == 19038) {
				f_b16_a2_v(tv1, tv0);
				f_b00_a2_v(tv1, tv0);
			}
			if (a1 == 20803) {
				f_b16_a2_v(tv1, tv0);
				f_b00_a2_v(tv1, tv0);
			}
			if (a1 == 21611) {
				f_b16_a2_v(tv1, tv0);
				f_b00_a2_v(tv1, tv0);
			}
			if (a1 == 19043) {
				f_b16_a2_v(tv1, tv0);
				f_b00_a2_v(tv1, tv0);
			}
			if (a1 == 19044) {
				f_b4c_a2_v(tv1, tv0);
			}
			if (a1 == 19046) {
				f_b39_a2_v(tv1, tv0);
				f_af2_a2_v(tv1, tv0);
			}
			if (a1 == 19111) {
				f_b52_a2_v(tv1, tv0);
			}
			if (a1 == 19113) {
				f_af9_a2_v(tv1, tv0);
				f_b5f_a2_v(tv1, tv0);
				f_b58_a2_v(tv1, tv0);
			}
			if (a1 == 28400) {
				f_ac6_a2_v(tv1, tv0);
			}
			if (a1 == 28410) {
				f_acc_a2_v(tv1, tv0);
				f_ae2_a2_v(tv1, tv0);
			}
			if (a1 == 28411) {
				f_acc_a2_v(tv1, tv0);
				f_ae2_a2_v(tv1, tv0);
			}
			if (a0 == 19030) {
				if (f_b9b_a1_b(tv1) && !f_bd1_a1_b(tv1)) {
					f_b10_a2_v(tv1, tv0);
					f_250_a1_v("Neutral");
					tv0->SetMessage(517892);
					tv0->ClearReplies();
					tv0->AddReply(519614, 20800, 20799);
					tv0->AddReply(520399, 21606, 21605);
					return;
				}
				f_250_a1_v("Neutral");
				tv0->SetMessage(517901);
				tv0->ClearReplies();
				if (f_ba7_a1_b(tv1) && !f_bd1_a1_b(tv1)) {
					tv0->AddReply(517902, 19042, 19040);
				}
				if (f_bb3_a1_b(tv1) && f_bc5_a1_b(tv1) && !f_bd1_a1_b(tv1)) {
					tv0->AddReply(517906, 19045, 19044);
				}
				if (f_bd1_a1_b(tv1) && f_bdd_a1_b(tv1)) {
					tv0->AddReply(517978, 20805, 19111);
				}
				if (f_b6b_a1_b(tv1) && f_b83_a1_b(tv1)) {
					tv0->AddReply(527102, 28401, 28400);
				}
				tv0->AddReply(517903, -1, 19041);
				return;
			}
			if (a0 == 28401) {
				tv0->SetMessage(527103);
				tv0->ClearReplies();
				tv0->AddReply(527104, 28403, 28402);
				return;
			}
			if (a0 == 28403) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(527105);
				tv0->ClearReplies();
				tv0->AddReply(527106, 28405, 28404);
				return;
			}
			if (a0 == 28405) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(527107);
				tv0->ClearReplies();
				tv0->AddReply(527108, 28407, 28406);
				return;
			}
			if (a0 == 28407) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(527109);
				tv0->ClearReplies();
				tv0->AddReply(527110, 28409, 28408);
				return;
			}
			if (a0 == 28409) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(527111);
				tv0->ClearReplies();
				tv0->AddReply(527112, -1, 28410);
				tv0->AddReply(527113, -1, 28411);
				return;
			}
			if (a0 == 20805) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(519620);
				tv0->ClearReplies();
				tv0->AddReply(519621, 20808, 20806);
				tv0->AddReply(520405, 20808, 21612);
				tv0->AddReply(519622, 20808, 20807);
				return;
			}
			if (a0 == 20808) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(519623);
				tv0->ClearReplies();
				tv0->AddReply(517980, -1, 19113);
				return;
			}
			if (a0 == 19045) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(517907);
				tv0->ClearReplies();
				tv0->AddReply(517908, -1, 19046);
				return;
			}
			if (a0 == 19042) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(517904);
				tv0->ClearReplies();
				tv0->AddReply(520402, 21610, 21609);
				tv0->AddReply(517905, -1, 19043);
				return;
			}
			if (a0 == 21610) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(520403);
				tv0->ClearReplies();
				tv0->AddReply(520404, -1, 21611);
				return;
			}
			if (a0 == 21606) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(520400);
				tv0->ClearReplies();
				tv0->AddReply(520401, 20800, 21607);
				return;
			}
			if (a0 == 20800) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(519615);
				tv0->ClearReplies();
				tv0->AddReply(517896, 19035, 19034);
				tv0->AddReply(517893, 19032, 19031);
				tv0->AddReply(520398, -1, 21604);
				return;
			}
			if (a0 == 19032) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(517894);
				tv0->ClearReplies();
				tv0->AddReply(517895, -1, 19033);
				return;
			}
			if (a0 == 19035) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(517897);
				tv0->ClearReplies();
				tv0->AddReply(517898, 19037, 19036);
				tv0->AddReply(527070, 28367, 28366);
				return;
			}
			if (a0 == 28367) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(527071);
				tv0->ClearReplies();
				tv0->AddReply(527072, 28369, 28368);
				return;
			}
			if (a0 == 28369) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(527073);
				tv0->ClearReplies();
				tv0->AddReply(527074, 19037, 28370);
				return;
			}
			if (a0 == 19037) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(517899);
				tv0->ClearReplies();
				tv0->AddReply(517900, -1, 19038);
				tv0->AddReply(519616, 20802, 20801);
				return;
			}
			if (a0 == 20802) {
				f_250_a1_v("Neutral");
				tv0->SetMessage(519617);
				tv0->ClearReplies();
				tv0->AddReply(519618, -1, 20803);
				tv0->AddReply(519619, -1, 20804);
				return;
			}
			tv3 = true;
			if (f_abe_a0_b()) {
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
		f_97d_a1_b(f_a2a_a0_o());
		if (!f_928_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ab8_a0_i());
		L0->SetNPCDescription(f_ab6_a0_i());
		L0->SetPhoto(f_aba_a0_s());
		L0->SetPhoto2(f_abc_a0_s());
		L0->SetPlayerName(f_c84_a0_i());
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
		f_96c_a1_v(a0);
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
			f_595_a1_v("Neutral");
			tv0->SetMessage(520656);
			tv0->ClearReplies();
			if (f_be9_a1_b(tv1) && f_b77_a1_b(tv1)) {
				tv0->AddReply(520657, 21869, 21868);
			}
			tv0->AddReply(520664, -1, 21875);
			break;
			return;
		}
		if (f_abe_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a07_a1_v(tv2);
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

	void f_595_a1_v(string a0)
	{
		if (!f_abe_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a0e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a23_a0_v();
			if (a1 == 21868) {
				f_ac0_a2_v(tv1, tv0);
			}
			if (a0 == 21867) {
				f_595_a1_v("Neutral");
				tv0->SetMessage(520656);
				tv0->ClearReplies();
				if (f_be9_a1_b(tv1) && f_b77_a1_b(tv1)) {
					tv0->AddReply(520657, 21869, 21868);
				}
				tv0->AddReply(520664, -1, 21875);
				return;
			}
			if (a0 == 21869) {
				f_595_a1_v("Neutral");
				tv0->SetMessage(520658);
				tv0->ClearReplies();
				tv0->AddReply(520659, 21871, 21870);
				return;
			}
			if (a0 == 21871) {
				f_595_a1_v("Neutral");
				tv0->SetMessage(520660);
				tv0->ClearReplies();
				tv0->AddReply(520661, 21873, 21872);
				return;
			}
			if (a0 == 21873) {
				f_595_a1_v("Neutral");
				tv0->SetMessage(520662);
				tv0->ClearReplies();
				tv0->AddReply(520663, -1, 21874);
				return;
			}
			tv3 = true;
			if (f_abe_a0_b()) {
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
		f_97d_a1_b(f_a2a_a0_o());
		if (!f_928_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ab8_a0_i());
		L0->SetNPCDescription(f_ab6_a0_i());
		L0->SetPhoto(f_aba_a0_s());
		L0->SetPhoto2(f_abc_a0_s());
		L0->SetPlayerName(f_c84_a0_i());
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
		f_96c_a1_v(a0);
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
			f_6ac_a1_v("Neutral");
			tv0->SetMessage(520750);
			tv0->ClearReplies();
			tv0->AddReply(520751, 21964, 21963);
			tv0->AddReply(520755, 21968, 21967);
			break;
			return;
		}
		if (f_abe_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a07_a1_v(tv2);
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

	void f_6ac_a1_v(string a0)
	{
		if (!f_abe_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a0e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a23_a0_v();
			if (a0 == 21962) {
				f_6ac_a1_v("Neutral");
				tv0->SetMessage(520750);
				tv0->ClearReplies();
				tv0->AddReply(520751, 21964, 21963);
				tv0->AddReply(520755, 21968, 21967);
				return;
			}
			if (a0 == 21968) {
				f_6ac_a1_v("Neutral");
				tv0->SetMessage(520756);
				tv0->ClearReplies();
				tv0->AddReply(520757, 21964, 21969);
				return;
			}
			if (a0 == 21964) {
				f_6ac_a1_v("Neutral");
				tv0->SetMessage(520752);
				tv0->ClearReplies();
				tv0->AddReply(520753, -1, 21965);
				tv0->AddReply(520754, -1, 21966);
				return;
			}
			tv3 = true;
			if (f_abe_a0_b()) {
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
		f_97d_a1_b(f_a2a_a0_o());
		if (!f_928_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ab8_a0_i());
		L0->SetNPCDescription(f_ab6_a0_i());
		L0->SetPhoto(f_aba_a0_s());
		L0->SetPhoto2(f_abc_a0_s());
		L0->SetPlayerName(f_c84_a0_i());
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
		f_96c_a1_v(a0);
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
			f_7a0_a1_v("Neutral");
			tv0->SetMessage(540551);
			tv0->ClearReplies();
			tv0->AddReply(540552, -1, 42561);
			tv0->AddReply(540795, -1, 42844);
			break;
			return;
		}
		if (f_abe_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a07_a1_v(tv2);
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

	void f_7a0_a1_v(string a0)
	{
		if (!f_abe_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a0e_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a23_a0_v();
			if (a0 == 42560) {
				f_7a0_a1_v("Neutral");
				tv0->SetMessage(540551);
				tv0->ClearReplies();
				tv0->AddReply(540552, -1, 42561);
				tv0->AddReply(540795, -1, 42844);
				return;
			}
			tv3 = true;
			if (f_abe_a0_b()) {
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
		f_7e4_a0_v();
	}

	void f_7e4_a0_v(void)
	{
		if (!f_923_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_89a_a0_v();
		}
	}

	bool f_7f8_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_91a_a1_b(L0);
	}

	void f_807_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_80c_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_8e6_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_822_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_82b_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_82b_a0_v();
			if (f_923_a0_b() && f_80c_a0_b()) {
				if (f_7f8_a0_b()) {
					f_9b7_a1_b(f_a2a_a0_o());
				}
			} else {
				f_807_a0_v();
				f_822_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_8e1_a0_v();
		f_82b_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_82b_a0_v();
		f_a07_a1_v("Neutral");
		f_822_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_822_a0_v();
		} else {
			f_a07_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_8e1_a0_v();
			f_91a_a1_b(a0);
			enable OnUse;
			f_c95_a1_v(a0);
			f_a07_a1_v("Neutral");
			f_82b_a0_v();
			f_822_a0_v();
		}
	}
}

void f_89a_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_923_a0_b()) {
		return;
	}
	L0 = f_aa5_a0_i();
	for (L1 = 0; L1 < 5 && f_923_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_a9e_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_8df_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_8df_a0_b(void)
{
	return true;
}

void f_8e1_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_8e6_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_8ee_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_8fa_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_8ee_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_a3a_a3_f(L0 + a2, a3, a4));
	return true;
}

bool f_910_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_91a_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_910_a1_b(L0);
}

bool f_923_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_928_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_a30_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_abe_a0_b()) {
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

void f_96c_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_abe_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_97d_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_9b7_a1_b(a0)) {
			if (!f_9dc_a1_b(a0)) {
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
		if (!f_9dc_a1_b(a0)) {
			if (!f_9b7_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_9b7_a1_b(object a0)
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
	return f_a14_a1_b(L4);
}

bool f_9dc_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_a8f_a0_i() + "m";
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
	return f_a14_a1_b(L4);
}

void f_a07_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_a0e_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_a14_a1_b(string a0)
{
	if (f_abe_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_a23_a0_v(void)
{
	if (f_abe_a0_b()) {
		@lshStopSpeech();
	}
}

object f_a2a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_a30_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_a3a_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_a45_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_a4a_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_a51_a2_b(object a0, float a1)
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
	f_a74_a1_v(a1);
	f_8fa_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_a74_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_a7e_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_a8a_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_a8f_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_a98_a1_b(int a0)
{
	return f_a8f_a0_i() == a0;
}

string f_a9e_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_aa5_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_a9e_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_ab6_a0_i(void)
{
	return 515542;
}

int f_ab8_a0_i(void)
{
	return 502867;
}

string f_aba_a0_s(void)
{
	return "ui/NPC_Laska.png";
}

string f_abc_a0_s(void)
{
	return "ui/NPC_Laska_b.png";
}

bool f_abe_a0_b(void)
{
	return true;
}

void f_ac0_a2_v(object a0, object a1)
{
	@SetVariable("oob6Laska1", 1);
}

void f_ac6_a2_v(object a0, object a1)
{
	@SetVariable("oob1Laska4", 1);
}

void f_acc_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_c52_a0_o();
	L0->AddMark("b1LaskaGotoMishka", "pt_map_mishka", 3, 530602, f_a8a_a0_f());
}

void f_adc_a2_v(object a0, object a1)
{
	@SetVariable("oob12Laska1", 1);
}

void f_ae2_a2_v(object a0, object a1)
{
	f_c63_a3_v(f_c52_a0_o(), "pt_map_mishka", 2);
	a1->ShowMap(f_c52_a0_o());
}

void f_af2_a2_v(object a0, object a1)
{
	f_a51_a2_b(a0, 0.30000001192092896);
}

void f_af9_a2_v(object a0, object a1)
{
	f_a51_a2_b(a0, -0.10000000149011612);
}

void f_b00_a2_v(object a0, object a1)
{
	f_c63_a3_v(f_c52_a0_o(), "pt_map_gorbun", 2);
	a1->ShowMap(f_c52_a0_o());
}

void f_b10_a2_v(object a0, object a1)
{
	@SetVariable("oob1Laska1", 1);
}

void f_b16_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b1q02", 1);
	L0 = f_c52_a0_o();
	L0->AddMark("b1q02LaskaGotoGorbin", "pt_map_gorbun", 0, 517938, f_a8a_a0_f());
	L0->AddMark("b1q02LaskaSelf", "pt_map_laska", 0, 517939, f_a8a_a0_f());
	f_bf5_a0_v();
	f_c1c_a0_v();
}

void f_b39_a2_v(object a0, object a1)
{
	int L0;
	f_c02_a0_v();
	a0->RemoveItemByType(L0, "b1q02_blood", 1);
	f_a7e_a2_b("quest_b1_02", "agony_cured");
	f_a7e_a2_b("quest_b1_02", "completed");
}

void f_b4c_a2_v(object a0, object a1)
{
	@SetVariable("oob1Laska2", 1);
}

void f_b52_a2_v(object a0, object a1)
{
	@SetVariable("oob1Laska3", 1);
}

void f_b58_a2_v(object a0, object a1)
{
	f_a7e_a2_b("quest_b1_02", "fail");
}

void f_b5f_a2_v(object a0, object a1)
{
	if (f_a45_a1_i("b1q02") != 0) {
		f_c0f_a0_v();
	}
}

bool f_b6b_a1_b(object a0)
{
	if (f_a45_a1_i("oob1Laska4") == 0) {
		return true;
	}
	return false;
}

bool f_b77_a1_b(object a0)
{
	if (f_a45_a1_i("b6q01KlaraLaska") != 0) {
		return true;
	}
	return false;
}

bool f_b83_a1_b(object a0)
{
	if (f_a45_a1_i("b1q05") == 1000) {
		return true;
	}
	return false;
}

bool f_b8f_a1_b(object a0)
{
	if (f_a45_a1_i("oob12Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_b9b_a1_b(object a0)
{
	if (f_a45_a1_i("oob1Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_ba7_a1_b(object a0)
{
	if (f_a45_a1_i("b1q02") == 0) {
		return true;
	}
	return false;
}

bool f_bb3_a1_b(object a0)
{
	if (f_a4a_a2_b(a0, "b1q02_blood")) {
		if (f_a45_a1_i("b1q02") == 2) {
			return true;
		}
	}
	return false;
}

bool f_bc5_a1_b(object a0)
{
	if (f_a45_a1_i("oob1Laska2") == 0) {
		return true;
	}
	return false;
}

bool f_bd1_a1_b(object a0)
{
	if (f_a45_a1_i("b1q02_dead") != 0) {
		return true;
	}
	return false;
}

bool f_bdd_a1_b(object a0)
{
	if (f_a45_a1_i("oob1Laska3") == 0) {
		return true;
	}
	return false;
}

bool f_be9_a1_b(object a0)
{
	if (f_a45_a1_i("oob6Laska1") == 0) {
		return true;
	}
	return false;
}

void f_bf5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 200, 2, 517940);
	f_c36_a2_b(L0, -1);
}

void f_c02_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 203, 2, 517943);
	f_c36_a2_b(L0, 200);
}

void f_c0f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 204, 2, 518079);
	f_c36_a2_b(L0, 200);
}

void f_c1c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 201, 2, 517941);
	f_c36_a2_b(L0, 200);
}

object f_c29_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_c36_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_c29_a0_o();
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

object f_c52_a0_o(void)
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

void f_c63_a3_v(object a0, string a1, float a2)
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

int f_c84_a0_i(void)
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

void f_c95_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_laska", L0);
	if (!L0) {
		t7{a0};
		@SetVariable("mt_laska", 1);
	}
	if (f_a98_a1_b(1)) {
		t3{a0};
		return;
	}
	if (f_a98_a1_b(6)) {
		t5{a0};
		return;
	}
	if (f_a98_a1_b(12)) {
		t1{a0};
		return;
	}
	t9{a0};
}

