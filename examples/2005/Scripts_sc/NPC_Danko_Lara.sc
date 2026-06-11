event OnLoad 5;
event OnDialogReply 11;
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
		} while (!f_1b8c_a0_b());
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
		f_1be6_a1_b(f_1c93_a0_o());
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			if (f_209c_a1_b(tv1)) {
				f_1e08_a2_v(tv1, tv0);
				f_ea_a1_v("Neutral");
				tv0->SetMessage(532729);
				tv0->ClearReplies();
				tv0->AddReply(533502, 35033, 35032);
				tv0->AddReply(533511, 35033, 35041);
				break;
			}
			f_ea_a1_v("Neutral");
			tv0->SetMessage(531944);
			tv0->ClearReplies();
			if (f_2090_a1_b(tv1) && f_2084_a1_b(tv1) && f_206c_a1_b(tv1)) {
				tv0->AddReply(531945, 33350, 33349);
			}
			if (f_2060_a1_b(tv1)) {
				tv0->AddReply(532734, 34209, 34208);
			}
			if (f_20a8_a1_b(tv1) && f_2078_a1_b(tv1)) {
				tv0->AddReply(532737, 35052, 34211);
			}
			tv0->AddReply(531948, -1, 33352);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_ea_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a1 == 34206) {
				f_1d6b_a2_v(tv1, tv0);
			}
			if (a1 == 33349) {
				f_1e02_a2_v(tv1, tv0);
			}
			if (a1 == 33351) {
				f_1df2_a2_v(tv1, tv0);
				f_1de2_a2_v(tv1, tv0);
			}
			if (a1 == 34210) {
				f_1d6b_a2_v(tv1, tv0);
			}
			if (a1 == 34213) {
				f_1d77_a2_v(tv1, tv0);
				f_1e0e_a2_v(tv1, tv0);
				f_1d9c_a2_v(tv1, tv0);
				f_1db1_a2_v(tv1, tv0);
			}
			if (a1 == 34214) {
				f_1dbd_a2_v(tv1, tv0);
			}
			if (a0 == 34203) {
				if (f_209c_a1_b(tv1)) {
					f_1e08_a2_v(tv1, tv0);
					f_ea_a1_v("Neutral");
					tv0->SetMessage(532729);
					tv0->ClearReplies();
					tv0->AddReply(533502, 35033, 35032);
					tv0->AddReply(533511, 35033, 35041);
					return;
				}
				f_ea_a1_v("Neutral");
				tv0->SetMessage(531944);
				tv0->ClearReplies();
				if (f_2090_a1_b(tv1) && f_2084_a1_b(tv1) && f_206c_a1_b(tv1)) {
					tv0->AddReply(531945, 33350, 33349);
				}
				if (f_2060_a1_b(tv1)) {
					tv0->AddReply(532734, 34209, 34208);
				}
				if (f_20a8_a1_b(tv1) && f_2078_a1_b(tv1)) {
					tv0->AddReply(532737, 35052, 34211);
				}
				tv0->AddReply(531948, -1, 33352);
				return;
			}
			if (a0 == 35052) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(533520);
				tv0->ClearReplies();
				tv0->AddReply(533522, 34212, 35054);
				tv0->AddReply(533521, -1, 35053);
				return;
			}
			if (a0 == 34212) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(532738);
				tv0->ClearReplies();
				tv0->AddReply(532739, -1, 34213);
				tv0->AddReply(532740, -1, 34214);
				return;
			}
			if (a0 == 34209) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(532735);
				tv0->ClearReplies();
				tv0->AddReply(532736, -1, 34210);
				return;
			}
			if (a0 == 33350) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(531946);
				tv0->ClearReplies();
				tv0->AddReply(531947, -1, 33351);
				return;
			}
			if (a0 == 35033) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(533503);
				tv0->ClearReplies();
				tv0->AddReply(533504, 35035, 35034);
				return;
			}
			if (a0 == 35035) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(533505);
				tv0->ClearReplies();
				tv0->AddReply(533506, 35042, 35036);
				tv0->AddReply(533517, 35049, 35048);
				return;
			}
			if (a0 == 35049) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(533518);
				tv0->ClearReplies();
				tv0->AddReply(533519, 35042, 35050);
				return;
			}
			if (a0 == 35042) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(533512);
				tv0->ClearReplies();
				tv0->AddReply(533513, 35044, 35043);
				tv0->AddReply(533516, -1, 35047);
				return;
			}
			if (a0 == 35044) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(533514);
				tv0->ClearReplies();
				tv0->AddReply(532730, 34205, 34204);
				return;
			}
			if (a0 == 34205) {
				f_ea_a1_v("Neutral");
				tv0->SetMessage(532731);
				tv0->ClearReplies();
				tv0->AddReply(532732, -1, 34206);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			f_30c_a1_v("Neutral");
			tv0->SetMessage(532765);
			tv0->ClearReplies();
			tv0->AddReply(532766, -1, 34237);
			tv0->AddReply(533666, -1, 35198);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_30c_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a0 == 34236) {
				f_30c_a1_v("Neutral");
				tv0->SetMessage(532765);
				tv0->ClearReplies();
				tv0->AddReply(532766, -1, 34237);
				tv0->AddReply(533666, -1, 35198);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		f_1be6_a1_b(f_1c93_a0_o());
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			f_3ea_a1_v("Neutral");
			tv0->SetMessage(533347);
			tv0->ClearReplies();
			if (f_20b3_a1_b(tv1) && f_20bf_a1_b(tv1)) {
				tv0->AddReply(533348, 34853, 34852);
			}
			tv0->AddReply(533353, -1, 34857);
			tv0->AddReply(536082, -1, 37830);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_3ea_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a1 == 34852) {
				f_1e15_a2_v(tv1, tv0);
			}
			if (a0 == 34851) {
				f_3ea_a1_v("Neutral");
				tv0->SetMessage(533347);
				tv0->ClearReplies();
				if (f_20b3_a1_b(tv1) && f_20bf_a1_b(tv1)) {
					tv0->AddReply(533348, 34853, 34852);
				}
				tv0->AddReply(533353, -1, 34857);
				tv0->AddReply(536082, -1, 37830);
				return;
			}
			if (a0 == 34853) {
				f_3ea_a1_v("Neutral");
				tv0->SetMessage(533349);
				tv0->ClearReplies();
				tv0->AddReply(533350, 34855, 34854);
				tv0->AddReply(536083, 37832, 37831);
				return;
			}
			if (a0 == 37832) {
				f_3ea_a1_v("Neutral");
				tv0->SetMessage(536084);
				tv0->ClearReplies();
				tv0->AddReply(536087, 37834, 37835);
				tv0->AddReply(536088, 37834, 37837);
				return;
			}
			if (a0 == 34855) {
				f_3ea_a1_v("Neutral");
				tv0->SetMessage(533351);
				tv0->ClearReplies();
				tv0->AddReply(533352, 37834, 34856);
				tv0->AddReply(536085, 37834, 37833);
				return;
			}
			if (a0 == 37834) {
				f_3ea_a1_v("Neutral");
				tv0->SetMessage(536086);
				tv0->ClearReplies();
				tv0->AddReply(536089, 37842, 37839);
				tv0->AddReply(536090, 37842, 37840);
				return;
			}
			if (a0 == 37842) {
				f_3ea_a1_v("Neutral");
				tv0->SetMessage(536091);
				tv0->ClearReplies();
				tv0->AddReply(536092, -1, 37844);
				tv0->AddReply(536093, 37846, 37845);
				return;
			}
			if (a0 == 37846) {
				f_3ea_a1_v("Neutral");
				tv0->SetMessage(536094);
				tv0->ClearReplies();
				tv0->AddReply(536095, -1, 37847);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		f_1be6_a1_b(f_1c93_a0_o());
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			if (f_20d7_a1_b(tv1)) {
				f_1e26_a2_v(tv1, tv0);
				f_1e7e_a2_v(tv1, tv0);
				f_59f_a1_v("Neutral");
				tv0->SetMessage(533541);
				tv0->ClearReplies();
				tv0->AddReply(533542, 37982, 35074);
				tv0->AddReply(536217, 37982, 37990);
				if (f_20cb_a1_b(tv1)) {
					tv0->AddReply(536205, 37979, 37978);
				}
				break;
			}
			f_59f_a1_v("Neutral");
			tv0->SetMessage(533549);
			tv0->ClearReplies();
			if (f_20fa_a1_b(tv1)) {
				tv0->AddReply(533550, 35083, 35082);
			}
			if (f_20e3_a1_b(tv1) && f_20ee_a1_b(tv1)) {
				tv0->AddReply(533553, 35086, 35085);
			}
			tv0->AddReply(533556, -1, 35088);
			tv0->AddReply(536204, -1, 37977);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_59f_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a1 == 37996) {
				f_1e2c_a2_v(tv1, tv0);
			}
			if (a1 == 38040) {
				f_1e41_a2_v(tv1, tv0);
				f_1e38_a2_v(tv1, tv0);
				f_1e1b_a2_v(tv1, tv0);
				f_1db7_a2_v(tv1, tv0);
			}
			if (a1 == 35084) {
				f_1e2c_a2_v(tv1, tv0);
			}
			if (a1 == 35087) {
				f_1e38_a2_v(tv1, tv0);
				f_1e41_a2_v(tv1, tv0);
				f_1e1b_a2_v(tv1, tv0);
				f_1e51_a2_v(tv1, tv0);
				f_1db7_a2_v(tv1, tv0);
			}
			if (a1 == 38050) {
				f_1e38_a2_v(tv1, tv0);
				f_1e41_a2_v(tv1, tv0);
				f_1e51_a2_v(tv1, tv0);
			}
			if (a0 == 35073) {
				if (f_20d7_a1_b(tv1)) {
					f_1e26_a2_v(tv1, tv0);
					f_1e7e_a2_v(tv1, tv0);
					f_59f_a1_v("Neutral");
					tv0->SetMessage(533541);
					tv0->ClearReplies();
					tv0->AddReply(533542, 37982, 35074);
					tv0->AddReply(536217, 37982, 37990);
					if (f_20cb_a1_b(tv1)) {
						tv0->AddReply(536205, 37979, 37978);
					}
					return;
				}
				f_59f_a1_v("Neutral");
				tv0->SetMessage(533549);
				tv0->ClearReplies();
				if (f_20fa_a1_b(tv1)) {
					tv0->AddReply(533550, 35083, 35082);
				}
				if (f_20e3_a1_b(tv1) && f_20ee_a1_b(tv1)) {
					tv0->AddReply(533553, 35086, 35085);
				}
				tv0->AddReply(533556, -1, 35088);
				tv0->AddReply(536204, -1, 37977);
				return;
			}
			if (a0 == 35086) {
				f_59f_a1_v("Neutral");
				tv0->SetMessage(533554);
				tv0->ClearReplies();
				tv0->AddReply(533555, -1, 35087);
				tv0->AddReply(536266, -1, 38050);
				return;
			}
			if (a0 == 35083) {
				f_59f_a1_v("Neutral");
				tv0->SetMessage(533551);
				tv0->ClearReplies();
				tv0->AddReply(533552, -1, 35084);
				return;
			}
			if (a0 == 37979) {
				f_59f_a1_v("Neutral");
				tv0->SetMessage(536206);
				tv0->ClearReplies();
				tv0->AddReply(536259, 38042, 38041);
				tv0->AddReply(536207, 37981, 37980);
				return;
			}
			if (a0 == 37981) {
				f_59f_a1_v("Neutral");
				tv0->SetMessage(536208);
				tv0->ClearReplies();
				tv0->AddReply(536263, 38042, 38045);
				tv0->AddReply(536265, 37994, 38048);
				return;
			}
			if (a0 == 38042) {
				f_59f_a1_v("Neutral");
				tv0->SetMessage(536260);
				tv0->ClearReplies();
				tv0->AddReply(536261, -1, 38043);
				tv0->AddReply(536262, -1, 38044);
				tv0->AddReply(536264, -1, 38047);
				return;
			}
			if (a0 == 37982) {
				f_59f_a1_v("Neutral");
				tv0->SetMessage(536209);
				tv0->ClearReplies();
				tv0->AddReply(536210, 37984, 37983);
				tv0->AddReply(536218, 37994, 37992);
				return;
			}
			if (a0 == 37984) {
				f_59f_a1_v("Neutral");
				tv0->SetMessage(536211);
				tv0->ClearReplies();
				tv0->AddReply(536212, 37994, 37985);
				return;
			}
			if (a0 == 37994) {
				f_59f_a1_v("Neutral");
				tv0->SetMessage(536220);
				tv0->ClearReplies();
				tv0->AddReply(536221, -1, 37996);
				if (f_20e3_a1_b(tv1)) {
					tv0->AddReply(536255, 38039, 38037);
				}
				tv0->AddReply(536256, -1, 38038);
				return;
			}
			if (a0 == 38039) {
				f_59f_a1_v("Neutral");
				tv0->SetMessage(536257);
				tv0->ClearReplies();
				tv0->AddReply(536258, -1, 38040);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		f_1be6_a1_b(f_1c93_a0_o());
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			f_7dd_a1_v("Neutral");
			tv0->SetMessage(533795);
			tv0->ClearReplies();
			if (f_2112_a1_b(tv1)) {
				tv0->AddReply(533807, 35341, 35352);
			}
			tv0->AddReply(533796, -1, 35340);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_7dd_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a1 == 35352) {
				f_1e89_a2_v(tv1, tv0);
			}
			if (a0 == 35339) {
				f_7dd_a1_v("Neutral");
				tv0->SetMessage(533795);
				tv0->ClearReplies();
				if (f_2112_a1_b(tv1)) {
					tv0->AddReply(533807, 35341, 35352);
				}
				tv0->AddReply(533796, -1, 35340);
				return;
			}
			if (a0 == 35341) {
				f_7dd_a1_v("Neutral");
				tv0->SetMessage(533797);
				tv0->ClearReplies();
				tv0->AddReply(533798, 35343, 35342);
				tv0->AddReply(533802, 35347, 35346);
				return;
			}
			if (a0 == 35347) {
				f_7dd_a1_v("Neutral");
				tv0->SetMessage(533803);
				tv0->ClearReplies();
				tv0->AddReply(533804, -1, 35348);
				tv0->AddReply(533805, -1, 35349);
				return;
			}
			if (a0 == 35343) {
				f_7dd_a1_v("Neutral");
				tv0->SetMessage(533799);
				tv0->ClearReplies();
				tv0->AddReply(533800, -1, 35344);
				tv0->AddReply(533801, -1, 35345);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		f_1be6_a1_b(f_1c93_a0_o());
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			f_8ff_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_8ff_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a0 == 36971) {
				f_8ff_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_8ff_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_8ff_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		f_1be6_a1_b(f_1c93_a0_o());
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			f_2029_a2_v(tv1, tv0);
			f_a02_a1_v("Neutral");
			tv0->SetMessage(500441);
			tv0->ClearReplies();
			tv0->AddReply(508443, 35012, 9266);
			tv0->AddReply(533485, 35013, 35011);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_a02_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a0 == 510) {
				f_2029_a2_v(tv1, tv0);
				f_a02_a1_v("Neutral");
				tv0->SetMessage(500441);
				tv0->ClearReplies();
				tv0->AddReply(508443, 35012, 9266);
				tv0->AddReply(533485, 35013, 35011);
				return;
			}
			if (a0 == 35013) {
				f_a02_a1_v("Neutral");
				tv0->SetMessage(533487);
				tv0->ClearReplies();
				tv0->AddReply(533488, 35012, 35014);
				tv0->AddReply(533489, 35012, 35015);
				return;
			}
			if (a0 == 35012) {
				f_a02_a1_v("Neutral");
				tv0->SetMessage(533486);
				tv0->ClearReplies();
				tv0->AddReply(533491, 9267, 35019);
				tv0->AddReply(533490, 35022, 35018);
				return;
			}
			if (a0 == 35022) {
				f_a02_a1_v("Neutral");
				tv0->SetMessage(533494);
				tv0->ClearReplies();
				tv0->AddReply(533495, 35024, 35023);
				return;
			}
			if (a0 == 35024) {
				f_a02_a1_v("Neutral");
				tv0->SetMessage(533496);
				tv0->ClearReplies();
				tv0->AddReply(533497, 35021, 35025);
				return;
			}
			if (a0 == 9267) {
				f_a02_a1_v("Neutral");
				tv0->SetMessage(508444);
				tv0->ClearReplies();
				tv0->AddReply(500443, 519, 512);
				tv0->AddReply(533492, 35021, 35020);
				return;
			}
			if (a0 == 35021) {
				f_a02_a1_v("Neutral");
				tv0->SetMessage(533493);
				tv0->ClearReplies();
				tv0->AddReply(533498, 522, 35027);
				tv0->AddReply(533499, 516, 35028);
				return;
			}
			if (a0 == 516) {
				f_a02_a1_v("Neutral");
				tv0->SetMessage(500447);
				tv0->ClearReplies();
				tv0->AddReply(500449, -1, 518);
				tv0->AddReply(500446, -1, 515);
				return;
			}
			if (a0 == 519) {
				f_a02_a1_v("Neutral");
				tv0->SetMessage(500450);
				tv0->ClearReplies();
				tv0->AddReply(500451, 522, 520);
				tv0->AddReply(500452, -1, 521);
				return;
			}
			if (a0 == 522) {
				f_a02_a1_v("Neutral");
				tv0->SetMessage(500453);
				tv0->ClearReplies();
				tv0->AddReply(500454, -1, 523);
				tv0->AddReply(500455, -1, 524);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		f_1be6_a1_b(f_1c93_a0_o());
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			f_be9_a1_v("Neutral");
			tv0->SetMessage(503662);
			tv0->ClearReplies();
			if (f_220a_a1_b(tv1) && f_2216_a1_b(tv1)) {
				tv0->AddReply(512735, 11881, 13929);
			}
			if (f_2222_a1_b(tv1) && f_222e_a1_b(tv1) && !f_2252_a1_b(tv1) && !f_225e_a1_b(tv1)) {
				tv0->AddReply(512736, 11904, 13930);
			}
			if (f_223a_a1_b(tv1) && f_2186_a1_b(tv1)) {
				tv0->AddReply(503664, 3970, 3969);
			}
			if (f_2246_a1_b(tv1)) {
				tv0->AddReply(503663, 3972, 3968);
			}
			tv0->AddReply(513019, -1, 14225);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_be9_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a1 == 13929) {
				f_1fef_a2_v(tv1, tv0);
			}
			if (a1 == 11890) {
				f_1ff5_a2_v(tv1, tv0);
				f_2003_a2_v(tv1, tv0);
			}
			if (a1 == 11891) {
				f_1ff5_a2_v(tv1, tv0);
				f_2003_a2_v(tv1, tv0);
			}
			if (a1 == 13930) {
				f_2009_a2_v(tv1, tv0);
			}
			if (a1 == 40680) {
				f_1e84_a2_v(tv1, tv0);
			}
			if (a1 == 40681) {
				f_1e84_a2_v(tv1, tv0);
			}
			if (a1 == 11915) {
				f_201b_a2_v(tv1, tv0);
			}
			if (a1 == 3969) {
				f_200f_a2_v(tv1, tv0);
			}
			if (a1 == 3968) {
				f_2015_a2_v(tv1, tv0);
			}
			if (a0 == 3967) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(503662);
				tv0->ClearReplies();
				if (f_220a_a1_b(tv1) && f_2216_a1_b(tv1)) {
					tv0->AddReply(512735, 11881, 13929);
				}
				if (f_2222_a1_b(tv1) && f_222e_a1_b(tv1) && !f_2252_a1_b(tv1) && !f_225e_a1_b(tv1)) {
					tv0->AddReply(512736, 11904, 13930);
				}
				if (f_223a_a1_b(tv1) && f_2186_a1_b(tv1)) {
					tv0->AddReply(503664, 3970, 3969);
				}
				if (f_2246_a1_b(tv1)) {
					tv0->AddReply(503663, 3972, 3968);
				}
				tv0->AddReply(513019, -1, 14225);
				return;
			}
			if (a0 == 3972) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(503667);
				tv0->ClearReplies();
				tv0->AddReply(503668, 3975, 3973);
				tv0->AddReply(503669, 3975, 3974);
				tv0->AddReply(503672, 3981, 3978);
				return;
			}
			if (a0 == 3975) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(503670);
				tv0->ClearReplies();
				tv0->AddReply(503671, 3981, 3976);
				tv0->AddReply(503673, -1, 3980);
				return;
			}
			if (a0 == 3981) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(503674);
				tv0->ClearReplies();
				tv0->AddReply(503675, 3984, 3982);
				tv0->AddReply(503676, 3984, 3983);
				return;
			}
			if (a0 == 3984) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(503677);
				tv0->ClearReplies();
				tv0->AddReply(503678, 3988, 3986);
				tv0->AddReply(503679, 3988, 3987);
				return;
			}
			if (a0 == 3988) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(503680);
				tv0->ClearReplies();
				tv0->AddReply(503681, -1, 3989);
				tv0->AddReply(503682, -1, 3990);
				tv0->AddReply(503685, -1, 3995);
				return;
			}
			if (a0 == 3970) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(503665);
				tv0->ClearReplies();
				tv0->AddReply(503666, -1, 3971);
				return;
			}
			if (a0 == 11904) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(510773);
				tv0->ClearReplies();
				tv0->AddReply(510774, 11906, 11905);
				tv0->AddReply(510789, 11906, 11923);
				tv0->AddReply(510790, 11906, 11925);
				return;
			}
			if (a0 == 11906) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(510775);
				tv0->ClearReplies();
				tv0->AddReply(510776, 11908, 11907);
				tv0->AddReply(510788, 11908, 11921);
				return;
			}
			if (a0 == 11908) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(510777);
				tv0->ClearReplies();
				tv0->AddReply(510778, 11910, 11909);
				tv0->AddReply(510787, 11910, 11920);
				return;
			}
			if (a0 == 11910) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(510779);
				tv0->ClearReplies();
				tv0->AddReply(510780, 11912, 11911);
				tv0->AddReply(510785, 11912, 11916);
				tv0->AddReply(510786, 11912, 11918);
				return;
			}
			if (a0 == 11912) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(510781);
				tv0->ClearReplies();
				tv0->AddReply(510782, 40679, 11913);
				tv0->AddReply(510784, -1, 11915);
				return;
			}
			if (a0 == 40679) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(538763);
				tv0->ClearReplies();
				tv0->AddReply(538764, -1, 40680);
				tv0->AddReply(538765, -1, 40681);
				return;
			}
			if (a0 == 11881) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(510753);
				tv0->ClearReplies();
				tv0->AddReply(510754, 11883, 11882);
				return;
			}
			if (a0 == 11883) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(510755);
				tv0->ClearReplies();
				tv0->AddReply(510756, 11885, 11884);
				tv0->AddReply(510766, -1, 11895);
				return;
			}
			if (a0 == 11885) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(510757);
				tv0->ClearReplies();
				tv0->AddReply(510758, 11887, 11886);
				tv0->AddReply(510765, -1, 11894);
				return;
			}
			if (a0 == 11887) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(510759);
				tv0->ClearReplies();
				tv0->AddReply(510760, 11889, 11888);
				tv0->AddReply(510764, 11889, 11892);
				return;
			}
			if (a0 == 11889) {
				f_be9_a1_v("Neutral");
				tv0->SetMessage(510761);
				tv0->ClearReplies();
				tv0->AddReply(510762, -1, 11890);
				tv0->AddReply(510763, -1, 11891);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		f_1be6_a1_b(f_1c93_a0_o());
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			if (f_211e_a1_b(tv1) && f_214e_a1_b(tv1)) {
				f_1e9a_a2_v(tv1, tv0);
				f_1fe9_a2_v(tv1, tv0);
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(506893);
				tv0->ClearReplies();
				tv0->AddReply(507378, 8140, 8139);
				tv0->AddReply(507384, 8140, 8145);
				break;
			}
			f_f6b_a1_v("Neutral");
			tv0->SetMessage(507377);
			tv0->ClearReplies();
			if (f_212a_a1_b(tv1) && f_217a_a1_b(tv1) && f_2164_a1_b(tv1)) {
				tv0->AddReply(506900, 7607, 7606);
			}
			if (f_2136_a1_b(tv1) && f_2164_a1_b(tv1)) {
				tv0->AddReply(506902, 7609, 7608);
			}
			if (f_215a_a1_b(tv1) && f_216e_a1_b(tv1)) {
				tv0->AddReply(506905, 7612, 7611);
			}
			if (f_214e_a1_b(tv1)) {
				tv0->AddReply(507745, 7601, 8545);
			}
			if (f_2142_a1_b(tv1)) {
				tv0->AddReply(533897, 10389, 35455);
			}
			tv0->AddReply(507744, -1, 8544);
			tv0->AddReply(533898, -1, 35456);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_f6b_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a1 == 7604) {
				f_1eb2_a2_v(tv1, tv0);
			}
			if (a1 == 8158) {
				f_1eb2_a2_v(tv1, tv0);
			}
			if (a1 == 7606) {
				f_1ea0_a2_v(tv1, tv0);
			}
			if (a1 == 8161) {
				f_1f02_a2_v(tv1, tv0);
				f_1f18_a2_v(tv1, tv0);
				f_1da6_a2_v(tv1, tv0);
				f_1e57_a2_v(tv1, tv0);
				f_1e62_a2_v(tv1, tv0);
				f_1e8f_a2_v(tv1, tv0);
			}
			if (a1 == 35461) {
				f_1f02_a2_v(tv1, tv0);
				f_1f18_a2_v(tv1, tv0);
				f_1da6_a2_v(tv1, tv0);
				f_1e62_a2_v(tv1, tv0);
				f_1e57_a2_v(tv1, tv0);
			}
			if (a1 == 8165) {
				f_1ea6_a2_v(tv1, tv0);
				f_1f1e_a2_v(tv1, tv0);
				f_1eeb_a2_v(tv1, tv0);
				f_202f_a2_v(tv1, tv0);
			}
			if (a1 == 35455) {
				f_1eac_a2_v(tv1, tv0);
			}
			if (a0 == 7599) {
				if (f_211e_a1_b(tv1) && f_214e_a1_b(tv1)) {
					f_1e9a_a2_v(tv1, tv0);
					f_1fe9_a2_v(tv1, tv0);
					f_f6b_a1_v("Neutral");
					tv0->SetMessage(506893);
					tv0->ClearReplies();
					tv0->AddReply(507378, 8140, 8139);
					tv0->AddReply(507384, 8140, 8145);
					return;
				}
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(507377);
				tv0->ClearReplies();
				if (f_212a_a1_b(tv1) && f_217a_a1_b(tv1) && f_2164_a1_b(tv1)) {
					tv0->AddReply(506900, 7607, 7606);
				}
				if (f_2136_a1_b(tv1) && f_2164_a1_b(tv1)) {
					tv0->AddReply(506902, 7609, 7608);
				}
				if (f_215a_a1_b(tv1) && f_216e_a1_b(tv1)) {
					tv0->AddReply(506905, 7612, 7611);
				}
				if (f_214e_a1_b(tv1)) {
					tv0->AddReply(507745, 7601, 8545);
				}
				if (f_2142_a1_b(tv1)) {
					tv0->AddReply(533897, 10389, 35455);
				}
				tv0->AddReply(507744, -1, 8544);
				tv0->AddReply(533898, -1, 35456);
				return;
			}
			if (a0 == 10389) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(509451);
				tv0->ClearReplies();
				tv0->AddReply(509471, 10391, 10412);
				tv0->AddReply(509452, 10391, 10390);
				return;
			}
			if (a0 == 10391) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(509453);
				tv0->ClearReplies();
				tv0->AddReply(509454, 10393, 10392);
				tv0->AddReply(509467, 10408, 10407);
				tv0->AddReply(509470, -1, 10411);
				return;
			}
			if (a0 == 10408) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(509468);
				tv0->ClearReplies();
				tv0->AddReply(509469, 10393, 10409);
				return;
			}
			if (a0 == 10393) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(509455);
				tv0->ClearReplies();
				tv0->AddReply(509456, 10395, 10394);
				tv0->AddReply(509463, 10403, 10402);
				tv0->AddReply(509466, -1, 10406);
				return;
			}
			if (a0 == 10403) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(509464);
				tv0->ClearReplies();
				tv0->AddReply(509465, 10395, 10404);
				return;
			}
			if (a0 == 10395) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(509457);
				tv0->ClearReplies();
				tv0->AddReply(509458, 10397, 10396);
				tv0->AddReply(509462, 10397, 10400);
				return;
			}
			if (a0 == 10397) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(509459);
				tv0->ClearReplies();
				tv0->AddReply(509460, -1, 10398);
				tv0->AddReply(509461, -1, 10399);
				return;
			}
			if (a0 == 7612) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(506906);
				tv0->ClearReplies();
				tv0->AddReply(506907, -1, 7613);
				return;
			}
			if (a0 == 7609) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(506903);
				tv0->ClearReplies();
				tv0->AddReply(507397, 8163, 8162);
				return;
			}
			if (a0 == 8163) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(507398);
				tv0->ClearReplies();
				tv0->AddReply(507399, -1, 8165);
				return;
			}
			if (a0 == 7607) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(506901);
				tv0->ClearReplies();
				tv0->AddReply(533899, 35458, 35457);
				return;
			}
			if (a0 == 35458) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(533900);
				tv0->ClearReplies();
				tv0->AddReply(533901, 35460, 35459);
				tv0->AddReply(533903, -1, 35461);
				return;
			}
			if (a0 == 35460) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(533902);
				tv0->ClearReplies();
				tv0->AddReply(533904, 35463, 35462);
				tv0->AddReply(533909, 35466, 35467);
				return;
			}
			if (a0 == 35463) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(533905);
				tv0->ClearReplies();
				tv0->AddReply(533906, 35466, 35464);
				tv0->AddReply(533907, 35466, 35465);
				return;
			}
			if (a0 == 35466) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(533908);
				tv0->ClearReplies();
				tv0->AddReply(507396, -1, 8161);
				return;
			}
			if (a0 == 8140) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(507379);
				tv0->ClearReplies();
				tv0->AddReply(507380, 8142, 8141);
				return;
			}
			if (a0 == 8142) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(507381);
				tv0->ClearReplies();
				tv0->AddReply(507382, 8144, 8143);
				tv0->AddReply(507386, 8150, 8149);
				return;
			}
			if (a0 == 8150) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(507387);
				tv0->ClearReplies();
				tv0->AddReply(507388, 8144, 8151);
				return;
			}
			if (a0 == 8144) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(507383);
				tv0->ClearReplies();
				tv0->AddReply(506894, 8153, 7600);
				return;
			}
			if (a0 == 8153) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(507389);
				tv0->ClearReplies();
				tv0->AddReply(507390, 7601, 8154);
				tv0->AddReply(507391, -1, 8155);
				return;
			}
			if (a0 == 7601) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(506895);
				tv0->ClearReplies();
				tv0->AddReply(506896, 7603, 7602);
				tv0->AddReply(507392, 8157, 8156);
				return;
			}
			if (a0 == 8157) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(507393);
				tv0->ClearReplies();
				tv0->AddReply(507395, 7603, 8159);
				return;
			}
			if (a0 == 7603) {
				f_f6b_a1_v("Neutral");
				tv0->SetMessage(506897);
				tv0->ClearReplies();
				tv0->AddReply(506898, -1, 7604);
				tv0->AddReply(507394, -1, 8158);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		f_1be6_a1_b(f_1c93_a0_o());
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			f_1315_a1_v("Neutral");
			tv0->SetMessage(509915);
			tv0->ClearReplies();
			if (f_2106_a1_b(tv1)) {
				tv0->AddReply(509916, 10924, 10923);
			}
			tv0->AddReply(509924, -1, 10933);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_1315_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a1 == 10923) {
				f_1e78_a2_v(tv1, tv0);
			}
			if (a1 == 10931) {
				f_1f45_a2_v(tv1, tv0);
				f_1e6d_a2_v(tv1, tv0);
				f_1db7_a2_v(tv1, tv0);
			}
			if (a0 == 10922) {
				f_1315_a1_v("Neutral");
				tv0->SetMessage(509915);
				tv0->ClearReplies();
				if (f_2106_a1_b(tv1)) {
					tv0->AddReply(509916, 10924, 10923);
				}
				tv0->AddReply(509924, -1, 10933);
				return;
			}
			if (a0 == 10924) {
				f_1315_a1_v("Neutral");
				tv0->SetMessage(509917);
				tv0->ClearReplies();
				tv0->AddReply(509918, 10926, 10925);
				tv0->AddReply(509922, 10926, 10929);
				tv0->AddReply(509923, -1, 10931);
				return;
			}
			if (a0 == 10926) {
				f_1315_a1_v("Neutral");
				tv0->SetMessage(509919);
				tv0->ClearReplies();
				tv0->AddReply(509920, -1, 10927);
				tv0->AddReply(509921, -1, 10928);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		f_1be6_a1_b(f_1c93_a0_o());
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			f_1484_a1_v("Neutral");
			tv0->SetMessage(510151);
			tv0->ClearReplies();
			if (f_219e_a1_b(tv1) && f_2192_a1_b(tv1)) {
				tv0->AddReply(510152, 11195, 11194);
			}
			if (f_21aa_a1_b(tv1) && f_21b6_a1_b(tv1)) {
				tv0->AddReply(510995, 12163, 12162);
			}
			if (f_21ce_a1_b(tv1) && f_21c2_a1_b(tv1)) {
				tv0->AddReply(511435, 12638, 12637);
			}
			if (f_21c2_a1_b(tv1) && !f_21da_a1_b(tv1) && !f_21ce_a1_b(tv1)) {
				tv0->AddReply(511476, 12683, 12682);
			}
			tv0->AddReply(511479, -1, 12685);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_1484_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a1 == 12160) {
				f_1f50_a2_v(tv1, tv0);
				f_1f56_a2_v(tv1, tv0);
				f_1f35_a2_v(tv1, tv0);
			}
			if (a1 == 12161) {
				f_1f50_a2_v(tv1, tv0);
				f_1f56_a2_v(tv1, tv0);
				f_1f35_a2_v(tv1, tv0);
			}
			if (a1 == 12181) {
				f_1f76_a2_v(tv1, tv0);
				f_1f7c_a2_v(tv1, tv0);
			}
			if (a1 == 12182) {
				f_1f76_a2_v(tv1, tv0);
				f_1f7c_a2_v(tv1, tv0);
			}
			if (a1 == 12183) {
				f_1f76_a2_v(tv1, tv0);
				f_1f7c_a2_v(tv1, tv0);
				f_1f25_a2_v(tv1, tv0);
			}
			if (a1 == 12649) {
				f_1f90_a2_v(tv1, tv0);
				f_1f96_a2_v(tv1, tv0);
				f_1f9c_a2_v(tv1, tv0);
				f_2055_a2_v(tv1, tv0);
				f_203f_a2_v(tv1, tv0);
				f_204a_a2_v(tv1, tv0);
				f_1db7_a2_v(tv1, tv0);
			}
			if (a1 == 12650) {
				f_1f90_a2_v(tv1, tv0);
			}
			if (a1 == 12684) {
				f_1f96_a2_v(tv1, tv0);
				f_1f9c_a2_v(tv1, tv0);
				f_203f_a2_v(tv1, tv0);
				f_2055_a2_v(tv1, tv0);
				f_204a_a2_v(tv1, tv0);
				f_1db7_a2_v(tv1, tv0);
			}
			if (a0 == 11193) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(510151);
				tv0->ClearReplies();
				if (f_219e_a1_b(tv1) && f_2192_a1_b(tv1)) {
					tv0->AddReply(510152, 11195, 11194);
				}
				if (f_21aa_a1_b(tv1) && f_21b6_a1_b(tv1)) {
					tv0->AddReply(510995, 12163, 12162);
				}
				if (f_21ce_a1_b(tv1) && f_21c2_a1_b(tv1)) {
					tv0->AddReply(511435, 12638, 12637);
				}
				if (f_21c2_a1_b(tv1) && !f_21da_a1_b(tv1) && !f_21ce_a1_b(tv1)) {
					tv0->AddReply(511476, 12683, 12682);
				}
				tv0->AddReply(511479, -1, 12685);
				return;
			}
			if (a0 == 12683) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511477);
				tv0->ClearReplies();
				tv0->AddReply(511478, -1, 12684);
				return;
			}
			if (a0 == 12638) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511436);
				tv0->ClearReplies();
				tv0->AddReply(511437, 12640, 12639);
				tv0->AddReply(511450, 12654, 12653);
				return;
			}
			if (a0 == 12654) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511451);
				tv0->ClearReplies();
				tv0->AddReply(511452, 12656, 12655);
				return;
			}
			if (a0 == 12656) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511453);
				tv0->ClearReplies();
				tv0->AddReply(511454, 12640, 12657);
				return;
			}
			if (a0 == 12640) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511438);
				tv0->ClearReplies();
				tv0->AddReply(511439, 12642, 12641);
				return;
			}
			if (a0 == 12642) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511440);
				tv0->ClearReplies();
				tv0->AddReply(511441, 12644, 12643);
				tv0->AddReply(511449, 12644, 12651);
				return;
			}
			if (a0 == 12644) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511442);
				tv0->ClearReplies();
				tv0->AddReply(511443, 12646, 12645);
				return;
			}
			if (a0 == 12646) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511444);
				tv0->ClearReplies();
				tv0->AddReply(511445, 12648, 12647);
				return;
			}
			if (a0 == 12648) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511446);
				tv0->ClearReplies();
				tv0->AddReply(511447, -1, 12649);
				tv0->AddReply(511448, -1, 12650);
				return;
			}
			if (a0 == 12163) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(510996);
				tv0->ClearReplies();
				tv0->AddReply(510997, 12165, 12164);
				return;
			}
			if (a0 == 12165) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(510998);
				tv0->ClearReplies();
				tv0->AddReply(510999, 12167, 12166);
				tv0->AddReply(511001, 12170, 12168);
				return;
			}
			if (a0 == 12170) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511002);
				tv0->ClearReplies();
				tv0->AddReply(511003, 12167, 12171);
				tv0->AddReply(511004, 12167, 12172);
				return;
			}
			if (a0 == 12167) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511000);
				tv0->ClearReplies();
				tv0->AddReply(511005, 12176, 12175);
				tv0->AddReply(511008, 12176, 12178);
				return;
			}
			if (a0 == 12176) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511006);
				tv0->ClearReplies();
				tv0->AddReply(511007, 12180, 12177);
				tv0->AddReply(511012, -1, 12183);
				return;
			}
			if (a0 == 12180) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(511009);
				tv0->ClearReplies();
				tv0->AddReply(511010, -1, 12181);
				tv0->AddReply(511011, -1, 12182);
				return;
			}
			if (a0 == 11195) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(510153);
				tv0->ClearReplies();
				tv0->AddReply(510977, 12140, 12139);
				tv0->AddReply(510154, 11197, 11196);
				return;
			}
			if (a0 == 11197) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(510155);
				tv0->ClearReplies();
				tv0->AddReply(510982, 12145, 12144);
				tv0->AddReply(510986, 12149, 12148);
				return;
			}
			if (a0 == 12149) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(510987);
				tv0->ClearReplies();
				tv0->AddReply(510988, 12143, 12150);
				return;
			}
			if (a0 == 12145) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(510983);
				tv0->ClearReplies();
				tv0->AddReply(510984, 12143, 12146);
				tv0->AddReply(510985, 12143, 12147);
				return;
			}
			if (a0 == 12140) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(510978);
				tv0->ClearReplies();
				tv0->AddReply(510980, 12143, 12142);
				return;
			}
			if (a0 == 12143) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(510981);
				tv0->ClearReplies();
				tv0->AddReply(510159, 12154, 11201);
				tv0->AddReply(510990, 12154, 12155);
				return;
			}
			if (a0 == 12154) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(510989);
				tv0->ClearReplies();
				tv0->AddReply(510992, 12157, 12158);
				return;
			}
			if (a0 == 12157) {
				f_1484_a1_v("Neutral");
				tv0->SetMessage(510991);
				tv0->ClearReplies();
				tv0->AddReply(510993, -1, 12160);
				tv0->AddReply(510994, -1, 12161);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		f_1be6_a1_b(f_1c93_a0_o());
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			f_1836_a1_v("Neutral");
			tv0->SetMessage(511662);
			tv0->ClearReplies();
			if (f_21fe_a1_b(tv1) || f_21e6_a1_b(tv1) || f_21f2_a1_b(tv1)) {
				tv0->AddReply(511663, 12863, 12862);
			}
			tv0->AddReply(511960, -1, 13174);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_1836_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a1 == 37097) {
				f_1fe0_a2_v(tv1, tv0);
			}
			if (a1 == 12878) {
				f_1fe0_a2_v(tv1, tv0);
			}
			if (a1 == 37118) {
				f_1fe0_a2_v(tv1, tv0);
			}
			if (a1 == 37096) {
				f_1fe0_a2_v(tv1, tv0);
			}
			if (a0 == 12861) {
				f_1836_a1_v("Neutral");
				tv0->SetMessage(511662);
				tv0->ClearReplies();
				if (f_21fe_a1_b(tv1) || f_21e6_a1_b(tv1) || f_21f2_a1_b(tv1)) {
					tv0->AddReply(511663, 12863, 12862);
				}
				tv0->AddReply(511960, -1, 13174);
				return;
			}
			if (a0 == 12863) {
				f_1836_a1_v("Neutral");
				tv0->SetMessage(511664);
				tv0->ClearReplies();
				tv0->AddReply(511680, 12867, 12879);
				tv0->AddReply(511665, 12865, 12864);
				return;
			}
			if (a0 == 12865) {
				f_1836_a1_v("Neutral");
				tv0->SetMessage(511666);
				tv0->ClearReplies();
				tv0->AddReply(511667, 12867, 12866);
				return;
			}
			if (a0 == 12867) {
				f_1836_a1_v("Neutral");
				tv0->SetMessage(511668);
				tv0->ClearReplies();
				tv0->AddReply(511669, 12869, 12868);
				tv0->AddReply(511684, 12886, 12885);
				tv0->AddReply(535434, 12875, 37115);
				return;
			}
			if (a0 == 12875) {
				f_1836_a1_v("Neutral");
				tv0->SetMessage(511676);
				tv0->ClearReplies();
				tv0->AddReply(511677, 12877, 12876);
				tv0->AddReply(535416, -1, 37096);
				return;
			}
			if (a0 == 12886) {
				f_1836_a1_v("Neutral");
				tv0->SetMessage(511685);
				tv0->ClearReplies();
				tv0->AddReply(511686, 12888, 12887);
				return;
			}
			if (a0 == 12888) {
				f_1836_a1_v("Neutral");
				tv0->SetMessage(511687);
				tv0->ClearReplies();
				tv0->AddReply(511688, 12869, 12889);
				return;
			}
			if (a0 == 12869) {
				f_1836_a1_v("Neutral");
				tv0->SetMessage(511670);
				tv0->ClearReplies();
				tv0->AddReply(511673, 12873, 12872);
				tv0->AddReply(511671, 12871, 12870);
				return;
			}
			if (a0 == 12871) {
				f_1836_a1_v("Neutral");
				tv0->SetMessage(511672);
				tv0->ClearReplies();
				tv0->AddReply(511681, 12882, 12881);
				return;
			}
			if (a0 == 12882) {
				f_1836_a1_v("Neutral");
				tv0->SetMessage(511682);
				tv0->ClearReplies();
				tv0->AddReply(511683, 12873, 12883);
				return;
			}
			if (a0 == 12873) {
				f_1836_a1_v("Neutral");
				tv0->SetMessage(511674);
				tv0->ClearReplies();
				tv0->AddReply(511675, 12877, 12874);
				tv0->AddReply(535436, -1, 37118);
				return;
			}
			if (a0 == 12877) {
				f_1836_a1_v("Neutral");
				tv0->SetMessage(511678);
				tv0->ClearReplies();
				tv0->AddReply(535417, -1, 37097);
				tv0->AddReply(511679, -1, 12878);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		f_1be6_a1_b(f_1c93_a0_o());
		if (!f_1b91_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1d63_a0_i());
		L0->SetNPCDescription(f_1d61_a0_i());
		L0->SetPhoto(f_1d65_a0_s());
		L0->SetPhoto2(f_1d67_a0_s());
		L0->SetPlayerName(f_23ed_a0_i());
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
		f_1bd5_a1_v(a0);
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
			f_1a21_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_1d69_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1c70_a1_v(tv2);
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

	void f_1a21_a1_v(string a0)
	{
		if (!f_1d69_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1c77_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1c8c_a0_v();
			if (a0 == 42557) {
				f_1a21_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_1d69_a0_b()) {
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
		f_1a68_a0_v();
	}

	void f_1a68_a0_v(void)
	{
		if (!f_1b8c_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_1b1e_a0_v();
		}
	}

	bool f_1a7c_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1b83_a1_b(L0);
	}

	void f_1a8b_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1a90_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1b6a_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1aa6_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1aaf_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1aaf_a0_v();
			if (f_1b8c_a0_b() && f_1a90_a0_b()) {
				if (f_1a7c_a0_b()) {
					f_1c20_a1_b(f_1c93_a0_o());
				}
			} else {
				f_1a8b_a0_v();
				f_1aa6_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1b65_a0_v();
		f_1aaf_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_1aaf_a0_v();
		f_1c70_a1_v("Neutral");
		f_1aa6_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1aa6_a0_v();
		} else {
			f_1c70_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1b65_a0_v();
			f_1b83_a1_b(a0);
			enable OnUse;
			f_23fe_a1_v(a0);
			f_1c70_a1_v("Neutral");
			f_1aaf_a0_v();
			f_1aa6_a0_v();
		}
	}
}

