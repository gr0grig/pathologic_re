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
		} while (!f_b7c_a0_b());
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
		f_bd6_a1_b(f_c83_a0_o());
		if (!f_b81_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cda_a0_i());
		L0->SetNPCDescription(f_cd8_a0_i());
		L0->SetPhoto(f_cdc_a0_s());
		L0->SetPhoto2(f_cde_a0_s());
		L0->SetPlayerName(f_e1e_a0_i());
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
		f_bc5_a1_v(a0);
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
			f_98_a1_v("Neutral");
			tv0->SetMessage(530875);
			tv0->ClearReplies();
			tv0->AddReply(530876, 32199, 32195);
			tv0->AddReply(530877, 32197, 32196);
			break;
			return;
		}
		if (f_ce0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c60_a1_v(tv2);
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

	void f_98_a1_v(string a0)
	{
		if (!f_ce0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c67_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_c7c_a0_v();
			if (a0 == 32194) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(530875);
				tv0->ClearReplies();
				tv0->AddReply(530876, 32199, 32195);
				tv0->AddReply(530877, 32197, 32196);
				return;
			}
			if (a0 == 32197) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(530878);
				tv0->ClearReplies();
				tv0->AddReply(530879, 32199, 32198);
				tv0->AddReply(530881, 32199, 32200);
				return;
			}
			if (a0 == 32199) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(530880);
				tv0->ClearReplies();
				tv0->AddReply(530882, -1, 32203);
				tv0->AddReply(530883, -1, 32204);
				return;
			}
			tv3 = true;
			if (f_ce0_a0_b()) {
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
		f_bd6_a1_b(f_c83_a0_o());
		if (!f_b81_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cda_a0_i());
		L0->SetNPCDescription(f_cd8_a0_i());
		L0->SetPhoto(f_cdc_a0_s());
		L0->SetPhoto2(f_cde_a0_s());
		L0->SetPlayerName(f_e1e_a0_i());
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
		f_bc5_a1_v(a0);
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
			if (f_d5f_a1_b(tv1)) {
				f_cf2_a2_v(tv1, tv0);
				f_d49_a2_v(tv1, tv0);
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(521534);
				tv0->ClearReplies();
				tv0->AddReply(522289, 23470, 23444);
				tv0->AddReply(522291, 23449, 23446);
				break;
			}
			f_1c3_a1_v("Neutral");
			tv0->SetMessage(521594);
			tv0->ClearReplies();
			if (f_db1_a1_b(tv1)) {
				tv0->AddReply(522347, 23514, 23510);
			}
			if (f_dbd_a1_b(tv1)) {
				tv0->AddReply(521595, 23511, 22758);
			}
			tv0->AddReply(522350, -1, 23513);
			break;
			return;
		}
		if (f_ce0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c60_a1_v(tv2);
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

	void f_1c3_a1_v(string a0)
	{
		if (!f_ce0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c67_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_c7c_a0_v();
			if (a1 == 23500) {
				f_d4f_a2_v(tv1, tv0);
				f_ce2_a2_v(tv1, tv0);
			}
			if (a1 == 23501) {
				f_d4f_a2_v(tv1, tv0);
				f_ce2_a2_v(tv1, tv0);
			}
			if (a1 == 23495) {
				f_d4f_a2_v(tv1, tv0);
				f_ce2_a2_v(tv1, tv0);
			}
			if (a1 == 23496) {
				f_d4f_a2_v(tv1, tv0);
				f_ce2_a2_v(tv1, tv0);
			}
			if (a1 == 23510) {
				f_d17_a2_v(tv1, tv0);
			}
			if (a1 == 22758) {
				f_d1d_a2_v(tv1, tv0);
			}
			if (a0 == 22695) {
				if (f_d5f_a1_b(tv1)) {
					f_cf2_a2_v(tv1, tv0);
					f_d49_a2_v(tv1, tv0);
					f_1c3_a1_v("Neutral");
					tv0->SetMessage(521534);
					tv0->ClearReplies();
					tv0->AddReply(522289, 23470, 23444);
					tv0->AddReply(522291, 23449, 23446);
					return;
				}
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(521594);
				tv0->ClearReplies();
				if (f_db1_a1_b(tv1)) {
					tv0->AddReply(522347, 23514, 23510);
				}
				if (f_dbd_a1_b(tv1)) {
					tv0->AddReply(521595, 23511, 22758);
				}
				tv0->AddReply(522350, -1, 23513);
				return;
			}
			if (a0 == 23511) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522348);
				tv0->ClearReplies();
				tv0->AddReply(522349, -1, 23512);
				return;
			}
			if (a0 == 23514) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522351);
				tv0->ClearReplies();
				tv0->AddReply(522352, 23516, 23515);
				return;
			}
			if (a0 == 23516) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522353);
				tv0->ClearReplies();
				tv0->AddReply(522354, 23518, 23517);
				return;
			}
			if (a0 == 23518) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522355);
				tv0->ClearReplies();
				tv0->AddReply(522356, 23520, 23519);
				return;
			}
			if (a0 == 23520) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522357);
				tv0->ClearReplies();
				tv0->AddReply(522358, 23522, 23521);
				tv0->AddReply(522360, -1, 23523);
				return;
			}
			if (a0 == 23522) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522359);
				tv0->ClearReplies();
				tv0->AddReply(522361, -1, 23524);
				return;
			}
			if (a0 == 23449) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522294);
				tv0->ClearReplies();
				tv0->AddReply(522295, 23453, 23450);
				tv0->AddReply(522297, 23447, 23452);
				return;
			}
			if (a0 == 23447) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522292);
				tv0->ClearReplies();
				tv0->AddReply(522296, -1, 23451);
				tv0->AddReply(522293, -1, 23448);
				return;
			}
			if (a0 == 23453) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522298);
				tv0->ClearReplies();
				tv0->AddReply(522299, 23457, 23454);
				tv0->AddReply(522300, 23447, 23455);
				return;
			}
			if (a0 == 23457) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522301);
				tv0->ClearReplies();
				tv0->AddReply(522302, 23464, 23458);
				tv0->AddReply(522303, 23460, 23459);
				return;
			}
			if (a0 == 23460) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522304);
				tv0->ClearReplies();
				tv0->AddReply(522305, -1, 23461);
				tv0->AddReply(522306, 23447, 23462);
				return;
			}
			if (a0 == 23464) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522307);
				tv0->ClearReplies();
				tv0->AddReply(522308, 22697, 23465);
				tv0->AddReply(522309, 23467, 23466);
				return;
			}
			if (a0 == 23467) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522310);
				tv0->ClearReplies();
				tv0->AddReply(522311, 23447, 23468);
				return;
			}
			if (a0 == 23470) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522312);
				tv0->ClearReplies();
				tv0->AddReply(522313, 23472, 23471);
				return;
			}
			if (a0 == 23472) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522314);
				tv0->ClearReplies();
				tv0->AddReply(522316, 23445, 23474);
				tv0->AddReply(522315, 23502, 23473);
				return;
			}
			if (a0 == 23502) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522340);
				tv0->ClearReplies();
				tv0->AddReply(522342, 23445, 23504);
				tv0->AddReply(522341, 23507, 23503);
				return;
			}
			if (a0 == 23507) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522345);
				tv0->ClearReplies();
				tv0->AddReply(522346, 23445, 23508);
				return;
			}
			if (a0 == 23445) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522290);
				tv0->ClearReplies();
				tv0->AddReply(521535, 23481, 22696);
				tv0->AddReply(522319, 23479, 23478);
				return;
			}
			if (a0 == 23479) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522320);
				tv0->ClearReplies();
				tv0->AddReply(522321, 23483, 23480);
				return;
			}
			if (a0 == 23483) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522324);
				tv0->ClearReplies();
				tv0->AddReply(522325, 23457, 23484);
				return;
			}
			if (a0 == 23481) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522322);
				tv0->ClearReplies();
				tv0->AddReply(522323, 22697, 23482);
				tv0->AddReply(522328, 22697, 23489);
				return;
			}
			if (a0 == 22697) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(521536);
				tv0->ClearReplies();
				tv0->AddReply(522326, 23488, 23487);
				return;
			}
			if (a0 == 23488) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522327);
				tv0->ClearReplies();
				tv0->AddReply(522329, 23497, 23491);
				tv0->AddReply(521537, 23492, 22698);
				return;
			}
			if (a0 == 23492) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522330);
				tv0->ClearReplies();
				tv0->AddReply(522331, 23494, 23493);
				return;
			}
			if (a0 == 23494) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522332);
				tv0->ClearReplies();
				tv0->AddReply(522333, -1, 23495);
				tv0->AddReply(522334, -1, 23496);
				return;
			}
			if (a0 == 23497) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522335);
				tv0->ClearReplies();
				tv0->AddReply(522336, 23499, 23498);
				tv0->AddReply(530873, 23499, 32191);
				return;
			}
			if (a0 == 23499) {
				f_1c3_a1_v("Neutral");
				tv0->SetMessage(522337);
				tv0->ClearReplies();
				tv0->AddReply(522338, -1, 23500);
				tv0->AddReply(522339, -1, 23501);
				return;
			}
			tv3 = true;
			if (f_ce0_a0_b()) {
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
		f_bd6_a1_b(f_c83_a0_o());
		if (!f_b81_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cda_a0_i());
		L0->SetNPCDescription(f_cd8_a0_i());
		L0->SetPhoto(f_cdc_a0_s());
		L0->SetPhoto2(f_cde_a0_s());
		L0->SetPlayerName(f_e1e_a0_i());
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
		f_bc5_a1_v(a0);
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
			if (f_d6b_a1_b(tv1) && !f_d83_a1_b(tv1)) {
				f_cf8_a2_v(tv1, tv0);
				f_cfe_a2_v(tv1, tv0);
				f_58a_a1_v("Neutral");
				tv0->SetMessage(522123);
				tv0->ClearReplies();
				tv0->AddReply(522124, 24011, 23291);
				tv0->AddReply(540112, -1, 42079);
				break;
			}
			if (f_d83_a1_b(tv1)) {
				f_cfe_a2_v(tv1, tv0);
				f_58a_a1_v("Neutral");
				tv0->SetMessage(522127);
				tv0->ClearReplies();
				tv0->AddReply(522128, -1, 23295);
				tv0->AddReply(522844, -1, 24028);
				break;
			}
			f_cfe_a2_v(tv1, tv0);
			f_58a_a1_v("Neutral");
			tv0->SetMessage(522125);
			tv0->ClearReplies();
			if (f_d77_a1_b(tv1)) {
				tv0->AddReply(522848, 24033, 24032);
			}
			tv0->AddReply(522126, -1, 23293);
			break;
			return;
		}
		if (f_ce0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c60_a1_v(tv2);
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

	void f_58a_a1_v(string a0)
	{
		if (!f_ce0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c67_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_c7c_a0_v();
			if (a1 == 24032) {
				f_d04_a2_v(tv1, tv0);
			}
			if (a0 == 23290) {
				if (f_d6b_a1_b(tv1) && !f_d83_a1_b(tv1)) {
					f_cf8_a2_v(tv1, tv0);
					f_cfe_a2_v(tv1, tv0);
					f_58a_a1_v("Neutral");
					tv0->SetMessage(522123);
					tv0->ClearReplies();
					tv0->AddReply(522124, 24011, 23291);
					tv0->AddReply(540112, -1, 42079);
					return;
				}
				if (f_d83_a1_b(tv1)) {
					f_cfe_a2_v(tv1, tv0);
					f_58a_a1_v("Neutral");
					tv0->SetMessage(522127);
					tv0->ClearReplies();
					tv0->AddReply(522128, -1, 23295);
					tv0->AddReply(522844, -1, 24028);
					return;
				}
				f_cfe_a2_v(tv1, tv0);
				f_58a_a1_v("Neutral");
				tv0->SetMessage(522125);
				tv0->ClearReplies();
				if (f_d77_a1_b(tv1)) {
					tv0->AddReply(522848, 24033, 24032);
				}
				tv0->AddReply(522126, -1, 23293);
				return;
			}
			if (a0 == 24033) {
				f_58a_a1_v("Neutral");
				tv0->SetMessage(522849);
				tv0->ClearReplies();
				tv0->AddReply(522850, 24035, 24034);
				return;
			}
			if (a0 == 24035) {
				f_58a_a1_v("Neutral");
				tv0->SetMessage(522851);
				tv0->ClearReplies();
				tv0->AddReply(522852, 24037, 24036);
				tv0->AddReply(540113, -1, 42080);
				return;
			}
			if (a0 == 24037) {
				f_58a_a1_v("Neutral");
				tv0->SetMessage(522853);
				tv0->ClearReplies();
				tv0->AddReply(522854, -1, 24038);
				return;
			}
			if (a0 == 24011) {
				f_58a_a1_v("Neutral");
				tv0->SetMessage(522828);
				tv0->ClearReplies();
				tv0->AddReply(522829, 24015, 24012);
				tv0->AddReply(522830, 24014, 24013);
				return;
			}
			if (a0 == 24014) {
				f_58a_a1_v("Neutral");
				tv0->SetMessage(522831);
				tv0->ClearReplies();
				tv0->AddReply(522839, 24019, 24022);
				return;
			}
			if (a0 == 24015) {
				f_58a_a1_v("Neutral");
				tv0->SetMessage(522832);
				tv0->ClearReplies();
				tv0->AddReply(522833, 24017, 24016);
				tv0->AddReply(522840, -1, 24024);
				return;
			}
			if (a0 == 24017) {
				f_58a_a1_v("Neutral");
				tv0->SetMessage(522834);
				tv0->ClearReplies();
				tv0->AddReply(522835, 24019, 24018);
				tv0->AddReply(522841, -1, 24025);
				return;
			}
			if (a0 == 24019) {
				f_58a_a1_v("Neutral");
				tv0->SetMessage(522836);
				tv0->ClearReplies();
				tv0->AddReply(522837, 24021, 24020);
				return;
			}
			if (a0 == 24021) {
				f_58a_a1_v("Neutral");
				tv0->SetMessage(522838);
				tv0->ClearReplies();
				tv0->AddReply(522843, -1, 24027);
				tv0->AddReply(522842, -1, 24026);
				return;
			}
			tv3 = true;
			if (f_ce0_a0_b()) {
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
		f_bd6_a1_b(f_c83_a0_o());
		if (!f_b81_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cda_a0_i());
		L0->SetNPCDescription(f_cd8_a0_i());
		L0->SetPhoto(f_cdc_a0_s());
		L0->SetPhoto2(f_cde_a0_s());
		L0->SetPlayerName(f_e1e_a0_i());
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
		f_bc5_a1_v(a0);
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
			f_7b0_a1_v("Neutral");
			tv0->SetMessage(524719);
			tv0->ClearReplies();
			if (f_d8d_a1_b(tv1) && !f_d99_a1_b(tv1) && f_da5_a1_b(tv1)) {
				tv0->AddReply(524720, 32206, 26059);
			}
			if (f_d99_a1_b(tv1) && f_d8d_a1_b(tv1)) {
				tv0->AddReply(524724, 32212, 26063);
			}
			if (f_dc9_a1_b(tv1) && f_dd5_a1_b(tv1)) {
				tv0->AddReply(530453, 32226, 31819);
			}
			tv0->AddReply(524721, -1, 26060);
			tv0->AddReply(530884, -1, 32205);
			break;
			return;
		}
		if (f_ce0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c60_a1_v(tv2);
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

	void f_7b0_a1_v(string a0)
	{
		if (!f_ce0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c67_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_c7c_a0_v();
			if (a1 == 26059) {
				f_d11_a2_v(tv1, tv0);
			}
			if (a1 == 26065) {
				f_d0a_a2_v(tv1, tv0);
			}
			if (a1 == 31819) {
				f_d23_a2_v(tv1, tv0);
			}
			if (a1 == 31825) {
				f_d39_a2_v(tv1, tv0);
				f_d29_a2_v(tv1, tv0);
			}
			if (a0 == 26058) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(524719);
				tv0->ClearReplies();
				if (f_d8d_a1_b(tv1) && !f_d99_a1_b(tv1) && f_da5_a1_b(tv1)) {
					tv0->AddReply(524720, 32206, 26059);
				}
				if (f_d99_a1_b(tv1) && f_d8d_a1_b(tv1)) {
					tv0->AddReply(524724, 32212, 26063);
				}
				if (f_dc9_a1_b(tv1) && f_dd5_a1_b(tv1)) {
					tv0->AddReply(530453, 32226, 31819);
				}
				tv0->AddReply(524721, -1, 26060);
				tv0->AddReply(530884, -1, 32205);
				return;
			}
			if (a0 == 32226) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(530902);
				tv0->ClearReplies();
				tv0->AddReply(530903, 32228, 32227);
				tv0->AddReply(530906, 32228, 32230);
				return;
			}
			if (a0 == 32228) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(530904);
				tv0->ClearReplies();
				tv0->AddReply(530905, 31820, 32229);
				tv0->AddReply(530907, 32233, 32232);
				return;
			}
			if (a0 == 32233) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(530908);
				tv0->ClearReplies();
				tv0->AddReply(530909, -1, 32234);
				tv0->AddReply(530910, -1, 32235);
				return;
			}
			if (a0 == 31820) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(530454);
				tv0->ClearReplies();
				tv0->AddReply(530455, 31822, 31821);
				tv0->AddReply(530911, 31822, 32236);
				return;
			}
			if (a0 == 31822) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(530456);
				tv0->ClearReplies();
				tv0->AddReply(530457, 31824, 31823);
				tv0->AddReply(530912, 32239, 32238);
				return;
			}
			if (a0 == 32239) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(530913);
				tv0->ClearReplies();
				tv0->AddReply(530914, 31824, 32240);
				tv0->AddReply(530915, -1, 32241);
				return;
			}
			if (a0 == 31824) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(530458);
				tv0->ClearReplies();
				tv0->AddReply(530459, -1, 31825);
				return;
			}
			if (a0 == 32212) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(530891);
				tv0->ClearReplies();
				tv0->AddReply(530892, 32215, 32213);
				tv0->AddReply(530893, -1, 32214);
				return;
			}
			if (a0 == 32215) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(530894);
				tv0->ClearReplies();
				tv0->AddReply(530896, 32219, 32217);
				tv0->AddReply(530895, 32219, 32216);
				tv0->AddReply(530897, 32219, 32218);
				return;
			}
			if (a0 == 32219) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(530898);
				tv0->ClearReplies();
				tv0->AddReply(530899, 26064, 32220);
				tv0->AddReply(530901, 26064, 32224);
				return;
			}
			if (a0 == 26064) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(524725);
				tv0->ClearReplies();
				tv0->AddReply(524726, -1, 26065);
				return;
			}
			if (a0 == 32206) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(530885);
				tv0->ClearReplies();
				tv0->AddReply(530886, 32208, 32207);
				return;
			}
			if (a0 == 32208) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(530887);
				tv0->ClearReplies();
				tv0->AddReply(530888, 26061, 32209);
				tv0->AddReply(530889, -1, 32210);
				return;
			}
			if (a0 == 26061) {
				f_7b0_a1_v("Neutral");
				tv0->SetMessage(524722);
				tv0->ClearReplies();
				tv0->AddReply(524723, -1, 26062);
				tv0->AddReply(530890, -1, 32211);
				return;
			}
			tv3 = true;
			if (f_ce0_a0_b()) {
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
		f_bd6_a1_b(f_c83_a0_o());
		if (!f_b81_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cda_a0_i());
		L0->SetNPCDescription(f_cd8_a0_i());
		L0->SetPhoto(f_cdc_a0_s());
		L0->SetPhoto2(f_cde_a0_s());
		L0->SetPlayerName(f_e1e_a0_i());
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
		f_bc5_a1_v(a0);
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
			f_a1b_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_ce0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c60_a1_v(tv2);
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

	void f_a1b_a1_v(string a0)
	{
		if (!f_ce0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_c67_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_c7c_a0_v();
			if (a0 == 42563) {
				f_a1b_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_ce0_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t11
{
	var Vector tv0;

	void init(void)
	{
		f_a5f_a0_v();
	}

	void f_a5f_a0_v(void)
	{
		if (!f_b7c_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_b15_a0_v();
		}
	}

	bool f_a73_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_b73_a1_b(L0);
	}

	void f_a82_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_a87_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_b61_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_a9d_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_aa6_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_aa6_a0_v();
			if (f_b7c_a0_b() && f_a87_a0_b()) {
				if (f_a73_a0_b()) {
					f_c10_a1_b(f_c83_a0_o());
				}
			} else {
				f_a82_a0_v();
				f_a9d_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_b5c_a0_v();
		f_aa6_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_aa6_a0_v();
		f_c60_a1_v("Neutral");
		f_a9d_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_a9d_a0_v();
		} else {
			f_c60_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_b5c_a0_v();
			f_b73_a1_b(a0);
			enable OnUse;
			f_e2f_a1_v(a0);
			f_c60_a1_v("Neutral");
			f_aa6_a0_v();
			f_a9d_a0_v();
		}
	}
}

void f_b15_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_b7c_a0_b()) {
		return;
	}
	L0 = f_cc7_a0_i();
	for (L1 = 0; L1 < 5 && f_b7c_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_cc0_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_b5a_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_b5a_a0_b(void)
{
	return true;
}

void f_b5c_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_b61_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_b69_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_b73_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_b69_a1_b(L0);
}

bool f_b7c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_b81_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_c89_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_ce0_a0_b()) {
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

void f_bc5_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_ce0_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_bd6_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_c10_a1_b(a0)) {
			if (!f_c35_a1_b(a0)) {
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
		if (!f_c35_a1_b(a0)) {
			if (!f_c10_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_c10_a1_b(object a0)
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
	return f_c6d_a1_b(L4);
}

bool f_c35_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_ca9_a0_i() + "m";
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
	return f_c6d_a1_b(L4);
}

void f_c60_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_c67_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_c6d_a1_b(string a0)
{
	if (f_ce0_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_c7c_a0_v(void)
{
	if (f_ce0_a0_b()) {
		@lshStopSpeech();
	}
}

object f_c83_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_c89_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_c93_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_c98_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_ca4_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_ca9_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_cb2_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_cba_a1_b(int a0)
{
	return f_ca9_a0_i() == a0;
}

string f_cc0_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_cc7_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_cc0_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_cd8_a0_i(void)
{
	return 515532;
}

int f_cda_a0_i(void)
{
	return 514840;
}

string f_cdc_a0_s(void)
{
	return "ui/NPC_Block.png";
}

string f_cde_a0_s(void)
{
	return "ui/NPC_Block_b.png";
}

bool f_ce0_a0_b(void)
{
	return true;
}

void f_ce2_a2_v(object a0, object a1)
{
	f_dfd_a3_v(f_dec_a0_o(), "pt_map_starshina", 2);
	a1->ShowMap(f_dec_a0_o());
}

void f_cf2_a2_v(object a0, object a1)
{
	@SetVariable("oob9Block1", 1);
}

void f_cf8_a2_v(object a0, object a1)
{
	@SetVariable("oob12Block1", 1);
}

void f_cfe_a2_v(object a0, object a1)
{
	@SetVariable("b12q01BlockVisit", 1);
}

void f_d04_a2_v(object a0, object a1)
{
	@SetVariable("oob12Block2", 1);
}

void f_d0a_a2_v(object a0, object a1)
{
	f_c98_a2_b("quest_b10_02", "completed");
}

void f_d11_a2_v(object a0, object a1)
{
	@SetVariable("oob10Block1", 1);
}

void f_d17_a2_v(object a0, object a1)
{
	@SetVariable("oob9Block2", 1);
}

void f_d1d_a2_v(object a0, object a1)
{
	@SetVariable("oob9Block3", 1);
}

void f_d23_a2_v(object a0, object a1)
{
	@SetVariable("oob10Block2", 1);
}

void f_d29_a2_v(object a0, object a1)
{
	f_dfd_a3_v(f_dec_a0_o(), "pt_gmap_vagon_army", 2);
	a1->ShowMap(f_dec_a0_o());
}

void f_d39_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_dec_a0_o();
	L0->AddMark("b10q04BlockGotoOfficer", "pt_gmap_vagon_army", 0, 530547, f_ca4_a0_f());
}

void f_d49_a2_v(object a0, object a1)
{
	@SetVariable("b9BlockVisit", 1);
}

void f_d4f_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_dec_a0_o();
	L0->AddMark("b9q01BlockGotoBoiny", "pt_map_starshina", 3, 531550, f_ca4_a0_f());
}

bool f_d5f_a1_b(object a0)
{
	if (f_c93_a1_i("oob9Block1") == 0) {
		return true;
	}
	return false;
}

bool f_d6b_a1_b(object a0)
{
	if (f_c93_a1_i("oob12Block1") == 0) {
		return true;
	}
	return false;
}

bool f_d77_a1_b(object a0)
{
	if (f_c93_a1_i("oob12Block2") == 0) {
		return true;
	}
	return false;
}

bool f_d83_a1_b(object a0)
{
	if (f_de1_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_d8d_a1_b(object a0)
{
	if (f_c93_a1_i("b10q02") == 3) {
		return true;
	}
	return false;
}

bool f_d99_a1_b(object a0)
{
	if (f_c93_a1_i("b10q02Cutscene") != 0) {
		return true;
	}
	return false;
}

bool f_da5_a1_b(object a0)
{
	if (f_c93_a1_i("oob10Block1") == 0) {
		return true;
	}
	return false;
}

bool f_db1_a1_b(object a0)
{
	if (f_c93_a1_i("oob9Block2") == 0) {
		return true;
	}
	return false;
}

bool f_dbd_a1_b(object a0)
{
	if (f_c93_a1_i("oob9Block3") == 0) {
		return true;
	}
	return false;
}

bool f_dc9_a1_b(object a0)
{
	if (f_c93_a1_i("b10q04KapellaGotoBlock") != 0) {
		return true;
	}
	return false;
}

bool f_dd5_a1_b(object a0)
{
	if (f_c93_a1_i("oob10Block2") == 0) {
		return true;
	}
	return false;
}

bool f_de1_a1_b(object a0)
{
	if (f_cb2_a0_i() >= 19) {
		return true;
	}
	return false;
}

object f_dec_a0_o(void)
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

void f_dfd_a3_v(object a0, string a1, float a2)
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

int f_e1e_a0_i(void)
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

void f_e2f_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_block", L0);
	if (!L0) {
		t1{a0};
		@SetVariable("mt_block", 1);
	}
	if (f_cba_a1_b(9)) {
		t3{a0};
		return;
	}
	if (f_cba_a1_b(10)) {
		t7{a0};
		return;
	}
	if (f_cba_a1_b(12)) {
		t5{a0};
		return;
	}
	t9{a0};
}

