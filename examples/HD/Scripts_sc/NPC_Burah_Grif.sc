event evt_11 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;
var bool g2;
var int g3;

task t0
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			f_15c2_a1_v("Neutral");
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			if (f_18ee_a1_b(tv1)) {
				f_17e0_a2_v(tv1, tv0);
				f_15a_a1_v("Neutral");
				tv0->SetMessage(517945);
				tv0->ClearReplies();
				tv0->AddReply(527026, 28316, 28315);
				tv0->AddReply(527044, 28316, 28334);
				break;
			}
			f_15a_a1_v("Neutral");
			tv0->SetMessage(517955);
			tv0->ClearReplies();
			if (f_189a_a1_b(tv1)) {
				tv0->AddReply(527047, 28341, 28340);
			}
			if (f_18d6_a1_b(tv1) && !f_18be_a1_b(tv1) && !f_18ca_a1_b(tv1)) {
				tv0->AddReply(517957, 19090, 19089);
			}
			if (f_18e2_a1_b(tv1) && f_18ca_a1_b(tv1) && !f_18be_a1_b(tv1)) {
				tv0->AddReply(517960, 28332, 19092);
			}
			if (f_18e2_a1_b(tv1) && f_18be_a1_b(tv1) && f_18a6_a1_b(tv1)) {
				tv0->AddReply(517982, 19116, 19115);
			}
			if (f_18b2_a1_b(tv1) && f_18fa_a1_b(tv1)) {
				tv0->AddReply(517973, 28323, 19106);
			}
			if (f_195a_a1_b(tv1) && !f_1966_a1_b(tv1) && f_188e_a1_b(tv1)) {
				tv0->AddReply(518139, 21635, 19253);
			}
			if (f_197e_a1_b(tv1)) {
				tv0->AddReply(520672, 28325, 21879);
			}
			tv0->AddReply(520471, -1, 21674);
			tv0->AddReply(517956, -1, 19088);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_15a_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a1 == 19085) {
				f_17a4_a2_v(tv1, tv0);
				f_17ec_a2_v(tv1, tv0);
			}
			if (a1 == 19220) {
				f_17fc_a2_v(tv1, tv0);
				f_1786_a2_v(tv1, tv0);
				f_1807_a2_v(tv1, tv0);
			}
			if (a1 == 21631) {
				f_1807_a2_v(tv1, tv0);
			}
			if (a1 == 19227) {
				f_1798_a2_v(tv1, tv0);
				f_1807_a2_v(tv1, tv0);
			}
			if (a1 == 28346) {
				f_1770_a2_v(tv1, tv0);
				f_1776_a2_v(tv1, tv0);
				f_1701_a2_v(tv1, tv0);
			}
			if (a1 == 19091) {
				f_17a4_a2_v(tv1, tv0);
				f_17ec_a2_v(tv1, tv0);
			}
			if (a1 == 19094) {
				f_1798_a2_v(tv1, tv0);
				f_17d7_a2_v(tv1, tv0);
				f_1807_a2_v(tv1, tv0);
			}
			if (a1 == 19115) {
				f_178c_a2_v(tv1, tv0);
			}
			if (a1 == 19117) {
				f_17ce_a2_v(tv1, tv0);
				f_17fc_a2_v(tv1, tv0);
				f_1786_a2_v(tv1, tv0);
				f_1807_a2_v(tv1, tv0);
			}
			if (a1 == 21634) {
				f_1769_a2_v(tv1, tv0);
				f_17ce_a2_v(tv1, tv0);
				f_1807_a2_v(tv1, tv0);
			}
			if (a1 == 19106) {
				f_17e6_a2_v(tv1, tv0);
			}
			if (a1 == 19110) {
				f_1792_a2_v(tv1, tv0);
				f_1819_a2_v(tv1, tv0);
			}
			if (a1 == 19253) {
				f_1711_a2_v(tv1, tv0);
			}
			if (a1 == 21646) {
				f_1717_a2_v(tv1, tv0);
				f_172b_a2_v(tv1, tv0);
			}
			if (a1 == 21647) {
				f_1717_a2_v(tv1, tv0);
				f_172b_a2_v(tv1, tv0);
			}
			if (a1 == 21879) {
				f_1741_a2_v(tv1, tv0);
			}
			if (a1 == 21881) {
				f_1747_a2_v(tv1, tv0);
			}
			if (a1 == 28331) {
				f_1747_a2_v(tv1, tv0);
			}
			if (a1 == 21674) {
				f_179f_a2_v(tv1, tv0);
			}
			if (a0 == 19076) {
				if (f_18ee_a1_b(tv1)) {
					f_17e0_a2_v(tv1, tv0);
					f_15a_a1_v("Neutral");
					tv0->SetMessage(517945);
					tv0->ClearReplies();
					tv0->AddReply(527026, 28316, 28315);
					tv0->AddReply(527044, 28316, 28334);
					return;
				}
				f_15a_a1_v("Neutral");
				tv0->SetMessage(517955);
				tv0->ClearReplies();
				if (f_189a_a1_b(tv1)) {
					tv0->AddReply(527047, 28341, 28340);
				}
				if (f_18d6_a1_b(tv1) && !f_18be_a1_b(tv1) && !f_18ca_a1_b(tv1)) {
					tv0->AddReply(517957, 19090, 19089);
				}
				if (f_18e2_a1_b(tv1) && f_18ca_a1_b(tv1) && !f_18be_a1_b(tv1)) {
					tv0->AddReply(517960, 28332, 19092);
				}
				if (f_18e2_a1_b(tv1) && f_18be_a1_b(tv1) && f_18a6_a1_b(tv1)) {
					tv0->AddReply(517982, 19116, 19115);
				}
				if (f_18b2_a1_b(tv1) && f_18fa_a1_b(tv1)) {
					tv0->AddReply(517973, 28323, 19106);
				}
				if (f_195a_a1_b(tv1) && !f_1966_a1_b(tv1) && f_188e_a1_b(tv1)) {
					tv0->AddReply(518139, 21635, 19253);
				}
				if (f_197e_a1_b(tv1)) {
					tv0->AddReply(520672, 28325, 21879);
				}
				tv0->AddReply(520471, -1, 21674);
				tv0->AddReply(517956, -1, 19088);
				return;
			}
			if (a0 == 28325) {
				f_15a_a1_v("Sly");
				tv0->SetMessage(527036);
				tv0->ClearReplies();
				tv0->AddReply(527037, 21880, 28326);
				tv0->AddReply(527038, 21880, 28327);
				return;
			}
			if (a0 == 21880) {
				f_15a_a1_v("Sly");
				tv0->SetMessage(520673);
				tv0->ClearReplies();
				tv0->AddReply(527039, 28330, 28329);
				return;
			}
			if (a0 == 28330) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(527040);
				tv0->ClearReplies();
				tv0->AddReply(520674, -1, 21881);
				tv0->AddReply(527041, -1, 28331);
				return;
			}
			if (a0 == 21635) {
				f_15a_a1_v("Sly");
				tv0->SetMessage(520425);
				tv0->ClearReplies();
				tv0->AddReply(520426, 21637, 21636);
				return;
			}
			if (a0 == 21637) {
				f_15a_a1_v("Sly");
				tv0->SetMessage(520427);
				tv0->ClearReplies();
				tv0->AddReply(520428, 21639, 21638);
				tv0->AddReply(520432, 21643, 21642);
				return;
			}
			if (a0 == 21643) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(520433);
				tv0->ClearReplies();
				tv0->AddReply(520434, 21641, 21644);
				return;
			}
			if (a0 == 21639) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(520429);
				tv0->ClearReplies();
				tv0->AddReply(520430, 21641, 21640);
				return;
			}
			if (a0 == 21641) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(520431);
				tv0->ClearReplies();
				tv0->AddReply(520435, -1, 21646);
				tv0->AddReply(520436, -1, 21647);
				return;
			}
			if (a0 == 28323) {
				f_15a_a1_v("Fear");
				tv0->SetMessage(527034);
				tv0->ClearReplies();
				tv0->AddReply(527035, 19107, 28324);
				return;
			}
			if (a0 == 19107) {
				f_15a_a1_v("Fear");
				tv0->SetMessage(517974);
				tv0->ClearReplies();
				tv0->AddReply(517975, 19109, 19108);
				return;
			}
			if (a0 == 19109) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(517976);
				tv0->ClearReplies();
				tv0->AddReply(517977, -1, 19110);
				return;
			}
			if (a0 == 19116) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(517983);
				tv0->ClearReplies();
				tv0->AddReply(517984, -1, 19117);
				tv0->AddReply(520424, -1, 21634);
				return;
			}
			if (a0 == 28332) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(527042);
				tv0->ClearReplies();
				tv0->AddReply(527043, 19093, 28333);
				return;
			}
			if (a0 == 19093) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(517961);
				tv0->ClearReplies();
				tv0->AddReply(517962, -1, 19094);
				return;
			}
			if (a0 == 19090) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(517958);
				tv0->ClearReplies();
				tv0->AddReply(517959, -1, 19091);
				return;
			}
			if (a0 == 28341) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(527048);
				tv0->ClearReplies();
				tv0->AddReply(527049, 28344, 28342);
				tv0->AddReply(527050, 28344, 28343);
				return;
			}
			if (a0 == 28344) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(527051);
				tv0->ClearReplies();
				tv0->AddReply(527052, -1, 28346);
				return;
			}
			if (a0 == 28316) {
				f_15a_a1_v("Fear");
				tv0->SetMessage(527027);
				tv0->ClearReplies();
				tv0->AddReply(527028, 28318, 28317);
				return;
			}
			if (a0 == 28318) {
				f_15a_a1_v("Fear");
				tv0->SetMessage(527029);
				tv0->ClearReplies();
				tv0->AddReply(527030, 28320, 28319);
				return;
			}
			if (a0 == 28320) {
				f_15a_a1_v("Fear");
				tv0->SetMessage(527031);
				tv0->ClearReplies();
				tv0->AddReply(527032, 28322, 28321);
				return;
			}
			if (a0 == 28322) {
				f_15a_a1_v("Anger");
				tv0->SetMessage(527033);
				tv0->ClearReplies();
				if (!f_18be_a1_b(tv1) && !f_18ca_a1_b(tv1)) {
					tv0->AddReply(517947, 19081, 19078);
				}
				if (!f_18d6_a1_b(tv1) && !f_18ca_a1_b(tv1) && !f_18be_a1_b(tv1)) {
					tv0->AddReply(517946, 19079, 19077);
				}
				if (f_18be_a1_b(tv1)) {
					tv0->AddReply(518086, 19219, 19218);
				}
				if (f_18ca_a1_b(tv1) && !f_18be_a1_b(tv1)) {
					tv0->AddReply(518089, 19222, 19221);
				}
				return;
			}
			if (a0 == 19222) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(518090);
				tv0->ClearReplies();
				tv0->AddReply(520422, 21633, 21632);
				return;
			}
			if (a0 == 21633) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(520423);
				tv0->ClearReplies();
				tv0->AddReply(518095, -1, 19227);
				return;
			}
			if (a0 == 19219) {
				f_15a_a1_v("Anger");
				tv0->SetMessage(518087);
				tv0->ClearReplies();
				tv0->AddReply(518088, -1, 19220);
				tv0->AddReply(520421, -1, 21631);
				return;
			}
			if (a0 == 19079) {
				f_15a_a1_v("Anger");
				tv0->SetMessage(517948);
				tv0->ClearReplies();
				tv0->AddReply(517949, 19081, 19080);
				tv0->AddReply(520420, 19081, 21630);
				return;
			}
			if (a0 == 19081) {
				f_15a_a1_v("Sly");
				tv0->SetMessage(517950);
				tv0->ClearReplies();
				tv0->AddReply(517951, 19084, 19083);
				tv0->AddReply(517954, -1, 19086);
				return;
			}
			if (a0 == 19084) {
				f_15a_a1_v("Neutral");
				tv0->SetMessage(517952);
				tv0->ClearReplies();
				tv0->AddReply(517953, -1, 19085);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t4{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			f_635_a1_v("Neutral");
			tv0->SetMessage(518272);
			tv0->ClearReplies();
			if (f_1972_a1_b(tv1)) {
				tv0->AddReply(519463, 20635, 20634);
			}
			tv0->AddReply(520470, -1, 21673);
			tv0->AddReply(518273, -1, 19382);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_635_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a1 == 20634) {
				f_173b_a2_v(tv1, tv0);
			}
			if (a1 == 21673) {
				f_179f_a2_v(tv1, tv0);
			}
			if (a0 == 19381) {
				f_635_a1_v("Neutral");
				tv0->SetMessage(518272);
				tv0->ClearReplies();
				if (f_1972_a1_b(tv1)) {
					tv0->AddReply(519463, 20635, 20634);
				}
				tv0->AddReply(520470, -1, 21673);
				tv0->AddReply(518273, -1, 19382);
				return;
			}
			if (a0 == 20635) {
				f_635_a1_v("Neutral");
				tv0->SetMessage(519464);
				tv0->ClearReplies();
				tv0->AddReply(519465, 20637, 20636);
				tv0->AddReply(519479, 29100, 20651);
				return;
			}
			if (a0 == 20637) {
				f_635_a1_v("Fear");
				tv0->SetMessage(519466);
				tv0->ClearReplies();
				tv0->AddReply(519467, 20639, 20638);
				tv0->AddReply(519480, 29100, 20652);
				return;
			}
			if (a0 == 20639) {
				f_635_a1_v("Fear");
				tv0->SetMessage(519468);
				tv0->ClearReplies();
				tv0->AddReply(519469, 20641, 20640);
				tv0->AddReply(519481, 29100, 20653);
				return;
			}
			if (a0 == 29100) {
				f_635_a1_v("Neutral");
				tv0->SetMessage(527746);
				tv0->ClearReplies();
				tv0->AddReply(527747, 20641, 29103);
				return;
			}
			if (a0 == 20641) {
				f_635_a1_v("Sly");
				tv0->SetMessage(519470);
				tv0->ClearReplies();
				tv0->AddReply(519471, 20643, 20642);
				tv0->AddReply(519474, 20646, 20645);
				return;
			}
			if (a0 == 20646) {
				f_635_a1_v("Sly");
				tv0->SetMessage(519475);
				tv0->ClearReplies();
				tv0->AddReply(519476, 20648, 20647);
				return;
			}
			if (a0 == 20643) {
				f_635_a1_v("Sly");
				tv0->SetMessage(519472);
				tv0->ClearReplies();
				tv0->AddReply(519473, 20648, 20644);
				return;
			}
			if (a0 == 20648) {
				f_635_a1_v("Neutral");
				tv0->SetMessage(519477);
				tv0->ClearReplies();
				tv0->AddReply(519478, -1, 20650);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t6{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			f_81a_a1_v("Neutral");
			tv0->SetMessage(518386);
			tv0->ClearReplies();
			if (f_1906_a1_b(tv1) && f_192a_a1_b(tv1) && !f_191e_a1_b(tv1) && f_194e_a1_b(tv1)) {
				tv0->AddReply(518387, 20347, 19500);
			}
			if (f_1912_a1_b(tv1) && f_1936_a1_b(tv1) && !f_191e_a1_b(tv1)) {
				tv0->AddReply(518391, 20339, 19504);
			}
			if (f_191e_a1_b(tv1) && f_1942_a1_b(tv1)) {
				tv0->AddReply(519664, 20829, 20828);
			}
			if (!f_191e_a1_b(tv1)) {
				tv0->AddReply(518394, -1, 19507);
			}
			tv0->AddReply(518388, -1, 19501);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_81a_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a1 == 19500) {
				f_16ef_a2_v(tv1, tv0);
			}
			if (a1 == 19503) {
				f_1829_a2_v(tv1, tv0);
			}
			if (a1 == 20354) {
				f_1829_a2_v(tv1, tv0);
			}
			if (a1 == 19504) {
				f_16f5_a2_v(tv1, tv0);
			}
			if (a1 == 19506) {
				f_1840_a2_v(tv1, tv0);
				f_1857_a2_v(tv1, tv0);
			}
			if (a1 == 20346) {
				f_1840_a2_v(tv1, tv0);
				f_1857_a2_v(tv1, tv0);
			}
			if (a1 == 20828) {
				f_16fb_a2_v(tv1, tv0);
			}
			if (a1 == 19507) {
				f_179f_a2_v(tv1, tv0);
			}
			if (a0 == 19499) {
				f_81a_a1_v("Neutral");
				tv0->SetMessage(518386);
				tv0->ClearReplies();
				if (f_1906_a1_b(tv1) && f_192a_a1_b(tv1) && !f_191e_a1_b(tv1) && f_194e_a1_b(tv1)) {
					tv0->AddReply(518387, 20347, 19500);
				}
				if (f_1912_a1_b(tv1) && f_1936_a1_b(tv1) && !f_191e_a1_b(tv1)) {
					tv0->AddReply(518391, 20339, 19504);
				}
				if (f_191e_a1_b(tv1) && f_1942_a1_b(tv1)) {
					tv0->AddReply(519664, 20829, 20828);
				}
				if (!f_191e_a1_b(tv1)) {
					tv0->AddReply(518394, -1, 19507);
				}
				tv0->AddReply(518388, -1, 19501);
				return;
			}
			if (a0 == 20829) {
				f_81a_a1_v("Neutral");
				tv0->SetMessage(519665);
				tv0->ClearReplies();
				tv0->AddReply(519666, 20831, 20830);
				tv0->AddReply(519671, -1, 20835);
				return;
			}
			if (a0 == 20831) {
				f_81a_a1_v("Neutral");
				tv0->SetMessage(519667);
				tv0->ClearReplies();
				tv0->AddReply(519668, 20833, 20832);
				return;
			}
			if (a0 == 20833) {
				f_81a_a1_v("Neutral");
				tv0->SetMessage(519669);
				tv0->ClearReplies();
				tv0->AddReply(519670, -1, 20834);
				return;
			}
			if (a0 == 20339) {
				f_81a_a1_v("Neutral");
				tv0->SetMessage(519197);
				tv0->ClearReplies();
				tv0->AddReply(519198, 19505, 20340);
				tv0->AddReply(519199, 20342, 20341);
				return;
			}
			if (a0 == 20342) {
				f_81a_a1_v("Neutral");
				tv0->SetMessage(519200);
				tv0->ClearReplies();
				tv0->AddReply(519201, -1, 20343);
				return;
			}
			if (a0 == 19505) {
				f_81a_a1_v("Neutral");
				tv0->SetMessage(518392);
				tv0->ClearReplies();
				tv0->AddReply(518393, -1, 19506);
				tv0->AddReply(519202, 20345, 20344);
				return;
			}
			if (a0 == 20345) {
				f_81a_a1_v("Neutral");
				tv0->SetMessage(519203);
				tv0->ClearReplies();
				tv0->AddReply(519204, -1, 20346);
				return;
			}
			if (a0 == 20347) {
				f_81a_a1_v("Sly");
				tv0->SetMessage(519205);
				tv0->ClearReplies();
				tv0->AddReply(519206, 20349, 20348);
				return;
			}
			if (a0 == 20349) {
				f_81a_a1_v("Sly");
				tv0->SetMessage(519207);
				tv0->ClearReplies();
				tv0->AddReply(519208, 19502, 20350);
				tv0->AddReply(519209, -1, 20351);
				return;
			}
			if (a0 == 19502) {
				f_81a_a1_v("Sly");
				tv0->SetMessage(518389);
				tv0->ClearReplies();
				tv0->AddReply(518390, -1, 19503);
				tv0->AddReply(519210, 20353, 20352);
				return;
			}
			if (a0 == 20353) {
				f_81a_a1_v("Neutral");
				tv0->SetMessage(519211);
				tv0->ClearReplies();
				tv0->AddReply(519212, -1, 20354);
				tv0->AddReply(519213, -1, 20355);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t8{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			f_a6f_a1_v("Anger");
			tv0->SetMessage(520473);
			tv0->ClearReplies();
			tv0->AddReply(520474, -1, 21677);
			tv0->AddReply(520475, -1, 21678);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_a6f_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a1 == 21677) {
				f_179f_a2_v(tv1, tv0);
			}
			if (a0 == 21676) {
				f_a6f_a1_v("Anger");
				tv0->SetMessage(520473);
				tv0->ClearReplies();
				tv0->AddReply(520474, -1, 21677);
				tv0->AddReply(520475, -1, 21678);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t10{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			f_b42_a1_v("Smile");
			tv0->SetMessage(520477);
			tv0->ClearReplies();
			tv0->AddReply(520478, -1, 21681);
			tv0->AddReply(520479, -1, 21682);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_b42_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a1 == 21681) {
				f_179f_a2_v(tv1, tv0);
			}
			if (a0 == 21680) {
				f_b42_a1_v("Smile");
				tv0->SetMessage(520477);
				tv0->ClearReplies();
				tv0->AddReply(520478, -1, 21681);
				tv0->AddReply(520479, -1, 21682);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t12{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			f_c15_a1_v("Anger");
			tv0->SetMessage(520481);
			tv0->ClearReplies();
			tv0->AddReply(520482, -1, 21685);
			tv0->AddReply(520483, -1, 21686);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_c15_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a1 == 21685) {
				f_179f_a2_v(tv1, tv0);
			}
			if (a0 == 21684) {
				f_c15_a1_v("Anger");
				tv0->SetMessage(520481);
				tv0->ClearReplies();
				tv0->AddReply(520482, -1, 21685);
				tv0->AddReply(520483, -1, 21686);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t14{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			f_ce8_a1_v("Smile");
			tv0->SetMessage(520485);
			tv0->ClearReplies();
			tv0->AddReply(520486, -1, 21689);
			tv0->AddReply(520487, -1, 21690);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_ce8_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a1 == 21689) {
				f_179f_a2_v(tv1, tv0);
			}
			if (a0 == 21688) {
				f_ce8_a1_v("Smile");
				tv0->SetMessage(520485);
				tv0->ClearReplies();
				tv0->AddReply(520486, -1, 21689);
				tv0->AddReply(520487, -1, 21690);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t16{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			f_de1_a1_v("Neutral");
			tv0->SetMessage(520489);
			tv0->ClearReplies();
			tv0->AddReply(520490, -1, 21693);
			if (f_185e_a1_b(tv1) && f_186a_a1_b(tv1)) {
				tv0->AddReply(521395, 25305, 22573);
			}
			if (f_1882_a1_b(tv1) && f_1876_a1_b(tv1)) {
				tv0->AddReply(521482, 22648, 22647);
			}
			tv0->AddReply(520491, -1, 21694);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_de1_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a1 == 21693) {
				f_179f_a2_v(tv1, tv0);
			}
			if (a1 == 22573) {
				f_174d_a2_v(tv1, tv0);
			}
			if (a1 == 22575) {
				f_1753_a2_v(tv1, tv0);
				f_1792_a2_v(tv1, tv0);
			}
			if (a1 == 22647) {
				f_1763_a2_v(tv1, tv0);
			}
			if (a0 == 21692) {
				f_de1_a1_v("Neutral");
				tv0->SetMessage(520489);
				tv0->ClearReplies();
				tv0->AddReply(520490, -1, 21693);
				if (f_185e_a1_b(tv1) && f_186a_a1_b(tv1)) {
					tv0->AddReply(521395, 25305, 22573);
				}
				if (f_1882_a1_b(tv1) && f_1876_a1_b(tv1)) {
					tv0->AddReply(521482, 22648, 22647);
				}
				tv0->AddReply(520491, -1, 21694);
				return;
			}
			if (a0 == 22648) {
				f_de1_a1_v("Smile");
				tv0->SetMessage(521483);
				tv0->ClearReplies();
				tv0->AddReply(521484, 25315, 22649);
				return;
			}
			if (a0 == 25315) {
				f_de1_a1_v("Smile");
				tv0->SetMessage(524021);
				tv0->ClearReplies();
				tv0->AddReply(524022, 25317, 25316);
				return;
			}
			if (a0 == 25317) {
				f_de1_a1_v("Sly");
				tv0->SetMessage(524023);
				tv0->ClearReplies();
				tv0->AddReply(524024, -1, 25318);
				tv0->AddReply(524025, -1, 25319);
				return;
			}
			if (a0 == 25305) {
				f_de1_a1_v("Neutral");
				tv0->SetMessage(524012);
				tv0->ClearReplies();
				tv0->AddReply(524013, 25309, 25306);
				tv0->AddReply(524014, 25311, 25307);
				tv0->AddReply(524015, 25311, 25308);
				return;
			}
			if (a0 == 25311) {
				f_de1_a1_v("Neutral");
				tv0->SetMessage(524018);
				tv0->ClearReplies();
				tv0->AddReply(521397, -1, 22575);
				return;
			}
			if (a0 == 25309) {
				f_de1_a1_v("Neutral");
				tv0->SetMessage(524016);
				tv0->ClearReplies();
				tv0->AddReply(524017, -1, 25310);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t18{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			f_f72_a1_v("Sly");
			tv0->SetMessage(520493);
			tv0->ClearReplies();
			tv0->AddReply(520494, -1, 21697);
			tv0->AddReply(520495, -1, 21698);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_f72_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a1 == 21697) {
				f_179f_a2_v(tv1, tv0);
			}
			if (a0 == 21696) {
				f_f72_a1_v("Sly");
				tv0->SetMessage(520493);
				tv0->ClearReplies();
				tv0->AddReply(520494, -1, 21697);
				tv0->AddReply(520495, -1, 21698);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t20{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			f_1045_a1_v("Fear");
			tv0->SetMessage(520497);
			tv0->ClearReplies();
			tv0->AddReply(520498, -1, 21701);
			tv0->AddReply(520499, -1, 21702);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_1045_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a1 == 21701) {
				f_179f_a2_v(tv1, tv0);
			}
			if (a0 == 21700) {
				f_1045_a1_v("Fear");
				tv0->SetMessage(520497);
				tv0->ClearReplies();
				tv0->AddReply(520498, -1, 21701);
				tv0->AddReply(520499, -1, 21702);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t22{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			f_1118_a1_v("Sly");
			tv0->SetMessage(520501);
			tv0->ClearReplies();
			tv0->AddReply(520502, -1, 21705);
			tv0->AddReply(520503, -1, 21706);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_1118_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a1 == 21705) {
				f_179f_a2_v(tv1, tv0);
			}
			if (a0 == 21704) {
				f_1118_a1_v("Sly");
				tv0->SetMessage(520501);
				tv0->ClearReplies();
				tv0->AddReply(520502, -1, 21705);
				tv0->AddReply(520503, -1, 21706);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t24{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			f_11eb_a1_v("Neutral");
			tv0->SetMessage(520730);
			tv0->ClearReplies();
			tv0->AddReply(520731, 21943, 21942);
			tv0->AddReply(520738, 21943, 21949);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_11eb_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a0 == 21941) {
				f_11eb_a1_v("Neutral");
				tv0->SetMessage(520730);
				tv0->ClearReplies();
				tv0->AddReply(520731, 21943, 21942);
				tv0->AddReply(520738, 21943, 21949);
				return;
			}
			if (a0 == 21943) {
				f_11eb_a1_v("Neutral");
				tv0->SetMessage(520732);
				tv0->ClearReplies();
				tv0->AddReply(520733, 21945, 21944);
				tv0->AddReply(520737, 21945, 21948);
				return;
			}
			if (a0 == 21945) {
				f_11eb_a1_v("Neutral");
				tv0->SetMessage(520734);
				tv0->ClearReplies();
				tv0->AddReply(520735, -1, 21946);
				tv0->AddReply(520736, -1, 21947);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
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
		if (!f_14a4_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_16e7_a0_i());
		L0->SetNPCDescription(f_16e5_a0_i());
		L0->SetPhoto(f_16e9_a0_s());
		L0->SetPhoto2(f_16eb_a0_s());
		L0->SetPlayerName(f_1ae1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_14fb_a1_b(f_1613_a0_o());
		t26{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_14e9_a1_v(a0);
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
			f_12e9_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_16ed_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_15c2_a1_v(tv2);
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

	void f_12e9_a1_v(string a0)
	{
		if (!f_16ed_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_15d2_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_15f0_a0_v();
			if (a0 == 36971) {
				f_12e9_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_12e9_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_12e9_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_16ed_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t27
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		g3 = -1;
		f_1366_a0_v();
	}

	void f_1366_a0_v(void)
	{
		if (!f_149f_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_1416_a0_v();
		}
	}

	bool f_1374_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1496_a1_b(L0);
	}

	void f_1383_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1388_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1462_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_139e_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_13a7_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_13a7_a0_v();
			if (f_149f_a0_b() && f_1388_a0_b()) {
				if (f_1374_a0_b()) {
					f_1535_a1_b(f_1613_a0_o());
				}
			} else {
				f_1383_a0_v();
				f_139e_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_145d_a0_v();
		f_13a7_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_13a7_a0_v();
		f_15c2_a1_v("Neutral");
		f_139e_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_139e_a0_v();
		} else {
			f_15c2_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_145d_a0_v();
			f_1496_a1_b(a0);
			enable OnUse;
			f_1b0b_a1_v(a0);
			f_15c2_a1_v("Neutral");
			f_13a7_a0_v();
			f_139e_a0_v();
		}
	}
}

void f_1416_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_149f_a0_b()) {
		return;
	}
	L0 = f_16d4_a0_i();
	for (L1 = 0; L1 < 5 && f_149f_a0_b(); L1++) {
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
			@PlayAnimation("all", f_16cd_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_145b_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_145b_a0_b(void)
{
	return true;
}

void f_145d_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1462_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_146a_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_1476_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_146a_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_1623_a3_f(L0 + a2, a3, a4));
	return true;
}

bool f_148c_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1496_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_148c_a1_b(L0);
}

bool f_149f_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_14a4_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1619_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_16ed_a0_b()) {
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

void f_14e9_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_16ed_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_14fb_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1535_a1_b(a0)) {
			if (!f_155a_a1_b(a0)) {
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
		if (!f_155a_a1_b(a0)) {
			if (!f_1535_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1535_a1_b(object a0)
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
	return f_15e1_a1_b(L4);
}

bool f_155a_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_16be_a0_i() + "m";
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
	return f_15e1_a1_b(L4);
}

bool f_1585_a1_b(object a0)
{
	return f_158d_a2_b(a0, 70);
}

bool f_158d_a2_b(object a0, float a1)
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

void f_15bd_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
}

void f_15c2_a1_v(string a0)
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

void f_15d2_a2_v(string a0, bool a1)
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

bool f_15e1_a1_b(string a0)
{
	if (f_16ed_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_15f0_a0_v(void)
{
	if (f_16ed_a0_b()) {
		@lshStopSpeech();
	}
}

void f_15f7_a3_v(string a0, int a1, int a2)
{
	if (f_162e_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_1602_a5_v(string a0, int a1, int a2, int a3, int a4)
{
	if (f_162e_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a4 - a3 + 1);
		@AddItem(L1, a0, 0, L0 + a3);
	}
}

object f_1613_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1619_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_1623_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

bool f_162e_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

int f_1633_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1638_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_1643_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_1654_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1660_a3_v(object a0, object a1, int a2)
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
		f_1654_a2_v(L0, a2);
	}
}

void f_1673_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1660_a3_v(a0, L0, a2);
}

bool f_1680_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_16a3_a1_v(a1);
	f_1476_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_16a3_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_16ad_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_16b9_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_16be_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_16c7_a1_b(int a0)
{
	return f_16be_a0_i() == a0;
}

string f_16cd_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_16d4_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_16cd_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_16e5_a0_i(void)
{
	return 515535;
}

int f_16e7_a0_i(void)
{
	return 502860;
}

string f_16e9_a0_s(void)
{
	return "ui/NPC_Grif.png";
}

string f_16eb_a0_s(void)
{
	return "ui/NPC_Grif_b.png";
}

bool f_16ed_a0_b(void)
{
	return true;
}

void f_16ef_a2_v(object a0, object a1)
{
	@SetVariable("oob3Grif1", 1);
}

void f_16f5_a2_v(object a0, object a1)
{
	@SetVariable("oob3Grif2", 1);
}

void f_16fb_a2_v(object a0, object a1)
{
	@SetVariable("oob3Grif3", 1);
}

void f_1701_a2_v(object a0, object a1)
{
	f_1a12_a3_v(f_1a01_a0_o(), "pt_map_notkin", 2);
	a1->ShowMap(f_1a01_a0_o());
}

void f_1711_a2_v(object a0, object a1)
{
	@SetVariable("oob1Grif3", 1);
}

void f_1717_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b1q01GrifToldAboutDanko", 1);
	L0 = f_1a01_a0_o();
	L0->AddMark("b1q01GrifGotoDanko", "pt_map_eva", 1, 520048, f_16b9_a0_f());
}

void f_172b_a2_v(object a0, object a1)
{
	f_1a12_a3_v(f_1a01_a0_o(), "pt_map_eva", 2);
	a1->ShowMap(f_1a01_a0_o());
}

void f_173b_a2_v(object a0, object a1)
{
	@SetVariable("oob2Grif1", 1);
}

void f_1741_a2_v(object a0, object a1)
{
	@SetVariable("oob1Grif4", 1);
}

void f_1747_a2_v(object a0, object a1)
{
	f_1638_a1_o("quest_b1_04");
}

void f_174d_a2_v(object a0, object a1)
{
	@SetVariable("oob8Grif1", 1);
}

void f_1753_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1a01_a0_o();
	L0->AddMark("b8q01GrifGotoKlara", "pt_map_mishka", 3, 521464, f_16b9_a0_f());
}

void f_1763_a2_v(object a0, object a1)
{
	@SetVariable("oob8Grif2", 1);
}

void f_1769_a2_v(object a0, object a1)
{
	f_1680_a2_b(a0, 0.05000000074505806);
}

void f_1770_a2_v(object a0, object a1)
{
	@SetVariable("oob1Grif5", 1);
}

void f_1776_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1a01_a0_o();
	L0->AddMark("b1GrifGotoNotkin", "pt_map_notkin", 3, 530364, f_16b9_a0_f());
}

void f_1786_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_178c_a2_v(object a0, object a1)
{
	@SetVariable("oob1Grif6", 1);
}

void f_1792_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_1798_a2_v(object a0, object a1)
{
	f_1680_a2_b(a0, 0.10000000149011612);
}

void f_179f_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

void f_17a4_a2_v(object a0, object a1)
{
	object L0;
	int L1;
	@SetVariable("b1q03_2", 1);
	L0 = f_1a01_a0_o();
	L0->AddMark("b1q03GrifGotoDoberman", "pt_b1q03_doberman", 0, 518099, f_16b9_a0_f());
	f_19b1_a0_v();
	f_19a4_a0_v();
	@GetVariable("b1q03", L1);
	if (L1 != 0) {
		return;
	}
	f_1638_a1_o("quest_b1_03");
	f_16ad_a2_b("quest_b1_03", "place_doberman");
}

void f_17ce_a2_v(object a0, object a1)
{
	@SetVariable("b1q03_2", 1000);
	f_198a_a0_v();
}

void f_17d7_a2_v(object a0, object a1)
{
	@SetVariable("b1q03_2", -1);
	f_1997_a0_v();
}

void f_17e0_a2_v(object a0, object a1)
{
	@SetVariable("oob1Grif1", 1);
}

void f_17e6_a2_v(object a0, object a1)
{
	@SetVariable("oob1Grif2", 1);
}

void f_17ec_a2_v(object a0, object a1)
{
	f_1a12_a3_v(f_1a01_a0_o(), "pt_b1q03_doberman", 2);
	a1->ShowMap(f_1a01_a0_o());
}

void f_17fc_a2_v(object a0, object a1)
{
	@Trace("samopal ammo5 is given");
	f_1673_a3_v(a0, "samopal_ammo", 5);
}

void f_1807_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("b1q03", L0);
	if (L0 == 1000) {
		return;
	}
	f_16ad_a2_b("quest_b1_03", "cleanup");
	@SetVariable("b1q03", 1000);
}

void f_1819_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1a01_a0_o();
	L0->AddMark("b1q02GrifGotoLaska", "pt_map_laska", 3, 518143, f_16b9_a0_f());
}

void f_1829_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b3q02", 2);
	L0 = f_1a01_a0_o();
	L0->AddMark("b3q02GrifGotoDanko", "pt_map_eva", 0, 519653, f_16b9_a0_f());
	f_19be_a0_v();
}

void f_1840_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b3q02", 4);
	L0 = f_1a01_a0_o();
	L0->AddMark("b3q02GrifGotoNotkin", "pt_map_notkin", 0, 519662, f_16b9_a0_f());
	f_19cb_a0_v();
}

void f_1857_a2_v(object a0, object a1)
{
	f_1643_a2_v("warehouse_notkin@door1", false);
}

bool f_185e_a1_b(object a0)
{
	if (f_1633_a1_i("b8q01") == 2) {
		return true;
	}
	return false;
}

bool f_186a_a1_b(object a0)
{
	if (f_1633_a1_i("oob8Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_1876_a1_b(object a0)
{
	if (f_1633_a1_i("b8q02") == 1) {
		return true;
	}
	return false;
}

bool f_1882_a1_b(object a0)
{
	if (f_1633_a1_i("oob8Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_188e_a1_b(object a0)
{
	if (f_1633_a1_i("b1q01NotkinGotoGrif") != 0) {
		return true;
	}
	return false;
}

bool f_189a_a1_b(object a0)
{
	if (f_1633_a1_i("oob1Grif5") == 0) {
		return true;
	}
	return false;
}

bool f_18a6_a1_b(object a0)
{
	if (f_1633_a1_i("oob1Grif6") == 0) {
		return true;
	}
	return false;
}

bool f_18b2_a1_b(object a0)
{
	if (f_1633_a1_i("b1q02") == 0) {
		return true;
	}
	return false;
}

bool f_18be_a1_b(object a0)
{
	if (f_1633_a1_i("b1q03_dead") != 0) {
		return true;
	}
	return false;
}

bool f_18ca_a1_b(object a0)
{
	if (f_1633_a1_i("b1q03_retreat") != 0) {
		return true;
	}
	return false;
}

bool f_18d6_a1_b(object a0)
{
	if (f_1633_a1_i("b1q03_2") == 0) {
		return true;
	}
	return false;
}

bool f_18e2_a1_b(object a0)
{
	if (f_1633_a1_i("b1q03_2") == 1) {
		return true;
	}
	return false;
}

bool f_18ee_a1_b(object a0)
{
	if (f_1633_a1_i("oob1Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_18fa_a1_b(object a0)
{
	if (f_1633_a1_i("oob1Grif2") == 0) {
		return true;
	}
	return false;
}

bool f_1906_a1_b(object a0)
{
	if (f_1633_a1_i("b3q02") == 1) {
		return true;
	}
	return false;
}

bool f_1912_a1_b(object a0)
{
	if (f_1633_a1_i("b3q02") == 3) {
		return true;
	}
	return false;
}

bool f_191e_a1_b(object a0)
{
	if (f_1633_a1_i("b3q02Dead") != 0) {
		return true;
	}
	return false;
}

bool f_192a_a1_b(object a0)
{
	if (f_1633_a1_i("oob3Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_1936_a1_b(object a0)
{
	if (f_1633_a1_i("oob3Grif2") == 0) {
		return true;
	}
	return false;
}

bool f_1942_a1_b(object a0)
{
	if (f_1633_a1_i("oob3Grif3") == 0) {
		return true;
	}
	return false;
}

bool f_194e_a1_b(object a0)
{
	if (f_1633_a1_i("b3q02GrabitelTalk") == 1) {
		return true;
	}
	return false;
}

bool f_195a_a1_b(object a0)
{
	if (f_1633_a1_i("oob1Grif3") == 0) {
		return true;
	}
	return false;
}

bool f_1966_a1_b(object a0)
{
	if (f_1633_a1_i("b1q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1972_a1_b(object a0)
{
	if (f_1633_a1_i("oob2Grif1") == 0) {
		return true;
	}
	return false;
}

bool f_197e_a1_b(object a0)
{
	if (f_1633_a1_i("oob1Grif4") == 0) {
		return true;
	}
	return false;
}

void f_198a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 212, 2, 518107);
	f_19e5_a2_b(L0, 209);
}

void f_1997_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 211, 2, 518106);
	f_19e5_a2_b(L0, 209);
}

void f_19a4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 210, 2, 518105);
	f_19e5_a2_b(L0, 209);
}

void f_19b1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 209, 2, 518104);
	f_19e5_a2_b(L0, -1);
}

void f_19be_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 229, 2, 519657);
	f_19e5_a2_b(L0, 227);
}

void f_19cb_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 234, 2, 519663);
	f_19e5_a2_b(L0, 227);
}

object f_19d8_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_19e5_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_19d8_a0_o();
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

object f_1a01_a0_o(void)
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

void f_1a12_a3_v(object a0, string a1, float a2)
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

void f_1a33_a0_v(void)
{
	bool L0;
	int L1;
	int L2;
	int L3;
	@ClearSubContainer(0);
	L2 = f_16be_a0_i();
	@AddItem(L0, f_1adc_a1_i("Rifle"), 0, 1);
	@AddItem(L0, f_1adc_a1_i("Revolver"), 0, 1);
	@AddItem(L0, f_1adc_a1_i("Knife"), 0, 1);
	if (L2 != 10) {
		@AddItem(L0, f_1adc_a1_i("tvirin"), 0, 1);
	} else {
		@AddItem(L0, f_1adc_a1_i("tvirin"), 0, 4);
	}
	@AddItem(L0, f_1adc_a1_i("lockpick"), 0, 3);
	f_15f7_a3_v("Scalpel", 1, 2);
	f_1602_a5_v("revolver_ammo", 1, 1, 5, 10);
	f_1602_a5_v("rifle_ammo", 1, 1, 5, 20);
	@irand(L1, 100);
	if (L1 != 0) {
		@AddItem(L0, f_1adc_a1_i("kerosene"), 0, L1);
	}
	if (L2 >= 3) {
		@AddItem(L0, f_1adc_a1_i("halfboot_repel"), 0, 1);
		@AddItem(L0, f_1adc_a1_i("boot_repel"), 0, 1);
	}
	if (L2 >= 9) {
		@AddItem(L0, f_1adc_a1_i("boot_army"), 0, 1);
		@AddItem(L0, f_1adc_a1_i("balahon"), 0, 1);
		@AddItem(L0, f_1adc_a1_i("glove_army"), 0, 1);
	}
	L3 = f_1af2_a0_i();
	if (L3 == 0) {
		@AddItem(L0, f_1adc_a1_i("Gun_danko"), 0, 1);
	} else {
		if (L3 == 2) {
			@AddItem(L0, f_1adc_a1_i("Gun"), 0, 1);
		}
	}
}

int f_1adc_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

int f_1ae1_a0_i(void)
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

int f_1af2_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_1af8_a1_v(object a0)
{
	if (!f_1585_a1_b(a0)) {
		return;
	}
	t0{a0};
	f_15bd_a1_v(a0);
}

void f_1b0b_a1_v(object a0)
{
	if (g3 != f_16be_a0_i()) {
		f_1a33_a0_v();
		g3 = f_16be_a0_i();
	}
	if (!g1) {
		t23{a0};
		g1 = true;
	}
	if (f_16c7_a1_b(1)) {
		if (1000 == t1{a0}) {
			f_1af8_a1_v(a0);
		}
		return;
	}
	if (f_16c7_a1_b(2)) {
		if (1000 == t3{a0}) {
			f_1af8_a1_v(a0);
		}
		return;
	}
	if (f_16c7_a1_b(3)) {
		if (1000 == t5{a0}) {
			f_1af8_a1_v(a0);
		}
		return;
	}
	if (f_16c7_a1_b(4)) {
		if (1000 == t7{a0}) {
			f_1af8_a1_v(a0);
		}
		return;
	}
	if (f_16c7_a1_b(5)) {
		if (1000 == t9{a0}) {
			f_1af8_a1_v(a0);
		}
		return;
	}
	if (f_16c7_a1_b(6)) {
		if (1000 == t11{a0}) {
			f_1af8_a1_v(a0);
		}
		return;
	}
	if (f_16c7_a1_b(7)) {
		if (1000 == t13{a0}) {
			f_1af8_a1_v(a0);
		}
		return;
	}
	if (f_16c7_a1_b(8)) {
		if (1000 == t15{a0}) {
			f_1af8_a1_v(a0);
		}
		return;
	}
	if (f_16c7_a1_b(9)) {
		if (1000 == t17{a0}) {
			f_1af8_a1_v(a0);
		}
		return;
	}
	if (f_16c7_a1_b(10)) {
		if (1000 == t19{a0}) {
			f_1af8_a1_v(a0);
		}
		return;
	}
	if (f_16c7_a1_b(11)) {
		if (1000 == t21{a0}) {
			f_1af8_a1_v(a0);
		}
		return;
	}
	if (f_16c7_a1_b(12) && !g2) {
		t25{a0};
		g2 = true;
		return;
	}
}

