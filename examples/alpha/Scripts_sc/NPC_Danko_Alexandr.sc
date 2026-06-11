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
		f_21b5_a0_v();
		if (!f_1a8b_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_1acc_a1_v("Neutral");
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
		f_21b9_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_1a7f_a1_b(a0);
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
		if (!f_1a90_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b55_a0_i());
		L0->SetPhoto(f_1b57_a0_s());
		L0->SetPlayerName(f_2104_a0_i());
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
		f_1ac8_a1_v(a0);
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
			f_1d95_a2_v(tv1, tv0);
			f_b4_a1_v("Neutral");
			tv0->SetMessage(287);
			tv0->ClearReplies();
			tv0->AddReply(288, 340, 337);
			tv0->AddReply(289, 340, 338);
			tv0->AddReply(290, 340, 339);
			break;
			return;
		}
		if (f_1b59_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1acc_a1_v(tv2);
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
		if (!f_1b59_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1acc_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ade_a0_v();
			if (a0 == 336) {
				f_1d95_a2_v(tv1, tv0);
				f_b4_a1_v("Neutral");
				tv0->SetMessage(287);
				tv0->ClearReplies();
				tv0->AddReply(288, 340, 337);
				tv0->AddReply(289, 340, 338);
				tv0->AddReply(290, 340, 339);
				return;
			}
			if (a0 == 340) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(291);
				tv0->ClearReplies();
				tv0->AddReply(292, -1, 341);
				tv0->AddReply(293, -1, 342);
				return;
			}
			tv3 = true;
			if (f_1b59_a0_b()) {
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
		if (!f_1a90_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b55_a0_i());
		L0->SetPhoto(f_1b57_a0_s());
		L0->SetPlayerName(f_2104_a0_i());
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
		f_1ac8_a1_v(a0);
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
			if (f_1fc5_a1_b(tv1) && f_1fd1_a1_b(tv1)) {
				f_1d67_a2_v(tv1, tv0);
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12650);
				tv0->ClearReplies();
				tv0->AddReply(10633, 13839, 11732);
				tv0->AddReply(10665, 11772, 11771);
				break;
			}
			f_1e3_a1_v("Neutral");
			tv0->SetMessage(11979);
			tv0->ClearReplies();
			if (f_1fdd_a1_b(tv1) && f_1f89_a1_b(tv1)) {
				tv0->AddReply(12649, 13832, 13829);
			}
			if (f_1fe9_a1_b(tv1) && f_1f89_a1_b(tv1)) {
				tv0->AddReply(12660, 13832, 13840);
			}
			if (f_1ff5_a1_b(tv1) && f_2001_a1_b(tv1)) {
				tv0->AddReply(11980, 13196, 13195);
			}
			tv0->AddReply(13018, -1, 14224);
			break;
			return;
		}
		if (f_1b59_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1acc_a1_v(tv2);
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

	void f_1e3_a1_v(string a0)
	{
		if (!f_1b59_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1acc_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ade_a0_v();
			if (a1 == 13846) {
				f_1d9b_a2_v(tv1, tv0);
			}
			if (a1 == 13851) {
				f_1d9b_a2_v(tv1, tv0);
			}
			if (a1 == 13904) {
				f_1d9b_a2_v(tv1, tv0);
			}
			if (a1 == 13829) {
				f_1d6d_a2_v(tv1, tv0);
			}
			if (a1 == 13840) {
				f_1d73_a2_v(tv1, tv0);
			}
			if (a1 == 13195) {
				f_1d79_a2_v(tv1, tv0);
			}
			if (a1 == 11744) {
				f_1d7f_a2_v(tv1, tv0);
			}
			if (a1 == 11745) {
				f_1d7f_a2_v(tv1, tv0);
			}
			if (a1 == 11756) {
				f_1d7f_a2_v(tv1, tv0);
			}
			if (a1 == 11759) {
				f_1d7f_a2_v(tv1, tv0);
			}
			if (a1 == 11760) {
				f_1d7f_a2_v(tv1, tv0);
			}
			if (a0 == 13830) {
				if (f_1fc5_a1_b(tv1) && f_1fd1_a1_b(tv1)) {
					f_1d67_a2_v(tv1, tv0);
					f_1e3_a1_v("Neutral");
					tv0->SetMessage(12650);
					tv0->ClearReplies();
					tv0->AddReply(10633, 13839, 11732);
					tv0->AddReply(10665, 11772, 11771);
					return;
				}
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(11979);
				tv0->ClearReplies();
				if (f_1fdd_a1_b(tv1) && f_1f89_a1_b(tv1)) {
					tv0->AddReply(12649, 13832, 13829);
				}
				if (f_1fe9_a1_b(tv1) && f_1f89_a1_b(tv1)) {
					tv0->AddReply(12660, 13832, 13840);
				}
				if (f_1ff5_a1_b(tv1) && f_2001_a1_b(tv1)) {
					tv0->AddReply(11980, 13196, 13195);
				}
				tv0->AddReply(13018, -1, 14224);
				return;
			}
			if (a0 == 13196) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(11981);
				tv0->ClearReplies();
				if (f_1e95_a1_b(tv1)) {
					tv0->AddReply(11982, 13198, 13197);
				}
				tv0->AddReply(12658, 11733, 13838);
				return;
			}
			if (a0 == 11733) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(10634);
				tv0->ClearReplies();
				tv0->AddReply(10635, 11735, 11734);
				tv0->AddReply(10660, 11766, 11763);
				tv0->AddReply(10661, 11766, 11765);
				return;
			}
			if (a0 == 11766) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(10662);
				tv0->ClearReplies();
				tv0->AddReply(10663, 11735, 11767);
				tv0->AddReply(10664, 11735, 11769);
				return;
			}
			if (a0 == 11735) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(10636);
				tv0->ClearReplies();
				tv0->AddReply(10637, 11737, 11736);
				tv0->AddReply(10647, 11749, 11748);
				return;
			}
			if (a0 == 11749) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(10648);
				tv0->ClearReplies();
				tv0->AddReply(10649, 11737, 11750);
				tv0->AddReply(10650, 11753, 11752);
				return;
			}
			if (a0 == 11753) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(10651);
				tv0->ClearReplies();
				tv0->AddReply(10652, 11755, 11754);
				tv0->AddReply(10659, 11755, 11761);
				return;
			}
			if (a0 == 11755) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(10653);
				tv0->ClearReplies();
				tv0->AddReply(10654, -1, 11756);
				tv0->AddReply(10655, 11758, 11757);
				return;
			}
			if (a0 == 11758) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(10656);
				tv0->ClearReplies();
				tv0->AddReply(10657, -1, 11759);
				tv0->AddReply(10658, -1, 11760);
				return;
			}
			if (a0 == 11737) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(10638);
				tv0->ClearReplies();
				tv0->AddReply(10642, 11743, 11742);
				tv0->AddReply(10639, 11739, 11738);
				tv0->AddReply(10646, 11739, 11746);
				return;
			}
			if (a0 == 11739) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(10640);
				tv0->ClearReplies();
				tv0->AddReply(10641, 11755, 11740);
				return;
			}
			if (a0 == 11743) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(10643);
				tv0->ClearReplies();
				tv0->AddReply(10644, -1, 11744);
				tv0->AddReply(10645, -1, 11745);
				return;
			}
			if (a0 == 13198) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(11983);
				tv0->ClearReplies();
				tv0->AddReply(11984, 13200, 13199);
				return;
			}
			if (a0 == 13200) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(11985);
				tv0->ClearReplies();
				tv0->AddReply(11986, -1, 13201);
				return;
			}
			if (a0 == 13832) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12652);
				tv0->ClearReplies();
				tv0->AddReply(12653, 13834, 13833);
				return;
			}
			if (a0 == 13834) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12654);
				tv0->ClearReplies();
				tv0->AddReply(12655, -1, 13835);
				return;
			}
			if (a0 == 11772) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(10666);
				tv0->ClearReplies();
				tv0->AddReply(10668, 11776, 11775);
				return;
			}
			if (a0 == 11776) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(10669);
				tv0->ClearReplies();
				tv0->AddReply(10670, 13839, 11777);
				return;
			}
			if (a0 == 13839) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12659);
				tv0->ClearReplies();
				tv0->AddReply(12648, 13831, 13828);
				return;
			}
			if (a0 == 13831) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12651);
				tv0->ClearReplies();
				tv0->AddReply(12656, 13837, 13836);
				tv0->AddReply(12695, 13887, 13886);
				tv0->AddReply(12701, 13897, 13892);
				return;
			}
			if (a0 == 13897) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12706);
				tv0->ClearReplies();
				tv0->AddReply(12707, 13899, 13898);
				return;
			}
			if (a0 == 13899) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12708);
				tv0->ClearReplies();
				tv0->AddReply(12709, 13901, 13900);
				tv0->AddReply(12715, 13901, 13906);
				return;
			}
			if (a0 == 13901) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12710);
				tv0->ClearReplies();
				tv0->AddReply(12711, 13903, 13902);
				tv0->AddReply(12714, -1, 13905);
				return;
			}
			if (a0 == 13903) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12712);
				tv0->ClearReplies();
				tv0->AddReply(12713, -1, 13904);
				return;
			}
			if (a0 == 13887) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12696);
				tv0->ClearReplies();
				tv0->AddReply(12700, -1, 13891);
				return;
			}
			if (a0 == 13837) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12657);
				tv0->ClearReplies();
				tv0->AddReply(12661, 13843, 13842);
				tv0->AddReply(12667, 13843, 13849);
				return;
			}
			if (a0 == 13843) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12662);
				tv0->ClearReplies();
				tv0->AddReply(12663, 13845, 13844);
				return;
			}
			if (a0 == 13845) {
				f_1e3_a1_v("Neutral");
				tv0->SetMessage(12664);
				tv0->ClearReplies();
				tv0->AddReply(12665, -1, 13846);
				tv0->AddReply(12668, -1, 13851);
				return;
			}
			tv3 = true;
			if (f_1b59_a0_b()) {
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
		if (!f_1a90_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b55_a0_i());
		L0->SetPhoto(f_1b57_a0_s());
		L0->SetPlayerName(f_2104_a0_i());
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
		f_1ac8_a1_v(a0);
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
			if (f_1dc9_a1_b(tv1)) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(5205);
				tv0->ClearReplies();
				tv0->AddReply(5206, 5905, 5735);
				tv0->AddReply(5365, 5908, 5907);
				break;
			}
			f_6c4_a1_v("Neutral");
			tv0->SetMessage(6325);
			tv0->ClearReplies();
			if (f_1dd5_a1_b(tv1) && f_1df9_a1_b(tv1)) {
				tv0->AddReply(6329, 5761, 6985);
			}
			if (f_1f1c_a1_b(tv1) && f_1de1_a1_b(tv1) && f_1df9_a1_b(tv1) || f_1f6e_a1_b(tv1) && f_1de1_a1_b(tv1) && f_1df9_a1_b(tv1)) {
				tv0->AddReply(6326, 5738, 6982);
			}
			if (f_1f6e_a1_b(tv1) && f_1ded_a1_b(tv1) && f_1df9_a1_b(tv1) || f_1f1c_a1_b(tv1) && f_1ded_a1_b(tv1) && f_1df9_a1_b(tv1)) {
				tv0->AddReply(6354, 5748, 7010);
			}
			if (f_2061_a1_b(tv1) && f_1e05_a1_b(tv1)) {
				tv0->AddReply(6330, 7035, 6986);
			}
			if (f_2049_a1_b(tv1) && f_1e11_a1_b(tv1)) {
				tv0->AddReply(6337, 7041, 6993);
			}
			if (f_2055_a1_b(tv1) && f_1e1d_a1_b(tv1)) {
				tv0->AddReply(6332, 7047, 6988);
			}
			if (f_2031_a1_b(tv1) && f_1e29_a1_b(tv1) && f_1df9_a1_b(tv1)) {
				tv0->AddReply(6339, 7055, 6995);
			}
			if (f_2025_a1_b(tv1) && f_1e35_a1_b(tv1)) {
				tv0->AddReply(6340, 7065, 6996);
			}
			if (f_203d_a1_b(tv1) && f_1e41_a1_b(tv1)) {
				tv0->AddReply(6344, 7083, 7000);
			}
			if (f_206d_a1_b(tv1) && f_1e4d_a1_b(tv1)) {
				tv0->AddReply(6345, 7090, 7001);
			}
			if (f_1f04_a1_b(tv1) && f_1e59_a1_b(tv1)) {
				tv0->AddReply(6346, 7096, 7002);
			}
			tv0->AddReply(7537, -1, 8319);
			break;
			return;
		}
		if (f_1b59_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1acc_a1_v(tv2);
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

	void f_6c4_a1_v(string a0)
	{
		if (!f_1b59_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1acc_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ade_a0_v();
			if (a1 == 5906) {
				f_1b5b_a2_v(tv1, tv0);
				f_1c1a_a2_v(tv1, tv0);
			}
			if (a1 == 5766) {
				f_1b61_a2_v(tv1, tv0);
			}
			if (a1 == 5767) {
				f_1b61_a2_v(tv1, tv0);
			}
			if (a1 == 5743) {
				f_1b67_a2_v(tv1, tv0);
			}
			if (a1 == 5753) {
				f_1b6d_a2_v(tv1, tv0);
			}
			if (a1 == 5754) {
				f_1b6d_a2_v(tv1, tv0);
			}
			if (a1 == 5757) {
				f_1b6d_a2_v(tv1, tv0);
			}
			if (a1 == 5758) {
				f_1b6d_a2_v(tv1, tv0);
			}
			if (a1 == 7040) {
				f_1b7f_a2_v(tv1, tv0);
			}
			if (a1 == 7046) {
				f_1b85_a2_v(tv1, tv0);
			}
			if (a1 == 7054) {
				f_1b8b_a2_v(tv1, tv0);
			}
			if (a1 == 7064) {
				f_1b91_a2_v(tv1, tv0);
			}
			if (a1 == 7075) {
				f_1b97_a2_v(tv1, tv0);
			}
			if (a1 == 7086) {
				f_1b9d_a2_v(tv1, tv0);
			}
			if (a1 == 7089) {
				f_1b9d_a2_v(tv1, tv0);
			}
			if (a1 == 7095) {
				f_1ba3_a2_v(tv1, tv0);
			}
			if (a1 == 7099) {
				f_1ba9_a2_v(tv1, tv0);
			}
			if (a1 == 7100) {
				f_1ba9_a2_v(tv1, tv0);
			}
			if (a0 == 5734) {
				if (f_1dc9_a1_b(tv1)) {
					f_6c4_a1_v("Neutral");
					tv0->SetMessage(5205);
					tv0->ClearReplies();
					tv0->AddReply(5206, 5905, 5735);
					tv0->AddReply(5365, 5908, 5907);
					return;
				}
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6325);
				tv0->ClearReplies();
				if (f_1dd5_a1_b(tv1) && f_1df9_a1_b(tv1)) {
					tv0->AddReply(6329, 5761, 6985);
				}
				if (f_1f1c_a1_b(tv1) && f_1de1_a1_b(tv1) && f_1df9_a1_b(tv1) || f_1f6e_a1_b(tv1) && f_1de1_a1_b(tv1) && f_1df9_a1_b(tv1)) {
					tv0->AddReply(6326, 5738, 6982);
				}
				if (f_1f6e_a1_b(tv1) && f_1ded_a1_b(tv1) && f_1df9_a1_b(tv1) || f_1f1c_a1_b(tv1) && f_1ded_a1_b(tv1) && f_1df9_a1_b(tv1)) {
					tv0->AddReply(6354, 5748, 7010);
				}
				if (f_2061_a1_b(tv1) && f_1e05_a1_b(tv1)) {
					tv0->AddReply(6330, 7035, 6986);
				}
				if (f_2049_a1_b(tv1) && f_1e11_a1_b(tv1)) {
					tv0->AddReply(6337, 7041, 6993);
				}
				if (f_2055_a1_b(tv1) && f_1e1d_a1_b(tv1)) {
					tv0->AddReply(6332, 7047, 6988);
				}
				if (f_2031_a1_b(tv1) && f_1e29_a1_b(tv1) && f_1df9_a1_b(tv1)) {
					tv0->AddReply(6339, 7055, 6995);
				}
				if (f_2025_a1_b(tv1) && f_1e35_a1_b(tv1)) {
					tv0->AddReply(6340, 7065, 6996);
				}
				if (f_203d_a1_b(tv1) && f_1e41_a1_b(tv1)) {
					tv0->AddReply(6344, 7083, 7000);
				}
				if (f_206d_a1_b(tv1) && f_1e4d_a1_b(tv1)) {
					tv0->AddReply(6345, 7090, 7001);
				}
				if (f_1f04_a1_b(tv1) && f_1e59_a1_b(tv1)) {
					tv0->AddReply(6346, 7096, 7002);
				}
				tv0->AddReply(7537, -1, 8319);
				return;
			}
			if (a0 == 7096) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6433);
				tv0->ClearReplies();
				tv0->AddReply(6434, 7098, 7097);
				return;
			}
			if (a0 == 7098) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6435);
				tv0->ClearReplies();
				tv0->AddReply(6436, -1, 7099);
				tv0->AddReply(6437, -1, 7100);
				return;
			}
			if (a0 == 7090) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6427);
				tv0->ClearReplies();
				tv0->AddReply(6428, 7092, 7091);
				return;
			}
			if (a0 == 7092) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6429);
				tv0->ClearReplies();
				tv0->AddReply(6430, 7094, 7093);
				return;
			}
			if (a0 == 7094) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6431);
				tv0->ClearReplies();
				tv0->AddReply(6432, -1, 7095);
				return;
			}
			if (a0 == 7083) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6420);
				tv0->ClearReplies();
				tv0->AddReply(6421, 7085, 7084);
				return;
			}
			if (a0 == 7085) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6422);
				tv0->ClearReplies();
				tv0->AddReply(6423, -1, 7086);
				tv0->AddReply(6424, 7088, 7087);
				return;
			}
			if (a0 == 7088) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6425);
				tv0->ClearReplies();
				tv0->AddReply(6426, -1, 7089);
				return;
			}
			if (a0 == 7065) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6406);
				tv0->ClearReplies();
				tv0->AddReply(6407, 7068, 7066);
				tv0->AddReply(6408, 7068, 7067);
				return;
			}
			if (a0 == 7068) {
				if (f_2079_a1_b(tv1)) {
					f_6c4_a1_v("Neutral");
					tv0->SetMessage(6409);
					tv0->ClearReplies();
					tv0->AddReply(6410, 7070, 7069);
					tv0->AddReply(6413, 7074, 7073);
					if (!f_2079_a1_b(tv1)) {
						tv0->AddReply(6416, 7079, 7078);
					}
					return;
				}
			}
			if (a0 == 7079) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6417);
				tv0->ClearReplies();
				tv0->AddReply(6418, 7070, 7080);
				return;
			}
			if (a0 == 7070) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6411);
				tv0->ClearReplies();
				tv0->AddReply(6412, 7074, 7072);
				return;
			}
			if (a0 == 7074) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6414);
				tv0->ClearReplies();
				tv0->AddReply(6415, -1, 7075);
				return;
			}
			if (a0 == 7055) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6397);
				tv0->ClearReplies();
				tv0->AddReply(6398, 7057, 7056);
				tv0->AddReply(6400, 7059, 7058);
				return;
			}
			if (a0 == 7059) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6401);
				tv0->ClearReplies();
				tv0->AddReply(6402, 7057, 7060);
				return;
			}
			if (a0 == 7057) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6399);
				tv0->ClearReplies();
				tv0->AddReply(6403, 7063, 7062);
				return;
			}
			if (a0 == 7063) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6404);
				tv0->ClearReplies();
				tv0->AddReply(6405, -1, 7064);
				return;
			}
			if (a0 == 7047) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6390);
				tv0->ClearReplies();
				tv0->AddReply(6391, 7049, 7048);
				return;
			}
			if (a0 == 7049) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6392);
				tv0->ClearReplies();
				tv0->AddReply(6394, 7052, 7051);
				tv0->AddReply(6393, 7052, 7050);
				return;
			}
			if (a0 == 7052) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6395);
				tv0->ClearReplies();
				tv0->AddReply(6396, -1, 7054);
				return;
			}
			if (a0 == 7041) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6385);
				tv0->ClearReplies();
				tv0->AddReply(6386, 7043, 7042);
				tv0->AddReply(6388, 7043, 7044);
				return;
			}
			if (a0 == 7043) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6387);
				tv0->ClearReplies();
				tv0->AddReply(6389, -1, 7046);
				return;
			}
			if (a0 == 7035) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6379);
				tv0->ClearReplies();
				tv0->AddReply(6380, 7037, 7036);
				return;
			}
			if (a0 == 7037) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6381);
				tv0->ClearReplies();
				tv0->AddReply(6382, 7039, 7038);
				return;
			}
			if (a0 == 7039) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(6383);
				tv0->ClearReplies();
				tv0->AddReply(6384, -1, 7040);
				return;
			}
			if (a0 == 5748) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(5217);
				tv0->ClearReplies();
				tv0->AddReply(5218, 5750, 5749);
				tv0->AddReply(5226, -1, 5758);
				tv0->AddReply(5227, 5750, 5759);
				return;
			}
			if (a0 == 5750) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(5219);
				tv0->ClearReplies();
				tv0->AddReply(5220, 5752, 5751);
				tv0->AddReply(5224, 5752, 5755);
				tv0->AddReply(5225, -1, 5757);
				return;
			}
			if (a0 == 5752) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(5221);
				tv0->ClearReplies();
				tv0->AddReply(5222, -1, 5753);
				tv0->AddReply(5223, -1, 5754);
				return;
			}
			if (a0 == 5738) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(5209);
				tv0->ClearReplies();
				tv0->AddReply(5210, 5740, 5739);
				tv0->AddReply(5216, 5740, 5746);
				return;
			}
			if (a0 == 5740) {
				f_6c4_a1_v("Pain");
				tv0->SetMessage(5211);
				tv0->ClearReplies();
				tv0->AddReply(5212, 5742, 5741);
				tv0->AddReply(5215, 5742, 5744);
				return;
			}
			if (a0 == 5742) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(5213);
				tv0->ClearReplies();
				tv0->AddReply(5214, -1, 5743);
				return;
			}
			if (a0 == 5761) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(5228);
				tv0->ClearReplies();
				tv0->AddReply(5229, 5763, 5762);
				tv0->AddReply(5236, 5763, 5770);
				return;
			}
			if (a0 == 5763) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(5230);
				tv0->ClearReplies();
				tv0->AddReply(5231, 5765, 5764);
				tv0->AddReply(5235, 5765, 5768);
				return;
			}
			if (a0 == 5765) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(5232);
				tv0->ClearReplies();
				tv0->AddReply(5233, -1, 5766);
				tv0->AddReply(5234, -1, 5767);
				return;
			}
			if (a0 == 5908) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(5366);
				tv0->ClearReplies();
				tv0->AddReply(5367, 5910, 5909);
				tv0->AddReply(5369, 5905, 5911);
				return;
			}
			if (a0 == 5910) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(5368);
				tv0->ClearReplies();
				tv0->AddReply(5370, 5905, 5913);
				tv0->AddReply(5371, 5905, 5914);
				return;
			}
			if (a0 == 5905) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(5363);
				tv0->ClearReplies();
				tv0->AddReply(5364, -1, 5906);
				return;
			}
			tv3 = true;
			if (f_1b59_a0_b()) {
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
		if (!f_1a90_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b55_a0_i());
		L0->SetPhoto(f_1b57_a0_s());
		L0->SetPlayerName(f_2104_a0_i());
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
		f_1ac8_a1_v(a0);
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
			if (f_1e65_a1_b(tv1)) {
				f_1dc0_a2_v(tv1, tv0);
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(6610);
				tv0->ClearReplies();
				tv0->AddReply(6611, 7748, 7280);
				tv0->AddReply(7066, 7748, 7784);
				break;
			}
			if (f_1e71_a1_b(tv1) && f_1eb7_a1_b(tv1) && f_1ebc_a1_b(tv1)) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(6731);
				tv0->ClearReplies();
				tv0->AddReply(6732, 7420, 7419);
				tv0->AddReply(6742, 7420, 7430);
				tv0->AddReply(6743, 7433, 7432);
				break;
			}
			f_cc0_a1_v("Neutral");
			tv0->SetMessage(6614);
			tv0->ClearReplies();
			if (f_1e7d_a1_b(tv1) && f_1eab_a1_b(tv1)) {
				tv0->AddReply(6615, 7282, 7284);
			}
			if (f_1e9f_a1_b(tv1)) {
				tv0->AddReply(6618, 7800, 7287);
			}
			if (f_1e89_a1_b(tv1)) {
				tv0->AddReply(6730, 7405, 7417);
			}
			tv0->AddReply(7071, 7802, 7794);
			tv0->AddReply(7532, -1, 8314);
			break;
			return;
		}
		if (f_1b59_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1acc_a1_v(tv2);
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

	void f_cc0_a1_v(string a0)
	{
		if (!f_1b59_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1acc_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ade_a0_v();
			if (a1 == 7775) {
				f_1baf_a2_v(tv1, tv0);
				f_1bc7_a2_v(tv1, tv0);
				f_1c2a_a2_v(tv1, tv0);
			}
			if (a1 == 7779) {
				f_1baf_a2_v(tv1, tv0);
				f_1bc7_a2_v(tv1, tv0);
				f_1c2a_a2_v(tv1, tv0);
			}
			if (a1 == 7780) {
				f_1baf_a2_v(tv1, tv0);
			}
			if (a1 == 7783) {
				f_1baf_a2_v(tv1, tv0);
			}
			if (a1 == 7790) {
				f_1bb5_a2_v(tv1, tv0);
				f_1be5_a2_v(tv1, tv0);
			}
			if (a1 == 7791) {
				f_1bb5_a2_v(tv1, tv0);
				f_1be5_a2_v(tv1, tv0);
			}
			if (a1 == 7436) {
				f_1bb5_a2_v(tv1, tv0);
			}
			if (a1 == 7284) {
				f_1c92_a2_v(tv1, tv0);
			}
			if (a1 == 7795) {
				f_1bbb_a2_v(tv1, tv0);
				f_1bef_a2_v(tv1, tv0);
				f_1c92_a2_v(tv1, tv0);
				f_1c82_a2_v(tv1, tv0);
			}
			if (a1 == 7798) {
				f_1bbb_a2_v(tv1, tv0);
				f_1bef_a2_v(tv1, tv0);
				f_1c92_a2_v(tv1, tv0);
				f_1c82_a2_v(tv1, tv0);
			}
			if (a1 == 7799) {
				f_1bbb_a2_v(tv1, tv0);
				f_1bef_a2_v(tv1, tv0);
				f_1c92_a2_v(tv1, tv0);
				f_1c82_a2_v(tv1, tv0);
			}
			if (a1 == 7801) {
				f_1bc7_a2_v(tv1, tv0);
				f_1c2a_a2_v(tv1, tv0);
			}
			if (a1 == 7410) {
				f_1bc1_a2_v(tv1, tv0);
			}
			if (a1 == 7411) {
				f_1bc1_a2_v(tv1, tv0);
			}
			if (a1 == 7414) {
				f_1bc1_a2_v(tv1, tv0);
			}
			if (a1 == 7416) {
				f_1bc1_a2_v(tv1, tv0);
			}
			if (a0 == 7279) {
				if (f_1e65_a1_b(tv1)) {
					f_1dc0_a2_v(tv1, tv0);
					f_cc0_a1_v("Neutral");
					tv0->SetMessage(6610);
					tv0->ClearReplies();
					tv0->AddReply(6611, 7748, 7280);
					tv0->AddReply(7066, 7748, 7784);
					return;
				}
				if (f_1e71_a1_b(tv1) && f_1eb7_a1_b(tv1) && f_1ebc_a1_b(tv1)) {
					f_cc0_a1_v("Neutral");
					tv0->SetMessage(6731);
					tv0->ClearReplies();
					tv0->AddReply(6732, 7420, 7419);
					tv0->AddReply(6742, 7420, 7430);
					tv0->AddReply(6743, 7433, 7432);
					return;
				}
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(6614);
				tv0->ClearReplies();
				if (f_1e7d_a1_b(tv1) && f_1eab_a1_b(tv1)) {
					tv0->AddReply(6615, 7282, 7284);
				}
				if (f_1e9f_a1_b(tv1)) {
					tv0->AddReply(6618, 7800, 7287);
				}
				if (f_1e89_a1_b(tv1)) {
					tv0->AddReply(6730, 7405, 7417);
				}
				tv0->AddReply(7071, 7802, 7794);
				tv0->AddReply(7532, -1, 8314);
				return;
			}
			if (a0 == 7802) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7079);
				tv0->ClearReplies();
				tv0->AddReply(7080, 7805, 7803);
				tv0->AddReply(7081, -1, 7804);
				return;
			}
			if (a0 == 7805) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7082);
				tv0->ClearReplies();
				tv0->AddReply(7083, -1, 7806);
				return;
			}
			if (a0 == 7405) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(6718);
				tv0->ClearReplies();
				tv0->AddReply(6719, 7407, 7406);
				tv0->AddReply(6729, -1, 7416);
				return;
			}
			if (a0 == 7407) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(6720);
				tv0->ClearReplies();
				tv0->AddReply(6721, 7409, 7408);
				tv0->AddReply(6725, 7413, 7412);
				return;
			}
			if (a0 == 7413) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(6726);
				tv0->ClearReplies();
				tv0->AddReply(6727, -1, 7414);
				return;
			}
			if (a0 == 7409) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(6722);
				tv0->ClearReplies();
				tv0->AddReply(6723, -1, 7410);
				tv0->AddReply(6724, -1, 7411);
				return;
			}
			if (a0 == 7800) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7077);
				tv0->ClearReplies();
				tv0->AddReply(7078, -1, 7801);
				return;
			}
			if (a0 == 7282) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(6613);
				tv0->ClearReplies();
				tv0->AddReply(7072, -1, 7795);
				tv0->AddReply(7073, 7797, 7796);
				return;
			}
			if (a0 == 7797) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7074);
				tv0->ClearReplies();
				tv0->AddReply(7075, -1, 7798);
				tv0->AddReply(7076, -1, 7799);
				return;
			}
			if (a0 == 7433) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(6744);
				tv0->ClearReplies();
				tv0->AddReply(6745, 7420, 7434);
				tv0->AddReply(6746, -1, 7436);
				return;
			}
			if (a0 == 7420) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(6733);
				tv0->ClearReplies();
				tv0->AddReply(6734, 7422, 7421);
				tv0->AddReply(6741, 7422, 7428);
				return;
			}
			if (a0 == 7422) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(6735);
				tv0->ClearReplies();
				tv0->AddReply(6737, 7425, 7424);
				tv0->AddReply(6736, 7789, 7423);
				return;
			}
			if (a0 == 7425) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(6738);
				tv0->ClearReplies();
				tv0->AddReply(6739, 7789, 7426);
				tv0->AddReply(6740, 7789, 7427);
				return;
			}
			if (a0 == 7789) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7068);
				tv0->ClearReplies();
				tv0->AddReply(7069, -1, 7790);
				tv0->AddReply(7070, -1, 7791);
				return;
			}
			if (a0 == 7748) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7034);
				tv0->ClearReplies();
				tv0->AddReply(7035, 7750, 7749);
				tv0->AddReply(7051, 7766, 7765);
				return;
			}
			if (a0 == 7766) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7052);
				tv0->ClearReplies();
				tv0->AddReply(7053, 7750, 7767);
				return;
			}
			if (a0 == 7750) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7036);
				tv0->ClearReplies();
				tv0->AddReply(7037, 7752, 7751);
				return;
			}
			if (a0 == 7752) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7038);
				tv0->ClearReplies();
				tv0->AddReply(7039, 7754, 7753);
				tv0->AddReply(7048, 7763, 7762);
				return;
			}
			if (a0 == 7763) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7049);
				tv0->ClearReplies();
				tv0->AddReply(7054, 7759, 7770);
				return;
			}
			if (a0 == 7754) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7040);
				tv0->ClearReplies();
				tv0->AddReply(7043, 7759, 7757);
				tv0->AddReply(7041, 7756, 7755);
				return;
			}
			if (a0 == 7756) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7042);
				tv0->ClearReplies();
				tv0->AddReply(7044, 7759, 7758);
				return;
			}
			if (a0 == 7759) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7045);
				tv0->ClearReplies();
				tv0->AddReply(7046, 7761, 7760);
				tv0->AddReply(7067, 7761, 7787);
				tv0->AddReply(7055, 7773, 7772);
				return;
			}
			if (a0 == 7773) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7056);
				tv0->ClearReplies();
				tv0->AddReply(7057, 7761, 7774);
				return;
			}
			if (a0 == 7761) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7047);
				tv0->ClearReplies();
				tv0->AddReply(7058, -1, 7775);
				tv0->AddReply(7059, 7778, 7777);
				return;
			}
			if (a0 == 7778) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7060);
				tv0->ClearReplies();
				tv0->AddReply(7061, -1, 7779);
				tv0->AddReply(7062, -1, 7780);
				tv0->AddReply(7063, 7782, 7781);
				return;
			}
			if (a0 == 7782) {
				f_cc0_a1_v("Neutral");
				tv0->SetMessage(7064);
				tv0->ClearReplies();
				tv0->AddReply(7065, -1, 7783);
				return;
			}
			tv3 = true;
			if (f_1b59_a0_b()) {
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
		if (!f_1a90_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b55_a0_i());
		L0->SetPhoto(f_1b57_a0_s());
		L0->SetPlayerName(f_2104_a0_i());
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
		f_1ac8_a1_v(a0);
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
			if (f_1ef8_a1_b(tv1) && f_1eec_a1_b(tv1)) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(9086);
				tv0->ClearReplies();
				tv0->AddReply(9087, 9969, 9965);
				tv0->AddReply(9088, 9967, 9966);
				break;
			}
			f_1139_a1_v("Neutral");
			tv0->SetMessage(8854);
			tv0->ClearReplies();
			if (f_1ed4_a1_b(tv1) && f_1f10_a1_b(tv1)) {
				tv0->AddReply(8840, 9693, 9692);
			}
			if (f_1ec8_a1_b(tv1)) {
				tv0->AddReply(8855, 9687, 9711);
			}
			if (f_1ee0_a1_b(tv1)) {
				tv0->AddReply(8856, 9691, 9712);
			}
			if (f_1f84_a1_b(tv1)) {
				tv0->AddReply(11978, 13175, 13193);
			}
			tv0->AddReply(11133, -1, 12322);
			break;
			return;
		}
		if (f_1b59_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1acc_a1_v(tv2);
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

	void f_1139_a1_v(string a0)
	{
		if (!f_1b59_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1acc_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ade_a0_v();
			if (a1 == 9978) {
				f_1c5c_a2_v(tv1, tv0);
			}
			if (a1 == 9979) {
				f_1c5c_a2_v(tv1, tv0);
			}
			if (a1 == 9724) {
				f_1c50_a2_v(tv1, tv0);
				f_1c62_a2_v(tv1, tv0);
				f_1c56_a2_v(tv1, tv0);
				f_1c3a_a2_v(tv1, tv0);
			}
			if (a1 == 9704) {
				f_1c4a_a2_v(tv1, tv0);
			}
			if (a1 == 13182) {
				f_1d59_a2_v(tv1, tv0);
			}
			if (a1 == 13183) {
				f_1d59_a2_v(tv1, tv0);
			}
			if (a1 == 13184) {
				f_1d59_a2_v(tv1, tv0);
			}
			if (a0 == 9964) {
				if (f_1ef8_a1_b(tv1) && f_1eec_a1_b(tv1)) {
					f_1139_a1_v("Neutral");
					tv0->SetMessage(9086);
					tv0->ClearReplies();
					tv0->AddReply(9087, 9969, 9965);
					tv0->AddReply(9088, 9967, 9966);
					return;
				}
				f_1139_a1_v("Neutral");
				tv0->SetMessage(8854);
				tv0->ClearReplies();
				if (f_1ed4_a1_b(tv1) && f_1f10_a1_b(tv1)) {
					tv0->AddReply(8840, 9693, 9692);
				}
				if (f_1ec8_a1_b(tv1)) {
					tv0->AddReply(8855, 9687, 9711);
				}
				if (f_1ee0_a1_b(tv1)) {
					tv0->AddReply(8856, 9691, 9712);
				}
				if (f_1f84_a1_b(tv1)) {
					tv0->AddReply(11978, 13175, 13193);
				}
				tv0->AddReply(11133, -1, 12322);
				return;
			}
			if (a0 == 13175) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(11964);
				tv0->ClearReplies();
				tv0->AddReply(11965, 13177, 13176);
				tv0->AddReply(11976, 13177, 13189);
				tv0->AddReply(11977, 13177, 13191);
				return;
			}
			if (a0 == 13177) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(11966);
				tv0->ClearReplies();
				tv0->AddReply(11967, 13179, 13178);
				tv0->AddReply(11975, 13179, 13187);
				return;
			}
			if (a0 == 13179) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(11968);
				tv0->ClearReplies();
				tv0->AddReply(11969, 13181, 13180);
				tv0->AddReply(11974, 13181, 13185);
				return;
			}
			if (a0 == 13181) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(11970);
				tv0->ClearReplies();
				tv0->AddReply(11971, -1, 13182);
				tv0->AddReply(11972, -1, 13183);
				tv0->AddReply(11973, -1, 13184);
				return;
			}
			if (a0 == 9691) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(8839);
				tv0->ClearReplies();
				tv0->AddReply(8857, 9714, 9713);
				return;
			}
			if (a0 == 9714) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(8858);
				tv0->ClearReplies();
				tv0->AddReply(8859, 9693, 9715);
				return;
			}
			if (a0 == 9687) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(8835);
				tv0->ClearReplies();
				tv0->AddReply(8836, 9689, 9688);
				tv0->AddReply(8852, 9689, 9706);
				tv0->AddReply(8853, 9689, 9708);
				return;
			}
			if (a0 == 9689) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(8837);
				tv0->ClearReplies();
				tv0->AddReply(8849, 9703, 9702);
				return;
			}
			if (a0 == 9703) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(8850);
				tv0->ClearReplies();
				tv0->AddReply(8851, -1, 9704);
				return;
			}
			if (a0 == 9693) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(8841);
				tv0->ClearReplies();
				tv0->AddReply(8842, 9695, 9694);
				tv0->AddReply(8846, 9699, 9698);
				tv0->AddReply(8861, 9719, 9718);
				return;
			}
			if (a0 == 9719) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(8862);
				tv0->ClearReplies();
				tv0->AddReply(8863, 9716, 9720);
				tv0->AddReply(8867, 9695, 9725);
				return;
			}
			if (a0 == 9699) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(8847);
				tv0->ClearReplies();
				tv0->AddReply(8848, 9695, 9700);
				return;
			}
			if (a0 == 9695) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(8843);
				tv0->ClearReplies();
				tv0->AddReply(8844, 9716, 9696);
				tv0->AddReply(8845, 9716, 9697);
				return;
			}
			if (a0 == 9716) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(8860);
				tv0->ClearReplies();
				tv0->AddReply(8864, 9723, 9722);
				return;
			}
			if (a0 == 9723) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(8865);
				tv0->ClearReplies();
				tv0->AddReply(8866, -1, 9724);
				return;
			}
			if (a0 == 9967) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(9089);
				tv0->ClearReplies();
				tv0->AddReply(9090, 9969, 9968);
				return;
			}
			if (a0 == 9969) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(9091);
				tv0->ClearReplies();
				tv0->AddReply(9092, 9971, 9970);
				return;
			}
			if (a0 == 9971) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(9093);
				tv0->ClearReplies();
				tv0->AddReply(9094, 9974, 9973);
				return;
			}
			if (a0 == 9974) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(9095);
				tv0->ClearReplies();
				if (f_1eec_a1_b(tv1)) {
					tv0->AddReply(9096, -1, 9975);
				}
				tv0->AddReply(9097, 9977, 9976);
				return;
			}
			if (a0 == 9977) {
				f_1139_a1_v("Neutral");
				tv0->SetMessage(9098);
				tv0->ClearReplies();
				tv0->AddReply(9099, -1, 9978);
				tv0->AddReply(9100, -1, 9979);
				return;
			}
			tv3 = true;
			if (f_1b59_a0_b()) {
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
		if (!f_1a90_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b55_a0_i());
		L0->SetPhoto(f_1b57_a0_s());
		L0->SetPlayerName(f_2104_a0_i());
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
		f_1ac8_a1_v(a0);
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
			if (f_1f26_a1_b(tv1)) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11175);
				tv0->ClearReplies();
				tv0->AddReply(11176, 12361, 12360);
				tv0->AddReply(11178, 12366, 12362);
				break;
			}
			f_1482_a1_v("Neutral");
			tv0->SetMessage(11164);
			tv0->ClearReplies();
			if (f_1f32_a1_b(tv1)) {
				tv0->AddReply(11489, 12692, 12691);
			}
			if (f_1f3e_a1_b(tv1) && f_1f4a_a1_b(tv1)) {
				tv0->AddReply(11187, 12373, 12372);
			}
			if (f_1f56_a1_b(tv1) && f_1f62_a1_b(tv1)) {
				tv0->AddReply(11495, 12697, 12696);
			}
			if (f_1e95_a1_b(tv1)) {
				tv0->AddReply(11165, 12349, 12348);
			}
			tv0->AddReply(11174, -1, 12358);
			break;
			return;
		}
		if (f_1b59_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1acc_a1_v(tv2);
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

	void f_1482_a1_v(string a0)
	{
		if (!f_1b59_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1acc_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ade_a0_v();
			if (a1 == 12370) {
				f_1c9b_a2_v(tv1, tv0);
				f_1ca1_a2_v(tv1, tv0);
				f_1d34_a2_v(tv1, tv0);
				f_1cc4_a2_v(tv1, tv0);
			}
			if (a1 == 12371) {
				f_1c9b_a2_v(tv1, tv0);
			}
			if (a1 == 12695) {
				f_1ca1_a2_v(tv1, tv0);
				f_1d34_a2_v(tv1, tv0);
				f_1b79_a2_v(tv1, tv0);
				f_1cc4_a2_v(tv1, tv0);
			}
			if (a1 == 12376) {
				f_1cd4_a2_v(tv1, tv0);
				f_1cda_a2_v(tv1, tv0);
				f_1d24_a2_v(tv1, tv0);
			}
			if (a1 == 12377) {
				f_1cd4_a2_v(tv1, tv0);
				f_1cda_a2_v(tv1, tv0);
				f_1d24_a2_v(tv1, tv0);
			}
			if (a1 == 12702) {
				f_1d3f_a2_v(tv1, tv0);
				f_1c0f_a2_v(tv1, tv0);
				f_1b73_a2_v(tv1, tv0);
				f_1cf1_a2_v(tv1, tv0);
			}
			if (a0 == 12359) {
				if (f_1f26_a1_b(tv1)) {
					f_1482_a1_v("Neutral");
					tv0->SetMessage(11175);
					tv0->ClearReplies();
					tv0->AddReply(11176, 12361, 12360);
					tv0->AddReply(11178, 12366, 12362);
					return;
				}
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11164);
				tv0->ClearReplies();
				if (f_1f32_a1_b(tv1)) {
					tv0->AddReply(11489, 12692, 12691);
				}
				if (f_1f3e_a1_b(tv1) && f_1f4a_a1_b(tv1)) {
					tv0->AddReply(11187, 12373, 12372);
				}
				if (f_1f56_a1_b(tv1) && f_1f62_a1_b(tv1)) {
					tv0->AddReply(11495, 12697, 12696);
				}
				if (f_1e95_a1_b(tv1)) {
					tv0->AddReply(11165, 12349, 12348);
				}
				tv0->AddReply(11174, -1, 12358);
				return;
			}
			if (a0 == 12349) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11166);
				tv0->ClearReplies();
				tv0->AddReply(11167, 12354, 12350);
				return;
			}
			if (a0 == 12354) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11171);
				tv0->ClearReplies();
				tv0->AddReply(11172, -1, 12355);
				return;
			}
			if (a0 == 12697) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11496);
				tv0->ClearReplies();
				tv0->AddReply(11497, 12699, 12698);
				return;
			}
			if (a0 == 12699) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11498);
				tv0->ClearReplies();
				tv0->AddReply(11499, 12701, 12700);
				return;
			}
			if (a0 == 12701) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11500);
				tv0->ClearReplies();
				tv0->AddReply(11501, -1, 12702);
				if (f_1f62_a1_b(tv1)) {
					tv0->AddReply(11502, -1, 12703);
				}
				return;
			}
			if (a0 == 12373) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11188);
				tv0->ClearReplies();
				tv0->AddReply(11189, 12375, 12374);
				return;
			}
			if (a0 == 12375) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11190);
				tv0->ClearReplies();
				tv0->AddReply(11191, -1, 12376);
				tv0->AddReply(11192, -1, 12377);
				return;
			}
			if (a0 == 12692) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11490);
				tv0->ClearReplies();
				tv0->AddReply(11491, 12694, 12693);
				return;
			}
			if (a0 == 12694) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11492);
				tv0->ClearReplies();
				tv0->AddReply(11493, -1, 12695);
				return;
			}
			if (a0 == 12361) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11177);
				tv0->ClearReplies();
				tv0->AddReply(11180, 12363, 12364);
				tv0->AddReply(11193, 12379, 12378);
				return;
			}
			if (a0 == 12379) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11194);
				tv0->ClearReplies();
				tv0->AddReply(11195, 12363, 12380);
				tv0->AddReply(11198, 12385, 12384);
				return;
			}
			if (a0 == 12385) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11199);
				tv0->ClearReplies();
				tv0->AddReply(11200, 12366, 12386);
				tv0->AddReply(11201, 12363, 12388);
				return;
			}
			if (a0 == 12363) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11179);
				tv0->ClearReplies();
				tv0->AddReply(11181, 12366, 12365);
				tv0->AddReply(11196, 12383, 12382);
				return;
			}
			if (a0 == 12383) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11197);
				tv0->ClearReplies();
				tv0->AddReply(11486, 12366, 12688);
				return;
			}
			if (a0 == 12366) {
				f_1482_a1_v("Neutral");
				tv0->SetMessage(11182);
				tv0->ClearReplies();
				tv0->AddReply(11185, -1, 12370);
				tv0->AddReply(11186, -1, 12371);
				return;
			}
			tv3 = true;
			if (f_1b59_a0_b()) {
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
		if (!f_1a90_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b55_a0_i());
		L0->SetPhoto(f_1b57_a0_s());
		L0->SetPlayerName(f_2104_a0_i());
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
		f_1ac8_a1_v(a0);
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
			f_1755_a1_v("Neutral");
			tv0->SetMessage(11591);
			tv0->ClearReplies();
			if (f_1f78_a1_b(tv1)) {
				tv0->AddReply(11592, 12788, 12787);
			}
			if (f_1f95_a1_b(tv1) && f_1fad_a1_b(tv1)) {
				tv0->AddReply(11611, 12810, 12809);
			}
			if (f_1fa1_a1_b(tv1) && f_1fb9_a1_b(tv1)) {
				tv0->AddReply(11624, 12823, 12822);
			}
			tv0->AddReply(11635, -1, 12834);
			break;
			return;
		}
		if (f_1b59_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1acc_a1_v(tv2);
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

	void f_1755_a1_v(string a0)
	{
		if (!f_1b59_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1acc_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ade_a0_v();
			if (a1 == 12808) {
				f_1d45_a2_v(tv1, tv0);
			}
			if (a1 == 12802) {
				f_1d45_a2_v(tv1, tv0);
			}
			if (a1 == 12819) {
				f_1d5b_a2_v(tv1, tv0);
			}
			if (a1 == 12820) {
				f_1d5b_a2_v(tv1, tv0);
			}
			if (a1 == 12821) {
				f_1d5b_a2_v(tv1, tv0);
			}
			if (a1 == 12832) {
				f_1d61_a2_v(tv1, tv0);
			}
			if (a1 == 12833) {
				f_1d61_a2_v(tv1, tv0);
			}
			if (a0 == 12786) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11591);
				tv0->ClearReplies();
				if (f_1f78_a1_b(tv1)) {
					tv0->AddReply(11592, 12788, 12787);
				}
				if (f_1f95_a1_b(tv1) && f_1fad_a1_b(tv1)) {
					tv0->AddReply(11611, 12810, 12809);
				}
				if (f_1fa1_a1_b(tv1) && f_1fb9_a1_b(tv1)) {
					tv0->AddReply(11624, 12823, 12822);
				}
				tv0->AddReply(11635, -1, 12834);
				return;
			}
			if (a0 == 12823) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11625);
				tv0->ClearReplies();
				tv0->AddReply(11626, 12825, 12824);
				tv0->AddReply(11628, 12827, 12826);
				return;
			}
			if (a0 == 12827) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11629);
				tv0->ClearReplies();
				tv0->AddReply(11631, 12830, 12829);
				return;
			}
			if (a0 == 12825) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11627);
				tv0->ClearReplies();
				tv0->AddReply(11630, 12830, 12828);
				return;
			}
			if (a0 == 12830) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11632);
				tv0->ClearReplies();
				tv0->AddReply(11633, -1, 12832);
				tv0->AddReply(11634, -1, 12833);
				return;
			}
			if (a0 == 12810) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11612);
				tv0->ClearReplies();
				tv0->AddReply(11613, 12812, 12811);
				return;
			}
			if (a0 == 12812) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11614);
				tv0->ClearReplies();
				tv0->AddReply(11615, 12814, 12813);
				return;
			}
			if (a0 == 12814) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11616);
				tv0->ClearReplies();
				tv0->AddReply(11617, 12816, 12815);
				return;
			}
			if (a0 == 12816) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11618);
				tv0->ClearReplies();
				tv0->AddReply(11619, 12818, 12817);
				return;
			}
			if (a0 == 12818) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11620);
				tv0->ClearReplies();
				tv0->AddReply(11621, -1, 12819);
				tv0->AddReply(11622, -1, 12820);
				tv0->AddReply(11623, -1, 12821);
				return;
			}
			if (a0 == 12788) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11593);
				tv0->ClearReplies();
				tv0->AddReply(11594, 12790, 12789);
				tv0->AddReply(11599, 12795, 12794);
				return;
			}
			if (a0 == 12795) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11600);
				tv0->ClearReplies();
				tv0->AddReply(11601, 12790, 12796);
				return;
			}
			if (a0 == 12790) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11595);
				tv0->ClearReplies();
				tv0->AddReply(11596, 12792, 12791);
				tv0->AddReply(11602, 12799, 12798);
				return;
			}
			if (a0 == 12799) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11603);
				tv0->ClearReplies();
				tv0->AddReply(11604, 12792, 12800);
				return;
			}
			if (a0 == 12792) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11597);
				tv0->ClearReplies();
				tv0->AddReply(11598, 12803, 12793);
				tv0->AddReply(11605, -1, 12802);
				return;
			}
			if (a0 == 12803) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11606);
				tv0->ClearReplies();
				tv0->AddReply(11607, 12805, 12804);
				tv0->AddReply(11609, 12805, 12806);
				return;
			}
			if (a0 == 12805) {
				f_1755_a1_v("Neutral");
				tv0->SetMessage(11608);
				tv0->ClearReplies();
				tv0->AddReply(11610, -1, 12808);
				return;
			}
			tv3 = true;
			if (f_1b59_a0_b()) {
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
		if (!f_1a90_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b55_a0_i());
		L0->SetPhoto(f_1b57_a0_s());
		L0->SetPlayerName(f_2104_a0_i());
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
		f_1ac8_a1_v(a0);
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
			f_19c1_a1_v("Neutral");
			tv0->SetMessage(12203);
			tv0->ClearReplies();
			if (f_200d_a1_b(tv1) && f_2019_a1_b(tv1)) {
				tv0->AddReply(13340, 14573, 14572);
			}
			tv0->AddReply(12204, -1, 13359);
			break;
			return;
		}
		if (f_1b59_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1acc_a1_v(tv2);
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

	void f_19c1_a1_v(string a0)
	{
		if (!f_1b59_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1acc_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1ade_a0_v();
			if (a1 == 14578) {
				f_1d8f_a2_v(tv1, tv0);
			}
			if (a1 == 14583) {
				f_1d8f_a2_v(tv1, tv0);
			}
			if (a0 == 13358) {
				f_19c1_a1_v("Neutral");
				tv0->SetMessage(12203);
				tv0->ClearReplies();
				if (f_200d_a1_b(tv1) && f_2019_a1_b(tv1)) {
					tv0->AddReply(13340, 14573, 14572);
				}
				tv0->AddReply(12204, -1, 13359);
				return;
			}
			if (a0 == 14573) {
				f_19c1_a1_v("Neutral");
				tv0->SetMessage(13341);
				tv0->ClearReplies();
				tv0->AddReply(13342, 14575, 14574);
				return;
			}
			if (a0 == 14575) {
				f_19c1_a1_v("Neutral");
				tv0->SetMessage(13343);
				tv0->ClearReplies();
				tv0->AddReply(13344, 14577, 14576);
				return;
			}
			if (a0 == 14577) {
				f_19c1_a1_v("Neutral");
				tv0->SetMessage(13345);
				tv0->ClearReplies();
				tv0->AddReply(13346, -1, 14578);
				tv0->AddReply(13347, 14580, 14579);
				return;
			}
			if (a0 == 14580) {
				f_19c1_a1_v("Neutral");
				tv0->SetMessage(13348);
				tv0->ClearReplies();
				tv0->AddReply(13349, 14582, 14581);
				return;
			}
			if (a0 == 14582) {
				f_19c1_a1_v("Neutral");
				tv0->SetMessage(13350);
				tv0->ClearReplies();
				tv0->AddReply(13351, -1, 14583);
				return;
			}
			tv3 = true;
			if (f_1b59_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

void f_1a78_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1a7f_a1_b(object a0)
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

bool f_1a8b_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1a90_a1_b(object a0)
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
	L5 = L3 * 70 + f_1ae5_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1ac8_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1acc_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_1ade_a0_v(void)
{
	if (f_1b59_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_1ae5_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1aef_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1af4_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_1aff_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActorFromXml(L1, L0, a0, a0 + ".xml");
	return L1;
}

void f_1b0a_a3_v(object a0, object a1, int a2)
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

void f_1b17_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1b0a_a3_v(a0, L0, a2);
}

bool f_1b24_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1b30_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1b35_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_1b3e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_1b46_a1_b(int a0)
{
	return f_1b35_a0_i() == a0;
}

bool f_1b4c_a0_b(void)
{
	bool L0;
	f_1acc_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_1b55_a0_i(void)
{
	return 2854;
}

string f_1b57_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_1b59_a0_b(void)
{
	return true;
}

void f_1b5b_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr1", 1);
}

void f_1b61_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr2", 1);
}

void f_1b67_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr3", 1);
}

void f_1b6d_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr4", 1);
}

void f_1b73_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1b79_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1b7f_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr5", 1);
}

