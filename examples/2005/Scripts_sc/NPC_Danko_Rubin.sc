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
		} while (!f_125a_a0_b());
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
		f_12b4_a1_b(f_1361_a0_o());
		if (!f_125f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1400_a0_i());
		L0->SetNPCDescription(f_13fe_a0_i());
		L0->SetPhoto(f_1402_a0_s());
		L0->SetPhoto2(f_1404_a0_s());
		L0->SetPlayerName(f_1727_a0_i());
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
		f_12a3_a1_v(a0);
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
			tv0->SetMessage(534092);
			tv0->ClearReplies();
			if (f_1579_a1_b(tv1)) {
				tv0->AddReply(534093, 38177, 35686);
			}
			tv0->AddReply(536401, -1, 38180);
			tv0->AddReply(536402, -1, 38181);
			break;
			return;
		}
		if (f_1406_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_133e_a1_v(tv2);
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
		if (!f_1406_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1345_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_135a_a0_v();
			if (a1 == 35688) {
				f_1415_a2_v(tv1, tv0);
				f_1557_a2_v(tv1, tv0);
			}
			if (a1 == 38195) {
				f_1415_a2_v(tv1, tv0);
				f_1557_a2_v(tv1, tv0);
			}
			if (a0 == 35685) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(534092);
				tv0->ClearReplies();
				if (f_1579_a1_b(tv1)) {
					tv0->AddReply(534093, 38177, 35686);
				}
				tv0->AddReply(536401, -1, 38180);
				tv0->AddReply(536402, -1, 38181);
				return;
			}
			if (a0 == 38177) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536398);
				tv0->ClearReplies();
				tv0->AddReply(536399, 38179, 38178);
				tv0->AddReply(536408, 38190, 38187);
				return;
			}
			if (a0 == 38190) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536411);
				tv0->ClearReplies();
				tv0->AddReply(536412, 38192, 38191);
				return;
			}
			if (a0 == 38192) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536413);
				tv0->ClearReplies();
				tv0->AddReply(536414, 38189, 38193);
				return;
			}
			if (a0 == 38179) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536400);
				tv0->ClearReplies();
				tv0->AddReply(536409, 38189, 38188);
				tv0->AddReply(536415, -1, 38195);
				return;
			}
			if (a0 == 38189) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536410);
				tv0->ClearReplies();
				tv0->AddReply(536403, 38183, 38182);
				return;
			}
			if (a0 == 38183) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536404);
				tv0->ClearReplies();
				tv0->AddReply(536405, 38185, 38184);
				return;
			}
			if (a0 == 38185) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(536406);
				tv0->ClearReplies();
				tv0->AddReply(536407, 35687, 38186);
				return;
			}
			if (a0 == 35687) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(534094);
				tv0->ClearReplies();
				tv0->AddReply(534095, -1, 35688);
				return;
			}
			tv3 = true;
			if (f_1406_a0_b()) {
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
		f_12b4_a1_b(f_1361_a0_o());
		if (!f_125f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1400_a0_i());
		L0->SetNPCDescription(f_13fe_a0_i());
		L0->SetPhoto(f_1402_a0_s());
		L0->SetPhoto2(f_1404_a0_s());
		L0->SetPlayerName(f_1727_a0_i());
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
		f_12a3_a1_v(a0);
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
			f_230_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_1406_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_133e_a1_v(tv2);
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

	void f_230_a1_v(string a0)
	{
		if (!f_1406_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1345_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_135a_a0_v();
			if (a0 == 36971) {
				f_230_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_230_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_230_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_1406_a0_b()) {
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
		f_12b4_a1_b(f_1361_a0_o());
		if (!f_125f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1400_a0_i());
		L0->SetNPCDescription(f_13fe_a0_i());
		L0->SetPhoto(f_1402_a0_s());
		L0->SetPhoto2(f_1404_a0_s());
		L0->SetPlayerName(f_1727_a0_i());
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
		f_12a3_a1_v(a0);
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
			if (f_15a9_a1_b(tv1) && f_15b5_a1_b(tv1)) {
				f_1567_a2_v(tv1, tv0);
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508737);
				tv0->ClearReplies();
				tv0->AddReply(508777, 9633, 9624);
				tv0->AddReply(508781, 9629, 9628);
				break;
			}
			if (f_15f1_a1_b(tv1) && !f_15e5_a1_b(tv1) && !f_1585_a1_b(tv1)) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(536148);
				tv0->ClearReplies();
				tv0->AddReply(536149, 37916, 37914);
				tv0->AddReply(536150, 37916, 37915);
				break;
			}
			if (f_15f1_a1_b(tv1) && !f_15e5_a1_b(tv1)) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(509078);
				tv0->ClearReplies();
				tv0->AddReply(509079, 9958, 9957);
				break;
			}
			f_3d7_a1_v("Neutral");
			tv0->SetMessage(508778);
			tv0->ClearReplies();
			if (f_15a9_a1_b(tv1)) {
				tv0->AddReply(511141, 12331, 12330);
			}
			if (f_15c1_a1_b(tv1)) {
				tv0->AddReply(508779, 9681, 9626);
			}
			if (f_15cd_a1_b(tv1)) {
				tv0->AddReply(508780, 9669, 9627);
			}
			if (f_15d9_a1_b(tv1) && !f_15a9_a1_b(tv1) && !f_15e5_a1_b(tv1)) {
				tv0->AddReply(508802, 9651, 9650);
			}
			tv0->AddReply(511140, -1, 12329);
			break;
			return;
		}
		if (f_1406_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_133e_a1_v(tv2);
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

	void f_3d7_a1_v(string a0)
	{
		if (!f_1406_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1345_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_135a_a0_v();
			if (a1 == 9647) {
				f_146e_a2_v(tv1, tv0);
				f_1454_a2_v(tv1, tv0);
				f_1486_a2_v(tv1, tv0);
			}
			if (a1 == 9649) {
				f_146e_a2_v(tv1, tv0);
			}
			if (a1 == 9639) {
				f_146e_a2_v(tv1, tv0);
				f_1454_a2_v(tv1, tv0);
				f_1486_a2_v(tv1, tv0);
			}
			if (a1 == 9594) {
				f_146e_a2_v(tv1, tv0);
				f_1454_a2_v(tv1, tv0);
				f_1486_a2_v(tv1, tv0);
			}
			if (a1 == 9963) {
				f_14a6_a2_v(tv1, tv0);
				f_140e_a2_v(tv1, tv0);
				f_144e_a2_v(tv1, tv0);
				f_1443_a2_v(tv1, tv0);
			}
			if (a1 == 12332) {
				f_1454_a2_v(tv1, tv0);
				f_1486_a2_v(tv1, tv0);
			}
			if (a1 == 9684) {
				f_1474_a2_v(tv1, tv0);
			}
			if (a1 == 9672) {
				f_147a_a2_v(tv1, tv0);
			}
			if (a1 == 9678) {
				f_147a_a2_v(tv1, tv0);
			}
			if (a1 == 9679) {
				f_147a_a2_v(tv1, tv0);
			}
			if (a1 == 9667) {
				f_147a_a2_v(tv1, tv0);
			}
			if (a1 == 9644) {
				f_1480_a2_v(tv1, tv0);
			}
			if (a1 == 9641) {
				f_1480_a2_v(tv1, tv0);
			}
			if (a0 == 9574) {
				if (f_15a9_a1_b(tv1) && f_15b5_a1_b(tv1)) {
					f_1567_a2_v(tv1, tv0);
					f_3d7_a1_v("Neutral");
					tv0->SetMessage(508737);
					tv0->ClearReplies();
					tv0->AddReply(508777, 9633, 9624);
					tv0->AddReply(508781, 9629, 9628);
					return;
				}
				if (f_15f1_a1_b(tv1) && !f_15e5_a1_b(tv1) && !f_1585_a1_b(tv1)) {
					f_3d7_a1_v("Neutral");
					tv0->SetMessage(536148);
					tv0->ClearReplies();
					tv0->AddReply(536149, 37916, 37914);
					tv0->AddReply(536150, 37916, 37915);
					return;
				}
				if (f_15f1_a1_b(tv1) && !f_15e5_a1_b(tv1)) {
					f_3d7_a1_v("Neutral");
					tv0->SetMessage(509078);
					tv0->ClearReplies();
					tv0->AddReply(509079, 9958, 9957);
					return;
				}
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508778);
				tv0->ClearReplies();
				if (f_15a9_a1_b(tv1)) {
					tv0->AddReply(511141, 12331, 12330);
				}
				if (f_15c1_a1_b(tv1)) {
					tv0->AddReply(508779, 9681, 9626);
				}
				if (f_15cd_a1_b(tv1)) {
					tv0->AddReply(508780, 9669, 9627);
				}
				if (f_15d9_a1_b(tv1) && !f_15a9_a1_b(tv1) && !f_15e5_a1_b(tv1)) {
					tv0->AddReply(508802, 9651, 9650);
				}
				tv0->AddReply(511140, -1, 12329);
				return;
			}
			if (a0 == 9651) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508803);
				tv0->ClearReplies();
				tv0->AddReply(508804, 9640, 9652);
				return;
			}
			if (a0 == 9640) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508793);
				tv0->ClearReplies();
				tv0->AddReply(508795, 9643, 9642);
				tv0->AddReply(508794, -1, 9641);
				return;
			}
			if (a0 == 9643) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508796);
				tv0->ClearReplies();
				tv0->AddReply(508797, -1, 9644);
				return;
			}
			if (a0 == 9669) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508818);
				tv0->ClearReplies();
				tv0->AddReply(508819, 9666, 9670);
				if (f_15e5_a1_b(tv1)) {
					tv0->AddReply(536147, 9616, 37912);
				}
				return;
			}
			if (a0 == 9616) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508769);
				tv0->ClearReplies();
				tv0->AddReply(508770, 9621, 9617);
				tv0->AddReply(508771, 9619, 9618);
				return;
			}
			if (a0 == 9619) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508772);
				tv0->ClearReplies();
				tv0->AddReply(508773, 9621, 9620);
				tv0->AddReply(508814, -1, 9663);
				return;
			}
			if (a0 == 9621) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508774);
				tv0->ClearReplies();
				tv0->AddReply(508775, 9623, 9622);
				tv0->AddReply(510448, 9623, 11518);
				return;
			}
			if (a0 == 9623) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508776);
				tv0->ClearReplies();
				tv0->AddReply(508739, 9577, 9576);
				tv0->AddReply(508764, 9577, 9608);
				tv0->AddReply(508765, 9611, 9610);
				return;
			}
			if (a0 == 9611) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508766);
				tv0->ClearReplies();
				tv0->AddReply(508767, 9587, 9612);
				tv0->AddReply(508768, 9587, 9614);
				return;
			}
			if (a0 == 9577) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508740);
				tv0->ClearReplies();
				tv0->AddReply(508746, 9587, 9586);
				return;
			}
			if (a0 == 9587) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508747);
				tv0->ClearReplies();
				tv0->AddReply(508748, 9589, 9588);
				tv0->AddReply(508762, 9589, 9604);
				tv0->AddReply(508763, 9589, 9606);
				return;
			}
			if (a0 == 9589) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508749);
				tv0->ClearReplies();
				tv0->AddReply(508761, -1, 9603);
				tv0->AddReply(536153, -1, 37918);
				return;
			}
			if (a0 == 9666) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508815);
				tv0->ClearReplies();
				tv0->AddReply(508817, 9671, 9668);
				tv0->AddReply(508816, -1, 9667);
				return;
			}
			if (a0 == 9671) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508820);
				tv0->ClearReplies();
				tv0->AddReply(508821, -1, 9672);
				tv0->AddReply(508822, 9674, 9673);
				return;
			}
			if (a0 == 9674) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508823);
				tv0->ClearReplies();
				tv0->AddReply(508824, 9677, 9675);
				return;
			}
			if (a0 == 9677) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508826);
				tv0->ClearReplies();
				tv0->AddReply(508827, -1, 9678);
				tv0->AddReply(508828, -1, 9679);
				return;
			}
			if (a0 == 9681) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508829);
				tv0->ClearReplies();
				tv0->AddReply(508830, 9683, 9682);
				return;
			}
			if (a0 == 9683) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508831);
				tv0->ClearReplies();
				tv0->AddReply(508832, -1, 9684);
				return;
			}
			if (a0 == 12331) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(511142);
				tv0->ClearReplies();
				tv0->AddReply(511143, -1, 12332);
				return;
			}
			if (a0 == 9958) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(509080);
				tv0->ClearReplies();
				tv0->AddReply(509081, 11530, 9959);
				tv0->AddReply(536146, 10799, 37906);
				return;
			}
			if (a0 == 10799) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(509805);
				tv0->ClearReplies();
				tv0->AddReply(509806, 10801, 10800);
				return;
			}
			if (a0 == 10801) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(509807);
				tv0->ClearReplies();
				tv0->AddReply(509808, 10803, 10802);
				tv0->AddReply(509821, 10803, 10816);
				return;
			}
			if (a0 == 10803) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(509809);
				tv0->ClearReplies();
				tv0->AddReply(509810, 10805, 10804);
				tv0->AddReply(509814, 10809, 10808);
				tv0->AddReply(509820, 10809, 10814);
				return;
			}
			if (a0 == 10809) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(509815);
				tv0->ClearReplies();
				tv0->AddReply(509816, 10811, 10810);
				return;
			}
			if (a0 == 10811) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(509817);
				tv0->ClearReplies();
				tv0->AddReply(509818, 11530, 10812);
				tv0->AddReply(509819, 11530, 10813);
				return;
			}
			if (a0 == 10805) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(509811);
				tv0->ClearReplies();
				tv0->AddReply(509812, 11530, 10806);
				tv0->AddReply(509813, 11530, 10807);
				return;
			}
			if (a0 == 11530) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(510457);
				tv0->ClearReplies();
				tv0->AddReply(510458, 11532, 11531);
				return;
			}
			if (a0 == 11532) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(510459);
				tv0->ClearReplies();
				tv0->AddReply(510460, 11534, 11533);
				return;
			}
			if (a0 == 11534) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(510461);
				tv0->ClearReplies();
				tv0->AddReply(510462, 9960, 11535);
				return;
			}
			if (a0 == 9960) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(509082);
				tv0->ClearReplies();
				tv0->AddReply(509083, 9962, 9961);
				return;
			}
			if (a0 == 9962) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(509084);
				tv0->ClearReplies();
				tv0->AddReply(509085, -1, 9963);
				return;
			}
			if (a0 == 37916) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(536151);
				tv0->ClearReplies();
				tv0->AddReply(536152, -1, 37917);
				return;
			}
			if (a0 == 9629) {
				f_14b0_a2_v(tv1, tv0);
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508782);
				tv0->ClearReplies();
				tv0->AddReply(508783, 9631, 9630);
				tv0->AddReply(510447, 9631, 11516);
				return;
			}
			if (a0 == 9631) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508784);
				tv0->ClearReplies();
				tv0->AddReply(508785, 9591, 9632);
				return;
			}
			if (a0 == 9633) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508786);
				tv0->ClearReplies();
				tv0->AddReply(508787, 9591, 9634);
				return;
			}
			if (a0 == 9591) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508751);
				tv0->ClearReplies();
				tv0->AddReply(508752, 9657, 9592);
				tv0->AddReply(508757, 9598, 9597);
				return;
			}
			if (a0 == 9598) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508758);
				tv0->ClearReplies();
				tv0->AddReply(508759, 9593, 9599);
				tv0->AddReply(508760, 9593, 9601);
				return;
			}
			if (a0 == 9657) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508808);
				tv0->ClearReplies();
				tv0->AddReply(508809, 9659, 9658);
				tv0->AddReply(510449, 11521, 11520);
				return;
			}
			if (a0 == 11521) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(510450);
				tv0->ClearReplies();
				tv0->AddReply(510451, 11523, 11522);
				return;
			}
			if (a0 == 11523) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(510452);
				tv0->ClearReplies();
				tv0->AddReply(510453, 9659, 11524);
				return;
			}
			if (a0 == 9659) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508810);
				tv0->ClearReplies();
				tv0->AddReply(508811, 9661, 9660);
				tv0->AddReply(510454, 11527, 11526);
				return;
			}
			if (a0 == 11527) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(510455);
				tv0->ClearReplies();
				tv0->AddReply(510456, 9593, 11528);
				return;
			}
			if (a0 == 9661) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508812);
				tv0->ClearReplies();
				tv0->AddReply(508813, 9593, 9662);
				return;
			}
			if (a0 == 9593) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508753);
				tv0->ClearReplies();
				tv0->AddReply(508790, 9638, 9637);
				tv0->AddReply(508754, -1, 9594);
				return;
			}
			if (a0 == 9638) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508791);
				tv0->ClearReplies();
				tv0->AddReply(508798, 9646, 9645);
				tv0->AddReply(508792, -1, 9639);
				return;
			}
			if (a0 == 9646) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(508799);
				tv0->ClearReplies();
				tv0->AddReply(508800, -1, 9647);
				tv0->AddReply(508801, -1, 9649);
				return;
			}
			tv3 = true;
			if (f_1406_a0_b()) {
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
		f_12b4_a1_b(f_1361_a0_o());
		if (!f_125f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1400_a0_i());
		L0->SetNPCDescription(f_13fe_a0_i());
		L0->SetPhoto(f_1402_a0_s());
		L0->SetPhoto2(f_1404_a0_s());
		L0->SetPlayerName(f_1727_a0_i());
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
		f_12a3_a1_v(a0);
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
			if (f_15fc_a1_b(tv1)) {
				f_156d_a2_v(tv1, tv0);
				f_14b6_a2_v(tv1, tv0);
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(511527);
				tv0->ClearReplies();
				tv0->AddReply(511528, 12722, 12721);
				tv0->AddReply(515598, 16625, 16624);
				break;
			}
			if (f_1614_a1_b(tv1) && f_1608_a1_b(tv1) && f_1620_a1_b(tv1)) {
				f_14df_a2_v(tv1, tv0);
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510510);
				tv0->ClearReplies();
				tv0->AddReply(510511, 11594, 11593);
				tv0->AddReply(510521, 11594, 11604);
				break;
			}
			f_a2c_a1_v("Neutral");
			tv0->SetMessage(510500);
			tv0->ClearReplies();
			if (f_164f_a1_b(tv1)) {
				tv0->AddReply(510509, 16679, 11591);
			}
			if (f_1643_a1_b(tv1) && f_164f_a1_b(tv1)) {
				tv0->AddReply(510501, 11584, 11583);
			}
			if (f_1637_a1_b(tv1)) {
				tv0->AddReply(515653, 16690, 16689);
			}
			tv0->AddReply(515647, -1, 16682);
			break;
			return;
		}
		if (f_1406_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_133e_a1_v(tv2);
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

	void f_a2c_a1_v(string a0)
	{
		if (!f_1406_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1345_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_135a_a0_v();
			if (a1 == 11563) {
				f_14bc_a2_v(tv1, tv0);
				f_1496_a2_v(tv1, tv0);
			}
			if (a1 == 11566) {
				f_14bc_a2_v(tv1, tv0);
				f_1496_a2_v(tv1, tv0);
			}
			if (a1 == 11569) {
				f_14b6_a2_v(tv1, tv0);
				f_14bc_a2_v(tv1, tv0);
				f_1496_a2_v(tv1, tv0);
			}
			if (a1 == 11599) {
				f_14e5_a2_v(tv1, tv0);
			}
			if (a1 == 11600) {
				f_14e5_a2_v(tv1, tv0);
			}
			if (a1 == 11601) {
				f_14e5_a2_v(tv1, tv0);
			}
			if (a1 == 11583) {
				f_1573_a2_v(tv1, tv0);
			}
			if (a1 == 11570) {
				f_14bc_a2_v(tv1, tv0);
				f_1496_a2_v(tv1, tv0);
			}
			if (a0 == 12720) {
				if (f_15fc_a1_b(tv1)) {
					f_156d_a2_v(tv1, tv0);
					f_14b6_a2_v(tv1, tv0);
					f_a2c_a1_v("Neutral");
					tv0->SetMessage(511527);
					tv0->ClearReplies();
					tv0->AddReply(511528, 12722, 12721);
					tv0->AddReply(515598, 16625, 16624);
					return;
				}
				if (f_1614_a1_b(tv1) && f_1608_a1_b(tv1) && f_1620_a1_b(tv1)) {
					f_14df_a2_v(tv1, tv0);
					f_a2c_a1_v("Neutral");
					tv0->SetMessage(510510);
					tv0->ClearReplies();
					tv0->AddReply(510511, 11594, 11593);
					tv0->AddReply(510521, 11594, 11604);
					return;
				}
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510500);
				tv0->ClearReplies();
				if (f_164f_a1_b(tv1)) {
					tv0->AddReply(510509, 16679, 11591);
				}
				if (f_1643_a1_b(tv1) && f_164f_a1_b(tv1)) {
					tv0->AddReply(510501, 11584, 11583);
				}
				if (f_1637_a1_b(tv1)) {
					tv0->AddReply(515653, 16690, 16689);
				}
				tv0->AddReply(515647, -1, 16682);
				return;
			}
			if (a0 == 16690) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515654);
				tv0->ClearReplies();
				tv0->AddReply(510492, -1, 11570);
				return;
			}
			if (a0 == 11584) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510502);
				tv0->ClearReplies();
				tv0->AddReply(510504, -1, 11586);
				tv0->AddReply(510505, 11588, 11587);
				return;
			}
			if (a0 == 11588) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510506);
				tv0->ClearReplies();
				tv0->AddReply(510508, -1, 11590);
				tv0->AddReply(510507, -1, 11589);
				return;
			}
			if (a0 == 16679) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515644);
				tv0->ClearReplies();
				tv0->AddReply(515645, -1, 16680);
				return;
			}
			if (a0 == 11594) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510512);
				tv0->ClearReplies();
				tv0->AddReply(510513, 11596, 11595);
				tv0->AddReply(510520, 11598, 11602);
				return;
			}
			if (a0 == 11596) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510514);
				tv0->ClearReplies();
				tv0->AddReply(510515, 11598, 11597);
				tv0->AddReply(515650, 11598, 16685);
				return;
			}
			if (a0 == 11598) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510516);
				tv0->ClearReplies();
				tv0->AddReply(511550, 12745, 12744);
				tv0->AddReply(510519, -1, 11601);
				return;
			}
			if (a0 == 12745) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(511551);
				tv0->ClearReplies();
				tv0->AddReply(511552, 12747, 12746);
				return;
			}
			if (a0 == 12747) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(511553);
				tv0->ClearReplies();
				tv0->AddReply(511554, 12749, 12748);
				tv0->AddReply(510518, -1, 11600);
				return;
			}
			if (a0 == 12749) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(511555);
				tv0->ClearReplies();
				tv0->AddReply(510517, -1, 11599);
				return;
			}
			if (a0 == 16625) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515599);
				tv0->ClearReplies();
				tv0->AddReply(515600, 16627, 16626);
				return;
			}
			if (a0 == 16627) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515601);
				tv0->ClearReplies();
				tv0->AddReply(515602, 12722, 16628);
				return;
			}
			if (a0 == 12722) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(511529);
				tv0->ClearReplies();
				tv0->AddReply(511530, 11554, 12723);
				tv0->AddReply(515603, 16631, 16630);
				return;
			}
			if (a0 == 16631) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515604);
				tv0->ClearReplies();
				tv0->AddReply(515605, 16633, 16632);
				return;
			}
			if (a0 == 16633) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515606);
				tv0->ClearReplies();
				tv0->AddReply(515607, 11554, 16634);
				tv0->AddReply(515608, 11554, 16636);
				return;
			}
			if (a0 == 11554) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510476);
				tv0->ClearReplies();
				tv0->AddReply(510477, 11556, 11555);
				return;
			}
			if (a0 == 11556) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510478);
				tv0->ClearReplies();
				tv0->AddReply(510479, 11558, 11557);
				tv0->AddReply(515610, 16640, 16639);
				return;
			}
			if (a0 == 16640) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515611);
				tv0->ClearReplies();
				tv0->AddReply(515614, 16644, 16643);
				tv0->AddReply(515612, 16642, 16641);
				return;
			}
			if (a0 == 16642) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515613);
				tv0->ClearReplies();
				tv0->AddReply(515616, 16644, 16645);
				return;
			}
			if (a0 == 16644) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515615);
				tv0->ClearReplies();
				tv0->AddReply(515618, 11558, 16648);
				tv0->AddReply(515617, -1, 16647);
				return;
			}
			if (a0 == 11558) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510480);
				tv0->ClearReplies();
				tv0->AddReply(515623, 16655, 16654);
				tv0->AddReply(515628, 16661, 16660);
				return;
			}
			if (a0 == 16661) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515629);
				tv0->ClearReplies();
				tv0->AddReply(515630, 16655, 16662);
				return;
			}
			if (a0 == 16655) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515624);
				tv0->ClearReplies();
				tv0->AddReply(510481, 11560, 11559);
				tv0->AddReply(515626, 16665, 16657);
				return;
			}
			if (a0 == 16665) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515632);
				tv0->ClearReplies();
				tv0->AddReply(515633, 11560, 16666);
				return;
			}
			if (a0 == 11560) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510482);
				tv0->ClearReplies();
				tv0->AddReply(510483, 11562, 11561);
				tv0->AddReply(510494, 16650, 11572);
				tv0->AddReply(515627, 16650, 16658);
				return;
			}
			if (a0 == 16650) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515619);
				tv0->ClearReplies();
				tv0->AddReply(515620, 16652, 16651);
				return;
			}
			if (a0 == 16652) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515621);
				tv0->ClearReplies();
				tv0->AddReply(510489, 11568, 11567);
				return;
			}
			if (a0 == 11568) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510490);
				tv0->ClearReplies();
				tv0->AddReply(510491, -1, 11569);
				tv0->AddReply(515655, -1, 16691);
				return;
			}
			if (a0 == 11562) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510484);
				tv0->ClearReplies();
				tv0->AddReply(515635, 16670, 16669);
				tv0->AddReply(515641, 16676, 16675);
				tv0->AddReply(510486, 11565, 11564);
				return;
			}
			if (a0 == 11565) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(510487);
				tv0->ClearReplies();
				tv0->AddReply(510488, -1, 11566);
				tv0->AddReply(515643, -1, 16678);
				return;
			}
			if (a0 == 16676) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515642);
				tv0->ClearReplies();
				tv0->AddReply(515637, 16672, 16671);
				return;
			}
			if (a0 == 16672) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515638);
				tv0->ClearReplies();
				tv0->AddReply(515640, 16670, 16674);
				tv0->AddReply(515639, -1, 16673);
				return;
			}
			if (a0 == 16670) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(515636);
				tv0->ClearReplies();
				tv0->AddReply(510485, -1, 11563);
				return;
			}
			tv3 = true;
			if (f_1406_a0_b()) {
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
		f_12b4_a1_b(f_1361_a0_o());
		if (!f_125f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1400_a0_i());
		L0->SetNPCDescription(f_13fe_a0_i());
		L0->SetPhoto(f_1402_a0_s());
		L0->SetPhoto2(f_1404_a0_s());
		L0->SetPlayerName(f_1727_a0_i());
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
		f_12a3_a1_v(a0);
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
			f_e8f_a1_v("Neutral");
			tv0->SetMessage(511122);
			tv0->ClearReplies();
			if (f_1591_a1_b(tv1)) {
				tv0->AddReply(511123, 12316, 12312);
			}
			if (f_159d_a1_b(tv1)) {
				tv0->AddReply(511124, 12314, 12313);
			}
			tv0->AddReply(536267, -1, 38051);
			tv0->AddReply(536268, -1, 38052);
			break;
			return;
		}
		if (f_1406_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_133e_a1_v(tv2);
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

	void f_e8f_a1_v(string a0)
	{
		if (!f_1406_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1345_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_135a_a0_v();
			if (a1 == 12312) {
				f_1437_a2_v(tv1, tv0);
			}
			if (a1 == 12313) {
				f_143d_a2_v(tv1, tv0);
			}
			if (a1 == 12315) {
				f_142c_a2_v(tv1, tv0);
				f_144e_a2_v(tv1, tv0);
			}
			if (a0 == 12311) {
				f_e8f_a1_v("Neutral");
				tv0->SetMessage(511122);
				tv0->ClearReplies();
				if (f_1591_a1_b(tv1)) {
					tv0->AddReply(511123, 12316, 12312);
				}
				if (f_159d_a1_b(tv1)) {
					tv0->AddReply(511124, 12314, 12313);
				}
				tv0->AddReply(536267, -1, 38051);
				tv0->AddReply(536268, -1, 38052);
				return;
			}
			if (a0 == 12314) {
				f_e8f_a1_v("Neutral");
				tv0->SetMessage(511125);
				tv0->ClearReplies();
				tv0->AddReply(511126, -1, 12315);
				return;
			}
			if (a0 == 12316) {
				f_e8f_a1_v("Neutral");
				tv0->SetMessage(511127);
				tv0->ClearReplies();
				tv0->AddReply(511128, 12318, 12317);
				return;
			}
			if (a0 == 12318) {
				f_e8f_a1_v("Neutral");
				tv0->SetMessage(511129);
				tv0->ClearReplies();
				tv0->AddReply(511130, 12320, 12319);
				return;
			}
			if (a0 == 12320) {
				f_e8f_a1_v("Neutral");
				tv0->SetMessage(511131);
				tv0->ClearReplies();
				tv0->AddReply(511132, -1, 12321);
				return;
			}
			tv3 = true;
			if (f_1406_a0_b()) {
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
		f_12b4_a1_b(f_1361_a0_o());
		if (!f_125f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1400_a0_i());
		L0->SetNPCDescription(f_13fe_a0_i());
		L0->SetPhoto(f_1402_a0_s());
		L0->SetPhoto2(f_1404_a0_s());
		L0->SetPlayerName(f_1727_a0_i());
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
		f_12a3_a1_v(a0);
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
			if (!f_162b_a1_b(tv1)) {
				f_fe3_a1_v("Neutral");
				tv0->SetMessage(512020);
				tv0->ClearReplies();
				tv0->AddReply(512021, 13240, 13239);
				break;
			}
			f_fe3_a1_v("Neutral");
			tv0->SetMessage(513723);
			tv0->ClearReplies();
			tv0->AddReply(513724, -1, 14990);
			break;
			return;
		}
		if (f_1406_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_133e_a1_v(tv2);
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

	void f_fe3_a1_v(string a0)
	{
		if (!f_1406_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1345_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_135a_a0_v();
			if (a1 == 13243) {
				f_153f_a2_v(tv1, tv0);
				f_154c_a2_v(tv1, tv0);
				f_1408_a2_v(tv1, tv0);
				f_1443_a2_v(tv1, tv0);
			}
			if (a0 == 13238) {
				if (!f_162b_a1_b(tv1)) {
					f_fe3_a1_v("Neutral");
					tv0->SetMessage(512020);
					tv0->ClearReplies();
					tv0->AddReply(512021, 13240, 13239);
					return;
				}
				f_fe3_a1_v("Neutral");
				tv0->SetMessage(513723);
				tv0->ClearReplies();
				tv0->AddReply(513724, -1, 14990);
				return;
			}
			if (a0 == 13240) {
				f_fe3_a1_v("Neutral");
				tv0->SetMessage(512022);
				tv0->ClearReplies();
				tv0->AddReply(512023, 13242, 13241);
				return;
			}
			if (a0 == 13242) {
				f_fe3_a1_v("Neutral");
				tv0->SetMessage(512024);
				tv0->ClearReplies();
				tv0->AddReply(512025, -1, 13243);
				return;
			}
			tv3 = true;
			if (f_1406_a0_b()) {
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
		f_12b4_a1_b(f_1361_a0_o());
		if (!f_125f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1400_a0_i());
		L0->SetNPCDescription(f_13fe_a0_i());
		L0->SetPhoto(f_1402_a0_s());
		L0->SetPhoto2(f_1404_a0_s());
		L0->SetPlayerName(f_1727_a0_i());
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
		f_12a3_a1_v(a0);
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
			f_10f9_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_1406_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_133e_a1_v(tv2);
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

	void f_10f9_a1_v(string a0)
	{
		if (!f_1406_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1345_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_135a_a0_v();
			if (a0 == 42551) {
				f_10f9_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_1406_a0_b()) {
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
		f_113d_a0_v();
	}

	void f_113d_a0_v(void)
	{
		if (!f_125a_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_11f3_a0_v();
		}
	}

	bool f_1151_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1251_a1_b(L0);
	}

	void f_1160_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1165_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_123f_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_117b_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1184_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1184_a0_v();
			if (f_125a_a0_b() && f_1165_a0_b()) {
				if (f_1151_a0_b()) {
					f_12ee_a1_b(f_1361_a0_o());
				}
			} else {
				f_1160_a0_v();
				f_117b_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_123a_a0_v();
		f_1184_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_1184_a0_v();
		f_133e_a1_v("Neutral");
		f_117b_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_117b_a0_v();
		} else {
			f_133e_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_123a_a0_v();
			f_1251_a1_b(a0);
			enable OnUse;
			f_1738_a1_v(a0);
			f_133e_a1_v("Neutral");
			f_1184_a0_v();
			f_117b_a0_v();
		}
	}
}

void f_11f3_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_125a_a0_b()) {
		return;
	}
	L0 = f_13ed_a0_i();
	for (L1 = 0; L1 < 5 && f_125a_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_13e6_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1238_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1238_a0_b(void)
{
	return true;
}

void f_123a_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_123f_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1247_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1251_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1247_a1_b(L0);
}

bool f_125a_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_125f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1367_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_1406_a0_b()) {
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

void f_12a3_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_1406_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_12b4_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_12ee_a1_b(a0)) {
			if (!f_1313_a1_b(a0)) {
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
		if (!f_1313_a1_b(a0)) {
			if (!f_12ee_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_12ee_a1_b(object a0)
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
	return f_134b_a1_b(L4);
}

bool f_1313_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_13d7_a0_i() + "m";
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
	return f_134b_a1_b(L4);
}

void f_133e_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1345_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_134b_a1_b(string a0)
{
	if (f_1406_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_135a_a0_v(void)
{
	if (f_1406_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1361_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1367_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1371_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_1376_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1382_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(4, L0);
}

void f_138e_a3_v(object a0, object a1, int a2)
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
		f_1376_a2_v(L0, a2);
	}
}

void f_13a1_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_138e_a3_v(a0, L0, a2);
}

bool f_13ae_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_13b5_a2_b(object a0, string a1)
{
	int L0;
	int L1;
	bool L2;
	@GetInvItemByName(L0, a1);
	@GetInvItemProperty(L1, L0, "Category");
	a0->RemoveItemByType(L2, L0, L1);
	if (L2) {
		f_1382_a2_v(L0, 1);
	}
	return L2;
}

bool f_13c6_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_13d2_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_13d7_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_13e0_a1_b(int a0)
{
	return f_13d7_a0_i() == a0;
}

string f_13e6_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_13ed_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_13e6_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_13fe_a0_i(void)
{
	return 515551;
}

int f_1400_a0_i(void)
{
	return 502876;
}

string f_1402_a0_s(void)
{
	return "ui/NPC_Rubin.png";
}

string f_1404_a0_s(void)
{
	return "ui/NPC_Rubin_b.png";
}

bool f_1406_a0_b(void)
{
	return true;
}

void f_1408_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_140e_a2_v(object a0, object a1)
{
	f_13b5_a2_b(a0, "d3q01_blood");
}

void f_1415_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d10q02", 2);
	L0 = f_16f5_a0_o();
	L0->AddMark("d10q02RubinGotoMaria", "pt_map_maria", 0, 515297, f_13d2_a0_f());
	f_1671_a0_v();
}

void f_142c_a2_v(object a0, object a1)
{
	@Trace("bluevaccine is given");
	f_13a1_a3_v(a0, "blue_vaccine", 1);
}

void f_1437_a2_v(object a0, object a1)
{
	@SetVariable("ood4Rubin1", 1);
}

void f_143d_a2_v(object a0, object a1)
{
	@SetVariable("ood4Rubin2", 1);
}

void f_1443_a2_v(object a0, object a1)
{
	@Trace("lens is given");
	f_13a1_a3_v(a0, "lens", 1);
}

void f_144e_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1454_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q01", 1);
	L0 = f_16f5_a0_o();
	L0->AddMark("d3q01RubinGotoAlexandr", "pt_map_alexandr", 1, 511151, f_13d2_a0_f());
	f_167e_a0_v();
	f_168b_a0_v();
}

void f_146e_a2_v(object a0, object a1)
{
	@SetVariable("ood3Rubin1", 1);
}

void f_1474_a2_v(object a0, object a1)
{
	@SetVariable("ood3Rubin2", 1);
}

void f_147a_a2_v(object a0, object a1)
{
	@SetVariable("ood3Rubin3", 1);
}

void f_1480_a2_v(object a0, object a1)
{
	@SetVariable("ood3Rubin4", 1);
}

void f_1486_a2_v(object a0, object a1)
{
	f_1706_a3_v(f_16f5_a0_o(), "pt_map_alexandr", 2);
	a1->ShowMap(f_16f5_a0_o());
}

void f_1496_a2_v(object a0, object a1)
{
	f_1706_a3_v(f_16f5_a0_o(), "pt_map_bigvlad", 2);
	a1->ShowMap(f_16f5_a0_o());
}

void f_14a6_a2_v(object a0, object a1)
{
	f_1698_a0_v();
	f_13c6_a2_b("quest_d3_01", "completed");
}

void f_14b0_a2_v(object a0, object a1)
{
	@SetVariable("d3RubinToldWhereIsSimon", 1);
}

void f_14b6_a2_v(object a0, object a1)
{
	@SetVariable("ood5Rubin1", 1);
}

void f_14bc_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q01", 1);
	L0 = f_16f5_a0_o();
	L0->AddMark("d5q01RubinGotoBigVlad", "pt_map_bigvlad", 1, 511956, f_13d2_a0_f());
	L0->AddMark("d5q01RubinGotoBigVladSelf", "pt_map_rubin", 1, 515348, f_13d2_a0_f());
	f_16a5_a0_v();
	f_16b2_a0_v();
}

void f_14df_a2_v(object a0, object a1)
{
	@SetVariable("ood5Rubin2", 1);
}

void f_14e5_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_16f5_a0_o();
	L0->FindMark(L1, "d5q01AlexandrGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01BigVladGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01BurahMeeting");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q04NudeGotoAndrei");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01GrifWantsMoney");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01GrifWillHelp");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01BigVladGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01PatrolGotoGrif");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01RubinGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01RubinGotoBigVladSelf");
	if (L1) {
		L1->Remove();
	}
	f_16bf_a0_v();
	a0->RemoveItemByType(L2, "d5q01_heart", 1);
	f_13c6_a2_b("quest_d5_01", "completed");
}

