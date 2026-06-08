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
		} while (!f_1d6e_a0_b());
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
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
		f_1db7_a1_v(a0);
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
			if (f_2269_a1_b(tv1)) {
				f_20dd_a2_v(tv1, tv0);
				f_12b_a1_v("Neutral");
				tv0->SetMessage(517966);
				tv0->ClearReplies();
				tv0->AddReply(527053, 28348, 28347);
				break;
			}
			f_12b_a1_v("Neutral");
			tv0->SetMessage(517988);
			tv0->ClearReplies();
			if (f_228d_a1_b(tv1) && !f_2275_a1_b(tv1) && !f_2281_a1_b(tv1)) {
				tv0->AddReply(518075, 19209, 19208);
			}
			if (f_22a5_a1_b(tv1) && f_2275_a1_b(tv1)) {
				tv0->AddReply(518066, 20872, 19199);
			}
			if (f_22a5_a1_b(tv1) && f_2281_a1_b(tv1) && !f_2275_a1_b(tv1)) {
				tv0->AddReply(518072, 19206, 19205);
			}
			if (f_21c3_a1_b(tv1) && f_21cf_a1_b(tv1)) {
				tv0->AddReply(527089, 28388, 28387);
			}
			if (f_230f_a1_b(tv1) && !f_2303_a1_b(tv1) && !f_22f7_a1_b(tv1)) {
				tv0->AddReply(520049, 21230, 21229);
			}
			tv0->AddReply(517989, -1, 19122);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_12b_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a1 == 19119) {
				f_20e3_a2_v(tv1, tv0);
				f_2145_a2_v(tv1, tv0);
			}
			if (a1 == 19214) {
				f_20c0_a2_v(tv1, tv0);
				f_2040_a2_v(tv1, tv0);
				f_2133_a2_v(tv1, tv0);
				f_207e_a2_v(tv1, tv0);
			}
			if (a1 == 28360) {
				f_2133_a2_v(tv1, tv0);
				f_1fc9_a2_v(tv1, tv0);
			}
			if (a1 == 19217) {
				f_20cb_a2_v(tv1, tv0);
				f_2133_a2_v(tv1, tv0);
			}
			if (a1 == 20885) {
				f_20cb_a2_v(tv1, tv0);
				f_2133_a2_v(tv1, tv0);
			}
			if (a1 == 19210) {
				f_20e3_a2_v(tv1, tv0);
				f_2145_a2_v(tv1, tv0);
			}
			if (a1 == 19204) {
				f_2116_a2_v(tv1, tv0);
				f_20c0_a2_v(tv1, tv0);
				f_2040_a2_v(tv1, tv0);
				f_2133_a2_v(tv1, tv0);
				f_207e_a2_v(tv1, tv0);
			}
			if (a1 == 20886) {
				f_20cb_a2_v(tv1, tv0);
				f_211f_a2_v(tv1, tv0);
				f_2133_a2_v(tv1, tv0);
			}
			if (a1 == 20889) {
				f_20cb_a2_v(tv1, tv0);
				f_2133_a2_v(tv1, tv0);
				f_211f_a2_v(tv1, tv0);
			}
			if (a1 == 19207) {
				f_211f_a2_v(tv1, tv0);
				f_20cb_a2_v(tv1, tv0);
				f_2133_a2_v(tv1, tv0);
			}
			if (a1 == 28399) {
				f_1fdd_a2_v(tv1, tv0);
				f_206c_a2_v(tv1, tv0);
			}
			if (a1 == 21229) {
				f_1f81_a2_v(tv1, tv0);
			}
			if (a1 == 21235) {
				f_1f87_a2_v(tv1, tv0);
				f_20b0_a2_v(tv1, tv0);
			}
			if (a1 == 21238) {
				f_1f87_a2_v(tv1, tv0);
				f_20a4_a2_v(tv1, tv0);
			}
			if (a1 == 28361) {
				f_1f87_a2_v(tv1, tv0);
				f_20a4_a2_v(tv1, tv0);
			}
			if (a0 == 19098) {
				if (f_2269_a1_b(tv1)) {
					f_20dd_a2_v(tv1, tv0);
					f_12b_a1_v("Neutral");
					tv0->SetMessage(517966);
					tv0->ClearReplies();
					tv0->AddReply(527053, 28348, 28347);
					return;
				}
				f_12b_a1_v("Neutral");
				tv0->SetMessage(517988);
				tv0->ClearReplies();
				if (f_228d_a1_b(tv1) && !f_2275_a1_b(tv1) && !f_2281_a1_b(tv1)) {
					tv0->AddReply(518075, 19209, 19208);
				}
				if (f_22a5_a1_b(tv1) && f_2275_a1_b(tv1)) {
					tv0->AddReply(518066, 20872, 19199);
				}
				if (f_22a5_a1_b(tv1) && f_2281_a1_b(tv1) && !f_2275_a1_b(tv1)) {
					tv0->AddReply(518072, 19206, 19205);
				}
				if (f_21c3_a1_b(tv1) && f_21cf_a1_b(tv1)) {
					tv0->AddReply(527089, 28388, 28387);
				}
				if (f_230f_a1_b(tv1) && !f_2303_a1_b(tv1) && !f_22f7_a1_b(tv1)) {
					tv0->AddReply(520049, 21230, 21229);
				}
				tv0->AddReply(517989, -1, 19122);
				return;
			}
			if (a0 == 21230) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(520050);
				tv0->ClearReplies();
				tv0->AddReply(520051, 21232, 21231);
				tv0->AddReply(520056, 21237, 21236);
				return;
			}
			if (a0 == 21237) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(520057);
				tv0->ClearReplies();
				tv0->AddReply(520058, -1, 21238);
				tv0->AddReply(527066, -1, 28361);
				return;
			}
			if (a0 == 21232) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(520052);
				tv0->ClearReplies();
				tv0->AddReply(520053, 21234, 21233);
				return;
			}
			if (a0 == 21234) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(520054);
				tv0->ClearReplies();
				tv0->AddReply(520055, -1, 21235);
				return;
			}
			if (a0 == 28388) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(527090);
				tv0->ClearReplies();
				tv0->AddReply(527091, 28392, 28389);
				return;
			}
			if (a0 == 28392) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(527094);
				tv0->ClearReplies();
				tv0->AddReply(527095, 28394, 28393);
				return;
			}
			if (a0 == 28394) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(527096);
				tv0->ClearReplies();
				tv0->AddReply(527097, 28390, 28395);
				return;
			}
			if (a0 == 28390) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(527092);
				tv0->ClearReplies();
				tv0->AddReply(527093, 28396, 28391);
				return;
			}
			if (a0 == 28396) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(527098);
				tv0->ClearReplies();
				tv0->AddReply(527099, 28398, 28397);
				return;
			}
			if (a0 == 28398) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(527100);
				tv0->ClearReplies();
				tv0->AddReply(527101, -1, 28399);
				return;
			}
			if (a0 == 19206) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(518073);
				tv0->ClearReplies();
				tv0->AddReply(519719, 20879, 20878);
				tv0->AddReply(527045, 20879, 28336);
				tv0->AddReply(527046, 20879, 28337);
				return;
			}
			if (a0 == 20879) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(519720);
				tv0->ClearReplies();
				tv0->AddReply(519721, 20881, 20880);
				return;
			}
			if (a0 == 20881) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(519722);
				tv0->ClearReplies();
				tv0->AddReply(519723, 20883, 20882);
				tv0->AddReply(518074, -1, 19207);
				return;
			}
			if (a0 == 20883) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(519724);
				tv0->ClearReplies();
				tv0->AddReply(519727, -1, 20886);
				tv0->AddReply(519730, -1, 20889);
				return;
			}
			if (a0 == 20872) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(519713);
				tv0->ClearReplies();
				tv0->AddReply(519714, 20874, 20873);
				return;
			}
			if (a0 == 20874) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(519715);
				tv0->ClearReplies();
				tv0->AddReply(519716, 20876, 20875);
				return;
			}
			if (a0 == 20876) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(519717);
				tv0->ClearReplies();
				tv0->AddReply(519718, 19203, 20877);
				return;
			}
			if (a0 == 19203) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(518070);
				tv0->ClearReplies();
				tv0->AddReply(518071, -1, 19204);
				return;
			}
			if (a0 == 19209) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(518076);
				tv0->ClearReplies();
				tv0->AddReply(518077, -1, 19210);
				return;
			}
			if (a0 == 28348) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(527054);
				tv0->ClearReplies();
				tv0->AddReply(527055, 28350, 28349);
				return;
			}
			if (a0 == 28350) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(527056);
				tv0->ClearReplies();
				tv0->AddReply(527057, 28355, 28351);
				tv0->AddReply(527060, 28355, 28354);
				return;
			}
			if (a0 == 28355) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(527061);
				tv0->ClearReplies();
				tv0->AddReply(527062, 28352, 28356);
				return;
			}
			if (a0 == 28352) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(527058);
				tv0->ClearReplies();
				tv0->AddReply(519731, 20891, 20890);
				if (!f_2299_a1_b(tv1) && !f_2275_a1_b(tv1) && !f_2281_a1_b(tv1)) {
					tv0->AddReply(517969, 19102, 19101);
				}
				if (f_2275_a1_b(tv1)) {
					tv0->AddReply(518080, 19213, 19212);
				}
				if (f_2281_a1_b(tv1) && !f_2275_a1_b(tv1)) {
					tv0->AddReply(518083, 19216, 19215);
				}
				return;
			}
			if (a0 == 19216) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(518084);
				tv0->ClearReplies();
				tv0->AddReply(518085, -1, 19217);
				tv0->AddReply(519726, -1, 20885);
				return;
			}
			if (a0 == 19213) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(518081);
				tv0->ClearReplies();
				tv0->AddReply(519728, 20888, 20887);
				return;
			}
			if (a0 == 20888) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(519729);
				tv0->ClearReplies();
				tv0->AddReply(518082, -1, 19214);
				tv0->AddReply(527065, -1, 28360);
				return;
			}
			if (a0 == 19102) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(517970);
				tv0->ClearReplies();
				tv0->AddReply(517971, 19100, 19103);
				return;
			}
			if (a0 == 20891) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(519732);
				tv0->ClearReplies();
				if (f_228d_a1_b(tv1) && !f_2275_a1_b(tv1) && !f_2281_a1_b(tv1)) {
					tv0->AddReply(517967, 19100, 19099);
				}
				tv0->AddReply(519733, 20894, 20892);
				tv0->AddReply(519734, 20897, 20893);
				return;
			}
			if (a0 == 20897) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(519737);
				tv0->ClearReplies();
				tv0->AddReply(519738, 20899, 20898);
				return;
			}
			if (a0 == 20899) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(519739);
				tv0->ClearReplies();
				tv0->AddReply(519740, 19100, 20900);
				return;
			}
			if (a0 == 20894) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(519735);
				tv0->ClearReplies();
				tv0->AddReply(519736, 19100, 20895);
				return;
			}
			if (a0 == 19100) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(517968);
				tv0->ClearReplies();
				tv0->AddReply(517972, 19118, 19105);
				return;
			}
			if (a0 == 19118) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(517985);
				tv0->ClearReplies();
				tv0->AddReply(517986, -1, 19119);
				tv0->AddReply(517987, -1, 19120);
				return;
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
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
		f_1db7_a1_v(a0);
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
			f_658_a1_v("Neutral");
			tv0->SetMessage(518269);
			tv0->ClearReplies();
			if (f_231b_a1_b(tv1)) {
				tv0->AddReply(519454, 20625, 20624);
			}
			tv0->AddReply(518270, -1, 19379);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_658_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a1 == 20624) {
				f_1f9b_a2_v(tv1, tv0);
			}
			if (a0 == 19378) {
				f_658_a1_v("Neutral");
				tv0->SetMessage(518269);
				tv0->ClearReplies();
				if (f_231b_a1_b(tv1)) {
					tv0->AddReply(519454, 20625, 20624);
				}
				tv0->AddReply(518270, -1, 19379);
				return;
			}
			if (a0 == 20625) {
				f_658_a1_v("Neutral");
				tv0->SetMessage(519455);
				tv0->ClearReplies();
				tv0->AddReply(519456, 20627, 20626);
				tv0->AddReply(519458, 20627, 20628);
				return;
			}
			if (a0 == 20627) {
				f_658_a1_v("Neutral");
				tv0->SetMessage(519457);
				tv0->ClearReplies();
				tv0->AddReply(519459, 20631, 20630);
				tv0->AddReply(527748, 29106, 29105);
				return;
			}
			if (a0 == 29106) {
				f_658_a1_v("Neutral");
				tv0->SetMessage(527749);
				tv0->ClearReplies();
				tv0->AddReply(527750, -1, 29107);
				return;
			}
			if (a0 == 20631) {
				f_658_a1_v("Neutral");
				tv0->SetMessage(519460);
				tv0->ClearReplies();
				tv0->AddReply(519461, -1, 20632);
				tv0->AddReply(519462, -1, 20633);
				return;
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
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
		f_1db7_a1_v(a0);
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
			if (f_22b1_a1_b(tv1)) {
				f_217c_a2_v(tv1, tv0);
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(518396);
				tv0->ClearReplies();
				tv0->AddReply(519128, 20262, 20261);
				tv0->AddReply(519126, 20273, 20259);
				tv0->AddReply(519136, 20270, 20269);
				break;
			}
			f_7f3_a1_v("Neutral");
			tv0->SetMessage(518398);
			tv0->ClearReplies();
			if (f_22c9_a1_b(tv1) && f_22eb_a1_b(tv1)) {
				tv0->AddReply(518399, 20296, 19512);
			}
			if (f_22c9_a1_b(tv1) && !f_22eb_a1_b(tv1)) {
				tv0->AddReply(518404, 19518, 19517);
			}
			if (f_22d5_a1_b(tv1) && f_22e1_a1_b(tv1)) {
				tv0->AddReply(518407, 19521, 19520);
			}
			if (f_22d5_a1_b(tv1) && !f_22e1_a1_b(tv1)) {
				tv0->AddReply(519672, 20837, 20836);
			}
			tv0->AddReply(518400, -1, 19513);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_7f3_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a1 == 19510) {
				f_2182_a2_v(tv1, tv0);
				f_2040_a2_v(tv1, tv0);
				f_2155_a2_v(tv1, tv0);
			}
			if (a1 == 20295) {
				f_2182_a2_v(tv1, tv0);
				f_2040_a2_v(tv1, tv0);
				f_2155_a2_v(tv1, tv0);
			}
			if (a1 == 20289) {
				f_2155_a2_v(tv1, tv0);
				f_2182_a2_v(tv1, tv0);
				f_2040_a2_v(tv1, tv0);
			}
			if (a1 == 20293) {
				f_2040_a2_v(tv1, tv0);
				f_2182_a2_v(tv1, tv0);
				f_2155_a2_v(tv1, tv0);
			}
			if (a1 == 20286) {
				f_2155_a2_v(tv1, tv0);
				f_20cb_a2_v(tv1, tv0);
			}
			if (a1 == 19512) {
				f_1f6b_a2_v(tv1, tv0);
				f_2078_a2_v(tv1, tv0);
			}
			if (a1 == 20309) {
				f_1f44_a2_v(tv1, tv0);
				f_1f71_a2_v(tv1, tv0);
			}
			if (a1 == 19519) {
				f_1f44_a2_v(tv1, tv0);
				f_1f71_a2_v(tv1, tv0);
			}
			if (a1 == 19522) {
				f_1f5e_a2_v(tv1, tv0);
				f_209e_a2_v(tv1, tv0);
			}
			if (a0 == 19509) {
				if (f_22b1_a1_b(tv1)) {
					f_217c_a2_v(tv1, tv0);
					f_7f3_a1_v("Neutral");
					tv0->SetMessage(518396);
					tv0->ClearReplies();
					tv0->AddReply(519128, 20262, 20261);
					tv0->AddReply(519126, 20273, 20259);
					tv0->AddReply(519136, 20270, 20269);
					return;
				}
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(518398);
				tv0->ClearReplies();
				if (f_22c9_a1_b(tv1) && f_22eb_a1_b(tv1)) {
					tv0->AddReply(518399, 20296, 19512);
				}
				if (f_22c9_a1_b(tv1) && !f_22eb_a1_b(tv1)) {
					tv0->AddReply(518404, 19518, 19517);
				}
				if (f_22d5_a1_b(tv1) && f_22e1_a1_b(tv1)) {
					tv0->AddReply(518407, 19521, 19520);
				}
				if (f_22d5_a1_b(tv1) && !f_22e1_a1_b(tv1)) {
					tv0->AddReply(519672, 20837, 20836);
				}
				tv0->AddReply(518400, -1, 19513);
				return;
			}
			if (a0 == 20837) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519673);
				tv0->ClearReplies();
				tv0->AddReply(519674, 20840, 20838);
				tv0->AddReply(519675, -1, 20839);
				return;
			}
			if (a0 == 20840) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519676);
				tv0->ClearReplies();
				tv0->AddReply(519678, -1, 20842);
				return;
			}
			if (a0 == 19521) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(518408);
				tv0->ClearReplies();
				tv0->AddReply(518409, -1, 19522);
				return;
			}
			if (a0 == 19518) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(518405);
				tv0->ClearReplies();
				tv0->AddReply(518406, -1, 19519);
				return;
			}
			if (a0 == 20296) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519157);
				tv0->ClearReplies();
				tv0->AddReply(519158, 20298, 20297);
				return;
			}
			if (a0 == 20298) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519159);
				tv0->ClearReplies();
				tv0->AddReply(519160, 20303, 20299);
				tv0->AddReply(519161, 20301, 20300);
				return;
			}
			if (a0 == 20301) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519162);
				tv0->ClearReplies();
				tv0->AddReply(519163, 20303, 20302);
				return;
			}
			if (a0 == 20303) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519164);
				tv0->ClearReplies();
				tv0->AddReply(519165, 20306, 20305);
				tv0->AddReply(519171, 20306, 20311);
				return;
			}
			if (a0 == 20306) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519166);
				tv0->ClearReplies();
				tv0->AddReply(519174, 20316, 20315);
				return;
			}
			if (a0 == 20316) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519175);
				tv0->ClearReplies();
				tv0->AddReply(519167, 20308, 20307);
				tv0->AddReply(527866, 20308, 29212);
				return;
			}
			if (a0 == 20308) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519168);
				tv0->ClearReplies();
				tv0->AddReply(519169, -1, 20309);
				tv0->AddReply(519170, -1, 20310);
				return;
			}
			if (a0 == 20270) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519137);
				tv0->ClearReplies();
				tv0->AddReply(519138, 20262, 20271);
				tv0->AddReply(519145, 20281, 20280);
				return;
			}
			if (a0 == 20281) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519146);
				tv0->ClearReplies();
				tv0->AddReply(519147, 20262, 20282);
				return;
			}
			if (a0 == 20273) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519139);
				tv0->ClearReplies();
				tv0->AddReply(519140, 20276, 20274);
				tv0->AddReply(519141, 20276, 20275);
				return;
			}
			if (a0 == 20276) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519142);
				tv0->ClearReplies();
				tv0->AddReply(519143, 20262, 20278);
				tv0->AddReply(519144, 20270, 20279);
				return;
			}
			if (a0 == 20262) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519129);
				tv0->ClearReplies();
				tv0->AddReply(519130, 20267, 20263);
				if (f_22bd_a1_b(tv1)) {
					tv0->AddReply(519131, 20265, 20264);
				}
				return;
			}
			if (a0 == 20265) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519132);
				tv0->ClearReplies();
				tv0->AddReply(519133, 20260, 20266);
				return;
			}
			if (a0 == 20267) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519134);
				tv0->ClearReplies();
				tv0->AddReply(519135, 20260, 20268);
				tv0->AddReply(519148, -1, 20286);
				return;
			}
			if (a0 == 20260) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519127);
				tv0->ClearReplies();
				tv0->AddReply(519149, 20288, 20287);
				tv0->AddReply(519151, -1, 20289);
				tv0->AddReply(519152, 20291, 20290);
				return;
			}
			if (a0 == 20291) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519153);
				tv0->ClearReplies();
				tv0->AddReply(519154, 20288, 20292);
				tv0->AddReply(519155, -1, 20293);
				return;
			}
			if (a0 == 20288) {
				f_7f3_a1_v("Neutral");
				tv0->SetMessage(519150);
				tv0->ClearReplies();
				tv0->AddReply(518397, -1, 19510);
				tv0->AddReply(519156, -1, 20295);
				return;
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
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
		f_1db7_a1_v(a0);
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
			f_b78_a1_v("Neutral");
			tv0->SetMessage(520776);
			tv0->ClearReplies();
			tv0->AddReply(520777, 21992, 21991);
			tv0->AddReply(520780, 21995, 21994);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_b78_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a0 == 21990) {
				f_b78_a1_v("Neutral");
				tv0->SetMessage(520776);
				tv0->ClearReplies();
				tv0->AddReply(520777, 21992, 21991);
				tv0->AddReply(520780, 21995, 21994);
				return;
			}
			if (a0 == 21995) {
				f_b78_a1_v("Neutral");
				tv0->SetMessage(520781);
				tv0->ClearReplies();
				tv0->AddReply(520782, -1, 21996);
				return;
			}
			if (a0 == 21992) {
				f_b78_a1_v("Neutral");
				tv0->SetMessage(520778);
				tv0->ClearReplies();
				tv0->AddReply(520779, -1, 21993);
				return;
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
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
		f_1db7_a1_v(a0);
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
			if (f_21db_a1_b(tv1)) {
				f_1fe3_a2_v(tv1, tv0);
				f_cad_a1_v("Triumph");
				tv0->SetMessage(527890);
				tv0->ClearReplies();
				tv0->AddReply(527891, 29249, 29238);
				tv0->AddReply(527914, 29263, 29262);
				break;
			}
			f_2002_a2_v(tv1, tv0);
			f_cad_a1_v("Distrust");
			tv0->SetMessage(520806);
			tv0->ClearReplies();
			if (!f_2333_a1_b(tv1)) {
				tv0->AddReply(520807, 22026, 22024);
			}
			if (f_21e7_a1_b(tv1)) {
				tv0->AddReply(527893, 29241, 29240);
			}
			if (f_21f3_a1_b(tv1) && f_21ff_a1_b(tv1)) {
				tv0->AddReply(527896, 29244, 29243);
			}
			tv0->AddReply(520808, -1, 22025);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_cad_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a1 == 29248) {
				f_1ff5_a2_v(tv1, tv0);
				f_20c0_a2_v(tv1, tv0);
				f_2128_a2_v(tv1, tv0);
				f_20d2_a2_v(tv1, tv0);
				f_2040_a2_v(tv1, tv0);
			}
			if (a1 == 29256) {
				f_1ff5_a2_v(tv1, tv0);
				f_209e_a2_v(tv1, tv0);
			}
			if (a1 == 29255) {
				f_1fe9_a2_v(tv1, tv0);
			}
			if (a1 == 22027) {
				f_1fa1_a2_v(tv1, tv0);
				f_20aa_a2_v(tv1, tv0);
				f_1fac_a2_v(tv1, tv0);
			}
			if (a1 == 22030) {
				f_1fa1_a2_v(tv1, tv0);
				f_204d_a2_v(tv1, tv0);
				f_209e_a2_v(tv1, tv0);
			}
			if (a1 == 29242) {
				f_1fe9_a2_v(tv1, tv0);
			}
			if (a1 == 29245) {
				f_1ff5_a2_v(tv1, tv0);
				f_2093_a2_v(tv1, tv0);
				f_2128_a2_v(tv1, tv0);
				f_20d2_a2_v(tv1, tv0);
				f_2040_a2_v(tv1, tv0);
			}
			if (a0 == 29237) {
				if (f_21db_a1_b(tv1)) {
					f_1fe3_a2_v(tv1, tv0);
					f_cad_a1_v("Triumph");
					tv0->SetMessage(527890);
					tv0->ClearReplies();
					tv0->AddReply(527891, 29249, 29238);
					tv0->AddReply(527914, 29263, 29262);
					return;
				}
				f_2002_a2_v(tv1, tv0);
				f_cad_a1_v("Distrust");
				tv0->SetMessage(520806);
				tv0->ClearReplies();
				if (!f_2333_a1_b(tv1)) {
					tv0->AddReply(520807, 22026, 22024);
				}
				if (f_21e7_a1_b(tv1)) {
					tv0->AddReply(527893, 29241, 29240);
				}
				if (f_21f3_a1_b(tv1) && f_21ff_a1_b(tv1)) {
					tv0->AddReply(527896, 29244, 29243);
				}
				tv0->AddReply(520808, -1, 22025);
				return;
			}
			if (a0 == 29244) {
				f_cad_a1_v("Triumph");
				tv0->SetMessage(527897);
				tv0->ClearReplies();
				tv0->AddReply(527898, -1, 29245);
				return;
			}
			if (a0 == 29241) {
				f_cad_a1_v("Smile");
				tv0->SetMessage(527894);
				tv0->ClearReplies();
				tv0->AddReply(527895, -1, 29242);
				return;
			}
			if (a0 == 22026) {
				if (f_2327_a1_b(tv1)) {
					f_cad_a1_v("Neutral");
					tv0->SetMessage(520809);
					tv0->ClearReplies();
					tv0->AddReply(527881, 29229, 29228);
					return;
				}
				if (!f_2327_a1_b(tv1)) {
					f_cad_a1_v("Smile");
					tv0->SetMessage(520812);
					tv0->ClearReplies();
					tv0->AddReply(527886, 29234, 29233);
					return;
				}
			}
			if (a0 == 29234) {
				f_cad_a1_v("Neutral");
				tv0->SetMessage(527887);
				tv0->ClearReplies();
				if (f_222b_a1_b(tv1)) {
					tv0->AddReply(520813, -1, 22030);
				}
				tv0->AddReply(527889, -1, 29236);
				return;
			}
			if (a0 == 29229) {
				f_cad_a1_v("Think");
				tv0->SetMessage(527882);
				tv0->ClearReplies();
				if (f_233d_a1_b(tv1)) {
					tv0->AddReply(520810, -1, 22027);
				}
				tv0->AddReply(520811, -1, 22028);
				return;
			}
			if (a0 == 29263) {
				f_cad_a1_v("Think");
				tv0->SetMessage(527915);
				tv0->ClearReplies();
				tv0->AddReply(527916, 29249, 29264);
				return;
			}
			if (a0 == 29249) {
				f_cad_a1_v("Neutral");
				tv0->SetMessage(527902);
				tv0->ClearReplies();
				tv0->AddReply(527903, 29251, 29250);
				tv0->AddReply(527907, -1, 29254);
				return;
			}
			if (a0 == 29251) {
				f_cad_a1_v("Neutral");
				tv0->SetMessage(527904);
				tv0->ClearReplies();
				tv0->AddReply(527905, 29253, 29252);
				tv0->AddReply(527892, 29253, 29239);
				return;
			}
			if (a0 == 29253) {
				f_cad_a1_v("Think");
				tv0->SetMessage(527906);
				tv0->ClearReplies();
				if (f_21ff_a1_b(tv1)) {
					tv0->AddReply(527899, 29247, 29246);
				}
				tv0->AddReply(527908, -1, 29255);
				tv0->AddReply(527910, -1, 29258);
				return;
			}
			if (a0 == 29247) {
				f_cad_a1_v("Neutral");
				tv0->SetMessage(527900);
				tv0->ClearReplies();
				tv0->AddReply(527901, -1, 29248);
				tv0->AddReply(527909, -1, 29256);
				return;
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
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
		f_1db7_a1_v(a0);
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
			f_f3d_a1_v("Smile");
			tv0->SetMessage(520817);
			tv0->ClearReplies();
			if (!f_2333_a1_b(tv1)) {
				tv0->AddReply(520818, 22036, 22035);
			}
			tv0->AddReply(520825, -1, 22042);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_f3d_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a1 == 22037) {
				f_1fa1_a2_v(tv1, tv0);
				f_2046_a2_v(tv1, tv0);
				f_20aa_a2_v(tv1, tv0);
			}
			if (a1 == 22040) {
				f_1fa1_a2_v(tv1, tv0);
				f_209e_a2_v(tv1, tv0);
				f_2053_a2_v(tv1, tv0);
			}
			if (a0 == 22034) {
				f_f3d_a1_v("Smile");
				tv0->SetMessage(520817);
				tv0->ClearReplies();
				if (!f_2333_a1_b(tv1)) {
					tv0->AddReply(520818, 22036, 22035);
				}
				tv0->AddReply(520825, -1, 22042);
				return;
			}
			if (a0 == 22036) {
				if (f_2327_a1_b(tv1)) {
					f_f3d_a1_v("Neutral");
					tv0->SetMessage(520819);
					tv0->ClearReplies();
					if (f_2221_a1_b(tv1)) {
						tv0->AddReply(520820, -1, 22037);
					}
					tv0->AddReply(520821, -1, 22038);
					return;
				}
				if (!f_2327_a1_b(tv1)) {
					f_f3d_a1_v("Pride");
					tv0->SetMessage(520822);
					tv0->ClearReplies();
					if (f_2235_a1_b(tv1)) {
						tv0->AddReply(520823, -1, 22040);
					}
					tv0->AddReply(520824, -1, 22041);
					return;
				}
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
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
		f_1db7_a1_v(a0);
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
			f_1078_a1_v("Neutral");
			tv0->SetMessage(520827);
			tv0->ClearReplies();
			if (!f_2333_a1_b(tv1)) {
				tv0->AddReply(520828, 22046, 22045);
			}
			tv0->AddReply(520835, -1, 22052);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_1078_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a1 == 22047) {
				f_1fa1_a2_v(tv1, tv0);
				f_1fac_a2_v(tv1, tv0);
				f_20aa_a2_v(tv1, tv0);
			}
			if (a1 == 22050) {
				f_1fa1_a2_v(tv1, tv0);
				f_2053_a2_v(tv1, tv0);
				f_209e_a2_v(tv1, tv0);
			}
			if (a0 == 22044) {
				f_1078_a1_v("Neutral");
				tv0->SetMessage(520827);
				tv0->ClearReplies();
				if (!f_2333_a1_b(tv1)) {
					tv0->AddReply(520828, 22046, 22045);
				}
				tv0->AddReply(520835, -1, 22052);
				return;
			}
			if (a0 == 22046) {
				if (f_2327_a1_b(tv1)) {
					f_1078_a1_v("Neutral");
					tv0->SetMessage(520829);
					tv0->ClearReplies();
					if (f_233d_a1_b(tv1)) {
						tv0->AddReply(520830, -1, 22047);
					}
					tv0->AddReply(520831, -1, 22048);
					return;
				}
				if (!f_2327_a1_b(tv1)) {
					f_1078_a1_v("Neutral");
					tv0->SetMessage(520832);
					tv0->ClearReplies();
					tv0->AddReply(528426, 29811, 29810);
					return;
				}
			}
			if (a0 == 29811) {
				f_1078_a1_v("Neutral");
				tv0->SetMessage(528427);
				tv0->ClearReplies();
				if (f_2235_a1_b(tv1)) {
					tv0->AddReply(520833, -1, 22050);
				}
				tv0->AddReply(520834, -1, 22051);
				return;
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
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
		f_1db7_a1_v(a0);
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
			f_11c5_a1_v("Neutral");
			tv0->SetMessage(520837);
			tv0->ClearReplies();
			if (!f_2333_a1_b(tv1)) {
				tv0->AddReply(520838, 25375, 22055);
			}
			tv0->AddReply(520845, -1, 22062);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_11c5_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a1 == 22057) {
				f_1fa1_a2_v(tv1, tv0);
				f_20aa_a2_v(tv1, tv0);
				f_2059_a2_v(tv1, tv0);
			}
			if (a1 == 22060) {
				f_1fa1_a2_v(tv1, tv0);
				f_2060_a2_v(tv1, tv0);
				f_209e_a2_v(tv1, tv0);
			}
			if (a0 == 22054) {
				f_11c5_a1_v("Neutral");
				tv0->SetMessage(520837);
				tv0->ClearReplies();
				if (!f_2333_a1_b(tv1)) {
					tv0->AddReply(520838, 25375, 22055);
				}
				tv0->AddReply(520845, -1, 22062);
				return;
			}
			if (a0 == 25375) {
				f_11c5_a1_v("Neutral");
				tv0->SetMessage(524076);
				tv0->ClearReplies();
				tv0->AddReply(524077, 25377, 25376);
				tv0->AddReply(524080, 25377, 25379);
				return;
			}
			if (a0 == 25377) {
				f_11c5_a1_v("Neutral");
				tv0->SetMessage(524078);
				tv0->ClearReplies();
				tv0->AddReply(524079, 22056, 25378);
				return;
			}
			if (a0 == 22056) {
				if (f_2327_a1_b(tv1)) {
					f_11c5_a1_v("Neutral");
					tv0->SetMessage(520839);
					tv0->ClearReplies();
					if (f_223f_a1_b(tv1)) {
						tv0->AddReply(520840, -1, 22057);
					}
					tv0->AddReply(520841, -1, 22058);
					return;
				}
				if (!f_2327_a1_b(tv1)) {
					f_11c5_a1_v("Neutral");
					tv0->SetMessage(520842);
					tv0->ClearReplies();
					if (f_2249_a1_b(tv1)) {
						tv0->AddReply(520843, -1, 22060);
					}
					tv0->AddReply(520844, -1, 22061);
					return;
				}
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
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
		f_1db7_a1_v(a0);
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
			f_133c_a1_v("Neutral");
			tv0->SetMessage(520847);
			tv0->ClearReplies();
			if (!f_2333_a1_b(tv1)) {
				tv0->AddReply(520848, 22066, 22065);
			}
			if (f_2197_a1_b(tv1) && f_21a3_a1_b(tv1)) {
				tv0->AddReply(521398, 25021, 22576);
			}
			tv0->AddReply(520855, -1, 22072);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_133c_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a1 == 22067) {
				f_1fa1_a2_v(tv1, tv0);
				f_20aa_a2_v(tv1, tv0);
				f_1fd0_a2_v(tv1, tv0);
			}
			if (a1 == 22070) {
				f_1fa1_a2_v(tv1, tv0);
				f_204d_a2_v(tv1, tv0);
				f_209e_a2_v(tv1, tv0);
			}
			if (a1 == 22576) {
				f_1fb3_a2_v(tv1, tv0);
			}
			if (a1 == 22578) {
				f_1fb9_a2_v(tv1, tv0);
				f_20a4_a2_v(tv1, tv0);
			}
			if (a0 == 22064) {
				f_133c_a1_v("Neutral");
				tv0->SetMessage(520847);
				tv0->ClearReplies();
				if (!f_2333_a1_b(tv1)) {
					tv0->AddReply(520848, 22066, 22065);
				}
				if (f_2197_a1_b(tv1) && f_21a3_a1_b(tv1)) {
					tv0->AddReply(521398, 25021, 22576);
				}
				tv0->AddReply(520855, -1, 22072);
				return;
			}
			if (a0 == 25021) {
				f_133c_a1_v("Neutral");
				tv0->SetMessage(523758);
				tv0->ClearReplies();
				tv0->AddReply(523759, 25023, 25022);
				tv0->AddReply(523767, 25033, 25030);
				tv0->AddReply(523768, 25025, 25031);
				return;
			}
			if (a0 == 25033) {
				f_133c_a1_v("Neutral");
				tv0->SetMessage(523769);
				tv0->ClearReplies();
				tv0->AddReply(523770, 25023, 25034);
				return;
			}
			if (a0 == 25023) {
				f_133c_a1_v("Neutral");
				tv0->SetMessage(523760);
				tv0->ClearReplies();
				tv0->AddReply(521400, -1, 22578);
				tv0->AddReply(523761, 25025, 25024);
				return;
			}
			if (a0 == 25025) {
				f_133c_a1_v("Neutral");
				tv0->SetMessage(523762);
				tv0->ClearReplies();
				tv0->AddReply(523763, 25027, 25026);
				return;
			}
			if (a0 == 25027) {
				f_133c_a1_v("Neutral");
				tv0->SetMessage(523764);
				tv0->ClearReplies();
				tv0->AddReply(523765, -1, 25028);
				tv0->AddReply(523766, -1, 25029);
				return;
			}
			if (a0 == 22066) {
				if (f_2327_a1_b(tv1)) {
					f_133c_a1_v("Neutral");
					tv0->SetMessage(520849);
					tv0->ClearReplies();
					tv0->AddReply(523785, 25051, 25050);
					return;
				}
				if (!f_2327_a1_b(tv1)) {
					f_133c_a1_v("Neutral");
					tv0->SetMessage(520852);
					tv0->ClearReplies();
					tv0->AddReply(523787, 25053, 25052);
					return;
				}
			}
			if (a0 == 25053) {
				f_133c_a1_v("Neutral");
				tv0->SetMessage(523788);
				tv0->ClearReplies();
				if (f_222b_a1_b(tv1)) {
					tv0->AddReply(520853, -1, 22070);
				}
				tv0->AddReply(520854, -1, 22071);
				return;
			}
			if (a0 == 25051) {
				f_133c_a1_v("Neutral");
				tv0->SetMessage(523786);
				tv0->ClearReplies();
				if (f_21af_a1_b(tv1)) {
					tv0->AddReply(520850, -1, 22067);
				}
				tv0->AddReply(520851, -1, 22068);
				return;
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t20{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1db7_a1_v(a0);
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
			f_1531_a1_v("Neutral");
			tv0->SetMessage(520857);
			tv0->ClearReplies();
			if (!f_2333_a1_b(tv1)) {
				tv0->AddReply(520858, 23437, 22075);
			}
			tv0->AddReply(520865, -1, 22082);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_1531_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a1 == 22077) {
				f_1fa1_a2_v(tv1, tv0);
				f_20aa_a2_v(tv1, tv0);
				f_1fd0_a2_v(tv1, tv0);
			}
			if (a1 == 22080) {
				f_1fa1_a2_v(tv1, tv0);
				f_2066_a2_v(tv1, tv0);
				f_209e_a2_v(tv1, tv0);
			}
			if (a1 == 23442) {
				f_209e_a2_v(tv1, tv0);
				f_1fa1_a2_v(tv1, tv0);
				f_2066_a2_v(tv1, tv0);
			}
			if (a0 == 22074) {
				f_1531_a1_v("Neutral");
				tv0->SetMessage(520857);
				tv0->ClearReplies();
				if (!f_2333_a1_b(tv1)) {
					tv0->AddReply(520858, 23437, 22075);
				}
				tv0->AddReply(520865, -1, 22082);
				return;
			}
			if (a0 == 23437) {
				f_1531_a1_v("Neutral");
				tv0->SetMessage(522282);
				tv0->ClearReplies();
				tv0->AddReply(522283, 22076, 23438);
				return;
			}
			if (a0 == 22076) {
				if (f_2327_a1_b(tv1)) {
					f_1531_a1_v("Neutral");
					tv0->SetMessage(520859);
					tv0->ClearReplies();
					if (f_21af_a1_b(tv1)) {
						tv0->AddReply(520860, -1, 22077);
					}
					tv0->AddReply(520861, -1, 22078);
					return;
				}
				if (!f_2327_a1_b(tv1)) {
					f_1531_a1_v("Neutral");
					tv0->SetMessage(520862);
					tv0->ClearReplies();
					tv0->AddReply(522284, 23440, 23439);
					return;
				}
			}
			if (a0 == 23440) {
				f_1531_a1_v("Neutral");
				tv0->SetMessage(522285);
				tv0->ClearReplies();
				if (f_2253_a1_b(tv1)) {
					tv0->AddReply(520863, -1, 22080);
				}
				tv0->AddReply(520864, 23441, 22081);
				return;
			}
			if (a0 == 23441) {
				f_1531_a1_v("Neutral");
				tv0->SetMessage(522286);
				tv0->ClearReplies();
				if (f_2253_a1_b(tv1)) {
					tv0->AddReply(522287, -1, 23442);
				}
				tv0->AddReply(522288, -1, 23443);
				return;
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t22{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1db7_a1_v(a0);
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
			f_16c8_a1_v("Neutral");
			tv0->SetMessage(520867);
			tv0->ClearReplies();
			if (f_2209_a1_b(tv1)) {
				tv0->AddReply(530471, 31838, 31837);
			}
			if (!f_2333_a1_b(tv1)) {
				tv0->AddReply(520868, 23728, 22085);
			}
			tv0->AddReply(520875, -1, 22092);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_16c8_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a1 == 31843) {
				f_2008_a2_v(tv1, tv0);
			}
			if (a1 == 22087) {
				f_1fa1_a2_v(tv1, tv0);
				f_1fd0_a2_v(tv1, tv0);
				f_20aa_a2_v(tv1, tv0);
			}
			if (a1 == 23725) {
				f_209e_a2_v(tv1, tv0);
				f_1fa1_a2_v(tv1, tv0);
				f_2066_a2_v(tv1, tv0);
			}
			if (a1 == 22090) {
				f_1fa1_a2_v(tv1, tv0);
				f_2066_a2_v(tv1, tv0);
				f_209e_a2_v(tv1, tv0);
			}
			if (a0 == 22084) {
				f_16c8_a1_v("Neutral");
				tv0->SetMessage(520867);
				tv0->ClearReplies();
				if (f_2209_a1_b(tv1)) {
					tv0->AddReply(530471, 31838, 31837);
				}
				if (!f_2333_a1_b(tv1)) {
					tv0->AddReply(520868, 23728, 22085);
				}
				tv0->AddReply(520875, -1, 22092);
				return;
			}
			if (a0 == 23728) {
				f_16c8_a1_v("Neutral");
				tv0->SetMessage(522549);
				tv0->ClearReplies();
				tv0->AddReply(522550, 22086, 23729);
				return;
			}
			if (a0 == 22086) {
				if (f_2327_a1_b(tv1)) {
					f_16c8_a1_v("Neutral");
					tv0->SetMessage(520869);
					tv0->ClearReplies();
					if (f_21af_a1_b(tv1)) {
						tv0->AddReply(520870, -1, 22087);
					}
					tv0->AddReply(520871, -1, 22088);
					return;
				}
				if (!f_2327_a1_b(tv1)) {
					f_16c8_a1_v("Neutral");
					tv0->SetMessage(520872);
					tv0->ClearReplies();
					tv0->AddReply(522541, 23721, 23720);
					return;
				}
			}
			if (a0 == 23721) {
				f_16c8_a1_v("Neutral");
				tv0->SetMessage(522542);
				tv0->ClearReplies();
				tv0->AddReply(522544, 23724, 23723);
				if (f_2253_a1_b(tv1)) {
					tv0->AddReply(520873, -1, 22090);
				}
				return;
			}
			if (a0 == 23724) {
				f_16c8_a1_v("Neutral");
				tv0->SetMessage(522545);
				tv0->ClearReplies();
				if (f_2253_a1_b(tv1)) {
					tv0->AddReply(522546, -1, 23725);
				}
				tv0->AddReply(522547, -1, 23726);
				return;
			}
			if (a0 == 31838) {
				f_16c8_a1_v("Neutral");
				tv0->SetMessage(530472);
				tv0->ClearReplies();
				tv0->AddReply(530473, 31840, 31839);
				tv0->AddReply(531484, 32839, 32838);
				return;
			}
			if (a0 == 32839) {
				f_16c8_a1_v("Neutral");
				tv0->SetMessage(531485);
				tv0->ClearReplies();
				tv0->AddReply(531486, 31840, 32840);
				return;
			}
			if (a0 == 31840) {
				f_16c8_a1_v("Neutral");
				tv0->SetMessage(530474);
				tv0->ClearReplies();
				tv0->AddReply(530475, 31842, 31841);
				tv0->AddReply(531487, 32843, 32842);
				return;
			}
			if (a0 == 32843) {
				f_16c8_a1_v("Neutral");
				tv0->SetMessage(531488);
				tv0->ClearReplies();
				tv0->AddReply(531489, 31842, 32844);
				tv0->AddReply(531490, 31842, 32846);
				return;
			}
			if (a0 == 31842) {
				f_16c8_a1_v("Neutral");
				tv0->SetMessage(530476);
				tv0->ClearReplies();
				tv0->AddReply(530477, -1, 31843);
				return;
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t24{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1db7_a1_v(a0);
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
			if (f_2215_a1_b(tv1)) {
				f_18e9_a1_v("Neutral");
				tv0->SetMessage(530495);
				tv0->ClearReplies();
				tv0->AddReply(530496, 31859, 31857);
				tv0->AddReply(530497, 31859, 31858);
				break;
			}
			f_18e9_a1_v("Neutral");
			tv0->SetMessage(520877);
			tv0->ClearReplies();
			if (!f_2333_a1_b(tv1)) {
				tv0->AddReply(520878, 22096, 22095);
			}
			tv0->AddReply(520885, -1, 22102);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_18e9_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a1 == 31860) {
				f_2011_a2_v(tv1, tv0);
				f_2030_a2_v(tv1, tv0);
			}
			if (a1 == 40677) {
				f_2011_a2_v(tv1, tv0);
				f_2030_a2_v(tv1, tv0);
			}
			if (a1 == 22097) {
				f_1fa1_a2_v(tv1, tv0);
				f_20aa_a2_v(tv1, tv0);
				f_1fd0_a2_v(tv1, tv0);
			}
			if (a1 == 22100) {
				f_1fa1_a2_v(tv1, tv0);
				f_1fd7_a2_v(tv1, tv0);
				f_209e_a2_v(tv1, tv0);
			}
			if (a1 == 24641) {
				f_1fd7_a2_v(tv1, tv0);
				f_1fa1_a2_v(tv1, tv0);
				f_209e_a2_v(tv1, tv0);
			}
			if (a0 == 31856) {
				if (f_2215_a1_b(tv1)) {
					f_18e9_a1_v("Neutral");
					tv0->SetMessage(530495);
					tv0->ClearReplies();
					tv0->AddReply(530496, 31859, 31857);
					tv0->AddReply(530497, 31859, 31858);
					return;
				}
				f_18e9_a1_v("Neutral");
				tv0->SetMessage(520877);
				tv0->ClearReplies();
				if (!f_2333_a1_b(tv1)) {
					tv0->AddReply(520878, 22096, 22095);
				}
				tv0->AddReply(520885, -1, 22102);
				return;
			}
			if (a0 == 22096) {
				if (f_2327_a1_b(tv1)) {
					f_18e9_a1_v("Neutral");
					tv0->SetMessage(520879);
					tv0->ClearReplies();
					tv0->AddReply(523415, 24637, 24636);
					return;
				}
				if (!f_2327_a1_b(tv1)) {
					f_18e9_a1_v("Neutral");
					tv0->SetMessage(520882);
					tv0->ClearReplies();
					tv0->AddReply(523417, 24639, 24638);
					return;
				}
			}
			if (a0 == 24639) {
				f_18e9_a1_v("Neutral");
				tv0->SetMessage(523418);
				tv0->ClearReplies();
				if (f_21b9_a1_b(tv1)) {
					tv0->AddReply(520883, -1, 22100);
				}
				tv0->AddReply(520884, 24640, 22101);
				return;
			}
			if (a0 == 24640) {
				f_18e9_a1_v("Neutral");
				tv0->SetMessage(523419);
				tv0->ClearReplies();
				if (f_21b9_a1_b(tv1)) {
					tv0->AddReply(523420, -1, 24641);
				}
				tv0->AddReply(523421, -1, 24642);
				return;
			}
			if (a0 == 24637) {
				f_18e9_a1_v("Neutral");
				tv0->SetMessage(523416);
				tv0->ClearReplies();
				if (f_21af_a1_b(tv1)) {
					tv0->AddReply(520880, -1, 22097);
				}
				tv0->AddReply(520881, -1, 22098);
				return;
			}
			if (a0 == 31859) {
				f_18e9_a1_v("Neutral");
				tv0->SetMessage(530498);
				tv0->ClearReplies();
				tv0->AddReply(531420, 32764, 32763);
				return;
			}
			if (a0 == 32764) {
				f_18e9_a1_v("Neutral");
				tv0->SetMessage(531421);
				tv0->ClearReplies();
				tv0->AddReply(530499, -1, 31860);
				tv0->AddReply(538761, -1, 40677);
				return;
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
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
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t26{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1db7_a1_v(a0);
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
			f_1ad6_a1_v("Neutral");
			tv0->SetMessage(520887);
			tv0->ClearReplies();
			if (f_225d_a1_b(tv1)) {
				tv0->AddReply(535384, 37084, 37069);
			}
			tv0->AddReply(535378, -1, 37063);
			tv0->AddReply(520895, -1, 22112);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_1ad6_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a1 == 37069) {
				f_2072_a2_v(tv1, tv0);
			}
			if (a0 == 22104) {
				f_1ad6_a1_v("Neutral");
				tv0->SetMessage(520887);
				tv0->ClearReplies();
				if (f_225d_a1_b(tv1)) {
					tv0->AddReply(535384, 37084, 37069);
				}
				tv0->AddReply(535378, -1, 37063);
				tv0->AddReply(520895, -1, 22112);
				return;
			}
			if (a0 == 37084) {
				f_1ad6_a1_v("Neutral");
				tv0->SetMessage(535399);
				tv0->ClearReplies();
				tv0->AddReply(535400, 37066, 37085);
				tv0->AddReply(535401, -1, 37086);
				return;
			}
			if (a0 == 37066) {
				f_1ad6_a1_v("Neutral");
				tv0->SetMessage(535381);
				tv0->ClearReplies();
				tv0->AddReply(535382, -1, 37067);
				tv0->AddReply(535383, -1, 37068);
				return;
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t27
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_1dc8_a1_b(f_1e75_a0_o());
		if (!f_1d73_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_24c4_a0_i());
		L0->SetNPCDescription(f_24c2_a0_i());
		L0->SetPhoto(f_24c6_a0_s());
		L0->SetPhoto2(f_24c8_a0_s());
		L0->SetPlayerName(f_24b1_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t28{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1db7_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t28
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
			f_1be1_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_24ca_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e52_a1_v(tv2);
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

	void f_1be1_a1_v(string a0)
	{
		if (!f_24ca_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e6e_a0_v();
			if (a0 == 42563) {
				f_1be1_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_24ca_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t29
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_1c28_a0_v();
	}

	void f_1c28_a0_v(void)
	{
		if (!f_1d6e_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_1cde_a0_v();
		}
	}

	bool f_1c3c_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1d65_a1_b(L0);
	}

	void f_1c4b_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1c50_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1d2a_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1c66_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1c6f_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1c6f_a0_v();
			if (f_1d6e_a0_b() && f_1c50_a0_b()) {
				if (f_1c3c_a0_b()) {
					f_1e02_a1_b(f_1e75_a0_o());
				}
			} else {
				f_1c4b_a0_v();
				f_1c66_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1d25_a0_v();
		f_1c6f_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_1c6f_a0_v();
		f_1e52_a1_v("Neutral");
		f_1c66_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1c66_a0_v();
		} else {
			f_1e52_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1d25_a0_v();
			f_1d65_a1_b(a0);
			enable OnUse;
			f_24cc_a1_v(a0);
			f_1e52_a1_v("Neutral");
			f_1c6f_a0_v();
			f_1c66_a0_v();
		}
	}
}

void f_1cde_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1d6e_a0_b()) {
		return;
	}
	L0 = f_1f33_a0_i();
	for (L1 = 0; L1 < 5 && f_1d6e_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_1f2c_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1d23_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1d23_a0_b(void)
{
	return true;
}

void f_1d25_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1d2a_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1d32_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_1d3e_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_1d32_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_1e85_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_1d54_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1d5b_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1d65_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1d5b_a1_b(L0);
}

bool f_1d6e_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1d73_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1e7b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_24ca_a0_b()) {
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

void f_1db7_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_24ca_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1dc8_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1e02_a1_b(a0)) {
			if (!f_1e27_a1_b(a0)) {
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
		if (!f_1e27_a1_b(a0)) {
			if (!f_1e02_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1e02_a1_b(object a0)
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
	return f_1e5f_a1_b(L4);
}

bool f_1e27_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1f1d_a0_i() + "m";
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
	return f_1e5f_a1_b(L4);
}

void f_1e52_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1e59_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_1e5f_a1_b(string a0)
{
	if (f_24ca_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1e6e_a0_v(void)
{
	if (f_24ca_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1e75_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1e7b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_1e85_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_1e90_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1e95_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_1ea0_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1eac_a2_v(object a0, int a1)
{
	f_1d54_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1ea0_a2_v(L0, a1);
	}
}

void f_1ebf_a3_v(object a0, object a1, int a2)
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
		f_1ea0_a2_v(L0, a2);
	}
}

void f_1ed2_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1ebf_a3_v(a0, L0, a2);
}

bool f_1edf_a2_b(object a0, float a1)
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
	f_1f02_a1_v(a1);
	f_1d3e_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_1f02_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_1f0c_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1f18_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1f1d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1f26_a1_b(int a0)
{
	return f_1f1d_a0_i() == a0;
}

string f_1f2c_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1f33_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_1f2c_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_1f44_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b3q03", 1);
	L0 = f_247f_a0_o();
	L0->AddMark("b3q03BurahHome", "pt_map_burah_home", 0, 519682, f_1f18_a0_f());
	f_2408_a0_v();
	f_2422_a0_v();
}

void f_1f5e_a2_v(object a0, object a1)
{
	int L0;
	@SetVariable("b3q03", 1000);
	f_2415_a0_v();
	a0->RemoveItemByType(L0, "grass_combination", 10);
}

void f_1f6b_a2_v(object a0, object a1)
{
	@SetVariable("oob3Notkin2", 1);
}

void f_1f71_a2_v(object a0, object a1)
{
	f_2490_a3_v(f_247f_a0_o(), "pt_map_burah_home", 2);
	a1->ShowMap(f_247f_a0_o());
}

void f_1f81_a2_v(object a0, object a1)
{
	@SetVariable("oob1Notkin2", 1);
}

void f_1f87_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b1q01NotkinGotoGrif", 1);
	L0 = f_247f_a0_o();
	L0->AddMark("b1q01NotkinGotoGrif", "pt_map_grif", 1, 520447, f_1f18_a0_f());
}

void f_1f9b_a2_v(object a0, object a1)
{
	@SetVariable("oob2Notkin1", 1);
}

void f_1fa1_a2_v(object a0, object a1)
{
	int L0;
	L0 = f_1f1d_a0_i();
	@SetVariable("RMap" + L0, 1);
}

void f_1fac_a2_v(object a0, object a1)
{
	f_1eac_a2_v(a0, -500);
}

void f_1fb3_a2_v(object a0, object a1)
{
	@SetVariable("oob8Notkin1", 1);
}

void f_1fb9_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_247f_a0_o();
	L0->AddMark("b8q01NotkinGotoKlara", "pt_map_mishka", 3, 521466, f_1f18_a0_f());
}

void f_1fc9_a2_v(object a0, object a1)
{
	f_1edf_a2_b(a0, 0.05000000074505806);
}

void f_1fd0_a2_v(object a0, object a1)
{
	f_1eac_a2_v(a0, -1500);
}

void f_1fd7_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "grabitel_mark", 5);
}

void f_1fdd_a2_v(object a0, object a1)
{
	@SetVariable("oob1Notkin3", 1);
}

void f_1fe3_a2_v(object a0, object a1)
{
	@SetVariable("oob4Notkin1", 1);
}

void f_1fe9_a2_v(object a0, object a1)
{
	@SetVariable("b4q03", 1);
	f_242f_a0_v();
	f_2449_a0_v();
}

void f_1ff5_a2_v(object a0, object a1)
{
	int L0;
	@SetVariable("b4q03", 1000);
	f_243c_a0_v();
	a0->RemoveItemByType(L0, "hunter_mark", 4);
}

void f_2002_a2_v(object a0, object a1)
{
	@SetVariable("b4NotkinMapVisit", 1);
}

void f_2008_a2_v(object a0, object a1)
{
	@SetVariable("b10q04NotkinTalk", 9);
	f_23a0_a0_v();
}

void f_2011_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b11q04", 1);
	L0 = f_247f_a0_o();
	L0->AddMark("b11q04NotkinGotoSanitar", "pt_b11q04_sanitar", 0, 530500, f_1f18_a0_f());
	f_23ad_a0_v();
	f_23ba_a0_v();
	f_1f0c_a2_b("quest_b11_04", "place_sanitar");
}

