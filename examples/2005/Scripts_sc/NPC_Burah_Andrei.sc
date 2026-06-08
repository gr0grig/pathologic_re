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
		} while (!f_a0b_a0_b());
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

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			if (f_be0_a0_b()) {
				f_b2a_a1_v("Neutral");
				@lshWaitForAnimEnd();
			} else {
				@WaitForAnimEnd();
				@PlayAnimation("all", "idle");
			}
			if (tv0) {
				return;
			}
		}
	}

	void evt_11(int a0)
	{
		if (f_be0_a0_b()) {
			@lshStopAnimation();
		} else {
			@StopAnimation();
		}
		@StopTrade();
		tv0 = true;
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
		f_a65_a1_b(f_b67_a0_o());
		if (!f_a10_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_bda_a0_i());
		L0->SetNPCDescription(f_bd8_a0_i());
		L0->SetPhoto(f_bdc_a0_s());
		L0->SetPhoto2(f_bde_a0_s());
		L0->SetPlayerName(f_db9_a0_i());
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
		f_a54_a1_v(a0);
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
			f_c0_a1_v("Neutral");
			tv0->SetMessage(531971);
			tv0->ClearReplies();
			tv0->AddReply(531972, -1, 33378);
			tv0->AddReply(531973, -1, 33379);
			break;
			return;
		}
		if (f_be0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b2a_a1_v(tv2);
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

	void f_c0_a1_v(string a0)
	{
		if (!f_be0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b31_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b46_a0_v();
			if (a1 == 33378) {
				f_c5f_a2_v(tv1, tv0);
			}
			if (a0 == 33377) {
				f_c0_a1_v("Neutral");
				tv0->SetMessage(531971);
				tv0->ClearReplies();
				tv0->AddReply(531972, -1, 33378);
				tv0->AddReply(531973, -1, 33379);
				return;
			}
			tv3 = true;
			if (f_be0_a0_b()) {
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
		f_a65_a1_b(f_b67_a0_o());
		if (!f_a10_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_bda_a0_i());
		L0->SetNPCDescription(f_bd8_a0_i());
		L0->SetPhoto(f_bdc_a0_s());
		L0->SetPhoto2(f_bde_a0_s());
		L0->SetPlayerName(f_db9_a0_i());
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
		f_a54_a1_v(a0);
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
			f_198_a1_v("Neutral");
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_be0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b2a_a1_v(tv2);
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

	void f_198_a1_v(string a0)
	{
		if (!f_be0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b31_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b46_a0_v();
			if (a0 == 36906) {
				f_198_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_198_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_198_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_be0_a0_b()) {
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
		f_a65_a1_b(f_b67_a0_o());
		if (!f_a10_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_bda_a0_i());
		L0->SetNPCDescription(f_bd8_a0_i());
		L0->SetPhoto(f_bdc_a0_s());
		L0->SetPhoto2(f_bde_a0_s());
		L0->SetPlayerName(f_db9_a0_i());
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
		f_a54_a1_v(a0);
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
			f_291_a1_v("Neutral");
			tv0->SetMessage(517994);
			tv0->ClearReplies();
			tv0->AddReply(517995, 23147, 19128);
			break;
			return;
		}
		if (f_be0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b2a_a1_v(tv2);
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

	void f_291_a1_v(string a0)
	{
		if (!f_be0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b31_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b46_a0_v();
			if (a0 == 19127) {
				f_291_a1_v("Neutral");
				tv0->SetMessage(517994);
				tv0->ClearReplies();
				tv0->AddReply(517995, 23147, 19128);
				return;
			}
			if (a0 == 23147) {
				f_291_a1_v("Neutral");
				tv0->SetMessage(521978);
				tv0->ClearReplies();
				tv0->AddReply(521979, 23149, 23148);
				tv0->AddReply(521984, -1, 23153);
				return;
			}
			if (a0 == 23149) {
				f_291_a1_v("Neutral");
				tv0->SetMessage(521980);
				tv0->ClearReplies();
				tv0->AddReply(521981, 23151, 23150);
				tv0->AddReply(521985, 23157, 23154);
				return;
			}
			if (a0 == 23151) {
				f_291_a1_v("Neutral");
				tv0->SetMessage(521982);
				tv0->ClearReplies();
				tv0->AddReply(521987, -1, 23156);
				tv0->AddReply(521983, 23157, 23152);
				tv0->AddReply(521986, -1, 23155);
				return;
			}
			if (a0 == 23157) {
				f_291_a1_v("Neutral");
				tv0->SetMessage(521988);
				tv0->ClearReplies();
				tv0->AddReply(521989, -1, 23158);
				tv0->AddReply(521990, -1, 23159);
				return;
			}
			tv3 = true;
			if (f_be0_a0_b()) {
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
		f_a65_a1_b(f_b67_a0_o());
		if (!f_a10_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_bda_a0_i());
		L0->SetNPCDescription(f_bd8_a0_i());
		L0->SetPhoto(f_bdc_a0_s());
		L0->SetPhoto2(f_bde_a0_s());
		L0->SetPlayerName(f_db9_a0_i());
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
		f_a54_a1_v(a0);
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
			if (f_c64_a1_b(tv1)) {
				f_bfe_a2_v(tv1, tv0);
				f_c31_a2_v(tv1, tv0);
				f_420_a1_v("Neutral");
				tv0->SetMessage(531038);
				tv0->ClearReplies();
				tv0->AddReply(531227, 32541, 32540);
				tv0->AddReply(531231, 32545, 32544);
				break;
			}
			f_420_a1_v("Neutral");
			tv0->SetMessage(518214);
			tv0->ClearReplies();
			if (f_c7c_a1_b(tv1)) {
				tv0->AddReply(531041, 32373, 32372);
			}
			if (f_c88_a1_b(tv1) && f_c70_a1_b(tv1) && !f_caa_a1_b(tv1)) {
				tv0->AddReply(531048, 32378, 32377);
			}
			if (f_c9e_a1_b(tv1) && !f_c92_a1_b(tv1)) {
				tv0->AddReply(531081, 32402, 32401);
			}
			if (f_cce_a1_b(tv1)) {
				tv0->AddReply(519410, 20576, 20575);
			}
			tv0->AddReply(518215, 20584, 19328);
			tv0->AddReply(518216, -1, 19329);
			break;
			return;
		}
		if (f_be0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b2a_a1_v(tv2);
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

	void f_420_a1_v(string a0)
	{
		if (!f_be0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b31_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b46_a0_v();
			if (a1 == 32376) {
				f_c04_a2_v(tv1, tv0);
			}
			if (a1 == 32374) {
				f_c04_a2_v(tv1, tv0);
			}
			if (a1 == 32379) {
				f_c15_a2_v(tv1, tv0);
				f_bee_a2_v(tv1, tv0);
				f_bf8_a2_v(tv1, tv0);
				f_c53_a2_v(tv1, tv0);
				f_c37_a2_v(tv1, tv0);
			}
			if (a1 == 32403) {
				f_c47_a2_v(tv1, tv0);
			}
			if (a1 == 20575) {
				f_be8_a2_v(tv1, tv0);
			}
			if (a1 == 20583) {
				f_be8_a2_v(tv1, tv0);
			}
			if (a1 == 20595) {
				f_be8_a2_v(tv1, tv0);
			}
			if (a1 == 20594) {
				f_be8_a2_v(tv1, tv0);
			}
			if (a1 == 20587) {
				f_c5f_a2_v(tv1, tv0);
			}
			if (a0 == 32369) {
				if (f_c64_a1_b(tv1)) {
					f_bfe_a2_v(tv1, tv0);
					f_c31_a2_v(tv1, tv0);
					f_420_a1_v("Neutral");
					tv0->SetMessage(531038);
					tv0->ClearReplies();
					tv0->AddReply(531227, 32541, 32540);
					tv0->AddReply(531231, 32545, 32544);
					return;
				}
				f_420_a1_v("Neutral");
				tv0->SetMessage(518214);
				tv0->ClearReplies();
				if (f_c7c_a1_b(tv1)) {
					tv0->AddReply(531041, 32373, 32372);
				}
				if (f_c88_a1_b(tv1) && f_c70_a1_b(tv1) && !f_caa_a1_b(tv1)) {
					tv0->AddReply(531048, 32378, 32377);
				}
				if (f_c9e_a1_b(tv1) && !f_c92_a1_b(tv1)) {
					tv0->AddReply(531081, 32402, 32401);
				}
				if (f_cce_a1_b(tv1)) {
					tv0->AddReply(519410, 20576, 20575);
				}
				tv0->AddReply(518215, 20584, 19328);
				tv0->AddReply(518216, -1, 19329);
				return;
			}
			if (a0 == 20584) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(519419);
				tv0->ClearReplies();
				tv0->AddReply(519420, 20586, 20585);
				tv0->AddReply(519424, 20586, 20589);
				return;
			}
			if (a0 == 20586) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(519421);
				tv0->ClearReplies();
				tv0->AddReply(519422, -1, 20587);
				tv0->AddReply(519423, -1, 20588);
				return;
			}
			if (a0 == 20576) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(519411);
				tv0->ClearReplies();
				tv0->AddReply(519412, 20578, 20577);
				tv0->AddReply(519425, 20582, 20591);
				return;
			}
			if (a0 == 20578) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(519413);
				tv0->ClearReplies();
				tv0->AddReply(519414, 20580, 20579);
				tv0->AddReply(519426, 20582, 20592);
				return;
			}
			if (a0 == 20580) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(519415);
				tv0->ClearReplies();
				tv0->AddReply(519416, 20582, 20581);
				tv0->AddReply(519427, -1, 20594);
				return;
			}
			if (a0 == 20582) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(519417);
				tv0->ClearReplies();
				tv0->AddReply(519418, -1, 20583);
				tv0->AddReply(519428, -1, 20595);
				return;
			}
			if (a0 == 32402) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(531082);
				tv0->ClearReplies();
				tv0->AddReply(531217, 32529, 32528);
				tv0->AddReply(531221, 32536, 32532);
				return;
			}
			if (a0 == 32529) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(531218);
				tv0->ClearReplies();
				tv0->AddReply(531219, 32531, 32530);
				tv0->AddReply(531222, 32536, 32533);
				return;
			}
			if (a0 == 32536) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(531224);
				tv0->ClearReplies();
				tv0->AddReply(531225, -1, 32538);
				tv0->AddReply(531226, -1, 32539);
				return;
			}
			if (a0 == 32531) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(531220);
				tv0->ClearReplies();
				tv0->AddReply(531083, -1, 32403);
				return;
			}
			if (a0 == 32378) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(531049);
				tv0->ClearReplies();
				tv0->AddReply(531214, 32526, 32524);
				tv0->AddReply(531215, 32526, 32525);
				return;
			}
			if (a0 == 32526) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(531216);
				tv0->ClearReplies();
				tv0->AddReply(531050, -1, 32379);
				return;
			}
			if (a0 == 32373) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(531042);
				tv0->ClearReplies();
				tv0->AddReply(531043, -1, 32374);
				return;
			}
			if (a0 == 32545) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(531232);
				tv0->ClearReplies();
				tv0->AddReply(531233, 32541, 32546);
				tv0->AddReply(531234, -1, 32547);
				return;
			}
			if (a0 == 32541) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(531228);
				tv0->ClearReplies();
				tv0->AddReply(531238, 32553, 32552);
				tv0->AddReply(531229, 32543, 32542);
				return;
			}
			if (a0 == 32543) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(531230);
				tv0->ClearReplies();
				tv0->AddReply(531235, -1, 32549);
				tv0->AddReply(531240, 32553, 32554);
				return;
			}
			if (a0 == 32553) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(531239);
				tv0->ClearReplies();
				tv0->AddReply(531236, 32551, 32550);
				return;
			}
			if (a0 == 32551) {
				f_420_a1_v("Neutral");
				tv0->SetMessage(531237);
				tv0->ClearReplies();
				tv0->AddReply(531045, -1, 32376);
				tv0->AddReply(531040, -1, 32371);
				return;
			}
			tv3 = true;
			if (f_be0_a0_b()) {
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
		f_a65_a1_b(f_b67_a0_o());
		if (!f_a10_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_bda_a0_i());
		L0->SetNPCDescription(f_bd8_a0_i());
		L0->SetPhoto(f_bdc_a0_s());
		L0->SetPhoto2(f_bde_a0_s());
		L0->SetPlayerName(f_db9_a0_i());
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
		f_a54_a1_v(a0);
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
			f_74c_a1_v("Smile");
			tv0->SetMessage(518917);
			tv0->ClearReplies();
			if (f_cb6_a1_b(tv1) && f_cc2_a1_b(tv1)) {
				tv0->AddReply(518919, 20031, 20030);
			}
			tv0->AddReply(531963, -1, 33368);
			tv0->AddReply(518918, -1, 20029);
			break;
			return;
		}
		if (f_be0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b2a_a1_v(tv2);
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

	void f_74c_a1_v(string a0)
	{
		if (!f_be0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b31_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b46_a0_v();
			if (a1 == 20030) {
				f_be2_a2_v(tv1, tv0);
			}
			if (a1 == 33368) {
				f_c5f_a2_v(tv1, tv0);
			}
			if (a0 == 20028) {
				f_74c_a1_v("Smile");
				tv0->SetMessage(518917);
				tv0->ClearReplies();
				if (f_cb6_a1_b(tv1) && f_cc2_a1_b(tv1)) {
					tv0->AddReply(518919, 20031, 20030);
				}
				tv0->AddReply(531963, -1, 33368);
				tv0->AddReply(518918, -1, 20029);
				return;
			}
			if (a0 == 20031) {
				f_74c_a1_v("Neutral");
				tv0->SetMessage(518920);
				tv0->ClearReplies();
				tv0->AddReply(518923, 20039, 20034);
				tv0->AddReply(518921, 20033, 20032);
				return;
			}
			if (a0 == 20033) {
				f_74c_a1_v("Neutral");
				tv0->SetMessage(518922);
				tv0->ClearReplies();
				tv0->AddReply(518924, 20037, 20035);
				tv0->AddReply(518925, -1, 20036);
				return;
			}
			if (a0 == 20037) {
				f_74c_a1_v("Untrust");
				tv0->SetMessage(518926);
				tv0->ClearReplies();
				tv0->AddReply(518927, -1, 20038);
				return;
			}
			if (a0 == 20039) {
				f_74c_a1_v("Grin");
				tv0->SetMessage(518928);
				tv0->ClearReplies();
				tv0->AddReply(518930, 20042, 20041);
				tv0->AddReply(518929, -1, 20040);
				return;
			}
			if (a0 == 20042) {
				f_74c_a1_v("Neutral");
				tv0->SetMessage(518931);
				tv0->ClearReplies();
				tv0->AddReply(518932, -1, 20043);
				return;
			}
			tv3 = true;
			if (f_be0_a0_b()) {
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
		f_a65_a1_b(f_b67_a0_o());
		if (!f_a10_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_bda_a0_i());
		L0->SetNPCDescription(f_bd8_a0_i());
		L0->SetPhoto(f_bdc_a0_s());
		L0->SetPhoto2(f_bde_a0_s());
		L0->SetPlayerName(f_db9_a0_i());
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
		f_a54_a1_v(a0);
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
			f_8a3_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_be0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b2a_a1_v(tv2);
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

	void f_8a3_a1_v(string a0)
	{
		if (!f_be0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b31_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b46_a0_v();
			if (a0 == 42563) {
				f_8a3_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_be0_a0_b()) {
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
		f_8e7_a0_v();
	}

	void f_8e7_a0_v(void)
	{
		if (!f_a0b_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_99d_a0_v();
		}
	}

	bool f_8fb_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_a02_a1_b(L0);
	}

	void f_90a_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_90f_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_9e9_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_925_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_92e_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_92e_a0_v();
			if (f_a0b_a0_b() && f_90f_a0_b()) {
				if (f_8fb_a0_b()) {
					f_a9f_a1_b(f_b67_a0_o());
				}
			} else {
				f_90a_a0_v();
				f_925_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_9e4_a0_v();
		f_92e_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_92e_a0_v();
		f_b2a_a1_v("Neutral");
		f_925_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_925_a0_v();
		} else {
			f_b2a_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_9e4_a0_v();
			f_a02_a1_b(a0);
			enable OnUse;
			f_dca_a1_v(a0);
			f_b2a_a1_v("Neutral");
			f_92e_a0_v();
			f_925_a0_v();
		}
	}
}

void f_99d_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_a0b_a0_b()) {
		return;
	}
	L0 = f_bc7_a0_i();
	for (L1 = 0; L1 < 5 && f_a0b_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_bc0_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_9e2_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_9e2_a0_b(void)
{
	return true;
}

void f_9e4_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_9e9_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_9f1_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_9f8_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_a02_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_9f8_a1_b(L0);
}

bool f_a0b_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_a10_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_b6d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_be0_a0_b()) {
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

void f_a54_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_be0_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_a65_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_a9f_a1_b(a0)) {
			if (!f_ac4_a1_b(a0)) {
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
		if (!f_ac4_a1_b(a0)) {
			if (!f_a9f_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_a9f_a1_b(object a0)
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
	return f_b37_a1_b(L4);
}

bool f_ac4_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_bb1_a0_i() + "m";
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
	return f_b37_a1_b(L4);
}

bool f_aef_a1_b(object a0)
{
	return f_af7_a2_b(a0, 70);
}

bool f_af7_a2_b(object a0, float a1)
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
	L5 = L3 * a1 - [0.0, 10.0, 0.0];
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

void f_b26_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_b2a_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_b31_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_b37_a1_b(string a0)
{
	if (f_be0_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_b46_a0_v(void)
{
	if (f_be0_a0_b()) {
		@lshStopSpeech();
	}
}

void f_b4d_a3_v(string a0, int a1, int a2)
{
	if (f_b77_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_b58_a4_v(string a0, int a1, int a2, int a3)
{
	if (f_b77_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a3);
		@AddItem(L1, a0, 0, L0 + 1);
	}
}

object f_b67_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_b6d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_b77_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

int f_b7c_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_b81_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_b8d_a2_v(object a0, int a1)
{
	f_9f1_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_b81_a2_v(L0, a1);
	}
}

bool f_ba0_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_bac_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_bb1_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_bba_a1_b(int a0)
{
	return f_bb1_a0_i() == a0;
}

string f_bc0_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_bc7_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_bc0_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_bd8_a0_i(void)
{
	return 515529;
}

int f_bda_a0_i(void)
{
	return 502855;
}

string f_bdc_a0_s(void)
{
	return "ui/NPC_Andrei.png";
}

string f_bde_a0_s(void)
{
	return "ui/NPC_Andrei_b.png";
}

bool f_be0_a0_b(void)
{
	return true;
}

void f_be2_a2_v(object a0, object a1)
{
	@SetVariable("oob5Andrei1", 1);
}

void f_be8_a2_v(object a0, object a1)
{
	@SetVariable("oob2Andrei1", 1);
}

void f_bee_a2_v(object a0, object a1)
{
	@Trace("money 4000 is given");
	f_b8d_a2_v(a0, 4000);
}

void f_bf8_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_bfe_a2_v(object a0, object a1)
{
	@SetVariable("oob2Andrei2", 1);
}

void f_c04_a2_v(object a0, object a1)
{
	@SetVariable("b2q03", 1);
	f_ce5_a0_v();
	f_cf2_a0_v();
	f_ba0_a2_b("quest_b2_03", "place_maria");
}

void f_c15_a2_v(object a0, object a1)
{
	object L0;
	int L1;
	L0 = f_d5c_a0_o();
	L0->AddMark("b2q03GoodShop", "pt_b2q03_good_shop", 3, 531061, f_bac_a0_f());
	f_cff_a0_v();
	a0->RemoveItemByType(L1, "grass_brown_tvir", 10);
	f_ba0_a2_b("quest_b2_03", "completed");
}

void f_c31_a2_v(object a0, object a1)
{
	@SetVariable("b2AndreiVisit", 1);
}

void f_c37_a2_v(object a0, object a1)
{
	f_d6d_a3_v(f_d5c_a0_o(), "pt_b2q03_good_shop", 2);
	a1->ShowMap(f_d5c_a0_o());
}

void f_c47_a2_v(object a0, object a1)
{
	@SetVariable("b2q03_1", 2);
	f_d19_a0_v();
	f_d0c_a0_v();
}

void f_c53_a2_v(object a0, object a1)
{
	if (f_b7c_a1_i("b2q03_1") != 0) {
		f_d26_a0_v();
	}
}

void f_c5f_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_c64_a1_b(object a0)
{
	if (f_b7c_a1_i("oob2Andrei2") == 0) {
		return true;
	}
	return false;
}

bool f_c70_a1_b(object a0)
{
	if (f_b7c_a1_i("b2q03") == 1) {
		return true;
	}
	return false;
}

bool f_c7c_a1_b(object a0)
{
	if (f_b7c_a1_i("b2q03") == 0) {
		return true;
	}
	return false;
}

bool f_c88_a1_b(object a0)
{
	if (f_cda_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_c92_a1_b(object a0)
{
	if (f_b7c_a1_i("b2q03") == 1000) {
		return true;
	}
	return false;
}

bool f_c9e_a1_b(object a0)
{
	if (f_b7c_a1_i("b2q03_1") == 1) {
		return true;
	}
	return false;
}

bool f_caa_a1_b(object a0)
{
	if (f_b7c_a1_i("b2q03_1") == 2) {
		return true;
	}
	return false;
}

bool f_cb6_a1_b(object a0)
{
	if (f_b7c_a1_i("b5q01") == 1) {
		return true;
	}
	return false;
}

bool f_cc2_a1_b(object a0)
{
	if (f_b7c_a1_i("oob5Andrei1") == 0) {
		return true;
	}
	return false;
}

bool f_cce_a1_b(object a0)
{
	if (f_b7c_a1_i("oob2Andrei1") == 0) {
		return true;
	}
	return false;
}

bool f_cda_a1_b(object a0)
{
	int L0;
	a0->GetItemCountOfType(L0, "grass_brown_tvir");
	if (L0 >= 10) {
		return true;
	}
	return false;
}

void f_ce5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 585, 2, 531046);
	f_d40_a2_b(L0, -1);
}

void f_cf2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 586, 2, 531047);
	f_d40_a2_b(L0, 585);
}

void f_cff_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 587, 2, 531051);
	f_d40_a2_b(L0, 585);
}

void f_d0c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 592, 2, 531080);
	f_d40_a2_b(L0, 585);
}

