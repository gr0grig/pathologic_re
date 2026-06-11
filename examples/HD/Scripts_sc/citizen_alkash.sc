event OnDialogReply 11;
event OnUse 0;
event OnUnload 6;
event OnHit 22;
event OnPropertyChange 16;
event OnDeath 41;
event OnAttacked 17;
event OnPlayerDamage 30;
event OnSteal 40;
event OnMessage 42;
event OnTrigger 26;
event OnSee 1;
event OnHear 3;
event OnTimer 7;
event OnCollision 10;
event OnActorStuck 28;
event OnStopSee 2;
event OnHit2 43;

var bool g0;

task t0
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			if (f_1857_a0_b()) {
				f_140f_a1_v("Neutral");
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

	void OnDialogReply(int a0)
	{
		if (f_1857_a0_b()) {
			@lshStopAnimation();
		} else {
			@StopAnimation();
		}
		@StopTrade();
		tv0 = true;
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
		if (!f_137b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1851_a0_i());
		L0->SetNPCDescription(f_184f_a0_i());
		L0->SetPhoto(f_1853_a0_s());
		L0->SetPhoto2(f_1855_a0_s());
		L0->SetPlayerName(f_15e7_a0_i());
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
		f_13c0_a1_v(a0);
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
			if (f_150f_a1_b(tv1)) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(543012);
				tv0->ClearReplies();
				if (f_1525_a1_b(tv1)) {
					tv0->AddReply(543015, 45468, 45467);
				}
				if (f_152f_a1_b(tv1)) {
					tv0->AddReply(543022, 45475, 45474);
				}
				if (f_1539_a1_b(tv1) || f_1543_a1_b(tv1) || f_154d_a1_b(tv1)) {
					tv0->AddReply(543026, 45480, 45478);
				}
				if (f_1557_a1_b(tv1) || f_1561_a1_b(tv1)) {
					tv0->AddReply(543034, 45487, 45486);
				}
				tv0->AddReply(536643, -1, 38471);
				if (f_1525_a1_b(tv1)) {
					tv0->AddReply(543014, -1, 45466);
				}
				if (!f_1525_a1_b(tv1)) {
					tv0->AddReply(543027, -1, 45479);
				}
				tv0->AddReply(536852, -1, 38688);
				break;
			}
			f_210_a1_v("Neutral");
			tv0->SetMessage(536636);
			tv0->ClearReplies();
			if (f_14f7_a1_b(tv1) && f_151b_a1_b(tv1)) {
				tv0->AddReply(536638, -1, 38466);
			}
			if (f_14f7_a1_b(tv1) && !f_151b_a1_b(tv1)) {
				tv0->AddReply(536644, -1, 38472);
			}
			if (f_1503_a1_b(tv1) && f_151b_a1_b(tv1)) {
				tv0->AddReply(536639, 38468, 38467);
			}
			if (f_1503_a1_b(tv1) && !f_151b_a1_b(tv1)) {
				tv0->AddReply(536642, -1, 38470);
			}
			if (f_1525_a1_b(tv1) && f_14f7_a1_b(tv1)) {
				tv0->AddReply(536645, 38474, 38473);
			}
			if (f_152f_a1_b(tv1)) {
				tv0->AddReply(536663, 38493, 38492);
			}
			if (f_1539_a1_b(tv1)) {
				tv0->AddReply(536685, 38517, 38516);
			}
			if (f_1543_a1_b(tv1) && f_14f7_a1_b(tv1)) {
				tv0->AddReply(536710, 38542, 38541);
			}
			if (f_154d_a1_b(tv1)) {
				tv0->AddReply(536747, 38579, 38578);
			}
			if (f_1557_a1_b(tv1) && f_14f7_a1_b(tv1)) {
				tv0->AddReply(536769, 38602, 38601);
			}
			if (f_1561_a1_b(tv1)) {
				tv0->AddReply(536782, 38617, 38616);
			}
			if (f_156b_a1_b(tv1) && f_14f7_a1_b(tv1)) {
				tv0->AddReply(536792, 38627, 38626);
			}
			if (f_1575_a1_b(tv1)) {
				tv0->AddReply(536814, 38651, 38650);
			}
			if (f_157f_a1_b(tv1) && f_14f7_a1_b(tv1)) {
				tv0->AddReply(536833, 38670, 38669);
			}
			if (f_1589_a1_b(tv1)) {
				tv0->AddReply(536843, 38680, 38679);
			}
			if (f_14f7_a1_b(tv1)) {
				tv0->AddReply(536850, -1, 38686);
			}
			if (f_1503_a1_b(tv1)) {
				tv0->AddReply(536851, -1, 38687);
			}
			break;
			return;
		}
		if (f_1857_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_140f_a1_v(tv2);
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

	void f_210_a1_v(string a0)
	{
		if (!f_1857_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_141f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1439_a0_v();
			if (a1 == 38471) {
				f_14f2_a2_v(tv1, tv0);
			}
			if (a1 == 38466) {
				f_14f2_a2_v(tv1, tv0);
			}
			if (a1 == 38472) {
				f_14f2_a2_v(tv1, tv0);
			}
			if (a1 == 38469) {
				f_14f2_a2_v(tv1, tv0);
			}
			if (a1 == 38470) {
				f_14f2_a2_v(tv1, tv0);
			}
			if (a0 == 45464) {
				if (f_150f_a1_b(tv1)) {
					f_210_a1_v("Neutral");
					tv0->SetMessage(543012);
					tv0->ClearReplies();
					if (f_1525_a1_b(tv1)) {
						tv0->AddReply(543015, 45468, 45467);
					}
					if (f_152f_a1_b(tv1)) {
						tv0->AddReply(543022, 45475, 45474);
					}
					if (f_1539_a1_b(tv1) || f_1543_a1_b(tv1) || f_154d_a1_b(tv1)) {
						tv0->AddReply(543026, 45480, 45478);
					}
					if (f_1557_a1_b(tv1) || f_1561_a1_b(tv1)) {
						tv0->AddReply(543034, 45487, 45486);
					}
					tv0->AddReply(536643, -1, 38471);
					if (f_1525_a1_b(tv1)) {
						tv0->AddReply(543014, -1, 45466);
					}
					if (!f_1525_a1_b(tv1)) {
						tv0->AddReply(543027, -1, 45479);
					}
					tv0->AddReply(536852, -1, 38688);
					return;
				}
				f_210_a1_v("Neutral");
				tv0->SetMessage(536636);
				tv0->ClearReplies();
				if (f_14f7_a1_b(tv1) && f_151b_a1_b(tv1)) {
					tv0->AddReply(536638, -1, 38466);
				}
				if (f_14f7_a1_b(tv1) && !f_151b_a1_b(tv1)) {
					tv0->AddReply(536644, -1, 38472);
				}
				if (f_1503_a1_b(tv1) && f_151b_a1_b(tv1)) {
					tv0->AddReply(536639, 38468, 38467);
				}
				if (f_1503_a1_b(tv1) && !f_151b_a1_b(tv1)) {
					tv0->AddReply(536642, -1, 38470);
				}
				if (f_1525_a1_b(tv1) && f_14f7_a1_b(tv1)) {
					tv0->AddReply(536645, 38474, 38473);
				}
				if (f_152f_a1_b(tv1)) {
					tv0->AddReply(536663, 38493, 38492);
				}
				if (f_1539_a1_b(tv1)) {
					tv0->AddReply(536685, 38517, 38516);
				}
				if (f_1543_a1_b(tv1) && f_14f7_a1_b(tv1)) {
					tv0->AddReply(536710, 38542, 38541);
				}
				if (f_154d_a1_b(tv1)) {
					tv0->AddReply(536747, 38579, 38578);
				}
				if (f_1557_a1_b(tv1) && f_14f7_a1_b(tv1)) {
					tv0->AddReply(536769, 38602, 38601);
				}
				if (f_1561_a1_b(tv1)) {
					tv0->AddReply(536782, 38617, 38616);
				}
				if (f_156b_a1_b(tv1) && f_14f7_a1_b(tv1)) {
					tv0->AddReply(536792, 38627, 38626);
				}
				if (f_1575_a1_b(tv1)) {
					tv0->AddReply(536814, 38651, 38650);
				}
				if (f_157f_a1_b(tv1) && f_14f7_a1_b(tv1)) {
					tv0->AddReply(536833, 38670, 38669);
				}
				if (f_1589_a1_b(tv1)) {
					tv0->AddReply(536843, 38680, 38679);
				}
				if (f_14f7_a1_b(tv1)) {
					tv0->AddReply(536850, -1, 38686);
				}
				if (f_1503_a1_b(tv1)) {
					tv0->AddReply(536851, -1, 38687);
				}
				return;
			}
			if (a0 == 38680) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536844);
				tv0->ClearReplies();
				tv0->AddReply(536845, 38682, 38681);
				if (f_14f7_a1_b(tv1)) {
					tv0->AddReply(536849, -1, 38685);
				}
				return;
			}
			if (a0 == 38682) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536846);
				tv0->ClearReplies();
				tv0->AddReply(536847, -1, 38683);
				tv0->AddReply(536848, -1, 38684);
				return;
			}
			if (a0 == 38670) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536834);
				tv0->ClearReplies();
				tv0->AddReply(536835, 38672, 38671);
				tv0->AddReply(536842, -1, 38678);
				return;
			}
			if (a0 == 38672) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536836);
				tv0->ClearReplies();
				tv0->AddReply(536837, 38674, 38673);
				tv0->AddReply(536841, -1, 38677);
				return;
			}
			if (a0 == 38674) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536838);
				tv0->ClearReplies();
				tv0->AddReply(536839, -1, 38675);
				tv0->AddReply(536840, -1, 38676);
				return;
			}
			if (a0 == 38651) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536815);
				tv0->ClearReplies();
				if (f_14f7_a1_b(tv1)) {
					tv0->AddReply(536816, 38653, 38652);
				}
				tv0->AddReply(536823, 38660, 38659);
				tv0->AddReply(536832, -1, 38668);
				return;
			}
			if (a0 == 38660) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536824);
				tv0->ClearReplies();
				tv0->AddReply(536825, 38662, 38661);
				tv0->AddReply(536830, -1, 38666);
				tv0->AddReply(536831, -1, 38667);
				return;
			}
			if (a0 == 38662) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536826);
				tv0->ClearReplies();
				tv0->AddReply(536827, 38664, 38663);
				return;
			}
			if (a0 == 38664) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536828);
				tv0->ClearReplies();
				tv0->AddReply(536829, -1, 38665);
				return;
			}
			if (a0 == 38653) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536817);
				tv0->ClearReplies();
				tv0->AddReply(536818, 38655, 38654);
				tv0->AddReply(536822, -1, 38658);
				return;
			}
			if (a0 == 38655) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536819);
				tv0->ClearReplies();
				tv0->AddReply(536820, -1, 38656);
				tv0->AddReply(536821, -1, 38657);
				return;
			}
			if (a0 == 38627) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536793);
				tv0->ClearReplies();
				tv0->AddReply(536794, 38629, 38628);
				tv0->AddReply(536806, 38642, 38641);
				tv0->AddReply(536813, -1, 38649);
				return;
			}
			if (a0 == 38642) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536807);
				tv0->ClearReplies();
				tv0->AddReply(536808, 38644, 38643);
				tv0->AddReply(536812, 38644, 38647);
				return;
			}
			if (a0 == 38644) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536809);
				tv0->ClearReplies();
				tv0->AddReply(536810, -1, 38645);
				tv0->AddReply(536811, -1, 38646);
				return;
			}
			if (a0 == 38629) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536795);
				tv0->ClearReplies();
				tv0->AddReply(536796, 38631, 38630);
				tv0->AddReply(536805, -1, 38640);
				return;
			}
			if (a0 == 38631) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536797);
				tv0->ClearReplies();
				tv0->AddReply(536798, 38633, 38632);
				tv0->AddReply(536804, -1, 38639);
				return;
			}
			if (a0 == 38633) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536799);
				tv0->ClearReplies();
				tv0->AddReply(536800, 38635, 38634);
				tv0->AddReply(536803, 38635, 38637);
				return;
			}
			if (a0 == 38635) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536801);
				tv0->ClearReplies();
				tv0->AddReply(536802, -1, 38636);
				return;
			}
			if (a0 == 38617) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536783);
				tv0->ClearReplies();
				tv0->AddReply(536784, 38619, 38618);
				tv0->AddReply(536791, -1, 38625);
				return;
			}
			if (a0 == 38619) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536785);
				tv0->ClearReplies();
				tv0->AddReply(536786, 38621, 38620);
				tv0->AddReply(536790, -1, 38624);
				return;
			}
			if (a0 == 38621) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536787);
				tv0->ClearReplies();
				if (f_14f7_a1_b(tv1)) {
					tv0->AddReply(536788, -1, 38622);
				}
				tv0->AddReply(536789, -1, 38623);
				return;
			}
			if (a0 == 38602) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536770);
				tv0->ClearReplies();
				tv0->AddReply(536771, 38604, 38603);
				tv0->AddReply(536781, -1, 38615);
				return;
			}
			if (a0 == 38604) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536772);
				tv0->ClearReplies();
				tv0->AddReply(536773, 38606, 38605);
				tv0->AddReply(536780, 38606, 38613);
				return;
			}
			if (a0 == 38606) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536774);
				tv0->ClearReplies();
				tv0->AddReply(536775, 38608, 38607);
				tv0->AddReply(536779, 38608, 38611);
				return;
			}
			if (a0 == 38608) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536776);
				tv0->ClearReplies();
				tv0->AddReply(536777, -1, 38609);
				tv0->AddReply(536778, -1, 38610);
				return;
			}
			if (a0 == 38579) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536748);
				tv0->ClearReplies();
				if (f_14f7_a1_b(tv1)) {
					tv0->AddReply(536749, 38581, 38580);
				}
				tv0->AddReply(536761, 38593, 38592);
				tv0->AddReply(536768, -1, 38600);
				return;
			}
			if (a0 == 38593) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536762);
				tv0->ClearReplies();
				tv0->AddReply(536763, 38595, 38594);
				tv0->AddReply(536767, 38595, 38598);
				return;
			}
			if (a0 == 38595) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536764);
				tv0->ClearReplies();
				tv0->AddReply(536765, -1, 38596);
				tv0->AddReply(536766, -1, 38597);
				return;
			}
			if (a0 == 38581) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536750);
				tv0->ClearReplies();
				tv0->AddReply(536751, 38583, 38582);
				tv0->AddReply(536760, -1, 38591);
				return;
			}
			if (a0 == 38583) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536752);
				tv0->ClearReplies();
				tv0->AddReply(536753, 38585, 38584);
				return;
			}
			if (a0 == 38585) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536754);
				tv0->ClearReplies();
				tv0->AddReply(536755, 38587, 38586);
				tv0->AddReply(536759, -1, 38590);
				return;
			}
			if (a0 == 38587) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536756);
				tv0->ClearReplies();
				tv0->AddReply(536757, -1, 38588);
				tv0->AddReply(536758, -1, 38589);
				return;
			}
			if (a0 == 38542) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536711);
				tv0->ClearReplies();
				tv0->AddReply(536712, 38544, 38543);
				tv0->AddReply(536730, 38562, 38561);
				tv0->AddReply(536746, -1, 38577);
				return;
			}
			if (a0 == 38562) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536731);
				tv0->ClearReplies();
				tv0->AddReply(536732, 38564, 38563);
				tv0->AddReply(536745, -1, 38576);
				return;
			}
			if (a0 == 38564) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536733);
				tv0->ClearReplies();
				tv0->AddReply(536734, 38566, 38565);
				tv0->AddReply(536744, -1, 38575);
				return;
			}
			if (a0 == 38566) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536735);
				tv0->ClearReplies();
				tv0->AddReply(536736, -1, 38567);
				tv0->AddReply(536737, 38569, 38568);
				return;
			}
			if (a0 == 38569) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536738);
				tv0->ClearReplies();
				tv0->AddReply(536739, 38571, 38570);
				tv0->AddReply(536743, -1, 38574);
				return;
			}
			if (a0 == 38571) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536740);
				tv0->ClearReplies();
				tv0->AddReply(536741, -1, 38572);
				tv0->AddReply(536742, -1, 38573);
				return;
			}
			if (a0 == 38544) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536713);
				tv0->ClearReplies();
				tv0->AddReply(536714, 38546, 38545);
				tv0->AddReply(536729, -1, 38560);
				return;
			}
			if (a0 == 38546) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536715);
				tv0->ClearReplies();
				tv0->AddReply(536716, 38548, 38547);
				tv0->AddReply(536726, 38558, 38557);
				return;
			}
			if (a0 == 38558) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536727);
				tv0->ClearReplies();
				tv0->AddReply(536728, -1, 38559);
				return;
			}
			if (a0 == 38548) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536717);
				tv0->ClearReplies();
				tv0->AddReply(536718, 38550, 38549);
				return;
			}
			if (a0 == 38550) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536719);
				tv0->ClearReplies();
				tv0->AddReply(536720, 38552, 38551);
				tv0->AddReply(536723, 38555, 38554);
				return;
			}
			if (a0 == 38555) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536724);
				tv0->ClearReplies();
				tv0->AddReply(536725, -1, 38556);
				return;
			}
			if (a0 == 38552) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536721);
				tv0->ClearReplies();
				tv0->AddReply(536722, -1, 38553);
				return;
			}
			if (a0 == 38517) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536686);
				tv0->ClearReplies();
				tv0->AddReply(536687, 38519, 38518);
				tv0->AddReply(536699, 38531, 38530);
				tv0->AddReply(536709, -1, 38540);
				return;
			}
			if (a0 == 38531) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536700);
				tv0->ClearReplies();
				tv0->AddReply(536701, 38533, 38532);
				if (f_14f7_a1_b(tv1)) {
					tv0->AddReply(536705, 38537, 38536);
				}
				return;
			}
			if (a0 == 38537) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536706);
				tv0->ClearReplies();
				tv0->AddReply(536707, -1, 38538);
				tv0->AddReply(536708, -1, 38539);
				return;
			}
			if (a0 == 38533) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536702);
				tv0->ClearReplies();
				if (f_14f7_a1_b(tv1)) {
					tv0->AddReply(536703, -1, 38534);
				}
				tv0->AddReply(536704, -1, 38535);
				return;
			}
			if (a0 == 38519) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536688);
				tv0->ClearReplies();
				tv0->AddReply(536689, 38521, 38520);
				tv0->AddReply(536695, 38527, 38526);
				return;
			}
			if (a0 == 38527) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536696);
				tv0->ClearReplies();
				tv0->AddReply(536697, -1, 38528);
				tv0->AddReply(536698, -1, 38529);
				return;
			}
			if (a0 == 38521) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536690);
				tv0->ClearReplies();
				tv0->AddReply(536691, -1, 38522);
				tv0->AddReply(536692, 38524, 38523);
				return;
			}
			if (a0 == 38524) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536693);
				tv0->ClearReplies();
				tv0->AddReply(536694, -1, 38525);
				return;
			}
			if (a0 == 38493) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536664);
				tv0->ClearReplies();
				tv0->AddReply(536665, 38495, 38494);
				tv0->AddReply(536675, 38507, 38506);
				tv0->AddReply(536684, -1, 38515);
				return;
			}
			if (a0 == 38507) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536676);
				tv0->ClearReplies();
				tv0->AddReply(536677, 38509, 38508);
				return;
			}
			if (a0 == 38509) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536678);
				tv0->ClearReplies();
				tv0->AddReply(536679, 38511, 38510);
				tv0->AddReply(536683, -1, 38514);
				return;
			}
			if (a0 == 38511) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536680);
				tv0->ClearReplies();
				tv0->AddReply(536681, -1, 38512);
				tv0->AddReply(536682, -1, 38513);
				return;
			}
			if (a0 == 38495) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536666);
				tv0->ClearReplies();
				tv0->AddReply(536667, 38497, 38496);
				tv0->AddReply(536674, 38499, 38504);
				return;
			}
			if (a0 == 38497) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536668);
				tv0->ClearReplies();
				tv0->AddReply(536669, 38499, 38498);
				tv0->AddReply(536673, 38499, 38502);
				return;
			}
			if (a0 == 38499) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536670);
				tv0->ClearReplies();
				tv0->AddReply(536671, -1, 38500);
				tv0->AddReply(536672, -1, 38501);
				return;
			}
			if (a0 == 38474) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536646);
				tv0->ClearReplies();
				tv0->AddReply(536647, 38476, 38475);
				tv0->AddReply(536653, 38482, 38481);
				tv0->AddReply(536662, -1, 38491);
				return;
			}
			if (a0 == 38482) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536654);
				tv0->ClearReplies();
				tv0->AddReply(536655, 38484, 38483);
				tv0->AddReply(536659, 38488, 38487);
				return;
			}
			if (a0 == 38488) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536660);
				tv0->ClearReplies();
				tv0->AddReply(536661, 38484, 38489);
				return;
			}
			if (a0 == 38484) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536656);
				tv0->ClearReplies();
				tv0->AddReply(536657, -1, 38485);
				tv0->AddReply(536658, -1, 38486);
				return;
			}
			if (a0 == 38476) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536648);
				tv0->ClearReplies();
				tv0->AddReply(536649, 38478, 38477);
				tv0->AddReply(536652, -1, 38480);
				return;
			}
			if (a0 == 38478) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536650);
				tv0->ClearReplies();
				tv0->AddReply(536651, -1, 38479);
				return;
			}
			if (a0 == 38468) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(536640);
				tv0->ClearReplies();
				tv0->AddReply(536641, -1, 38469);
				return;
			}
			if (a0 == 45487) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(543035);
				tv0->ClearReplies();
				tv0->AddReply(543036, -1, 45488);
				tv0->AddReply(543037, -1, 45489);
				return;
			}
			if (a0 == 45480) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(543028);
				tv0->ClearReplies();
				tv0->AddReply(543029, -1, 45481);
				tv0->AddReply(543030, 45483, 45482);
				return;
			}
			if (a0 == 45483) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(543031);
				tv0->ClearReplies();
				tv0->AddReply(543032, -1, 45484);
				tv0->AddReply(543033, -1, 45485);
				return;
			}
			if (a0 == 45475) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(543023);
				tv0->ClearReplies();
				tv0->AddReply(543024, -1, 45476);
				tv0->AddReply(543025, -1, 45477);
				return;
			}
			if (a0 == 45468) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(543016);
				tv0->ClearReplies();
				tv0->AddReply(543017, 45471, 45469);
				tv0->AddReply(543018, -1, 45470);
				return;
			}
			if (a0 == 45471) {
				f_210_a1_v("Neutral");
				tv0->SetMessage(543019);
				tv0->ClearReplies();
				tv0->AddReply(543020, -1, 45472);
				tv0->AddReply(543021, -1, 45473);
				return;
			}
			tv3 = true;
			if (f_1857_a0_b()) {
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
	void init(object a0)
	{
		disable OnUse;
		f_a91_a1_v(a0);
		f_1897_a1_v(a0);
		enable OnUse;
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1821_a1_i(a0);
		if (L0 > 0) {
			f_1824_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_182a_a0_v();
	}

	void f_a91_a1_v(object a0)
	{
		if (a0 == null) {
			f_aec_a1_v("fdie");
		} else {
			Vector L0;
			a0->GetPosition(L0);
			Vector L1;
			@GetPosition(L1);
			Vector L2;
			@GetDirection(L2);
			Vector L3;
			L3 = L1 - L0;
			string L4;
			if (L3.x * L2.x + L3.z * L2.z >= 0) {
				L4 = "fdie";
			} else {
				L4 = "bdie";
			}
			@RemoveRTEnvelope();
			@SetDeathState();
			@Stop();
			@StopAsync();
			object L5;
			L5 = a0;
			if (a0->FuncExist("GetScriptProperty", 2)) {
				bool L6;
				a0->HasScriptProperty(L6, "Owner");
				if (L6) {
					a0->GetScriptProperty(L5, "Owner");
					if (L5 == null) {
						L5 = a0;
					}
				}
			}
			bool L7;
			if (L5->FuncExist("@GetEyesHeight", 1)) {
				float L8;
				Vector L9;
				L5->GetEyesHeight(L8);
				L9 = [0.0, 0.0, 0.0];
				L9.y = L8;
				@LookAsync(a0, "head", L9);
				L7 = true;
			} else {
				L7 = false;
			}
			f_144b_a1_v(L4);
			@PlayAnimation("all", L4);
			@WaitForAnimEnd();
			if (L7) {
				@StopAsync();
				@UnlookAsync("head");
			}
			@LockAnimationEnd("all", L4);
			@RemoveEnvelope();
		}
	}

	void f_aec_a1_v(string a0)
	{
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		f_144b_a1_v(a0);
		@PlayAnimation("all", a0);
		@WaitForAnimEnd();
		@LockAnimationEnd("all", a0);
		@RemoveEnvelope();
	}

	void OnHit(object a0, int a1, float a2, float a3)
	{
	}

	void OnPropertyChange(object a0, string a1)
	{
	}

	void OnDeath(object a0)
	{
	}
}

maintask t4
{
	var bool tv0;
	var bool tv1;
	var bool tv2;

	void init(void)
	{
		@SensePlayerOnly(true);
		f_1859_a0_v();
		f_b1b_a0_v();
		for (; ; ) {
			tv2 = false;
			f_c20_a0_v();
		}
	}

	void f_b1b_a0_v(void)
	{
		if (!f_1376_a0_b()) {
			f_182a_a0_v();
		}
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1821_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_bdf_a0_v();
			}
			f_1824_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1714_a1_v(a0);
		L0 = f_1767_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_bdf_a0_v();
			}
			f_1771_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_188d_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_17c4_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_bdf_a0_v();
				}
				f_17cb_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_17ee_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_bdf_a0_v();
			}
			f_17f1_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_16be_a2_b(a0, a1)) {
			f_bdf_a0_v();
			f_16de_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_17f3_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_bdf_a0_v();
				}
				f_17ff_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1721_a1_b(a0)) {
			f_bdf_a0_v();
			f_1731_a1_v(a0);
		}
	}

	void OnSee(object a0)
	{
		if (f_16f7_a1_b(a0)) {
			f_bdf_a0_v();
			f_170e_a1_v(a0);
		} else {
			f_bf8_a1_v(a0);
		}
	}

	void OnHear(object a0)
	{
		f_bf8_a1_v(a0);
	}

	void OnTimer(int a0)
	{
		if (a0 != 110) {
			return;
		}
		tv2 = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(void)
	{
		f_bdf_a0_v();
		f_182a_a0_v();
	}

	void f_bdf_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_c67_a0_v();
	}

	void f_be7_a0_v(void)
	{
		@KillTimer(110);
		tv2 = false;
		f_c6e_a0_v();
	}

	void OnDeath(object a0)
	{
		f_bdf_a0_v();
		global.OnDeath(a0);
	}

	void f_bf8_a1_v(object a0)
	{
		bool L0;
		int L1;
		if (!f_12d5_a1_b(a0)) {
			return;
		}
		if (tv2) {
			return;
		}
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		L1 = f_1756_a1_i(a0);
		if (L1 > 0) {
			if (L1 > 1) {
				f_be7_a0_v();
			}
			f_175f_a1_v(a0);
			tv2 = true;
			@SetTimer(110, 10.0);
		}
	}

	void f_c20_a0_v(void)
	{
		float L0;
		tv0 = false;
		tv1 = false;
		@rand(L0, 0.5);
		@Sleep(L0);
		while (!tv0) {
			Vector L1;
			if (!tv1) {
				for (; ; ) {
					Vector L2;
					bool L3;
					@GetPosition(L2);
					@GetRandomPFPointInCircle(L1, L2, f_c5b_a0_f(), L3);
					if (L3) {
						break;
					}
					@Sleep(1);
				}
			} else {
				tv1 = false;
			}
			object L4;
			L4 = f_c77_a1_o(L1);
			if (L4 != null) {
				bool L5;
				@RotatePath(L4, L5);
				if (L5) {
					@FollowPath(L4, f_c75_a0_b(), L5);
					L4 = null;
					if (L5) {
						t5{};
					}
				}
			} else {
				@Sleep(1);
			}
		}
	}

	float f_c5b_a0_f(void)
	{
		float L0;
		@GetCameraFarDistance(L0);
		return L0;
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void OnActorStuck(void)
	{
		@Stop();
	}

	void f_c67_a0_v(void)
	{
		tv0 = true;
		tv1 = false;
		@Stop();
		@StopGroup0();
	}

	void f_c6e_a0_v(void)
	{
		tv0 = true;
		tv1 = true;
		@Stop();
		@StopGroup0();
	}

	bool f_c75_a0_b(void)
	{
		return false;
	}

	object f_c77_a1_o(Vector a0)
	{
		object L0;
		@FindShiftedPathTo(L0, a0);
		return L0;
	}
}

