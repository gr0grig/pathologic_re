event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event evt_11 11;

var object g0;

task t0
{
	void init(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

maintask t1
{
	void init(void)
	{
		f_17af_a0_v();
		if (!f_12f8_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_1339_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void OnUnload(void)
	{
		t0{};
	}

	void OnUse(object a0)
	{
		f_17b4_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_12ec_a1_b(a0);
		@WaitForAnimEnd();
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
		if (!f_12fd_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13ac_a0_i());
		L0->SetPhoto(f_13ae_a0_s());
		L0->SetPlayerName(f_175e_a0_i());
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
		f_1335_a1_v(a0);
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
			f_14a0_a2_v(tv1, tv0);
			f_af_a1_v("Neutral");
			tv0->SetMessage(187);
			tv0->ClearReplies();
			tv0->AddReply(190, 228, 227);
			tv0->AddReply(188, 226, 225);
			break;
			return;
		}
		if (f_13b0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1339_a1_v(tv2);
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

	void f_af_a1_v(string a0)
	{
		if (!f_13b0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1339_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_134b_a0_v();
			if (a0 == 224) {
				f_14a0_a2_v(tv1, tv0);
				f_af_a1_v("Neutral");
				tv0->SetMessage(187);
				tv0->ClearReplies();
				tv0->AddReply(190, 228, 227);
				tv0->AddReply(188, 226, 225);
				return;
			}
			if (a0 == 226) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(189);
				tv0->ClearReplies();
				tv0->AddReply(192, 233, 229);
				tv0->AddReply(193, -1, 230);
				return;
			}
			if (a0 == 233) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(196);
				tv0->ClearReplies();
				tv0->AddReply(203, -1, 241);
				return;
			}
			if (a0 == 228) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(191);
				tv0->ClearReplies();
				tv0->AddReply(197, 236, 234);
				tv0->AddReply(198, 9260, 235);
				return;
			}
			if (a0 == 9260) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(8437);
				tv0->ClearReplies();
				tv0->AddReply(8438, -1, 9261);
				return;
			}
			if (a0 == 236) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(199);
				tv0->ClearReplies();
				tv0->AddReply(200, 233, 237);
				return;
			}
			tv3 = true;
			if (f_13b0_a0_b()) {
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
		if (!f_12fd_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13ac_a0_i());
		L0->SetPhoto(f_13ae_a0_s());
		L0->SetPlayerName(f_175e_a0_i());
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
		f_1335_a1_v(a0);
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
			f_25e_a1_v("Neutral");
			tv0->SetMessage(6465);
			tv0->ClearReplies();
			if (f_1501_a1_b(tv1) && f_1519_a1_b(tv1)) {
				tv0->AddReply(6466, 6344, 7129);
			}
			if (f_1609_a1_b(tv1) && f_150d_a1_b(tv1)) {
				tv0->AddReply(6467, 6336, 7130);
			}
			if (f_16df_a1_b(tv1) && f_1525_a1_b(tv1)) {
				tv0->AddReply(6470, 7167, 7133);
			}
			if (f_1643_a1_b(tv1) && f_1531_a1_b(tv1)) {
				tv0->AddReply(6471, 7181, 7134);
			}
			if (f_1637_a1_b(tv1) && f_153d_a1_b(tv1)) {
				tv0->AddReply(6474, 7191, 7137);
			}
			if (f_16a3_a1_b(tv1) && f_1549_a1_b(tv1)) {
				tv0->AddReply(6476, 7206, 7139);
			}
			if (f_15f1_a1_b(tv1) && f_1555_a1_b(tv1)) {
				tv0->AddReply(6481, 7220, 7144);
			}
			if (f_1697_a1_b(tv1) && f_1561_a1_b(tv1)) {
				tv0->AddReply(6488, 7241, 7151);
			}
			tv0->AddReply(6502, -1, 7166);
			break;
			return;
		}
		if (f_13b0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1339_a1_v(tv2);
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

	void f_25e_a1_v(string a0)
	{
		if (!f_13b0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1339_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_134b_a0_v();
			if (a1 == 6349) {
				f_13b2_a2_v(tv1, tv0);
			}
			if (a1 == 7165) {
				f_13b2_a2_v(tv1, tv0);
			}
			if (a1 == 6353) {
				f_13b2_a2_v(tv1, tv0);
			}
			if (a1 == 7159) {
				f_13b8_a2_v(tv1, tv0);
			}
			if (a1 == 7160) {
				f_13b8_a2_v(tv1, tv0);
			}
			if (a1 == 7156) {
				f_13b8_a2_v(tv1, tv0);
			}
			if (a1 == 7157) {
				f_13b8_a2_v(tv1, tv0);
			}
			if (a1 == 6343) {
				f_13b8_a2_v(tv1, tv0);
			}
			if (a1 == 7171) {
				f_13d5_a2_v(tv1, tv0);
			}
			if (a1 == 7180) {
				f_13d5_a2_v(tv1, tv0);
			}
			if (a1 == 7178) {
				f_13d5_a2_v(tv1, tv0);
			}
			if (a1 == 7190) {
				f_13db_a2_v(tv1, tv0);
			}
			if (a1 == 7205) {
				f_13e1_a2_v(tv1, tv0);
			}
			if (a1 == 7203) {
				f_13e1_a2_v(tv1, tv0);
			}
			if (a1 == 7200) {
				f_14cd_a2_v(tv1, tv0);
			}
			if (a1 == 7198) {
				f_13e1_a2_v(tv1, tv0);
			}
			if (a1 == 7213) {
				f_13e7_a2_v(tv1, tv0);
			}
			if (a1 == 7214) {
				f_13e7_a2_v(tv1, tv0);
			}
			if (a1 == 7237) {
				f_13ed_a2_v(tv1, tv0);
			}
			if (a1 == 7238) {
				f_13ed_a2_v(tv1, tv0);
			}
			if (a1 == 7229) {
				f_13ed_a2_v(tv1, tv0);
			}
			if (a1 == 7230) {
				f_13ed_a2_v(tv1, tv0);
			}
			if (a1 == 7244) {
				f_14ef_a2_v(tv1, tv0);
				f_13ff_a2_v(tv1, tv0);
				f_13f9_a2_v(tv1, tv0);
			}
			if (a1 == 7249) {
				f_13f9_a2_v(tv1, tv0);
				f_13ff_a2_v(tv1, tv0);
				f_14ef_a2_v(tv1, tv0);
			}
			if (a1 == 7250) {
				f_13f9_a2_v(tv1, tv0);
				f_14ef_a2_v(tv1, tv0);
				f_13ff_a2_v(tv1, tv0);
			}
			if (a0 == 7128) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6465);
				tv0->ClearReplies();
				if (f_1501_a1_b(tv1) && f_1519_a1_b(tv1)) {
					tv0->AddReply(6466, 6344, 7129);
				}
				if (f_1609_a1_b(tv1) && f_150d_a1_b(tv1)) {
					tv0->AddReply(6467, 6336, 7130);
				}
				if (f_16df_a1_b(tv1) && f_1525_a1_b(tv1)) {
					tv0->AddReply(6470, 7167, 7133);
				}
				if (f_1643_a1_b(tv1) && f_1531_a1_b(tv1)) {
					tv0->AddReply(6471, 7181, 7134);
				}
				if (f_1637_a1_b(tv1) && f_153d_a1_b(tv1)) {
					tv0->AddReply(6474, 7191, 7137);
				}
				if (f_16a3_a1_b(tv1) && f_1549_a1_b(tv1)) {
					tv0->AddReply(6476, 7206, 7139);
				}
				if (f_15f1_a1_b(tv1) && f_1555_a1_b(tv1)) {
					tv0->AddReply(6481, 7220, 7144);
				}
				if (f_1697_a1_b(tv1) && f_1561_a1_b(tv1)) {
					tv0->AddReply(6488, 7241, 7151);
				}
				tv0->AddReply(6502, -1, 7166);
				return;
			}
			if (a0 == 7241) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6572);
				tv0->ClearReplies();
				tv0->AddReply(6573, 7243, 7242);
				return;
			}
			if (a0 == 7243) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6574);
				tv0->ClearReplies();
				tv0->AddReply(6575, -1, 7244);
				if (!f_156d_a1_b(tv1)) {
					tv0->AddReply(6576, 7248, 7245);
				}
				if (!f_16eb_a1_b(tv1)) {
					tv0->AddReply(6577, 7247, 7246);
				}
				return;
			}
			if (a0 == 7247) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6578);
				tv0->ClearReplies();
				tv0->AddReply(6581, -1, 7250);
				return;
			}
			if (a0 == 7248) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6579);
				tv0->ClearReplies();
				tv0->AddReply(6580, -1, 7249);
				return;
			}
			if (a0 == 7220) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6553);
				tv0->ClearReplies();
				tv0->AddReply(6554, 7222, 7221);
				tv0->AddReply(6557, 7225, 7224);
				return;
			}
			if (a0 == 7225) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6558);
				tv0->ClearReplies();
				tv0->AddReply(6559, 7231, 7226);
				tv0->AddReply(6560, 7228, 7227);
				return;
			}
			if (a0 == 7228) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6561);
				tv0->ClearReplies();
				tv0->AddReply(6562, -1, 7229);
				tv0->AddReply(6563, -1, 7230);
				return;
			}
			if (a0 == 7231) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6564);
				tv0->ClearReplies();
				tv0->AddReply(6565, 7234, 7232);
				tv0->AddReply(6566, 7234, 7233);
				return;
			}
			if (a0 == 7222) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6555);
				tv0->ClearReplies();
				tv0->AddReply(6556, 7234, 7223);
				return;
			}
			if (a0 == 7234) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6567);
				tv0->ClearReplies();
				tv0->AddReply(6568, 7236, 7235);
				return;
			}
			if (a0 == 7236) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6569);
				tv0->ClearReplies();
				tv0->AddReply(6570, -1, 7237);
				tv0->AddReply(6571, -1, 7238);
				return;
			}
			if (a0 == 7206) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6541);
				tv0->ClearReplies();
				tv0->AddReply(6542, 7208, 7207);
				tv0->AddReply(6551, 7208, 7216);
				return;
			}
			if (a0 == 7208) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6543);
				tv0->ClearReplies();
				tv0->AddReply(6544, 7210, 7209);
				tv0->AddReply(6552, 7212, 7218);
				return;
			}
			if (a0 == 7210) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6545);
				tv0->ClearReplies();
				tv0->AddReply(6546, 7212, 7211);
				return;
			}
			if (a0 == 7212) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6547);
				tv0->ClearReplies();
				tv0->AddReply(6548, -1, 7213);
				tv0->AddReply(6549, -1, 7214);
				return;
			}
			if (a0 == 7191) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6526);
				tv0->ClearReplies();
				tv0->AddReply(6527, 7193, 7192);
				return;
			}
			if (a0 == 7193) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6528);
				tv0->ClearReplies();
				tv0->AddReply(6529, 7195, 7194);
				tv0->AddReply(6531, 7197, 7196);
				return;
			}
			if (a0 == 7197) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6532);
				tv0->ClearReplies();
				tv0->AddReply(6533, -1, 7198);
				return;
			}
			if (a0 == 7195) {
				f_14cd_a2_v(tv1, tv0);
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6530);
				tv0->ClearReplies();
				if (!f_1613_a1_b(tv1)) {
					tv0->AddReply(6534, 7201, 7199);
				}
				tv0->AddReply(6535, -1, 7200);
				return;
			}
			if (a0 == 7201) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6536);
				tv0->ClearReplies();
				if (!f_14f5_a1_b(tv1)) {
					tv0->AddReply(6537, 7204, 7202);
				}
				tv0->AddReply(6538, -1, 7203);
				return;
			}
			if (a0 == 7204) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6539);
				tv0->ClearReplies();
				tv0->AddReply(6540, -1, 7205);
				return;
			}
			if (a0 == 7181) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6517);
				tv0->ClearReplies();
				tv0->AddReply(6518, 7183, 7182);
				return;
			}
			if (a0 == 7183) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6519);
				tv0->ClearReplies();
				tv0->AddReply(6520, 7185, 7184);
				tv0->AddReply(6522, 7187, 7186);
				return;
			}
			if (a0 == 7187) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6523);
				tv0->ClearReplies();
				tv0->AddReply(6525, -1, 7190);
				return;
			}
			if (a0 == 7185) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6521);
				tv0->ClearReplies();
				tv0->AddReply(6524, 7187, 7188);
				return;
			}
			if (a0 == 7167) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6503);
				tv0->ClearReplies();
				tv0->AddReply(6504, 7170, 7168);
				tv0->AddReply(6505, 7173, 7169);
				return;
			}
			if (a0 == 7173) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6509);
				tv0->ClearReplies();
				tv0->AddReply(6510, 7175, 7174);
				return;
			}
			if (a0 == 7175) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6511);
				tv0->ClearReplies();
				tv0->AddReply(6512, 7177, 7176);
				return;
			}
			if (a0 == 7177) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6513);
				tv0->ClearReplies();
				tv0->AddReply(6514, -1, 7178);
				return;
			}
			if (a0 == 7170) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6506);
				tv0->ClearReplies();
				tv0->AddReply(6507, -1, 7171);
				tv0->AddReply(6508, 7179, 7172);
				return;
			}
			if (a0 == 7179) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6515);
				tv0->ClearReplies();
				tv0->AddReply(6516, -1, 7180);
				return;
			}
			if (a0 == 6336) {
				f_14a6_a2_v(tv1, tv0);
				f_25e_a1_v("Neutral");
				tv0->SetMessage(5751);
				tv0->ClearReplies();
				tv0->AddReply(5752, 6338, 6337);
				tv0->AddReply(5756, 6342, 6341);
				return;
			}
			if (a0 == 6342) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(5757);
				tv0->ClearReplies();
				tv0->AddReply(5758, -1, 6343);
				return;
			}
			if (a0 == 6338) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(5753);
				tv0->ClearReplies();
				tv0->AddReply(5754, 7158, 6339);
				tv0->AddReply(5755, 7155, 6340);
				return;
			}
			if (a0 == 7155) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6492);
				tv0->ClearReplies();
				tv0->AddReply(6493, -1, 7156);
				tv0->AddReply(6494, -1, 7157);
				return;
			}
			if (a0 == 7158) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6495);
				tv0->ClearReplies();
				tv0->AddReply(6496, -1, 7159);
				tv0->AddReply(6497, -1, 7160);
				return;
			}
			if (a0 == 6344) {
				if (f_150d_a1_b(tv1)) {
					f_13f3_a2_v(tv1, tv0);
					f_25e_a1_v("Neutral");
					tv0->SetMessage(5759);
					tv0->ClearReplies();
					tv0->AddReply(5760, 6346, 6345);
					tv0->AddReply(5769, 7161, 6354);
					return;
				}
			}
			if (a0 == 7161) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6498);
				tv0->ClearReplies();
				tv0->AddReply(6499, 6346, 7162);
				return;
			}
			if (a0 == 6346) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(5761);
				tv0->ClearReplies();
				tv0->AddReply(5762, 6348, 6347);
				tv0->AddReply(5765, 6351, 6350);
				return;
			}
			if (a0 == 6351) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(5766);
				tv0->ClearReplies();
				tv0->AddReply(5767, 7164, 6352);
				tv0->AddReply(5768, -1, 6353);
				return;
			}
			if (a0 == 7164) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(6500);
				tv0->ClearReplies();
				tv0->AddReply(6501, -1, 7165);
				return;
			}
			if (a0 == 6348) {
				f_25e_a1_v("Neutral");
				tv0->SetMessage(5763);
				tv0->ClearReplies();
				tv0->AddReply(5764, -1, 6349);
				return;
			}
			tv3 = true;
			if (f_13b0_a0_b()) {
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
		if (!f_12fd_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13ac_a0_i());
		L0->SetPhoto(f_13ae_a0_s());
		L0->SetPlayerName(f_175e_a0_i());
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
		f_1335_a1_v(a0);
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
			f_88b_a1_v("Neutral");
			tv0->SetMessage(6864);
			tv0->ClearReplies();
			if (f_1579_a1_b(tv1) && f_15c1_a1_b(tv1)) {
				tv0->AddReply(6865, 7572, 7571);
			}
			if (f_1585_a1_b(tv1) && f_15cd_a1_b(tv1)) {
				tv0->AddReply(6868, 7575, 7574);
			}
			if (f_1591_a1_b(tv1) && f_15d9_a1_b(tv1)) {
				tv0->AddReply(6870, 7577, 7576);
			}
			if (f_159d_a1_b(tv1) && f_15e5_a1_b(tv1)) {
				tv0->AddReply(6874, 7581, 7580);
			}
			if (f_15a9_a1_b(tv1) && f_15b5_a1_b(tv1)) {
				tv0->AddReply(6872, 7579, 7578);
			}
			tv0->AddReply(7531, -1, 8313);
			break;
			f_88b_a1_v("Neutral");
			tv0->SetMessage(9203);
			tv0->ClearReplies();
			tv0->AddReply(9204, 10097, 10096);
			tv0->AddReply(9216, 10111, 10110);
			break;
			return;
		}
		if (f_13b0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1339_a1_v(tv2);
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

	void f_88b_a1_v(string a0)
	{
		if (!f_13b0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1339_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_134b_a0_v();
			if (a1 == 7899) {
				f_1405_a2_v(tv1, tv0);
				f_1429_a2_v(tv1, tv0);
				f_14d3_a2_v(tv1, tv0);
			}
			if (a1 == 7900) {
				f_1405_a2_v(tv1, tv0);
				f_1429_a2_v(tv1, tv0);
			}
			if (a1 == 7913) {
				f_1405_a2_v(tv1, tv0);
			}
			if (a1 == 7909) {
				f_1405_a2_v(tv1, tv0);
			}
			if (a1 == 7918) {
				f_140b_a2_v(tv1, tv0);
			}
			if (a1 == 7919) {
				f_140b_a2_v(tv1, tv0);
			}
			if (a1 == 7942) {
				f_1411_a2_v(tv1, tv0);
				f_1449_a2_v(tv1, tv0);
				f_1485_a2_v(tv1, tv0);
				f_13be_a2_v(tv1, tv0);
				f_13c9_a2_v(tv1, tv0);
			}
			if (a1 == 7947) {
				f_1411_a2_v(tv1, tv0);
				f_1449_a2_v(tv1, tv0);
				f_1485_a2_v(tv1, tv0);
				f_13be_a2_v(tv1, tv0);
				f_13c9_a2_v(tv1, tv0);
			}
			if (a1 == 7948) {
				f_1417_a2_v(tv1, tv0);
				f_1469_a2_v(tv1, tv0);
			}
			if (a1 == 7949) {
				f_1417_a2_v(tv1, tv0);
				f_1469_a2_v(tv1, tv0);
			}
			if (a1 == 7950) {
				f_141d_a2_v(tv1, tv0);
			}
			if (a0 == 7570) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(6864);
				tv0->ClearReplies();
				if (f_1579_a1_b(tv1) && f_15c1_a1_b(tv1)) {
					tv0->AddReply(6865, 7572, 7571);
				}
				if (f_1585_a1_b(tv1) && f_15cd_a1_b(tv1)) {
					tv0->AddReply(6868, 7575, 7574);
				}
				if (f_1591_a1_b(tv1) && f_15d9_a1_b(tv1)) {
					tv0->AddReply(6870, 7577, 7576);
				}
				if (f_159d_a1_b(tv1) && f_15e5_a1_b(tv1)) {
					tv0->AddReply(6874, 7581, 7580);
				}
				if (f_15a9_a1_b(tv1) && f_15b5_a1_b(tv1)) {
					tv0->AddReply(6872, 7579, 7578);
				}
				tv0->AddReply(7531, -1, 8313);
				return;
				f_88b_a1_v("Neutral");
				tv0->SetMessage(9203);
				tv0->ClearReplies();
				tv0->AddReply(9204, 10097, 10096);
				tv0->AddReply(9216, 10111, 10110);
				return;
			}
			if (a0 == 10111) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(9217);
				tv0->ClearReplies();
				tv0->AddReply(9218, 10097, 10112);
				return;
			}
			if (a0 == 10097) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(9205);
				tv0->ClearReplies();
				tv0->AddReply(9206, 10099, 10098);
				tv0->AddReply(9210, 10103, 10102);
				return;
			}
			if (a0 == 10103) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(9211);
				tv0->ClearReplies();
				tv0->AddReply(9212, 10105, 10104);
				tv0->AddReply(9215, 10099, 10108);
				return;
			}
			if (a0 == 10105) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(9213);
				tv0->ClearReplies();
				tv0->AddReply(9214, 10099, 10106);
				return;
			}
			if (a0 == 10099) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(9207);
				tv0->ClearReplies();
				tv0->AddReply(9208, -1, 10100);
				tv0->AddReply(9209, -1, 10101);
				return;
			}
			if (a0 == 7579) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(6873);
				tv0->ClearReplies();
				tv0->AddReply(7214, -1, 7950);
				return;
			}
			if (a0 == 7581) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(6875);
				tv0->ClearReplies();
				tv0->AddReply(7212, -1, 7948);
				tv0->AddReply(7213, -1, 7949);
				return;
			}
			if (a0 == 7577) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(6871);
				tv0->ClearReplies();
				tv0->AddReply(7192, 7926, 7924);
				tv0->AddReply(7193, 7926, 7925);
				tv0->AddReply(7195, 7928, 7927);
				return;
			}
			if (a0 == 7928) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7196);
				tv0->ClearReplies();
				tv0->AddReply(7197, 7926, 7929);
				return;
			}
			if (a0 == 7926) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7194);
				tv0->ClearReplies();
				if (f_164f_a1_b(tv1)) {
					tv0->AddReply(7198, 7932, 7931);
				}
				if (!f_164f_a1_b(tv1)) {
					tv0->AddReply(7200, 7935, 7934);
				}
				return;
			}
			if (a0 == 7935) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7201);
				tv0->ClearReplies();
				tv0->AddReply(7202, 7932, 7936);
				return;
			}
			if (a0 == 7932) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7199);
				tv0->ClearReplies();
				tv0->AddReply(7203, 7939, 7938);
				tv0->AddReply(7208, 7944, 7943);
				return;
			}
			if (a0 == 7944) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7209);
				tv0->ClearReplies();
				tv0->AddReply(7210, 7939, 7945);
				return;
			}
			if (a0 == 7939) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7204);
				tv0->ClearReplies();
				tv0->AddReply(7205, 7941, 7940);
				tv0->AddReply(7211, -1, 7947);
				return;
			}
			if (a0 == 7941) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7206);
				tv0->ClearReplies();
				tv0->AddReply(7207, -1, 7942);
				return;
			}
			if (a0 == 7575) {
				f_1423_a2_v(tv1, tv0);
				f_88b_a1_v("Neutral");
				tv0->SetMessage(6869);
				tv0->ClearReplies();
				tv0->AddReply(7183, 7915, 7914);
				return;
			}
			if (a0 == 7915) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7184);
				tv0->ClearReplies();
				tv0->AddReply(7185, 7917, 7916);
				tv0->AddReply(7189, 7921, 7920);
				return;
			}
			if (a0 == 7921) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7190);
				tv0->ClearReplies();
				tv0->AddReply(7191, 7917, 7922);
				return;
			}
			if (a0 == 7917) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7186);
				tv0->ClearReplies();
				tv0->AddReply(7187, -1, 7918);
				tv0->AddReply(7188, -1, 7919);
				return;
			}
			if (a0 == 7572) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(6866);
				tv0->ClearReplies();
				tv0->AddReply(6867, 7894, 7573);
				tv0->AddReply(7164, 7901, 7893);
				return;
			}
			if (a0 == 7901) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7172);
				tv0->ClearReplies();
				tv0->AddReply(7173, 7903, 7902);
				return;
			}
			if (a0 == 7903) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7174);
				tv0->ClearReplies();
				tv0->AddReply(7175, 7896, 7904);
				return;
			}
			if (a0 == 7894) {
				f_1423_a2_v(tv1, tv0);
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7165);
				tv0->ClearReplies();
				tv0->AddReply(7166, 7896, 7895);
				tv0->AddReply(7176, 7907, 7906);
				return;
			}
			if (a0 == 7907) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7177);
				tv0->ClearReplies();
				tv0->AddReply(7178, 7910, 7908);
				tv0->AddReply(7179, -1, 7909);
				return;
			}
			if (a0 == 7910) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7180);
				tv0->ClearReplies();
				tv0->AddReply(7181, 7896, 7911);
				tv0->AddReply(7182, -1, 7913);
				return;
			}
			if (a0 == 7896) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7167);
				tv0->ClearReplies();
				tv0->AddReply(7168, 7898, 7897);
				return;
			}
			if (a0 == 7898) {
				f_88b_a1_v("Neutral");
				tv0->SetMessage(7169);
				tv0->ClearReplies();
				tv0->AddReply(7170, -1, 7899);
				tv0->AddReply(7171, -1, 7900);
				return;
			}
			tv3 = true;
			if (f_13b0_a0_b()) {
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
		if (!f_12fd_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13ac_a0_i());
		L0->SetPhoto(f_13ae_a0_s());
		L0->SetPlayerName(f_175e_a0_i());
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
		f_1335_a1_v(a0);
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
			if (f_16af_a1_b(tv1) && !f_15fd_a1_b(tv1)) {
				f_14e3_a2_v(tv1, tv0);
				f_cb3_a1_v("Neutral");
				tv0->SetMessage(9762);
				tv0->ClearReplies();
				tv0->AddReply(9763, 10732, 10753);
				tv0->AddReply(9770, 10754, 10761);
				break;
			}
			f_cb3_a1_v("Neutral");
			tv0->SetMessage(15310);
			tv0->ClearReplies();
			tv0->AddReply(15311, -1, 16549);
			break;
			return;
		}
		if (f_13b0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1339_a1_v(tv2);
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

	void f_cb3_a1_v(string a0)
	{
		if (!f_13b0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1339_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_134b_a0_v();
			if (a1 == 10740) {
				f_1495_a2_v(tv1, tv0);
				f_13cf_a2_v(tv1, tv0);
			}
			if (a0 == 10752) {
				if (f_16af_a1_b(tv1) && !f_15fd_a1_b(tv1)) {
					f_14e3_a2_v(tv1, tv0);
					f_cb3_a1_v("Neutral");
					tv0->SetMessage(9762);
					tv0->ClearReplies();
					tv0->AddReply(9763, 10732, 10753);
					tv0->AddReply(9770, 10754, 10761);
					return;
				}
				f_cb3_a1_v("Neutral");
				tv0->SetMessage(15310);
				tv0->ClearReplies();
				tv0->AddReply(15311, -1, 16549);
				return;
			}
			if (a0 == 10754) {
				f_cb3_a1_v("Neutral");
				tv0->SetMessage(9764);
				tv0->ClearReplies();
				tv0->AddReply(9765, 10756, 10755);
				tv0->AddReply(9769, 10756, 10759);
				return;
			}
			if (a0 == 10756) {
				f_cb3_a1_v("Neutral");
				tv0->SetMessage(9766);
				tv0->ClearReplies();
				tv0->AddReply(9767, -1, 10757);
				tv0->AddReply(9768, -1, 10758);
				return;
			}
			if (a0 == 10732) {
				f_cb3_a1_v("Neutral");
				tv0->SetMessage(9746);
				tv0->ClearReplies();
				tv0->AddReply(9747, 10734, 10733);
				tv0->AddReply(9757, 10734, 10744);
				tv0->AddReply(9758, 10747, 10746);
				return;
			}
			if (a0 == 10747) {
				f_cb3_a1_v("Neutral");
				tv0->SetMessage(9759);
				tv0->ClearReplies();
				tv0->AddReply(9760, 10734, 10748);
				tv0->AddReply(9761, 10734, 10750);
				return;
			}
			if (a0 == 10734) {
				f_cb3_a1_v("Neutral");
				tv0->SetMessage(9748);
				tv0->ClearReplies();
				tv0->AddReply(9749, 10736, 10735);
				tv0->AddReply(9756, -1, 10743);
				return;
			}
			if (a0 == 10736) {
				f_cb3_a1_v("Neutral");
				tv0->SetMessage(9750);
				tv0->ClearReplies();
				tv0->AddReply(9751, 10738, 10737);
				tv0->AddReply(9755, 10738, 10741);
				return;
			}
			if (a0 == 10738) {
				f_cb3_a1_v("Neutral");
				tv0->SetMessage(9752);
				tv0->ClearReplies();
				tv0->AddReply(9753, -1, 10739);
				tv0->AddReply(9754, -1, 10740);
				return;
			}
			tv3 = true;
			if (f_13b0_a0_b()) {
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
		if (!f_12fd_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13ac_a0_i());
		L0->SetPhoto(f_13ae_a0_s());
		L0->SetPlayerName(f_175e_a0_i());
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
		f_1335_a1_v(a0);
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
			f_e41_a1_v("Neutral");
			tv0->SetMessage(13720);
			tv0->ClearReplies();
			if (f_162b_a1_b(tv1)) {
				tv0->AddReply(13721, 13787, 14987);
			}
			tv0->AddReply(13722, -1, 14988);
			break;
			return;
		}
		if (f_13b0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1339_a1_v(tv2);
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

	void f_e41_a1_v(string a0)
	{
		if (!f_13b0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1339_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_134b_a0_v();
			if (a1 == 14987) {
				f_14ac_a2_v(tv1, tv0);
			}
			if (a0 == 14986) {
				f_e41_a1_v("Neutral");
				tv0->SetMessage(13720);
				tv0->ClearReplies();
				if (f_162b_a1_b(tv1)) {
					tv0->AddReply(13721, 13787, 14987);
				}
				tv0->AddReply(13722, -1, 14988);
				return;
			}
			if (a0 == 13787) {
				f_e41_a1_v("Neutral");
				tv0->SetMessage(12613);
				tv0->ClearReplies();
				if (f_161f_a1_b(tv1)) {
					tv0->AddReply(12614, 13789, 13788);
				}
				tv0->AddReply(12632, 13812, 13811);
				if (!f_161f_a1_b(tv1)) {
					tv0->AddReply(12631, 13789, 13809);
				}
				return;
			}
			if (a0 == 13812) {
				f_e41_a1_v("Neutral");
				tv0->SetMessage(12633);
				tv0->ClearReplies();
				tv0->AddReply(12634, 13791, 13813);
				return;
			}
			if (a0 == 13789) {
				f_e41_a1_v("Neutral");
				tv0->SetMessage(12615);
				tv0->ClearReplies();
				tv0->AddReply(12616, 13791, 13790);
				tv0->AddReply(12623, 13800, 13799);
				return;
			}
			if (a0 == 13800) {
				f_e41_a1_v("Neutral");
				tv0->SetMessage(12624);
				tv0->ClearReplies();
				tv0->AddReply(12625, 13802, 13801);
				tv0->AddReply(12629, 13802, 13805);
				return;
			}
			if (a0 == 13802) {
				f_e41_a1_v("Neutral");
				tv0->SetMessage(12626);
				tv0->ClearReplies();
				tv0->AddReply(12627, -1, 13803);
				tv0->AddReply(12628, -1, 13804);
				return;
			}
			if (a0 == 13791) {
				f_e41_a1_v("Neutral");
				tv0->SetMessage(12617);
				tv0->ClearReplies();
				tv0->AddReply(12618, 13793, 13792);
				tv0->AddReply(12622, 13802, 13797);
				return;
			}
			if (a0 == 13793) {
				f_e41_a1_v("Neutral");
				tv0->SetMessage(12619);
				tv0->ClearReplies();
				tv0->AddReply(12621, 13802, 13795);
				tv0->AddReply(12620, -1, 13794);
				return;
			}
			tv3 = true;
			if (f_13b0_a0_b()) {
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
		if (!f_12fd_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13ac_a0_i());
		L0->SetPhoto(f_13ae_a0_s());
		L0->SetPlayerName(f_175e_a0_i());
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
		f_1335_a1_v(a0);
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
			if (!f_16bb_a1_b(tv1) && !f_16c7_a1_b(tv1) && f_16d3_a1_b(tv1)) {
				f_14e9_a2_v(tv1, tv0);
				f_fd5_a1_v("Neutral");
				tv0->SetMessage(12960);
				tv0->ClearReplies();
				tv0->AddReply(12961, 14167, 14166);
				break;
			}
			f_fd5_a1_v("Neutral");
			tv0->SetMessage(12966);
			tv0->ClearReplies();
			tv0->AddReply(12967, -1, 14172);
			break;
			return;
		}
		if (f_13b0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1339_a1_v(tv2);
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

	void f_fd5_a1_v(string a0)
	{
		if (!f_13b0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1339_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_134b_a0_v();
			if (a0 == 14165) {
				if (!f_16bb_a1_b(tv1) && !f_16c7_a1_b(tv1) && f_16d3_a1_b(tv1)) {
					f_14e9_a2_v(tv1, tv0);
					f_fd5_a1_v("Neutral");
					tv0->SetMessage(12960);
					tv0->ClearReplies();
					tv0->AddReply(12961, 14167, 14166);
					return;
				}
				f_fd5_a1_v("Neutral");
				tv0->SetMessage(12966);
				tv0->ClearReplies();
				tv0->AddReply(12967, -1, 14172);
				return;
			}
			if (a0 == 14167) {
				f_fd5_a1_v("Neutral");
				tv0->SetMessage(12962);
				tv0->ClearReplies();
				tv0->AddReply(12963, 14169, 14168);
				return;
			}
			if (a0 == 14169) {
				f_fd5_a1_v("Neutral");
				tv0->SetMessage(12964);
				tv0->ClearReplies();
				tv0->AddReply(12965, -1, 14170);
				return;
			}
			tv3 = true;
			if (f_13b0_a0_b()) {
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
		if (!f_12fd_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13ac_a0_i());
		L0->SetPhoto(f_13ae_a0_s());
		L0->SetPlayerName(f_175e_a0_i());
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
		f_1335_a1_v(a0);
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
			if (f_165b_a1_b(tv1) && f_1667_a1_b(tv1)) {
				f_14b2_a2_v(tv1, tv0);
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14241);
				tv0->ClearReplies();
				tv0->AddReply(14242, 15461, 15460);
				break;
			}
			f_110e_a1_v("Neutral");
			tv0->SetMessage(14258);
			tv0->ClearReplies();
			if (f_1673_a1_b(tv1) && f_167f_a1_b(tv1)) {
				tv0->AddReply(14259, 15479, 15478);
			}
			if (f_168b_a1_b(tv1)) {
				tv0->AddReply(14271, 15491, 15490);
			}
			tv0->AddReply(14278, -1, 15498);
			break;
			return;
		}
		if (f_13b0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1339_a1_v(tv2);
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

	void f_110e_a1_v(string a0)
	{
		if (!f_13b0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1339_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_134b_a0_v();
			if (a1 == 15743) {
				f_14b8_a2_v(tv1, tv0);
			}
			if (a1 == 15478) {
				f_14c1_a2_v(tv1, tv0);
			}
			if (a1 == 15490) {
				f_14c7_a2_v(tv1, tv0);
			}
			if (a0 == 15459) {
				if (f_165b_a1_b(tv1) && f_1667_a1_b(tv1)) {
					f_14b2_a2_v(tv1, tv0);
					f_110e_a1_v("Neutral");
					tv0->SetMessage(14241);
					tv0->ClearReplies();
					tv0->AddReply(14242, 15461, 15460);
					return;
				}
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14258);
				tv0->ClearReplies();
				if (f_1673_a1_b(tv1) && f_167f_a1_b(tv1)) {
					tv0->AddReply(14259, 15479, 15478);
				}
				if (f_168b_a1_b(tv1)) {
					tv0->AddReply(14271, 15491, 15490);
				}
				tv0->AddReply(14278, -1, 15498);
				return;
			}
			if (a0 == 15491) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14272);
				tv0->ClearReplies();
				tv0->AddReply(14273, 15493, 15492);
				return;
			}
			if (a0 == 15493) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14274);
				tv0->ClearReplies();
				tv0->AddReply(14275, 15495, 15494);
				return;
			}
			if (a0 == 15495) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14276);
				tv0->ClearReplies();
				tv0->AddReply(14277, -1, 15496);
				return;
			}
			if (a0 == 15479) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14260);
				tv0->ClearReplies();
				tv0->AddReply(14261, 15481, 15480);
				return;
			}
			if (a0 == 15481) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14262);
				tv0->ClearReplies();
				tv0->AddReply(14263, 15483, 15482);
				tv0->AddReply(14268, 15488, 15487);
				return;
			}
			if (a0 == 15488) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14269);
				tv0->ClearReplies();
				tv0->AddReply(14270, -1, 15489);
				return;
			}
			if (a0 == 15483) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14264);
				tv0->ClearReplies();
				tv0->AddReply(14265, 15485, 15484);
				return;
			}
			if (a0 == 15485) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14266);
				tv0->ClearReplies();
				tv0->AddReply(14267, -1, 15486);
				return;
			}
			if (a0 == 15461) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14243);
				tv0->ClearReplies();
				tv0->AddReply(14244, 15463, 15462);
				return;
			}
			if (a0 == 15463) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14245);
				tv0->ClearReplies();
				tv0->AddReply(14246, 15465, 15464);
				tv0->AddReply(14257, 15465, 15475);
				return;
			}
			if (a0 == 15465) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14247);
				tv0->ClearReplies();
				tv0->AddReply(14248, 15467, 15466);
				return;
			}
			if (a0 == 15467) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14249);
				tv0->ClearReplies();
				tv0->AddReply(14250, 15469, 15468);
				tv0->AddReply(14508, 15742, 15746);
				return;
			}
			if (a0 == 15469) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14251);
				tv0->ClearReplies();
				tv0->AddReply(14252, 15471, 15470);
				tv0->AddReply(14506, 15748, 15744);
				return;
			}
			if (a0 == 15748) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14509);
				tv0->ClearReplies();
				tv0->AddReply(14511, 15751, 15750);
				tv0->AddReply(14510, -1, 15749);
				return;
			}
			if (a0 == 15751) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14512);
				tv0->ClearReplies();
				tv0->AddReply(14513, -1, 15752);
				return;
			}
			if (a0 == 15471) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14253);
				tv0->ClearReplies();
				tv0->AddReply(14254, 15742, 15472);
				return;
			}
			if (a0 == 15742) {
				f_110e_a1_v("Neutral");
				tv0->SetMessage(14504);
				tv0->ClearReplies();
				tv0->AddReply(14505, -1, 15743);
				return;
			}
			tv3 = true;
			if (f_13b0_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

void f_12e5_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_12ec_a1_b(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	bool L3;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@Rotate(L2.x, L2.z, L3);
	return L3;
}

bool f_12f8_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_12fd_a1_b(object a0)
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
	L5 = L3 * 70 + f_1352_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1335_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1339_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_134b_a0_v(void)
{
	if (f_13b0_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_1352_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_135c_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_1361_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	}
}

void f_136e_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1361_a3_v(a0, L0, a2);
}

