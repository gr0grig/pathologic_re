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
		} while (!f_19a1_a0_b());
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
		f_19fb_a1_b(f_1aa8_a0_o());
		if (!f_19a6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b5b_a0_i());
		L0->SetNPCDescription(f_1b59_a0_i());
		L0->SetPhoto(f_1b5d_a0_s());
		L0->SetPhoto2(f_1b5f_a0_s());
		L0->SetPlayerName(f_20d4_a0_i());
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
		f_19ea_a1_v(a0);
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
			tv0->SetMessage(535439);
			tv0->ClearReplies();
			if (f_1e0b_a1_b(tv1)) {
				tv0->AddReply(539929, 41892, 41891);
			}
			tv0->AddReply(539927, -1, 41889);
			tv0->AddReply(539928, -1, 41890);
			break;
			return;
		}
		if (f_1b61_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a85_a1_v(tv2);
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
		if (!f_1b61_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a8c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1aa1_a0_v();
			if (a1 == 41891) {
				f_1c35_a2_v(tv1, tv0);
			}
			if (a0 == 37121) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(535439);
				tv0->ClearReplies();
				if (f_1e0b_a1_b(tv1)) {
					tv0->AddReply(539929, 41892, 41891);
				}
				tv0->AddReply(539927, -1, 41889);
				tv0->AddReply(539928, -1, 41890);
				return;
			}
			if (a0 == 41892) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(539930);
				tv0->ClearReplies();
				tv0->AddReply(539931, 41894, 41893);
				tv0->AddReply(539937, -1, 41899);
				return;
			}
			if (a0 == 41894) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(539932);
				tv0->ClearReplies();
				tv0->AddReply(539933, 41902, 41895);
				tv0->AddReply(539934, 41897, 41896);
				return;
			}
			if (a0 == 41897) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(539935);
				tv0->ClearReplies();
				tv0->AddReply(539936, 41900, 41898);
				return;
			}
			if (a0 == 41900) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(539938);
				tv0->ClearReplies();
				tv0->AddReply(539939, -1, 41901);
				return;
			}
			if (a0 == 41902) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(539940);
				tv0->ClearReplies();
				tv0->AddReply(539941, 41905, 41903);
				tv0->AddReply(539942, 41905, 41904);
				return;
			}
			if (a0 == 41905) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(539943);
				tv0->ClearReplies();
				tv0->AddReply(539944, -1, 41907);
				tv0->AddReply(539945, -1, 41908);
				return;
			}
			tv3 = true;
			if (f_1b61_a0_b()) {
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
		f_19fb_a1_b(f_1aa8_a0_o());
		if (!f_19a6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b5b_a0_i());
		L0->SetNPCDescription(f_1b59_a0_i());
		L0->SetPhoto(f_1b5d_a0_s());
		L0->SetPhoto2(f_1b5f_a0_s());
		L0->SetPlayerName(f_20d4_a0_i());
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
		f_19ea_a1_v(a0);
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
			if (f_1e17_a1_b(tv1)) {
				f_1c4b_a2_v(tv1, tv0);
				f_270_a1_v("Neutral");
				tv0->SetMessage(513033);
				tv0->ClearReplies();
				tv0->AddReply(513034, 14260, 14241);
				tv0->AddReply(534463, 36105, 36104);
				break;
			}
			f_270_a1_v("Neutral");
			tv0->SetMessage(513031);
			tv0->ClearReplies();
			if (f_1e2f_a1_b(tv1) && f_1e3b_a1_b(tv1) && !f_1e47_a1_b(tv1)) {
				tv0->AddReply(513125, 14345, 14344);
			}
			if (f_1e47_a1_b(tv1) && f_1e66_a1_b(tv1)) {
				tv0->AddReply(513075, 14369, 14285);
			}
			if (f_1e72_a1_b(tv1)) {
				tv0->AddReply(513141, 14362, 14360);
			}
			if (f_1e7e_a1_b(tv1)) {
				tv0->AddReply(513377, 14610, 14609);
			}
			if (f_1dac_a1_b(tv1)) {
				tv0->AddReply(533254, 34769, 34768);
			}
			if (f_1e23_a1_b(tv1)) {
				tv0->AddReply(513035, 14243, 14242);
			}
			tv0->AddReply(513032, -1, 14239);
			break;
			return;
		}
		if (f_1b61_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a85_a1_v(tv2);
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

	void f_270_a1_v(string a0)
	{
		if (!f_1b61_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a8c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1aa1_a0_v();
			if (a1 == 14343) {
				f_1c51_a2_v(tv1, tv0);
			}
			if (a1 == 14344) {
				f_1cb4_a2_v(tv1, tv0);
			}
			if (a1 == 14391) {
				f_1c91_a2_v(tv1, tv0);
				f_1cba_a2_v(tv1, tv0);
				f_1c3b_a2_v(tv1, tv0);
			}
			if (a1 == 14394) {
				f_1c91_a2_v(tv1, tv0);
				f_1cba_a2_v(tv1, tv0);
				f_1c3b_a2_v(tv1, tv0);
			}
			if (a1 == 14389) {
				f_1c91_a2_v(tv1, tv0);
				f_1cba_a2_v(tv1, tv0);
				f_1c3b_a2_v(tv1, tv0);
			}
			if (a1 == 14363) {
				f_1cc0_a2_v(tv1, tv0);
				f_1c08_a2_v(tv1, tv0);
				f_1c19_a2_v(tv1, tv0);
			}
			if (a1 == 14623) {
				f_1cf3_a2_v(tv1, tv0);
			}
			if (a1 == 34746) {
				f_1b79_a2_v(tv1, tv0);
			}
			if (a1 == 36091) {
				f_1b79_a2_v(tv1, tv0);
			}
			if (a1 == 34770) {
				f_1b89_a2_v(tv1, tv0);
			}
			if (a1 == 14242) {
				f_1c8b_a2_v(tv1, tv0);
			}
			if (a0 == 14240) {
				if (f_1e17_a1_b(tv1)) {
					f_1c4b_a2_v(tv1, tv0);
					f_270_a1_v("Neutral");
					tv0->SetMessage(513033);
					tv0->ClearReplies();
					tv0->AddReply(513034, 14260, 14241);
					tv0->AddReply(534463, 36105, 36104);
					return;
				}
				f_270_a1_v("Neutral");
				tv0->SetMessage(513031);
				tv0->ClearReplies();
				if (f_1e2f_a1_b(tv1) && f_1e3b_a1_b(tv1) && !f_1e47_a1_b(tv1)) {
					tv0->AddReply(513125, 14345, 14344);
				}
				if (f_1e47_a1_b(tv1) && f_1e66_a1_b(tv1)) {
					tv0->AddReply(513075, 14369, 14285);
				}
				if (f_1e72_a1_b(tv1)) {
					tv0->AddReply(513141, 14362, 14360);
				}
				if (f_1e7e_a1_b(tv1)) {
					tv0->AddReply(513377, 14610, 14609);
				}
				if (f_1dac_a1_b(tv1)) {
					tv0->AddReply(533254, 34769, 34768);
				}
				if (f_1e23_a1_b(tv1)) {
					tv0->AddReply(513035, 14243, 14242);
				}
				tv0->AddReply(513032, -1, 14239);
				return;
			}
			if (a0 == 14243) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513036);
				tv0->ClearReplies();
				tv0->AddReply(513134, 14354, 14353);
				tv0->AddReply(513136, 14358, 14355);
				return;
			}
			if (a0 == 14358) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513139);
				tv0->ClearReplies();
				tv0->AddReply(513140, -1, 14359);
				return;
			}
			if (a0 == 14354) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513135);
				tv0->ClearReplies();
				tv0->AddReply(513138, -1, 14357);
				return;
			}
			if (a0 == 34769) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(533255);
				tv0->ClearReplies();
				tv0->AddReply(533256, -1, 34770);
				return;
			}
			if (a0 == 14610) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513378);
				tv0->ClearReplies();
				tv0->AddReply(513379, 14612, 14611);
				tv0->AddReply(534473, 14612, 36117);
				return;
			}
			if (a0 == 14612) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513380);
				tv0->ClearReplies();
				tv0->AddReply(513382, 14616, 14614);
				tv0->AddReply(513383, 14616, 14615);
				tv0->AddReply(513381, 14619, 14613);
				return;
			}
			if (a0 == 14619) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513386);
				tv0->ClearReplies();
				tv0->AddReply(513387, 14622, 14620);
				return;
			}
			if (a0 == 14622) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513388);
				tv0->ClearReplies();
				tv0->AddReply(513389, 34743, 14623);
				return;
			}
			if (a0 == 34743) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(533229);
				tv0->ClearReplies();
				tv0->AddReply(533230, 34745, 34744);
				tv0->AddReply(534453, 34745, 36086);
				return;
			}
			if (a0 == 34745) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(533231);
				tv0->ClearReplies();
				tv0->AddReply(534449, 36083, 36082);
				tv0->AddReply(534454, 36085, 36088);
				return;
			}
			if (a0 == 36083) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(534450);
				tv0->ClearReplies();
				tv0->AddReply(534451, 36085, 36084);
				return;
			}
			if (a0 == 36085) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(534452);
				tv0->ClearReplies();
				tv0->AddReply(533232, -1, 34746);
				tv0->AddReply(534456, -1, 36091);
				tv0->AddReply(534455, -1, 36090);
				return;
			}
			if (a0 == 14616) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513384);
				tv0->ClearReplies();
				tv0->AddReply(513385, 14619, 14618);
				return;
			}
			if (a0 == 14362) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513143);
				tv0->ClearReplies();
				tv0->AddReply(513144, -1, 14363);
				return;
			}
			if (a0 == 14369) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513150);
				tv0->ClearReplies();
				tv0->AddReply(513151, 14371, 14370);
				return;
			}
			if (a0 == 14371) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513152);
				tv0->ClearReplies();
				tv0->AddReply(513153, 14373, 14372);
				return;
			}
			if (a0 == 14373) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513154);
				tv0->ClearReplies();
				tv0->AddReply(534471, 14377, 36114);
				tv0->AddReply(513155, 14375, 14374);
				return;
			}
			if (a0 == 14375) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513156);
				tv0->ClearReplies();
				tv0->AddReply(513157, 14377, 14376);
				return;
			}
			if (a0 == 14377) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513158);
				tv0->ClearReplies();
				tv0->AddReply(513159, 14379, 14378);
				tv0->AddReply(513161, 14381, 14380);
				return;
			}
			if (a0 == 14381) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513162);
				tv0->ClearReplies();
				tv0->AddReply(513164, 14384, 14383);
				return;
			}
			if (a0 == 14379) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513160);
				tv0->ClearReplies();
				tv0->AddReply(513163, 14384, 14382);
				return;
			}
			if (a0 == 14384) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513165);
				tv0->ClearReplies();
				tv0->AddReply(513166, 14390, 14386);
				tv0->AddReply(513167, 14388, 14387);
				return;
			}
			if (a0 == 14388) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513168);
				tv0->ClearReplies();
				tv0->AddReply(513169, -1, 14389);
				return;
			}
			if (a0 == 14390) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513170);
				tv0->ClearReplies();
				tv0->AddReply(513171, -1, 14391);
				tv0->AddReply(513172, 14393, 14392);
				return;
			}
			if (a0 == 14393) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513173);
				tv0->ClearReplies();
				tv0->AddReply(513174, -1, 14394);
				return;
			}
			if (a0 == 14345) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513126);
				tv0->ClearReplies();
				tv0->AddReply(535852, 37553, 37552);
				tv0->AddReply(535854, 37553, 37554);
				return;
			}
			if (a0 == 37553) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(535853);
				tv0->ClearReplies();
				tv0->AddReply(513127, 14348, 14346);
				tv0->AddReply(513128, -1, 14347);
				return;
			}
			if (a0 == 14348) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513129);
				tv0->ClearReplies();
				tv0->AddReply(513130, 14350, 14349);
				tv0->AddReply(534472, -1, 36116);
				return;
			}
			if (a0 == 14350) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513131);
				tv0->ClearReplies();
				tv0->AddReply(513132, -1, 14351);
				tv0->AddReply(513133, -1, 14352);
				return;
			}
			if (a0 == 36105) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(534464);
				tv0->ClearReplies();
				tv0->AddReply(534465, 36107, 36106);
				return;
			}
			if (a0 == 36107) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(534466);
				tv0->ClearReplies();
				tv0->AddReply(534467, 14260, 36108);
				tv0->AddReply(534468, 36110, 36109);
				return;
			}
			if (a0 == 36110) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(534469);
				tv0->ClearReplies();
				tv0->AddReply(534470, 14284, 36111);
				return;
			}
			if (a0 == 14260) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513052);
				tv0->ClearReplies();
				tv0->AddReply(513053, 14262, 14261);
				tv0->AddReply(513108, 14262, 14323);
				return;
			}
			if (a0 == 14262) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513054);
				tv0->ClearReplies();
				tv0->AddReply(513055, 14264, 14263);
				tv0->AddReply(513110, 14264, 14326);
				return;
			}
			if (a0 == 14264) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513056);
				tv0->ClearReplies();
				tv0->AddReply(513057, 14266, 14265);
				return;
			}
			if (a0 == 14266) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513058);
				tv0->ClearReplies();
				tv0->AddReply(513059, 14269, 14267);
				tv0->AddReply(513060, 14557, 14268);
				return;
			}
			if (a0 == 14269) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513061);
				tv0->ClearReplies();
				tv0->AddReply(513321, 14557, 14556);
				return;
			}
			if (a0 == 14557) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513322);
				tv0->ClearReplies();
				tv0->AddReply(513323, 14284, 14558);
				return;
			}
			if (a0 == 14284) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513074);
				tv0->ClearReplies();
				tv0->AddReply(513076, 14287, 14286);
				tv0->AddReply(513117, 14336, 14335);
				return;
			}
			if (a0 == 14336) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513118);
				tv0->ClearReplies();
				tv0->AddReply(513119, 14289, 14337);
				return;
			}
			if (a0 == 14287) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513077);
				tv0->ClearReplies();
				tv0->AddReply(513078, 14289, 14288);
				return;
			}
			if (a0 == 14289) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513079);
				tv0->ClearReplies();
				tv0->AddReply(513082, 14296, 14292);
				tv0->AddReply(513080, 14291, 14290);
				return;
			}
			if (a0 == 14291) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513081);
				tv0->ClearReplies();
				tv0->AddReply(513083, 14294, 14293);
				return;
			}
			if (a0 == 14294) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513084);
				tv0->ClearReplies();
				tv0->AddReply(513085, 14296, 14295);
				return;
			}
			if (a0 == 14296) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513086);
				tv0->ClearReplies();
				tv0->AddReply(513111, 14329, 14328);
				return;
			}
			if (a0 == 14329) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513112);
				tv0->ClearReplies();
				tv0->AddReply(513113, 14332, 14331);
				return;
			}
			if (a0 == 14332) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513114);
				tv0->ClearReplies();
				tv0->AddReply(513120, 14340, 14339);
				tv0->AddReply(513115, 14334, 14333);
				return;
			}
			if (a0 == 14334) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513116);
				tv0->ClearReplies();
				tv0->AddReply(534431, 14340, 36061);
				return;
			}
			if (a0 == 14340) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513121);
				tv0->ClearReplies();
				tv0->AddReply(513122, 14342, 14341);
				return;
			}
			if (a0 == 14342) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(513123);
				tv0->ClearReplies();
				tv0->AddReply(513124, -1, 14343);
				return;
			}
			tv3 = true;
			if (f_1b61_a0_b()) {
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
		f_19fb_a1_b(f_1aa8_a0_o());
		if (!f_19a6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b5b_a0_i());
		L0->SetNPCDescription(f_1b59_a0_i());
		L0->SetPhoto(f_1b5d_a0_s());
		L0->SetPhoto2(f_1b5f_a0_s());
		L0->SetPlayerName(f_20d4_a0_i());
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
		f_19ea_a1_v(a0);
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
			if (f_1e96_a1_b(tv1)) {
				f_1d0d_a2_v(tv1, tv0);
				f_1bc2_a2_v(tv1, tv0);
				f_863_a1_v("Neutral");
				tv0->SetMessage(515089);
				tv0->ClearReplies();
				tv0->AddReply(535859, 37561, 37560);
				break;
			}
			f_863_a1_v("Neutral");
			tv0->SetMessage(513409);
			tv0->ClearReplies();
			if (f_1e8a_a1_b(tv1)) {
				tv0->AddReply(535855, 14647, 37556);
			}
			if (f_1dc4_a1_b(tv1)) {
				tv0->AddReply(513411, 13400, 14645);
			}
			if (f_1ea2_a1_b(tv1) && f_1eae_a1_b(tv1)) {
				tv0->AddReply(513412, 13452, 14646);
			}
			tv0->AddReply(513410, -1, 14644);
			break;
			return;
		}
		if (f_1b61_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a85_a1_v(tv2);
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

	void f_863_a1_v(string a0)
	{
		if (!f_1b61_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a8c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1aa1_a0_v();
			if (a1 == 14980) {
				f_1cfc_a2_v(tv1, tv0);
			}
			if (a1 == 37557) {
				f_1cfc_a2_v(tv1, tv0);
			}
			if (a1 == 14645) {
				f_1bbc_a2_v(tv1, tv0);
			}
			if (a1 == 13413) {
				f_1d19_a2_v(tv1, tv0);
			}
			if (a1 == 14646) {
				f_1d13_a2_v(tv1, tv0);
			}
			if (a0 == 16355) {
				if (f_1e96_a1_b(tv1)) {
					f_1d0d_a2_v(tv1, tv0);
					f_1bc2_a2_v(tv1, tv0);
					f_863_a1_v("Neutral");
					tv0->SetMessage(515089);
					tv0->ClearReplies();
					tv0->AddReply(535859, 37561, 37560);
					return;
				}
				f_863_a1_v("Neutral");
				tv0->SetMessage(513409);
				tv0->ClearReplies();
				if (f_1e8a_a1_b(tv1)) {
					tv0->AddReply(535855, 14647, 37556);
				}
				if (f_1dc4_a1_b(tv1)) {
					tv0->AddReply(513411, 13400, 14645);
				}
				if (f_1ea2_a1_b(tv1) && f_1eae_a1_b(tv1)) {
					tv0->AddReply(513412, 13452, 14646);
				}
				tv0->AddReply(513410, -1, 14644);
				return;
			}
			if (a0 == 13452) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512293);
				tv0->ClearReplies();
				tv0->AddReply(512294, 13454, 13453);
				return;
			}
			if (a0 == 13454) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512295);
				tv0->ClearReplies();
				tv0->AddReply(512296, 13457, 13455);
				tv0->AddReply(512297, -1, 13456);
				return;
			}
			if (a0 == 13457) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512298);
				tv0->ClearReplies();
				tv0->AddReply(512299, 13459, 13458);
				return;
			}
			if (a0 == 13459) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512300);
				tv0->ClearReplies();
				tv0->AddReply(512301, 13461, 13460);
				return;
			}
			if (a0 == 13461) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512302);
				tv0->ClearReplies();
				tv0->AddReply(512303, 13463, 13462);
				return;
			}
			if (a0 == 13463) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512304);
				tv0->ClearReplies();
				tv0->AddReply(512305, 13465, 13464);
				return;
			}
			if (a0 == 13465) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512306);
				tv0->ClearReplies();
				tv0->AddReply(512307, -1, 13466);
				tv0->AddReply(512308, -1, 13467);
				return;
			}
			if (a0 == 13400) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512244);
				tv0->ClearReplies();
				tv0->AddReply(512245, 13402, 13401);
				return;
			}
			if (a0 == 13402) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512246);
				tv0->ClearReplies();
				tv0->AddReply(512248, 13405, 13404);
				tv0->AddReply(512247, 13409, 13403);
				return;
			}
			if (a0 == 13405) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512249);
				tv0->ClearReplies();
				tv0->AddReply(512250, 13407, 13406);
				return;
			}
			if (a0 == 13407) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512251);
				tv0->ClearReplies();
				tv0->AddReply(512252, 13409, 13408);
				return;
			}
			if (a0 == 13409) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512253);
				tv0->ClearReplies();
				tv0->AddReply(512254, 13411, 13410);
				return;
			}
			if (a0 == 13411) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(512255);
				tv0->ClearReplies();
				tv0->AddReply(512256, -1, 13413);
				return;
			}
			if (a0 == 14647) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(513413);
				tv0->ClearReplies();
				tv0->AddReply(513415, 14650, 14649);
				tv0->AddReply(513417, 14949, 14652);
				tv0->AddReply(513414, 14650, 14648);
				return;
			}
			if (a0 == 14949) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(513688);
				tv0->ClearReplies();
				tv0->AddReply(513689, 14952, 14951);
				return;
			}
			if (a0 == 14952) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(513690);
				tv0->ClearReplies();
				tv0->AddReply(513691, 14650, 14953);
				tv0->AddReply(513692, 14650, 14954);
				tv0->AddReply(513693, 14650, 14955);
				return;
			}
			if (a0 == 14650) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(513416);
				tv0->ClearReplies();
				tv0->AddReply(513421, 14959, 14657);
				return;
			}
			if (a0 == 14959) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(513694);
				tv0->ClearReplies();
				tv0->AddReply(513695, 14963, 14960);
				tv0->AddReply(513696, 14963, 14961);
				tv0->AddReply(513697, 14963, 14962);
				return;
			}
			if (a0 == 14963) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(513698);
				tv0->ClearReplies();
				tv0->AddReply(513699, 14970, 14964);
				tv0->AddReply(513700, 14968, 14967);
				return;
			}
			if (a0 == 14968) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(513701);
				tv0->ClearReplies();
				tv0->AddReply(513702, 14970, 14969);
				return;
			}
			if (a0 == 14970) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(513703);
				tv0->ClearReplies();
				tv0->AddReply(513704, 14972, 14971);
				return;
			}
			if (a0 == 14972) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(513705);
				tv0->ClearReplies();
				tv0->AddReply(513706, 14975, 14974);
				return;
			}
			if (a0 == 14975) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(513707);
				tv0->ClearReplies();
				tv0->AddReply(513708, 14978, 14976);
				tv0->AddReply(513709, 14978, 14977);
				return;
			}
			if (a0 == 14978) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(513710);
				tv0->ClearReplies();
				tv0->AddReply(513711, -1, 14980);
				tv0->AddReply(535857, 37559, 37558);
				return;
			}
			if (a0 == 37559) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(535858);
				tv0->ClearReplies();
				tv0->AddReply(535856, -1, 37557);
				return;
			}
			if (a0 == 37561) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(535860);
				tv0->ClearReplies();
				tv0->AddReply(535861, 37563, 37562);
				tv0->AddReply(535867, 37569, 37568);
				return;
			}
			if (a0 == 37569) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(535868);
				tv0->ClearReplies();
				tv0->AddReply(535869, 37563, 37570);
				tv0->AddReply(535870, -1, 37571);
				return;
			}
			if (a0 == 37563) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(535862);
				tv0->ClearReplies();
				tv0->AddReply(535863, 37565, 37564);
				tv0->AddReply(535871, 37565, 37573);
				return;
			}
			if (a0 == 37565) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(535864);
				tv0->ClearReplies();
				tv0->AddReply(535876, 37581, 37580);
				tv0->AddReply(535872, 37576, 37575);
				tv0->AddReply(535880, 37567, 37584);
				return;
			}
			if (a0 == 37576) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(535873);
				tv0->ClearReplies();
				tv0->AddReply(535874, 16357, 37577);
				return;
			}
			if (a0 == 37581) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(535877);
				tv0->ClearReplies();
				tv0->AddReply(535865, 37567, 37566);
				return;
			}
			if (a0 == 37567) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(535866);
				tv0->ClearReplies();
				tv0->AddReply(515090, 16357, 16356);
				return;
			}
			if (a0 == 16357) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(515091);
				tv0->ClearReplies();
				tv0->AddReply(535881, 16359, 37586);
				tv0->AddReply(515092, 16359, 16358);
				return;
			}
			if (a0 == 16359) {
				f_863_a1_v("Neutral");
				tv0->SetMessage(515093);
				tv0->ClearReplies();
				tv0->AddReply(515094, -1, 16360);
				tv0->AddReply(535875, -1, 37579);
				return;
			}
			tv3 = true;
			if (f_1b61_a0_b()) {
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
		f_19fb_a1_b(f_1aa8_a0_o());
		if (!f_19a6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b5b_a0_i());
		L0->SetNPCDescription(f_1b59_a0_i());
		L0->SetPhoto(f_1b5d_a0_s());
		L0->SetPhoto2(f_1b5f_a0_s());
		L0->SetPlayerName(f_20d4_a0_i());
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
		f_19ea_a1_v(a0);
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
			if (f_1f1a_a1_b(tv1)) {
				f_1d7c_a2_v(tv1, tv0);
				f_1bc8_a2_v(tv1, tv0);
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(512899);
				tv0->ClearReplies();
				tv0->AddReply(538546, 40428, 40427);
				tv0->AddReply(538571, 40458, 40456);
				tv0->AddReply(538572, 40428, 40457);
				break;
			}
			f_cb1_a1_v("Neutral");
			tv0->SetMessage(512905);
			tv0->ClearReplies();
			if (f_1f3e_a1_b(tv1) && f_1f4a_a1_b(tv1)) {
				tv0->AddReply(512906, 40435, 14108);
			}
			if (f_1f26_a1_b(tv1) && f_1f32_a1_b(tv1)) {
				tv0->AddReply(512912, 14119, 14114);
			}
			if (f_1db8_a1_b(tv1)) {
				tv0->AddReply(534117, 35711, 35710);
			}
			tv0->AddReply(512911, -1, 14113);
			tv0->AddReply(538502, -1, 40392);
			break;
			return;
		}
		if (f_1b61_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a85_a1_v(tv2);
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

	void f_cb1_a1_v(string a0)
	{
		if (!f_1b61_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a8c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1aa1_a0_v();
			if (a1 == 14104) {
				f_1d5d_a2_v(tv1, tv0);
			}
			if (a1 == 40830) {
				f_1d5d_a2_v(tv1, tv0);
			}
			if (a1 == 14118) {
				f_1d82_a2_v(tv1, tv0);
				f_1c02_a2_v(tv1, tv0);
				f_1c3b_a2_v(tv1, tv0);
			}
			if (a1 == 40452) {
				f_1d82_a2_v(tv1, tv0);
				f_1c02_a2_v(tv1, tv0);
				f_1c3b_a2_v(tv1, tv0);
			}
			if (a1 == 14114) {
				f_1da0_a2_v(tv1, tv0);
			}
			if (a1 == 35712) {
				f_1ba2_a2_v(tv1, tv0);
				f_1b63_a2_v(tv1, tv0);
				f_1b6f_a2_v(tv1, tv0);
			}
			if (a0 == 14101) {
				if (f_1f1a_a1_b(tv1)) {
					f_1d7c_a2_v(tv1, tv0);
					f_1bc8_a2_v(tv1, tv0);
					f_cb1_a1_v("Neutral");
					tv0->SetMessage(512899);
					tv0->ClearReplies();
					tv0->AddReply(538546, 40428, 40427);
					tv0->AddReply(538571, 40458, 40456);
					tv0->AddReply(538572, 40428, 40457);
					return;
				}
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(512905);
				tv0->ClearReplies();
				if (f_1f3e_a1_b(tv1) && f_1f4a_a1_b(tv1)) {
					tv0->AddReply(512906, 40435, 14108);
				}
				if (f_1f26_a1_b(tv1) && f_1f32_a1_b(tv1)) {
					tv0->AddReply(512912, 14119, 14114);
				}
				if (f_1db8_a1_b(tv1)) {
					tv0->AddReply(534117, 35711, 35710);
				}
				tv0->AddReply(512911, -1, 14113);
				tv0->AddReply(538502, -1, 40392);
				return;
			}
			if (a0 == 35711) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(534118);
				tv0->ClearReplies();
				tv0->AddReply(536487, 38287, 38286);
				return;
			}
			if (a0 == 38287) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(536488);
				tv0->ClearReplies();
				tv0->AddReply(536489, 38290, 38288);
				tv0->AddReply(536490, 38290, 38289);
				return;
			}
			if (a0 == 38290) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(536491);
				tv0->ClearReplies();
				tv0->AddReply(536493, 38293, 38292);
				return;
			}
			if (a0 == 38293) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(536494);
				tv0->ClearReplies();
				tv0->AddReply(534119, -1, 35712);
				return;
			}
			if (a0 == 14119) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(512915);
				tv0->ClearReplies();
				tv0->AddReply(512916, 14122, 14120);
				tv0->AddReply(512917, 14122, 14121);
				return;
			}
			if (a0 == 14122) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(512918);
				tv0->ClearReplies();
				tv0->AddReply(512919, 14125, 14124);
				tv0->AddReply(538564, -1, 40449);
				return;
			}
			if (a0 == 14125) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(512920);
				tv0->ClearReplies();
				tv0->AddReply(538568, 40454, 40453);
				tv0->AddReply(512921, -1, 14126);
				return;
			}
			if (a0 == 40454) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(538569);
				tv0->ClearReplies();
				tv0->AddReply(512922, 14128, 14127);
				return;
			}
			if (a0 == 14128) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(512923);
				tv0->ClearReplies();
				tv0->AddReply(512924, -1, 14129);
				tv0->AddReply(538570, -1, 40455);
				return;
			}
			if (a0 == 40435) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(538554);
				tv0->ClearReplies();
				tv0->AddReply(538555, 40437, 40436);
				tv0->AddReply(538558, 14109, 40439);
				return;
			}
			if (a0 == 40437) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(538556);
				tv0->ClearReplies();
				tv0->AddReply(538557, 40442, 40438);
				tv0->AddReply(538559, 40442, 40441);
				tv0->AddReply(538562, 40442, 40444);
				return;
			}
			if (a0 == 40442) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(538560);
				tv0->ClearReplies();
				tv0->AddReply(538561, 14109, 40443);
				tv0->AddReply(538563, 14109, 40447);
				return;
			}
			if (a0 == 14109) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(512907);
				tv0->ClearReplies();
				tv0->AddReply(512908, 14115, 14110);
				tv0->AddReply(512909, 14115, 14111);
				tv0->AddReply(512910, 14115, 14112);
				return;
			}
			if (a0 == 14115) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(512913);
				tv0->ClearReplies();
				tv0->AddReply(512914, -1, 14118);
				tv0->AddReply(538567, -1, 40452);
				return;
			}
			if (a0 == 40458) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(538573);
				tv0->ClearReplies();
				tv0->AddReply(538873, 40428, 40810);
				tv0->AddReply(538874, 40428, 40811);
				return;
			}
			if (a0 == 40428) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(538547);
				tv0->ClearReplies();
				tv0->AddReply(538548, 40430, 40429);
				tv0->AddReply(538876, 40817, 40816);
				return;
			}
			if (a0 == 40817) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(538877);
				tv0->ClearReplies();
				tv0->AddReply(538878, 40819, 40818);
				return;
			}
			if (a0 == 40819) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(538879);
				tv0->ClearReplies();
				tv0->AddReply(538880, 40430, 40820);
				tv0->AddReply(538881, 40434, 40821);
				return;
			}
			if (a0 == 40430) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(538549);
				tv0->ClearReplies();
				tv0->AddReply(538550, 40432, 40431);
				tv0->AddReply(538882, 40434, 40823);
				return;
			}
			if (a0 == 40432) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(538551);
				tv0->ClearReplies();
				tv0->AddReply(538552, 40434, 40433);
				return;
			}
			if (a0 == 40434) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(538553);
				tv0->ClearReplies();
				tv0->AddReply(512900, 14103, 14102);
				tv0->AddReply(538883, 14103, 40826);
				return;
			}
			if (a0 == 14103) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(512901);
				tv0->ClearReplies();
				tv0->AddReply(512902, -1, 14104);
				tv0->AddReply(512904, 40829, 14106);
				return;
			}
			if (a0 == 40829) {
				f_cb1_a1_v("Neutral");
				tv0->SetMessage(538885);
				tv0->ClearReplies();
				tv0->AddReply(538886, -1, 40830);
				return;
			}
			tv3 = true;
			if (f_1b61_a0_b()) {
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
		f_19fb_a1_b(f_1aa8_a0_o());
		if (!f_19a6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b5b_a0_i());
		L0->SetNPCDescription(f_1b59_a0_i());
		L0->SetPhoto(f_1b5d_a0_s());
		L0->SetPhoto2(f_1b5f_a0_s());
		L0->SetPlayerName(f_20d4_a0_i());
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
		f_19ea_a1_v(a0);
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
			if (f_1eea_a1_b(tv1)) {
				f_1d45_a2_v(tv1, tv0);
				f_1bd4_a2_v(tv1, tv0);
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513802);
				tv0->ClearReplies();
				tv0->AddReply(513803, 15030, 15029);
				tv0->AddReply(513815, 15042, 15041);
				break;
			}
			f_107c_a1_v("Neutral");
			tv0->SetMessage(513818);
			tv0->ClearReplies();
			if (f_1f0e_a1_b(tv1)) {
				tv0->AddReply(513865, 15093, 15092);
			}
			if (f_1f02_a1_b(tv1)) {
				tv0->AddReply(513852, 15080, 15079);
			}
			if (f_1ef6_a1_b(tv1) && f_1eba_a1_b(tv1)) {
				tv0->AddReply(513819, 15047, 15046);
			}
			if (f_1dd0_a1_b(tv1) && f_1ddc_a1_b(tv1)) {
				tv0->AddReply(538857, 40792, 40791);
			}
			if (f_1de8_a1_b(tv1)) {
				tv0->AddReply(540032, 42000, 41999);
			}
			tv0->AddReply(513880, -1, 15107);
			break;
			return;
		}
		if (f_1b61_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a85_a1_v(tv2);
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

	void f_107c_a1_v(string a0)
	{
		if (!f_1b61_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a8c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1aa1_a0_v();
			if (a1 == 15039) {
				f_1bda_a2_v(tv1, tv0);
			}
			if (a1 == 15040) {
				f_1bda_a2_v(tv1, tv0);
			}
			if (a1 == 15092) {
				f_1d57_a2_v(tv1, tv0);
			}
			if (a1 == 15079) {
				f_1d51_a2_v(tv1, tv0);
			}
			if (a1 == 15046) {
				f_1d4b_a2_v(tv1, tv0);
			}
			if (a1 == 40791) {
				f_1bce_a2_v(tv1, tv0);
			}
			if (a1 == 40808) {
				f_1c41_a2_v(tv1, tv0);
			}
			if (a1 == 42003) {
				f_1bf8_a2_v(tv1, tv0);
				f_1b6f_a2_v(tv1, tv0);
			}
			if (a1 == 42004) {
				f_1bf8_a2_v(tv1, tv0);
				f_1c41_a2_v(tv1, tv0);
			}
			if (a0 == 15028) {
				if (f_1eea_a1_b(tv1)) {
					f_1d45_a2_v(tv1, tv0);
					f_1bd4_a2_v(tv1, tv0);
					f_107c_a1_v("Neutral");
					tv0->SetMessage(513802);
					tv0->ClearReplies();
					tv0->AddReply(513803, 15030, 15029);
					tv0->AddReply(513815, 15042, 15041);
					return;
				}
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513818);
				tv0->ClearReplies();
				if (f_1f0e_a1_b(tv1)) {
					tv0->AddReply(513865, 15093, 15092);
				}
				if (f_1f02_a1_b(tv1)) {
					tv0->AddReply(513852, 15080, 15079);
				}
				if (f_1ef6_a1_b(tv1) && f_1eba_a1_b(tv1)) {
					tv0->AddReply(513819, 15047, 15046);
				}
				if (f_1dd0_a1_b(tv1) && f_1ddc_a1_b(tv1)) {
					tv0->AddReply(538857, 40792, 40791);
				}
				if (f_1de8_a1_b(tv1)) {
					tv0->AddReply(540032, 42000, 41999);
				}
				tv0->AddReply(513880, -1, 15107);
				return;
			}
			if (a0 == 42000) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(540033);
				tv0->ClearReplies();
				tv0->AddReply(540034, 42002, 42001);
				return;
			}
			if (a0 == 42002) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(540035);
				tv0->ClearReplies();
				tv0->AddReply(540036, -1, 42003);
				tv0->AddReply(540037, -1, 42004);
				return;
			}
			if (a0 == 40792) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(538858);
				tv0->ClearReplies();
				tv0->AddReply(538859, 40796, 40793);
				tv0->AddReply(538861, 40796, 40795);
				tv0->AddReply(538860, 40799, 40794);
				return;
			}
			if (a0 == 40799) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(538865);
				tv0->ClearReplies();
				tv0->AddReply(538866, 40802, 40801);
				return;
			}
			if (a0 == 40796) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(538862);
				tv0->ClearReplies();
				tv0->AddReply(538864, 40802, 40798);
				tv0->AddReply(538863, -1, 40797);
				return;
			}
			if (a0 == 40802) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(538867);
				tv0->ClearReplies();
				tv0->AddReply(538868, 40806, 40804);
				tv0->AddReply(538869, 40806, 40805);
				return;
			}
			if (a0 == 40806) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(538870);
				tv0->ClearReplies();
				tv0->AddReply(538871, -1, 40808);
				tv0->AddReply(538872, -1, 40809);
				return;
			}
			if (a0 == 15047) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513820);
				tv0->ClearReplies();
				tv0->AddReply(513821, 15049, 15048);
				tv0->AddReply(513839, 15067, 15066);
				return;
			}
			if (a0 == 15067) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513840);
				tv0->ClearReplies();
				tv0->AddReply(513841, 15057, 15068);
				return;
			}
			if (a0 == 15049) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513822);
				tv0->ClearReplies();
				tv0->AddReply(513823, 15051, 15050);
				tv0->AddReply(513842, 15070, 15069);
				return;
			}
			if (a0 == 15070) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513843);
				tv0->ClearReplies();
				tv0->AddReply(513844, 15072, 15071);
				return;
			}
			if (a0 == 15072) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513845);
				tv0->ClearReplies();
				tv0->AddReply(513846, 15074, 15073);
				tv0->AddReply(513849, 15077, 15076);
				return;
			}
			if (a0 == 15077) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513850);
				tv0->ClearReplies();
				tv0->AddReply(513851, -1, 15078);
				return;
			}
			if (a0 == 15074) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513847);
				tv0->ClearReplies();
				tv0->AddReply(513848, -1, 15075);
				return;
			}
			if (a0 == 15051) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513824);
				tv0->ClearReplies();
				tv0->AddReply(513827, 15055, 15054);
				tv0->AddReply(513825, 15053, 15052);
				return;
			}
			if (a0 == 15053) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513826);
				tv0->ClearReplies();
				tv0->AddReply(529820, 15057, 31268);
				return;
			}
			if (a0 == 15055) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513828);
				tv0->ClearReplies();
				tv0->AddReply(513829, 15057, 15056);
				return;
			}
			if (a0 == 15057) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513830);
				tv0->ClearReplies();
				tv0->AddReply(513831, 15059, 15058);
				tv0->AddReply(513838, -1, 15065);
				return;
			}
			if (a0 == 15059) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513832);
				tv0->ClearReplies();
				tv0->AddReply(513833, 15061, 15060);
				return;
			}
			if (a0 == 15061) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513834);
				tv0->ClearReplies();
				tv0->AddReply(513835, 15063, 15062);
				return;
			}
			if (a0 == 15063) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513836);
				tv0->ClearReplies();
				tv0->AddReply(513837, -1, 15064);
				return;
			}
			if (a0 == 15080) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513853);
				tv0->ClearReplies();
				tv0->AddReply(513854, 15082, 15081);
				tv0->AddReply(538731, -1, 40641);
				return;
			}
			if (a0 == 15082) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513855);
				tv0->ClearReplies();
				tv0->AddReply(513856, 40636, 15083);
				tv0->AddReply(513857, 15085, 15084);
				tv0->AddReply(538732, 15085, 40642);
				return;
			}
			if (a0 == 15085) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513858);
				tv0->ClearReplies();
				tv0->AddReply(513859, 15090, 15086);
				tv0->AddReply(513860, 15088, 15087);
				return;
			}
			if (a0 == 15088) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513861);
				tv0->ClearReplies();
				tv0->AddReply(513862, 15090, 15089);
				tv0->AddReply(513864, 40636, 15091);
				return;
			}
			if (a0 == 15090) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513863);
				tv0->ClearReplies();
				tv0->AddReply(529821, 40636, 31270);
				return;
			}
			if (a0 == 40636) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(538728);
				tv0->ClearReplies();
				tv0->AddReply(538729, -1, 40637);
				tv0->AddReply(538730, -1, 40638);
				return;
			}
			if (a0 == 15093) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513866);
				tv0->ClearReplies();
				tv0->AddReply(513867, 15095, 15094);
				return;
			}
			if (a0 == 15095) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513868);
				tv0->ClearReplies();
				tv0->AddReply(513869, 15097, 15096);
				tv0->AddReply(513876, 15104, 15103);
				return;
			}
			if (a0 == 15104) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513877);
				tv0->ClearReplies();
				tv0->AddReply(513878, -1, 15105);
				tv0->AddReply(513879, -1, 15106);
				return;
			}
			if (a0 == 15097) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513870);
				tv0->ClearReplies();
				tv0->AddReply(513871, -1, 15098);
				tv0->AddReply(513872, 15100, 15099);
				return;
			}
			if (a0 == 15100) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513873);
				tv0->ClearReplies();
				tv0->AddReply(513874, -1, 15101);
				tv0->AddReply(513875, -1, 15102);
				return;
			}
			if (a0 == 15042) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513816);
				tv0->ClearReplies();
				tv0->AddReply(513817, 15030, 15043);
				return;
			}
			if (a0 == 15030) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513804);
				tv0->ClearReplies();
				tv0->AddReply(513805, 15032, 15031);
				tv0->AddReply(538722, 15036, 40627);
				return;
			}
			if (a0 == 15032) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513806);
				tv0->ClearReplies();
				tv0->AddReply(513807, 15034, 15033);
				tv0->AddReply(538723, 40630, 40629);
				return;
			}
			if (a0 == 40630) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(538724);
				tv0->ClearReplies();
				tv0->AddReply(538725, 15036, 40631);
				tv0->AddReply(538726, 15036, 40632);
				return;
			}
			if (a0 == 15034) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513808);
				tv0->ClearReplies();
				tv0->AddReply(513809, 15036, 15035);
				return;
			}
			if (a0 == 15036) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513810);
				tv0->ClearReplies();
				tv0->AddReply(513811, 15038, 15037);
				tv0->AddReply(513814, -1, 15040);
				return;
			}
			if (a0 == 15038) {
				f_107c_a1_v("Neutral");
				tv0->SetMessage(513812);
				tv0->ClearReplies();
				tv0->AddReply(513813, -1, 15039);
				tv0->AddReply(538727, -1, 40635);
				return;
			}
			tv3 = true;
			if (f_1b61_a0_b()) {
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
		f_19fb_a1_b(f_1aa8_a0_o());
		if (!f_19a6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1b5b_a0_i());
		L0->SetNPCDescription(f_1b59_a0_i());
		L0->SetPhoto(f_1b5d_a0_s());
		L0->SetPhoto2(f_1b5f_a0_s());
		L0->SetPlayerName(f_20d4_a0_i());
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
		f_19ea_a1_v(a0);
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
			if (f_1ed2_a1_b(tv1)) {
				f_1da6_a2_v(tv1, tv0);
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514194);
				tv0->ClearReplies();
				tv0->AddReply(514195, 15410, 15409);
				break;
			}
			if (f_1ec6_a1_b(tv1)) {
				f_1d1f_a2_v(tv1, tv0);
				f_158a_a1_v("Neutral");
				tv0->SetMessage(534475);
				tv0->ClearReplies();
				tv0->AddReply(536564, 38380, 38379);
				tv0->AddReply(536570, 38380, 38385);
				break;
			}
			f_158a_a1_v("Neutral");
			tv0->SetMessage(514222);
			tv0->ClearReplies();
			if (f_1ede_a1_b(tv1) && f_1e00_a1_b(tv1)) {
				tv0->AddReply(514223, 15442, 15441);
			}
			if (f_1df4_a1_b(tv1)) {
				tv0->AddReply(514234, 15453, 15452);
			}
			tv0->AddReply(514239, -1, 15457);
			break;
			return;
		}
		if (f_1b61_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1a85_a1_v(tv2);
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

	void f_158a_a1_v(string a0)
	{
		if (!f_1b61_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1a8c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1aa1_a0_v();
			if (a1 == 15421) {
				f_1d25_a2_v(tv1, tv0);
			}
			if (a1 == 15422) {
				f_1d25_a2_v(tv1, tv0);
			}
			if (a1 == 36123) {
				f_1bac_a2_v(tv1, tv0);
				f_1b97_a2_v(tv1, tv0);
				f_1b69_a2_v(tv1, tv0);
			}
			if (a1 == 15451) {
				f_1d3b_a2_v(tv1, tv0);
				f_1c2f_a2_v(tv1, tv0);
				f_1c3b_a2_v(tv1, tv0);
			}
			if (a1 == 15452) {
				f_1c29_a2_v(tv1, tv0);
			}
			if (a0 == 15408) {
				if (f_1ed2_a1_b(tv1)) {
					f_1da6_a2_v(tv1, tv0);
					f_158a_a1_v("Neutral");
					tv0->SetMessage(514194);
					tv0->ClearReplies();
					tv0->AddReply(514195, 15410, 15409);
					return;
				}
				if (f_1ec6_a1_b(tv1)) {
					f_1d1f_a2_v(tv1, tv0);
					f_158a_a1_v("Neutral");
					tv0->SetMessage(534475);
					tv0->ClearReplies();
					tv0->AddReply(536564, 38380, 38379);
					tv0->AddReply(536570, 38380, 38385);
					return;
				}
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514222);
				tv0->ClearReplies();
				if (f_1ede_a1_b(tv1) && f_1e00_a1_b(tv1)) {
					tv0->AddReply(514223, 15442, 15441);
				}
				if (f_1df4_a1_b(tv1)) {
					tv0->AddReply(514234, 15453, 15452);
				}
				tv0->AddReply(514239, -1, 15457);
				return;
			}
			if (a0 == 15453) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514235);
				tv0->ClearReplies();
				tv0->AddReply(514236, 15455, 15454);
				return;
			}
			if (a0 == 15455) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514237);
				tv0->ClearReplies();
				tv0->AddReply(514238, -1, 15456);
				return;
			}
			if (a0 == 15442) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514224);
				tv0->ClearReplies();
				tv0->AddReply(514225, 15444, 15443);
				tv0->AddReply(536562, 15444, 38375);
				return;
			}
			if (a0 == 15444) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514226);
				tv0->ClearReplies();
				tv0->AddReply(514227, 15446, 15445);
				tv0->AddReply(536563, 15448, 38377);
				return;
			}
			if (a0 == 15446) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514228);
				tv0->ClearReplies();
				tv0->AddReply(514229, 15448, 15447);
				return;
			}
			if (a0 == 15448) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514230);
				tv0->ClearReplies();
				tv0->AddReply(514231, 15450, 15449);
				tv0->AddReply(536561, 15450, 38373);
				return;
			}
			if (a0 == 15450) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514232);
				tv0->ClearReplies();
				tv0->AddReply(514233, -1, 15451);
				return;
			}
			if (a0 == 38380) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(536565);
				tv0->ClearReplies();
				tv0->AddReply(536571, 38388, 38387);
				tv0->AddReply(536566, 38388, 38381);
				return;
			}
			if (a0 == 38388) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(536572);
				tv0->ClearReplies();
				tv0->AddReply(536573, 38391, 38389);
				tv0->AddReply(536576, 38395, 38393);
				return;
			}
			if (a0 == 38391) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(536574);
				tv0->ClearReplies();
				tv0->AddReply(536575, 38382, 38392);
				tv0->AddReply(536577, 38395, 38394);
				return;
			}
			if (a0 == 38395) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(536578);
				tv0->ClearReplies();
				tv0->AddReply(536579, 38382, 38397);
				tv0->AddReply(536580, 38382, 38398);
				return;
			}
			if (a0 == 38382) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(536567);
				tv0->ClearReplies();
				tv0->AddReply(536568, 38384, 38383);
				tv0->AddReply(534476, 36122, 36121);
				return;
			}
			if (a0 == 36122) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(534477);
				tv0->ClearReplies();
				tv0->AddReply(536582, 38404, 38403);
				return;
			}
			if (a0 == 38404) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(536583);
				tv0->ClearReplies();
				tv0->AddReply(536584, 38406, 38405);
				tv0->AddReply(536586, 38406, 38407);
				return;
			}
			if (a0 == 38406) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(536585);
				tv0->ClearReplies();
				tv0->AddReply(534478, -1, 36123);
				tv0->AddReply(534479, -1, 36124);
				return;
			}
			if (a0 == 38384) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(536569);
				tv0->ClearReplies();
				tv0->AddReply(536581, 36122, 38401);
				return;
			}
			if (a0 == 15410) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514196);
				tv0->ClearReplies();
				tv0->AddReply(514197, 15412, 15411);
				tv0->AddReply(514218, 15412, 15435);
				tv0->AddReply(514219, 15438, 15437);
				return;
			}
			if (a0 == 15438) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514220);
				tv0->ClearReplies();
				tv0->AddReply(514221, 15412, 15439);
				return;
			}
			if (a0 == 15412) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514198);
				tv0->ClearReplies();
				tv0->AddReply(514199, 15414, 15413);
				tv0->AddReply(514212, 15428, 15427);
				return;
			}
			if (a0 == 15428) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514213);
				tv0->ClearReplies();
				tv0->AddReply(514214, 15430, 15429);
				tv0->AddReply(514217, 15430, 15433);
				return;
			}
			if (a0 == 15430) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514215);
				tv0->ClearReplies();
				tv0->AddReply(514216, 15420, 15431);
				return;
			}
			if (a0 == 15414) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514200);
				tv0->ClearReplies();
				tv0->AddReply(514201, 15416, 15415);
				return;
			}
			if (a0 == 15416) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514202);
				tv0->ClearReplies();
				tv0->AddReply(514203, 15418, 15417);
				tv0->AddReply(514209, 15424, 15423);
				return;
			}
			if (a0 == 15424) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514210);
				tv0->ClearReplies();
				tv0->AddReply(514211, 15418, 15425);
				return;
			}
			if (a0 == 15418) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514204);
				tv0->ClearReplies();
				tv0->AddReply(514205, 15420, 15419);
				tv0->AddReply(514208, -1, 15422);
				return;
			}
			if (a0 == 15420) {
				f_158a_a1_v("Neutral");
				tv0->SetMessage(514206);
				tv0->ClearReplies();
				tv0->AddReply(514207, -1, 15421);
				return;
			}
			tv3 = true;
			if (f_1b61_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t13
{
	var Vector tv0;

	void init(void)
	{
		f_187d_a0_v();
	}

	void f_187d_a0_v(void)
	{
		if (!f_19a1_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_1933_a0_v();
		}
	}

	bool f_1891_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1998_a1_b(L0);
	}

	void f_18a0_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_18a5_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_197f_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_18bb_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_18c4_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_18c4_a0_v();
			if (f_19a1_a0_b() && f_18a5_a0_b()) {
				if (f_1891_a0_b()) {
					f_1a35_a1_b(f_1aa8_a0_o());
				}
			} else {
				f_18a0_a0_v();
				f_18bb_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_197a_a0_v();
		f_18c4_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_18c4_a0_v();
		f_1a85_a1_v("Neutral");
		f_18bb_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_18bb_a0_v();
		} else {
			f_1a85_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_197a_a0_v();
			f_1998_a1_b(a0);
			enable OnUse;
			f_20e5_a1_v(a0);
			f_1a85_a1_v("Neutral");
			f_18c4_a0_v();
			f_18bb_a0_v();
		}
	}
}