void f_1b1e_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1b8c_a0_b()) {
		return;
	}
	L0 = f_1d50_a0_i();
	for (L1 = 0; L1 < 5 && f_1b8c_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1d49_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1b63_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1b63_a0_b(void)
{
	return true;
}

void f_1b65_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1b6a_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_1b72_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1b79_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1b83_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1b79_a1_b(L0);
}

bool f_1b8c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1b91_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1c99_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_1d69_a0_b()) {
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

void f_1bd5_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_1d69_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1be6_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1c20_a1_b(a0)) {
			if (!f_1c45_a1_b(a0)) {
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
		if (!f_1c45_a1_b(a0)) {
			if (!f_1c20_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1c20_a1_b(object a0)
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
	return f_1c7d_a1_b(L4);
}

bool f_1c45_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1d27_a0_i() + "m";
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
	return f_1c7d_a1_b(L4);
}

void f_1c70_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1c77_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_1c7d_a1_b(string a0)
{
	if (f_1d69_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1c8c_a0_v(void)
{
	if (f_1d69_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1c93_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1c99_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1ca3_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1ca8_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_1cb3_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1cbf_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(4, L0);
}

void f_1ccb_a2_v(object a0, int a1)
{
	f_1b72_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1cb3_a2_v(L0, a1);
	}
}

void f_1cde_a3_v(object a0, object a1, int a2)
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
		f_1cb3_a2_v(L0, a2);
	}
}

void f_1cf1_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1cde_a3_v(a0, L0, a2);
}

bool f_1cfe_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_1d05_a2_b(object a0, string a1)
{
	int L0;
	int L1;
	bool L2;
	@GetInvItemByName(L0, a1);
	@GetInvItemProperty(L1, L0, "Category");
	a0->RemoveItemByType(L2, L0, L1);
	if (L2) {
		f_1cbf_a2_v(L0, 1);
	}
	return L2;
}

bool f_1d16_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1d22_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1d27_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1d30_a1_b(int a0)
{
	return f_1d27_a0_i() == a0;
}

bool f_1d36_a1_b(int a0)
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

string f_1d49_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1d50_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1d49_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1d61_a0_i(void)
{
	return 515541;
}

int f_1d63_a0_i(void)
{
	return 502866;
}

string f_1d65_a0_s(void)
{
	return "ui/NPC_Lara.png";
}

string f_1d67_a0_s(void)
{
	return "ui/NPC_Lara_b.png";
}

bool f_1d69_a0_b(void)
{
	return true;
}

void f_1d6b_a2_v(object a0, object a1)
{
	f_22b5_a0_v();
	f_22dc_a0_v();
	f_1ca8_a1_o("quest_d1_04");
}

void f_1d77_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_23bb_a0_o();
	L0->FindMark(L1, "k2q04AnnaGotoGatherer1");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q04MladVladGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q04AnnaGotoGatherer3");
	if (L1) {
		L1->Remove();
	}
	f_22c2_a0_v();
	f_1d16_a2_b("quest_d1_04", "completed");
}