void f_1b85_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr6", 1);
}

void f_1b8b_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr7", 1);
}

void f_1b91_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr8", 1);
}

void f_1b97_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr9", 1);
}

void f_1b9d_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr10", 1);
}

void f_1ba3_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr11", 1);
}

void f_1ba9_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr12", 1);
}

void f_1baf_a2_v(object a0, object a1)
{
	@SetVariable("ood2Alexandr1", 1);
}

void f_1bb5_a2_v(object a0, object a1)
{
	@SetVariable("ood2Alexandr2", 1);
}

void f_1bbb_a2_v(object a0, object a1)
{
	@SetVariable("ood2Alexandr3", 1);
}

void f_1bc1_a2_v(object a0, object a1)
{
	@SetVariable("ood2Alexandr5", 1);
}

void f_1bc7_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q01", 1);
	L0 = f_20d2_a0_o();
	L0->AddMark("d2q01AlexandrGotoAnna", "pt_map_anna", 1, 11387, f_1b30_a0_f());
	f_2115_a0_v();
	f_2125_a0_v();
	f_1af4_a1_o("quest_d2_02");
}

void f_1be5_a2_v(object a0, object a1)
{
	f_2145_a0_v();
	f_1b24_a2_b("quest_d2_01", "completed");
}

void f_1bef_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q01", 6);
	L0 = f_20d2_a0_o();
	L0->AddMark("d2q01AlexandrGotoBigVlad", "pt_map_bigvlad", 1, 11390, f_1b30_a0_f());
	L0->AddMark("d2q01AlexandrGotoGeorg", "pt_map_georg", 1, 11391, f_1b30_a0_f());
	f_2135_a0_v();
}