void f_153f_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d6RubinGoesToGeorg", 1);
	@GetSceneByName(L0, "warehouse_rubin");
	@Trigger(L0, "norubin");
}

void f_154c_a2_v(object a0, object a1)
{
	@Trace("whitevaccine is given");
	f_13a1_a3_v(a0, "white_vaccine", 1);
}

void f_1557_a2_v(object a0, object a1)
{
	f_1706_a3_v(f_16f5_a0_o(), "pt_map_maria", 2);
	a1->ShowMap(f_16f5_a0_o());
}

void f_1567_a2_v(object a0, object a1)
{
	@SetVariable("d3RubinVisit", 1);
}

void f_156d_a2_v(object a0, object a1)
{
	@SetVariable("d5RubinVisit", 1);
}

void f_1573_a2_v(object a0, object a1)
{
	@SetVariable("ood5Rubin3", 1);
}

bool f_1579_a1_b(object a0)
{
	if (f_1371_a1_i("d10q02") == 1) {
		return true;
	}
	return false;
}

bool f_1585_a1_b(object a0)
{
	if (f_1371_a1_i("microscope_d3q01_blood") != 0) {
		return true;
	}
	return false;
}

bool f_1591_a1_b(object a0)
{
	if (f_1371_a1_i("ood4Rubin1") == 0) {
		return true;
	}
	return false;
}

