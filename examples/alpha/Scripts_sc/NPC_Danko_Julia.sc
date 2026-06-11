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
		f_1839_a0_v();
		if (!f_133c_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_137d_a1_v("Neutral");
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
		f_183d_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_1330_a1_b(a0);
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
		if (!f_1341_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPlayerName(f_17f8_a0_i());
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
		f_1379_a1_v(a0);
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
			f_145e_a2_v(tv1, tv0);
			f_b4_a1_v("Neutral");
			tv0->SetMessage(325);
			tv0->ClearReplies();
			tv0->AddReply(326, 383, 380);
			tv0->AddReply(327, 383, 381);
			tv0->AddReply(328, 393, 382);
			break;
			return;
		}
		if (f_13f4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_137d_a1_v(tv2);
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
		if (!f_13f4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_137d_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_138f_a0_v();
			if (a0 == 379) {
				f_145e_a2_v(tv1, tv0);
				f_b4_a1_v("Neutral");
				tv0->SetMessage(325);
				tv0->ClearReplies();
				tv0->AddReply(326, 383, 380);
				tv0->AddReply(327, 383, 381);
				tv0->AddReply(328, 393, 382);
				return;
			}
			if (a0 == 393) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(338);
				tv0->ClearReplies();
				tv0->AddReply(339, 396, 394);
				return;
			}
			if (a0 == 396) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(341);
				tv0->ClearReplies();
				tv0->AddReply(343, -1, 398);
				tv0->AddReply(344, -1, 399);
				return;
			}
			if (a0 == 383) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(329);
				tv0->ClearReplies();
				tv0->AddReply(330, 386, 385);
				tv0->AddReply(334, 390, 389);
				return;
			}
			if (a0 == 390) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(335);
				tv0->ClearReplies();
				tv0->AddReply(336, -1, 391);
				tv0->AddReply(337, -1, 392);
				return;
			}
			if (a0 == 386) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(331);
				tv0->ClearReplies();
				tv0->AddReply(333, -1, 388);
				return;
			}
			tv3 = true;
			if (f_13f4_a0_b()) {
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
		if (!f_1341_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPlayerName(f_17f8_a0_i());
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
		f_1379_a1_v(a0);
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
			f_222_a1_v("Neutral");
			tv0->SetMessage(3640);
			tv0->ClearReplies();
			if (f_16eb_a1_b(tv1) && f_16f7_a1_b(tv1)) {
				tv0->AddReply(3641, 3945, 3943);
			}
			if (f_16df_a1_b(tv1) && f_1703_a1_b(tv1)) {
				tv0->AddReply(12733, 11803, 13927);
			}
			if (f_170f_a1_b(tv1) && f_171b_a1_b(tv1) && !f_1720_a1_b(tv1) && !f_172c_a1_b(tv1)) {
				tv0->AddReply(12734, 11840, 13928);
			}
			tv0->AddReply(3642, -1, 3944);
			break;
			return;
		}
		if (f_13f4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_137d_a1_v(tv2);
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

	void f_222_a1_v(string a0)
	{
		if (!f_13f4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_137d_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_138f_a0_v();
			if (a1 == 3943) {
				f_14c6_a2_v(tv1, tv0);
			}
			if (a1 == 3953) {
				f_14c6_a2_v(tv1, tv0);
			}
			if (a1 == 13927) {
				f_14cc_a2_v(tv1, tv0);
			}
			if (a1 == 11813) {
				f_14d2_a2_v(tv1, tv0);
				f_14e0_a2_v(tv1, tv0);
			}
			if (a1 == 11839) {
				f_14cc_a2_v(tv1, tv0);
				f_14d2_a2_v(tv1, tv0);
				f_14e0_a2_v(tv1, tv0);
			}
			if (a1 == 13928) {
				f_1574_a2_v(tv1, tv0);
			}
			if (a1 == 11853) {
				f_14e6_a2_v(tv1, tv0);
			}
			if (a1 == 11854) {
				f_14e6_a2_v(tv1, tv0);
			}
			if (a0 == 3942) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(3640);
				tv0->ClearReplies();
				if (f_16eb_a1_b(tv1) && f_16f7_a1_b(tv1)) {
					tv0->AddReply(3641, 3945, 3943);
				}
				if (f_16df_a1_b(tv1) && f_1703_a1_b(tv1)) {
					tv0->AddReply(12733, 11803, 13927);
				}
				if (f_170f_a1_b(tv1) && f_171b_a1_b(tv1) && !f_1720_a1_b(tv1) && !f_172c_a1_b(tv1)) {
					tv0->AddReply(12734, 11840, 13928);
				}
				tv0->AddReply(3642, -1, 3944);
				return;
			}
			if (a0 == 11840) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10719);
				tv0->ClearReplies();
				tv0->AddReply(10720, 11842, 11841);
				return;
			}
			if (a0 == 11842) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10721);
				tv0->ClearReplies();
				tv0->AddReply(10722, 11844, 11843);
				tv0->AddReply(10733, 11844, 11855);
				tv0->AddReply(10734, 11858, 11857);
				return;
			}
			if (a0 == 11858) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10735);
				tv0->ClearReplies();
				tv0->AddReply(10736, 11844, 11859);
				tv0->AddReply(10737, 11844, 11861);
				return;
			}
			if (a0 == 11844) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10723);
				tv0->ClearReplies();
				tv0->AddReply(10724, 11846, 11845);
				tv0->AddReply(10728, 11846, 11849);
				tv0->AddReply(10729, 11852, 11851);
				return;
			}
			if (a0 == 11852) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10730);
				tv0->ClearReplies();
				tv0->AddReply(10731, -1, 11853);
				tv0->AddReply(10732, -1, 11854);
				return;
			}
			if (a0 == 11846) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10725);
				tv0->ClearReplies();
				tv0->AddReply(10726, -1, 11847);
				tv0->AddReply(10727, -1, 11848);
				return;
			}
			if (a0 == 11803) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10689);
				tv0->ClearReplies();
				tv0->AddReply(10690, 11805, 11804);
				tv0->AddReply(10715, 11807, 11835);
				tv0->AddReply(10716, 11838, 11837);
				return;
			}
			if (a0 == 11838) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10717);
				tv0->ClearReplies();
				tv0->AddReply(10718, -1, 11839);
				return;
			}
			if (a0 == 11805) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10691);
				tv0->ClearReplies();
				tv0->AddReply(10692, 11807, 11806);
				tv0->AddReply(10711, 11830, 11829);
				return;
			}
			if (a0 == 11830) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10712);
				tv0->ClearReplies();
				tv0->AddReply(10713, 11807, 11831);
				tv0->AddReply(10714, 11807, 11833);
				return;
			}
			if (a0 == 11807) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10693);
				tv0->ClearReplies();
				tv0->AddReply(10694, 11809, 11808);
				tv0->AddReply(10701, 11809, 11816);
				tv0->AddReply(10702, 11818, 11817);
				return;
			}
			if (a0 == 11818) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10703);
				tv0->ClearReplies();
				tv0->AddReply(10704, 11820, 11819);
				tv0->AddReply(10710, 11820, 11827);
				return;
			}
			if (a0 == 11820) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10705);
				tv0->ClearReplies();
				tv0->AddReply(10706, 11822, 11821);
				tv0->AddReply(10709, 11809, 11825);
				return;
			}
			if (a0 == 11822) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10707);
				tv0->ClearReplies();
				tv0->AddReply(10708, 11809, 11823);
				return;
			}
			if (a0 == 11809) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10695);
				tv0->ClearReplies();
				tv0->AddReply(10696, 11811, 11810);
				tv0->AddReply(10700, 11811, 11814);
				return;
			}
			if (a0 == 11811) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(10697);
				tv0->ClearReplies();
				tv0->AddReply(10698, -1, 11812);
				tv0->AddReply(10699, -1, 11813);
				return;
			}
			if (a0 == 3945) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(3643);
				tv0->ClearReplies();
				tv0->AddReply(3644, 3948, 3946);
				tv0->AddReply(3645, 3951, 3947);
				return;
			}
			if (a0 == 3951) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(3648);
				tv0->ClearReplies();
				tv0->AddReply(3649, 3954, 3952);
				tv0->AddReply(3650, -1, 3953);
				return;
			}
			if (a0 == 3954) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(3651);
				tv0->ClearReplies();
				tv0->AddReply(3654, 3958, 3957);
				return;
			}
			if (a0 == 3958) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(3655);
				tv0->ClearReplies();
				tv0->AddReply(3656, 3948, 3959);
				return;
			}
			if (a0 == 3948) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(3646);
				tv0->ClearReplies();
				tv0->AddReply(3647, 3955, 3950);
				tv0->AddReply(3657, 3955, 3961);
				return;
			}
			if (a0 == 3955) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(3652);
				tv0->ClearReplies();
				tv0->AddReply(3653, 3963, 3956);
				return;
			}
			if (a0 == 3963) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(3658);
				tv0->ClearReplies();
				tv0->AddReply(3659, -1, 3964);
				tv0->AddReply(3660, -1, 3965);
				return;
			}
			tv3 = true;
			if (f_13f4_a0_b()) {
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
		if (!f_1341_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPlayerName(f_17f8_a0_i());
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
		f_1379_a1_v(a0);
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
			if (f_159d_a1_b(tv1) && !f_15cd_a1_b(tv1) && !f_15c1_a1_b(tv1) && f_165d_a1_b(tv1) && !f_1669_a1_b(tv1)) {
				f_1464_a2_v(tv1, tv0);
				f_691_a1_v("Neutral");
				tv0->SetMessage(5377);
				tv0->ClearReplies();
				if (!f_1675_a1_b(tv1)) {
					tv0->AddReply(5379, 5964, 5924);
				}
				if (f_1675_a1_b(tv1)) {
					tv0->AddReply(5380, 6864, 5925);
				}
				break;
			}
			if (!f_165d_a1_b(tv1) && f_1669_a1_b(tv1) && !f_15cd_a1_b(tv1) && !f_15c1_a1_b(tv1)) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(8650);
				tv0->ClearReplies();
				tv0->AddReply(8651, 9477, 9476);
				break;
			}
			f_691_a1_v("Neutral");
			tv0->SetMessage(7779);
			tv0->ClearReplies();
			if (f_15a9_a1_b(tv1) && f_15d9_a1_b(tv1)) {
				tv0->AddReply(7815, 8618, 8617);
			}
			if (f_1768_a1_b(tv1) && f_15b5_a1_b(tv1)) {
				tv0->AddReply(7783, 8607, 8584);
			}
			if (f_1774_a1_b(tv1) && f_1681_a1_b(tv1) && f_1609_a1_b(tv1)) {
				tv0->AddReply(7784, 8608, 8585);
			}
			if (f_1615_a1_b(tv1) && f_1744_a1_b(tv1)) {
				tv0->AddReply(7785, 8687, 8586);
			}
			if (f_1750_a1_b(tv1) && f_1621_a1_b(tv1)) {
				tv0->AddReply(7786, 8698, 8587);
			}
			if (f_1738_a1_b(tv1) && f_162d_a1_b(tv1)) {
				tv0->AddReply(7788, 8710, 8589);
			}
			if (f_16d3_a1_b(tv1) && f_1639_a1_b(tv1)) {
				tv0->AddReply(7797, 8613, 8598);
			}
			if (f_1651_a1_b(tv1) && f_1645_a1_b(tv1)) {
				tv0->AddReply(7914, 8734, 8733);
			}
			tv0->AddReply(8703, -1, 9540);
			break;
			return;
		}
		if (f_13f4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_137d_a1_v(tv2);
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

	void f_691_a1_v(string a0)
	{
		if (!f_13f4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_137d_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_138f_a0_v();
			if (a1 == 6875) {
				f_13f6_a2_v(tv1, tv0);
			}
			if (a1 == 6876) {
				f_13f6_a2_v(tv1, tv0);
			}
			if (a1 == 9490) {
				f_1458_a2_v(tv1, tv0);
				f_144f_a2_v(tv1, tv0);
			}
			if (a1 == 9481) {
				f_1458_a2_v(tv1, tv0);
			}
			if (a1 == 9482) {
				f_1458_a2_v(tv1, tv0);
			}
			if (a1 == 8635) {
				f_13fc_a2_v(tv1, tv0);
			}
			if (a1 == 8661) {
				f_1402_a2_v(tv1, tv0);
			}
			if (a1 == 8662) {
				f_1402_a2_v(tv1, tv0);
			}
			if (a1 == 8675) {
				f_142b_a2_v(tv1, tv0);
			}
			if (a1 == 8676) {
				f_142b_a2_v(tv1, tv0);
			}
			if (a1 == 8697) {
				f_1431_a2_v(tv1, tv0);
			}
			if (a1 == 8706) {
				f_1437_a2_v(tv1, tv0);
			}
			if (a1 == 8709) {
				f_1437_a2_v(tv1, tv0);
			}
			if (a1 == 8717) {
				f_143d_a2_v(tv1, tv0);
			}
			if (a1 == 8731) {
				f_1443_a2_v(tv1, tv0);
			}
			if (a1 == 8732) {
				f_1443_a2_v(tv1, tv0);
			}
			if (a1 == 8745) {
				f_1449_a2_v(tv1, tv0);
			}
			if (a0 == 5922) {
				if (f_159d_a1_b(tv1) && !f_15cd_a1_b(tv1) && !f_15c1_a1_b(tv1) && f_165d_a1_b(tv1) && !f_1669_a1_b(tv1)) {
					f_1464_a2_v(tv1, tv0);
					f_691_a1_v("Neutral");
					tv0->SetMessage(5377);
					tv0->ClearReplies();
					if (!f_1675_a1_b(tv1)) {
						tv0->AddReply(5379, 5964, 5924);
					}
					if (f_1675_a1_b(tv1)) {
						tv0->AddReply(5380, 6864, 5925);
					}
					return;
				}
				if (!f_165d_a1_b(tv1) && f_1669_a1_b(tv1) && !f_15cd_a1_b(tv1) && !f_15c1_a1_b(tv1)) {
					f_691_a1_v("Neutral");
					tv0->SetMessage(8650);
					tv0->ClearReplies();
					tv0->AddReply(8651, 9477, 9476);
					return;
				}
				f_691_a1_v("Neutral");
				tv0->SetMessage(7779);
				tv0->ClearReplies();
				if (f_15a9_a1_b(tv1) && f_15d9_a1_b(tv1)) {
					tv0->AddReply(7815, 8618, 8617);
				}
				if (f_1768_a1_b(tv1) && f_15b5_a1_b(tv1)) {
					tv0->AddReply(7783, 8607, 8584);
				}
				if (f_1774_a1_b(tv1) && f_1681_a1_b(tv1) && f_1609_a1_b(tv1)) {
					tv0->AddReply(7784, 8608, 8585);
				}
				if (f_1615_a1_b(tv1) && f_1744_a1_b(tv1)) {
					tv0->AddReply(7785, 8687, 8586);
				}
				if (f_1750_a1_b(tv1) && f_1621_a1_b(tv1)) {
					tv0->AddReply(7786, 8698, 8587);
				}
				if (f_1738_a1_b(tv1) && f_162d_a1_b(tv1)) {
					tv0->AddReply(7788, 8710, 8589);
				}
				if (f_16d3_a1_b(tv1) && f_1639_a1_b(tv1)) {
					tv0->AddReply(7797, 8613, 8598);
				}
				if (f_1651_a1_b(tv1) && f_1645_a1_b(tv1)) {
					tv0->AddReply(7914, 8734, 8733);
				}
				tv0->AddReply(8703, -1, 9540);
				return;
			}
			if (a0 == 8734) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7915);
				tv0->ClearReplies();
				tv0->AddReply(7916, 8737, 8735);
				tv0->AddReply(7917, 8737, 8736);
				return;
			}
			if (a0 == 8737) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7918);
				tv0->ClearReplies();
				tv0->AddReply(7919, 8739, 8738);
				return;
			}
			if (a0 == 8739) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7920);
				tv0->ClearReplies();
				tv0->AddReply(7921, 8742, 8740);
				return;
			}
			if (a0 == 8742) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7922);
				tv0->ClearReplies();
				tv0->AddReply(7923, 8744, 8743);
				return;
			}
			if (a0 == 8744) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7924);
				tv0->ClearReplies();
				tv0->AddReply(7925, -1, 8745);
				return;
			}
			if (a0 == 8613) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7812);
				tv0->ClearReplies();
				tv0->AddReply(7906, 8726, 8725);
				return;
			}
			if (a0 == 8726) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7907);
				tv0->ClearReplies();
				tv0->AddReply(7909, 8730, 8728);
				return;
			}
			if (a0 == 8730) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7911);
				tv0->ClearReplies();
				tv0->AddReply(7912, -1, 8731);
				tv0->AddReply(7913, -1, 8732);
				return;
			}
			if (a0 == 8710) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7892);
				tv0->ClearReplies();
				tv0->AddReply(7893, 8712, 8711);
				return;
			}
			if (a0 == 8712) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7894);
				tv0->ClearReplies();
				if (f_15e5_a1_b(tv1)) {
					tv0->AddReply(7895, 8714, 8713);
				}
				if (!f_15e5_a1_b(tv1)) {
					tv0->AddReply(7897, 8716, 8715);
				}
				return;
			}
			if (a0 == 8716) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7898);
				tv0->ClearReplies();
				tv0->AddReply(7900, 8714, 8718);
				return;
			}
			if (a0 == 8714) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7896);
				tv0->ClearReplies();
				tv0->AddReply(7899, -1, 8717);
				return;
			}
			if (a0 == 8698) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7881);
				tv0->ClearReplies();
				tv0->AddReply(7882, 8610, 8699);
				return;
			}
			if (a0 == 8610) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7809);
				tv0->ClearReplies();
				tv0->AddReply(7883, 8701, 8700);
				tv0->AddReply(7885, 8703, 8702);
				return;
			}
			if (a0 == 8703) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7886);
				tv0->ClearReplies();
				tv0->AddReply(7887, 8701, 8704);
				return;
			}
			if (a0 == 8701) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7884);
				tv0->ClearReplies();
				tv0->AddReply(7888, -1, 8706);
				tv0->AddReply(7889, 8708, 8707);
				return;
			}
			if (a0 == 8708) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7890);
				tv0->ClearReplies();
				tv0->AddReply(7891, -1, 8709);
				return;
			}
			if (a0 == 8687) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7872);
				tv0->ClearReplies();
				tv0->AddReply(7873, 8609, 8688);
				tv0->AddReply(7874, 8609, 8689);
				return;
			}
			if (a0 == 8609) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7808);
				tv0->ClearReplies();
				tv0->AddReply(7875, 8692, 8691);
				tv0->AddReply(7877, 8694, 8693);
				return;
			}
			if (a0 == 8694) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7878);
				tv0->ClearReplies();
				tv0->AddReply(7879, 8692, 8695);
				return;
			}
			if (a0 == 8692) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7876);
				tv0->ClearReplies();
				tv0->AddReply(7880, -1, 8697);
				return;
			}
			if (a0 == 8608) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7807);
				tv0->ClearReplies();
				tv0->AddReply(7856, 8668, 8667);
				tv0->AddReply(7866, 8668, 8677);
				return;
			}
			if (a0 == 8668) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7857);
				tv0->ClearReplies();
				tv0->AddReply(7858, 8670, 8669);
				tv0->AddReply(7867, 8670, 8679);
				return;
			}
			if (a0 == 8670) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7859);
				tv0->ClearReplies();
				tv0->AddReply(7860, 8672, 8671);
				if (!f_16c7_a1_b(tv1)) {
					tv0->AddReply(7868, 8682, 8681);
				}
				return;
			}
			if (a0 == 8682) {
				f_14c0_a2_v(tv1, tv0);
				f_691_a1_v("Neutral");
				tv0->SetMessage(7869);
				tv0->ClearReplies();
				tv0->AddReply(7870, 8672, 8683);
				return;
			}
			if (a0 == 8672) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7861);
				tv0->ClearReplies();
				tv0->AddReply(7862, 8674, 8673);
				tv0->AddReply(7871, 8674, 8685);
				return;
			}
			if (a0 == 8674) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7863);
				tv0->ClearReplies();
				tv0->AddReply(7864, -1, 8675);
				tv0->AddReply(7865, -1, 8676);
				return;
			}
			if (a0 == 8607) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7806);
				tv0->ClearReplies();
				tv0->AddReply(7843, 8657, 8651);
				tv0->AddReply(7855, 8652, 8665);
				return;
			}
			if (a0 == 8657) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7848);
				tv0->ClearReplies();
				tv0->AddReply(7849, 8659, 8658);
				tv0->AddReply(7854, 8659, 8663);
				return;
			}
			if (a0 == 8659) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7850);
				tv0->ClearReplies();
				tv0->AddReply(7851, 8652, 8660);
				return;
			}
			if (a0 == 8652) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7844);
				tv0->ClearReplies();
				tv0->AddReply(7852, -1, 8661);
				tv0->AddReply(7853, -1, 8662);
				return;
			}
			if (a0 == 8618) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7816);
				tv0->ClearReplies();
				tv0->AddReply(7817, 8620, 8619);
				tv0->AddReply(7845, 8654, 8653);
				return;
			}
			if (a0 == 8654) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7846);
				tv0->ClearReplies();
				tv0->AddReply(7847, 8620, 8655);
				return;
			}
			if (a0 == 8620) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7818);
				tv0->ClearReplies();
				tv0->AddReply(7821, 8625, 8623);
				tv0->AddReply(7819, 8622, 8621);
				return;
			}
			if (a0 == 8622) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7820);
				tv0->ClearReplies();
				tv0->AddReply(7822, 8625, 8624);
				return;
			}
			if (a0 == 8625) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7823);
				tv0->ClearReplies();
				tv0->AddReply(7824, 8627, 8626);
				tv0->AddReply(7842, 8630, 8649);
				return;
			}
			if (a0 == 8627) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7825);
				tv0->ClearReplies();
				tv0->AddReply(7826, 8630, 8628);
				tv0->AddReply(7834, 8639, 8638);
				return;
			}
			if (a0 == 8639) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7835);
				tv0->ClearReplies();
				tv0->AddReply(7836, 8641, 8640);
				tv0->AddReply(7841, 8641, 8645);
				return;
			}
			if (a0 == 8641) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7837);
				tv0->ClearReplies();
				tv0->AddReply(7839, 8630, 8643);
				tv0->AddReply(7840, 8630, 8644);
				return;
			}
			if (a0 == 8630) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7827);
				tv0->ClearReplies();
				tv0->AddReply(7828, 8632, 8631);
				tv0->AddReply(7833, 8632, 8636);
				return;
			}
			if (a0 == 8632) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7829);
				tv0->ClearReplies();
				tv0->AddReply(7830, 8634, 8633);
				return;
			}
			if (a0 == 8634) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(7831);
				tv0->ClearReplies();
				tv0->AddReply(7832, -1, 8635);
				return;
			}
			if (a0 == 9477) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(8652);
				tv0->ClearReplies();
				tv0->AddReply(8653, 9479, 9478);
				return;
			}
			if (a0 == 9479) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(8654);
				tv0->ClearReplies();
				tv0->AddReply(8655, 9483, 9480);
				tv0->AddReply(8656, -1, 9481);
				tv0->AddReply(8657, -1, 9482);
				return;
			}
			if (a0 == 9483) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(8658);
				tv0->ClearReplies();
				tv0->AddReply(8659, 9485, 9484);
				return;
			}
			if (a0 == 9485) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(8660);
				tv0->ClearReplies();
				tv0->AddReply(8661, 9487, 9486);
				return;
			}
			if (a0 == 9487) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(8662);
				tv0->ClearReplies();
				tv0->AddReply(8663, 9489, 9488);
				return;
			}
			if (a0 == 9489) {
				f_1464_a2_v(tv1, tv0);
				f_691_a1_v("Neutral");
				tv0->SetMessage(8664);
				tv0->ClearReplies();
				tv0->AddReply(8665, -1, 9490);
				return;
			}
			if (a0 == 5964) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(5415);
				tv0->ClearReplies();
				tv0->AddReply(6207, 6862, 6861);
				tv0->AddReply(5416, 5966, 5965);
				return;
			}
			if (a0 == 6862) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(6208);
				tv0->ClearReplies();
				tv0->AddReply(6209, 6864, 6863);
				return;
			}
			if (a0 == 6864) {
				f_1425_a2_v(tv1, tv0);
				f_691_a1_v("Neutral");
				tv0->SetMessage(6210);
				tv0->ClearReplies();
				tv0->AddReply(6211, 6866, 6865);
				return;
			}
			if (a0 == 6866) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(6212);
				tv0->ClearReplies();
				tv0->AddReply(6214, 5966, 6868);
				return;
			}
			if (a0 == 5966) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(5417);
				tv0->ClearReplies();
				tv0->AddReply(5419, 5969, 5968);
				tv0->AddReply(6215, 6867, 6870);
				tv0->AddReply(5418, 6874, 5967);
				return;
			}
			if (a0 == 6867) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(6213);
				tv0->ClearReplies();
				tv0->AddReply(6216, 6874, 6872);
				return;
			}
			if (a0 == 5969) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(5420);
				tv0->ClearReplies();
				tv0->AddReply(5421, 6874, 5970);
				return;
			}
			if (a0 == 6874) {
				f_691_a1_v("Neutral");
				tv0->SetMessage(6217);
				tv0->ClearReplies();
				tv0->AddReply(6218, -1, 6875);
				tv0->AddReply(6219, -1, 6876);
				return;
			}
			tv3 = true;
			if (f_13f4_a0_b()) {
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
		if (!f_1341_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPlayerName(f_17f8_a0_i());
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
		f_1379_a1_v(a0);
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
			f_dc6_a1_v("Neutral");
			tv0->SetMessage(6914);
			tv0->ClearReplies();
			if (f_15f1_a1_b(tv1) && f_15fd_a1_b(tv1)) {
				tv0->AddReply(6915, 7622, 7621);
			}
			tv0->AddReply(7747, -1, 8548);
			break;
			f_dc6_a1_v("Neutral");
			tv0->SetMessage(9294);
			tv0->ClearReplies();
			tv0->AddReply(9295, 10205, 10204);
			tv0->AddReply(9306, 10205, 10216);
			break;
			f_dc6_a1_v("Neutral");
			tv0->SetMessage(9307);
			tv0->ClearReplies();
			tv0->AddReply(9308, 10220, 10219);
			tv0->AddReply(9316, 10229, 10228);
			tv0->AddReply(9319, 10233, 10232);
			break;
			return;
		}
		if (f_13f4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_137d_a1_v(tv2);
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

	void f_dc6_a1_v(string a0)
	{
		if (!f_13f4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_137d_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_138f_a0_v();
			if (a1 == 8122) {
				f_141f_a2_v(tv1, tv0);
				f_1413_a2_v(tv1, tv0);
				f_1408_a2_v(tv1, tv0);
			}
			if (a1 == 8131) {
				f_141f_a2_v(tv1, tv0);
				f_1408_a2_v(tv1, tv0);
				f_1413_a2_v(tv1, tv0);
			}
			if (a0 == 7620) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(6914);
				tv0->ClearReplies();
				if (f_15f1_a1_b(tv1) && f_15fd_a1_b(tv1)) {
					tv0->AddReply(6915, 7622, 7621);
				}
				tv0->AddReply(7747, -1, 8548);
				return;
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(9294);
				tv0->ClearReplies();
				tv0->AddReply(9295, 10205, 10204);
				tv0->AddReply(9306, 10205, 10216);
				return;
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(9307);
				tv0->ClearReplies();
				tv0->AddReply(9308, 10220, 10219);
				tv0->AddReply(9316, 10229, 10228);
				tv0->AddReply(9319, 10233, 10232);
				return;
			}
			if (a0 == 10233) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(9320);
				tv0->ClearReplies();
				tv0->AddReply(9321, 10222, 10234);
				return;
			}
			if (a0 == 10229) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(9317);
				tv0->ClearReplies();
				tv0->AddReply(9318, 10220, 10230);
				return;
			}
			if (a0 == 10220) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(9309);
				tv0->ClearReplies();
				tv0->AddReply(9310, 10222, 10221);
				tv0->AddReply(9313, 10225, 10224);
				return;
			}
			if (a0 == 10225) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(9314);
				tv0->ClearReplies();
				tv0->AddReply(9315, 10222, 10226);
				return;
			}
			if (a0 == 10222) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(9311);
				tv0->ClearReplies();
				tv0->AddReply(9312, -1, 10223);
				return;
			}
			if (a0 == 10205) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(9296);
				tv0->ClearReplies();
				tv0->AddReply(9297, 10207, 10206);
				tv0->AddReply(9305, 10207, 10214);
				return;
			}
			if (a0 == 10207) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(9298);
				tv0->ClearReplies();
				tv0->AddReply(9299, 10209, 10208);
				tv0->AddReply(9303, 10213, 10212);
				return;
			}
			if (a0 == 10213) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(9304);
				tv0->ClearReplies();
				return;
			}
			if (a0 == 10209) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(9300);
				tv0->ClearReplies();
				tv0->AddReply(9301, -1, 10210);
				tv0->AddReply(9302, -1, 10211);
				return;
			}
			if (a0 == 7622) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(6916);
				tv0->ClearReplies();
				tv0->AddReply(6917, 8117, 7623);
				tv0->AddReply(7365, 8124, 8123);
				return;
			}
			if (a0 == 8124) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(7366);
				tv0->ClearReplies();
				tv0->AddReply(7367, 8121, 8125);
				tv0->AddReply(7368, 8127, 8126);
				return;
			}
			if (a0 == 8127) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(7369);
				tv0->ClearReplies();
				tv0->AddReply(7370, 8121, 8128);
				return;
			}
			if (a0 == 8117) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(7359);
				tv0->ClearReplies();
				tv0->AddReply(7360, 8119, 8118);
				tv0->AddReply(7372, 8121, 8132);
				return;
			}
			if (a0 == 8119) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(7361);
				tv0->ClearReplies();
				tv0->AddReply(7362, 8121, 8120);
				return;
			}
			if (a0 == 8121) {
				f_dc6_a1_v("Neutral");
				tv0->SetMessage(7363);
				tv0->ClearReplies();
				tv0->AddReply(7364, -1, 8122);
				tv0->AddReply(7371, -1, 8131);
				return;
			}
			tv3 = true;
			if (f_13f4_a0_b()) {
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
		if (!f_1341_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPlayerName(f_17f8_a0_i());
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
		f_1379_a1_v(a0);
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
			if (f_175c_a1_b(tv1)) {
				f_1581_a2_v(tv1, tv0);
				f_1027_a1_v("Neutral");
				tv0->SetMessage(9865);
				tv0->ClearReplies();
				tv0->AddReply(9866, 10867, 10866);
				tv0->AddReply(9877, -1, 10880);
				tv0->AddReply(9878, 10882, 10881);
				break;
			}
			f_1027_a1_v("Neutral");
			tv0->SetMessage(10190);
			tv0->ClearReplies();
			tv0->AddReply(15313, -1, 16551);
			break;
			return;
		}
		if (f_13f4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_137d_a1_v(tv2);
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

	void f_1027_a1_v(string a0)
	{
		if (!f_13f4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_137d_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_138f_a0_v();
			if (a0 == 10865) {
				if (f_175c_a1_b(tv1)) {
					f_1581_a2_v(tv1, tv0);
					f_1027_a1_v("Neutral");
					tv0->SetMessage(9865);
					tv0->ClearReplies();
					tv0->AddReply(9866, 10867, 10866);
					tv0->AddReply(9877, -1, 10880);
					tv0->AddReply(9878, 10882, 10881);
					return;
				}
				f_1027_a1_v("Neutral");
				tv0->SetMessage(10190);
				tv0->ClearReplies();
				tv0->AddReply(15313, -1, 16551);
				return;
			}
			if (a0 == 10882) {
				f_1027_a1_v("Neutral");
				tv0->SetMessage(9879);
				tv0->ClearReplies();
				tv0->AddReply(9880, -1, 10883);
				return;
			}
			if (a0 == 10867) {
				f_1027_a1_v("Neutral");
				tv0->SetMessage(9867);
				tv0->ClearReplies();
				tv0->AddReply(9868, 10869, 10868);
				tv0->AddReply(9876, 10869, 10878);
				return;
			}
			if (a0 == 10869) {
				f_1027_a1_v("Neutral");
				tv0->SetMessage(9869);
				tv0->ClearReplies();
				tv0->AddReply(9870, 10871, 10870);
				tv0->AddReply(9874, 10871, 10874);
				tv0->AddReply(9875, 10871, 10876);
				return;
			}
			if (a0 == 10871) {
				f_1027_a1_v("Neutral");
				tv0->SetMessage(9871);
				tv0->ClearReplies();
				tv0->AddReply(9872, -1, 10872);
				tv0->AddReply(9873, -1, 10873);
				return;
			}
			tv3 = true;
			if (f_13f4_a0_b()) {
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
		if (!f_1341_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPlayerName(f_17f8_a0_i());
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
		f_1379_a1_v(a0);
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
			f_1180_a1_v("Neutral");
			tv0->SetMessage(11320);
			tv0->ClearReplies();
			if (f_1697_a1_b(tv1)) {
				tv0->AddReply(11321, 12516, 12515);
			}
			if (f_168b_a1_b(tv1) && !f_16a3_a1_b(tv1)) {
				tv0->AddReply(11469, 12676, 12675);
			}
			if (f_16bb_a1_b(tv1) && f_16af_a1_b(tv1)) {
				tv0->AddReply(11856, 13070, 13069);
			}
			tv0->AddReply(11472, -1, 12678);
			break;
			return;
		}
		if (f_13f4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_137d_a1_v(tv2);
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

	void f_1180_a1_v(string a0)
	{
		if (!f_13f4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_137d_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_138f_a0_v();
			if (a1 == 12527) {
				f_146a_a2_v(tv1, tv0);
				f_1470_a2_v(tv1, tv0);
				f_1476_a2_v(tv1, tv0);
				f_1576_a2_v(tv1, tv0);
				f_1587_a2_v(tv1, tv0);
				f_1592_a2_v(tv1, tv0);
				f_1419_a2_v(tv1, tv0);
			}
			if (a1 == 12674) {
				f_146a_a2_v(tv1, tv0);
			}
			if (a1 == 12677) {
				f_1470_a2_v(tv1, tv0);
				f_1476_a2_v(tv1, tv0);
				f_1419_a2_v(tv1, tv0);
				f_1576_a2_v(tv1, tv0);
				f_1592_a2_v(tv1, tv0);
				f_1587_a2_v(tv1, tv0);
			}
			if (a1 == 13071) {
				f_14ba_a2_v(tv1, tv0);
			}
			if (a0 == 12514) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11320);
				tv0->ClearReplies();
				if (f_1697_a1_b(tv1)) {
					tv0->AddReply(11321, 12516, 12515);
				}
				if (f_168b_a1_b(tv1) && !f_16a3_a1_b(tv1)) {
					tv0->AddReply(11469, 12676, 12675);
				}
				if (f_16bb_a1_b(tv1) && f_16af_a1_b(tv1)) {
					tv0->AddReply(11856, 13070, 13069);
				}
				tv0->AddReply(11472, -1, 12678);
				return;
			}
			if (a0 == 13070) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11857);
				tv0->ClearReplies();
				tv0->AddReply(11858, -1, 13071);
				return;
			}
			if (a0 == 12676) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11470);
				tv0->ClearReplies();
				tv0->AddReply(11471, -1, 12677);
				return;
			}
			if (a0 == 12516) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11322);
				tv0->ClearReplies();
				tv0->AddReply(11429, 12522, 12629);
				tv0->AddReply(11323, 12518, 12517);
				return;
			}
			if (a0 == 12518) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11324);
				tv0->ClearReplies();
				tv0->AddReply(11455, 12522, 12659);
				return;
			}
			if (a0 == 12522) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11328);
				tv0->ClearReplies();
				tv0->AddReply(11329, 12524, 12523);
				tv0->AddReply(11456, 12661, 12660);
				return;
			}
			if (a0 == 12661) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11457);
				tv0->ClearReplies();
				tv0->AddReply(11458, 12663, 12662);
				return;
			}
			if (a0 == 12663) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11459);
				tv0->ClearReplies();
				tv0->AddReply(11460, 12665, 12664);
				tv0->AddReply(11462, 12667, 12666);
				return;
			}
			if (a0 == 12667) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11463);
				tv0->ClearReplies();
				tv0->AddReply(11465, 12524, 12669);
				return;
			}
			if (a0 == 12665) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11461);
				tv0->ClearReplies();
				tv0->AddReply(11466, 12524, 12670);
				return;
			}
			if (a0 == 12524) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11330);
				tv0->ClearReplies();
				tv0->AddReply(11331, 12526, 12525);
				return;
			}
			if (a0 == 12526) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11332);
				tv0->ClearReplies();
				tv0->AddReply(11333, -1, 12527);
				tv0->AddReply(11464, 12673, 12668);
				return;
			}
			if (a0 == 12673) {
				f_1180_a1_v("Neutral");
				tv0->SetMessage(11467);
				tv0->ClearReplies();
				tv0->AddReply(11468, -1, 12674);
				return;
			}
			tv3 = true;
			if (f_13f4_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

void f_1329_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1330_a1_b(object a0)
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

bool f_133c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1341_a1_b(object a0)
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
	L5 = L3 * 70 + f_1396_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1379_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_137d_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_138f_a0_v(void)
{
	if (f_13f4_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_1396_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_13a0_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_13a5_a3_v(object a0, object a1, int a2)
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

void f_13b2_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_13a5_a3_v(a0, L0, a2);
}

bool f_13bf_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_13cb_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_13d0_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_13d9_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_13e1_a1_b(int a0)
{
	return f_13d0_a0_i() == a0;
}

bool f_13e7_a0_b(void)
{
	bool L0;
	f_137d_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_13f0_a0_i(void)
{
	return 2862;
}

string f_13f2_a0_s(void)
{
	return "ui/NPC_Julia.png";
}

bool f_13f4_a0_b(void)
{
	return true;
}

void f_13f6_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia1", 1);
}

void f_13fc_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia2", 1);
}

void f_1402_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia3", 1);
}