void f_1c0f_a2_v(object a0, object a1)
{
	@Trace("money 5000 is given");
	f_1a78_a3_v(a0, "money", 5000);
}

void f_1c1a_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_20d2_a0_o();
	L0->AddMark("d1AlexandrAboutKaterina", "pt_map_katerina", 3, 8640, f_1b30_a0_f());
}

void f_1c2a_a2_v(object a0, object a1)
{
	f_20e3_a3_v(f_20d2_a0_o(), "pt_map_anna", 2);
	a1->ShowMap(f_20d2_a0_o());
}

void f_1c3a_a2_v(object a0, object a1)
{
	f_20e3_a3_v(f_20d2_a0_o(), "pt_map_ospina", 2);
	a1->ShowMap(f_20d2_a0_o());
}

void f_1c4a_a2_v(object a0, object a1)
{
	@SetVariable("ood3Alexandr1", 1);
}

void f_1c50_a2_v(object a0, object a1)
{
	@SetVariable("ood3Alexandr2", 1);
}

void f_1c56_a2_v(object a0, object a1)
{
	@SetVariable("ood3Alexandr3", 1);
}

void f_1c5c_a2_v(object a0, object a1)
{
	@SetVariable("ood3Alexandr4", 1);
}

void f_1c62_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q01", 2);
	L0 = f_20d2_a0_o();
	L0->AddMark("d3q01AlexandrGotoOspina", "pt_map_ospina", 1, 11148, f_1b30_a0_f());
	L0->AddMark("d3q01AlexandrGotoOspinaSelf", "pt_map_alexandr", 1, 15295, f_1b30_a0_f());
	f_2155_a0_v();
}

