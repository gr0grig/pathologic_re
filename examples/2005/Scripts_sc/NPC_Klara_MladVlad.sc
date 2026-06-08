event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event OnTimer 7;
event evt_11 11;

var string g0;
var object g1;
var bool g2;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_cc8_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	var bool tv0;

	bool init(Vector a0, Vector a1)
	{
		bool L0;
		tv0 = true;
		@SetTimer(21, 0.5);
		for (; ; ) {
			while (!f_caa_a1_b(a0)) {
			}
			@MovePoint(a0, false, L0);
			if (L0) {
				break;
			}
		}
		@KillTimer(20);
		@KillTimer(21);
		tv0 = false;
		@WaitForAnimEnd(L0);
		if (!L0) {
			return false;
		}
		@Rotate(a1.x, a1.z, L0);
		if (!L0) {
			return false;
		}
		return true;
	}

	void OnUnload(void)
	{
		tv0 = true;
		f_91_a0_v();
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_91_a0_v();
			disable OnUse;
			f_cb4_a1_b(a0);
			enable OnUse;
			f_1100_a1_v(a0);
			tv0 = false;
		}
	}

	void OnCollision(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			f_91_a0_v();
			t2{a0};
			tv0 = false;
			@SetTimer(20, 10.0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 20) {
			tv0 = true;
			@KillTimer(20);
		} else {
			if (a0 == 21) {
				if (tv0) {
					object L0;
					@FindActor(L0, "player");
					if (L0 && f_c79_a1_f(L0) <= 62500.0) {
						OnCollision(L0);
					}
				}
			}
		}
	}

	void f_91_a0_v(void)
	{
		@Stop();
	}
}

task t2
{
	void init(object a0)
	{
		bool L0;
		@WaitForAnimEnd(L0);
		if (!L0) {
			return;
		}
		f_cbd_a1_v(a0);
		@Sleep(6);
	}

	void OnUnload(void)
	{
		f_c1_a0_v();
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_c1_a0_v();
			disable OnUse;
			f_cb4_a1_b(a0);
			enable OnUse;
			f_1100_a1_v(a0);
		}
	}

	void f_c1_a0_v(void)
	{
		@StopGroup0();
		@StopAnimation();
	}
}