task t5
{
	void OnUse(object a0)
	{
		int L0;
		L0 = f_1821_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_d72_a0_v();
			}
			f_1824_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1714_a1_v(a0);
		L0 = f_1767_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_d72_a0_v();
			}
			f_1771_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_188d_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_17c4_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_d72_a0_v();
				}
				f_17cb_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_17ee_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_d72_a0_v();
			}
			f_17f1_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_16be_a2_b(a0, a1)) {
			f_d72_a0_v();
			f_16de_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_17f3_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_d72_a0_v();
				}
				f_17ff_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1721_a1_b(a0)) {
			f_d72_a0_v();
			f_1731_a1_v(a0);
		}
	}

	void OnUnload(void)
	{
		f_d72_a0_v();
		f_182a_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_16f7_a1_b(a0)) {
			f_d72_a0_v();
			f_170e_a1_v(a0);
		}
	}

	void init(void)
	{
		int L0;
		int L1;
		@WaitForAnimEnd();
		if (!f_1376_a0_b()) {
			return;
		}
		L0 = f_1745_a0_i();
		for (L1 = 0; L1 < 5 && f_1376_a0_b(); L1++) {
			int L2;
			@irand(L2, 3);
			if (L2 == 0) {
				if (L0) {
					int L3;
					bool L4;
					@irand(L3, L0);
					@PlayAnimation("all", f_173e_a1_s(L3));
					@WaitForAnimEnd(L4);
					if (!L4) {
						break;
					}
				}
			} else {
				if (L2 == 1) {
					float L5;
					bool L6;
					@rand(L5, 4);
					@Sleep(L5 + 1, L6);
					if (!L6) {
						break;
					}
				} else {
					if (L1) {
						break;
					}
				}
			}
			if (!f_d70_a0_b()) {
				break;
			}
			@ResetAAS();
		}
		@ResetAAS();
	}

	bool f_d70_a0_b(void)
	{
		return true;
	}

	void f_d72_a0_v(void)
	{
		@StopAnimation();
		@StopGroup0();
	}
}

