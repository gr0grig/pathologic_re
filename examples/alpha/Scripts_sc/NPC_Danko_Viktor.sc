event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event evt_11 11;

var object g0;
var bool g1;

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
		f_1d61_a0_v();
		if (!f_17e0_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_1821_a1_v("Neutral");
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
		f_1d65_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_17d4_a1_b(a0);
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
		if (!f_17e5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_187d_a0_i());
		L0->SetPhoto(f_187f_a0_s());
		L0->SetPlayerName(f_1cc0_a0_i());
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
		f_181d_a1_v(a0);
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
			f_192d_a2_v(tv1, tv0);
			f_af_a1_v("Neutral");
			tv0->SetMessage(1575);
			tv0->ClearReplies();
			tv0->AddReply(1576, 1782, 1780);
			tv0->AddReply(1577, 1782, 1781);
			break;
			return;
		}
		if (f_1881_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1821_a1_v(tv2);
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
		if (!f_1881_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1821_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1833_a0_v();
			if (a0 == 1779) {
				f_192d_a2_v(tv1, tv0);
				f_af_a1_v("Neutral");
				tv0->SetMessage(1575);
				tv0->ClearReplies();
				tv0->AddReply(1576, 1782, 1780);
				tv0->AddReply(1577, 1782, 1781);
				return;
			}
			if (a0 == 1782) {
				f_1a1b_a2_v(tv1, tv0);
				f_af_a1_v("Neutral");
				tv0->SetMessage(1578);
				tv0->ClearReplies();
				tv0->AddReply(1580, 1785, 1784);
				tv0->AddReply(1579, -1, 1783);
				return;
			}
			if (a0 == 1785) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(1581);
				tv0->ClearReplies();
				tv0->AddReply(1582, -1, 1786);
				tv0->AddReply(1583, -1, 1787);
				return;
			}
			tv3 = true;
			if (f_1881_a0_b()) {
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
		if (!f_17e5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_187d_a0_i());
		L0->SetPhoto(f_187f_a0_s());
		L0->SetPlayerName(f_1cc0_a0_i());
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
		f_181d_a1_v(a0);
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
			if (f_1bbc_a1_b(tv1)) {
				f_1a21_a2_v(tv1, tv0);
				f_1b3_a1_v("Neutral");
				tv0->SetMessage(12036);
				tv0->ClearReplies();
				tv0->AddReply(12037, 13256, 13255);
				tv0->AddReply(12640, 13821, 13820);
				break;
			}
			f_1b3_a1_v("Neutral");
			tv0->SetMessage(13016);
			tv0->ClearReplies();
			tv0->AddReply(13017, -1, 14223);
			break;
			return;
		}
		if (f_1881_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1821_a1_v(tv2);
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

	void f_1b3_a1_v(string a0)
	{
		if (!f_1881_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1821_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1833_a0_v();
			if (a1 == 13819) {
				f_19c3_a2_v(tv1, tv0);
				f_19bd_a2_v(tv1, tv0);
			}
			if (a1 == 13848) {
				f_19c3_a2_v(tv1, tv0);
				f_19bd_a2_v(tv1, tv0);
			}
			if (a0 == 13254) {
				if (f_1bbc_a1_b(tv1)) {
					f_1a21_a2_v(tv1, tv0);
					f_1b3_a1_v("Neutral");
					tv0->SetMessage(12036);
					tv0->ClearReplies();
					tv0->AddReply(12037, 13256, 13255);
					tv0->AddReply(12640, 13821, 13820);
					return;
				}
				f_1b3_a1_v("Neutral");
				tv0->SetMessage(13016);
				tv0->ClearReplies();
				tv0->AddReply(13017, -1, 14223);
				return;
			}
			if (a0 == 13821) {
				f_1b3_a1_v("Neutral");
				tv0->SetMessage(12641);
				tv0->ClearReplies();
				tv0->AddReply(12642, 13823, 13822);
				return;
			}
			if (a0 == 13823) {
				f_1b3_a1_v("Neutral");
				tv0->SetMessage(12643);
				tv0->ClearReplies();
				tv0->AddReply(12644, 13825, 13824);
				return;
			}
			if (a0 == 13825) {
				f_1b3_a1_v("Neutral");
				tv0->SetMessage(12645);
				tv0->ClearReplies();
				tv0->AddReply(12666, -1, 13848);
				return;
			}
			if (a0 == 13256) {
				f_1b3_a1_v("Neutral");
				tv0->SetMessage(12038);
				tv0->ClearReplies();
				tv0->AddReply(12635, 13816, 13815);
				return;
			}
			if (a0 == 13816) {
				f_1b3_a1_v("Neutral");
				tv0->SetMessage(12636);
				tv0->ClearReplies();
				tv0->AddReply(12637, 13818, 13817);
				return;
			}
			if (a0 == 13818) {
				f_1b3_a1_v("Neutral");
				tv0->SetMessage(12638);
				tv0->ClearReplies();
				tv0->AddReply(12639, -1, 13819);
				return;
			}
			tv3 = true;
			if (f_1881_a0_b()) {
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
		if (!f_17e5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_187d_a0_i());
		L0->SetPhoto(f_187f_a0_s());
		L0->SetPlayerName(f_1cc0_a0_i());
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
		f_181d_a1_v(a0);
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
			if (!f_1aa5_a1_b(tv1)) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5111);
				tv0->ClearReplies();
				tv0->AddReply(5112, 5626, 5625);
				tv0->AddReply(5119, 5626, 5632);
				tv0->AddReply(5120, -1, 5634);
				break;
			}
			if (f_1a39_a1_b(tv1)) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5155);
				tv0->ClearReplies();
				tv0->AddReply(5156, 5678, 5677);
				tv0->AddReply(5183, 5678, 5707);
				tv0->AddReply(5184, 5678, 5709);
				break;
			}
			f_3fb_a1_v("Neutral");
			tv0->SetMessage(5106);
			tv0->ClearReplies();
			if (f_1a45_a1_b(tv1) && f_1aa5_a1_b(tv1)) {
				tv0->AddReply(5107, 9234, 5620);
			}
			if (f_1a81_a1_b(tv1) && f_1a5d_a1_b(tv1)) {
				tv0->AddReply(5108, 9315, 5621);
			}
			if (f_1ae1_a1_b(tv1) && f_1a51_a1_b(tv1)) {
				tv0->AddReply(8455, 5635, 9290);
			}
			if (f_1a8d_a1_b(tv1) && f_1a99_a1_b(tv1)) {
				tv0->AddReply(5109, 5711, 5622);
			}
			if (f_1c04_a1_b(tv1) && f_1ae6_a1_b(tv1)) {
				tv0->AddReply(8390, 9317, 9213);
			}
			if (f_1c34_a1_b(tv1) && f_1af2_a1_b(tv1)) {
				tv0->AddReply(8392, 9247, 9215);
			}
			if (f_1bc8_a1_b(tv1) && f_1afe_a1_b(tv1)) {
				tv0->AddReply(8397, 9248, 9220);
			}
			if (f_1bd4_a1_b(tv1) && f_1b0a_a1_b(tv1)) {
				tv0->AddReply(8399, 9249, 9222);
			}
			if (f_1c4c_a1_b(tv1) && f_1b16_a1_b(tv1)) {
				tv0->AddReply(8404, 9358, 9227);
			}
			if (f_1a75_a1_b(tv1) && f_1b22_a1_b(tv1)) {
				tv0->AddReply(5142, 5662, 5661);
			}
			tv0->AddReply(5110, -1, 5623);
			break;
			return;
		}
		if (f_1881_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1821_a1_v(tv2);
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

	void f_3fb_a1_v(string a0)
	{
		if (!f_1881_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1821_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1833_a0_v();
			if (a1 == 5686) {
				f_189b_a2_v(tv1, tv0);
				f_1883_a2_v(tv1, tv0);
				f_18fb_a2_v(tv1, tv0);
				f_190b_a2_v(tv1, tv0);
			}
			if (a1 == 5685) {
				f_1883_a2_v(tv1, tv0);
			}
			if (a1 == 5689) {
				f_189b_a2_v(tv1, tv0);
				f_1883_a2_v(tv1, tv0);
				f_18fb_a2_v(tv1, tv0);
			}
			if (a1 == 9297) {
				f_18d5_a2_v(tv1, tv0);
				f_1889_a2_v(tv1, tv0);
				f_1969_a2_v(tv1, tv0);
			}
			if (a1 == 5621) {
				f_189b_a2_v(tv1, tv0);
			}
			if (a1 == 9316) {
				f_1895_a2_v(tv1, tv0);
				f_18fb_a2_v(tv1, tv0);
				f_189b_a2_v(tv1, tv0);
				f_190b_a2_v(tv1, tv0);
			}
			if (a1 == 5648) {
				f_188f_a2_v(tv1, tv0);
			}
			if (a1 == 5649) {
				f_188f_a2_v(tv1, tv0);
			}
			if (a1 == 5718) {
				f_18a4_a2_v(tv1, tv0);
			}
			if (a1 == 5719) {
				f_18a4_a2_v(tv1, tv0);
			}
			if (a1 == 5724) {
				f_18a4_a2_v(tv1, tv0);
			}
			if (a1 == 5725) {
				f_18a4_a2_v(tv1, tv0);
			}
			if (a1 == 5726) {
				f_18a4_a2_v(tv1, tv0);
			}
			if (a1 == 9329) {
				f_18d7_a2_v(tv1, tv0);
			}
			if (a1 == 9334) {
				f_18d7_a2_v(tv1, tv0);
			}
			if (a1 == 9341) {
				f_18dd_a2_v(tv1, tv0);
			}
			if (a1 == 9347) {
				f_18e3_a2_v(tv1, tv0);
			}
			if (a1 == 9349) {
				f_18e3_a2_v(tv1, tv0);
			}
			if (a1 == 9354) {
				f_18e9_a2_v(tv1, tv0);
			}
			if (a1 == 9357) {
				f_18e9_a2_v(tv1, tv0);
			}
			if (a1 == 9360) {
				f_18ef_a2_v(tv1, tv0);
			}
			if (a1 == 9361) {
				f_18ef_a2_v(tv1, tv0);
			}
			if (a1 == 5667) {
				f_18f5_a2_v(tv1, tv0);
			}
			if (a1 == 5668) {
				f_18f5_a2_v(tv1, tv0);
			}
			if (a1 == 5671) {
				f_18f5_a2_v(tv1, tv0);
			}
			if (a0 == 5624) {
				if (!f_1aa5_a1_b(tv1)) {
					f_3fb_a1_v("Neutral");
					tv0->SetMessage(5111);
					tv0->ClearReplies();
					tv0->AddReply(5112, 5626, 5625);
					tv0->AddReply(5119, 5626, 5632);
					tv0->AddReply(5120, -1, 5634);
					return;
				}
				if (f_1a39_a1_b(tv1)) {
					f_3fb_a1_v("Neutral");
					tv0->SetMessage(5155);
					tv0->ClearReplies();
					tv0->AddReply(5156, 5678, 5677);
					tv0->AddReply(5183, 5678, 5707);
					tv0->AddReply(5184, 5678, 5709);
					return;
				}
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5106);
				tv0->ClearReplies();
				if (f_1a45_a1_b(tv1) && f_1aa5_a1_b(tv1)) {
					tv0->AddReply(5107, 9234, 5620);
				}
				if (f_1a81_a1_b(tv1) && f_1a5d_a1_b(tv1)) {
					tv0->AddReply(5108, 9315, 5621);
				}
				if (f_1ae1_a1_b(tv1) && f_1a51_a1_b(tv1)) {
					tv0->AddReply(8455, 5635, 9290);
				}
				if (f_1a8d_a1_b(tv1) && f_1a99_a1_b(tv1)) {
					tv0->AddReply(5109, 5711, 5622);
				}
				if (f_1c04_a1_b(tv1) && f_1ae6_a1_b(tv1)) {
					tv0->AddReply(8390, 9317, 9213);
				}
				if (f_1c34_a1_b(tv1) && f_1af2_a1_b(tv1)) {
					tv0->AddReply(8392, 9247, 9215);
				}
				if (f_1bc8_a1_b(tv1) && f_1afe_a1_b(tv1)) {
					tv0->AddReply(8397, 9248, 9220);
				}
				if (f_1bd4_a1_b(tv1) && f_1b0a_a1_b(tv1)) {
					tv0->AddReply(8399, 9249, 9222);
				}
				if (f_1c4c_a1_b(tv1) && f_1b16_a1_b(tv1)) {
					tv0->AddReply(8404, 9358, 9227);
				}
				if (f_1a75_a1_b(tv1) && f_1b22_a1_b(tv1)) {
					tv0->AddReply(5142, 5662, 5661);
				}
				tv0->AddReply(5110, -1, 5623);
				return;
			}
			if (a0 == 5662) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5143);
				tv0->ClearReplies();
				tv0->AddReply(5144, 5664, 5663);
				tv0->AddReply(5154, 5664, 5674);
				return;
			}
			if (a0 == 5664) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5145);
				tv0->ClearReplies();
				tv0->AddReply(5146, 5666, 5665);
				tv0->AddReply(5153, 5666, 5672);
				return;
			}
			if (a0 == 5666) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5147);
				tv0->ClearReplies();
				tv0->AddReply(5148, -1, 5667);
				tv0->AddReply(5149, -1, 5668);
				tv0->AddReply(5150, 5670, 5669);
				return;
			}
			if (a0 == 5670) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5151);
				tv0->ClearReplies();
				tv0->AddReply(5152, -1, 5671);
				return;
			}
			if (a0 == 9358) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8516);
				tv0->ClearReplies();
				tv0->AddReply(8517, 9250, 9359);
				return;
			}
			if (a0 == 9250) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8427);
				tv0->ClearReplies();
				tv0->AddReply(8518, -1, 9360);
				tv0->AddReply(8519, -1, 9361);
				return;
			}
			if (a0 == 9249) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8426);
				tv0->ClearReplies();
				tv0->AddReply(8508, 9351, 9350);
				return;
			}
			if (a0 == 9351) {
				f_19f2_a2_v(tv1, tv0);
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8509);
				tv0->ClearReplies();
				tv0->AddReply(8510, 9353, 9352);
				if (!f_1c58_a1_b(tv1)) {
					tv0->AddReply(8513, 9356, 9355);
				}
				return;
			}
			if (a0 == 9356) {
				f_1a2d_a2_v(tv1, tv0);
				f_1921_a2_v(tv1, tv0);
				f_191b_a2_v(tv1, tv0);
				f_1927_a2_v(tv1, tv0);
				f_1a33_a2_v(tv1, tv0);
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8514);
				tv0->ClearReplies();
				tv0->AddReply(8515, -1, 9357);
				return;
			}
			if (a0 == 9353) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8511);
				tv0->ClearReplies();
				tv0->AddReply(8512, -1, 9354);
				return;
			}
			if (a0 == 9248) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8425);
				tv0->ClearReplies();
				tv0->AddReply(8500, 9343, 9342);
				return;
			}
			if (a0 == 9343) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8501);
				tv0->ClearReplies();
				tv0->AddReply(8502, 9345, 9344);
				tv0->AddReply(8507, -1, 9349);
				return;
			}
			if (a0 == 9345) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8503);
				tv0->ClearReplies();
				tv0->AddReply(8504, 9348, 9346);
				return;
			}
			if (a0 == 9348) {
				f_18b0_a2_v(tv1, tv0);
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8506);
				tv0->ClearReplies();
				tv0->AddReply(8505, -1, 9347);
				return;
			}
			if (a0 == 9247) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8424);
				tv0->ClearReplies();
				tv0->AddReply(8495, 9338, 9337);
				return;
			}
			if (a0 == 9338) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8496);
				tv0->ClearReplies();
				tv0->AddReply(8497, 9340, 9339);
				return;
			}
			if (a0 == 9340) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8498);
				tv0->ClearReplies();
				tv0->AddReply(8499, -1, 9341);
				return;
			}
			if (a0 == 9317) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8477);
				tv0->ClearReplies();
				tv0->AddReply(8478, 9246, 9318);
				tv0->AddReply(8481, 9322, 9321);
				return;
			}
			if (a0 == 9322) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8482);
				tv0->ClearReplies();
				tv0->AddReply(8483, 9246, 9323);
				return;
			}
			if (a0 == 9246) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8423);
				tv0->ClearReplies();
				tv0->AddReply(8479, 9320, 9319);
				tv0->AddReply(8494, 9331, 9335);
				return;
			}
			if (a0 == 9320) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8480);
				tv0->ClearReplies();
				tv0->AddReply(8484, 9326, 9325);
				return;
			}
			if (a0 == 9326) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8485);
				tv0->ClearReplies();
				tv0->AddReply(8486, 9328, 9327);
				tv0->AddReply(8489, 9331, 9330);
				return;
			}
			if (a0 == 9331) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8490);
				tv0->ClearReplies();
				tv0->AddReply(8491, 9333, 9332);
				return;
			}
			if (a0 == 9333) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8492);
				tv0->ClearReplies();
				tv0->AddReply(8493, -1, 9334);
				return;
			}
			if (a0 == 9328) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8487);
				tv0->ClearReplies();
				tv0->AddReply(8488, -1, 9329);
				return;
			}
			if (a0 == 5711) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5185);
				tv0->ClearReplies();
				tv0->AddReply(5186, 5713, 5712);
				tv0->AddReply(5202, 5713, 5729);
				tv0->AddReply(5203, 5713, 5731);
				return;
			}
			if (a0 == 5713) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5187);
				tv0->ClearReplies();
				tv0->AddReply(5188, 5715, 5714);
				tv0->AddReply(5201, 5715, 5727);
				return;
			}
			if (a0 == 5715) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5189);
				tv0->ClearReplies();
				tv0->AddReply(5190, 5717, 5716);
				tv0->AddReply(5194, 5721, 5720);
				return;
			}
			if (a0 == 5721) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5195);
				tv0->ClearReplies();
				tv0->AddReply(5196, 5723, 5722);
				tv0->AddReply(5200, -1, 5726);
				return;
			}
			if (a0 == 5723) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5197);
				tv0->ClearReplies();
				tv0->AddReply(5198, -1, 5724);
				tv0->AddReply(5199, -1, 5725);
				return;
			}
			if (a0 == 5717) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5191);
				tv0->ClearReplies();
				tv0->AddReply(5192, -1, 5718);
				tv0->AddReply(5193, -1, 5719);
				return;
			}
			if (a0 == 5635) {
				f_18b6_a2_v(tv1, tv0);
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5121);
				tv0->ClearReplies();
				tv0->AddReply(5122, 5637, 5636);
				if (!f_1b5c_a1_b(tv1)) {
					tv0->AddReply(8466, 9304, 9303);
				}
				return;
			}
			if (a0 == 9304) {
				f_18b6_a2_v(tv1, tv0);
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8467);
				tv0->ClearReplies();
				tv0->AddReply(8468, 5637, 9305);
				return;
			}
			if (a0 == 5637) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5123);
				tv0->ClearReplies();
				tv0->AddReply(5124, 5639, 5638);
				tv0->AddReply(8472, 9312, 9311);
				tv0->AddReply(8469, 9308, 9307);
				return;
			}
			if (a0 == 9308) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8470);
				tv0->ClearReplies();
				tv0->AddReply(8471, 5639, 9309);
				return;
			}
			if (a0 == 9312) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8473);
				tv0->ClearReplies();
				tv0->AddReply(8474, 5639, 9313);
				return;
			}
			if (a0 == 5639) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5125);
				tv0->ClearReplies();
				tv0->AddReply(5126, 5641, 5640);
				tv0->AddReply(5138, 5641, 5654);
				return;
			}
			if (a0 == 5641) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5127);
				tv0->ClearReplies();
				tv0->AddReply(5128, 5643, 5642);
				tv0->AddReply(5137, 5643, 5652);
				return;
			}
			if (a0 == 5643) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5129);
				tv0->ClearReplies();
				tv0->AddReply(5130, 5645, 5644);
				return;
			}
			if (a0 == 5645) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5131);
				tv0->ClearReplies();
				tv0->AddReply(5132, 5647, 5646);
				tv0->AddReply(5136, 5647, 5650);
				return;
			}
			if (a0 == 5647) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5133);
				tv0->ClearReplies();
				tv0->AddReply(5134, -1, 5648);
				tv0->AddReply(5135, -1, 5649);
				return;
			}
			if (a0 == 9315) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8475);
				tv0->ClearReplies();
				tv0->AddReply(8476, -1, 9316);
				return;
			}
			if (a0 == 9234) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8411);
				tv0->ClearReplies();
				if (f_1b2e_a1_b(tv1)) {
					tv0->AddReply(8448, 9282, 9281);
				}
				if (f_1a69_a1_b(tv1)) {
					tv0->AddReply(8463, 9300, 9299);
				}
				return;
			}
			if (a0 == 9300) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8464);
				tv0->ClearReplies();
				tv0->AddReply(8465, -1, 9301);
				return;
			}
			if (a0 == 9282) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8449);
				tv0->ClearReplies();
				tv0->AddReply(8451, 9287, 9284);
				tv0->AddReply(8452, 9287, 9285);
				tv0->AddReply(8453, 9287, 9286);
				return;
			}
			if (a0 == 9287) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8454);
				tv0->ClearReplies();
				tv0->AddReply(8412, 9236, 9235);
				return;
			}
			if (a0 == 9236) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8413);
				tv0->ClearReplies();
				tv0->AddReply(8414, 9238, 9237);
				return;
			}
			if (a0 == 9238) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8415);
				tv0->ClearReplies();
				tv0->AddReply(8416, 9240, 9239);
				tv0->AddReply(8418, 9242, 9241);
				return;
			}
			if (a0 == 9242) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8419);
				tv0->ClearReplies();
				tv0->AddReply(8456, 9292, 9291);
				return;
			}
			if (a0 == 9292) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8457);
				tv0->ClearReplies();
				tv0->AddReply(8459, 9244, 9294);
				return;
			}
			if (a0 == 9240) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8417);
				tv0->ClearReplies();
				tv0->AddReply(8420, 9244, 9243);
				return;
			}
			if (a0 == 9244) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8421);
				tv0->ClearReplies();
				tv0->AddReply(8430, 9254, 9253);
				tv0->AddReply(8422, 9251, 9245);
				return;
			}
			if (a0 == 9254) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8431);
				tv0->ClearReplies();
				tv0->AddReply(8432, 9256, 9255);
				return;
			}
			if (a0 == 9256) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8433);
				tv0->ClearReplies();
				tv0->AddReply(8434, 9258, 9257);
				return;
			}
			if (a0 == 9258) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8435);
				tv0->ClearReplies();
				tv0->AddReply(8436, 9251, 9259);
				return;
			}
			if (a0 == 9251) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8428);
				tv0->ClearReplies();
				tv0->AddReply(8429, 9296, 9252);
				return;
			}
			if (a0 == 9296) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(8460);
				tv0->ClearReplies();
				tv0->AddReply(8461, -1, 9297);
				return;
			}
			if (a0 == 5678) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5157);
				tv0->ClearReplies();
				tv0->AddReply(5158, 5680, 5679);
				tv0->AddReply(5181, 5680, 5705);
				tv0->AddReply(5182, 5680, 5706);
				return;
			}
			if (a0 == 5680) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5159);
				tv0->ClearReplies();
				tv0->AddReply(5160, 5682, 5681);
				tv0->AddReply(5177, 5684, 5700);
				tv0->AddReply(5178, 5703, 5702);
				return;
			}
			if (a0 == 5703) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5179);
				tv0->ClearReplies();
				tv0->AddReply(5180, 5694, 5704);
				return;
			}
			if (a0 == 5682) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5161);
				tv0->ClearReplies();
				tv0->AddReply(5162, 5684, 5683);
				tv0->AddReply(5170, 5692, 5691);
				return;
			}
			if (a0 == 5692) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5171);
				tv0->ClearReplies();
				tv0->AddReply(5172, 5694, 5693);
				tv0->AddReply(5176, 5694, 5699);
				return;
			}
			if (a0 == 5694) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5173);
				tv0->ClearReplies();
				tv0->AddReply(5174, 5684, 5695);
				tv0->AddReply(5175, 5684, 5697);
				return;
			}
			if (a0 == 5684) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5163);
				tv0->ClearReplies();
				tv0->AddReply(5165, -1, 5686);
				tv0->AddReply(5164, -1, 5685);
				tv0->AddReply(5166, 5688, 5687);
				return;
			}
			if (a0 == 5688) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5167);
				tv0->ClearReplies();
				tv0->AddReply(5168, -1, 5689);
				return;
			}
			if (a0 == 5626) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5113);
				tv0->ClearReplies();
				tv0->AddReply(5114, 5628, 5627);
				tv0->AddReply(5118, -1, 5631);
				return;
			}
			if (a0 == 5628) {
				f_3fb_a1_v("Neutral");
				tv0->SetMessage(5115);
				tv0->ClearReplies();
				tv0->AddReply(5116, -1, 5629);
				tv0->AddReply(5117, -1, 5630);
				return;
			}
			tv3 = true;
			if (f_1881_a0_b()) {
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
		if (!f_17e5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_187d_a0_i());
		L0->SetPhoto(f_187f_a0_s());
		L0->SetPlayerName(f_1cc0_a0_i());
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
		f_181d_a1_v(a0);
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
			f_c8a_a1_v("Neutral");
			tv0->SetMessage(6924);
			tv0->ClearReplies();
			if (f_1ab1_a1_b(tv1) && f_1ad5_a1_b(tv1) && f_1ac9_a1_b(tv1)) {
				tv0->AddReply(6925, 7632, 7631);
			}
			tv0->AddReply(7777, -1, 8579);
			break;
			f_c8a_a1_v("Neutral");
			tv0->SetMessage(9531);
			tv0->ClearReplies();
			tv0->AddReply(9532, 10478, 10477);
			tv0->AddReply(9539, 10478, 10484);
			break;
			return;
		}
		if (f_1881_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1821_a1_v(tv2);
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

	void f_c8a_a1_v(string a0)
	{
		if (!f_1881_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1821_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1833_a0_v();
			if (a1 == 8194) {
				f_18be_a2_v(tv1, tv0);
				f_18ca_a2_v(tv1, tv0);
				f_18aa_a2_v(tv1, tv0);
			}
			if (a1 == 8192) {
				f_18be_a2_v(tv1, tv0);
			}
			if (a0 == 7630) {
				f_c8a_a1_v("Neutral");
				tv0->SetMessage(6924);
				tv0->ClearReplies();
				if (f_1ab1_a1_b(tv1) && f_1ad5_a1_b(tv1) && f_1ac9_a1_b(tv1)) {
					tv0->AddReply(6925, 7632, 7631);
				}
				tv0->AddReply(7777, -1, 8579);
				return;
				f_c8a_a1_v("Neutral");
				tv0->SetMessage(9531);
				tv0->ClearReplies();
				tv0->AddReply(9532, 10478, 10477);
				tv0->AddReply(9539, 10478, 10484);
				return;
			}
			if (a0 == 10478) {
				f_c8a_a1_v("Neutral");
				tv0->SetMessage(9533);
				tv0->ClearReplies();
				tv0->AddReply(9534, -1, 10479);
				tv0->AddReply(9535, 10481, 10480);
				return;
			}
			if (a0 == 10481) {
				f_c8a_a1_v("Neutral");
				tv0->SetMessage(9536);
				tv0->ClearReplies();
				tv0->AddReply(9537, -1, 10482);
				tv0->AddReply(9538, -1, 10483);
				return;
			}
			if (a0 == 7632) {
				f_c8a_a1_v("Neutral");
				tv0->SetMessage(6926);
				tv0->ClearReplies();
				tv0->AddReply(6927, 8188, 7633);
				if (f_1abd_a1_b(tv1)) {
					tv0->AddReply(7420, 8190, 8189);
				}
				return;
			}
			if (a0 == 8190) {
				f_c8a_a1_v("Neutral");
				tv0->SetMessage(7421);
				tv0->ClearReplies();
				tv0->AddReply(7426, 8197, 8195);
				return;
			}
			if (a0 == 8197) {
				f_c8a_a1_v("Neutral");
				tv0->SetMessage(7427);
				tv0->ClearReplies();
				tv0->AddReply(7428, 8188, 8198);
				return;
			}
			if (a0 == 8188) {
				f_18c4_a2_v(tv1, tv0);
				f_c8a_a1_v("Neutral");
				tv0->SetMessage(7419);
				tv0->ClearReplies();
				tv0->AddReply(7422, 8193, 8191);
				tv0->AddReply(7423, -1, 8192);
				return;
			}
			if (a0 == 8193) {
				f_c8a_a1_v("Neutral");
				tv0->SetMessage(7424);
				tv0->ClearReplies();
				tv0->AddReply(7425, -1, 8194);
				return;
			}
			tv3 = true;
			if (f_1881_a0_b()) {
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
		if (!f_17e5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_187d_a0_i());
		L0->SetPhoto(f_187f_a0_s());
		L0->SetPlayerName(f_1cc0_a0_i());
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
		f_181d_a1_v(a0);
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
			f_e44_a1_v("Neutral");
			tv0->SetMessage(10235);
			tv0->ClearReplies();
			if (f_1b3a_a1_b(tv1) && f_1b46_a1_b(tv1)) {
				tv0->AddReply(10236, 11288, 11286);
			}
			if (f_1b4b_a1_b(tv1) && f_1b57_a1_b(tv1)) {
				tv0->AddReply(10266, 11321, 11320);
			}
			tv0->AddReply(10237, 11089, 11287);
			tv0->AddReply(11382, -1, 12578);
			break;
			return;
		}
		if (f_1881_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1821_a1_v(tv2);
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

	void f_e44_a1_v(string a0)
	{
		if (!f_1881_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1821_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1833_a0_v();
			if (a1 == 11314) {
				f_194f_a2_v(tv1, tv0);
				f_1933_a2_v(tv1, tv0);
				f_1951_a2_v(tv1, tv0);
			}
			if (a1 == 11315) {
				f_194f_a2_v(tv1, tv0);
				f_1933_a2_v(tv1, tv0);
				f_1951_a2_v(tv1, tv0);
			}
			if (a1 == 11318) {
				f_194f_a2_v(tv1, tv0);
				f_1933_a2_v(tv1, tv0);
				f_1951_a2_v(tv1, tv0);
			}
			if (a1 == 11340) {
				f_1961_a2_v(tv1, tv0);
				f_1963_a2_v(tv1, tv0);
				f_190b_a2_v(tv1, tv0);
			}
			if (a1 == 11341) {
				f_1961_a2_v(tv1, tv0);
				f_1963_a2_v(tv1, tv0);
				f_190b_a2_v(tv1, tv0);
			}
			if (a1 == 11335) {
				f_1961_a2_v(tv1, tv0);
			}
			if (a1 == 11326) {
				f_1961_a2_v(tv1, tv0);
			}
			if (a0 == 11285) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10235);
				tv0->ClearReplies();
				if (f_1b3a_a1_b(tv1) && f_1b46_a1_b(tv1)) {
					tv0->AddReply(10236, 11288, 11286);
				}
				if (f_1b4b_a1_b(tv1) && f_1b57_a1_b(tv1)) {
					tv0->AddReply(10266, 11321, 11320);
				}
				tv0->AddReply(10237, 11089, 11287);
				tv0->AddReply(11382, -1, 12578);
				return;
			}
			if (a0 == 11089) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10063);
				tv0->ClearReplies();
				tv0->AddReply(10064, 11091, 11090);
				return;
			}
			if (a0 == 11091) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10065);
				tv0->ClearReplies();
				tv0->AddReply(10066, 11093, 11092);
				tv0->AddReply(10070, 11097, 11096);
				return;
			}
			if (a0 == 11097) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10071);
				tv0->ClearReplies();
				tv0->AddReply(10072, 11099, 11098);
				tv0->AddReply(10080, -1, 11109);
				tv0->AddReply(10242, 11293, 11292);
				return;
			}
			if (a0 == 11293) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10243);
				tv0->ClearReplies();
				tv0->AddReply(10244, 11110, 11294);
				tv0->AddReply(10245, 11290, 11295);
				return;
			}
			if (a0 == 11110) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10081);
				tv0->ClearReplies();
				tv0->AddReply(10239, 11290, 11289);
				tv0->AddReply(10083, -1, 11112);
				return;
			}
			if (a0 == 11290) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10240);
				tv0->ClearReplies();
				tv0->AddReply(10082, -1, 11111);
				return;
			}
			if (a0 == 11099) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10073);
				tv0->ClearReplies();
				tv0->AddReply(10074, 11101, 11100);
				tv0->AddReply(10079, 11101, 11107);
				return;
			}
			if (a0 == 11101) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10075);
				tv0->ClearReplies();
				tv0->AddReply(10076, 11093, 11102);
				tv0->AddReply(10078, -1, 11106);
				return;
			}
			if (a0 == 11093) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10067);
				tv0->ClearReplies();
				tv0->AddReply(10068, -1, 11094);
				tv0->AddReply(10069, -1, 11095);
				return;
			}
			if (a0 == 11321) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10267);
				tv0->ClearReplies();
				tv0->AddReply(10268, 11323, 11322);
				tv0->AddReply(10270, 11325, 11324);
				return;
			}
			if (a0 == 11325) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10271);
				tv0->ClearReplies();
				tv0->AddReply(10272, -1, 11326);
				return;
			}
			if (a0 == 11323) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10269);
				tv0->ClearReplies();
				tv0->AddReply(10273, 11328, 11327);
				tv0->AddReply(10275, 11330, 11329);
				return;
			}
			if (a0 == 11330) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10276);
				tv0->ClearReplies();
				tv0->AddReply(10277, 11332, 11331);
				return;
			}
			if (a0 == 11332) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10278);
				tv0->ClearReplies();
				tv0->AddReply(10279, 11328, 11333);
				tv0->AddReply(10280, -1, 11335);
				return;
			}
			if (a0 == 11328) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10274);
				tv0->ClearReplies();
				tv0->AddReply(10281, 11337, 11336);
				return;
			}
			if (a0 == 11337) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10282);
				tv0->ClearReplies();
				tv0->AddReply(10283, 11339, 11338);
				return;
			}
			if (a0 == 11339) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10284);
				tv0->ClearReplies();
				tv0->AddReply(10285, -1, 11340);
				tv0->AddReply(10286, -1, 11341);
				return;
			}
			if (a0 == 11288) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10238);
				tv0->ClearReplies();
				tv0->AddReply(10246, 11298, 11297);
				tv0->AddReply(10253, 11308, 11304);
				return;
			}
			if (a0 == 11298) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10247);
				tv0->ClearReplies();
				tv0->AddReply(10248, 11300, 11299);
				tv0->AddReply(10258, 11308, 11309);
				return;
			}
			if (a0 == 11300) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10249);
				tv0->ClearReplies();
				tv0->AddReply(10250, 11302, 11301);
				tv0->AddReply(10256, 11302, 11307);
				return;
			}
			if (a0 == 11302) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10251);
				tv0->ClearReplies();
				tv0->AddReply(10259, 11313, 11312);
				return;
			}
			if (a0 == 11313) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10260);
				tv0->ClearReplies();
				tv0->AddReply(10261, -1, 11314);
				tv0->AddReply(10252, 11308, 11303);
				return;
			}
			if (a0 == 11308) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10257);
				tv0->ClearReplies();
				tv0->AddReply(10262, -1, 11315);
				tv0->AddReply(10263, 11317, 11316);
				return;
			}
			if (a0 == 11317) {
				f_e44_a1_v("Neutral");
				tv0->SetMessage(10264);
				tv0->ClearReplies();
				tv0->AddReply(10265, -1, 11318);
				return;
			}
			tv3 = true;
			if (f_1881_a0_b()) {
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
		if (!f_17e5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_187d_a0_i());
		L0->SetPhoto(f_187f_a0_s());
		L0->SetPlayerName(f_1cc0_a0_i());
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
		f_181d_a1_v(a0);
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
			if (f_1bb0_a1_b(tv1) && !f_1b74_a1_b(tv1) && !f_1b80_a1_b(tv1)) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(12584);
				tv0->ClearReplies();
				tv0->AddReply(11771, 12991, 12979);
				if (!f_1b68_a1_b(tv1)) {
					tv0->AddReply(12585, 13755, 13752);
				}
				break;
			}
			f_11e0_a1_v("Neutral");
			tv0->SetMessage(11765);
			tv0->ClearReplies();
			if (f_1b8c_a1_b(tv1) && f_1b98_a1_b(tv1)) {
				tv0->AddReply(11767, 12977, 12975);
			}
			if (f_1b74_a1_b(tv1) && f_1ba4_a1_b(tv1)) {
				tv0->AddReply(12570, 13740, 13739);
			}
			tv0->AddReply(11766, -1, 12974);
			break;
			return;
		}
		if (f_1881_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1821_a1_v(tv2);
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

	void f_11e0_a1_v(string a0)
	{
		if (!f_1881_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1821_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1833_a0_v();
			if (a1 == 12998) {
				f_196e_a2_v(tv1, tv0);
				f_19b7_a2_v(tv1, tv0);
			}
			if (a1 == 12999) {
				f_19b7_a2_v(tv1, tv0);
				f_196e_a2_v(tv1, tv0);
			}
			if (a1 == 13752) {
				f_19b7_a2_v(tv1, tv0);
			}
			if (a1 == 12989) {
				f_199e_a2_v(tv1, tv0);
				f_19a4_a2_v(tv1, tv0);
				f_18aa_a2_v(tv1, tv0);
			}
			if (a1 == 12990) {
				f_199e_a2_v(tv1, tv0);
				f_19a4_a2_v(tv1, tv0);
				f_18aa_a2_v(tv1, tv0);
			}
			if (a1 == 13741) {
				f_19af_a2_v(tv1, tv0);
				f_18bc_a2_v(tv1, tv0);
				f_19b5_a2_v(tv1, tv0);
			}
			if (a0 == 13751) {
				if (f_1bb0_a1_b(tv1) && !f_1b74_a1_b(tv1) && !f_1b80_a1_b(tv1)) {
					f_11e0_a1_v("Neutral");
					tv0->SetMessage(12584);
					tv0->ClearReplies();
					tv0->AddReply(11771, 12991, 12979);
					if (!f_1b68_a1_b(tv1)) {
						tv0->AddReply(12585, 13755, 13752);
					}
					return;
				}
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(11765);
				tv0->ClearReplies();
				if (f_1b8c_a1_b(tv1) && f_1b98_a1_b(tv1)) {
					tv0->AddReply(11767, 12977, 12975);
				}
				if (f_1b74_a1_b(tv1) && f_1ba4_a1_b(tv1)) {
					tv0->AddReply(12570, 13740, 13739);
				}
				tv0->AddReply(11766, -1, 12974);
				return;
			}
			if (a0 == 13740) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(12571);
				tv0->ClearReplies();
				tv0->AddReply(12592, 13763, 13762);
				return;
			}
			if (a0 == 13763) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(12593);
				tv0->ClearReplies();
				tv0->AddReply(12594, 13765, 13764);
				return;
			}
			if (a0 == 13765) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(12595);
				tv0->ClearReplies();
				tv0->AddReply(12572, -1, 13741);
				return;
			}
			if (a0 == 12977) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(11769);
				tv0->ClearReplies();
				tv0->AddReply(11770, 12981, 12978);
				tv0->AddReply(11772, 12981, 12980);
				return;
			}
			if (a0 == 12981) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(11773);
				tv0->ClearReplies();
				tv0->AddReply(11774, 12984, 12983);
				return;
			}
			if (a0 == 12984) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(11775);
				tv0->ClearReplies();
				tv0->AddReply(11776, 12987, 12985);
				tv0->AddReply(11777, 12987, 12986);
				return;
			}
			if (a0 == 12987) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(11778);
				tv0->ClearReplies();
				tv0->AddReply(11779, -1, 12989);
				tv0->AddReply(11780, -1, 12990);
				return;
			}
			if (a0 == 13755) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(12587);
				tv0->ClearReplies();
				tv0->AddReply(12588, 12993, 13756);
				return;
			}
			if (a0 == 12991) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(11781);
				tv0->ClearReplies();
				tv0->AddReply(11782, 12993, 12992);
				return;
			}
			if (a0 == 12993) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(11783);
				tv0->ClearReplies();
				tv0->AddReply(12589, 12995, 13758);
				tv0->AddReply(11784, 13760, 12994);
				return;
			}
			if (a0 == 12995) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(11785);
				tv0->ClearReplies();
				tv0->AddReply(12590, 13760, 13759);
				return;
			}
			if (a0 == 13760) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(12591);
				tv0->ClearReplies();
				tv0->AddReply(11786, 12997, 12996);
				return;
			}
			if (a0 == 12997) {
				f_11e0_a1_v("Neutral");
				tv0->SetMessage(11787);
				tv0->ClearReplies();
				tv0->AddReply(11788, -1, 12998);
				tv0->AddReply(11789, -1, 12999);
				return;
			}
			tv3 = true;
			if (f_1881_a0_b()) {
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
		if (!f_17e5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_187d_a0_i());
		L0->SetPhoto(f_187f_a0_s());
		L0->SetPlayerName(f_1cc0_a0_i());
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
		f_181d_a1_v(a0);
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
			if (f_1bec_a1_b(tv1) && f_1be0_a1_b(tv1)) {
				f_19f8_a2_v(tv1, tv0);
				f_1464_a1_v("Neutral");
				tv0->SetMessage(12275);
				tv0->ClearReplies();
				tv0->AddReply(12276, 13435, 13433);
				tv0->AddReply(12277, 13435, 13434);
				break;
			}
			f_1464_a1_v("Neutral");
			tv0->SetMessage(13779);
			tv0->ClearReplies();
			tv0->AddReply(13780, -1, 15016);
			break;
			return;
		}
		if (f_1881_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1821_a1_v(tv2);
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

	void f_1464_a1_v(string a0)
	{
		if (!f_1881_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1821_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1833_a0_v();
			if (a0 == 13432) {
				if (f_1bec_a1_b(tv1) && f_1be0_a1_b(tv1)) {
					f_19f8_a2_v(tv1, tv0);
					f_1464_a1_v("Neutral");
					tv0->SetMessage(12275);
					tv0->ClearReplies();
					tv0->AddReply(12276, 13435, 13433);
					tv0->AddReply(12277, 13435, 13434);
					return;
				}
				f_1464_a1_v("Neutral");
				tv0->SetMessage(13779);
				tv0->ClearReplies();
				tv0->AddReply(13780, -1, 15016);
				return;
			}
			if (a0 == 13435) {
				f_1464_a1_v("Neutral");
				tv0->SetMessage(12278);
				tv0->ClearReplies();
				tv0->AddReply(12279, 13439, 13437);
				tv0->AddReply(12280, 13439, 13438);
				return;
			}
			if (a0 == 13439) {
				f_1464_a1_v("Neutral");
				tv0->SetMessage(12281);
				tv0->ClearReplies();
				tv0->AddReply(12282, 13442, 13441);
				return;
			}
			if (a0 == 13442) {
				f_1464_a1_v("Neutral");
				tv0->SetMessage(12283);
				tv0->ClearReplies();
				tv0->AddReply(12284, 13444, 13443);
				return;
			}
			if (a0 == 13444) {
				f_1464_a1_v("Neutral");
				tv0->SetMessage(12285);
				tv0->ClearReplies();
				tv0->AddReply(12286, 13446, 13445);
				return;
			}
			if (a0 == 13446) {
				f_1464_a1_v("Neutral");
				tv0->SetMessage(12287);
				tv0->ClearReplies();
				tv0->AddReply(12288, 13448, 13447);
				return;
			}
			if (a0 == 13448) {
				f_1464_a1_v("Neutral");
				tv0->SetMessage(12289);
				tv0->ClearReplies();
				tv0->AddReply(12290, 13450, 13449);
				return;
			}
			if (a0 == 13450) {
				f_1464_a1_v("Neutral");
				tv0->SetMessage(12291);
				tv0->ClearReplies();
				tv0->AddReply(12292, -1, 13451);
				return;
			}
			tv3 = true;
			if (f_1881_a0_b()) {
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
		if (!f_17e5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_187d_a0_i());
		L0->SetPhoto(f_187f_a0_s());
		L0->SetPlayerName(f_1cc0_a0_i());
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
		f_181d_a1_v(a0);
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
			if (f_1bf8_a1_b(tv1)) {
				f_19fe_a2_v(tv1, tv0);
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(13994);
				tv0->ClearReplies();
				tv0->AddReply(13995, 15231, 15230);
				break;
			}
			f_15ed_a1_v("Neutral");
			tv0->SetMessage(14011);
			tv0->ClearReplies();
			if (f_1c40_a1_b(tv1)) {
				tv0->AddReply(14012, 15248, 15247);
			}
			if (f_1c10_a1_b(tv1) && f_1c1c_a1_b(tv1)) {
				tv0->AddReply(14029, 15265, 15264);
			}
			tv0->AddReply(14039, -1, 15274);
			break;
			return;
		}
		if (f_1881_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1821_a1_v(tv2);
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

	void f_15ed_a1_v(string a0)
	{
		if (!f_1881_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1821_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1833_a0_v();
			if (a1 == 15244) {
				f_1a04_a2_v(tv1, tv0);
			}
			if (a1 == 15245) {
				f_1a04_a2_v(tv1, tv0);
			}
			if (a1 == 15247) {
				f_1a27_a2_v(tv1, tv0);
			}
			if (a1 == 15264) {
				f_1a15_a2_v(tv1, tv0);
			}
			if (a0 == 15229) {
				if (f_1bf8_a1_b(tv1)) {
					f_19fe_a2_v(tv1, tv0);
					f_15ed_a1_v("Neutral");
					tv0->SetMessage(13994);
					tv0->ClearReplies();
					tv0->AddReply(13995, 15231, 15230);
					return;
				}
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14011);
				tv0->ClearReplies();
				if (f_1c40_a1_b(tv1)) {
					tv0->AddReply(14012, 15248, 15247);
				}
				if (f_1c10_a1_b(tv1) && f_1c1c_a1_b(tv1)) {
					tv0->AddReply(14029, 15265, 15264);
				}
				tv0->AddReply(14039, -1, 15274);
				return;
			}
			if (a0 == 15265) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14030);
				tv0->ClearReplies();
				tv0->AddReply(14031, 15267, 15266);
				return;
			}
			if (a0 == 15267) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14032);
				tv0->ClearReplies();
				if (f_1c28_a1_b(tv1)) {
					tv0->AddReply(14033, 15269, 15268);
				}
				tv0->AddReply(14038, -1, 15273);
				return;
			}
			if (a0 == 15269) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14034);
				tv0->ClearReplies();
				tv0->AddReply(14035, -1, 15270);
				tv0->AddReply(14036, -1, 15271);
				tv0->AddReply(14037, -1, 15272);
				return;
			}
			if (a0 == 15248) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14013);
				tv0->ClearReplies();
				tv0->AddReply(14014, 15250, 15249);
				tv0->AddReply(14024, 15260, 15259);
				return;
			}
			if (a0 == 15260) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14025);
				tv0->ClearReplies();
				tv0->AddReply(14026, 15262, 15261);
				return;
			}
			if (a0 == 15262) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14027);
				tv0->ClearReplies();
				tv0->AddReply(14028, -1, 15263);
				return;
			}
			if (a0 == 15250) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14015);
				tv0->ClearReplies();
				tv0->AddReply(14016, 15252, 15251);
				return;
			}
			if (a0 == 15252) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14017);
				tv0->ClearReplies();
				tv0->AddReply(14018, -1, 15253);
				tv0->AddReply(14019, 15255, 15254);
				return;
			}
			if (a0 == 15255) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14020);
				tv0->ClearReplies();
				tv0->AddReply(14021, 15257, 15256);
				return;
			}
			if (a0 == 15257) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14022);
				tv0->ClearReplies();
				tv0->AddReply(14023, -1, 15258);
				return;
			}
			if (a0 == 15231) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(13996);
				tv0->ClearReplies();
				tv0->AddReply(13997, 15233, 15232);
				return;
			}
			if (a0 == 15233) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(13998);
				tv0->ClearReplies();
				tv0->AddReply(13999, 15235, 15234);
				return;
			}
			if (a0 == 15235) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14000);
				tv0->ClearReplies();
				tv0->AddReply(14001, 15237, 15236);
				return;
			}
			if (a0 == 15237) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14002);
				tv0->ClearReplies();
				tv0->AddReply(14003, 15239, 15238);
				return;
			}
			if (a0 == 15239) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14004);
				tv0->ClearReplies();
				tv0->AddReply(14005, 15241, 15240);
				return;
			}
			if (a0 == 15241) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14006);
				tv0->ClearReplies();
				tv0->AddReply(14007, 15243, 15242);
				return;
			}
			if (a0 == 15243) {
				f_15ed_a1_v("Neutral");
				tv0->SetMessage(14008);
				tv0->ClearReplies();
				tv0->AddReply(14009, -1, 15244);
				tv0->AddReply(14010, -1, 15245);
				return;
			}
			tv3 = true;
			if (f_1881_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

void f_17cd_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_17d4_a1_b(object a0)
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

bool f_17e0_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_17e5_a1_b(object a0)
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
	L5 = L3 * 70 + f_183a_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_181d_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1821_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_1833_a0_v(void)
{
	if (f_1881_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_183a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1844_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1849_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

bool f_1854_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1860_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1865_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_186e_a1_b(int a0)
{
	return f_1865_a0_i() == a0;
}

bool f_1874_a0_b(void)
{
	bool L0;
	f_1821_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_187d_a0_i(void)
{
	return 2879;
}

string f_187f_a0_s(void)
{
	return "ui/NPC_Viktor.png";
}

bool f_1881_a0_b(void)
{
	return true;
}

void f_1883_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor1", 1);
}

void f_1889_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor2", 1);
}

void f_188f_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor3", 1);
}

void f_1895_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor4", 1);
}