void f_1933_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_19a1_a0_b()) {
		return;
	}
	L0 = f_1b48_a0_i();
	for (L1 = 0; L1 < 5 && f_19a1_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1b41_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1978_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1978_a0_b(void)
{
	return true;
}

void f_197a_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_197f_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_1987_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_198e_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1998_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_198e_a1_b(L0);
}

bool f_19a1_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_19a6_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1aae_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_1b61_a0_b()) {
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

void f_19ea_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_1b61_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_19fb_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1a35_a1_b(a0)) {
			if (!f_1a5a_a1_b(a0)) {
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
		if (!f_1a5a_a1_b(a0)) {
			if (!f_1a35_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1a35_a1_b(object a0)
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
	return f_1a92_a1_b(L4);
}

bool f_1a5a_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1b1f_a0_i() + "m";
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
	return f_1a92_a1_b(L4);
}

void f_1a85_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1a8c_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_1a92_a1_b(string a0)
{
	if (f_1b61_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1aa1_a0_v(void)
{
	if (f_1b61_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1aa8_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1aae_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1ab8_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1abd_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_1ac8_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1ad4_a2_v(object a0, int a1)
{
	f_1987_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1ac8_a2_v(L0, a1);
	}
}

void f_1ae7_a3_v(object a0, object a1, int a2)
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
		f_1ac8_a2_v(L0, a2);
	}
}

void f_1afa_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1ae7_a3_v(a0, L0, a2);
}

bool f_1b07_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_1b0e_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1b1a_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1b1f_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1b28_a1_b(int a0)
{
	return f_1b1f_a0_i() == a0;
}

bool f_1b2e_a1_b(int a0)
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

string f_1b41_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1b48_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1b41_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1b59_a0_i(void)
{
	return 515527;
}

int f_1b5b_a0_i(void)
{
	return 513334;
}

string f_1b5d_a0_s(void)
{
	return "ui/NPC_Aglaja.png";
}

string f_1b5f_a0_s(void)
{
	return "ui/NPC_Aglaja_b.png";
}

bool f_1b61_a0_b(void)
{
	return true;
}

void f_1b63_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1b69_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1b6f_a2_v(object a0, object a1)
{
	@Trace("money 7000 is given");
	f_1ad4_a2_v(a0, 7000);
}

void f_1b79_a2_v(object a0, object a1)
{
	@SetVariable("d7q03", 1);
	f_2011_a0_v();
	f_201e_a0_v();
	f_1abd_a1_o("quest_d7_03");
}

void f_1b89_a2_v(object a0, object a1)
{
	@SetVariable("d7q03", 4);
	f_202b_a0_v();
	f_1b0e_a2_b("quest_d7_03", "init_house_petr");
}

void f_1b97_a2_v(object a0, object a1)
{
	@Trace("burah_serum is given");
	f_1afa_a3_v(a0, "burah_serum", 1);
}

void f_1ba2_a2_v(object a0, object a1)
{
	f_1f82_a0_v();
	f_1b0e_a2_b("quest_d10_02", "completed");
}

void f_1bac_a2_v(object a0, object a1)
{
	@SetVariable("d11q05", 1);
	f_1fb6_a0_v();
	f_1fc3_a0_v();
	f_1abd_a1_o("quest_d11_05");
}

void f_1bbc_a2_v(object a0, object a1)
{
	@SetVariable("ood8Aglaja3", 1);
}

void f_1bc2_a2_v(object a0, object a1)
{
	@SetVariable("d8AglajaVisit", 1);
}

void f_1bc8_a2_v(object a0, object a1)
{
	@SetVariable("d10AglajaVisit", 1);
}

void f_1bce_a2_v(object a0, object a1)
{
	@SetVariable("ood9Aglaja6", 1);
}

void f_1bd4_a2_v(object a0, object a1)
{
	@SetVariable("d9AglajaVisit", 1);
}

void f_1bda_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d9q05", 1);
	L0 = f_20a2_a0_o();
	L0->AddMark("d9q05AglajaGotoBurah", "pt_map_mat", 0, 515304, f_1b1a_a0_f());
	f_2052_a0_v();
	f_205f_a0_v();
	f_1abd_a1_o("quest_d9_05");
}

void f_1bf8_a2_v(object a0, object a1)
{
	f_206c_a0_v();
	f_1b0e_a2_b("quest_d9_05", "completed");
}

void f_1c02_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "d10q01_blueprint", 1);
}