task t6
{
	var object tv0;

	void init(object a0)
	{
		Vector L0;
		Vector L1;
		bool L2;
		tv0 = a0;
		f_daa_a0_v();
		@GetDirection(L0);
		L1 = f_1243_a1_V(tv0);
		if (f_14ae_a2_f(L0, L1) < 0) {
			f_136b_a1_v(tv0);
			L2 = true;
		} else {
			@Sleep(1.5, L2);
		}
		if (L2) {
			f_136b_a1_v(tv0);
			@SetTimer(111, 0.5);
			@Sleep(5.0);
			@KillTimer(111);
		}
		@StopAsync();
		@UnlookAsync("head");
	}

	void f_daa_a0_v(void)
	{
		f_142e_a1_v(tv0);
	}

	void OnUse(object a0)
	{
		int L0;
		L0 = f_1821_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_e3e_a0_v();
			}
			f_1824_a1_v(a0);
		}
	}

	void OnAttacked(object a0)
	{
		int L0;
		f_1714_a1_v(a0);
		L0 = f_1767_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_e3e_a0_v();
			}
			f_1771_a1_v(a0);
		}
	}

	void OnPlayerDamage(object a0, object a1, bool a2)
	{
		if (f_188d_a3_b(a0, a1, a2)) {
			int L0;
			L0 = f_17c4_a2_i(a0, a2);
			if (L0 > 0) {
				if (L0 > 1) {
					f_e3e_a0_v();
				}
				f_17cb_a1_v(a0);
			}
		}
	}

	void OnSteal(object a0)
	{
		int L0;
		L0 = f_17ee_a1_i(a0);
		if (L0 > 0) {
			if (L0 > 1) {
				f_e3e_a0_v();
			}
			f_17f1_a1_v(a0);
		}
	}

	void OnMessage(object a0, string a1)
	{
		if (f_16be_a2_b(a0, a1)) {
			f_e3e_a0_v();
			f_16de_a2_v(a0, a1);
		} else {
			int L0;
			L0 = f_17f3_a2_i(a1, a0);
			if (L0 > 0) {
				if (L0 > 1) {
					f_e3e_a0_v();
				}
				f_17ff_a2_v(a1, a0);
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (f_1721_a1_b(a0)) {
			f_e3e_a0_v();
			f_1731_a1_v(a0);
		}
	}

	void f_e3e_a0_v(void)
	{
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(111);
	}

	void OnDeath(object a0)
	{
		f_e3e_a0_v();
		global.OnDeath(a0);
	}

	void OnTimer(int a0)
	{
		Vector L0;
		Vector L1;
		if (a0 != 111) {
			return;
		}
		if (!f_12d5_a1_b(tv0)) {
			f_e3e_a0_v();
			return;
		}
		@GetDirection(L0);
		L1 = f_1243_a1_V(tv0);
		if (f_14ae_a2_f(L0, L1) < 0.4999999701976776) {
			f_136b_a1_v(tv0);
		}
	}

	void OnUnload(void)
	{
		f_e3e_a0_v();
		f_182a_a0_v();
	}

	void OnSee(object a0)
	{
		if (f_16f7_a1_b(a0)) {
			f_e3e_a0_v();
			f_170e_a1_v(a0);
		}
	}
}

task t7
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;
	var float tv4;
	var int tv5;

	void init(object a0)
	{
		f_e98_a3_v(a0, true, 180.0);
	}

	float f_e92_a2_f(object a0, int a1)
	{
		return 0.05000000074505806;
	}

	int f_e95_a2_i(object a0, int a1)
	{
		return 0;
	}

	void f_e98_a3_v(object a0, bool a1, float a2)
	{
		float L0;
		Vector L1;
		Vector L2;
		bool L3;
		bool L4;
		float L5;
		f_f7d_a0_v();
		tv5 = 0;
		if (a0->FuncExist("@GetAttackDistance", 1)) {
			a0->GetAttackDistance(L0);
			L0 = L0 + 50;
		} else {
			L0 = a2;
		}
		if (L0 >= 150) {
			L0 = 150;
		}
		tv3 = false;
		tv0 = a0;
		@IsPlayerActor(tv0, L3);
		if (L3) {
			@PlayGlobalMusic("attack");
			@SendPlayerEnemy(a0, f_1474_a0_o());
		}
		if (a1) {
			L4 = false;
		} else {
			L4 = true;
		}
		L5 = 400.0 + L0;
		while (f_12d5_a1_b(tv0) && !tv3) {
			Vector L6;
			float L7;
			f_111a_a0_v();
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L6 = L1 - L2;
			L7 = L6 | L6;
			if (L7 >= L5 * L5) {
				if (!t8{tv0, L0, 3000.0, true, false}) {
					break;
				}
				L4 = false;
			} else {
				if (L7 >= a2 * a2) {
					Vector L8;
					bool L9;
					float L10;
					tv0->GetPFPosition(L8);
					@CanReachByPF(L9, L8);
					if (!L9) {
						if (!t8{tv0, L0, 3000.0, true, false}) {
							break;
						}
						L4 = false;
						continue;
					}
					if (!L4) {
						f_136b_a1_v(tv0);
						@PlayAnimation("all", "attack_on");
						@WaitForAnimEnd();
						f_111a_a0_v();
						@StopAsync();
						L4 = true;
						if (!f_12d5_a1_b(tv0)) {
							break;
						}
					}
					@rand(L10);
					if (L10 < 0.25 || f_10ef_a0_b()) {
						@Face(tv0);
						f_1121_a0_v();
						@PlayAnimation("all", "attack_stay");
						f_106b_a1_b(a2);
						@StopAsync();
					} else {
						@Face(tv0);
						@PlayAnimation("all", "fjump");
						@WaitForAnimEnd();
						f_111a_a0_v();
						@SetSpeed([0.0, 0.0, 0.0]);
						@Stop();
						@StopAsync();
						if (!f_10ef_a0_b()) {
							if (!f_12d5_a1_b(tv0)) {
								break;
							}
							tv0->GetPFPosition(L1);
							@GetPFPosition(L2);
							L6 = L1 - L2;
							L7 = L6 | L6;
							if (L7 < a2 * a2) {
								if (!f_fc7_a1_b(a2)) {
									break;
								}
							}
						}
					}
				} else {
					if (!f_fc7_a1_b(a2)) {
						break;
					}
					L4 = true;
				}
			}
		}
		@WaitForAnimEnd();
		if (tv3) {
			return;
		}
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if (L3) {
			@Sleep(2.0);
		}
	}

	void f_f7d_a0_v(void)
	{
		for (tv1 = 0; ; tv1++) {
			bool L0;
			@HasAnimation(L0, "all", "attack_begin" + (tv1 + 1));
			if (!L0) {
				break;
			}
		}
		for (tv2 = 0; ; tv2++) {
			bool L1;
			@IsExisting3DSound(L1, "attack" + (tv2 + 1));
			if (!L1) {
				break;
			}
		}
		Vector L2;
		@GetAnimationOffset(L2, "all", "bjump");
		tv4 = -L2.z;
	}

	void f_fa0_a2_v(float a0, int a1)
	{
		object L0;
		@GetVictim(a0 * 0.8999999761581421, L0);
		@ReportAttack(tv0);
		if (L0 == tv0) {
			float L1;
			float L2;
			L1 = f_e92_a2_f(L0, a1);
			L2 = f_1263_a3_f(L0, L1, f_e95_a2_i(L0, a1));
			@ReportHit(tv0, f_111f_a0_i(), L2, L1);
			f_1126_a2_v(L0, L2);
		}
	}

	bool f_fc7_a1_b(float a0)
	{
		int L0;
		bool L1;
		f_111a_a0_v();
		@irand(L0, tv1);
		L0 = L0 + 1;
		@Face(tv0);
		@SetAttackState(true);
		f_14e7_a0_v();
		@PlayAnimation("all", "attack_begin" + L0);
		@WaitForAnimEnd();
		f_10fa_a0_v();
		if (!f_12d5_a1_b(tv0)) {
			@StopAsync();
			return false;
		}
		f_fa0_a2_v(a0, L0);
		@HasAnimation(L1, "all", "attack_middle" + L0);
		if (L1) {
			int L2;
			f_14e7_a0_v();
			@PlayAnimation("all", "attack_middle" + L0);
			@WaitForAnimEnd();
			f_111a_a0_v();
			if (!f_12d5_a1_b(tv0)) {
				@StopAsync();
				return false;
			}
			f_fa0_a2_v(a0, L0);
			for (L2 = 1; ; L2++) {
				string L3;
				L3 = "attack_middle" + L0 + "_" + L2;
				@HasAnimation(L1, "all", L3);
				if (!L1) {
					break;
				}
				f_14e7_a0_v();
				@PlayAnimation("all", L3);
				@WaitForAnimEnd();
				f_111a_a0_v();
				if (!f_12d5_a1_b(tv0)) {
					@StopAsync();
					return false;
				}
				f_fa0_a2_v(a0, L0);
			}
		}
		@SetAttackState(false);
		@PlayAnimation("all", "attack_end" + L0);
		if (f_1128_a0_b()) {
			f_1050_a1_b(0.75);
			@StopAsync();
		}
		return true;
	}

	bool f_1050_a1_b(float a0)
	{
		float L0;
		@rand(L0);
		if (L0 < a0) {
			for (; ; ) {
				bool L1;
				@IsAnimationPlaying(L1);
				if (!L1) {
					break;
				}
				if (f_10b2_a0_b()) {
					return true;
				}
				@sync();
			}
		} else {
			@WaitForAnimEnd();
			f_111a_a0_v();
		}
		return false;
	}

	bool f_106b_a1_b(float a0)
	{
		for (; ; ) {
			bool L0;
			Vector L1;
			Vector L2;
			Vector L3;
			float L4;
			@IsAnimationPlaying(L0);
			if (!L0) {
				break;
			}
			if (f_10b2_a0_b()) {
				return true;
			}
			if (!f_12d5_a1_b(tv0)) {
				return false;
			}
			tv0->GetPFPosition(L1);
			@GetPFPosition(L2);
			L3 = L1 - L2;
			L4 = L3 | L3;
			if (L4 < a0 * a0) {
				f_fc7_a1_b(a0);
				return true;
			}
			@sync();
		}
		f_111a_a0_v();
		return false;
	}

	bool f_1096_a0_b(void)
	{
		if (!f_12d5_a1_b(tv0)) {
			return false;
		}
		if (f_10ef_a0_b()) {
			Vector L0;
			Vector L1;
			Vector L2;
			float L3;
			float L4;
			tv0->GetPFPosition(L0);
			@GetPFPosition(L1);
			L2 = L0 - L1;
			L3 = L2 | L2;
			tv0->GetAttackDistance(L4);
			L4 = L4 + 50;
			return L3 <= L4 * L4;
		}
		return false;
	}

	bool f_10b2_a0_b(void)
	{
		if (f_1096_a0_b() && f_10c2_a0_b()) {
			return true;
		}
		return false;
	}

	bool f_10c2_a0_b(void)
	{
		object L0;
		bool L1;
		@GetScene(L0);
		L1 = false;
		for (; ; ) {
			float L2;
			Vector L3;
			Vector L4;
			@FindDirLength(L2, -f_1243_a1_V(tv0), tv4);
			if (L2 < tv4) {
				break;
			}
			@Face(tv0);
			@PlayAnimation("all", "bjump");
			tv0->GetPFPosition(L3);
			@GetPFPosition(L4);
			@WaitForAnimEnd();
			f_111a_a0_v();
			@StopAsync();
			@SetSpeed([0.0, 0.0, 0.0]);
			L1 = true;
			if (!f_1096_a0_b()) {
				break;
			}
		}
		return L1;
	}

	bool f_10ef_a0_b(void)
	{
		if (tv0->FuncExist("IsAttacking", 1)) {
			bool L0;
			tv0->IsAttacking(L0);
			return L0;
		}
		return false;
	}

	void f_10fa_a0_v(void)
	{
		float L0;
		if (!tv2) {
			return;
		}
		if (tv5) {
			tv5 = tv5 + -1;
			if (tv5 > 0) {
				return;
			}
		}
		@rand(L0);
		if (L0 < f_112c_a0_f()) {
			int L1;
			@irand(L1, tv2);
			L1 = L1 + 1;
			@Speak("attack" + L1);
			tv5 = f_112a_a0_i();
		}
	}

	void f_111a_a0_v(void)
	{
		f_14de_a1_v(tv0);
	}

	int f_111f_a0_i(void)
	{
		return 0;
	}

	void f_1121_a0_v(void)
	{
		f_144b_a1_v("attack_stay");
	}

	void f_1126_a2_v(object a0, float a1)
	{
	}

	bool f_1128_a0_b(void)
	{
		return true;
	}

	int f_112a_a0_i(void)
	{
		return 1;
	}

	float f_112c_a0_f(void)
	{
		return 0.5;
	}
}