void f_2030_a2_v(object a0, object a1)
{
	f_2490_a3_v(f_247f_a0_o(), "pt_b11q04_sanitar", 2);
	a1->ShowMap(f_247f_a0_o());
}

void f_2040_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_2046_a2_v(object a0, object a1)
{
	f_1eac_a2_v(a0, -1000);
}

void f_204d_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "grabitel_mark", 3);
}

void f_2053_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "hunter_mark", 2);
}

void f_2059_a2_v(object a0, object a1)
{
	f_1eac_a2_v(a0, -2000);
}

void f_2060_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "hunter_mark", 3);
}

void f_2066_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "grabitel_mark", 4);
}

void f_206c_a2_v(object a0, object a1)
{
	@SetVariable("KnowShabnak", 1);
}

void f_2072_a2_v(object a0, object a1)
{
	@SetVariable("oob12Notkin1", 1);
}

void f_2078_a2_v(object a0, object a1)
{
	@SetVariable("b3NotkinVisit", 1);
}

void f_207e_a2_v(object a0, object a1)
{
	object L0;
	@Trace("Revolver is given");
	@CreateInvItem(L0);
	L0->SetItemName("Revolver");
	L0->SetProperty("durability", 30);
	f_1ebf_a3_v(a0, L0, 1);
}