void f_1c08_a2_v(object a0, object a1)
{
	if (f_1ab8_a1_i("map_chertez_state") <= 1) {
		@SetVariable("map_chertez_state", 1);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_1c19_a2_v(object a0, object a1)
{
	f_20b3_a3_v(f_20a2_a0_o(), "pt_map_aglaja", -1);
	a1->ShowMap(f_20a2_a0_o());
}

void f_1c29_a2_v(object a0, object a1)
{
	@SetVariable("ood11Aglaja2", 1);
}

void f_1c2f_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "d11q01_blueprint", 1);
}

void f_1c35_a2_v(object a0, object a1)
{
	@SetVariable("ood12AglajaNight1", 1);
}

void f_1c3b_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1c41_a2_v(object a0, object a1)
{
	@Trace("money 5000 is given");
	f_1ad4_a2_v(a0, 5000);
}

void f_1c4b_a2_v(object a0, object a1)
{
	@SetVariable("ood7Aglaja2", 1);
}

void f_1c51_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d7q01", 1);
	L0 = f_20a2_a0_o();
	L0->AddMark("d7q01AglajaGotoBirdmaskSelf", "pt_map_aglaja", 1, 515410, f_1b1a_a0_f());
	L0->AddMark("d7q01BirdmaskD", "pt_map_d7q01_dbirdmask", 1, 515408, f_1b1a_a0_f());
	L0->AddMark("d7q01BirdmaskM", "pt_map_d7q01_mbirdmask", 1, 515409, f_1b1a_a0_f());
	L0->AddMark("d7q01BirdmaskU", "pt_map_d7q01_ubirdmask", 1, 515407, f_1b1a_a0_f());
	f_1fd0_a0_v();
	f_1fdd_a0_v();
	f_1b0e_a2_b("quest_d7_01", "place_birdmasks");
}