bool f_137b_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1387_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_138c_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_1395_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_139d_a1_b(int a0)
{
	return f_138c_a0_i() == a0;
}

bool f_13a3_a0_b(void)
{
	bool L0;
	f_1339_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_13ac_a0_i(void)
{
	return 2855;
}

string f_13ae_a0_s(void)
{
	return "ui/NPC_Andrei.png";
}

bool f_13b0_a0_b(void)
{
	return true;
}

void f_13b2_a2_v(object a0, object a1)
{
	@SetVariable("ood1Andrei1", 1);
}

void f_13b8_a2_v(object a0, object a1)
{
	@SetVariable("ood1Andrei2", 1);
}

void f_13be_a2_v(object a0, object a1)
{
	@Trace("money1000 is given");
	f_12e5_a3_v(a0, "money", 1000);
}

void f_13c9_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_13cf_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_13d5_a2_v(object a0, object a1)
{
	@SetVariable("ood1Andrei3", 1);
}

void f_13db_a2_v(object a0, object a1)
{
	@SetVariable("ood1Andrei4", 1);
}

void f_13e1_a2_v(object a0, object a1)
{
	@SetVariable("ood1Andrei5", 1);
}

void f_13e7_a2_v(object a0, object a1)
{
	@SetVariable("ood1Andrei6", 1);
}

void f_13ed_a2_v(object a0, object a1)
{
	@SetVariable("ood1Andrei7", 1);
}

void f_13f3_a2_v(object a0, object a1)
{
	@SetVariable("KnowShabnak", 1);
}

void f_13f9_a2_v(object a0, object a1)
{
	@SetVariable("ood1Andrei8", 1);
}

void f_13ff_a2_v(object a0, object a1)
{
	@SetVariable("KnowMat", 1);
}

void f_1405_a2_v(object a0, object a1)
{
	@SetVariable("ood2Andrei1", 1);
}

void f_140b_a2_v(object a0, object a1)
{
	@SetVariable("ood2Andrei2", 1);
}

void f_1411_a2_v(object a0, object a1)
{
	@SetVariable("ood2Andrei3", 1);
}

void f_1417_a2_v(object a0, object a1)
{
	@SetVariable("ood2Andrei4", 1);
}

void f_141d_a2_v(object a0, object a1)
{
	@SetVariable("ood2Andrei5", 1);
}

void f_1423_a2_v(object a0, object a1)
{
	@SetVariable("KnowAgo", 1);
}

void f_1429_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 2);
	L0 = f_172c_a0_o();
	L0->AddMark("d2q02AndreiGotoPetr", "pt_map_petr", 0, 15273, f_1387_a0_f());
	L0->AddMark("d2q02AndreiGotoPetrSelf", "pt_map_andrei", 0, 15279, f_1387_a0_f());
	f_178f_a0_v();
}

