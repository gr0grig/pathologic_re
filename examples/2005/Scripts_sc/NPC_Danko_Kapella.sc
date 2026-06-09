event OnLoad 5;
event evt_11 11;
event OnTimer 7;
event OnUnload 6;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_1395_a0_b());
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
		f_13ef_a1_b(f_149c_a0_o());
		if (!f_139a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1522_a0_i());
		L0->SetNPCDescription(f_1520_a0_i());
		L0->SetPhoto(f_1524_a0_s());
		L0->SetPhoto2(f_1526_a0_s());
		L0->SetPlayerName(f_1888_a0_i());
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
		f_13de_a1_v(a0);
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
			f_ab_a1_v("Neutral");
			tv0->SetMessage(534512);
			tv0->ClearReplies();
			if (f_1683_a1_b(tv1) && f_168f_a1_b(tv1)) {
				tv0->AddReply(534513, 41645, 36154);
			}
			tv0->AddReply(540246, 42229, 42228);
			tv0->AddReply(534518, -1, 36159);
			break;
			return;
		}
		if (f_1528_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1479_a1_v(tv2);
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

	void f_ab_a1_v(string a0)
	{
		if (!f_1528_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1480_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1495_a0_v();
			if (a1 == 36154) {
				f_157d_a2_v(tv1, tv0);
			}
			if (a1 == 36158) {
				f_1550_a2_v(tv1, tv0);
				f_1562_a2_v(tv1, tv0);
			}
			if (a0 == 36153) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(534512);
				tv0->ClearReplies();
				if (f_1683_a1_b(tv1) && f_168f_a1_b(tv1)) {
					tv0->AddReply(534513, 41645, 36154);
				}
				tv0->AddReply(540246, 42229, 42228);
				tv0->AddReply(534518, -1, 36159);
				return;
			}
			if (a0 == 42229) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(540247);
				tv0->ClearReplies();
				tv0->AddReply(540248, 42232, 42230);
				tv0->AddReply(540249, 42233, 42231);
				return;
			}
			if (a0 == 42233) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(540251);
				tv0->ClearReplies();
				tv0->AddReply(540252, 42236, 42234);
				return;
			}
			if (a0 == 42232) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(540250);
				tv0->ClearReplies();
				tv0->AddReply(540253, 42236, 42235);
				return;
			}
			if (a0 == 42236) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(540254);
				tv0->ClearReplies();
				tv0->AddReply(540255, -1, 42238);
				tv0->AddReply(540256, 42240, 42239);
				return;
			}
			if (a0 == 42240) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(540257);
				tv0->ClearReplies();
				tv0->AddReply(540258, -1, 42241);
				return;
			}
			if (a0 == 41645) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(539692);
				tv0->ClearReplies();
				tv0->AddReply(539693, 41648, 41646);
				tv0->AddReply(539694, 40360, 41647);
				return;
			}
			if (a0 == 41648) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(539695);
				tv0->ClearReplies();
				tv0->AddReply(539696, 40360, 41649);
				return;
			}
			if (a0 == 40360) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(538476);
				tv0->ClearReplies();
				tv0->AddReply(538477, 40362, 40361);
				tv0->AddReply(538481, 40366, 40365);
				return;
			}
			if (a0 == 40366) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(538482);
				tv0->ClearReplies();
				tv0->AddReply(539691, 40362, 41643);
				tv0->AddReply(539697, 41652, 41651);
				return;
			}
			if (a0 == 41652) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(539698);
				tv0->ClearReplies();
				tv0->AddReply(539699, 40362, 41653);
				tv0->AddReply(539701, 41658, 41657);
				return;
			}
			if (a0 == 41658) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(539702);
				tv0->ClearReplies();
				tv0->AddReply(539703, 40364, 41659);
				tv0->AddReply(539704, 41662, 41661);
				return;
			}
			if (a0 == 41662) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(539705);
				tv0->ClearReplies();
				tv0->AddReply(539706, 40364, 41663);
				tv0->AddReply(539707, -1, 41664);
				return;
			}
			if (a0 == 40362) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(538478);
				tv0->ClearReplies();
				tv0->AddReply(538479, 40364, 40363);
				tv0->AddReply(539700, 40364, 41655);
				return;
			}
			if (a0 == 40364) {
				f_ab_a1_v("Neutral");
				tv0->SetMessage(538480);
				tv0->ClearReplies();
				tv0->AddReply(534517, -1, 36158);
				return;
			}
			tv3 = true;
			if (f_1528_a0_b()) {
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
		f_13ef_a1_b(f_149c_a0_o());
		if (!f_139a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1522_a0_i());
		L0->SetNPCDescription(f_1520_a0_i());
		L0->SetPhoto(f_1524_a0_s());
		L0->SetPhoto2(f_1526_a0_s());
		L0->SetPlayerName(f_1888_a0_i());
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
		f_13de_a1_v(a0);
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
			f_2cc_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_1528_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1479_a1_v(tv2);
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

	void f_2cc_a1_v(string a0)
	{
		if (!f_1528_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1480_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1495_a0_v();
			if (a0 == 36960) {
				f_2cc_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_2cc_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_2cc_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_1528_a0_b()) {
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
		f_13ef_a1_b(f_149c_a0_o());
		if (!f_139a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1522_a0_i());
		L0->SetNPCDescription(f_1520_a0_i());
		L0->SetPhoto(f_1524_a0_s());
		L0->SetPhoto2(f_1526_a0_s());
		L0->SetPlayerName(f_1888_a0_i());
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
		f_13de_a1_v(a0);
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
			f_152a_a2_v(tv1, tv0);
			f_1530_a2_v(tv1, tv0);
			f_3d4_a1_v("Neutral");
			tv0->SetMessage(500473);
			tv0->ClearReplies();
			tv0->AddReply(500476, 547, 546);
			tv0->AddReply(500474, 545, 544);
			break;
			return;
		}
		if (f_1528_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1479_a1_v(tv2);
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

	void f_3d4_a1_v(string a0)
	{
		if (!f_1528_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1480_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1495_a0_v();
			if (a0 == 543) {
				f_152a_a2_v(tv1, tv0);
				f_1530_a2_v(tv1, tv0);
				f_3d4_a1_v("Neutral");
				tv0->SetMessage(500473);
				tv0->ClearReplies();
				tv0->AddReply(500476, 547, 546);
				tv0->AddReply(500474, 545, 544);
				return;
			}
			if (a0 == 545) {
				f_1624_a2_v(tv1, tv0);
				f_3d4_a1_v("Neutral");
				tv0->SetMessage(500475);
				tv0->ClearReplies();
				tv0->AddReply(500480, 547, 550);
				tv0->AddReply(500479, -1, 549);
				return;
			}
			if (a0 == 547) {
				f_163c_a2_v(tv1, tv0);
				f_3d4_a1_v("Neutral");
				tv0->SetMessage(500477);
				tv0->ClearReplies();
				tv0->AddReply(500481, 554, 552);
				tv0->AddReply(508439, 9263, 9262);
				return;
			}
			if (a0 == 9263) {
				f_3d4_a1_v("Neutral");
				tv0->SetMessage(508440);
				tv0->ClearReplies();
				tv0->AddReply(508442, -1, 9265);
				tv0->AddReply(508441, -1, 9264);
				return;
			}
			if (a0 == 554) {
				f_3d4_a1_v("Neutral");
				tv0->SetMessage(500483);
				tv0->ClearReplies();
				tv0->AddReply(500484, -1, 555);
				tv0->AddReply(500485, -1, 556);
				return;
			}
			tv3 = true;
			if (f_1528_a0_b()) {
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
		f_13ef_a1_b(f_149c_a0_o());
		if (!f_139a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1522_a0_i());
		L0->SetNPCDescription(f_1520_a0_i());
		L0->SetPhoto(f_1524_a0_s());
		L0->SetPhoto2(f_1526_a0_s());
		L0->SetPlayerName(f_1888_a0_i());
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
		f_13de_a1_v(a0);
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
			if (f_1752_a1_b(tv1) && f_17a6_a1_b(tv1)) {
				f_1652_a2_v(tv1, tv0);
				f_1658_a2_v(tv1, tv0);
				f_56d_a1_v("Neutral");
				tv0->SetMessage(503371);
				tv0->ClearReplies();
				tv0->AddReply(503375, 3621, 3619);
				tv0->AddReply(503376, 3621, 3620);
				break;
			}
			if (f_1746_a1_b(tv1) && !f_172e_a1_b(tv1) && !f_173a_a1_b(tv1)) {
				f_1652_a2_v(tv1, tv0);
				f_56d_a1_v("Neutral");
				tv0->SetMessage(512095);
				tv0->ClearReplies();
				tv0->AddReply(512096, 13323, 13322);
				tv0->AddReply(536136, -1, 37895);
				break;
			}
			f_56d_a1_v("Neutral");
			tv0->SetMessage(512523);
			tv0->ClearReplies();
			tv0->AddReply(512524, -1, 13694);
			tv0->AddReply(536137, -1, 37896);
			break;
			return;
		}
		if (f_1528_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1479_a1_v(tv2);
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

	void f_56d_a1_v(string a0)
	{
		if (!f_1528_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1480_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1495_a0_v();
			if (a1 == 13328) {
				f_1618_a2_v(tv1, tv0);
				f_1642_a2_v(tv1, tv0);
			}
			if (a1 == 13695) {
				f_1618_a2_v(tv1, tv0);
			}
			if (a0 == 3618) {
				if (f_1752_a1_b(tv1) && f_17a6_a1_b(tv1)) {
					f_1652_a2_v(tv1, tv0);
					f_1658_a2_v(tv1, tv0);
					f_56d_a1_v("Neutral");
					tv0->SetMessage(503371);
					tv0->ClearReplies();
					tv0->AddReply(503375, 3621, 3619);
					tv0->AddReply(503376, 3621, 3620);
					return;
				}
				if (f_1746_a1_b(tv1) && !f_172e_a1_b(tv1) && !f_173a_a1_b(tv1)) {
					f_1652_a2_v(tv1, tv0);
					f_56d_a1_v("Neutral");
					tv0->SetMessage(512095);
					tv0->ClearReplies();
					tv0->AddReply(512096, 13323, 13322);
					tv0->AddReply(536136, -1, 37895);
					return;
				}
				f_56d_a1_v("Neutral");
				tv0->SetMessage(512523);
				tv0->ClearReplies();
				tv0->AddReply(512524, -1, 13694);
				tv0->AddReply(536137, -1, 37896);
				return;
			}
			if (a0 == 13323) {
				f_56d_a1_v("Neutral");
				tv0->SetMessage(512097);
				tv0->ClearReplies();
				tv0->AddReply(512098, 13325, 13324);
				return;
			}
			if (a0 == 13325) {
				f_56d_a1_v("Neutral");
				tv0->SetMessage(512099);
				tv0->ClearReplies();
				tv0->AddReply(512100, 13327, 13326);
				return;
			}
			if (a0 == 13327) {
				f_161e_a2_v(tv1, tv0);
				f_56d_a1_v("Neutral");
				tv0->SetMessage(512101);
				tv0->ClearReplies();
				if (f_1722_a1_b(tv1)) {
					tv0->AddReply(512102, -1, 13328);
				}
				if (!f_1722_a1_b(tv1)) {
					tv0->AddReply(512525, -1, 13695);
				}
				return;
			}
			if (a0 == 3621) {
				f_56d_a1_v("Neutral");
				tv0->SetMessage(503377);
				tv0->ClearReplies();
				tv0->AddReply(503378, 3626, 3622);
				tv0->AddReply(503379, 3626, 3624);
				tv0->AddReply(503380, 3626, 3625);
				return;
			}
			if (a0 == 3626) {
				f_56d_a1_v("Neutral");
				tv0->SetMessage(503381);
				tv0->ClearReplies();
				tv0->AddReply(503382, 3631, 3627);
				tv0->AddReply(503383, -1, 3630);
				tv0->AddReply(503396, -1, 3643);
				return;
			}
			if (a0 == 3631) {
				f_56d_a1_v("Neutral");
				tv0->SetMessage(503384);
				tv0->ClearReplies();
				tv0->AddReply(503385, 3639, 3632);
				tv0->AddReply(503386, -1, 3633);
				tv0->AddReply(503387, -1, 3634);
				tv0->AddReply(503388, 3636, 3635);
				return;
			}
			if (a0 == 3636) {
				f_56d_a1_v("Neutral");
				tv0->SetMessage(503389);
				tv0->ClearReplies();
				tv0->AddReply(503390, -1, 3637);
				tv0->AddReply(503391, -1, 3638);
				return;
			}
			if (a0 == 3639) {
				f_56d_a1_v("Neutral");
				tv0->SetMessage(503392);
				tv0->ClearReplies();
				tv0->AddReply(503393, -1, 3640);
				tv0->AddReply(503394, -1, 3641);
				tv0->AddReply(503395, -1, 3642);
				return;
			}
			tv3 = true;
			if (f_1528_a0_b()) {
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
		f_13ef_a1_b(f_149c_a0_o());
		if (!f_139a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1522_a0_i());
		L0->SetNPCDescription(f_1520_a0_i());
		L0->SetPhoto(f_1524_a0_s());
		L0->SetPhoto2(f_1526_a0_s());
		L0->SetPlayerName(f_1888_a0_i());
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
		f_13de_a1_v(a0);
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
			f_7a3_a1_v("Neutral");
			tv0->SetMessage(506647);
			tv0->ClearReplies();
			if (f_169b_a1_b(tv1) && f_16b3_a1_b(tv1)) {
				tv0->AddReply(507373, 35431, 8134);
			}
			if (f_16a7_a1_b(tv1) && f_17b2_a1_b(tv1)) {
				tv0->AddReply(506640, 7312, 7311);
			}
			tv0->AddReply(507533, -1, 8315);
			break;
			return;
		}
		if (f_1528_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1479_a1_v(tv2);
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

	void f_7a3_a1_v(string a0)
	{
		if (!f_1528_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1480_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1495_a0_v();
			if (a1 == 7322) {
				f_1583_a2_v(tv1, tv0);
				f_158f_a2_v(tv1, tv0);
				f_15ab_a2_v(tv1, tv0);
			}
			if (a1 == 8137) {
				f_1583_a2_v(tv1, tv0);
				f_158f_a2_v(tv1, tv0);
				f_15ab_a2_v(tv1, tv0);
			}
			if (a1 == 7317) {
				f_1589_a2_v(tv1, tv0);
			}
			if (a1 == 7313) {
				f_1589_a2_v(tv1, tv0);
			}
			if (a0 == 7320) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(506647);
				tv0->ClearReplies();
				if (f_169b_a1_b(tv1) && f_16b3_a1_b(tv1)) {
					tv0->AddReply(507373, 35431, 8134);
				}
				if (f_16a7_a1_b(tv1) && f_17b2_a1_b(tv1)) {
					tv0->AddReply(506640, 7312, 7311);
				}
				tv0->AddReply(507533, -1, 8315);
				return;
			}
			if (a0 == 7312) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(506641);
				tv0->ClearReplies();
				tv0->AddReply(506643, 7316, 7315);
				tv0->AddReply(506642, -1, 7313);
				return;
			}
			if (a0 == 7316) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(506644);
				tv0->ClearReplies();
				tv0->AddReply(506645, -1, 7317);
				return;
			}
			if (a0 == 35431) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(533876);
				tv0->ClearReplies();
				tv0->AddReply(533877, 8135, 35432);
				tv0->AddReply(533878, 35434, 35433);
				return;
			}
			if (a0 == 35434) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(533879);
				tv0->ClearReplies();
				tv0->AddReply(533880, 35437, 35435);
				tv0->AddReply(533881, 35437, 35436);
				return;
			}
			if (a0 == 35437) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(533882);
				tv0->ClearReplies();
				tv0->AddReply(533883, 35444, 35439);
				tv0->AddReply(533884, 35441, 35440);
				return;
			}
			if (a0 == 35441) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(533885);
				tv0->ClearReplies();
				tv0->AddReply(533889, 35444, 35445);
				return;
			}
			if (a0 == 35444) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(533888);
				tv0->ClearReplies();
				tv0->AddReply(533887, 35447, 35443);
				tv0->AddReply(533886, -1, 35442);
				return;
			}
			if (a0 == 35447) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(533890);
				tv0->ClearReplies();
				tv0->AddReply(533891, -1, 35448);
				tv0->AddReply(533892, -1, 35449);
				return;
			}
			if (a0 == 8135) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(507374);
				tv0->ClearReplies();
				tv0->AddReply(506630, 7300, 7299);
				tv0->AddReply(533893, 7300, 35450);
				return;
			}
			if (a0 == 7300) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(506631);
				tv0->ClearReplies();
				tv0->AddReply(506636, 7306, 7305);
				tv0->AddReply(506632, 7302, 7301);
				return;
			}
			if (a0 == 7302) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(506633);
				tv0->ClearReplies();
				tv0->AddReply(506634, 7297, 7303);
				tv0->AddReply(506635, 7297, 7304);
				return;
			}
			if (a0 == 7297) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(506628);
				tv0->ClearReplies();
				tv0->AddReply(506648, -1, 7322);
				tv0->AddReply(507376, -1, 8137);
				return;
			}
			if (a0 == 7306) {
				f_7a3_a1_v("Neutral");
				tv0->SetMessage(506637);
				tv0->ClearReplies();
				tv0->AddReply(506638, 7302, 7307);
				return;
			}
			tv3 = true;
			if (f_1528_a0_b()) {
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
		f_13ef_a1_b(f_149c_a0_o());
		if (!f_139a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1522_a0_i());
		L0->SetNPCDescription(f_1520_a0_i());
		L0->SetPhoto(f_1524_a0_s());
		L0->SetPhoto2(f_1526_a0_s());
		L0->SetPlayerName(f_1888_a0_i());
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
		f_13de_a1_v(a0);
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
			if (f_16bf_a1_b(tv1) && f_16cb_a1_b(tv1)) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510844);
				tv0->ClearReplies();
				tv0->AddReply(510845, 11990, 11989);
				break;
			}
			f_a61_a1_v("Neutral");
			tv0->SetMessage(510841);
			tv0->ClearReplies();
			if (f_16bf_a1_b(tv1)) {
				tv0->AddReply(510873, 12022, 12021);
			}
			if (f_16d7_a1_b(tv1) && f_16e3_a1_b(tv1) && f_1713_a1_b(tv1)) {
				tv0->AddReply(510876, 12025, 12024);
			}
			if (f_16d7_a1_b(tv1) && f_171d_a1_b(tv1) && !f_1713_a1_b(tv1)) {
				tv0->AddReply(511160, 12344, 12343);
			}
			if (f_16ef_a1_b(tv1)) {
				tv0->AddReply(510842, 10885, 11986);
			}
			if (f_16fb_a1_b(tv1)) {
				tv0->AddReply(509894, 10899, 10898);
			}
			if (f_1707_a1_b(tv1) && f_165e_a1_b(tv1)) {
				tv0->AddReply(510843, 10909, 11987);
			}
			tv0->AddReply(511157, -1, 12342);
			break;
			return;
		}
		if (f_1528_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1479_a1_v(tv2);
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

	void f_a61_a1_v(string a0)
	{
		if (!f_1528_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1480_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1495_a0_v();
			if (a1 == 12018) {
				f_15d0_a2_v(tv1, tv0);
				f_15bb_a2_v(tv1, tv0);
			}
			if (a1 == 12019) {
				f_15d0_a2_v(tv1, tv0);
			}
			if (a1 == 12015) {
				f_15d0_a2_v(tv1, tv0);
				f_15bb_a2_v(tv1, tv0);
			}
			if (a1 == 12023) {
				f_15bb_a2_v(tv1, tv0);
			}
			if (a1 == 12024) {
				f_15d6_a2_v(tv1, tv0);
			}
			if (a1 == 12033) {
				f_15dc_a2_v(tv1, tv0);
			}
			if (a1 == 12029) {
				f_15dc_a2_v(tv1, tv0);
			}
			if (a1 == 12343) {
				f_160c_a2_v(tv1, tv0);
			}
			if (a1 == 12345) {
				f_160e_a2_v(tv1, tv0);
			}
			if (a1 == 11986) {
				f_15fa_a2_v(tv1, tv0);
			}
			if (a1 == 10898) {
				f_1600_a2_v(tv1, tv0);
			}
			if (a1 == 11987) {
				f_1606_a2_v(tv1, tv0);
			}
			if (a0 == 11988) {
				if (f_16bf_a1_b(tv1) && f_16cb_a1_b(tv1)) {
					f_a61_a1_v("Neutral");
					tv0->SetMessage(510844);
					tv0->ClearReplies();
					tv0->AddReply(510845, 11990, 11989);
					return;
				}
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510841);
				tv0->ClearReplies();
				if (f_16bf_a1_b(tv1)) {
					tv0->AddReply(510873, 12022, 12021);
				}
				if (f_16d7_a1_b(tv1) && f_16e3_a1_b(tv1) && f_1713_a1_b(tv1)) {
					tv0->AddReply(510876, 12025, 12024);
				}
				if (f_16d7_a1_b(tv1) && f_171d_a1_b(tv1) && !f_1713_a1_b(tv1)) {
					tv0->AddReply(511160, 12344, 12343);
				}
				if (f_16ef_a1_b(tv1)) {
					tv0->AddReply(510842, 10885, 11986);
				}
				if (f_16fb_a1_b(tv1)) {
					tv0->AddReply(509894, 10899, 10898);
				}
				if (f_1707_a1_b(tv1) && f_165e_a1_b(tv1)) {
					tv0->AddReply(510843, 10909, 11987);
				}
				tv0->AddReply(511157, -1, 12342);
				return;
			}
			if (a0 == 10909) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(509904);
				tv0->ClearReplies();
				tv0->AddReply(509905, 10911, 10910);
				tv0->AddReply(509912, 10911, 10917);
				tv0->AddReply(509913, 10911, 10919);
				return;
			}
			if (a0 == 10911) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(509906);
				tv0->ClearReplies();
				tv0->AddReply(509907, 10913, 10912);
				tv0->AddReply(509911, -1, 10916);
				return;
			}
			if (a0 == 10913) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(509908);
				tv0->ClearReplies();
				tv0->AddReply(509909, -1, 10914);
				tv0->AddReply(509910, -1, 10915);
				return;
			}
			if (a0 == 10899) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(509895);
				tv0->ClearReplies();
				tv0->AddReply(509896, 10901, 10900);
				tv0->AddReply(509901, 10906, 10905);
				return;
			}
			if (a0 == 10906) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(509902);
				tv0->ClearReplies();
				tv0->AddReply(509903, 10901, 10907);
				return;
			}
			if (a0 == 10901) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(509897);
				tv0->ClearReplies();
				tv0->AddReply(509898, 10903, 10902);
				return;
			}
			if (a0 == 10903) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(509899);
				tv0->ClearReplies();
				tv0->AddReply(509900, -1, 10904);
				return;
			}
			if (a0 == 10885) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(509882);
				tv0->ClearReplies();
				tv0->AddReply(509883, 10887, 10886);
				tv0->AddReply(509893, 10887, 10896);
				return;
			}
			if (a0 == 10887) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(509884);
				tv0->ClearReplies();
				tv0->AddReply(509886, 10890, 10889);
				tv0->AddReply(509885, -1, 10888);
				return;
			}
			if (a0 == 10890) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(509887);
				tv0->ClearReplies();
				tv0->AddReply(509888, 10892, 10891);
				tv0->AddReply(509892, -1, 10895);
				return;
			}
			if (a0 == 10892) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(509889);
				tv0->ClearReplies();
				tv0->AddReply(509890, -1, 10893);
				tv0->AddReply(509891, -1, 10894);
				return;
			}
			if (a0 == 12344) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(511161);
				tv0->ClearReplies();
				tv0->AddReply(511162, -1, 12345);
				return;
			}
			if (a0 == 12025) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510877);
				tv0->ClearReplies();
				tv0->AddReply(510878, 12030, 12026);
				tv0->AddReply(510879, 12028, 12027);
				return;
			}
			if (a0 == 12028) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510880);
				tv0->ClearReplies();
				tv0->AddReply(510881, -1, 12029);
				return;
			}
			if (a0 == 12030) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510882);
				tv0->ClearReplies();
				tv0->AddReply(510883, 12032, 12031);
				return;
			}
			if (a0 == 12032) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510884);
				tv0->ClearReplies();
				tv0->AddReply(510885, -1, 12033);
				return;
			}
			if (a0 == 12022) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510874);
				tv0->ClearReplies();
				tv0->AddReply(510875, -1, 12023);
				return;
			}
			if (a0 == 11990) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510846);
				tv0->ClearReplies();
				tv0->AddReply(510847, 11994, 11991);
				tv0->AddReply(510849, 11994, 11993);
				tv0->AddReply(510848, 12010, 11992);
				return;
			}
			if (a0 == 11994) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510850);
				tv0->ClearReplies();
				tv0->AddReply(510852, 12003, 11997);
				tv0->AddReply(510853, 11999, 11998);
				tv0->AddReply(510851, 12001, 11995);
				return;
			}
			if (a0 == 12001) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510856);
				tv0->ClearReplies();
				tv0->AddReply(510857, 12003, 12002);
				return;
			}
			if (a0 == 11999) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510854);
				tv0->ClearReplies();
				tv0->AddReply(510855, 12003, 12000);
				return;
			}
			if (a0 == 12003) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510858);
				tv0->ClearReplies();
				tv0->AddReply(510859, 12007, 12006);
				tv0->AddReply(534070, 35664, 35663);
				return;
			}
			if (a0 == 35664) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(534071);
				tv0->ClearReplies();
				tv0->AddReply(534072, 12010, 35665);
				return;
			}
			if (a0 == 12007) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510860);
				tv0->ClearReplies();
				tv0->AddReply(510861, 12010, 12008);
				tv0->AddReply(510862, 12014, 12009);
				return;
			}
			if (a0 == 12010) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510863);
				tv0->ClearReplies();
				tv0->AddReply(510864, 12012, 12011);
				tv0->AddReply(534073, 12012, 35667);
				return;
			}
			if (a0 == 12012) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510865);
				tv0->ClearReplies();
				tv0->AddReply(510866, 12014, 12013);
				return;
			}
			if (a0 == 12014) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510867);
				tv0->ClearReplies();
				tv0->AddReply(534074, 35670, 35669);
				return;
			}
			if (a0 == 35670) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(534075);
				tv0->ClearReplies();
				tv0->AddReply(510869, 12017, 12016);
				tv0->AddReply(510868, -1, 12015);
				return;
			}
			if (a0 == 12017) {
				f_a61_a1_v("Neutral");
				tv0->SetMessage(510870);
				tv0->ClearReplies();
				tv0->AddReply(510871, -1, 12018);
				tv0->AddReply(510872, -1, 12019);
				return;
			}
			tv3 = true;
			if (f_1528_a0_b()) {
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
		f_13ef_a1_b(f_149c_a0_o());
		if (!f_139a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1522_a0_i());
		L0->SetNPCDescription(f_1520_a0_i());
		L0->SetPhoto(f_1524_a0_s());
		L0->SetPhoto2(f_1526_a0_s());
		L0->SetPlayerName(f_1888_a0_i());
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
		f_13de_a1_v(a0);
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
			f_e8f_a1_v("Neutral");
			tv0->SetMessage(511245);
			tv0->ClearReplies();
			if (f_178e_a1_b(tv1) && f_179a_a1_b(tv1)) {
				tv0->AddReply(511247, 12438, 12437);
			}
			tv0->AddReply(511246, -1, 12436);
			break;
			return;
		}
		if (f_1528_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1479_a1_v(tv2);
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
		if (!f_1528_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1480_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1495_a0_v();
			if (a1 == 12437) {
				f_1636_a2_v(tv1, tv0);
			}
			if (a0 == 12435) {
				f_e8f_a1_v("Neutral");
				tv0->SetMessage(511245);
				tv0->ClearReplies();
				if (f_178e_a1_b(tv1) && f_179a_a1_b(tv1)) {
					tv0->AddReply(511247, 12438, 12437);
				}
				tv0->AddReply(511246, -1, 12436);
				return;
			}
			if (a0 == 12438) {
				f_e8f_a1_v("Neutral");
				tv0->SetMessage(511248);
				tv0->ClearReplies();
				tv0->AddReply(511249, 12440, 12439);
				return;
			}
			if (a0 == 12440) {
				f_e8f_a1_v("Neutral");
				tv0->SetMessage(511250);
				tv0->ClearReplies();
				tv0->AddReply(511251, 12442, 12441);
				return;
			}
			if (a0 == 12442) {
				f_e8f_a1_v("Neutral");
				tv0->SetMessage(511252);
				tv0->ClearReplies();
				tv0->AddReply(511253, -1, 12443);
				return;
			}
			tv3 = true;
			if (f_1528_a0_b()) {
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
		f_13ef_a1_b(f_149c_a0_o());
		if (!f_139a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1522_a0_i());
		L0->SetNPCDescription(f_1520_a0_i());
		L0->SetPhoto(f_1524_a0_s());
		L0->SetPhoto2(f_1526_a0_s());
		L0->SetPlayerName(f_1888_a0_i());
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
		f_13de_a1_v(a0);
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
			f_fcc_a1_v("Neutral");
			tv0->SetMessage(513462);
			tv0->ClearReplies();
			if (f_176a_a1_b(tv1) && f_175e_a1_b(tv1)) {
				tv0->AddReply(533315, 37609, 34823);
			}
			if (f_1776_a1_b(tv1) && f_1782_a1_b(tv1)) {
				tv0->AddReply(513463, 14713, 14700);
			}
			tv0->AddReply(513483, -1, 14721);
			tv0->AddReply(535898, -1, 37608);
			break;
			return;
		}
		if (f_1528_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1479_a1_v(tv2);
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

	void f_fcc_a1_v(string a0)
	{
		if (!f_1528_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1480_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1495_a0_v();
			if (a1 == 34823) {
				f_162a_a2_v(tv1, tv0);
			}
			if (a1 == 34827) {
				f_153c_a2_v(tv1, tv0);
				f_1545_a2_v(tv1, tv0);
				f_1536_a2_v(tv1, tv0);
			}
			if (a1 == 14700) {
				f_1630_a2_v(tv1, tv0);
			}
			if (a0 == 14699) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(513462);
				tv0->ClearReplies();
				if (f_176a_a1_b(tv1) && f_175e_a1_b(tv1)) {
					tv0->AddReply(533315, 37609, 34823);
				}
				if (f_1776_a1_b(tv1) && f_1782_a1_b(tv1)) {
					tv0->AddReply(513463, 14713, 14700);
				}
				tv0->AddReply(513483, -1, 14721);
				tv0->AddReply(535898, -1, 37608);
				return;
			}
			if (a0 == 14713) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(513476);
				tv0->ClearReplies();
				tv0->AddReply(513477, 14715, 14714);
				tv0->AddReply(535926, 37644, 37643);
				return;
			}
			if (a0 == 37644) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(535927);
				tv0->ClearReplies();
				tv0->AddReply(535928, -1, 37645);
				tv0->AddReply(535929, 14715, 37646);
				return;
			}
			if (a0 == 14715) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(513478);
				tv0->ClearReplies();
				tv0->AddReply(513480, 14718, 14717);
				tv0->AddReply(513479, -1, 14716);
				return;
			}
			if (a0 == 14718) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(513481);
				tv0->ClearReplies();
				tv0->AddReply(513482, -1, 14719);
				return;
			}
			if (a0 == 37609) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(535899);
				tv0->ClearReplies();
				tv0->AddReply(535900, 37611, 37610);
				tv0->AddReply(535905, 37611, 37615);
				return;
			}
			if (a0 == 37611) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(535901);
				tv0->ClearReplies();
				tv0->AddReply(535902, 37613, 37612);
				tv0->AddReply(535908, 37620, 37619);
				return;
			}
			if (a0 == 37620) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(535909);
				tv0->ClearReplies();
				tv0->AddReply(535914, 37613, 37625);
				tv0->AddReply(535904, 37617, 37614);
				return;
			}
			if (a0 == 37613) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(535903);
				tv0->ClearReplies();
				tv0->AddReply(535910, 37622, 37621);
				return;
			}
			if (a0 == 37622) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(535911);
				tv0->ClearReplies();
				tv0->AddReply(535912, 37624, 37623);
				return;
			}
			if (a0 == 37624) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(535913);
				tv0->ClearReplies();
				tv0->AddReply(535915, 37617, 37627);
				tv0->AddReply(535916, 37617, 37629);
				return;
			}
			if (a0 == 37617) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(535906);
				tv0->ClearReplies();
				tv0->AddReply(535907, 37631, 37618);
				return;
			}
			if (a0 == 37631) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(535917);
				tv0->ClearReplies();
				tv0->AddReply(535918, 34824, 37632);
				tv0->AddReply(535919, 34824, 37633);
				return;
			}
			if (a0 == 34824) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(533316);
				tv0->ClearReplies();
				tv0->AddReply(533317, 34826, 34825);
				return;
			}
			if (a0 == 34826) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(533318);
				tv0->ClearReplies();
				tv0->AddReply(535920, 37636, 37635);
				tv0->AddReply(535922, 37636, 37637);
				return;
			}
			if (a0 == 37636) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(535921);
				tv0->ClearReplies();
				tv0->AddReply(535925, 37640, 37642);
				tv0->AddReply(535923, 37640, 37639);
				return;
			}
			if (a0 == 37640) {
				f_fcc_a1_v("Neutral");
				tv0->SetMessage(535924);
				tv0->ClearReplies();
				tv0->AddReply(533319, -1, 34827);
				return;
			}
			tv3 = true;
			if (f_1528_a0_b()) {
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
		f_13ef_a1_b(f_149c_a0_o());
		if (!f_139a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1522_a0_i());
		L0->SetNPCDescription(f_1520_a0_i());
		L0->SetPhoto(f_1524_a0_s());
		L0->SetPhoto2(f_1526_a0_s());
		L0->SetPlayerName(f_1888_a0_i());
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
		f_13de_a1_v(a0);
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
			f_1231_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_1528_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1479_a1_v(tv2);
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

	void f_1231_a1_v(string a0)
	{
		if (!f_1528_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1480_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1495_a0_v();
			if (a0 == 42557) {
				f_1231_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_1528_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t19
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_1278_a0_v();
	}

	void f_1278_a0_v(void)
	{
		if (!f_1395_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_132e_a0_v();
		}
	}

	bool f_128c_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_138c_a1_b(L0);
	}

	void f_129b_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_12a0_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_137a_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_12b6_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_12bf_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_12bf_a0_v();
			if (f_1395_a0_b() && f_12a0_a0_b()) {
				if (f_128c_a0_b()) {
					f_1429_a1_b(f_149c_a0_o());
				}
			} else {
				f_129b_a0_v();
				f_12b6_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1375_a0_v();
		f_12bf_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_12bf_a0_v();
		f_1479_a1_v("Neutral");
		f_12b6_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_12b6_a0_v();
		} else {
			f_1479_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1375_a0_v();
			f_138c_a1_b(a0);
			enable OnUse;
			f_1899_a1_v(a0);
			f_1479_a1_v("Neutral");
			f_12bf_a0_v();
			f_12b6_a0_v();
		}
	}
}