void f_1d9c_a2_v(object a0, object a1)
{
	@Trace("money1000 is given");
	f_1ccb_a2_v(a0, 1000);
}

void f_1da6_a2_v(object a0, object a1)
{
	@Trace("funduk3 is given");
	f_1cf1_a3_v(a0, "funduk", 3);
}

void f_1db1_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1db7_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1dbd_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_23bb_a0_o();
	L0->FindMark(L1, "k2q04AnnaGotoGatherer1");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q04AnnaGotoGatherer3");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q04MladVladGotoAnna");
	if (L1) {
		L1->Remove();
	}
	f_22cf_a0_v();
	f_1d16_a2_b("quest_d1_04", "fail");
}

void f_1de2_a2_v(object a0, object a1)
{
	f_23cc_a3_v(f_23bb_a0_o(), "pt_map_station", 2);
	a1->ShowMap(f_23bb_a0_o());
}

void f_1df2_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_23bb_a0_o();
	L0->AddMark("d1q01LaraMarkMladVlad", "pt_map_station", 3, 508647, f_1d22_a0_f());
}

void f_1e02_a2_v(object a0, object a1)
{
	@SetVariable("ood1Lara1", 1);
}

void f_1e08_a2_v(object a0, object a1)
{
	@SetVariable("ood1Lara2", 1);
}

