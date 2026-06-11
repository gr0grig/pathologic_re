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
		if (!f_1c3f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1e35_a0_i());
		L0->SetNPCDescription(f_1e33_a0_i());
		L0->SetPhoto(f_1e37_a0_s());
		L0->SetPhoto2(f_1e39_a0_s());
		L0->SetPlayerName(f_2304_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1c96_a1_b(f_1d55_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1c84_a1_v(a0);
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
			if (f_2006_a1_b(tv1)) {
				f_1f87_a2_v(tv1, tv0);
				f_1fa5_a2_v(tv1, tv0);
				f_e9_a1_v("Confusion");
				tv0->SetMessage(526139);
				tv0->ClearReplies();
				tv0->AddReply(528171, 29526, 29525);
				tv0->AddReply(528185, 29500, 29540);
				break;
			}
			f_1fa5_a2_v(tv1, tv0);
			f_e9_a1_v("Neutral");
			tv0->SetMessage(526149);
			tv0->ClearReplies();
			if (f_21c0_a1_b(tv1)) {
				tv0->AddReply(541891, 44131, 44129);
			}
			if (f_201e_a1_b(tv1)) {
				tv0->AddReply(526208, 29542, 27489);
			}
			if (f_2100_a1_b(tv1)) {
				tv0->AddReply(528192, 29552, 29548);
			}
			if (f_210c_a1_b(tv1)) {
				tv0->AddReply(528193, 29562, 29549);
			}
			if (f_2096_a1_b(tv1) && f_20a0_a1_b(tv1)) {
				tv0->AddReply(538631, 40523, 40522);
			}
			tv0->AddReply(526150, -1, 27429);
			break;
			return;
		}
		if (f_1e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1d20_a1_v(tv2);
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

	void f_e9_a1_v(string a0)
	{
		if (!f_1e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1d30_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1d4e_a0_v();
			if (a1 == 27427) {
				f_1e56_a2_v(tv1, tv0);
			}
			if (a1 == 44129) {
				f_1f9f_a2_v(tv1, tv0);
			}
			if (a1 == 27493) {
				f_1e67_a2_v(tv1, tv0);
				f_1fd1_a2_v(tv1, tv0);
			}
			if (a1 == 27494) {
				f_1e7d_a2_v(tv1, tv0);
				f_1fca_a2_v(tv1, tv0);
			}
			if (a1 == 29548) {
				f_1f01_a2_v(tv1, tv0);
			}
			if (a1 == 29549) {
				f_1f07_a2_v(tv1, tv0);
			}
			if (a1 == 40522) {
				f_1eef_a2_v(tv1, tv0);
			}
			if (a1 == 40535) {
				f_1fc3_a2_v(tv1, tv0);
				f_1f66_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
			}
			if (a0 == 27418) {
				if (f_2006_a1_b(tv1)) {
					f_1f87_a2_v(tv1, tv0);
					f_1fa5_a2_v(tv1, tv0);
					f_e9_a1_v("Confusion");
					tv0->SetMessage(526139);
					tv0->ClearReplies();
					tv0->AddReply(528171, 29526, 29525);
					tv0->AddReply(528185, 29500, 29540);
					return;
				}
				f_1fa5_a2_v(tv1, tv0);
				f_e9_a1_v("Neutral");
				tv0->SetMessage(526149);
				tv0->ClearReplies();
				if (f_21c0_a1_b(tv1)) {
					tv0->AddReply(541891, 44131, 44129);
				}
				if (f_201e_a1_b(tv1)) {
					tv0->AddReply(526208, 29542, 27489);
				}
				if (f_2100_a1_b(tv1)) {
					tv0->AddReply(528192, 29552, 29548);
				}
				if (f_210c_a1_b(tv1)) {
					tv0->AddReply(528193, 29562, 29549);
				}
				if (f_2096_a1_b(tv1) && f_20a0_a1_b(tv1)) {
					tv0->AddReply(538631, 40523, 40522);
				}
				tv0->AddReply(526150, -1, 27429);
				return;
			}
			if (a0 == 40523) {
				f_e9_a1_v("Threat");
				tv0->SetMessage(538632);
				tv0->ClearReplies();
				tv0->AddReply(538633, 40526, 40524);
				tv0->AddReply(538634, 40528, 40525);
				return;
			}
			if (a0 == 40528) {
				f_e9_a1_v("Threat");
				tv0->SetMessage(538636);
				tv0->ClearReplies();
				tv0->AddReply(538637, 40532, 40529);
				tv0->AddReply(538639, 40532, 40531);
				return;
			}
			if (a0 == 40526) {
				f_e9_a1_v("Threat");
				tv0->SetMessage(538635);
				tv0->ClearReplies();
				tv0->AddReply(538638, 40532, 40530);
				return;
			}
			if (a0 == 40532) {
				f_e9_a1_v("Threat");
				tv0->SetMessage(538640);
				tv0->ClearReplies();
				tv0->AddReply(538641, -1, 40535);
				tv0->AddReply(541892, -1, 44130);
				return;
			}
			if (a0 == 29562) {
				f_e9_a1_v("Isee");
				tv0->SetMessage(528205);
				tv0->ClearReplies();
				tv0->AddReply(528206, -1, 29563);
				tv0->AddReply(541051, -1, 43153);
				return;
			}
			if (a0 == 29552) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(528195);
				tv0->ClearReplies();
				tv0->AddReply(528196, 29554, 29553);
				tv0->AddReply(541889, -1, 44126);
				return;
			}
			if (a0 == 29554) {
				f_e9_a1_v("Confusion");
				tv0->SetMessage(528197);
				tv0->ClearReplies();
				tv0->AddReply(528198, 29558, 29555);
				tv0->AddReply(541890, 29556, 44127);
				return;
			}
			if (a0 == 29556) {
				f_e9_a1_v("Confusion");
				tv0->SetMessage(528199);
				tv0->ClearReplies();
				tv0->AddReply(528200, 29558, 29557);
				return;
			}
			if (a0 == 29558) {
				f_e9_a1_v("Confusion");
				tv0->SetMessage(528201);
				tv0->ClearReplies();
				tv0->AddReply(528202, 29560, 29559);
				return;
			}
			if (a0 == 29560) {
				f_e9_a1_v("Threat");
				tv0->SetMessage(528203);
				tv0->ClearReplies();
				tv0->AddReply(528204, -1, 29561);
				tv0->AddReply(541888, -1, 44125);
				return;
			}
			if (a0 == 29542) {
				f_e9_a1_v("Confusion");
				tv0->SetMessage(528186);
				tv0->ClearReplies();
				tv0->AddReply(528187, 27490, 29543);
				tv0->AddReply(541884, 44121, 44120);
				return;
			}
			if (a0 == 44121) {
				f_e9_a1_v("Confusion");
				tv0->SetMessage(541885);
				tv0->ClearReplies();
				tv0->AddReply(541886, 27490, 44122);
				return;
			}
			if (a0 == 27490) {
				f_e9_a1_v("Confusion");
				tv0->SetMessage(526209);
				tv0->ClearReplies();
				tv0->AddReply(528188, 29545, 29544);
				tv0->AddReply(541913, 29545, 44155);
				return;
			}
			if (a0 == 29545) {
				f_e9_a1_v("Threat");
				tv0->SetMessage(528189);
				tv0->ClearReplies();
				tv0->AddReply(526210, 29546, 27491);
				tv0->AddReply(541914, 44158, 44157);
				return;
			}
			if (a0 == 44158) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(541915);
				tv0->ClearReplies();
				tv0->AddReply(541916, 27492, 44159);
				return;
			}
			if (a0 == 29546) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(528190);
				tv0->ClearReplies();
				tv0->AddReply(528191, 27492, 29547);
				tv0->AddReply(528194, 27492, 29550);
				return;
			}
			if (a0 == 27492) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(526211);
				tv0->ClearReplies();
				tv0->AddReply(526212, -1, 27493);
				tv0->AddReply(526213, -1, 27494);
				return;
			}
			if (a0 == 44131) {
				f_e9_a1_v("Confusion");
				tv0->SetMessage(541893);
				tv0->ClearReplies();
				tv0->AddReply(541894, 44137, 44132);
				tv0->AddReply(541895, 44134, 44133);
				return;
			}
			if (a0 == 44134) {
				f_e9_a1_v("Isee");
				tv0->SetMessage(541896);
				tv0->ClearReplies();
				tv0->AddReply(541897, 44137, 44135);
				tv0->AddReply(541898, 44140, 44136);
				return;
			}
			if (a0 == 44137) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(541899);
				tv0->ClearReplies();
				tv0->AddReply(541900, 44140, 44138);
				return;
			}
			if (a0 == 44140) {
				f_e9_a1_v("Threat");
				tv0->SetMessage(541901);
				tv0->ClearReplies();
				tv0->AddReply(541902, 44144, 44141);
				tv0->AddReply(541903, 44144, 44143);
				return;
			}
			if (a0 == 44144) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(541904);
				tv0->ClearReplies();
				tv0->AddReply(541905, 44148, 44146);
				tv0->AddReply(541906, 44151, 44147);
				return;
			}
			if (a0 == 44148) {
				f_e9_a1_v("Threat");
				tv0->SetMessage(541907);
				tv0->ClearReplies();
				tv0->AddReply(541908, 44151, 44149);
				tv0->AddReply(541909, -1, 44150);
				return;
			}
			if (a0 == 44151) {
				f_e9_a1_v("Threat");
				tv0->SetMessage(541910);
				tv0->ClearReplies();
				tv0->AddReply(541911, -1, 44153);
				tv0->AddReply(541912, -1, 44154);
				return;
			}
			if (a0 == 29526) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(528172);
				tv0->ClearReplies();
				tv0->AddReply(526140, 29500, 27419);
				tv0->AddReply(541042, 43140, 43139);
				return;
			}
			if (a0 == 43140) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(541043);
				tv0->ClearReplies();
				tv0->AddReply(541044, 29500, 43141);
				return;
			}
			if (a0 == 29500) {
				f_e9_a1_v("Isee");
				tv0->SetMessage(528148);
				tv0->ClearReplies();
				tv0->AddReply(528149, 44110, 29501);
				tv0->AddReply(541046, 29502, 43144);
				return;
			}
			if (a0 == 44110) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(541877);
				tv0->ClearReplies();
				tv0->AddReply(541878, 29502, 44111);
				tv0->AddReply(541879, 29504, 44112);
				return;
			}
			if (a0 == 29502) {
				f_e9_a1_v("Threat");
				tv0->SetMessage(528150);
				tv0->ClearReplies();
				tv0->AddReply(528151, 29504, 29503);
				tv0->AddReply(541047, 29504, 43146);
				return;
			}
			if (a0 == 29504) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(528152);
				tv0->ClearReplies();
				tv0->AddReply(528153, 29506, 29505);
				tv0->AddReply(541048, 44115, 43148);
				return;
			}
			if (a0 == 44115) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(541881);
				tv0->ClearReplies();
				tv0->AddReply(541882, 27420, 44116);
				tv0->AddReply(541883, 29506, 44117);
				return;
			}
			if (a0 == 29506) {
				f_e9_a1_v("Threat");
				tv0->SetMessage(528154);
				tv0->ClearReplies();
				tv0->AddReply(528155, 27420, 29507);
				return;
			}
			if (a0 == 27420) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(526141);
				tv0->ClearReplies();
				tv0->AddReply(528174, 29529, 29528);
				tv0->AddReply(541049, 29529, 43150);
				return;
			}
			if (a0 == 29529) {
				f_e9_a1_v("Isee");
				tv0->SetMessage(528175);
				tv0->ClearReplies();
				tv0->AddReply(528176, 29531, 29530);
				return;
			}
			if (a0 == 29531) {
				f_e9_a1_v("Isee");
				tv0->SetMessage(528177);
				tv0->ClearReplies();
				tv0->AddReply(526144, 27424, 27423);
				return;
			}
			if (a0 == 27424) {
				f_e9_a1_v("Threat");
				tv0->SetMessage(526145);
				tv0->ClearReplies();
				tv0->AddReply(526146, 27426, 27425);
				return;
			}
			if (a0 == 27426) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(526147);
				tv0->ClearReplies();
				tv0->AddReply(528178, 29533, 29532);
				tv0->AddReply(528182, 29537, 29536);
				return;
			}
			if (a0 == 29537) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(528183);
				tv0->ClearReplies();
				tv0->AddReply(528184, 29533, 29538);
				return;
			}
			if (a0 == 29533) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(528179);
				tv0->ClearReplies();
				tv0->AddReply(528180, 29535, 29534);
				return;
			}
			if (a0 == 29535) {
				f_e9_a1_v("Neutral");
				tv0->SetMessage(528181);
				tv0->ClearReplies();
				tv0->AddReply(526148, -1, 27427);
				if (f_2012_a1_b(tv1)) {
					tv0->AddReply(541050, -1, 43152);
				}
				return;
			}
			tv3 = true;
			if (f_1e3b_a0_b()) {
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
		if (!f_1c3f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1e35_a0_i());
		L0->SetNPCDescription(f_1e33_a0_i());
		L0->SetPhoto(f_1e37_a0_s());
		L0->SetPhoto2(f_1e39_a0_s());
		L0->SetPlayerName(f_2304_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1c96_a1_b(f_1d55_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1c84_a1_v(a0);
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
			if (f_202a_a1_b(tv1)) {
				f_1e87_a2_v(tv1, tv0);
				f_1fab_a2_v(tv1, tv0);
				f_65b_a1_v("Neutral");
				tv0->SetMessage(526396);
				tv0->ClearReplies();
				tv0->AddReply(528207, 29565, 29564);
				tv0->AddReply(528219, 29577, 29576);
				break;
			}
			f_65b_a1_v("Neutral");
			tv0->SetMessage(526399);
			tv0->ClearReplies();
			if (f_2036_a1_b(tv1)) {
				tv0->AddReply(526400, 27676, 27675);
			}
			if (f_2042_a1_b(tv1)) {
				tv0->AddReply(526460, 29590, 27735);
			}
			if (f_20c4_a1_b(tv1) && f_20ce_a1_b(tv1) && f_2118_a1_b(tv1)) {
				tv0->AddReply(539774, 41727, 41726);
			}
			if (f_20c4_a1_b(tv1) && f_20d8_a1_b(tv1) && f_2124_a1_b(tv1)) {
				tv0->AddReply(539777, 41730, 41729);
			}
			if (f_2096_a1_b(tv1) && f_20ac_a1_b(tv1)) {
				tv0->AddReply(538642, 40537, 40536);
			}
			if (f_20c4_a1_b(tv1) && f_20e2_a1_b(tv1) && f_2130_a1_b(tv1)) {
				tv0->AddReply(539780, 44208, 41732);
			}
			tv0->AddReply(526403, -1, 27678);
			break;
			return;
		}
		if (f_1e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1d20_a1_v(tv2);
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

	void f_65b_a1_v(string a0)
	{
		if (!f_1e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1d30_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1d4e_a0_v();
			if (a1 == 27672) {
				f_1e8d_a2_v(tv1, tv0);
			}
			if (a1 == 27677) {
				f_1e8d_a2_v(tv1, tv0);
			}
			if (a1 == 27737) {
				f_1e99_a2_v(tv1, tv0);
			}
			if (a1 == 44189) {
				f_1e99_a2_v(tv1, tv0);
			}
			if (a1 == 44185) {
				f_1e99_a2_v(tv1, tv0);
			}
			if (a1 == 41726) {
				f_1f0d_a2_v(tv1, tv0);
			}
			if (a1 == 41729) {
				f_1f13_a2_v(tv1, tv0);
			}
			if (a1 == 41731) {
				f_1f1f_a2_v(tv1, tv0);
				f_1e3d_a2_v(tv1, tv0);
				f_1ed9_a2_v(tv1, tv0);
				f_1ffb_a2_v(tv1, tv0);
				f_1ee9_a2_v(tv1, tv0);
			}
			if (a1 == 44195) {
				f_1f1f_a2_v(tv1, tv0);
				f_1e3d_a2_v(tv1, tv0);
			}
			if (a1 == 40536) {
				f_1ef5_a2_v(tv1, tv0);
			}
			if (a1 == 40541) {
				f_1fc3_a2_v(tv1, tv0);
				f_1f66_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
				f_1e4b_a2_v(tv1, tv0);
			}
			if (a1 == 40542) {
				f_1fc3_a2_v(tv1, tv0);
				f_1f66_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
				f_1e4b_a2_v(tv1, tv0);
			}
			if (a1 == 40539) {
				f_1fd8_a2_v(tv1, tv0);
				f_1f66_a2_v(tv1, tv0);
				f_1ee9_a2_v(tv1, tv0);
				f_1e4b_a2_v(tv1, tv0);
			}
			if (a1 == 41732) {
				f_1f19_a2_v(tv1, tv0);
			}
			if (a1 == 41734) {
				f_1e44_a2_v(tv1, tv0);
			}
			if (a0 == 27671) {
				if (f_202a_a1_b(tv1)) {
					f_1e87_a2_v(tv1, tv0);
					f_1fab_a2_v(tv1, tv0);
					f_65b_a1_v("Neutral");
					tv0->SetMessage(526396);
					tv0->ClearReplies();
					tv0->AddReply(528207, 29565, 29564);
					tv0->AddReply(528219, 29577, 29576);
					return;
				}
				f_65b_a1_v("Neutral");
				tv0->SetMessage(526399);
				tv0->ClearReplies();
				if (f_2036_a1_b(tv1)) {
					tv0->AddReply(526400, 27676, 27675);
				}
				if (f_2042_a1_b(tv1)) {
					tv0->AddReply(526460, 29590, 27735);
				}
				if (f_20c4_a1_b(tv1) && f_20ce_a1_b(tv1) && f_2118_a1_b(tv1)) {
					tv0->AddReply(539774, 41727, 41726);
				}
				if (f_20c4_a1_b(tv1) && f_20d8_a1_b(tv1) && f_2124_a1_b(tv1)) {
					tv0->AddReply(539777, 41730, 41729);
				}
				if (f_2096_a1_b(tv1) && f_20ac_a1_b(tv1)) {
					tv0->AddReply(538642, 40537, 40536);
				}
				if (f_20c4_a1_b(tv1) && f_20e2_a1_b(tv1) && f_2130_a1_b(tv1)) {
					tv0->AddReply(539780, 44208, 41732);
				}
				tv0->AddReply(526403, -1, 27678);
				return;
			}
			if (a0 == 44208) {
				f_65b_a1_v("Threat");
				tv0->SetMessage(541953);
				tv0->ClearReplies();
				tv0->AddReply(541954, 41733, 44209);
				tv0->AddReply(541955, 44211, 44210);
				return;
			}
			if (a0 == 44211) {
				f_65b_a1_v("Threat");
				tv0->SetMessage(541956);
				tv0->ClearReplies();
				tv0->AddReply(541957, 41733, 44212);
				tv0->AddReply(541958, 41733, 44214);
				return;
			}
			if (a0 == 41733) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(539781);
				tv0->ClearReplies();
				tv0->AddReply(539782, -1, 41734);
				return;
			}
			if (a0 == 40537) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(538643);
				tv0->ClearReplies();
				tv0->AddReply(538644, 44196, 40538);
				tv0->AddReply(538645, -1, 40539);
				return;
			}
			if (a0 == 44196) {
				f_65b_a1_v("Isee");
				tv0->SetMessage(541944);
				tv0->ClearReplies();
				tv0->AddReply(541945, 44202, 44197);
				tv0->AddReply(541946, 44199, 44198);
				return;
			}
			if (a0 == 44199) {
				f_65b_a1_v("Isee");
				tv0->SetMessage(541947);
				tv0->ClearReplies();
				tv0->AddReply(541948, 44202, 44200);
				tv0->AddReply(541949, 44202, 44201);
				return;
			}
			if (a0 == 44202) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(541950);
				tv0->ClearReplies();
				tv0->AddReply(541951, 40540, 44203);
				tv0->AddReply(541952, 40540, 44204);
				return;
			}
			if (a0 == 40540) {
				f_65b_a1_v("Confusion");
				tv0->SetMessage(538646);
				tv0->ClearReplies();
				tv0->AddReply(538647, -1, 40541);
				tv0->AddReply(538648, -1, 40542);
				return;
			}
			if (a0 == 41730) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(539778);
				tv0->ClearReplies();
				tv0->AddReply(539779, -1, 41731);
				tv0->AddReply(541943, -1, 44195);
				return;
			}
			if (a0 == 41727) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(539775);
				tv0->ClearReplies();
				tv0->AddReply(541939, 44191, 44190);
				tv0->AddReply(541941, 44191, 44192);
				return;
			}
			if (a0 == 44191) {
				f_65b_a1_v("Threat");
				tv0->SetMessage(541940);
				tv0->ClearReplies();
				tv0->AddReply(539776, -1, 41728);
				tv0->AddReply(541942, -1, 44194);
				return;
			}
			if (a0 == 29590) {
				f_65b_a1_v("Isee");
				tv0->SetMessage(528231);
				tv0->ClearReplies();
				tv0->AddReply(528232, 29592, 29591);
				tv0->AddReply(541933, 44183, 44182);
				return;
			}
			if (a0 == 44183) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(541934);
				tv0->ClearReplies();
				tv0->AddReply(541935, 29592, 44184);
				tv0->AddReply(541936, -1, 44185);
				return;
			}
			if (a0 == 29592) {
				f_65b_a1_v("Isee");
				tv0->SetMessage(528233);
				tv0->ClearReplies();
				tv0->AddReply(528234, 27736, 29593);
				tv0->AddReply(528235, 27736, 29594);
				return;
			}
			if (a0 == 27736) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(526461);
				tv0->ClearReplies();
				tv0->AddReply(528238, 29599, 29598);
				tv0->AddReply(541937, 29597, 44187);
				return;
			}
			if (a0 == 29599) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(528239);
				tv0->ClearReplies();
				tv0->AddReply(528236, 29597, 29596);
				return;
			}
			if (a0 == 29597) {
				f_65b_a1_v("Confusion");
				tv0->SetMessage(528237);
				tv0->ClearReplies();
				tv0->AddReply(526462, -1, 27737);
				tv0->AddReply(541938, -1, 44189);
				return;
			}
			if (a0 == 27676) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(526401);
				tv0->ClearReplies();
				tv0->AddReply(528229, 29589, 29588);
				tv0->AddReply(541932, 29589, 44180);
				return;
			}
			if (a0 == 29589) {
				f_65b_a1_v("Threat");
				tv0->SetMessage(528230);
				tv0->ClearReplies();
				tv0->AddReply(526402, -1, 27677);
				return;
			}
			if (a0 == 29577) {
				f_65b_a1_v("Confusion");
				tv0->SetMessage(528220);
				tv0->ClearReplies();
				tv0->AddReply(528221, 29579, 29578);
				tv0->AddReply(541917, 44162, 44161);
				return;
			}
			if (a0 == 44162) {
				f_65b_a1_v("Confusion");
				tv0->SetMessage(541918);
				tv0->ClearReplies();
				tv0->AddReply(541919, 29565, 44163);
				return;
			}
			if (a0 == 29579) {
				f_65b_a1_v("Confusion");
				tv0->SetMessage(528222);
				tv0->ClearReplies();
				tv0->AddReply(528223, 29565, 29580);
				return;
			}
			if (a0 == 29565) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(528208);
				tv0->ClearReplies();
				tv0->AddReply(528209, 29567, 29566);
				tv0->AddReply(541920, 44166, 44165);
				return;
			}
			if (a0 == 44166) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(541921);
				tv0->ClearReplies();
				tv0->AddReply(541922, 44170, 44167);
				tv0->AddReply(541923, 29569, 44168);
				return;
			}
			if (a0 == 44170) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(541924);
				tv0->ClearReplies();
				tv0->AddReply(541925, 29569, 44171);
				return;
			}
			if (a0 == 29567) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(528210);
				tv0->ClearReplies();
				tv0->AddReply(528211, 29569, 29568);
				return;
			}
			if (a0 == 29569) {
				f_65b_a1_v("Isee");
				tv0->SetMessage(528212);
				tv0->ClearReplies();
				tv0->AddReply(528213, 29571, 29570);
				tv0->AddReply(541926, 44177, 44173);
				return;
			}
			if (a0 == 44177) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(541930);
				tv0->ClearReplies();
				tv0->AddReply(541931, 29573, 44178);
				return;
			}
			if (a0 == 29571) {
				f_65b_a1_v("Confusion");
				tv0->SetMessage(528214);
				tv0->ClearReplies();
				tv0->AddReply(528215, 29573, 29572);
				return;
			}
			if (a0 == 29573) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(528216);
				tv0->ClearReplies();
				tv0->AddReply(528224, 29583, 29582);
				tv0->AddReply(541927, 44175, 44174);
				return;
			}
			if (a0 == 44175) {
				f_65b_a1_v("Threat");
				tv0->SetMessage(541928);
				tv0->ClearReplies();
				tv0->AddReply(528217, 29575, 29574);
				tv0->AddReply(541929, -1, 44176);
				return;
			}
			if (a0 == 29575) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(528218);
				tv0->ClearReplies();
				tv0->AddReply(528227, 29587, 29586);
				return;
			}
			if (a0 == 29587) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(528228);
				tv0->ClearReplies();
				tv0->AddReply(526397, -1, 27672);
				tv0->AddReply(526398, -1, 27673);
				return;
			}
			if (a0 == 29583) {
				f_65b_a1_v("Neutral");
				tv0->SetMessage(528225);
				tv0->ClearReplies();
				tv0->AddReply(528226, 29575, 29584);
				return;
			}
			tv3 = true;
			if (f_1e3b_a0_b()) {
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
		if (!f_1c3f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1e35_a0_i());
		L0->SetNPCDescription(f_1e33_a0_i());
		L0->SetPhoto(f_1e37_a0_s());
		L0->SetPhoto2(f_1e39_a0_s());
		L0->SetPlayerName(f_2304_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1c96_a1_b(f_1d55_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1c84_a1_v(a0);
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
			if (f_2072_a1_b(tv1)) {
				f_1ebe_a2_v(tv1, tv0);
				f_1fb1_a2_v(tv1, tv0);
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(526473);
				tv0->ClearReplies();
				tv0->AddReply(541959, 44218, 44216);
				tv0->AddReply(541960, 44218, 44217);
				break;
			}
			f_bf2_a1_v("Neutral");
			tv0->SetMessage(526478);
			tv0->ClearReplies();
			if (f_207e_a1_b(tv1)) {
				tv0->AddReply(529716, 31170, 31169);
			}
			if (f_208a_a1_b(tv1)) {
				tv0->AddReply(529721, 31178, 31175);
			}
			if (f_2096_a1_b(tv1) && f_20b8_a1_b(tv1)) {
				tv0->AddReply(538649, 40544, 40543);
			}
			if (f_20c4_a1_b(tv1) && f_20ce_a1_b(tv1) && f_213c_a1_b(tv1)) {
				tv0->AddReply(539783, 41736, 41735);
			}
			if (f_20c4_a1_b(tv1) && f_2148_a1_b(tv1) && f_20d8_a1_b(tv1)) {
				tv0->AddReply(539786, 41739, 41738);
			}
			if (f_20c4_a1_b(tv1) && f_20e2_a1_b(tv1) && f_2154_a1_b(tv1)) {
				tv0->AddReply(539789, 41742, 41741);
			}
			tv0->AddReply(526479, -1, 27745);
			tv0->AddReply(541970, -1, 44231);
			break;
			return;
		}
		if (f_1e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1d20_a1_v(tv2);
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

	void f_bf2_a1_v(string a0)
	{
		if (!f_1e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1d30_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1d4e_a0_v();
			if (a1 == 27742) {
				f_1ec4_a2_v(tv1, tv0);
			}
			if (a1 == 44229) {
				f_1ec4_a2_v(tv1, tv0);
			}
			if (a1 == 29606) {
				f_1ec4_a2_v(tv1, tv0);
			}
			if (a1 == 31171) {
				f_1ec4_a2_v(tv1, tv0);
			}
			if (a1 == 44232) {
				f_1ec4_a2_v(tv1, tv0);
			}
			if (a1 == 31197) {
				f_1ed0_a2_v(tv1, tv0);
			}
			if (a1 == 44241) {
				f_1ed0_a2_v(tv1, tv0);
			}
			if (a1 == 40543) {
				f_1efb_a2_v(tv1, tv0);
			}
			if (a1 == 40545) {
				f_1fc3_a2_v(tv1, tv0);
				f_1f71_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
				f_1e4b_a2_v(tv1, tv0);
				f_1fe5_a2_v(tv1, tv0);
			}
			if (a1 == 40546) {
				f_1fc3_a2_v(tv1, tv0);
				f_1f71_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
				f_1e4b_a2_v(tv1, tv0);
				f_1fe5_a2_v(tv1, tv0);
			}
			if (a1 == 41735) {
				f_1f24_a2_v(tv1, tv0);
			}
			if (a1 == 41738) {
				f_1f2a_a2_v(tv1, tv0);
			}
			if (a1 == 41740) {
				f_1f1f_a2_v(tv1, tv0);
				f_1f66_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
				f_1ffb_a2_v(tv1, tv0);
			}
			if (a1 == 41741) {
				f_1f30_a2_v(tv1, tv0);
			}
			if (a1 == 41743) {
				f_1e44_a2_v(tv1, tv0);
			}
			if (a0 == 27739) {
				if (f_2072_a1_b(tv1)) {
					f_1ebe_a2_v(tv1, tv0);
					f_1fb1_a2_v(tv1, tv0);
					f_bf2_a1_v("Neutral");
					tv0->SetMessage(526473);
					tv0->ClearReplies();
					tv0->AddReply(541959, 44218, 44216);
					tv0->AddReply(541960, 44218, 44217);
					return;
				}
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(526478);
				tv0->ClearReplies();
				if (f_207e_a1_b(tv1)) {
					tv0->AddReply(529716, 31170, 31169);
				}
				if (f_208a_a1_b(tv1)) {
					tv0->AddReply(529721, 31178, 31175);
				}
				if (f_2096_a1_b(tv1) && f_20b8_a1_b(tv1)) {
					tv0->AddReply(538649, 40544, 40543);
				}
				if (f_20c4_a1_b(tv1) && f_20ce_a1_b(tv1) && f_213c_a1_b(tv1)) {
					tv0->AddReply(539783, 41736, 41735);
				}
				if (f_20c4_a1_b(tv1) && f_2148_a1_b(tv1) && f_20d8_a1_b(tv1)) {
					tv0->AddReply(539786, 41739, 41738);
				}
				if (f_20c4_a1_b(tv1) && f_20e2_a1_b(tv1) && f_2154_a1_b(tv1)) {
					tv0->AddReply(539789, 41742, 41741);
				}
				tv0->AddReply(526479, -1, 27745);
				tv0->AddReply(541970, -1, 44231);
				return;
			}
			if (a0 == 41742) {
				f_bf2_a1_v("Isee");
				tv0->SetMessage(539790);
				tv0->ClearReplies();
				tv0->AddReply(539791, -1, 41743);
				return;
			}
			if (a0 == 41739) {
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(539787);
				tv0->ClearReplies();
				tv0->AddReply(539788, -1, 41740);
				return;
			}
			if (a0 == 41736) {
				f_bf2_a1_v("Threat");
				tv0->SetMessage(539784);
				tv0->ClearReplies();
				tv0->AddReply(539785, -1, 41737);
				return;
			}
			if (a0 == 40544) {
				f_bf2_a1_v("Isee");
				tv0->SetMessage(538650);
				tv0->ClearReplies();
				tv0->AddReply(538651, -1, 40545);
				tv0->AddReply(538652, -1, 40546);
				return;
			}
			if (a0 == 31178) {
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(529724);
				tv0->ClearReplies();
				tv0->AddReply(529725, 31181, 31179);
				tv0->AddReply(541972, 44234, 44233);
				return;
			}
			if (a0 == 44234) {
				f_bf2_a1_v("Isee");
				tv0->SetMessage(541973);
				tv0->ClearReplies();
				tv0->AddReply(541974, 31180, 44235);
				return;
			}
			if (a0 == 31181) {
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(529727);
				tv0->ClearReplies();
				tv0->AddReply(529728, 31180, 31182);
				tv0->AddReply(529737, 31180, 31191);
				return;
			}
			if (a0 == 31180) {
				f_bf2_a1_v("Isee");
				tv0->SetMessage(529726);
				tv0->ClearReplies();
				tv0->AddReply(529729, 31184, 31183);
				tv0->AddReply(541975, 44239, 44237);
				return;
			}
			if (a0 == 44239) {
				f_bf2_a1_v("Confusion");
				tv0->SetMessage(541976);
				tv0->ClearReplies();
				tv0->AddReply(541977, 31184, 44240);
				tv0->AddReply(541978, -1, 44241);
				return;
			}
			if (a0 == 31184) {
				f_bf2_a1_v("Isee");
				tv0->SetMessage(529730);
				tv0->ClearReplies();
				tv0->AddReply(529731, 31186, 31185);
				tv0->AddReply(541979, 44243, 44242);
				return;
			}
			if (a0 == 44243) {
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(541980);
				tv0->ClearReplies();
				tv0->AddReply(541981, 31186, 44244);
				return;
			}
			if (a0 == 31186) {
				f_bf2_a1_v("Threat");
				tv0->SetMessage(529732);
				tv0->ClearReplies();
				tv0->AddReply(529733, 31188, 31187);
				tv0->AddReply(541982, 44247, 44246);
				return;
			}
			if (a0 == 44247) {
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(541983);
				tv0->ClearReplies();
				tv0->AddReply(541984, 31188, 44248);
				return;
			}
			if (a0 == 31188) {
				f_bf2_a1_v("Threat");
				tv0->SetMessage(529734);
				tv0->ClearReplies();
				tv0->AddReply(529735, 31190, 31189);
				return;
			}
			if (a0 == 31190) {
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(529736);
				tv0->ClearReplies();
				tv0->AddReply(529738, 31194, 31193);
				return;
			}
			if (a0 == 31194) {
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(529739);
				tv0->ClearReplies();
				tv0->AddReply(529740, 31196, 31195);
				return;
			}
			if (a0 == 31196) {
				f_bf2_a1_v("Confusion");
				tv0->SetMessage(529741);
				tv0->ClearReplies();
				tv0->AddReply(529742, -1, 31197);
				return;
			}
			if (a0 == 31170) {
				f_bf2_a1_v("Isee");
				tv0->SetMessage(529717);
				tv0->ClearReplies();
				tv0->AddReply(529722, 31177, 31176);
				tv0->AddReply(541971, -1, 44232);
				return;
			}
			if (a0 == 31177) {
				f_bf2_a1_v("Isee");
				tv0->SetMessage(529723);
				tv0->ClearReplies();
				tv0->AddReply(529718, -1, 31171);
				return;
			}
			if (a0 == 44218) {
				f_bf2_a1_v("Threat");
				tv0->SetMessage(541961);
				tv0->ClearReplies();
				tv0->AddReply(528240, 29601, 29600);
				tv0->AddReply(541962, 44221, 44220);
				return;
			}
			if (a0 == 44221) {
				f_bf2_a1_v("Confusion");
				tv0->SetMessage(541963);
				tv0->ClearReplies();
				tv0->AddReply(541964, 29605, 44222);
				tv0->AddReply(541965, 29603, 44223);
				return;
			}
			if (a0 == 29601) {
				f_bf2_a1_v("Isee");
				tv0->SetMessage(528241);
				tv0->ClearReplies();
				tv0->AddReply(528242, 29603, 29602);
				return;
			}
			if (a0 == 29603) {
				f_bf2_a1_v("Isee");
				tv0->SetMessage(528243);
				tv0->ClearReplies();
				tv0->AddReply(528244, 29605, 29604);
				tv0->AddReply(528246, -1, 29606);
				return;
			}
			if (a0 == 29605) {
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(528245);
				tv0->ClearReplies();
				tv0->AddReply(528247, 29608, 29607);
				tv0->AddReply(541966, 44227, 44226);
				return;
			}
			if (a0 == 44227) {
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(541967);
				tv0->ClearReplies();
				tv0->AddReply(541968, 29610, 44228);
				tv0->AddReply(541969, -1, 44229);
				return;
			}
			if (a0 == 29608) {
				f_bf2_a1_v("Threat");
				tv0->SetMessage(528248);
				tv0->ClearReplies();
				tv0->AddReply(526474, 27741, 27740);
				tv0->AddReply(528249, 29610, 29609);
				return;
			}
			if (a0 == 29610) {
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(528250);
				tv0->ClearReplies();
				tv0->AddReply(528251, 27741, 29611);
				return;
			}
			if (a0 == 27741) {
				f_bf2_a1_v("Neutral");
				tv0->SetMessage(526475);
				tv0->ClearReplies();
				tv0->AddReply(526476, -1, 27742);
				tv0->AddReply(526477, -1, 27743);
				return;
			}
			tv3 = true;
			if (f_1e3b_a0_b()) {
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
		if (!f_1c3f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1e35_a0_i());
		L0->SetNPCDescription(f_1e33_a0_i());
		L0->SetPhoto(f_1e37_a0_s());
		L0->SetPhoto2(f_1e39_a0_s());
		L0->SetPlayerName(f_2304_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1c96_a1_b(f_1d55_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1c84_a1_v(a0);
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
			if (f_204e_a1_b(tv1)) {
				f_1ea3_a2_v(tv1, tv0);
				f_1fb7_a2_v(tv1, tv0);
				f_10eb_a1_v("Isee");
				tv0->SetMessage(527173);
				tv0->ClearReplies();
				tv0->AddReply(527174, 28483, 28482);
				tv0->AddReply(527255, 28483, 28565);
				break;
			}
			f_10eb_a1_v("Neutral");
			tv0->SetMessage(527177);
			tv0->ClearReplies();
			if (f_205a_a1_b(tv1)) {
				tv0->AddReply(527179, 28488, 28487);
			}
			if (f_2066_a1_b(tv1)) {
				tv0->AddReply(527225, 28534, 28533);
			}
			if (f_20c4_a1_b(tv1) && f_20ce_a1_b(tv1) && f_2190_a1_b(tv1)) {
				tv0->AddReply(539811, 41764, 41763);
			}
			if (f_20ec_a1_b(tv1) && f_20d8_a1_b(tv1) && f_219c_a1_b(tv1)) {
				tv0->AddReply(539814, 41767, 41766);
			}
			if (f_20ec_a1_b(tv1) && f_20f6_a1_b(tv1) && f_21a8_a1_b(tv1)) {
				tv0->AddReply(539817, 41770, 41769);
			}
			if (f_2096_a1_b(tv1) && f_21b4_a1_b(tv1)) {
				tv0->AddReply(539820, 41773, 41772);
			}
			tv0->AddReply(527182, -1, 28490);
			tv0->AddReply(538653, -1, 40547);
			break;
			return;
		}
		if (f_1e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1d20_a1_v(tv2);
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

	void f_10eb_a1_v(string a0)
	{
		if (!f_1e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1d30_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1d4e_a0_v();
			if (a1 == 28576) {
				f_1ea9_a2_v(tv1, tv0);
			}
			if (a1 == 28568) {
				f_1ea9_a2_v(tv1, tv0);
			}
			if (a1 == 28569) {
				f_1ea9_a2_v(tv1, tv0);
			}
			if (a1 == 28541) {
				f_1eb5_a2_v(tv1, tv0);
			}
			if (a1 == 28590) {
				f_1eb5_a2_v(tv1, tv0);
			}
			if (a1 == 41763) {
				f_1f4e_a2_v(tv1, tv0);
			}
			if (a1 == 41766) {
				f_1f54_a2_v(tv1, tv0);
			}
			if (a1 == 41768) {
				f_1f1f_a2_v(tv1, tv0);
				f_1f7c_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
				f_1fda_a2_v(tv1, tv0);
				f_1ff0_a2_v(tv1, tv0);
			}
			if (a1 == 41769) {
				f_1f5a_a2_v(tv1, tv0);
			}
			if (a1 == 41771) {
				f_1e44_a2_v(tv1, tv0);
			}
			if (a1 == 41772) {
				f_1f60_a2_v(tv1, tv0);
			}
			if (a1 == 41776) {
				f_1fc3_a2_v(tv1, tv0);
				f_1f7c_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
				f_1e4b_a2_v(tv1, tv0);
				f_1ff0_a2_v(tv1, tv0);
				f_1fe5_a2_v(tv1, tv0);
			}
			if (a1 == 41777) {
				f_1fc3_a2_v(tv1, tv0);
				f_1f7c_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
				f_1ff0_a2_v(tv1, tv0);
				f_1e4b_a2_v(tv1, tv0);
			}
			if (a1 == 41778) {
				f_1fc3_a2_v(tv1, tv0);
				f_1f7c_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
				f_1fe5_a2_v(tv1, tv0);
				f_1e4b_a2_v(tv1, tv0);
			}
			if (a0 == 28481) {
				if (f_204e_a1_b(tv1)) {
					f_1ea3_a2_v(tv1, tv0);
					f_1fb7_a2_v(tv1, tv0);
					f_10eb_a1_v("Isee");
					tv0->SetMessage(527173);
					tv0->ClearReplies();
					tv0->AddReply(527174, 28483, 28482);
					tv0->AddReply(527255, 28483, 28565);
					return;
				}
				f_10eb_a1_v("Neutral");
				tv0->SetMessage(527177);
				tv0->ClearReplies();
				if (f_205a_a1_b(tv1)) {
					tv0->AddReply(527179, 28488, 28487);
				}
				if (f_2066_a1_b(tv1)) {
					tv0->AddReply(527225, 28534, 28533);
				}
				if (f_20c4_a1_b(tv1) && f_20ce_a1_b(tv1) && f_2190_a1_b(tv1)) {
					tv0->AddReply(539811, 41764, 41763);
				}
				if (f_20ec_a1_b(tv1) && f_20d8_a1_b(tv1) && f_219c_a1_b(tv1)) {
					tv0->AddReply(539814, 41767, 41766);
				}
				if (f_20ec_a1_b(tv1) && f_20f6_a1_b(tv1) && f_21a8_a1_b(tv1)) {
					tv0->AddReply(539817, 41770, 41769);
				}
				if (f_2096_a1_b(tv1) && f_21b4_a1_b(tv1)) {
					tv0->AddReply(539820, 41773, 41772);
				}
				tv0->AddReply(527182, -1, 28490);
				tv0->AddReply(538653, -1, 40547);
				return;
			}
			if (a0 == 41773) {
				f_10eb_a1_v("Isee");
				tv0->SetMessage(539821);
				tv0->ClearReplies();
				tv0->AddReply(539822, 41775, 41774);
				tv0->AddReply(539826, -1, 41778);
				return;
			}
			if (a0 == 41775) {
				f_10eb_a1_v("Neutral");
				tv0->SetMessage(539823);
				tv0->ClearReplies();
				tv0->AddReply(539824, -1, 41776);
				tv0->AddReply(539825, -1, 41777);
				return;
			}
			if (a0 == 41770) {
				f_10eb_a1_v("Confusion");
				tv0->SetMessage(539818);
				tv0->ClearReplies();
				tv0->AddReply(539819, -1, 41771);
				return;
			}
			if (a0 == 41767) {
				f_10eb_a1_v("Neutral");
				tv0->SetMessage(539815);
				tv0->ClearReplies();
				tv0->AddReply(539816, -1, 41768);
				return;
			}
			if (a0 == 41764) {
				f_10eb_a1_v("Threat");
				tv0->SetMessage(539812);
				tv0->ClearReplies();
				tv0->AddReply(539813, -1, 41765);
				return;
			}
			if (a0 == 28534) {
				f_10eb_a1_v("Neutral");
				tv0->SetMessage(527226);
				tv0->ClearReplies();
				tv0->AddReply(527227, 28577, 28535);
				return;
			}
			if (a0 == 28577) {
				f_10eb_a1_v("Confusion");
				tv0->SetMessage(527266);
				tv0->ClearReplies();
				tv0->AddReply(527267, 28579, 28578);
				return;
			}
			if (a0 == 28579) {
				f_10eb_a1_v("Confusion");
				tv0->SetMessage(527268);
				tv0->ClearReplies();
				tv0->AddReply(527269, 28581, 28580);
				return;
			}
			if (a0 == 28581) {
				f_10eb_a1_v("Confusion");
				tv0->SetMessage(527270);
				tv0->ClearReplies();
				tv0->AddReply(527271, 28536, 28582);
				tv0->AddReply(527283, 28536, 28595);
				return;
			}
			if (a0 == 28536) {
				f_10eb_a1_v("Isee");
				tv0->SetMessage(527228);
				tv0->ClearReplies();
				tv0->AddReply(527273, 28585, 28584);
				return;
			}
			if (a0 == 28585) {
				f_10eb_a1_v("Isee");
				tv0->SetMessage(527274);
				tv0->ClearReplies();
				tv0->AddReply(527280, 28592, 28591);
				return;
			}
			if (a0 == 28592) {
				f_10eb_a1_v("Isee");
				tv0->SetMessage(527281);
				tv0->ClearReplies();
				tv0->AddReply(527277, 28589, 28588);
				return;
			}
			if (a0 == 28589) {
				f_10eb_a1_v("Threat");
				tv0->SetMessage(527278);
				tv0->ClearReplies();
				tv0->AddReply(527229, 28538, 28537);
				return;
			}
			if (a0 == 28538) {
				f_10eb_a1_v("Threat");
				tv0->SetMessage(527230);
				tv0->ClearReplies();
				tv0->AddReply(527231, 28540, 28539);
				tv0->AddReply(527282, 28540, 28593);
				return;
			}
			if (a0 == 28540) {
				f_10eb_a1_v("Neutral");
				tv0->SetMessage(527232);
				tv0->ClearReplies();
				tv0->AddReply(527233, -1, 28541);
				tv0->AddReply(527279, -1, 28590);
				return;
			}
			if (a0 == 28488) {
				f_10eb_a1_v("Neutral");
				tv0->SetMessage(527180);
				tv0->ClearReplies();
				tv0->AddReply(527181, 28567, 28489);
				return;
			}
			if (a0 == 28567) {
				f_10eb_a1_v("Confusion");
				tv0->SetMessage(527256);
				tv0->ClearReplies();
				tv0->AddReply(527257, -1, 28568);
				tv0->AddReply(527258, -1, 28569);
				return;
			}
			if (a0 == 28483) {
				f_10eb_a1_v("Isee");
				tv0->SetMessage(527175);
				tv0->ClearReplies();
				tv0->AddReply(527176, 28547, 28484);
				tv0->AddReply(527178, 28555, 28486);
				return;
			}
			if (a0 == 28555) {
				f_10eb_a1_v("Neutral");
				tv0->SetMessage(527247);
				tv0->ClearReplies();
				tv0->AddReply(527248, 28549, 28556);
				return;
			}
			if (a0 == 28547) {
				f_10eb_a1_v("Confusion");
				tv0->SetMessage(527239);
				tv0->ClearReplies();
				tv0->AddReply(527240, 28549, 28548);
				return;
			}
			if (a0 == 28549) {
				f_10eb_a1_v("Threat");
				tv0->SetMessage(527241);
				tv0->ClearReplies();
				tv0->AddReply(527242, 28551, 28550);
				return;
			}
			if (a0 == 28551) {
				f_10eb_a1_v("Threat");
				tv0->SetMessage(527243);
				tv0->ClearReplies();
				tv0->AddReply(527244, 28553, 28552);
				return;
			}
			if (a0 == 28553) {
				f_10eb_a1_v("Isee");
				tv0->SetMessage(527245);
				tv0->ClearReplies();
				tv0->AddReply(527250, 28560, 28559);
				return;
			}
			if (a0 == 28560) {
				f_10eb_a1_v("Neutral");
				tv0->SetMessage(527251);
				tv0->ClearReplies();
				tv0->AddReply(527246, 28558, 28554);
				tv0->AddReply(527252, 28558, 28561);
				return;
			}
			if (a0 == 28558) {
				f_10eb_a1_v("Neutral");
				tv0->SetMessage(527249);
				tv0->ClearReplies();
				tv0->AddReply(527253, 28570, 28563);
				tv0->AddReply(527254, -1, 28564);
				return;
			}
			if (a0 == 28570) {
				f_10eb_a1_v("Neutral");
				tv0->SetMessage(527259);
				tv0->ClearReplies();
				tv0->AddReply(527260, 28572, 28571);
				return;
			}
			if (a0 == 28572) {
				f_10eb_a1_v("Isee");
				tv0->SetMessage(527261);
				tv0->ClearReplies();
				tv0->AddReply(527262, 28575, 28573);
				return;
			}
			if (a0 == 28575) {
				f_10eb_a1_v("Isee");
				tv0->SetMessage(527264);
				tv0->ClearReplies();
				tv0->AddReply(527265, -1, 28576);
				return;
			}
			tv3 = true;
			if (f_1e3b_a0_b()) {
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
		if (!f_1c3f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1e35_a0_i());
		L0->SetNPCDescription(f_1e33_a0_i());
		L0->SetPhoto(f_1e37_a0_s());
		L0->SetPhoto2(f_1e39_a0_s());
		L0->SetPlayerName(f_2304_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1c96_a1_b(f_1d55_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1c84_a1_v(a0);
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
			f_153e_a1_v("Threat");
			tv0->SetMessage(528157);
			tv0->ClearReplies();
			tv0->AddReply(528158, 29511, 29510);
			tv0->AddReply(528163, 29516, 29515);
			break;
			return;
		}
		if (f_1e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1d20_a1_v(tv2);
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

	void f_153e_a1_v(string a0)
	{
		if (!f_1e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1d30_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1d4e_a0_v();
			if (a0 == 29509) {
				f_153e_a1_v("Threat");
				tv0->SetMessage(528157);
				tv0->ClearReplies();
				tv0->AddReply(528158, 29511, 29510);
				tv0->AddReply(528163, 29516, 29515);
				return;
			}
			if (a0 == 29516) {
				f_153e_a1_v("Threat");
				tv0->SetMessage(528164);
				tv0->ClearReplies();
				tv0->AddReply(528165, 29518, 29517);
				tv0->AddReply(541872, 29518, 44103);
				return;
			}
			if (a0 == 29511) {
				f_153e_a1_v("Isee");
				tv0->SetMessage(528159);
				tv0->ClearReplies();
				tv0->AddReply(528160, 29513, 29512);
				tv0->AddReply(528169, 29513, 29522);
				return;
			}
			if (a0 == 29513) {
				f_153e_a1_v("Isee");
				tv0->SetMessage(528161);
				tv0->ClearReplies();
				tv0->AddReply(528162, 29518, 29514);
				tv0->AddReply(541876, 29518, 44108);
				return;
			}
			if (a0 == 29518) {
				f_153e_a1_v("Neutral");
				tv0->SetMessage(528166);
				tv0->ClearReplies();
				tv0->AddReply(528167, -1, 29519);
				tv0->AddReply(528168, 44105, 29521);
				return;
			}
			if (a0 == 44105) {
				f_153e_a1_v("Threat");
				tv0->SetMessage(541873);
				tv0->ClearReplies();
				tv0->AddReply(541874, -1, 44106);
				tv0->AddReply(541875, -1, 44107);
				return;
			}
			tv3 = true;
			if (f_1e3b_a0_b()) {
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
		if (!f_1c3f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1e35_a0_i());
		L0->SetNPCDescription(f_1e33_a0_i());
		L0->SetPhoto(f_1e37_a0_s());
		L0->SetPhoto2(f_1e39_a0_s());
		L0->SetPlayerName(f_2304_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1c96_a1_b(f_1d55_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1c84_a1_v(a0);
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
			f_168b_a1_v("Neutral");
			tv0->SetMessage(542794);
			tv0->ClearReplies();
			if (f_21cc_a1_b(tv1)) {
				tv0->AddReply(542798, 45222, 45221);
			}
			if (f_21cc_a1_b(tv1)) {
				tv0->AddReply(542802, 45224, 45225);
			}
			tv0->AddReply(543009, -1, 45461);
			break;
			return;
		}
		if (f_1e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1d20_a1_v(tv2);
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

	void f_168b_a1_v(string a0)
	{
		if (!f_1e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1d30_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1d4e_a0_v();
			if (a1 == 45221) {
				f_1fbd_a2_v(tv1, tv0);
			}
			if (a1 == 45225) {
				f_1fbd_a2_v(tv1, tv0);
			}
			if (a0 == 45214) {
				f_168b_a1_v("Neutral");
				tv0->SetMessage(542794);
				tv0->ClearReplies();
				if (f_21cc_a1_b(tv1)) {
					tv0->AddReply(542798, 45222, 45221);
				}
				if (f_21cc_a1_b(tv1)) {
					tv0->AddReply(542802, 45224, 45225);
				}
				tv0->AddReply(543009, -1, 45461);
				return;
			}
			if (a0 == 45222) {
				f_168b_a1_v("Neutral");
				tv0->SetMessage(542799);
				tv0->ClearReplies();
				tv0->AddReply(542800, 45224, 45223);
				tv0->AddReply(542805, 45228, 45229);
				return;
			}
			if (a0 == 45224) {
				f_168b_a1_v("Isee");
				tv0->SetMessage(542801);
				tv0->ClearReplies();
				tv0->AddReply(542803, 45228, 45227);
				return;
			}
			if (a0 == 45228) {
				f_168b_a1_v("Isee");
				tv0->SetMessage(542804);
				tv0->ClearReplies();
				tv0->AddReply(542806, 45234, 45231);
				tv0->AddReply(542807, 45233, 45232);
				return;
			}
			if (a0 == 45233) {
				f_168b_a1_v("Neutral");
				tv0->SetMessage(542808);
				tv0->ClearReplies();
				tv0->AddReply(542811, 45237, 45236);
				return;
			}
			if (a0 == 45234) {
				f_168b_a1_v("Neutral");
				tv0->SetMessage(542809);
				tv0->ClearReplies();
				tv0->AddReply(542810, 45237, 45235);
				return;
			}
			if (a0 == 45237) {
				f_168b_a1_v("Threat");
				tv0->SetMessage(542812);
				tv0->ClearReplies();
				tv0->AddReply(542813, 45240, 45239);
				return;
			}
			if (a0 == 45240) {
				f_168b_a1_v("Neutral");
				tv0->SetMessage(542814);
				tv0->ClearReplies();
				tv0->AddReply(542815, 45243, 45241);
				tv0->AddReply(542816, 45246, 45242);
				return;
			}
			if (a0 == 45246) {
				f_168b_a1_v("Threat");
				tv0->SetMessage(542820);
				tv0->ClearReplies();
				tv0->AddReply(542821, -1, 45247);
				tv0->AddReply(542822, -1, 45248);
				return;
			}
			if (a0 == 45243) {
				f_168b_a1_v("Neutral");
				tv0->SetMessage(542817);
				tv0->ClearReplies();
				tv0->AddReply(542818, -1, 45244);
				tv0->AddReply(542819, -1, 45245);
				return;
			}
			tv3 = true;
			if (f_1e3b_a0_b()) {
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
		if (!f_1c3f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1e35_a0_i());
		L0->SetNPCDescription(f_1e33_a0_i());
		L0->SetPhoto(f_1e37_a0_s());
		L0->SetPhoto2(f_1e39_a0_s());
		L0->SetPlayerName(f_2304_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1c96_a1_b(f_1d55_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1c84_a1_v(a0);
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
			f_1897_a1_v("Neutral");
			tv0->SetMessage(539793);
			tv0->ClearReplies();
			if (f_20c4_a1_b(tv1) && f_20ce_a1_b(tv1) && f_2160_a1_b(tv1)) {
				tv0->AddReply(539794, 41747, 41746);
			}
			if (f_20c4_a1_b(tv1) && f_216c_a1_b(tv1) && f_20d8_a1_b(tv1)) {
				tv0->AddReply(539797, 41750, 41749);
			}
			if (f_20c4_a1_b(tv1) && f_20e2_a1_b(tv1) && f_2178_a1_b(tv1)) {
				tv0->AddReply(539800, 41753, 41752);
			}
			if (f_2096_a1_b(tv1) && f_2184_a1_b(tv1)) {
				tv0->AddReply(539803, 41756, 41755);
			}
			tv0->AddReply(539810, -1, 41762);
			tv0->AddReply(541106, -1, 43219);
			break;
			return;
		}
		if (f_1e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1d20_a1_v(tv2);
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

	void f_1897_a1_v(string a0)
	{
		if (!f_1e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1d30_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1d4e_a0_v();
			if (a1 == 41746) {
				f_1f36_a2_v(tv1, tv0);
			}
			if (a1 == 41749) {
				f_1f3c_a2_v(tv1, tv0);
			}
			if (a1 == 41751) {
				f_1f1f_a2_v(tv1, tv0);
				f_1f7c_a2_v(tv1, tv0);
				f_1ffb_a2_v(tv1, tv0);
				f_1fda_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
			}
			if (a1 == 41752) {
				f_1f42_a2_v(tv1, tv0);
			}
			if (a1 == 41754) {
				f_1e44_a2_v(tv1, tv0);
			}
			if (a1 == 41755) {
				f_1f48_a2_v(tv1, tv0);
			}
			if (a1 == 41759) {
				f_1fc3_a2_v(tv1, tv0);
				f_1f7c_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
				f_1e4b_a2_v(tv1, tv0);
			}
			if (a1 == 41760) {
				f_1fc3_a2_v(tv1, tv0);
				f_1f7c_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
				f_1e4b_a2_v(tv1, tv0);
			}
			if (a1 == 41761) {
				f_1fc3_a2_v(tv1, tv0);
				f_1f7c_a2_v(tv1, tv0);
				f_1ee3_a2_v(tv1, tv0);
				f_1e4b_a2_v(tv1, tv0);
			}
			if (a0 == 41745) {
				f_1897_a1_v("Neutral");
				tv0->SetMessage(539793);
				tv0->ClearReplies();
				if (f_20c4_a1_b(tv1) && f_20ce_a1_b(tv1) && f_2160_a1_b(tv1)) {
					tv0->AddReply(539794, 41747, 41746);
				}
				if (f_20c4_a1_b(tv1) && f_216c_a1_b(tv1) && f_20d8_a1_b(tv1)) {
					tv0->AddReply(539797, 41750, 41749);
				}
				if (f_20c4_a1_b(tv1) && f_20e2_a1_b(tv1) && f_2178_a1_b(tv1)) {
					tv0->AddReply(539800, 41753, 41752);
				}
				if (f_2096_a1_b(tv1) && f_2184_a1_b(tv1)) {
					tv0->AddReply(539803, 41756, 41755);
				}
				tv0->AddReply(539810, -1, 41762);
				tv0->AddReply(541106, -1, 43219);
				return;
			}
			if (a0 == 41756) {
				f_1897_a1_v("Confusion");
				tv0->SetMessage(539804);
				tv0->ClearReplies();
				tv0->AddReply(539805, 41758, 41757);
				tv0->AddReply(539809, -1, 41761);
				return;
			}
			if (a0 == 41758) {
				f_1897_a1_v("Neutral");
				tv0->SetMessage(539806);
				tv0->ClearReplies();
				tv0->AddReply(539807, -1, 41759);
				tv0->AddReply(539808, -1, 41760);
				return;
			}
			if (a0 == 41753) {
				f_1897_a1_v("Isee");
				tv0->SetMessage(539801);
				tv0->ClearReplies();
				tv0->AddReply(539802, -1, 41754);
				return;
			}
			if (a0 == 41750) {
				f_1897_a1_v("Isee");
				tv0->SetMessage(539798);
				tv0->ClearReplies();
				tv0->AddReply(539799, -1, 41751);
				return;
			}
			if (a0 == 41747) {
				f_1897_a1_v("Threat");
				tv0->SetMessage(539795);
				tv0->ClearReplies();
				tv0->AddReply(539796, -1, 41748);
				return;
			}
			tv3 = true;
			if (f_1e3b_a0_b()) {
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
		if (!f_1c3f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1e35_a0_i());
		L0->SetNPCDescription(f_1e33_a0_i());
		L0->SetPhoto(f_1e37_a0_s());
		L0->SetPhoto2(f_1e39_a0_s());
		L0->SetPlayerName(f_2304_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1c96_a1_b(f_1d55_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1c84_a1_v(a0);
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
			f_1ab6_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_1e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1d20_a1_v(tv2);
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

	void f_1ab6_a1_v(string a0)
	{
		if (!f_1e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1d30_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1d4e_a0_v();
			if (a0 == 42548) {
				f_1ab6_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_1e3b_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t16
{
	var Vector tv0;

	void init(void)
	{
		f_1afa_a0_v();
	}

	void f_1afa_a0_v(void)
	{
		if (!f_1c3a_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_1baa_a0_v();
		}
	}

	bool f_1b08_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1c31_a1_b(L0);
	}

	void f_1b17_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1b1c_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1bf6_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1b32_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1b3b_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1b3b_a0_v();
			if (f_1c3a_a0_b() && f_1b1c_a0_b()) {
				if (f_1b08_a0_b()) {
					f_1cd0_a1_b(f_1d55_a0_o());
				}
			} else {
				f_1b17_a0_v();
				f_1b32_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1bf1_a0_v();
		f_1b3b_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_1b3b_a0_v();
		f_1d20_a1_v("Neutral");
		f_1b32_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1b32_a0_v();
		} else {
			f_1d20_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1bf1_a0_v();
			f_1c31_a1_b(a0);
			enable OnUse;
			f_2367_a1_v(a0);
			f_1d20_a1_v("Neutral");
			f_1b3b_a0_v();
			f_1b32_a0_v();
		}
	}
}

void f_1baa_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1c3a_a0_b()) {
		return;
	}
	L0 = f_1e22_a0_i();
	for (L1 = 0; L1 < 5 && f_1c3a_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1e1b_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1bef_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1bef_a0_b(void)
{
	return true;
}

void f_1bf1_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1bf6_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1bfe_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_1c0a_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_1bfe_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_1d65_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_1c20_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1c27_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1c31_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1c27_a1_b(L0);
}

bool f_1c3a_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1c3f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1d5b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1e3b_a0_b()) {
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

void f_1c84_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1e3b_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1c96_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1cd0_a1_b(a0)) {
			if (!f_1cf5_a1_b(a0)) {
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
		if (!f_1cf5_a1_b(a0)) {
			if (!f_1cd0_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1cd0_a1_b(object a0)
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
	return f_1d3f_a1_b(L4);
}

bool f_1cf5_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1df9_a0_i() + "m";
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
	return f_1d3f_a1_b(L4);
}

void f_1d20_a1_v(string a0)
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

void f_1d30_a2_v(string a0, bool a1)
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

bool f_1d3f_a1_b(string a0)
{
	if (f_1e3b_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1d4e_a0_v(void)
{
	if (f_1e3b_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1d55_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1d5b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_1d65_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_1d70_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_1d75_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1d81_a2_v(object a0, int a1)
{
	f_1c20_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1d75_a2_v(L0, a1);
	}
}

void f_1d94_a3_v(object a0, object a1, int a2)
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
		f_1d75_a2_v(L0, a2);
	}
}

void f_1da7_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1d94_a3_v(a0, L0, a2);
}

bool f_1db4_a2_b(object a0, float a1)
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
	f_1dd7_a1_v(a1);
	f_1c0a_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_1dd7_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_1de1_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

bool f_1ded_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

int f_1df9_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1e02_a1_b(int a0)
{
	return f_1df9_a0_i() == a0;
}

bool f_1e08_a1_b(int a0)
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

string f_1e1b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1e22_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1e1b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1e33_a0_i(void)
{
	return 515527;
}

int f_1e35_a0_i(void)
{
	return 513334;
}

string f_1e37_a0_s(void)
{
	return "ui/NPC_Aglaja.png";
}

string f_1e39_a0_s(void)
{
	return "ui/NPC_Aglaja_b.png";
}

bool f_1e3b_a0_b(void)
{
	return true;
}

void f_1e3d_a2_v(object a0, object a1)
{
	f_1db4_a2_b(a0, 0.05000000074505806);
}

void f_1e44_a2_v(object a0, object a1)
{
	f_1db4_a2_b(a0, -0.05000000074505806);
}

void f_1e4b_a2_v(object a0, object a1)
{
	@Trace("beta_pills 5 is given");
	f_1da7_a3_v(a0, "beta_pills", 5);
}

void f_1e56_a2_v(object a0, object a1)
{
	@SetVariable("k7q01", 1);
	f_2248_a0_v();
	f_2255_a0_v();
	f_1de1_a2_b("quest_k7_01", "place_danko");
}

void f_1e67_a2_v(object a0, object a1)
{
	f_2262_a0_v();
	f_1ded_a3_b("volonteers_klara", "disease", "alexandr");
	f_1ded_a3_b("volonteers_klara", "disease", "katerina");
	f_1de1_a2_b("quest_k7_01", "completed");
}

void f_1e7d_a2_v(object a0, object a1)
{
	f_226f_a0_v();
	f_1de1_a2_b("quest_k7_01", "completed");
}

void f_1e87_a2_v(object a0, object a1)
{
	@SetVariable("ook8Aglaja1", 1);
}

void f_1e8d_a2_v(object a0, object a1)
{
	@SetVariable("k8q01", 1);
	f_227c_a0_v();
	f_2289_a0_v();
}

void f_1e99_a2_v(object a0, object a1)
{
	f_2296_a0_v();
	f_1de1_a2_b("quest_k8_01", "completed");
}

void f_1ea3_a2_v(object a0, object a1)
{
	@SetVariable("ook11Aglaja1", 1);
}

void f_1ea9_a2_v(object a0, object a1)
{
	@SetVariable("k11q01", 1);
	f_2214_a0_v();
	f_222e_a0_v();
}

void f_1eb5_a2_v(object a0, object a1)
{
	@SetVariable("k11q01", 8);
	f_2221_a0_v();
}

void f_1ebe_a2_v(object a0, object a1)
{
	@SetVariable("ook9Aglaja1", 1);
}

void f_1ec4_a2_v(object a0, object a1)
{
	@SetVariable("k9q01", 1);
	f_22a3_a0_v();
	f_22bd_a0_v();
}

void f_1ed0_a2_v(object a0, object a1)
{
	@SetVariable("k9q01", 8);
	f_22b0_a0_v();
}

void f_1ed9_a2_v(object a0, object a1)
{
	@Trace("money1000 is given");
	f_1d81_a2_v(a0, 1000);
}

void f_1ee3_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1ee9_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1eef_a2_v(object a0, object a1)
{
	@SetVariable("ook7Aglaja1", 1);
}

void f_1ef5_a2_v(object a0, object a1)
{
	@SetVariable("ook8Aglaja2", 1);
}

void f_1efb_a2_v(object a0, object a1)
{
	@SetVariable("ook9Aglaja2", 1);
}

void f_1f01_a2_v(object a0, object a1)
{
	@SetVariable("ook7Aglaja2", 1);
}

void f_1f07_a2_v(object a0, object a1)
{
	@SetVariable("ook7Aglaja3", 1);
}

void f_1f0d_a2_v(object a0, object a1)
{
	@SetVariable("ook8Aglaja3", 1);
}

void f_1f13_a2_v(object a0, object a1)
{
	@SetVariable("ook8Aglaja4", 1);
}

void f_1f19_a2_v(object a0, object a1)
{
	@SetVariable("ook8Aglaja5", 1);
}

void f_1f1f_a2_v(object a0, object a1)
{
	f_223b_a0_v();
}

void f_1f24_a2_v(object a0, object a1)
{
	@SetVariable("ook9Aglaja3", 1);
}

void f_1f2a_a2_v(object a0, object a1)
{
	@SetVariable("ook9Aglaja4", 1);
}

void f_1f30_a2_v(object a0, object a1)
{
	@SetVariable("ook9Aglaja5", 1);
}

void f_1f36_a2_v(object a0, object a1)
{
	@SetVariable("ook10Aglaja1", 1);
}

void f_1f3c_a2_v(object a0, object a1)
{
	@SetVariable("ook10Aglaja2", 1);
}

void f_1f42_a2_v(object a0, object a1)
{
	@SetVariable("ook10Aglaja3", 1);
}

void f_1f48_a2_v(object a0, object a1)
{
	@SetVariable("ook10Aglaja4", 1);
}

void f_1f4e_a2_v(object a0, object a1)
{
	@SetVariable("ook11Aglaja2", 1);
}

void f_1f54_a2_v(object a0, object a1)
{
	@SetVariable("ook11Aglaja3", 1);
}

void f_1f5a_a2_v(object a0, object a1)
{
	@SetVariable("ook11Aglaja4", 1);
}

void f_1f60_a2_v(object a0, object a1)
{
	@SetVariable("ook11Aglaja5", 1);
}

void f_1f66_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_1d81_a2_v(a0, L0 + 2000);
}

void f_1f71_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_1d81_a2_v(a0, L0 + 3000);
}

void f_1f7c_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_1d81_a2_v(a0, L0 + 4000);
}

void f_1f87_a2_v(object a0, object a1)
{
	if (f_1d70_a1_i("K_Mission3") == 0) {
		@SetVariable("K_Mission3", 1);
		f_2207_a0_v();
		f_22f3_a1_b(567);
		f_22f3_a1_b(568);
	}
}

void f_1f9f_a2_v(object a0, object a1)
{
	@SetVariable("ook7Aglaja4", 1);
}

void f_1fa5_a2_v(object a0, object a1)
{
	@SetVariable("k7AglajaVisit", 1);
}

void f_1fab_a2_v(object a0, object a1)
{
	@SetVariable("k8AglajaVisit", 1);
}

void f_1fb1_a2_v(object a0, object a1)
{
	@SetVariable("k9AglajaVisit", 1);
}

void f_1fb7_a2_v(object a0, object a1)
{
	@SetVariable("k11AglajaVisit", 1);
}

void f_1fbd_a2_v(object a0, object a1)
{
	@SetVariable("ook12AglajaNight1", 1);
}

void f_1fc3_a2_v(object a0, object a1)
{
	f_1db4_a2_b(a0, 0.30000001192092896);
}

void f_1fca_a2_v(object a0, object a1)
{
	f_1db4_a2_b(a0, 0.5);
}

void f_1fd1_a2_v(object a0, object a1)
{
	f_1db4_a2_b(a0, -0.5);
}

void f_1fd8_a2_v(object a0, object a1)
{
}

void f_1fda_a2_v(object a0, object a1)
{
	@Trace("feromicin is given");
	f_1da7_a3_v(a0, "feromicin", 1);
}

void f_1fe5_a2_v(object a0, object a1)
{
	@Trace("gamma_pills is given");
	f_1da7_a3_v(a0, "gamma_pills", 1);
}

void f_1ff0_a2_v(object a0, object a1)
{
	@Trace("delta_pills is given");
	f_1da7_a3_v(a0, "delta_pills", 1);
}

void f_1ffb_a2_v(object a0, object a1)
{
	@Trace("monomicin is given");
	f_1da7_a3_v(a0, "monomicin", 1);
}

bool f_2006_a1_b(object a0)
{
	if (f_1d70_a1_i("k7q01") == 0) {
		return true;
	}
	return false;
}

bool f_2012_a1_b(object a0)
{
	if (f_1d70_a1_i("k7q01") == 1) {
		return true;
	}
	return false;
}

bool f_201e_a1_b(object a0)
{
	if (f_1d70_a1_i("k7q01") == 9) {
		return true;
	}
	return false;
}

bool f_202a_a1_b(object a0)
{
	if (f_1d70_a1_i("ook8Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_2036_a1_b(object a0)
{
	if (f_1d70_a1_i("k8q01") == 0) {
		return true;
	}
	return false;
}

bool f_2042_a1_b(object a0)
{
	if (f_1d70_a1_i("k8q01") == 7) {
		return true;
	}
	return false;
}

bool f_204e_a1_b(object a0)
{
	if (f_1d70_a1_i("ook11Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_205a_a1_b(object a0)
{
	if (f_1d70_a1_i("k11q01") == 0) {
		return true;
	}
	return false;
}

bool f_2066_a1_b(object a0)
{
	if (f_1d70_a1_i("k11q01") == 7) {
		return true;
	}
	return false;
}

bool f_2072_a1_b(object a0)
{
	if (f_1d70_a1_i("ook9Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_207e_a1_b(object a0)
{
	if (f_1d70_a1_i("k9q01") == 0) {
		return true;
	}
	return false;
}

bool f_208a_a1_b(object a0)
{
	if (f_1d70_a1_i("k9q01") == 7) {
		return true;
	}
	return false;
}

bool f_2096_a1_b(object a0)
{
	if (f_21d8_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_20a0_a1_b(object a0)
{
	if (f_1d70_a1_i("ook7Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_20ac_a1_b(object a0)
{
	if (f_1d70_a1_i("ook8Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_20b8_a1_b(object a0)
{
	if (f_1d70_a1_i("ook9Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_20c4_a1_b(object a0)
{
	if (f_21e3_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_20ce_a1_b(object a0)
{
	if (f_21e9_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_20d8_a1_b(object a0)
{
	if (f_21ef_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_20e2_a1_b(object a0)
{
	if (f_21f5_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_20ec_a1_b(object a0)
{
	if (f_21fb_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_20f6_a1_b(object a0)
{
	if (f_2201_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2100_a1_b(object a0)
{
	if (f_1d70_a1_i("ook7Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_210c_a1_b(object a0)
{
	if (f_1d70_a1_i("ook7Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_2118_a1_b(object a0)
{
	if (f_1d70_a1_i("ook8Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_2124_a1_b(object a0)
{
	if (f_1d70_a1_i("ook8Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_2130_a1_b(object a0)
{
	if (f_1d70_a1_i("ook8Aglaja5") == 0) {
		return true;
	}
	return false;
}

bool f_213c_a1_b(object a0)
{
	if (f_1d70_a1_i("ook9Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_2148_a1_b(object a0)
{
	if (f_1d70_a1_i("ook9Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_2154_a1_b(object a0)
{
	if (f_1d70_a1_i("ook9Aglaja5") == 0) {
		return true;
	}
	return false;
}

bool f_2160_a1_b(object a0)
{
	if (f_1d70_a1_i("ook10Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_216c_a1_b(object a0)
{
	if (f_1d70_a1_i("ook10Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_2178_a1_b(object a0)
{
	if (f_1d70_a1_i("ook10Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_2184_a1_b(object a0)
{
	if (f_1d70_a1_i("ook10Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_2190_a1_b(object a0)
{
	if (f_1d70_a1_i("ook11Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_219c_a1_b(object a0)
{
	if (f_1d70_a1_i("ook11Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_21a8_a1_b(object a0)
{
	if (f_1d70_a1_i("ook11Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_21b4_a1_b(object a0)
{
	if (f_1d70_a1_i("ook11Aglaja5") == 0) {
		return true;
	}
	return false;
}

bool f_21c0_a1_b(object a0)
{
	if (f_1d70_a1_i("ook7Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_21cc_a1_b(object a0)
{
	if (f_1d70_a1_i("ook12AglajaNight1") == 0) {
		return true;
	}
	return false;
}

bool f_21d8_a1_b(object a0)
{
	return !f_2315_a1_b(f_1df9_a0_i() - 1);
}

bool f_21e3_a1_b(object a0)
{
	return f_234d_a0_b();
}

bool f_21e9_a1_b(object a0)
{
	return f_2361_a0_b();
}

bool f_21ef_a1_b(object a0)
{
	return f_2355_a0_b();
}

bool f_21f5_a1_b(object a0)
{
	return f_235b_a0_b();
}

bool f_21fb_a1_b(object a0)
{
	return f_233f_a0_b();
}

bool f_2201_a1_b(object a0)
{
	return f_2347_a0_b();
}

void f_2207_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 569, 0, 530583);
	f_22d7_a2_b(L0, -1);
}

void f_2214_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 480, 1, 528047);
	f_22d7_a2_b(L0, -1);
}

void f_2221_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 491, 1, 528058);
	f_22d7_a2_b(L0, 480);
}

void f_222e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 481, 1, 528048);
	f_22d7_a2_b(L0, 480);
}

void f_223b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 756, 2, 539741);
	f_22d7_a2_b(L0, 751);
}

void f_2248_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 416, 1, 526215);
	f_22d7_a2_b(L0, -1);
}

void f_2255_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 417, 1, 526216);
	f_22d7_a2_b(L0, 416);
}

void f_2262_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 428, 1, 526227);
	f_22d7_a2_b(L0, 416);
}

void f_226f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 429, 1, 526228);
	f_22d7_a2_b(L0, 416);
}

void f_227c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 438, 1, 526463);
	f_22d7_a2_b(L0, -1);
}

void f_2289_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 439, 1, 526464);
	f_22d7_a2_b(L0, 438);
}

void f_2296_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 446, 1, 526471);
	f_22d7_a2_b(L0, 438);
}

void f_22a3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 517, 1, 529809);
	f_22d7_a2_b(L0, -1);
}

void f_22b0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 525, 1, 529817);
	f_22d7_a2_b(L0, 517);
}

void f_22bd_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 518, 1, 529810);
	f_22d7_a2_b(L0, 517);
}

object f_22ca_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_22d7_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_22ca_a0_o();
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

bool f_22f3_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_22ca_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

int f_2304_a0_i(void)
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

bool f_2315_a1_b(int a0)
{
	int L0;
	@GetVariable("K2System" + a0, L0);
	return L0 != 0;
}

int f_231d_a0_i(void)
{
	int L0;
	@GetVariable("k2system_burah_day", L0);
	return L0;
}

int f_2323_a0_i(void)
{
	int L0;
	@GetVariable("k2system_danko_day", L0);
	return L0;
}

int f_2329_a0_i(void)
{
	int L0;
	int L1;
	L0 = f_231d_a0_i();
	@GetVariable("k2system_burah_state" + L0, L1);
	return L1;
}

int f_2334_a0_i(void)
{
	int L0;
	int L1;
	L0 = f_2323_a0_i();
	@GetVariable("k2system_danko_state" + L0, L1);
	return L1;
}

bool f_233f_a0_b(void)
{
	return f_1df9_a0_i() == f_2323_a0_i();
}

bool f_2347_a0_b(void)
{
	return f_2334_a0_i() == 3;
}

bool f_234d_a0_b(void)
{
	return f_1df9_a0_i() == f_231d_a0_i();
}

bool f_2355_a0_b(void)
{
	return f_2329_a0_i() == 2;
}

bool f_235b_a0_b(void)
{
	return f_2329_a0_i() == 3;
}

bool f_2361_a0_b(void)
{
	return f_2329_a0_i() == 0;
}

void f_2367_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_aglaja", L0);
	if (!L0) {
		t8{a0};
		@SetVariable("mt_aglaja", 1);
	}
	if (f_1e08_a1_b(12)) {
		t10{a0};
		return;
	}
	if (f_1e02_a1_b(7)) {
		t0{a0};
		return;
	}
	if (f_1e02_a1_b(8)) {
		t2{a0};
		return;
	}
	if (f_1e02_a1_b(9)) {
		t4{a0};
		return;
	}
	if (f_1e02_a1_b(10)) {
		t12{a0};
		return;
	}
	if (f_1e02_a1_b(11)) {
		t6{a0};
		return;
	}
	t14{a0};
}