void f_132e_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1395_a0_b()) {
		return;
	}
	L0 = f_150f_a0_i();
	for (L1 = 0; L1 < 5 && f_1395_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1508_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1373_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1373_a0_b(void)
{
	return true;
}

void f_1375_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_137a_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1382_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_138c_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1382_a1_b(L0);
}

bool f_1395_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_139a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_14a2_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_1528_a0_b()) {
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

void f_13de_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_1528_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_13ef_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1429_a1_b(a0)) {
			if (!f_144e_a1_b(a0)) {
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
		if (!f_144e_a1_b(a0)) {
			if (!f_1429_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1429_a1_b(object a0)
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
	return f_1486_a1_b(L4);
}

bool f_144e_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_14f9_a0_i() + "m";
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
	return f_1486_a1_b(L4);
}

void f_1479_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1480_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_1486_a1_b(string a0)
{
	if (f_1528_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1495_a0_v(void)
{
	if (f_1528_a0_b()) {
		@lshStopSpeech();
	}
}

object f_149c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_14a2_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_14ac_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_14b1_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_14bc_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_14c8_a3_v(object a0, object a1, int a2)
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
		f_14bc_a2_v(L0, a2);
	}
}

void f_14db_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_14c8_a3_v(a0, L0, a2);
}

bool f_14e8_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_14f4_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_14f9_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1502_a1_b(int a0)
{
	return f_14f9_a0_i() == a0;
}

string f_1508_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_150f_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1508_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1520_a0_i(void)
{
	return 515538;
}

int f_1522_a0_i(void)
{
	return 502863;
}

string f_1524_a0_s(void)
{
	return "ui/NPC_Kapella.png";
}

string f_1526_a0_s(void)
{
	return "ui/NPC_Kapella_b.png";
}

bool f_1528_a0_b(void)
{
	return true;
}

void f_152a_a2_v(object a0, object a1)
{
	@SetVariable("KnowKaterina", 1);
}

void f_1530_a2_v(object a0, object a1)
{
	@SetVariable("KnowKapella", 1);
}

void f_1536_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_153c_a2_v(object a0, object a1)
{
	@SetVariable("d8q02", 2);
	f_1820_a0_v();
}

void f_1545_a2_v(object a0, object a1)
{
	@Trace("feromicin2 is given");
	f_14db_a3_v(a0, "feromicin", 2);
}

void f_1550_a2_v(object a0, object a1)
{
	@SetVariable("d11q06KapellaRing", 1);
	f_17d2_a0_v();
	@Trace("d11q06KapellaBeads is given");
	f_14db_a3_v(a0, "d11q06KapellaBeads", 1);
}

void f_1562_a2_v(object a0, object a1)
{
	if (f_14ac_a1_i("d11q06KapellaRing") != 0 && f_14ac_a1_i("d11q06KlaraRing") != 0) {
		@SetVariable("d11q06", 2);
		f_17c5_a0_v();
	}
}

void f_157d_a2_v(object a0, object a1)
{
	@SetVariable("ood11Kapella1", 1);
}

void f_1583_a2_v(object a0, object a1)
{
	@SetVariable("ood2Kapella1", 1);
}

void f_1589_a2_v(object a0, object a1)
{
	@SetVariable("ood2Kapella2", 1);
}

void f_158f_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q01", 3);
	L0 = f_1856_a0_o();
	L0->AddMark("d2q01KapellaGotoSpi4ka", "pt_map_spi4ka", 1, 511389, f_14f4_a0_f());
	f_17df_a0_v();
	f_14e8_a2_b("quest_d2_01", "woman");
}