task t3
{
	void init(int a0)
	{
		string L0;
		bool L1;
		if (a0) {
			L0 = "ptidle" + a0;
		} else {
			L0 = "ptidle";
		}
		@HasProperty(L0, L1);
		if (L1) {
			string L2;
			int L3;
			int L4;
			@GetProperty(L0, L2);
			L3 = f_108_a1_i(L2);
			@irand(L4, L3);
			@PlayAnimation("all", f_100_a2_s(L2, L4));
			@WaitForAnimEnd();
		} else {
			int L5;
			L5 = f_e68_a0_i();
			if (L5) {
				int L6;
				@irand(L6, L5);
				@PlayAnimation("all", f_e61_a1_s(L6));
				@WaitForAnimEnd();
			}
		}
	}

	void OnUnload(void)
	{
		global.OnUnload();
		t0{};
	}

	string f_100_a2_s(string a0, int a1)
	{
		return a1 == 0 ? a0 : a0 + a1;
	}

	int f_108_a1_i(string a0)
	{
		int L0;
		for (L0 = 0; ; L0 = L0 + 1) {
			bool L1;
			@HasAnimation(L1, "all", f_100_a2_s(a0, L0));
			if (!L1) {
				break;
			}
		}
		return L0;
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
		f_d22_a1_b(f_dcf_a0_o());
		if (!f_ccd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e89_a0_i());
		L0->SetNPCDescription(f_e87_a0_i());
		L0->SetPhoto(f_e8b_a0_s());
		L0->SetPhoto2(f_e8d_a0_s());
		L0->SetPlayerName(f_10ef_a0_i());
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
		f_d11_a1_v(a0);
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
			if (f_f72_a1_b(tv1) && !f_f66_a1_b(tv1)) {
				f_eaf_a2_v(tv1, tv0);
				f_22f_a1_v("Neutral");
				tv0->SetMessage(525337);
				tv0->ClearReplies();
				tv0->AddReply(525338, 26707, 26706);
				tv0->AddReply(539465, -1, 41388);
				break;
			}
			f_22f_a1_v("Neutral");
			tv0->SetMessage(525237);
			tv0->ClearReplies();
			if (f_f66_a1_b(tv1)) {
				tv0->AddReply(525238, 26607, 26606);
			}
			if (f_f7e_a1_b(tv1) && !f_f72_a1_b(tv1)) {
				tv0->AddReply(525342, 26711, 26710);
			}
			if (f_f8a_a1_b(tv1) && f_fac_a1_b(tv1)) {
				tv0->AddReply(525372, 26741, 26740);
			}
			if (f_fa2_a1_b(tv1) && f_fb8_a1_b(tv1)) {
				tv0->AddReply(525369, 26738, 26737);
			}
			if (!f_fa2_a1_b(tv1) && f_fb8_a1_b(tv1)) {
				tv0->AddReply(525381, 26750, 26749);
			}
			if (f_f96_a1_b(tv1)) {
				tv0->AddReply(525375, 26744, 26743);
			}
			tv0->AddReply(525243, -1, 26611);
			tv0->AddReply(529207, -1, 30658);
			break;
			return;
		}
		if (f_e8f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dac_a1_v(tv2);
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

	void f_22f_a1_v(string a0)
	{
		if (!f_e8f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_db3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_dc8_a0_v();
			if (a1 == 26708) {
				f_eb5_a2_v(tv1, tv0);
				f_f3f_a2_v(tv1, tv0);
			}
			if (a1 == 26610) {
				f_e98_a2_v(tv1, tv0);
				f_f4f_a2_v(tv1, tv0);
			}
			if (a1 == 26712) {
				f_eb5_a2_v(tv1, tv0);
				f_f3f_a2_v(tv1, tv0);
			}
			if (a1 == 26740) {
				f_ecf_a2_v(tv1, tv0);
			}
			if (a1 == 26739) {
				f_ed5_a2_v(tv1, tv0);
				f_f2f_a2_v(tv1, tv0);
				f_f39_a2_v(tv1, tv0);
			}
			if (a1 == 26751) {
				f_ee6_a2_v(tv1, tv0);
				f_e91_a2_v(tv1, tv0);
			}
			if (a1 == 26748) {
				f_eef_a2_v(tv1, tv0);
				f_f1b_a2_v(tv1, tv0);
				f_f5f_a2_v(tv1, tv0);
				f_f39_a2_v(tv1, tv0);
			}
			if (a1 == 26746) {
				f_ef8_a2_v(tv1, tv0);
				f_f39_a2_v(tv1, tv0);
				f_f25_a2_v(tv1, tv0);
			}
			if (a0 == 26705) {
				if (f_f72_a1_b(tv1) && !f_f66_a1_b(tv1)) {
					f_eaf_a2_v(tv1, tv0);
					f_22f_a1_v("Neutral");
					tv0->SetMessage(525337);
					tv0->ClearReplies();
					tv0->AddReply(525338, 26707, 26706);
					tv0->AddReply(539465, -1, 41388);
					return;
				}
				f_22f_a1_v("Neutral");
				tv0->SetMessage(525237);
				tv0->ClearReplies();
				if (f_f66_a1_b(tv1)) {
					tv0->AddReply(525238, 26607, 26606);
				}
				if (f_f7e_a1_b(tv1) && !f_f72_a1_b(tv1)) {
					tv0->AddReply(525342, 26711, 26710);
				}
				if (f_f8a_a1_b(tv1) && f_fac_a1_b(tv1)) {
					tv0->AddReply(525372, 26741, 26740);
				}
				if (f_fa2_a1_b(tv1) && f_fb8_a1_b(tv1)) {
					tv0->AddReply(525369, 26738, 26737);
				}
				if (!f_fa2_a1_b(tv1) && f_fb8_a1_b(tv1)) {
					tv0->AddReply(525381, 26750, 26749);
				}
				if (f_f96_a1_b(tv1)) {
					tv0->AddReply(525375, 26744, 26743);
				}
				tv0->AddReply(525243, -1, 26611);
				tv0->AddReply(529207, -1, 30658);
				return;
			}
			if (a0 == 26744) {
				f_22f_a1_v("Neutral");
				tv0->SetMessage(525376);
				tv0->ClearReplies();
				tv0->AddReply(525377, 26747, 26745);
				tv0->AddReply(525378, -1, 26746);
				return;
			}
			if (a0 == 26747) {
				f_22f_a1_v("Neutral");
				tv0->SetMessage(525379);
				tv0->ClearReplies();
				tv0->AddReply(525380, -1, 26748);
				return;
			}
			if (a0 == 26750) {
				f_22f_a1_v("Neutral");
				tv0->SetMessage(525382);
				tv0->ClearReplies();
				tv0->AddReply(525383, -1, 26751);
				return;
			}
			if (a0 == 26738) {
				f_22f_a1_v("Neutral");
				tv0->SetMessage(525370);
				tv0->ClearReplies();
				tv0->AddReply(525371, -1, 26739);
				return;
			}
			if (a0 == 26741) {
				f_22f_a1_v("Neutral");
				tv0->SetMessage(525373);
				tv0->ClearReplies();
				tv0->AddReply(525374, -1, 26742);
				return;
			}
			if (a0 == 26711) {
				f_22f_a1_v("Neutral");
				tv0->SetMessage(525343);
				tv0->ClearReplies();
				tv0->AddReply(525344, -1, 26712);
				return;
			}
			if (a0 == 26607) {
				f_22f_a1_v("Neutral");
				tv0->SetMessage(525239);
				tv0->ClearReplies();
				tv0->AddReply(529208, 30660, 30659);
				tv0->AddReply(529212, 30660, 30663);
				return;
			}
			if (a0 == 30660) {
				f_22f_a1_v("Neutral");
				tv0->SetMessage(529209);
				tv0->ClearReplies();
				tv0->AddReply(529210, 30662, 30661);
				return;
			}
			if (a0 == 30662) {
				f_22f_a1_v("Neutral");
				tv0->SetMessage(529211);
				tv0->ClearReplies();
				tv0->AddReply(525240, 26609, 26608);
				return;
			}
			if (a0 == 26609) {
				f_22f_a1_v("Neutral");
				tv0->SetMessage(525241);
				tv0->ClearReplies();
				tv0->AddReply(525242, -1, 26610);
				return;
			}
			if (a0 == 26707) {
				f_22f_a1_v("Neutral");
				tv0->SetMessage(525339);
				tv0->ClearReplies();
				tv0->AddReply(525340, -1, 26708);
				tv0->AddReply(525341, -1, 26709);
				return;
			}
			tv3 = true;
			if (f_e8f_a0_b()) {
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
		f_d22_a1_b(f_dcf_a0_o());
		if (!f_ccd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e89_a0_i());
		L0->SetNPCDescription(f_e87_a0_i());
		L0->SetPhoto(f_e8b_a0_s());
		L0->SetPhoto2(f_e8d_a0_s());
		L0->SetPlayerName(f_10ef_a0_i());
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
		f_d11_a1_v(a0);
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
			f_4de_a1_v("Neutral");
			tv0->SetMessage(525414);
			tv0->ClearReplies();
			if (f_fc4_a1_b(tv1) && f_fd0_a1_b(tv1)) {
				tv0->AddReply(525415, 42567, 26783);
			}
			tv0->AddReply(525418, -1, 26786);
			break;
			return;
		}
		if (f_e8f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dac_a1_v(tv2);
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

	void f_4de_a1_v(string a0)
	{
		if (!f_e8f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_db3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_dc8_a0_v();
			if (a1 == 26783) {
				f_f01_a2_v(tv1, tv0);
			}
			if (a0 == 26782) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(525414);
				tv0->ClearReplies();
				if (f_fc4_a1_b(tv1) && f_fd0_a1_b(tv1)) {
					tv0->AddReply(525415, 42567, 26783);
				}
				tv0->AddReply(525418, -1, 26786);
				return;
			}
			if (a0 == 42567) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(540558);
				tv0->ClearReplies();
				tv0->AddReply(540559, 26784, 42568);
				tv0->AddReply(540560, 40922, 42569);
				return;
			}
			if (a0 == 26784) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(525416);
				tv0->ClearReplies();
				tv0->AddReply(525417, 40922, 26785);
				tv0->AddReply(540561, 40924, 42571);
				return;
			}
			if (a0 == 40922) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(538982);
				tv0->ClearReplies();
				tv0->AddReply(538983, 40924, 40923);
				return;
			}
			if (a0 == 40924) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(538984);
				tv0->ClearReplies();
				tv0->AddReply(538985, 40926, 40925);
				tv0->AddReply(538988, 40929, 40928);
				return;
			}
			if (a0 == 40929) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(538989);
				tv0->ClearReplies();
				tv0->AddReply(540565, 42578, 42577);
				tv0->AddReply(538990, 40931, 40930);
				return;
			}
			if (a0 == 40931) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(538991);
				tv0->ClearReplies();
				tv0->AddReply(538992, -1, 40932);
				tv0->AddReply(540575, -1, 42589);
				return;
			}
			if (a0 == 40926) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(538986);
				tv0->ClearReplies();
				tv0->AddReply(538987, 42573, 40927);
				return;
			}
			if (a0 == 42573) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(540562);
				tv0->ClearReplies();
				tv0->AddReply(540563, 40929, 42574);
				tv0->AddReply(540564, 42578, 42576);
				return;
			}
			if (a0 == 42578) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(540566);
				tv0->ClearReplies();
				tv0->AddReply(540592, 42607, 42606);
				return;
			}
			if (a0 == 42607) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(540593);
				tv0->ClearReplies();
				tv0->AddReply(540594, 42609, 42608);
				tv0->AddReply(540601, -1, 42615);
				return;
			}
			if (a0 == 42609) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(540595);
				tv0->ClearReplies();
				tv0->AddReply(540596, 42611, 42610);
				return;
			}
			if (a0 == 42611) {
				f_4de_a1_v("Neutral");
				tv0->SetMessage(540597);
				tv0->ClearReplies();
				tv0->AddReply(540600, -1, 42614);
				return;
			}
			tv3 = true;
			if (f_e8f_a0_b()) {
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
		f_d22_a1_b(f_dcf_a0_o());
		if (!f_ccd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e89_a0_i());
		L0->SetNPCDescription(f_e87_a0_i());
		L0->SetPhoto(f_e8b_a0_s());
		L0->SetPhoto2(f_e8d_a0_s());
		L0->SetPlayerName(f_10ef_a0_i());
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
		f_d11_a1_v(a0);
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
			f_6ba_a1_v("Neutral");
			tv0->SetMessage(525513);
			tv0->ClearReplies();
			tv0->AddReply(525514, 30738, 26870);
			tv0->AddReply(529284, 30738, 30737);
			break;
			return;
		}
		if (f_e8f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dac_a1_v(tv2);
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

	void f_6ba_a1_v(string a0)
	{
		if (!f_e8f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_db3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_dc8_a0_v();
			if (a0 == 26869) {
				f_6ba_a1_v("Neutral");
				tv0->SetMessage(525513);
				tv0->ClearReplies();
				tv0->AddReply(525514, 30738, 26870);
				tv0->AddReply(529284, 30738, 30737);
				return;
			}
			if (a0 == 30738) {
				f_6ba_a1_v("Neutral");
				tv0->SetMessage(529285);
				tv0->ClearReplies();
				tv0->AddReply(529286, -1, 30740);
				tv0->AddReply(529287, -1, 30741);
				return;
			}
			tv3 = true;
			if (f_e8f_a0_b()) {
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
		f_d22_a1_b(f_dcf_a0_o());
		if (!f_ccd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e89_a0_i());
		L0->SetNPCDescription(f_e87_a0_i());
		L0->SetPhoto(f_e8b_a0_s());
		L0->SetPhoto2(f_e8d_a0_s());
		L0->SetPlayerName(f_10ef_a0_i());
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
		f_d11_a1_v(a0);
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
			f_7b4_a1_v("Neutral");
			tv0->SetMessage(525841);
			tv0->ClearReplies();
			if (f_fdc_a1_b(tv1) && f_fe8_a1_b(tv1)) {
				tv0->AddReply(525842, 30544, 27141);
			}
			tv0->AddReply(525845, 30542, 27144);
			tv0->AddReply(529095, -1, 30540);
			tv0->AddReply(529096, -1, 30541);
			break;
			return;
		}
		if (f_e8f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dac_a1_v(tv2);
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

	void f_7b4_a1_v(string a0)
	{
		if (!f_e8f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_db3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_dc8_a0_v();
			if (a1 == 27141) {
				f_f07_a2_v(tv1, tv0);
			}
			if (a1 == 27143) {
				f_f0d_a2_v(tv1, tv0);
			}
			if (a0 == 27140) {
				f_7b4_a1_v("Neutral");
				tv0->SetMessage(525841);
				tv0->ClearReplies();
				if (f_fdc_a1_b(tv1) && f_fe8_a1_b(tv1)) {
					tv0->AddReply(525842, 30544, 27141);
				}
				tv0->AddReply(525845, 30542, 27144);
				tv0->AddReply(529095, -1, 30540);
				tv0->AddReply(529096, -1, 30541);
				return;
			}
			if (a0 == 30542) {
				f_7b4_a1_v("Neutral");
				tv0->SetMessage(529097);
				tv0->ClearReplies();
				tv0->AddReply(529098, -1, 30543);
				return;
			}
			if (a0 == 30544) {
				f_7b4_a1_v("Neutral");
				tv0->SetMessage(529099);
				tv0->ClearReplies();
				tv0->AddReply(529100, 30546, 30545);
				return;
			}
			if (a0 == 30546) {
				f_7b4_a1_v("Neutral");
				tv0->SetMessage(529101);
				tv0->ClearReplies();
				tv0->AddReply(529102, 27142, 30547);
				return;
			}
			if (a0 == 27142) {
				f_7b4_a1_v("Neutral");
				tv0->SetMessage(525843);
				tv0->ClearReplies();
				tv0->AddReply(529103, 30549, 30548);
				return;
			}
			if (a0 == 30549) {
				f_7b4_a1_v("Neutral");
				tv0->SetMessage(529104);
				tv0->ClearReplies();
				tv0->AddReply(529105, 30551, 30550);
				tv0->AddReply(539587, 41533, 41532);
				return;
			}
			if (a0 == 41533) {
				f_7b4_a1_v("Neutral");
				tv0->SetMessage(539588);
				tv0->ClearReplies();
				tv0->AddReply(539589, 30551, 41534);
				return;
			}
			if (a0 == 30551) {
				f_7b4_a1_v("Neutral");
				tv0->SetMessage(529106);
				tv0->ClearReplies();
				tv0->AddReply(525844, -1, 27143);
				return;
			}
			tv3 = true;
			if (f_e8f_a0_b()) {
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
		f_d22_a1_b(f_dcf_a0_o());
		if (!f_ccd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e89_a0_i());
		L0->SetNPCDescription(f_e87_a0_i());
		L0->SetPhoto(f_e8b_a0_s());
		L0->SetPhoto2(f_e8d_a0_s());
		L0->SetPlayerName(f_10ef_a0_i());
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
		f_d11_a1_v(a0);
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
			f_93e_a1_v("Neutral");
			tv0->SetMessage(526738);
			tv0->ClearReplies();
			if (f_1000_a1_b(tv1)) {
				tv0->AddReply(526739, 28017, 28016);
			}
			if (f_ff4_a1_b(tv1)) {
				tv0->AddReply(528763, 30180, 30179);
			}
			tv0->AddReply(526742, -1, 28019);
			tv0->AddReply(528847, -1, 30265);
			break;
			return;
		}
		if (f_e8f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dac_a1_v(tv2);
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

	void f_93e_a1_v(string a0)
	{
		if (!f_e8f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_db3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_dc8_a0_v();
			if (a1 == 28018) {
				f_f12_a2_v(tv1, tv0);
			}
			if (a0 == 28015) {
				f_93e_a1_v("Neutral");
				tv0->SetMessage(526738);
				tv0->ClearReplies();
				if (f_1000_a1_b(tv1)) {
					tv0->AddReply(526739, 28017, 28016);
				}
				if (f_ff4_a1_b(tv1)) {
					tv0->AddReply(528763, 30180, 30179);
				}
				tv0->AddReply(526742, -1, 28019);
				tv0->AddReply(528847, -1, 30265);
				return;
			}
			if (a0 == 30180) {
				f_93e_a1_v("Neutral");
				tv0->SetMessage(528764);
				tv0->ClearReplies();
				tv0->AddReply(528765, -1, 30181);
				return;
			}
			if (a0 == 28017) {
				f_93e_a1_v("Neutral");
				tv0->SetMessage(526740);
				tv0->ClearReplies();
				tv0->AddReply(528841, 30260, 30259);
				tv0->AddReply(528848, 30267, 30266);
				return;
			}
			if (a0 == 30267) {
				f_93e_a1_v("Neutral");
				tv0->SetMessage(528849);
				tv0->ClearReplies();
				tv0->AddReply(528850, 30262, 30268);
				tv0->AddReply(528851, 30262, 30269);
				return;
			}
			if (a0 == 30260) {
				f_93e_a1_v("Neutral");
				tv0->SetMessage(528842);
				tv0->ClearReplies();
				tv0->AddReply(528843, 30262, 30261);
				return;
			}
			if (a0 == 30262) {
				f_93e_a1_v("Neutral");
				tv0->SetMessage(528844);
				tv0->ClearReplies();
				tv0->AddReply(528845, 30264, 30263);
				return;
			}
			if (a0 == 30264) {
				f_93e_a1_v("Neutral");
				tv0->SetMessage(528846);
				tv0->ClearReplies();
				tv0->AddReply(526741, -1, 28018);
				return;
			}
			tv3 = true;
			if (f_e8f_a0_b()) {
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
		f_d22_a1_b(f_dcf_a0_o());
		if (!f_ccd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e89_a0_i());
		L0->SetNPCDescription(f_e87_a0_i());
		L0->SetPhoto(f_e8b_a0_s());
		L0->SetPhoto2(f_e8d_a0_s());
		L0->SetPlayerName(f_10ef_a0_i());
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
		f_d11_a1_v(a0);
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
			f_aa0_a1_v("Neutral");
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_e8f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dac_a1_v(tv2);
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

	void f_aa0_a1_v(string a0)
	{
		if (!f_e8f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_db3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_dc8_a0_v();
			if (a0 == 36906) {
				f_aa0_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_aa0_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_aa0_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_e8f_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t16
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_d22_a1_b(f_dcf_a0_o());
		if (!f_ccd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e89_a0_i());
		L0->SetNPCDescription(f_e87_a0_i());
		L0->SetPhoto(f_e8b_a0_s());
		L0->SetPhoto2(f_e8d_a0_s());
		L0->SetPlayerName(f_10ef_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_d11_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t17
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
			f_b9e_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_e8f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dac_a1_v(tv2);
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

	void f_b9e_a1_v(string a0)
	{
		if (!f_e8f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_db3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_dc8_a0_v();
			if (a0 == 42554) {
				f_b9e_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_e8f_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t18
{
	var float tv0;
	var float tv1;
	var int tv2;

	void init(void)
	{
		g2 = false;
		f_be5_a0_v();
	}

	void f_be5_a0_v(void)
	{
		object L0;
		@SensePlayerOnly(true);
		f_c3d_a0_v();
		@GetScene(L0);
		for (tv2 = 0; ; tv2 = tv2 + 1) {
			bool L1;
			L0->GetLocator(f_e79_a1_s(tv2), L1);
			if (!L1) {
				break;
			}
		}
		if (!f_cc8_a0_b()) {
			t0{};
		}
		f_c45_a0_v();
		for (; ; ) {
			int L2;
			bool L3;
			Vector L4;
			Vector L5;
			Vector L6;
			@irand(L2, tv2);
			L0->GetLocator(f_e79_a1_s(L2), L3, L4, L5);
			L6 = L4 - f_c74_a0_V();
			if (f_df2_a1_f(L6) > tv1) {
				float L7;
				Vector L8;
				bool L9;
				@GetHeight(L7);
				L8 = L4;
				L8.y += L7;
				@CanReachByPF(L9, L8);
				if (L9) {
					Vector L10;
					L10 = L4 - L6 * (tv0 / sqrt(L6 | L6));
					if (t1{L10, L5}) {
						t3{L2};
					}
				}
			}
			@Sleep(1);
		}
	}

	void f_c3d_a0_v(void)
	{
		string L0;
		@GetProperty("loc", L0);
		g0 = L0;
	}

	void f_c45_a0_v(void)
	{
		Vector L0;
		Vector L1;
		@GetAnimationOffset(L0, "all", "walk_stopl");
		@GetAnimationOffset(L1, "all", "walk_stopr");
		tv0 = (L0.z + L1.z) / 2.0;
		tv1 = f_ddf_a1_f(L0.z - tv0) + 40;
	}

	void OnUnload(void)
	{
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_cb4_a1_b(a0);
			enable OnUse;
			f_1100_a1_v(a0);
		}
	}
}

Vector f_c74_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

float f_c79_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_c81_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_c8d_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_c81_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_de7_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_ca3_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_caa_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_cb4_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_caa_a1_b(L0);
}

void f_cbd_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_cc8_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_ccd_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_dd5_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_e8f_a0_b()) {
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

void f_d11_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_e8f_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_d22_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_d5c_a1_b(a0)) {
			if (!f_d81_a1_b(a0)) {
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
		if (!f_d81_a1_b(a0)) {
			if (!f_d5c_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_d5c_a1_b(object a0)
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
	return f_db9_a1_b(L4);
}

bool f_d81_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_e52_a0_i() + "m";
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
	return f_db9_a1_b(L4);
}

void f_dac_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_db3_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_db9_a1_b(string a0)
{
	if (f_e8f_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_dc8_a0_v(void)
{
	if (f_e8f_a0_b()) {
		@lshStopSpeech();
	}
}

object f_dcf_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_dd5_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_ddf_a1_f(float a0)
{
	return a0 < 0 ? -a0 : a0;
}

float f_de7_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

float f_df2_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

int f_dfc_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_e01_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_e0d_a2_v(object a0, int a1)
{
	f_ca3_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_e01_a2_v(L0, a1);
	}
}

bool f_e20_a2_b(object a0, float a1)
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
	f_e43_a1_v(a1);
	f_c8d_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_e43_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

float f_e4d_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_e52_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_e5b_a1_b(int a0)
{
	return f_e52_a0_i() == a0;
}

string f_e61_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_e68_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_e61_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

string f_e79_a1_s(int a0)
{
	return a0 == 0 ? "pt_" + g0 : "pt_" + g0 + a0;
}

void OnUnload(void)
{
}

int f_e87_a0_i(void)
{
	return 515547;
}

int f_e89_a0_i(void)
{
	return 502872;
}

string f_e8b_a0_s(void)
{
	return "ui/NPC_MladVlad.png";
}

string f_e8d_a0_s(void)
{
	return "ui/NPC_MladVlad_b.png";
}

bool f_e8f_a0_b(void)
{
	return true;
}

void f_e91_a2_v(object a0, object a1)
{
	f_e20_a2_b(a0, -0.05000000074505806);
}

void f_e98_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k2q01", 2);
	L0 = f_10bd_a0_o();
	L0->AddMark("k2q01MladVladGotoBigVlad", "pt_map_bigvlad", 1, 539374, f_e4d_a0_f());
	f_101f_a0_v();
}

void f_eaf_a2_v(object a0, object a1)
{
	@SetVariable("ook2MladVlad1", 1);
}

void f_eb5_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k2q04", 1);
	L0 = f_10bd_a0_o();
	L0->AddMark("k2q04MladVladGotoAnna", "pt_map_anna", 0, 508645, f_e4d_a0_f());
	f_102c_a0_v();
	f_106d_a0_v();
}

void f_ecf_a2_v(object a0, object a1)
{
	@SetVariable("ook2MladVlad2", 1);
}

void f_ed5_a2_v(object a0, object a1)
{
	int L0;
	@SetVariable("k2q04", 1000);
	f_1039_a0_v();
	a0->RemoveItemByType(L0, "alpha_pills", 4);
	a0->RemoveItemByType(L0, "beta_pills", 4);
}

void f_ee6_a2_v(object a0, object a1)
{
	@SetVariable("k2q04", 1000);
	f_1046_a0_v();
}

void f_eef_a2_v(object a0, object a1)
{
	@SetVariable("k2q04", 1000);
	f_1053_a0_v();
}

void f_ef8_a2_v(object a0, object a1)
{
	@SetVariable("k2q04", 1000);
	f_1060_a0_v();
}

void f_f01_a2_v(object a0, object a1)
{
	@SetVariable("ook3MladVlad1", 1);
}

void f_f07_a2_v(object a0, object a1)
{
	@SetVariable("ook5MladVlad1", 1);
}

void f_f0d_a2_v(object a0, object a1)
{
	f_107a_a0_v();
}

void f_f12_a2_v(object a0, object a1)
{
	@SetVariable("k6q02", 3);
	f_1087_a0_v();
}

void f_f1b_a2_v(object a0, object a1)
{
	@Trace("money1000 is given");
	f_e0d_a2_v(a0, 1000);
}

void f_f25_a2_v(object a0, object a1)
{
	@Trace("money100 is given");
	f_e0d_a2_v(a0, 100);
}

void f_f2f_a2_v(object a0, object a1)
{
	@Trace("money500 is given");
	f_e0d_a2_v(a0, 500);
}

void f_f39_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_f3f_a2_v(object a0, object a1)
{
	f_10ce_a3_v(f_10bd_a0_o(), "pt_map_anna", 2);
	a1->ShowMap(f_10bd_a0_o());
}

void f_f4f_a2_v(object a0, object a1)
{
	f_10ce_a3_v(f_10bd_a0_o(), "pt_map_bigvlad", 2);
	a1->ShowMap(f_10bd_a0_o());
}

void f_f5f_a2_v(object a0, object a1)
{
	f_e20_a2_b(a0, 0.10000000149011612);
}

bool f_f66_a1_b(object a0)
{
	if (f_dfc_a1_i("k2q01") == 1) {
		return true;
	}
	return false;
}

bool f_f72_a1_b(object a0)
{
	if (f_dfc_a1_i("ook2MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_f7e_a1_b(object a0)
{
	if (f_dfc_a1_i("k2q04") == 0) {
		return true;
	}
	return false;
}

bool f_f8a_a1_b(object a0)
{
	if (f_dfc_a1_i("k2q04") == 2) {
		return true;
	}
	return false;
}

bool f_f96_a1_b(object a0)
{
	if (f_dfc_a1_i("k2q04") == 3) {
		return true;
	}
	return false;
}

bool f_fa2_a1_b(object a0)
{
	if (f_100c_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_fac_a1_b(object a0)
{
	if (f_dfc_a1_i("ook2MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_fb8_a1_b(object a0)
{
	if (f_dfc_a1_i("k2q04") == 9) {
		return true;
	}
	return false;
}

bool f_fc4_a1_b(object a0)
{
	if (f_dfc_a1_i("k3q01") == 2) {
		return true;
	}
	return false;
}

bool f_fd0_a1_b(object a0)
{
	if (f_dfc_a1_i("ook3MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_fdc_a1_b(object a0)
{
	if (f_dfc_a1_i("k5q01") == 1) {
		return true;
	}
	return false;
}

bool f_fe8_a1_b(object a0)
{
	if (f_dfc_a1_i("ook5MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_ff4_a1_b(object a0)
{
	if (f_dfc_a1_i("k6q01") == 1) {
		return true;
	}
	return false;
}

bool f_1000_a1_b(object a0)
{
	if (f_dfc_a1_i("k6q02") == 2) {
		return true;
	}
	return false;
}

bool f_100c_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "alpha_pills");
	if (L0 < 4) {
		return false;
	}
	a0->GetItemCountOfType(L0, "beta_pills");
	if (L0 < 4) {
		return false;
	}
	return true;
}

void f_101f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 463, 1, 527779);
	f_10a1_a2_b(L0, 461);
}

void f_102c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 507, 2, 529706);
	f_10a1_a2_b(L0, -1);
}

void f_1039_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 513, 2, 529712);
	f_10a1_a2_b(L0, 507);
}

void f_1046_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 514, 2, 529713);
	f_10a1_a2_b(L0, 507);
}

void f_1053_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 515, 2, 529714);
	f_10a1_a2_b(L0, 507);
}

void f_1060_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 516, 2, 529715);
	f_10a1_a2_b(L0, 507);
}

void f_106d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 508, 2, 529707);
	f_10a1_a2_b(L0, 507);
}

void f_107a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 392, 1, 525885);
	f_10a1_a2_b(L0, 390);
}

void f_1087_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 503, 2, 528769);
	f_10a1_a2_b(L0, 500);
}

object f_1094_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_10a1_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1094_a0_o();
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

object f_10bd_a0_o(void)
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

void f_10ce_a3_v(object a0, string a1, float a2)
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

int f_10ef_a0_i(void)
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

void f_1100_a1_v(object a0)
{
	if (!g2) {
		t8{a0};
		g2 = true;
	}
	if (f_e5b_a1_b(2)) {
		t4{a0};
		return;
	}
	if (f_e5b_a1_b(3)) {
		t6{a0};
		return;
	}
	if (f_e5b_a1_b(5)) {
		t10{a0};
		return;
	}
	if (f_e5b_a1_b(6)) {
		t12{a0};
		return;
	}
	if (f_e5b_a1_b(12)) {
		t14{a0};
		return;
	}
	t16{a0};
}