void f_1408_a2_v(object a0, object a1)
{
	@Trace("money1000 is given");
	f_1329_a3_v(a0, "money", 1000);
}

void f_1413_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1419_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_141f_a2_v(object a0, object a1)
{
	@SetVariable("ood2Julia1", 1);
}

void f_1425_a2_v(object a0, object a1)
{
	@SetVariable("KnowBurahDead", 1);
}

void f_142b_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia4", 1);
}

void f_1431_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia5", 1);
}

void f_1437_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia6", 1);
}

void f_143d_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia7", 1);
}

void f_1443_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia8", 1);
}

void f_1449_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia9", 1);
}

void f_144f_a2_v(object a0, object a1)
{
	@SetVariable("d1q01KnowEpidemic", 1);
	f_1809_a0_v();
}

void f_1458_a2_v(object a0, object a1)
{
	@SetVariable("ood1Julia10", 1);
}

void f_145e_a2_v(object a0, object a1)
{
	@SetVariable("KnowJulia", 1);
}

void f_1464_a2_v(object a0, object a1)
{
	@SetVariable("KnowRubin", 1);
}

void f_146a_a2_v(object a0, object a1)
{
	@SetVariable("ood4Julia1", 1);
}

void f_1470_a2_v(object a0, object a1)
{
	@SetVariable("d4q02JuliaGivesMedcine", 1);
}