void f_1c8b_a2_v(object a0, object a1)
{
	@SetVariable("ood7Aglaja3", 1);
}

void f_1c91_a2_v(object a0, object a1)
{
	object L0;
	int L1;
	@SetVariable("d7q01", 2);
	L0 = f_20a2_a0_o();
	L0->AddMark("d7q01AglajaFindLierSelf", "pt_map_aglaja", 1, 515411, f_1b1a_a0_f());
	f_1ff7_a0_v();
	a0->RemoveItemByType(L1, "d7q01_mreport", 1);
	a0->RemoveItemByType(L1, "d7q01_dreport", 1);
	a0->RemoveItemByType(L1, "d7q01_ureport", 1);
}

void f_1cb4_a2_v(object a0, object a1)
{
	@SetVariable("ood7Aglaja4", 1);
}

void f_1cba_a2_v(object a0, object a1)
{
	@SetVariable("ood7Aglaja5", 1);
}

void f_1cc0_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_20a2_a0_o();
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
	f_1fea_a0_v();
	f_1b0e_a2_b("quest_d7_01", "completed");
}

void f_1cf3_a2_v(object a0, object a1)
{
	@SetVariable("d7q02", 3);
	f_2004_a0_v();
}

void f_1cfc_a2_v(object a0, object a1)
{
	@SetVariable("d8q01", 1);
	f_2038_a0_v();
	f_2045_a0_v();
	f_1b0e_a2_b("quest_d8_01", "block_well");
}