void f_2093_a2_v(object a0, object a1)
{
	@Trace("revolver ammo2 is given");
	f_1ed2_a3_v(a0, "revolver_ammo", 2);
}

void f_209e_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_20a4_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_20aa_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_20b0_a2_v(object a0, object a1)
{
	f_2490_a3_v(f_247f_a0_o(), "pt_map_grif", 2);
	a1->ShowMap(f_247f_a0_o());
}

void f_20c0_a2_v(object a0, object a1)
{
	@Trace("revolver ammo6 is given");
	f_1ed2_a3_v(a0, "revolver_ammo", 6);
}

void f_20cb_a2_v(object a0, object a1)
{
	f_1edf_a2_b(a0, 0.10000000149011612);
}

void f_20d2_a2_v(object a0, object a1)
{
	@Trace("rifle ammo10 is given");
	f_1ed2_a3_v(a0, "rifle_ammo", 10);
}

void f_20dd_a2_v(object a0, object a1)
{
	@SetVariable("oob1Notkin1", 1);
}

void f_20e3_a2_v(object a0, object a1)
{
	object L0;
	int L1;
	@SetVariable("b1q03_1", 1);
	L0 = f_247f_a0_o();
	L0->AddMark("b1q03NotkinGotoDoberman", "pt_b1q03_doberman", 0, 518098, f_1f18_a0_f());
	L0->AddMark("b1q03NotkinGotoDobermanSelf", "pt_map_notkin", 0, 530599, f_1f18_a0_f());
	f_23ee_a0_v();
	f_23e1_a0_v();
	@GetVariable("b1q03", L1);
	if (L1 != 0) {
		return;
	}
	f_1e95_a1_o("quest_b1_03");
	f_1f0c_a2_b("quest_b1_03", "place_doberman");
}