bool f_159d_a1_b(object a0)
{
	if (f_1371_a1_i("ood4Rubin2") == 0) {
		return true;
	}
	return false;
}

bool f_15a9_a1_b(object a0)
{
	if (f_1371_a1_i("d3q01") == 0) {
		return true;
	}
	return false;
}

bool f_15b5_a1_b(object a0)
{
	if (f_1371_a1_i("ood3Rubin1") == 0) {
		return true;
	}
	return false;
}

bool f_15c1_a1_b(object a0)
{
	if (f_1371_a1_i("ood3Rubin2") == 0) {
		return true;
	}
	return false;
}

bool f_15cd_a1_b(object a0)
{
	if (f_1371_a1_i("ood3Rubin3") == 0) {
		return true;
	}
	return false;
}

bool f_15d9_a1_b(object a0)
{
	if (f_1371_a1_i("ood3Rubin4") == 0) {
		return true;
	}
	return false;
}

bool f_15e5_a1_b(object a0)
{
	if (f_1371_a1_i("d3q01") == 1000) {
		return true;
	}
	return false;
}

bool f_15f1_a1_b(object a0)
{
	if (f_13ae_a2_b(a0, "d3q01_blood")) {
		return true;
	}
	return false;
}

bool f_15fc_a1_b(object a0)
{
	if (f_1371_a1_i("ood5Rubin1") == 0) {
		return true;
	}
	return false;
}