task t8
{
	var bool tv0;
	var object tv1;
	var bool tv2;

	void OnUnload(void)
	{
		f_1174_a0_v();
		f_182a_a0_v();
	}

	bool init(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		f_14de_a1_v(a0);
		@SetTimer(1, 5);
		@CanSee(L0, a0);
		if (L0) {
			tv2 = true;
			f_142e_a1_v(a0);
		} else {
			tv2 = false;
		}
		if (f_1252_a1_b(a0)) {
			@SendPlayerEnemy(a0, f_1474_a0_o());
		}
		L1 = f_119e_a5_b(a0, a1, a2, a3, a4);
		if (tv2) {
			@UnlookAsync("head");
		}
		@KillTimer(1);
		return L1;
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			f_14de_a1_v(tv1);
		} else {
			f_1204_a1_v(a0);
		}
	}

	void f_1174_a0_v(void)
	{
		@KillTimer(1);
		if (tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
		f_121a_a0_v();
	}

	void OnSee(object a0)
	{
		if (tv1 == a0 && !tv2) {
			tv2 = true;
			f_142e_a1_v(a0);
		}
	}

	void OnStopSee(object a0)
	{
		if (tv1 == a0 && tv2) {
			tv2 = false;
			@UnlookAsync("head");
		}
	}

	bool f_119e_a5_b(object a0, float a1, float a2, bool a3, bool a4)
	{
		bool L0;
		bool L1;
		tv0 = false;
		tv1 = a0;
		L1 = a4;
		for (; ; ) {
			object L2;
			Vector L3;
			Vector L4;
			Vector L5;
			float L6;
			if (!f_122a_a1_b(a0)) {
				return false;
			}
			a0->GetPosition(L3);
			@GetPosition(L4);
			L5 = L3 - L4;
			L6 = L5 | L5;
			if (a2 > 0 && L6 > a2 * a2) {
				@Stop();
				return false;
			}
			if (L6 > a1 * a1) {
				object L7;
				a0->GetPFPosition(L3);
				@FindPathTo(L7, L3);
				if (L7 != null) {
					L2 = L7;
					L7 = null;
				}
				if (L2 != null) {
					if (L1) {
						L1 = false;
						@RotatePath(L2, L0);
						if (!L0) {
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
					@FollowPath(L2, a3, L0, f_1231_a0_s(), f_1233_a0_s());
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						} else {
							continue;
						}
					} else {
						L2 = null;
					}
				} else {
					@KillTimer(0);
					@Sleep(0.5, L0);
					if (!L0) {
						if (tv0) {
							L2 = null;
							break;
						}
					}
					@SetTimer(0, 0.30000001192092896);
				}
			} else {
				@KillTimer(0);
				break;
			}
		}
		return !tv0;
	}

	void f_1204_a1_v(int a0)
	{
		if (a0 != 0) {
			return;
		}
		if (!f_122a_a1_b(tv1)) {
			tv0 = true;
		}
		@KillTimer(0);
		@Stop();
	}

	void OnCollision(object a0)
	{
		@RequestClearPath(a0);
	}

	void f_121a_a0_v(void)
	{
		tv0 = true;
		@KillTimer(0);
		@Stop();
	}

	void OnDeath(object a0)
	{
		f_1174_a0_v();
		global.OnDeath(a0);
	}
}