void f_2116_a2_v(object a0, object a1)
{
	@SetVariable("b1q03_1", 1000);
	f_23c7_a0_v();
}

void f_211f_a2_v(object a0, object a1)
{
	@SetVariable("b1q03_1", -1);
	f_23d4_a0_v();
}

void f_2128_a2_v(object a0, object a1)
{
	@Trace("samopal ammo5 is given");
	f_1ed2_a3_v(a0, "samopal_ammo", 5);
}

void f_2133_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("b1q03", L0);
	if (L0 == 1000) {
		return;
	}
	f_1f0c_a2_b("quest_b1_03", "cleanup");
	@SetVariable("b1q03", 1000);
}

void f_2145_a2_v(object a0, object a1)
{
	f_2490_a3_v(f_247f_a0_o(), "pt_b1q03_doberman", 2);
	a1->ShowMap(f_247f_a0_o());
}

void f_2155_a2_v(object a0, object a1)
{
	object L0;
	int L1;
	@SetVariable("b3q02", 5);
	L0 = f_247f_a0_o();
	L0->AddMark("b3q02NotkinGotoKapella", "pt_map_kapella", 0, 519654, f_1f18_a0_f());
	f_23fb_a0_v();
	@GetVariable("b3q02Dead", L1);
	if (L1) {
		f_1f0c_a2_b("quest_b3_02", "place_grabitel2");
	} else {
		f_1f0c_a2_b("quest_b3_02", "remove_grabitel");
	}
}