void f_1c82_a2_v(object a0, object a1)
{
	f_20e3_a3_v(f_20d2_a0_o(), "pt_map_bigvlad", 2);
	a1->ShowMap(f_20d2_a0_o());
}

void f_1c92_a2_v(object a0, object a1)
{
	int L0;
	f_2135_a0_v();
	a0->RemoveItemByType(L0, "d2q01_key", 1);
}

void f_1c9b_a2_v(object a0, object a1)
{
	@SetVariable("ood4Alexandr1", 1);
}

void f_1ca1_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_20d2_a0_o();
	L0->AddMark("d4q03AlexandrGotoGrif", "pt_map_grif", 0, 11487, f_1b30_a0_f());
	L0->AddMark("d4q03AlexandrGotoGrifSelf", "pt_map_alexandr", 0, 15330, f_1b30_a0_f());
	f_2165_a0_v();
	f_2175_a0_v();
	f_1aff_a1_o("quest_d4_03");
}

void f_1cc4_a2_v(object a0, object a1)
{
	f_20e3_a3_v(f_20d2_a0_o(), "pt_map_grif", 2);
	a1->ShowMap(f_20d2_a0_o());
}

void f_1cd4_a2_v(object a0, object a1)
{
	@SetVariable("ood4Alexandr2", 1);
}