void f_189b_a2_v(object a0, object a1)
{
	f_1ce1_a0_v();
	f_1849_a1_o("quest_d1_02");
}

void f_18a4_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor5", 1);
}

void f_18aa_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_18b0_a2_v(object a0, object a1)
{
	@SetVariable("KnowBattleBrods", 1);
}

void f_18b6_a2_v(object a0, object a1)
{
	@SetVariable("KnowShabnak", 1);
}

void f_18bc_a2_v(object a0, object a1)
{
}

void f_18be_a2_v(object a0, object a1)
{
	@SetVariable("ood2Viktor1", 1);
}

void f_18c4_a2_v(object a0, object a1)
{
	@SetVariable("KnowRavell", 1);
}

void f_18ca_a2_v(object a0, object a1)
{
	@Trace("money 5000 is given");
	f_17cd_a3_v(a0, "money", 5000);
}

void f_18d5_a2_v(object a0, object a1)
{
}

void f_18d7_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor6", 1);
}

void f_18dd_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor7", 1);
}

void f_18e3_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor8", 1);
}

void f_18e9_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor9", 1);
}

void f_18ef_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor10", 1);
}

void f_18f5_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor11", 1);
}

void f_18fb_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1c8e_a0_o();
	L0->AddMark("d1q02ViktorGotoAnna", "pt_map_anna", 0, 8634, f_1860_a0_f());
}

