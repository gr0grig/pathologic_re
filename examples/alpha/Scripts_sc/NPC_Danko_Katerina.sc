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
		f_1461_a0_v();
		if (!f_fc0_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_1001_a1_v("Neutral");
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
		f_1465_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_fb4_a1_b(a0);
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
		if (!f_fc5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1088_a0_i());
		L0->SetPhoto(f_108a_a0_s());
		L0->SetPlayerName(f_13e0_a0_i());
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
		f_ffd_a1_v(a0);
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
			f_10a0_a2_v(tv1, tv0);
			f_b4_a1_v("Neutral");
			tv0->SetMessage(295);
			tv0->ClearReplies();
			tv0->AddReply(296, 350, 347);
			tv0->AddReply(297, 350, 348);
			tv0->AddReply(298, 350, 349);
			break;
			return;
		}
		if (f_108c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1001_a1_v(tv2);
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

	void f_b4_a1_v(string a0)
	{
		if (!f_108c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1001_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1013_a0_v();
			if (a0 == 346) {
				f_10a0_a2_v(tv1, tv0);
				f_b4_a1_v("Neutral");
				tv0->SetMessage(295);
				tv0->ClearReplies();
				tv0->AddReply(296, 350, 347);
				tv0->AddReply(297, 350, 348);
				tv0->AddReply(298, 350, 349);
				return;
			}
			if (a0 == 350) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(299);
				tv0->ClearReplies();
				tv0->AddReply(300, 355, 351);
				tv0->AddReply(301, 358, 352);
				return;
			}
			if (a0 == 358) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(305);
				tv0->ClearReplies();
				tv0->AddReply(306, -1, 359);
				tv0->AddReply(307, -1, 360);
				return;
			}
			if (a0 == 355) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(302);
				tv0->ClearReplies();
				tv0->AddReply(304, -1, 357);
				tv0->AddReply(303, -1, 356);
				return;
			}
			tv3 = true;
			if (f_108c_a0_b()) {
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
		if (!f_fc5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1088_a0_i());
		L0->SetPhoto(f_108a_a0_s());
		L0->SetPlayerName(f_13e0_a0_i());
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
		f_ffd_a1_v(a0);
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
			f_1fc_a1_v("Neutral");
			tv0->SetMessage(12770);
			tv0->ClearReplies();
			if (f_12d4_a1_b(tv1) && f_12bc_a1_b(tv1)) {
				tv0->AddReply(12771, 3726, 13970);
			}
			if (f_12e0_a1_b(tv1) && f_12c8_a1_b(tv1)) {
				tv0->AddReply(12772, 13972, 13971);
			}
			if (f_12ec_a1_b(tv1) && f_1304_a1_b(tv1) || f_12f8_a1_b(tv1) && f_1304_a1_b(tv1)) {
				tv0->AddReply(12791, 13991, 13990);
			}
			tv0->AddReply(12790, -1, 13989);
			break;
			return;
		}
		if (f_108c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1001_a1_v(tv2);
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

	void f_1fc_a1_v(string a0)
	{
		if (!f_108c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1001_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1013_a0_v();
			if (a1 == 3742) {
				f_11ab_a2_v(tv1, tv0);
			}
			if (a1 == 3745) {
				f_11ab_a2_v(tv1, tv0);
			}
			if (a1 == 3746) {
				f_11ab_a2_v(tv1, tv0);
			}
			if (a1 == 3740) {
				f_11ab_a2_v(tv1, tv0);
			}
			if (a1 == 13984) {
				f_11b1_a2_v(tv1, tv0);
				f_11b7_a2_v(tv1, tv0);
			}
			if (a1 == 13988) {
				f_11b1_a2_v(tv1, tv0);
				f_11b7_a2_v(tv1, tv0);
			}
			if (a1 == 13990) {
				f_11dc_a2_v(tv1, tv0);
			}
			if (a0 == 13969) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(12770);
				tv0->ClearReplies();
				if (f_12d4_a1_b(tv1) && f_12bc_a1_b(tv1)) {
					tv0->AddReply(12771, 3726, 13970);
				}
				if (f_12e0_a1_b(tv1) && f_12c8_a1_b(tv1)) {
					tv0->AddReply(12772, 13972, 13971);
				}
				if (f_12ec_a1_b(tv1) && f_1304_a1_b(tv1) || f_12f8_a1_b(tv1) && f_1304_a1_b(tv1)) {
					tv0->AddReply(12791, 13991, 13990);
				}
				tv0->AddReply(12790, -1, 13989);
				return;
			}
			if (a0 == 13991) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(12792);
				tv0->ClearReplies();
				tv0->AddReply(12793, 13993, 13992);
				return;
			}
			if (a0 == 13993) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(12794);
				tv0->ClearReplies();
				tv0->AddReply(12795, -1, 13994);
				tv0->AddReply(12798, -1, 13997);
				return;
			}
			if (a0 == 13972) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(12773);
				tv0->ClearReplies();
				tv0->AddReply(12774, 13974, 13973);
				return;
			}
			if (a0 == 13974) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(12775);
				tv0->ClearReplies();
				tv0->AddReply(12776, 13976, 13975);
				return;
			}
			if (a0 == 13976) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(12777);
				tv0->ClearReplies();
				tv0->AddReply(12779, 13980, 13978);
				tv0->AddReply(12778, 13979, 13977);
				return;
			}
			if (a0 == 13979) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(12780);
				tv0->ClearReplies();
				tv0->AddReply(13020, 13983, 14226);
				return;
			}
			if (a0 == 13980) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(12781);
				tv0->ClearReplies();
				tv0->AddReply(12782, 13983, 13981);
				return;
			}
			if (a0 == 13983) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(12784);
				tv0->ClearReplies();
				tv0->AddReply(12785, -1, 13984);
				tv0->AddReply(12783, 13985, 13982);
				return;
			}
			if (a0 == 13985) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(12786);
				tv0->ClearReplies();
				tv0->AddReply(12787, 13987, 13986);
				return;
			}
			if (a0 == 13987) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(12788);
				tv0->ClearReplies();
				tv0->AddReply(12789, -1, 13988);
				return;
			}
			if (a0 == 3726) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(3459);
				tv0->ClearReplies();
				tv0->AddReply(3460, 3729, 3727);
				tv0->AddReply(3461, 3730, 3728);
				return;
			}
			if (a0 == 3730) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(3463);
				tv0->ClearReplies();
				tv0->AddReply(3464, 3729, 3731);
				tv0->AddReply(3465, 3734, 3733);
				return;
			}
			if (a0 == 3734) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(3466);
				tv0->ClearReplies();
				tv0->AddReply(3467, 3729, 3735);
				tv0->AddReply(3468, 3729, 3736);
				return;
			}
			if (a0 == 3729) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(3462);
				tv0->ClearReplies();
				tv0->AddReply(3469, 3741, 3739);
				tv0->AddReply(3470, -1, 3740);
				return;
			}
			if (a0 == 3741) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(3471);
				tv0->ClearReplies();
				tv0->AddReply(3472, -1, 3742);
				tv0->AddReply(3473, 3744, 3743);
				return;
			}
			if (a0 == 3744) {
				f_1fc_a1_v("Neutral");
				tv0->SetMessage(3474);
				tv0->ClearReplies();
				tv0->AddReply(3475, -1, 3745);
				tv0->AddReply(3476, -1, 3746);
				return;
			}
			tv3 = true;
			if (f_108c_a0_b()) {
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
		if (!f_fc5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1088_a0_i());
		L0->SetPhoto(f_108a_a0_s());
		L0->SetPlayerName(f_13e0_a0_i());
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
		f_ffd_a1_v(a0);
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
			if (f_11ff_a1_b(tv1) && !f_1223_a1_b(tv1)) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(5491);
				tv0->ClearReplies();
				tv0->AddReply(5492, 6052, 6051);
				tv0->AddReply(5505, 6052, 6066);
				break;
			}
			if (f_120b_a1_b(tv1)) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(5486);
				tv0->ClearReplies();
				tv0->AddReply(5522, 6719, 6086);
				tv0->AddReply(6083, 6719, 6713);
				tv0->AddReply(5488, 6714, 6047);
				break;
			}
			f_562_a1_v("Neutral");
			tv0->SetMessage(5521);
			tv0->ClearReplies();
			if (f_1217_a1_b(tv1) && f_1364_a1_b(tv1)) {
				tv0->AddReply(9151, 6068, 10032);
			}
			if (f_123b_a1_b(tv1) && !f_122f_a1_b(tv1) && f_1247_a1_b(tv1)) {
				tv0->AddReply(6292, 6945, 6944);
			}
			if (f_122f_a1_b(tv1) && f_125c_a1_b(tv1)) {
				tv0->AddReply(6111, 10029, 6748);
			}
			if (f_134c_a1_b(tv1) && f_1268_a1_b(tv1)) {
				tv0->AddReply(8011, 8851, 8834);
			}
			if (f_1328_a1_b(tv1) && f_1274_a1_b(tv1)) {
				tv0->AddReply(8012, 8852, 8835);
			}
			if (f_1358_a1_b(tv1) && f_1280_a1_b(tv1)) {
				tv0->AddReply(8023, 8856, 8846);
			}
			if (f_131c_a1_b(tv1) && f_128c_a1_b(tv1)) {
				tv0->AddReply(8024, 8855, 8847);
			}
			if (f_1310_a1_b(tv1) && f_1298_a1_b(tv1)) {
				tv0->AddReply(8030, 8854, 8853);
			}
			tv0->AddReply(8716, -1, 9553);
			break;
			return;
		}
		if (f_108c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1001_a1_v(tv2);
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

	void f_562_a1_v(string a0)
	{
		if (!f_108c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1001_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1013_a0_v();
			if (a1 == 6059) {
				f_108e_a2_v(tv1, tv0);
				f_11a2_a2_v(tv1, tv0);
			}
			if (a1 == 6060) {
				f_108e_a2_v(tv1, tv0);
				f_11a2_a2_v(tv1, tv0);
			}
			if (a1 == 6061) {
				f_108e_a2_v(tv1, tv0);
				f_11a2_a2_v(tv1, tv0);
			}
			if (a1 == 6089) {
				f_108e_a2_v(tv1, tv0);
				f_11a2_a2_v(tv1, tv0);
			}
			if (a1 == 6746) {
				f_1094_a2_v(tv1, tv0);
				f_10a6_a2_v(tv1, tv0);
				f_1131_a2_v(tv1, tv0);
				f_1141_a2_v(tv1, tv0);
			}
			if (a1 == 6747) {
				f_1094_a2_v(tv1, tv0);
				f_10a6_a2_v(tv1, tv0);
				f_1131_a2_v(tv1, tv0);
			}
			if (a1 == 6744) {
				f_1094_a2_v(tv1, tv0);
			}
			if (a1 == 6073) {
				f_109a_a2_v(tv1, tv0);
			}
			if (a1 == 6074) {
				f_109a_a2_v(tv1, tv0);
			}
			if (a1 == 6075) {
				f_109a_a2_v(tv1, tv0);
			}
			if (a1 == 6084) {
				f_109a_a2_v(tv1, tv0);
			}
			if (a1 == 6048) {
				f_10b8_a2_v(tv1, tv0);
				f_10b2_a2_v(tv1, tv0);
			}
			if (a1 == 6946) {
				f_10f4_a2_v(tv1, tv0);
				f_10b2_a2_v(tv1, tv0);
			}
			if (a1 == 10030) {
				f_1131_a2_v(tv1, tv0);
				f_10a6_a2_v(tv1, tv0);
				f_1151_a2_v(tv1, tv0);
			}
			if (a1 == 10031) {
				f_1131_a2_v(tv1, tv0);
				f_1141_a2_v(tv1, tv0);
				f_10a6_a2_v(tv1, tv0);
				f_1151_a2_v(tv1, tv0);
			}
			if (a1 == 9548) {
				f_1157_a2_v(tv1, tv0);
			}
			if (a1 == 9549) {
				f_115d_a2_v(tv1, tv0);
			}
			if (a1 == 9550) {
				f_1163_a2_v(tv1, tv0);
			}
			if (a1 == 9551) {
				f_1169_a2_v(tv1, tv0);
			}
			if (a1 == 9552) {
				f_116f_a2_v(tv1, tv0);
			}
			if (a0 == 6050) {
				if (f_11ff_a1_b(tv1) && !f_1223_a1_b(tv1)) {
					f_562_a1_v("Neutral");
					tv0->SetMessage(5491);
					tv0->ClearReplies();
					tv0->AddReply(5492, 6052, 6051);
					tv0->AddReply(5505, 6052, 6066);
					return;
				}
				if (f_120b_a1_b(tv1)) {
					f_562_a1_v("Neutral");
					tv0->SetMessage(5486);
					tv0->ClearReplies();
					tv0->AddReply(5522, 6719, 6086);
					tv0->AddReply(6083, 6719, 6713);
					tv0->AddReply(5488, 6714, 6047);
					return;
				}
				f_562_a1_v("Neutral");
				tv0->SetMessage(5521);
				tv0->ClearReplies();
				if (f_1217_a1_b(tv1) && f_1364_a1_b(tv1)) {
					tv0->AddReply(9151, 6068, 10032);
				}
				if (f_123b_a1_b(tv1) && !f_122f_a1_b(tv1) && f_1247_a1_b(tv1)) {
					tv0->AddReply(6292, 6945, 6944);
				}
				if (f_122f_a1_b(tv1) && f_125c_a1_b(tv1)) {
					tv0->AddReply(6111, 10029, 6748);
				}
				if (f_134c_a1_b(tv1) && f_1268_a1_b(tv1)) {
					tv0->AddReply(8011, 8851, 8834);
				}
				if (f_1328_a1_b(tv1) && f_1274_a1_b(tv1)) {
					tv0->AddReply(8012, 8852, 8835);
				}
				if (f_1358_a1_b(tv1) && f_1280_a1_b(tv1)) {
					tv0->AddReply(8023, 8856, 8846);
				}
				if (f_131c_a1_b(tv1) && f_128c_a1_b(tv1)) {
					tv0->AddReply(8024, 8855, 8847);
				}
				if (f_1310_a1_b(tv1) && f_1298_a1_b(tv1)) {
					tv0->AddReply(8030, 8854, 8853);
				}
				tv0->AddReply(8716, -1, 9553);
				return;
			}
			if (a0 == 8854) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(8031);
				tv0->ClearReplies();
				tv0->AddReply(8715, -1, 9552);
				return;
			}
			if (a0 == 8855) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(8032);
				tv0->ClearReplies();
				tv0->AddReply(8714, -1, 9551);
				return;
			}
			if (a0 == 8856) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(8033);
				tv0->ClearReplies();
				tv0->AddReply(8713, -1, 9550);
				return;
			}
			if (a0 == 8852) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(8029);
				tv0->ClearReplies();
				tv0->AddReply(8712, -1, 9549);
				return;
			}
			if (a0 == 8851) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(8028);
				tv0->ClearReplies();
				tv0->AddReply(8711, -1, 9548);
				return;
			}
			if (a0 == 10029) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(9148);
				tv0->ClearReplies();
				tv0->AddReply(9149, -1, 10030);
				tv0->AddReply(9150, -1, 10031);
				return;
			}
			if (a0 == 6945) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(6293);
				tv0->ClearReplies();
				tv0->AddReply(5489, -1, 6048);
				tv0->AddReply(6294, -1, 6946);
				return;
			}
			if (a0 == 6068) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(5506);
				tv0->ClearReplies();
				if (f_1364_a1_b(tv1)) {
					tv0->AddReply(5507, 6070, 6069);
				}
				tv0->AddReply(5520, -1, 6084);
				return;
			}
			if (a0 == 6070) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(5508);
				tv0->ClearReplies();
				tv0->AddReply(5509, 6072, 6071);
				tv0->AddReply(5514, 6077, 6076);
				return;
			}
			if (a0 == 6077) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(5515);
				tv0->ClearReplies();
				tv0->AddReply(5516, 6079, 6078);
				return;
			}
			if (a0 == 6079) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(5517);
				tv0->ClearReplies();
				tv0->AddReply(5518, 6072, 6080);
				tv0->AddReply(5519, 6072, 6082);
				return;
			}
			if (a0 == 6072) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(5510);
				tv0->ClearReplies();
				tv0->AddReply(5511, -1, 6073);
				tv0->AddReply(5512, -1, 6074);
				tv0->AddReply(5513, -1, 6075);
				return;
			}
			if (a0 == 6714) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(6084);
				tv0->ClearReplies();
				tv0->AddReply(6085, 6717, 6715);
				tv0->AddReply(6086, 6719, 6716);
				return;
			}
			if (a0 == 6717) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(6087);
				tv0->ClearReplies();
				tv0->AddReply(6088, 6719, 6718);
				return;
			}
			if (a0 == 6719) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(6089);
				tv0->ClearReplies();
				tv0->AddReply(6090, 6725, 6720);
				tv0->AddReply(6091, 6725, 6721);
				return;
			}
			if (a0 == 6725) {
				f_112b_a2_v(tv1, tv0);
				f_1125_a2_v(tv1, tv0);
				f_562_a1_v("Neutral");
				tv0->SetMessage(6092);
				tv0->ClearReplies();
				tv0->AddReply(6095, 6730, 6729);
				tv0->AddReply(6093, 6728, 6727);
				return;
			}
			if (a0 == 6728) {
				f_112b_a2_v(tv1, tv0);
				f_562_a1_v("Neutral");
				tv0->SetMessage(6094);
				tv0->ClearReplies();
				tv0->AddReply(6097, 6732, 6731);
				tv0->AddReply(6102, 6730, 6736);
				return;
			}
			if (a0 == 6732) {
				f_1185_a2_v(tv1, tv0);
				f_562_a1_v("Neutral");
				tv0->SetMessage(6098);
				tv0->ClearReplies();
				tv0->AddReply(6099, 6734, 6733);
				tv0->AddReply(6103, 6730, 6738);
				return;
			}
			if (a0 == 6734) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(6100);
				tv0->ClearReplies();
				tv0->AddReply(6101, 6730, 6735);
				return;
			}
			if (a0 == 6730) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(6096);
				tv0->ClearReplies();
				tv0->AddReply(6104, 6745, 6741);
				tv0->AddReply(6105, 6743, 6742);
				return;
			}
			if (a0 == 6743) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(6106);
				tv0->ClearReplies();
				tv0->AddReply(6107, -1, 6744);
				return;
			}
			if (a0 == 6745) {
				f_11e2_a2_v(tv1, tv0);
				f_562_a1_v("Neutral");
				tv0->SetMessage(6108);
				tv0->ClearReplies();
				tv0->AddReply(6109, -1, 6746);
				tv0->AddReply(6110, -1, 6747);
				return;
			}
			if (a0 == 6052) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(5493);
				tv0->ClearReplies();
				tv0->AddReply(5494, 6054, 6053);
				tv0->AddReply(5504, 6054, 6064);
				tv0->AddReply(5523, 6088, 6087);
				return;
			}
			if (a0 == 6088) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(5524);
				tv0->ClearReplies();
				tv0->AddReply(5525, -1, 6089);
				return;
			}
			if (a0 == 6054) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(5495);
				tv0->ClearReplies();
				tv0->AddReply(5496, 6056, 6055);
				tv0->AddReply(5503, 6058, 6062);
				return;
			}
			if (a0 == 6056) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(5497);
				tv0->ClearReplies();
				tv0->AddReply(5498, 6058, 6057);
				tv0->AddReply(5502, -1, 6061);
				return;
			}
			if (a0 == 6058) {
				f_562_a1_v("Neutral");
				tv0->SetMessage(5499);
				tv0->ClearReplies();
				tv0->AddReply(5500, -1, 6059);
				tv0->AddReply(5501, -1, 6060);
				return;
			}
			tv3 = true;
			if (f_108c_a0_b()) {
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
		if (!f_fc5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1088_a0_i());
		L0->SetPhoto(f_108a_a0_s());
		L0->SetPlayerName(f_13e0_a0_i());
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
		f_ffd_a1_v(a0);
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
			f_a64_a1_v("Neutral");
			tv0->SetMessage(9330);
			tv0->ClearReplies();
			tv0->AddReply(9331, 10248, 10247);
			tv0->AddReply(9340, 10248, 10258);
			tv0->AddReply(9341, 10248, 10260);
			break;
			f_a64_a1_v("Neutral");
			tv0->SetMessage(9323);
			tv0->ClearReplies();
			tv0->AddReply(9324, 10239, 10238);
			tv0->AddReply(9328, 10239, 10242);
			tv0->AddReply(9329, 10239, 10244);
			break;
			return;
		}
		if (f_108c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1001_a1_v(tv2);
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

	void f_a64_a1_v(string a0)
	{
		if (!f_108c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1001_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1013_a0_v();
			if (a0 == 10246) {
				f_a64_a1_v("Neutral");
				tv0->SetMessage(9330);
				tv0->ClearReplies();
				tv0->AddReply(9331, 10248, 10247);
				tv0->AddReply(9340, 10248, 10258);
				tv0->AddReply(9341, 10248, 10260);
				return;
				f_a64_a1_v("Neutral");
				tv0->SetMessage(9323);
				tv0->ClearReplies();
				tv0->AddReply(9324, 10239, 10238);
				tv0->AddReply(9328, 10239, 10242);
				tv0->AddReply(9329, 10239, 10244);
				return;
			}
			if (a0 == 10239) {
				f_a64_a1_v("Neutral");
				tv0->SetMessage(9325);
				tv0->ClearReplies();
				tv0->AddReply(9326, -1, 10240);
				tv0->AddReply(9327, -1, 10241);
				return;
			}
			if (a0 == 10248) {
				f_a64_a1_v("Neutral");
				tv0->SetMessage(9332);
				tv0->ClearReplies();
				tv0->AddReply(9333, 10250, 10249);
				tv0->AddReply(9338, 10250, 10254);
				tv0->AddReply(9339, 10250, 10256);
				return;
			}
			if (a0 == 10250) {
				f_a64_a1_v("Neutral");
				tv0->SetMessage(9334);
				tv0->ClearReplies();
				tv0->AddReply(9335, -1, 10251);
				tv0->AddReply(9336, -1, 10252);
				tv0->AddReply(9337, -1, 10253);
				return;
			}
			tv3 = true;
			if (f_108c_a0_b()) {
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
		if (!f_fc5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1088_a0_i());
		L0->SetPhoto(f_108a_a0_s());
		L0->SetPlayerName(f_13e0_a0_i());
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
		f_ffd_a1_v(a0);
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
			if (f_1334_a1_b(tv1) && !f_12a4_a1_b(tv1)) {
				f_11e8_a2_v(tv1, tv0);
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(9926);
				tv0->ClearReplies();
				tv0->AddReply(9927, 10938, 10937);
				tv0->AddReply(9940, 10954, 10953);
				break;
			}
			if (f_1252_a1_b(tv1)) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(10178);
				tv0->ClearReplies();
				tv0->AddReply(10186, 11233, 11232);
				tv0->AddReply(10464, 11233, 11537);
				break;
			}
			return;
		}
		if (f_108c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1001_a1_v(tv2);
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

	void f_bb1_a1_v(string a0)
	{
		if (!f_108c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1001_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1013_a0_v();
			if (a1 == 10945) {
				f_11ee_a2_v(tv1, tv0);
				f_10ee_a2_v(tv1, tv0);
			}
			if (a1 == 10946) {
				f_11ee_a2_v(tv1, tv0);
				f_10ee_a2_v(tv1, tv0);
			}
			if (a0 == 10936) {
				if (f_1334_a1_b(tv1) && !f_12a4_a1_b(tv1)) {
					f_11e8_a2_v(tv1, tv0);
					f_bb1_a1_v("Neutral");
					tv0->SetMessage(9926);
					tv0->ClearReplies();
					tv0->AddReply(9927, 10938, 10937);
					tv0->AddReply(9940, 10954, 10953);
					return;
				}
				if (f_1252_a1_b(tv1)) {
					f_bb1_a1_v("Neutral");
					tv0->SetMessage(10178);
					tv0->ClearReplies();
					tv0->AddReply(10186, 11233, 11232);
					tv0->AddReply(10464, 11233, 11537);
					return;
				}
			}
			if (a0 == 11233) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(10187);
				tv0->ClearReplies();
				tv0->AddReply(10179, 11226, 11225);
				tv0->AddReply(10463, 11226, 11536);
				return;
			}
			if (a0 == 11226) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(10180);
				tv0->ClearReplies();
				tv0->AddReply(10465, 11541, 11540);
				tv0->AddReply(10470, 11228, 11547);
				return;
			}
			if (a0 == 11541) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(10466);
				tv0->ClearReplies();
				tv0->AddReply(10181, 11228, 11227);
				tv0->AddReply(10467, 11228, 11542);
				tv0->AddReply(10468, 11228, 11543);
				return;
			}
			if (a0 == 11228) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(10182);
				tv0->ClearReplies();
				tv0->AddReply(10183, 11230, 11229);
				return;
			}
			if (a0 == 11230) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(10184);
				tv0->ClearReplies();
				tv0->AddReply(10185, 11234, 11231);
				tv0->AddReply(10469, -1, 11546);
				return;
			}
			if (a0 == 11234) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(10188);
				tv0->ClearReplies();
				tv0->AddReply(10189, -1, 11235);
				tv0->AddReply(10471, -1, 11549);
				tv0->AddReply(10472, -1, 11550);
				return;
			}
			if (a0 == 10954) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(9941);
				tv0->ClearReplies();
				tv0->AddReply(9942, 10956, 10955);
				tv0->AddReply(9949, 10938, 10965);
				return;
			}
			if (a0 == 10956) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(9943);
				tv0->ClearReplies();
				tv0->AddReply(9944, 10958, 10957);
				tv0->AddReply(9948, 10938, 10963);
				return;
			}
			if (a0 == 10958) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(9945);
				tv0->ClearReplies();
				tv0->AddReply(9946, 10938, 10959);
				tv0->AddReply(9947, 10938, 10961);
				return;
			}
			if (a0 == 10938) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(9928);
				tv0->ClearReplies();
				tv0->AddReply(9929, 10940, 10939);
				tv0->AddReply(9939, 10942, 10951);
				return;
			}
			if (a0 == 10940) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(9930);
				tv0->ClearReplies();
				tv0->AddReply(9931, 10942, 10941);
				tv0->AddReply(9938, 10942, 10949);
				return;
			}
			if (a0 == 10942) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(9932);
				tv0->ClearReplies();
				tv0->AddReply(9933, 10944, 10943);
				tv0->AddReply(9937, 10944, 10947);
				return;
			}
			if (a0 == 10944) {
				f_bb1_a1_v("Neutral");
				tv0->SetMessage(9934);
				tv0->ClearReplies();
				tv0->AddReply(9935, -1, 10945);
				tv0->AddReply(9936, -1, 10946);
				return;
			}
			tv3 = true;
			if (f_108c_a0_b()) {
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
		if (!f_fc5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1088_a0_i());
		L0->SetPhoto(f_108a_a0_s());
		L0->SetPlayerName(f_13e0_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_ffd_a1_v(a0);
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
			f_de0_a1_v("Neutral");
			tv0->SetMessage(11203);
			tv0->ClearReplies();
			if (f_1340_a1_b(tv1)) {
				tv0->AddReply(11204, 12393, 12392);
			}
			tv0->AddReply(15336, -1, 16559);
			break;
			return;
		}
		if (f_108c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1001_a1_v(tv2);
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

	void f_de0_a1_v(string a0)
	{
		if (!f_108c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1001_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1013_a0_v();
			if (a1 == 12392) {
				f_11f9_a2_v(tv1, tv0);
			}
			if (a0 == 12391) {
				f_de0_a1_v("Neutral");
				tv0->SetMessage(11203);
				tv0->ClearReplies();
				if (f_1340_a1_b(tv1)) {
					tv0->AddReply(11204, 12393, 12392);
				}
				tv0->AddReply(15336, -1, 16559);
				return;
			}
			if (a0 == 12393) {
				f_de0_a1_v("Neutral");
				tv0->SetMessage(11205);
				tv0->ClearReplies();
				tv0->AddReply(11206, 12395, 12394);
				return;
			}
			if (a0 == 12395) {
				f_de0_a1_v("Neutral");
				tv0->SetMessage(11207);
				tv0->ClearReplies();
				tv0->AddReply(11208, -1, 12396);
				tv0->AddReply(11209, -1, 12397);
				return;
			}
			tv3 = true;
			if (f_108c_a0_b()) {
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
		if (!f_fc5_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1088_a0_i());
		L0->SetPhoto(f_108a_a0_s());
		L0->SetPlayerName(f_13e0_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_ffd_a1_v(a0);
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
			f_ed3_a1_v("Neutral");
			tv0->SetMessage(11641);
			tv0->ClearReplies();
			if (f_12b0_a1_b(tv1)) {
				tv0->AddReply(11642, 12842, 12841);
			}
			tv0->AddReply(11651, 12851, 12850);
			tv0->AddReply(11660, -1, 12859);
			break;
			return;
		}
		if (f_108c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1001_a1_v(tv2);
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

	void f_ed3_a1_v(string a0)
	{
		if (!f_108c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1001_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1013_a0_v();
			if (a1 == 12849) {
				f_118b_a2_v(tv1, tv0);
				f_1175_a2_v(tv1, tv0);
			}
			if (a0 == 12840) {
				f_ed3_a1_v("Neutral");
				tv0->SetMessage(11641);
				tv0->ClearReplies();
				if (f_12b0_a1_b(tv1)) {
					tv0->AddReply(11642, 12842, 12841);
				}
				tv0->AddReply(11651, 12851, 12850);
				tv0->AddReply(11660, -1, 12859);
				return;
			}
			if (a0 == 12851) {
				f_ed3_a1_v("Neutral");
				tv0->SetMessage(11652);
				tv0->ClearReplies();
				tv0->AddReply(11653, 12853, 12852);
				return;
			}
			if (a0 == 12853) {
				f_ed3_a1_v("Neutral");
				tv0->SetMessage(11654);
				tv0->ClearReplies();
				tv0->AddReply(11655, 12855, 12854);
				return;
			}
			if (a0 == 12855) {
				f_ed3_a1_v("Neutral");
				tv0->SetMessage(11656);
				tv0->ClearReplies();
				tv0->AddReply(11657, 12857, 12856);
				return;
			}
			if (a0 == 12857) {
				f_ed3_a1_v("Neutral");
				tv0->SetMessage(11658);
				tv0->ClearReplies();
				tv0->AddReply(11659, -1, 12858);
				return;
			}
			if (a0 == 12842) {
				f_ed3_a1_v("Neutral");
				tv0->SetMessage(11643);
				tv0->ClearReplies();
				tv0->AddReply(11644, 12844, 12843);
				return;
			}
			if (a0 == 12844) {
				f_ed3_a1_v("Neutral");
				tv0->SetMessage(11645);
				tv0->ClearReplies();
				tv0->AddReply(11646, 12846, 12845);
				return;
			}
			if (a0 == 12846) {
				f_ed3_a1_v("Neutral");
				tv0->SetMessage(11647);
				tv0->ClearReplies();
				tv0->AddReply(11648, 12848, 12847);
				return;
			}
			if (a0 == 12848) {
				f_ed3_a1_v("Neutral");
				tv0->SetMessage(11649);
				tv0->ClearReplies();
				tv0->AddReply(11650, -1, 12849);
				return;
			}
			tv3 = true;
			if (f_108c_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_fb4_a1_b(object a0)
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

bool f_fc0_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_fc5_a1_b(object a0)
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
	L5 = L3 * 70 + f_101a_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_ffd_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1001_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_1013_a0_v(void)
{
	if (f_108c_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_101a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1024_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1029_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_1034_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	}
}

void f_1041_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1034_a3_v(a0, L0, a2);
}

bool f_104e_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_1055_a2_b(object a0, string a1)
{
	int L0;
	int L1;
	bool L2;
	@GetInvItemByName(L0, a1);
	@GetInvItemProperty(L1, L0, "Category");
	a0->RemoveItemByType(L2, L0, L1);
	return L2;
}

bool f_105f_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_106b_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1070_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1079_a1_b(int a0)
{
	return f_1070_a0_i() == a0;
}

bool f_107f_a0_b(void)
{
	bool L0;
	f_1001_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_1088_a0_i(void)
{
	return 2864;
}

string f_108a_a0_s(void)
{
	return "ui/NPC_Black.png";
}

bool f_108c_a0_b(void)
{
	return true;
}

void f_108e_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina1", 1);
}

void f_1094_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina2", 1);
}

void f_109a_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina3", 1);
}

void f_10a0_a2_v(object a0, object a1)
{
	@SetVariable("KnowKaterina", 1);
}

void f_10a6_a2_v(object a0, object a1)
{
	f_1401_a0_v();
	f_1431_a0_v();
	f_1029_a1_o("quest_d1_04");
}

void f_10b2_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina4", 1);
}

void f_10b8_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_13ae_a0_o();
	L0->FindMark(L1, "d1q04KaterinaGotoMishka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q04Spi4kaGotoPowderHouse");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q04MishkaGotoSpi4ka");
	if (L1) {
		L1->Remove();
	}
	f_1411_a0_v();
	f_139d_a1_b(44);
	f_139d_a1_b(45);
	f_139d_a1_b(46);
	f_105f_a2_b("quest_d1_04", "completed");
	f_1055_a2_b(a0, "powder");
}

void f_10ee_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_10f4_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_13ae_a0_o();
	L0->FindMark(L1, "d1q04KaterinaGotoMishka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q04MishkaGotoSpi4ka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q04Spi4kaGotoPowderHouse");
	if (L1) {
		L1->Remove();
	}
	f_1421_a0_v();
	f_139d_a1_b(44);
	f_139d_a1_b(45);
	f_139d_a1_b(46);
	f_105f_a2_b("quest_d1_04", "failed");
}

void f_1125_a2_v(object a0, object a1)
{
	@SetVariable("KnowZemlja", 1);
}

void f_112b_a2_v(object a0, object a1)
{
	@SetVariable("KnowZastroiki", 1);
}

void f_1131_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_13ae_a0_o();
	L0->AddMark("d1q04KaterinaGotoMishka", "pt_map_mishka", 0, 8643, f_106b_a0_f());
}

void f_1141_a2_v(object a0, object a1)
{
	f_13bf_a3_v(f_13ae_a0_o(), "pt_map_mishka", 2);
	a1->ShowMap(f_13ae_a0_o());
}

void f_1151_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina5", 1);
}

void f_1157_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina6", 1);
}

