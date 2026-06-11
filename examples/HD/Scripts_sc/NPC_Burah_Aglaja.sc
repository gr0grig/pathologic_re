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
		if (!f_1086_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1221_a0_i());
		L0->SetNPCDescription(f_121f_a0_i());
		L0->SetPhoto(f_1223_a0_s());
		L0->SetPhoto2(f_1225_a0_s());
		L0->SetPlayerName(f_14c9_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10dd_a1_b(f_119c_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10cb_a1_v(a0);
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
			if (f_13dc_a1_b(tv1)) {
				f_12b_a1_v("Threat");
				tv0->SetMessage(521012);
				tv0->ClearReplies();
				tv0->AddReply(530692, 29681, 31984);
				tv0->AddReply(528310, -1, 29680);
				break;
			}
			if (f_12f0_a1_b(tv1) && f_12fc_a1_b(tv1) && f_13e8_a1_b(tv1)) {
				f_1274_a2_v(tv1, tv0);
				f_12b_a1_v("Neutral");
				tv0->SetMessage(521347);
				tv0->ClearReplies();
				tv0->AddReply(530713, 32015, 32014);
				tv0->AddReply(530721, 32015, 32022);
				break;
			}
			f_12b_a1_v("Neutral");
			tv0->SetMessage(521014);
			tv0->ClearReplies();
			if (f_13e8_a1_b(tv1) && f_13f3_a1_b(tv1)) {
				tv0->AddReply(521043, 22240, 22239);
			}
			if (f_1308_a1_b(tv1) && f_13d2_a1_b(tv1) && !f_1320_a1_b(tv1) || f_1314_a1_b(tv1) && !f_1320_a1_b(tv1)) {
				tv0->AddReply(521348, 22536, 22535);
			}
			if (f_1308_a1_b(tv1) && !f_13d2_a1_b(tv1)) {
				tv0->AddReply(521360, 22548, 22547);
			}
			tv0->AddReply(521015, -1, 22228);
			tv0->AddReply(528324, -1, 29694);
			break;
			return;
		}
		if (f_1227_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1167_a1_v(tv2);
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
		if (!f_1227_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1177_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1195_a0_v();
			if (a1 == 22226) {
				f_1230_a2_v(tv1, tv0);
				f_1229_a2_v(tv1, tv0);
				f_12be_a2_v(tv1, tv0);
				f_12e0_a2_v(tv1, tv0);
			}
			if (a1 == 22533) {
				f_1251_a2_v(tv1, tv0);
			}
			if (a1 == 22241) {
				f_1247_a2_v(tv1, tv0);
				f_12cf_a2_v(tv1, tv0);
				f_12e0_a2_v(tv1, tv0);
			}
			if (a1 == 32055) {
				f_1247_a2_v(tv1, tv0);
				f_12cf_a2_v(tv1, tv0);
				f_12e0_a2_v(tv1, tv0);
			}
			if (a1 == 22537) {
				f_127a_a2_v(tv1, tv0);
			}
			if (a1 == 32066) {
				f_127a_a2_v(tv1, tv0);
			}
			if (a0 == 22225) {
				if (f_13dc_a1_b(tv1)) {
					f_12b_a1_v("Threat");
					tv0->SetMessage(521012);
					tv0->ClearReplies();
					tv0->AddReply(530692, 29681, 31984);
					tv0->AddReply(528310, -1, 29680);
					return;
				}
				if (f_12f0_a1_b(tv1) && f_12fc_a1_b(tv1) && f_13e8_a1_b(tv1)) {
					f_1274_a2_v(tv1, tv0);
					f_12b_a1_v("Neutral");
					tv0->SetMessage(521347);
					tv0->ClearReplies();
					tv0->AddReply(530713, 32015, 32014);
					tv0->AddReply(530721, 32015, 32022);
					return;
				}
				f_12b_a1_v("Neutral");
				tv0->SetMessage(521014);
				tv0->ClearReplies();
				if (f_13e8_a1_b(tv1) && f_13f3_a1_b(tv1)) {
					tv0->AddReply(521043, 22240, 22239);
				}
				if (f_1308_a1_b(tv1) && f_13d2_a1_b(tv1) && !f_1320_a1_b(tv1) || f_1314_a1_b(tv1) && !f_1320_a1_b(tv1)) {
					tv0->AddReply(521348, 22536, 22535);
				}
				if (f_1308_a1_b(tv1) && !f_13d2_a1_b(tv1)) {
					tv0->AddReply(521360, 22548, 22547);
				}
				tv0->AddReply(521015, -1, 22228);
				tv0->AddReply(528324, -1, 29694);
				return;
			}
			if (a0 == 22548) {
				f_12b_a1_v("Threat");
				tv0->SetMessage(521361);
				tv0->ClearReplies();
				tv0->AddReply(521362, 32067, 22549);
				tv0->AddReply(530760, 32069, 32068);
				return;
			}
			if (a0 == 32067) {
				f_12b_a1_v("Threat");
				tv0->SetMessage(530759);
				tv0->ClearReplies();
				tv0->AddReply(530762, 32069, 32070);
				tv0->AddReply(530763, 32069, 32071);
				return;
			}
			if (a0 == 32069) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(530761);
				tv0->ClearReplies();
				tv0->AddReply(530764, -1, 32074);
				tv0->AddReply(530765, -1, 32075);
				return;
			}
			if (a0 == 22536) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(521349);
				tv0->ClearReplies();
				tv0->AddReply(530749, 32057, 32056);
				return;
			}
			if (a0 == 32057) {
				f_12b_a1_v("Isee");
				tv0->SetMessage(530750);
				tv0->ClearReplies();
				tv0->AddReply(530751, 32062, 32058);
				tv0->AddReply(530752, 32060, 32059);
				return;
			}
			if (a0 == 32062) {
				f_12b_a1_v("Isee");
				tv0->SetMessage(530754);
				tv0->ClearReplies();
				tv0->AddReply(530755, 32060, 32063);
				tv0->AddReply(530756, 32065, 32064);
				return;
			}
			if (a0 == 32065) {
				f_12b_a1_v("Threat");
				tv0->SetMessage(530757);
				tv0->ClearReplies();
				tv0->AddReply(530758, -1, 32066);
				return;
			}
			if (a0 == 32060) {
				f_12b_a1_v("Threat");
				tv0->SetMessage(530753);
				tv0->ClearReplies();
				tv0->AddReply(521350, -1, 22537);
				return;
			}
			if (a0 == 22240) {
				f_12b_a1_v("Isee");
				tv0->SetMessage(521044);
				tv0->ClearReplies();
				tv0->AddReply(530731, 32036, 32035);
				return;
			}
			if (a0 == 32036) {
				f_12b_a1_v("Isee");
				tv0->SetMessage(530732);
				tv0->ClearReplies();
				tv0->AddReply(530733, 32038, 32037);
				tv0->AddReply(530741, 32046, 32045);
				return;
			}
			if (a0 == 32046) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(530742);
				tv0->ClearReplies();
				tv0->AddReply(530743, 32048, 32047);
				tv0->AddReply(530745, 32048, 32049);
				return;
			}
			if (a0 == 32048) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(530744);
				tv0->ClearReplies();
				tv0->AddReply(530746, 32038, 32051);
				tv0->AddReply(530747, 32038, 32052);
				return;
			}
			if (a0 == 32038) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(530734);
				tv0->ClearReplies();
				tv0->AddReply(530735, 32041, 32039);
				return;
			}
			if (a0 == 32041) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(530737);
				tv0->ClearReplies();
				tv0->AddReply(530738, 32043, 32042);
				return;
			}
			if (a0 == 32043) {
				f_12b_a1_v("Isee");
				tv0->SetMessage(530739);
				tv0->ClearReplies();
				tv0->AddReply(530740, 32040, 32044);
				return;
			}
			if (a0 == 32040) {
				f_12b_a1_v("Isee");
				tv0->SetMessage(530736);
				tv0->ClearReplies();
				tv0->AddReply(521045, -1, 22241);
				tv0->AddReply(530748, -1, 32055);
				return;
			}
			if (a0 == 32015) {
				f_12b_a1_v("Isee");
				tv0->SetMessage(530714);
				tv0->ClearReplies();
				tv0->AddReply(530722, 32024, 32023);
				tv0->AddReply(530715, 32017, 32016);
				return;
			}
			if (a0 == 32024) {
				f_12b_a1_v("Isee");
				tv0->SetMessage(530723);
				tv0->ClearReplies();
				tv0->AddReply(530724, 32026, 32025);
				return;
			}
			if (a0 == 32026) {
				f_12b_a1_v("Threat");
				tv0->SetMessage(530725);
				tv0->ClearReplies();
				tv0->AddReply(530726, 32029, 32027);
				return;
			}
			if (a0 == 32029) {
				f_12b_a1_v("Threat");
				tv0->SetMessage(530728);
				tv0->ClearReplies();
				tv0->AddReply(530729, 32017, 32030);
				tv0->AddReply(530730, -1, 32031);
				return;
			}
			if (a0 == 32017) {
				f_12b_a1_v("Threat");
				tv0->SetMessage(530716);
				tv0->ClearReplies();
				tv0->AddReply(530717, 32019, 32018);
				return;
			}
			if (a0 == 32019) {
				f_12b_a1_v("Neutral");
				tv0->SetMessage(530718);
				tv0->ClearReplies();
				tv0->AddReply(521346, -1, 22533);
				return;
			}
			if (a0 == 29681) {
				f_12b_a1_v("Threat");
				tv0->SetMessage(528311);
				tv0->ClearReplies();
				tv0->AddReply(528312, 29683, 29682);
				tv0->AddReply(530693, 29683, 31985);
				return;
			}
			if (a0 == 29683) {
				f_12b_a1_v("Isee");
				tv0->SetMessage(528313);
				tv0->ClearReplies();
				tv0->AddReply(528314, 29685, 29684);
				tv0->AddReply(530694, 29685, 31986);
				return;
			}
			if (a0 == 29685) {
				f_12b_a1_v("Isee");
				tv0->SetMessage(528315);
				tv0->ClearReplies();
				tv0->AddReply(528316, 29687, 29686);
				tv0->AddReply(530695, 29687, 31988);
				return;
			}
			if (a0 == 29687) {
				f_12b_a1_v("Isee");
				tv0->SetMessage(528317);
				tv0->ClearReplies();
				tv0->AddReply(528318, 29689, 29688);
				tv0->AddReply(530696, 31991, 31990);
				return;
			}
			if (a0 == 31991) {
				f_12b_a1_v("Threat");
				tv0->SetMessage(530697);
				tv0->ClearReplies();
				tv0->AddReply(530698, 29689, 31992);
				return;
			}
			if (a0 == 29689) {
				f_12b_a1_v("Threat");
				tv0->SetMessage(528319);
				tv0->ClearReplies();
				tv0->AddReply(528320, 29691, 29690);
				tv0->AddReply(530699, 29691, 31995);
				return;
			}
			if (a0 == 29691) {
				f_12b_a1_v("Threat");
				tv0->SetMessage(528321);
				tv0->ClearReplies();
				tv0->AddReply(528322, 29693, 29692);
				tv0->AddReply(530704, 29693, 32001);
				return;
			}
			if (a0 == 29693) {
				f_12b_a1_v("Confusion");
				tv0->SetMessage(528323);
				tv0->ClearReplies();
				tv0->AddReply(530700, 31998, 31997);
				tv0->AddReply(530705, 31998, 32003);
				return;
			}
			if (a0 == 31998) {
				f_12b_a1_v("Confusion");
				tv0->SetMessage(530701);
				tv0->ClearReplies();
				tv0->AddReply(530702, 32000, 31999);
				tv0->AddReply(530710, 32000, 32008);
				return;
			}
			if (a0 == 32000) {
				f_12b_a1_v("Confusion");
				tv0->SetMessage(530703);
				tv0->ClearReplies();
				tv0->AddReply(530706, 32005, 32004);
				tv0->AddReply(530711, 32005, 32010);
				return;
			}
			if (a0 == 32005) {
				f_12b_a1_v("Confusion");
				tv0->SetMessage(530707);
				tv0->ClearReplies();
				tv0->AddReply(530708, 32007, 32006);
				tv0->AddReply(530712, 32007, 32011);
				return;
			}
			if (a0 == 32007) {
				f_12b_a1_v("Confusion");
				tv0->SetMessage(530709);
				tv0->ClearReplies();
				tv0->AddReply(521013, -1, 22226);
				return;
			}
			tv3 = true;
			if (f_1227_a0_b()) {
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
		if (!f_1086_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1221_a0_i());
		L0->SetNPCDescription(f_121f_a0_i());
		L0->SetPhoto(f_1223_a0_s());
		L0->SetPhoto2(f_1225_a0_s());
		L0->SetPlayerName(f_14c9_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10dd_a1_b(f_119c_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10cb_a1_v(a0);
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
			if (f_132c_a1_b(tv1)) {
				f_1290_a2_v(tv1, tv0);
				f_5fb_a1_v("Threat");
				tv0->SetMessage(521373);
				tv0->ClearReplies();
				tv0->AddReply(530766, 32077, 32076);
				tv0->AddReply(530781, 32077, 32091);
				break;
			}
			f_5fb_a1_v("Neutral");
			tv0->SetMessage(521376);
			tv0->ClearReplies();
			if (f_1338_a1_b(tv1)) {
				tv0->AddReply(521377, 22556, 22555);
			}
			if (f_1344_a1_b(tv1)) {
				tv0->AddReply(521436, 22615, 22614);
			}
			if (f_1350_a1_b(tv1) && f_1372_a1_b(tv1)) {
				tv0->AddReply(521510, 22672, 22671);
			}
			tv0->AddReply(521380, -1, 22558);
			tv0->AddReply(530775, -1, 32085);
			break;
			return;
		}
		if (f_1227_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1167_a1_v(tv2);
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

	void f_5fb_a1_v(string a0)
	{
		if (!f_1227_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1177_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1195_a0_v();
			if (a1 == 22552) {
				f_1284_a2_v(tv1, tv0);
			}
			if (a1 == 22557) {
				f_1284_a2_v(tv1, tv0);
			}
			if (a1 == 22616) {
				f_1296_a2_v(tv1, tv0);
			}
			if (a1 == 22671) {
				f_12a0_a2_v(tv1, tv0);
			}
			if (a0 == 22551) {
				if (f_132c_a1_b(tv1)) {
					f_1290_a2_v(tv1, tv0);
					f_5fb_a1_v("Threat");
					tv0->SetMessage(521373);
					tv0->ClearReplies();
					tv0->AddReply(530766, 32077, 32076);
					tv0->AddReply(530781, 32077, 32091);
					return;
				}
				f_5fb_a1_v("Neutral");
				tv0->SetMessage(521376);
				tv0->ClearReplies();
				if (f_1338_a1_b(tv1)) {
					tv0->AddReply(521377, 22556, 22555);
				}
				if (f_1344_a1_b(tv1)) {
					tv0->AddReply(521436, 22615, 22614);
				}
				if (f_1350_a1_b(tv1) && f_1372_a1_b(tv1)) {
					tv0->AddReply(521510, 22672, 22671);
				}
				tv0->AddReply(521380, -1, 22558);
				tv0->AddReply(530775, -1, 32085);
				return;
			}
			if (a0 == 22672) {
				f_5fb_a1_v("Arrogance");
				tv0->SetMessage(521511);
				tv0->ClearReplies();
				tv0->AddReply(521512, 32155, 22673);
				tv0->AddReply(530845, 32157, 32159);
				return;
			}
			if (a0 == 32155) {
				f_5fb_a1_v("Arrogance");
				tv0->SetMessage(530841);
				tv0->ClearReplies();
				tv0->AddReply(530842, 32157, 32156);
				tv0->AddReply(530846, 32166, 32161);
				return;
			}
			if (a0 == 32157) {
				f_5fb_a1_v("Threat");
				tv0->SetMessage(530843);
				tv0->ClearReplies();
				tv0->AddReply(530844, 32163, 32158);
				tv0->AddReply(530847, 32166, 32162);
				return;
			}
			if (a0 == 32163) {
				f_5fb_a1_v("Threat");
				tv0->SetMessage(530848);
				tv0->ClearReplies();
				tv0->AddReply(530849, 32166, 32164);
				tv0->AddReply(530850, 32166, 32165);
				return;
			}
			if (a0 == 32166) {
				f_5fb_a1_v("Threat");
				tv0->SetMessage(530851);
				tv0->ClearReplies();
				tv0->AddReply(530852, -1, 32170);
				tv0->AddReply(530853, -1, 32171);
				return;
			}
			if (a0 == 22615) {
				f_5fb_a1_v("Arrogance");
				tv0->SetMessage(521437);
				tv0->ClearReplies();
				tv0->AddReply(530824, 32136, 32135);
				return;
			}
			if (a0 == 32136) {
				f_5fb_a1_v("Arrogance");
				tv0->SetMessage(530825);
				tv0->ClearReplies();
				tv0->AddReply(530826, 32141, 32137);
				return;
			}
			if (a0 == 32141) {
				f_5fb_a1_v("Confusion");
				tv0->SetMessage(530830);
				tv0->ClearReplies();
				tv0->AddReply(530831, 32143, 32142);
				tv0->AddReply(530834, 32150, 32145);
				return;
			}
			if (a0 == 32150) {
				f_5fb_a1_v("Neutral");
				tv0->SetMessage(530838);
				tv0->ClearReplies();
				tv0->AddReply(530839, 32143, 32151);
				return;
			}
			if (a0 == 32143) {
				f_5fb_a1_v("Confusion");
				tv0->SetMessage(530832);
				tv0->ClearReplies();
				tv0->AddReply(530833, 32138, 32144);
				return;
			}
			if (a0 == 32138) {
				f_5fb_a1_v("Neutral");
				tv0->SetMessage(530827);
				tv0->ClearReplies();
				tv0->AddReply(530828, 32140, 32139);
				tv0->AddReply(530840, 32140, 32153);
				return;
			}
			if (a0 == 32140) {
				f_5fb_a1_v("Neutral");
				tv0->SetMessage(530829);
				tv0->ClearReplies();
				tv0->AddReply(521438, -1, 22616);
				return;
			}
			if (a0 == 22556) {
				f_5fb_a1_v("Neutral");
				tv0->SetMessage(521378);
				tv0->ClearReplies();
				tv0->AddReply(530790, 32104, 32103);
				return;
			}
			if (a0 == 32104) {
				f_5fb_a1_v("Neutral");
				tv0->SetMessage(530791);
				tv0->ClearReplies();
				tv0->AddReply(530792, 32106, 32105);
				return;
			}
			if (a0 == 32106) {
				f_5fb_a1_v("Isee");
				tv0->SetMessage(530793);
				tv0->ClearReplies();
				tv0->AddReply(530794, 32108, 32107);
				return;
			}
			if (a0 == 32108) {
				f_5fb_a1_v("Neutral");
				tv0->SetMessage(530795);
				tv0->ClearReplies();
				tv0->AddReply(521379, -1, 22557);
				return;
			}
			if (a0 == 32077) {
				f_5fb_a1_v("Threat");
				tv0->SetMessage(530767);
				tv0->ClearReplies();
				tv0->AddReply(530768, 32079, 32078);
				tv0->AddReply(530787, 32100, 32099);
				return;
			}
			if (a0 == 32100) {
				f_5fb_a1_v("Neutral");
				tv0->SetMessage(530788);
				tv0->ClearReplies();
				tv0->AddReply(530789, 32079, 32101);
				return;
			}
			if (a0 == 32079) {
				f_5fb_a1_v("Neutral");
				tv0->SetMessage(530769);
				tv0->ClearReplies();
				tv0->AddReply(530770, 32081, 32080);
				return;
			}
			if (a0 == 32081) {
				f_5fb_a1_v("Neutral");
				tv0->SetMessage(530771);
				tv0->ClearReplies();
				tv0->AddReply(530772, 32083, 32082);
				return;
			}
			if (a0 == 32083) {
				f_5fb_a1_v("Confusion");
				tv0->SetMessage(530773);
				tv0->ClearReplies();
				tv0->AddReply(530774, 32086, 32084);
				tv0->AddReply(530782, 32086, 32093);
				return;
			}
			if (a0 == 32086) {
				f_5fb_a1_v("Confusion");
				tv0->SetMessage(530776);
				tv0->ClearReplies();
				tv0->AddReply(530777, 32088, 32087);
				return;
			}
			if (a0 == 32088) {
				f_5fb_a1_v("Isee");
				tv0->SetMessage(530778);
				tv0->ClearReplies();
				tv0->AddReply(530779, 32090, 32089);
				return;
			}
			if (a0 == 32090) {
				f_5fb_a1_v("Isee");
				tv0->SetMessage(530780);
				tv0->ClearReplies();
				tv0->AddReply(530783, 32096, 32095);
				return;
			}
			if (a0 == 32096) {
				f_5fb_a1_v("Isee");
				tv0->SetMessage(530784);
				tv0->ClearReplies();
				tv0->AddReply(530796, 32110, 32109);
				tv0->AddReply(521375, 32113, 22553);
				return;
			}
			if (a0 == 32113) {
				f_5fb_a1_v("Confusion");
				tv0->SetMessage(530800);
				tv0->ClearReplies();
				tv0->AddReply(530801, -1, 32114);
				tv0->AddReply(530802, -1, 32115);
				return;
			}
			if (a0 == 32110) {
				f_5fb_a1_v("Threat");
				tv0->SetMessage(530797);
				tv0->ClearReplies();
				tv0->AddReply(530798, 32112, 32111);
				return;
			}
			if (a0 == 32112) {
				f_5fb_a1_v("Threat");
				tv0->SetMessage(530799);
				tv0->ClearReplies();
				tv0->AddReply(521374, -1, 22552);
				return;
			}
			tv3 = true;
			if (f_1227_a0_b()) {
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
		if (!f_1086_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1221_a0_i());
		L0->SetNPCDescription(f_121f_a0_i());
		L0->SetPhoto(f_1223_a0_s());
		L0->SetPhoto2(f_1225_a0_s());
		L0->SetPlayerName(f_14c9_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10dd_a1_b(f_119c_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10cb_a1_v(a0);
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
			if (f_138a_a1_b(tv1)) {
				f_12a6_a2_v(tv1, tv0);
				f_982_a1_v("Neutral");
				tv0->SetMessage(522067);
				tv0->ClearReplies();
				tv0->AddReply(523208, 24405, 24404);
				tv0->AddReply(523226, 24424, 24423);
				tv0->AddReply(523222, -1, 24418);
				break;
			}
			f_982_a1_v("Neutral");
			tv0->SetMessage(522071);
			tv0->ClearReplies();
			if (f_1396_a1_b(tv1)) {
				tv0->AddReply(523223, 24425, 24419);
			}
			tv0->AddReply(522072, -1, 23241);
			break;
			return;
		}
		if (f_1227_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1167_a1_v(tv2);
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

	void f_982_a1_v(string a0)
	{
		if (!f_1227_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1177_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1195_a0_v();
			if (a1 == 24419) {
				f_12ac_a2_v(tv1, tv0);
			}
			if (a0 == 23236) {
				if (f_138a_a1_b(tv1)) {
					f_12a6_a2_v(tv1, tv0);
					f_982_a1_v("Neutral");
					tv0->SetMessage(522067);
					tv0->ClearReplies();
					tv0->AddReply(523208, 24405, 24404);
					tv0->AddReply(523226, 24424, 24423);
					tv0->AddReply(523222, -1, 24418);
					return;
				}
				f_982_a1_v("Neutral");
				tv0->SetMessage(522071);
				tv0->ClearReplies();
				if (f_1396_a1_b(tv1)) {
					tv0->AddReply(523223, 24425, 24419);
				}
				tv0->AddReply(522072, -1, 23241);
				return;
			}
			if (a0 == 24425) {
				f_982_a1_v("Confusion");
				tv0->SetMessage(523228);
				tv0->ClearReplies();
				tv0->AddReply(523229, 24428, 24426);
				return;
			}
			if (a0 == 24428) {
				f_982_a1_v("Confusion");
				tv0->SetMessage(523231);
				tv0->ClearReplies();
				tv0->AddReply(523232, -1, 24429);
				return;
			}
			if (a0 == 24424) {
				f_982_a1_v("Arrogance");
				tv0->SetMessage(523227);
				tv0->ClearReplies();
				tv0->AddReply(523235, 24411, 24433);
				tv0->AddReply(523236, -1, 24434);
				return;
			}
			if (a0 == 24405) {
				f_982_a1_v("Confusion");
				tv0->SetMessage(523209);
				tv0->ClearReplies();
				tv0->AddReply(523210, 24409, 24406);
				tv0->AddReply(523214, 24411, 24410);
				return;
			}
			if (a0 == 24411) {
				f_982_a1_v("Threat");
				tv0->SetMessage(523215);
				tv0->ClearReplies();
				tv0->AddReply(523216, 24413, 24412);
				tv0->AddReply(523237, 24437, 24436);
				return;
			}
			if (a0 == 24437) {
				f_982_a1_v("Confusion");
				tv0->SetMessage(523238);
				tv0->ClearReplies();
				tv0->AddReply(523239, 24439, 24438);
				return;
			}
			if (a0 == 24439) {
				f_982_a1_v("Isee");
				tv0->SetMessage(523240);
				tv0->ClearReplies();
				tv0->AddReply(523241, 24417, 24440);
				return;
			}
			if (a0 == 24413) {
				f_982_a1_v("Arrogance");
				tv0->SetMessage(523217);
				tv0->ClearReplies();
				tv0->AddReply(523218, 24415, 24414);
				return;
			}
			if (a0 == 24415) {
				f_982_a1_v("Arrogance");
				tv0->SetMessage(523219);
				tv0->ClearReplies();
				tv0->AddReply(522068, 23238, 23237);
				return;
			}
			if (a0 == 23238) {
				f_982_a1_v("Confusion");
				tv0->SetMessage(522069);
				tv0->ClearReplies();
				if (f_137e_a1_b(tv1)) {
					tv0->AddReply(522073, 23243, 23242);
				}
				if (!f_137e_a1_b(tv1)) {
					tv0->AddReply(522070, -1, 23239);
				}
				return;
			}
			if (a0 == 23243) {
				f_982_a1_v("Threat");
				tv0->SetMessage(522074);
				tv0->ClearReplies();
				tv0->AddReply(522075, 24408, 23244);
				tv0->AddReply(523211, -1, 24407);
				return;
			}
			if (a0 == 24408) {
				f_982_a1_v("Confusion");
				tv0->SetMessage(523212);
				tv0->ClearReplies();
				tv0->AddReply(523234, -1, 24432);
				return;
			}
			if (a0 == 24409) {
				f_982_a1_v("Confusion");
				tv0->SetMessage(523213);
				tv0->ClearReplies();
				tv0->AddReply(523220, 24417, 24416);
				return;
			}
			if (a0 == 24417) {
				f_982_a1_v("Threat");
				tv0->SetMessage(523221);
				tv0->ClearReplies();
				tv0->AddReply(523233, 23238, 24430);
				return;
			}
			tv3 = true;
			if (f_1227_a0_b()) {
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
		if (!f_1086_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1221_a0_i());
		L0->SetNPCDescription(f_121f_a0_i());
		L0->SetPhoto(f_1223_a0_s());
		L0->SetPhoto2(f_1225_a0_s());
		L0->SetPlayerName(f_14c9_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10dd_a1_b(f_119c_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10cb_a1_v(a0);
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
			f_b9d_a1_v("Neutral");
			tv0->SetMessage(529922);
			tv0->ClearReplies();
			tv0->AddReply(529923, -1, 31306);
			tv0->AddReply(529924, -1, 31307);
			break;
			return;
		}
		if (f_1227_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1167_a1_v(tv2);
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

	void f_b9d_a1_v(string a0)
	{
		if (!f_1227_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1177_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1195_a0_v();
			if (a0 == 31305) {
				f_b9d_a1_v("Neutral");
				tv0->SetMessage(529922);
				tv0->ClearReplies();
				tv0->AddReply(529923, -1, 31306);
				tv0->AddReply(529924, -1, 31307);
				return;
			}
			tv3 = true;
			if (f_1227_a0_b()) {
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
		if (!f_1086_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1221_a0_i());
		L0->SetNPCDescription(f_121f_a0_i());
		L0->SetPhoto(f_1223_a0_s());
		L0->SetPhoto2(f_1225_a0_s());
		L0->SetPlayerName(f_14c9_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10dd_a1_b(f_119c_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10cb_a1_v(a0);
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
			f_c68_a1_v("Confusion");
			tv0->SetMessage(529942);
			tv0->ClearReplies();
			tv0->AddReply(529943, -1, 31326);
			tv0->AddReply(529944, -1, 31327);
			break;
			return;
		}
		if (f_1227_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1167_a1_v(tv2);
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

	void f_c68_a1_v(string a0)
	{
		if (!f_1227_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1177_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1195_a0_v();
			if (a0 == 31325) {
				f_c68_a1_v("Confusion");
				tv0->SetMessage(529942);
				tv0->ClearReplies();
				tv0->AddReply(529943, -1, 31326);
				tv0->AddReply(529944, -1, 31327);
				return;
			}
			tv3 = true;
			if (f_1227_a0_b()) {
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
		if (!f_1086_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1221_a0_i());
		L0->SetNPCDescription(f_121f_a0_i());
		L0->SetPhoto(f_1223_a0_s());
		L0->SetPhoto2(f_1225_a0_s());
		L0->SetPlayerName(f_14c9_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10dd_a1_b(f_119c_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10cb_a1_v(a0);
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
			f_d6c_a1_v("Neutral");
			tv0->SetMessage(530357);
			tv0->ClearReplies();
			if (f_13ae_a1_b(tv1) && !f_13a2_a1_b(tv1) && f_13ba_a1_b(tv1)) {
				tv0->AddReply(530358, 32319, 31732);
			}
			if (f_13ae_a1_b(tv1) && f_13a2_a1_b(tv1) && f_13c6_a1_b(tv1)) {
				tv0->AddReply(530361, 31736, 31735);
			}
			tv0->AddReply(530916, -1, 32243);
			tv0->AddReply(530917, -1, 32244);
			break;
			return;
		}
		if (f_1227_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1167_a1_v(tv2);
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

	void f_d6c_a1_v(string a0)
	{
		if (!f_1227_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1177_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1195_a0_v();
			if (a1 == 31732) {
				f_12b2_a2_v(tv1, tv0);
			}
			if (a1 == 31735) {
				f_12b8_a2_v(tv1, tv0);
			}
			if (a0 == 31731) {
				f_d6c_a1_v("Neutral");
				tv0->SetMessage(530357);
				tv0->ClearReplies();
				if (f_13ae_a1_b(tv1) && !f_13a2_a1_b(tv1) && f_13ba_a1_b(tv1)) {
					tv0->AddReply(530358, 32319, 31732);
				}
				if (f_13ae_a1_b(tv1) && f_13a2_a1_b(tv1) && f_13c6_a1_b(tv1)) {
					tv0->AddReply(530361, 31736, 31735);
				}
				tv0->AddReply(530916, -1, 32243);
				tv0->AddReply(530917, -1, 32244);
				return;
			}
			if (a0 == 31736) {
				f_d6c_a1_v("Confusion");
				tv0->SetMessage(530362);
				tv0->ClearReplies();
				tv0->AddReply(530363, 32326, 31737);
				tv0->AddReply(530998, -1, 32325);
				return;
			}
			if (a0 == 32326) {
				f_d6c_a1_v("Confusion");
				tv0->SetMessage(530999);
				tv0->ClearReplies();
				tv0->AddReply(531000, 32329, 32327);
				tv0->AddReply(531001, -1, 32328);
				return;
			}
			if (a0 == 32329) {
				f_d6c_a1_v("Threat");
				tv0->SetMessage(531002);
				tv0->ClearReplies();
				tv0->AddReply(531003, -1, 32330);
				tv0->AddReply(531004, -1, 32331);
				return;
			}
			if (a0 == 32319) {
				f_d6c_a1_v("Neutral");
				tv0->SetMessage(530994);
				tv0->ClearReplies();
				tv0->AddReply(530996, 31733, 32321);
				tv0->AddReply(530997, 31733, 32323);
				tv0->AddReply(530995, -1, 32320);
				return;
			}
			if (a0 == 31733) {
				f_d6c_a1_v("Confusion");
				tv0->SetMessage(530359);
				tv0->ClearReplies();
				tv0->AddReply(530360, -1, 31734);
				tv0->AddReply(530993, -1, 32318);
				return;
			}
			tv3 = true;
			if (f_1227_a0_b()) {
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
		if (!f_1086_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1221_a0_i());
		L0->SetNPCDescription(f_121f_a0_i());
		L0->SetPhoto(f_1223_a0_s());
		L0->SetPhoto2(f_1225_a0_s());
		L0->SetPlayerName(f_14c9_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10dd_a1_b(f_119c_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10cb_a1_v(a0);
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
			f_ef8_a1_v("Threat");
			tv0->SetMessage(530682);
			tv0->ClearReplies();
			tv0->AddReply(530683, 31974, 31973);
			tv0->AddReply(530688, 31974, 31978);
			break;
			return;
		}
		if (f_1227_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1167_a1_v(tv2);
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

	void f_ef8_a1_v(string a0)
	{
		if (!f_1227_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1177_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1195_a0_v();
			if (a0 == 31972) {
				f_ef8_a1_v("Threat");
				tv0->SetMessage(530682);
				tv0->ClearReplies();
				tv0->AddReply(530683, 31974, 31973);
				tv0->AddReply(530688, 31974, 31978);
				return;
			}
			if (a0 == 31974) {
				f_ef8_a1_v("Threat");
				tv0->SetMessage(530684);
				tv0->ClearReplies();
				tv0->AddReply(530685, 31976, 31975);
				tv0->AddReply(530689, 31976, 31979);
				return;
			}
			if (a0 == 31976) {
				f_ef8_a1_v("Threat");
				tv0->SetMessage(530686);
				tv0->ClearReplies();
				tv0->AddReply(530687, -1, 31977);
				tv0->AddReply(530690, -1, 31980);
				return;
			}
			tv3 = true;
			if (f_1227_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t14
{
	var Vector tv0;

	void init(void)
	{
		f_f6a_a0_v();
	}

	void f_f6a_a0_v(void)
	{
		if (!f_1081_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_101a_a0_v();
		}
	}

	bool f_f78_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1078_a1_b(L0);
	}

	void f_f87_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_f8c_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1066_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_fa2_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_fab_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_fab_a0_v();
			if (f_1081_a0_b() && f_f8c_a0_b()) {
				if (f_f78_a0_b()) {
					f_1117_a1_b(f_119c_a0_o());
				}
			} else {
				f_f87_a0_v();
				f_fa2_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1061_a0_v();
		f_fab_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_fab_a0_v();
		f_1167_a1_v("Neutral");
		f_fa2_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_fa2_a0_v();
		} else {
			f_1167_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1061_a0_v();
			f_1078_a1_b(a0);
			enable OnUse;
			f_14da_a1_v(a0);
			f_1167_a1_v("Neutral");
			f_fab_a0_v();
			f_fa2_a0_v();
		}
	}
}

void f_101a_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1081_a0_b()) {
		return;
	}
	L0 = f_120e_a0_i();
	for (L1 = 0; L1 < 5 && f_1081_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1207_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_105f_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_105f_a0_b(void)
{
	return true;
}

void f_1061_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1066_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_106e_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1078_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_106e_a1_b(L0);
}

bool f_1081_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1086_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_11a2_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1227_a0_b()) {
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

void f_10cb_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1227_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_10dd_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1117_a1_b(a0)) {
			if (!f_113c_a1_b(a0)) {
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
		if (!f_113c_a1_b(a0)) {
			if (!f_1117_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1117_a1_b(object a0)
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
	return f_1186_a1_b(L4);
}

bool f_113c_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_11e5_a0_i() + "m";
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
	return f_1186_a1_b(L4);
}

void f_1167_a1_v(string a0)
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

void f_1177_a2_v(string a0, bool a1)
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

bool f_1186_a1_b(string a0)
{
	if (f_1227_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1195_a0_v(void)
{
	if (f_1227_a0_b()) {
		@lshStopSpeech();
	}
}

object f_119c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_11a2_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_11ac_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_11b1_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_11bc_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_11cd_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_11d4_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_11e0_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_11e5_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_11ee_a1_b(int a0)
{
	return f_11e5_a0_i() == a0;
}

bool f_11f4_a1_b(int a0)
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

string f_1207_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_120e_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1207_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_121f_a0_i(void)
{
	return 515527;
}

int f_1221_a0_i(void)
{
	return 513334;
}

string f_1223_a0_s(void)
{
	return "ui/NPC_Aglaja.png";
}

string f_1225_a0_s(void)
{
	return "ui/NPC_Aglaja_b.png";
}

bool f_1227_a0_b(void)
{
	return true;
}

void f_1229_a2_v(object a0, object a1)
{
	f_11bc_a2_v("boiny@door1", false);
}

void f_1230_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b7q01", 7);
	L0 = f_1497_a0_o();
	L0->AddMark("b7q01AglajaGotoStarshina", "pt_map_starshina", 1, 521027, f_11e0_a0_f());
	f_1406_a0_v();
}

void f_1247_a2_v(object a0, object a1)
{
	f_1413_a0_v();
	f_11d4_a2_b("quest_b7_01", "completed");
}

void f_1251_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b7q03", 1);
	L0 = f_1497_a0_o();
	L0->AddMark("b7q03AglajaGotoTheater", "pt_map_theater", 0, 521367, f_11e0_a0_f());
	f_1420_a0_v();
	f_142d_a0_v();
	f_11b1_a1_o("quest_b7_03");
	f_11d4_a2_b("quest_b7_03", "place_birdmask");
}

void f_1274_a2_v(object a0, object a1)
{
	@SetVariable("oob7Aglaja1", 1);
}

void f_127a_a2_v(object a0, object a1)
{
	f_143a_a0_v();
	f_11d4_a2_b("quest_b7_03", "completed");
}

void f_1284_a2_v(object a0, object a1)
{
	@SetVariable("b8q01", 1);
	f_1447_a0_v();
	f_1454_a0_v();
}

void f_1290_a2_v(object a0, object a1)
{
	@SetVariable("oob8Aglaja1", 1);
}

void f_1296_a2_v(object a0, object a1)
{
	f_1461_a0_v();
	f_11d4_a2_b("quest_b8_01", "completed");
}

void f_12a0_a2_v(object a0, object a1)
{
	@SetVariable("oob8Aglaja2", 1);
}

void f_12a6_a2_v(object a0, object a1)
{
	@SetVariable("oob11Aglaja1", 1);
}

void f_12ac_a2_v(object a0, object a1)
{
	@SetVariable("oob11Aglaja2", 1);
}

void f_12b2_a2_v(object a0, object a1)
{
	@SetVariable("oob9Aglaja1", 1);
}

void f_12b8_a2_v(object a0, object a1)
{
	@SetVariable("oob9Aglaja2", 1);
}

void f_12be_a2_v(object a0, object a1)
{
	if (f_11ac_a1_i("map_chertez_state") <= 1) {
		@SetVariable("map_chertez_state", 1);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_12cf_a2_v(object a0, object a1)
{
	if (f_11ac_a1_i("map_chertez_state") <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_12e0_a2_v(object a0, object a1)
{
	f_14a8_a3_v(f_1497_a0_o(), "pt_map_aglaja", -1);
	a1->ShowMap(f_1497_a0_o());
}

bool f_12f0_a1_b(object a0)
{
	if (f_11ac_a1_i("b7q01") == 1000) {
		return true;
	}
	return false;
}

bool f_12fc_a1_b(object a0)
{
	if (f_11ac_a1_i("oob7Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1308_a1_b(object a0)
{
	if (f_11ac_a1_i("b7q03") == 2) {
		return true;
	}
	return false;
}

bool f_1314_a1_b(object a0)
{
	if (f_11ac_a1_i("b7q03SerumWorks") != 0) {
		return true;
	}
	return false;
}

bool f_1320_a1_b(object a0)
{
	if (f_11ac_a1_i("b7q03") == 1000) {
		return true;
	}
	return false;
}

bool f_132c_a1_b(object a0)
{
	if (f_11ac_a1_i("oob8Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1338_a1_b(object a0)
{
	if (f_11ac_a1_i("b8q01") == 0) {
		return true;
	}
	return false;
}

bool f_1344_a1_b(object a0)
{
	if (f_11ac_a1_i("b8q01") == 7) {
		return true;
	}
	return false;
}

bool f_1350_a1_b(object a0)
{
	if (f_11ac_a1_i("b8q03") != 0 && f_11ac_a1_i("b8q03") != 1000 && f_11ac_a1_i("b8q03") != -1) {
		return true;
	}
	return false;
}

bool f_1372_a1_b(object a0)
{
	if (f_11ac_a1_i("oob8Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_137e_a1_b(object a0)
{
	if (f_11ac_a1_i("b11q01") == 1000) {
		return true;
	}
	return false;
}

bool f_138a_a1_b(object a0)
{
	if (f_11ac_a1_i("oob11Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_1396_a1_b(object a0)
{
	if (f_11ac_a1_i("oob11Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_13a2_a1_b(object a0)
{
	if (f_11ac_a1_i("b9q03BadInit") != 0) {
		return true;
	}
	return false;
}

bool f_13ae_a1_b(object a0)
{
	if (f_11ac_a1_i("b9q03BonefiresCount") == 4) {
		return true;
	}
	return false;
}

bool f_13ba_a1_b(object a0)
{
	if (f_11ac_a1_i("oob9Aglaja1") == 0) {
		return true;
	}
	return false;
}

bool f_13c6_a1_b(object a0)
{
	if (f_11ac_a1_i("oob9Aglaja2") == 0) {
		return true;
	}
	return false;
}

bool f_13d2_a1_b(object a0)
{
	if (f_13ff_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_13dc_a1_b(object a0)
{
	if (f_11ac_a1_i("b7q01") == 6) {
		return true;
	}
	return false;
}

bool f_13e8_a1_b(object a0)
{
	if (f_11cd_a2_b(a0, "burah_serum")) {
		return true;
	}
	return false;
}

bool f_13f3_a1_b(object a0)
{
	if (f_11ac_a1_i("b7q01") == 8) {
		return true;
	}
	return false;
}

bool f_13ff_a1_b(object a0)
{
	float L0;
	a0->GetProperty("disease", L0);
	return L0 == 0;
}

void f_1406_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 259, 1, 521031);
	f_147b_a2_b(L0, 253);
}

void f_1413_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 261, 1, 521033);
	f_147b_a2_b(L0, 253);
}

void f_1420_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 280, 2, 521363);
	f_147b_a2_b(L0, -1);
}

void f_142d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 281, 2, 521364);
	f_147b_a2_b(L0, 280);
}

void f_143a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 283, 2, 521366);
	f_147b_a2_b(L0, 280);
}

void f_1447_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 284, 1, 521455);
	f_147b_a2_b(L0, -1);
}

void f_1454_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 285, 1, 521456);
	f_147b_a2_b(L0, 284);
}

void f_1461_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 292, 1, 521463);
	f_147b_a2_b(L0, 284);
}

object f_146e_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_147b_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_146e_a0_o();
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

object f_1497_a0_o(void)
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

void f_14a8_a3_v(object a0, string a1, float a2)
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

int f_14c9_a0_i(void)
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

void f_14da_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_aglaja", L0);
	if (!L0) {
		t12{a0};
		@SetVariable("mt_aglaja", 1);
	}
	if (f_11f4_a1_b(8)) {
		t6{a0};
		return;
	}
	if (f_11f4_a1_b(12)) {
		t8{a0};
		return;
	}
	if (f_11ee_a1_b(7)) {
		t0{a0};
		return;
	}
	if (f_11ee_a1_b(8)) {
		t2{a0};
		return;
	}
	if (f_11ee_a1_b(9)) {
		t10{a0};
		return;
	}
	if (f_11ee_a1_b(11)) {
		t4{a0};
		return;
	}
}

