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
		f_1700_a0_v();
		if (!f_1293_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_12d4_a1_v("Neutral");
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
		f_1704_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_1287_a1_b(a0);
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
		if (!f_1298_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_132c_a0_i());
		L0->SetPhoto(f_132e_a0_s());
		L0->SetPlayerName(f_162f_a0_i());
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
		f_12d0_a1_v(a0);
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
			if (f_14a6_a1_b(tv1) && f_149c_a1_b(tv1)) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(12185);
				tv0->ClearReplies();
				tv0->AddReply(12186, 14254, 13341);
				tv0->AddReply(13037, 14245, 14244);
				break;
			}
			if (f_14b2_a1_b(tv1) && f_149c_a1_b(tv1)) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13033);
				tv0->ClearReplies();
				tv0->AddReply(13034, 14260, 14241);
				break;
			}
			if (f_14be_a1_b(tv1)) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13074);
				tv0->ClearReplies();
				tv0->AddReply(13076, 14287, 14286);
				tv0->AddReply(13117, 14336, 14335);
				break;
			}
			f_14b_a1_v("Neutral");
			tv0->SetMessage(13031);
			tv0->ClearReplies();
			if (f_1519_a1_b(tv1)) {
				tv0->AddReply(13141, 14362, 14360);
			}
			if (f_14ee_a1_b(tv1) && f_150d_a1_b(tv1)) {
				tv0->AddReply(13075, 14369, 14285);
			}
			if (f_14d6_a1_b(tv1) && f_14e2_a1_b(tv1)) {
				tv0->AddReply(13125, 14345, 14344);
			}
			if (f_14ca_a1_b(tv1)) {
				tv0->AddReply(13035, 14243, 14242);
			}
			if (f_149c_a1_b(tv1)) {
				tv0->AddReply(13142, 14364, 14361);
			}
			if (f_1525_a1_b(tv1)) {
				tv0->AddReply(13377, 14610, 14609);
			}
			tv0->AddReply(13032, -1, 14239);
			break;
			return;
		}
		if (f_1330_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_12d4_a1_v(tv2);
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

	void f_14b_a1_v(string a0)
	{
		if (!f_1330_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_12d4_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_12e6_a0_v();
			if (a1 == 14281) {
				f_1338_a2_v(tv1, tv0);
			}
			if (a1 == 14282) {
				f_1338_a2_v(tv1, tv0);
			}
			if (a1 == 14283) {
				f_1338_a2_v(tv1, tv0);
			}
			if (a1 == 14558) {
				f_133e_a2_v(tv1, tv0);
			}
			if (a1 == 14343) {
				f_1344_a2_v(tv1, tv0);
			}
			if (a1 == 14363) {
				f_13b3_a2_v(tv1, tv0);
			}
			if (a1 == 14391) {
				f_1384_a2_v(tv1, tv0);
				f_13ad_a2_v(tv1, tv0);
				f_1332_a2_v(tv1, tv0);
			}
			if (a1 == 14394) {
				f_1384_a2_v(tv1, tv0);
				f_13ad_a2_v(tv1, tv0);
				f_1332_a2_v(tv1, tv0);
			}
			if (a1 == 14389) {
				f_1384_a2_v(tv1, tv0);
				f_13ad_a2_v(tv1, tv0);
				f_1332_a2_v(tv1, tv0);
			}
			if (a1 == 14344) {
				f_13a7_a2_v(tv1, tv0);
			}
			if (a1 == 14242) {
				f_137e_a2_v(tv1, tv0);
			}
			if (a1 == 14623) {
				f_13e6_a2_v(tv1, tv0);
			}
			if (a0 == 13340) {
				if (f_14a6_a1_b(tv1) && f_149c_a1_b(tv1)) {
					f_14b_a1_v("Neutral");
					tv0->SetMessage(12185);
					tv0->ClearReplies();
					tv0->AddReply(12186, 14254, 13341);
					tv0->AddReply(13037, 14245, 14244);
					return;
				}
				if (f_14b2_a1_b(tv1) && f_149c_a1_b(tv1)) {
					f_14b_a1_v("Neutral");
					tv0->SetMessage(13033);
					tv0->ClearReplies();
					tv0->AddReply(13034, 14260, 14241);
					return;
				}
				if (f_14be_a1_b(tv1)) {
					f_14b_a1_v("Neutral");
					tv0->SetMessage(13074);
					tv0->ClearReplies();
					tv0->AddReply(13076, 14287, 14286);
					tv0->AddReply(13117, 14336, 14335);
					return;
				}
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13031);
				tv0->ClearReplies();
				if (f_1519_a1_b(tv1)) {
					tv0->AddReply(13141, 14362, 14360);
				}
				if (f_14ee_a1_b(tv1) && f_150d_a1_b(tv1)) {
					tv0->AddReply(13075, 14369, 14285);
				}
				if (f_14d6_a1_b(tv1) && f_14e2_a1_b(tv1)) {
					tv0->AddReply(13125, 14345, 14344);
				}
				if (f_14ca_a1_b(tv1)) {
					tv0->AddReply(13035, 14243, 14242);
				}
				if (f_149c_a1_b(tv1)) {
					tv0->AddReply(13142, 14364, 14361);
				}
				if (f_1525_a1_b(tv1)) {
					tv0->AddReply(13377, 14610, 14609);
				}
				tv0->AddReply(13032, -1, 14239);
				return;
			}
			if (a0 == 14610) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13378);
				tv0->ClearReplies();
				tv0->AddReply(13379, 14612, 14611);
				return;
			}
			if (a0 == 14612) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13380);
				tv0->ClearReplies();
				tv0->AddReply(13381, 14619, 14613);
				tv0->AddReply(13382, 14616, 14614);
				tv0->AddReply(13383, 14616, 14615);
				return;
			}
			if (a0 == 14616) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13384);
				tv0->ClearReplies();
				tv0->AddReply(13385, 14619, 14618);
				return;
			}
			if (a0 == 14619) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13386);
				tv0->ClearReplies();
				tv0->AddReply(13387, 14622, 14620);
				return;
			}
			if (a0 == 14622) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13388);
				tv0->ClearReplies();
				tv0->AddReply(13389, -1, 14623);
				return;
			}
			if (a0 == 14364) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13145);
				tv0->ClearReplies();
				tv0->AddReply(13147, 14367, 14366);
				tv0->AddReply(13146, -1, 14365);
				return;
			}
			if (a0 == 14367) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13148);
				tv0->ClearReplies();
				tv0->AddReply(13149, -1, 14368);
				return;
			}
			if (a0 == 14243) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13036);
				tv0->ClearReplies();
				tv0->AddReply(13134, 14354, 14353);
				tv0->AddReply(13136, 14358, 14355);
				return;
			}
			if (a0 == 14358) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13139);
				tv0->ClearReplies();
				tv0->AddReply(13140, -1, 14359);
				return;
			}
			if (a0 == 14354) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13135);
				tv0->ClearReplies();
				tv0->AddReply(13138, -1, 14357);
				return;
			}
			if (a0 == 14345) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13126);
				tv0->ClearReplies();
				tv0->AddReply(13127, 14348, 14346);
				tv0->AddReply(13128, -1, 14347);
				return;
			}
			if (a0 == 14348) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13129);
				tv0->ClearReplies();
				tv0->AddReply(13130, 14350, 14349);
				return;
			}
			if (a0 == 14350) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13131);
				tv0->ClearReplies();
				tv0->AddReply(13132, -1, 14351);
				tv0->AddReply(13133, -1, 14352);
				return;
			}
			if (a0 == 14369) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13150);
				tv0->ClearReplies();
				tv0->AddReply(13151, 14371, 14370);
				return;
			}
			if (a0 == 14371) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13152);
				tv0->ClearReplies();
				tv0->AddReply(13153, 14373, 14372);
				return;
			}
			if (a0 == 14373) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13154);
				tv0->ClearReplies();
				tv0->AddReply(13155, 14375, 14374);
				return;
			}
			if (a0 == 14375) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13156);
				tv0->ClearReplies();
				tv0->AddReply(13157, 14377, 14376);
				return;
			}
			if (a0 == 14377) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13158);
				tv0->ClearReplies();
				tv0->AddReply(13159, 14379, 14378);
				tv0->AddReply(13161, 14381, 14380);
				return;
			}
			if (a0 == 14381) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13162);
				tv0->ClearReplies();
				tv0->AddReply(13164, 14384, 14383);
				return;
			}
			if (a0 == 14379) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13160);
				tv0->ClearReplies();
				tv0->AddReply(13163, 14384, 14382);
				return;
			}
			if (a0 == 14384) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13165);
				tv0->ClearReplies();
				tv0->AddReply(13166, 14390, 14386);
				tv0->AddReply(13167, 14388, 14387);
				return;
			}
			if (a0 == 14388) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13168);
				tv0->ClearReplies();
				tv0->AddReply(13169, -1, 14389);
				return;
			}
			if (a0 == 14390) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13170);
				tv0->ClearReplies();
				tv0->AddReply(13171, -1, 14391);
				tv0->AddReply(13172, 14393, 14392);
				return;
			}
			if (a0 == 14393) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13173);
				tv0->ClearReplies();
				tv0->AddReply(13174, -1, 14394);
				return;
			}
			if (a0 == 14362) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13143);
				tv0->ClearReplies();
				tv0->AddReply(13144, -1, 14363);
				return;
			}
			if (a0 == 14336) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13118);
				tv0->ClearReplies();
				tv0->AddReply(13119, 14289, 14337);
				return;
			}
			if (a0 == 14287) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13077);
				tv0->ClearReplies();
				tv0->AddReply(13078, 14289, 14288);
				return;
			}
			if (a0 == 14289) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13079);
				tv0->ClearReplies();
				tv0->AddReply(13082, 14296, 14292);
				tv0->AddReply(13080, 14291, 14290);
				return;
			}
			if (a0 == 14291) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13081);
				tv0->ClearReplies();
				tv0->AddReply(13083, 14294, 14293);
				return;
			}
			if (a0 == 14294) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13084);
				tv0->ClearReplies();
				tv0->AddReply(13085, 14296, 14295);
				return;
			}
			if (a0 == 14296) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13086);
				tv0->ClearReplies();
				tv0->AddReply(13111, 14329, 14328);
				return;
			}
			if (a0 == 14329) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13112);
				tv0->ClearReplies();
				tv0->AddReply(13113, 14332, 14331);
				return;
			}
			if (a0 == 14332) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13114);
				tv0->ClearReplies();
				tv0->AddReply(13115, 14334, 14333);
				return;
			}
			if (a0 == 14334) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13116);
				tv0->ClearReplies();
				tv0->AddReply(13120, 14340, 14339);
				return;
			}
			if (a0 == 14340) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13121);
				tv0->ClearReplies();
				tv0->AddReply(13122, 14342, 14341);
				return;
			}
			if (a0 == 14342) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13123);
				tv0->ClearReplies();
				tv0->AddReply(13124, -1, 14343);
				return;
			}
			if (a0 == 14260) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13052);
				tv0->ClearReplies();
				tv0->AddReply(13053, 14262, 14261);
				tv0->AddReply(13108, 14262, 14323);
				return;
			}
			if (a0 == 14262) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13054);
				tv0->ClearReplies();
				tv0->AddReply(13055, 14264, 14263);
				tv0->AddReply(13110, 14264, 14326);
				return;
			}
			if (a0 == 14264) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13056);
				tv0->ClearReplies();
				tv0->AddReply(13057, 14266, 14265);
				return;
			}
			if (a0 == 14266) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13058);
				tv0->ClearReplies();
				tv0->AddReply(13059, 14269, 14267);
				tv0->AddReply(13060, 14269, 14268);
				return;
			}
			if (a0 == 14269) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13061);
				tv0->ClearReplies();
				tv0->AddReply(13321, 14557, 14556);
				return;
			}
			if (a0 == 14557) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13322);
				tv0->ClearReplies();
				tv0->AddReply(13323, -1, 14558);
				return;
			}
			if (a0 == 14245) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13038);
				tv0->ClearReplies();
				tv0->AddReply(13039, 14247, 14246);
				tv0->AddReply(13088, 14299, 14298);
				return;
			}
			if (a0 == 14299) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13089);
				tv0->ClearReplies();
				tv0->AddReply(13093, 14306, 14303);
				tv0->AddReply(13091, 14307, 14301);
				tv0->AddReply(13092, 14307, 14302);
				tv0->AddReply(13094, 14307, 14304);
				tv0->AddReply(13090, 14307, 14300);
				return;
			}
			if (a0 == 14307) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13097);
				tv0->ClearReplies();
				tv0->AddReply(13098, 14314, 14308);
				return;
			}
			if (a0 == 14314) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13100);
				tv0->ClearReplies();
				tv0->AddReply(13101, 14316, 14315);
				return;
			}
			if (a0 == 14316) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13102);
				tv0->ClearReplies();
				tv0->AddReply(13103, 14318, 14317);
				return;
			}
			if (a0 == 14318) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13104);
				tv0->ClearReplies();
				tv0->AddReply(13105, 14320, 14319);
				return;
			}
			if (a0 == 14320) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13106);
				tv0->ClearReplies();
				tv0->AddReply(13107, 14249, 14321);
				return;
			}
			if (a0 == 14306) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13096);
				tv0->ClearReplies();
				tv0->AddReply(13099, 14307, 14312);
				return;
			}
			if (a0 == 14247) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13040);
				tv0->ClearReplies();
				tv0->AddReply(13041, 14249, 14248);
				return;
			}
			if (a0 == 14249) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13042);
				tv0->ClearReplies();
				tv0->AddReply(13043, 14251, 14250);
				return;
			}
			if (a0 == 14251) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13044);
				tv0->ClearReplies();
				tv0->AddReply(13045, 14253, 14252);
				return;
			}
			if (a0 == 14253) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13046);
				tv0->ClearReplies();
				tv0->AddReply(13062, 14273, 14272);
				return;
			}
			if (a0 == 14273) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13063);
				tv0->ClearReplies();
				tv0->AddReply(13064, -1, 14274);
				tv0->AddReply(13065, 14276, 14275);
				tv0->AddReply(13073, -1, 14283);
				return;
			}
			if (a0 == 14276) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13066);
				tv0->ClearReplies();
				tv0->AddReply(13067, 14278, 14277);
				return;
			}
			if (a0 == 14278) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13068);
				tv0->ClearReplies();
				tv0->AddReply(13069, 14280, 14279);
				return;
			}
			if (a0 == 14280) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13070);
				tv0->ClearReplies();
				tv0->AddReply(13071, -1, 14281);
				tv0->AddReply(13072, -1, 14282);
				return;
			}
			if (a0 == 14254) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13047);
				tv0->ClearReplies();
				tv0->AddReply(13048, 14256, 14255);
				tv0->AddReply(13051, 14245, 14258);
				return;
			}
			if (a0 == 14256) {
				f_14b_a1_v("Neutral");
				tv0->SetMessage(13049);
				tv0->ClearReplies();
				tv0->AddReply(13050, 14245, 14257);
				return;
			}
			tv3 = true;
			if (f_1330_a0_b()) {
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
		if (!f_1298_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_132c_a0_i());
		L0->SetPhoto(f_132e_a0_s());
		L0->SetPlayerName(f_162f_a0_i());
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
		f_12d0_a1_v(a0);
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
			if (f_1531_a1_b(tv1)) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(13413);
				tv0->ClearReplies();
				tv0->AddReply(13415, 14650, 14649);
				tv0->AddReply(13417, 14949, 14652);
				tv0->AddReply(13414, 14650, 14648);
				break;
			}
			f_808_a1_v("Neutral");
			tv0->SetMessage(13409);
			tv0->ClearReplies();
			if (f_153d_a1_b(tv1)) {
				tv0->AddReply(13411, 13400, 14645);
			}
			if (f_1549_a1_b(tv1) && f_1555_a1_b(tv1)) {
				tv0->AddReply(13412, 13452, 14646);
			}
			tv0->AddReply(13410, -1, 14644);
			break;
			f_808_a1_v("Neutral");
			tv0->SetMessage(15089);
			tv0->ClearReplies();
			tv0->AddReply(15090, 16357, 16356);
			break;
			return;
		}
		if (f_1330_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_12d4_a1_v(tv2);
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

	void f_808_a1_v(string a0)
	{
		if (!f_1330_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_12d4_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_12e6_a0_v();
			if (a1 == 14980) {
				f_13ec_a2_v(tv1, tv0);
			}
			if (a1 == 14645) {
				f_13fd_a2_v(tv1, tv0);
			}
			if (a1 == 13413) {
				f_1409_a2_v(tv1, tv0);
			}
			if (a1 == 14646) {
				f_1403_a2_v(tv1, tv0);
			}
			if (a0 == 14647) {
				if (f_1531_a1_b(tv1)) {
					f_808_a1_v("Neutral");
					tv0->SetMessage(13413);
					tv0->ClearReplies();
					tv0->AddReply(13415, 14650, 14649);
					tv0->AddReply(13417, 14949, 14652);
					tv0->AddReply(13414, 14650, 14648);
					return;
				}
				f_808_a1_v("Neutral");
				tv0->SetMessage(13409);
				tv0->ClearReplies();
				if (f_153d_a1_b(tv1)) {
					tv0->AddReply(13411, 13400, 14645);
				}
				if (f_1549_a1_b(tv1) && f_1555_a1_b(tv1)) {
					tv0->AddReply(13412, 13452, 14646);
				}
				tv0->AddReply(13410, -1, 14644);
				return;
				f_808_a1_v("Neutral");
				tv0->SetMessage(15089);
				tv0->ClearReplies();
				tv0->AddReply(15090, 16357, 16356);
				return;
			}
			if (a0 == 16357) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(15091);
				tv0->ClearReplies();
				tv0->AddReply(15092, 16359, 16358);
				return;
			}
			if (a0 == 16359) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(15093);
				tv0->ClearReplies();
				tv0->AddReply(15094, -1, 16360);
				return;
			}
			if (a0 == 13452) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12293);
				tv0->ClearReplies();
				tv0->AddReply(12294, 13454, 13453);
				return;
			}
			if (a0 == 13454) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12295);
				tv0->ClearReplies();
				tv0->AddReply(12296, 13457, 13455);
				tv0->AddReply(12297, -1, 13456);
				return;
			}
			if (a0 == 13457) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12298);
				tv0->ClearReplies();
				tv0->AddReply(12299, 13459, 13458);
				return;
			}
			if (a0 == 13459) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12300);
				tv0->ClearReplies();
				tv0->AddReply(12301, 13461, 13460);
				return;
			}
			if (a0 == 13461) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12302);
				tv0->ClearReplies();
				tv0->AddReply(12303, 13463, 13462);
				return;
			}
			if (a0 == 13463) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12304);
				tv0->ClearReplies();
				tv0->AddReply(12305, 13465, 13464);
				return;
			}
			if (a0 == 13465) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12306);
				tv0->ClearReplies();
				tv0->AddReply(12307, -1, 13466);
				tv0->AddReply(12308, -1, 13467);
				return;
			}
			if (a0 == 13400) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12244);
				tv0->ClearReplies();
				tv0->AddReply(12245, 13402, 13401);
				return;
			}
			if (a0 == 13402) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12246);
				tv0->ClearReplies();
				tv0->AddReply(12248, 13405, 13404);
				tv0->AddReply(12247, 13409, 13403);
				return;
			}
			if (a0 == 13405) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12249);
				tv0->ClearReplies();
				tv0->AddReply(12250, 13407, 13406);
				return;
			}
			if (a0 == 13407) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12251);
				tv0->ClearReplies();
				tv0->AddReply(12252, 13409, 13408);
				return;
			}
			if (a0 == 13409) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12253);
				tv0->ClearReplies();
				tv0->AddReply(12254, 13411, 13410);
				return;
			}
			if (a0 == 13411) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(12255);
				tv0->ClearReplies();
				tv0->AddReply(12256, -1, 13413);
				return;
			}
			if (a0 == 14949) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(13688);
				tv0->ClearReplies();
				tv0->AddReply(13689, 14952, 14951);
				return;
			}
			if (a0 == 14952) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(13690);
				tv0->ClearReplies();
				tv0->AddReply(13691, 14650, 14953);
				tv0->AddReply(13692, 14650, 14954);
				tv0->AddReply(13693, 14650, 14955);
				return;
			}
			if (a0 == 14650) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(13416);
				tv0->ClearReplies();
				tv0->AddReply(13421, 14959, 14657);
				return;
			}
			if (a0 == 14959) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(13694);
				tv0->ClearReplies();
				tv0->AddReply(13695, 14963, 14960);
				tv0->AddReply(13696, 14963, 14961);
				tv0->AddReply(13697, 14963, 14962);
				return;
			}
			if (a0 == 14963) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(13698);
				tv0->ClearReplies();
				tv0->AddReply(13699, 14970, 14964);
				tv0->AddReply(13700, 14968, 14967);
				return;
			}
			if (a0 == 14968) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(13701);
				tv0->ClearReplies();
				tv0->AddReply(13702, 14970, 14969);
				return;
			}
			if (a0 == 14970) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(13703);
				tv0->ClearReplies();
				tv0->AddReply(13704, 14972, 14971);
				return;
			}
			if (a0 == 14972) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(13705);
				tv0->ClearReplies();
				tv0->AddReply(13706, 14975, 14974);
				return;
			}
			if (a0 == 14975) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(13707);
				tv0->ClearReplies();
				tv0->AddReply(13708, 14978, 14976);
				tv0->AddReply(13709, 14978, 14977);
				return;
			}
			if (a0 == 14978) {
				f_808_a1_v("Neutral");
				tv0->SetMessage(13710);
				tv0->ClearReplies();
				tv0->AddReply(13711, -1, 14980);
				return;
			}
			tv3 = true;
			if (f_1330_a0_b()) {
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
		if (!f_1298_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_132c_a0_i());
		L0->SetPhoto(f_132e_a0_s());
		L0->SetPlayerName(f_162f_a0_i());
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
		f_12d0_a1_v(a0);
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
			if (f_15c1_a1_b(tv1)) {
				f_146c_a2_v(tv1, tv0);
				f_b40_a1_v("Neutral");
				tv0->SetMessage(12899);
				tv0->ClearReplies();
				tv0->AddReply(12900, 14103, 14102);
				break;
			}
			f_b40_a1_v("Neutral");
			tv0->SetMessage(12905);
			tv0->ClearReplies();
			if (f_15e5_a1_b(tv1)) {
				tv0->AddReply(12906, 14109, 14108);
			}
			if (f_15cd_a1_b(tv1) && f_15d9_a1_b(tv1)) {
				tv0->AddReply(12912, 14119, 14114);
			}
			tv0->AddReply(12911, -1, 14113);
			break;
			return;
		}
		if (f_1330_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_12d4_a1_v(tv2);
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

	void f_b40_a1_v(string a0)
	{
		if (!f_1330_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_12d4_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_12e6_a0_v();
			if (a1 == 14106) {
				f_144d_a2_v(tv1, tv0);
			}
			if (a1 == 14118) {
				f_1472_a2_v(tv1, tv0);
			}
			if (a1 == 14114) {
				f_1490_a2_v(tv1, tv0);
			}
			if (a0 == 14101) {
				if (f_15c1_a1_b(tv1)) {
					f_146c_a2_v(tv1, tv0);
					f_b40_a1_v("Neutral");
					tv0->SetMessage(12899);
					tv0->ClearReplies();
					tv0->AddReply(12900, 14103, 14102);
					return;
				}
				f_b40_a1_v("Neutral");
				tv0->SetMessage(12905);
				tv0->ClearReplies();
				if (f_15e5_a1_b(tv1)) {
					tv0->AddReply(12906, 14109, 14108);
				}
				if (f_15cd_a1_b(tv1) && f_15d9_a1_b(tv1)) {
					tv0->AddReply(12912, 14119, 14114);
				}
				tv0->AddReply(12911, -1, 14113);
				return;
			}
			if (a0 == 14119) {
				f_b40_a1_v("Neutral");
				tv0->SetMessage(12915);
				tv0->ClearReplies();
				tv0->AddReply(12916, 14122, 14120);
				tv0->AddReply(12917, 14122, 14121);
				return;
			}
			if (a0 == 14122) {
				f_b40_a1_v("Neutral");
				tv0->SetMessage(12918);
				tv0->ClearReplies();
				tv0->AddReply(12919, 14125, 14124);
				return;
			}
			if (a0 == 14125) {
				f_b40_a1_v("Neutral");
				tv0->SetMessage(12920);
				tv0->ClearReplies();
				tv0->AddReply(12921, -1, 14126);
				tv0->AddReply(12922, 14128, 14127);
				return;
			}
			if (a0 == 14128) {
				f_b40_a1_v("Neutral");
				tv0->SetMessage(12923);
				tv0->ClearReplies();
				tv0->AddReply(12924, -1, 14129);
				return;
			}
			if (a0 == 14109) {
				f_b40_a1_v("Neutral");
				tv0->SetMessage(12907);
				tv0->ClearReplies();
				tv0->AddReply(12908, 14115, 14110);
				tv0->AddReply(12909, 14115, 14111);
				tv0->AddReply(12910, 14115, 14112);
				return;
			}
			if (a0 == 14115) {
				f_b40_a1_v("Neutral");
				tv0->SetMessage(12913);
				tv0->ClearReplies();
				tv0->AddReply(12914, -1, 14118);
				return;
			}
			if (a0 == 14103) {
				f_b40_a1_v("Neutral");
				tv0->SetMessage(12901);
				tv0->ClearReplies();
				tv0->AddReply(12902, 14105, 14104);
				return;
			}
			if (a0 == 14105) {
				f_b40_a1_v("Neutral");
				tv0->SetMessage(12903);
				tv0->ClearReplies();
				tv0->AddReply(12904, -1, 14106);
				return;
			}
			tv3 = true;
			if (f_1330_a0_b()) {
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
		if (!f_1298_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_132c_a0_i());
		L0->SetPhoto(f_132e_a0_s());
		L0->SetPlayerName(f_162f_a0_i());
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
		f_12d0_a1_v(a0);
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
			if (f_1585_a1_b(tv1)) {
				f_142f_a2_v(tv1, tv0);
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13802);
				tv0->ClearReplies();
				tv0->AddReply(13803, 15030, 15029);
				tv0->AddReply(13815, 15042, 15041);
				break;
			}
			f_d2a_a1_v("Neutral");
			tv0->SetMessage(13818);
			tv0->ClearReplies();
			if (f_1591_a1_b(tv1)) {
				tv0->AddReply(13819, 15047, 15046);
			}
			if (f_1561_a1_b(tv1) && f_159d_a1_b(tv1)) {
				tv0->AddReply(13842, 15070, 15069);
			}
			if (f_15a9_a1_b(tv1)) {
				tv0->AddReply(13852, 15080, 15079);
			}
			if (f_15b5_a1_b(tv1)) {
				tv0->AddReply(13865, 15093, 15092);
			}
			tv0->AddReply(13880, -1, 15107);
			break;
			return;
		}
		if (f_1330_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_12d4_a1_v(tv2);
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

	void f_d2a_a1_v(string a0)
	{
		if (!f_1330_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_12d4_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_12e6_a0_v();
			if (a1 == 15046) {
				f_1435_a2_v(tv1, tv0);
			}
			if (a1 == 15069) {
				f_143b_a2_v(tv1, tv0);
			}
			if (a1 == 15079) {
				f_1441_a2_v(tv1, tv0);
			}
			if (a1 == 15092) {
				f_1447_a2_v(tv1, tv0);
			}
			if (a0 == 15028) {
				if (f_1585_a1_b(tv1)) {
					f_142f_a2_v(tv1, tv0);
					f_d2a_a1_v("Neutral");
					tv0->SetMessage(13802);
					tv0->ClearReplies();
					tv0->AddReply(13803, 15030, 15029);
					tv0->AddReply(13815, 15042, 15041);
					return;
				}
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13818);
				tv0->ClearReplies();
				if (f_1591_a1_b(tv1)) {
					tv0->AddReply(13819, 15047, 15046);
				}
				if (f_1561_a1_b(tv1) && f_159d_a1_b(tv1)) {
					tv0->AddReply(13842, 15070, 15069);
				}
				if (f_15a9_a1_b(tv1)) {
					tv0->AddReply(13852, 15080, 15079);
				}
				if (f_15b5_a1_b(tv1)) {
					tv0->AddReply(13865, 15093, 15092);
				}
				tv0->AddReply(13880, -1, 15107);
				return;
			}
			if (a0 == 15093) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13866);
				tv0->ClearReplies();
				tv0->AddReply(13867, 15095, 15094);
				return;
			}
			if (a0 == 15095) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13868);
				tv0->ClearReplies();
				tv0->AddReply(13869, 15097, 15096);
				tv0->AddReply(13876, 15104, 15103);
				return;
			}
			if (a0 == 15104) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13877);
				tv0->ClearReplies();
				tv0->AddReply(13878, -1, 15105);
				tv0->AddReply(13879, -1, 15106);
				return;
			}
			if (a0 == 15097) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13870);
				tv0->ClearReplies();
				tv0->AddReply(13871, -1, 15098);
				tv0->AddReply(13872, 15100, 15099);
				return;
			}
			if (a0 == 15100) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13873);
				tv0->ClearReplies();
				tv0->AddReply(13874, -1, 15101);
				tv0->AddReply(13875, -1, 15102);
				return;
			}
			if (a0 == 15080) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13853);
				tv0->ClearReplies();
				tv0->AddReply(13854, 15082, 15081);
				return;
			}
			if (a0 == 15082) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13855);
				tv0->ClearReplies();
				tv0->AddReply(13856, -1, 15083);
				tv0->AddReply(13857, 15085, 15084);
				return;
			}
			if (a0 == 15085) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13858);
				tv0->ClearReplies();
				tv0->AddReply(13859, -1, 15086);
				tv0->AddReply(13860, 15088, 15087);
				return;
			}
			if (a0 == 15088) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13861);
				tv0->ClearReplies();
				tv0->AddReply(13862, 15090, 15089);
				tv0->AddReply(13864, -1, 15091);
				return;
			}
			if (a0 == 15090) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13863);
				tv0->ClearReplies();
				return;
			}
			if (a0 == 15070) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13843);
				tv0->ClearReplies();
				tv0->AddReply(13844, 15072, 15071);
				return;
			}
			if (a0 == 15072) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13845);
				tv0->ClearReplies();
				tv0->AddReply(13846, 15074, 15073);
				tv0->AddReply(13849, 15077, 15076);
				return;
			}
			if (a0 == 15077) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13850);
				tv0->ClearReplies();
				tv0->AddReply(13851, -1, 15078);
				return;
			}
			if (a0 == 15074) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13847);
				tv0->ClearReplies();
				tv0->AddReply(13848, -1, 15075);
				return;
			}
			if (a0 == 15047) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13820);
				tv0->ClearReplies();
				tv0->AddReply(13821, 15049, 15048);
				tv0->AddReply(13839, 15067, 15066);
				return;
			}
			if (a0 == 15067) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13840);
				tv0->ClearReplies();
				tv0->AddReply(13841, -1, 15068);
				return;
			}
			if (a0 == 15049) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13822);
				tv0->ClearReplies();
				tv0->AddReply(13823, 15051, 15050);
				return;
			}
			if (a0 == 15051) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13824);
				tv0->ClearReplies();
				tv0->AddReply(13825, 15053, 15052);
				tv0->AddReply(13827, 15055, 15054);
				return;
			}
			if (a0 == 15055) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13828);
				tv0->ClearReplies();
				tv0->AddReply(13829, 15057, 15056);
				return;
			}
			if (a0 == 15057) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13830);
				tv0->ClearReplies();
				tv0->AddReply(13831, 15059, 15058);
				tv0->AddReply(13838, -1, 15065);
				return;
			}
			if (a0 == 15059) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13832);
				tv0->ClearReplies();
				tv0->AddReply(13833, 15061, 15060);
				return;
			}
			if (a0 == 15061) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13834);
				tv0->ClearReplies();
				tv0->AddReply(13835, 15063, 15062);
				return;
			}
			if (a0 == 15063) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13836);
				tv0->ClearReplies();
				tv0->AddReply(13837, -1, 15064);
				return;
			}
			if (a0 == 15053) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13826);
				tv0->ClearReplies();
				return;
			}
			if (a0 == 15042) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13816);
				tv0->ClearReplies();
				tv0->AddReply(13817, 15030, 15043);
				return;
			}
			if (a0 == 15030) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13804);
				tv0->ClearReplies();
				tv0->AddReply(13805, 15032, 15031);
				return;
			}
			if (a0 == 15032) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13806);
				tv0->ClearReplies();
				tv0->AddReply(13807, 15034, 15033);
				return;
			}
			if (a0 == 15034) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13808);
				tv0->ClearReplies();
				tv0->AddReply(13809, 15036, 15035);
				return;
			}
			if (a0 == 15036) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13810);
				tv0->ClearReplies();
				tv0->AddReply(13811, 15038, 15037);
				tv0->AddReply(13814, -1, 15040);
				return;
			}
			if (a0 == 15038) {
				f_d2a_a1_v("Neutral");
				tv0->SetMessage(13812);
				tv0->ClearReplies();
				tv0->AddReply(13813, -1, 15039);
				return;
			}
			tv3 = true;
			if (f_1330_a0_b()) {
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
		if (!f_1298_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_132c_a0_i());
		L0->SetPhoto(f_132e_a0_s());
		L0->SetPlayerName(f_162f_a0_i());
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
		f_12d0_a1_v(a0);
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
			if (f_156d_a1_b(tv1)) {
				f_1496_a2_v(tv1, tv0);
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14194);
				tv0->ClearReplies();
				tv0->AddReply(14195, 15410, 15409);
				break;
			}
			f_10bd_a1_v("Neutral");
			tv0->SetMessage(14222);
			tv0->ClearReplies();
			if (f_1579_a1_b(tv1)) {
				tv0->AddReply(14223, 15442, 15441);
			}
			if (f_149c_a1_b(tv1)) {
				tv0->AddReply(14234, 15453, 15452);
			}
			tv0->AddReply(14239, -1, 15457);
			break;
			return;
		}
		if (f_1330_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_12d4_a1_v(tv2);
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

	void f_10bd_a1_v(string a0)
	{
		if (!f_1330_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_12d4_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_12e6_a0_v();
			if (a1 == 15421) {
				f_140f_a2_v(tv1, tv0);
			}
			if (a1 == 15422) {
				f_140f_a2_v(tv1, tv0);
			}
			if (a1 == 15451) {
				f_1425_a2_v(tv1, tv0);
			}
			if (a0 == 15408) {
				if (f_156d_a1_b(tv1)) {
					f_1496_a2_v(tv1, tv0);
					f_10bd_a1_v("Neutral");
					tv0->SetMessage(14194);
					tv0->ClearReplies();
					tv0->AddReply(14195, 15410, 15409);
					return;
				}
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14222);
				tv0->ClearReplies();
				if (f_1579_a1_b(tv1)) {
					tv0->AddReply(14223, 15442, 15441);
				}
				if (f_149c_a1_b(tv1)) {
					tv0->AddReply(14234, 15453, 15452);
				}
				tv0->AddReply(14239, -1, 15457);
				return;
			}
			if (a0 == 15453) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14235);
				tv0->ClearReplies();
				tv0->AddReply(14236, 15455, 15454);
				return;
			}
			if (a0 == 15455) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14237);
				tv0->ClearReplies();
				tv0->AddReply(14238, -1, 15456);
				return;
			}
			if (a0 == 15442) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14224);
				tv0->ClearReplies();
				tv0->AddReply(14225, 15444, 15443);
				return;
			}
			if (a0 == 15444) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14226);
				tv0->ClearReplies();
				tv0->AddReply(14227, 15446, 15445);
				return;
			}
			if (a0 == 15446) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14228);
				tv0->ClearReplies();
				tv0->AddReply(14229, 15448, 15447);
				return;
			}
			if (a0 == 15448) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14230);
				tv0->ClearReplies();
				tv0->AddReply(14231, 15450, 15449);
				return;
			}
			if (a0 == 15450) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14232);
				tv0->ClearReplies();
				tv0->AddReply(14233, -1, 15451);
				return;
			}
			if (a0 == 15410) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14196);
				tv0->ClearReplies();
				tv0->AddReply(14197, 15412, 15411);
				tv0->AddReply(14218, 15412, 15435);
				tv0->AddReply(14219, 15438, 15437);
				return;
			}
			if (a0 == 15438) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14220);
				tv0->ClearReplies();
				tv0->AddReply(14221, 15412, 15439);
				return;
			}
			if (a0 == 15412) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14198);
				tv0->ClearReplies();
				tv0->AddReply(14199, 15414, 15413);
				tv0->AddReply(14212, 15428, 15427);
				return;
			}
			if (a0 == 15428) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14213);
				tv0->ClearReplies();
				tv0->AddReply(14214, 15430, 15429);
				tv0->AddReply(14217, 15430, 15433);
				return;
			}
			if (a0 == 15430) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14215);
				tv0->ClearReplies();
				tv0->AddReply(14216, 15420, 15431);
				return;
			}
			if (a0 == 15414) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14200);
				tv0->ClearReplies();
				tv0->AddReply(14201, 15416, 15415);
				return;
			}
			if (a0 == 15416) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14202);
				tv0->ClearReplies();
				tv0->AddReply(14203, 15418, 15417);
				tv0->AddReply(14209, 15424, 15423);
				return;
			}
			if (a0 == 15424) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14210);
				tv0->ClearReplies();
				tv0->AddReply(14211, 15418, 15425);
				return;
			}
			if (a0 == 15418) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14204);
				tv0->ClearReplies();
				tv0->AddReply(14205, 15420, 15419);
				tv0->AddReply(14208, -1, 15422);
				return;
			}
			if (a0 == 15420) {
				f_10bd_a1_v("Neutral");
				tv0->SetMessage(14206);
				tv0->ClearReplies();
				tv0->AddReply(14207, -1, 15421);
				return;
			}
			tv3 = true;
			if (f_1330_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_1287_a1_b(object a0)
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

bool f_1293_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1298_a1_b(object a0)
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
	L5 = L3 * 70 + f_12ed_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_12d0_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_12d4_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_12e6_a0_v(void)
{
	if (f_1330_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_12ed_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_12f7_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_12fc_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_1303_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_130f_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1314_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_131d_a1_b(int a0)
{
	return f_1314_a0_i() == a0;
}

bool f_1323_a0_b(void)
{
	bool L0;
	f_12d4_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_132c_a0_i(void)
{
	return 13334;
}

string f_132e_a0_s(void)
{
	return "ui/NPC_Aglaja.png";
}

bool f_1330_a0_b(void)
{
	return true;
}

void f_1332_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1338_a2_v(object a0, object a1)
{
	@SetVariable("ood7Aglaja1", 1);
}

void f_133e_a2_v(object a0, object a1)
{
	@SetVariable("ood7Aglaja2", 1);
}

void f_1344_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d7q01", 1);
	L0 = f_161e_a0_o();
	L0->AddMark("d7q01AglajaGotoBirdmaskSelf", "pt_map_aglaja", 1, 15410, f_130f_a0_f());
	L0->AddMark("d7q01BirdmaskD", "pt_d7q01_dbirdmask", 1, 15408, f_130f_a0_f());
	L0->AddMark("d7q01BirdmaskM", "pt_d7q01_mbirdmask", 1, 15409, f_130f_a0_f());
	L0->AddMark("d7q01BirdmaskU", "pt_d7q01_ubirdmask", 1, 15407, f_130f_a0_f());
	f_16a0_a0_v();
	f_16b0_a0_v();
	f_1303_a2_b("quest_d7_01", "place_birdmasks");
}

void f_137e_a2_v(object a0, object a1)
{
	@SetVariable("ood7Aglaja3", 1);
}

void f_1384_a2_v(object a0, object a1)
{
	object L0;
	int L1;
	@SetVariable("d7q01", 2);
	L0 = f_161e_a0_o();
	L0->AddMark("d7q01AglajaFindLierSelf", "pt_map_aglaja", 1, 15411, f_130f_a0_f());
	f_16d0_a0_v();
	a0->RemoveItemByType(L1, "d7q01_mreport", 1);
	a0->RemoveItemByType(L1, "d7q01_dreport", 1);
	a0->RemoveItemByType(L1, "d7q01_ureport", 1);
}

void f_13a7_a2_v(object a0, object a1)
{
	@SetVariable("ood7Aglaja4", 1);
}

void f_13ad_a2_v(object a0, object a1)
{
	@SetVariable("ood7Aglaja5", 1);
}

void f_13b3_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_161e_a0_o();
	L0->FindMark(L1, "d7q01AglajaFindLierSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q01AglajaGotoBirdmaskSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q01BirdmaskD");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q01BirdmaskM");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q01BirdmaskU");
	if (L1) {
		L1->Remove();
	}
	f_16c0_a0_v();
	f_1303_a2_b("quest_d7_01", "completed");
}

void f_13e6_a2_v(object a0, object a1)
{
	@SetVariable("d7q02", 3);
}

void f_13ec_a2_v(object a0, object a1)
{
	@SetVariable("d8q01", 1);
	f_16e0_a0_v();
	f_16f0_a0_v();
	f_1303_a2_b("quest_d8_01", "block_well");
}

void f_13fd_a2_v(object a0, object a1)
{
	@SetVariable("ood8Aglaja1", 1);
}

void f_1403_a2_v(object a0, object a1)
{
	@SetVariable("ood8Aglaja2", 1);
}

void f_1409_a2_v(object a0, object a1)
{
	@SetVariable("d8KainIsReason", 1);
}

void f_140f_a2_v(object a0, object a1)
{
	@SetVariable("d11q01", 1);
	f_1670_a0_v();
	f_1680_a0_v();
	f_1303_a2_b("quest_d11_01", "init_girl");
	f_1303_a2_b("quest_d11_01", "remove_andrei");
}

void f_1425_a2_v(object a0, object a1)
{
	f_1690_a0_v();
	f_1303_a2_b("quest_d11_01", "completed");
}

void f_142f_a2_v(object a0, object a1)
{
	@SetVariable("ood9Aglaja1", 1);
}

void f_1435_a2_v(object a0, object a1)
{
	@SetVariable("ood9Aglaja2", 1);
}

void f_143b_a2_v(object a0, object a1)
{
	@SetVariable("ood9Aglaja3", 1);
}

void f_1441_a2_v(object a0, object a1)
{
	@SetVariable("ood9Aglaja4", 1);
}

void f_1447_a2_v(object a0, object a1)
{
	@SetVariable("ood9Aglaja5", 1);
}

void f_144d_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d10q01", 1);
	L0 = f_161e_a0_o();
	L0->AddMark("d10q01AglajaGotoPetr", "pt_map_petr", 1, 15451, f_130f_a0_f());
	f_1640_a0_v();
	f_1650_a0_v();
	f_1303_a2_b("quest_d10_01", "init_house");
}