bool f_122a_a1_b(object a0)
{
	return f_12d5_a1_b(a0);
}

string f_1231_a0_s(void)
{
	return "walk";
}

string f_1233_a0_s(void)
{
	return "run";
}

string f_1235_a1_s(int a0)
{
	if (a0 == 2) {
		return "fire";
	} else {
		if (a0 == 1) {
			return "bullet";
		}
	}
	return "phys";
}

Vector f_1243_a1_V(object a0)
{
	Vector L0;
	Vector L1;
	@GetPosition(L0);
	a0->GetPosition(L1);
	return L1 - L0;
}

float f_124a_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1252_a1_b(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	return L0;
}

bool f_1257_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

float f_1263_a3_f(object a0, float a1, int a2)
{
	int L0;
	string L1;
	int L2;
	float L3;
	float L4;
	float L5;
	if (!f_1257_a2_b(a0, "health")) {
		return 0.0;
	}
	if (!f_1257_a2_b(a0, "armor")) {
		L0 = 0;
	} else {
		a0->GetProperty("armor", L0);
	}
	L1 = "armor_" + f_1235_a1_s(a2);
	if (!f_1257_a2_b(a0, L1)) {
		L2 = 0;
	} else {
		a0->GetProperty(L1, L2);
	}
	L3 = f_1484_a2_f((L0 + L2) / 100.0, 1);
	a0->GetProperty("health", L4);
	L5 = a1 * (1 - L3);
	a0->SetProperty("health", f_148b_a3_f(L4 - L5, 0, 1));
	if (f_1252_a1_b(a0)) {
		f_14c4_a1_v(-L5);
	}
	return L5;
}