void f_1476_a2_v(object a0, object a1)
{
	if (f_13a0_a1_i("d4q02AnnaGivesMedcine") == 1 && f_13a0_a1_i("d4q02JuliaGivesMedcine") == 1 && f_13a0_a1_i("d4q02LaraGivesMedcine") == 1) {
		object L0;
		@SetVariable("d4q02", 2);
		L0 = f_17c6_a0_o();
		L0->AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", 0, 11842, f_13cb_a0_f());
		f_13bf_a2_b("quest_d4_02", "birdmask");
		f_17d7_a3_v(f_17c6_a0_o(), "pt_d4q02_birdmask", 2);
		a1->ShowMap(f_17c6_a0_o());
	}
}

void f_14ba_a2_v(object a0, object a1)
{
	@SetVariable("ood4Julia2", 1);
}

void f_14c0_a2_v(object a0, object a1)
{
	@SetVariable("KnowMistresses", 1);
}

void f_14c6_a2_v(object a0, object a1)
{
	@SetVariable("ood6Julia1", 1);
}

void f_14cc_a2_v(object a0, object a1)
{
	@SetVariable("ood6Julia2", 1);
}

void f_14d2_a2_v(object a0, object a1)
{
	f_1819_a0_v();
	@Trace("julia blood is given");
	f_13b2_a3_v(a0, "d6q01_julia_blood", 1);
}