void f_146c_a2_v(object a0, object a1)
{
	@SetVariable("ood10Aglaja1", 1);
}

void f_1472_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_161e_a0_o();
	L0->FindMark(L1, "d10q01AglajaGotoPetr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d10q01SoldierGotoPetr");
	if (L1) {
		L1->Remove();
	}
	f_1660_a0_v();
	f_1303_a2_b("quest_d10_01", "completed");
}

void f_1490_a2_v(object a0, object a1)
{
	@SetVariable("ood10Aglaja2", 1);
}

void f_1496_a2_v(object a0, object a1)
{
	@SetVariable("d11AglajaVisit", 1);
}

bool f_149c_a1_b(object a0)
{
	if (f_15f1_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_14a6_a1_b(object a0)
{
	if (f_12f7_a1_i("ood7Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_14b2_a1_b(object a0)
{
	if (f_12f7_a1_i("ood7Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_14be_a1_b(object a0)
{
	if (f_12f7_a1_i("d7q01") == 0) {
		return true;
	}
	return false;
}

bool f_14ca_a1_b(object a0)
{
	if (f_12f7_a1_i("ood7Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_14d6_a1_b(object a0)
{
	if (f_12f7_a1_i("d7q01") == 1) {
		return true;
	}
	return false;
}

bool f_14e2_a1_b(object a0)
{
	if (f_12f7_a1_i("ood7Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_14ee_a1_b(object a0)
{
	if (f_12fc_a2_b(a0, "d7q01_dreport") && f_12fc_a2_b(a0, "d7q01_mreport") && f_12fc_a2_b(a0, "d7q01_ureport")) {
		return true;
	}
	return false;
}

bool f_150d_a1_b(object a0)
{
	if (f_12f7_a1_i("ood7Aglaja5") == 0) {
		return true;
	}
	return false;
}

bool f_1519_a1_b(object a0)
{
	if (f_12f7_a1_i("d7q01") == 3) {
		return true;
	}
	return false;
}

bool f_1525_a1_b(object a0)
{
	if (f_12f7_a1_i("d7q02") == 2) {
		return true;
	}
	return false;
}

bool f_1531_a1_b(object a0)
{
	if (f_12f7_a1_i("d8q01") == 0) {
		return true;
	}
	return false;
}

bool f_153d_a1_b(object a0)
{
	if (f_12f7_a1_i("ood8Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1549_a1_b(object a0)
{
	if (f_12f7_a1_i("ood8Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_1555_a1_b(object a0)
{
	if (f_12f7_a1_i("d8TermitnikLoad") != 0) {
		return true;
	}
	return false;
}

bool f_1561_a1_b(object a0)
{
	if (f_12f7_a1_i("d9TalkToPolkovodec") != 0) {
		return true;
	}
	return false;
}

bool f_156d_a1_b(object a0)
{
	if (f_12f7_a1_i("d11q01") == 0) {
		return true;
	}
	return false;
}

bool f_1579_a1_b(object a0)
{
	if (f_12f7_a1_i("d11q01") == 4) {
		return true;
	}
	return false;
}

bool f_1585_a1_b(object a0)
{
	if (f_12f7_a1_i("ood9Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1591_a1_b(object a0)
{
	if (f_12f7_a1_i("ood9Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_159d_a1_b(object a0)
{
	if (f_12f7_a1_i("ood9Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_15a9_a1_b(object a0)
{
	if (f_12f7_a1_i("ood9Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_15b5_a1_b(object a0)
{
	if (f_12f7_a1_i("ood9Aglaja5") == 0) {
		return true;
	}
	return false;
}

bool f_15c1_a1_b(object a0)
{
	if (f_12f7_a1_i("ood10Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_15cd_a1_b(object a0)
{
	if (f_12f7_a1_i("d10q01") == 1000) {
		return true;
	}
	return false;
}

bool f_15d9_a1_b(object a0)
{
	if (f_12f7_a1_i("ood10Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_15e5_a1_b(object a0)
{
	if (f_12f7_a1_i("d10q01") == 3) {
		return true;
	}
	return false;
}

bool f_15f1_a1_b(object a0)
{
	return false;
}

object f_15f4_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1601_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_15f4_a0_o();
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

object f_161e_a0_o(void)
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

int f_162f_a0_i(void)
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

void f_1640_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 186, 1, 15449);
	f_1601_a2_b(L0, -1);
}

void f_1650_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 187, 1, 15450);
	f_1601_a2_b(L0, 186);
}

void f_1660_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 191, 1, 15476);
	f_1601_a2_b(L0, 186);
}

void f_1670_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 192, 1, 15477);
	f_1601_a2_b(L0, -1);
}

void f_1680_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 193, 1, 15478);
	f_1601_a2_b(L0, 192);
}

void f_1690_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 196, 1, 15481);
	f_1601_a2_b(L0, 192);
}

void f_16a0_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 165, 1, 15412);
	f_1601_a2_b(L0, -1);
}

void f_16b0_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 166, 1, 15413);
	f_1601_a2_b(L0, 165);
}

void f_16c0_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 168, 1, 15415);
	f_1601_a2_b(L0, 165);
}

void f_16d0_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 167, 1, 15414);
	f_1601_a2_b(L0, 165);
}

void f_16e0_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 175, 1, 15434);
	f_1601_a2_b(L0, -1);
}

void f_16f0_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 176, 1, 15435);
	f_1601_a2_b(L0, 175);
}

void f_1700_a0_v(void)
{
	g1 = false;
}

void f_1704_a1_v(object a0)
{
	if (f_131d_a1_b(7)) {
		t2{a0};
		return;
	}
	if (f_131d_a1_b(8)) {
		t4{a0};
		return;
	}
	if (f_131d_a1_b(9)) {
		t8{a0};
		return;
	}
	if (f_131d_a1_b(10)) {
		t6{a0};
		return;
	}
	if (f_131d_a1_b(11)) {
		t10{a0};
		return;
	}
	f_1323_a0_b();
}