bool f_1608_a1_b(object a0)
{
	if (f_1371_a1_i("d5q01") == 7) {
		return true;
	}
	return false;
}

bool f_1614_a1_b(object a0)
{
	if (f_1371_a1_i("ood5Rubin2") == 0) {
		return true;
	}
	return false;
}

bool f_1620_a1_b(object a0)
{
	if (f_13ae_a2_b(a0, "d5q01_heart")) {
		return true;
	}
	return false;
}

bool f_162b_a1_b(object a0)
{
	if (f_1371_a1_i("d6RubinGoesToGeorg") != 0) {
		return true;
	}
	return false;
}

bool f_1637_a1_b(object a0)
{
	if (f_1371_a1_i("d5q01") == 0) {
		return true;
	}
	return false;
}

bool f_1643_a1_b(object a0)
{
	if (f_1371_a1_i("ood5Rubin3") == 0) {
		return true;
	}
	return false;
}

bool f_164f_a1_b(object a0)
{
	if (f_1371_a1_i("d5q01") != 0 && f_1371_a1_i("d5q01") != -1 && f_1371_a1_i("d5q01") != 1000) {
		return true;
	}
	return false;
}

void f_1671_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 668, 2, 534122);
	f_16d9_a2_b(L0, 666);
}

void f_167e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 25, 1, 503365);
	f_16d9_a2_b(L0, -1);
}

