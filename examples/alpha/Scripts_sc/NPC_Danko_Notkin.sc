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
		f_e3d_a0_v();
		if (!f_ba9_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_bea_a1_v("Neutral");
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
		f_e41_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_b9d_a1_b(a0);
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
		if (!f_bae_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e37_a0_i());
		L0->SetPhoto(f_e39_a0_s());
		L0->SetPlayerName(f_e26_a0_i());
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
		f_be6_a1_v(a0);
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
			f_c8a_a2_v(tv1, tv0);
			f_af_a1_v("Neutral");
			tv0->SetMessage(205);
			tv0->ClearReplies();
			tv0->AddReply(207, 256, 245);
			tv0->AddReply(206, 246, 244);
			break;
			return;
		}
		if (f_e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bea_a1_v(tv2);
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
		if (!f_e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bfc_a0_v();
			if (a0 == 243) {
				f_c8a_a2_v(tv1, tv0);
				f_af_a1_v("Neutral");
				tv0->SetMessage(205);
				tv0->ClearReplies();
				tv0->AddReply(207, 256, 245);
				tv0->AddReply(206, 246, 244);
				return;
			}
			if (a0 == 246) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(208);
				tv0->ClearReplies();
				tv0->AddReply(209, 249, 247);
				tv0->AddReply(210, 250, 248);
				return;
			}
			if (a0 == 250) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(212);
				tv0->ClearReplies();
				tv0->AddReply(215, 249, 253);
				return;
			}
			if (a0 == 249) {
				f_c64_a2_v(tv1, tv0);
				f_af_a1_v("Neutral");
				tv0->SetMessage(211);
				tv0->ClearReplies();
				tv0->AddReply(213, 252, 251);
				return;
			}
			if (a0 == 252) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(214);
				tv0->ClearReplies();
				tv0->AddReply(216, -1, 255);
				return;
			}
			if (a0 == 256) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(217);
				tv0->ClearReplies();
				tv0->AddReply(218, -1, 257);
				tv0->AddReply(219, -1, 258);
				return;
			}
			tv3 = true;
			if (f_e3b_a0_b()) {
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
		if (!f_bae_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e37_a0_i());
		L0->SetPhoto(f_e39_a0_s());
		L0->SetPlayerName(f_e26_a0_i());
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
		f_be6_a1_v(a0);
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
			f_262_a1_v("Neutral");
			tv0->SetMessage(8255);
			tv0->ClearReplies();
			if (f_d02_a1_b(tv1) && f_cc6_a1_b(tv1)) {
				tv0->AddReply(8256, 6255, 9079);
			}
			if (f_d2e_a1_b(tv1) && f_cd2_a1_b(tv1) || f_d18_a1_b(tv1) && f_cd2_a1_b(tv1)) {
				tv0->AddReply(8257, 6264, 9080);
			}
			if (f_d38_a1_b(tv1) && f_d50_a1_b(tv1)) {
				tv0->AddReply(8273, 9105, 9096);
			}
			if (f_d44_a1_b(tv1) && f_d5c_a1_b(tv1)) {
				tv0->AddReply(8274, 9106, 9097);
			}
			if (f_dc8_a1_b(tv1) && f_d68_a1_b(tv1)) {
				tv0->AddReply(8277, 9107, 9100);
			}
			if (f_d8c_a1_b(tv1) && f_d74_a1_b(tv1)) {
				tv0->AddReply(8279, 9108, 9102);
			}
			if (f_dbc_a1_b(tv1) && f_d80_a1_b(tv1)) {
				tv0->AddReply(8280, 9109, 9103);
			}
			tv0->AddReply(15221, -1, 16498);
			break;
			return;
		}
		if (f_e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bea_a1_v(tv2);
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

	void f_262_a1_v(string a0)
	{
		if (!f_e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bfc_a0_v();
			if (a1 == 9079) {
				f_c4e_a2_v(tv1, tv0);
			}
			if (a1 == 9080) {
				f_c54_a2_v(tv1, tv0);
			}
			if (a1 == 6268) {
				f_c4e_a2_v(tv1, tv0);
			}
			if (a1 == 9096) {
				f_c90_a2_v(tv1, tv0);
			}
			if (a1 == 9097) {
				f_c96_a2_v(tv1, tv0);
			}
			if (a1 == 9100) {
				f_c9c_a2_v(tv1, tv0);
			}
			if (a1 == 9102) {
				f_ca2_a2_v(tv1, tv0);
			}
			if (a1 == 9103) {
				f_ca8_a2_v(tv1, tv0);
			}
			if (a0 == 9078) {
				f_262_a1_v("Neutral");
				tv0->SetMessage(8255);
				tv0->ClearReplies();
				if (f_d02_a1_b(tv1) && f_cc6_a1_b(tv1)) {
					tv0->AddReply(8256, 6255, 9079);
				}
				if (f_d2e_a1_b(tv1) && f_cd2_a1_b(tv1) || f_d18_a1_b(tv1) && f_cd2_a1_b(tv1)) {
					tv0->AddReply(8257, 6264, 9080);
				}
				if (f_d38_a1_b(tv1) && f_d50_a1_b(tv1)) {
					tv0->AddReply(8273, 9105, 9096);
				}
				if (f_d44_a1_b(tv1) && f_d5c_a1_b(tv1)) {
					tv0->AddReply(8274, 9106, 9097);
				}
				if (f_dc8_a1_b(tv1) && f_d68_a1_b(tv1)) {
					tv0->AddReply(8277, 9107, 9100);
				}
				if (f_d8c_a1_b(tv1) && f_d74_a1_b(tv1)) {
					tv0->AddReply(8279, 9108, 9102);
				}
				if (f_dbc_a1_b(tv1) && f_d80_a1_b(tv1)) {
					tv0->AddReply(8280, 9109, 9103);
				}
				tv0->AddReply(15221, -1, 16498);
				return;
			}
			if (a0 == 9109) {
				f_262_a1_v("Neutral");
				tv0->SetMessage(8286);
				tv0->ClearReplies();
				tv0->AddReply(15222, -1, 16499);
				return;
			}
			if (a0 == 9108) {
				f_262_a1_v("Neutral");
				tv0->SetMessage(8285);
				tv0->ClearReplies();
				tv0->AddReply(15223, -1, 16500);
				return;
			}
			if (a0 == 9107) {
				f_262_a1_v("Neutral");
				tv0->SetMessage(8284);
				tv0->ClearReplies();
				tv0->AddReply(15224, -1, 16501);
				return;
			}
			if (a0 == 9106) {
				f_262_a1_v("Neutral");
				tv0->SetMessage(8283);
				tv0->ClearReplies();
				tv0->AddReply(15225, -1, 16502);
				return;
			}
			if (a0 == 9105) {
				f_262_a1_v("Neutral");
				tv0->SetMessage(8282);
				tv0->ClearReplies();
				tv0->AddReply(15226, -1, 16503);
				return;
			}
			if (a0 == 6264) {
				f_262_a1_v("Neutral");
				tv0->SetMessage(5682);
				tv0->ClearReplies();
				tv0->AddReply(5683, 6266, 6265);
				tv0->AddReply(5686, -1, 6268);
				return;
			}
			if (a0 == 6266) {
				f_262_a1_v("Neutral");
				tv0->SetMessage(5684);
				tv0->ClearReplies();
				tv0->AddReply(5685, -1, 6267);
				return;
			}
			if (a0 == 6255) {
				f_262_a1_v("Neutral");
				tv0->SetMessage(5674);
				tv0->ClearReplies();
				tv0->AddReply(5675, 6257, 6256);
				tv0->AddReply(5681, 6257, 6262);
				return;
			}
			if (a0 == 6257) {
				f_262_a1_v("Neutral");
				tv0->SetMessage(5676);
				tv0->ClearReplies();
				tv0->AddReply(5677, 6259, 6258);
				return;
			}
			if (a0 == 6259) {
				f_262_a1_v("Neutral");
				tv0->SetMessage(5678);
				tv0->ClearReplies();
				tv0->AddReply(5679, -1, 6260);
				tv0->AddReply(5680, -1, 6261);
				return;
			}
			tv3 = true;
			if (f_e3b_a0_b()) {
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
		if (!f_bae_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e37_a0_i());
		L0->SetPhoto(f_e39_a0_s());
		L0->SetPlayerName(f_e26_a0_i());
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
		f_be6_a1_v(a0);
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
			if (f_cde_a1_b(tv1) && !f_cf6_a1_b(tv1) && !f_cea_a1_b(tv1)) {
				f_4ce_a1_v("Neutral");
				tv0->SetMessage(5688);
				tv0->ClearReplies();
				if (!f_cba_a1_b(tv1)) {
					tv0->AddReply(6198, 6852, 6851);
				}
				if (f_cba_a1_b(tv1)) {
					tv0->AddReply(5689, 6272, 6271);
				}
				break;
			}
			return;
		}
		if (f_e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bea_a1_v(tv2);
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

	void f_4ce_a1_v(string a0)
	{
		if (!f_e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bfc_a0_v();
			if (a1 == 6858) {
				f_c5a_a2_v(tv1, tv0);
				f_c47_a2_v(tv1, tv0);
				f_c7a_a2_v(tv1, tv0);
				f_c6a_a2_v(tv1, tv0);
			}
			if (a1 == 6860) {
				f_c5a_a2_v(tv1, tv0);
				f_c47_a2_v(tv1, tv0);
				f_c7a_a2_v(tv1, tv0);
				f_c6a_a2_v(tv1, tv0);
			}
			if (a0 == 6270) {
				if (f_cde_a1_b(tv1) && !f_cf6_a1_b(tv1) && !f_cea_a1_b(tv1)) {
					f_4ce_a1_v("Neutral");
					tv0->SetMessage(5688);
					tv0->ClearReplies();
					if (!f_cba_a1_b(tv1)) {
						tv0->AddReply(6198, 6852, 6851);
					}
					if (f_cba_a1_b(tv1)) {
						tv0->AddReply(5689, 6272, 6271);
					}
					return;
				}
			}
			if (a0 == 6272) {
				f_4ce_a1_v("Neutral");
				tv0->SetMessage(5690);
				tv0->ClearReplies();
				tv0->AddReply(5691, 6274, 6273);
				return;
			}
			if (a0 == 6274) {
				f_4ce_a1_v("Neutral");
				tv0->SetMessage(5692);
				tv0->ClearReplies();
				tv0->AddReply(6203, 6857, 6856);
				return;
			}
			if (a0 == 6852) {
				f_4ce_a1_v("Neutral");
				tv0->SetMessage(6199);
				tv0->ClearReplies();
				tv0->AddReply(6200, 6854, 6853);
				return;
			}
			if (a0 == 6854) {
				f_4ce_a1_v("Neutral");
				tv0->SetMessage(6201);
				tv0->ClearReplies();
				tv0->AddReply(6202, 6857, 6855);
				return;
			}
			if (a0 == 6857) {
				f_4ce_a1_v("Neutral");
				tv0->SetMessage(6204);
				tv0->ClearReplies();
				tv0->AddReply(6205, -1, 6858);
				tv0->AddReply(6206, -1, 6860);
				return;
			}
			tv3 = true;
			if (f_e3b_a0_b()) {
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
		if (!f_bae_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e37_a0_i());
		L0->SetPhoto(f_e39_a0_s());
		L0->SetPlayerName(f_e26_a0_i());
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
		f_be6_a1_v(a0);
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
			if (f_d13_a1_b(tv1)) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7472);
				tv0->ClearReplies();
				tv0->AddReply(7473, 8250, 8249);
				tv0->AddReply(7488, 8252, 8265);
				break;
			}
			f_66e_a1_v("Neutral");
			tv0->SetMessage(6943);
			tv0->ClearReplies();
			if (f_d0e_a1_b(tv1)) {
				tv0->AddReply(6944, 7651, 7650);
			}
			tv0->AddReply(7464, 8240, 8239);
			tv0->AddReply(7504, 8267, 8285);
			break;
			f_66e_a1_v("Neutral");
			tv0->SetMessage(9377);
			tv0->ClearReplies();
			tv0->AddReply(9378, 10304, 10303);
			tv0->AddReply(9388, 10304, 10315);
			tv0->AddReply(9389, 10318, 10317);
			break;
			return;
		}
		if (f_e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bea_a1_v(tv2);
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

	void f_66e_a1_v(string a0)
	{
		if (!f_e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bfc_a0_v();
			if (a1 == 8255) {
				f_c62_a2_v(tv1, tv0);
			}
			if (a1 == 8256) {
				f_c62_a2_v(tv1, tv0);
			}
			if (a1 == 8263) {
				f_c62_a2_v(tv1, tv0);
			}
			if (a1 == 8264) {
				f_c62_a2_v(tv1, tv0);
			}
			if (a1 == 8242) {
				f_c60_a2_v(tv1, tv0);
			}
			if (a1 == 8243) {
				f_c60_a2_v(tv1, tv0);
			}
			if (a1 == 8234) {
				f_c60_a2_v(tv1, tv0);
			}
			if (a1 == 8237) {
				f_c60_a2_v(tv1, tv0);
			}
			if (a0 == 8248) {
				if (f_d13_a1_b(tv1)) {
					f_66e_a1_v("Neutral");
					tv0->SetMessage(7472);
					tv0->ClearReplies();
					tv0->AddReply(7473, 8250, 8249);
					tv0->AddReply(7488, 8252, 8265);
					return;
				}
				f_66e_a1_v("Neutral");
				tv0->SetMessage(6943);
				tv0->ClearReplies();
				if (f_d0e_a1_b(tv1)) {
					tv0->AddReply(6944, 7651, 7650);
				}
				tv0->AddReply(7464, 8240, 8239);
				tv0->AddReply(7504, 8267, 8285);
				return;
				f_66e_a1_v("Neutral");
				tv0->SetMessage(9377);
				tv0->ClearReplies();
				tv0->AddReply(9378, 10304, 10303);
				tv0->AddReply(9388, 10304, 10315);
				tv0->AddReply(9389, 10318, 10317);
				return;
			}
			if (a0 == 10318) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(9390);
				tv0->ClearReplies();
				tv0->AddReply(9391, -1, 10319);
				return;
			}
			if (a0 == 10304) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(9379);
				tv0->ClearReplies();
				tv0->AddReply(9380, 10306, 10305);
				tv0->AddReply(9387, 10306, 10313);
				return;
			}
			if (a0 == 10306) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(9381);
				tv0->ClearReplies();
				tv0->AddReply(9382, 10308, 10307);
				tv0->AddReply(9386, 10308, 10311);
				return;
			}
			if (a0 == 10308) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(9383);
				tv0->ClearReplies();
				tv0->AddReply(9384, -1, 10309);
				tv0->AddReply(9385, -1, 10310);
				return;
			}
			if (a0 == 8267) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7489);
				tv0->ClearReplies();
				tv0->AddReply(7490, 8269, 8268);
				tv0->AddReply(7500, 8269, 8280);
				tv0->AddReply(7501, 8283, 8282);
				return;
			}
			if (a0 == 8283) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7502);
				tv0->ClearReplies();
				tv0->AddReply(7503, -1, 8284);
				return;
			}
			if (a0 == 8269) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7491);
				tv0->ClearReplies();
				tv0->AddReply(7492, 8271, 8270);
				tv0->AddReply(7499, 8271, 8278);
				return;
			}
			if (a0 == 8271) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7493);
				tv0->ClearReplies();
				tv0->AddReply(7494, 8273, 8272);
				tv0->AddReply(7498, 8273, 8276);
				return;
			}
			if (a0 == 8273) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7495);
				tv0->ClearReplies();
				tv0->AddReply(7496, -1, 8274);
				tv0->AddReply(7497, -1, 8275);
				return;
			}
			if (a0 == 8240) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7465);
				tv0->ClearReplies();
				tv0->AddReply(7466, -1, 8241);
				return;
			}
			if (a0 == 7651) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(6945);
				tv0->ClearReplies();
				tv0->AddReply(6946, 7653, 7652);
				tv0->AddReply(7455, 8231, 8230);
				return;
			}
			if (a0 == 8231) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7456);
				tv0->ClearReplies();
				tv0->AddReply(7457, 8233, 8232);
				return;
			}
			if (a0 == 8233) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7458);
				tv0->ClearReplies();
				tv0->AddReply(7459, -1, 8234);
				tv0->AddReply(7460, 8236, 8235);
				return;
			}
			if (a0 == 8236) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7461);
				tv0->ClearReplies();
				tv0->AddReply(7462, -1, 8237);
				return;
			}
			if (a0 == 7653) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(6947);
				tv0->ClearReplies();
				tv0->AddReply(7454, 8238, 8229);
				tv0->AddReply(7469, 8245, 8244);
				return;
			}
			if (a0 == 8245) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7470);
				tv0->ClearReplies();
				tv0->AddReply(7471, 8238, 8246);
				return;
			}
			if (a0 == 8238) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7463);
				tv0->ClearReplies();
				tv0->AddReply(7467, -1, 8242);
				tv0->AddReply(7468, -1, 8243);
				return;
			}
			if (a0 == 8250) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7474);
				tv0->ClearReplies();
				tv0->AddReply(7475, 8252, 8251);
				tv0->AddReply(7487, -1, 8264);
				return;
			}
			if (a0 == 8252) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7476);
				tv0->ClearReplies();
				tv0->AddReply(7477, 8254, 8253);
				tv0->AddReply(7481, 8258, 8257);
				return;
			}
			if (a0 == 8258) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7482);
				tv0->ClearReplies();
				tv0->AddReply(7483, 8260, 8259);
				tv0->AddReply(7486, -1, 8263);
				return;
			}
			if (a0 == 8260) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7484);
				tv0->ClearReplies();
				tv0->AddReply(7485, 8254, 8261);
				return;
			}
			if (a0 == 8254) {
				f_66e_a1_v("Neutral");
				tv0->SetMessage(7478);
				tv0->ClearReplies();
				tv0->AddReply(7479, -1, 8255);
				tv0->AddReply(7480, -1, 8256);
				return;
			}
			tv3 = true;
			if (f_e3b_a0_b()) {
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
		if (!f_bae_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e37_a0_i());
		L0->SetPhoto(f_e39_a0_s());
		L0->SetPlayerName(f_e26_a0_i());
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
		f_be6_a1_v(a0);
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
			if (f_d98_a1_b(tv1)) {
				f_cae_a2_v(tv1, tv0);
				f_997_a1_v("Neutral");
				tv0->SetMessage(9978);
				tv0->ClearReplies();
				tv0->AddReply(9979, 10998, 10997);
				tv0->AddReply(9990, 10998, 11009);
				tv0->AddReply(9991, 10998, 11011);
				break;
			}
			f_997_a1_v("Neutral");
			tv0->SetMessage(15318);
			tv0->ClearReplies();
			tv0->AddReply(15319, -1, 16557);
			break;
			return;
		}
		if (f_e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bea_a1_v(tv2);
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

	void f_997_a1_v(string a0)
	{
		if (!f_e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bfc_a0_v();
			if (a0 == 10996) {
				if (f_d98_a1_b(tv1)) {
					f_cae_a2_v(tv1, tv0);
					f_997_a1_v("Neutral");
					tv0->SetMessage(9978);
					tv0->ClearReplies();
					tv0->AddReply(9979, 10998, 10997);
					tv0->AddReply(9990, 10998, 11009);
					tv0->AddReply(9991, 10998, 11011);
					return;
				}
				f_997_a1_v("Neutral");
				tv0->SetMessage(15318);
				tv0->ClearReplies();
				tv0->AddReply(15319, -1, 16557);
				return;
			}
			if (a0 == 10998) {
				f_997_a1_v("Neutral");
				tv0->SetMessage(9980);
				tv0->ClearReplies();
				tv0->AddReply(9981, 11000, 10999);
				tv0->AddReply(9988, 11000, 11006);
				tv0->AddReply(9989, -1, 11008);
				return;
			}
			if (a0 == 11000) {
				f_997_a1_v("Neutral");
				tv0->SetMessage(9982);
				tv0->ClearReplies();
				tv0->AddReply(9983, -1, 11001);
				tv0->AddReply(9984, 11003, 11002);
				return;
			}
			if (a0 == 11003) {
				f_997_a1_v("Neutral");
				tv0->SetMessage(9985);
				tv0->ClearReplies();
				tv0->AddReply(9986, -1, 11004);
				tv0->AddReply(9987, -1, 11005);
				return;
			}
			tv3 = true;
			if (f_e3b_a0_b()) {
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
		if (!f_bae_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e37_a0_i());
		L0->SetPhoto(f_e39_a0_s());
		L0->SetPlayerName(f_e26_a0_i());
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
		f_be6_a1_v(a0);
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
			f_ad2_a1_v("Neutral");
			tv0->SetMessage(11211);
			tv0->ClearReplies();
			if (f_d22_a1_b(tv1) && f_db0_a1_b(tv1) || f_da4_a1_b(tv1) && f_db0_a1_b(tv1)) {
				tv0->AddReply(11212, 12401, 12400);
			}
			tv0->AddReply(15335, -1, 16558);
			break;
			return;
		}
		if (f_e3b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bea_a1_v(tv2);
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

	void f_ad2_a1_v(string a0)
	{
		if (!f_e3b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bea_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bfc_a0_v();
			if (a1 == 12400) {
				f_cb4_a2_v(tv1, tv0);
			}
			if (a0 == 12399) {
				f_ad2_a1_v("Neutral");
				tv0->SetMessage(11211);
				tv0->ClearReplies();
				if (f_d22_a1_b(tv1) && f_db0_a1_b(tv1) || f_da4_a1_b(tv1) && f_db0_a1_b(tv1)) {
					tv0->AddReply(11212, 12401, 12400);
				}
				tv0->AddReply(15335, -1, 16558);
				return;
			}
			if (a0 == 12401) {
				f_ad2_a1_v("Neutral");
				tv0->SetMessage(11213);
				tv0->ClearReplies();
				tv0->AddReply(11214, 12403, 12402);
				tv0->AddReply(11223, 12413, 12412);
				return;
			}
			if (a0 == 12413) {
				f_ad2_a1_v("Neutral");
				tv0->SetMessage(11224);
				tv0->ClearReplies();
				tv0->AddReply(11225, 12405, 12414);
				return;
			}
			if (a0 == 12403) {
				f_ad2_a1_v("Neutral");
				tv0->SetMessage(11215);
				tv0->ClearReplies();
				tv0->AddReply(11216, 12405, 12404);
				tv0->AddReply(11220, 12409, 12408);
				return;
			}
			if (a0 == 12409) {
				f_ad2_a1_v("Neutral");
				tv0->SetMessage(11221);
				tv0->ClearReplies();
				tv0->AddReply(11222, 12405, 12410);
				return;
			}
			if (a0 == 12405) {
				f_ad2_a1_v("Neutral");
				tv0->SetMessage(11217);
				tv0->ClearReplies();
				tv0->AddReply(11218, -1, 12406);
				tv0->AddReply(11219, -1, 12407);
				return;
			}
			tv3 = true;
			if (f_e3b_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_b9d_a1_b(object a0)
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

bool f_ba9_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_bae_a1_b(object a0)
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
	L5 = L3 * 70 + f_c03_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_be6_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_bea_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_bfc_a0_v(void)
{
	if (f_e3b_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_c03_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_c0d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_c12_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

float f_c22_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_c27_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_c30_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_c38_a1_b(int a0)
{
	return f_c27_a0_i() == a0;
}

bool f_c3e_a0_b(void)
{
	bool L0;
	f_bea_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

void f_c47_a2_v(object a0, object a1)
{
	f_c12_a2_v("warehouse_rubin@door1", false);
}

void f_c4e_a2_v(object a0, object a1)
{
	@SetVariable("ood1Notkin1", 1);
}

void f_c54_a2_v(object a0, object a1)
{
	@SetVariable("ood1Notkin2", 1);
}

void f_c5a_a2_v(object a0, object a1)
{
	@SetVariable("ood1NotkinMQ1", 1);
}

void f_c60_a2_v(object a0, object a1)
{
}

void f_c62_a2_v(object a0, object a1)
{
}

void f_c64_a2_v(object a0, object a1)
{
	@SetVariable("KnowTwoSouls", 1);
}

void f_c6a_a2_v(object a0, object a1)
{
	f_e05_a3_v(f_df4_a0_o(), "pt_map_rubin", 2);
	a1->ShowMap(f_df4_a0_o());
}

void f_c7a_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_df4_a0_o();
	L0->AddMark("d1q01NotkinAboutRubin", "pt_map_rubin", 1, 8648, f_c22_a0_f());
}

void f_c8a_a2_v(object a0, object a1)
{
	@SetVariable("KnowNotkin", 1);
}

void f_c90_a2_v(object a0, object a1)
{
	@SetVariable("ood1Notkin3", 1);
}

void f_c96_a2_v(object a0, object a1)
{
	@SetVariable("ood1Notkin4", 1);
}

void f_c9c_a2_v(object a0, object a1)
{
	@SetVariable("ood1Notkin5", 1);
}

void f_ca2_a2_v(object a0, object a1)
{
	@SetVariable("ood1Notkin6", 1);
}

void f_ca8_a2_v(object a0, object a1)
{
	@SetVariable("ood1Notkin7", 1);
}

void f_cae_a2_v(object a0, object a1)
{
	@SetVariable("ood3Notkin1", 1);
}

void f_cb4_a2_v(object a0, object a1)
{
	@SetVariable("ood4Notkin1", 1);
}

bool f_cba_a1_b(object a0)
{
	if (f_c0d_a1_i("KnowEpidemic") == 1) {
		return true;
	}
	return false;
}

bool f_cc6_a1_b(object a0)
{
	if (f_c0d_a1_i("ood1Notkin1") == 0) {
		return true;
	}
	return false;
}

bool f_cd2_a1_b(object a0)
{
	if (f_c0d_a1_i("ood1Notkin2") == 0) {
		return true;
	}
	return false;
}

bool f_cde_a1_b(object a0)
{
	if (f_c0d_a1_i("ood1NotkinMQ1") == 0) {
		return true;
	}
	return false;
}

bool f_cea_a1_b(object a0)
{
	if (f_c0d_a1_i("d1q01") == 1000) {
		return true;
	}
	return false;
}

bool f_cf6_a1_b(object a0)
{
	if (f_c0d_a1_i("d1q01") == 0) {
		return true;
	}
	return false;
}

bool f_d02_a1_b(object a0)
{
	if (f_c0d_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_d0e_a1_b(object a0)
{
	return true;
	return false;
}

bool f_d13_a1_b(object a0)
{
	return true;
	return false;
}

bool f_d18_a1_b(object a0)
{
	if (f_dd4_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_d22_a1_b(object a0)
{
	if (f_c0d_a1_i("d4q03") == 2) {
		return true;
	}
	return false;
}

bool f_d2e_a1_b(object a0)
{
	if (f_ddf_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_d38_a1_b(object a0)
{
	if (f_c0d_a1_i("KnowMark") == 1) {
		return true;
	}
	return false;
}

bool f_d44_a1_b(object a0)
{
	if (f_c0d_a1_i("KnowGrif") == 1) {
		return true;
	}
	return false;
}

bool f_d50_a1_b(object a0)
{
	if (f_c0d_a1_i("ood1Notkin3") == 0) {
		return true;
	}
	return false;
}

bool f_d5c_a1_b(object a0)
{
	if (f_c0d_a1_i("ood1Notkin4") == 0) {
		return true;
	}
	return false;
}

bool f_d68_a1_b(object a0)
{
	if (f_c0d_a1_i("ood1Notkin5") == 0) {
		return true;
	}
	return false;
}

bool f_d74_a1_b(object a0)
{
	if (f_c0d_a1_i("ood1Notkin6") == 0) {
		return true;
	}
	return false;
}

bool f_d80_a1_b(object a0)
{
	if (f_c0d_a1_i("ood1Notkin7") == 0) {
		return true;
	}
	return false;
}

bool f_d8c_a1_b(object a0)
{
	if (f_c0d_a1_i("KnowMishka") == 1) {
		return true;
	}
	return false;
}

bool f_d98_a1_b(object a0)
{
	if (f_c0d_a1_i("ood3Notkin1") == 0) {
		return true;
	}
	return false;
}

bool f_da4_a1_b(object a0)
{
	if (f_c0d_a1_i("d4q03") == 3) {
		return true;
	}
	return false;
}

bool f_db0_a1_b(object a0)
{
	if (f_c0d_a1_i("ood4Notkin1") == 0) {
		return true;
	}
	return false;
}

bool f_dbc_a1_b(object a0)
{
	if (f_c0d_a1_i("KnowSpi4ka") == 1) {
		return true;
	}
	return false;
}

bool f_dc8_a1_b(object a0)
{
	if (f_c0d_a1_i("KnowKapella") == 1) {
		return true;
	}
	return false;
}

bool f_dd4_a1_b(object a0)
{
	if (f_c30_a0_i() >= 18) {
		return true;
	}
	return false;
}

bool f_ddf_a1_b(object a0)
{
	if (f_c30_a0_i() >= 12 && f_c30_a0_i() < 18) {
		return true;
	}
	return false;
}

object f_df4_a0_o(void)
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

void f_e05_a3_v(object a0, string a1, float a2)
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

int f_e26_a0_i(void)
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

int f_e37_a0_i(void)
{
	return 2873;
}

string f_e39_a0_s(void)
{
	return "ui/NPC_Notkin.png";
}

bool f_e3b_a0_b(void)
{
	return true;
}

void f_e3d_a0_v(void)
{
	g1 = false;
}

void f_e41_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_c38_a1_b(1)) {
		if (f_c0d_a1_i("d1q01") == 1) {
			t6{a0};
			return;
		}
		t4{a0};
		return;
	}
	if (f_c38_a1_b(2)) {
		t8{a0};
		return;
	}
	if (f_c38_a1_b(3)) {
		t10{a0};
		return;
	}
	if (f_c38_a1_b(4)) {
		t12{a0};
		return;
	}
	f_c3e_a0_b();
}