bool f_12ac_a1_b(object a0)
{
	bool L0;
	a0->IsDead(L0);
	return L0;
}

bool f_12b1_a1_b(object a0)
{
	object L0;
	object L1;
	if (a0 == null) {
		return false;
	}
	if (a0->FuncExist("IsDead", 1) && f_12ac_a1_b(a0)) {
		return false;
	}
	@GetScene(L0);
	if (L0 == null) {
		return false;
	}
	a0->GetScene(L1);
	if (L0 != L1) {
		return false;
	}
	return true;
}

bool f_12d5_a1_b(object a0)
{
	int L0;
	if (!f_12b1_a1_b(a0)) {
		return false;
	}
	if (!f_1257_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L0);
	return L0 == 0;
}

void f_12ed_a1_v(object a0)
{
	bool L0;
	int L1;
	Vector L2;
	Vector L3;
	Vector L4;
	Vector L5;
	string L6;
	if (a0 == null) {
		return;
	}
	@IsDead(L0);
	if (L0) {
		return;
	}
	@GetSecondaryAnimationType(L1);
	if (L1 < 0) {
		return;
	}
	a0->GetPosition(L2);
	@GetPosition(L3);
	@GetDirection(L4);
	L5 = L3 - L2;
	if (L5.x * L4.x + L5.z * L4.z >= 0) {
		L6 = "fhit";
	} else {
		L6 = "bhit";
	}
	@FadeSecondaryAnimation("hit_react", L6 + "1", L6 + "2", -10);
}