void f_217c_a2_v(object a0, object a1)
{
	@SetVariable("oob3Notkin1", 1);
}

void f_2182_a2_v(object a0, object a1)
{
	object L0;
	@Trace("Samopal is given");
	@CreateInvItem(L0);
	L0->SetItemName("Samopal");
	L0->SetProperty("durability", 30);
	f_1ebf_a3_v(a0, L0, 1);
}

bool f_2197_a1_b(object a0)
{
	if (f_1e90_a1_i("b8q01") == 2) {
		return true;
	}
	return false;
}

bool f_21a3_a1_b(object a0)
{
	if (f_1e90_a1_i("oob8Notkin1") == 0) {
		return true;
	}
	return false;
}

bool f_21af_a1_b(object a0)
{
	if (f_2347_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_21b9_a1_b(object a0)
{
	if (f_234e_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_21c3_a1_b(object a0)
{
	if (f_1e90_a1_i("oob1Notkin3") == 0) {
		return true;
	}
	return false;
}

bool f_21cf_a1_b(object a0)
{
	if (f_1e90_a1_i("b1ResqueList") != 0) {
		return true;
	}
	return false;
}

bool f_21db_a1_b(object a0)
{
	if (f_1e90_a1_i("oob4Notkin1") == 0) {
		return true;
	}
	return false;
}

bool f_21e7_a1_b(object a0)
{
	if (f_1e90_a1_i("b4q03") == 0) {
		return true;
	}
	return false;
}

bool f_21f3_a1_b(object a0)
{
	if (f_1e90_a1_i("b4q03") == 1) {
		return true;
	}
	return false;
}

bool f_21ff_a1_b(object a0)
{
	if (f_2355_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2209_a1_b(object a0)
{
	if (f_1e90_a1_i("b10q04NotkinTalk") == 1) {
		return true;
	}
	return false;
}

bool f_2215_a1_b(object a0)
{
	if (f_1e90_a1_i("b11q04") == 0) {
		return true;
	}
	return false;
}

bool f_2221_a1_b(object a0)
{
	if (f_235c_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_222b_a1_b(object a0)
{
	if (f_2363_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2235_a1_b(object a0)
{
	if (f_236a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_223f_a1_b(object a0)
{
	if (f_2371_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2249_a1_b(object a0)
{
	if (f_2378_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2253_a1_b(object a0)
{
	if (f_237f_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_225d_a1_b(object a0)
{
	if (f_1e90_a1_i("oob12Notkin1") == 0) {
		return true;
	}
	return false;
}

bool f_2269_a1_b(object a0)
{
	if (f_1e90_a1_i("oob1Notkin1") == 0) {
		return true;
	}
	return false;
}

bool f_2275_a1_b(object a0)
{
	if (f_1e90_a1_i("b1q03_dead") != 0) {
		return true;
	}
	return false;
}

bool f_2281_a1_b(object a0)
{
	if (f_1e90_a1_i("b1q03_retreat") != 0) {
		return true;
	}
	return false;
}

bool f_228d_a1_b(object a0)
{
	if (f_1e90_a1_i("b1q03_1") == 0) {
		return true;
	}
	return false;
}

bool f_2299_a1_b(object a0)
{
	if (f_1e90_a1_i("b1q03_2") == 0) {
		return true;
	}
	return false;
}

bool f_22a5_a1_b(object a0)
{
	if (f_1e90_a1_i("b1q03_1") == 1) {
		return true;
	}
	return false;
}

bool f_22b1_a1_b(object a0)
{
	if (f_1e90_a1_i("oob3Notkin1") == 0) {
		return true;
	}
	return false;
}

bool f_22bd_a1_b(object a0)
{
	if (f_1e90_a1_i("b3q02Dead") != 0) {
		return true;
	}
	return false;
}

bool f_22c9_a1_b(object a0)
{
	if (f_1e90_a1_i("b3q03") == 0) {
		return true;
	}
	return false;
}

bool f_22d5_a1_b(object a0)
{
	if (f_1e90_a1_i("b3q03") == 1) {
		return true;
	}
	return false;
}

bool f_22e1_a1_b(object a0)
{
	if (f_2386_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_22eb_a1_b(object a0)
{
	if (f_1e90_a1_i("oob3Notkin2") == 0) {
		return true;
	}
	return false;
}

bool f_22f7_a1_b(object a0)
{
	if (f_1e90_a1_i("b1q01") == 0) {
		return true;
	}
	return false;
}

bool f_2303_a1_b(object a0)
{
	if (f_1e90_a1_i("b1q01") == 1000) {
		return true;
	}
	return false;
}

bool f_230f_a1_b(object a0)
{
	if (f_1e90_a1_i("oob1Notkin2") == 0) {
		return true;
	}
	return false;
}

bool f_231b_a1_b(object a0)
{
	if (f_1e90_a1_i("oob2Notkin1") == 0) {
		return true;
	}
	return false;
}

bool f_2327_a1_b(object a0)
{
	if (f_1e90_a1_i("b3q03") == 1000) {
		return true;
	}
	return false;
}

bool f_2333_a1_b(object a0)
{
	if (f_238d_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_233d_a1_b(object a0)
{
	if (f_2399_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2347_a1_b(object a0)
{
	int L0;
	a0->GetProperty("money", L0);
	return L0 >= 1500;
}

bool f_234e_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "grabitel_mark");
	return L0 >= 5;
}

bool f_2355_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "hunter_mark");
	return L0 >= 4;
}

bool f_235c_a1_b(object a0)
{
	int L0;
	a0->GetProperty("money", L0);
	return L0 >= 1000;
}

bool f_2363_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "grabitel_mark");
	return L0 >= 3;
}

bool f_236a_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "hunter_mark");
	return L0 >= 2;
}

bool f_2371_a1_b(object a0)
{
	int L0;
	a0->GetProperty("money", L0);
	return L0 >= 2000;
}

bool f_2378_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "hunter_mark");
	return L0 >= 3;
}

bool f_237f_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "grabitel_mark");
	return L0 >= 4;
}

bool f_2386_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "grass_combination");
	return L0 >= 10;
}

bool f_238d_a1_b(object a0)
{
	int L0;
	int L1;
	L0 = f_1f1d_a0_i();
	@GetVariable("RMap" + L0, L1);
	return L1 != 0;
}

bool f_2399_a1_b(object a0)
{
	int L0;
	a0->GetProperty("money", L0);
	return L0 >= 500;
}

void f_23a0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 556, 2, 530535);
	f_2463_a2_b(L0, 547);
}

void f_23ad_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 551, 2, 530501);
	f_2463_a2_b(L0, -1);
}

void f_23ba_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 552, 2, 530502);
	f_2463_a2_b(L0, 551);
}

void f_23c7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 208, 2, 518103);
	f_2463_a2_b(L0, 205);
}

void f_23d4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 207, 2, 518102);
	f_2463_a2_b(L0, 205);
}