void f_1d0d_a2_v(object a0, object a1)
{
	@SetVariable("ood8Aglaja1", 1);
}

void f_1d13_a2_v(object a0, object a1)
{
	@SetVariable("ood8Aglaja2", 1);
}

void f_1d19_a2_v(object a0, object a1)
{
	@SetVariable("d8KainIsReason", 1);
}

void f_1d1f_a2_v(object a0, object a1)
{
	@SetVariable("ood11Aglaja1", 1);
}

void f_1d25_a2_v(object a0, object a1)
{
	@SetVariable("d11q01", 1);
	f_1f8f_a0_v();
	f_1f9c_a0_v();
	f_1b0e_a2_b("quest_d11_01", "init_girl");
	f_1b0e_a2_b("quest_d11_01", "remove_andrei");
}

void f_1d3b_a2_v(object a0, object a1)
{
	f_1fa9_a0_v();
	f_1b0e_a2_b("quest_d11_01", "completed");
}

void f_1d45_a2_v(object a0, object a1)
{
	@SetVariable("ood9Aglaja1", 1);
}

void f_1d4b_a2_v(object a0, object a1)
{
	@SetVariable("ood9Aglaja2", 1);
}

void f_1d51_a2_v(object a0, object a1)
{
	@SetVariable("ood9Aglaja4", 1);
}

