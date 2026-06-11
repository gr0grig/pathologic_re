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
		f_cce_a0_v();
		if (!f_9fd_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_a3e_a1_v("Neutral");
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
		f_d17_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_9f1_a1_b(a0);
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
		if (!f_a02_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a99_a0_i());
		L0->SetPhoto(f_a9b_a0_s());
		L0->SetPlayerName(f_c9d_a0_i());
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
		f_a3a_a1_v(a0);
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
			f_b35_a2_v(tv1, tv0);
			f_af_a1_v("Neutral");
			tv0->SetMessage(424);
			tv0->ClearReplies();
			tv0->AddReply(425, 494, 493);
			tv0->AddReply(429, 498, 497);
			break;
			return;
		}
		if (f_a9d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a3e_a1_v(tv2);
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

	void f_af_a1_v(string a0)
	{
		if (!f_a9d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a3e_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a50_a0_v();
			if (a0 == 492) {
				f_b35_a2_v(tv1, tv0);
				f_af_a1_v("Neutral");
				tv0->SetMessage(424);
				tv0->ClearReplies();
				tv0->AddReply(425, 494, 493);
				tv0->AddReply(429, 498, 497);
				return;
			}
			if (a0 == 498) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(430);
				tv0->ClearReplies();
				tv0->AddReply(431, 501, 499);
				tv0->AddReply(432, 494, 500);
				return;
			}
			if (a0 == 501) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(433);
				tv0->ClearReplies();
				tv0->AddReply(435, -1, 503);
				tv0->AddReply(434, -1, 502);
				return;
			}
			if (a0 == 494) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(426);
				tv0->ClearReplies();
				tv0->AddReply(427, 504, 495);
				tv0->AddReply(438, -1, 506);
				return;
			}
			if (a0 == 504) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(436);
				tv0->ClearReplies();
				tv0->AddReply(437, 501, 505);
				tv0->AddReply(439, -1, 508);
				return;
			}
			tv3 = true;
			if (f_a9d_a0_b()) {
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
		if (!f_a02_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a99_a0_i());
		L0->SetPhoto(f_a9b_a0_s());
		L0->SetPlayerName(f_c9d_a0_i());
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
		f_a3a_a1_v(a0);
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
			if (f_b41_a1_b(tv1) && !f_b65_a1_b(tv1)) {
				f_b2a_a2_v(tv1, tv0);
				f_af8_a2_v(tv1, tv0);
				f_282_a1_v("Neutral");
				tv0->SetMessage(5616);
				tv0->ClearReplies();
				tv0->AddReply(5617, 6905, 6193);
				tv0->AddReply(5645, 6906, 6224);
				break;
			}
			f_282_a1_v("Neutral");
			tv0->SetMessage(8129);
			tv0->ClearReplies();
			if (f_b4d_a1_b(tv1) && f_b71_a1_b(tv1)) {
				tv0->AddReply(8130, 6213, 8953);
			}
			if (f_bc3_a1_b(tv1) && f_b59_a1_b(tv1) || f_bb9_a1_b(tv1) && f_b59_a1_b(tv1)) {
				tv0->AddReply(8131, 6197, 8954);
			}
			if (f_c15_a1_b(tv1) && f_b7d_a1_b(tv1)) {
				tv0->AddReply(8133, -1, 8956);
			}
			if (f_bd9_a1_b(tv1) && f_b89_a1_b(tv1)) {
				tv0->AddReply(8135, 8982, 8958);
			}
			if (f_be5_a1_b(tv1) && f_b95_a1_b(tv1)) {
				tv0->AddReply(8137, 8981, 8960);
			}
			if (f_bf1_a1_b(tv1) && f_ba1_a1_b(tv1)) {
				tv0->AddReply(8140, 8980, 8963);
			}
			if (f_c09_a1_b(tv1) && f_bad_a1_b(tv1)) {
				tv0->AddReply(8151, 8979, 8974);
			}
			tv0->AddReply(9147, -1, 10028);
			break;
			return;
		}
		if (f_a9d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a3e_a1_v(tv2);
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

	void f_282_a1_v(string a0)
	{
		if (!f_a9d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a3e_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a50_a0_v();
			if (a1 == 6915) {
				f_a9f_a2_v(tv1, tv0);
				f_ab1_a2_v(tv1, tv0);
				f_aca_a2_v(tv1, tv0);
			}
			if (a1 == 6916) {
				f_a9f_a2_v(tv1, tv0);
				f_ab1_a2_v(tv1, tv0);
				f_aca_a2_v(tv1, tv0);
			}
			if (a1 == 6218) {
				f_aa5_a2_v(tv1, tv0);
			}
			if (a1 == 6219) {
				f_aa5_a2_v(tv1, tv0);
			}
			if (a1 == 6202) {
				f_aab_a2_v(tv1, tv0);
			}
			if (a1 == 6203) {
				f_aab_a2_v(tv1, tv0);
			}
			if (a1 == 6206) {
				f_aab_a2_v(tv1, tv0);
			}
			if (a1 == 6209) {
				f_aab_a2_v(tv1, tv0);
			}
			if (a1 == 6210) {
				f_aab_a2_v(tv1, tv0);
			}
			if (a1 == 8956) {
				f_ada_a2_v(tv1, tv0);
			}
			if (a1 == 9535) {
				f_ae0_a2_v(tv1, tv0);
			}
			if (a1 == 9536) {
				f_ae6_a2_v(tv1, tv0);
			}
			if (a1 == 9537) {
				f_aec_a2_v(tv1, tv0);
			}
			if (a1 == 9538) {
				f_af2_a2_v(tv1, tv0);
			}
			if (a0 == 6192) {
				if (f_b41_a1_b(tv1) && !f_b65_a1_b(tv1)) {
					f_b2a_a2_v(tv1, tv0);
					f_af8_a2_v(tv1, tv0);
					f_282_a1_v("Neutral");
					tv0->SetMessage(5616);
					tv0->ClearReplies();
					tv0->AddReply(5617, 6905, 6193);
					tv0->AddReply(5645, 6906, 6224);
					return;
				}
				f_282_a1_v("Neutral");
				tv0->SetMessage(8129);
				tv0->ClearReplies();
				if (f_b4d_a1_b(tv1) && f_b71_a1_b(tv1)) {
					tv0->AddReply(8130, 6213, 8953);
				}
				if (f_bc3_a1_b(tv1) && f_b59_a1_b(tv1) || f_bb9_a1_b(tv1) && f_b59_a1_b(tv1)) {
					tv0->AddReply(8131, 6197, 8954);
				}
				if (f_c15_a1_b(tv1) && f_b7d_a1_b(tv1)) {
					tv0->AddReply(8133, -1, 8956);
				}
				if (f_bd9_a1_b(tv1) && f_b89_a1_b(tv1)) {
					tv0->AddReply(8135, 8982, 8958);
				}
				if (f_be5_a1_b(tv1) && f_b95_a1_b(tv1)) {
					tv0->AddReply(8137, 8981, 8960);
				}
				if (f_bf1_a1_b(tv1) && f_ba1_a1_b(tv1)) {
					tv0->AddReply(8140, 8980, 8963);
				}
				if (f_c09_a1_b(tv1) && f_bad_a1_b(tv1)) {
					tv0->AddReply(8151, 8979, 8974);
				}
				tv0->AddReply(9147, -1, 10028);
				return;
			}
			if (a0 == 8979) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(8156);
				tv0->ClearReplies();
				tv0->AddReply(8701, -1, 9538);
				return;
			}
			if (a0 == 8980) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(8157);
				tv0->ClearReplies();
				tv0->AddReply(8700, -1, 9537);
				return;
			}
			if (a0 == 8981) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(8158);
				tv0->ClearReplies();
				tv0->AddReply(8699, -1, 9536);
				return;
			}
			if (a0 == 8982) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(8159);
				tv0->ClearReplies();
				tv0->AddReply(8698, -1, 9535);
				return;
			}
			if (a0 == 6197) {
				if (f_b59_a1_b(tv1)) {
					f_282_a1_v("Neutral");
					tv0->SetMessage(5621);
					tv0->ClearReplies();
					tv0->AddReply(5622, 6199, 6198);
					tv0->AddReply(5635, 6199, 6211);
					return;
				}
			}
			if (a0 == 6199) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(5623);
				tv0->ClearReplies();
				tv0->AddReply(5624, 6201, 6200);
				tv0->AddReply(5631, 6208, 6207);
				return;
			}
			if (a0 == 6208) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(5632);
				tv0->ClearReplies();
				tv0->AddReply(5633, -1, 6209);
				tv0->AddReply(5634, -1, 6210);
				return;
			}
			if (a0 == 6201) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(5625);
				tv0->ClearReplies();
				tv0->AddReply(5626, -1, 6202);
				tv0->AddReply(5627, -1, 6203);
				tv0->AddReply(5628, 6205, 6204);
				return;
			}
			if (a0 == 6205) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(5629);
				tv0->ClearReplies();
				tv0->AddReply(5630, -1, 6206);
				return;
			}
			if (a0 == 6213) {
				if (f_b4d_a1_b(tv1)) {
					f_282_a1_v("Neutral");
					tv0->SetMessage(5636);
					tv0->ClearReplies();
					tv0->AddReply(5637, 6215, 6214);
					tv0->AddReply(5644, 6215, 6222);
					return;
				}
			}
			if (a0 == 6215) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(5638);
				tv0->ClearReplies();
				tv0->AddReply(5639, 6217, 6216);
				tv0->AddReply(5643, 6217, 6220);
				return;
			}
			if (a0 == 6217) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(5640);
				tv0->ClearReplies();
				tv0->AddReply(5641, -1, 6218);
				tv0->AddReply(5642, -1, 6219);
				return;
			}
			if (a0 == 6906) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(6243);
				tv0->ClearReplies();
				tv0->AddReply(6244, 6908, 6907);
				return;
			}
			if (a0 == 6908) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(6245);
				tv0->ClearReplies();
				tv0->AddReply(6246, 6905, 6909);
				return;
			}
			if (a0 == 6905) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(6242);
				tv0->ClearReplies();
				tv0->AddReply(6247, 6912, 6911);
				return;
			}
			if (a0 == 6912) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(6248);
				tv0->ClearReplies();
				tv0->AddReply(6249, 6914, 6913);
				return;
			}
			if (a0 == 6914) {
				f_282_a1_v("Neutral");
				tv0->SetMessage(6250);
				tv0->ClearReplies();
				tv0->AddReply(6251, -1, 6915);
				tv0->AddReply(6252, -1, 6916);
				return;
			}
			tv3 = true;
			if (f_a9d_a0_b()) {
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
		if (!f_a02_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a99_a0_i());
		L0->SetPhoto(f_a9b_a0_s());
		L0->SetPlayerName(f_c9d_a0_i());
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
		f_a3a_a1_v(a0);
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
			f_5e1_a1_v("Neutral");
			tv0->SetMessage(9489);
			tv0->ClearReplies();
			tv0->AddReply(9490, 10433, 10432);
			tv0->AddReply(9499, 10433, 10441);
			break;
			return;
		}
		if (f_a9d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a3e_a1_v(tv2);
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

	void f_5e1_a1_v(string a0)
	{
		if (!f_a9d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a3e_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a50_a0_v();
			if (a0 == 10431) {
				f_5e1_a1_v("Neutral");
				tv0->SetMessage(9489);
				tv0->ClearReplies();
				tv0->AddReply(9490, 10433, 10432);
				tv0->AddReply(9499, 10433, 10441);
				return;
			}
			if (a0 == 10433) {
				f_5e1_a1_v("Neutral");
				tv0->SetMessage(9491);
				tv0->ClearReplies();
				tv0->AddReply(9492, 10435, 10434);
				tv0->AddReply(9496, 10439, 10438);
				return;
			}
			if (a0 == 10439) {
				f_5e1_a1_v("Neutral");
				tv0->SetMessage(9497);
				tv0->ClearReplies();
				tv0->AddReply(9498, -1, 10440);
				return;
			}
			if (a0 == 10435) {
				f_5e1_a1_v("Neutral");
				tv0->SetMessage(9493);
				tv0->ClearReplies();
				tv0->AddReply(9494, -1, 10436);
				tv0->AddReply(9495, -1, 10437);
				return;
			}
			tv3 = true;
			if (f_a9d_a0_b()) {
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
		if (!f_a02_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a99_a0_i());
		L0->SetPhoto(f_a9b_a0_s());
		L0->SetPlayerName(f_c9d_a0_i());
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
		f_a3a_a1_v(a0);
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
			if (f_bfd_a1_b(tv1)) {
				f_b3b_a2_v(tv1, tv0);
				f_6ed_a1_v("Neutral");
				tv0->SetMessage(9993);
				tv0->ClearReplies();
				tv0->AddReply(9994, 11016, 11015);
				tv0->AddReply(10002, 11016, 11023);
				break;
			}
			f_6ed_a1_v("Neutral");
			tv0->SetMessage(15316);
			tv0->ClearReplies();
			tv0->AddReply(15317, -1, 16555);
			break;
			return;
		}
		if (f_a9d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a3e_a1_v(tv2);
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

	void f_6ed_a1_v(string a0)
	{
		if (!f_a9d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a3e_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a50_a0_v();
			if (a0 == 11014) {
				if (f_bfd_a1_b(tv1)) {
					f_b3b_a2_v(tv1, tv0);
					f_6ed_a1_v("Neutral");
					tv0->SetMessage(9993);
					tv0->ClearReplies();
					tv0->AddReply(9994, 11016, 11015);
					tv0->AddReply(10002, 11016, 11023);
					return;
				}
				f_6ed_a1_v("Neutral");
				tv0->SetMessage(15316);
				tv0->ClearReplies();
				tv0->AddReply(15317, -1, 16555);
				return;
			}
			if (a0 == 11016) {
				f_6ed_a1_v("Neutral");
				tv0->SetMessage(9995);
				tv0->ClearReplies();
				tv0->AddReply(9996, -1, 11017);
				tv0->AddReply(9997, -1, 11018);
				tv0->AddReply(9998, 11020, 11019);
				return;
			}
			if (a0 == 11020) {
				f_6ed_a1_v("Neutral");
				tv0->SetMessage(9999);
				tv0->ClearReplies();
				tv0->AddReply(10000, -1, 11021);
				tv0->AddReply(10001, -1, 11022);
				return;
			}
			tv3 = true;
			if (f_a9d_a0_b()) {
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
		if (!f_a02_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a99_a0_i());
		L0->SetPhoto(f_a9b_a0_s());
		L0->SetPlayerName(f_c9d_a0_i());
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
		f_a3a_a1_v(a0);
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
			f_7e7_a1_v("Neutral");
			tv0->SetMessage(10917);
			tv0->ClearReplies();
			tv0->AddReply(10918, -1, 12067);
			break;
			return;
		}
		if (f_a9d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a3e_a1_v(tv2);
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

	void f_7e7_a1_v(string a0)
	{
		if (!f_a9d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a3e_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a50_a0_v();
			if (a0 == 12066) {
				f_7e7_a1_v("Neutral");
				tv0->SetMessage(10917);
				tv0->ClearReplies();
				tv0->AddReply(10918, -1, 12067);
				return;
			}
			tv3 = true;
			if (f_a9d_a0_b()) {
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
		if (!f_a02_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a99_a0_i());
		L0->SetPhoto(f_a9b_a0_s());
		L0->SetPlayerName(f_c9d_a0_i());
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
		f_a3a_a1_v(a0);
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
			f_89a_a1_v("Neutral");
			tv0->SetMessage(13312);
			tv0->ClearReplies();
			if (f_bcd_a1_b(tv1)) {
				tv0->AddReply(13314, 14550, 14549);
			}
			tv0->AddReply(13313, -1, 14548);
			break;
			return;
		}
		if (f_a9d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a3e_a1_v(tv2);
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

	void f_89a_a1_v(string a0)
	{
		if (!f_a9d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a3e_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a50_a0_v();
			if (a1 == 14570) {
				f_afe_a2_v(tv1, tv0);
			}
			if (a0 == 14547) {
				f_89a_a1_v("Neutral");
				tv0->SetMessage(13312);
				tv0->ClearReplies();
				if (f_bcd_a1_b(tv1)) {
					tv0->AddReply(13314, 14550, 14549);
				}
				tv0->AddReply(13313, -1, 14548);
				return;
			}
			if (a0 == 14550) {
				f_89a_a1_v("Neutral");
				tv0->SetMessage(13315);
				tv0->ClearReplies();
				tv0->AddReply(13317, 14553, 14552);
				tv0->AddReply(13316, 14555, 14551);
				return;
			}
			if (a0 == 14553) {
				f_89a_a1_v("Neutral");
				tv0->SetMessage(13318);
				tv0->ClearReplies();
				tv0->AddReply(13319, 14555, 14554);
				return;
			}
			if (a0 == 14555) {
				f_89a_a1_v("Neutral");
				tv0->SetMessage(13320);
				tv0->ClearReplies();
				tv0->AddReply(13335, 14567, 14566);
				return;
			}
			if (a0 == 14567) {
				f_89a_a1_v("Neutral");
				tv0->SetMessage(13336);
				tv0->ClearReplies();
				tv0->AddReply(13337, 14569, 14568);
				return;
			}
			if (a0 == 14569) {
				f_89a_a1_v("Neutral");
				tv0->SetMessage(13338);
				tv0->ClearReplies();
				tv0->AddReply(13339, -1, 14570);
				return;
			}
			tv3 = true;
			if (f_a9d_a0_b()) {
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
		if (!f_a02_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a99_a0_i());
		L0->SetPhoto(f_a9b_a0_s());
		L0->SetPlayerName(f_c9d_a0_i());
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
		f_a3a_a1_v(a0);
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
			f_9b4_a1_v("Neutral");
			tv0->SetMessage(14084);
			tv0->ClearReplies();
			tv0->AddReply(14085, -1, 15322);
			break;
			return;
		}
		if (f_a9d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a3e_a1_v(tv2);
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

	void f_9b4_a1_v(string a0)
	{
		if (!f_a9d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a3e_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a50_a0_v();
			if (a1 == 15322) {
				f_b30_a2_v(tv1, tv0);
			}
			if (a0 == 15321) {
				f_9b4_a1_v("Neutral");
				tv0->SetMessage(14084);
				tv0->ClearReplies();
				tv0->AddReply(14085, -1, 15322);
				return;
			}
			tv3 = true;
			if (f_a9d_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_9f1_a1_b(object a0)
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

bool f_9fd_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_a02_a1_b(object a0)
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
	L5 = L3 * 70 + f_a57_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_a3a_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_a3e_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_a50_a0_v(void)
{
	if (f_a9d_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_a57_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_a61_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_a66_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

bool f_a71_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_a7d_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_a82_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_a8b_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_a93_a1_b(int a0)
{
	return f_a82_a0_i() == a0;
}

int f_a99_a0_i(void)
{
	return 2869;
}

string f_a9b_a0_s(void)
{
	return "ui/NPC_Mark.png";
}

bool f_a9d_a0_b(void)
{
	return true;
}

void f_a9f_a2_v(object a0, object a1)
{
	@SetVariable("ood1Mark1", 1);
}

void f_aa5_a2_v(object a0, object a1)
{
	@SetVariable("ood1Mark2", 1);
}

void f_aab_a2_v(object a0, object a1)
{
	@SetVariable("ood1Mark3", 1);
}

void f_ab1_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_c6b_a0_o();
	L0->AddMark("d1q01MarkAboutJulia", "pt_map_julia", 1, 8647, f_a7d_a0_f());
	L0->AddMark("d1q01MarkAboutLara", "pt_map_lara", 1, 8646, f_a7d_a0_f());
}

void f_aca_a2_v(object a0, object a1)
{
	f_c7c_a3_v(f_c6b_a0_o(), "pt_map_julia", 2);
	a1->ShowMap(f_c6b_a0_o());
}

void f_ada_a2_v(object a0, object a1)
{
	@SetVariable("ood1Mark4", 1);
}

void f_ae0_a2_v(object a0, object a1)
{
	@SetVariable("ood1Mark5", 1);
}

void f_ae6_a2_v(object a0, object a1)
{
	@SetVariable("ood1Mark6", 1);
}

void f_aec_a2_v(object a0, object a1)
{
	@SetVariable("ood1Mark7", 1);
}

void f_af2_a2_v(object a0, object a1)
{
	@SetVariable("ood1Mark8", 1);
}

void f_af8_a2_v(object a0, object a1)
{
	@SetVariable("KnowJulia", 1);
}

void f_afe_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d7q02", 1);
	L0 = f_c6b_a0_o();
	L0->AddMark("d7q02MarkGotoCemetery", "pt_d7q02_corpse", 0, 15427, f_a7d_a0_f());
	L0->AddMark("d7q02MarkGotoAlexandr", "pt_map_alexandr", 0, 15428, f_a7d_a0_f());
	f_cae_a0_v();
	f_cbe_a0_v();
	f_a66_a1_o("quest_d7_02");
	f_a71_a2_b("quest_d7_02", "place_corpse");
}

void f_b2a_a2_v(object a0, object a1)
{
	@SetVariable("KnowLara", 1);
}

void f_b30_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

void f_b35_a2_v(object a0, object a1)
{
	@SetVariable("KnowMark", 1);
}

void f_b3b_a2_v(object a0, object a1)
{
	@SetVariable("ood3Mark1", 1);
}

bool f_b41_a1_b(object a0)
{
	if (f_a61_a1_i("ood1Mark1") == 0) {
		return true;
	}
	return false;
}

bool f_b4d_a1_b(object a0)
{
	if (f_a61_a1_i("ood1Mark2") == 0) {
		return true;
	}
	return false;
}

bool f_b59_a1_b(object a0)
{
	if (f_a61_a1_i("ood1Mark3") == 0) {
		return true;
	}
	return false;
}

bool f_b65_a1_b(object a0)
{
	if (f_a61_a1_i("d1q01") == 0) {
		return true;
	}
	return false;
}

bool f_b71_a1_b(object a0)
{
	if (f_a61_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_b7d_a1_b(object a0)
{
	if (f_a61_a1_i("ood1Mark4") == 0) {
		return true;
	}
	return false;
}

bool f_b89_a1_b(object a0)
{
	if (f_a61_a1_i("ood1Mark5") == 0) {
		return true;
	}
	return false;
}

bool f_b95_a1_b(object a0)
{
	if (f_a61_a1_i("ood1Mark6") == 0) {
		return true;
	}
	return false;
}

bool f_ba1_a1_b(object a0)
{
	if (f_a61_a1_i("ood1Mark7") == 0) {
		return true;
	}
	return false;
}

bool f_bad_a1_b(object a0)
{
	if (f_a61_a1_i("ood1Mark8") == 0) {
		return true;
	}
	return false;
}

bool f_bb9_a1_b(object a0)
{
	if (f_c21_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_bc3_a1_b(object a0)
{
	if (f_c2c_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_bcd_a1_b(object a0)
{
	if (f_a61_a1_i("d7q02") == 0) {
		return true;
	}
	return false;
}

bool f_bd9_a1_b(object a0)
{
	if (f_a61_a1_i("KnowEva") == 1) {
		return true;
	}
	return false;
}

bool f_be5_a1_b(object a0)
{
	if (f_a61_a1_i("KnowJulia") == 1) {
		return true;
	}
	return false;
}

bool f_bf1_a1_b(object a0)
{
	if (f_a61_a1_i("KnowMaria") == 1) {
		return true;
	}
	return false;
}

bool f_bfd_a1_b(object a0)
{
	if (f_a61_a1_i("ood3Mark1") == 0) {
		return true;
	}
	return false;
}

bool f_c09_a1_b(object a0)
{
	if (f_a61_a1_i("KnowKapella") == 1) {
		return true;
	}
	return false;
}

bool f_c15_a1_b(object a0)
{
	if (f_a61_a1_i("KnowMyth") == 1) {
		return true;
	}
	return false;
}

bool f_c21_a1_b(object a0)
{
	if (f_a8b_a0_i() >= 18) {
		return true;
	}
	return false;
}

bool f_c2c_a1_b(object a0)
{
	if (f_a8b_a0_i() >= 12 && f_a8b_a0_i() < 18) {
		return true;
	}
	return false;
}

object f_c41_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_c4e_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_c41_a0_o();
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

object f_c6b_a0_o(void)
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

void f_c7c_a3_v(object a0, string a1, float a2)
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

int f_c9d_a0_i(void)
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

void f_cae_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 170, 0, 15422);
	f_c4e_a2_b(L0, -1);
}

void f_cbe_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 171, 0, 15423);
	f_c4e_a2_b(L0, 170);
}

void f_cce_a0_v(void)
{
	int L0;
	g1 = false;
	for (L0 = 1; L0 < 12; L0++) {
		@SetVariable("Performance" + L0, 0);
	}
}

int f_cdf_a0_i(void)
{
	int L0;
	L0 = f_a82_a0_i();
	if (f_a8b_a0_i() <= 6) {
		L0 = L0 - 1;
	}
	return L0;
}

bool f_cee_a0_b(void)
{
	if (f_a8b_a0_i() >= 23 || f_a8b_a0_i() <= 6) {
		int L0;
		int L1;
		L0 = f_cdf_a0_i();
		@GetVariable("Performance" + L0, L1);
		return L1 == 0;
	}
	return false;
}

void f_d0c_a0_v(void)
{
	int L0;
	int L1;
	L0 = f_cdf_a0_i();
	@SetVariable("Performance" + L0, 1);
}

void f_d17_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_cee_a0_b()) {
		t14{a0};
		@PlayMovie("NightMasks" + f_cdf_a0_i() + ".wmv");
		f_d0c_a0_v();
		return;
	}
	if (f_a93_a1_b(1)) {
		t4{a0};
		return;
	}
	if (f_a93_a1_b(2)) {
		t6{a0};
		return;
	}
	if (f_a93_a1_b(3)) {
		t8{a0};
		return;
	}
	if (f_a93_a1_b(4)) {
		t10{a0};
		return;
	}
	if (f_a93_a1_b(7)) {
		t12{a0};
		return;
	}
}