void f_1e0e_a2_v(object a0, object a1)
{
	f_1d05_a2_b(a0, "powder");
}

void f_1e15_a2_v(object a0, object a1)
{
	@SetVariable("ood8Lara1", 1);
}

void f_1e1b_a2_v(object a0, object a1)
{
	@Trace("burah_serum is given");
	f_1cf1_a3_v(a0, "burah_serum", 1);
}

void f_1e26_a2_v(object a0, object a1)
{
	@SetVariable("ood9Lara1", 1);
}

void f_1e2c_a2_v(object a0, object a1)
{
	@SetVariable("d9q03", 1);
	f_235e_a0_v();
	f_2378_a0_v();
}

void f_1e38_a2_v(object a0, object a1)
{
	@SetVariable("d9q03", 1000);
	f_236b_a0_v();
}

void f_1e41_a2_v(object a0, object a1)
{
	if (f_1ca3_a1_i("d9q04") == 1) {
		@SetVariable("d9q04", 2);
		f_2385_a0_v();
	}
}

void f_1e51_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "Gun_danko", 15);
}

void f_1e57_a2_v(object a0, object a1)
{
	@Trace("walnut2 is given");
	f_1cf1_a3_v(a0, "walnut", 2);
}

void f_1e62_a2_v(object a0, object a1)
{
	@Trace("peanut3 is given");
	f_1cf1_a3_v(a0, "peanut", 3);
}