void f_1319_a3_v(object a0, int a1, float a2)
{
	if (a0 && a1 != 4 && a1 != 5) {
		Vector L0;
		L0 = f_147a_a1_V(f_1243_a1_V(a0));
		object L1;
		@CreateVectorVector(L1);
		int L2;
		for (L2 = 1; ; L2++) {
			bool L3;
			Vector L4;
			Vector L5;
			@GetGeometryLocator("hit" + L2, L3, L4, L5);
			if (!L3) {
				break;
			}
			if ((L5 | L0) >= 0.7071067690849304) {
				L1->add(L4);
			}
		}
		int L6;
		L1->size(L6);
		if (L6) {
			int L7;
			Vector L8;
			@irand(L7, L6);
			L1->get(L8, L7);
			f_135d_a5_v(a0, a1, a2, L8, -L0);
			return;
		}
	}
	f_12ed_a1_v(a0);
}

void f_135d_a5_v(object a0, int a1, float a2, Vector a3, Vector a4)
{
	object L0;
	object L1;
	@GetScene(L0);
	@AddActorByType(L1, "scripted", L0, a3, a4, "blood_dir.xml");
	f_12ed_a1_v(a0);
}

void f_136b_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_1376_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_137b_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_147a_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1857_a0_b()) {
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

void f_13c0_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1857_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_13d2_a1_b(object a0)
{
	return f_13da_a2_b(a0, 70);
}

bool f_13da_a2_b(object a0, float a1)
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
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_140a_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
}

void f_140f_a1_v(string a0)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, false);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

void f_141f_a2_v(string a0, bool a1)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, a1);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

void f_142e_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_1439_a0_v(void)
{
	if (f_1857_a0_b()) {
		@lshStopSpeech();
	}
}