void f_d19_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 591, 2, 531079);
	f_d40_a2_b(L0, 588);
}

void f_d26_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 612, 2, 531559);
	f_d40_a2_b(L0, 588);
}

object f_d33_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_d40_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_d33_a0_o();
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

object f_d5c_a0_o(void)
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

void f_d6d_a3_v(object a0, string a1, float a2)
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

void f_d8e_a0_v(void)
{
	int L0;
	L0 = f_bb1_a0_i();
	f_b58_a4_v("samopal_ammo", 1, 1, 6);
	f_b58_a4_v("rifle_ammo", 1, 1, 8);
	f_b58_a4_v("revolver_ammo", 1, 1, 8);
	f_b58_a4_v("tvirin", 1, 1, 3);
	if (L0 >= 5) {
		f_b4d_a3_v("Samopal", 1, 1);
	}
}

int f_db9_a0_i(void)
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

void f_dca_a1_v(object a0)
{
	int L0;
	int L1;
	int L2;
	@GetVariable("tr_andrei", L0);
	if (L0 != f_bb1_a0_i()) {
		f_d8e_a0_v();
		@SetVariable("tr_andrei", f_bb1_a0_i());
	}
	@GetVariable("mt_andrei", L1);
	if (!L1) {
		t6{a0};
		@SetVariable("mt_andrei", 1);
	}
	if (f_bba_a1_b(2)) {
		if (1000 == t8{a0}) {
			if (!f_aef_a1_b(a0)) {
				return;
			}
			t1{a0};
			f_b26_a1_v(a0);
		}
		return;
	}
	if (f_bba_a1_b(5)) {
		if (1000 == t10{a0}) {
			if (!f_aef_a1_b(a0)) {
				return;
			}
			t1{a0};
			f_b26_a1_v(a0);
		}
		return;
	}
	if (f_bba_a1_b(3) || f_bba_a1_b(4) || f_bba_a1_b(6) || f_bba_a1_b(7) || f_bba_a1_b(8) || f_bba_a1_b(9) || f_bba_a1_b(10) || f_bba_a1_b(11)) {
		if (1000 == t2{a0}) {
			if (!f_aef_a1_b(a0)) {
				return;
			}
			t1{a0};
			f_b26_a1_v(a0);
		}
		return;
	}
	@GetVariable("d12_andrei", L2);
	if (f_bba_a1_b(12) && !L2) {
		t4{a0};
		@SetVariable("d12_andrei", 1);
		return;
	}
	t12{a0};
}