void f_1e6d_a2_v(object a0, object a1)
{
	@Trace("milk is given");
	f_1cf1_a3_v(a0, "milk", 1);
}

void f_1e78_a2_v(object a0, object a1)
{
	@SetVariable("ood3Lara1", 1);
}

void f_1e7e_a2_v(object a0, object a1)
{
	@SetVariable("d9LaraVisit", 1);
}

void f_1e84_a2_v(object a0, object a1)
{
	f_2351_a0_v();
}

void f_1e89_a2_v(object a0, object a1)
{
	@SetVariable("ood10Lara1", 1);
}

void f_1e8f_a2_v(object a0, object a1)
{
	@Trace("lens is given");
	f_1cf1_a3_v(a0, "lens", 1);
}

void f_1e9a_a2_v(object a0, object a1)
{
	@SetVariable("ood2Lara1", 1);
}

void f_1ea0_a2_v(object a0, object a1)
{
	@SetVariable("ood2Lara2", 1);
}

void f_1ea6_a2_v(object a0, object a1)
{
	@SetVariable("ood2Lara3", 1);
}

void f_1eac_a2_v(object a0, object a1)
{
	@SetVariable("ood2Lara4", 1);
}

void f_1eb2_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q03", 1);
	L0 = f_23bb_a0_o();
	L0->AddMark("d2q03LaraGotoMoneyFoodSelf", "pt_map_lara", 0, 515286, f_1d22_a0_f());
	L0->AddMark("d2q03LaraGotoJulia", "pt_map_julia", 0, 515288, f_1d22_a0_f());
	L0->AddMark("d2q03LaraGotoMaria", "pt_map_maria", 0, 515289, f_1d22_a0_f());
	L0->AddMark("d2q03LaraGotoMladVlad", "pt_map_mladvlad", 0, 515287, f_1d22_a0_f());
	f_22e9_a0_v();
	f_22f6_a0_v();
	f_1ca8_a1_o("quest_d2_03");
}

