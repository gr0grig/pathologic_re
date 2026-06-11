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
		f_1b2f_a0_v();
		if (!f_15b7_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_15f8_a1_v("Neutral");
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
		f_1b33_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_15ab_a1_b(a0);
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
		if (!f_15bc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166e_a0_i());
		L0->SetPhoto(f_1670_a0_s());
		L0->SetPlayerName(f_1abe_a0_i());
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
		f_15f4_a1_v(a0);
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
			f_1692_a2_v(tv1, tv0);
			f_1698_a2_v(tv1, tv0);
			f_b4_a1_v("Neutral");
			tv0->SetMessage(473);
			tv0->ClearReplies();
			tv0->AddReply(476, 547, 546);
			tv0->AddReply(474, 545, 544);
			break;
			return;
		}
		if (f_1672_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15f8_a1_v(tv2);
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
		if (!f_1672_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15f8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_160a_a0_v();
			if (a0 == 543) {
				f_1692_a2_v(tv1, tv0);
				f_1698_a2_v(tv1, tv0);
				f_b4_a1_v("Neutral");
				tv0->SetMessage(473);
				tv0->ClearReplies();
				tv0->AddReply(476, 547, 546);
				tv0->AddReply(474, 545, 544);
				return;
			}
			if (a0 == 545) {
				f_17ac_a2_v(tv1, tv0);
				f_b4_a1_v("Neutral");
				tv0->SetMessage(475);
				tv0->ClearReplies();
				tv0->AddReply(480, 547, 550);
				tv0->AddReply(479, -1, 549);
				return;
			}
			if (a0 == 547) {
				f_17d8_a2_v(tv1, tv0);
				f_b4_a1_v("Neutral");
				tv0->SetMessage(477);
				tv0->ClearReplies();
				tv0->AddReply(481, 554, 552);
				tv0->AddReply(8439, 9263, 9262);
				return;
			}
			if (a0 == 9263) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(8440);
				tv0->ClearReplies();
				tv0->AddReply(8442, -1, 9265);
				tv0->AddReply(8441, -1, 9264);
				return;
			}
			if (a0 == 554) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(483);
				tv0->ClearReplies();
				tv0->AddReply(484, -1, 555);
				tv0->AddReply(485, -1, 556);
				return;
			}
			tv3 = true;
			if (f_1672_a0_b()) {
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
		if (!f_15bc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166e_a0_i());
		L0->SetPhoto(f_1670_a0_s());
		L0->SetPlayerName(f_1abe_a0_i());
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
		f_15f4_a1_v(a0);
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
			if (f_1983_a1_b(tv1) && f_1a1f_a1_b(tv1)) {
				f_17ee_a2_v(tv1, tv0);
				f_17f4_a2_v(tv1, tv0);
				f_22b_a1_v("Neutral");
				tv0->SetMessage(3371);
				tv0->ClearReplies();
				tv0->AddReply(3375, 3621, 3619);
				tv0->AddReply(3376, 3621, 3620);
				break;
			}
			if (f_1977_a1_b(tv1) && !f_195f_a1_b(tv1) && !f_196b_a1_b(tv1)) {
				f_17ee_a2_v(tv1, tv0);
				f_22b_a1_v("Neutral");
				tv0->SetMessage(12095);
				tv0->ClearReplies();
				tv0->AddReply(12096, 13323, 13322);
				break;
			}
			f_22b_a1_v("Neutral");
			tv0->SetMessage(12523);
			tv0->ClearReplies();
			tv0->AddReply(12524, -1, 13694);
			break;
			return;
		}
		if (f_1672_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15f8_a1_v(tv2);
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

	void f_22b_a1_v(string a0)
	{
		if (!f_1672_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15f8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_160a_a0_v();
			if (a1 == 13328) {
				f_17a0_a2_v(tv1, tv0);
				f_17de_a2_v(tv1, tv0);
			}
			if (a1 == 13695) {
				f_17a0_a2_v(tv1, tv0);
			}
			if (a0 == 3618) {
				if (f_1983_a1_b(tv1) && f_1a1f_a1_b(tv1)) {
					f_17ee_a2_v(tv1, tv0);
					f_17f4_a2_v(tv1, tv0);
					f_22b_a1_v("Neutral");
					tv0->SetMessage(3371);
					tv0->ClearReplies();
					tv0->AddReply(3375, 3621, 3619);
					tv0->AddReply(3376, 3621, 3620);
					return;
				}
				if (f_1977_a1_b(tv1) && !f_195f_a1_b(tv1) && !f_196b_a1_b(tv1)) {
					f_17ee_a2_v(tv1, tv0);
					f_22b_a1_v("Neutral");
					tv0->SetMessage(12095);
					tv0->ClearReplies();
					tv0->AddReply(12096, 13323, 13322);
					return;
				}
				f_22b_a1_v("Neutral");
				tv0->SetMessage(12523);
				tv0->ClearReplies();
				tv0->AddReply(12524, -1, 13694);
				return;
			}
			if (a0 == 13323) {
				f_22b_a1_v("Neutral");
				tv0->SetMessage(12097);
				tv0->ClearReplies();
				tv0->AddReply(12098, 13325, 13324);
				return;
			}
			if (a0 == 13325) {
				f_22b_a1_v("Neutral");
				tv0->SetMessage(12099);
				tv0->ClearReplies();
				tv0->AddReply(12100, 13327, 13326);
				return;
			}
			if (a0 == 13327) {
				f_17a6_a2_v(tv1, tv0);
				f_22b_a1_v("Neutral");
				tv0->SetMessage(12101);
				tv0->ClearReplies();
				if (f_1953_a1_b(tv1)) {
					tv0->AddReply(12102, -1, 13328);
				}
				if (!f_1953_a1_b(tv1)) {
					tv0->AddReply(12525, -1, 13695);
				}
				return;
			}
			if (a0 == 3621) {
				f_22b_a1_v("Neutral");
				tv0->SetMessage(3377);
				tv0->ClearReplies();
				tv0->AddReply(3378, 3626, 3622);
				tv0->AddReply(3379, 3626, 3624);
				tv0->AddReply(3380, 3626, 3625);
				return;
			}
			if (a0 == 3626) {
				f_22b_a1_v("Neutral");
				tv0->SetMessage(3381);
				tv0->ClearReplies();
				tv0->AddReply(3382, 3631, 3627);
				tv0->AddReply(3383, -1, 3630);
				tv0->AddReply(3396, -1, 3643);
				return;
			}
			if (a0 == 3631) {
				f_22b_a1_v("Neutral");
				tv0->SetMessage(3384);
				tv0->ClearReplies();
				tv0->AddReply(3385, 3639, 3632);
				tv0->AddReply(3386, -1, 3633);
				tv0->AddReply(3387, -1, 3634);
				tv0->AddReply(3388, 3636, 3635);
				return;
			}
			if (a0 == 3636) {
				f_22b_a1_v("Neutral");
				tv0->SetMessage(3389);
				tv0->ClearReplies();
				tv0->AddReply(3390, -1, 3637);
				tv0->AddReply(3391, -1, 3638);
				return;
			}
			if (a0 == 3639) {
				f_22b_a1_v("Neutral");
				tv0->SetMessage(3392);
				tv0->ClearReplies();
				tv0->AddReply(3393, -1, 3640);
				tv0->AddReply(3394, -1, 3641);
				tv0->AddReply(3395, -1, 3642);
				return;
			}
			tv3 = true;
			if (f_1672_a0_b()) {
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
		if (!f_15bc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166e_a0_i());
		L0->SetPhoto(f_1670_a0_s());
		L0->SetPlayerName(f_1abe_a0_i());
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
		f_15f4_a1_v(a0);
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
			if (f_1a43_a1_b(tv1) && f_1830_a1_b(tv1)) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5449);
				tv0->ClearReplies();
				tv0->AddReply(5453, 6575, 6007);
				tv0->AddReply(5974, 6575, 6579);
				break;
			}
			f_516_a1_v("Neutral");
			tv0->SetMessage(5484);
			tv0->ClearReplies();
			if (f_1a4f_a1_b(tv1)) {
				tv0->AddReply(8729, 6028, 9566);
			}
			if (f_1800_a1_b(tv1) && f_1818_a1_b(tv1)) {
				tv0->AddReply(8728, 6008, 9565);
			}
			if (f_180c_a1_b(tv1) && f_183c_a1_b(tv1) && f_1848_a1_b(tv1)) {
				tv0->AddReply(5451, 6666, 6005);
			}
			if (f_1824_a1_b(tv1) && f_1830_a1_b(tv1) && !f_1a43_a1_b(tv1)) {
				tv0->AddReply(5452, 9563, 6006);
			}
			if (f_1854_a1_b(tv1) && f_1860_a1_b(tv1)) {
				tv0->AddReply(6288, 6941, 6940);
			}
			if (f_19d7_a1_b(tv1) && f_189c_a1_b(tv1)) {
				tv0->AddReply(7933, 8773, 8753);
			}
			if (f_19cb_a1_b(tv1) && f_18a8_a1_b(tv1)) {
				tv0->AddReply(7938, 8784, 8758);
			}
			if (f_19ef_a1_b(tv1) && f_18b4_a1_b(tv1)) {
				tv0->AddReply(7943, 8775, 8763);
			}
			if (f_19e3_a1_b(tv1) && f_18c0_a1_b(tv1)) {
				tv0->AddReply(7950, 8776, 8770);
			}
			if (f_1a2b_a1_b(tv1) && f_18cc_a1_b(tv1)) {
				tv0->AddReply(7951, 8777, 8771);
			}
			if (f_1a13_a1_b(tv1) && f_18d8_a1_b(tv1)) {
				tv0->AddReply(7952, 8778, 8772);
			}
			tv0->AddReply(6264, -1, 6931);
			break;
			return;
		}
		if (f_1672_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15f8_a1_v(tv2);
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

	void f_516_a1_v(string a0)
	{
		if (!f_1672_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15f8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_160a_a0_v();
			if (a1 == 6610) {
				f_167a_a2_v(tv1, tv0);
				f_169e_a2_v(tv1, tv0);
				f_16f3_a2_v(tv1, tv0);
			}
			if (a1 == 6606) {
				f_167a_a2_v(tv1, tv0);
			}
			if (a1 == 6611) {
				f_167a_a2_v(tv1, tv0);
				f_169e_a2_v(tv1, tv0);
				f_16f3_a2_v(tv1, tv0);
			}
			if (a1 == 6612) {
				f_167a_a2_v(tv1, tv0);
			}
			if (a1 == 6035) {
				f_1680_a2_v(tv1, tv0);
			}
			if (a1 == 6036) {
				f_1680_a2_v(tv1, tv0);
			}
			if (a1 == 6037) {
				f_1680_a2_v(tv1, tv0);
			}
			if (a1 == 6038) {
				f_1680_a2_v(tv1, tv0);
			}
			if (a1 == 6041) {
				f_1680_a2_v(tv1, tv0);
			}
			if (a1 == 6042) {
				f_1680_a2_v(tv1, tv0);
			}
			if (a1 == 6015) {
				f_1686_a2_v(tv1, tv0);
			}
			if (a1 == 6016) {
				f_1686_a2_v(tv1, tv0);
			}
			if (a1 == 6017) {
				f_1686_a2_v(tv1, tv0);
			}
			if (a1 == 6675) {
				f_168c_a2_v(tv1, tv0);
			}
			if (a1 == 6700) {
				f_168c_a2_v(tv1, tv0);
			}
			if (a1 == 6701) {
				f_168c_a2_v(tv1, tv0);
			}
			if (a1 == 6006) {
				f_169e_a2_v(tv1, tv0);
			}
			if (a1 == 9564) {
				f_169e_a2_v(tv1, tv0);
				f_16f3_a2_v(tv1, tv0);
			}
			if (a1 == 6942) {
				f_16b9_a2_v(tv1, tv0);
			}
			if (a1 == 6943) {
				f_16b9_a2_v(tv1, tv0);
			}
			if (a1 == 8783) {
				f_1713_a2_v(tv1, tv0);
			}
			if (a1 == 8794) {
				f_1719_a2_v(tv1, tv0);
			}
			if (a1 == 8803) {
				f_171f_a2_v(tv1, tv0);
			}
			if (a1 == 8804) {
				f_171f_a2_v(tv1, tv0);
			}
			if (a1 == 8811) {
				f_1725_a2_v(tv1, tv0);
			}
			if (a1 == 8812) {
				f_1725_a2_v(tv1, tv0);
			}
			if (a1 == 8817) {
				f_1725_a2_v(tv1, tv0);
			}
			if (a1 == 9568) {
				f_172b_a2_v(tv1, tv0);
			}
			if (a0 == 6003) {
				if (f_1a43_a1_b(tv1) && f_1830_a1_b(tv1)) {
					f_516_a1_v("Neutral");
					tv0->SetMessage(5449);
					tv0->ClearReplies();
					tv0->AddReply(5453, 6575, 6007);
					tv0->AddReply(5974, 6575, 6579);
					return;
				}
				f_516_a1_v("Neutral");
				tv0->SetMessage(5484);
				tv0->ClearReplies();
				if (f_1a4f_a1_b(tv1)) {
					tv0->AddReply(8729, 6028, 9566);
				}
				if (f_1800_a1_b(tv1) && f_1818_a1_b(tv1)) {
					tv0->AddReply(8728, 6008, 9565);
				}
				if (f_180c_a1_b(tv1) && f_183c_a1_b(tv1) && f_1848_a1_b(tv1)) {
					tv0->AddReply(5451, 6666, 6005);
				}
				if (f_1824_a1_b(tv1) && f_1830_a1_b(tv1) && !f_1a43_a1_b(tv1)) {
					tv0->AddReply(5452, 9563, 6006);
				}
				if (f_1854_a1_b(tv1) && f_1860_a1_b(tv1)) {
					tv0->AddReply(6288, 6941, 6940);
				}
				if (f_19d7_a1_b(tv1) && f_189c_a1_b(tv1)) {
					tv0->AddReply(7933, 8773, 8753);
				}
				if (f_19cb_a1_b(tv1) && f_18a8_a1_b(tv1)) {
					tv0->AddReply(7938, 8784, 8758);
				}
				if (f_19ef_a1_b(tv1) && f_18b4_a1_b(tv1)) {
					tv0->AddReply(7943, 8775, 8763);
				}
				if (f_19e3_a1_b(tv1) && f_18c0_a1_b(tv1)) {
					tv0->AddReply(7950, 8776, 8770);
				}
				if (f_1a2b_a1_b(tv1) && f_18cc_a1_b(tv1)) {
					tv0->AddReply(7951, 8777, 8771);
				}
				if (f_1a13_a1_b(tv1) && f_18d8_a1_b(tv1)) {
					tv0->AddReply(7952, 8778, 8772);
				}
				tv0->AddReply(6264, -1, 6931);
				return;
			}
			if (a0 == 8778) {
				f_17fa_a2_v(tv1, tv0);
				f_516_a1_v("Neutral");
				tv0->SetMessage(7958);
				tv0->ClearReplies();
				tv0->AddReply(8000, 9567, 8823);
				return;
			}
			if (a0 == 9567) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(8730);
				tv0->ClearReplies();
				tv0->AddReply(8731, -1, 9568);
				return;
			}
			if (a0 == 8777) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7957);
				tv0->ClearReplies();
				tv0->AddReply(7995, 8819, 8818);
				return;
			}
			if (a0 == 8819) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7996);
				tv0->ClearReplies();
				tv0->AddReply(7997, 9569, 8820);
				return;
			}
			if (a0 == 9569) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(8732);
				tv0->ClearReplies();
				tv0->AddReply(8733, 9571, 9570);
				return;
			}
			if (a0 == 9571) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(8734);
				tv0->ClearReplies();
				tv0->AddReply(8735, -1, 9572);
				return;
			}
			if (a0 == 8776) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7956);
				tv0->ClearReplies();
				tv0->AddReply(7983, 8807, 8805);
				tv0->AddReply(7984, 8807, 8806);
				return;
			}
			if (a0 == 8807) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7985);
				tv0->ClearReplies();
				tv0->AddReply(7986, 8810, 8809);
				tv0->AddReply(7990, 8814, 8813);
				return;
			}
			if (a0 == 8814) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7991);
				tv0->ClearReplies();
				tv0->AddReply(7992, 8816, 8815);
				return;
			}
			if (a0 == 8816) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7993);
				tv0->ClearReplies();
				tv0->AddReply(7994, -1, 8817);
				return;
			}
			if (a0 == 8810) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7987);
				tv0->ClearReplies();
				tv0->AddReply(7988, -1, 8811);
				tv0->AddReply(7989, -1, 8812);
				return;
			}
			if (a0 == 8775) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7955);
				tv0->ClearReplies();
				tv0->AddReply(7977, 8800, 8799);
				return;
			}
			if (a0 == 8800) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7978);
				tv0->ClearReplies();
				tv0->AddReply(7979, 8802, 8801);
				return;
			}
			if (a0 == 8802) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7980);
				tv0->ClearReplies();
				tv0->AddReply(7981, -1, 8803);
				tv0->AddReply(7982, -1, 8804);
				return;
			}
			if (a0 == 8784) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7964);
				tv0->ClearReplies();
				tv0->AddReply(7965, 8786, 8785);
				return;
			}
			if (a0 == 8786) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7966);
				tv0->ClearReplies();
				tv0->AddReply(7967, 8774, 8787);
				tv0->AddReply(7976, 8774, 8797);
				return;
			}
			if (a0 == 8774) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7954);
				tv0->ClearReplies();
				tv0->AddReply(7969, 8790, 8789);
				tv0->AddReply(7975, 8790, 8795);
				return;
			}
			if (a0 == 8790) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7970);
				tv0->ClearReplies();
				tv0->AddReply(7971, 8792, 8791);
				return;
			}
			if (a0 == 8792) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7972);
				tv0->ClearReplies();
				tv0->AddReply(7974, -1, 8794);
				return;
			}
			if (a0 == 8773) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7953);
				tv0->ClearReplies();
				tv0->AddReply(7959, 8780, 8779);
				return;
			}
			if (a0 == 8780) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7960);
				tv0->ClearReplies();
				tv0->AddReply(7961, 8782, 8781);
				return;
			}
			if (a0 == 8782) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(7962);
				tv0->ClearReplies();
				tv0->AddReply(7963, -1, 8783);
				return;
			}
			if (a0 == 6941) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(6289);
				tv0->ClearReplies();
				tv0->AddReply(6290, -1, 6942);
				tv0->AddReply(6291, -1, 6943);
				return;
			}
			if (a0 == 9563) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(8726);
				tv0->ClearReplies();
				tv0->AddReply(8727, -1, 9564);
				return;
			}
			if (a0 == 6666) {
				f_168c_a2_v(tv1, tv0);
				f_516_a1_v("Neutral");
				tv0->SetMessage(6043);
				tv0->ClearReplies();
				tv0->AddReply(6044, 6670, 6667);
				tv0->AddReply(6045, 6669, 6668);
				return;
			}
			if (a0 == 6669) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(6046);
				tv0->ClearReplies();
				tv0->AddReply(6053, 6679, 6677);
				tv0->AddReply(6054, 6681, 6678);
				return;
			}
			if (a0 == 6679) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(6055);
				tv0->ClearReplies();
				tv0->AddReply(6056, 6681, 6680);
				if (!f_1a37_a1_b(tv1)) {
					tv0->AddReply(6058, 6702, 6683);
				}
				return;
			}
			if (a0 == 6702) {
				f_1674_a2_v(tv1, tv0);
				f_516_a1_v("Neutral");
				tv0->SetMessage(6074);
				tv0->ClearReplies();
				tv0->AddReply(6075, 6681, 6703);
				return;
			}
			if (a0 == 6681) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(6057);
				tv0->ClearReplies();
				tv0->AddReply(6059, 6686, 6684);
				tv0->AddReply(6060, 6688, 6685);
				return;
			}
			if (a0 == 6688) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(6063);
				tv0->ClearReplies();
				tv0->AddReply(6064, 6686, 6689);
				return;
			}
			if (a0 == 6686) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(6061);
				tv0->ClearReplies();
				tv0->AddReply(6062, 6691, 6687);
				return;
			}
			if (a0 == 6691) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(6065);
				tv0->ClearReplies();
				tv0->AddReply(6066, 6696, 6692);
				tv0->AddReply(6067, 6694, 6693);
				return;
			}
			if (a0 == 6694) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(6068);
				tv0->ClearReplies();
				tv0->AddReply(6069, 6696, 6695);
				tv0->AddReply(6071, 6696, 6698);
				return;
			}
			if (a0 == 6696) {
				f_16bf_a2_v(tv1, tv0);
				f_16ca_a2_v(tv1, tv0);
				f_516_a1_v("Neutral");
				tv0->SetMessage(6070);
				tv0->ClearReplies();
				tv0->AddReply(6072, -1, 6700);
				tv0->AddReply(6073, -1, 6701);
				return;
			}
			if (a0 == 6670) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(6047);
				tv0->ClearReplies();
				tv0->AddReply(6048, 6673, 6671);
				tv0->AddReply(6049, 6673, 6672);
				return;
			}
			if (a0 == 6673) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(6050);
				tv0->ClearReplies();
				tv0->AddReply(6051, -1, 6675);
				return;
			}
			if (a0 == 6008) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5454);
				tv0->ClearReplies();
				tv0->AddReply(5455, 6010, 6009);
				tv0->AddReply(5467, 6010, 6024);
				return;
			}
			if (a0 == 6010) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5456);
				tv0->ClearReplies();
				tv0->AddReply(5457, 6012, 6011);
				tv0->AddReply(5466, 6012, 6022);
				return;
			}
			if (a0 == 6012) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5458);
				tv0->ClearReplies();
				tv0->AddReply(5459, 6014, 6013);
				tv0->AddReply(5465, 6014, 6020);
				tv0->AddReply(5464, 6014, 6018);
				return;
			}
			if (a0 == 6014) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5460);
				tv0->ClearReplies();
				tv0->AddReply(5461, -1, 6015);
				tv0->AddReply(5462, -1, 6016);
				tv0->AddReply(5463, -1, 6017);
				return;
			}
			if (a0 == 6028) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5469);
				tv0->ClearReplies();
				tv0->AddReply(5470, 6030, 6029);
				tv0->AddReply(5480, 6040, 6039);
				return;
			}
			if (a0 == 6040) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5481);
				tv0->ClearReplies();
				tv0->AddReply(5482, -1, 6041);
				tv0->AddReply(5483, -1, 6042);
				return;
			}
			if (a0 == 6030) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5471);
				tv0->ClearReplies();
				tv0->AddReply(5472, 6032, 6031);
				tv0->AddReply(5479, -1, 6038);
				return;
			}
			if (a0 == 6032) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5473);
				tv0->ClearReplies();
				tv0->AddReply(5474, 6034, 6033);
				tv0->AddReply(5478, -1, 6037);
				return;
			}
			if (a0 == 6034) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5475);
				tv0->ClearReplies();
				tv0->AddReply(5476, -1, 6035);
				tv0->AddReply(5477, -1, 6036);
				return;
			}
			if (a0 == 6575) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5970);
				tv0->ClearReplies();
				tv0->AddReply(5971, 6580, 6576);
				tv0->AddReply(5973, 6580, 6578);
				return;
			}
			if (a0 == 6580) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5975);
				tv0->ClearReplies();
				tv0->AddReply(5976, 6588, 6583);
				tv0->AddReply(5977, 6585, 6584);
				return;
			}
			if (a0 == 6585) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5978);
				tv0->ClearReplies();
				tv0->AddReply(5979, -1, 6586);
				tv0->AddReply(5980, -1, 6587);
				return;
			}
			if (a0 == 6588) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5981);
				tv0->ClearReplies();
				tv0->AddReply(5982, 6593, 6589);
				tv0->AddReply(5983, 6591, 6590);
				return;
			}
			if (a0 == 6591) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5984);
				tv0->ClearReplies();
				tv0->AddReply(5985, 6593, 6592);
				return;
			}
			if (a0 == 6593) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5986);
				tv0->ClearReplies();
				tv0->AddReply(5987, 6595, 6594);
				tv0->AddReply(5993, 6599, 6601);
				return;
			}
			if (a0 == 6595) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5988);
				tv0->ClearReplies();
				tv0->AddReply(5989, 6597, 6596);
				tv0->AddReply(5994, 6597, 6603);
				return;
			}
			if (a0 == 6597) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5990);
				tv0->ClearReplies();
				tv0->AddReply(5991, 6599, 6598);
				return;
			}
			if (a0 == 6599) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5992);
				tv0->ClearReplies();
				tv0->AddReply(5995, 6609, 6605);
				tv0->AddReply(5997, 6608, 6607);
				return;
			}
			if (a0 == 6608) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5998);
				tv0->ClearReplies();
				tv0->AddReply(6001, -1, 6611);
				tv0->AddReply(6002, -1, 6612);
				return;
			}
			if (a0 == 6609) {
				f_516_a1_v("Neutral");
				tv0->SetMessage(5999);
				tv0->ClearReplies();
				tv0->AddReply(6000, -1, 6610);
				tv0->AddReply(5996, -1, 6606);
				return;
			}
			tv3 = true;
			if (f_1672_a0_b()) {
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
		if (!f_15bc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166e_a0_i());
		L0->SetPhoto(f_1670_a0_s());
		L0->SetPlayerName(f_1abe_a0_i());
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
		f_15f4_a1_v(a0);
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
			f_ca9_a1_v("Neutral");
			tv0->SetMessage(6647);
			tv0->ClearReplies();
			if (f_1878_a1_b(tv1) && f_1890_a1_b(tv1)) {
				tv0->AddReply(7373, 8135, 8134);
			}
			if (f_1884_a1_b(tv1)) {
				tv0->AddReply(6640, 7312, 7311);
			}
			tv0->AddReply(7533, -1, 8315);
			break;
			f_ca9_a1_v("Neutral");
			tv0->SetMessage(9438);
			tv0->ClearReplies();
			tv0->AddReply(9439, 10375, 10374);
			tv0->AddReply(9449, 10375, 10385);
			tv0->AddReply(9450, 10375, 10387);
			break;
			return;
		}
		if (f_1672_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15f8_a1_v(tv2);
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

	void f_ca9_a1_v(string a0)
	{
		if (!f_1672_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15f8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_160a_a0_v();
			if (a1 == 7322) {
				f_16d0_a2_v(tv1, tv0);
				f_16dc_a2_v(tv1, tv0);
				f_1703_a2_v(tv1, tv0);
			}
			if (a1 == 8137) {
				f_16d0_a2_v(tv1, tv0);
				f_16dc_a2_v(tv1, tv0);
				f_1703_a2_v(tv1, tv0);
			}
			if (a1 == 7317) {
				f_16d6_a2_v(tv1, tv0);
			}
			if (a1 == 7313) {
				f_16d6_a2_v(tv1, tv0);
			}
			if (a0 == 7320) {
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(6647);
				tv0->ClearReplies();
				if (f_1878_a1_b(tv1) && f_1890_a1_b(tv1)) {
					tv0->AddReply(7373, 8135, 8134);
				}
				if (f_1884_a1_b(tv1)) {
					tv0->AddReply(6640, 7312, 7311);
				}
				tv0->AddReply(7533, -1, 8315);
				return;
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(9438);
				tv0->ClearReplies();
				tv0->AddReply(9439, 10375, 10374);
				tv0->AddReply(9449, 10375, 10385);
				tv0->AddReply(9450, 10375, 10387);
				return;
			}
			if (a0 == 10375) {
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(9440);
				tv0->ClearReplies();
				tv0->AddReply(9441, 10377, 10376);
				tv0->AddReply(9448, 10377, 10383);
				return;
			}
			if (a0 == 10377) {
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(9442);
				tv0->ClearReplies();
				tv0->AddReply(9443, 10379, 10378);
				tv0->AddReply(9447, -1, 10382);
				return;
			}
			if (a0 == 10379) {
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(9444);
				tv0->ClearReplies();
				tv0->AddReply(9445, -1, 10380);
				tv0->AddReply(9446, -1, 10381);
				return;
			}
			if (a0 == 7312) {
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(6641);
				tv0->ClearReplies();
				tv0->AddReply(6643, 7316, 7315);
				tv0->AddReply(6642, -1, 7313);
				return;
			}
			if (a0 == 7316) {
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(6644);
				tv0->ClearReplies();
				tv0->AddReply(6645, -1, 7317);
				return;
			}
			if (a0 == 8135) {
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(7374);
				tv0->ClearReplies();
				tv0->AddReply(7375, 7298, 8136);
				return;
			}
			if (a0 == 7298) {
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(6629);
				tv0->ClearReplies();
				tv0->AddReply(6630, 7300, 7299);
				return;
			}
			if (a0 == 7300) {
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(6631);
				tv0->ClearReplies();
				tv0->AddReply(6632, 7302, 7301);
				tv0->AddReply(6636, 7306, 7305);
				return;
			}
			if (a0 == 7306) {
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(6637);
				tv0->ClearReplies();
				tv0->AddReply(6638, 7302, 7307);
				return;
			}
			if (a0 == 7302) {
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(6633);
				tv0->ClearReplies();
				tv0->AddReply(6634, 7297, 7303);
				tv0->AddReply(6635, 7297, 7304);
				return;
			}
			if (a0 == 7297) {
				f_ca9_a1_v("Neutral");
				tv0->SetMessage(6628);
				tv0->ClearReplies();
				tv0->AddReply(6648, -1, 7322);
				tv0->AddReply(7376, -1, 8137);
				return;
			}
			tv3 = true;
			if (f_1672_a0_b()) {
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
		if (!f_15bc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166e_a0_i());
		L0->SetPhoto(f_1670_a0_s());
		L0->SetPlayerName(f_1abe_a0_i());
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
		f_15f4_a1_v(a0);
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
			if (f_18e4_a1_b(tv1) && f_18f0_a1_b(tv1)) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10844);
				tv0->ClearReplies();
				tv0->AddReply(10845, 11990, 11989);
				break;
			}
			f_f23_a1_v("Neutral");
			tv0->SetMessage(10841);
			tv0->ClearReplies();
			if (f_18e4_a1_b(tv1)) {
				tv0->AddReply(10873, 12022, 12021);
			}
			if (f_18fc_a1_b(tv1) && f_1908_a1_b(tv1) && f_1944_a1_b(tv1)) {
				tv0->AddReply(10876, 12025, 12024);
			}
			if (f_18fc_a1_b(tv1) && f_194e_a1_b(tv1) && !f_1944_a1_b(tv1)) {
				tv0->AddReply(11160, 12344, 12343);
			}
			if (f_1914_a1_b(tv1)) {
				tv0->AddReply(10842, 10885, 11986);
			}
			if (f_1920_a1_b(tv1)) {
				tv0->AddReply(9894, 10899, 10898);
			}
			if (f_192c_a1_b(tv1)) {
				tv0->AddReply(10843, 10909, 11987);
			}
			tv0->AddReply(11157, -1, 12342);
			break;
			return;
		}
		if (f_1672_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15f8_a1_v(tv2);
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

	void f_f23_a1_v(string a0)
	{
		if (!f_1672_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15f8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_160a_a0_v();
			if (a1 == 12015) {
				f_1754_a2_v(tv1, tv0);
				f_1731_a2_v(tv1, tv0);
				f_175a_a2_v(tv1, tv0);
			}
			if (a1 == 12018) {
				f_1754_a2_v(tv1, tv0);
				f_1731_a2_v(tv1, tv0);
				f_175a_a2_v(tv1, tv0);
			}
			if (a1 == 12019) {
				f_1754_a2_v(tv1, tv0);
			}
			if (a1 == 12023) {
				f_1731_a2_v(tv1, tv0);
				f_175a_a2_v(tv1, tv0);
			}
			if (a1 == 12033) {
				f_176a_a2_v(tv1, tv0);
				f_1770_a2_v(tv1, tv0);
			}
			if (a1 == 12029) {
				f_176a_a2_v(tv1, tv0);
				f_1770_a2_v(tv1, tv0);
			}
			if (a1 == 10893) {
				f_178e_a2_v(tv1, tv0);
			}
			if (a1 == 10894) {
				f_178e_a2_v(tv1, tv0);
			}
			if (a1 == 10895) {
				f_178e_a2_v(tv1, tv0);
			}
			if (a1 == 10888) {
				f_178e_a2_v(tv1, tv0);
			}
			if (a1 == 10904) {
				f_1794_a2_v(tv1, tv0);
			}
			if (a1 == 10914) {
				f_179a_a2_v(tv1, tv0);
			}
			if (a1 == 10915) {
				f_179a_a2_v(tv1, tv0);
			}
			if (a1 == 10916) {
				f_179a_a2_v(tv1, tv0);
			}
			if (a0 == 11988) {
				if (f_18e4_a1_b(tv1) && f_18f0_a1_b(tv1)) {
					f_f23_a1_v("Neutral");
					tv0->SetMessage(10844);
					tv0->ClearReplies();
					tv0->AddReply(10845, 11990, 11989);
					return;
				}
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10841);
				tv0->ClearReplies();
				if (f_18e4_a1_b(tv1)) {
					tv0->AddReply(10873, 12022, 12021);
				}
				if (f_18fc_a1_b(tv1) && f_1908_a1_b(tv1) && f_1944_a1_b(tv1)) {
					tv0->AddReply(10876, 12025, 12024);
				}
				if (f_18fc_a1_b(tv1) && f_194e_a1_b(tv1) && !f_1944_a1_b(tv1)) {
					tv0->AddReply(11160, 12344, 12343);
				}
				if (f_1914_a1_b(tv1)) {
					tv0->AddReply(10842, 10885, 11986);
				}
				if (f_1920_a1_b(tv1)) {
					tv0->AddReply(9894, 10899, 10898);
				}
				if (f_192c_a1_b(tv1)) {
					tv0->AddReply(10843, 10909, 11987);
				}
				tv0->AddReply(11157, -1, 12342);
				return;
			}
			if (a0 == 10909) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(9904);
				tv0->ClearReplies();
				tv0->AddReply(9905, 10911, 10910);
				tv0->AddReply(9912, 10911, 10917);
				tv0->AddReply(9913, 10911, 10919);
				return;
			}
			if (a0 == 10911) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(9906);
				tv0->ClearReplies();
				tv0->AddReply(9907, 10913, 10912);
				tv0->AddReply(9911, -1, 10916);
				return;
			}
			if (a0 == 10913) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(9908);
				tv0->ClearReplies();
				tv0->AddReply(9909, -1, 10914);
				tv0->AddReply(9910, -1, 10915);
				return;
			}
			if (a0 == 10899) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(9895);
				tv0->ClearReplies();
				tv0->AddReply(9896, 10901, 10900);
				tv0->AddReply(9901, 10906, 10905);
				return;
			}
			if (a0 == 10906) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(9902);
				tv0->ClearReplies();
				tv0->AddReply(9903, 10901, 10907);
				return;
			}
			if (a0 == 10901) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(9897);
				tv0->ClearReplies();
				tv0->AddReply(9898, 10903, 10902);
				return;
			}
			if (a0 == 10903) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(9899);
				tv0->ClearReplies();
				tv0->AddReply(9900, -1, 10904);
				return;
			}
			if (a0 == 10885) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(9882);
				tv0->ClearReplies();
				tv0->AddReply(9883, 10887, 10886);
				tv0->AddReply(9893, 10887, 10896);
				return;
			}
			if (a0 == 10887) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(9884);
				tv0->ClearReplies();
				tv0->AddReply(9886, 10890, 10889);
				tv0->AddReply(9885, -1, 10888);
				return;
			}
			if (a0 == 10890) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(9887);
				tv0->ClearReplies();
				tv0->AddReply(9888, 10892, 10891);
				tv0->AddReply(9892, -1, 10895);
				return;
			}
			if (a0 == 10892) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(9889);
				tv0->ClearReplies();
				tv0->AddReply(9890, -1, 10893);
				tv0->AddReply(9891, -1, 10894);
				return;
			}
			if (a0 == 12344) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(11161);
				tv0->ClearReplies();
				if (f_1938_a1_b(tv1)) {
					tv0->AddReply(11162, -1, 12345);
				}
				return;
			}
			if (a0 == 12025) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10877);
				tv0->ClearReplies();
				tv0->AddReply(10878, 12030, 12026);
				tv0->AddReply(10879, 12028, 12027);
				return;
			}
			if (a0 == 12028) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10880);
				tv0->ClearReplies();
				tv0->AddReply(10881, -1, 12029);
				return;
			}
			if (a0 == 12030) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10882);
				tv0->ClearReplies();
				tv0->AddReply(10883, 12032, 12031);
				return;
			}
			if (a0 == 12032) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10884);
				tv0->ClearReplies();
				tv0->AddReply(10885, -1, 12033);
				return;
			}
			if (a0 == 12022) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10874);
				tv0->ClearReplies();
				tv0->AddReply(10875, -1, 12023);
				return;
			}
			if (a0 == 11990) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10846);
				tv0->ClearReplies();
				tv0->AddReply(10847, 11994, 11991);
				tv0->AddReply(10849, 11994, 11993);
				tv0->AddReply(10848, 11994, 11992);
				return;
			}
			if (a0 == 11994) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10850);
				tv0->ClearReplies();
				tv0->AddReply(10852, 12003, 11997);
				if (!f_186c_a1_b(tv1)) {
					tv0->AddReply(10851, 12001, 11995);
				}
				if (f_186c_a1_b(tv1)) {
					tv0->AddReply(10853, 11999, 11998);
				}
				return;
			}
			if (a0 == 11999) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10854);
				tv0->ClearReplies();
				tv0->AddReply(10855, 12003, 12000);
				return;
			}
			if (a0 == 12001) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10856);
				tv0->ClearReplies();
				tv0->AddReply(10857, 12003, 12002);
				return;
			}
			if (a0 == 12003) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10858);
				tv0->ClearReplies();
				tv0->AddReply(10859, 12007, 12006);
				return;
			}
			if (a0 == 12007) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10860);
				tv0->ClearReplies();
				tv0->AddReply(10861, 12010, 12008);
				tv0->AddReply(10862, 12014, 12009);
				return;
			}
			if (a0 == 12010) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10863);
				tv0->ClearReplies();
				tv0->AddReply(10864, 12012, 12011);
				return;
			}
			if (a0 == 12012) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10865);
				tv0->ClearReplies();
				tv0->AddReply(10866, 12014, 12013);
				return;
			}
			if (a0 == 12014) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10867);
				tv0->ClearReplies();
				tv0->AddReply(10868, -1, 12015);
				tv0->AddReply(10869, 12017, 12016);
				return;
			}
			if (a0 == 12017) {
				f_f23_a1_v("Neutral");
				tv0->SetMessage(10870);
				tv0->ClearReplies();
				tv0->AddReply(10871, -1, 12018);
				tv0->AddReply(10872, -1, 12019);
				return;
			}
			tv3 = true;
			if (f_1672_a0_b()) {
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
		if (!f_15bc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166e_a0_i());
		L0->SetPhoto(f_1670_a0_s());
		L0->SetPlayerName(f_1abe_a0_i());
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
		f_15f4_a1_v(a0);
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
			f_133b_a1_v("Neutral");
			tv0->SetMessage(11245);
			tv0->ClearReplies();
			if (f_19fb_a1_b(tv1) && f_1a07_a1_b(tv1)) {
				tv0->AddReply(11247, 12438, 12437);
			}
			tv0->AddReply(11246, -1, 12436);
			break;
			return;
		}
		if (f_1672_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15f8_a1_v(tv2);
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

	void f_133b_a1_v(string a0)
	{
		if (!f_1672_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15f8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_160a_a0_v();
			if (a1 == 12437) {
				f_17d2_a2_v(tv1, tv0);
			}
			if (a0 == 12435) {
				f_133b_a1_v("Neutral");
				tv0->SetMessage(11245);
				tv0->ClearReplies();
				if (f_19fb_a1_b(tv1) && f_1a07_a1_b(tv1)) {
					tv0->AddReply(11247, 12438, 12437);
				}
				tv0->AddReply(11246, -1, 12436);
				return;
			}
			if (a0 == 12438) {
				f_133b_a1_v("Neutral");
				tv0->SetMessage(11248);
				tv0->ClearReplies();
				tv0->AddReply(11249, 12440, 12439);
				return;
			}
			if (a0 == 12440) {
				f_133b_a1_v("Neutral");
				tv0->SetMessage(11250);
				tv0->ClearReplies();
				tv0->AddReply(11251, 12442, 12441);
				return;
			}
			if (a0 == 12442) {
				f_133b_a1_v("Neutral");
				tv0->SetMessage(11252);
				tv0->ClearReplies();
				tv0->AddReply(11253, -1, 12443);
				return;
			}
			tv3 = true;
			if (f_1672_a0_b()) {
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
		if (!f_15bc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_166e_a0_i());
		L0->SetPhoto(f_1670_a0_s());
		L0->SetPlayerName(f_1abe_a0_i());
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
		f_15f4_a1_v(a0);
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
			if (f_199b_a1_b(tv1)) {
				f_17b2_a2_v(tv1, tv0);
				f_146b_a1_v("Neutral");
				tv0->SetMessage(13464);
				tv0->ClearReplies();
				tv0->AddReply(13465, 14704, 14702);
				if (f_19bf_a1_b(tv1)) {
					tv0->AddReply(13466, 14705, 14703);
				}
				break;
			}
			f_146b_a1_v("Neutral");
			tv0->SetMessage(13462);
			tv0->ClearReplies();
			if (f_19a7_a1_b(tv1) && f_19b3_a1_b(tv1)) {
				tv0->AddReply(13463, 14713, 14700);
			}
			tv0->AddReply(13483, -1, 14721);
			break;
			return;
		}
		if (f_1672_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15f8_a1_v(tv2);
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

	void f_146b_a1_v(string a0)
	{
		if (!f_1672_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15f8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_160a_a0_v();
			if (a1 == 14724) {
				f_17b8_a2_v(tv1, tv0);
				f_17c1_a2_v(tv1, tv0);
				f_16ca_a2_v(tv1, tv0);
			}
			if (a1 == 14700) {
				f_17cc_a2_v(tv1, tv0);
			}
			if (a0 == 14701) {
				if (f_199b_a1_b(tv1)) {
					f_17b2_a2_v(tv1, tv0);
					f_146b_a1_v("Neutral");
					tv0->SetMessage(13464);
					tv0->ClearReplies();
					tv0->AddReply(13465, 14704, 14702);
					if (f_19bf_a1_b(tv1)) {
						tv0->AddReply(13466, 14705, 14703);
					}
					return;
				}
				f_146b_a1_v("Neutral");
				tv0->SetMessage(13462);
				tv0->ClearReplies();
				if (f_19a7_a1_b(tv1) && f_19b3_a1_b(tv1)) {
					tv0->AddReply(13463, 14713, 14700);
				}
				tv0->AddReply(13483, -1, 14721);
				return;
			}
			if (a0 == 14713) {
				f_146b_a1_v("Neutral");
				tv0->SetMessage(13476);
				tv0->ClearReplies();
				tv0->AddReply(13477, 14715, 14714);
				return;
			}
			if (a0 == 14715) {
				f_146b_a1_v("Neutral");
				tv0->SetMessage(13478);
				tv0->ClearReplies();
				tv0->AddReply(13480, 14718, 14717);
				tv0->AddReply(13479, -1, 14716);
				return;
			}
			if (a0 == 14718) {
				f_146b_a1_v("Neutral");
				tv0->SetMessage(13481);
				tv0->ClearReplies();
				tv0->AddReply(13482, -1, 14719);
				return;
			}
			if (a0 == 14705) {
				f_146b_a1_v("Neutral");
				tv0->SetMessage(13468);
				tv0->ClearReplies();
				tv0->AddReply(13469, 14704, 14706);
				if (f_198f_a1_b(tv1)) {
					tv0->AddReply(13470, 14708, 14707);
				}
				return;
			}
			if (a0 == 14708) {
				f_146b_a1_v("Neutral");
				tv0->SetMessage(13471);
				tv0->ClearReplies();
				tv0->AddReply(13472, 14711, 14709);
				tv0->AddReply(13473, 14727, 14710);
				return;
			}
			if (a0 == 14727) {
				f_146b_a1_v("Neutral");
				tv0->SetMessage(13488);
				tv0->ClearReplies();
				tv0->AddReply(13489, 14711, 14728);
				return;
			}
			if (a0 == 14711) {
				f_146b_a1_v("Neutral");
				tv0->SetMessage(13474);
				tv0->ClearReplies();
				tv0->AddReply(13490, -1, 14730);
				return;
			}
			if (a0 == 14704) {
				f_146b_a1_v("Neutral");
				tv0->SetMessage(13467);
				tv0->ClearReplies();
				tv0->AddReply(13475, 14723, 14712);
				tv0->AddReply(13484, -1, 14722);
				return;
			}
			if (a0 == 14723) {
				f_146b_a1_v("Neutral");
				tv0->SetMessage(13485);
				tv0->ClearReplies();
				tv0->AddReply(13486, -1, 14724);
				return;
			}
			tv3 = true;
			if (f_1672_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_15ab_a1_b(object a0)
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

bool f_15b7_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_15bc_a1_b(object a0)
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
	L5 = L3 * 70 + f_1611_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_15f4_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_15f8_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_160a_a0_v(void)
{
	if (f_1672_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_1611_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_161b_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1620_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_162b_a3_v(object a0, object a1, int a2)
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

void f_1638_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_162b_a3_v(a0, L0, a2);
}

bool f_1645_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1651_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1656_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_165f_a1_b(int a0)
{
	return f_1656_a0_i() == a0;
}

bool f_1665_a0_b(void)
{
	bool L0;
	f_15f8_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_166e_a0_i(void)
{
	return 2863;
}

string f_1670_a0_s(void)
{
	return "ui/NPC_Kapella.png";
}

bool f_1672_a0_b(void)
{
	return true;
}

void f_1674_a2_v(object a0, object a1)
{
	@SetVariable("KnowUklad", 1);
}

void f_167a_a2_v(object a0, object a1)
{
	@SetVariable("ood1Kapella1", 1);
}

void f_1680_a2_v(object a0, object a1)
{
	@SetVariable("ood1Kapella2", 1);
}

void f_1686_a2_v(object a0, object a1)
{
	@SetVariable("ood1Kapella3", 1);
}

void f_168c_a2_v(object a0, object a1)
{
	@SetVariable("ood1Kapella4", 1);
}

void f_1692_a2_v(object a0, object a1)
{
	@SetVariable("KnowKaterina", 1);
}

void f_1698_a2_v(object a0, object a1)
{
	@SetVariable("KnowKapella", 1);
}

void f_169e_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d1q03IsKapella", 1);
	L0 = f_1a8c_a0_o();
	L0->AddMark("d1q03KapellaGotoOspina", "pt_map_ospina", 0, 8641, f_1651_a0_f());
	f_1acf_a0_v();
	f_1620_a1_o("quest_d1_03");
}

void f_16b9_a2_v(object a0, object a1)
{
	@SetVariable("ood1Kapella6", 1);
}

void f_16bf_a2_v(object a0, object a1)
{
	@Trace("funduk3 is given");
	f_1638_a3_v(a0, "funduk", 3);
}

void f_16ca_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_16d0_a2_v(object a0, object a1)
{
	@SetVariable("ood2Kapella1", 1);
}

void f_16d6_a2_v(object a0, object a1)
{
	@SetVariable("ood2Kapella2", 1);
}

void f_16dc_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q01", 3);
	L0 = f_1a8c_a0_o();
	L0->AddMark("d2q01KapellaGotoSpi4ka", "pt_map_spi4ka", 1, 11389, f_1651_a0_f());
	f_1adf_a0_v();
}

void f_16f3_a2_v(object a0, object a1)
{
	f_1a9d_a3_v(f_1a8c_a0_o(), "pt_map_ospina", 2);
	a1->ShowMap(f_1a8c_a0_o());
}

void f_1703_a2_v(object a0, object a1)
{
	f_1a9d_a3_v(f_1a8c_a0_o(), "pt_map_spi4ka", 2);
	a1->ShowMap(f_1a8c_a0_o());
}

void f_1713_a2_v(object a0, object a1)
{
	@SetVariable("ood1Kapella7", 1);
}

void f_1719_a2_v(object a0, object a1)
{
	@SetVariable("ood1Kapella8", 1);
}

void f_171f_a2_v(object a0, object a1)
{
	@SetVariable("ood1Kapella9", 1);
}

void f_1725_a2_v(object a0, object a1)
{
	@SetVariable("ood1Kapella10", 1);
}

void f_172b_a2_v(object a0, object a1)
{
	@SetVariable("ood1Kapella12", 1);
}

void f_1731_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q03", 1);
	L0 = f_1a8c_a0_o();
	L0->AddMark("d3q03KapellaBoyLocation", "pt_d3q03_boy", 0, 11156, f_1651_a0_f());
	f_1aef_a0_v();
	f_1aff_a0_v();
	f_1620_a1_o("quest_d3_03");
	f_1645_a2_b("quest_d3_03", "boy");
}

void f_1754_a2_v(object a0, object a1)
{
	@SetVariable("ood3Kapella1", 1);
}

void f_175a_a2_v(object a0, object a1)
{
	f_1a9d_a3_v(f_1a8c_a0_o(), "pt_d3q03_boy", 2);
	a1->ShowMap(f_1a8c_a0_o());
}

void f_176a_a2_v(object a0, object a1)
{
	@SetVariable("ood3Kapella2", 1);
}

void f_1770_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_1a8c_a0_o();
	L0->FindMark(L1, "d3q03KapellaBoyLocation");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q03KapellaBoyLocationSelf");
	if (L1) {
		L1->Remove();
	}
	f_1b0f_a0_v();
	f_1645_a2_b("quest_d3_03", "completed");
}

void f_178e_a2_v(object a0, object a1)
{
	@SetVariable("ood3Kapella3", 1);
}

void f_1794_a2_v(object a0, object a1)
{
	@SetVariable("ood3Kapella4", 1);
}

void f_179a_a2_v(object a0, object a1)
{
	@SetVariable("ood3Kapella5", 1);
}

void f_17a0_a2_v(object a0, object a1)
{
	@SetVariable("ood6Kapella1", 1);
}

void f_17a6_a2_v(object a0, object a1)
{
	@SetVariable("d6q02KnowAboutAttack", 1);
}

void f_17ac_a2_v(object a0, object a1)
{
	@SetVariable("KnowViktoria", 1);
}

void f_17b2_a2_v(object a0, object a1)
{
	@SetVariable("ood8Kapella1", 1);
}

void f_17b8_a2_v(object a0, object a1)
{
	@SetVariable("d8q02", 1);
	f_1b1f_a0_v();
}

void f_17c1_a2_v(object a0, object a1)
{
	@Trace("feromicin is given");
	f_1638_a3_v(a0, "feromicin", 1);
}

void f_17cc_a2_v(object a0, object a1)
{
	@SetVariable("ood8Kapella2", 1);
}

void f_17d2_a2_v(object a0, object a1)
{
	@SetVariable("ood4Kapella1", 1);
}

void f_17d8_a2_v(object a0, object a1)
{
	@SetVariable("KnowPredictions", 1);
}

void f_17de_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1a8c_a0_o();
	L0->AddMark("d6q02KapellaGotoMladVlad", "pt_map_mladvlad", 0, 15377, f_1651_a0_f());
}

void f_17ee_a2_v(object a0, object a1)
{
	@SetVariable("d6KapellaVisit", 1);
}

void f_17f4_a2_v(object a0, object a1)
{
	@SetVariable("ood6Kapella3", 1);
}

void f_17fa_a2_v(object a0, object a1)
{
	@SetVariable("KnowTermitnik", 1);
}

bool f_1800_a1_b(object a0)
{
	if (f_161b_a1_i("ood1Kapella3") == 0) {
		return true;
	}
	return false;
}

bool f_180c_a1_b(object a0)
{
	if (f_161b_a1_i("ood1Kapella4") == 0) {
		return true;
	}
	return false;
}

bool f_1818_a1_b(object a0)
{
	if (f_161b_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_1824_a1_b(object a0)
{
	if (f_161b_a1_i("ood1Kapella5") == 0) {
		return true;
	}
	return false;
}

bool f_1830_a1_b(object a0)
{
	if (f_161b_a1_i("d1q03") == 0) {
		return true;
	}
	return false;
}

bool f_183c_a1_b(object a0)
{
	if (f_161b_a1_i("d1q03") == 1000) {
		return true;
	}
	return false;
}

bool f_1848_a1_b(object a0)
{
	if (f_161b_a1_i("d1q03IsKapella") == 1) {
		return true;
	}
	return false;
}

bool f_1854_a1_b(object a0)
{
	if (f_161b_a1_i("ood1Kapella6") == 0) {
		return true;
	}
	return false;
}

bool f_1860_a1_b(object a0)
{
	if (f_161b_a1_i("d1q03") == -1) {
		return true;
	}
	return false;
}

bool f_186c_a1_b(object a0)
{
	if (f_161b_a1_i("KnowAgo") == 1) {
		return true;
	}
	return false;
}

bool f_1878_a1_b(object a0)
{
	if (f_161b_a1_i("ood2Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1884_a1_b(object a0)
{
	if (f_161b_a1_i("ood2Kapella2") == 0) {
		return true;
	}
	return false;
}

bool f_1890_a1_b(object a0)
{
	if (f_161b_a1_i("d2q01") == 2) {
		return true;
	}
	return false;
}

bool f_189c_a1_b(object a0)
{
	if (f_161b_a1_i("ood1Kapella7") == 0) {
		return true;
	}
	return false;
}

bool f_18a8_a1_b(object a0)
{
	if (f_161b_a1_i("ood1Kapella8") == 0) {
		return true;
	}
	return false;
}

bool f_18b4_a1_b(object a0)
{
	if (f_161b_a1_i("ood1Kapella9") == 0) {
		return true;
	}
	return false;
}

bool f_18c0_a1_b(object a0)
{
	if (f_161b_a1_i("ood1Kapella10") == 0) {
		return true;
	}
	return false;
}

bool f_18cc_a1_b(object a0)
{
	if (f_161b_a1_i("ood1Kapella11") == 0) {
		return true;
	}
	return false;
}

bool f_18d8_a1_b(object a0)
{
	if (f_161b_a1_i("ood1Kapella12") == 0) {
		return true;
	}
	return false;
}

bool f_18e4_a1_b(object a0)
{
	if (f_161b_a1_i("d3q03") == 0) {
		return true;
	}
	return false;
}

bool f_18f0_a1_b(object a0)
{
	if (f_161b_a1_i("ood3Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_18fc_a1_b(object a0)
{
	if (f_161b_a1_i("d3q03") == 2) {
		return true;
	}
	return false;
}

bool f_1908_a1_b(object a0)
{
	if (f_161b_a1_i("ood3Kapella2") == 0) {
		return true;
	}
	return false;
}

bool f_1914_a1_b(object a0)
{
	if (f_161b_a1_i("ood3Kapella3") == 0) {
		return true;
	}
	return false;
}

bool f_1920_a1_b(object a0)
{
	if (f_161b_a1_i("ood3Kapella4") == 0) {
		return true;
	}
	return false;
}

bool f_192c_a1_b(object a0)
{
	if (f_161b_a1_i("ood3Kapella5") == 0) {
		return true;
	}
	return false;
}

bool f_1938_a1_b(object a0)
{
	if (f_161b_a1_i("d3q01") == -1) {
		return true;
	}
	return false;
}

bool f_1944_a1_b(object a0)
{
	if (f_1a5b_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_194e_a1_b(object a0)
{
	return true;
	return false;
}

bool f_1953_a1_b(object a0)
{
	if (f_161b_a1_i("d6q02") == 0) {
		return true;
	}
	return false;
}

bool f_195f_a1_b(object a0)
{
	if (f_161b_a1_i("d6q02") == 1000) {
		return true;
	}
	return false;
}

bool f_196b_a1_b(object a0)
{
	if (f_161b_a1_i("d6q02") == -1) {
		return true;
	}
	return false;
}

bool f_1977_a1_b(object a0)
{
	if (f_161b_a1_i("ood6Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1983_a1_b(object a0)
{
	if (f_161b_a1_i("d6q01") == 0) {
		return true;
	}
	return false;
}

bool f_198f_a1_b(object a0)
{
	if (f_161b_a1_i("d8TalkToMat") == 1) {
		return true;
	}
	return false;
}

bool f_199b_a1_b(object a0)
{
	if (f_161b_a1_i("ood8Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_19a7_a1_b(object a0)
{
	if (f_161b_a1_i("d8q02") == 1000) {
		return true;
	}
	return false;
}

bool f_19b3_a1_b(object a0)
{
	if (f_161b_a1_i("ood8Kapella2") == 0) {
		return true;
	}
	return false;
}

bool f_19bf_a1_b(object a0)
{
	if (f_161b_a1_i("d8TermitnikLoad") != 0) {
		return true;
	}
	return false;
}

bool f_19cb_a1_b(object a0)
{
	if (f_161b_a1_i("KnowKaterina") == 1) {
		return true;
	}
	return false;
}

bool f_19d7_a1_b(object a0)
{
	if (f_161b_a1_i("KnowLara") == 1) {
		return true;
	}
	return false;
}

bool f_19e3_a1_b(object a0)
{
	if (f_161b_a1_i("KnowMishka") == 1) {
		return true;
	}
	return false;
}

bool f_19ef_a1_b(object a0)
{
	if (f_161b_a1_i("KnowMladVlad") == 1) {
		return true;
	}
	return false;
}

bool f_19fb_a1_b(object a0)
{
	if (f_161b_a1_i("ood4Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1a07_a1_b(object a0)
{
	if (f_161b_a1_i("d4q02") == 0) {
		return true;
	}
	return false;
}

bool f_1a13_a1_b(object a0)
{
	if (f_161b_a1_i("KnowNotkin") == 1) {
		return true;
	}
	return false;
}

bool f_1a1f_a1_b(object a0)
{
	if (f_161b_a1_i("ood6Kapella3") == 0) {
		return true;
	}
	return false;
}

bool f_1a2b_a1_b(object a0)
{
	if (f_161b_a1_i("KnowSpi4ka") == 1) {
		return true;
	}
	return false;
}

bool f_1a37_a1_b(object a0)
{
	if (f_161b_a1_i("KnowUklad") == 1) {
		return true;
	}
	return false;
}

bool f_1a43_a1_b(object a0)
{
	if (f_161b_a1_i("ood1Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1a4f_a1_b(object a0)
{
	if (f_161b_a1_i("ood1Kapella2") == 0) {
		return true;
	}
	return false;
}

bool f_1a5b_a1_b(object a0)
{
	float L0;
	a0->GetProperty("disease", L0);
	return L0 == 0;
}

object f_1a62_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1a6f_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1a62_a0_o();
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

object f_1a8c_a0_o(void)
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

void f_1a9d_a3_v(object a0, string a1, float a2)
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

int f_1abe_a0_i(void)
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

void f_1acf_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 37, 2, 12119);
	f_1a6f_a2_b(L0, -1);
}

void f_1adf_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 52, 1, 12134);
	f_1a6f_a2_b(L0, 10);
}

void f_1aef_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 27, 2, 3367);
	f_1a6f_a2_b(L0, -1);
}

void f_1aff_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 83, 2, 12165);
	f_1a6f_a2_b(L0, 27);
}

void f_1b0f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 85, 2, 12167);
	f_1a6f_a2_b(L0, 27);
}

void f_1b1f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 127, 2, 13772);
	f_1a6f_a2_b(L0, -1);
}

void f_1b2f_a0_v(void)
{
	g1 = false;
}

void f_1b33_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_165f_a1_b(1)) {
		t6{a0};
		return;
	}
	if (f_165f_a1_b(2)) {
		t8{a0};
		return;
	}
	if (f_165f_a1_b(3)) {
		t10{a0};
		return;
	}
	if (f_165f_a1_b(4)) {
		t12{a0};
		return;
	}
	if (f_165f_a1_b(6)) {
		t4{a0};
		return;
	}
	if (f_165f_a1_b(8)) {
		t14{a0};
		return;
	}
	f_1665_a0_b();
}