void f_1449_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 6);
	L0 = f_172c_a0_o();
	L0->AddMark("d2q02AndreiGotoGrif", "pt_map_grif", 0, 15277, f_1387_a0_f());
	L0->AddMark("d2q02AndreiGotoGrifSelf", "pt_map_andrei", 0, 15282, f_1387_a0_f());
	f_177f_a0_v();
}

void f_1469_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 8);
	L0 = f_172c_a0_o();
	L0->AddMark("d2q02ReadyAndrei", "pt_map_andrei", 0, 15284, f_1387_a0_f());
	f_179f_a0_v();
	f_137b_a2_b("quest_d2_02", "put_patrol");
}

void f_1485_a2_v(object a0, object a1)
{
	f_173d_a3_v(f_172c_a0_o(), "pt_map_grif", 2);
	a1->ShowMap(f_172c_a0_o());
}

void f_1495_a2_v(object a0, object a1)
{
	@Trace("tvirin is given");
	f_136e_a3_v(a0, "tvirin", 1);
}

void f_14a0_a2_v(object a0, object a1)
{
	@SetVariable("KnowAndrei", 1);
}

void f_14a6_a2_v(object a0, object a1)
{
	@SetVariable("KnowNina", 1);
}

void f_14ac_a2_v(object a0, object a1)
{
	@SetVariable("ood6Andrei1", 1);
}

