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
		f_2606_a0_v();
		if (!f_1e70_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_1eb1_a1_v("Neutral");
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
		f_260a_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_1e64_a1_b(a0);
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
		if (!f_1e75_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f09_a0_i());
		L0->SetPhoto(f_1f0b_a0_s());
		L0->SetPlayerName(f_2575_a0_i());
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
		f_1ead_a1_v(a0);
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
			f_2141_a2_v(tv1, tv0);
			f_b4_a1_v("Neutral");
			tv0->SetMessage(401);
			tv0->ClearReplies();
			tv0->AddReply(402, 471, 468);
			tv0->AddReply(403, 472, 469);
			tv0->AddReply(404, -1, 470);
			break;
			return;
		}
		if (f_1f0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1eb1_a1_v(tv2);
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

	void f_b4_a1_v(string a0)
	{
		if (!f_1f0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1eb1_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ec3_a0_v();
			if (a0 == 467) {
				f_2141_a2_v(tv1, tv0);
				f_b4_a1_v("Neutral");
				tv0->SetMessage(401);
				tv0->ClearReplies();
				tv0->AddReply(402, 471, 468);
				tv0->AddReply(403, 472, 469);
				tv0->AddReply(404, -1, 470);
				return;
			}
			if (a0 == 472) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(406);
				tv0->ClearReplies();
				tv0->AddReply(413, 475, 480);
				tv0->AddReply(414, -1, 481);
				return;
			}
			if (a0 == 471) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(405);
				tv0->ClearReplies();
				tv0->AddReply(407, 475, 473);
				tv0->AddReply(408, 475, 474);
				return;
			}
			if (a0 == 475) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(409);
				tv0->ClearReplies();
				tv0->AddReply(410, -1, 477);
				tv0->AddReply(411, -1, 478);
				tv0->AddReply(412, -1, 479);
				return;
			}
			tv3 = true;
			if (f_1f0d_a0_b()) {
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
		if (!f_1e75_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f09_a0_i());
		L0->SetPhoto(f_1f0b_a0_s());
		L0->SetPlayerName(f_2575_a0_i());
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
		f_1ead_a1_v(a0);
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
			if (!f_244a_a1_b(tv1) && f_24aa_a1_b(tv1)) {
				f_215f_a2_v(tv1, tv0);
				f_2220_a2_v(tv1, tv0);
				f_227_a1_v("Neutral");
				tv0->SetMessage(10676);
				tv0->ClearReplies();
				tv0->AddReply(10688, 11789, 11801);
				break;
			}
			if (f_24da_a1_b(tv1)) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(12502);
				tv0->ClearReplies();
				if (f_244a_a1_b(tv1) && f_2456_a1_b(tv1)) {
					tv0->AddReply(12027, 13248, 13245);
				}
				if (f_2426_a1_b(tv1) && f_2432_a1_b(tv1) && !f_240e_a1_b(tv1) && !f_241a_a1_b(tv1) && !f_243e_a1_b(tv1)) {
					tv0->AddReply(12503, 13674, 13673);
				}
				tv0->AddReply(12514, -1, 13684);
				break;
			}
			return;
		}
		if (f_1f0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1eb1_a1_v(tv2);
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

	void f_227_a1_v(string a0)
	{
		if (!f_1f0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1eb1_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ec3_a0_v();
			if (a1 == 13245) {
				f_213b_a2_v(tv1, tv0);
			}
			if (a1 == 13253) {
				f_2165_a2_v(tv1, tv0);
			}
			if (a1 == 13885) {
				f_2165_a2_v(tv1, tv0);
			}
			if (a1 == 13673) {
				f_2135_a2_v(tv1, tv0);
			}
			if (a1 == 13683) {
				f_2210_a2_v(tv1, tv0);
			}
			if (a0 == 11787) {
				if (!f_244a_a1_b(tv1) && f_24aa_a1_b(tv1)) {
					f_215f_a2_v(tv1, tv0);
					f_2220_a2_v(tv1, tv0);
					f_227_a1_v("Neutral");
					tv0->SetMessage(10676);
					tv0->ClearReplies();
					tv0->AddReply(10688, 11789, 11801);
					return;
				}
				if (f_24da_a1_b(tv1)) {
					f_227_a1_v("Neutral");
					tv0->SetMessage(12502);
					tv0->ClearReplies();
					if (f_244a_a1_b(tv1) && f_2456_a1_b(tv1)) {
						tv0->AddReply(12027, 13248, 13245);
					}
					if (f_2426_a1_b(tv1) && f_2432_a1_b(tv1) && !f_240e_a1_b(tv1) && !f_241a_a1_b(tv1) && !f_243e_a1_b(tv1)) {
						tv0->AddReply(12503, 13674, 13673);
					}
					tv0->AddReply(12514, -1, 13684);
					return;
				}
			}
			if (a0 == 13674) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(12504);
				tv0->ClearReplies();
				tv0->AddReply(12505, 13676, 13675);
				return;
			}
			if (a0 == 13676) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(12506);
				tv0->ClearReplies();
				tv0->AddReply(12507, 13678, 13677);
				return;
			}
			if (a0 == 13678) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(12508);
				tv0->ClearReplies();
				tv0->AddReply(12509, 13680, 13679);
				return;
			}
			if (a0 == 13680) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(12510);
				tv0->ClearReplies();
				tv0->AddReply(12511, 13682, 13681);
				return;
			}
			if (a0 == 13682) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(12512);
				tv0->ClearReplies();
				tv0->AddReply(12513, -1, 13683);
				return;
			}
			if (a0 == 13248) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(12030);
				tv0->ClearReplies();
				tv0->AddReply(12031, 13250, 13249);
				tv0->AddReply(12692, 3597, 13882);
				return;
			}
			if (a0 == 3597) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3321);
				tv0->ClearReplies();
				tv0->AddReply(3322, 3599, 3598);
				tv0->AddReply(3535, 3817, 3816);
				return;
			}
			if (a0 == 3817) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3536);
				tv0->ClearReplies();
				tv0->AddReply(3537, 3604, 3818);
				tv0->AddReply(3538, 3599, 3819);
				return;
			}
			if (a0 == 3599) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3323);
				tv0->ClearReplies();
				tv0->AddReply(3324, 3604, 3600);
				tv0->AddReply(3325, 3604, 3601);
				return;
			}
			if (a0 == 3604) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3327);
				tv0->ClearReplies();
				tv0->AddReply(3330, 3815, 3607);
				return;
			}
			if (a0 == 13250) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(12032);
				tv0->ClearReplies();
				tv0->AddReply(12033, 13252, 13251);
				tv0->AddReply(3539, 3823, 3822);
				return;
			}
			if (a0 == 3823) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3540);
				tv0->ClearReplies();
				tv0->AddReply(3541, 13252, 3824);
				tv0->AddReply(3533, 3815, 3814);
				return;
			}
			if (a0 == 3815) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(3534);
				tv0->ClearReplies();
				tv0->AddReply(12694, -1, 13885);
				return;
			}
			if (a0 == 13252) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(12034);
				tv0->ClearReplies();
				tv0->AddReply(12035, -1, 13253);
				return;
			}
			if (a0 == 11789) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10678);
				tv0->ClearReplies();
				tv0->AddReply(10679, 11791, 11790);
				tv0->AddReply(10687, -1, 11800);
				return;
			}
			if (a0 == 11791) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10680);
				tv0->ClearReplies();
				tv0->AddReply(10681, 11793, 11792);
				tv0->AddReply(10685, 11793, 11796);
				tv0->AddReply(10686, 11793, 11798);
				return;
			}
			if (a0 == 11793) {
				f_227_a1_v("Neutral");
				tv0->SetMessage(10682);
				tv0->ClearReplies();
				tv0->AddReply(10683, -1, 11794);
				tv0->AddReply(10684, -1, 11795);
				return;
			}
			tv3 = true;
			if (f_1f0d_a0_b()) {
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
		if (!f_1e75_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f09_a0_i());
		L0->SetPhoto(f_1f0b_a0_s());
		L0->SetPlayerName(f_2575_a0_i());
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
		f_1ead_a1_v(a0);
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
			if (f_24f2_a1_b(tv1)) {
				f_2226_a2_v(tv1, tv0);
				f_598_a1_v("Neutral");
				tv0->SetMessage(5238);
				tv0->ClearReplies();
				tv0->AddReply(5240, 6468, 5775);
				tv0->AddReply(5239, 6465, 5774);
				break;
			}
			if (f_24fe_a1_b(tv1) && !f_223e_a1_b(tv1)) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5253);
				tv0->ClearReplies();
				tv0->AddReply(5254, 5792, 5791);
				tv0->AddReply(5260, 5798, 5797);
				tv0->AddReply(5259, -1, 5796);
				break;
			}
			f_598_a1_v("Neutral");
			tv0->SetMessage(7539);
			tv0->ClearReplies();
			if (f_250a_a1_b(tv1) && f_223e_a1_b(tv1)) {
				tv0->AddReply(7540, 5777, 8322);
			}
			if (f_24b6_a1_b(tv1) && f_22a8_a1_b(tv1)) {
				tv0->AddReply(7548, 8354, 8330);
			}
			if (f_249e_a1_b(tv1) && f_22b4_a1_b(tv1)) {
				tv0->AddReply(7552, 8349, 8334);
			}
			if (f_24c2_a1_b(tv1) && f_22c0_a1_b(tv1)) {
				tv0->AddReply(7553, 8350, 8335);
			}
			if (f_24ce_a1_b(tv1) && f_22cc_a1_b(tv1)) {
				tv0->AddReply(7556, 8351, 8338);
			}
			if (f_232c_a1_b(tv1) && f_22d8_a1_b(tv1)) {
				tv0->AddReply(7560, 8352, 8342);
			}
			if (f_24e6_a1_b(tv1) && f_22e4_a1_b(tv1)) {
				tv0->AddReply(7561, 8353, 8343);
			}
			tv0->AddReply(7590, -1, 8376);
			break;
			return;
		}
		if (f_1f0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1eb1_a1_v(tv2);
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

	void f_598_a1_v(string a0)
	{
		if (!f_1f0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1eb1_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ec3_a0_v();
			if (a1 == 6488) {
				f_222c_a2_v(tv1, tv0);
				f_1f61_a2_v(tv1, tv0);
				f_1f7a_a2_v(tv1, tv0);
			}
			if (a1 == 6485) {
				f_222c_a2_v(tv1, tv0);
				f_1f61_a2_v(tv1, tv0);
				f_1f7a_a2_v(tv1, tv0);
			}
			if (a1 == 6484) {
				f_222c_a2_v(tv1, tv0);
				f_1f61_a2_v(tv1, tv0);
				f_1f7a_a2_v(tv1, tv0);
			}
			if (a1 == 6474) {
				f_222c_a2_v(tv1, tv0);
				f_1f61_a2_v(tv1, tv0);
				f_1f7a_a2_v(tv1, tv0);
			}
			if (a1 == 6481) {
				f_222c_a2_v(tv1, tv0);
				f_1f61_a2_v(tv1, tv0);
				f_1f7a_a2_v(tv1, tv0);
			}
			if (a1 == 6471) {
				f_222c_a2_v(tv1, tv0);
				f_1f61_a2_v(tv1, tv0);
				f_1f7a_a2_v(tv1, tv0);
			}
			if (a1 == 5793) {
				f_2232_a2_v(tv1, tv0);
			}
			if (a1 == 5794) {
				f_2232_a2_v(tv1, tv0);
			}
			if (a1 == 5799) {
				f_2232_a2_v(tv1, tv0);
			}
			if (a1 == 5796) {
				f_2232_a2_v(tv1, tv0);
			}
			if (a1 == 5785) {
				f_2238_a2_v(tv1, tv0);
			}
			if (a1 == 5782) {
				f_2238_a2_v(tv1, tv0);
			}
			if (a1 == 8364) {
				f_1f3d_a2_v(tv1, tv0);
			}
			if (a1 == 8365) {
				f_1f3d_a2_v(tv1, tv0);
			}
			if (a1 == 8375) {
				f_1f43_a2_v(tv1, tv0);
			}
			if (a1 == 8390) {
				f_1f49_a2_v(tv1, tv0);
			}
			if (a1 == 8391) {
				f_1f49_a2_v(tv1, tv0);
			}
			if (a1 == 8400) {
				f_1f4f_a2_v(tv1, tv0);
			}
			if (a1 == 8411) {
				f_1f4f_a2_v(tv1, tv0);
			}
			if (a1 == 8415) {
				f_1f55_a2_v(tv1, tv0);
			}
			if (a1 == 8406) {
				f_1f55_a2_v(tv1, tv0);
			}
			if (a1 == 8409) {
				f_1f5b_a2_v(tv1, tv0);
			}
			if (a0 == 5773) {
				if (f_24f2_a1_b(tv1)) {
					f_2226_a2_v(tv1, tv0);
					f_598_a1_v("Neutral");
					tv0->SetMessage(5238);
					tv0->ClearReplies();
					tv0->AddReply(5240, 6468, 5775);
					tv0->AddReply(5239, 6465, 5774);
					return;
				}
				if (f_24fe_a1_b(tv1) && !f_223e_a1_b(tv1)) {
					f_598_a1_v("Neutral");
					tv0->SetMessage(5253);
					tv0->ClearReplies();
					tv0->AddReply(5254, 5792, 5791);
					tv0->AddReply(5260, 5798, 5797);
					tv0->AddReply(5259, -1, 5796);
					return;
				}
				f_598_a1_v("Neutral");
				tv0->SetMessage(7539);
				tv0->ClearReplies();
				if (f_250a_a1_b(tv1) && f_223e_a1_b(tv1)) {
					tv0->AddReply(7540, 5777, 8322);
				}
				if (f_24b6_a1_b(tv1) && f_22a8_a1_b(tv1)) {
					tv0->AddReply(7548, 8354, 8330);
				}
				if (f_249e_a1_b(tv1) && f_22b4_a1_b(tv1)) {
					tv0->AddReply(7552, 8349, 8334);
				}
				if (f_24c2_a1_b(tv1) && f_22c0_a1_b(tv1)) {
					tv0->AddReply(7553, 8350, 8335);
				}
				if (f_24ce_a1_b(tv1) && f_22cc_a1_b(tv1)) {
					tv0->AddReply(7556, 8351, 8338);
				}
				if (f_232c_a1_b(tv1) && f_22d8_a1_b(tv1)) {
					tv0->AddReply(7560, 8352, 8342);
				}
				if (f_24e6_a1_b(tv1) && f_22e4_a1_b(tv1)) {
					tv0->AddReply(7561, 8353, 8343);
				}
				tv0->AddReply(7590, -1, 8376);
				return;
			}
			if (a0 == 8353) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7571);
				tv0->ClearReplies();
				tv0->AddReply(7618, 8408, 8407);
				return;
			}
			if (a0 == 8408) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7619);
				tv0->ClearReplies();
				tv0->AddReply(7620, -1, 8409);
				return;
			}
			if (a0 == 8352) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7570);
				tv0->ClearReplies();
				tv0->AddReply(7612, 8402, 8401);
				return;
			}
			if (a0 == 8402) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7613);
				tv0->ClearReplies();
				tv0->AddReply(7614, 8404, 8403);
				return;
			}
			if (a0 == 8404) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7615);
				tv0->ClearReplies();
				if (!f_22f0_a1_b(tv1)) {
					tv0->AddReply(7616, 8412, 8405);
				}
				if (f_22f0_a1_b(tv1)) {
					tv0->AddReply(7617, -1, 8406);
				}
				return;
			}
			if (a0 == 8412) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7623);
				tv0->ClearReplies();
				tv0->AddReply(7624, 8414, 8413);
				return;
			}
			if (a0 == 8414) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7625);
				tv0->ClearReplies();
				tv0->AddReply(7626, -1, 8415);
				return;
			}
			if (a0 == 8351) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7569);
				tv0->ClearReplies();
				tv0->AddReply(7604, 8396, 8392);
				tv0->AddReply(7605, 8394, 8393);
				return;
			}
			if (a0 == 8394) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7606);
				tv0->ClearReplies();
				tv0->AddReply(7607, 8396, 8395);
				return;
			}
			if (a0 == 8396) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7608);
				tv0->ClearReplies();
				tv0->AddReply(7609, 8398, 8397);
				return;
			}
			if (a0 == 8398) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7610);
				tv0->ClearReplies();
				tv0->AddReply(7611, -1, 8400);
				tv0->AddReply(7622, -1, 8411);
				return;
			}
			if (a0 == 8350) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7568);
				tv0->ClearReplies();
				tv0->AddReply(7591, 8378, 8377);
				tv0->AddReply(7598, 8386, 8385);
				return;
			}
			if (a0 == 8386) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7599);
				tv0->ClearReplies();
				tv0->AddReply(7600, 8388, 8387);
				return;
			}
			if (a0 == 8388) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7601);
				tv0->ClearReplies();
				tv0->AddReply(7603, -1, 8391);
				return;
			}
			if (a0 == 8378) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7592);
				tv0->ClearReplies();
				tv0->AddReply(7593, 8381, 8379);
				tv0->AddReply(7594, 8381, 8380);
				return;
			}
			if (a0 == 8381) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7595);
				tv0->ClearReplies();
				tv0->AddReply(7596, 8383, 8382);
				return;
			}
			if (a0 == 8383) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7597);
				tv0->ClearReplies();
				tv0->AddReply(7602, -1, 8390);
				return;
			}
			if (a0 == 8349) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7567);
				tv0->ClearReplies();
				tv0->AddReply(7582, 8367, 8366);
				return;
			}
			if (a0 == 8367) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7583);
				tv0->ClearReplies();
				tv0->AddReply(7584, 8370, 8368);
				tv0->AddReply(7585, 8370, 8369);
				return;
			}
			if (a0 == 8370) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7586);
				tv0->ClearReplies();
				tv0->AddReply(7587, 8374, 8373);
				return;
			}
			if (a0 == 8374) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7588);
				tv0->ClearReplies();
				tv0->AddReply(7589, -1, 8375);
				return;
			}
			if (a0 == 8354) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7572);
				tv0->ClearReplies();
				tv0->AddReply(7573, 8348, 8355);
				tv0->AddReply(7574, 8348, 8356);
				return;
			}
			if (a0 == 8348) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7566);
				tv0->ClearReplies();
				tv0->AddReply(7575, 8359, 8358);
				tv0->AddReply(7577, 8359, 8360);
				return;
			}
			if (a0 == 8359) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7576);
				tv0->ClearReplies();
				tv0->AddReply(7578, 8363, 8362);
				return;
			}
			if (a0 == 8363) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(7579);
				tv0->ClearReplies();
				tv0->AddReply(7580, -1, 8364);
				tv0->AddReply(7581, -1, 8365);
				return;
			}
			if (a0 == 5777) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5242);
				tv0->ClearReplies();
				tv0->AddReply(5243, 5779, 5778);
				tv0->AddReply(5252, 5779, 5788);
				return;
			}
			if (a0 == 5779) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5244);
				tv0->ClearReplies();
				tv0->AddReply(5245, 5781, 5780);
				tv0->AddReply(5251, 5781, 5786);
				return;
			}
			if (a0 == 5781) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5246);
				tv0->ClearReplies();
				tv0->AddReply(5248, 5784, 5783);
				tv0->AddReply(5247, -1, 5782);
				return;
			}
			if (a0 == 5784) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5249);
				tv0->ClearReplies();
				tv0->AddReply(5250, -1, 5785);
				return;
			}
			if (a0 == 5798) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5261);
				tv0->ClearReplies();
				tv0->AddReply(5262, -1, 5799);
				return;
			}
			if (a0 == 5792) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5255);
				tv0->ClearReplies();
				tv0->AddReply(5256, -1, 5793);
				tv0->AddReply(5257, -1, 5794);
				return;
			}
			if (a0 == 6465) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5873);
				tv0->ClearReplies();
				tv0->AddReply(5874, 6469, 6466);
				tv0->AddReply(5875, 6469, 6467);
				return;
			}
			if (a0 == 6469) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5877);
				tv0->ClearReplies();
				tv0->AddReply(5880, 6473, 6472);
				tv0->AddReply(5879, -1, 6471);
				return;
			}
			if (a0 == 6473) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5881);
				tv0->ClearReplies();
				tv0->AddReply(5882, -1, 6474);
				tv0->AddReply(5887, -1, 6481);
				return;
			}
			if (a0 == 6468) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5876);
				tv0->ClearReplies();
				tv0->AddReply(5883, 6477, 6476);
				tv0->AddReply(5888, 6483, 6482);
				return;
			}
			if (a0 == 6483) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5889);
				tv0->ClearReplies();
				tv0->AddReply(5891, -1, 6485);
				tv0->AddReply(5890, -1, 6484);
				return;
			}
			if (a0 == 6477) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5884);
				tv0->ClearReplies();
				tv0->AddReply(5885, 6469, 6478);
				tv0->AddReply(5892, 6487, 6486);
				return;
			}
			if (a0 == 6487) {
				f_598_a1_v("Neutral");
				tv0->SetMessage(5893);
				tv0->ClearReplies();
				tv0->AddReply(5894, -1, 6488);
				tv0->AddReply(5895, 6469, 6489);
				return;
			}
			tv3 = true;
			if (f_1f0d_a0_b()) {
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
		if (!f_1e75_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f09_a0_i());
		L0->SetPhoto(f_1f0b_a0_s());
		L0->SetPlayerName(f_2575_a0_i());
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
		f_1ead_a1_v(a0);
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
			if (f_2256_a1_b(tv1) && f_2290_a1_b(tv1)) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6797);
				tv0->ClearReplies();
				tv0->AddReply(6798, 7491, 7490);
				tv0->AddReply(6809, 7491, 7503);
				tv0->AddReply(6810, 7493, 7505);
				break;
			}
			if (f_2262_a1_b(tv1) && f_229c_a1_b(tv1)) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6765);
				tv0->ClearReplies();
				tv0->AddReply(6777, 7457, 7467);
				tv0->AddReply(6766, 7459, 7456);
				break;
			}
			f_b79_a1_v("Neutral");
			tv0->SetMessage(6794);
			tv0->ClearReplies();
			if (f_226e_a1_b(tv1) && f_2290_a1_b(tv1)) {
				tv0->AddReply(7084, 7809, 7807);
			}
			if (f_227a_a1_b(tv1)) {
				tv0->AddReply(6795, 7469, 7487);
			}
			tv0->AddReply(7535, -1, 8317);
			break;
			return;
		}
		if (f_1f0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1eb1_a1_v(tv2);
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

	void f_b79_a1_v(string a0)
	{
		if (!f_1f0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1eb1_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ec3_a0_v();
			if (a1 == 7496) {
				f_1f1f_a2_v(tv1, tv0);
			}
			if (a1 == 7497) {
				f_1f1f_a2_v(tv1, tv0);
			}
			if (a1 == 7828) {
				f_1f1f_a2_v(tv1, tv0);
			}
			if (a1 == 7831) {
				f_1f1f_a2_v(tv1, tv0);
			}
			if (a1 == 7460) {
				f_1f25_a2_v(tv1, tv0);
				f_1f37_a2_v(tv1, tv0);
			}
			if (a1 == 7461) {
				f_1f25_a2_v(tv1, tv0);
				f_1f37_a2_v(tv1, tv0);
			}
			if (a1 == 7465) {
				f_1f25_a2_v(tv1, tv0);
				f_1f37_a2_v(tv1, tv0);
			}
			if (a1 == 7466) {
				f_1f25_a2_v(tv1, tv0);
				f_1f37_a2_v(tv1, tv0);
			}
			if (a1 == 7814) {
				f_1f2b_a2_v(tv1, tv0);
			}
			if (a1 == 7815) {
				f_1f2b_a2_v(tv1, tv0);
			}
			if (a1 == 7477) {
				f_1f31_a2_v(tv1, tv0);
			}
			if (a1 == 7478) {
				f_1f31_a2_v(tv1, tv0);
			}
			if (a1 == 7474) {
				f_1f31_a2_v(tv1, tv0);
			}
			if (a1 == 7479) {
				f_1f31_a2_v(tv1, tv0);
			}
			if (a0 == 7489) {
				if (f_2256_a1_b(tv1) && f_2290_a1_b(tv1)) {
					f_b79_a1_v("Neutral");
					tv0->SetMessage(6797);
					tv0->ClearReplies();
					tv0->AddReply(6798, 7491, 7490);
					tv0->AddReply(6809, 7491, 7503);
					tv0->AddReply(6810, 7493, 7505);
					return;
				}
				if (f_2262_a1_b(tv1) && f_229c_a1_b(tv1)) {
					f_b79_a1_v("Neutral");
					tv0->SetMessage(6765);
					tv0->ClearReplies();
					tv0->AddReply(6777, 7457, 7467);
					tv0->AddReply(6766, 7459, 7456);
					return;
				}
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6794);
				tv0->ClearReplies();
				if (f_226e_a1_b(tv1) && f_2290_a1_b(tv1)) {
					tv0->AddReply(7084, 7809, 7807);
				}
				if (f_227a_a1_b(tv1)) {
					tv0->AddReply(6795, 7469, 7487);
				}
				tv0->AddReply(7535, -1, 8317);
				return;
			}
			if (a0 == 7469) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6778);
				tv0->ClearReplies();
				tv0->AddReply(6779, 7471, 7470);
				tv0->AddReply(6793, 7476, 7485);
				return;
			}
			if (a0 == 7471) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6780);
				tv0->ClearReplies();
				tv0->AddReply(6781, 7473, 7472);
				tv0->AddReply(6788, -1, 7479);
				return;
			}
			if (a0 == 7473) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6782);
				tv0->ClearReplies();
				tv0->AddReply(6784, 7476, 7475);
				tv0->AddReply(6783, -1, 7474);
				return;
			}
			if (a0 == 7476) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6785);
				tv0->ClearReplies();
				tv0->AddReply(6786, -1, 7477);
				tv0->AddReply(6787, -1, 7478);
				return;
			}
			if (a0 == 7809) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(7085);
				tv0->ClearReplies();
				tv0->AddReply(7086, 7811, 7810);
				tv0->AddReply(7096, 7813, 7822);
				return;
			}
			if (a0 == 7811) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(7087);
				tv0->ClearReplies();
				tv0->AddReply(7088, 7813, 7812);
				tv0->AddReply(7092, 7813, 7816);
				tv0->AddReply(7093, 7819, 7818);
				return;
			}
			if (a0 == 7819) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(7094);
				tv0->ClearReplies();
				tv0->AddReply(7095, 7813, 7820);
				return;
			}
			if (a0 == 7813) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(7089);
				tv0->ClearReplies();
				tv0->AddReply(7090, -1, 7814);
				tv0->AddReply(7091, -1, 7815);
				return;
			}
			if (a0 == 7457) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6767);
				tv0->ClearReplies();
				tv0->AddReply(6768, 7459, 7458);
				tv0->AddReply(6773, 7464, 7463);
				return;
			}
			if (a0 == 7464) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6774);
				tv0->ClearReplies();
				tv0->AddReply(6775, -1, 7465);
				tv0->AddReply(6776, -1, 7466);
				return;
			}
			if (a0 == 7459) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6769);
				tv0->ClearReplies();
				tv0->AddReply(6770, -1, 7460);
				tv0->AddReply(6771, -1, 7461);
				return;
			}
			if (a0 == 7491) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6799);
				tv0->ClearReplies();
				tv0->AddReply(6800, 7493, 7492);
				tv0->AddReply(6807, 7493, 7500);
				return;
			}
			if (a0 == 7493) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6801);
				tv0->ClearReplies();
				tv0->AddReply(6802, 7495, 7494);
				tv0->AddReply(6806, 7495, 7498);
				return;
			}
			if (a0 == 7495) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(6803);
				tv0->ClearReplies();
				tv0->AddReply(6804, -1, 7496);
				tv0->AddReply(6805, -1, 7497);
				tv0->AddReply(7097, 7825, 7824);
				return;
			}
			if (a0 == 7825) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(7098);
				tv0->ClearReplies();
				tv0->AddReply(7099, 7827, 7826);
				return;
			}
			if (a0 == 7827) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(7100);
				tv0->ClearReplies();
				tv0->AddReply(7101, -1, 7828);
				tv0->AddReply(7102, 7830, 7829);
				return;
			}
			if (a0 == 7830) {
				f_b79_a1_v("Neutral");
				tv0->SetMessage(7103);
				tv0->ClearReplies();
				tv0->AddReply(7104, -1, 7831);
				return;
			}
			tv3 = true;
			if (f_1f0d_a0_b()) {
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
		if (!f_1e75_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f09_a0_i());
		L0->SetPhoto(f_1f0b_a0_s());
		L0->SetPlayerName(f_2575_a0_i());
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
		f_1ead_a1_v(a0);
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
			f_f06_a1_v("Neutral");
			tv0->SetMessage(8926);
			tv0->ClearReplies();
			if (f_22fc_a1_b(tv1) && f_2308_a1_b(tv1)) {
				tv0->AddReply(8977, 9847, 9846);
			}
			if (f_2320_a1_b(tv1) && f_22fc_a1_b(tv1) && !f_2308_a1_b(tv1)) {
				tv0->AddReply(9005, 9877, 9876);
			}
			if (f_2344_a1_b(tv1) && f_2338_a1_b(tv1)) {
				tv0->AddReply(9008, 9880, 9879);
			}
			if (f_2350_a1_b(tv1) && f_235c_a1_b(tv1)) {
				tv0->AddReply(10218, 11265, 11264);
			}
			if (f_2374_a1_b(tv1) && f_2368_a1_b(tv1)) {
				tv0->AddReply(10373, 11439, 11438);
			}
			tv0->AddReply(8975, 9792, 9844);
			tv0->AddReply(8976, 9815, 9845);
			tv0->AddReply(9020, 9890, 9892);
			tv0->AddReply(11139, -1, 12328);
			break;
			return;
		}
		if (f_1f0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1eb1_a1_v(tv2);
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

	void f_f06_a1_v(string a0)
	{
		if (!f_1f0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1eb1_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ec3_a0_v();
			if (a1 == 9874) {
				f_1f80_a2_v(tv1, tv0);
				f_1f86_a2_v(tv1, tv0);
				f_1f0f_a2_v(tv1, tv0);
			}
			if (a1 == 9875) {
				f_1f80_a2_v(tv1, tv0);
				f_1f86_a2_v(tv1, tv0);
				f_1f0f_a2_v(tv1, tv0);
			}
			if (a1 == 12339) {
				f_1f80_a2_v(tv1, tv0);
			}
			if (a1 == 9878) {
				f_1fa6_a2_v(tv1, tv0);
				f_1f86_a2_v(tv1, tv0);
				f_1f0f_a2_v(tv1, tv0);
			}
			if (a1 == 9891) {
				f_1fac_a2_v(tv1, tv0);
				f_1fb2_a2_v(tv1, tv0);
			}
			if (a1 == 11436) {
				f_1fdf_a2_v(tv1, tv0);
				f_1fe5_a2_v(tv1, tv0);
				f_1ff9_a2_v(tv1, tv0);
			}
			if (a1 == 11437) {
				f_1fdf_a2_v(tv1, tv0);
				f_1fe5_a2_v(tv1, tv0);
				f_1ff9_a2_v(tv1, tv0);
			}
			if (a1 == 11447) {
				f_2009_a2_v(tv1, tv0);
			}
			if (a1 == 11448) {
				f_2009_a2_v(tv1, tv0);
			}
			if (a0 == 9791) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8926);
				tv0->ClearReplies();
				if (f_22fc_a1_b(tv1) && f_2308_a1_b(tv1)) {
					tv0->AddReply(8977, 9847, 9846);
				}
				if (f_2320_a1_b(tv1) && f_22fc_a1_b(tv1) && !f_2308_a1_b(tv1)) {
					tv0->AddReply(9005, 9877, 9876);
				}
				if (f_2344_a1_b(tv1) && f_2338_a1_b(tv1)) {
					tv0->AddReply(9008, 9880, 9879);
				}
				if (f_2350_a1_b(tv1) && f_235c_a1_b(tv1)) {
					tv0->AddReply(10218, 11265, 11264);
				}
				if (f_2374_a1_b(tv1) && f_2368_a1_b(tv1)) {
					tv0->AddReply(10373, 11439, 11438);
				}
				tv0->AddReply(8975, 9792, 9844);
				tv0->AddReply(8976, 9815, 9845);
				tv0->AddReply(9020, 9890, 9892);
				tv0->AddReply(11139, -1, 12328);
				return;
			}
			if (a0 == 9815) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8949);
				tv0->ClearReplies();
				tv0->AddReply(8950, 9817, 9816);
				tv0->AddReply(8963, 9832, 9829);
				tv0->AddReply(8964, 9832, 9831);
				tv0->AddReply(8972, 9841, 9840);
				return;
			}
			if (a0 == 9841) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8973);
				tv0->ClearReplies();
				tv0->AddReply(8974, 9817, 9842);
				return;
			}
			if (a0 == 9832) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8965);
				tv0->ClearReplies();
				tv0->AddReply(8966, 9834, 9833);
				tv0->AddReply(8971, 9834, 9838);
				return;
			}
			if (a0 == 9834) {
				f_f06_a1_v("Rage");
				tv0->SetMessage(8967);
				tv0->ClearReplies();
				tv0->AddReply(8968, 9836, 9835);
				tv0->AddReply(8970, -1, 9837);
				return;
			}
			if (a0 == 9836) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8969);
				tv0->ClearReplies();
				return;
			}
			if (a0 == 9817) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8951);
				tv0->ClearReplies();
				tv0->AddReply(8952, -1, 9818);
				tv0->AddReply(8953, -1, 9819);
				tv0->AddReply(8954, 9821, 9820);
				return;
			}
			if (a0 == 9821) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8955);
				tv0->ClearReplies();
				tv0->AddReply(8956, -1, 9822);
				tv0->AddReply(8957, 9824, 9823);
				return;
			}
			if (a0 == 9824) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8958);
				tv0->ClearReplies();
				tv0->AddReply(8959, 9826, 9825);
				tv0->AddReply(8962, -1, 9828);
				return;
			}
			if (a0 == 9826) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8960);
				tv0->ClearReplies();
				tv0->AddReply(8961, -1, 9827);
				return;
			}
			if (a0 == 9792) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8927);
				tv0->ClearReplies();
				tv0->AddReply(8928, 9794, 9793);
				tv0->AddReply(8941, 9808, 9807);
				return;
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10085);
				tv0->ClearReplies();
				tv0->AddReply(10086, 11117, 11116);
				tv0->AddReply(10106, 11117, 11139);
				tv0->AddReply(10107, 11142, 11141);
				return;
			}
			if (a0 == 11142) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10108);
				tv0->ClearReplies();
				tv0->AddReply(10109, 11117, 11143);
				tv0->AddReply(10110, 11117, 11145);
				return;
			}
			if (a0 == 11117) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10087);
				tv0->ClearReplies();
				tv0->AddReply(10088, 11119, 11118);
				tv0->AddReply(10105, 11121, 11137);
				return;
			}
			if (a0 == 11119) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10089);
				tv0->ClearReplies();
				tv0->AddReply(10090, 11121, 11120);
				tv0->AddReply(10101, 11132, 11131);
				return;
			}
			if (a0 == 11132) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10102);
				tv0->ClearReplies();
				tv0->AddReply(10103, 11121, 11133);
				tv0->AddReply(10104, 11121, 11135);
				return;
			}
			if (a0 == 11121) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10091);
				tv0->ClearReplies();
				tv0->AddReply(10092, 11123, 11122);
				tv0->AddReply(10097, 11128, 11127);
				return;
			}
			if (a0 == 11128) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10098);
				tv0->ClearReplies();
				tv0->AddReply(10099, -1, 11129);
				tv0->AddReply(10100, -1, 11130);
				return;
			}
			if (a0 == 11123) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10093);
				tv0->ClearReplies();
				tv0->AddReply(10094, -1, 11124);
				tv0->AddReply(10095, -1, 11125);
				tv0->AddReply(10096, -1, 11126);
				return;
			}
			if (a0 == 9808) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8942);
				tv0->ClearReplies();
				tv0->AddReply(8943, 9810, 9809);
				return;
			}
			if (a0 == 9810) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8944);
				tv0->ClearReplies();
				tv0->AddReply(8945, -1, 9811);
				tv0->AddReply(8946, 9813, 9812);
				return;
			}
			if (a0 == 9813) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8947);
				tv0->ClearReplies();
				tv0->AddReply(8948, -1, 9814);
				return;
			}
			if (a0 == 9794) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8929);
				tv0->ClearReplies();
				tv0->AddReply(8930, 9796, 9795);
				tv0->AddReply(8938, 9804, 9803);
				return;
			}
			if (a0 == 9804) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8939);
				tv0->ClearReplies();
				tv0->AddReply(8940, 9796, 9805);
				return;
			}
			if (a0 == 9796) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8931);
				tv0->ClearReplies();
				tv0->AddReply(8932, -1, 9797);
				tv0->AddReply(8933, -1, 9798);
				tv0->AddReply(8934, 9800, 9799);
				return;
			}
			if (a0 == 9800) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8935);
				tv0->ClearReplies();
				tv0->AddReply(8936, -1, 9801);
				tv0->AddReply(8937, -1, 9802);
				return;
			}
			if (a0 == 11439) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10374);
				tv0->ClearReplies();
				tv0->AddReply(10375, 11442, 11440);
				tv0->AddReply(10376, -1, 11441);
				return;
			}
			if (a0 == 11442) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10377);
				tv0->ClearReplies();
				tv0->AddReply(10378, 11446, 11443);
				tv0->AddReply(10379, 11445, 11444);
				return;
			}
			if (a0 == 11445) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10380);
				tv0->ClearReplies();
				tv0->AddReply(10383, -1, 11448);
				return;
			}
			if (a0 == 11446) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10381);
				tv0->ClearReplies();
				tv0->AddReply(10382, -1, 11447);
				return;
			}
			if (a0 == 11265) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10219);
				tv0->ClearReplies();
				tv0->AddReply(10361, 11410, 11423);
				tv0->AddReply(10347, 11410, 11408);
				tv0->AddReply(10348, 11410, 11409);
				return;
			}
			if (a0 == 11410) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10349);
				tv0->ClearReplies();
				tv0->AddReply(10350, 11413, 11412);
				tv0->AddReply(10362, 11426, 11425);
				return;
			}
			if (a0 == 11426) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10363);
				tv0->ClearReplies();
				tv0->AddReply(10364, 11428, 11427);
				return;
			}
			if (a0 == 11428) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10365);
				tv0->ClearReplies();
				tv0->AddReply(10366, 11415, 11429);
				return;
			}
			if (a0 == 11413) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10351);
				tv0->ClearReplies();
				tv0->AddReply(10352, 11415, 11414);
				return;
			}
			if (a0 == 11415) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10353);
				tv0->ClearReplies();
				tv0->AddReply(10354, 11417, 11416);
				return;
			}
			if (a0 == 11417) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10355);
				tv0->ClearReplies();
				tv0->AddReply(10356, 11419, 11418);
				return;
			}
			if (a0 == 11419) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10357);
				tv0->ClearReplies();
				tv0->AddReply(10358, 11421, 11420);
				tv0->AddReply(10367, 11432, 11431);
				return;
			}
			if (a0 == 11432) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10368);
				tv0->ClearReplies();
				tv0->AddReply(10369, 11434, 11433);
				return;
			}
			if (a0 == 11421) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10359);
				tv0->ClearReplies();
				tv0->AddReply(10360, 11434, 11422);
				return;
			}
			if (a0 == 11434) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(10370);
				tv0->ClearReplies();
				tv0->AddReply(10371, -1, 11436);
				tv0->AddReply(10372, -1, 11437);
				return;
			}
			if (a0 == 9880) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(9009);
				tv0->ClearReplies();
				tv0->AddReply(9014, 9887, 9886);
				return;
			}
			if (a0 == 9887) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(9015);
				tv0->ClearReplies();
				tv0->AddReply(9016, 9890, 9888);
				tv0->AddReply(9017, 9890, 9889);
				tv0->AddReply(9022, 9890, 9894);
				return;
			}
			if (a0 == 9890) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(9018);
				tv0->ClearReplies();
				tv0->AddReply(9019, -1, 9891);
				return;
			}
			if (a0 == 9877) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(9006);
				tv0->ClearReplies();
				if (f_2314_a1_b(tv1) || f_2320_a1_b(tv1)) {
					tv0->AddReply(9007, -1, 9878);
				}
				return;
			}
			if (a0 == 9847) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8978);
				tv0->ClearReplies();
				tv0->AddReply(8979, 9852, 9848);
				tv0->AddReply(8980, 9850, 9849);
				return;
			}
			if (a0 == 9850) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8981);
				tv0->ClearReplies();
				tv0->AddReply(8982, -1, 9851);
				return;
			}
			if (a0 == 9852) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8983);
				tv0->ClearReplies();
				tv0->AddReply(8984, 9854, 9853);
				tv0->AddReply(8987, 9857, 9856);
				return;
			}
			if (a0 == 9857) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8988);
				tv0->ClearReplies();
				tv0->AddReply(8989, 9860, 9858);
				return;
			}
			if (a0 == 9860) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8991);
				tv0->ClearReplies();
				tv0->AddReply(8992, 9863, 9861);
				tv0->AddReply(8993, 9865, 9862);
				return;
			}
			if (a0 == 9865) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8996);
				tv0->ClearReplies();
				tv0->AddReply(8997, 9859, 9866);
				return;
			}
			if (a0 == 9863) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8994);
				tv0->ClearReplies();
				tv0->AddReply(8995, 9859, 9864);
				return;
			}
			if (a0 == 9854) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8985);
				tv0->ClearReplies();
				tv0->AddReply(8986, 9859, 9855);
				return;
			}
			if (a0 == 9859) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8990);
				tv0->ClearReplies();
				tv0->AddReply(8998, 9870, 9869);
				return;
			}
			if (a0 == 9870) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(8999);
				tv0->ClearReplies();
				tv0->AddReply(9000, 9873, 9871);
				tv0->AddReply(9011, 9883, 9882);
				tv0->AddReply(11150, -1, 12339);
				return;
			}
			if (a0 == 9883) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(9012);
				tv0->ClearReplies();
				tv0->AddReply(9013, 9873, 9884);
				return;
			}
			if (a0 == 9873) {
				f_f06_a1_v("Neutral");
				tv0->SetMessage(9002);
				tv0->ClearReplies();
				tv0->AddReply(9003, -1, 9874);
				tv0->AddReply(9004, -1, 9875);
				return;
			}
			tv3 = true;
			if (f_1f0d_a0_b()) {
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
		if (!f_1e75_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f09_a0_i());
		L0->SetPhoto(f_1f0b_a0_s());
		L0->SetPlayerName(f_2575_a0_i());
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
		f_1ead_a1_v(a0);
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
			if (f_2380_a1_b(tv1) && f_238c_a1_b(tv1)) {
				f_220a_a2_v(tv1, tv0);
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10811);
				tv0->ClearReplies();
				tv0->AddReply(10812, 11147, 11952);
				break;
			}
			f_15c0_a1_v("Neutral");
			tv0->SetMessage(10836);
			tv0->ClearReplies();
			if (f_2398_a1_b(tv1) && f_23a4_a1_b(tv1)) {
				tv0->AddReply(10839, 11148, 11983);
			}
			if (f_2286_a1_b(tv1)) {
				tv0->AddReply(10838, 10519, 11982);
			}
			if (f_23b0_a1_b(tv1)) {
				tv0->AddReply(11508, 12709, 12708);
			}
			if (f_23ce_a1_b(tv1) && f_23ea_a1_b(tv1)) {
				tv0->AddReply(10837, 10553, 11981);
			}
			tv0->AddReply(11480, -1, 12686);
			break;
			return;
		}
		if (f_1f0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1eb1_a1_v(tv2);
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

	void f_15c0_a1_v(string a0)
	{
		if (!f_1f0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1eb1_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ec3_a0_v();
			if (a1 == 12081) {
				f_200f_a2_v(tv1, tv0);
				f_203b_a2_v(tv1, tv0);
				f_2041_a2_v(tv1, tv0);
			}
			if (a1 == 12082) {
				f_200f_a2_v(tv1, tv0);
				f_203b_a2_v(tv1, tv0);
				f_2041_a2_v(tv1, tv0);
			}
			if (a1 == 12079) {
				f_200f_a2_v(tv1, tv0);
				f_203b_a2_v(tv1, tv0);
				f_2041_a2_v(tv1, tv0);
			}
			if (a1 == 11191) {
				f_200f_a2_v(tv1, tv0);
				f_203b_a2_v(tv1, tv0);
				f_2041_a2_v(tv1, tv0);
			}
			if (a1 == 12096) {
				f_2051_a2_v(tv1, tv0);
				f_2057_a2_v(tv1, tv0);
			}
			if (a1 == 12097) {
				f_2051_a2_v(tv1, tv0);
				f_218a_a2_v(tv1, tv0);
			}
			if (a1 == 12105) {
				f_208a_a2_v(tv1, tv0);
				f_2090_a2_v(tv1, tv0);
			}
			if (a1 == 10563) {
				f_208a_a2_v(tv1, tv0);
				f_2090_a2_v(tv1, tv0);
			}
			if (a1 == 12103) {
				f_208a_a2_v(tv1, tv0);
				f_2090_a2_v(tv1, tv0);
			}
			if (a1 == 10572) {
				f_208a_a2_v(tv1, tv0);
				f_2090_a2_v(tv1, tv0);
			}
			if (a1 == 10573) {
				f_208a_a2_v(tv1, tv0);
				f_2090_a2_v(tv1, tv0);
			}
			if (a0 == 11951) {
				if (f_2380_a1_b(tv1) && f_238c_a1_b(tv1)) {
					f_220a_a2_v(tv1, tv0);
					f_15c0_a1_v("Neutral");
					tv0->SetMessage(10811);
					tv0->ClearReplies();
					tv0->AddReply(10812, 11147, 11952);
					return;
				}
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10836);
				tv0->ClearReplies();
				if (f_2398_a1_b(tv1) && f_23a4_a1_b(tv1)) {
					tv0->AddReply(10839, 11148, 11983);
				}
				if (f_2286_a1_b(tv1)) {
					tv0->AddReply(10838, 10519, 11982);
				}
				if (f_23b0_a1_b(tv1)) {
					tv0->AddReply(11508, 12709, 12708);
				}
				if (f_23ce_a1_b(tv1) && f_23ea_a1_b(tv1)) {
					tv0->AddReply(10837, 10553, 11981);
				}
				tv0->AddReply(11480, -1, 12686);
				return;
			}
			if (a0 == 10553) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9594);
				tv0->ClearReplies();
				tv0->AddReply(9595, 10555, 10554);
				tv0->AddReply(9612, 10555, 10574);
				tv0->AddReply(9613, 10555, 10576);
				return;
			}
			if (a0 == 10555) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9596);
				tv0->ClearReplies();
				tv0->AddReply(9597, 10557, 10556);
				tv0->AddReply(9608, 10571, 10570);
				return;
			}
			if (a0 == 10571) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9609);
				tv0->ClearReplies();
				tv0->AddReply(9610, -1, 10572);
				tv0->AddReply(9611, -1, 10573);
				return;
			}
			if (a0 == 10557) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9598);
				tv0->ClearReplies();
				tv0->AddReply(9599, 10559, 10558);
				tv0->AddReply(9607, 10559, 10568);
				return;
			}
			if (a0 == 10559) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9600);
				tv0->ClearReplies();
				tv0->AddReply(9601, 10561, 10560);
				tv0->AddReply(9605, 10561, 10564);
				tv0->AddReply(9606, 10561, 10566);
				return;
			}
			if (a0 == 10561) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9602);
				tv0->ClearReplies();
				tv0->AddReply(9603, 12104, 10562);
				tv0->AddReply(9604, -1, 10563);
				tv0->AddReply(10944, -1, 12103);
				return;
			}
			if (a0 == 12104) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10945);
				tv0->ClearReplies();
				tv0->AddReply(10946, -1, 12105);
				return;
			}
			if (a0 == 12709) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(11509);
				tv0->ClearReplies();
				tv0->AddReply(11510, 12711, 12710);
				tv0->AddReply(11512, 12713, 12712);
				return;
			}
			if (a0 == 12713) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(11513);
				tv0->ClearReplies();
				tv0->AddReply(11514, 12715, 12714);
				return;
			}
			if (a0 == 12715) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(11515);
				tv0->ClearReplies();
				tv0->AddReply(11516, -1, 12716);
				return;
			}
			if (a0 == 12711) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(11511);
				tv0->ClearReplies();
				tv0->AddReply(11517, 12718, 12717);
				return;
			}
			if (a0 == 12718) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(11518);
				tv0->ClearReplies();
				tv0->AddReply(11519, -1, 12719);
				return;
			}
			if (a0 == 10519) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9567);
				tv0->ClearReplies();
				tv0->AddReply(9568, 10521, 10520);
				tv0->AddReply(9589, 10521, 10545);
				tv0->AddReply(9590, 10548, 10547);
				return;
			}
			if (a0 == 10548) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9591);
				tv0->ClearReplies();
				tv0->AddReply(9592, 10521, 10549);
				tv0->AddReply(9593, 10521, 10551);
				return;
			}
			if (a0 == 10521) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9569);
				tv0->ClearReplies();
				tv0->AddReply(9572, 10525, 10524);
				tv0->AddReply(9570, -1, 10522);
				tv0->AddReply(9571, -1, 10523);
				return;
			}
			if (a0 == 10525) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9573);
				tv0->ClearReplies();
				tv0->AddReply(9574, 10527, 10526);
				tv0->AddReply(9585, 10540, 10539);
				return;
			}
			if (a0 == 10540) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9586);
				tv0->ClearReplies();
				tv0->AddReply(9587, 10527, 10541);
				tv0->AddReply(9588, 10527, 10543);
				return;
			}
			if (a0 == 10527) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9575);
				tv0->ClearReplies();
				tv0->AddReply(9577, 10530, 10529);
				return;
			}
			if (a0 == 10530) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9578);
				tv0->ClearReplies();
				tv0->AddReply(9579, 10532, 10531);
				tv0->AddReply(9583, 10532, 10535);
				tv0->AddReply(9584, 10532, 10537);
				return;
			}
			if (a0 == 10532) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(9580);
				tv0->ClearReplies();
				tv0->AddReply(9581, -1, 10533);
				tv0->AddReply(9582, -1, 10534);
				return;
			}
			if (a0 == 11148) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10112);
				tv0->ClearReplies();
				tv0->AddReply(10115, 11154, 11151);
				return;
			}
			if (a0 == 11154) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10118);
				tv0->ClearReplies();
				tv0->AddReply(10119, 11156, 11155);
				tv0->AddReply(10933, 12088, 12087);
				tv0->AddReply(10124, 11161, 11160);
				return;
			}
			if (a0 == 11161) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10125);
				tv0->ClearReplies();
				tv0->AddReply(10126, 11984, 11162);
				tv0->AddReply(10127, 11984, 11163);
				return;
			}
			if (a0 == 12088) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10934);
				tv0->ClearReplies();
				tv0->AddReply(10935, 12090, 12089);
				return;
			}
			if (a0 == 12090) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10936);
				tv0->ClearReplies();
				tv0->AddReply(10939, 11156, 12093);
				tv0->AddReply(10937, 12092, 12091);
				return;
			}
			if (a0 == 12092) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10938);
				tv0->ClearReplies();
				tv0->AddReply(10943, 11156, 12101);
				return;
			}
			if (a0 == 11156) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10120);
				tv0->ClearReplies();
				tv0->AddReply(10121, 11984, 11157);
				tv0->AddReply(10123, 12094, 11159);
				return;
			}
			if (a0 == 12094) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10940);
				tv0->ClearReplies();
				tv0->AddReply(10122, 11984, 11158);
				return;
			}
			if (a0 == 11984) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10840);
				tv0->ClearReplies();
				tv0->AddReply(10941, -1, 12096);
				tv0->AddReply(10942, -1, 12097);
				return;
			}
			if (a0 == 11147) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10111);
				tv0->ClearReplies();
				tv0->AddReply(10138, 11181, 11180);
				tv0->AddReply(10140, 11183, 11182);
				return;
			}
			if (a0 == 11183) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10141);
				tv0->ClearReplies();
				tv0->AddReply(10142, 11186, 11184);
				tv0->AddReply(10143, 12070, 11185);
				return;
			}
			if (a0 == 12070) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10921);
				tv0->ClearReplies();
				tv0->AddReply(10922, 11181, 12071);
				tv0->AddReply(10923, 12073, 12072);
				return;
			}
			if (a0 == 12073) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10924);
				tv0->ClearReplies();
				tv0->AddReply(10925, 11181, 12074);
				return;
			}
			if (a0 == 11186) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10144);
				tv0->ClearReplies();
				tv0->AddReply(10919, 11175, 12068);
				tv0->AddReply(10920, -1, 12069);
				return;
			}
			if (a0 == 11181) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10139);
				tv0->ClearReplies();
				tv0->AddReply(10145, 11188, 11187);
				tv0->AddReply(10134, 11175, 11174);
				return;
			}
			if (a0 == 11175) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10135);
				tv0->ClearReplies();
				tv0->AddReply(10136, 12083, 11176);
				tv0->AddReply(10137, 12083, 11178);
				return;
			}
			if (a0 == 12083) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10931);
				tv0->ClearReplies();
				tv0->AddReply(10932, 11188, 12085);
				return;
			}
			if (a0 == 11188) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10146);
				tv0->ClearReplies();
				tv0->AddReply(10147, 11190, 11189);
				tv0->AddReply(10149, -1, 11191);
				return;
			}
			if (a0 == 11190) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10148);
				tv0->ClearReplies();
				tv0->AddReply(10926, 12080, 12078);
				tv0->AddReply(10927, -1, 12079);
				return;
			}
			if (a0 == 12080) {
				f_15c0_a1_v("Neutral");
				tv0->SetMessage(10928);
				tv0->ClearReplies();
				tv0->AddReply(10929, -1, 12081);
				tv0->AddReply(10930, -1, 12082);
				return;
			}
			tv3 = true;
			if (f_1f0d_a0_b()) {
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
		if (!f_1e75_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f09_a0_i());
		L0->SetPhoto(f_1f0b_a0_s());
		L0->SetPlayerName(f_2575_a0_i());
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
		f_1ead_a1_v(a0);
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
			f_1afb_a1_v("Neutral");
			tv0->SetMessage(11558);
			tv0->ClearReplies();
			if (f_23f6_a1_b(tv1)) {
				tv0->AddReply(11559, 12754, 12753);
			}
			if (f_2402_a1_b(tv1)) {
				tv0->AddReply(11570, 12765, 12764);
			}
			tv0->AddReply(11589, -1, 12784);
			break;
			return;
		}
		if (f_1f0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1eb1_a1_v(tv2);
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

	void f_1afb_a1_v(string a0)
	{
		if (!f_1f0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1eb1_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ec3_a0_v();
			if (a1 == 12763) {
				f_2118_a2_v(tv1, tv0);
				f_1fcf_a2_v(tv1, tv0);
			}
			if (a1 == 12778) {
				f_212f_a2_v(tv1, tv0);
			}
			if (a0 == 12752) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11558);
				tv0->ClearReplies();
				if (f_23f6_a1_b(tv1)) {
					tv0->AddReply(11559, 12754, 12753);
				}
				if (f_2402_a1_b(tv1)) {
					tv0->AddReply(11570, 12765, 12764);
				}
				tv0->AddReply(11589, -1, 12784);
				return;
			}
			if (a0 == 12765) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11571);
				tv0->ClearReplies();
				tv0->AddReply(11572, 12767, 12766);
				if (f_224a_a1_b(tv1)) {
					tv0->AddReply(11585, -1, 12779);
				}
				return;
			}
			if (a0 == 12767) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11573);
				tv0->ClearReplies();
				tv0->AddReply(11574, 12769, 12768);
				return;
			}
			if (a0 == 12769) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11575);
				tv0->ClearReplies();
				tv0->AddReply(11576, 12771, 12770);
				return;
			}
			if (a0 == 12771) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11577);
				tv0->ClearReplies();
				tv0->AddReply(11578, 12773, 12772);
				tv0->AddReply(11586, 12781, 12780);
				return;
			}
			if (a0 == 12781) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11587);
				tv0->ClearReplies();
				tv0->AddReply(11588, 12773, 12782);
				return;
			}
			if (a0 == 12773) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11579);
				tv0->ClearReplies();
				tv0->AddReply(11580, 12775, 12774);
				return;
			}
			if (a0 == 12775) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11581);
				tv0->ClearReplies();
				tv0->AddReply(11582, 12777, 12776);
				return;
			}
			if (a0 == 12777) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11583);
				tv0->ClearReplies();
				tv0->AddReply(11584, -1, 12778);
				return;
			}
			if (a0 == 12754) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11560);
				tv0->ClearReplies();
				tv0->AddReply(11561, 12756, 12755);
				return;
			}
			if (a0 == 12756) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11562);
				tv0->ClearReplies();
				tv0->AddReply(11563, 12758, 12757);
				return;
			}
			if (a0 == 12758) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11564);
				tv0->ClearReplies();
				tv0->AddReply(11565, 12760, 12759);
				return;
			}
			if (a0 == 12760) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11566);
				tv0->ClearReplies();
				tv0->AddReply(11567, 12762, 12761);
				return;
			}
			if (a0 == 12762) {
				f_1afb_a1_v("Neutral");
				tv0->SetMessage(11568);
				tv0->ClearReplies();
				tv0->AddReply(11569, -1, 12763);
				return;
			}
			tv3 = true;
			if (f_1f0d_a0_b()) {
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
		if (!f_1e75_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f09_a0_i());
		L0->SetPhoto(f_1f0b_a0_s());
		L0->SetPlayerName(f_2575_a0_i());
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
		f_1ead_a1_v(a0);
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
			f_1d09_a1_v("Neutral");
			tv0->SetMessage(13660);
			tv0->ClearReplies();
			if (f_247a_a1_b(tv1) && f_2462_a1_b(tv1)) {
				tv0->AddReply(13661, 14920, 14919);
			}
			if (!f_2462_a1_b(tv1) && f_2486_a1_b(tv1) && f_246e_a1_b(tv1)) {
				tv0->AddReply(13669, 14928, 14927);
			}
			if (f_246e_a1_b(tv1) && f_2492_a1_b(tv1)) {
				tv0->AddReply(13683, 14944, 14943);
			}
			tv0->AddReply(13674, -1, 14932);
			break;
			return;
		}
		if (f_1f0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1eb1_a1_v(tv2);
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

	void f_1d09_a1_v(string a0)
	{
		if (!f_1f0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1eb1_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ec3_a0_v();
			if (a1 == 14919) {
				f_214d_a2_v(tv1, tv0);
			}
			if (a1 == 14927) {
				f_2153_a2_v(tv1, tv0);
			}
			if (a1 == 14931) {
				f_2147_a2_v(tv1, tv0);
			}
			if (a1 == 14943) {
				f_2159_a2_v(tv1, tv0);
			}
			if (a0 == 14918) {
				f_1d09_a1_v("Neutral");
				tv0->SetMessage(13660);
				tv0->ClearReplies();
				if (f_247a_a1_b(tv1) && f_2462_a1_b(tv1)) {
					tv0->AddReply(13661, 14920, 14919);
				}
				if (!f_2462_a1_b(tv1) && f_2486_a1_b(tv1) && f_246e_a1_b(tv1)) {
					tv0->AddReply(13669, 14928, 14927);
				}
				if (f_246e_a1_b(tv1) && f_2492_a1_b(tv1)) {
					tv0->AddReply(13683, 14944, 14943);
				}
				tv0->AddReply(13674, -1, 14932);
				return;
			}
			if (a0 == 14944) {
				f_1d09_a1_v("Neutral");
				tv0->SetMessage(13684);
				tv0->ClearReplies();
				tv0->AddReply(13685, 14946, 14945);
				return;
			}
			if (a0 == 14946) {
				f_1d09_a1_v("Neutral");
				tv0->SetMessage(13686);
				tv0->ClearReplies();
				tv0->AddReply(13687, -1, 14947);
				return;
			}
			if (a0 == 14928) {
				f_1d09_a1_v("Neutral");
				tv0->SetMessage(13670);
				tv0->ClearReplies();
				tv0->AddReply(13671, 14930, 14929);
				tv0->AddReply(13675, 14930, 14933);
				return;
			}
			if (a0 == 14930) {
				f_1d09_a1_v("Neutral");
				tv0->SetMessage(13672);
				tv0->ClearReplies();
				tv0->AddReply(13673, -1, 14931);
				return;
			}
			if (a0 == 14920) {
				f_1d09_a1_v("Neutral");
				tv0->SetMessage(13662);
				tv0->ClearReplies();
				tv0->AddReply(13663, 14922, 14921);
				tv0->AddReply(13677, 14937, 14936);
				return;
			}
			if (a0 == 14937) {
				f_1d09_a1_v("Neutral");
				tv0->SetMessage(13678);
				tv0->ClearReplies();
				tv0->AddReply(13679, 14924, 14938);
				tv0->AddReply(13680, -1, 14940);
				return;
			}
			if (a0 == 14922) {
				f_1d09_a1_v("Neutral");
				tv0->SetMessage(13664);
				tv0->ClearReplies();
				tv0->AddReply(13665, 14924, 14923);
				return;
			}
			if (a0 == 14924) {
				f_1d09_a1_v("Neutral");
				tv0->SetMessage(13666);
				tv0->ClearReplies();
				tv0->AddReply(13667, 14926, 14925);
				return;
			}
			if (a0 == 14926) {
				f_1d09_a1_v("Neutral");
				tv0->SetMessage(13668);
				tv0->ClearReplies();
				tv0->AddReply(13676, 14941, 14935);
				return;
			}
			if (a0 == 14941) {
				f_1d09_a1_v("Neutral");
				tv0->SetMessage(13681);
				tv0->ClearReplies();
				tv0->AddReply(13682, -1, 14942);
				return;
			}
			tv3 = true;
			if (f_1f0d_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_1e64_a1_b(object a0)
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

bool f_1e70_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1e75_a1_b(object a0)
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
	L5 = L3 * 70 + f_1eca_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1ead_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1eb1_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_1ec3_a0_v(void)
{
	if (f_1f0d_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_1eca_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1ed4_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_1ed9_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_1ee0_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1eec_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1ef1_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1efa_a1_b(int a0)
{
	return f_1ef1_a0_i() == a0;
}

bool f_1f00_a0_b(void)
{
	bool L0;
	f_1eb1_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_1f09_a0_i(void)
{
	return 2857;
}

string f_1f0b_a0_s(void)
{
	return "ui/NPC_BigVlad.png";
}

bool f_1f0d_a0_b(void)
{
	return true;
}

void f_1f0f_a2_v(object a0, object a1)
{
	f_2554_a3_v(f_2543_a0_o(), "pt_map_georg", 2);
	a1->ShowMap(f_2543_a0_o());
}

void f_1f1f_a2_v(object a0, object a1)
{
	@SetVariable("ood2BigVlad1", 1);
}

void f_1f25_a2_v(object a0, object a1)
{
	@SetVariable("ood2BigVlad2", 1);
}

void f_1f2b_a2_v(object a0, object a1)
{
	@SetVariable("ood2BigVlad3", 1);
}

void f_1f31_a2_v(object a0, object a1)
{
	@SetVariable("ood2BigVlad4", 1);
}

void f_1f37_a2_v(object a0, object a1)
{
	@SetVariable("d2q01BigVladVisit", 1);
}

void f_1f3d_a2_v(object a0, object a1)
{
	@SetVariable("ood1BigVlad4", 1);
}

void f_1f43_a2_v(object a0, object a1)
{
	@SetVariable("ood1BigVlad5", 1);
}

void f_1f49_a2_v(object a0, object a1)
{
	@SetVariable("ood1BigVlad6", 1);
}

void f_1f4f_a2_v(object a0, object a1)
{
	@SetVariable("ood1BigVlad7", 1);
}

void f_1f55_a2_v(object a0, object a1)
{
	@SetVariable("ood1BigVlad8", 1);
}

void f_1f5b_a2_v(object a0, object a1)
{
	@SetVariable("ood1BigVlad9", 1);
}

void f_1f61_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2543_a0_o();
	L0->AddMark("d1BigVladAboutKapella", "pt_map_kapella", 3, 8638, f_1eec_a0_f());
	L0->AddMark("d1BigVladAboutMladVlad", "pt_map_mladvlad", 3, 8689, f_1eec_a0_f());
}

void f_1f7a_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_1f80_a2_v(object a0, object a1)
{
	@SetVariable("ood3BigVlad1", 1);
}

void f_1f86_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q01", 4);
	L0 = f_2543_a0_o();
	L0->AddMark("d3q01BigVladGotoGeorg", "pt_map_georg", 1, 11153, f_1eec_a0_f());
	L0->AddMark("d3q01BigVladGotoGeorgSelf", "pt_map_bigvlad", 1, 15297, f_1eec_a0_f());
	f_2586_a0_v();
}

void f_1fa6_a2_v(object a0, object a1)
{
	@SetVariable("ood3BigVlad2", 1);
}

void f_1fac_a2_v(object a0, object a1)
{
	@SetVariable("ood3BigVlad3", 1);
}

void f_1fb2_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q01", 6);
	L0 = f_2543_a0_o();
	L0->AddMark("d3q01BigVladAgreedSelf", "pt_map_bigvlad", 1, 11155, f_1eec_a0_f());
	L0->AddMark("d3q01BigVladAgreed", "pt_map_ospina", 1, 15300, f_1eec_a0_f());
}

void f_1fcf_a2_v(object a0, object a1)
{
	f_2554_a3_v(f_2543_a0_o(), "pt_map_alexandr", 2);
	a1->ShowMap(f_2543_a0_o());
}

void f_1fdf_a2_v(object a0, object a1)
{
	@SetVariable("ood3BigVlad4", 1);
}

void f_1fe5_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q02", 3);
	L0 = f_2543_a0_o();
	L0->AddMark("d3q02BigVladGotoHan", "pt_map_han", 0, 11385, f_1eec_a0_f());
}

void f_1ff9_a2_v(object a0, object a1)
{
	f_2554_a3_v(f_2543_a0_o(), "pt_map_han", 2);
	a1->ShowMap(f_2543_a0_o());
}

void f_2009_a2_v(object a0, object a1)
{
	@SetVariable("ood3BigVlad5", 1);
}

void f_200f_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01", 1);
	L0 = f_2543_a0_o();
	L0->AddMark("d4q01BigVladGotoLara", "pt_map_lara", 1, 11481, f_1eec_a0_f());
	L0->AddMark("d4q01BigVladGotoSklad", "pt_map_warehouse_gangster", 1, 11482, f_1eec_a0_f());
	L0->AddMark("d4q01BigVladGotoLaraSelf", "pt_map_bigvlad", 1, 15320, f_1eec_a0_f());
	f_2596_a0_v();
	f_25a6_a0_v();
}

void f_203b_a2_v(object a0, object a1)
{
	@SetVariable("ood4BigVlad1", 1);
}

void f_2041_a2_v(object a0, object a1)
{
	f_2554_a3_v(f_2543_a0_o(), "pt_map_lara", 2);
	a1->ShowMap(f_2543_a0_o());
}

void f_2051_a2_v(object a0, object a1)
{
	@SetVariable("ood4BigVlad2", 1);
}

void f_2057_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01", 4);
	L0 = f_2543_a0_o();
	L0->AddMark("d4q01BigVladGotoSobor", "pt_map_sobor", 1, 15325, f_1eec_a0_f());
	L0->AddMark("d4q01BigVladGotoSoborAndTheaterSelf", "pt_map_bigvlad", 1, 15327, f_1eec_a0_f());
	L0->AddMark("d4q01BigVladGotoTheater", "pt_map_theater", 1, 15326, f_1eec_a0_f());
	f_25b6_a0_v();
	f_1ee0_a2_b("quest_d4_01", "pers");
	f_1ee0_a2_b("quest_d4_01", "key_actors");
}

void f_208a_a2_v(object a0, object a1)
{
	@SetVariable("ood4BigVlad3", 1);
}

void f_2090_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2543_a0_o();
	L0->FindMark(L1, "d4q01BigVladGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoLaraSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSklad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSobor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSoborAndTheaterSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoTheater");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoMladVladSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoOspinaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoBigVladSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01OspinaGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01WastedMale");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01Whitemask");
	if (L1) {
		L1->Remove();
	}
	f_25c6_a0_v();
	f_1ee0_a2_b("quest_d4_01", "completed");
	a0->RemoveItemByType(L2, "d4q01_sobor_key", 1);
	a0->RemoveItemByType(L2, "d4q01_theater_key", 1);
}