void f_15ab_a2_v(object a0, object a1)
{
	f_1867_a3_v(f_1856_a0_o(), "pt_map_spi4ka", 2);
	a1->ShowMap(f_1856_a0_o());
}

void f_15bb_a2_v(object a0, object a1)
{
	@SetVariable("d3q03", 1);
	f_17ec_a0_v();
	f_17f9_a0_v();
	f_14b1_a1_o("quest_d3_03");
	f_14e8_a2_b("quest_d3_03", "boy");
}

void f_15d0_a2_v(object a0, object a1)
{
	@SetVariable("ood3Kapella1", 1);
}

void f_15d6_a2_v(object a0, object a1)
{
	@SetVariable("ood3Kapella2", 1);
}

void f_15dc_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_1856_a0_o();
	L0->FindMark(L1, "d3q03KapellaBoyLocation");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q01OspinaGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	f_1806_a0_v();
	f_14e8_a2_b("quest_d3_03", "completed");
}

void f_15fa_a2_v(object a0, object a1)
{
	@SetVariable("ood3Kapella3", 1);
}

void f_1600_a2_v(object a0, object a1)
{
	@SetVariable("ood3Kapella4", 1);
}

void f_1606_a2_v(object a0, object a1)
{
	@SetVariable("ood3Kapella5", 1);
}

