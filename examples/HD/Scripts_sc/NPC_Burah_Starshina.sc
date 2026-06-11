event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_1191_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1351_a0_i());
		L0->SetNPCDescription(f_134f_a0_i());
		L0->SetPhoto(f_1353_a0_s());
		L0->SetPhoto2(f_1355_a0_s());
		L0->SetPlayerName(f_1669_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11e8_a1_b(f_12a7_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_11d6_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t1
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
			if (f_1555_a1_b(tv1)) {
				f_a4_a1_v("Oracle");
				tv0->SetMessage(521017);
				tv0->ClearReplies();
				tv0->AddReply(528565, 29962, 29961);
				tv0->AddReply(528573, 29966, 29969);
				break;
			}
			f_a4_a1_v("Neutral");
			tv0->SetMessage(521041);
			tv0->ClearReplies();
			tv0->AddReply(528593, 29994, 29993);
			tv0->AddReply(521042, -1, 22238);
			break;
			return;
		}
		if (f_1357_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1272_a1_v(tv2);
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

	void f_a4_a1_v(string a0)
	{
		if (!f_1357_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1282_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_12a0_a0_v();
			if (a1 == 22231) {
				f_1360_a2_v(tv1, tv0);
				f_1403_a2_v(tv1, tv0);
				f_1369_a2_v(tv1, tv0);
			}
			if (a0 == 22230) {
				if (f_1555_a1_b(tv1)) {
					f_a4_a1_v("Oracle");
					tv0->SetMessage(521017);
					tv0->ClearReplies();
					tv0->AddReply(528565, 29962, 29961);
					tv0->AddReply(528573, 29966, 29969);
					return;
				}
				f_a4_a1_v("Neutral");
				tv0->SetMessage(521041);
				tv0->ClearReplies();
				tv0->AddReply(528593, 29994, 29993);
				tv0->AddReply(521042, -1, 22238);
				return;
			}
			if (a0 == 29994) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(528594);
				tv0->ClearReplies();
				tv0->AddReply(528595, -1, 29995);
				return;
			}
			if (a0 == 29962) {
				f_a4_a1_v("Oracle");
				tv0->SetMessage(528566);
				tv0->ClearReplies();
				tv0->AddReply(528567, 29964, 29963);
				tv0->AddReply(528574, 29964, 29970);
				return;
			}
			if (a0 == 29964) {
				f_a4_a1_v("Smile");
				tv0->SetMessage(528568);
				tv0->ClearReplies();
				tv0->AddReply(528569, 29987, 29965);
				tv0->AddReply(528575, 29973, 29972);
				return;
			}
			if (a0 == 29973) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(528576);
				tv0->ClearReplies();
				tv0->AddReply(528577, -1, 29974);
				return;
			}
			if (a0 == 29987) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(528588);
				tv0->ClearReplies();
				tv0->AddReply(528589, 29966, 29988);
				tv0->AddReply(528590, 29966, 29989);
				return;
			}
			if (a0 == 29966) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(528570);
				tv0->ClearReplies();
				tv0->AddReply(528571, 29968, 29967);
				return;
			}
			if (a0 == 29968) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(528572);
				tv0->ClearReplies();
				tv0->AddReply(528578, 29976, 29975);
				tv0->AddReply(528584, 29976, 29981);
				return;
			}
			if (a0 == 29976) {
				f_a4_a1_v("Oracle");
				tv0->SetMessage(528579);
				tv0->ClearReplies();
				tv0->AddReply(528585, 29984, 29983);
				tv0->AddReply(528587, 29984, 29985);
				return;
			}
			if (a0 == 29984) {
				f_a4_a1_v("Refusal");
				tv0->SetMessage(528586);
				tv0->ClearReplies();
				tv0->AddReply(528580, 29978, 29977);
				return;
			}
			if (a0 == 29978) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(528581);
				tv0->ClearReplies();
				tv0->AddReply(528582, 29980, 29979);
				return;
			}
			if (a0 == 29980) {
				f_a4_a1_v("Neutral");
				tv0->SetMessage(528583);
				tv0->ClearReplies();
				tv0->AddReply(528591, 29992, 29991);
				return;
			}
			if (a0 == 29992) {
				f_a4_a1_v("Refusal");
				tv0->SetMessage(528592);
				tv0->ClearReplies();
				tv0->AddReply(521018, -1, 22231);
				return;
			}
			tv3 = true;
			if (f_1357_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
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
		if (!f_1191_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1351_a0_i());
		L0->SetNPCDescription(f_134f_a0_i());
		L0->SetPhoto(f_1353_a0_s());
		L0->SetPhoto2(f_1355_a0_s());
		L0->SetPlayerName(f_1669_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11e8_a1_b(f_12a7_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_11d6_a1_v(a0);
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
			if (f_148b_a1_b(tv1)) {
				f_2ad_a1_v("Refusal");
				tv0->SetMessage(521418);
				tv0->ClearReplies();
				tv0->AddReply(521419, 24983, 22597);
				break;
			}
			f_2ad_a1_v("Neutral");
			tv0->SetMessage(521423);
			tv0->ClearReplies();
			if (f_147f_a1_b(tv1) && f_153e_a1_b(tv1)) {
				tv0->AddReply(521425, 22604, 22603);
			}
			tv0->AddReply(521424, -1, 22602);
			break;
			return;
		}
		if (f_1357_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1272_a1_v(tv2);
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

	void f_2ad_a1_v(string a0)
	{
		if (!f_1357_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1282_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_12a0_a0_v();
			if (a1 == 22599) {
				f_1374_a2_v(tv1, tv0);
			}
			if (a1 == 22607) {
				f_137d_a2_v(tv1, tv0);
				f_1409_a2_v(tv1, tv0);
				f_144d_a2_v(tv1, tv0);
				f_146f_a2_v(tv1, tv0);
			}
			if (a0 == 22596) {
				if (f_148b_a1_b(tv1)) {
					f_2ad_a1_v("Refusal");
					tv0->SetMessage(521418);
					tv0->ClearReplies();
					tv0->AddReply(521419, 24983, 22597);
					return;
				}
				f_2ad_a1_v("Neutral");
				tv0->SetMessage(521423);
				tv0->ClearReplies();
				if (f_147f_a1_b(tv1) && f_153e_a1_b(tv1)) {
					tv0->AddReply(521425, 22604, 22603);
				}
				tv0->AddReply(521424, -1, 22602);
				return;
			}
			if (a0 == 22604) {
				f_2ad_a1_v("Oracle");
				tv0->SetMessage(521426);
				tv0->ClearReplies();
				tv0->AddReply(521427, 22606, 22605);
				return;
			}
			if (a0 == 22606) {
				f_2ad_a1_v("Oracle");
				tv0->SetMessage(521428);
				tv0->ClearReplies();
				tv0->AddReply(523745, 25009, 25008);
				return;
			}
			if (a0 == 25009) {
				f_2ad_a1_v("Oracle");
				tv0->SetMessage(523746);
				tv0->ClearReplies();
				tv0->AddReply(523747, 25011, 25010);
				return;
			}
			if (a0 == 25011) {
				f_2ad_a1_v("Oracle");
				tv0->SetMessage(523748);
				tv0->ClearReplies();
				tv0->AddReply(523749, 25013, 25012);
				return;
			}
			if (a0 == 25013) {
				f_2ad_a1_v("Neutral");
				tv0->SetMessage(523750);
				tv0->ClearReplies();
				tv0->AddReply(523751, 25015, 25014);
				return;
			}
			if (a0 == 25015) {
				f_2ad_a1_v("Refusal");
				tv0->SetMessage(523752);
				tv0->ClearReplies();
				tv0->AddReply(523753, 25017, 25016);
				return;
			}
			if (a0 == 25017) {
				f_2ad_a1_v("Refusal");
				tv0->SetMessage(523754);
				tv0->ClearReplies();
				tv0->AddReply(523755, 25019, 25018);
				return;
			}
			if (a0 == 25019) {
				f_2ad_a1_v("Refusal");
				tv0->SetMessage(523756);
				tv0->ClearReplies();
				tv0->AddReply(521429, -1, 22607);
				return;
			}
			if (a0 == 24983) {
				f_2ad_a1_v("Refusal");
				tv0->SetMessage(523725);
				tv0->ClearReplies();
				tv0->AddReply(523726, 24985, 24984);
				return;
			}
			if (a0 == 24985) {
				f_2ad_a1_v("Neutral");
				tv0->SetMessage(523727);
				tv0->ClearReplies();
				tv0->AddReply(523728, 24987, 24986);
				tv0->AddReply(523740, 24994, 25000);
				return;
			}
			if (a0 == 24987) {
				f_2ad_a1_v("Neutral");
				tv0->SetMessage(523729);
				tv0->ClearReplies();
				tv0->AddReply(523730, 24989, 24988);
				tv0->AddReply(523737, 24994, 24995);
				return;
			}
			if (a0 == 24989) {
				f_2ad_a1_v("Neutral");
				tv0->SetMessage(523731);
				tv0->ClearReplies();
				tv0->AddReply(523732, 24991, 24990);
				tv0->AddReply(523739, 24994, 24998);
				return;
			}
			if (a0 == 24991) {
				f_2ad_a1_v("Neutral");
				tv0->SetMessage(523733);
				tv0->ClearReplies();
				tv0->AddReply(523734, 25002, 24992);
				tv0->AddReply(523735, 24994, 24993);
				return;
			}
			if (a0 == 24994) {
				f_2ad_a1_v("Neutral");
				tv0->SetMessage(523736);
				tv0->ClearReplies();
				tv0->AddReply(523738, 25005, 24996);
				return;
			}
			if (a0 == 25002) {
				f_2ad_a1_v("Oracle");
				tv0->SetMessage(523741);
				tv0->ClearReplies();
				tv0->AddReply(523742, 25005, 25003);
				tv0->AddReply(523743, 25005, 25004);
				return;
			}
			if (a0 == 25005) {
				f_2ad_a1_v("Oracle");
				tv0->SetMessage(523744);
				tv0->ClearReplies();
				tv0->AddReply(521421, -1, 22599);
				return;
			}
			tv3 = true;
			if (f_1357_a0_b()) {
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
		if (!f_1191_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1351_a0_i());
		L0->SetNPCDescription(f_134f_a0_i());
		L0->SetPhoto(f_1353_a0_s());
		L0->SetPhoto2(f_1355_a0_s());
		L0->SetPlayerName(f_1669_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11e8_a1_b(f_12a7_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_11d6_a1_v(a0);
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
			if (f_14a3_a1_b(tv1)) {
				f_13ab_a2_v(tv1, tv0);
				f_524_a1_v("Neutral");
				tv0->SetMessage(521539);
				tv0->ClearReplies();
				tv0->AddReply(522390, 23556, 23555);
				break;
			}
			f_524_a1_v("Neutral");
			tv0->SetMessage(521544);
			tv0->ClearReplies();
			if (f_1497_a1_b(tv1)) {
				tv0->AddReply(521545, 22710, 22706);
			}
			if (f_14af_a1_b(tv1)) {
				tv0->AddReply(521587, 22749, 22748);
			}
			if (f_14bb_a1_b(tv1)) {
				tv0->AddReply(522411, 23579, 23578);
			}
			tv0->AddReply(521546, -1, 22707);
			break;
			return;
		}
		if (f_1357_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1272_a1_v(tv2);
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

	void f_524_a1_v(string a0)
	{
		if (!f_1357_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1282_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_12a0_a0_v();
			if (a1 == 22709) {
				f_138a_a2_v(tv1, tv0);
				f_1359_a2_v(tv1, tv0);
			}
			if (a1 == 22711) {
				f_138a_a2_v(tv1, tv0);
			}
			if (a1 == 22772) {
				f_139e_a2_v(tv1, tv0);
			}
			if (a1 == 23578) {
				f_13b1_a2_v(tv1, tv0);
			}
			if (a0 == 22700) {
				if (f_14a3_a1_b(tv1)) {
					f_13ab_a2_v(tv1, tv0);
					f_524_a1_v("Neutral");
					tv0->SetMessage(521539);
					tv0->ClearReplies();
					tv0->AddReply(522390, 23556, 23555);
					return;
				}
				f_524_a1_v("Neutral");
				tv0->SetMessage(521544);
				tv0->ClearReplies();
				if (f_1497_a1_b(tv1)) {
					tv0->AddReply(521545, 22710, 22706);
				}
				if (f_14af_a1_b(tv1)) {
					tv0->AddReply(521587, 22749, 22748);
				}
				if (f_14bb_a1_b(tv1)) {
					tv0->AddReply(522411, 23579, 23578);
				}
				tv0->AddReply(521546, -1, 22707);
				return;
			}
			if (a0 == 23579) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(522412);
				tv0->ClearReplies();
				tv0->AddReply(522414, 23582, 23581);
				tv0->AddReply(522413, -1, 23580);
				return;
			}
			if (a0 == 23582) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(522415);
				tv0->ClearReplies();
				tv0->AddReply(522416, -1, 23583);
				return;
			}
			if (a0 == 22749) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(521588);
				tv0->ClearReplies();
				tv0->AddReply(521589, 22751, 22750);
				return;
			}
			if (a0 == 22751) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(521590);
				tv0->ClearReplies();
				tv0->AddReply(521592, 22768, 22755);
				return;
			}
			if (a0 == 22768) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(521603);
				tv0->ClearReplies();
				tv0->AddReply(522468, 23642, 23641);
				return;
			}
			if (a0 == 23642) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(522469);
				tv0->ClearReplies();
				tv0->AddReply(521593, 22771, 22756);
				return;
			}
			if (a0 == 22771) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(521605);
				tv0->ClearReplies();
				tv0->AddReply(521606, -1, 22772);
				return;
			}
			if (a0 == 22710) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(521549);
				tv0->ClearReplies();
				tv0->AddReply(521550, -1, 22711);
				return;
			}
			if (a0 == 23556) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(522391);
				tv0->ClearReplies();
				tv0->AddReply(522393, 23559, 23558);
				tv0->AddReply(522392, -1, 23557);
				return;
			}
			if (a0 == 23559) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(522394);
				tv0->ClearReplies();
				tv0->AddReply(521540, 22702, 22701);
				tv0->AddReply(522396, 23562, 23561);
				tv0->AddReply(522395, 23570, 23560);
				return;
			}
			if (a0 == 23570) {
				f_524_a1_v("Smile");
				tv0->SetMessage(522404);
				tv0->ClearReplies();
				tv0->AddReply(522405, 23572, 23571);
				return;
			}
			if (a0 == 23572) {
				f_524_a1_v("Smile");
				tv0->SetMessage(522406);
				tv0->ClearReplies();
				tv0->AddReply(522407, 23564, 23573);
				tv0->AddReply(522408, -1, 23574);
				return;
			}
			if (a0 == 23562) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(522397);
				tv0->ClearReplies();
				tv0->AddReply(522398, 23564, 23563);
				tv0->AddReply(522401, 23564, 23566);
				tv0->AddReply(522403, -1, 23569);
				return;
			}
			if (a0 == 23564) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(522399);
				tv0->ClearReplies();
				tv0->AddReply(522400, -1, 23565);
				tv0->AddReply(522402, -1, 23567);
				return;
			}
			if (a0 == 22702) {
				f_524_a1_v("Refusal");
				tv0->SetMessage(521541);
				tv0->ClearReplies();
				tv0->AddReply(521542, 22708, 22703);
				tv0->AddReply(521543, -1, 22704);
				return;
			}
			if (a0 == 22708) {
				f_524_a1_v("Neutral");
				tv0->SetMessage(521547);
				tv0->ClearReplies();
				tv0->AddReply(521548, -1, 22709);
				return;
			}
			tv3 = true;
			if (f_1357_a0_b()) {
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
		if (!f_1191_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1351_a0_i());
		L0->SetNPCDescription(f_134f_a0_i());
		L0->SetPhoto(f_1353_a0_s());
		L0->SetPhoto2(f_1355_a0_s());
		L0->SetPlayerName(f_1669_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11e8_a1_b(f_12a7_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_11d6_a1_v(a0);
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
			if (f_14c7_a1_b(tv1) && f_14f6_a1_b(tv1)) {
				f_13b7_a2_v(tv1, tv0);
				f_7e1_a1_v("Smile");
				tv0->SetMessage(521870);
				tv0->ClearReplies();
				tv0->AddReply(522575, 23755, 23754);
				tv0->AddReply(522581, 23755, 23760);
				tv0->AddReply(522586, 23047, 23767);
				break;
			}
			f_7e1_a1_v("Neutral");
			tv0->SetMessage(521873);
			tv0->ClearReplies();
			if (f_14f6_a1_b(tv1)) {
				tv0->AddReply(521874, 23049, 23046);
			}
			if (f_14df_a1_b(tv1)) {
				tv0->AddReply(521886, 23059, 23058);
			}
			if (f_14d3_a1_b(tv1) && f_1532_a1_b(tv1)) {
				tv0->AddReply(521883, 23744, 23055);
			}
			tv0->AddReply(521879, -1, 23051);
			break;
			return;
		}
		if (f_1357_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1272_a1_v(tv2);
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

	void f_7e1_a1_v(string a0)
	{
		if (!f_1357_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1282_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_12a0_a0_v();
			if (a1 == 23048) {
				f_13bd_a2_v(tv1, tv0);
				f_143d_a2_v(tv1, tv0);
			}
			if (a1 == 23050) {
				f_13bd_a2_v(tv1, tv0);
				f_143d_a2_v(tv1, tv0);
			}
			if (a1 == 23057) {
				f_13dc_a2_v(tv1, tv0);
			}
			if (a1 == 23752) {
				f_13dc_a2_v(tv1, tv0);
			}
			if (a0 == 23042) {
				if (f_14c7_a1_b(tv1) && f_14f6_a1_b(tv1)) {
					f_13b7_a2_v(tv1, tv0);
					f_7e1_a1_v("Smile");
					tv0->SetMessage(521870);
					tv0->ClearReplies();
					tv0->AddReply(522575, 23755, 23754);
					tv0->AddReply(522581, 23755, 23760);
					tv0->AddReply(522586, 23047, 23767);
					return;
				}
				f_7e1_a1_v("Neutral");
				tv0->SetMessage(521873);
				tv0->ClearReplies();
				if (f_14f6_a1_b(tv1)) {
					tv0->AddReply(521874, 23049, 23046);
				}
				if (f_14df_a1_b(tv1)) {
					tv0->AddReply(521886, 23059, 23058);
				}
				if (f_14d3_a1_b(tv1) && f_1532_a1_b(tv1)) {
					tv0->AddReply(521883, 23744, 23055);
				}
				tv0->AddReply(521879, -1, 23051);
				return;
			}
			if (a0 == 23744) {
				f_7e1_a1_v("Neutral");
				tv0->SetMessage(522565);
				tv0->ClearReplies();
				tv0->AddReply(522566, 23635, 23745);
				return;
			}
			if (a0 == 23635) {
				f_7e1_a1_v("Oracle");
				tv0->SetMessage(522462);
				tv0->ClearReplies();
				tv0->AddReply(522463, 23637, 23636);
				return;
			}
			if (a0 == 23637) {
				f_7e1_a1_v("Oracle");
				tv0->SetMessage(522464);
				tv0->ClearReplies();
				tv0->AddReply(522567, 23747, 23746);
				return;
			}
			if (a0 == 23747) {
				f_7e1_a1_v("Smile");
				tv0->SetMessage(522568);
				tv0->ClearReplies();
				tv0->AddReply(522465, 23639, 23638);
				tv0->AddReply(522569, 23749, 23748);
				return;
			}
			if (a0 == 23749) {
				f_7e1_a1_v("Smile");
				tv0->SetMessage(522570);
				tv0->ClearReplies();
				tv0->AddReply(522571, 23751, 23750);
				return;
			}
			if (a0 == 23751) {
				f_7e1_a1_v("Neutral");
				tv0->SetMessage(522572);
				tv0->ClearReplies();
				tv0->AddReply(522573, -1, 23752);
				return;
			}
			if (a0 == 23639) {
				f_7e1_a1_v("Neutral");
				tv0->SetMessage(522466);
				tv0->ClearReplies();
				tv0->AddReply(521885, -1, 23057);
				return;
			}
			if (a0 == 23059) {
				f_7e1_a1_v("Smile");
				tv0->SetMessage(521887);
				tv0->ClearReplies();
				tv0->AddReply(521888, -1, 23060);
				tv0->AddReply(522560, 23740, 23739);
				return;
			}
			if (a0 == 23740) {
				f_7e1_a1_v("Smile");
				tv0->SetMessage(522561);
				tv0->ClearReplies();
				tv0->AddReply(522562, 23742, 23741);
				return;
			}
			if (a0 == 23742) {
				f_7e1_a1_v("Smile");
				tv0->SetMessage(522563);
				tv0->ClearReplies();
				tv0->AddReply(522564, -1, 23743);
				return;
			}
			if (a0 == 23049) {
				f_7e1_a1_v("Neutral");
				tv0->SetMessage(521877);
				tv0->ClearReplies();
				tv0->AddReply(521878, -1, 23050);
				return;
			}
			if (a0 == 23755) {
				f_7e1_a1_v("Smile");
				tv0->SetMessage(522576);
				tv0->ClearReplies();
				tv0->AddReply(522577, 23757, 23756);
				return;
			}
			if (a0 == 23757) {
				f_7e1_a1_v("Smile");
				tv0->SetMessage(522578);
				tv0->ClearReplies();
				tv0->AddReply(521871, 23047, 23043);
				tv0->AddReply(522584, 23047, 23765);
				return;
			}
			if (a0 == 23047) {
				f_7e1_a1_v("Refusal");
				tv0->SetMessage(521875);
				tv0->ClearReplies();
				tv0->AddReply(522579, 23759, 23758);
				tv0->AddReply(521872, 23771, 23044);
				tv0->AddReply(522591, 23777, 23776);
				return;
			}
			if (a0 == 23777) {
				f_7e1_a1_v("Refusal");
				tv0->SetMessage(522592);
				tv0->ClearReplies();
				tv0->AddReply(522593, 23759, 23778);
				return;
			}
			if (a0 == 23771) {
				f_7e1_a1_v("Refusal");
				tv0->SetMessage(522587);
				tv0->ClearReplies();
				tv0->AddReply(522588, 23773, 23772);
				tv0->AddReply(522590, 23759, 23774);
				return;
			}
			if (a0 == 23773) {
				f_7e1_a1_v("Refusal");
				tv0->SetMessage(522589);
				tv0->ClearReplies();
				tv0->AddReply(532185, 23759, 33601);
				return;
			}
			if (a0 == 23759) {
				f_7e1_a1_v("Refusal");
				tv0->SetMessage(522580);
				tv0->ClearReplies();
				tv0->AddReply(522594, 23781, 23780);
				tv0->AddReply(522582, -1, 23763);
				return;
			}
			if (a0 == 23781) {
				f_7e1_a1_v("Refusal");
				tv0->SetMessage(522595);
				tv0->ClearReplies();
				tv0->AddReply(521876, -1, 23048);
				tv0->AddReply(522596, -1, 23782);
				return;
			}
			tv3 = true;
			if (f_1357_a0_b()) {
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
		if (!f_1191_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1351_a0_i());
		L0->SetNPCDescription(f_134f_a0_i());
		L0->SetPhoto(f_1353_a0_s());
		L0->SetPhoto2(f_1355_a0_s());
		L0->SetPlayerName(f_1669_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11e8_a1_b(f_12a7_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_11d6_a1_v(a0);
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
			if (f_1502_a1_b(tv1)) {
				f_13e5_a2_v(tv1, tv0);
				f_af2_a1_v("Neutral");
				tv0->SetMessage(521993);
				tv0->ClearReplies();
				tv0->AddReply(521994, 23168, 23164);
				if (f_1549_a1_b(tv1)) {
					tv0->AddReply(521996, 23168, 23166);
				}
				break;
			}
			if (f_1526_a1_b(tv1)) {
				f_af2_a1_v("Smile");
				tv0->SetMessage(522051);
				tv0->ClearReplies();
				tv0->AddReply(523621, 24861, 24860);
				tv0->AddReply(523612, 24851, 24849);
				tv0->AddReply(523613, 24851, 24850);
				break;
			}
			f_af2_a1_v("Neutral");
			tv0->SetMessage(521997);
			tv0->ClearReplies();
			if (f_150e_a1_b(tv1)) {
				tv0->AddReply(522000, 24859, 23170);
			}
			if (f_151a_a1_b(tv1)) {
				tv0->AddReply(522003, 23226, 23173);
			}
			tv0->AddReply(522004, -1, 23174);
			break;
			return;
		}
		if (f_1357_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1272_a1_v(tv2);
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

	void f_af2_a1_v(string a0)
	{
		if (!f_1357_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1282_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_12a0_a0_v();
			if (a1 == 23169) {
				f_13eb_a2_v(tv1, tv0);
				f_145e_a2_v(tv1, tv0);
				f_146f_a2_v(tv1, tv0);
			}
			if (a1 == 24875) {
				f_13eb_a2_v(tv1, tv0);
				f_145e_a2_v(tv1, tv0);
				f_146f_a2_v(tv1, tv0);
			}
			if (a1 == 23225) {
				f_13fc_a2_v(tv1, tv0);
			}
			if (a1 == 24857) {
				f_13fc_a2_v(tv1, tv0);
			}
			if (a1 == 24858) {
				f_13fc_a2_v(tv1, tv0);
			}
			if (a1 == 24882) {
				f_13eb_a2_v(tv1, tv0);
			}
			if (a1 == 24885) {
				f_13eb_a2_v(tv1, tv0);
			}
			if (a1 == 23227) {
				f_13fc_a2_v(tv1, tv0);
				f_1421_a2_v(tv1, tv0);
			}
			if (a1 == 24844) {
				f_13fc_a2_v(tv1, tv0);
				f_1421_a2_v(tv1, tv0);
			}
			if (a1 == 24846) {
				f_13fc_a2_v(tv1, tv0);
				f_1421_a2_v(tv1, tv0);
			}
			if (a0 == 23163) {
				if (f_1502_a1_b(tv1)) {
					f_13e5_a2_v(tv1, tv0);
					f_af2_a1_v("Neutral");
					tv0->SetMessage(521993);
					tv0->ClearReplies();
					tv0->AddReply(521994, 23168, 23164);
					if (f_1549_a1_b(tv1)) {
						tv0->AddReply(521996, 23168, 23166);
					}
					return;
				}
				if (f_1526_a1_b(tv1)) {
					f_af2_a1_v("Smile");
					tv0->SetMessage(522051);
					tv0->ClearReplies();
					tv0->AddReply(523621, 24861, 24860);
					tv0->AddReply(523612, 24851, 24849);
					tv0->AddReply(523613, 24851, 24850);
					return;
				}
				f_af2_a1_v("Neutral");
				tv0->SetMessage(521997);
				tv0->ClearReplies();
				if (f_150e_a1_b(tv1)) {
					tv0->AddReply(522000, 24859, 23170);
				}
				if (f_151a_a1_b(tv1)) {
					tv0->AddReply(522003, 23226, 23173);
				}
				tv0->AddReply(522004, -1, 23174);
				return;
			}
			if (a0 == 23226) {
				f_af2_a1_v("Smile");
				tv0->SetMessage(522053);
				tv0->ClearReplies();
				tv0->AddReply(522054, -1, 23227);
				tv0->AddReply(523600, 24837, 24835);
				tv0->AddReply(523603, 24839, 24838);
				return;
			}
			if (a0 == 24839) {
				f_af2_a1_v("Smile");
				tv0->SetMessage(523604);
				tv0->ClearReplies();
				tv0->AddReply(523605, 24837, 24840);
				tv0->AddReply(523606, 24842, 24841);
				return;
			}
			if (a0 == 24842) {
				f_af2_a1_v("Smile");
				tv0->SetMessage(523607);
				tv0->ClearReplies();
				tv0->AddReply(523610, -1, 24846);
				tv0->AddReply(523611, 24837, 24847);
				return;
			}
			if (a0 == 24837) {
				f_af2_a1_v("Smile");
				tv0->SetMessage(523602);
				tv0->ClearReplies();
				tv0->AddReply(523608, -1, 24844);
				tv0->AddReply(523609, -1, 24845);
				return;
			}
			if (a0 == 24859) {
				f_af2_a1_v("Oracle");
				tv0->SetMessage(523620);
				tv0->ClearReplies();
				tv0->AddReply(523637, 24881, 24880);
				return;
			}
			if (a0 == 24881) {
				f_af2_a1_v("Neutral");
				tv0->SetMessage(523638);
				tv0->ClearReplies();
				tv0->AddReply(523639, -1, 24882);
				tv0->AddReply(523640, 24884, 24883);
				return;
			}
			if (a0 == 24884) {
				f_af2_a1_v("Neutral");
				tv0->SetMessage(523641);
				tv0->ClearReplies();
				tv0->AddReply(523642, -1, 24885);
				return;
			}
			if (a0 == 24851) {
				f_af2_a1_v("Refusal");
				tv0->SetMessage(523614);
				tv0->ClearReplies();
				tv0->AddReply(523615, 24855, 24853);
				tv0->AddReply(523616, 24855, 24854);
				return;
			}
			if (a0 == 24855) {
				f_af2_a1_v("Refusal");
				tv0->SetMessage(523617);
				tv0->ClearReplies();
				tv0->AddReply(522052, -1, 23225);
				tv0->AddReply(523618, -1, 24857);
				tv0->AddReply(523619, -1, 24858);
				return;
			}
			if (a0 == 24861) {
				f_af2_a1_v("Smile");
				tv0->SetMessage(523622);
				tv0->ClearReplies();
				tv0->AddReply(523623, 24851, 24862);
				tv0->AddReply(523624, 24851, 24864);
				return;
			}
			if (a0 == 23168) {
				f_af2_a1_v("Oracle");
				tv0->SetMessage(521998);
				tv0->ClearReplies();
				tv0->AddReply(523625, 24867, 24866);
				tv0->AddReply(523627, 24869, 24868);
				return;
			}
			if (a0 == 24867) {
				f_af2_a1_v("Oracle");
				tv0->SetMessage(523626);
				tv0->ClearReplies();
				tv0->AddReply(523629, 24869, 24870);
				tv0->AddReply(523634, 24877, 24876);
				return;
			}
			if (a0 == 24877) {
				f_af2_a1_v("Neutral");
				tv0->SetMessage(523635);
				tv0->ClearReplies();
				tv0->AddReply(523636, 24869, 24878);
				return;
			}
			if (a0 == 24869) {
				f_af2_a1_v("Neutral");
				tv0->SetMessage(523628);
				tv0->ClearReplies();
				tv0->AddReply(521999, -1, 23169);
				tv0->AddReply(523631, 24874, 24873);
				return;
			}
			if (a0 == 24874) {
				f_af2_a1_v("Neutral");
				tv0->SetMessage(523632);
				tv0->ClearReplies();
				tv0->AddReply(523633, -1, 24875);
				tv0->AddReply(523630, -1, 24871);
				return;
			}
			tv3 = true;
			if (f_1357_a0_b()) {
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
		if (!f_1191_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1351_a0_i());
		L0->SetNPCDescription(f_134f_a0_i());
		L0->SetPhoto(f_1353_a0_s());
		L0->SetPhoto2(f_1355_a0_s());
		L0->SetPlayerName(f_1669_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11e8_a1_b(f_12a7_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_11d6_a1_v(a0);
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
			f_dd4_a1_v("Neutral");
			tv0->SetMessage(529926);
			tv0->ClearReplies();
			tv0->AddReply(529927, -1, 31310);
			tv0->AddReply(529928, -1, 31311);
			break;
			return;
		}
		if (f_1357_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1272_a1_v(tv2);
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

	void f_dd4_a1_v(string a0)
	{
		if (!f_1357_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1282_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_12a0_a0_v();
			if (a0 == 31309) {
				f_dd4_a1_v("Neutral");
				tv0->SetMessage(529926);
				tv0->ClearReplies();
				tv0->AddReply(529927, -1, 31310);
				tv0->AddReply(529928, -1, 31311);
				return;
			}
			tv3 = true;
			if (f_1357_a0_b()) {
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
		if (!f_1191_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1351_a0_i());
		L0->SetNPCDescription(f_134f_a0_i());
		L0->SetPhoto(f_1353_a0_s());
		L0->SetPhoto2(f_1355_a0_s());
		L0->SetPlayerName(f_1669_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11e8_a1_b(f_12a7_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_11d6_a1_v(a0);
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
			f_e9f_a1_v("Neutral");
			tv0->SetMessage(529934);
			tv0->ClearReplies();
			tv0->AddReply(529935, -1, 31318);
			tv0->AddReply(529936, -1, 31319);
			break;
			return;
		}
		if (f_1357_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1272_a1_v(tv2);
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

	void f_e9f_a1_v(string a0)
	{
		if (!f_1357_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1282_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_12a0_a0_v();
			if (a0 == 31317) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(529934);
				tv0->ClearReplies();
				tv0->AddReply(529935, -1, 31318);
				tv0->AddReply(529936, -1, 31319);
				return;
			}
			tv3 = true;
			if (f_1357_a0_b()) {
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
		if (!f_1191_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1351_a0_i());
		L0->SetNPCDescription(f_134f_a0_i());
		L0->SetPhoto(f_1353_a0_s());
		L0->SetPhoto2(f_1355_a0_s());
		L0->SetPlayerName(f_1669_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11e8_a1_b(f_12a7_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_11d6_a1_v(a0);
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
			f_f6a_a1_v("Neutral");
			tv0->SetMessage(529938);
			tv0->ClearReplies();
			tv0->AddReply(529939, -1, 31322);
			tv0->AddReply(529940, -1, 31323);
			break;
			return;
		}
		if (f_1357_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1272_a1_v(tv2);
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

	void f_f6a_a1_v(string a0)
	{
		if (!f_1357_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1282_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_12a0_a0_v();
			if (a0 == 31321) {
				f_f6a_a1_v("Neutral");
				tv0->SetMessage(529938);
				tv0->ClearReplies();
				tv0->AddReply(529939, -1, 31322);
				tv0->AddReply(529940, -1, 31323);
				return;
			}
			tv3 = true;
			if (f_1357_a0_b()) {
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
		if (!f_1191_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1351_a0_i());
		L0->SetNPCDescription(f_134f_a0_i());
		L0->SetPhoto(f_1353_a0_s());
		L0->SetPhoto2(f_1355_a0_s());
		L0->SetPlayerName(f_1669_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_11e8_a1_b(f_12a7_a0_o());
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_11d6_a1_v(a0);
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
			f_1035_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_1357_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1272_a1_v(tv2);
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

	void f_1035_a1_v(string a0)
	{
		if (!f_1357_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1282_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_12a0_a0_v();
			if (a0 == 42563) {
				f_1035_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_1357_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t18
{
	var Vector tv0;

	void init(void)
	{
		if (!f_118c_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_1125_a0_v();
		}
	}

	bool f_1083_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1183_a1_b(L0);
	}

	void f_1092_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1097_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1171_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_10ad_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_10b6_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_10b6_a0_v();
			if (f_118c_a0_b() && f_1097_a0_b()) {
				if (f_1083_a0_b()) {
					f_1222_a1_b(f_12a7_a0_o());
				}
			} else {
				f_1092_a0_v();
				f_10ad_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_116c_a0_v();
		f_10b6_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_10b6_a0_v();
		f_1272_a1_v("Neutral");
		f_10ad_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_10ad_a0_v();
		} else {
			f_1272_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_116c_a0_v();
			f_1183_a1_b(a0);
			enable OnUse;
			f_167a_a1_v(a0);
			f_1272_a1_v("Neutral");
			f_10b6_a0_v();
			f_10ad_a0_v();
		}
	}
}

void f_1125_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_118c_a0_b()) {
		return;
	}
	L0 = f_133e_a0_i();
	for (L1 = 0; L1 < 5 && f_118c_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1337_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_116a_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_116a_a0_b(void)
{
	return true;
}

void f_116c_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1171_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1179_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1183_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1179_a1_b(L0);
}

bool f_118c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1191_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_12ad_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1357_a0_b()) {
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

void f_11d6_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1357_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_11e8_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1222_a1_b(a0)) {
			if (!f_1247_a1_b(a0)) {
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
		if (!f_1247_a1_b(a0)) {
			if (!f_1222_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1222_a1_b(object a0)
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
	return f_1291_a1_b(L4);
}

bool f_1247_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1315_a0_i() + "m";
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
	return f_1291_a1_b(L4);
}

void f_1272_a1_v(string a0)
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

void f_1282_a2_v(string a0, bool a1)
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

bool f_1291_a1_b(string a0)
{
	if (f_1357_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_12a0_a0_v(void)
{
	if (f_1357_a0_b()) {
		@lshStopSpeech();
	}
}

object f_12a7_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_12ad_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_12b7_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_12bc_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		if (a1) {
			L0->Close();
		}
		L0->SetProperty("locked", a1);
	}
}

void f_12d1_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_12dd_a3_v(object a0, object a1, int a2)
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
		f_12d1_a2_v(L0, a2);
	}
}

void f_12f0_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_12dd_a3_v(a0, L0, a2);
}

bool f_12fd_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_1304_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1310_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1315_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_131e_a1_b(int a0)
{
	return f_1315_a0_i() == a0;
}

bool f_1324_a1_b(int a0)
{
	float L0;
	int L1;
	int L2;
	@GetGameTime(L0);
	L1 = 1 + (int)(L0 / 24);
	if (L1 != a0) {
		return false;
	}
	L2 = (int)L0 % 24;
	return L2 < 7;
}

string f_1337_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_133e_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1337_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_134f_a0_i(void)
{
	return 515553;
}

int f_1351_a0_i(void)
{
	return 502878;
}

string f_1353_a0_s(void)
{
	return "ui/NPC_Starshina.png";
}

string f_1355_a0_s(void)
{
	return "ui/NPC_Starshina_b.png";
}

bool f_1357_a0_b(void)
{
	return true;
}

void f_1359_a2_v(object a0, object a1)
{
	f_12bc_a2_v("icot_eva_door", true);
}

void f_1360_a2_v(object a0, object a1)
{
	@SetVariable("b7q01", 8);
	f_15af_a0_v();
}

void f_1369_a2_v(object a0, object a1)
{
	@Trace("avroks blood is given");
	f_12f0_a3_v(a0, "avroks_blood", 1);
}

void f_1374_a2_v(object a0, object a1)
{
	@SetVariable("b8q01", 5);
	f_15c9_a0_v();
}

void f_137d_a2_v(object a0, object a1)
{
	@SetVariable("b8q01", 7);
	@SetVariable("b8q01KnowSgustki", 1);
	f_15bc_a0_v();
}

void f_138a_a2_v(object a0, object a1)
{
	@SetVariable("b9q01", 1);
	f_15d6_a0_v();
	f_15f0_a0_v();
	a0->ApplyEffect("quest_b9_01_effect.bin");
	f_1304_a2_b("quest_b9_01", "remove_danko");
}

void f_139e_a2_v(object a0, object a1)
{
	f_15e3_a0_v();
	f_1304_a2_b("quest_b9_01", "completed");
	@Trigger(a0, "b9q01_stop");
}

void f_13ab_a2_v(object a0, object a1)
{
	@SetVariable("oob9Starshina1", 1);
}

void f_13b1_a2_v(object a0, object a1)
{
	@SetVariable("oob9Starshina2", 1);
}

void f_13b7_a2_v(object a0, object a1)
{
	@SetVariable("oob10Starshina1", 1);
}

void f_13bd_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b10q01", 2);
	L0 = f_1637_a0_o();
	L0->AddMark("b10q01StarshinaGotoKurgan", "pt_map_kurgan", 1, 531553, f_1310_a0_f());
	f_1588_a0_v();
	f_1304_a2_b("quest_b10_01", "usable_stone");
	a0->ApplyEffect("quest_b10_01_effect.bin");
}

void f_13dc_a2_v(object a0, object a1)
{
	@SetVariable("b10q01", 3);
	f_157b_a0_v();
}

void f_13e5_a2_v(object a0, object a1)
{
	@SetVariable("oob11Starshina1", 1);
}

void f_13eb_a2_v(object a0, object a1)
{
	@SetVariable("b11q01", 1);
	f_1595_a0_v();
	f_15a2_a0_v();
	f_1304_a2_b("quest_b11_01", "open_shaft");
}

void f_13fc_a2_v(object a0, object a1)
{
	f_1304_a2_b("quest_b11_01", "starshina_fight");
}

void f_1403_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1409_a2_v(object a0, object a1)
{
	if (f_12b7_a1_i("B_Mission3") == 0) {
		@SetVariable("B_Mission3", 1);
		f_1561_a0_v();
		f_1626_a1_b(562);
		f_1626_a1_b(563);
	}
}

void f_1421_a2_v(object a0, object a1)
{
	if (f_12b7_a1_i("B_Mission4") == 0) {
		@SetVariable("B_Mission4", 1);
		f_156e_a0_v();
		f_1626_a1_b(562);
		f_1626_a1_b(563);
		f_1626_a1_b(564);
	}
}

void f_143d_a2_v(object a0, object a1)
{
	f_1648_a3_v(f_1637_a0_o(), "pt_map_kurgan", 2);
	a1->ShowMap(f_1637_a0_o());
}

void f_144d_a2_v(object a0, object a1)
{
	if (f_12b7_a1_i("map_chertez_state") <= 3) {
		@SetVariable("map_chertez_state", 3);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_145e_a2_v(object a0, object a1)
{
	if (f_12b7_a1_i("map_chertez_state") <= 6) {
		@SetVariable("map_chertez_state", 6);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_146f_a2_v(object a0, object a1)
{
	f_1648_a3_v(f_1637_a0_o(), "pt_map_aglaja", -1);
	a1->ShowMap(f_1637_a0_o());
}

bool f_147f_a1_b(object a0)
{
	if (f_12b7_a1_i("b8q01") == 6) {
		return true;
	}
	return false;
}

bool f_148b_a1_b(object a0)
{
	if (f_12b7_a1_i("b8q01") == 4) {
		return true;
	}
	return false;
}

bool f_1497_a1_b(object a0)
{
	if (f_12b7_a1_i("b9q01") == 0) {
		return true;
	}
	return false;
}

bool f_14a3_a1_b(object a0)
{
	if (f_12b7_a1_i("oob9Starshina1") == 0) {
		return true;
	}
	return false;
}

bool f_14af_a1_b(object a0)
{
	if (f_12b7_a1_i("b9q01") == 3) {
		return true;
	}
	return false;
}

bool f_14bb_a1_b(object a0)
{
	if (f_12b7_a1_i("oob9Starshina2") == 0) {
		return true;
	}
	return false;
}

bool f_14c7_a1_b(object a0)
{
	if (f_12b7_a1_i("oob10Starshina1") == 0) {
		return true;
	}
	return false;
}

bool f_14d3_a1_b(object a0)
{
	if (f_12b7_a1_i("b10q01Butchers") == 3) {
		return true;
	}
	return false;
}

bool f_14df_a1_b(object a0)
{
	if (f_12b7_a1_i("b10q01Butchers") == 1 || f_12b7_a1_i("b10q01Butchers") == 2) {
		return true;
	}
	return false;
}

bool f_14f6_a1_b(object a0)
{
	if (f_12b7_a1_i("b10q01") == 1) {
		return true;
	}
	return false;
}

bool f_1502_a1_b(object a0)
{
	if (f_12b7_a1_i("oob11Starshina1") == 0) {
		return true;
	}
	return false;
}

bool f_150e_a1_b(object a0)
{
	if (f_12b7_a1_i("b11q01") == 0) {
		return true;
	}
	return false;
}

bool f_151a_a1_b(object a0)
{
	if (f_12b7_a1_i("b11q01KnowWhoKilled") == 1) {
		return true;
	}
	return false;
}

bool f_1526_a1_b(object a0)
{
	if (f_12b7_a1_i("b11q01") == 2) {
		return true;
	}
	return false;
}

bool f_1532_a1_b(object a0)
{
	if (f_12b7_a1_i("b10q01") == 2) {
		return true;
	}
	return false;
}

bool f_153e_a1_b(object a0)
{
	if (f_12fd_a2_b(a0, "b8q01_bone")) {
		return true;
	}
	return false;
}

bool f_1549_a1_b(object a0)
{
	if (f_12b7_a1_i("b10q03") == 1000) {
		return true;
	}
	return false;
}

bool f_1555_a1_b(object a0)
{
	if (f_12b7_a1_i("b7q01") == 7) {
		return true;
	}
	return false;
}

void f_1561_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 564, 0, 530578);
	f_160a_a2_b(L0, -1);
}

void f_156e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 565, 0, 530579);
	f_160a_a2_b(L0, -1);
}

void f_157b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 309, 1, 521960);
	f_160a_a2_b(L0, 305);
}

void f_1588_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 307, 1, 521958);
	f_160a_a2_b(L0, 305);
}

void f_1595_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 313, 1, 522055);
	f_160a_a2_b(L0, -1);
}

void f_15a2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 314, 1, 522056);
	f_160a_a2_b(L0, 313);
}

void f_15af_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 260, 1, 521032);
	f_160a_a2_b(L0, 253);
}

void f_15bc_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 291, 1, 521462);
	f_160a_a2_b(L0, 284);
}

void f_15c9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 289, 1, 521460);
	f_160a_a2_b(L0, 284);
}

void f_15d6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 297, 1, 521612);
	f_160a_a2_b(L0, -1);
}

void f_15e3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 304, 1, 521619);
	f_160a_a2_b(L0, 297);
}

void f_15f0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 298, 1, 521613);
	f_160a_a2_b(L0, 297);
}

object f_15fd_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_160a_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_15fd_a0_o();
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

bool f_1626_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_15fd_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

object f_1637_a0_o(void)
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

void f_1648_a3_v(object a0, string a1, float a2)
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

int f_1669_a0_i(void)
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

void f_167a_a1_v(object a0)
{
	if (f_1324_a1_b(9)) {
		t10{a0};
		return;
	}
	if (f_1324_a1_b(10)) {
		t12{a0};
		return;
	}
	if (f_1324_a1_b(11)) {
		t14{a0};
		return;
	}
	if (f_131e_a1_b(7)) {
		t0{a0};
		return;
	}
	if (f_131e_a1_b(8)) {
		t2{a0};
		return;
	}
	if (f_131e_a1_b(9)) {
		t4{a0};
		return;
	}
	if (f_131e_a1_b(10)) {
		t6{a0};
		return;
	}
	if (f_131e_a1_b(11)) {
		t8{a0};
		return;
	}
	t16{a0};
}