void f_1eeb_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q03", 2);
	L0 = f_23bb_a0_o();
	L0->AddMark("d2q03LaraGotoSklad", "pt_map_d2q03_shouse", 0, 515290, f_1d22_a0_f());
	f_2303_a0_v();
}

void f_1f02_a2_v(object a0, object a1)
{
	int L0;
	f_2310_a0_v();
	a0->RemoveItemByType(L0, "smoked_meat", 3);
	a0->RemoveItemByType(L0, "dried_fish", 3);
	a0->RemoveItemByType(L0, "bread", 3);
	f_1d16_a2_b("quest_d2_03", "completed");
}

void f_1f18_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1f1e_a2_v(object a0, object a1)
{
	f_1d16_a2_b("quest_d2_03", "birdmask");
}

void f_1f25_a2_v(object a0, object a1)
{
	f_23cc_a3_v(f_23bb_a0_o(), "pt_map_ospina", 2);
	a1->ShowMap(f_23bb_a0_o());
}

void f_1f35_a2_v(object a0, object a1)
{
	f_23cc_a3_v(f_23bb_a0_o(), "pt_map_mladvlad", 2);
	a1->ShowMap(f_23bb_a0_o());
}

void f_1f45_a2_v(object a0, object a1)
{
	@Trace("bread is given");
	f_1cf1_a3_v(a0, "bread", 1);
}