void f_160c_a2_v(object a0, object a1)
{
}

void f_160e_a2_v(object a0, object a1)
{
	f_1813_a0_v();
	f_14e8_a2_b("quest_d3_03", "fail");
}

void f_1618_a2_v(object a0, object a1)
{
	@SetVariable("ood6Kapella1", 1);
}

void f_161e_a2_v(object a0, object a1)
{
	@SetVariable("d6q02KnowAboutAttack", 1);
}

void f_1624_a2_v(object a0, object a1)
{
	@SetVariable("KnowViktoria", 1);
}

void f_162a_a2_v(object a0, object a1)
{
	@SetVariable("ood8Kapella1", 1);
}

void f_1630_a2_v(object a0, object a1)
{
	@SetVariable("ood8Kapella2", 1);
}

void f_1636_a2_v(object a0, object a1)
{
	@SetVariable("ood4Kapella1", 1);
}

void f_163c_a2_v(object a0, object a1)
{
	@SetVariable("KnowPredictions", 1);
}

void f_1642_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1856_a0_o();
	L0->AddMark("d6q02KapellaGotoMladVlad", "pt_map_mladvlad", 0, 515377, f_14f4_a0_f());
}

void f_1652_a2_v(object a0, object a1)
{
	@SetVariable("d6KapellaVisit", 1);
}