void f_1cda_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q03", 3);
	L0 = f_20d2_a0_o();
	L0->AddMark("d4q03AlexandrAboutVolnica", "pt_map_warehouse_gangster", 0, 11494, f_1b30_a0_f());
	f_2185_a0_v();
}

void f_1cf1_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_20d2_a0_o();
	L0->FindMark(L1, "d4q03AlexandrAboutVolnica");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03AlexandrGotoGrif");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03AlexandrGotoGrifSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03GrifGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03GrifGotoAlexandrSelf");
	if (L1) {
		L1->Remove();
	}
	f_2195_a0_v();
	f_1b24_a2_b("quest_d4_03", "completed");
}

void f_1d24_a2_v(object a0, object a1)
{
	f_20e3_a3_v(f_20d2_a0_o(), "pt_map_warehouse_gangster", 2);
	a1->ShowMap(f_20d2_a0_o());
}

void f_1d34_a2_v(object a0, object a1)
{
	@Trace("revolver ammo6 is given");
	f_1b17_a3_v(a0, "revolver_ammo", 6);
}

void f_1d3f_a2_v(object a0, object a1)
{
	@SetVariable("ood4Alexandr3", 1);
}

void f_1d45_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q01", 3);
	L0 = f_20d2_a0_o();
	L0->AddMark("d5q01AlexandrGotoKaterina", "pt_map_katerina", 1, 11958, f_1b30_a0_f());
}