void f_190b_a2_v(object a0, object a1)
{
	f_1c9f_a3_v(f_1c8e_a0_o(), "pt_map_anna", 2);
	a1->ShowMap(f_1c8e_a0_o());
}

void f_191b_a2_v(object a0, object a1)
{
	@SetVariable("KnowStation", 1);
}

void f_1921_a2_v(object a0, object a1)
{
	@SetVariable("KnowFactory", 1);
}

void f_1927_a2_v(object a0, object a1)
{
	@SetVariable("KnowWarehouses", 1);
}

void f_192d_a2_v(object a0, object a1)
{
	@SetVariable("KnowViktor", 1);
}

void f_1933_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1c8e_a0_o();
	L0->AddMark("d3q02ViktorGotoMladVlad", "pt_map_maldvlad", 0, 11380, f_1860_a0_f());
	L0->AddMark("d3q02ViktorGotoMladVladSelf", "pt_map_viktor", 0, 15305, f_1860_a0_f());
	f_1cf1_a0_v();
}

void f_194f_a2_v(object a0, object a1)
{
}

void f_1951_a2_v(object a0, object a1)
{
	f_1c9f_a3_v(f_1c8e_a0_o(), "pt_map_mladvlad", 2);
	a1->ShowMap(f_1c8e_a0_o());
}