void f_115d_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina7", 1);
}

void f_1163_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina8", 1);
}

void f_1169_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina9", 1);
}

void f_116f_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina10", 1);
}

void f_1175_a2_v(object a0, object a1)
{
	f_13bf_a3_v(f_13ae_a0_o(), "pt_map_lara", 2);
	a1->ShowMap(f_13ae_a0_o());
}

void f_1185_a2_v(object a0, object a1)
{
	@SetVariable("KnowRubin", 1);
}

void f_118b_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q01", 4);
	L0 = f_13ae_a0_o();
	L0->AddMark("d5q01KaterinaGotoLara", "pt_map_lara", 1, 11959, f_106b_a0_f());
	f_1441_a0_v();
}

void f_11a2_a2_v(object a0, object a1)
{
	@SetVariable("d1q01KaterinaUHave1day", 1);
	f_13f1_a0_v();
}

void f_11ab_a2_v(object a0, object a1)
{
	@SetVariable("ood6Katerina1", 1);
}

void f_11b1_a2_v(object a0, object a1)
{
	@SetVariable("ood6Katerina2", 1);
}

void f_11b7_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d6q01", 2);
	L0 = f_13ae_a0_o();
	L0->AddMark("d6q01KaterinaGotoLaska", "pt_map_laska", 1, 15398, f_106b_a0_f());
	L0->AddMark("d6q01KaterinagotoLaskaSelf", "pt_map_katerina", 1, 15399, f_106b_a0_f());
	f_1451_a0_v();
	f_105f_a2_b("quest_d6_01", "saburov_klara_remove");
}