void f_23e1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 206, 2, 518101);
	f_2463_a2_b(L0, 205);
}

void f_23ee_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 205, 2, 518100);
	f_2463_a2_b(L0, -1);
}

void f_23fb_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 232, 2, 519660);
	f_2463_a2_b(L0, 227);
}

void f_2408_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 235, 2, 519679);
	f_2463_a2_b(L0, -1);
}

void f_2415_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 237, 2, 519681);
	f_2463_a2_b(L0, 235);
}

void f_2422_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 236, 2, 519680);
	f_2463_a2_b(L0, 235);
}

void f_242f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 527, 2, 529895);
	f_2463_a2_b(L0, -1);
}

void f_243c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 528, 2, 529896);
	f_2463_a2_b(L0, 527);
}

void f_2449_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 529, 2, 529945);
	f_2463_a2_b(L0, 527);
}

object f_2456_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2463_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2456_a0_o();
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

object f_247f_a0_o(void)
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

void f_2490_a3_v(object a0, string a1, float a2)
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

int f_24b1_a0_i(void)
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

int f_24c2_a0_i(void)
{
	return 515548;
}

int f_24c4_a0_i(void)
{
	return 502873;
}

string f_24c6_a0_s(void)
{
	return "ui/NPC_Notkin.png";
}