void f_1961_a2_v(object a0, object a1)
{
}

void f_1963_a2_v(object a0, object a1)
{
	@SetVariable("d3q02", 5);
}

void f_1969_a2_v(object a0, object a1)
{
	f_1cd1_a0_v();
}

void f_196e_a2_v(object a0, object a1)
{
	if (f_1844_a1_i("d5q03") == 0) {
		object L0;
		@SetVariable("d5q03", 1);
		L0 = f_1c8e_a0_o();
		L0->AddMark("d5q03ViktorSavePrisonersSelf", "pt_map_viktor", 0, 15371, f_1860_a0_f());
		L0->AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", 0, 15370, f_1860_a0_f());
		f_1d01_a0_v();
		f_1849_a1_o("quest_d5_03");
		f_1854_a2_b("quest_d5_03", "place_prisoners");
	}
}

void f_199e_a2_v(object a0, object a1)
{
	@SetVariable("ood5Viktor1", 1);
}

void f_19a4_a2_v(object a0, object a1)
{
	@Trace("money30000 is given");
	f_17cd_a3_v(a0, "money", 30000);
}

void f_19af_a2_v(object a0, object a1)
{
	@SetVariable("ood5Viktor2", 1);
}

void f_19b5_a2_v(object a0, object a1)
{
}