void f_11dc_a2_v(object a0, object a1)
{
	@SetVariable("ood6Katerina3", 1);
}

void f_11e2_a2_v(object a0, object a1)
{
	@SetVariable("KnowMishka", 1);
}

void f_11e8_a2_v(object a0, object a1)
{
	@SetVariable("ood3Katerina1", 1);
}

void f_11ee_a2_v(object a0, object a1)
{
	@Trace("drapery is given");
	f_1041_a3_v(a0, "drapery", 1);
}

void f_11f9_a2_v(object a0, object a1)
{
	@SetVariable("ood4Katerina1", 1);
}

bool f_11ff_a1_b(object a0)
{
	if (f_1024_a1_i("ood1Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_120b_a1_b(object a0)
{
	if (f_1024_a1_i("ood1Katerina2") == 0) {
		return true;
	}
	return false;
}

bool f_1217_a1_b(object a0)
{
	if (f_1024_a1_i("ood1Katerina3") == 0) {
		return true;
	}
	return false;
}

bool f_1223_a1_b(object a0)
{
	if (f_1024_a1_i("d1q01") == 0) {
		return true;
	}
	return false;
}

bool f_122f_a1_b(object a0)
{
	if (f_1024_a1_i("d1q04") == 0) {
		return true;
	}
	return false;
}

bool f_123b_a1_b(object a0)
{
	if (f_1024_a1_i("ood1Katerina4") == 0) {
		return true;
	}
	return false;
}

bool f_1247_a1_b(object a0)
{
	if (f_104e_a2_b(a0, "powder")) {
		return true;
	}
	return false;
}

bool f_1252_a1_b(object a0)
{
	if (f_1370_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_125c_a1_b(object a0)
{
	if (f_1024_a1_i("ood1Katerina5") == 0) {
		return true;
	}
	return false;
}

bool f_1268_a1_b(object a0)
{
	if (f_1024_a1_i("ood1Katerina6") == 0) {
		return true;
	}
	return false;
}

bool f_1274_a1_b(object a0)
{
	if (f_1024_a1_i("ood1Katerina7") == 0) {
		return true;
	}
	return false;
}

bool f_1280_a1_b(object a0)
{
	if (f_1024_a1_i("ood1Katerina8") == 0) {
		return true;
	}
	return false;
}

bool f_128c_a1_b(object a0)
{
	if (f_1024_a1_i("ood1Katerina9") == 0) {
		return true;
	}
	return false;
}

bool f_1298_a1_b(object a0)
{
	if (f_1024_a1_i("ood1Katerina10") == 0) {
		return true;
	}
	return false;
}

bool f_12a4_a1_b(object a0)
{
	if (f_1024_a1_i("d3q01") == 0) {
		return true;
	}
	return false;
}

bool f_12b0_a1_b(object a0)
{
	if (f_1024_a1_i("d5q01") == 3) {
		return true;
	}
	return false;
}

bool f_12bc_a1_b(object a0)
{
	if (f_1024_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_12c8_a1_b(object a0)
{
	if (f_1024_a1_i("d6q01KnowKillerIsKlara") == 1) {
		return true;
	}
	return false;
}

bool f_12d4_a1_b(object a0)
{
	if (f_1024_a1_i("ood6Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_12e0_a1_b(object a0)
{
	if (f_1024_a1_i("ood6Katerina2") == 0) {
		return true;
	}
	return false;
}

bool f_12ec_a1_b(object a0)
{
	if (f_1024_a1_i("d6q01") == 4) {
		return true;
	}
	return false;
}

bool f_12f8_a1_b(object a0)
{
	if (f_1024_a1_i("d6q01") == 3) {
		return true;
	}
	return false;
}

bool f_1304_a1_b(object a0)
{
	if (f_1024_a1_i("ood6Katerina3") == 0) {
		return true;
	}
	return false;
}

bool f_1310_a1_b(object a0)
{
	if (f_1024_a1_i("KnowGeorg") == 1) {
		return true;
	}
	return false;
}

bool f_131c_a1_b(object a0)
{
	if (f_1024_a1_i("KnowLaska") == 1) {
		return true;
	}
	return false;
}

bool f_1328_a1_b(object a0)
{
	if (f_1024_a1_i("KnowMaria") == 1) {
		return true;
	}
	return false;
}

bool f_1334_a1_b(object a0)
{
	if (f_1024_a1_i("ood3Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_1340_a1_b(object a0)
{
	if (f_1024_a1_i("ood4Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_134c_a1_b(object a0)
{
	if (f_1024_a1_i("KnowOspina") == 1) {
		return true;
	}
	return false;
}

bool f_1358_a1_b(object a0)
{
	if (f_1024_a1_i("KnowKapella") == 1) {
		return true;
	}
	return false;
}

bool f_1364_a1_b(object a0)
{
	if (f_1024_a1_i("KnowPredictions") == 1) {
		return true;
	}
	return false;
}

bool f_1370_a1_b(object a0)
{
	return false;
}

object f_1373_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1380_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1373_a0_o();
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

bool f_139d_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_1373_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

object f_13ae_a0_o(void)
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

void f_13bf_a3_v(object a0, string a1, float a2)
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

int f_13e0_a0_i(void)
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

void f_13f1_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 32, 1, 12114);
	f_1380_a2_b(L0, 2);
}

void f_1401_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 43, 2, 12125);
	f_1380_a2_b(L0, -1);
}

void f_1411_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 47, 2, 12129);
	f_1380_a2_b(L0, 43);
}

void f_1421_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 48, 2, 12130);
	f_1380_a2_b(L0, 43);
}

void f_1431_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 44, 2, 12126);
	f_1380_a2_b(L0, 43);
}

void f_1441_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 142, 1, 15342);
	f_1380_a2_b(L0, 139);
}

void f_1451_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 123, 1, 13746);
	f_1380_a2_b(L0, 111);
}

void f_1461_a0_v(void)
{
	g1 = false;
}

void f_1465_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_1079_a1_b(1)) {
		t6{a0};
		return;
	}
	if (f_1079_a1_b(2)) {
		t8{a0};
		return;
	}
	if (f_1079_a1_b(3)) {
		t10{a0};
		return;
	}
	if (f_1079_a1_b(4)) {
		t12{a0};
		return;
	}
	if (f_1079_a1_b(5)) {
		t14{a0};
		return;
	}
	if (f_1079_a1_b(6)) {
		t4{a0};
		return;
	}
	f_107f_a0_b();
}