string f_24c8_a0_s(void)
{
	return "ui/NPC_Notkin_b.png";
}

bool f_24ca_a0_b(void)
{
	return true;
}

void f_24cc_a1_v(object a0)
{
	if (!g1) {
		t7{a0};
		g1 = true;
	}
	if (f_1f26_a1_b(1)) {
		t1{a0};
		return;
	}
	if (f_1f26_a1_b(2)) {
		t3{a0};
		return;
	}
	if (f_1f26_a1_b(3)) {
		t5{a0};
		return;
	}
	if (f_1f26_a1_b(4)) {
		t9{a0};
		return;
	}
	if (f_1f26_a1_b(5)) {
		t11{a0};
		return;
	}
	if (f_1f26_a1_b(6)) {
		t13{a0};
		return;
	}
	if (f_1f26_a1_b(7)) {
		t15{a0};
		return;
	}
	if (f_1f26_a1_b(8)) {
		t17{a0};
		return;
	}
	if (f_1f26_a1_b(9)) {
		t19{a0};
		return;
	}
	if (f_1f26_a1_b(10)) {
		t21{a0};
		return;
	}
	if (f_1f26_a1_b(11)) {
		t23{a0};
		return;
	}
	if (f_1f26_a1_b(12)) {
		t25{a0};
		return;
	}
	t27{a0};
}