void f_1f50_a2_v(object a0, object a1)
{
	@SetVariable("ood4Lara1", 1);
}

void f_1f56_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01", 2);
	L0 = f_23bb_a0_o();
	L0->AddMark("d4q01LaraGotoMladVlad", "pt_map_mladvlad", 1, 511483, f_1d22_a0_f());
	L0->AddMark("d4q01LaraGotoMladVladSelf", "pt_map_lara", 1, 515321, f_1d22_a0_f());
	f_231d_a0_v();
}

void f_1f76_a2_v(object a0, object a1)
{
	@SetVariable("ood4Lara2", 1);
}

void f_1f7c_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01_subquest", 3);
	L0 = f_23bb_a0_o();
	L0->AddMark("d4q01LaraGotoOspina", "pt_map_ospina", 0, 511506, f_1d22_a0_f());
}

void f_1f90_a2_v(object a0, object a1)
{
	@SetVariable("ood4Lara3", 1);
}

void f_1f96_a2_v(object a0, object a1)
{
	@SetVariable("d4q02LaraGivesMedcine", 1);
}

void f_1f9c_a2_v(object a0, object a1)
{
	if (f_1ca3_a1_i("d4q02AnnaGivesMedcine") == 1 && f_1ca3_a1_i("d4q02JuliaGivesMedcine") == 1 && f_1ca3_a1_i("d4q02LaraGivesMedcine") == 1) {
		object L0;
		@SetVariable("d4q02", 2);
		L0 = f_23bb_a0_o();
		L0->AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", 0, 511842, f_1d22_a0_f());
		f_1d16_a2_b("quest_d4_02", "birdmask");
		f_23cc_a3_v(f_23bb_a0_o(), "pt_d4q02_birdmask", 2);
		a1->ShowMap(f_23bb_a0_o());
	}
}

void f_1fe0_a2_v(object a0, object a1)
{
	@SetVariable("d5q01", 5);
	f_232a_a0_v();
}

void f_1fe9_a2_v(object a0, object a1)
{
	@SetVariable("d2LaraVisit", 1);
}

void f_1fef_a2_v(object a0, object a1)
{
	@SetVariable("ood6Lara1", 1);
}

void f_1ff5_a2_v(object a0, object a1)
{
	f_2337_a0_v();
	@Trace("lara blood is given");
	f_1cf1_a3_v(a0, "d6q01_lara_blood", 1);
}

void f_2003_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_2009_a2_v(object a0, object a1)
{
	@SetVariable("ood6Lara2", 1);
}

void f_200f_a2_v(object a0, object a1)
{
	@SetVariable("ood6Lara3", 1);
}

void f_2015_a2_v(object a0, object a1)
{
	@SetVariable("ood6Lara4", 1);
}

void f_201b_a2_v(object a0, object a1)
{
	@SetVariable("d6q01LaraVolonteer", 1);
	f_2344_a0_v();
	f_1d16_a2_b("quest_d6_01", "completed");
}

void f_2029_a2_v(object a0, object a1)
{
	@SetVariable("KnowLara", 1);
}

void f_202f_a2_v(object a0, object a1)
{
	f_23cc_a3_v(f_23bb_a0_o(), "pt_map_d2q03_shouse", 2);
	a1->ShowMap(f_23bb_a0_o());
}

void f_203f_a2_v(object a0, object a1)
{
	@Trace("morfin is given");
	f_1cf1_a3_v(a0, "morfin", 1);
}

void f_204a_a2_v(object a0, object a1)
{
	@Trace("etorfin is given");
	f_1cf1_a3_v(a0, "etorfin", 1);
}

void f_2055_a2_v(object a0, object a1)
{
	@Trace("novocaine is given");
	f_1cf1_a3_v(a0, "novocaine", 1);
}