void f_14e0_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_14e6_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	@SetVariable("d6q01JuliaVolonteer", 1);
	L0 = f_17c6_a0_o();
	L0->FindMark(L1, "d6q01AlexandrGotoJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexandrGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexandrGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexangrGotoJulLaraSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoAnnaOspinaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KaterinaGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KaterinagotoLaskaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KillerIsKlara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01LaskaGotoAlbinos");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoAlxBigSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	f_1829_a0_v();
	f_17b5_a1_b(112);
	f_17b5_a1_b(113);
	f_17b5_a1_b(114);
	f_17b5_a1_b(115);
	f_17b5_a1_b(116);
	f_17b5_a1_b(117);
	f_13bf_a2_b("quest_d6_01", "completed");
}

void f_1574_a2_v(object a0, object a1)
{
}

void f_1576_a2_v(object a0, object a1)
{
	@Trace("feromicin is given");
	f_13b2_a3_v(a0, "feromicin", 1);
}

void f_1581_a2_v(object a0, object a1)
{
	@SetVariable("ood3Julia1", 1);
}

void f_1587_a2_v(object a0, object a1)
{
	@Trace("neomicin is given");
	f_13b2_a3_v(a0, "neomicin", 1);
}

void f_1592_a2_v(object a0, object a1)
{
	@Trace("monomicin is given");
	f_13b2_a3_v(a0, "monomicin", 1);
}