void f_19b7_a2_v(object a0, object a1)
{
	@SetVariable("ood5Viktor3", 1);
}

void f_19bd_a2_v(object a0, object a1)
{
	@SetVariable("ood6Viktor1", 1);
}

void f_19c3_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d6q01", 1);
	L0 = f_1c8e_a0_o();
	L0->AddMark("d6q01ViktorGotoAlexandr", "pt_map_alexandr", 1, 15383, f_1860_a0_f());
	L0->AddMark("d6q01ViktorGotoBigVlad", "pt_map_bigvlad", 1, 15384, f_1860_a0_f());
	L0->AddMark("d6q01ViktorGotoAlxBigSelf", "pt_map_viktor", 1, 15385, f_1860_a0_f());
	f_1d11_a0_v();
	f_1d31_a0_v();
	f_1d21_a0_v();
}

void f_19f2_a2_v(object a0, object a1)
{
	@SetVariable("KnowAlexandr", 1);
}

void f_19f8_a2_v(object a0, object a1)
{
	@SetVariable("ood8Viktor1", 1);
}

void f_19fe_a2_v(object a0, object a1)
{
	@SetVariable("ood9Viktor1", 1);
}

void f_1a04_a2_v(object a0, object a1)
{
	@SetVariable("d9q01", 1);
	f_1d41_a0_v();
	f_1d51_a0_v();
	f_1854_a2_b("quest_d9_01", "place_rifles");
}