void f_2118_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q01", 2);
	L0 = f_2543_a0_o();
	L0->AddMark("d5q01BigVladGotoAlexandr", "pt_map_alexandr", 1, 11957, f_1eec_a0_f());
	f_25e6_a0_v();
}

void f_212f_a2_v(object a0, object a1)
{
	@SetVariable("ood5BigVlad1", 1);
}

void f_2135_a2_v(object a0, object a1)
{
	@SetVariable("ood6BigVlad1", 1);
}

void f_213b_a2_v(object a0, object a1)
{
	@SetVariable("ood6BigVlad2", 1);
}

void f_2141_a2_v(object a0, object a1)
{
	@SetVariable("KnowBigVlad", 1);
}

void f_2147_a2_v(object a0, object a1)
{
	@SetVariable("d8q01BigVladIsVictim", 1);
}

void f_214d_a2_v(object a0, object a1)
{
	@SetVariable("ood8BigVlad1", 1);
}

void f_2153_a2_v(object a0, object a1)
{
	@SetVariable("ood8BigVlad2", 1);
}

void f_2159_a2_v(object a0, object a1)
{
	@SetVariable("ood8BigVlad3", 1);
}

void f_215f_a2_v(object a0, object a1)
{
	@SetVariable("ood6BigVlad3", 1);
}