void f_1d57_a2_v(object a0, object a1)
{
	@SetVariable("ood9Aglaja5", 1);
}

void f_1d5d_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d10q01", 1);
	L0 = f_20a2_a0_o();
	L0->AddMark("d10q01AglajaGotoPetr", "pt_map_petr", 1, 515451, f_1b1a_a0_f());
	f_1f5b_a0_v();
	f_1f68_a0_v();
	f_1b0e_a2_b("quest_d10_01", "init_house");
}

void f_1d7c_a2_v(object a0, object a1)
{
	@SetVariable("ood10Aglaja1", 1);
}

void f_1d82_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_20a2_a0_o();
	L0->FindMark(L1, "d10q01AglajaGotoPetr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d10q02KaterinaGotoRubin");
	if (L1) {
		L1->Remove();
	}
	f_1f75_a0_v();
	f_1b0e_a2_b("quest_d10_01", "completed");
}

void f_1da0_a2_v(object a0, object a1)
{
	@SetVariable("ood10Aglaja2", 1);
}

void f_1da6_a2_v(object a0, object a1)
{
	@SetVariable("d11AglajaVisit", 1);
}

bool f_1dac_a1_b(object a0)
{
	if (f_1ab8_a1_i("d7q03") == 3) {
		return true;
	}
	return false;
}

