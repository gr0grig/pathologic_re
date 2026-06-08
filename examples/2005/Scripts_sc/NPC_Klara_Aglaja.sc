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
		} while (!f_168a_a0_b());
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
		f_16e4_a1_b(f_1791_a0_o());
		if (!f_168f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1865_a0_i());
		L0->SetNPCDescription(f_1863_a0_i());
		L0->SetPhoto(f_1867_a0_s());
		L0->SetPhoto2(f_1869_a0_s());
		L0->SetPlayerName(f_1cc6_a0_i());
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
		f_16d3_a1_v(a0);
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
			if (f_19ee_a1_b(tv1)) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(526139);
				tv0->ClearReplies();
				tv0->AddReply(528171, 29526, 29525);
				tv0->AddReply(528185, 29500, 29540);
				break;
			}
			f_dd_a1_v("Neutral");
			tv0->SetMessage(526149);
			tv0->ClearReplies();
			if (f_1a06_a1_b(tv1)) {
				tv0->AddReply(526208, 29542, 27489);
			}
			if (f_1af2_a1_b(tv1)) {
				tv0->AddReply(528192, 29552, 29548);
			}
			if (f_1afe_a1_b(tv1)) {
				tv0->AddReply(528193, 29562, 29549);
			}
			if (f_1a7e_a1_b(tv1) && f_1a88_a1_b(tv1)) {
				tv0->AddReply(538631, 40523, 40522);
			}
			tv0->AddReply(526150, -1, 27429);
			break;
			return;
		}
		if (f_186b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_176e_a1_v(tv2);
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

	void f_dd_a1_v(string a0)
	{
		if (!f_186b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1775_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_178a_a0_v();
			if (a1 == 27427) {
				f_1886_a2_v(tv1, tv0);
			}
			if (a1 == 27493) {
				f_1897_a2_v(tv1, tv0);
				f_19b9_a2_v(tv1, tv0);
			}
			if (a1 == 27494) {
				f_18a1_a2_v(tv1, tv0);
				f_19b2_a2_v(tv1, tv0);
			}
			if (a1 == 29548) {
				f_1925_a2_v(tv1, tv0);
			}
			if (a1 == 29549) {
				f_192b_a2_v(tv1, tv0);
			}
			if (a1 == 40522) {
				f_1913_a2_v(tv1, tv0);
			}
			if (a1 == 40535) {
				f_19ab_a2_v(tv1, tv0);
				f_198a_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
			}
			if (a0 == 27418) {
				if (f_19ee_a1_b(tv1)) {
					f_dd_a1_v("Neutral");
					tv0->SetMessage(526139);
					tv0->ClearReplies();
					tv0->AddReply(528171, 29526, 29525);
					tv0->AddReply(528185, 29500, 29540);
					return;
				}
				f_dd_a1_v("Neutral");
				tv0->SetMessage(526149);
				tv0->ClearReplies();
				if (f_1a06_a1_b(tv1)) {
					tv0->AddReply(526208, 29542, 27489);
				}
				if (f_1af2_a1_b(tv1)) {
					tv0->AddReply(528192, 29552, 29548);
				}
				if (f_1afe_a1_b(tv1)) {
					tv0->AddReply(528193, 29562, 29549);
				}
				if (f_1a7e_a1_b(tv1) && f_1a88_a1_b(tv1)) {
					tv0->AddReply(538631, 40523, 40522);
				}
				tv0->AddReply(526150, -1, 27429);
				return;
			}
			if (a0 == 40523) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(538632);
				tv0->ClearReplies();
				tv0->AddReply(538633, 40526, 40524);
				tv0->AddReply(538634, 40528, 40525);
				return;
			}
			if (a0 == 40528) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(538636);
				tv0->ClearReplies();
				tv0->AddReply(538637, 40532, 40529);
				tv0->AddReply(538639, 40532, 40531);
				return;
			}
			if (a0 == 40526) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(538635);
				tv0->ClearReplies();
				tv0->AddReply(538638, 40532, 40530);
				return;
			}
			if (a0 == 40532) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(538640);
				tv0->ClearReplies();
				tv0->AddReply(538641, -1, 40535);
				return;
			}
			if (a0 == 29562) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528205);
				tv0->ClearReplies();
				tv0->AddReply(528206, -1, 29563);
				tv0->AddReply(541051, -1, 43153);
				return;
			}
			if (a0 == 29552) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528195);
				tv0->ClearReplies();
				tv0->AddReply(528196, 29554, 29553);
				return;
			}
			if (a0 == 29554) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528197);
				tv0->ClearReplies();
				tv0->AddReply(528198, 29556, 29555);
				return;
			}
			if (a0 == 29556) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528199);
				tv0->ClearReplies();
				tv0->AddReply(528200, 29558, 29557);
				return;
			}
			if (a0 == 29558) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528201);
				tv0->ClearReplies();
				tv0->AddReply(528202, 29560, 29559);
				return;
			}
			if (a0 == 29560) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528203);
				tv0->ClearReplies();
				tv0->AddReply(528204, -1, 29561);
				return;
			}
			if (a0 == 29542) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528186);
				tv0->ClearReplies();
				tv0->AddReply(528187, 27490, 29543);
				return;
			}
			if (a0 == 27490) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(526209);
				tv0->ClearReplies();
				tv0->AddReply(528188, 29545, 29544);
				return;
			}
			if (a0 == 29545) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528189);
				tv0->ClearReplies();
				tv0->AddReply(526210, 29546, 27491);
				return;
			}
			if (a0 == 29546) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528190);
				tv0->ClearReplies();
				tv0->AddReply(528191, 27492, 29547);
				tv0->AddReply(528194, 27492, 29550);
				return;
			}
			if (a0 == 27492) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(526211);
				tv0->ClearReplies();
				tv0->AddReply(526212, -1, 27493);
				tv0->AddReply(526213, -1, 27494);
				return;
			}
			if (a0 == 29526) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528172);
				tv0->ClearReplies();
				tv0->AddReply(526140, 29500, 27419);
				tv0->AddReply(541042, 43140, 43139);
				return;
			}
			if (a0 == 43140) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(541043);
				tv0->ClearReplies();
				tv0->AddReply(541044, 29500, 43141);
				return;
			}
			if (a0 == 29500) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528148);
				tv0->ClearReplies();
				tv0->AddReply(528149, 29502, 29501);
				tv0->AddReply(541046, 29502, 43144);
				return;
			}
			if (a0 == 29502) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528150);
				tv0->ClearReplies();
				tv0->AddReply(528151, 29504, 29503);
				tv0->AddReply(541047, 29504, 43146);
				return;
			}
			if (a0 == 29504) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528152);
				tv0->ClearReplies();
				tv0->AddReply(528153, 29506, 29505);
				tv0->AddReply(541048, 29506, 43148);
				return;
			}
			if (a0 == 29506) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528154);
				tv0->ClearReplies();
				tv0->AddReply(528155, 27420, 29507);
				return;
			}
			if (a0 == 27420) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(526141);
				tv0->ClearReplies();
				tv0->AddReply(528174, 29529, 29528);
				tv0->AddReply(541049, 29529, 43150);
				return;
			}
			if (a0 == 29529) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528175);
				tv0->ClearReplies();
				tv0->AddReply(528176, 29531, 29530);
				return;
			}
			if (a0 == 29531) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528177);
				tv0->ClearReplies();
				tv0->AddReply(526144, 27424, 27423);
				return;
			}
			if (a0 == 27424) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(526145);
				tv0->ClearReplies();
				tv0->AddReply(526146, 27426, 27425);
				return;
			}
			if (a0 == 27426) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(526147);
				tv0->ClearReplies();
				tv0->AddReply(528178, 29533, 29532);
				tv0->AddReply(528182, 29537, 29536);
				return;
			}
			if (a0 == 29537) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528183);
				tv0->ClearReplies();
				tv0->AddReply(528184, 29533, 29538);
				return;
			}
			if (a0 == 29533) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528179);
				tv0->ClearReplies();
				tv0->AddReply(528180, 29535, 29534);
				return;
			}
			if (a0 == 29535) {
				f_dd_a1_v("Neutral");
				tv0->SetMessage(528181);
				tv0->ClearReplies();
				tv0->AddReply(526148, -1, 27427);
				if (f_19fa_a1_b(tv1)) {
					tv0->AddReply(541050, -1, 43152);
				}
				return;
			}
			tv3 = true;
			if (f_186b_a0_b()) {
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
		f_16e4_a1_b(f_1791_a0_o());
		if (!f_168f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1865_a0_i());
		L0->SetNPCDescription(f_1863_a0_i());
		L0->SetPhoto(f_1867_a0_s());
		L0->SetPhoto2(f_1869_a0_s());
		L0->SetPlayerName(f_1cc6_a0_i());
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
		f_16d3_a1_v(a0);
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
			if (f_1a12_a1_b(tv1)) {
				f_18ab_a2_v(tv1, tv0);
				f_518_a1_v("Neutral");
				tv0->SetMessage(526396);
				tv0->ClearReplies();
				tv0->AddReply(528207, 29565, 29564);
				tv0->AddReply(528219, 29577, 29576);
				break;
			}
			f_518_a1_v("Neutral");
			tv0->SetMessage(526399);
			tv0->ClearReplies();
			if (f_1a1e_a1_b(tv1)) {
				tv0->AddReply(526400, 27676, 27675);
			}
			if (f_1a2a_a1_b(tv1)) {
				tv0->AddReply(526460, 29590, 27735);
			}
			if (f_1aac_a1_b(tv1) && f_1ab6_a1_b(tv1) && f_1b0a_a1_b(tv1)) {
				tv0->AddReply(539774, 41727, 41726);
			}
			if (f_1aac_a1_b(tv1) && f_1ac0_a1_b(tv1) && f_1b16_a1_b(tv1)) {
				tv0->AddReply(539777, 41730, 41729);
			}
			if (f_1a7e_a1_b(tv1) && f_1a94_a1_b(tv1)) {
				tv0->AddReply(538642, 40537, 40536);
			}
			if (f_1aac_a1_b(tv1) && f_1aca_a1_b(tv1) && f_1b22_a1_b(tv1)) {
				tv0->AddReply(539780, 41733, 41732);
			}
			tv0->AddReply(526403, -1, 27678);
			break;
			return;
		}
		if (f_186b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_176e_a1_v(tv2);
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

	void f_518_a1_v(string a0)
	{
		if (!f_186b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1775_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_178a_a0_v();
			if (a1 == 27672) {
				f_18b1_a2_v(tv1, tv0);
			}
			if (a1 == 27677) {
				f_18b1_a2_v(tv1, tv0);
			}
			if (a1 == 27737) {
				f_18bd_a2_v(tv1, tv0);
			}
			if (a1 == 41726) {
				f_1931_a2_v(tv1, tv0);
			}
			if (a1 == 41729) {
				f_1937_a2_v(tv1, tv0);
			}
			if (a1 == 41731) {
				f_1943_a2_v(tv1, tv0);
				f_186d_a2_v(tv1, tv0);
				f_18fd_a2_v(tv1, tv0);
				f_19e3_a2_v(tv1, tv0);
				f_190d_a2_v(tv1, tv0);
			}
			if (a1 == 40536) {
				f_1919_a2_v(tv1, tv0);
			}
			if (a1 == 40541) {
				f_19ab_a2_v(tv1, tv0);
				f_198a_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
				f_187b_a2_v(tv1, tv0);
			}
			if (a1 == 40542) {
				f_19ab_a2_v(tv1, tv0);
				f_198a_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
				f_187b_a2_v(tv1, tv0);
			}
			if (a1 == 40539) {
				f_19c0_a2_v(tv1, tv0);
				f_198a_a2_v(tv1, tv0);
				f_190d_a2_v(tv1, tv0);
				f_187b_a2_v(tv1, tv0);
			}
			if (a1 == 41732) {
				f_193d_a2_v(tv1, tv0);
			}
			if (a1 == 41734) {
				f_1874_a2_v(tv1, tv0);
			}
			if (a0 == 27671) {
				if (f_1a12_a1_b(tv1)) {
					f_18ab_a2_v(tv1, tv0);
					f_518_a1_v("Neutral");
					tv0->SetMessage(526396);
					tv0->ClearReplies();
					tv0->AddReply(528207, 29565, 29564);
					tv0->AddReply(528219, 29577, 29576);
					return;
				}
				f_518_a1_v("Neutral");
				tv0->SetMessage(526399);
				tv0->ClearReplies();
				if (f_1a1e_a1_b(tv1)) {
					tv0->AddReply(526400, 27676, 27675);
				}
				if (f_1a2a_a1_b(tv1)) {
					tv0->AddReply(526460, 29590, 27735);
				}
				if (f_1aac_a1_b(tv1) && f_1ab6_a1_b(tv1) && f_1b0a_a1_b(tv1)) {
					tv0->AddReply(539774, 41727, 41726);
				}
				if (f_1aac_a1_b(tv1) && f_1ac0_a1_b(tv1) && f_1b16_a1_b(tv1)) {
					tv0->AddReply(539777, 41730, 41729);
				}
				if (f_1a7e_a1_b(tv1) && f_1a94_a1_b(tv1)) {
					tv0->AddReply(538642, 40537, 40536);
				}
				if (f_1aac_a1_b(tv1) && f_1aca_a1_b(tv1) && f_1b22_a1_b(tv1)) {
					tv0->AddReply(539780, 41733, 41732);
				}
				tv0->AddReply(526403, -1, 27678);
				return;
			}
			if (a0 == 41733) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(539781);
				tv0->ClearReplies();
				tv0->AddReply(539782, -1, 41734);
				return;
			}
			if (a0 == 40537) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(538643);
				tv0->ClearReplies();
				tv0->AddReply(538644, 40540, 40538);
				tv0->AddReply(538645, -1, 40539);
				return;
			}
			if (a0 == 40540) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(538646);
				tv0->ClearReplies();
				tv0->AddReply(538647, -1, 40541);
				tv0->AddReply(538648, -1, 40542);
				return;
			}
			if (a0 == 41730) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(539778);
				tv0->ClearReplies();
				tv0->AddReply(539779, -1, 41731);
				return;
			}
			if (a0 == 41727) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(539775);
				tv0->ClearReplies();
				tv0->AddReply(539776, -1, 41728);
				return;
			}
			if (a0 == 29590) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528231);
				tv0->ClearReplies();
				tv0->AddReply(528232, 29592, 29591);
				return;
			}
			if (a0 == 29592) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528233);
				tv0->ClearReplies();
				tv0->AddReply(528234, 27736, 29593);
				tv0->AddReply(528235, 27736, 29594);
				return;
			}
			if (a0 == 27736) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(526461);
				tv0->ClearReplies();
				tv0->AddReply(528238, 29599, 29598);
				return;
			}
			if (a0 == 29599) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528239);
				tv0->ClearReplies();
				tv0->AddReply(528236, 29597, 29596);
				return;
			}
			if (a0 == 29597) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528237);
				tv0->ClearReplies();
				tv0->AddReply(526462, -1, 27737);
				return;
			}
			if (a0 == 27676) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(526401);
				tv0->ClearReplies();
				tv0->AddReply(528229, 29589, 29588);
				return;
			}
			if (a0 == 29589) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528230);
				tv0->ClearReplies();
				tv0->AddReply(526402, -1, 27677);
				return;
			}
			if (a0 == 29577) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528220);
				tv0->ClearReplies();
				tv0->AddReply(528221, 29579, 29578);
				return;
			}
			if (a0 == 29579) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528222);
				tv0->ClearReplies();
				tv0->AddReply(528223, 29565, 29580);
				return;
			}
			if (a0 == 29565) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528208);
				tv0->ClearReplies();
				tv0->AddReply(528209, 29567, 29566);
				return;
			}
			if (a0 == 29567) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528210);
				tv0->ClearReplies();
				tv0->AddReply(528211, 29569, 29568);
				return;
			}
			if (a0 == 29569) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528212);
				tv0->ClearReplies();
				tv0->AddReply(528213, 29571, 29570);
				return;
			}
			if (a0 == 29571) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528214);
				tv0->ClearReplies();
				tv0->AddReply(528215, 29573, 29572);
				return;
			}
			if (a0 == 29573) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528216);
				tv0->ClearReplies();
				tv0->AddReply(528217, 29575, 29574);
				tv0->AddReply(528224, 29583, 29582);
				return;
			}
			if (a0 == 29583) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528225);
				tv0->ClearReplies();
				tv0->AddReply(528226, 29575, 29584);
				return;
			}
			if (a0 == 29575) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528218);
				tv0->ClearReplies();
				tv0->AddReply(528227, 29587, 29586);
				return;
			}
			if (a0 == 29587) {
				f_518_a1_v("Neutral");
				tv0->SetMessage(528228);
				tv0->ClearReplies();
				tv0->AddReply(526397, -1, 27672);
				tv0->AddReply(526398, -1, 27673);
				return;
			}
			tv3 = true;
			if (f_186b_a0_b()) {
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
		f_16e4_a1_b(f_1791_a0_o());
		if (!f_168f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1865_a0_i());
		L0->SetNPCDescription(f_1863_a0_i());
		L0->SetPhoto(f_1867_a0_s());
		L0->SetPhoto2(f_1869_a0_s());
		L0->SetPlayerName(f_1cc6_a0_i());
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
		f_16d3_a1_v(a0);
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
			if (f_1a5a_a1_b(tv1)) {
				f_18e2_a2_v(tv1, tv0);
				f_94c_a1_v("Neutral");
				tv0->SetMessage(526473);
				tv0->ClearReplies();
				tv0->AddReply(528240, 29601, 29600);
				break;
			}
			f_94c_a1_v("Neutral");
			tv0->SetMessage(526478);
			tv0->ClearReplies();
			if (f_1a66_a1_b(tv1)) {
				tv0->AddReply(529716, 31170, 31169);
			}
			if (f_1a72_a1_b(tv1)) {
				tv0->AddReply(529721, 31178, 31175);
			}
			if (f_1a7e_a1_b(tv1) && f_1aa0_a1_b(tv1)) {
				tv0->AddReply(538649, 40544, 40543);
			}
			if (f_1aac_a1_b(tv1) && f_1ab6_a1_b(tv1) && f_1b2e_a1_b(tv1)) {
				tv0->AddReply(539783, 41736, 41735);
			}
			if (f_1aac_a1_b(tv1) && f_1ade_a1_b(tv1) && f_1b3a_a1_b(tv1)) {
				tv0->AddReply(539786, 41739, 41738);
			}
			if (f_1aac_a1_b(tv1) && f_1aca_a1_b(tv1) && f_1b46_a1_b(tv1)) {
				tv0->AddReply(539789, 41742, 41741);
			}
			tv0->AddReply(526479, -1, 27745);
			break;
			return;
		}
		if (f_186b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_176e_a1_v(tv2);
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

	void f_94c_a1_v(string a0)
	{
		if (!f_186b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1775_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_178a_a0_v();
			if (a1 == 27742) {
				f_18e8_a2_v(tv1, tv0);
			}
			if (a1 == 31171) {
				f_18e8_a2_v(tv1, tv0);
			}
			if (a1 == 31197) {
				f_18f4_a2_v(tv1, tv0);
			}
			if (a1 == 40543) {
				f_191f_a2_v(tv1, tv0);
			}
			if (a1 == 40545) {
				f_19ab_a2_v(tv1, tv0);
				f_1995_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
				f_187b_a2_v(tv1, tv0);
				f_19cd_a2_v(tv1, tv0);
			}
			if (a1 == 40546) {
				f_19ab_a2_v(tv1, tv0);
				f_1995_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
				f_187b_a2_v(tv1, tv0);
				f_19cd_a2_v(tv1, tv0);
			}
			if (a1 == 41735) {
				f_1948_a2_v(tv1, tv0);
			}
			if (a1 == 41738) {
				f_194e_a2_v(tv1, tv0);
			}
			if (a1 == 41740) {
				f_1943_a2_v(tv1, tv0);
				f_198a_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
				f_19e3_a2_v(tv1, tv0);
			}
			if (a1 == 41741) {
				f_1954_a2_v(tv1, tv0);
			}
			if (a1 == 41743) {
				f_1874_a2_v(tv1, tv0);
			}
			if (a0 == 27739) {
				if (f_1a5a_a1_b(tv1)) {
					f_18e2_a2_v(tv1, tv0);
					f_94c_a1_v("Neutral");
					tv0->SetMessage(526473);
					tv0->ClearReplies();
					tv0->AddReply(528240, 29601, 29600);
					return;
				}
				f_94c_a1_v("Neutral");
				tv0->SetMessage(526478);
				tv0->ClearReplies();
				if (f_1a66_a1_b(tv1)) {
					tv0->AddReply(529716, 31170, 31169);
				}
				if (f_1a72_a1_b(tv1)) {
					tv0->AddReply(529721, 31178, 31175);
				}
				if (f_1a7e_a1_b(tv1) && f_1aa0_a1_b(tv1)) {
					tv0->AddReply(538649, 40544, 40543);
				}
				if (f_1aac_a1_b(tv1) && f_1ab6_a1_b(tv1) && f_1b2e_a1_b(tv1)) {
					tv0->AddReply(539783, 41736, 41735);
				}
				if (f_1aac_a1_b(tv1) && f_1ade_a1_b(tv1) && f_1b3a_a1_b(tv1)) {
					tv0->AddReply(539786, 41739, 41738);
				}
				if (f_1aac_a1_b(tv1) && f_1aca_a1_b(tv1) && f_1b46_a1_b(tv1)) {
					tv0->AddReply(539789, 41742, 41741);
				}
				tv0->AddReply(526479, -1, 27745);
				return;
			}
			if (a0 == 41742) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(539790);
				tv0->ClearReplies();
				tv0->AddReply(539791, -1, 41743);
				return;
			}
			if (a0 == 41739) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(539787);
				tv0->ClearReplies();
				tv0->AddReply(539788, -1, 41740);
				return;
			}
			if (a0 == 41736) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(539784);
				tv0->ClearReplies();
				tv0->AddReply(539785, -1, 41737);
				return;
			}
			if (a0 == 40544) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(538650);
				tv0->ClearReplies();
				tv0->AddReply(538651, -1, 40545);
				tv0->AddReply(538652, -1, 40546);
				return;
			}
			if (a0 == 31178) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(529724);
				tv0->ClearReplies();
				tv0->AddReply(529725, 31181, 31179);
				return;
			}
			if (a0 == 31181) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(529727);
				tv0->ClearReplies();
				tv0->AddReply(529728, 31180, 31182);
				tv0->AddReply(529737, 31180, 31191);
				return;
			}
			if (a0 == 31180) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(529726);
				tv0->ClearReplies();
				tv0->AddReply(529729, 31184, 31183);
				return;
			}
			if (a0 == 31184) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(529730);
				tv0->ClearReplies();
				tv0->AddReply(529731, 31186, 31185);
				return;
			}
			if (a0 == 31186) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(529732);
				tv0->ClearReplies();
				tv0->AddReply(529733, 31188, 31187);
				return;
			}
			if (a0 == 31188) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(529734);
				tv0->ClearReplies();
				tv0->AddReply(529735, 31190, 31189);
				return;
			}
			if (a0 == 31190) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(529736);
				tv0->ClearReplies();
				tv0->AddReply(529738, 31194, 31193);
				return;
			}
			if (a0 == 31194) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(529739);
				tv0->ClearReplies();
				tv0->AddReply(529740, 31196, 31195);
				return;
			}
			if (a0 == 31196) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(529741);
				tv0->ClearReplies();
				tv0->AddReply(529742, -1, 31197);
				return;
			}
			if (a0 == 31170) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(529717);
				tv0->ClearReplies();
				tv0->AddReply(529722, 31177, 31176);
				return;
			}
			if (a0 == 31177) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(529723);
				tv0->ClearReplies();
				tv0->AddReply(529718, -1, 31171);
				return;
			}
			if (a0 == 29601) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(528241);
				tv0->ClearReplies();
				tv0->AddReply(528242, 29603, 29602);
				return;
			}
			if (a0 == 29603) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(528243);
				tv0->ClearReplies();
				tv0->AddReply(528244, 29605, 29604);
				tv0->AddReply(528246, -1, 29606);
				return;
			}
			if (a0 == 29605) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(528245);
				tv0->ClearReplies();
				tv0->AddReply(528247, 29608, 29607);
				return;
			}
			if (a0 == 29608) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(528248);
				tv0->ClearReplies();
				tv0->AddReply(526474, 27741, 27740);
				tv0->AddReply(528249, 29610, 29609);
				return;
			}
			if (a0 == 29610) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(528250);
				tv0->ClearReplies();
				tv0->AddReply(528251, 27741, 29611);
				return;
			}
			if (a0 == 27741) {
				f_94c_a1_v("Neutral");
				tv0->SetMessage(526475);
				tv0->ClearReplies();
				tv0->AddReply(526476, -1, 27742);
				tv0->AddReply(526477, -1, 27743);
				return;
			}
			tv3 = true;
			if (f_186b_a0_b()) {
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
		f_16e4_a1_b(f_1791_a0_o());
		if (!f_168f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1865_a0_i());
		L0->SetNPCDescription(f_1863_a0_i());
		L0->SetPhoto(f_1867_a0_s());
		L0->SetPhoto2(f_1869_a0_s());
		L0->SetPlayerName(f_1cc6_a0_i());
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
		f_16d3_a1_v(a0);
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
			if (f_1a36_a1_b(tv1)) {
				f_18c7_a2_v(tv1, tv0);
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527173);
				tv0->ClearReplies();
				tv0->AddReply(527174, 28483, 28482);
				tv0->AddReply(527255, 28483, 28565);
				break;
			}
			f_d61_a1_v("Neutral");
			tv0->SetMessage(527177);
			tv0->ClearReplies();
			if (f_1a42_a1_b(tv1)) {
				tv0->AddReply(527179, 28488, 28487);
			}
			if (f_1a4e_a1_b(tv1)) {
				tv0->AddReply(527225, 28534, 28533);
			}
			if (f_1aac_a1_b(tv1) && f_1ab6_a1_b(tv1) && f_1b82_a1_b(tv1)) {
				tv0->AddReply(539811, 41764, 41763);
			}
			if (f_1ad4_a1_b(tv1) && f_1ac0_a1_b(tv1) && f_1b8e_a1_b(tv1)) {
				tv0->AddReply(539814, 41767, 41766);
			}
			if (f_1ad4_a1_b(tv1) && f_1ae8_a1_b(tv1) && f_1b9a_a1_b(tv1)) {
				tv0->AddReply(539817, 41770, 41769);
			}
			if (f_1a7e_a1_b(tv1) && f_1ba6_a1_b(tv1)) {
				tv0->AddReply(539820, 41773, 41772);
			}
			tv0->AddReply(527182, -1, 28490);
			tv0->AddReply(538653, -1, 40547);
			break;
			return;
		}
		if (f_186b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_176e_a1_v(tv2);
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

	void f_d61_a1_v(string a0)
	{
		if (!f_186b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1775_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_178a_a0_v();
			if (a1 == 28576) {
				f_18cd_a2_v(tv1, tv0);
			}
			if (a1 == 28568) {
				f_18cd_a2_v(tv1, tv0);
			}
			if (a1 == 28569) {
				f_18cd_a2_v(tv1, tv0);
			}
			if (a1 == 28541) {
				f_18d9_a2_v(tv1, tv0);
			}
			if (a1 == 28590) {
				f_18d9_a2_v(tv1, tv0);
			}
			if (a1 == 41763) {
				f_1972_a2_v(tv1, tv0);
			}
			if (a1 == 41766) {
				f_1978_a2_v(tv1, tv0);
			}
			if (a1 == 41768) {
				f_1943_a2_v(tv1, tv0);
				f_19a0_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
				f_19c2_a2_v(tv1, tv0);
				f_19d8_a2_v(tv1, tv0);
			}
			if (a1 == 41769) {
				f_197e_a2_v(tv1, tv0);
			}
			if (a1 == 41771) {
				f_1874_a2_v(tv1, tv0);
			}
			if (a1 == 41772) {
				f_1984_a2_v(tv1, tv0);
			}
			if (a1 == 41776) {
				f_19ab_a2_v(tv1, tv0);
				f_19a0_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
				f_187b_a2_v(tv1, tv0);
				f_19d8_a2_v(tv1, tv0);
				f_19cd_a2_v(tv1, tv0);
			}
			if (a1 == 41777) {
				f_19ab_a2_v(tv1, tv0);
				f_19a0_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
				f_19d8_a2_v(tv1, tv0);
				f_187b_a2_v(tv1, tv0);
			}
			if (a1 == 41778) {
				f_19ab_a2_v(tv1, tv0);
				f_19a0_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
				f_19cd_a2_v(tv1, tv0);
				f_187b_a2_v(tv1, tv0);
			}
			if (a0 == 28481) {
				if (f_1a36_a1_b(tv1)) {
					f_18c7_a2_v(tv1, tv0);
					f_d61_a1_v("Neutral");
					tv0->SetMessage(527173);
					tv0->ClearReplies();
					tv0->AddReply(527174, 28483, 28482);
					tv0->AddReply(527255, 28483, 28565);
					return;
				}
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527177);
				tv0->ClearReplies();
				if (f_1a42_a1_b(tv1)) {
					tv0->AddReply(527179, 28488, 28487);
				}
				if (f_1a4e_a1_b(tv1)) {
					tv0->AddReply(527225, 28534, 28533);
				}
				if (f_1aac_a1_b(tv1) && f_1ab6_a1_b(tv1) && f_1b82_a1_b(tv1)) {
					tv0->AddReply(539811, 41764, 41763);
				}
				if (f_1ad4_a1_b(tv1) && f_1ac0_a1_b(tv1) && f_1b8e_a1_b(tv1)) {
					tv0->AddReply(539814, 41767, 41766);
				}
				if (f_1ad4_a1_b(tv1) && f_1ae8_a1_b(tv1) && f_1b9a_a1_b(tv1)) {
					tv0->AddReply(539817, 41770, 41769);
				}
				if (f_1a7e_a1_b(tv1) && f_1ba6_a1_b(tv1)) {
					tv0->AddReply(539820, 41773, 41772);
				}
				tv0->AddReply(527182, -1, 28490);
				tv0->AddReply(538653, -1, 40547);
				return;
			}
			if (a0 == 41773) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(539821);
				tv0->ClearReplies();
				tv0->AddReply(539822, 41775, 41774);
				tv0->AddReply(539826, -1, 41778);
				return;
			}
			if (a0 == 41775) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(539823);
				tv0->ClearReplies();
				tv0->AddReply(539824, -1, 41776);
				tv0->AddReply(539825, -1, 41777);
				return;
			}
			if (a0 == 41770) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(539818);
				tv0->ClearReplies();
				tv0->AddReply(539819, -1, 41771);
				return;
			}
			if (a0 == 41767) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(539815);
				tv0->ClearReplies();
				tv0->AddReply(539816, -1, 41768);
				return;
			}
			if (a0 == 41764) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(539812);
				tv0->ClearReplies();
				tv0->AddReply(539813, -1, 41765);
				return;
			}
			if (a0 == 28534) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527226);
				tv0->ClearReplies();
				tv0->AddReply(527227, 28577, 28535);
				return;
			}
			if (a0 == 28577) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527266);
				tv0->ClearReplies();
				tv0->AddReply(527267, 28579, 28578);
				return;
			}
			if (a0 == 28579) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527268);
				tv0->ClearReplies();
				tv0->AddReply(527269, 28581, 28580);
				return;
			}
			if (a0 == 28581) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527270);
				tv0->ClearReplies();
				tv0->AddReply(527271, 28536, 28582);
				tv0->AddReply(527283, 28536, 28595);
				return;
			}
			if (a0 == 28536) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527228);
				tv0->ClearReplies();
				tv0->AddReply(527273, 28585, 28584);
				return;
			}
			if (a0 == 28585) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527274);
				tv0->ClearReplies();
				tv0->AddReply(527280, 28592, 28591);
				return;
			}
			if (a0 == 28592) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527281);
				tv0->ClearReplies();
				tv0->AddReply(527277, 28589, 28588);
				return;
			}
			if (a0 == 28589) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527278);
				tv0->ClearReplies();
				tv0->AddReply(527229, 28538, 28537);
				return;
			}
			if (a0 == 28538) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527230);
				tv0->ClearReplies();
				tv0->AddReply(527231, 28540, 28539);
				tv0->AddReply(527282, 28540, 28593);
				return;
			}
			if (a0 == 28540) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527232);
				tv0->ClearReplies();
				tv0->AddReply(527233, -1, 28541);
				tv0->AddReply(527279, -1, 28590);
				return;
			}
			if (a0 == 28488) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527180);
				tv0->ClearReplies();
				tv0->AddReply(527181, 28567, 28489);
				return;
			}
			if (a0 == 28567) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527256);
				tv0->ClearReplies();
				tv0->AddReply(527257, -1, 28568);
				tv0->AddReply(527258, -1, 28569);
				return;
			}
			if (a0 == 28483) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527175);
				tv0->ClearReplies();
				tv0->AddReply(527176, 28547, 28484);
				tv0->AddReply(527178, 28555, 28486);
				return;
			}
			if (a0 == 28555) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527247);
				tv0->ClearReplies();
				tv0->AddReply(527248, 28549, 28556);
				return;
			}
			if (a0 == 28547) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527239);
				tv0->ClearReplies();
				tv0->AddReply(527240, 28549, 28548);
				return;
			}
			if (a0 == 28549) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527241);
				tv0->ClearReplies();
				tv0->AddReply(527242, 28551, 28550);
				return;
			}
			if (a0 == 28551) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527243);
				tv0->ClearReplies();
				tv0->AddReply(527244, 28553, 28552);
				return;
			}
			if (a0 == 28553) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527245);
				tv0->ClearReplies();
				tv0->AddReply(527250, 28560, 28559);
				return;
			}
			if (a0 == 28560) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527251);
				tv0->ClearReplies();
				tv0->AddReply(527246, 28558, 28554);
				tv0->AddReply(527252, 28558, 28561);
				return;
			}
			if (a0 == 28558) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527249);
				tv0->ClearReplies();
				tv0->AddReply(527253, 28570, 28563);
				tv0->AddReply(527254, -1, 28564);
				return;
			}
			if (a0 == 28570) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527259);
				tv0->ClearReplies();
				tv0->AddReply(527260, 28572, 28571);
				return;
			}
			if (a0 == 28572) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527261);
				tv0->ClearReplies();
				tv0->AddReply(527262, 28575, 28573);
				return;
			}
			if (a0 == 28575) {
				f_d61_a1_v("Neutral");
				tv0->SetMessage(527264);
				tv0->ClearReplies();
				tv0->AddReply(527265, -1, 28576);
				return;
			}
			tv3 = true;
			if (f_186b_a0_b()) {
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
		f_16e4_a1_b(f_1791_a0_o());
		if (!f_168f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1865_a0_i());
		L0->SetNPCDescription(f_1863_a0_i());
		L0->SetPhoto(f_1867_a0_s());
		L0->SetPhoto2(f_1869_a0_s());
		L0->SetPlayerName(f_1cc6_a0_i());
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
		f_16d3_a1_v(a0);
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
			f_11af_a1_v("Neutral");
			tv0->SetMessage(539195);
			tv0->ClearReplies();
			tv0->AddReply(539196, -1, 41139);
			tv0->AddReply(539197, -1, 41140);
			break;
			return;
		}
		if (f_186b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_176e_a1_v(tv2);
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

	void f_11af_a1_v(string a0)
	{
		if (!f_186b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1775_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_178a_a0_v();
			if (a0 == 41138) {
				f_11af_a1_v("Neutral");
				tv0->SetMessage(539195);
				tv0->ClearReplies();
				tv0->AddReply(539196, -1, 41139);
				tv0->AddReply(539197, -1, 41140);
				return;
			}
			tv3 = true;
			if (f_186b_a0_b()) {
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
		f_16e4_a1_b(f_1791_a0_o());
		if (!f_168f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1865_a0_i());
		L0->SetNPCDescription(f_1863_a0_i());
		L0->SetPhoto(f_1867_a0_s());
		L0->SetPhoto2(f_1869_a0_s());
		L0->SetPlayerName(f_1cc6_a0_i());
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
		f_16d3_a1_v(a0);
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
			f_12e1_a1_v("Neutral");
			tv0->SetMessage(539793);
			tv0->ClearReplies();
			if (f_1aac_a1_b(tv1) && f_1ab6_a1_b(tv1) && f_1b52_a1_b(tv1)) {
				tv0->AddReply(539794, 41747, 41746);
			}
			if (f_1aac_a1_b(tv1) && f_1ade_a1_b(tv1) && f_1b5e_a1_b(tv1)) {
				tv0->AddReply(539797, 41750, 41749);
			}
			if (f_1aac_a1_b(tv1) && f_1aca_a1_b(tv1) && f_1b6a_a1_b(tv1)) {
				tv0->AddReply(539800, 41753, 41752);
			}
			if (f_1a7e_a1_b(tv1) && f_1b76_a1_b(tv1)) {
				tv0->AddReply(539803, 41756, 41755);
			}
			tv0->AddReply(539810, -1, 41762);
			tv0->AddReply(541106, -1, 43219);
			break;
			return;
		}
		if (f_186b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_176e_a1_v(tv2);
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

	void f_12e1_a1_v(string a0)
	{
		if (!f_186b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1775_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_178a_a0_v();
			if (a1 == 41746) {
				f_195a_a2_v(tv1, tv0);
			}
			if (a1 == 41749) {
				f_1960_a2_v(tv1, tv0);
			}
			if (a1 == 41751) {
				f_1943_a2_v(tv1, tv0);
				f_19a0_a2_v(tv1, tv0);
				f_19e3_a2_v(tv1, tv0);
				f_19c2_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
			}
			if (a1 == 41752) {
				f_1966_a2_v(tv1, tv0);
			}
			if (a1 == 41754) {
				f_1874_a2_v(tv1, tv0);
			}
			if (a1 == 41755) {
				f_196c_a2_v(tv1, tv0);
			}
			if (a1 == 41759) {
				f_19ab_a2_v(tv1, tv0);
				f_19a0_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
				f_187b_a2_v(tv1, tv0);
			}
			if (a1 == 41760) {
				f_19ab_a2_v(tv1, tv0);
				f_19a0_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
				f_187b_a2_v(tv1, tv0);
			}
			if (a1 == 41761) {
				f_19ab_a2_v(tv1, tv0);
				f_19a0_a2_v(tv1, tv0);
				f_1907_a2_v(tv1, tv0);
				f_187b_a2_v(tv1, tv0);
			}
			if (a0 == 41745) {
				f_12e1_a1_v("Neutral");
				tv0->SetMessage(539793);
				tv0->ClearReplies();
				if (f_1aac_a1_b(tv1) && f_1ab6_a1_b(tv1) && f_1b52_a1_b(tv1)) {
					tv0->AddReply(539794, 41747, 41746);
				}
				if (f_1aac_a1_b(tv1) && f_1ade_a1_b(tv1) && f_1b5e_a1_b(tv1)) {
					tv0->AddReply(539797, 41750, 41749);
				}
				if (f_1aac_a1_b(tv1) && f_1aca_a1_b(tv1) && f_1b6a_a1_b(tv1)) {
					tv0->AddReply(539800, 41753, 41752);
				}
				if (f_1a7e_a1_b(tv1) && f_1b76_a1_b(tv1)) {
					tv0->AddReply(539803, 41756, 41755);
				}
				tv0->AddReply(539810, -1, 41762);
				tv0->AddReply(541106, -1, 43219);
				return;
			}
			if (a0 == 41756) {
				f_12e1_a1_v("Neutral");
				tv0->SetMessage(539804);
				tv0->ClearReplies();
				tv0->AddReply(539805, 41758, 41757);
				tv0->AddReply(539809, -1, 41761);
				return;
			}
			if (a0 == 41758) {
				f_12e1_a1_v("Neutral");
				tv0->SetMessage(539806);
				tv0->ClearReplies();
				tv0->AddReply(539807, -1, 41759);
				tv0->AddReply(539808, -1, 41760);
				return;
			}
			if (a0 == 41753) {
				f_12e1_a1_v("Neutral");
				tv0->SetMessage(539801);
				tv0->ClearReplies();
				tv0->AddReply(539802, -1, 41754);
				return;
			}
			if (a0 == 41750) {
				f_12e1_a1_v("Neutral");
				tv0->SetMessage(539798);
				tv0->ClearReplies();
				tv0->AddReply(539799, -1, 41751);
				return;
			}
			if (a0 == 41747) {
				f_12e1_a1_v("Neutral");
				tv0->SetMessage(539795);
				tv0->ClearReplies();
				tv0->AddReply(539796, -1, 41748);
				return;
			}
			tv3 = true;
			if (f_186b_a0_b()) {
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
		f_16e4_a1_b(f_1791_a0_o());
		if (!f_168f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1865_a0_i());
		L0->SetNPCDescription(f_1863_a0_i());
		L0->SetPhoto(f_1867_a0_s());
		L0->SetPhoto2(f_1869_a0_s());
		L0->SetPlayerName(f_1cc6_a0_i());
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
		f_16d3_a1_v(a0);
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
			f_1500_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_186b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_176e_a1_v(tv2);
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

	void f_1500_a1_v(string a0)
	{
		if (!f_186b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1775_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_178a_a0_v();
			if (a0 == 42548) {
				f_1500_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_186b_a0_b()) {
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
		f_1544_a0_v();
	}

	void f_1544_a0_v(void)
	{
		if (!f_168a_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_15fa_a0_v();
		}
	}

	bool f_1558_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1681_a1_b(L0);
	}

	void f_1567_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_156c_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1646_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1582_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_158b_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_158b_a0_v();
			if (f_168a_a0_b() && f_156c_a0_b()) {
				if (f_1558_a0_b()) {
					f_171e_a1_b(f_1791_a0_o());
				}
			} else {
				f_1567_a0_v();
				f_1582_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1641_a0_v();
		f_158b_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_158b_a0_v();
		f_176e_a1_v("Neutral");
		f_1582_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1582_a0_v();
		} else {
			f_176e_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1641_a0_v();
			f_1681_a1_b(a0);
			enable OnUse;
			f_1d2f_a1_v(a0);
			f_176e_a1_v("Neutral");
			f_158b_a0_v();
			f_1582_a0_v();
		}
	}
}

void f_15fa_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_168a_a0_b()) {
		return;
	}
	L0 = f_1852_a0_i();
	for (L1 = 0; L1 < 5 && f_168a_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_184b_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_163f_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_163f_a0_b(void)
{
	return true;
}

void f_1641_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1646_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_164e_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_165a_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_164e_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_17a1_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_1670_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1677_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1681_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1677_a1_b(L0);
}

bool f_168a_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_168f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1797_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_186b_a0_b()) {
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

void f_16d3_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_186b_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_16e4_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_171e_a1_b(a0)) {
			if (!f_1743_a1_b(a0)) {
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
		if (!f_1743_a1_b(a0)) {
			if (!f_171e_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_171e_a1_b(object a0)
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
	return f_177b_a1_b(L4);
}

bool f_1743_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1829_a0_i() + "m";
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
	return f_177b_a1_b(L4);
}

void f_176e_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1775_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_177b_a1_b(string a0)
{
	if (f_186b_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_178a_a0_v(void)
{
	if (f_186b_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1791_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1797_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_17a1_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_17ac_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_17b1_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_17bd_a2_v(object a0, int a1)
{
	f_1670_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_17b1_a2_v(L0, a1);
	}
}

void f_17d0_a3_v(object a0, object a1, int a2)
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
		f_17b1_a2_v(L0, a2);
	}
}

void f_17e3_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_17d0_a3_v(a0, L0, a2);
}

bool f_17f0_a2_b(object a0, float a1)
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
	f_1813_a1_v(a1);
	f_165a_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_1813_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_181d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_1829_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1832_a1_b(int a0)
{
	return f_1829_a0_i() == a0;
}

bool f_1838_a1_b(int a0)
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

string f_184b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1852_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_184b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1863_a0_i(void)
{
	return 515527;
}

int f_1865_a0_i(void)
{
	return 513334;
}

string f_1867_a0_s(void)
{
	return "ui/NPC_Aglaja.png";
}

string f_1869_a0_s(void)
{
	return "ui/NPC_Aglaja_b.png";
}

bool f_186b_a0_b(void)
{
	return true;
}

void f_186d_a2_v(object a0, object a1)
{
	f_17f0_a2_b(a0, 0.05000000074505806);
}

void f_1874_a2_v(object a0, object a1)
{
	f_17f0_a2_b(a0, -0.05000000074505806);
}

void f_187b_a2_v(object a0, object a1)
{
	@Trace("beta_pills 5 is given");
	f_17e3_a3_v(a0, "beta_pills", 5);
}

void f_1886_a2_v(object a0, object a1)
{
	@SetVariable("k7q01", 1);
	f_1c1b_a0_v();
	f_1c28_a0_v();
	f_181d_a2_b("quest_k7_01", "place_danko");
}

void f_1897_a2_v(object a0, object a1)
{
	f_1c35_a0_v();
	f_181d_a2_b("quest_k7_01", "completed");
}

void f_18a1_a2_v(object a0, object a1)
{
	f_1c42_a0_v();
	f_181d_a2_b("quest_k7_01", "completed");
}

void f_18ab_a2_v(object a0, object a1)
{
	@SetVariable("ook8Aglaja1", 1);
}

void f_18b1_a2_v(object a0, object a1)
{
	@SetVariable("k8q01", 1);
	f_1c4f_a0_v();
	f_1c5c_a0_v();
}

void f_18bd_a2_v(object a0, object a1)
{
	f_1c69_a0_v();
	f_181d_a2_b("quest_k8_01", "completed");
}

void f_18c7_a2_v(object a0, object a1)
{
	@SetVariable("ook11Aglaja1", 1);
}

void f_18cd_a2_v(object a0, object a1)
{
	@SetVariable("k11q01", 1);
	f_1be7_a0_v();
	f_1c01_a0_v();
}

void f_18d9_a2_v(object a0, object a1)
{
	@SetVariable("k11q01", 8);
	f_1bf4_a0_v();
}

void f_18e2_a2_v(object a0, object a1)
{
	@SetVariable("ook9Aglaja1", 1);
}

void f_18e8_a2_v(object a0, object a1)
{
	@SetVariable("k9q01", 1);
	f_1c76_a0_v();
	f_1c90_a0_v();
}

void f_18f4_a2_v(object a0, object a1)
{
	@SetVariable("k9q01", 8);
	f_1c83_a0_v();
}

void f_18fd_a2_v(object a0, object a1)
{
	@Trace("money1000 is given");
	f_17bd_a2_v(a0, 1000);
}

void f_1907_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_190d_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1913_a2_v(object a0, object a1)
{
	@SetVariable("ook7Aglaja1", 1);
}

void f_1919_a2_v(object a0, object a1)
{
	@SetVariable("ook8Aglaja2", 1);
}

void f_191f_a2_v(object a0, object a1)
{
	@SetVariable("ook9Aglaja2", 1);
}

void f_1925_a2_v(object a0, object a1)
{
	@SetVariable("ook7Aglaja2", 1);
}

void f_192b_a2_v(object a0, object a1)
{
	@SetVariable("ook7Aglaja3", 1);
}

void f_1931_a2_v(object a0, object a1)
{
	@SetVariable("ook8Aglaja3", 1);
}

void f_1937_a2_v(object a0, object a1)
{
	@SetVariable("ook8Aglaja4", 1);
}

void f_193d_a2_v(object a0, object a1)
{
	@SetVariable("ook8Aglaja5", 1);
}

void f_1943_a2_v(object a0, object a1)
{
	f_1c0e_a0_v();
}

void f_1948_a2_v(object a0, object a1)
{
	@SetVariable("ook9Aglaja3", 1);
}

void f_194e_a2_v(object a0, object a1)
{
	@SetVariable("ook9Aglaja4", 1);
}

void f_1954_a2_v(object a0, object a1)
{
	@SetVariable("ook9Aglaja5", 1);
}

void f_195a_a2_v(object a0, object a1)
{
	@SetVariable("ook10Aglaja1", 1);
}

void f_1960_a2_v(object a0, object a1)
{
	@SetVariable("ook10Aglaja2", 1);
}

void f_1966_a2_v(object a0, object a1)
{
	@SetVariable("ook10Aglaja3", 1);
}

void f_196c_a2_v(object a0, object a1)
{
	@SetVariable("ook10Aglaja4", 1);
}

void f_1972_a2_v(object a0, object a1)
{
	@SetVariable("ook11Aglaja2", 1);
}

void f_1978_a2_v(object a0, object a1)
{
	@SetVariable("ook11Aglaja3", 1);
}

void f_197e_a2_v(object a0, object a1)
{
	@SetVariable("ook11Aglaja4", 1);
}

void f_1984_a2_v(object a0, object a1)
{
	@SetVariable("ook11Aglaja5", 1);
}

void f_198a_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_17bd_a2_v(a0, L0 + 2000);
}

void f_1995_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_17bd_a2_v(a0, L0 + 3000);
}

void f_19a0_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_17bd_a2_v(a0, L0 + 4000);
}

void f_19ab_a2_v(object a0, object a1)
{
	f_17f0_a2_b(a0, 0.30000001192092896);
}

void f_19b2_a2_v(object a0, object a1)
{
	f_17f0_a2_b(a0, 0.5);
}

void f_19b9_a2_v(object a0, object a1)
{
	f_17f0_a2_b(a0, -0.5);
}

void f_19c0_a2_v(object a0, object a1)
{
}

void f_19c2_a2_v(object a0, object a1)
{
	@Trace("feromicin is given");
	f_17e3_a3_v(a0, "feromicin", 1);
}

void f_19cd_a2_v(object a0, object a1)
{
	@Trace("gamma_pills is given");
	f_17e3_a3_v(a0, "gamma_pills", 1);
}

void f_19d8_a2_v(object a0, object a1)
{
	@Trace("delta_pills is given");
	f_17e3_a3_v(a0, "delta_pills", 1);
}

void f_19e3_a2_v(object a0, object a1)
{
	@Trace("monomicin is given");
	f_17e3_a3_v(a0, "monomicin", 1);
}

bool f_19ee_a1_b(object a0)
{
	if (f_17ac_a1_i("k7q01") == 0) {
		return true;
	}
	return false;
}

bool f_19fa_a1_b(object a0)
{
	if (f_17ac_a1_i("k7q01") == 1) {
		return true;
	}
	return false;
}

bool f_1a06_a1_b(object a0)
{
	if (f_17ac_a1_i("k7q01") == 9) {
		return true;
	}
	return false;
}

bool f_1a12_a1_b(object a0)
{
	if (f_17ac_a1_i("ook8Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1a1e_a1_b(object a0)
{
	if (f_17ac_a1_i("k8q01") == 0) {
		return true;
	}
	return false;
}

bool f_1a2a_a1_b(object a0)
{
	if (f_17ac_a1_i("k8q01") == 7) {
		return true;
	}
	return false;
}

bool f_1a36_a1_b(object a0)
{
	if (f_17ac_a1_i("ook11Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1a42_a1_b(object a0)
{
	if (f_17ac_a1_i("k11q01") == 0) {
		return true;
	}
	return false;
}

bool f_1a4e_a1_b(object a0)
{
	if (f_17ac_a1_i("k11q01") == 7) {
		return true;
	}
	return false;
}

bool f_1a5a_a1_b(object a0)
{
	if (f_17ac_a1_i("ook9Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1a66_a1_b(object a0)
{
	if (f_17ac_a1_i("k9q01") == 0) {
		return true;
	}
	return false;
}

bool f_1a72_a1_b(object a0)
{
	if (f_17ac_a1_i("k9q01") == 7) {
		return true;
	}
	return false;
}

bool f_1a7e_a1_b(object a0)
{
	if (f_1bb2_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1a88_a1_b(object a0)
{
	if (f_17ac_a1_i("ook7Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1a94_a1_b(object a0)
{
	if (f_17ac_a1_i("ook8Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_1aa0_a1_b(object a0)
{
	if (f_17ac_a1_i("ook9Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_1aac_a1_b(object a0)
{
	if (f_1bbd_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1ab6_a1_b(object a0)
{
	if (f_1bc3_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1ac0_a1_b(object a0)
{
	if (f_1bc9_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1aca_a1_b(object a0)
{
	if (f_1bcf_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1ad4_a1_b(object a0)
{
	if (f_1bd5_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1ade_a1_b(object a0)
{
	if (f_1bdb_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1ae8_a1_b(object a0)
{
	if (f_1be1_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1af2_a1_b(object a0)
{
	if (f_17ac_a1_i("ook7Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_1afe_a1_b(object a0)
{
	if (f_17ac_a1_i("ook7Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_1b0a_a1_b(object a0)
{
	if (f_17ac_a1_i("ook8Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_1b16_a1_b(object a0)
{
	if (f_17ac_a1_i("ook8Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_1b22_a1_b(object a0)
{
	if (f_17ac_a1_i("ook8Aglaja5") == 0) {
		return true;
	}
	return false;
}

bool f_1b2e_a1_b(object a0)
{
	if (f_17ac_a1_i("ook9Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_1b3a_a1_b(object a0)
{
	if (f_17ac_a1_i("ook9Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_1b46_a1_b(object a0)
{
	if (f_17ac_a1_i("ook9Aglaja5") == 0) {
		return true;
	}
	return false;
}

bool f_1b52_a1_b(object a0)
{
	if (f_17ac_a1_i("ook10Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1b5e_a1_b(object a0)
{
	if (f_17ac_a1_i("ook10Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_1b6a_a1_b(object a0)
{
	if (f_17ac_a1_i("ook10Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_1b76_a1_b(object a0)
{
	if (f_17ac_a1_i("ook10Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_1b82_a1_b(object a0)
{
	if (f_17ac_a1_i("ook11Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_1b8e_a1_b(object a0)
{
	if (f_17ac_a1_i("ook11Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_1b9a_a1_b(object a0)
{
	if (f_17ac_a1_i("ook11Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_1ba6_a1_b(object a0)
{
	if (f_17ac_a1_i("ook11Aglaja5") == 0) {
		return true;
	}
	return false;
}

bool f_1bb2_a1_b(object a0)
{
	return f_1cd7_a1_b(f_1829_a0_i() - 1);
}

bool f_1bbd_a1_b(object a0)
{
	return f_1d15_a0_b();
}

bool f_1bc3_a1_b(object a0)
{
	return f_1d29_a0_b();
}

bool f_1bc9_a1_b(object a0)
{
	return f_1d1d_a0_b();
}

bool f_1bcf_a1_b(object a0)
{
	return f_1d23_a0_b();
}

bool f_1bd5_a1_b(object a0)
{
	return f_1d01_a0_b();
}

bool f_1bdb_a1_b(object a0)
{
	return f_1d09_a0_b();
}

bool f_1be1_a1_b(object a0)
{
	return f_1d0f_a0_b();
}

void f_1be7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 480, 1, 528047);
	f_1caa_a2_b(L0, -1);
}

void f_1bf4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 491, 1, 528058);
	f_1caa_a2_b(L0, 480);
}

void f_1c01_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 481, 1, 528048);
	f_1caa_a2_b(L0, 480);
}

void f_1c0e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 756, 2, 539741);
	f_1caa_a2_b(L0, 751);
}

void f_1c1b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 416, 1, 526215);
	f_1caa_a2_b(L0, -1);
}

void f_1c28_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 417, 1, 526216);
	f_1caa_a2_b(L0, 416);
}

void f_1c35_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 428, 1, 526227);
	f_1caa_a2_b(L0, 416);
}

void f_1c42_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 429, 1, 526228);
	f_1caa_a2_b(L0, 416);
}

void f_1c4f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 438, 1, 526463);
	f_1caa_a2_b(L0, -1);
}

void f_1c5c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 439, 1, 526464);
	f_1caa_a2_b(L0, 438);
}

void f_1c69_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 446, 1, 526471);
	f_1caa_a2_b(L0, 438);
}

void f_1c76_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 517, 1, 529809);
	f_1caa_a2_b(L0, -1);
}

void f_1c83_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 525, 1, 529817);
	f_1caa_a2_b(L0, 517);
}

void f_1c90_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 518, 1, 529810);
	f_1caa_a2_b(L0, 517);
}

object f_1c9d_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1caa_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1c9d_a0_o();
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

int f_1cc6_a0_i(void)
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

bool f_1cd7_a1_b(int a0)
{
	int L0;
	@GetVariable("K2System" + a0, L0);
	return L0 != 0;
}

int f_1cdf_a0_i(void)
{
	int L0;
	@GetVariable("k2system_burah_day", L0);
	return L0;
}

int f_1ce5_a0_i(void)
{
	int L0;
	@GetVariable("k2system_danko_day", L0);
	return L0;
}

int f_1ceb_a0_i(void)
{
	int L0;
	int L1;
	L0 = f_1cdf_a0_i();
	@GetVariable("k2system_burah_state" + L0, L1);
	return L1;
}

int f_1cf6_a0_i(void)
{
	int L0;
	int L1;
	L0 = f_1ce5_a0_i();
	@GetVariable("k2system_danko_state" + L0, L1);
	return L1;
}

bool f_1d01_a0_b(void)
{
	return f_1829_a0_i() == f_1ce5_a0_i();
}

bool f_1d09_a0_b(void)
{
	return f_1cf6_a0_i() == 2;
}

bool f_1d0f_a0_b(void)
{
	return f_1cf6_a0_i() == 3;
}

bool f_1d15_a0_b(void)
{
	return f_1829_a0_i() == f_1cdf_a0_i();
}

bool f_1d1d_a0_b(void)
{
	return f_1ceb_a0_i() == 2;
}

bool f_1d23_a0_b(void)
{
	return f_1ceb_a0_i() == 3;
}

bool f_1d29_a0_b(void)
{
	return f_1ceb_a0_i() == 0;
}

void f_1d2f_a1_v(object a0)
{
	if (f_1838_a1_b(12)) {
		t9{a0};
		return;
	}
	if (f_1832_a1_b(7)) {
		t1{a0};
		return;
	}
	if (f_1832_a1_b(8)) {
		t3{a0};
		return;
	}
	if (f_1832_a1_b(9)) {
		t5{a0};
		return;
	}
	if (f_1832_a1_b(10)) {
		t11{a0};
		return;
	}
	if (f_1832_a1_b(11)) {
		t7{a0};
		return;
	}
	t13{a0};
}

