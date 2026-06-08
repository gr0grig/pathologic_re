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
		} while (!f_886_a0_b());
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
		f_8e0_a1_b(f_98d_a0_o());
		if (!f_88b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_9fc_a0_i());
		L0->SetNPCDescription(f_9fa_a0_i());
		L0->SetPhoto(f_9fe_a0_s());
		L0->SetPhoto2(f_a00_a0_s());
		L0->SetPlayerName(f_bc6_a0_i());
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
		f_8cf_a1_v(a0);
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
			if (f_a91_a1_b(tv1)) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(525584);
				tv0->ClearReplies();
				tv0->AddReply(525585, 26933, 26932);
				tv0->AddReply(540637, 26933, 42660);
				break;
			}
			f_b1_a1_v("Neutral");
			tv0->SetMessage(525591);
			tv0->ClearReplies();
			tv0->AddReply(525592, -1, 26939);
			tv0->AddReply(540621, -1, 42643);
			break;
			return;
		}
		if (f_a02_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_96a_a1_v(tv2);
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

	void f_b1_a1_v(string a0)
	{
		if (!f_a02_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_971_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_986_a0_v();
			if (a1 == 26936) {
				f_a04_a2_v(tv1, tv0);
				f_a70_a2_v(tv1, tv0);
				f_a86_a2_v(tv1, tv0);
				f_a86_a2_v(tv1, tv0);
			}
			if (a1 == 26937) {
				f_a04_a2_v(tv1, tv0);
			}
			if (a0 == 26931) {
				if (f_a91_a1_b(tv1)) {
					f_b1_a1_v("Neutral");
					tv0->SetMessage(525584);
					tv0->ClearReplies();
					tv0->AddReply(525585, 26933, 26932);
					tv0->AddReply(540637, 26933, 42660);
					return;
				}
				f_b1_a1_v("Neutral");
				tv0->SetMessage(525591);
				tv0->ClearReplies();
				tv0->AddReply(525592, -1, 26939);
				tv0->AddReply(540621, -1, 42643);
				return;
			}
			if (a0 == 26933) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(525586);
				tv0->ClearReplies();
				tv0->AddReply(525587, 42662, 26934);
				tv0->AddReply(540639, 42664, 42663);
				return;
			}
			if (a0 == 42664) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(540640);
				tv0->ClearReplies();
				tv0->AddReply(540641, 26935, 42665);
				return;
			}
			if (a0 == 26935) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(525588);
				tv0->ClearReplies();
				tv0->AddReply(540642, 42667, 42666);
				return;
			}
			if (a0 == 42667) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(540643);
				tv0->ClearReplies();
				tv0->AddReply(525589, -1, 26936);
				tv0->AddReply(540625, 42648, 42647);
				return;
			}
			if (a0 == 42648) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(540626);
				tv0->ClearReplies();
				tv0->AddReply(525590, -1, 26937);
				tv0->AddReply(540661, 42689, 42690);
				return;
			}
			if (a0 == 42689) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(540660);
				tv0->ClearReplies();
				if (f_a9d_a1_b(tv1)) {
					tv0->AddReply(540659, -1, 42688);
				}
				return;
			}
			if (a0 == 42662) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(540638);
				tv0->ClearReplies();
				tv0->AddReply(540644, 26935, 42668);
				tv0->AddReply(540645, 42670, 42669);
				return;
			}
			if (a0 == 42670) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(540646);
				tv0->ClearReplies();
				tv0->AddReply(540647, 42673, 42671);
				tv0->AddReply(540649, 42673, 42675);
				return;
			}
			if (a0 == 42673) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(540648);
				tv0->ClearReplies();
				tv0->AddReply(540650, 42678, 42677);
				return;
			}
			if (a0 == 42678) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(540651);
				tv0->ClearReplies();
				tv0->AddReply(540652, 42680, 42679);
				return;
			}
			if (a0 == 42680) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(540653);
				tv0->ClearReplies();
				tv0->AddReply(540654, 42691, 42681);
				tv0->AddReply(540655, 42683, 42682);
				return;
			}
			if (a0 == 42683) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(540656);
				tv0->ClearReplies();
				tv0->AddReply(540657, 26935, 42684);
				tv0->AddReply(540658, 26935, 42685);
				return;
			}
			if (a0 == 42691) {
				f_b1_a1_v("Neutral");
				tv0->SetMessage(540662);
				tv0->ClearReplies();
				tv0->AddReply(540663, 26935, 42692);
				return;
			}
			tv3 = true;
			if (f_a02_a0_b()) {
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
		f_8e0_a1_b(f_98d_a0_o());
		if (!f_88b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_9fc_a0_i());
		L0->SetNPCDescription(f_9fa_a0_i());
		L0->SetPhoto(f_9fe_a0_s());
		L0->SetPhoto2(f_a00_a0_s());
		L0->SetPlayerName(f_bc6_a0_i());
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
		f_8cf_a1_v(a0);
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
			f_2f7_a1_v("Neutral");
			tv0->SetMessage(525847);
			tv0->ClearReplies();
			if (f_aa9_a1_b(tv1) && !f_ab5_a1_b(tv1)) {
				tv0->AddReply(525848, 27148, 27147);
			}
			if (f_aa9_a1_b(tv1) && f_ab5_a1_b(tv1)) {
				tv0->AddReply(525851, 27151, 27150);
			}
			if (f_abf_a1_b(tv1)) {
				tv0->AddReply(525875, 27175, 27174);
			}
			tv0->AddReply(525862, -1, 27161);
			tv0->AddReply(529118, -1, 30563);
			break;
			return;
		}
		if (f_a02_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_96a_a1_v(tv2);
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

	void f_2f7_a1_v(string a0)
	{
		if (!f_a02_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_971_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_986_a0_v();
			if (a1 == 27160) {
				f_a0d_a2_v(tv1, tv0);
				f_a2d_a2_v(tv1, tv0);
				f_a76_a2_v(tv1, tv0);
			}
			if (a1 == 27178) {
				f_a24_a2_v(tv1, tv0);
			}
			if (a0 == 27146) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(525847);
				tv0->ClearReplies();
				if (f_aa9_a1_b(tv1) && !f_ab5_a1_b(tv1)) {
					tv0->AddReply(525848, 27148, 27147);
				}
				if (f_aa9_a1_b(tv1) && f_ab5_a1_b(tv1)) {
					tv0->AddReply(525851, 27151, 27150);
				}
				if (f_abf_a1_b(tv1)) {
					tv0->AddReply(525875, 27175, 27174);
				}
				tv0->AddReply(525862, -1, 27161);
				tv0->AddReply(529118, -1, 30563);
				return;
			}
			if (a0 == 27175) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(525876);
				tv0->ClearReplies();
				tv0->AddReply(525877, 27177, 27176);
				return;
			}
			if (a0 == 27177) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(525878);
				tv0->ClearReplies();
				tv0->AddReply(529128, 30575, 30574);
				return;
			}
			if (a0 == 30575) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(529129);
				tv0->ClearReplies();
				tv0->AddReply(525879, -1, 27178);
				return;
			}
			if (a0 == 27151) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(525852);
				tv0->ClearReplies();
				tv0->AddReply(529119, 30565, 30564);
				return;
			}
			if (a0 == 30565) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(529120);
				tv0->ClearReplies();
				tv0->AddReply(525853, 27153, 27152);
				tv0->AddReply(529121, 30567, 30566);
				return;
			}
			if (a0 == 30567) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(529122);
				tv0->ClearReplies();
				tv0->AddReply(529123, 27153, 30568);
				return;
			}
			if (a0 == 27153) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(525854);
				tv0->ClearReplies();
				tv0->AddReply(529124, 30571, 30570);
				return;
			}
			if (a0 == 30571) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(529125);
				tv0->ClearReplies();
				tv0->AddReply(525855, 27155, 27154);
				return;
			}
			if (a0 == 27155) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(525856);
				tv0->ClearReplies();
				tv0->AddReply(529126, 30573, 30572);
				return;
			}
			if (a0 == 30573) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(529127);
				tv0->ClearReplies();
				tv0->AddReply(525857, 27157, 27156);
				return;
			}
			if (a0 == 27157) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(525858);
				tv0->ClearReplies();
				tv0->AddReply(525859, 27159, 27158);
				return;
			}
			if (a0 == 27159) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(525860);
				tv0->ClearReplies();
				tv0->AddReply(525861, -1, 27160);
				return;
			}
			if (a0 == 27148) {
				f_2f7_a1_v("Neutral");
				tv0->SetMessage(525849);
				tv0->ClearReplies();
				tv0->AddReply(525850, -1, 27149);
				return;
			}
			tv3 = true;
			if (f_a02_a0_b()) {
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
		f_8e0_a1_b(f_98d_a0_o());
		if (!f_88b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_9fc_a0_i());
		L0->SetNPCDescription(f_9fa_a0_i());
		L0->SetPhoto(f_9fe_a0_s());
		L0->SetPhoto2(f_a00_a0_s());
		L0->SetPlayerName(f_bc6_a0_i());
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
		f_8cf_a1_v(a0);
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
			f_50a_a1_v("Neutral");
			tv0->SetMessage(527693);
			tv0->ClearReplies();
			if (f_ad7_a1_b(tv1) && f_acb_a1_b(tv1)) {
				tv0->AddReply(527695, 29046, 29045);
			}
			tv0->AddReply(527694, -1, 29044);
			break;
			return;
		}
		if (f_a02_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_96a_a1_v(tv2);
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

	void f_50a_a1_v(string a0)
	{
		if (!f_a02_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_971_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_986_a0_v();
			if (a1 == 29045) {
				f_a6a_a2_v(tv1, tv0);
			}
			if (a1 == 29057) {
				f_a37_a2_v(tv1, tv0);
			}
			if (a0 == 29043) {
				f_50a_a1_v("Neutral");
				tv0->SetMessage(527693);
				tv0->ClearReplies();
				if (f_ad7_a1_b(tv1) && f_acb_a1_b(tv1)) {
					tv0->AddReply(527695, 29046, 29045);
				}
				tv0->AddReply(527694, -1, 29044);
				return;
			}
			if (a0 == 29046) {
				f_50a_a1_v("Neutral");
				tv0->SetMessage(527696);
				tv0->ClearReplies();
				tv0->AddReply(527697, 29048, 29047);
				return;
			}
			if (a0 == 29048) {
				f_50a_a1_v("Neutral");
				tv0->SetMessage(527698);
				tv0->ClearReplies();
				tv0->AddReply(527699, 29050, 29049);
				return;
			}
			if (a0 == 29050) {
				f_50a_a1_v("Neutral");
				tv0->SetMessage(527700);
				tv0->ClearReplies();
				tv0->AddReply(527701, 29052, 29051);
				return;
			}
			if (a0 == 29052) {
				f_50a_a1_v("Neutral");
				tv0->SetMessage(527702);
				tv0->ClearReplies();
				tv0->AddReply(527703, 29054, 29053);
				tv0->AddReply(527712, 29054, 29063);
				return;
			}
			if (a0 == 29054) {
				f_50a_a1_v("Neutral");
				tv0->SetMessage(527704);
				tv0->ClearReplies();
				tv0->AddReply(527705, 29056, 29055);
				return;
			}
			if (a0 == 29056) {
				f_50a_a1_v("Neutral");
				tv0->SetMessage(527706);
				tv0->ClearReplies();
				tv0->AddReply(527707, -1, 29057);
				return;
			}
			tv3 = true;
			if (f_a02_a0_b()) {
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
		f_8e0_a1_b(f_98d_a0_o());
		if (!f_88b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_9fc_a0_i());
		L0->SetNPCDescription(f_9fa_a0_i());
		L0->SetPhoto(f_9fe_a0_s());
		L0->SetPhoto2(f_a00_a0_s());
		L0->SetPlayerName(f_bc6_a0_i());
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
		f_8cf_a1_v(a0);
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
			f_65f_a1_v("Neutral");
			tv0->SetMessage(539294);
			tv0->ClearReplies();
			tv0->AddReply(539295, -1, 41238);
			break;
			return;
		}
		if (f_a02_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_96a_a1_v(tv2);
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

	void f_65f_a1_v(string a0)
	{
		if (!f_a02_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_971_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_986_a0_v();
			if (a0 == 41237) {
				f_65f_a1_v("Neutral");
				tv0->SetMessage(539294);
				tv0->ClearReplies();
				tv0->AddReply(539295, -1, 41238);
				return;
			}
			tv3 = true;
			if (f_a02_a0_b()) {
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
		f_8e0_a1_b(f_98d_a0_o());
		if (!f_88b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_9fc_a0_i());
		L0->SetNPCDescription(f_9fa_a0_i());
		L0->SetPhoto(f_9fe_a0_s());
		L0->SetPhoto2(f_a00_a0_s());
		L0->SetPlayerName(f_bc6_a0_i());
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
		f_8cf_a1_v(a0);
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
			f_725_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_a02_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_96a_a1_v(tv2);
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

	void f_725_a1_v(string a0)
	{
		if (!f_a02_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_971_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_986_a0_v();
			if (a0 == 42554) {
				f_725_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_a02_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t11
{
	var Vector tv0;

	void init(void)
	{
		f_769_a0_v();
	}

	void f_769_a0_v(void)
	{
		if (!f_886_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_81f_a0_v();
		}
	}

	bool f_77d_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_87d_a1_b(L0);
	}

	void f_78c_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_791_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_86b_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_7a7_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_7b0_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_7b0_a0_v();
			if (f_886_a0_b() && f_791_a0_b()) {
				if (f_77d_a0_b()) {
					f_91a_a1_b(f_98d_a0_o());
				}
			} else {
				f_78c_a0_v();
				f_7a7_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_866_a0_v();
		f_7b0_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_7b0_a0_v();
		f_96a_a1_v("Neutral");
		f_7a7_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_7a7_a0_v();
		} else {
			f_96a_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_866_a0_v();
			f_87d_a1_b(a0);
			enable OnUse;
			f_bd7_a1_v(a0);
			f_96a_a1_v("Neutral");
			f_7b0_a0_v();
			f_7a7_a0_v();
		}
	}
}

void f_81f_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_886_a0_b()) {
		return;
	}
	L0 = f_9e9_a0_i();
	for (L1 = 0; L1 < 5 && f_886_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_9e2_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_864_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_864_a0_b(void)
{
	return true;
}

void f_866_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_86b_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_873_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_87d_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_873_a1_b(L0);
}

bool f_886_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_88b_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_993_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_a02_a0_b()) {
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

void f_8cf_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_a02_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_8e0_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_91a_a1_b(a0)) {
			if (!f_93f_a1_b(a0)) {
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
		if (!f_93f_a1_b(a0)) {
			if (!f_91a_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_91a_a1_b(object a0)
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
	return f_977_a1_b(L4);
}

bool f_93f_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_9d3_a0_i() + "m";
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
	return f_977_a1_b(L4);
}

void f_96a_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_971_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_977_a1_b(string a0)
{
	if (f_a02_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_986_a0_v(void)
{
	if (f_a02_a0_b()) {
		@lshStopSpeech();
	}
}

object f_98d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_993_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_99d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_9a2_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_9ae_a3_v(object a0, object a1, int a2)
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
		f_9a2_a2_v(L0, a2);
	}
}

void f_9c1_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_9ae_a3_v(a0, L0, a2);
}

float f_9ce_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_9d3_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_9dc_a1_b(int a0)
{
	return f_9d3_a0_i() == a0;
}

string f_9e2_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_9e9_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_9e2_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_9fa_a0_i(void)
{
	return 515551;
}

int f_9fc_a0_i(void)
{
	return 502876;
}

string f_9fe_a0_s(void)
{
	return "ui/NPC_Rubin.png";
}

string f_a00_a0_s(void)
{
	return "ui/NPC_Rubin_b.png";
}

bool f_a02_a0_b(void)
{
	return true;
}

void f_a04_a2_v(object a0, object a1)
{
	@SetVariable("k3q03", 1000);
	f_b44_a0_v();
}

void f_a0d_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k5q01", 2);
	L0 = f_b94_a0_o();
	L0->AddMark("k5q01RubinGotoGeorg", "pt_map_georg", 1, 515292, f_9ce_a0_f());
	f_b5e_a0_v();
}

void f_a24_a2_v(object a0, object a1)
{
	@SetVariable("k5q01", 4);
	f_b51_a0_v();
}

void f_a2d_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "tvirin", 3);
	a0->RemoveItemByType(L0, "fresh_meat", 3);
}

void f_a37_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("k11q01SoulCount", L0);
	@SetVariable("k11q01SoulCount", L0 + 1);
	if (L0 == 2) {
		f_b37_a0_v();
	} else {
		if (L0 == 3) {
			f_b2a_a0_v();
		} else {
			if (L0 == 4) {
				f_b1d_a0_v();
			} else {
				if (L0 == 5) {
					f_b10_a0_v();
				} else {
					if (L0 == 6) {
						f_b03_a0_v();
					} else {
						if (L0 == 7) {
							f_af6_a0_v();
						}
					}
				}
			}
		}
	}
}

void f_a6a_a2_v(object a0, object a1)
{
	@SetVariable("ook11Rubin1", 1);
}

void f_a70_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_a76_a2_v(object a0, object a1)
{
	f_ba5_a3_v(f_b94_a0_o(), "pt_map_georg", 2);
	a1->ShowMap(f_b94_a0_o());
}

void f_a86_a2_v(object a0, object a1)
{
	@Trace("bluevaccine is given");
	f_9c1_a3_v(a0, "blue_vaccine", 1);
}

bool f_a91_a1_b(object a0)
{
	if (f_99d_a1_i("k3q03") == 1) {
		return true;
	}
	return false;
}

bool f_a9d_a1_b(object a0)
{
	if (f_99d_a1_i("k3q03") == 1000) {
		return true;
	}
	return false;
}

bool f_aa9_a1_b(object a0)
{
	if (f_99d_a1_i("k5q01") == 1) {
		return true;
	}
	return false;
}

bool f_ab5_a1_b(object a0)
{
	if (f_ae3_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_abf_a1_b(object a0)
{
	if (f_99d_a1_i("k5q01") == 3) {
		return true;
	}
	return false;
}

bool f_acb_a1_b(object a0)
{
	if (f_99d_a1_i("k11q01") == 9) {
		return true;
	}
	return false;
}

bool f_ad7_a1_b(object a0)
{
	if (f_99d_a1_i("ook11Rubin1") == 0) {
		return true;
	}
	return false;
}

bool f_ae3_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "tvirin");
	if (L0 < 3) {
		return false;
	}
	a0->GetItemCountOfType(L0, "fresh_meat");
	if (L0 < 3) {
		return false;
	}
	return true;
}

void f_af6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 498, 1, 528065);
	f_b78_a2_b(L0, 480);
}

void f_b03_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 497, 1, 528064);
	f_b78_a2_b(L0, 480);
}