void f_2165_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2543_a0_o();
	L0->AddMark("d6q01BigVladGotoAnna", "pt_map_anna", 1, 15390, f_1eec_a0_f());
	L0->AddMark("d6q01BigVladGotoOspina", "pt_map_ospina", 1, 15389, f_1eec_a0_f());
	L0->AddMark("d6q01BigVladGotoAnnaOspinaSelf", "pt_map_bigvlad", 1, 15391, f_1eec_a0_f());
	f_25f6_a0_v();
}

void f_218a_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2543_a0_o();
	L0->FindMark(L1, "d4q01BigVladGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoLaraSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSklad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSobor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSoborAndTheaterSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoTheater");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoMladVladSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoOspinaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoBigVladSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01OspinaGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01WastedMale");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01Whitemask");
	if (L1) {
		L1->Remove();
	}
	f_25d6_a0_v();
	f_1ee0_a2_b("quest_d4_01", "failed");
}

void f_220a_a2_v(object a0, object a1)
{
	@SetVariable("d4BigVladVisit", 1);
}

void f_2210_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2543_a0_o();
	L0->AddMark("d6q02BigVlad", "pt_map_bigvlad", 0, 15380, f_1eec_a0_f());
}

void f_2220_a2_v(object a0, object a1)
{
	@SetVariable("d6BigVladVisit", 1);
}

