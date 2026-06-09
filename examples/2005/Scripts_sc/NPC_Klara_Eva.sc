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
		} while (!f_a41_a0_b());
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
		f_a9b_a1_b(f_b48_a0_o());
		if (!f_a46_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_bb6_a0_i());
		L0->SetNPCDescription(f_bb4_a0_i());
		L0->SetPhoto(f_bb8_a0_s());
		L0->SetPhoto2(f_bba_a0_s());
		L0->SetPlayerName(f_cf3_a0_i());
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
		f_a8a_a1_v(a0);
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
			tv0->SetMessage(525477);
			tv0->ClearReplies();
			tv0->AddReply(529299, 30754, 30753);
			tv0->AddReply(525478, -1, 26834);
			break;
			return;
		}
		if (f_bbc_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b25_a1_v(tv2);
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
		if (!f_bbc_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b2c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b41_a0_v();
			if (a0 == 26833) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(525477);
				tv0->ClearReplies();
				tv0->AddReply(529299, 30754, 30753);
				tv0->AddReply(525478, -1, 26834);
				return;
			}
			if (a0 == 30754) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(529300);
				tv0->ClearReplies();
				tv0->AddReply(529301, -1, 30755);
				tv0->AddReply(529302, -1, 30756);
				return;
			}
			tv3 = true;
			if (f_bbc_a0_b()) {
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
		f_a9b_a1_b(f_b48_a0_o());
		if (!f_a46_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_bb6_a0_i());
		L0->SetNPCDescription(f_bb4_a0_i());
		L0->SetPhoto(f_bb8_a0_s());
		L0->SetPhoto2(f_bba_a0_s());
		L0->SetPlayerName(f_cf3_a0_i());
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
		f_a8a_a1_v(a0);
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
			f_197_a1_v("Neutral");
			tv0->SetMessage(525548);
			tv0->ClearReplies();
			if (f_c19_a1_b(tv1)) {
				tv0->AddReply(525549, 42898, 26905);
			}
			if (f_c25_a1_b(tv1) && f_c31_a1_b(tv1)) {
				tv0->AddReply(525578, 41036, 26925);
			}
			tv0->AddReply(539127, -1, 41057);
			tv0->AddReply(525558, -1, 26914);
			break;
			return;
		}
		if (f_bbc_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b25_a1_v(tv2);
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

	void f_197_a1_v(string a0)
	{
		if (!f_bbc_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b2c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b41_a0_v();
			if (a1 == 26913) {
				f_bbe_a2_v(tv1, tv0);
			}
			if (a1 == 41094) {
				f_bbe_a2_v(tv1, tv0);
			}
			if (a1 == 41086) {
				f_bbe_a2_v(tv1, tv0);
			}
			if (a1 == 41082) {
				f_bbe_a2_v(tv1, tv0);
			}
			if (a1 == 42902) {
				f_bbe_a2_v(tv1, tv0);
			}
			if (a1 == 26925) {
				f_bd5_a2_v(tv1, tv0);
			}
			if (a1 == 26929) {
				f_bdb_a2_v(tv1, tv0);
				f_c0d_a2_v(tv1, tv0);
				f_c03_a2_v(tv1, tv0);
			}
			if (a1 == 41060) {
				f_bdb_a2_v(tv1, tv0);
			}
			if (a1 == 41059) {
				f_c03_a2_v(tv1, tv0);
				f_c0d_a2_v(tv1, tv0);
			}
			if (a0 == 26904) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(525548);
				tv0->ClearReplies();
				if (f_c19_a1_b(tv1)) {
					tv0->AddReply(525549, 42898, 26905);
				}
				if (f_c25_a1_b(tv1) && f_c31_a1_b(tv1)) {
					tv0->AddReply(525578, 41036, 26925);
				}
				tv0->AddReply(539127, -1, 41057);
				tv0->AddReply(525558, -1, 26914);
				return;
			}
			if (a0 == 41036) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539108);
				tv0->ClearReplies();
				tv0->AddReply(539110, 41039, 41038);
				tv0->AddReply(539112, 41041, 41040);
				return;
			}
			if (a0 == 41041) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539113);
				tv0->ClearReplies();
				tv0->AddReply(525580, 41046, 26927);
				tv0->AddReply(539114, 26926, 41042);
				return;
			}
			if (a0 == 41046) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539117);
				tv0->ClearReplies();
				tv0->AddReply(539118, 41048, 41047);
				tv0->AddReply(539120, 41052, 41049);
				return;
			}
			if (a0 == 41052) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539123);
				tv0->ClearReplies();
				tv0->AddReply(539124, 26926, 41053);
				return;
			}
			if (a0 == 41048) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539119);
				tv0->ClearReplies();
				tv0->AddReply(539121, 41055, 41050);
				tv0->AddReply(539122, -1, 41051);
				return;
			}
			if (a0 == 41055) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539125);
				tv0->ClearReplies();
				tv0->AddReply(539126, -1, 41056);
				return;
			}
			if (a0 == 41039) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539111);
				tv0->ClearReplies();
				tv0->AddReply(539109, 26926, 41037);
				tv0->AddReply(539115, 41048, 41044);
				return;
			}
			if (a0 == 26926) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(525579);
				tv0->ClearReplies();
				tv0->AddReply(539116, 26928, 41045);
				tv0->AddReply(539128, -1, 41059);
				return;
			}
			if (a0 == 26928) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(525581);
				tv0->ClearReplies();
				tv0->AddReply(525582, -1, 26929);
				tv0->AddReply(539129, -1, 41060);
				return;
			}
			if (a0 == 42898) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(540840);
				tv0->ClearReplies();
				tv0->AddReply(540841, 41064, 42899);
				tv0->AddReply(540842, 42901, 42900);
				return;
			}
			if (a0 == 42901) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(540843);
				tv0->ClearReplies();
				tv0->AddReply(540844, -1, 42902);
				return;
			}
			if (a0 == 41064) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539133);
				tv0->ClearReplies();
				tv0->AddReply(539134, 41061, 41065);
				tv0->AddReply(539142, 41061, 41073);
				return;
			}
			if (a0 == 41061) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539130);
				tv0->ClearReplies();
				tv0->AddReply(539132, 41071, 41063);
				tv0->AddReply(539131, 41067, 41062);
				return;
			}
			if (a0 == 41067) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539136);
				tv0->ClearReplies();
				tv0->AddReply(539137, 41069, 41068);
				tv0->AddReply(539158, 41069, 41096);
				return;
			}
			if (a0 == 41071) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539140);
				tv0->ClearReplies();
				tv0->AddReply(539141, 41069, 41072);
				tv0->AddReply(539143, 41076, 41075);
				return;
			}
			if (a0 == 41076) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539144);
				tv0->ClearReplies();
				tv0->AddReply(539145, 41069, 41077);
				tv0->AddReply(539146, 41079, 41078);
				return;
			}
			if (a0 == 41079) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539147);
				tv0->ClearReplies();
				tv0->AddReply(539148, 41069, 41081);
				tv0->AddReply(539149, -1, 41082);
				return;
			}
			if (a0 == 41069) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539138);
				tv0->ClearReplies();
				tv0->AddReply(539150, 41085, 41084);
				tv0->AddReply(539152, -1, 41086);
				return;
			}
			if (a0 == 41085) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539151);
				tv0->ClearReplies();
				tv0->AddReply(539139, 26906, 41070);
				tv0->AddReply(539153, 26906, 41087);
				return;
			}
			if (a0 == 26906) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(525550);
				tv0->ClearReplies();
				tv0->AddReply(525551, 26908, 26907);
				tv0->AddReply(539154, 26908, 41089);
				return;
			}
			if (a0 == 26908) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(525552);
				tv0->ClearReplies();
				tv0->AddReply(525553, 41092, 26909);
				tv0->AddReply(539155, 41092, 41091);
				return;
			}
			if (a0 == 41092) {
				f_197_a1_v("Neutral");
				tv0->SetMessage(539156);
				tv0->ClearReplies();
				tv0->AddReply(525557, -1, 26913);
				tv0->AddReply(539157, -1, 41094);
				return;
			}
			tv3 = true;
			if (f_bbc_a0_b()) {
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
		f_a9b_a1_b(f_b48_a0_o());
		if (!f_a46_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_bb6_a0_i());
		L0->SetNPCDescription(f_bb4_a0_i());
		L0->SetPhoto(f_bb8_a0_s());
		L0->SetPhoto2(f_bba_a0_s());
		L0->SetPlayerName(f_cf3_a0_i());
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
		f_a8a_a1_v(a0);
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
			f_4e7_a1_v("Neutral");
			tv0->SetMessage(526037);
			tv0->ClearReplies();
			if (f_c3d_a1_b(tv1) && f_c49_a1_b(tv1)) {
				tv0->AddReply(526038, 30287, 27323);
			}
			if (f_c55_a1_b(tv1) && f_c61_a1_b(tv1)) {
				tv0->AddReply(526068, 27354, 27353);
			}
			tv0->AddReply(526043, -1, 27328);
			tv0->AddReply(528864, -1, 30286);
			break;
			return;
		}
		if (f_bbc_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b25_a1_v(tv2);
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

	void f_4e7_a1_v(string a0)
	{
		if (!f_bbc_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b2c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b41_a0_v();
			if (a1 == 27323) {
				f_be0_a2_v(tv1, tv0);
			}
			if (a1 == 27327) {
				f_bf3_a2_v(tv1, tv0);
			}
			if (a1 == 27353) {
				f_be6_a2_v(tv1, tv0);
			}
			if (a1 == 27362) {
				f_bec_a2_v(tv1, tv0);
				f_c13_a2_v(tv1, tv0);
			}
			if (a0 == 27322) {
				f_4e7_a1_v("Neutral");
				tv0->SetMessage(526037);
				tv0->ClearReplies();
				if (f_c3d_a1_b(tv1) && f_c49_a1_b(tv1)) {
					tv0->AddReply(526038, 30287, 27323);
				}
				if (f_c55_a1_b(tv1) && f_c61_a1_b(tv1)) {
					tv0->AddReply(526068, 27354, 27353);
				}
				tv0->AddReply(526043, -1, 27328);
				tv0->AddReply(528864, -1, 30286);
				return;
			}
			if (a0 == 27354) {
				f_4e7_a1_v("Neutral");
				tv0->SetMessage(526069);
				tv0->ClearReplies();
				tv0->AddReply(526070, 27356, 27355);
				return;
			}
			if (a0 == 27356) {
				f_4e7_a1_v("Neutral");
				tv0->SetMessage(526071);
				tv0->ClearReplies();
				tv0->AddReply(526072, 27359, 27357);
				tv0->AddReply(526073, 27359, 27358);
				return;
			}
			if (a0 == 27359) {
				f_4e7_a1_v("Neutral");
				tv0->SetMessage(526074);
				tv0->ClearReplies();
				tv0->AddReply(526075, 27361, 27360);
				return;
			}
			if (a0 == 27361) {
				f_4e7_a1_v("Neutral");
				tv0->SetMessage(526076);
				tv0->ClearReplies();
				tv0->AddReply(526077, -1, 27362);
				return;
			}
			if (a0 == 30287) {
				f_4e7_a1_v("Neutral");
				tv0->SetMessage(528865);
				tv0->ClearReplies();
				tv0->AddReply(528866, 27324, 30288);
				tv0->AddReply(528867, 27324, 30289);
				return;
			}
			if (a0 == 27324) {
				f_4e7_a1_v("Neutral");
				tv0->SetMessage(526039);
				tv0->ClearReplies();
				tv0->AddReply(526040, 27326, 27325);
				return;
			}
			if (a0 == 27326) {
				f_4e7_a1_v("Neutral");
				tv0->SetMessage(526041);
				tv0->ClearReplies();
				tv0->AddReply(528868, 30292, 30291);
				return;
			}
			if (a0 == 30292) {
				f_4e7_a1_v("Neutral");
				tv0->SetMessage(528869);
				tv0->ClearReplies();
				tv0->AddReply(526042, -1, 27327);
				return;
			}
			tv3 = true;
			if (f_bbc_a0_b()) {
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
		f_a9b_a1_b(f_b48_a0_o());
		if (!f_a46_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_bb6_a0_i());
		L0->SetNPCDescription(f_bb4_a0_i());
		L0->SetPhoto(f_bb8_a0_s());
		L0->SetPhoto2(f_bba_a0_s());
		L0->SetPlayerName(f_cf3_a0_i());
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
		f_a8a_a1_v(a0);
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
			f_6a5_a1_v("Neutral");
			tv0->SetMessage(527184);
			tv0->ClearReplies();
			if (f_c6d_a1_b(tv1) && f_c79_a1_b(tv1)) {
				tv0->AddReply(527185, 28494, 28493);
			}
			tv0->AddReply(527188, -1, 28496);
			break;
			return;
		}
		if (f_bbc_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b25_a1_v(tv2);
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

	void f_6a5_a1_v(string a0)
	{
		if (!f_bbc_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b2c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b41_a0_v();
			if (a1 == 28493) {
				f_bf8_a2_v(tv1, tv0);
			}
			if (a1 == 28602) {
				f_bfe_a2_v(tv1, tv0);
			}
			if (a1 == 28603) {
				f_bfe_a2_v(tv1, tv0);
			}
			if (a0 == 28492) {
				f_6a5_a1_v("Neutral");
				tv0->SetMessage(527184);
				tv0->ClearReplies();
				if (f_c6d_a1_b(tv1) && f_c79_a1_b(tv1)) {
					tv0->AddReply(527185, 28494, 28493);
				}
				tv0->AddReply(527188, -1, 28496);
				return;
			}
			if (a0 == 28494) {
				f_6a5_a1_v("Neutral");
				tv0->SetMessage(527186);
				tv0->ClearReplies();
				tv0->AddReply(527187, 28597, 28495);
				return;
			}
			if (a0 == 28597) {
				f_6a5_a1_v("Neutral");
				tv0->SetMessage(527284);
				tv0->ClearReplies();
				tv0->AddReply(527285, 28600, 28598);
				tv0->AddReply(527286, 28600, 28599);
				return;
			}
			if (a0 == 28600) {
				f_6a5_a1_v("Neutral");
				tv0->SetMessage(527287);
				tv0->ClearReplies();
				tv0->AddReply(527288, -1, 28602);
				tv0->AddReply(527289, -1, 28603);
				return;
			}
			tv3 = true;
			if (f_bbc_a0_b()) {
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
		f_a9b_a1_b(f_b48_a0_o());
		if (!f_a46_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_bb6_a0_i());
		L0->SetNPCDescription(f_bb4_a0_i());
		L0->SetPhoto(f_bb8_a0_s());
		L0->SetPhoto2(f_bba_a0_s());
		L0->SetPlayerName(f_cf3_a0_i());
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
		f_a8a_a1_v(a0);
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
			f_7db_a1_v("Neutral");
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_bbc_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b25_a1_v(tv2);
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

	void f_7db_a1_v(string a0)
	{
		if (!f_bbc_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b2c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b41_a0_v();
			if (a0 == 36906) {
				f_7db_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_7db_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_7db_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_bbc_a0_b()) {
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
		f_a9b_a1_b(f_b48_a0_o());
		if (!f_a46_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_bb6_a0_i());
		L0->SetNPCDescription(f_bb4_a0_i());
		L0->SetPhoto(f_bb8_a0_s());
		L0->SetPhoto2(f_bba_a0_s());
		L0->SetPlayerName(f_cf3_a0_i());
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
		f_a8a_a1_v(a0);
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
			f_8d9_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_bbc_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_b25_a1_v(tv2);
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

	void f_8d9_a1_v(string a0)
	{
		if (!f_bbc_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b2c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b41_a0_v();
			if (a0 == 42548) {
				f_8d9_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_bbc_a0_b()) {
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
		f_91d_a0_v();
	}

	void f_91d_a0_v(void)
	{
		if (!f_a41_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_9d3_a0_v();
		}
	}

	bool f_931_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_a38_a1_b(L0);
	}

	void f_940_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_945_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_a1f_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_95b_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_964_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_964_a0_v();
			if (f_a41_a0_b() && f_945_a0_b()) {
				if (f_931_a0_b()) {
					f_ad5_a1_b(f_b48_a0_o());
				}
			} else {
				f_940_a0_v();
				f_95b_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_a1a_a0_v();
		f_964_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_964_a0_v();
		f_b25_a1_v("Neutral");
		f_95b_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_95b_a0_v();
		} else {
			f_b25_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_a1a_a0_v();
			f_a38_a1_b(a0);
			enable OnUse;
			f_d04_a1_v(a0);
			f_b25_a1_v("Neutral");
			f_964_a0_v();
			f_95b_a0_v();
		}
	}
}

void f_9d3_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_a41_a0_b()) {
		return;
	}
	L0 = f_ba3_a0_i();
	for (L1 = 0; L1 < 5 && f_a41_a0_b(); L1++) {
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
			@PlayAnimation("all", f_b9c_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_a18_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_a18_a0_b(void)
{
	return true;
}

void f_a1a_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_a1f_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_a27_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_a2e_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_a38_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_a2e_a1_b(L0);
}

bool f_a41_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_a46_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_b4e_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_bbc_a0_b()) {
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

void f_a8a_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_bbc_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_a9b_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_ad5_a1_b(a0)) {
			if (!f_afa_a1_b(a0)) {
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
		if (!f_afa_a1_b(a0)) {
			if (!f_ad5_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_ad5_a1_b(object a0)
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
	return f_b32_a1_b(L4);
}

bool f_afa_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_b8d_a0_i() + "m";
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
	return f_b32_a1_b(L4);
}

void f_b25_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_b2c_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_b32_a1_b(string a0)
{
	if (f_bbc_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_b41_a0_v(void)
{
	if (f_bbc_a0_b()) {
		@lshStopSpeech();
	}
}

object f_b48_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_b4e_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_b58_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_b5d_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_b69_a2_v(object a0, int a1)
{
	f_a27_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_b5d_a2_v(L0, a1);
	}
}

bool f_b7c_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_b88_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_b8d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_b96_a1_b(int a0)
{
	return f_b8d_a0_i() == a0;
}

string f_b9c_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_ba3_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_b9c_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_bb4_a0_i(void)
{
	return 515533;
}

int f_bb6_a0_i(void)
{
	return 502858;
}

string f_bb8_a0_s(void)
{
	return "ui/NPC_Eva.png";
}

string f_bba_a0_s(void)
{
	return "ui/NPC_Eva_b.png";
}

bool f_bbc_a0_b(void)
{
	return true;
}

void f_bbe_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k3q02", 3);
	L0 = f_ce2_a0_o();
	L0->AddMark("k3q02EvaGotoKaterina", "pt_map_katerina", 0, 525574, f_b88_a0_f());
	f_c92_a0_v();
}

void f_bd5_a2_v(object a0, object a1)
{
	@SetVariable("ook3Eva1", 1);
}

void f_bdb_a2_v(object a0, object a1)
{
	f_c9f_a0_v();
}

void f_be0_a2_v(object a0, object a1)
{
	@SetVariable("ook6Eva1", 1);
}

void f_be6_a2_v(object a0, object a1)
{
	@SetVariable("ook6Eva2", 1);
}

void f_bec_a2_v(object a0, object a1)
{
	f_b7c_a2_b("quest_k6_01", "unlock_eva");
}

void f_bf3_a2_v(object a0, object a1)
{
	f_cac_a0_v();
}

void f_bf8_a2_v(object a0, object a1)
{
	@SetVariable("ook11Eva1", 1);
}

void f_bfe_a2_v(object a0, object a1)
{
	f_c85_a0_v();
}

void f_c03_a2_v(object a0, object a1)
{
	@Trace("money1000 is given");
	f_b69_a2_v(a0, 1000);
}

void f_c0d_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_c13_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

bool f_c19_a1_b(object a0)
{
	if (f_b58_a1_i("k3q02") == 2) {
		return true;
	}
	return false;
}

bool f_c25_a1_b(object a0)
{
	if (f_b58_a1_i("k3q03") == 1) {
		return true;
	}
	return false;
}

bool f_c31_a1_b(object a0)
{
	if (f_b58_a1_i("ook3Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_c3d_a1_b(object a0)
{
	if (f_b58_a1_i("k6q01") == 1) {
		return true;
	}
	return false;
}

bool f_c49_a1_b(object a0)
{
	if (f_b58_a1_i("ook6Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_c55_a1_b(object a0)
{
	if (f_b58_a1_i("k6q01") == 2) {
		return true;
	}
	return false;
}

bool f_c61_a1_b(object a0)
{
	if (f_b58_a1_i("ook6Eva2") == 0) {
		return true;
	}
	return false;
}

bool f_c6d_a1_b(object a0)
{
	if (f_b58_a1_i("k11q01") == 1) {
		return true;
	}
	return false;
}

bool f_c79_a1_b(object a0)
{
	if (f_b58_a1_i("ook11Eva1") == 0) {
		return true;
	}
	return false;
}

void f_c85_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 482, 1, 528049);
	f_cc6_a2_b(L0, 480);
}

void f_c92_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 347, 2, 525569);
	f_cc6_a2_b(L0, 344);
}

void f_c9f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 352, 2, 525618);
	f_cc6_a2_b(L0, 350);
}

void f_cac_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 410, 1, 526111);
	f_cc6_a2_b(L0, 408);
}

object f_cb9_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_cc6_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_cb9_a0_o();
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

object f_ce2_a0_o(void)
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

int f_cf3_a0_i(void)
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

void f_d04_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_eva", L0);
	if (!L0) {
		t1{a0};
		@SetVariable("mt_eva", 1);
	}
	if (f_b96_a1_b(3)) {
		t3{a0};
		return;
	}
	if (f_b96_a1_b(6)) {
		t5{a0};
		return;
	}
	if (f_b96_a1_b(11)) {
		t7{a0};
		return;
	}
	if (f_b96_a1_b(12)) {
		t9{a0};
		return;
	}
	t11{a0};
}