void f_1658_a2_v(object a0, object a1)
{
	@SetVariable("ood6Kapella3", 1);
}

bool f_165e_a1_b(object a0)
{
	if (!(f_14ac_a1_i("d3q01") == 0) && !(f_14ac_a1_i("d3q01") == 1000) && !(f_14ac_a1_i("d3q01") == -1)) {
		return true;
	}
	return false;
}

bool f_1683_a1_b(object a0)
{
	if (f_14ac_a1_i("d11q06") == 1) {
		return true;
	}
	return false;
}

bool f_168f_a1_b(object a0)
{
	if (f_14ac_a1_i("ood11Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_169b_a1_b(object a0)
{
	if (f_14ac_a1_i("ood2Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_16a7_a1_b(object a0)
{
	if (f_14ac_a1_i("ood2Kapella2") == 0) {
		return true;
	}
	return false;
}

bool f_16b3_a1_b(object a0)
{
	if (f_14ac_a1_i("d2q01") == 2) {
		return true;
	}
	return false;
}

bool f_16bf_a1_b(object a0)
{
	if (f_14ac_a1_i("d3q03") == 0) {
		return true;
	}
	return false;
}

bool f_16cb_a1_b(object a0)
{
	if (f_14ac_a1_i("ood3Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_16d7_a1_b(object a0)
{
	if (f_14ac_a1_i("d3q03") == 2) {
		return true;
	}
	return false;
}

bool f_16e3_a1_b(object a0)
{
	if (f_14ac_a1_i("ood3Kapella2") == 0) {
		return true;
	}
	return false;
}

bool f_16ef_a1_b(object a0)
{
	if (f_14ac_a1_i("ood3Kapella3") == 0) {
		return true;
	}
	return false;
}

bool f_16fb_a1_b(object a0)
{
	if (f_14ac_a1_i("ood3Kapella4") == 0) {
		return true;
	}
	return false;
}

bool f_1707_a1_b(object a0)
{
	if (f_14ac_a1_i("ood3Kapella5") == 0) {
		return true;
	}
	return false;
}

bool f_1713_a1_b(object a0)
{
	if (f_17be_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_171d_a1_b(object a0)
{
	return true;
	return false;
}

bool f_1722_a1_b(object a0)
{
	if (f_14ac_a1_i("d6q02") == 0) {
		return true;
	}
	return false;
}

bool f_172e_a1_b(object a0)
{
	if (f_14ac_a1_i("d6q02") == 1000) {
		return true;
	}
	return false;
}

bool f_173a_a1_b(object a0)
{
	if (f_14ac_a1_i("d6q02") == -1) {
		return true;
	}
	return false;
}

bool f_1746_a1_b(object a0)
{
	if (f_14ac_a1_i("ood6Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1752_a1_b(object a0)
{
	if (f_14ac_a1_i("d6q01") == 0) {
		return true;
	}
	return false;
}

bool f_175e_a1_b(object a0)
{
	if (f_14ac_a1_i("ood8Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_176a_a1_b(object a0)
{
	if (f_14ac_a1_i("d8q02") == 1) {
		return true;
	}
	return false;
}

bool f_1776_a1_b(object a0)
{
	if (f_14ac_a1_i("d8q02") == 1000) {
		return true;
	}
	return false;
}

bool f_1782_a1_b(object a0)
{
	if (f_14ac_a1_i("ood8Kapella2") == 0) {
		return true;
	}
	return false;
}

bool f_178e_a1_b(object a0)
{
	if (f_14ac_a1_i("ood4Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_179a_a1_b(object a0)
{
	if (f_14ac_a1_i("d4q02") == 0) {
		return true;
	}
	return false;
}

bool f_17a6_a1_b(object a0)
{
	if (f_14ac_a1_i("ood6Kapella3") == 0) {
		return true;
	}
	return false;
}

bool f_17b2_a1_b(object a0)
{
	if (f_14ac_a1_i("d2KnowBigVladIsBad") == 1) {
		return true;
	}
	return false;
}

bool f_17be_a1_b(object a0)
{
	float L0;
	a0->GetProperty("disease", L0);
	return L0 == 0;
}

void f_17c5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 690, 2, 534538);
	f_183a_a2_b(L0, 686);
}

void f_17d2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 688, 2, 534536);
	f_183a_a2_b(L0, 686);
}

void f_17df_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 52, 1, 512134);
	f_183a_a2_b(L0, 10);
}

void f_17ec_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 27, 2, 503367);
	f_183a_a2_b(L0, -1);
}

void f_17f9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 83, 2, 512165);
	f_183a_a2_b(L0, 27);
}

void f_1806_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 85, 2, 512167);
	f_183a_a2_b(L0, 27);
}

void f_1813_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 86, 2, 512168);
	f_183a_a2_b(L0, 27);
}

void f_1820_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 647, 2, 533320);
	f_183a_a2_b(L0, 127);
}

object f_182d_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_183a_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_182d_a0_o();
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

object f_1856_a0_o(void)
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

void f_1867_a3_v(object a0, string a1, float a2)
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

int f_1888_a0_i(void)
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

void f_1899_a1_v(object a0)
{
	if (!g1) {
		t5{a0};
		g1 = true;
	}
	if (f_1502_a1_b(2)) {
		t9{a0};
		return;
	}
	if (f_1502_a1_b(3)) {
		t11{a0};
		return;
	}
	if (f_1502_a1_b(4)) {
		t13{a0};
		return;
	}
	if (f_1502_a1_b(6)) {
		t7{a0};
		return;
	}
	if (f_1502_a1_b(8)) {
		t15{a0};
		return;
	}
	if (f_1502_a1_b(11)) {
		t1{a0};
		return;
	}
	if (f_1502_a1_b(12)) {
		t3{a0};
		return;
	}
	t17{a0};
}