void f_2226_a2_v(object a0, object a1)
{
	@SetVariable("KnowTermitnik", 1);
}

void f_222c_a2_v(object a0, object a1)
{
	@SetVariable("ood1BigVlad1", 1);
}

void f_2232_a2_v(object a0, object a1)
{
	@SetVariable("ood1BigVlad2", 1);
}

void f_2238_a2_v(object a0, object a1)
{
	@SetVariable("ood1BigVlad3", 1);
}

bool f_223e_a1_b(object a0)
{
	if (f_1ed4_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_224a_a1_b(object a0)
{
	if (f_1ed4_a1_i("KnowMat") == 1) {
		return true;
	}
	return false;
}

bool f_2256_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood2BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2262_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood2BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_226e_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood2BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_227a_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood2BigVlad4") == 0) {
		return true;
	}
	return false;
}

bool f_2286_a1_b(object a0)
{
	if (f_2516_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2290_a1_b(object a0)
{
	if (f_1ed4_a1_i("d2q01") == 0) {
		return true;
	}
	return false;
}

bool f_229c_a1_b(object a0)
{
	if (f_1ed4_a1_i("d2q01") == 6) {
		return true;
	}
	return false;
}

bool f_22a8_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood1BigVlad4") == 0) {
		return true;
	}
	return false;
}