void f_168b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 68, 1, 512150);
	f_16d9_a2_b(L0, 25);
}

void f_1698_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 74, 1, 512156);
	f_16d9_a2_b(L0, 25);
}

void f_16a5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 139, 1, 515339);
	f_16d9_a2_b(L0, -1);
}

void f_16b2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 140, 1, 515340);
	f_16d9_a2_b(L0, 139);
}

void f_16bf_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 147, 1, 515347);
	f_16d9_a2_b(L0, 139);
}

object f_16cc_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_16d9_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_16cc_a0_o();
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

object f_16f5_a0_o(void)
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

void f_1706_a3_v(object a0, string a1, float a2)
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

int f_1727_a0_i(void)
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

void f_1738_a1_v(object a0)
{
	if (f_13e0_a1_b(3)) {
		t5{a0};
		return;
	}
	if (f_13e0_a1_b(4)) {
		t9{a0};
		return;
	}
	if (f_13e0_a1_b(5)) {
		t7{a0};
		return;
	}
	if (f_13e0_a1_b(6)) {
		t11{a0};
		return;
	}
	if (f_13e0_a1_b(10)) {
		t1{a0};
		return;
	}
	if (f_13e0_a1_b(12)) {
		t3{a0};
		return;
	}
	t13{a0};
}