bool f_1db8_a1_b(object a0)
{
	if (f_1ab8_a1_i("d10q02") == 4) {
		return true;
	}
	return false;
}

bool f_1dc4_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood8Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_1dd0_a1_b(object a0)
{
	if (f_1ab8_a1_i("d9q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1ddc_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood9Aglaja6") == 0) {
		return true;
	}
	return false;
}

bool f_1de8_a1_b(object a0)
{
	if (f_1ab8_a1_i("d9q05") == 2) {
		return true;
	}
	return false;
}

bool f_1df4_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood11Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_1e00_a1_b(object a0)
{
	if (f_1b07_a2_b(a0, "d11q01_blueprint")) {
		return true;
	}
	return false;
}

bool f_1e0b_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood12AglajaNight1") == 0) {
		return true;
	}
	return false;
}

bool f_1e17_a1_b(object a0)
{
	if (f_1ab8_a1_i("d7q01") == 0) {
		return true;
	}
	return false;
}

bool f_1e23_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood7Aglaja3") == 0) {
		return true;
	}
	return false;
}

bool f_1e2f_a1_b(object a0)
{
	if (f_1ab8_a1_i("d7q01") == 1) {
		return true;
	}
	return false;
}

bool f_1e3b_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood7Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_1e47_a1_b(object a0)
{
	if (f_1b07_a2_b(a0, "d7q01_dreport") && f_1b07_a2_b(a0, "d7q01_mreport") && f_1b07_a2_b(a0, "d7q01_ureport")) {
		return true;
	}
	return false;
}

