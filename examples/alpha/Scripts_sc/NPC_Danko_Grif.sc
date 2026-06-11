event OnLoad 5;
event evt_11 11;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;

var object g0;
var bool g1;
var int g2;

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

task t1
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			f_18ea_a1_v("Neutral");
			@lshWaitForAnimEnd();
			if (tv0) {
				return;
			}
		}
	}

	void evt_11(int a0)
	{
		@lshStopAnimation();
		@StopTrade();
		tv0 = true;
	}
}

maintask t2
{
	void init(void)
	{
		f_1df0_a0_v();
		if (!f_1875_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_18ea_a1_v("Neutral");
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
		f_1e0a_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_1869_a1_b(a0);
		@WaitForAnimEnd();
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
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
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
		f_18b2_a1_v(a0);
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
			f_1a86_a2_v(tv1, tv0);
			f_ca_a1_v("Neutral");
			tv0->SetMessage(383);
			tv0->ClearReplies();
			tv0->AddReply(384, 448, 445);
			tv0->AddReply(385, 449, 446);
			tv0->AddReply(386, 450, 447);
			break;
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a0 == 444) {
				f_1a86_a2_v(tv1, tv0);
				f_ca_a1_v("Neutral");
				tv0->SetMessage(383);
				tv0->ClearReplies();
				tv0->AddReply(384, 448, 445);
				tv0->AddReply(385, 449, 446);
				tv0->AddReply(386, 450, 447);
				return;
			}
			if (a0 == 450) {
				f_ca_a1_v("Neutral");
				tv0->SetMessage(389);
				tv0->ClearReplies();
				tv0->AddReply(395, 454, 459);
				tv0->AddReply(396, 454, 460);
				return;
			}
			if (a0 == 449) {
				f_ca_a1_v("Neutral");
				tv0->SetMessage(388);
				tv0->ClearReplies();
				tv0->AddReply(394, 454, 456);
				tv0->AddReply(392, 454, 453);
				return;
			}
			if (a0 == 448) {
				f_ca_a1_v("Neutral");
				tv0->SetMessage(387);
				tv0->ClearReplies();
				tv0->AddReply(390, 454, 451);
				tv0->AddReply(391, 454, 452);
				return;
			}
			if (a0 == 454) {
				f_ca_a1_v("Neutral");
				tv0->SetMessage(393);
				tv0->ClearReplies();
				tv0->AddReply(397, -1, 463);
				tv0->AddReply(398, -1, 464);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
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
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
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
		f_18b2_a1_v(a0);
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
			if (f_1ab9_a1_b(tv1)) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(5289);
				tv0->ClearReplies();
				tv0->AddReply(5290, 5832, 5831);
				tv0->AddReply(5300, 5836, 5841);
				tv0->AddReply(5301, -1, 5843);
				break;
			}
			f_2bf_a1_v("Neutral");
			tv0->SetMessage(7666);
			tv0->ClearReplies();
			if (f_1ac5_a1_b(tv1) && f_1b0d_a1_b(tv1)) {
				tv0->AddReply(7667, 8496, 8462);
			}
			if (f_1bcb_a1_b(tv1) && f_1ad1_a1_b(tv1) || f_1c05_a1_b(tv1) && f_1ad1_a1_b(tv1)) {
				tv0->AddReply(7668, 8504, 8463);
			}
			if (f_1c3d_a1_b(tv1) && f_1b6b_a1_b(tv1)) {
				tv0->AddReply(7681, 8498, 8476);
			}
			if (f_1c79_a1_b(tv1) && f_1b77_a1_b(tv1)) {
				tv0->AddReply(7686, 8499, 8481);
			}
			if (f_1bbf_a1_b(tv1) && f_1b83_a1_b(tv1)) {
				tv0->AddReply(7687, 8500, 8482);
			}
			if (f_1c6d_a1_b(tv1) && f_1b8f_a1_b(tv1)) {
				tv0->AddReply(7691, 8501, 8486);
			}
			if (f_1c55_a1_b(tv1) && f_1ba7_a1_b(tv1)) {
				tv0->AddReply(7692, 8502, 8487);
			}
			if (!f_1b5f_a1_b(tv1) && f_1b9b_a1_b(tv1)) {
				tv0->AddReply(7693, 5818, 8488);
			}
			if (f_1b5f_a1_b(tv1) && f_1bb3_a1_b(tv1)) {
				tv0->AddReply(7694, 8491, 8489);
			}
			tv0->AddReply(14114, -1, 15328);
			tv0->AddReply(8702, -1, 9539);
			break;
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_2bf_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 5837) {
				f_1967_a2_v(tv1, tv0);
			}
			if (a1 == 5838) {
				f_1967_a2_v(tv1, tv0);
			}
			if (a1 == 5839) {
				f_1967_a2_v(tv1, tv0);
			}
			if (a1 == 5840) {
				f_1967_a2_v(tv1, tv0);
			}
			if (a1 == 5843) {
				f_1967_a2_v(tv1, tv0);
			}
			if (a1 == 5812) {
				f_196d_a2_v(tv1, tv0);
			}
			if (a1 == 5813) {
				f_196d_a2_v(tv1, tv0);
			}
			if (a1 == 8508) {
				f_1973_a2_v(tv1, tv0);
			}
			if (a1 == 8507) {
				f_1973_a2_v(tv1, tv0);
			}
			if (a1 == 8516) {
				f_19ea_a2_v(tv1, tv0);
			}
			if (a1 == 8526) {
				f_19f0_a2_v(tv1, tv0);
			}
			if (a1 == 8525) {
				f_19f0_a2_v(tv1, tv0);
			}
			if (a1 == 8530) {
				f_19f6_a2_v(tv1, tv0);
			}
			if (a1 == 8531) {
				f_19f6_a2_v(tv1, tv0);
			}
			if (a1 == 8534) {
				f_19fc_a2_v(tv1, tv0);
			}
			if (a1 == 8535) {
				f_19fc_a2_v(tv1, tv0);
			}
			if (a1 == 8543) {
				f_1a08_a2_v(tv1, tv0);
			}
			if (a1 == 8542) {
				f_1a08_a2_v(tv1, tv0);
			}
			if (a1 == 5823) {
				f_1a02_a2_v(tv1, tv0);
				f_1a0e_a2_v(tv1, tv0);
			}
			if (a1 == 15328) {
				f_1a81_a2_v(tv1, tv0);
			}
			if (a0 == 5830) {
				if (f_1ab9_a1_b(tv1)) {
					f_2bf_a1_v("Neutral");
					tv0->SetMessage(5289);
					tv0->ClearReplies();
					tv0->AddReply(5290, 5832, 5831);
					tv0->AddReply(5300, 5836, 5841);
					tv0->AddReply(5301, -1, 5843);
					return;
				}
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7666);
				tv0->ClearReplies();
				if (f_1ac5_a1_b(tv1) && f_1b0d_a1_b(tv1)) {
					tv0->AddReply(7667, 8496, 8462);
				}
				if (f_1bcb_a1_b(tv1) && f_1ad1_a1_b(tv1) || f_1c05_a1_b(tv1) && f_1ad1_a1_b(tv1)) {
					tv0->AddReply(7668, 8504, 8463);
				}
				if (f_1c3d_a1_b(tv1) && f_1b6b_a1_b(tv1)) {
					tv0->AddReply(7681, 8498, 8476);
				}
				if (f_1c79_a1_b(tv1) && f_1b77_a1_b(tv1)) {
					tv0->AddReply(7686, 8499, 8481);
				}
				if (f_1bbf_a1_b(tv1) && f_1b83_a1_b(tv1)) {
					tv0->AddReply(7687, 8500, 8482);
				}
				if (f_1c6d_a1_b(tv1) && f_1b8f_a1_b(tv1)) {
					tv0->AddReply(7691, 8501, 8486);
				}
				if (f_1c55_a1_b(tv1) && f_1ba7_a1_b(tv1)) {
					tv0->AddReply(7692, 8502, 8487);
				}
				if (!f_1b5f_a1_b(tv1) && f_1b9b_a1_b(tv1)) {
					tv0->AddReply(7693, 5818, 8488);
				}
				if (f_1b5f_a1_b(tv1) && f_1bb3_a1_b(tv1)) {
					tv0->AddReply(7694, 8491, 8489);
				}
				tv0->AddReply(14114, -1, 15328);
				tv0->AddReply(8702, -1, 9539);
				return;
			}
			if (a0 == 8491) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7695);
				tv0->ClearReplies();
				tv0->AddReply(7696, 8493, 8492);
				return;
			}
			if (a0 == 8493) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7697);
				tv0->ClearReplies();
				tv0->AddReply(5280, 5820, 5819);
				return;
			}
			if (a0 == 5820) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(5281);
				tv0->ClearReplies();
				tv0->AddReply(5282, 5822, 5821);
				tv0->AddReply(5285, 5822, 5824);
				return;
			}
			if (a0 == 5822) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(5283);
				tv0->ClearReplies();
				tv0->AddReply(5284, -1, 5823);
				return;
			}
			if (a0 == 5818) {
				f_19e4_a2_v(tv1, tv0);
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(5279);
				tv0->ClearReplies();
				tv0->AddReply(5286, 5827, 5826);
				tv0->AddReply(7698, 8491, 8494);
				return;
			}
			if (a0 == 5827) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(5287);
				tv0->ClearReplies();
				tv0->AddReply(5288, 5820, 5828);
				return;
			}
			if (a0 == 8502) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7705);
				tv0->ClearReplies();
				tv0->AddReply(7736, 8537, 8536);
				return;
			}
			if (a0 == 8537) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7737);
				tv0->ClearReplies();
				tv0->AddReply(7738, 8539, 8538);
				return;
			}
			if (a0 == 8539) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7739);
				tv0->ClearReplies();
				tv0->AddReply(7740, 8541, 8540);
				return;
			}
			if (a0 == 8541) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7741);
				tv0->ClearReplies();
				tv0->AddReply(7743, -1, 8543);
				tv0->AddReply(7742, -1, 8542);
				return;
			}
			if (a0 == 8501) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7704);
				tv0->ClearReplies();
				tv0->AddReply(7732, 8533, 8532);
				return;
			}
			if (a0 == 8533) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7733);
				tv0->ClearReplies();
				tv0->AddReply(7734, -1, 8534);
				tv0->AddReply(7735, -1, 8535);
				return;
			}
			if (a0 == 8500) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7703);
				tv0->ClearReplies();
				tv0->AddReply(7706, 8529, 8503);
				return;
			}
			if (a0 == 8529) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7729);
				tv0->ClearReplies();
				tv0->AddReply(7730, -1, 8530);
				tv0->AddReply(7731, -1, 8531);
				return;
			}
			if (a0 == 8499) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7702);
				tv0->ClearReplies();
				tv0->AddReply(7720, 8520, 8519);
				return;
			}
			if (a0 == 8520) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7721);
				tv0->ClearReplies();
				tv0->AddReply(7722, 8524, 8521);
				tv0->AddReply(7723, 8523, 8522);
				return;
			}
			if (a0 == 8523) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7724);
				tv0->ClearReplies();
				tv0->AddReply(7728, 8524, 8527);
				return;
			}
			if (a0 == 8524) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7725);
				tv0->ClearReplies();
				tv0->AddReply(7727, -1, 8526);
				tv0->AddReply(7726, -1, 8525);
				return;
			}
			if (a0 == 8498) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7701);
				tv0->ClearReplies();
				tv0->AddReply(7714, 8513, 8512);
				return;
			}
			if (a0 == 8513) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7715);
				tv0->ClearReplies();
				tv0->AddReply(7716, 8515, 8514);
				tv0->AddReply(7719, 8515, 8517);
				return;
			}
			if (a0 == 8515) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7717);
				tv0->ClearReplies();
				tv0->AddReply(7718, -1, 8516);
				return;
			}
			if (a0 == 8504) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7707);
				tv0->ClearReplies();
				tv0->AddReply(7708, 8506, 8505);
				return;
			}
			if (a0 == 8506) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7709);
				tv0->ClearReplies();
				tv0->AddReply(7711, -1, 8508);
				tv0->AddReply(7710, -1, 8507);
				return;
			}
			if (a0 == 8496) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(7699);
				tv0->ClearReplies();
				tv0->AddReply(7700, 5807, 8497);
				tv0->AddReply(7712, 5809, 8509);
				return;
			}
			if (a0 == 5807) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(5270);
				tv0->ClearReplies();
				tv0->AddReply(5271, 5809, 5808);
				tv0->AddReply(5278, 5809, 5816);
				return;
			}
			if (a0 == 5809) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(5272);
				tv0->ClearReplies();
				tv0->AddReply(5273, 5811, 5810);
				tv0->AddReply(5277, 5811, 5814);
				return;
			}
			if (a0 == 5811) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(5274);
				tv0->ClearReplies();
				tv0->AddReply(5275, -1, 5812);
				tv0->AddReply(5276, -1, 5813);
				return;
			}
			if (a0 == 5832) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(5291);
				tv0->ClearReplies();
				tv0->AddReply(5292, 5834, 5833);
				tv0->AddReply(5299, -1, 5840);
				return;
			}
			if (a0 == 5834) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(5293);
				tv0->ClearReplies();
				tv0->AddReply(5294, 5836, 5835);
				tv0->AddReply(5298, -1, 5839);
				return;
			}
			if (a0 == 5836) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(5295);
				tv0->ClearReplies();
				tv0->AddReply(5296, -1, 5837);
				tv0->AddReply(5297, -1, 5838);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
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
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
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
		f_18b2_a1_v(a0);
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
			if (f_1ae9_a1_b(tv1) && !f_1b01_a1_b(tv1) && !f_1af5_a1_b(tv1)) {
				f_793_a1_v("Neutral");
				tv0->SetMessage(6175);
				tv0->ClearReplies();
				if (!f_1add_a1_b(tv1)) {
					tv0->AddReply(6176, 6824, 6823);
				}
				if (!f_1add_a1_b(tv1)) {
					tv0->AddReply(6179, 6831, 6829);
				}
				if (f_1add_a1_b(tv1)) {
					tv0->AddReply(6180, 6836, 6830);
				}
				break;
			}
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_793_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 6850) {
				f_197f_a2_v(tv1, tv0);
				f_1985_a2_v(tv1, tv0);
				f_1a14_a2_v(tv1, tv0);
				f_1a24_a2_v(tv1, tv0);
			}
			if (a1 == 6845) {
				f_197f_a2_v(tv1, tv0);
			}
			if (a1 == 6848) {
				f_197f_a2_v(tv1, tv0);
			}
			if (a0 == 6822) {
				if (f_1ae9_a1_b(tv1) && !f_1b01_a1_b(tv1) && !f_1af5_a1_b(tv1)) {
					f_793_a1_v("Neutral");
					tv0->SetMessage(6175);
					tv0->ClearReplies();
					if (!f_1add_a1_b(tv1)) {
						tv0->AddReply(6176, 6824, 6823);
					}
					if (!f_1add_a1_b(tv1)) {
						tv0->AddReply(6179, 6831, 6829);
					}
					if (f_1add_a1_b(tv1)) {
						tv0->AddReply(6180, 6836, 6830);
					}
					return;
				}
			}
			if (a0 == 6831) {
				f_793_a1_v("Neutral");
				tv0->SetMessage(6181);
				tv0->ClearReplies();
				tv0->AddReply(6184, 6832, 6834);
				return;
			}
			if (a0 == 6824) {
				f_793_a1_v("Neutral");
				tv0->SetMessage(6177);
				tv0->ClearReplies();
				tv0->AddReply(6178, 6832, 6825);
				return;
			}
			if (a0 == 6832) {
				f_1979_a2_v(tv1, tv0);
				f_793_a1_v("Neutral");
				tv0->SetMessage(6182);
				tv0->ClearReplies();
				tv0->AddReply(6183, 6836, 6833);
				return;
			}
			if (a0 == 6836) {
				f_793_a1_v("Neutral");
				tv0->SetMessage(6185);
				tv0->ClearReplies();
				tv0->AddReply(6186, 6840, 6837);
				tv0->AddReply(6187, 6839, 6838);
				return;
			}
			if (a0 == 6839) {
				f_793_a1_v("Neutral");
				tv0->SetMessage(6188);
				tv0->ClearReplies();
				tv0->AddReply(6190, 6840, 6842);
				tv0->AddReply(6191, 6844, 6843);
				return;
			}
			if (a0 == 6844) {
				f_793_a1_v("Neutral");
				tv0->SetMessage(6192);
				tv0->ClearReplies();
				tv0->AddReply(6193, -1, 6845);
				tv0->AddReply(6194, 6847, 6846);
				return;
			}
			if (a0 == 6847) {
				f_793_a1_v("Neutral");
				tv0->SetMessage(6195);
				tv0->ClearReplies();
				tv0->AddReply(6196, -1, 6848);
				return;
			}
			if (a0 == 6840) {
				f_793_a1_v("Neutral");
				tv0->SetMessage(6189);
				tv0->ClearReplies();
				tv0->AddReply(6197, -1, 6850);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
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
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
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
		f_18b2_a1_v(a0);
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
			f_98a_a1_v("Neutral");
			tv0->SetMessage(6959);
			tv0->ClearReplies();
			if (f_1b25_a1_b(tv1) && f_1b49_a1_b(tv1)) {
				tv0->AddReply(7328, 8080, 8079);
			}
			if (f_1b31_a1_b(tv1)) {
				tv0->AddReply(7319, 8070, 8069);
			}
			tv0->AddReply(6970, 7678, 7677);
			if (f_1b3d_a1_b(tv1)) {
				tv0->AddReply(7335, 8049, 8087);
			}
			tv0->AddReply(7530, -1, 8312);
			break;
			if (f_1b19_a1_b(tv1)) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(7314);
				tv0->ClearReplies();
				if (f_1c49_a1_b(tv1)) {
					tv0->AddReply(7315, 8066, 8065);
				}
				tv0->AddReply(14115, -1, 15329);
				tv0->AddReply(14116, -1, 15330);
				break;
			}
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_98a_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 7671) {
				f_19a9_a2_v(tv1, tv0);
				f_19bb_a2_v(tv1, tv0);
				f_19c4_a2_v(tv1, tv0);
				f_19d9_a2_v(tv1, tv0);
				f_199d_a2_v(tv1, tv0);
			}
			if (a1 == 8093) {
				f_19af_a2_v(tv1, tv0);
			}
			if (a1 == 8094) {
				f_19af_a2_v(tv1, tv0);
			}
			if (a1 == 8054) {
				f_19b5_a2_v(tv1, tv0);
			}
			if (a1 == 8055) {
				f_19b5_a2_v(tv1, tv0);
			}
			if (a1 == 8060) {
				f_19b5_a2_v(tv1, tv0);
			}
			if (a1 == 8061) {
				f_19b5_a2_v(tv1, tv0);
			}
			if (a1 == 8065) {
				f_1a8c_a2_v(tv1, tv0);
			}
			if (a1 == 8067) {
				f_19a3_a2_v(tv1, tv0);
			}
			if (a1 == 8068) {
				f_19a3_a2_v(tv1, tv0);
			}
			if (a1 == 15329) {
				f_1a81_a2_v(tv1, tv0);
			}
			if (a0 == 7666) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(6959);
				tv0->ClearReplies();
				if (f_1b25_a1_b(tv1) && f_1b49_a1_b(tv1)) {
					tv0->AddReply(7328, 8080, 8079);
				}
				if (f_1b31_a1_b(tv1)) {
					tv0->AddReply(7319, 8070, 8069);
				}
				tv0->AddReply(6970, 7678, 7677);
				if (f_1b3d_a1_b(tv1)) {
					tv0->AddReply(7335, 8049, 8087);
				}
				tv0->AddReply(7530, -1, 8312);
				return;
				if (f_1b19_a1_b(tv1)) {
					f_98a_a1_v("Neutral");
					tv0->SetMessage(7314);
					tv0->ClearReplies();
					if (f_1c49_a1_b(tv1)) {
						tv0->AddReply(7315, 8066, 8065);
					}
					tv0->AddReply(14115, -1, 15329);
					tv0->AddReply(14116, -1, 15330);
					return;
				}
			}
			if (a0 == 8066) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(7316);
				tv0->ClearReplies();
				tv0->AddReply(7317, -1, 8067);
				tv0->AddReply(7318, -1, 8068);
				return;
			}
			if (a0 == 8049) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(7300);
				tv0->ClearReplies();
				tv0->AddReply(7301, 8051, 8050);
				tv0->AddReply(7313, 8053, 8062);
				return;
			}
			if (a0 == 8051) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(7302);
				tv0->ClearReplies();
				tv0->AddReply(7303, 8053, 8052);
				tv0->AddReply(7307, 8057, 8056);
				return;
			}
			if (a0 == 8057) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(7308);
				tv0->ClearReplies();
				tv0->AddReply(7309, 8059, 8058);
				return;
			}
			if (a0 == 8059) {
				f_98a_a1_v("Suspense");
				tv0->SetMessage(7310);
				tv0->ClearReplies();
				tv0->AddReply(7311, -1, 8060);
				tv0->AddReply(7312, -1, 8061);
				return;
			}
			if (a0 == 8053) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(7304);
				tv0->ClearReplies();
				tv0->AddReply(7305, -1, 8054);
				tv0->AddReply(7306, -1, 8055);
				return;
			}
			if (a0 == 7678) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(6971);
				tv0->ClearReplies();
				tv0->AddReply(7344, -1, 8097);
				return;
			}
			if (a0 == 8070) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(7320);
				tv0->ClearReplies();
				tv0->AddReply(6965, 7673, 7672);
				return;
			}
			if (a0 == 7673) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(6966);
				tv0->ClearReplies();
				tv0->AddReply(6967, 8088, 7674);
				tv0->AddReply(7343, 8088, 8095);
				return;
			}
			if (a0 == 8088) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(7336);
				tv0->ClearReplies();
				tv0->AddReply(7337, 8090, 8089);
				return;
			}
			if (a0 == 8090) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(7338);
				tv0->ClearReplies();
				tv0->AddReply(7339, 8092, 8091);
				tv0->AddReply(7342, -1, 8094);
				return;
			}
			if (a0 == 8092) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(7340);
				tv0->ClearReplies();
				tv0->AddReply(7341, -1, 8093);
				return;
			}
			if (a0 == 8080) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(7329);
				tv0->ClearReplies();
				tv0->AddReply(7330, 8082, 8081);
				return;
			}
			if (a0 == 8082) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(7331);
				tv0->ClearReplies();
				tv0->AddReply(7332, 7670, 8083);
				return;
			}
			if (a0 == 7670) {
				f_98a_a1_v("Neutral");
				tv0->SetMessage(6963);
				tv0->ClearReplies();
				tv0->AddReply(6964, -1, 7671);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
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
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
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
		f_18b2_a1_v(a0);
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
			if (f_1bd5_a1_b(tv1) && f_1be1_a1_b(tv1)) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(10952);
				tv0->ClearReplies();
				tv0->AddReply(10953, 12113, 12112);
				tv0->AddReply(10960, 12113, 12119);
				break;
			}
			f_c77_a1_v("Neutral");
			tv0->SetMessage(9615);
			tv0->ClearReplies();
			if (f_1bed_a1_b(tv1) && f_1bf9_a1_b(tv1)) {
				tv0->AddReply(10970, 12133, 12132);
			}
			if (f_1b55_a1_b(tv1)) {
				tv0->AddReply(10948, 12108, 12107);
			}
			if (f_1b55_a1_b(tv1)) {
				tv0->AddReply(9640, 10581, 10608);
			}
			if (f_1b55_a1_b(tv1)) {
				tv0->AddReply(10947, 10612, 12106);
			}
			tv0->AddReply(14119, -1, 15333);
			tv0->AddReply(9616, -1, 10580);
			break;
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_c77_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 12126) {
				f_1a34_a2_v(tv1, tv0);
				f_1a3a_a2_v(tv1, tv0);
			}
			if (a1 == 12127) {
				f_1a34_a2_v(tv1, tv0);
				f_1a3a_a2_v(tv1, tv0);
			}
			if (a1 == 12118) {
				f_1a34_a2_v(tv1, tv0);
				f_1a3a_a2_v(tv1, tv0);
			}
			if (a1 == 12137) {
				f_1a5a_a2_v(tv1, tv0);
				f_198c_a2_v(tv1, tv0);
				f_1997_a2_v(tv1, tv0);
			}
			if (a1 == 12138) {
				f_1a5a_a2_v(tv1, tv0);
				f_198c_a2_v(tv1, tv0);
				f_1997_a2_v(tv1, tv0);
			}
			if (a1 == 15333) {
				f_1a81_a2_v(tv1, tv0);
			}
			if (a0 == 12111) {
				if (f_1bd5_a1_b(tv1) && f_1be1_a1_b(tv1)) {
					f_c77_a1_v("Neutral");
					tv0->SetMessage(10952);
					tv0->ClearReplies();
					tv0->AddReply(10953, 12113, 12112);
					tv0->AddReply(10960, 12113, 12119);
					return;
				}
				f_c77_a1_v("Neutral");
				tv0->SetMessage(9615);
				tv0->ClearReplies();
				if (f_1bed_a1_b(tv1) && f_1bf9_a1_b(tv1)) {
					tv0->AddReply(10970, 12133, 12132);
				}
				if (f_1b55_a1_b(tv1)) {
					tv0->AddReply(10948, 12108, 12107);
				}
				if (f_1b55_a1_b(tv1)) {
					tv0->AddReply(9640, 10581, 10608);
				}
				if (f_1b55_a1_b(tv1)) {
					tv0->AddReply(10947, 10612, 12106);
				}
				tv0->AddReply(14119, -1, 15333);
				tv0->AddReply(9616, -1, 10580);
				return;
			}
			if (a0 == 10612) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(9643);
				tv0->ClearReplies();
				tv0->AddReply(9644, 10614, 10613);
				tv0->AddReply(9648, 10610, 10617);
				return;
			}
			if (a0 == 10610) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(9641);
				tv0->ClearReplies();
				tv0->AddReply(9642, -1, 10611);
				return;
			}
			if (a0 == 10614) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(9645);
				tv0->ClearReplies();
				tv0->AddReply(9646, -1, 10615);
				tv0->AddReply(9647, -1, 10616);
				return;
			}
			if (a0 == 10581) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(9617);
				tv0->ClearReplies();
				tv0->AddReply(9636, 10604, 10603);
				return;
			}
			if (a0 == 10604) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(9637);
				tv0->ClearReplies();
				tv0->AddReply(9638, -1, 10605);
				return;
			}
			if (a0 == 12108) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(10949);
				tv0->ClearReplies();
				tv0->AddReply(10950, 12110, 12109);
				tv0->AddReply(10969, 10583, 12130);
				return;
			}
			if (a0 == 12110) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(10951);
				tv0->ClearReplies();
				tv0->AddReply(9618, 10583, 10582);
				tv0->AddReply(10967, -1, 12128);
				tv0->AddReply(10972, -1, 12134);
				return;
			}
			if (a0 == 10583) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(9619);
				tv0->ClearReplies();
				tv0->AddReply(9620, 10585, 10584);
				tv0->AddReply(9635, 10585, 10601);
				return;
			}
			if (a0 == 10585) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(9621);
				tv0->ClearReplies();
				tv0->AddReply(9623, 10588, 10587);
				tv0->AddReply(9634, 10595, 10599);
				tv0->AddReply(9622, -1, 10586);
				return;
			}
			if (a0 == 10588) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(9624);
				tv0->ClearReplies();
				tv0->AddReply(9625, -1, 10589);
				tv0->AddReply(9626, 10591, 10590);
				tv0->AddReply(9630, 10595, 10594);
				return;
			}
			if (a0 == 10595) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(9631);
				tv0->ClearReplies();
				tv0->AddReply(9632, -1, 10596);
				tv0->AddReply(9633, 10591, 10597);
				return;
			}
			if (a0 == 10591) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(9627);
				tv0->ClearReplies();
				tv0->AddReply(9628, -1, 10592);
				tv0->AddReply(9629, -1, 10593);
				return;
			}
			if (a0 == 12133) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(10971);
				tv0->ClearReplies();
				tv0->AddReply(10973, 12136, 12135);
				return;
			}
			if (a0 == 12136) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(10974);
				tv0->ClearReplies();
				tv0->AddReply(10975, -1, 12137);
				tv0->AddReply(10976, -1, 12138);
				return;
			}
			if (a0 == 12113) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(10954);
				tv0->ClearReplies();
				tv0->AddReply(10955, 12115, 12114);
				tv0->AddReply(10961, 12117, 12121);
				return;
			}
			if (a0 == 12115) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(10956);
				tv0->ClearReplies();
				tv0->AddReply(10957, 12117, 12116);
				return;
			}
			if (a0 == 12117) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(10958);
				tv0->ClearReplies();
				tv0->AddReply(10963, 12125, 12124);
				tv0->AddReply(10959, -1, 12118);
				return;
			}
			if (a0 == 12125) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(10964);
				tv0->ClearReplies();
				tv0->AddReply(10965, -1, 12126);
				tv0->AddReply(10966, -1, 12127);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
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
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
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
		f_18b2_a1_v(a0);
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
			f_f78_a1_v("Neutral");
			tv0->SetMessage(9843);
			tv0->ClearReplies();
			if (f_1b55_a1_b(tv1)) {
				tv0->AddReply(9844, 10844, 10843);
			}
			if (f_1b55_a1_b(tv1)) {
				tv0->AddReply(9848, 10848, 10847);
			}
			tv0->AddReply(14117, -1, 15331);
			tv0->AddReply(14118, -1, 15332);
			break;
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_f78_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 15331) {
				f_1a81_a2_v(tv1, tv0);
			}
			if (a0 == 10842) {
				f_f78_a1_v("Neutral");
				tv0->SetMessage(9843);
				tv0->ClearReplies();
				if (f_1b55_a1_b(tv1)) {
					tv0->AddReply(9844, 10844, 10843);
				}
				if (f_1b55_a1_b(tv1)) {
					tv0->AddReply(9848, 10848, 10847);
				}
				tv0->AddReply(14117, -1, 15331);
				tv0->AddReply(14118, -1, 15332);
				return;
			}
			if (a0 == 10848) {
				f_f78_a1_v("Neutral");
				tv0->SetMessage(9849);
				tv0->ClearReplies();
				tv0->AddReply(9850, 10850, 10849);
				tv0->AddReply(9857, 10858, 10857);
				return;
			}
			if (a0 == 10858) {
				f_f78_a1_v("Neutral");
				tv0->SetMessage(9858);
				tv0->ClearReplies();
				tv0->AddReply(9859, 10860, 10859);
				tv0->AddReply(9863, -1, 10863);
				return;
			}
			if (a0 == 10860) {
				f_f78_a1_v("Neutral");
				tv0->SetMessage(9860);
				tv0->ClearReplies();
				tv0->AddReply(9861, -1, 10861);
				tv0->AddReply(9862, -1, 10862);
				return;
			}
			if (a0 == 10850) {
				f_f78_a1_v("Neutral");
				tv0->SetMessage(9851);
				tv0->ClearReplies();
				tv0->AddReply(9852, 10852, 10851);
				tv0->AddReply(9856, 10852, 10855);
				return;
			}
			if (a0 == 10852) {
				f_f78_a1_v("Neutral");
				tv0->SetMessage(9853);
				tv0->ClearReplies();
				tv0->AddReply(9854, -1, 10853);
				tv0->AddReply(9855, -1, 10854);
				return;
			}
			if (a0 == 10844) {
				f_f78_a1_v("Neutral");
				tv0->SetMessage(9845);
				tv0->ClearReplies();
				tv0->AddReply(9846, -1, 10845);
				tv0->AddReply(9847, -1, 10846);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
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
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
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
		f_18b2_a1_v(a0);
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
			if (f_1b55_a1_b(tv1)) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11720);
				tv0->ClearReplies();
				tv0->AddReply(11721, 12928, 12927);
				break;
			}
			f_1115_a1_v("Neutral");
			tv0->SetMessage(11704);
			tv0->ClearReplies();
			if (f_1c0f_a1_b(tv1) && f_1c1b_a1_b(tv1)) {
				tv0->AddReply(11705, 12910, 12909);
			}
			if (f_1c0f_a1_b(tv1) && !f_1c31_a1_b(tv1) && f_1c27_a1_b(tv1)) {
				tv0->AddReply(11734, 12941, 12940);
			}
			tv0->AddReply(14120, -1, 15334);
			tv0->AddReply(11739, -1, 12945);
			break;
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_1115_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 12936) {
				f_1a60_a2_v(tv1, tv0);
				f_1a98_a2_v(tv1, tv0);
			}
			if (a1 == 12939) {
				f_1a60_a2_v(tv1, tv0);
				f_1a98_a2_v(tv1, tv0);
			}
			if (a1 == 13653) {
				f_1a60_a2_v(tv1, tv0);
			}
			if (a1 == 12944) {
				f_1a66_a2_v(tv1, tv0);
				f_1aa8_a2_v(tv1, tv0);
			}
			if (a1 == 15334) {
				f_1a81_a2_v(tv1, tv0);
			}
			if (a0 == 12926) {
				if (f_1b55_a1_b(tv1)) {
					f_1115_a1_v("Neutral");
					tv0->SetMessage(11720);
					tv0->ClearReplies();
					tv0->AddReply(11721, 12928, 12927);
					return;
				}
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11704);
				tv0->ClearReplies();
				if (f_1c0f_a1_b(tv1) && f_1c1b_a1_b(tv1)) {
					tv0->AddReply(11705, 12910, 12909);
				}
				if (f_1c0f_a1_b(tv1) && !f_1c31_a1_b(tv1) && f_1c27_a1_b(tv1)) {
					tv0->AddReply(11734, 12941, 12940);
				}
				tv0->AddReply(14120, -1, 15334);
				tv0->AddReply(11739, -1, 12945);
				return;
			}
			if (a0 == 12941) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11735);
				tv0->ClearReplies();
				tv0->AddReply(11736, 12943, 12942);
				return;
			}
			if (a0 == 12943) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11737);
				tv0->ClearReplies();
				tv0->AddReply(11738, -1, 12944);
				return;
			}
			if (a0 == 12910) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11706);
				tv0->ClearReplies();
				tv0->AddReply(11707, 12913, 12911);
				tv0->AddReply(11708, 12913, 12912);
				return;
			}
			if (a0 == 12913) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11709);
				tv0->ClearReplies();
				tv0->AddReply(11710, 12916, 12915);
				tv0->AddReply(11713, 12919, 12918);
				return;
			}
			if (a0 == 12919) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11714);
				tv0->ClearReplies();
				tv0->AddReply(11715, 12916, 12920);
				return;
			}
			if (a0 == 12916) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11711);
				tv0->ClearReplies();
				tv0->AddReply(11712, 12935, 12917);
				return;
			}
			if (a0 == 12935) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11729);
				tv0->ClearReplies();
				tv0->AddReply(11730, -1, 12936);
				tv0->AddReply(11731, 12938, 12937);
				if (f_1c27_a1_b(tv1)) {
					tv0->AddReply(12485, 12941, 13653);
				}
				return;
			}
			if (a0 == 12938) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11732);
				tv0->ClearReplies();
				tv0->AddReply(11733, -1, 12939);
				return;
			}
			if (a0 == 12928) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11722);
				tv0->ClearReplies();
				tv0->AddReply(11723, 12930, 12929);
				return;
			}
			if (a0 == 12930) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11724);
				tv0->ClearReplies();
				tv0->AddReply(11725, -1, 12931);
				tv0->AddReply(11726, 12933, 12932);
				return;
			}
			if (a0 == 12933) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11727);
				tv0->ClearReplies();
				tv0->AddReply(11728, 12922, 12934);
				return;
			}
			if (a0 == 12922) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11716);
				tv0->ClearReplies();
				tv0->AddReply(11717, 12924, 12923);
				return;
			}
			if (a0 == 12924) {
				f_1115_a1_v("Neutral");
				tv0->SetMessage(11718);
				tv0->ClearReplies();
				tv0->AddReply(11719, -1, 12925);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t17
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t18{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18b2_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t18
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
			f_134b_a1_v("Neutral");
			tv0->SetMessage(14122);
			tv0->ClearReplies();
			tv0->AddReply(14123, -1, 15337);
			tv0->AddReply(14124, -1, 15338);
			break;
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_134b_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 15337) {
				f_1a81_a2_v(tv1, tv0);
			}
			if (a0 == 15336) {
				f_134b_a1_v("Neutral");
				tv0->SetMessage(14122);
				tv0->ClearReplies();
				tv0->AddReply(14123, -1, 15337);
				tv0->AddReply(14124, -1, 15338);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t19
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t20{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18b2_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t20
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
			f_1406_a1_v("Neutral");
			tv0->SetMessage(14126);
			tv0->ClearReplies();
			tv0->AddReply(14127, -1, 15341);
			tv0->AddReply(14128, -1, 15342);
			break;
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_1406_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 15341) {
				f_1a81_a2_v(tv1, tv0);
			}
			if (a0 == 15340) {
				f_1406_a1_v("Neutral");
				tv0->SetMessage(14126);
				tv0->ClearReplies();
				tv0->AddReply(14127, -1, 15341);
				tv0->AddReply(14128, -1, 15342);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t21
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t22{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18b2_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t22
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
			f_14c1_a1_v("Neutral");
			tv0->SetMessage(14130);
			tv0->ClearReplies();
			tv0->AddReply(14131, -1, 15345);
			tv0->AddReply(14132, -1, 15346);
			break;
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_14c1_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 15345) {
				f_1a81_a2_v(tv1, tv0);
			}
			if (a0 == 15344) {
				f_14c1_a1_v("Neutral");
				tv0->SetMessage(14130);
				tv0->ClearReplies();
				tv0->AddReply(14131, -1, 15345);
				tv0->AddReply(14132, -1, 15346);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t23
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t24{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18b2_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t24
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
			f_157c_a1_v("Neutral");
			tv0->SetMessage(14134);
			tv0->ClearReplies();
			tv0->AddReply(14135, -1, 15349);
			tv0->AddReply(14136, -1, 15350);
			break;
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_157c_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 15349) {
				f_1a81_a2_v(tv1, tv0);
			}
			if (a0 == 15348) {
				f_157c_a1_v("Neutral");
				tv0->SetMessage(14134);
				tv0->ClearReplies();
				tv0->AddReply(14135, -1, 15349);
				tv0->AddReply(14136, -1, 15350);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t25
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t26{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18b2_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t26
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
			f_1637_a1_v("Neutral");
			tv0->SetMessage(14138);
			tv0->ClearReplies();
			tv0->AddReply(14139, -1, 15353);
			tv0->AddReply(14140, -1, 15354);
			break;
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_1637_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 15353) {
				f_1a81_a2_v(tv1, tv0);
			}
			if (a0 == 15352) {
				f_1637_a1_v("Neutral");
				tv0->SetMessage(14138);
				tv0->ClearReplies();
				tv0->AddReply(14139, -1, 15353);
				tv0->AddReply(14140, -1, 15354);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t27
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t28{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18b2_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t28
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
			f_16f2_a1_v("Neutral");
			tv0->SetMessage(14186);
			tv0->ClearReplies();
			tv0->AddReply(14187, -1, 15401);
			tv0->AddReply(14188, -1, 15402);
			break;
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_16f2_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 15401) {
				f_1a81_a2_v(tv1, tv0);
			}
			if (a0 == 15400) {
				f_16f2_a1_v("Neutral");
				tv0->SetMessage(14186);
				tv0->ClearReplies();
				tv0->AddReply(14187, -1, 15401);
				tv0->AddReply(14188, -1, 15402);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t29
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_187a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1961_a0_i());
		L0->SetPhoto(f_1963_a0_s());
		L0->SetPlayerName(f_1daf_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t30{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_18b2_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t30
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
			f_17b2_a1_v("Neutral");
			tv0->SetMessage(15251);
			tv0->ClearReplies();
			if (f_1c61_a1_b(tv1)) {
				tv0->AddReply(15252, 16531, 16529);
			}
			tv0->AddReply(15338, -1, 16561);
			break;
			return;
		}
		if (f_1965_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_18ea_a1_v(tv2);
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

	void f_17b2_a1_v(string a0)
	{
		if (!f_1965_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_18ea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_18fc_a0_v();
			if (a1 == 16529) {
				f_1a92_a2_v(tv1, tv0);
			}
			if (a0 == 16528) {
				f_17b2_a1_v("Neutral");
				tv0->SetMessage(15251);
				tv0->ClearReplies();
				if (f_1c61_a1_b(tv1)) {
					tv0->AddReply(15252, 16531, 16529);
				}
				tv0->AddReply(15338, -1, 16561);
				return;
			}
			if (a0 == 16531) {
				f_17b2_a1_v("Neutral");
				tv0->SetMessage(15254);
				tv0->ClearReplies();
				tv0->AddReply(15255, 16533, 16532);
				return;
			}
			if (a0 == 16533) {
				f_17b2_a1_v("Neutral");
				tv0->SetMessage(15256);
				tv0->ClearReplies();
				tv0->AddReply(15257, 16536, 16534);
				tv0->AddReply(15258, 16536, 16535);
				return;
			}
			if (a0 == 16536) {
				f_17b2_a1_v("Neutral");
				tv0->SetMessage(15259);
				tv0->ClearReplies();
				tv0->AddReply(15261, 16540, 16539);
				tv0->AddReply(15260, 16540, 16538);
				return;
			}
			if (a0 == 16540) {
				f_17b2_a1_v("Neutral");
				tv0->SetMessage(15262);
				tv0->ClearReplies();
				tv0->AddReply(15263, 16542, 16541);
				return;
			}
			if (a0 == 16542) {
				f_17b2_a1_v("Neutral");
				tv0->SetMessage(15264);
				tv0->ClearReplies();
				tv0->AddReply(15266, -1, 16545);
				tv0->AddReply(15265, -1, 16544);
				return;
			}
			tv3 = true;
			if (f_1965_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

void f_1862_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1869_a1_b(object a0)
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

bool f_1875_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_187a_a1_b(object a0)
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
	L5 = L3 * 70 + f_1903_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_18b2_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

bool f_18b6_a1_b(object a0)
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
	L5 = L3 * 70 - [0.0, 10.0, 0.0];
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

void f_18e6_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_18ea_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_18fc_a0_v(void)
{
	if (f_1965_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_1903_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_190d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_1912_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

void f_1922_a3_v(object a0, object a1, int a2)
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

void f_192f_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1922_a3_v(a0, L0, a2);
}

float f_193c_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1941_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_194a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_1952_a1_b(int a0)
{
	return f_1941_a0_i() == a0;
}

bool f_1958_a0_b(void)
{
	bool L0;
	f_18ea_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_1961_a0_i(void)
{
	return 2860;
}

string f_1963_a0_s(void)
{
	return "ui/NPC_Grif.png";
}

bool f_1965_a0_b(void)
{
	return true;
}

void f_1967_a2_v(object a0, object a1)
{
	@SetVariable("ood1Grif1", 1);
}

void f_196d_a2_v(object a0, object a1)
{
	@SetVariable("ood1Grif2", 1);
}

void f_1973_a2_v(object a0, object a1)
{
	@SetVariable("ood1Grif3", 1);
}

void f_1979_a2_v(object a0, object a1)
{
	@SetVariable("KnowEpidemic", 1);
}

void f_197f_a2_v(object a0, object a1)
{
	@SetVariable("ood1GrifMQ1", 1);
}

void f_1985_a2_v(object a0, object a1)
{
	f_1912_a2_v("warehouse_rubin@door1", false);
}

void f_198c_a2_v(object a0, object a1)
{
	@Trace("money10000 is given");
	f_1862_a3_v(a0, "money", 10000);
}

void f_1997_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_199d_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_19a3_a2_v(object a0, object a1)
{
	@SetVariable("ood2Grif1", 1);
}

void f_19a9_a2_v(object a0, object a1)
{
	@SetVariable("ood2Grif2", 1);
}

void f_19af_a2_v(object a0, object a1)
{
	@SetVariable("ood2Grif3", 1);
}

void f_19b5_a2_v(object a0, object a1)
{
	@SetVariable("ood2Grif4", 1);
}

void f_19bb_a2_v(object a0, object a1)
{
	@SetVariable("d2q02", 7);
	f_1dc0_a0_v();
}

void f_19c4_a2_v(object a0, object a1)
{
	object L0;
	@Trace("Revolver is given");
	@CreateInvItem(L0);
	L0->SetItemName("Revolver");
	L0->SetProperty("durability", 30);
	f_1922_a3_v(a0, L0, 1);
}

void f_19d9_a2_v(object a0, object a1)
{
	@Trace("revolver ammo2 is given");
	f_192f_a3_v(a0, "revolver_ammo", 2);
}

void f_19e4_a2_v(object a0, object a1)
{
	@SetVariable("KnowBurahDead", 1);
}

void f_19ea_a2_v(object a0, object a1)
{
	@SetVariable("ood1Grif4", 1);
}

void f_19f0_a2_v(object a0, object a1)
{
	@SetVariable("ood1Grif5", 1);
}

void f_19f6_a2_v(object a0, object a1)
{
	@SetVariable("ood1Grif6", 1);
}

void f_19fc_a2_v(object a0, object a1)
{
	@SetVariable("ood1Grif7", 1);
}

void f_1a02_a2_v(object a0, object a1)
{
	@SetVariable("ood1Grif8", 1);
}

void f_1a08_a2_v(object a0, object a1)
{
	@SetVariable("ood1Grif9", 1);
}

void f_1a0e_a2_v(object a0, object a1)
{
	@SetVariable("ood1Grif10", 1);
}

void f_1a14_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1cdd_a0_o();
	L0->AddMark("d1q01GrifAboutRubin", "pt_map_rubin", 1, 8649, f_193c_a0_f());
}

void f_1a24_a2_v(object a0, object a1)
{
	f_1cee_a3_v(f_1cdd_a0_o(), "pt_map_rubin", 2);
	a1->ShowMap(f_1cdd_a0_o());
}

void f_1a34_a2_v(object a0, object a1)
{
	@SetVariable("ood4Grif1", 1);
}

void f_1a3a_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q03", 2);
	L0 = f_1cdd_a0_o();
	L0->AddMark("d4q03GrifGotoAlexandr", "pt_map_alexandr", 0, 15331, f_193c_a0_f());
	L0->AddMark("d4q03GrifGotoAlexandrSelf", "pt_map_grif", 0, 15332, f_193c_a0_f());
	f_1dd0_a0_v();
}

void f_1a5a_a2_v(object a0, object a1)
{
	@SetVariable("ood4Grif2", 1);
}

void f_1a60_a2_v(object a0, object a1)
{
	@SetVariable("ood5Grif1", 1);
}

void f_1a66_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q01ThiefsWillHelp", 1);
	@SetVariable("d5q01PlayCutscene", 1);
	L0 = f_1cdd_a0_o();
	L0->AddMark("d5q01GrifWillHelp", "pt_map_grif", 1, 15353, f_193c_a0_f());
	f_1de0_a0_v();
}

void f_1a81_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

void f_1a86_a2_v(object a0, object a1)
{
	@SetVariable("KnowGrif", 1);
}

void f_1a8c_a2_v(object a0, object a1)
{
	@SetVariable("ood2Grif5", 1);
}

void f_1a92_a2_v(object a0, object a1)
{
	@SetVariable("ood12Grif1", 1);
}

void f_1a98_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1cdd_a0_o();
	L0->AddMark("d5q01GrifWantsMoney", "pt_map_grif", 1, 15350, f_193c_a0_f());
}

void f_1aa8_a2_v(object a0, object a1)
{
	float L0;
	a0->GetProperty("money", L0);
	L0 = L0 - 40000;
	if (L0 < 0) {
		L0 = 0;
	}
	a0->SetProperty("money", L0);
	@Trace("money 40000 removed");
}

bool f_1ab9_a1_b(object a0)
{
	if (f_190d_a1_i("ood1Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_1ac5_a1_b(object a0)
{
	if (f_190d_a1_i("ood1Grif2") == 0) {
		return true;
	}
	return false;
}

bool f_1ad1_a1_b(object a0)
{
	if (f_190d_a1_i("ood1Grif3") == 0) {
		return true;
	}
	return false;
}

bool f_1add_a1_b(object a0)
{
	if (f_190d_a1_i("KnowEpidemic") == 1) {
		return true;
	}
	return false;
}

bool f_1ae9_a1_b(object a0)
{
	if (f_190d_a1_i("ood1GrifMQ1") == 0) {
		return true;
	}
	return false;
}

bool f_1af5_a1_b(object a0)
{
	if (f_190d_a1_i("d1q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1b01_a1_b(object a0)
{
	if (f_190d_a1_i("d1q01") == 0) {
		return true;
	}
	return false;
}

bool f_1b0d_a1_b(object a0)
{
	if (f_190d_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_1b19_a1_b(object a0)
{
	if (f_190d_a1_i("ood2Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_1b25_a1_b(object a0)
{
	if (f_190d_a1_i("ood2Grif2") == 0) {
		return true;
	}
	return false;
}

bool f_1b31_a1_b(object a0)
{
	if (f_190d_a1_i("ood2Grif3") == 0) {
		return true;
	}
	return false;
}

bool f_1b3d_a1_b(object a0)
{
	if (f_190d_a1_i("ood2Grif4") == 0) {
		return true;
	}
	return false;
}

bool f_1b49_a1_b(object a0)
{
	if (f_190d_a1_i("d2q02") == 6) {
		return true;
	}
	return false;
}

bool f_1b55_a1_b(object a0)
{
	if (f_1c85_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1b5f_a1_b(object a0)
{
	if (f_190d_a1_i("KnowBurahDead") == 1) {
		return true;
	}
	return false;
}

bool f_1b6b_a1_b(object a0)
{
	if (f_190d_a1_i("ood1Grif4") == 0) {
		return true;
	}
	return false;
}

bool f_1b77_a1_b(object a0)
{
	if (f_190d_a1_i("ood1Grif5") == 0) {
		return true;
	}
	return false;
}

bool f_1b83_a1_b(object a0)
{
	if (f_190d_a1_i("ood1Grif6") == 0) {
		return true;
	}
	return false;
}

bool f_1b8f_a1_b(object a0)
{
	if (f_190d_a1_i("ood1Grif7") == 0) {
		return true;
	}
	return false;
}

bool f_1b9b_a1_b(object a0)
{
	if (f_190d_a1_i("ood1Grif8") == 0) {
		return true;
	}
	return false;
}

bool f_1ba7_a1_b(object a0)
{
	if (f_190d_a1_i("ood1Grif9") == 0) {
		return true;
	}
	return false;
}

bool f_1bb3_a1_b(object a0)
{
	if (f_190d_a1_i("ood1Grif10") == 0) {
		return true;
	}
	return false;
}

bool f_1bbf_a1_b(object a0)
{
	if (f_190d_a1_i("KnowRubin") == 1) {
		return true;
	}
	return false;
}

bool f_1bcb_a1_b(object a0)
{
	if (f_1c88_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1bd5_a1_b(object a0)
{
	if (f_190d_a1_i("d4q03") == 1) {
		return true;
	}
	return false;
}

bool f_1be1_a1_b(object a0)
{
	if (f_190d_a1_i("ood4Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_1bed_a1_b(object a0)
{
	if (f_190d_a1_i("ood4Grif2") == 0) {
		return true;
	}
	return false;
}

bool f_1bf9_a1_b(object a0)
{
	if (f_190d_a1_i("d4q03_alldead") == 1) {
		return true;
	}
	return false;
}

bool f_1c05_a1_b(object a0)
{
	if (f_1c93_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1c0f_a1_b(object a0)
{
	if (f_190d_a1_i("d5q01") == 6) {
		return true;
	}
	return false;
}

bool f_1c1b_a1_b(object a0)
{
	if (f_190d_a1_i("ood5Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_1c27_a1_b(object a0)
{
	if (f_1ca8_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1c31_a1_b(object a0)
{
	if (f_190d_a1_i("d5q01ThiefsWillHelp") == 1) {
		return true;
	}
	return false;
}

bool f_1c3d_a1_b(object a0)
{
	if (f_190d_a1_i("KnowBigVlad") == 1) {
		return true;
	}
	return false;
}

bool f_1c49_a1_b(object a0)
{
	if (f_190d_a1_i("ood2Grif5") == 0) {
		return true;
	}
	return false;
}

bool f_1c55_a1_b(object a0)
{
	if (f_190d_a1_i("KnowNotkin") == 1) {
		return true;
	}
	return false;
}

bool f_1c61_a1_b(object a0)
{
	if (f_190d_a1_i("ood12Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_1c6d_a1_b(object a0)
{
	if (f_190d_a1_i("KnowSpi4ka") == 1) {
		return true;
	}
	return false;
}

bool f_1c79_a1_b(object a0)
{
	if (f_190d_a1_i("KnowStamatins") == 1) {
		return true;
	}
	return false;
}

bool f_1c85_a1_b(object a0)
{
	return false;
}

bool f_1c88_a1_b(object a0)
{
	if (f_194a_a0_i() >= 18) {
		return true;
	}
	return false;
}

bool f_1c93_a1_b(object a0)
{
	if (f_194a_a0_i() >= 12 && f_194a_a0_i() < 18) {
		return true;
	}
	return false;
}

bool f_1ca8_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 40000) {
		return true;
	}
	return false;
}

object f_1cb3_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1cc0_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1cb3_a0_o();
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

object f_1cdd_a0_o(void)
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

void f_1cee_a3_v(object a0, string a1, float a2)
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

void f_1d0f_a0_v(void)
{
	bool L0;
	int L1;
	int L2;
	@ClearSubContainer(0);
	L2 = f_1941_a0_i();
	@AddItem(L0, f_1daa_a1_i("Rifle"), 0, 1);
	@AddItem(L0, f_1daa_a1_i("Revolver"), 0, 1);
	@AddItem(L0, f_1daa_a1_i("lockpick"), 0, 1);
	@irand(L1, 3);
	L1 = L1 + 1;
	@AddItem(L0, f_1daa_a1_i("Scalpel"), 0, L1);
	@irand(L1, 3);
	L1 = L1 + 1;
	@AddItem(L0, f_1daa_a1_i("Knife"), 0, L1);
	@irand(L1, 10);
	if (L1 != 0) {
		@AddItem(L0, f_1daa_a1_i("revolver_ammo"), 0, L1);
	}
	@irand(L1, 10);
	if (L1 != 0) {
		@AddItem(L0, f_1daa_a1_i("rifle_ammo"), 0, L1);
	}
	@irand(L1, 10);
	if (L1 != 0) {
		@AddItem(L0, f_1daa_a1_i("tvirin"), 0, L1);
	}
	@irand(L1, 100);
	if (L1 != 0) {
		@AddItem(L0, f_1daa_a1_i("kerosene"), 0, L1);
	}
	if (L2 >= 3) {
		@AddItem(L0, f_1daa_a1_i("halfboot_repel"), 0, 1);
		@AddItem(L0, f_1daa_a1_i("boot_repel"), 0, 1);
	}
	if (L2 >= 9) {
		@AddItem(L0, f_1daa_a1_i("boot_army"), 0, 1);
		@AddItem(L0, f_1daa_a1_i("balahon"), 0, 1);
		@AddItem(L0, f_1daa_a1_i("glove_army"), 0, 1);
	}
}

int f_1daa_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

int f_1daf_a0_i(void)
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

void f_1dc0_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 132, 2, 15269);
	f_1cc0_a2_b(L0, 11);
}

void f_1dd0_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 97, 2, 12179);
	f_1cc0_a2_b(L0, 22);
}

void f_1de0_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 145, 1, 15345);
	f_1cc0_a2_b(L0, 139);
}

void f_1df0_a0_v(void)
{
	g1 = false;
	g2 = -1;
}

void f_1df7_a1_v(object a0)
{
	if (!f_18b6_a1_b(a0)) {
		return;
	}
	t1{a0};
	f_18e6_a1_v(a0);
}

void f_1e0a_a1_v(object a0)
{
	if (g2 != f_1941_a0_i()) {
		f_1d0f_a0_v();
		g2 = f_1941_a0_i();
	}
	if (!g1) {
		t3{a0};
		g1 = true;
	}
	if (f_1952_a1_b(1)) {
		if (f_190d_a1_i("d1q01") == 1) {
			t7{a0};
			return;
		}
		if (1000 == t5{a0}) {
			f_1df7_a1_v(a0);
		}
		return;
	}
	if (f_1952_a1_b(2)) {
		if (1000 == t9{a0}) {
			f_1df7_a1_v(a0);
		}
		return;
	}
	if (f_1952_a1_b(3)) {
		if (1000 == t13{a0}) {
			f_1df7_a1_v(a0);
		}
		return;
	}
	if (f_1952_a1_b(4)) {
		if (1000 == t11{a0}) {
			f_1df7_a1_v(a0);
		}
		return;
	}
	if (f_1952_a1_b(5)) {
		if (1000 == t15{a0}) {
			f_1df7_a1_v(a0);
		}
		return;
	}
	if (f_1952_a1_b(6)) {
		if (1000 == t17{a0}) {
			f_1df7_a1_v(a0);
		}
		return;
	}
	if (f_1952_a1_b(7)) {
		if (1000 == t19{a0}) {
			f_1df7_a1_v(a0);
		}
		return;
	}
	if (f_1952_a1_b(8)) {
		if (1000 == t21{a0}) {
			f_1df7_a1_v(a0);
		}
		return;
	}
	if (f_1952_a1_b(9)) {
		if (1000 == t25{a0}) {
			f_1df7_a1_v(a0);
		}
		return;
	}
	if (f_1952_a1_b(10)) {
		if (1000 == t23{a0}) {
			f_1df7_a1_v(a0);
		}
		return;
	}
	if (f_1952_a1_b(11)) {
		if (1000 == t27{a0}) {
			f_1df7_a1_v(a0);
		}
		return;
	}
	if (f_1952_a1_b(12)) {
		if (1000 == t29{a0}) {
			f_1df7_a1_v(a0);
		}
		return;
	}
	f_1958_a0_b();
}