void f_1d59_a2_v(object a0, object a1)
{
}

void f_1d5b_a2_v(object a0, object a1)
{
	@SetVariable("ood5Alexandr1", 1);
}

void f_1d61_a2_v(object a0, object a1)
{
	@SetVariable("ood5Alexandr2", 1);
}

void f_1d67_a2_v(object a0, object a1)
{
	@SetVariable("ood6Alexandr1", 1);
}

void f_1d6d_a2_v(object a0, object a1)
{
	@SetVariable("ood6Alexandr2", 1);
}

void f_1d73_a2_v(object a0, object a1)
{
	@SetVariable("ood6Alexandr3", 1);
}

void f_1d79_a2_v(object a0, object a1)
{
	@SetVariable("ood6Alexandr4", 1);
}

void f_1d7f_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_20d2_a0_o();
	L0->AddMark("d6q01AlexandrGotoKaterina", "pt_map_katerina", 1, 15397, f_1b30_a0_f());
}

void f_1d8f_a2_v(object a0, object a1)
{
	@SetVariable("ood7Alexandr1", 1);
}

void f_1d95_a2_v(object a0, object a1)
{
	@SetVariable("KnowAlexandr", 1);
}

void f_1d9b_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_20d2_a0_o();
	L0->AddMark("d6q01AlexandrGotoJulia", "pt_map_julia", 1, 15387, f_1b30_a0_f());
	L0->AddMark("d6q01AlexandrGotoLara", "pt_map_lara", 1, 15386, f_1b30_a0_f());
	L0->AddMark("d6q01AlexangrGotoJulLaraSelf", "pt_map_alexandr", 1, 15388, f_1b30_a0_f());
	f_21a5_a0_v();
}