bool f_1e66_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood7Aglaja5") == 0) {
		return true;
	}
	return false;
}

bool f_1e72_a1_b(object a0)
{
	if (f_1ab8_a1_i("d7q01") == 3) {
		return true;
	}
	return false;
}

bool f_1e7e_a1_b(object a0)
{
	if (f_1ab8_a1_i("d7q02") == 2) {
		return true;
	}
	return false;
}

bool f_1e8a_a1_b(object a0)
{
	if (f_1ab8_a1_i("d8q01") == 0) {
		return true;
	}
	return false;
}

bool f_1e96_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood8Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1ea2_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood8Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_1eae_a1_b(object a0)
{
	if (f_1ab8_a1_i("d8TermitnikLoad") != 0) {
		return true;
	}
	return false;
}

bool f_1eba_a1_b(object a0)
{
	if (f_1ab8_a1_i("d9TalkToPolkovodec") != 0) {
		return true;
	}
	return false;
}

bool f_1ec6_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood11Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1ed2_a1_b(object a0)
{
	if (f_1ab8_a1_i("d11q01") == 0) {
		return true;
	}
	return false;
}

bool f_1ede_a1_b(object a0)
{
	if (f_1ab8_a1_i("d11q01") == 4) {
		return true;
	}
	return false;
}

bool f_1eea_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood9Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1ef6_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood9Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_1f02_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood9Aglaja4") == 0) {
		return true;
	}
	return false;
}

bool f_1f0e_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood9Aglaja5") == 0) {
		return true;
	}
	return false;
}

bool f_1f1a_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood10Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1f26_a1_b(object a0)
{
	if (f_1ab8_a1_i("d10q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1f32_a1_b(object a0)
{
	if (f_1ab8_a1_i("ood10Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_1f3e_a1_b(object a0)
{
	if (f_1ab8_a1_i("d10q01") == 3) {
		return true;
	}
	return false;
}

bool f_1f4a_a1_b(object a0)
{
	if (f_1f54_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1f54_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "d10q01_blueprint");
	return L0 != 0;
}

void f_1f5b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 186, 1, 515449);
	f_2086_a2_b(L0, -1);
}

void f_1f68_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 187, 1, 515450);
	f_2086_a2_b(L0, 186);
}

void f_1f75_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 191, 1, 515476);
	f_2086_a2_b(L0, 186);
}

void f_1f82_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 671, 2, 534125);
	f_2086_a2_b(L0, 666);
}

void f_1f8f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 192, 1, 515477);
	f_2086_a2_b(L0, -1);
}

void f_1f9c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 193, 1, 515478);
	f_2086_a2_b(L0, 192);
}

void f_1fa9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 196, 1, 515481);
	f_2086_a2_b(L0, 192);
}

void f_1fb6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 682, 2, 534497);
	f_2086_a2_b(L0, -1);
}

void f_1fc3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 683, 2, 534498);
	f_2086_a2_b(L0, 682);
}

void f_1fd0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 165, 1, 515412);
	f_2086_a2_b(L0, -1);
}

void f_1fdd_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 166, 1, 515413);
	f_2086_a2_b(L0, 165);
}

void f_1fea_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 168, 1, 515415);
	f_2086_a2_b(L0, 165);
}

void f_1ff7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 167, 1, 515414);
	f_2086_a2_b(L0, 165);
}

void f_2004_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 263, 2, 521049);
	f_2086_a2_b(L0, 170);
}

void f_2011_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 641, 2, 533275);
	f_2086_a2_b(L0, -1);
}

void f_201e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 642, 2, 533276);
	f_2086_a2_b(L0, 641);
}

void f_202b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 646, 2, 533280);
	f_2086_a2_b(L0, 641);
}

void f_2038_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 175, 1, 515434);
	f_2086_a2_b(L0, -1);
}

void f_2045_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 176, 1, 515435);
	f_2086_a2_b(L0, 175);
}

void f_2052_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 764, 2, 540061);
	f_2086_a2_b(L0, -1);
}

void f_205f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 765, 2, 540062);
	f_2086_a2_b(L0, 764);
}

void f_206c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 767, 2, 540064);
	f_2086_a2_b(L0, 764);
}

object f_2079_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2086_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2079_a0_o();
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

object f_20a2_a0_o(void)
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

void f_20b3_a3_v(object a0, string a1, float a2)
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

int f_20d4_a0_i(void)
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

void f_20e5_a1_v(object a0)
{
	if (f_1b2e_a1_b(12)) {
		t1{a0};
		return;
	}
	if (f_1b28_a1_b(7)) {
		t3{a0};
		return;
	}
	if (f_1b28_a1_b(8)) {
		t5{a0};
		return;
	}
	if (f_1b28_a1_b(9)) {
		t9{a0};
		return;
	}
	if (f_1b28_a1_b(10)) {
		t7{a0};
		return;
	}
	if (f_1b28_a1_b(11)) {
		t11{a0};
		return;
	}
}