bool f_22b4_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood1BigVlad5") == 0) {
		return true;
	}
	return false;
}

bool f_22c0_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood1BigVlad6") == 0) {
		return true;
	}
	return false;
}

bool f_22cc_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood1BigVlad7") == 0) {
		return true;
	}
	return false;
}

bool f_22d8_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood1BigVlad8") == 0) {
		return true;
	}
	return false;
}

bool f_22e4_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood1BigVlad9") == 0) {
		return true;
	}
	return false;
}

bool f_22f0_a1_b(object a0)
{
	if (f_1ed4_a1_i("KnowBurahDead") == 1) {
		return true;
	}
	return false;
}

bool f_22fc_a1_b(object a0)
{
	if (f_1ed4_a1_i("d3q01") == 3) {
		return true;
	}
	return false;
}

bool f_2308_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood3BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2314_a1_b(object a0)
{
	if (f_1ed4_a1_i("d3q01") == 4) {
		return true;
	}
	return false;
}

bool f_2320_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood3BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_232c_a1_b(object a0)
{
	if (f_1ed4_a1_i("KnowRubin") == 1) {
		return true;
	}
	return false;
}

bool f_2338_a1_b(object a0)
{
	if (f_1ed4_a1_i("d3q01") == 5) {
		return true;
	}
	return false;
}