void f_14b2_a2_v(object a0, object a1)
{
	@SetVariable("ood11Andrei1", 1);
}

void f_14b8_a2_v(object a0, object a1)
{
	@SetVariable("d11q01", 4);
	f_176f_a0_v();
}

void f_14c1_a2_v(object a0, object a1)
{
	@SetVariable("ood11Andrei2", 1);
}

void f_14c7_a2_v(object a0, object a1)
{
	@SetVariable("ood11Andrei3", 1);
}

void f_14cd_a2_v(object a0, object a1)
{
	@SetVariable("KnowMark", 1);
}

void f_14d3_a2_v(object a0, object a1)
{
	f_173d_a3_v(f_172c_a0_o(), "pt_map_petr", 2);
	a1->ShowMap(f_172c_a0_o());
}

void f_14e3_a2_v(object a0, object a1)
{
	@SetVariable("ood3Andrei1", 1);
}

void f_14e9_a2_v(object a0, object a1)
{
	@SetVariable("ood10Andrei1", 1);
}

void f_14ef_a2_v(object a0, object a1)
{
	@SetVariable("KnowTermitnik", 1);
}

bool f_14f5_a1_b(object a0)
{
	if (f_135c_a1_i("KnowTheater") == 1) {
		return true;
	}
	return false;
}