void f_1dc0_a2_v(object a0, object a1)
{
	if (f_1aef_a1_i("d2TalkToAlexandr") == 1) {
	}
}

bool f_1dc9_a1_b(object a0)
{
	if (f_1aef_a1_i("ood1Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_1dd5_a1_b(object a0)
{
	if (f_1aef_a1_i("ood1Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_1de1_a1_b(object a0)
{
	if (f_1aef_a1_i("ood1Alexandr3") == 0) {
		return true;
	}
	return false;
}

bool f_1ded_a1_b(object a0)
{
	if (f_1aef_a1_i("ood1Alexandr4") == 0) {
		return true;
	}
	return false;
}

bool f_1df9_a1_b(object a0)
{
	if (f_1aef_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_1e05_a1_b(object a0)
{
	if (f_1aef_a1_i("ood1Alexandr5") == 0) {
		return true;
	}
	return false;
}

bool f_1e11_a1_b(object a0)
{
	if (f_1aef_a1_i("ood1Alexandr6") == 0) {
		return true;
	}
	return false;
}

bool f_1e1d_a1_b(object a0)
{
	if (f_1aef_a1_i("ood1Alexandr7") == 0) {
		return true;
	}
	return false;
}

bool f_1e29_a1_b(object a0)
{
	if (f_1aef_a1_i("ood1Alexandr8") == 0) {
		return true;
	}
	return false;
}

bool f_1e35_a1_b(object a0)
{
	if (f_1aef_a1_i("ood1Alexandr9") == 0) {
		return true;
	}
	return false;
}

bool f_1e41_a1_b(object a0)
{
	if (f_1aef_a1_i("ood1Alexandr10") == 0) {
		return true;
	}
	return false;
}

bool f_1e4d_a1_b(object a0)
{
	if (f_1aef_a1_i("ood1Alexandr11") == 0) {
		return true;
	}
	return false;
}

bool f_1e59_a1_b(object a0)
{
	if (f_1aef_a1_i("ood1Alexandr12") == 0) {
		return true;
	}
	return false;
}

bool f_1e65_a1_b(object a0)
{
	if (f_1aef_a1_i("ood2Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_1e71_a1_b(object a0)
{
	if (f_1aef_a1_i("ood2Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_1e7d_a1_b(object a0)
{
	if (f_1aef_a1_i("ood2Alexandr3") == 0) {
		return true;
	}
	return false;
}

bool f_1e89_a1_b(object a0)
{
	if (f_1aef_a1_i("ood2Alexandr5") == 0) {
		return true;
	}
	return false;
}

bool f_1e95_a1_b(object a0)
{
	if (f_2085_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1e9f_a1_b(object a0)
{
	if (f_1aef_a1_i("d2q01") == 0) {
		return true;
	}
	return false;
}

bool f_1eab_a1_b(object a0)
{
	if (f_1aef_a1_i("d2q01") == 5) {
		return true;
	}
	return false;
}

bool f_1eb7_a1_b(object a0)
{
	return true;
	return false;
}

bool f_1ebc_a1_b(object a0)
{
	if (f_1aef_a1_i("d2q01BigVladVisit") == 1) {
		return true;
	}
	return false;
}

bool f_1ec8_a1_b(object a0)
{
	if (f_1aef_a1_i("ood3Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_1ed4_a1_b(object a0)
{
	if (f_1aef_a1_i("ood3Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_1ee0_a1_b(object a0)
{
	if (f_1aef_a1_i("ood3Alexandr3") == 0) {
		return true;
	}
	return false;
}

bool f_1eec_a1_b(object a0)
{
	if (f_1aef_a1_i("ood3Alexandr4") == 0) {
		return true;
	}
	return false;
}

bool f_1ef8_a1_b(object a0)
{
	if (f_1aef_a1_i("d3q01") == 8) {
		return true;
	}
	return false;
}

bool f_1f04_a1_b(object a0)
{
	if (f_1aef_a1_i("KnowRubin") == 1) {
		return true;
	}
	return false;
}

bool f_1f10_a1_b(object a0)
{
	if (f_1aef_a1_i("d3q01") == 1) {
		return true;
	}
	return false;
}

bool f_1f1c_a1_b(object a0)
{
	if (f_2088_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1f26_a1_b(object a0)
{
	if (f_1aef_a1_i("ood4Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_1f32_a1_b(object a0)
{
	if (f_1aef_a1_i("d4q03") == 0) {
		return true;
	}
	return false;
}

bool f_1f3e_a1_b(object a0)
{
	if (f_1aef_a1_i("ood4Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_1f4a_a1_b(object a0)
{
	if (f_1aef_a1_i("d4q03") == 2) {
		return true;
	}
	return false;
}

bool f_1f56_a1_b(object a0)
{
	if (f_1aef_a1_i("d4q03_alldead") == 1) {
		return true;
	}
	return false;
}

bool f_1f62_a1_b(object a0)
{
	if (f_1aef_a1_i("ood4Alexandr3") == 0) {
		return true;
	}
	return false;
}

bool f_1f6e_a1_b(object a0)
{
	if (f_2093_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1f78_a1_b(object a0)
{
	if (f_1aef_a1_i("d5q01") == 2) {
		return true;
	}
	return false;
}

bool f_1f84_a1_b(object a0)
{
	return true;
	return false;
}

bool f_1f89_a1_b(object a0)
{
	if (f_1aef_a1_i("d6q02") == 1) {
		return true;
	}
	return false;
}

bool f_1f95_a1_b(object a0)
{
	if (f_1aef_a1_i("ood5Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_1fa1_a1_b(object a0)
{
	if (f_1aef_a1_i("ood5Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_1fad_a1_b(object a0)
{
	if (f_1aef_a1_i("d5q03") == 1) {
		return true;
	}
	return false;
}

bool f_1fb9_a1_b(object a0)
{
	if (f_1aef_a1_i("d5q03") == 2) {
		return true;
	}
	return false;
}

bool f_1fc5_a1_b(object a0)
{
	if (f_1aef_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_1fd1_a1_b(object a0)
{
	if (f_1aef_a1_i("ood6Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_1fdd_a1_b(object a0)
{
	if (f_1aef_a1_i("ood6Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_1fe9_a1_b(object a0)
{
	if (f_1aef_a1_i("ood6Alexandr3") == 0) {
		return true;
	}
	return false;
}

bool f_1ff5_a1_b(object a0)
{
	if (f_1aef_a1_i("d6q01KnowKillerIsKlara") == 1) {
		return true;
	}
	return false;
}

bool f_2001_a1_b(object a0)
{
	if (f_1aef_a1_i("ood6Alexandr4") == 0) {
		return true;
	}
	return false;
}

bool f_200d_a1_b(object a0)
{
	if (f_1aef_a1_i("d7q02") == 1) {
		return true;
	}
	return false;
}

bool f_2019_a1_b(object a0)
{
	if (f_1aef_a1_i("ood7Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_2025_a1_b(object a0)
{
	if (f_1aef_a1_i("KnowBigVlad") == 1) {
		return true;
	}
	return false;
}

bool f_2031_a1_b(object a0)
{
	if (f_1aef_a1_i("KnowGeorg") == 1) {
		return true;
	}
	return false;
}

bool f_203d_a1_b(object a0)
{
	if (f_1aef_a1_i("KnowGrif") == 1) {
		return true;
	}
	return false;
}

bool f_2049_a1_b(object a0)
{
	if (f_1aef_a1_i("KnowKaterina") == 1) {
		return true;
	}
	return false;
}

bool f_2055_a1_b(object a0)
{
	if (f_1aef_a1_i("KnowLara") == 1) {
		return true;
	}
	return false;
}

bool f_2061_a1_b(object a0)
{
	if (f_1aef_a1_i("KnowPredictions") == 1) {
		return true;
	}
	return false;
}

bool f_206d_a1_b(object a0)
{
	if (f_1aef_a1_i("KnowStamatins") == 1) {
		return true;
	}
	return false;
}

bool f_2079_a1_b(object a0)
{
	if (f_1aef_a1_i("KnowUklad") == 1) {
		return true;
	}
	return false;
}

bool f_2085_a1_b(object a0)
{
	return false;
}

bool f_2088_a1_b(object a0)
{
	if (f_1b3e_a0_i() >= 18) {
		return true;
	}
	return false;
}

bool f_2093_a1_b(object a0)
{
	if (f_1b3e_a0_i() >= 12 && f_1b3e_a0_i() < 18) {
		return true;
	}
	return false;
}

object f_20a8_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_20b5_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_20a8_a0_o();
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

object f_20d2_a0_o(void)
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

void f_20e3_a3_v(object a0, string a1, float a2)
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

int f_2104_a0_i(void)
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

void f_2115_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 10, 1, 3081);
	f_20b5_a2_b(L0, -1);
}

void f_2125_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 50, 1, 12132);
	f_20b5_a2_b(L0, 10);
}

void f_2135_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 55, 1, 12137);
	f_20b5_a2_b(L0, 10);
}

void f_2145_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 56, 1, 12138);
	f_20b5_a2_b(L0, 10);
}

void f_2155_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 69, 1, 12151);
	f_20b5_a2_b(L0, 25);
}

void f_2165_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 22, 2, 3362);
	f_20b5_a2_b(L0, -1);
}

void f_2175_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 96, 2, 12178);
	f_20b5_a2_b(L0, 22);
}

void f_2185_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 98, 2, 12180);
	f_20b5_a2_b(L0, 22);
}

void f_2195_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 100, 2, 12182);
	f_20b5_a2_b(L0, 22);
}

void f_21a5_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 114, 1, 13737);
	f_20b5_a2_b(L0, 111);
}

void f_21b5_a0_v(void)
{
	g1 = false;
}

void f_21b9_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_1b46_a1_b(1)) {
		t6{a0};
		return;
	}
	if (f_1b46_a1_b(2)) {
		t8{a0};
		return;
	}
	if (f_1b46_a1_b(3)) {
		t10{a0};
		return;
	}
	if (f_1b46_a1_b(4)) {
		t12{a0};
		return;
	}
	if (f_1b46_a1_b(5)) {
		t14{a0};
		return;
	}
	if (f_1b46_a1_b(6)) {
		t4{a0};
		return;
	}
	if (f_1b46_a1_b(7)) {
		t16{a0};
		return;
	}
	f_1b4c_a0_b();
}