bool f_2344_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood3BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_2350_a1_b(object a0)
{
	if (f_1ed4_a1_i("d3q02") == 2) {
		return true;
	}
	return false;
}

bool f_235c_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood3BigVlad4") == 0) {
		return true;
	}
	return false;
}

bool f_2368_a1_b(object a0)
{
	if (f_1ed4_a1_i("d3q02") == 6) {
		return true;
	}
	return false;
}

bool f_2374_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood3BigVlad5") == 0) {
		return true;
	}
	return false;
}

bool f_2380_a1_b(object a0)
{
	if (f_1ed4_a1_i("d4q01") == 0) {
		return true;
	}
	return false;
}

bool f_238c_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood4BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2398_a1_b(object a0)
{
	if (f_1ed4_a1_i("d4q01") == 3) {
		return true;
	}
	return false;
}

bool f_23a4_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood4BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_23b0_a1_b(object a0)
{
	if (!f_1ed9_a2_b(a0, "d4q01_sobor_key") || !f_1ed9_a2_b(a0, "d4q01_theater_key")) {
		if (f_1ed4_a1_i("d4q01") == 4) {
			return true;
		}
	}
	return false;
}

bool f_23ce_a1_b(object a0)
{
	if (f_1ed9_a2_b(a0, "d4q01_sobor_key") && f_1ed9_a2_b(a0, "d4q01_theater_key")) {
		if (f_1ed4_a1_i("d4q01") == 4) {
			return true;
		}
	}
	return false;
}