void f_b10_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 496, 1, 528063);
	f_b78_a2_b(L0, 480);
}

void f_b1d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 495, 1, 528062);
	f_b78_a2_b(L0, 480);
}

void f_b2a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 494, 1, 528061);
	f_b78_a2_b(L0, 480);
}

void f_b37_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 493, 1, 528060);
	f_b78_a2_b(L0, 480);
}

void f_b44_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 353, 2, 525619);
	f_b78_a2_b(L0, 350);
}

void f_b51_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 395, 1, 525888);
	f_b78_a2_b(L0, 390);
}

void f_b5e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 393, 1, 525886);
	f_b78_a2_b(L0, 390);
}

object f_b6b_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_b78_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_b6b_a0_o();
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

object f_b94_a0_o(void)
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

void f_ba5_a3_v(object a0, string a1, float a2)
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

int f_bc6_a0_i(void)
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

void f_bd7_a1_v(object a0)
{
	if (f_9dc_a1_b(3)) {
		t1{a0};
		return;
	}
	if (f_9dc_a1_b(5)) {
		t3{a0};
		return;
	}
	if (f_9dc_a1_b(11)) {
		t5{a0};
		return;
	}
	if (f_9dc_a1_b(12)) {
		t7{a0};
		return;
	}
	t9{a0};
}

