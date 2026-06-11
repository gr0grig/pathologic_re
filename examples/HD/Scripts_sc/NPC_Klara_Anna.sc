event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;

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
		if (!f_1120_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f0_a0_i());
		L0->SetNPCDescription(f_12ee_a0_i());
		L0->SetPhoto(f_12f2_a0_s());
		L0->SetPhoto2(f_12f4_a0_s());
		L0->SetPlayerName(f_1650_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1177_a1_b(f_1236_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1165_a1_v(a0);
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
			if (f_1435_a1_b(tv1) && f_1441_a1_b(tv1)) {
				f_130f_a2_v(tv1, tv0);
				f_110_a1_v("Fear");
				tv0->SetMessage(524690);
				tv0->ClearReplies();
				tv0->AddReply(524691, 28130, 26030);
				tv0->AddReply(542043, 44323, 44322);
				break;
			}
			if (f_144d_a1_b(tv1) && f_1459_a1_b(tv1)) {
				f_1315_a2_v(tv1, tv0);
				f_110_a1_v("Neutral");
				tv0->SetMessage(524707);
				tv0->ClearReplies();
				tv0->AddReply(524708, 28139, 26047);
				tv0->AddReply(542053, 28139, 44336);
				break;
			}
			if (f_1465_a1_b(tv1)) {
				f_131b_a2_v(tv1, tv0);
				f_110_a1_v("Fear");
				tv0->SetMessage(524780);
				tv0->ClearReplies();
				tv0->AddReply(526860, 28146, 28145);
				tv0->AddReply(542054, 28146, 44338);
				break;
			}
			f_110_a1_v("Dream");
			tv0->SetMessage(524709);
			tv0->ClearReplies();
			if (f_1471_a1_b(tv1) && !f_1465_a1_b(tv1)) {
				tv0->AddReply(524787, 26103, 26102);
			}
			if (f_147d_a1_b(tv1)) {
				tv0->AddReply(524796, 28156, 26111);
			}
			tv0->AddReply(524710, -1, 26049);
			break;
			return;
		}
		if (f_12f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1201_a1_v(tv2);
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

	void f_110_a1_v(string a0)
	{
		if (!f_12f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1211_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_122f_a0_v();
			if (a1 == 26100) {
				f_1321_a2_v(tv1, tv0);
				f_12f8_a2_v(tv1, tv0);
			}
			if (a1 == 26104) {
				f_1321_a2_v(tv1, tv0);
				f_12f8_a2_v(tv1, tv0);
			}
			if (a1 == 44350) {
				f_133b_a2_v(tv1, tv0);
				f_1308_a2_v(tv1, tv0);
			}
			if (a1 == 26113) {
				f_133b_a2_v(tv1, tv0);
				f_1425_a2_v(tv1, tv0);
				f_1419_a2_v(tv1, tv0);
			}
			if (a0 == 26029) {
				if (f_1435_a1_b(tv1) && f_1441_a1_b(tv1)) {
					f_130f_a2_v(tv1, tv0);
					f_110_a1_v("Fear");
					tv0->SetMessage(524690);
					tv0->ClearReplies();
					tv0->AddReply(524691, 28130, 26030);
					tv0->AddReply(542043, 44323, 44322);
					return;
				}
				if (f_144d_a1_b(tv1) && f_1459_a1_b(tv1)) {
					f_1315_a2_v(tv1, tv0);
					f_110_a1_v("Neutral");
					tv0->SetMessage(524707);
					tv0->ClearReplies();
					tv0->AddReply(524708, 28139, 26047);
					tv0->AddReply(542053, 28139, 44336);
					return;
				}
				if (f_1465_a1_b(tv1)) {
					f_131b_a2_v(tv1, tv0);
					f_110_a1_v("Fear");
					tv0->SetMessage(524780);
					tv0->ClearReplies();
					tv0->AddReply(526860, 28146, 28145);
					tv0->AddReply(542054, 28146, 44338);
					return;
				}
				f_110_a1_v("Dream");
				tv0->SetMessage(524709);
				tv0->ClearReplies();
				if (f_1471_a1_b(tv1) && !f_1465_a1_b(tv1)) {
					tv0->AddReply(524787, 26103, 26102);
				}
				if (f_147d_a1_b(tv1)) {
					tv0->AddReply(524796, 28156, 26111);
				}
				tv0->AddReply(524710, -1, 26049);
				return;
			}
			if (a0 == 28156) {
				f_110_a1_v("Adoration");
				tv0->SetMessage(526870);
				tv0->ClearReplies();
				tv0->AddReply(526871, 44381, 28157);
				tv0->AddReply(542072, 44363, 44362);
				tv0->AddReply(526872, 28155, 28158);
				return;
			}
			if (a0 == 44363) {
				f_110_a1_v("Adoration");
				tv0->SetMessage(542073);
				tv0->ClearReplies();
				tv0->AddReply(542077, 26112, 44367);
				tv0->AddReply(542078, 26112, 44368);
				return;
			}
			if (a0 == 44381) {
				tv0->SetMessage(542087);
				tv0->ClearReplies();
				tv0->AddReply(542088, 26112, 44382);
				tv0->AddReply(542090, 26112, 44384);
				return;
			}
			if (a0 == 26112) {
				f_110_a1_v("Rage");
				tv0->SetMessage(524797);
				tv0->ClearReplies();
				tv0->AddReply(526868, 28155, 28154);
				return;
			}
			if (a0 == 28155) {
				f_110_a1_v("Neutral");
				tv0->SetMessage(526869);
				tv0->ClearReplies();
				tv0->AddReply(542062, -1, 44350);
				tv0->AddReply(542091, 44390, 44389);
				return;
			}
			if (a0 == 44390) {
				f_110_a1_v("Adoration");
				tv0->SetMessage(542092);
				tv0->ClearReplies();
				tv0->AddReply(524798, -1, 26113);
				return;
			}
			if (a0 == 26103) {
				f_110_a1_v("Adoration");
				tv0->SetMessage(524788);
				tv0->ClearReplies();
				tv0->AddReply(524789, -1, 26104);
				return;
			}
			if (a0 == 28146) {
				f_110_a1_v("Fear");
				tv0->SetMessage(526861);
				tv0->ClearReplies();
				tv0->AddReply(542064, 44355, 44352);
				tv0->AddReply(542069, 44355, 44357);
				tv0->AddReply(542070, 44364, 44358);
				return;
			}
			if (a0 == 44364) {
				f_110_a1_v("Dream");
				tv0->SetMessage(542074);
				tv0->ClearReplies();
				tv0->AddReply(542075, -1, 44365);
				tv0->AddReply(542076, -1, 44366);
				return;
			}
			if (a0 == 44355) {
				f_110_a1_v("Rage");
				tv0->SetMessage(542067);
				tv0->ClearReplies();
				tv0->AddReply(542068, 44353, 44356);
				tv0->AddReply(542071, 44353, 44359);
				return;
			}
			if (a0 == 44353) {
				f_110_a1_v("Rage");
				tv0->SetMessage(542065);
				tv0->ClearReplies();
				tv0->AddReply(526862, 28148, 28147);
				tv0->AddReply(526865, 28148, 28150);
				return;
			}
			if (a0 == 28148) {
				f_110_a1_v("Neutral");
				tv0->SetMessage(526863);
				tv0->ClearReplies();
				tv0->AddReply(524783, 26099, 26098);
				tv0->AddReply(542056, 26099, 44341);
				return;
			}
			if (a0 == 26099) {
				f_110_a1_v("Neutral");
				tv0->SetMessage(524784);
				tv0->ClearReplies();
				tv0->AddReply(524785, -1, 26100);
				tv0->AddReply(524786, -1, 26101);
				return;
			}
			if (a0 == 28139) {
				f_110_a1_v("Adoration");
				tv0->SetMessage(526854);
				tv0->ClearReplies();
				tv0->AddReply(526855, 28142, 28140);
				tv0->AddReply(526856, -1, 28141);
				return;
			}
			if (a0 == 28142) {
				f_110_a1_v("Adoration");
				tv0->SetMessage(526857);
				tv0->ClearReplies();
				tv0->AddReply(526858, -1, 28143);
				tv0->AddReply(526859, -1, 28144);
				return;
			}
			if (a0 == 44323) {
				f_110_a1_v("Dream");
				tv0->SetMessage(542044);
				tv0->ClearReplies();
				tv0->AddReply(542045, 44327, 44324);
				tv0->AddReply(542046, 28132, 44325);
				return;
			}
			if (a0 == 28130) {
				f_110_a1_v("Rage");
				tv0->SetMessage(526845);
				tv0->ClearReplies();
				tv0->AddReply(526846, 28132, 28131);
				tv0->AddReply(542047, 44327, 44326);
				return;
			}
			if (a0 == 44327) {
				f_110_a1_v("Dream");
				tv0->SetMessage(542048);
				tv0->ClearReplies();
				tv0->AddReply(542050, 44333, 44331);
				return;
			}
			if (a0 == 44333) {
				f_110_a1_v("Neutral");
				tv0->SetMessage(542051);
				tv0->ClearReplies();
				tv0->AddReply(542052, 28134, 44334);
				return;
			}
			if (a0 == 28132) {
				f_110_a1_v("Rage");
				tv0->SetMessage(526847);
				tv0->ClearReplies();
				tv0->AddReply(526848, 28134, 28133);
				return;
			}
			if (a0 == 28134) {
				f_110_a1_v("Rage");
				tv0->SetMessage(526849);
				tv0->ClearReplies();
				tv0->AddReply(526850, 28136, 28135);
				return;
			}
			if (a0 == 28136) {
				f_110_a1_v("Neutral");
				tv0->SetMessage(526851);
				tv0->ClearReplies();
				tv0->AddReply(526852, -1, 28137);
				tv0->AddReply(526853, -1, 28138);
				return;
			}
			tv3 = true;
			if (f_12f6_a0_b()) {
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
		if (!f_1120_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f0_a0_i());
		L0->SetNPCDescription(f_12ee_a0_i());
		L0->SetPhoto(f_12f2_a0_s());
		L0->SetPhoto2(f_12f4_a0_s());
		L0->SetPlayerName(f_1650_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1177_a1_b(f_1236_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1165_a1_v(a0);
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
			f_48a_a1_v("Neutral");
			tv0->SetMessage(525346);
			tv0->ClearReplies();
			if (f_1489_a1_b(tv1)) {
				tv0->AddReply(525348, 44408, 26716);
			}
			if (f_1495_a1_b(tv1)) {
				tv0->AddReply(541760, 43964, 43963);
			}
			tv0->AddReply(525347, -1, 26715);
			tv0->AddReply(529145, -1, 30591);
			break;
			return;
		}
		if (f_12f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1201_a1_v(tv2);
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

	void f_48a_a1_v(string a0)
	{
		if (!f_12f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1211_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_122f_a0_v();
			if (a1 == 26722) {
				f_1344_a2_v(tv1, tv0);
			}
			if (a1 == 26725) {
				f_136d_a2_v(tv1, tv0);
				f_1376_a2_v(tv1, tv0);
				f_1381_a2_v(tv1, tv0);
				f_141f_a2_v(tv1, tv0);
			}
			if (a1 == 43965) {
				f_136d_a2_v(tv1, tv0);
				f_1376_a2_v(tv1, tv0);
				f_1381_a2_v(tv1, tv0);
				f_141f_a2_v(tv1, tv0);
			}
			if (a1 == 43966) {
				f_136d_a2_v(tv1, tv0);
				f_1376_a2_v(tv1, tv0);
				f_1381_a2_v(tv1, tv0);
				f_141f_a2_v(tv1, tv0);
			}
			if (a0 == 26714) {
				f_48a_a1_v("Neutral");
				tv0->SetMessage(525346);
				tv0->ClearReplies();
				if (f_1489_a1_b(tv1)) {
					tv0->AddReply(525348, 44408, 26716);
				}
				if (f_1495_a1_b(tv1)) {
					tv0->AddReply(541760, 43964, 43963);
				}
				tv0->AddReply(525347, -1, 26715);
				tv0->AddReply(529145, -1, 30591);
				return;
			}
			if (a0 == 43964) {
				f_48a_a1_v("Fear");
				tv0->SetMessage(541761);
				tv0->ClearReplies();
				tv0->AddReply(541762, -1, 43965);
				tv0->AddReply(541763, -1, 43966);
				return;
			}
			if (a0 == 44408) {
				f_48a_a1_v("Rage");
				tv0->SetMessage(542106);
				tv0->ClearReplies();
				tv0->AddReply(542107, 44410, 44409);
				tv0->AddReply(542110, 30593, 44412);
				return;
			}
			if (a0 == 44410) {
				f_48a_a1_v("Rage");
				tv0->SetMessage(542108);
				tv0->ClearReplies();
				tv0->AddReply(542109, 26717, 44411);
				tv0->AddReply(542111, 30593, 44414);
				return;
			}
			if (a0 == 26717) {
				f_48a_a1_v("Neutral");
				tv0->SetMessage(525349);
				tv0->ClearReplies();
				tv0->AddReply(529146, 30593, 30592);
				tv0->AddReply(529150, 30593, 30596);
				return;
			}
			if (a0 == 30593) {
				f_48a_a1_v("Neutral");
				tv0->SetMessage(529147);
				tv0->ClearReplies();
				tv0->AddReply(529148, 30595, 30594);
				return;
			}
			if (a0 == 30595) {
				f_48a_a1_v("Adoration");
				tv0->SetMessage(529149);
				tv0->ClearReplies();
				tv0->AddReply(525350, 26719, 26718);
				tv0->AddReply(542112, 26721, 44416);
				return;
			}
			if (a0 == 26719) {
				f_48a_a1_v("Neutral");
				tv0->SetMessage(525351);
				tv0->ClearReplies();
				tv0->AddReply(525352, 26721, 26720);
				tv0->AddReply(525355, 26724, 26723);
				return;
			}
			if (a0 == 26724) {
				f_48a_a1_v("Neutral");
				tv0->SetMessage(525356);
				tv0->ClearReplies();
				tv0->AddReply(525357, -1, 26725);
				return;
			}
			if (a0 == 26721) {
				f_48a_a1_v("Neutral");
				tv0->SetMessage(525353);
				tv0->ClearReplies();
				tv0->AddReply(525354, -1, 26722);
				return;
			}
			tv3 = true;
			if (f_12f6_a0_b()) {
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
		if (!f_1120_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f0_a0_i());
		L0->SetNPCDescription(f_12ee_a0_i());
		L0->SetPhoto(f_12f2_a0_s());
		L0->SetPhoto2(f_12f4_a0_s());
		L0->SetPlayerName(f_1650_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1177_a1_b(f_1236_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1165_a1_v(a0);
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
			if (f_14c5_a1_b(tv1)) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(525442);
				tv0->ClearReplies();
				tv0->AddReply(525443, -1, 26811);
				tv0->AddReply(529337, -1, 30792);
				break;
			}
			f_6bf_a1_v("Neutral");
			tv0->SetMessage(525406);
			tv0->ClearReplies();
			if (f_14a1_a1_b(tv1)) {
				tv0->AddReply(525407, 26776, 26775);
			}
			if (f_14b9_a1_b(tv1) && f_14ad_a1_b(tv1)) {
				tv0->AddReply(525425, 40970, 26793);
			}
			if (f_14dd_a1_b(tv1) && f_14d1_a1_b(tv1)) {
				tv0->AddReply(525575, 26923, 26922);
			}
			tv0->AddReply(525412, -1, 26780);
			tv0->AddReply(538971, -1, 40909);
			break;
			return;
		}
		if (f_12f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1201_a1_v(tv2);
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

	void f_6bf_a1_v(string a0)
	{
		if (!f_12f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1211_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_122f_a0_v();
			if (a1 == 26779) {
				f_138c_a2_v(tv1, tv0);
				f_142f_a2_v(tv1, tv0);
			}
			if (a1 == 40921) {
				f_138c_a2_v(tv1, tv0);
				f_142f_a2_v(tv1, tv0);
			}
			if (a1 == 26801) {
				f_13ac_a2_v(tv1, tv0);
				f_142f_a2_v(tv1, tv0);
			}
			if (a1 == 26922) {
				f_13b5_a2_v(tv1, tv0);
			}
			if (a1 == 26924) {
				f_13bb_a2_v(tv1, tv0);
			}
			if (a0 == 26810) {
				if (f_14c5_a1_b(tv1)) {
					f_6bf_a1_v("Neutral");
					tv0->SetMessage(525442);
					tv0->ClearReplies();
					tv0->AddReply(525443, -1, 26811);
					tv0->AddReply(529337, -1, 30792);
					return;
				}
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(525406);
				tv0->ClearReplies();
				if (f_14a1_a1_b(tv1)) {
					tv0->AddReply(525407, 26776, 26775);
				}
				if (f_14b9_a1_b(tv1) && f_14ad_a1_b(tv1)) {
					tv0->AddReply(525425, 40970, 26793);
				}
				if (f_14dd_a1_b(tv1) && f_14d1_a1_b(tv1)) {
					tv0->AddReply(525575, 26923, 26922);
				}
				tv0->AddReply(525412, -1, 26780);
				tv0->AddReply(538971, -1, 40909);
				return;
			}
			if (a0 == 26923) {
				f_6bf_a1_v("Adoration");
				tv0->SetMessage(525576);
				tv0->ClearReplies();
				tv0->AddReply(538918, 40872, 40871);
				tv0->AddReply(538922, 40872, 40875);
				return;
			}
			if (a0 == 40872) {
				f_6bf_a1_v("Dream");
				tv0->SetMessage(538919);
				tv0->ClearReplies();
				tv0->AddReply(538920, 40874, 40873);
				return;
			}
			if (a0 == 40874) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(538921);
				tv0->ClearReplies();
				tv0->AddReply(539033, 40975, 40974);
				tv0->AddReply(539035, 40975, 40976);
				return;
			}
			if (a0 == 40975) {
				f_6bf_a1_v("Dream");
				tv0->SetMessage(539034);
				tv0->ClearReplies();
				tv0->AddReply(538923, 40878, 40877);
				tv0->AddReply(538925, 40878, 40879);
				return;
			}
			if (a0 == 40878) {
				f_6bf_a1_v("Dream");
				tv0->SetMessage(538924);
				tv0->ClearReplies();
				tv0->AddReply(525577, -1, 26924);
				tv0->AddReply(525614, -1, 26961);
				return;
			}
			if (a0 == 40970) {
				f_6bf_a1_v("Rage");
				tv0->SetMessage(539029);
				tv0->ClearReplies();
				tv0->AddReply(539030, 26794, 40971);
				tv0->AddReply(539031, 26794, 40972);
				return;
			}
			if (a0 == 26794) {
				f_6bf_a1_v("Fear");
				tv0->SetMessage(525426);
				tv0->ClearReplies();
				tv0->AddReply(525427, 40979, 26795);
				return;
			}
			if (a0 == 40979) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(539036);
				tv0->ClearReplies();
				tv0->AddReply(539037, 40982, 40980);
				tv0->AddReply(539038, 40983, 40981);
				return;
			}
			if (a0 == 40983) {
				f_6bf_a1_v("Rage");
				tv0->SetMessage(539040);
				tv0->ClearReplies();
				tv0->AddReply(539046, 40991, 40990);
				tv0->AddReply(539048, 40996, 40992);
				return;
			}
			if (a0 == 40991) {
				f_6bf_a1_v("Rage");
				tv0->SetMessage(539047);
				tv0->ClearReplies();
				tv0->AddReply(539041, 40996, 40984);
				return;
			}
			if (a0 == 40996) {
				f_6bf_a1_v("Dream");
				tv0->SetMessage(539051);
				tv0->ClearReplies();
				tv0->AddReply(539052, 40999, 40998);
				return;
			}
			if (a0 == 40999) {
				f_6bf_a1_v("Dream");
				tv0->SetMessage(539053);
				tv0->ClearReplies();
				tv0->AddReply(539054, 26796, 41000);
				tv0->AddReply(539056, 26798, 41003);
				return;
			}
			if (a0 == 40982) {
				f_6bf_a1_v("Dream");
				tv0->SetMessage(539039);
				tv0->ClearReplies();
				tv0->AddReply(539044, 40988, 40987);
				return;
			}
			if (a0 == 40988) {
				f_6bf_a1_v("Rage");
				tv0->SetMessage(539045);
				tv0->ClearReplies();
				tv0->AddReply(539049, 40983, 40993);
				tv0->AddReply(539050, 26796, 40994);
				return;
			}
			if (a0 == 26796) {
				f_6bf_a1_v("Dream");
				tv0->SetMessage(525428);
				tv0->ClearReplies();
				tv0->AddReply(525429, 26798, 26797);
				tv0->AddReply(539071, 41020, 41019);
				return;
			}
			if (a0 == 41020) {
				f_6bf_a1_v("Dream");
				tv0->SetMessage(539072);
				tv0->ClearReplies();
				tv0->AddReply(539073, 26798, 41021);
				return;
			}
			if (a0 == 26798) {
				f_6bf_a1_v("Dream");
				tv0->SetMessage(525430);
				tv0->ClearReplies();
				tv0->AddReply(525431, 26800, 26799);
				return;
			}
			if (a0 == 26800) {
				f_6bf_a1_v("Fear");
				tv0->SetMessage(525432);
				tv0->ClearReplies();
				tv0->AddReply(538913, 40867, 40866);
				tv0->AddReply(539074, 41024, 41023);
				return;
			}
			if (a0 == 41024) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(539075);
				tv0->ClearReplies();
				tv0->AddReply(539076, 41026, 41025);
				return;
			}
			if (a0 == 41026) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(539077);
				tv0->ClearReplies();
				tv0->AddReply(539078, 41029, 41027);
				return;
			}
			if (a0 == 41029) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(539080);
				tv0->ClearReplies();
				tv0->AddReply(539081, 41028, 41030);
				return;
			}
			if (a0 == 40867) {
				f_6bf_a1_v("Fear");
				tv0->SetMessage(538914);
				tv0->ClearReplies();
				tv0->AddReply(525434, 41028, 26802);
				tv0->AddReply(538915, 41028, 40868);
				return;
			}
			if (a0 == 41028) {
				f_6bf_a1_v("Fear");
				tv0->SetMessage(539079);
				tv0->ClearReplies();
				tv0->AddReply(525433, -1, 26801);
				if (f_14c5_a1_b(tv1)) {
					tv0->AddReply(538917, -1, 40870);
				}
				return;
			}
			if (a0 == 26776) {
				f_6bf_a1_v("Fear");
				tv0->SetMessage(525408);
				tv0->ClearReplies();
				tv0->AddReply(525409, 40903, 26777);
				return;
			}
			if (a0 == 40903) {
				f_6bf_a1_v("Fear");
				tv0->SetMessage(538965);
				tv0->ClearReplies();
				tv0->AddReply(538966, 40905, 40904);
				tv0->AddReply(538972, 40905, 40910);
				return;
			}
			if (a0 == 40905) {
				f_6bf_a1_v("Dream");
				tv0->SetMessage(538967);
				tv0->ClearReplies();
				tv0->AddReply(538968, 40907, 40906);
				return;
			}
			if (a0 == 40907) {
				f_6bf_a1_v("Dream");
				tv0->SetMessage(538969);
				tv0->ClearReplies();
				tv0->AddReply(538970, 40912, 40908);
				return;
			}
			if (a0 == 40912) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(538973);
				tv0->ClearReplies();
				tv0->AddReply(538974, 40914, 40913);
				tv0->AddReply(538977, 40917, 40916);
				return;
			}
			if (a0 == 40917) {
				f_6bf_a1_v("Fear");
				tv0->SetMessage(538978);
				tv0->ClearReplies();
				tv0->AddReply(538979, 40914, 40918);
				return;
			}
			if (a0 == 40914) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(538975);
				tv0->ClearReplies();
				tv0->AddReply(525411, -1, 26779);
				tv0->AddReply(538980, 26778, 40920);
				return;
			}
			if (a0 == 26778) {
				f_6bf_a1_v("Neutral");
				tv0->SetMessage(525410);
				tv0->ClearReplies();
				tv0->AddReply(538981, -1, 40921);
				return;
			}
			tv3 = true;
			if (f_12f6_a0_b()) {
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
		if (!f_1120_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f0_a0_i());
		L0->SetNPCDescription(f_12ee_a0_i());
		L0->SetPhoto(f_12f2_a0_s());
		L0->SetPhoto2(f_12f4_a0_s());
		L0->SetPlayerName(f_1650_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1177_a1_b(f_1236_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1165_a1_v(a0);
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
			f_a8d_a1_v("Neutral");
			tv0->SetMessage(525465);
			tv0->ClearReplies();
			tv0->AddReply(526257, 27533, 27531);
			tv0->AddReply(525466, -1, 26822);
			break;
			return;
		}
		if (f_12f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1201_a1_v(tv2);
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

	void f_a8d_a1_v(string a0)
	{
		if (!f_12f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1211_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_122f_a0_v();
			if (a0 == 26821) {
				f_a8d_a1_v("Neutral");
				tv0->SetMessage(525465);
				tv0->ClearReplies();
				tv0->AddReply(526257, 27533, 27531);
				tv0->AddReply(525466, -1, 26822);
				return;
			}
			if (a0 == 27533) {
				f_a8d_a1_v("Neutral");
				tv0->SetMessage(526259);
				tv0->ClearReplies();
				tv0->AddReply(526260, -1, 27534);
				tv0->AddReply(526261, -1, 27535);
				return;
			}
			tv3 = true;
			if (f_12f6_a0_b()) {
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
		if (!f_1120_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f0_a0_i());
		L0->SetNPCDescription(f_12ee_a0_i());
		L0->SetPhoto(f_12f2_a0_s());
		L0->SetPhoto2(f_12f4_a0_s());
		L0->SetPlayerName(f_1650_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1177_a1_b(f_1236_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1165_a1_v(a0);
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
			f_b8b_a1_v("Fear");
			tv0->SetMessage(526085);
			tv0->ClearReplies();
			if (f_14e9_a1_b(tv1) && f_14f5_a1_b(tv1) && f_1501_a1_b(tv1)) {
				tv0->AddReply(526086, 27373, 27372);
			}
			tv0->AddReply(526089, -1, 27375);
			tv0->AddReply(528861, -1, 30283);
			break;
			return;
		}
		if (f_12f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1201_a1_v(tv2);
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

	void f_b8b_a1_v(string a0)
	{
		if (!f_12f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1211_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_122f_a0_v();
			if (a1 == 27372) {
				f_13d5_a2_v(tv1, tv0);
			}
			if (a1 == 27374) {
				f_13db_a2_v(tv1, tv0);
			}
			if (a1 == 43967) {
				f_13db_a2_v(tv1, tv0);
			}
			if (a0 == 27371) {
				f_b8b_a1_v("Fear");
				tv0->SetMessage(526085);
				tv0->ClearReplies();
				if (f_14e9_a1_b(tv1) && f_14f5_a1_b(tv1) && f_1501_a1_b(tv1)) {
					tv0->AddReply(526086, 27373, 27372);
				}
				tv0->AddReply(526089, -1, 27375);
				tv0->AddReply(528861, -1, 30283);
				return;
			}
			if (a0 == 27373) {
				f_b8b_a1_v("Fear");
				tv0->SetMessage(526087);
				tv0->ClearReplies();
				tv0->AddReply(528862, 30285, 30284);
				return;
			}
			if (a0 == 30285) {
				f_b8b_a1_v("Dream");
				tv0->SetMessage(528863);
				tv0->ClearReplies();
				tv0->AddReply(526088, -1, 27374);
				tv0->AddReply(541764, -1, 43967);
				return;
			}
			tv3 = true;
			if (f_12f6_a0_b()) {
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
		if (!f_1120_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f0_a0_i());
		L0->SetNPCDescription(f_12ee_a0_i());
		L0->SetPhoto(f_12f2_a0_s());
		L0->SetPhoto2(f_12f4_a0_s());
		L0->SetPlayerName(f_1650_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1177_a1_b(f_1236_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1165_a1_v(a0);
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
			f_cc1_a1_v("Neutral");
			tv0->SetMessage(527548);
			tv0->ClearReplies();
			if (f_150d_a1_b(tv1) && f_1519_a1_b(tv1)) {
				tv0->AddReply(527551, 28893, 28892);
			}
			tv0->AddReply(527550, -1, 28891);
			break;
			return;
		}
		if (f_12f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1201_a1_v(tv2);
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

	void f_cc1_a1_v(string a0)
	{
		if (!f_12f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1211_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_122f_a0_v();
			if (a1 == 28892) {
				f_1413_a2_v(tv1, tv0);
			}
			if (a1 == 28904) {
				f_13e0_a2_v(tv1, tv0);
			}
			if (a0 == 28889) {
				f_cc1_a1_v("Neutral");
				tv0->SetMessage(527548);
				tv0->ClearReplies();
				if (f_150d_a1_b(tv1) && f_1519_a1_b(tv1)) {
					tv0->AddReply(527551, 28893, 28892);
				}
				tv0->AddReply(527550, -1, 28891);
				return;
			}
			if (a0 == 28893) {
				f_cc1_a1_v("Dream");
				tv0->SetMessage(527552);
				tv0->ClearReplies();
				tv0->AddReply(527553, 28895, 28894);
				tv0->AddReply(527564, 28906, 28905);
				return;
			}
			if (a0 == 28906) {
				f_cc1_a1_v("Dream");
				tv0->SetMessage(527565);
				tv0->ClearReplies();
				tv0->AddReply(527566, 28897, 28907);
				return;
			}
			if (a0 == 28895) {
				f_cc1_a1_v("Rage");
				tv0->SetMessage(527554);
				tv0->ClearReplies();
				tv0->AddReply(527555, 28897, 28896);
				return;
			}
			if (a0 == 28897) {
				f_cc1_a1_v("Neutral");
				tv0->SetMessage(527556);
				tv0->ClearReplies();
				tv0->AddReply(527557, 28899, 28898);
				return;
			}
			if (a0 == 28899) {
				f_cc1_a1_v("Neutral");
				tv0->SetMessage(527558);
				tv0->ClearReplies();
				tv0->AddReply(527559, 28901, 28900);
				return;
			}
			if (a0 == 28901) {
				f_cc1_a1_v("Adoration");
				tv0->SetMessage(527560);
				tv0->ClearReplies();
				tv0->AddReply(527561, 28903, 28902);
				return;
			}
			if (a0 == 28903) {
				f_cc1_a1_v("Adoration");
				tv0->SetMessage(527562);
				tv0->ClearReplies();
				tv0->AddReply(527563, -1, 28904);
				return;
			}
			tv3 = true;
			if (f_12f6_a0_b()) {
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
		if (!f_1120_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f0_a0_i());
		L0->SetNPCDescription(f_12ee_a0_i());
		L0->SetPhoto(f_12f2_a0_s());
		L0->SetPhoto2(f_12f4_a0_s());
		L0->SetPlayerName(f_1650_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1177_a1_b(f_1236_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1165_a1_v(a0);
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
			f_e32_a1_v("Neutral");
			tv0->SetMessage(539303);
			tv0->ClearReplies();
			tv0->AddReply(542544, 44940, 44939);
			tv0->AddReply(539304, -1, 41247);
			tv0->AddReply(542543, -1, 44938);
			break;
			return;
		}
		if (f_12f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1201_a1_v(tv2);
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

	void f_e32_a1_v(string a0)
	{
		if (!f_12f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1211_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_122f_a0_v();
			if (a0 == 41246) {
				f_e32_a1_v("Neutral");
				tv0->SetMessage(539303);
				tv0->ClearReplies();
				tv0->AddReply(542544, 44940, 44939);
				tv0->AddReply(539304, -1, 41247);
				tv0->AddReply(542543, -1, 44938);
				return;
			}
			if (a0 == 44940) {
				f_e32_a1_v("Dream");
				tv0->SetMessage(542545);
				tv0->ClearReplies();
				tv0->AddReply(542553, 44954, 44950);
				tv0->AddReply(542554, 44952, 44951);
				return;
			}
			if (a0 == 44952) {
				f_e32_a1_v("Adoration");
				tv0->SetMessage(542555);
				tv0->ClearReplies();
				tv0->AddReply(542556, 44954, 44953);
				return;
			}
			if (a0 == 44954) {
				f_e32_a1_v("Dream");
				tv0->SetMessage(542557);
				tv0->ClearReplies();
				tv0->AddReply(542558, 44957, 44956);
				return;
			}
			if (a0 == 44957) {
				f_e32_a1_v("Adoration");
				tv0->SetMessage(542559);
				tv0->ClearReplies();
				tv0->AddReply(542560, 44962, 44958);
				tv0->AddReply(542561, 44960, 44959);
				return;
			}
			if (a0 == 44960) {
				f_e32_a1_v("Neutral");
				tv0->SetMessage(542562);
				tv0->ClearReplies();
				tv0->AddReply(542563, 44962, 44961);
				return;
			}
			if (a0 == 44962) {
				f_e32_a1_v("Neutral");
				tv0->SetMessage(542564);
				tv0->ClearReplies();
				tv0->AddReply(542565, 44966, 44964);
				tv0->AddReply(542566, -1, 44965);
				return;
			}
			if (a0 == 44966) {
				f_e32_a1_v("Neutral");
				tv0->SetMessage(542567);
				tv0->ClearReplies();
				tv0->AddReply(542568, -1, 44967);
				tv0->AddReply(542569, -1, 44968);
				return;
			}
			tv3 = true;
			if (f_12f6_a0_b()) {
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
		if (!f_1120_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12f0_a0_i());
		L0->SetNPCDescription(f_12ee_a0_i());
		L0->SetPhoto(f_12f2_a0_s());
		L0->SetPhoto2(f_12f4_a0_s());
		L0->SetPlayerName(f_1650_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_1177_a1_b(f_1236_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1165_a1_v(a0);
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
			f_f94_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_12f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1201_a1_v(tv2);
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

	void f_f94_a1_v(string a0)
	{
		if (!f_12f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1211_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_122f_a0_v();
			if (a0 == 42548) {
				f_f94_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_12f6_a0_b()) {
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
		g1 = false;
		f_fdb_a0_v();
	}

	void f_fdb_a0_v(void)
	{
		if (!f_111b_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_108b_a0_v();
		}
	}

	bool f_fe9_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1112_a1_b(L0);
	}

	void f_ff8_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_ffd_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_10d7_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1013_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_101c_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_101c_a0_v();
			if (f_111b_a0_b() && f_ffd_a0_b()) {
				if (f_fe9_a0_b()) {
					f_11b1_a1_b(f_1236_a0_o());
				}
			} else {
				f_ff8_a0_v();
				f_1013_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_10d2_a0_v();
		f_101c_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_101c_a0_v();
		f_1201_a1_v("Neutral");
		f_1013_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1013_a0_v();
		} else {
			f_1201_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_10d2_a0_v();
			f_1112_a1_b(a0);
			enable OnUse;
			f_1661_a1_v(a0);
			f_1201_a1_v("Neutral");
			f_101c_a0_v();
			f_1013_a0_v();
		}
	}
}

void f_108b_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_111b_a0_b()) {
		return;
	}
	L0 = f_12dd_a0_i();
	for (L1 = 0; L1 < 5 && f_111b_a0_b(); L1++) {
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
			@PlayAnimation("all", f_12d6_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_10d0_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_10d0_a0_b(void)
{
	return true;
}

void f_10d2_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_10d7_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_10df_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_10eb_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_10df_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_1246_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_1101_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1108_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1112_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1108_a1_b(L0);
}

bool f_111b_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1120_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_123c_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_12f6_a0_b()) {
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

void f_1165_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_12f6_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1177_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_11b1_a1_b(a0)) {
			if (!f_11d6_a1_b(a0)) {
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
		if (!f_11d6_a1_b(a0)) {
			if (!f_11b1_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_11b1_a1_b(object a0)
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
	return f_1220_a1_b(L4);
}

bool f_11d6_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_12c7_a0_i() + "m";
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
	return f_1220_a1_b(L4);
}

void f_1201_a1_v(string a0)
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

void f_1211_a2_v(string a0, bool a1)
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

bool f_1220_a1_b(string a0)
{
	if (f_12f6_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_122f_a0_v(void)
{
	if (f_12f6_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1236_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_123c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_1246_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_1251_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_1256_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1262_a2_v(object a0, int a1)
{
	f_1101_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1256_a2_v(L0, a1);
	}
}

void f_1275_a3_v(object a0, object a1, int a2)
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
		f_1256_a2_v(L0, a2);
	}
}

void f_1288_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1275_a3_v(a0, L0, a2);
}

bool f_1295_a2_b(object a0, float a1)
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
	f_12b8_a1_v(a1);
	f_10eb_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_12b8_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

float f_12c2_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_12c7_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_12d0_a1_b(int a0)
{
	return f_12c7_a0_i() == a0;
}

string f_12d6_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_12dd_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_12d6_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_12ee_a0_i(void)
{
	return 515530;
}

int f_12f0_a0_i(void)
{
	return 502856;
}

string f_12f2_a0_s(void)
{
	return "ui/NPC_Anna.png";
}

string f_12f4_a0_s(void)
{
	return "ui/NPC_Anna_b.png";
}

bool f_12f6_a0_b(void)
{
	return true;
}

void f_12f8_a2_v(object a0, object a1)
{
	f_162f_a3_v(f_161e_a0_o(), "pt_map_notkin", 2);
	a1->ShowMap(f_161e_a0_o());
}

void f_1308_a2_v(object a0, object a1)
{
	f_1295_a2_b(a0, 0.05000000074505806);
}

void f_130f_a2_v(object a0, object a1)
{
	@SetVariable("ook1Anna1", 1);
}

void f_1315_a2_v(object a0, object a1)
{
	@SetVariable("ook1Anna2", 1);
}

void f_131b_a2_v(object a0, object a1)
{
	@SetVariable("ook1Anna3", 1);
}

void f_1321_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k1q03", 1);
	L0 = f_161e_a0_o();
	L0->AddMark("k1q03AnnaGotoNotkin", "pt_map_notkin", 0, 524799, f_12c2_a0_f());
	f_1573_a0_v();
	f_1580_a0_v();
}

void f_133b_a2_v(object a0, object a1)
{
	@SetVariable("k1q03", 1000);
	f_158d_a0_v();
}

void f_1344_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k2q04", 2);
	L0 = f_161e_a0_o();
	L0->AddMark("k2q04AnnaGotoGatherer1", "pt_map_gatherer1", 0, 508643, f_12c2_a0_f());
	L0->AddMark("k2q04AnnaGotoGatherer2", "pt_map_gatherer2", 0, 539379, f_12c2_a0_f());
	L0->AddMark("k2q04AnnaGotoGatherer3", "pt_map_gatherer3", 0, 508644, f_12c2_a0_f());
	f_15a7_a0_v();
}

void f_136d_a2_v(object a0, object a1)
{
	@SetVariable("k2q04", 9);
	f_159a_a0_v();
}

void f_1376_a2_v(object a0, object a1)
{
	@Trace("alpha_pills 5 is given");
	f_1288_a3_v(a0, "alpha_pills", 5);
}

void f_1381_a2_v(object a0, object a1)
{
	@Trace("beta_pills 5 is given");
	f_1288_a3_v(a0, "beta_pills", 5);
}

void f_138c_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k3q01", 2);
	L0 = f_161e_a0_o();
	L0->AddMark("k3q01AnnaGotoMladVlad", "pt_map_mladvlad", 1, 525454, f_12c2_a0_f());
	L0->AddMark("k3q01AnnaGotoKapella", "pt_map_kapella", 1, 525455, f_12c2_a0_f());
	f_15c1_a0_v();
}

void f_13ac_a2_v(object a0, object a1)
{
	@SetVariable("k3q01", 3);
	f_15b4_a0_v();
}

void f_13b5_a2_v(object a0, object a1)
{
	@SetVariable("ook3Anna1", 1);
}

void f_13bb_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k3q03", 1);
	L0 = f_161e_a0_o();
	L0->AddMark("k3q03AnnaGotoEva", "pt_map_eva", 0, 525615, f_12c2_a0_f());
	f_15ce_a0_v();
	f_15db_a0_v();
}

void f_13d5_a2_v(object a0, object a1)
{
	@SetVariable("ook6Anna1", 1);
}

void f_13db_a2_v(object a0, object a1)
{
	f_15e8_a0_v();
}

void f_13e0_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("k11q01SoulCount", L0);
	L0 = L0 + 1;
	@SetVariable("k11q01SoulCount", L0);
	if (L0 == 2) {
		f_1566_a0_v();
	} else {
		if (L0 == 3) {
			f_1559_a0_v();
		} else {
			if (L0 == 4) {
				f_154c_a0_v();
			} else {
				if (L0 == 5) {
					f_153f_a0_v();
				} else {
					if (L0 == 6) {
						f_1532_a0_v();
					} else {
						if (L0 == 7) {
							f_1525_a0_v();
						}
					}
				}
			}
		}
	}
}

void f_1413_a2_v(object a0, object a1)
{
	@SetVariable("ook11Anna1", 1);
}

void f_1419_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_141f_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1425_a2_v(object a0, object a1)
{
	@Trace("money 1500 is given");
	f_1262_a2_v(a0, 1500);
}

void f_142f_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

bool f_1435_a1_b(object a0)
{
	if (f_1251_a1_i("k1q01") == 4) {
		return true;
	}
	return false;
}

bool f_1441_a1_b(object a0)
{
	if (f_1251_a1_i("ook1Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_144d_a1_b(object a0)
{
	if (f_1251_a1_i("k1q01Healed") != 0) {
		return true;
	}
	return false;
}

bool f_1459_a1_b(object a0)
{
	if (f_1251_a1_i("ook1Anna2") == 0) {
		return true;
	}
	return false;
}

bool f_1465_a1_b(object a0)
{
	if (f_1251_a1_i("ook1Anna3") == 0) {
		return true;
	}
	return false;
}

bool f_1471_a1_b(object a0)
{
	if (f_1251_a1_i("k1q03") == 0) {
		return true;
	}
	return false;
}

bool f_147d_a1_b(object a0)
{
	if (f_1251_a1_i("k1q03") == 2) {
		return true;
	}
	return false;
}

bool f_1489_a1_b(object a0)
{
	if (f_1251_a1_i("k2q04") == 1) {
		return true;
	}
	return false;
}

bool f_1495_a1_b(object a0)
{
	if (f_1251_a1_i("k2q04") == 3) {
		return true;
	}
	return false;
}

bool f_14a1_a1_b(object a0)
{
	if (f_1251_a1_i("k3q01") == 1) {
		return true;
	}
	return false;
}

bool f_14ad_a1_b(object a0)
{
	if (f_1251_a1_i("k3q01") == 2) {
		return true;
	}
	return false;
}

bool f_14b9_a1_b(object a0)
{
	if (f_1251_a1_i("k3q01KapellaAboutHan") != 0) {
		return true;
	}
	return false;
}

bool f_14c5_a1_b(object a0)
{
	if (f_1251_a1_i("k3q01") == 3) {
		return true;
	}
	return false;
}

bool f_14d1_a1_b(object a0)
{
	if (f_1251_a1_i("ook3Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_14dd_a1_b(object a0)
{
	if (f_1251_a1_i("k3q03") == 0) {
		return true;
	}
	return false;
}

bool f_14e9_a1_b(object a0)
{
	if (f_1251_a1_i("k6q01") == 2) {
		return true;
	}
	return false;
}

bool f_14f5_a1_b(object a0)
{
	if (f_1251_a1_i("k6q01DankoPos") > 1) {
		return true;
	}
	return false;
}

bool f_1501_a1_b(object a0)
{
	if (f_1251_a1_i("ook6Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_150d_a1_b(object a0)
{
	if (f_1251_a1_i("k11q01") == 9) {
		return true;
	}
	return false;
}

bool f_1519_a1_b(object a0)
{
	if (f_1251_a1_i("ook11Anna1") == 0) {
		return true;
	}
	return false;
}

void f_1525_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 498, 1, 528065);
	f_1602_a2_b(L0, 480);
}

void f_1532_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 497, 1, 528064);
	f_1602_a2_b(L0, 480);
}

void f_153f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 496, 1, 528063);
	f_1602_a2_b(L0, 480);
}

void f_154c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 495, 1, 528062);
	f_1602_a2_b(L0, 480);
}

void f_1559_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 494, 1, 528061);
	f_1602_a2_b(L0, 480);
}

void f_1566_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 493, 1, 528060);
	f_1602_a2_b(L0, 480);
}

void f_1573_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 333, 2, 524800);
	f_1602_a2_b(L0, -1);
}

void f_1580_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 334, 2, 524801);
	f_1602_a2_b(L0, 333);
}

void f_158d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 336, 2, 524803);
	f_1602_a2_b(L0, 333);
}

void f_159a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 510, 2, 529709);
	f_1602_a2_b(L0, 507);
}

void f_15a7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 509, 2, 529708);
	f_1602_a2_b(L0, 507);
}

void f_15b4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 341, 1, 525450);
	f_1602_a2_b(L0, 337);
}

void f_15c1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 339, 1, 525448);
	f_1602_a2_b(L0, 337);
}

void f_15ce_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 350, 2, 525616);
	f_1602_a2_b(L0, -1);
}

void f_15db_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 351, 2, 525617);
	f_1602_a2_b(L0, 350);
}

void f_15e8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 412, 1, 526113);
	f_1602_a2_b(L0, 408);
}

object f_15f5_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1602_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_15f5_a0_o();
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

void f_162f_a3_v(object a0, string a1, float a2)
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

int f_1650_a0_i(void)
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

void f_1661_a1_v(object a0)
{
	if (!g1) {
		t6{a0};
		g1 = true;
	}
	if (f_12d0_a1_b(1)) {
		t0{a0};
		return;
	}
	if (f_12d0_a1_b(2)) {
		t2{a0};
		return;
	}
	if (f_12d0_a1_b(3)) {
		t4{a0};
		return;
	}
	if (f_12d0_a1_b(6)) {
		t8{a0};
		return;
	}
	if (f_12d0_a1_b(11)) {
		t10{a0};
		return;
	}
	if (f_12d0_a1_b(12)) {
		t12{a0};
		return;
	}
	t14{a0};
}