void f_1440_a3_v(string a0, int a1, int a2)
{
	if (f_1496_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_144b_a1_v(string a0)
{
	bool L0;
	@IsExisting3DSound(L0, a0);
	if (!L0) {
		int L1;
		for (L1 = 0; ; L1++) {
			bool L2;
			@IsExisting3DSound(L2, a0 + (L1 + 1));
			if (!L2) {
				break;
			}
		}
		if (!L1) {
			return;
		}
		int L3;
		@irand(L3, L1);
		a0 = a0 + (L3 + 1);
	}
	bool L4;
	@Is3DSoundLoaded(L4, a0);
	if (L4) {
		float L5;
		Vector L6;
		Vector L7;
		@GetEyesHeight(L5);
		@GetDirection(L6);
		L7 = L6 * 50;
		L7.y += L5;
		@PlayGlobalSound(a0, L7);
	}
}

object f_1474_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_147a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_1484_a2_f(float a0, float a1)
{
	return a0 < a1 ? a0 : a1;
}

float f_148b_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_1496_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

float f_149b_a2_f(Vector a0, Vector a1)
{
	return a0.x * a1.x + a0.z * a1.z;
}

float f_14a4_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

float f_14ae_a2_f(Vector a0, Vector a1)
{
	return f_149b_a2_f(a0, a1) / (f_14a4_a1_f(a0) * f_14a4_a1_f(a1));
}

int f_14bf_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_14c4_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	if (a0 < 0) {
		@RumblePlay(0.699999988079071, 500);
	}
	@SendWorldWndMessage(15, L0);
}

int f_14d5_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

void f_14de_a1_v(object a0)
{
	bool L0;
	@IsPlayerActor(a0, L0);
	if (L0) {
		@PlayGlobalMusic("attack");
	}
}

void f_14e7_a0_v(void)
{
	object L0;
	@GetScene(L0);
	@BroadcastMessage("battle", f_1474_a0_o(), L0);
}

void f_14f2_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_14f7_a1_b(object a0)
{
	if (f_14bf_a1_i("branch") == 0) {
		return true;
	}
	return false;
}

bool f_1503_a1_b(object a0)
{
	if (f_14bf_a1_i("branch") == 1) {
		return true;
	}
	return false;
}

bool f_150f_a1_b(object a0)
{
	if (f_14bf_a1_i("branch") == 2) {
		return true;
	}
	return false;
}

bool f_151b_a1_b(object a0)
{
	if (f_1593_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1525_a1_b(object a0)
{
	if (f_159a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_152f_a1_b(object a0)
{
	if (f_15a1_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1539_a1_b(object a0)
{
	if (f_15a8_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1543_a1_b(object a0)
{
	if (f_15af_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_154d_a1_b(object a0)
{
	if (f_15b6_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1557_a1_b(object a0)
{
	if (f_15bd_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1561_a1_b(object a0)
{
	if (f_15c4_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_156b_a1_b(object a0)
{
	if (f_15cb_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1575_a1_b(object a0)
{
	if (f_15d2_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_157f_a1_b(object a0)
{
	if (f_15d9_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1589_a1_b(object a0)
{
	if (f_15e0_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1593_a1_b(object a0)
{
	return f_14d5_a0_i() <= 6;
}

bool f_159a_a1_b(object a0)
{
	return f_14d5_a0_i() == 1;
}

bool f_15a1_a1_b(object a0)
{
	return f_14d5_a0_i() == 2;
}

bool f_15a8_a1_b(object a0)
{
	return f_14d5_a0_i() == 3;
}

bool f_15af_a1_b(object a0)
{
	return f_14d5_a0_i() == 4;
}

bool f_15b6_a1_b(object a0)
{
	return f_14d5_a0_i() == 5;
}

bool f_15bd_a1_b(object a0)
{
	return f_14d5_a0_i() == 6;
}

bool f_15c4_a1_b(object a0)
{
	return f_14d5_a0_i() == 7;
}

bool f_15cb_a1_b(object a0)
{
	return f_14d5_a0_i() == 8;
}

bool f_15d2_a1_b(object a0)
{
	return f_14d5_a0_i() == 9;
}

bool f_15d9_a1_b(object a0)
{
	return f_14d5_a0_i() == 10;
}

bool f_15e0_a1_b(object a0)
{
	return f_14d5_a0_i() == 11;
}

int f_15e7_a0_i(void)
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

int f_15f8_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_15fe_a1_v(object a0)
{
	if (f_15f8_a0_i() == 1) {
		@WorkWithCorpse(a0);
	} else {
		@Barter(a0);
	}
}

void f_160b_a2_v(int a0, int a1)
{
	int L0;
	bool L1;
	if (a0 > a1) {
		@Trace("GenerateMoney: iMin > iMax");
		return;
	}
	L0 = 0;
	if (a0 != a1) {
		@irand(L0, a1 - a0);
	} else {
		if (a0 == 0) {
			return;
		}
	}
	L0 = L0 + a0;
	if (L0 == 0) {
		return;
	}
	@AddItem(L1, f_168c_a1_i("Money"), 0, L0);
}

void f_162a_a1_v(string a0)
{
	object L0;
	int L1;
	bool L2;
	@CreateInvItem(L0);
	L0->SetItemName(a0);
	L0->SetProperty("Organ", 1);
	L0->GetItemID(L1);
	@AddItem(L2, L0, 0, 1);
}

void f_163b_a0_v(void)
{
	if (f_15f8_a0_i() != 1) {
		return;
	}
	f_162a_a1_v("liver");
	f_162a_a1_v("kidney");
	f_162a_a1_v("heart");
	f_162a_a1_v("blood");
}

void f_1653_a0_v(void)
{
	bool L0;
	@ClearSubContainer(0);
	f_160b_a2_v(30, 50 + f_14d5_a0_i() * 40);
	f_1440_a3_v("tourniquet", 1, 10);
	f_1440_a3_v("bandage", 1, 10);
	f_1440_a3_v("bottle_empty", 1, 2);
	f_1440_a3_v("tvirin", 1, 8);
}

void f_167b_a0_v(void)
{
	bool L0;
	@ClearSubContainer(0);
	f_1440_a3_v("tourniquet", 1, 4);
	f_1440_a3_v("bandage", 1, 2);
}

int f_168c_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_1691_a1_v(object a0)
{
	t3{a0};
}

void OnPropertyChange(object a0, string a1)
{
	if (a1 == "health") {
		float L0;
		@GetProperty("health", L0);
		if (L0 <= 0) {
			@SignalDeath(a0);
		}
	}
}

void OnDeath(object a0)
{
	f_1691_a1_v(a0);
}

void OnHit(object a0, int a1, float a2, float a3)
{
	f_1319_a3_v(a0, a1, a2);
}

void OnHit2(object a0, int a1, float a2, float a3, Vector a4, Vector a5)
{
	f_135d_a5_v(a0, a1, a2, a4, a5);
}

bool f_16be_a2_b(object a0, string a1)
{
	if (a1 == "unholster") {
		return f_182b_a1_b(a0);
	} else {
		if (a1 == "player_shot") {
			return f_1830_a1_b(a0);
		} else {
			if (a1 == "battle") {
				return f_1845_a1_b(a0);
			}
		}
	}
	return false;
}

void f_16de_a2_v(object a0, string a1)
{
	if (a1 == "unholster") {
		f_182e_a1_v(a0);
	} else {
		if (a1 == "player_shot") {
			f_183f_a1_v(a0);
		} else {
			if (a1 == "battle") {
				f_1848_a1_v(a0);
			}
		}
	}
}

bool f_16f7_a1_b(object a0)
{
	if (f_182b_a1_b(a0) && f_1252_a1_b(a0)) {
		bool L0;
		a0->IsWeaponHolstered(L0);
		if (!L0) {
			return true;
		}
	}
	return false;
}

void f_170e_a1_v(object a0)
{
	f_182e_a1_v(a0);
}

void f_1714_a1_v(object a0)
{
	if (f_1252_a1_b(a0)) {
		@ReportReputationChange(a0, f_1474_a0_o(), -0.019999999552965164);
	}
}

bool f_1721_a1_b(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		return f_184a_a1_b(L0);
	}
	return false;
}

void f_1731_a1_v(string a0)
{
	if (a0 == "heal") {
		object L0;
		@FindActor(L0, "player");
		f_184d_a1_v(L0);
	}
}

string f_173e_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1745_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_173e_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1756_a1_i(object a0)
{
	return f_1888_a0_b() ? 2 : 0;
}

void f_175f_a1_v(object a0)
{
	t6{a0};
}

int f_1767_a1_i(object a0)
{
	return f_12d5_a1_b(a0) ? 2 : 0;
}

void f_1771_a1_v(object a0)
{
	t7{a0};
}

bool f_1779_a2_b(object a0, bool a1)
{
	string L0;
	string L1;
	if (!f_1257_a2_b(a0, "class")) {
		return false;
	}
	@GetProperty("class", L0);
	a0->GetProperty("class", L1);
	if (!a1 && L0 == L1) {
		return true;
	}
	if (L1 == "rat") {
		return false;
	} else {
		if (L1 == "rat_big") {
			return false;
		} else {
			if (L1 == "dog") {
				return false;
			} else {
				if (L1 == "grabitel") {
					return false;
				} else {
					if (L1 == "bomber") {
						return false;
					} else {
						if (L1 == "sanitar") {
							return false;
						} else {
							if (L1 == "hunter") {
								return false;
							} else {
								if (L1 == "soldier") {
									return false;
								}
							}
						}
					}
				}
			}
		}
	}
	return true;
}

int f_17c4_a2_i(object a0, bool a1)
{
	return f_1767_a1_i(a0);
}

void f_17cb_a1_v(object a0)
{
	f_1771_a1_v(a0);
}

bool f_17d1_a4_b(object a0, object a1, float a2, bool a3)
{
	bool L0;
	if (!f_1779_a2_b(a1, !a3)) {
		return false;
	}
	@CanSee(L0, a0);
	if (L0 || f_124a_a1_f(a0) <= a2 * a2) {
		return true;
	}
	return false;
}

int f_17ee_a1_i(object a0)
{
	return 0;
}

void f_17f1_a1_v(object a0)
{
}

int f_17f3_a2_i(string a0, object a1)
{
	if (a0 == "killme") {
		return f_1809_a1_i(a1);
	}
	return 0;
}

void f_17ff_a2_v(string a0, object a1)
{
	if (a0 == "killme") {
		f_181b_a1_v(a1);
		return;
	}
}

int f_1809_a1_i(object a0)
{
	if (!f_12d5_a1_b(a0)) {
		return 0;
	}
	return f_188a_a1_b(a0) ? 2 : 0;
}

void f_181b_a1_v(object a0)
{
	f_1771_a1_v(a0);
}

int f_1821_a1_i(object a0)
{
	return 2;
}

void f_1824_a1_v(object a0)
{
	f_1860_a1_v(a0);
}

void f_182a_a0_v(void)
{
}

bool f_182b_a1_b(object a0)
{
	return false;
}

void f_182e_a1_v(object a0)
{
}

bool f_1830_a1_b(object a0)
{
	bool L0;
	@CanSee(L0, a0);
	return L0 || f_124a_a1_f(a0) <= 2250000;
}

void f_183f_a1_v(object a0)
{
	f_175f_a1_v(a0);
}

bool f_1845_a1_b(object a0)
{
	return false;
}

void f_1848_a1_v(object a0)
{
}

bool f_184a_a1_b(object a0)
{
	return false;
}

void f_184d_a1_v(object a0)
{
}

int f_184f_a0_i(void)
{
	return 515557;
}

int f_1851_a0_i(void)
{
	return 503342;
}

string f_1853_a0_s(void)
{
	return "ui/NPC_Citizen1.png";
}

string f_1855_a0_s(void)
{
	return "ui/NPC_Citizen1_b.png";
}

bool f_1857_a0_b(void)
{
	return false;
}

void f_1859_a0_v(void)
{
	g0 = false;
	f_167b_a0_v();
}

void f_1860_a1_v(object a0)
{
	if (g0) {
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_15fe_a1_v(a0);
		}
		return;
	} else {
		if (1000 == t1{a0}) {
			if (!f_13d2_a1_b(a0)) {
				return;
			}
			t0{a0};
			f_140a_a1_v(a0);
		}
	}
}

bool f_1888_a0_b(void)
{
	return false;
}

bool f_188a_a1_b(object a0)
{
	return true;
}

bool f_188d_a3_b(object a0, object a1, bool a2)
{
	return f_17d1_a4_b(a0, a1, 700.0, a2);
}

void f_1897_a1_v(object a0)
{
	if (f_1252_a1_b(a0)) {
		@ReportReputationChange(a0, f_1474_a0_o(), -0.029999999329447746, true);
		f_1653_a0_v();
	}
	f_163b_a0_v();
	g0 = true;
	@SetRTEnvelope(50, 40);
}