bool f_2060_a1_b(object a0)
{
	if (f_1ca3_a1_i("d1q04") == 0) {
		return true;
	}
	return false;
}

bool f_206c_a1_b(object a0)
{
	if (f_1ca3_a1_i("d1q04") == 1000) {
		return true;
	}
	return false;
}

bool f_2078_a1_b(object a0)
{
	if (f_1ca3_a1_i("d1q04") == 1) {
		return true;
	}
	return false;
}

bool f_2084_a1_b(object a0)
{
	if (f_1ca3_a1_i("d1q01") == 6) {
		return true;
	}
	return false;
}

bool f_2090_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood1Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_209c_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood1Lara2") == 0) {
		return true;
	}
	return false;
}

bool f_20a8_a1_b(object a0)
{
	if (f_1cfe_a2_b(a0, "powder")) {
		return true;
	}
	return false;
}

bool f_20b3_a1_b(object a0)
{
	if (f_1ca3_a1_i("d8q04") == 1000) {
		return true;
	}
	return false;
}

bool f_20bf_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood8Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_20cb_a1_b(object a0)
{
	if (f_1ca3_a1_i("d9q02") == 1) {
		return true;
	}
	return false;
}

bool f_20d7_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood9Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_20e3_a1_b(object a0)
{
	if (f_1cfe_a2_b(a0, "Gun_danko")) {
		return true;
	}
	return false;
}

bool f_20ee_a1_b(object a0)
{
	if (f_1ca3_a1_i("d9q03") == 1) {
		return true;
	}
	return false;
}

bool f_20fa_a1_b(object a0)
{
	if (f_1ca3_a1_i("d9q03") == 0) {
		return true;
	}
	return false;
}

bool f_2106_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood3Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_2112_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood10Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_211e_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood2Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_212a_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood2Lara2") == 0) {
		return true;
	}
	return false;
}

bool f_2136_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood2Lara3") == 0) {
		return true;
	}
	return false;
}

bool f_2142_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood2Lara4") == 0) {
		return true;
	}
	return false;
}

bool f_214e_a1_b(object a0)
{
	if (f_1ca3_a1_i("d2q03") == 0) {
		return true;
	}
	return false;
}

bool f_215a_a1_b(object a0)
{
	if (f_226a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2164_a1_b(object a0)
{
	if (f_229a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_216e_a1_b(object a0)
{
	if (f_1ca3_a1_i("d2q03") == 1) {
		return true;
	}
	return false;
}

bool f_217a_a1_b(object a0)
{
	if (f_1ca3_a1_i("d2q03") == 3) {
		return true;
	}
	return false;
}

bool f_2186_a1_b(object a0)
{
	if (f_1ca3_a1_i("d2q03") == 1000) {
		return true;
	}
	return false;
}

bool f_2192_a1_b(object a0)
{
	if (f_1ca3_a1_i("d4q01") == 1) {
		return true;
	}
	return false;
}

bool f_219e_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood4Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_21aa_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood4Lara2") == 0) {
		return true;
	}
	return false;
}

bool f_21b6_a1_b(object a0)
{
	if (f_1ca3_a1_i("d4q01_subquest") == 2) {
		return true;
	}
	return false;
}

bool f_21c2_a1_b(object a0)
{
	if (f_1ca3_a1_i("d4q02") == 1) {
		return true;
	}
	return false;
}

bool f_21ce_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood4Lara3") == 0) {
		return true;
	}
	return false;
}

bool f_21da_a1_b(object a0)
{
	if (f_1ca3_a1_i("d4q02LaraGivesMedcine") == 1) {
		return true;
	}
	return false;
}

bool f_21e6_a1_b(object a0)
{
	if (f_1ca3_a1_i("d5q01") == 2) {
		return true;
	}
	return false;
}

bool f_21f2_a1_b(object a0)
{
	if (f_1ca3_a1_i("d5q01") == 3) {
		return true;
	}
	return false;
}

bool f_21fe_a1_b(object a0)
{
	if (f_1ca3_a1_i("d5q01") == 4) {
		return true;
	}
	return false;
}

bool f_220a_a1_b(object a0)
{
	if (f_1ca3_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_2216_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood6Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_2222_a1_b(object a0)
{
	if (f_1ca3_a1_i("microscope_d6q01_lara_blood") != 0) {
		return true;
	}
	return false;
}

bool f_222e_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood6Lara2") == 0) {
		return true;
	}
	return false;
}

bool f_223a_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood6Lara3") == 0) {
		return true;
	}
	return false;
}

bool f_2246_a1_b(object a0)
{
	if (f_1ca3_a1_i("ood6Lara4") == 0) {
		return true;
	}
	return false;
}

bool f_2252_a1_b(object a0)
{
	if (f_1ca3_a1_i("d6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_225e_a1_b(object a0)
{
	if (f_1ca3_a1_i("d6q01") == -1) {
		return true;
	}
	return false;
}

bool f_226a_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "smoked_meat");
	if (L0 < 3 && L0 > 0) {
		return true;
	}
	a0->GetItemCountOfType(L0, "dried_fish");
	if (L0 < 3 && L0 > 0) {
		return true;
	}
	a0->GetItemCountOfType(L0, "bread");
	if (L0 < 3 && L0 > 0) {
		return true;
	}
	return false;
}

bool f_229a_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "smoked_meat");
	if (L0 < 3) {
		return false;
	}
	a0->GetItemCountOfType(L0, "dried_fish");
	if (L0 < 3) {
		return false;
	}
	a0->GetItemCountOfType(L0, "bread");
	if (L0 < 3) {
		return false;
	}
	return true;
}

void f_22b5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 43, 2, 512125);
	f_239f_a2_b(L0, -1);
}

void f_22c2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 47, 2, 512129);
	f_239f_a2_b(L0, 43);
}

void f_22cf_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 48, 2, 512130);
	f_239f_a2_b(L0, 43);
}

void f_22dc_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 44, 2, 512126);
	f_239f_a2_b(L0, 43);
}

void f_22e9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 12, 2, 503096);
	f_239f_a2_b(L0, -1);
}

void f_22f6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 63, 2, 512145);
	f_239f_a2_b(L0, 12);
}

void f_2303_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 65, 2, 512147);
	f_239f_a2_b(L0, 12);
}

void f_2310_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 66, 2, 512148);
	f_239f_a2_b(L0, 12);
}

void f_231d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 88, 1, 512170);
	f_239f_a2_b(L0, 20);
}

void f_232a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 143, 1, 515343);
	f_239f_a2_b(L0, 139);
}

void f_2337_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 160, 1, 515393);
	f_239f_a2_b(L0, 111);
}

void f_2344_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 118, 1, 513741);
	f_239f_a2_b(L0, 111);
}

void f_2351_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 719, 1, 538783);
	f_239f_a2_b(L0, 111);
}

void f_235e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 659, 2, 533577);
	f_239f_a2_b(L0, -1);
}

void f_236b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 661, 2, 533579);
	f_239f_a2_b(L0, 659);
}

void f_2378_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 660, 2, 533578);
	f_239f_a2_b(L0, 659);
}

void f_2385_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 664, 2, 533582);
	f_239f_a2_b(L0, 662);
}

object f_2392_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_239f_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2392_a0_o();
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

object f_23bb_a0_o(void)
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

void f_23cc_a3_v(object a0, string a1, float a2)
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

int f_23ed_a0_i(void)
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

void f_23fe_a1_v(object a0)
{
	if (!g1) {
		t13{a0};
		g1 = true;
	}
	if (f_1d36_a1_b(2)) {
		t3{a0};
		return;
	}
	if (f_1d30_a1_b(1)) {
		t1{a0};
		return;
	}
	if (f_1d30_a1_b(2)) {
		t17{a0};
		return;
	}
	if (f_1d30_a1_b(3)) {
		t19{a0};
		return;
	}
	if (f_1d30_a1_b(4)) {
		t21{a0};
		return;
	}
	if (f_1d30_a1_b(5)) {
		t23{a0};
		return;
	}
	if (f_1d30_a1_b(6)) {
		t15{a0};
		return;
	}
	if (f_1d30_a1_b(8)) {
		t5{a0};
		return;
	}
	if (f_1d30_a1_b(9)) {
		t7{a0};
		return;
	}
	if (f_1d30_a1_b(10)) {
		t9{a0};
		return;
	}
	if (f_1d30_a1_b(12)) {
		t11{a0};
		return;
	}
	t25{a0};
}