void f_1a15_a2_v(object a0, object a1)
{
	@SetVariable("ood9Viktor2", 1);
}

void f_1a1b_a2_v(object a0, object a1)
{
	@SetVariable("KnowMyth", 1);
}

void f_1a21_a2_v(object a0, object a1)
{
	@SetVariable("d6ViktorVisit", 1);
}

void f_1a27_a2_v(object a0, object a1)
{
	@SetVariable("ood9Viktor3", 1);
}

void f_1a2d_a2_v(object a0, object a1)
{
	@SetVariable("KnowBoyni", 1);
}

void f_1a33_a2_v(object a0, object a1)
{
	@SetVariable("KnowTaurusProject", 1);
}

bool f_1a39_a1_b(object a0)
{
	if (f_1844_a1_i("ood1Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_1a45_a1_b(object a0)
{
	if (f_1844_a1_i("ood1Viktor2") == 0) {
		return true;
	}
	return false;
}

bool f_1a51_a1_b(object a0)
{
	if (f_1844_a1_i("ood1Viktor3") == 0) {
		return true;
	}
	return false;
}

bool f_1a5d_a1_b(object a0)
{
	if (f_1844_a1_i("ood1Viktor4") == 0) {
		return true;
	}
	return false;
}

bool f_1a69_a1_b(object a0)
{
	if (f_1844_a1_i("d1q01") == 0) {
		return true;
	}
	return false;
}

bool f_1a75_a1_b(object a0)
{
	if (f_1844_a1_i("d1q01TeloNedostupno") == 1) {
		return true;
	}
	return false;
}

bool f_1a81_a1_b(object a0)
{
	if (f_1844_a1_i("d1q02") == 0) {
		return true;
	}
	return false;
}

bool f_1a8d_a1_b(object a0)
{
	if (f_1844_a1_i("d1q02") == 1000) {
		return true;
	}
	return false;
}

bool f_1a99_a1_b(object a0)
{
	if (f_1844_a1_i("ood1Viktor5") == 0) {
		return true;
	}
	return false;
}

bool f_1aa5_a1_b(object a0)
{
	if (f_1844_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_1ab1_a1_b(object a0)
{
	if (f_1844_a1_i("ood2Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_1abd_a1_b(object a0)
{
	if (f_1844_a1_i("KnowRavell") == 1) {
		return true;
	}
	return false;
}

bool f_1ac9_a1_b(object a0)
{
	if (f_1844_a1_i("d2q03") == 1) {
		return true;
	}
	return false;
}

bool f_1ad5_a1_b(object a0)
{
	if (f_1844_a1_i("d2q03MariaGotoViktor") == 1) {
		return true;
	}
	return false;
}

bool f_1ae1_a1_b(object a0)
{
	return true;
	return false;
}

bool f_1ae6_a1_b(object a0)
{
	if (f_1844_a1_i("ood1Viktor6") == 0) {
		return true;
	}
	return false;
}

bool f_1af2_a1_b(object a0)
{
	if (f_1844_a1_i("ood1Viktor7") == 0) {
		return true;
	}
	return false;
}

bool f_1afe_a1_b(object a0)
{
	if (f_1844_a1_i("ood1Viktor8") == 0) {
		return true;
	}
	return false;
}

bool f_1b0a_a1_b(object a0)
{
	if (f_1844_a1_i("ood1Viktor9") == 0) {
		return true;
	}
	return false;
}

bool f_1b16_a1_b(object a0)
{
	if (f_1844_a1_i("ood1Viktor10") == 0) {
		return true;
	}
	return false;
}

bool f_1b22_a1_b(object a0)
{
	if (f_1844_a1_i("ood1Viktor11") == 0) {
		return true;
	}
	return false;
}

bool f_1b2e_a1_b(object a0)
{
	if (f_1844_a1_i("d1q01") == 1) {
		return true;
	}
	return false;
}

bool f_1b3a_a1_b(object a0)
{
	if (f_1844_a1_i("d3q02") == 1) {
		return true;
	}
	return false;
}

bool f_1b46_a1_b(object a0)
{
	return true;
	return false;
}

bool f_1b4b_a1_b(object a0)
{
	if (f_1844_a1_i("d3q02") == 4) {
		return true;
	}
	return false;
}

bool f_1b57_a1_b(object a0)
{
	return true;
	return false;
}

bool f_1b5c_a1_b(object a0)
{
	if (f_1844_a1_i("KnowSaburivClan") == 1) {
		return true;
	}
	return false;
}

bool f_1b68_a1_b(object a0)
{
	if (f_1844_a1_i("d5q03") == 0) {
		return true;
	}
	return false;
}

bool f_1b74_a1_b(object a0)
{
	if (f_1844_a1_i("d5q03") == 1000) {
		return true;
	}
	return false;
}

bool f_1b80_a1_b(object a0)
{
	if (f_1844_a1_i("d5q03") == -1) {
		return true;
	}
	return false;
}

bool f_1b8c_a1_b(object a0)
{
	if (f_1844_a1_i("d5q03") == 2) {
		return true;
	}
	return false;
}

bool f_1b98_a1_b(object a0)
{
	if (f_1844_a1_i("ood5Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_1ba4_a1_b(object a0)
{
	if (f_1844_a1_i("ood5Viktor2") == 0) {
		return true;
	}
	return false;
}

bool f_1bb0_a1_b(object a0)
{
	if (f_1844_a1_i("ood5Viktor3") == 0) {
		return true;
	}
	return false;
}

bool f_1bbc_a1_b(object a0)
{
	if (f_1844_a1_i("ood6Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_1bc8_a1_b(object a0)
{
	if (f_1844_a1_i("KnowAlexandr") == 1) {
		return true;
	}
	return false;
}

bool f_1bd4_a1_b(object a0)
{
	if (f_1844_a1_i("KnowBigVlad") == 1) {
		return true;
	}
	return false;
}

bool f_1be0_a1_b(object a0)
{
	if (f_1844_a1_i("ood8Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_1bec_a1_b(object a0)
{
	if (f_1844_a1_i("d8KainIsReason") == 1) {
		return true;
	}
	return false;
}

bool f_1bf8_a1_b(object a0)
{
	if (f_1844_a1_i("ood9Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_1c04_a1_b(object a0)
{
	if (f_1844_a1_i("KnowEva") == 1) {
		return true;
	}
	return false;
}

bool f_1c10_a1_b(object a0)
{
	if (f_1844_a1_i("d9q01") == 2) {
		return true;
	}
	return false;
}

bool f_1c1c_a1_b(object a0)
{
	if (f_1844_a1_i("ood9Viktor2") == 0) {
		return true;
	}
	return false;
}

bool f_1c28_a1_b(object a0)
{
	if (f_1844_a1_i("d9TalkToPolkovodec") != 0) {
		return true;
	}
	return false;
}

bool f_1c34_a1_b(object a0)
{
	if (f_1844_a1_i("KnowJulia") == 1) {
		return true;
	}
	return false;
}

bool f_1c40_a1_b(object a0)
{
	if (f_1844_a1_i("ood9Viktor3") == 0) {
		return true;
	}
	return false;
}

bool f_1c4c_a1_b(object a0)
{
	if (f_1844_a1_i("KnowStamatins") == 1) {
		return true;
	}
	return false;
}

bool f_1c58_a1_b(object a0)
{
	if (f_1844_a1_i("KnowTaurusProject") == 1) {
		return true;
	}
	return false;
}

object f_1c64_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1c71_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1c64_a0_o();
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

object f_1c8e_a0_o(void)
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

void f_1c9f_a3_v(object a0, string a1, float a2)
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

int f_1cc0_a0_i(void)
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

void f_1cd1_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 31, 1, 12113);
	f_1c71_a2_b(L0, 2);
}

void f_1ce1_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 7, 2, 3078);
	f_1c71_a2_b(L0, -1);
}

void f_1cf1_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 77, 2, 12159);
	f_1c71_a2_b(L0, 26);
}

void f_1d01_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 154, 2, 15365);
	f_1c71_a2_b(L0, -1);
}

void f_1d11_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 111, 1, 13734);
	f_1c71_a2_b(L0, -1);
}

void f_1d21_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 113, 1, 13736);
	f_1c71_a2_b(L0, 111);
}

void f_1d31_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 112, 1, 13735);
	f_1c71_a2_b(L0, 111);
}

void f_1d41_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 182, 1, 15445);
	f_1c71_a2_b(L0, -1);
}

void f_1d51_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 183, 1, 15446);
	f_1c71_a2_b(L0, 182);
}

void f_1d61_a0_v(void)
{
	g1 = false;
}

void f_1d65_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_186e_a1_b(1)) {
		t6{a0};
		return;
	}
	if (f_186e_a1_b(2)) {
		t8{a0};
		return;
	}
	if (f_186e_a1_b(3)) {
		t10{a0};
		return;
	}
	if (f_186e_a1_b(5)) {
		t12{a0};
		return;
	}
	if (f_186e_a1_b(6)) {
		t4{a0};
		return;
	}
	if (f_186e_a1_b(8)) {
		t14{a0};
		return;
	}
	if (f_186e_a1_b(9)) {
		t16{a0};
		return;
	}
	f_1874_a0_b();
}