bool f_1501_a1_b(object a0)
{
	if (f_135c_a1_i("ood1Andrei1") == 0) {
		return true;
	}
	return false;
}

bool f_150d_a1_b(object a0)
{
	if (f_135c_a1_i("ood1Andrei2") == 0) {
		return true;
	}
	return false;
}

bool f_1519_a1_b(object a0)
{
	if (f_135c_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_1525_a1_b(object a0)
{
	if (f_135c_a1_i("ood1Andrei3") == 0) {
		return true;
	}
	return false;
}

bool f_1531_a1_b(object a0)
{
	if (f_135c_a1_i("ood1Andrei4") == 0) {
		return true;
	}
	return false;
}

bool f_153d_a1_b(object a0)
{
	if (f_135c_a1_i("ood1Andrei5") == 0) {
		return true;
	}
	return false;
}

bool f_1549_a1_b(object a0)
{
	if (f_135c_a1_i("ood1Andrei6") == 0) {
		return true;
	}
	return false;
}

bool f_1555_a1_b(object a0)
{
	if (f_135c_a1_i("ood1Andrei7") == 0) {
		return true;
	}
	return false;
}

bool f_1561_a1_b(object a0)
{
	if (f_135c_a1_i("ood1Andrei8") == 0) {
		return true;
	}
	return false;
}

bool f_156d_a1_b(object a0)
{
	if (f_135c_a1_i("KnowMat") == 1) {
		return true;
	}
	return false;
}

bool f_1579_a1_b(object a0)
{
	if (f_135c_a1_i("ood2Andrei1") == 0) {
		return true;
	}
	return false;
}

bool f_1585_a1_b(object a0)
{
	if (f_135c_a1_i("ood2Andrei2") == 0) {
		return true;
	}
	return false;
}

bool f_1591_a1_b(object a0)
{
	if (f_135c_a1_i("ood2Andrei3") == 0) {
		return true;
	}
	return false;
}

bool f_159d_a1_b(object a0)
{
	if (f_135c_a1_i("ood2Andrei4") == 0) {
		return true;
	}
	return false;
}

bool f_15a9_a1_b(object a0)
{
	if (f_135c_a1_i("ood2Andrei5") == 0) {
		return true;
	}
	return false;
}

bool f_15b5_a1_b(object a0)
{
	if (f_135c_a1_i("d2q02") == 1000) {
		return true;
	}
	return false;
}

bool f_15c1_a1_b(object a0)
{
	if (f_135c_a1_i("d2q02") == 1) {
		return true;
	}
	return false;
}

bool f_15cd_a1_b(object a0)
{
	if (f_135c_a1_i("d2q02") == 3) {
		return true;
	}
	return false;
}

bool f_15d9_a1_b(object a0)
{
	if (f_135c_a1_i("d2q02") == 5) {
		return true;
	}
	return false;
}

bool f_15e5_a1_b(object a0)
{
	if (f_135c_a1_i("d2q02") == 7) {
		return true;
	}
	return false;
}

bool f_15f1_a1_b(object a0)
{
	if (f_135c_a1_i("KnowViktor") == 1) {
		return true;
	}
	return false;
}

bool f_15fd_a1_b(object a0)
{
	if (f_135c_a1_i("d3q01") == 0) {
		return true;
	}
	return false;
}

bool f_1609_a1_b(object a0)
{
	if (f_16f7_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1613_a1_b(object a0)
{
	if (f_135c_a1_i("KnowMark") == 1) {
		return true;
	}
	return false;
}

bool f_161f_a1_b(object a0)
{
	if (f_135c_a1_i("d5q01") == 1000) {
		return true;
	}
	return false;
}

bool f_162b_a1_b(object a0)
{
	if (f_135c_a1_i("ood6Andrei1") == 0) {
		return true;
	}
	return false;
}

bool f_1637_a1_b(object a0)
{
	if (f_135c_a1_i("KnowAnna") == 1) {
		return true;
	}
	return false;
}

bool f_1643_a1_b(object a0)
{
	if (f_135c_a1_i("KnowEva") == 1) {
		return true;
	}
	return false;
}

bool f_164f_a1_b(object a0)
{
	if (f_135c_a1_i("KnowGrif") == 1) {
		return true;
	}
	return false;
}

bool f_165b_a1_b(object a0)
{
	if (f_135c_a1_i("d11q01") == 3) {
		return true;
	}
	return false;
}

bool f_1667_a1_b(object a0)
{
	if (f_135c_a1_i("ood11Andrei1") == 0) {
		return true;
	}
	return false;
}

bool f_1673_a1_b(object a0)
{
	if (f_135c_a1_i("d11q01") == 4) {
		return true;
	}
	return false;
}

bool f_167f_a1_b(object a0)
{
	if (f_135c_a1_i("ood11Andrei2") == 0) {
		return true;
	}
	return false;
}

bool f_168b_a1_b(object a0)
{
	if (f_135c_a1_i("ood11Andrei3") == 0) {
		return true;
	}
	return false;
}

bool f_1697_a1_b(object a0)
{
	if (f_135c_a1_i("KnowLaska") == 1) {
		return true;
	}
	return false;
}

bool f_16a3_a1_b(object a0)
{
	if (f_135c_a1_i("KnowMaria") == 1) {
		return true;
	}
	return false;
}

bool f_16af_a1_b(object a0)
{
	if (f_135c_a1_i("ood3Andrei1") == 0) {
		return true;
	}
	return false;
}

bool f_16bb_a1_b(object a0)
{
	if (f_135c_a1_i("d10q01") == 0) {
		return true;
	}
	return false;
}

bool f_16c7_a1_b(object a0)
{
	if (f_135c_a1_i("d10q01") == 1000) {
		return true;
	}
	return false;
}

bool f_16d3_a1_b(object a0)
{
	if (f_135c_a1_i("ood10Andrei1") == 0) {
		return true;
	}
	return false;
}

bool f_16df_a1_b(object a0)
{
	if (f_135c_a1_i("KnowPredictions") == 1) {
		return true;
	}
	return false;
}

bool f_16eb_a1_b(object a0)
{
	if (f_135c_a1_i("KnowTermitnik") == 1) {
		return true;
	}
	return false;
}

bool f_16f7_a1_b(object a0)
{
	if (f_1395_a0_i() >= 18) {
		return true;
	}
	return false;
}

object f_1702_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_170f_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1702_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SetVariable("player_diary", 1);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

object f_172c_a0_o(void)
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

void f_173d_a3_v(object a0, string a1, float a2)
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

int f_175e_a0_i(void)
{
	int L0;
	@GetVariable("player", L0);
	if (L0 == 0) {
		return 200001;
	} else {
		if (L0 == 1) {
			return 200002;
		}
	}
	return 200003;
}

void f_176f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 195, 1, 15480);
	f_170f_a2_b(L0, 192);
}

void f_177f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 59, 2, 12141);
	f_170f_a2_b(L0, 11);
}

void f_178f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 58, 2, 12140);
	f_170f_a2_b(L0, 11);
}

void f_179f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 60, 2, 12142);
	f_170f_a2_b(L0, 11);
}

void f_17af_a0_v(void)
{
	@SetVariable("mt_andrei", 0);
}

void f_17b4_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_andrei", L0);
	if (!L0) {
		t2{a0};
		@SetVariable("mt_andrei", 1);
	}
	if (f_139d_a1_b(1)) {
		t4{a0};
		return;
	}
	if (f_139d_a1_b(2)) {
		t6{a0};
		return;
	}
	if (f_139d_a1_b(3)) {
		t8{a0};
		return;
	}
	if (f_139d_a1_b(6)) {
		t10{a0};
		return;
	}
	if (f_139d_a1_b(10)) {
		t12{a0};
		return;
	}
	if (f_139d_a1_b(11)) {
		t14{a0};
		return;
	}
	f_13a3_a0_b();
}