bool f_159d_a1_b(object a0)
{
	if (f_13a0_a1_i("ood1Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_15a9_a1_b(object a0)
{
	if (f_13a0_a1_i("ood1Julia2") == 0) {
		return true;
	}
	return false;
}

bool f_15b5_a1_b(object a0)
{
	if (f_13a0_a1_i("ood1Julia3") == 0) {
		return true;
	}
	return false;
}

bool f_15c1_a1_b(object a0)
{
	if (f_13a0_a1_i("d1q01") == 1000) {
		return true;
	}
	return false;
}

bool f_15cd_a1_b(object a0)
{
	if (f_13a0_a1_i("d1q01") == 0) {
		return true;
	}
	return false;
}

bool f_15d9_a1_b(object a0)
{
	if (f_13a0_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_15e5_a1_b(object a0)
{
	if (f_13a0_a1_i("KnowDiamAce") == 1) {
		return true;
	}
	return false;
}

bool f_15f1_a1_b(object a0)
{
	if (f_13a0_a1_i("ood2Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_15fd_a1_b(object a0)
{
	if (f_13a0_a1_i("d2q03") == 1) {
		return true;
	}
	return false;
}

bool f_1609_a1_b(object a0)
{
	if (f_13a0_a1_i("ood1Julia4") == 0) {
		return true;
	}
	return false;
}

bool f_1615_a1_b(object a0)
{
	if (f_13a0_a1_i("ood1Julia5") == 0) {
		return true;
	}
	return false;
}

bool f_1621_a1_b(object a0)
{
	if (f_13a0_a1_i("ood1Julia6") == 0) {
		return true;
	}
	return false;
}

bool f_162d_a1_b(object a0)
{
	if (f_13a0_a1_i("ood1Julia7") == 0) {
		return true;
	}
	return false;
}

bool f_1639_a1_b(object a0)
{
	if (f_13a0_a1_i("ood1Julia8") == 0) {
		return true;
	}
	return false;
}

bool f_1645_a1_b(object a0)
{
	if (f_13a0_a1_i("ood1Julia9") == 0) {
		return true;
	}
	return false;
}

bool f_1651_a1_b(object a0)
{
	if (f_13a0_a1_i("KnowViktor") == 1) {
		return true;
	}
	return false;
}

bool f_165d_a1_b(object a0)
{
	if (f_13a0_a1_i("d1q01KnowEpidemic") == 1) {
		return true;
	}
	return false;
}

bool f_1669_a1_b(object a0)
{
	if (f_13a0_a1_i("ood1Julia10") == 0) {
		return true;
	}
	return false;
}

bool f_1675_a1_b(object a0)
{
	if (f_13a0_a1_i("KnowRubin") == 1) {
		return true;
	}
	return false;
}

bool f_1681_a1_b(object a0)
{
	if (f_1780_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_168b_a1_b(object a0)
{
	if (f_13a0_a1_i("d4q01") == 1) {
		return true;
	}
	return false;
}

bool f_1697_a1_b(object a0)
{
	if (f_13a0_a1_i("ood4Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_16a3_a1_b(object a0)
{
	if (f_13a0_a1_i("d4q02JuliaGivesMedcine") == 1) {
		return true;
	}
	return false;
}

bool f_16af_a1_b(object a0)
{
	if (f_13a0_a1_i("d4q02") == 1000) {
		return true;
	}
	return false;
}

bool f_16bb_a1_b(object a0)
{
	if (f_13a0_a1_i("ood4Julia2") == 0) {
		return true;
	}
	return false;
}

bool f_16c7_a1_b(object a0)
{
	if (f_13a0_a1_i("KnowMistresses") == 1) {
		return true;
	}
	return false;
}

bool f_16d3_a1_b(object a0)
{
	if (f_13a0_a1_i("KnowMark") == 1) {
		return true;
	}
	return false;
}

bool f_16df_a1_b(object a0)
{
	if (f_13a0_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_16eb_a1_b(object a0)
{
	if (f_13a0_a1_i("d5q01") == 1000) {
		return true;
	}
	return false;
}

bool f_16f7_a1_b(object a0)
{
	if (f_13a0_a1_i("ood6Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_1703_a1_b(object a0)
{
	if (f_13a0_a1_i("ood6Julia2") == 0) {
		return true;
	}
	return false;
}

bool f_170f_a1_b(object a0)
{
	if (f_13a0_a1_i("microscope_d6q01_julia_blood") != 0) {
		return true;
	}
	return false;
}

bool f_171b_a1_b(object a0)
{
	return true;
	return false;
}

bool f_1720_a1_b(object a0)
{
	if (f_13a0_a1_i("d6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_172c_a1_b(object a0)
{
	if (f_13a0_a1_i("d6q01") == -1) {
		return true;
	}
	return false;
}

bool f_1738_a1_b(object a0)
{
	if (f_13a0_a1_i("KnowAnna") == 1) {
		return true;
	}
	return false;
}

bool f_1744_a1_b(object a0)
{
	if (f_13a0_a1_i("KnowEva") == 1) {
		return true;
	}
	return false;
}

bool f_1750_a1_b(object a0)
{
	if (f_13a0_a1_i("KnowLara") == 1) {
		return true;
	}
	return false;
}

bool f_175c_a1_b(object a0)
{
	if (f_13a0_a1_i("ood3Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_1768_a1_b(object a0)
{
	if (f_13a0_a1_i("KnowMyth") == 1) {
		return true;
	}
	return false;
}

bool f_1774_a1_b(object a0)
{
	if (f_13a0_a1_i("KnowPredictions") == 1) {
		return true;
	}
	return false;
}

bool f_1780_a1_b(object a0)
{
	if (f_13d9_a0_i() >= 18) {
		return true;
	}
	return false;
}

object f_178b_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1798_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_178b_a0_o();
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

bool f_17b5_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_178b_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

object f_17c6_a0_o(void)
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

void f_17d7_a3_v(object a0, string a1, float a2)
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

int f_17f8_a0_i(void)
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

void f_1809_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 33, 1, 12115);
	f_1798_a2_b(L0, 2);
}

void f_1819_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 161, 1, 15394);
	f_1798_a2_b(L0, 111);
}

void f_1829_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 120, 1, 13743);
	f_1798_a2_b(L0, 111);
}

void f_1839_a0_v(void)
{
	g1 = false;
}

void f_183d_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_13e1_a1_b(1)) {
		t6{a0};
		return;
	}
	if (f_13e1_a1_b(2)) {
		t8{a0};
		return;
	}
	if (f_13e1_a1_b(3)) {
		t10{a0};
		return;
	}
	if (f_13e1_a1_b(4)) {
		t12{a0};
		return;
	}
	if (f_13e1_a1_b(6)) {
		t4{a0};
		return;
	}
	f_13e7_a0_b();
}