bool f_23ea_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood4BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_23f6_a1_b(object a0)
{
	if (f_1ed4_a1_i("d5q01") == 1) {
		return true;
	}
	return false;
}

bool f_2402_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood5BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_240e_a1_b(object a0)
{
	if (f_1ed4_a1_i("d6q02") == 1000) {
		return true;
	}
	return false;
}

bool f_241a_a1_b(object a0)
{
	if (f_1ed4_a1_i("d6q02") == -1) {
		return true;
	}
	return false;
}

bool f_2426_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood6BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2432_a1_b(object a0)
{
	if (f_1ed4_a1_i("d6q02KnowAboutAttack") == 1) {
		return true;
	}
	return false;
}

bool f_243e_a1_b(object a0)
{
	if (f_1ed4_a1_i("d6q02Trigger") != 0) {
		return true;
	}
	return false;
}

bool f_244a_a1_b(object a0)
{
	if (f_1ed4_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_2456_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood6BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2462_a1_b(object a0)
{
	if (f_1ed4_a1_i("d8q01MladVladIsBad") == 1) {
		return true;
	}
	return false;
}

bool f_246e_a1_b(object a0)
{
	if (f_1ed4_a1_i("d8q01BringBadBoy") == 1) {
		return true;
	}
	return false;
}

bool f_247a_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood8BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_2486_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood8BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_2492_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood8BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_249e_a1_b(object a0)
{
	if (f_1ed4_a1_i("KnowAlexandr") == 1) {
		return true;
	}
	return false;
}

bool f_24aa_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood6BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_24b6_a1_b(object a0)
{
	if (f_1ed4_a1_i("KnowAnna") == 1) {
		return true;
	}
	return false;
}

bool f_24c2_a1_b(object a0)
{
	if (f_1ed4_a1_i("KnowGeorg") == 1) {
		return true;
	}
	return false;
}

bool f_24ce_a1_b(object a0)
{
	if (f_1ed4_a1_i("KnowMladVlad") == 1) {
		return true;
	}
	return false;
}

bool f_24da_a1_b(object a0)
{
	if (f_1ed4_a1_i("d6BigVladVisit") == 1) {
		return true;
	}
	return false;
}

bool f_24e6_a1_b(object a0)
{
	if (f_1ed4_a1_i("KnowKapella") == 1) {
		return true;
	}
	return false;
}

bool f_24f2_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood1BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_24fe_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood1BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_250a_a1_b(object a0)
{
	if (f_1ed4_a1_i("ood1BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_2516_a1_b(object a0)
{
	return false;
}

object f_2519_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2526_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2519_a0_o();
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

object f_2543_a0_o(void)
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

void f_2554_a3_v(object a0, string a1, float a2)
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

int f_2575_a0_i(void)
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

void f_2586_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 135, 1, 15298);
	f_2526_a2_b(L0, 25);
}

void f_2596_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 20, 1, 3360);
	f_2526_a2_b(L0, -1);
}

void f_25a6_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 87, 1, 12169);
	f_2526_a2_b(L0, 20);
}

void f_25b6_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 89, 1, 12171);
	f_2526_a2_b(L0, 20);
}

void f_25c6_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 90, 1, 12172);
	f_2526_a2_b(L0, 20);
}

void f_25d6_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 91, 1, 12173);
	f_2526_a2_b(L0, 20);
}

void f_25e6_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 141, 1, 15341);
	f_2526_a2_b(L0, 139);
}

void f_25f6_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 115, 1, 13738);
	f_2526_a2_b(L0, 111);
}

void f_2606_a0_v(void)
{
	g1 = false;
}

void f_260a_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_1efa_a1_b(1)) {
		t6{a0};
		return;
	}
	if (f_1efa_a1_b(2)) {
		t8{a0};
		return;
	}
	if (f_1efa_a1_b(3)) {
		t10{a0};
		return;
	}
	if (f_1efa_a1_b(4)) {
		t12{a0};
		return;
	}
	if (f_1efa_a1_b(5)) {
		t14{a0};
		return;
	}
	if (f_1efa_a1_b(6)) {
		t4{a0};
		return;
	}
	if (f_1efa_a1_b(8)) {
		t16{a0};
		return;
	}
	f_1f00_a0_b();
}

