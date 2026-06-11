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
		f_12a0_a0_v();
		if (!f_eb7_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_ef8_a1_v("Neutral");
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
		f_12a4_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_eab_a1_b(a0);
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
		if (!f_ebc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_f6b_a0_i());
		L0->SetPhoto(f_f6d_a0_s());
		L0->SetPlayerName(f_124f_a0_i());
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
		f_ef4_a1_v(a0);
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
			f_ff6_a2_v(tv1, tv0);
			f_af_a1_v("Neutral");
			tv0->SetMessage(170);
			tv0->ClearReplies();
			tv0->AddReply(171, 210, 206);
			tv0->AddReply(172, 209, 207);
			break;
			return;
		}
		if (f_f6f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ef8_a1_v(tv2);
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
		if (!f_f6f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_ef8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_f0a_a0_v();
			if (a0 == 205) {
				f_ff6_a2_v(tv1, tv0);
				f_af_a1_v("Neutral");
				tv0->SetMessage(170);
				tv0->ClearReplies();
				tv0->AddReply(171, 210, 206);
				tv0->AddReply(172, 209, 207);
				return;
			}
			if (a0 == 209) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(174);
				tv0->ClearReplies();
				tv0->AddReply(178, 218, 213);
				return;
			}
			if (a0 == 210) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(175);
				tv0->ClearReplies();
				tv0->AddReply(176, 215, 211);
				tv0->AddReply(177, 214, 212);
				return;
			}
			if (a0 == 214) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(179);
				tv0->ClearReplies();
				tv0->AddReply(181, 218, 216);
				return;
			}
			if (a0 == 215) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(180);
				tv0->ClearReplies();
				tv0->AddReply(182, 218, 217);
				return;
			}
			if (a0 == 218) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(183);
				tv0->ClearReplies();
				tv0->AddReply(184, -1, 221);
				tv0->AddReply(185, -1, 222);
				return;
			}
			tv3 = true;
			if (f_f6f_a0_b()) {
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
		if (!f_ebc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_f6b_a0_i());
		L0->SetPhoto(f_f6d_a0_s());
		L0->SetPlayerName(f_124f_a0_i());
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
		f_ef4_a1_v(a0);
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
			f_270_a1_v("Neutral");
			tv0->SetMessage(8318);
			tv0->ClearReplies();
			if (f_10cc_a1_b(tv1) && f_106c_a1_b(tv1)) {
				tv0->AddReply(8319, 6356, 9142);
			}
			if (f_1138_a1_b(tv1) && f_10d8_a1_b(tv1) || f_1142_a1_b(tv1) && f_10d8_a1_b(tv1)) {
				tv0->AddReply(8320, 6369, 9143);
			}
			if (f_11dc_a1_b(tv1) && f_10e4_a1_b(tv1)) {
				tv0->AddReply(8322, 6376, 9145);
			}
			if (f_117c_a1_b(tv1) && f_10f0_a1_b(tv1)) {
				tv0->AddReply(8324, 9417, 9147);
			}
			if (f_1170_a1_b(tv1) && f_10fc_a1_b(tv1)) {
				tv0->AddReply(8327, 9169, 9150);
			}
			if (f_11c4_a1_b(tv1) && f_1108_a1_b(tv1)) {
				tv0->AddReply(8329, 9170, 9152);
			}
			if (f_112c_a1_b(tv1) && f_1114_a1_b(tv1)) {
				tv0->AddReply(8334, 9171, 9157);
			}
			if (f_1188_a1_b(tv1) && f_1120_a1_b(tv1)) {
				tv0->AddReply(8337, 9172, 9160);
			}
			tv0->AddReply(8724, -1, 9561);
			break;
			return;
		}
		if (f_f6f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ef8_a1_v(tv2);
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

	void f_270_a1_v(string a0)
	{
		if (!f_f6f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_ef8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_f0a_a0_v();
			if (a1 == 6364) {
				f_fc6_a2_v(tv1, tv0);
			}
			if (a1 == 6361) {
				f_fc6_a2_v(tv1, tv0);
			}
			if (a1 == 6365) {
				f_fc6_a2_v(tv1, tv0);
			}
			if (a1 == 6372) {
				f_fcc_a2_v(tv1, tv0);
			}
			if (a1 == 6373) {
				f_fcc_a2_v(tv1, tv0);
			}
			if (a1 == 6383) {
				f_fd2_a2_v(tv1, tv0);
			}
			if (a1 == 6384) {
				f_fd2_a2_v(tv1, tv0);
			}
			if (a1 == 6385) {
				f_fd2_a2_v(tv1, tv0);
			}
			if (a1 == 9428) {
				f_fd8_a2_v(tv1, tv0);
			}
			if (a1 == 9429) {
				f_fd8_a2_v(tv1, tv0);
			}
			if (a1 == 9434) {
				f_fde_a2_v(tv1, tv0);
			}
			if (a1 == 9435) {
				f_fde_a2_v(tv1, tv0);
			}
			if (a1 == 9440) {
				f_fe4_a2_v(tv1, tv0);
			}
			if (a1 == 9447) {
				f_fea_a2_v(tv1, tv0);
			}
			if (a1 == 9450) {
				f_ff0_a2_v(tv1, tv0);
			}
			if (a0 == 9141) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8318);
				tv0->ClearReplies();
				if (f_10cc_a1_b(tv1) && f_106c_a1_b(tv1)) {
					tv0->AddReply(8319, 6356, 9142);
				}
				if (f_1138_a1_b(tv1) && f_10d8_a1_b(tv1) || f_1142_a1_b(tv1) && f_10d8_a1_b(tv1)) {
					tv0->AddReply(8320, 6369, 9143);
				}
				if (f_11dc_a1_b(tv1) && f_10e4_a1_b(tv1)) {
					tv0->AddReply(8322, 6376, 9145);
				}
				if (f_117c_a1_b(tv1) && f_10f0_a1_b(tv1)) {
					tv0->AddReply(8324, 9417, 9147);
				}
				if (f_1170_a1_b(tv1) && f_10fc_a1_b(tv1)) {
					tv0->AddReply(8327, 9169, 9150);
				}
				if (f_11c4_a1_b(tv1) && f_1108_a1_b(tv1)) {
					tv0->AddReply(8329, 9170, 9152);
				}
				if (f_112c_a1_b(tv1) && f_1114_a1_b(tv1)) {
					tv0->AddReply(8334, 9171, 9157);
				}
				if (f_1188_a1_b(tv1) && f_1120_a1_b(tv1)) {
					tv0->AddReply(8337, 9172, 9160);
				}
				tv0->AddReply(8724, -1, 9561);
				return;
			}
			if (a0 == 9172) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8349);
				tv0->ClearReplies();
				tv0->AddReply(8601, 9449, 9448);
				return;
			}
			if (a0 == 9449) {
				f_f77_a2_v(tv1, tv0);
				f_270_a1_v("Neutral");
				tv0->SetMessage(8602);
				tv0->ClearReplies();
				tv0->AddReply(8603, -1, 9450);
				return;
			}
			if (a0 == 9171) {
				f_1002_a2_v(tv1, tv0);
				f_270_a1_v("Neutral");
				tv0->SetMessage(8348);
				tv0->ClearReplies();
				tv0->AddReply(8595, 9443, 9441);
				tv0->AddReply(8596, 9444, 9442);
				return;
			}
			if (a0 == 9444) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8598);
				tv0->ClearReplies();
				tv0->AddReply(8599, 9443, 9445);
				return;
			}
			if (a0 == 9443) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8597);
				tv0->ClearReplies();
				tv0->AddReply(8600, -1, 9447);
				return;
			}
			if (a0 == 9170) {
				f_1002_a2_v(tv1, tv0);
				f_270_a1_v("Neutral");
				tv0->SetMessage(8347);
				tv0->ClearReplies();
				tv0->AddReply(8591, 9437, 9436);
				tv0->AddReply(8593, 9437, 9438);
				return;
			}
			if (a0 == 9437) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8592);
				tv0->ClearReplies();
				tv0->AddReply(8594, -1, 9440);
				return;
			}
			if (a0 == 9169) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8346);
				tv0->ClearReplies();
				tv0->AddReply(8585, 9431, 9430);
				return;
			}
			if (a0 == 9431) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8586);
				tv0->ClearReplies();
				tv0->AddReply(8587, 9433, 9432);
				return;
			}
			if (a0 == 9433) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8588);
				tv0->ClearReplies();
				tv0->AddReply(8589, -1, 9434);
				tv0->AddReply(8590, -1, 9435);
				return;
			}
			if (a0 == 9417) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8573);
				tv0->ClearReplies();
				if (!f_11e8_a1_b(tv1)) {
					tv0->AddReply(8574, 9419, 9418);
				}
				tv0->AddReply(8576, 9421, 9420);
				return;
			}
			if (a0 == 9421) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8577);
				tv0->ClearReplies();
				tv0->AddReply(8578, 9424, 9422);
				return;
			}
			if (a0 == 9419) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8575);
				tv0->ClearReplies();
				tv0->AddReply(8579, 9424, 9423);
				return;
			}
			if (a0 == 9424) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8580);
				tv0->ClearReplies();
				tv0->AddReply(8581, 9427, 9426);
				return;
			}
			if (a0 == 9427) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(8582);
				tv0->ClearReplies();
				tv0->AddReply(8583, -1, 9428);
				tv0->AddReply(8584, -1, 9429);
				return;
			}
			if (a0 == 6376) {
				f_1066_a2_v(tv1, tv0);
				f_ffc_a2_v(tv1, tv0);
				f_270_a1_v("Neutral");
				tv0->SetMessage(5788);
				tv0->ClearReplies();
				tv0->AddReply(5789, 6378, 6377);
				tv0->AddReply(5798, 6378, 6386);
				return;
			}
			if (a0 == 6378) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(5790);
				tv0->ClearReplies();
				tv0->AddReply(5791, 6380, 6379);
				tv0->AddReply(5797, -1, 6385);
				return;
			}
			if (a0 == 6380) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(5792);
				tv0->ClearReplies();
				tv0->AddReply(5793, 6382, 6381);
				tv0->AddReply(5796, -1, 6384);
				return;
			}
			if (a0 == 6382) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(5794);
				tv0->ClearReplies();
				tv0->AddReply(5795, -1, 6383);
				return;
			}
			if (a0 == 6369) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(5782);
				tv0->ClearReplies();
				tv0->AddReply(5783, 6371, 6370);
				tv0->AddReply(5787, 6371, 6374);
				return;
			}
			if (a0 == 6371) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(5784);
				tv0->ClearReplies();
				tv0->AddReply(5785, -1, 6372);
				tv0->AddReply(5786, -1, 6373);
				return;
			}
			if (a0 == 6356) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(5771);
				tv0->ClearReplies();
				tv0->AddReply(5772, 6358, 6357);
				tv0->AddReply(5781, 6358, 6367);
				return;
			}
			if (a0 == 6358) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(5773);
				tv0->ClearReplies();
				tv0->AddReply(5774, 6360, 6359);
				tv0->AddReply(5780, 6360, 6365);
				return;
			}
			if (a0 == 6360) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(5775);
				tv0->ClearReplies();
				tv0->AddReply(5777, 6363, 6362);
				tv0->AddReply(5776, -1, 6361);
				return;
			}
			if (a0 == 6363) {
				f_270_a1_v("Neutral");
				tv0->SetMessage(5778);
				tv0->ClearReplies();
				tv0->AddReply(5779, -1, 6364);
				return;
			}
			tv3 = true;
			if (f_f6f_a0_b()) {
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
		if (!f_ebc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_f6b_a0_i());
		L0->SetPhoto(f_f6d_a0_s());
		L0->SetPlayerName(f_124f_a0_i());
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
		f_ef4_a1_v(a0);
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
			f_6c8_a1_v("Neutral");
			tv0->SetMessage(6877);
			tv0->ClearReplies();
			if (f_1078_a1_b(tv1) && f_10a8_a1_b(tv1)) {
				tv0->AddReply(6878, 7585, 7584);
			}
			if (f_1084_a1_b(tv1) && f_10c0_a1_b(tv1)) {
				tv0->AddReply(7431, 8203, 8202);
			}
			if (f_1090_a1_b(tv1) && f_109c_a1_b(tv1)) {
				tv0->AddReply(6884, 7591, 7590);
			}
			tv0->AddReply(7529, -1, 8311);
			break;
			f_6c8_a1_v("Neutral");
			tv0->SetMessage(9408);
			tv0->ClearReplies();
			tv0->AddReply(9409, 10339, 10338);
			tv0->AddReply(9418, 10339, 10348);
			tv0->AddReply(9419, 10351, 10350);
			break;
			f_6c8_a1_v("Neutral");
			tv0->SetMessage(9422);
			tv0->ClearReplies();
			tv0->AddReply(9423, 10356, 10355);
			tv0->AddReply(9432, 10366, 10365);
			tv0->AddReply(9435, 10370, 10369);
			break;
			return;
		}
		if (f_f6f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ef8_a1_v(tv2);
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

	void f_6c8_a1_v(string a0)
	{
		if (!f_f6f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_ef8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_f0a_a0_v();
			if (a1 == 8221) {
				f_f7d_a2_v(tv1, tv0);
				f_f8f_a2_v(tv1, tv0);
			}
			if (a1 == 8222) {
				f_f7d_a2_v(tv1, tv0);
			}
			if (a1 == 8210) {
				f_f83_a2_v(tv1, tv0);
				f_fa6_a2_v(tv1, tv0);
			}
			if (a1 == 8201) {
				f_f89_a2_v(tv1, tv0);
			}
			if (a0 == 7583) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(6877);
				tv0->ClearReplies();
				if (f_1078_a1_b(tv1) && f_10a8_a1_b(tv1)) {
					tv0->AddReply(6878, 7585, 7584);
				}
				if (f_1084_a1_b(tv1) && f_10c0_a1_b(tv1)) {
					tv0->AddReply(7431, 8203, 8202);
				}
				if (f_1090_a1_b(tv1) && f_109c_a1_b(tv1)) {
					tv0->AddReply(6884, 7591, 7590);
				}
				tv0->AddReply(7529, -1, 8311);
				return;
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(9408);
				tv0->ClearReplies();
				tv0->AddReply(9409, 10339, 10338);
				tv0->AddReply(9418, 10339, 10348);
				tv0->AddReply(9419, 10351, 10350);
				return;
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(9422);
				tv0->ClearReplies();
				tv0->AddReply(9423, 10356, 10355);
				tv0->AddReply(9432, 10366, 10365);
				tv0->AddReply(9435, 10370, 10369);
				return;
			}
			if (a0 == 10370) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(9436);
				tv0->ClearReplies();
				tv0->AddReply(9437, 10356, 10371);
				return;
			}
			if (a0 == 10366) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(9433);
				tv0->ClearReplies();
				tv0->AddReply(9434, 10356, 10367);
				return;
			}
			if (a0 == 10356) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(9424);
				tv0->ClearReplies();
				tv0->AddReply(9425, 10358, 10357);
				tv0->AddReply(9429, 10362, 10361);
				return;
			}
			if (a0 == 10362) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(9430);
				tv0->ClearReplies();
				tv0->AddReply(9431, 10358, 10363);
				return;
			}
			if (a0 == 10358) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(9426);
				tv0->ClearReplies();
				tv0->AddReply(9427, -1, 10359);
				tv0->AddReply(9428, -1, 10360);
				return;
			}
			if (a0 == 10351) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(9420);
				tv0->ClearReplies();
				tv0->AddReply(9421, 10339, 10352);
				return;
			}
			if (a0 == 10339) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(9410);
				tv0->ClearReplies();
				tv0->AddReply(9411, 10341, 10340);
				tv0->AddReply(9417, -1, 10347);
				return;
			}
			if (a0 == 10341) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(9412);
				tv0->ClearReplies();
				tv0->AddReply(9413, 10343, 10342);
				tv0->AddReply(9416, 10343, 10345);
				return;
			}
			if (a0 == 10343) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(9414);
				tv0->ClearReplies();
				tv0->AddReply(9415, -1, 10344);
				return;
			}
			if (a0 == 7591) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(6885);
				tv0->ClearReplies();
				tv0->AddReply(7430, -1, 8201);
				return;
			}
			if (a0 == 8203) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(7432);
				tv0->ClearReplies();
				tv0->AddReply(7433, 8205, 8204);
				return;
			}
			if (a0 == 8205) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(7434);
				tv0->ClearReplies();
				tv0->AddReply(6882, 7589, 7588);
				return;
			}
			if (a0 == 7589) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(6883);
				tv0->ClearReplies();
				tv0->AddReply(7435, 8207, 8206);
				tv0->AddReply(7440, 8207, 8211);
				return;
			}
			if (a0 == 8207) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(7436);
				tv0->ClearReplies();
				tv0->AddReply(7437, 8209, 8208);
				tv0->AddReply(7441, 8209, 8213);
				return;
			}
			if (a0 == 8209) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(7438);
				tv0->ClearReplies();
				tv0->AddReply(7439, -1, 8210);
				return;
			}
			if (a0 == 7585) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(6879);
				tv0->ClearReplies();
				tv0->AddReply(6880, 7587, 7586);
				tv0->AddReply(7450, 8216, 8223);
				return;
			}
			if (a0 == 7587) {
				f_f77_a2_v(tv1, tv0);
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(6881);
				tv0->ClearReplies();
				tv0->AddReply(7442, 8216, 8215);
				tv0->AddReply(7451, 8226, 8225);
				return;
			}
			if (a0 == 8226) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(7452);
				tv0->ClearReplies();
				tv0->AddReply(7453, 8216, 8227);
				return;
			}
			if (a0 == 8216) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(7443);
				tv0->ClearReplies();
				tv0->AddReply(7444, 8218, 8217);
				return;
			}
			if (a0 == 8218) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(7445);
				tv0->ClearReplies();
				tv0->AddReply(7446, 8220, 8219);
				if (f_10b4_a1_b(tv1)) {
					tv0->AddReply(7449, -1, 8222);
				}
				return;
			}
			if (a0 == 8220) {
				f_6c8_a1_v("Neutral");
				tv0->SetMessage(7447);
				tv0->ClearReplies();
				tv0->AddReply(7448, -1, 8221);
				return;
			}
			tv3 = true;
			if (f_f6f_a0_b()) {
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
		if (!f_ebc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_f6b_a0_i());
		L0->SetPhoto(f_f6d_a0_s());
		L0->SetPlayerName(f_124f_a0_i());
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
		f_ef4_a1_v(a0);
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
			if (f_11d0_a1_b(tv1)) {
				f_1060_a2_v(tv1, tv0);
				f_9d5_a1_v("Neutral");
				tv0->SetMessage(10030);
				tv0->ClearReplies();
				tv0->AddReply(10031, 11054, 11053);
				tv0->AddReply(10039, 11063, 11062);
				break;
			}
			f_9d5_a1_v("Neutral");
			tv0->SetMessage(15308);
			tv0->ClearReplies();
			tv0->AddReply(15309, -1, 16547);
			break;
			return;
		}
		if (f_f6f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ef8_a1_v(tv2);
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

	void f_9d5_a1_v(string a0)
	{
		if (!f_f6f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_ef8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_f0a_a0_v();
			if (a0 == 11052) {
				if (f_11d0_a1_b(tv1)) {
					f_1060_a2_v(tv1, tv0);
					f_9d5_a1_v("Neutral");
					tv0->SetMessage(10030);
					tv0->ClearReplies();
					tv0->AddReply(10031, 11054, 11053);
					tv0->AddReply(10039, 11063, 11062);
					return;
				}
				f_9d5_a1_v("Neutral");
				tv0->SetMessage(15308);
				tv0->ClearReplies();
				tv0->AddReply(15309, -1, 16547);
				return;
			}
			if (a0 == 11063) {
				f_9d5_a1_v("Neutral");
				tv0->SetMessage(10040);
				tv0->ClearReplies();
				tv0->AddReply(10041, -1, 11064);
				tv0->AddReply(10042, 11056, 11065);
				return;
			}
			if (a0 == 11054) {
				f_9d5_a1_v("Neutral");
				tv0->SetMessage(10032);
				tv0->ClearReplies();
				tv0->AddReply(10033, 11056, 11055);
				tv0->AddReply(10038, 11056, 11060);
				return;
			}
			if (a0 == 11056) {
				f_9d5_a1_v("Neutral");
				tv0->SetMessage(10034);
				tv0->ClearReplies();
				tv0->AddReply(10035, -1, 11057);
				tv0->AddReply(10036, -1, 11058);
				tv0->AddReply(10037, -1, 11059);
				return;
			}
			tv3 = true;
			if (f_f6f_a0_b()) {
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
		if (!f_ebc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_f6b_a0_i());
		L0->SetPhoto(f_f6d_a0_s());
		L0->SetPlayerName(f_124f_a0_i());
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
		f_ef4_a1_v(a0);
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
			f_b17_a1_v("Neutral");
			tv0->SetMessage(13353);
			tv0->ClearReplies();
			if (f_1158_a1_b(tv1) && f_114c_a1_b(tv1)) {
				tv0->AddReply(13355, 14598, 14587);
			}
			if (!f_1158_a1_b(tv1) && f_114c_a1_b(tv1)) {
				tv0->AddReply(13374, 14607, 14606);
			}
			if (f_1164_a1_b(tv1)) {
				tv0->AddReply(13390, 14625, 14624);
			}
			tv0->AddReply(13354, -1, 14586);
			break;
			return;
		}
		if (f_f6f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ef8_a1_v(tv2);
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

	void f_b17_a1_v(string a0)
	{
		if (!f_f6f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_ef8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_f0a_a0_v();
			if (a1 == 14602) {
				f_1043_a2_v(tv1, tv0);
				f_1008_a2_v(tv1, tv0);
			}
			if (a1 == 14605) {
				f_1043_a2_v(tv1, tv0);
			}
			if (a1 == 14608) {
				f_1008_a2_v(tv1, tv0);
			}
			if (a1 == 14626) {
				f_1011_a2_v(tv1, tv0);
				f_1017_a2_v(tv1, tv0);
				f_1049_a2_v(tv1, tv0);
				f_f71_a2_v(tv1, tv0);
			}
			if (a0 == 14585) {
				f_b17_a1_v("Neutral");
				tv0->SetMessage(13353);
				tv0->ClearReplies();
				if (f_1158_a1_b(tv1) && f_114c_a1_b(tv1)) {
					tv0->AddReply(13355, 14598, 14587);
				}
				if (!f_1158_a1_b(tv1) && f_114c_a1_b(tv1)) {
					tv0->AddReply(13374, 14607, 14606);
				}
				if (f_1164_a1_b(tv1)) {
					tv0->AddReply(13390, 14625, 14624);
				}
				tv0->AddReply(13354, -1, 14586);
				return;
			}
			if (a0 == 14625) {
				f_b17_a1_v("Neutral");
				tv0->SetMessage(13391);
				tv0->ClearReplies();
				tv0->AddReply(13392, -1, 14626);
				return;
			}
			if (a0 == 14607) {
				f_b17_a1_v("Neutral");
				tv0->SetMessage(13375);
				tv0->ClearReplies();
				tv0->AddReply(13376, -1, 14608);
				return;
			}
			if (a0 == 14598) {
				f_b17_a1_v("Neutral");
				tv0->SetMessage(13366);
				tv0->ClearReplies();
				tv0->AddReply(13367, 14588, 14599);
				return;
			}
			if (a0 == 14588) {
				f_b17_a1_v("Neutral");
				tv0->SetMessage(13356);
				tv0->ClearReplies();
				tv0->AddReply(13357, 14590, 14589);
				return;
			}
			if (a0 == 14590) {
				f_b17_a1_v("Neutral");
				tv0->SetMessage(13358);
				tv0->ClearReplies();
				tv0->AddReply(13359, 14592, 14591);
				return;
			}
			if (a0 == 14592) {
				f_b17_a1_v("Neutral");
				tv0->SetMessage(13360);
				tv0->ClearReplies();
				tv0->AddReply(13361, 14594, 14593);
				return;
			}
			if (a0 == 14594) {
				f_b17_a1_v("Neutral");
				tv0->SetMessage(13362);
				tv0->ClearReplies();
				tv0->AddReply(13364, 14597, 14596);
				tv0->AddReply(13363, -1, 14595);
				return;
			}
			if (a0 == 14597) {
				f_b17_a1_v("Neutral");
				tv0->SetMessage(13365);
				tv0->ClearReplies();
				tv0->AddReply(13368, 14601, 14600);
				tv0->AddReply(13371, 14604, 14603);
				return;
			}
			if (a0 == 14604) {
				f_b17_a1_v("Neutral");
				tv0->SetMessage(13372);
				tv0->ClearReplies();
				tv0->AddReply(13373, -1, 14605);
				return;
			}
			if (a0 == 14601) {
				f_b17_a1_v("Neutral");
				tv0->SetMessage(13369);
				tv0->ClearReplies();
				tv0->AddReply(13370, -1, 14602);
				return;
			}
			tv3 = true;
			if (f_f6f_a0_b()) {
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
		if (!f_ebc_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_f6b_a0_i());
		L0->SetPhoto(f_f6d_a0_s());
		L0->SetPlayerName(f_124f_a0_i());
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
		f_ef4_a1_v(a0);
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
			if (f_1194_a1_b(tv1) && f_11a0_a1_b(tv1)) {
				f_1054_a2_v(tv1, tv0);
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14462);
				tv0->ClearReplies();
				tv0->AddReply(14463, 15695, 15694);
				tv0->AddReply(14473, 15695, 15705);
				break;
			}
			f_d1e_a1_v("Neutral");
			tv0->SetMessage(14474);
			tv0->ClearReplies();
			if (f_11b8_a1_b(tv1)) {
				tv0->AddReply(14475, 15709, 15708);
			}
			tv0->AddReply(14500, -1, 15736);
			if (f_11ac_a1_b(tv1)) {
				tv0->AddReply(14501, -1, 15737);
			}
			break;
			return;
		}
		if (f_f6f_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ef8_a1_v(tv2);
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

	void f_d1e_a1_v(string a0)
	{
		if (!f_f6f_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_ef8_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_f0a_a0_v();
			if (a1 == 15708) {
				f_105a_a2_v(tv1, tv0);
			}
			if (a0 == 15693) {
				if (f_1194_a1_b(tv1) && f_11a0_a1_b(tv1)) {
					f_1054_a2_v(tv1, tv0);
					f_d1e_a1_v("Neutral");
					tv0->SetMessage(14462);
					tv0->ClearReplies();
					tv0->AddReply(14463, 15695, 15694);
					tv0->AddReply(14473, 15695, 15705);
					return;
				}
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14474);
				tv0->ClearReplies();
				if (f_11b8_a1_b(tv1)) {
					tv0->AddReply(14475, 15709, 15708);
				}
				tv0->AddReply(14500, -1, 15736);
				if (f_11ac_a1_b(tv1)) {
					tv0->AddReply(14501, -1, 15737);
				}
				return;
			}
			if (a0 == 15709) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14476);
				tv0->ClearReplies();
				tv0->AddReply(14477, 15711, 15710);
				tv0->AddReply(14499, 15711, 15734);
				return;
			}
			if (a0 == 15711) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14478);
				tv0->ClearReplies();
				tv0->AddReply(14479, 15713, 15712);
				tv0->AddReply(14494, 15729, 15728);
				return;
			}
			if (a0 == 15729) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14495);
				tv0->ClearReplies();
				tv0->AddReply(14496, 15731, 15730);
				return;
			}
			if (a0 == 15731) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14497);
				tv0->ClearReplies();
				tv0->AddReply(14498, 15713, 15732);
				return;
			}
			if (a0 == 15713) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14480);
				tv0->ClearReplies();
				tv0->AddReply(14481, 15715, 15714);
				return;
			}
			if (a0 == 15715) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14482);
				tv0->ClearReplies();
				tv0->AddReply(14483, 15717, 15716);
				return;
			}
			if (a0 == 15717) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14484);
				tv0->ClearReplies();
				tv0->AddReply(14485, 15719, 15718);
				return;
			}
			if (a0 == 15719) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14486);
				tv0->ClearReplies();
				tv0->AddReply(14487, 15721, 15720);
				tv0->AddReply(14491, 15725, 15724);
				return;
			}
			if (a0 == 15725) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14492);
				tv0->ClearReplies();
				tv0->AddReply(14493, 15721, 15726);
				return;
			}
			if (a0 == 15721) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14488);
				tv0->ClearReplies();
				tv0->AddReply(14489, -1, 15722);
				tv0->AddReply(14490, -1, 15723);
				return;
			}
			if (a0 == 15695) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14464);
				tv0->ClearReplies();
				tv0->AddReply(14465, 15697, 15696);
				return;
			}
			if (a0 == 15697) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14466);
				tv0->ClearReplies();
				tv0->AddReply(14467, 15699, 15698);
				return;
			}
			if (a0 == 15699) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14468);
				tv0->ClearReplies();
				tv0->AddReply(14469, 15701, 15700);
				tv0->AddReply(14472, 15701, 15703);
				return;
			}
			if (a0 == 15701) {
				f_d1e_a1_v("Neutral");
				tv0->SetMessage(14470);
				tv0->ClearReplies();
				tv0->AddReply(14471, -1, 15702);
				return;
			}
			tv3 = true;
			if (f_f6f_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_eab_a1_b(object a0)
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

bool f_eb7_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_ebc_a1_b(object a0)
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
	L5 = L3 * 70 + f_f11_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_ef4_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_ef8_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_f0a_a0_v(void)
{
	if (f_f6f_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_f11_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_f1b_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_f20_a3_v(object a0, object a1, int a2)
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

void f_f2d_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_f20_a3_v(a0, L0, a2);
}

bool f_f3a_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_f46_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_f4b_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_f54_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_f5c_a1_b(int a0)
{
	return f_f4b_a0_i() == a0;
}

bool f_f62_a0_b(void)
{
	bool L0;
	f_ef8_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_f6b_a0_i(void)
{
	return 2875;
}

string f_f6d_a0_s(void)
{
	return "ui/NPC_Petr.png";
}

bool f_f6f_a0_b(void)
{
	return true;
}

void f_f71_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_f77_a2_v(object a0, object a1)
{
	@SetVariable("KnowTvirin", 1);
}

void f_f7d_a2_v(object a0, object a1)
{
	@SetVariable("ood2Petr1", 1);
}

void f_f83_a2_v(object a0, object a1)
{
	@SetVariable("ood2Petr2", 1);
}

void f_f89_a2_v(object a0, object a1)
{
	@SetVariable("ood2Petr3", 1);
}

void f_f8f_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 3);
	L0 = f_123e_a0_o();
	L0->AddMark("d2q02PetrRefusedSelf", "pt_map_petr", 0, 15280, f_f46_a0_f());
	f_1260_a0_v();
}

void f_fa6_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 5);
	L0 = f_123e_a0_o();
	L0->AddMark("d2q02PetrGotoAndrei", "pt_map_andrei", 0, 15276, f_f46_a0_f());
	L0->AddMark("d2q02PetrGotoAndreiSelf", "pt_map_petr", 0, 15281, f_f46_a0_f());
	f_1270_a0_v();
}

void f_fc6_a2_v(object a0, object a1)
{
	@SetVariable("ood1Petr1", 1);
}

void f_fcc_a2_v(object a0, object a1)
{
	@SetVariable("ood1Petr2", 1);
}

void f_fd2_a2_v(object a0, object a1)
{
	@SetVariable("ood1Petr3", 1);
}

void f_fd8_a2_v(object a0, object a1)
{
	@SetVariable("ood1Petr4", 1);
}

void f_fde_a2_v(object a0, object a1)
{
	@SetVariable("ood1Petr5", 1);
}

void f_fe4_a2_v(object a0, object a1)
{
	@SetVariable("ood1Petr6", 1);
}

void f_fea_a2_v(object a0, object a1)
{
	@SetVariable("ood1Petr7", 1);
}

void f_ff0_a2_v(object a0, object a1)
{
	@SetVariable("ood1Petr8", 1);
}

void f_ff6_a2_v(object a0, object a1)
{
	@SetVariable("KnowPetr", 1);
}

void f_ffc_a2_v(object a0, object a1)
{
	@SetVariable("KnowMistresses", 1);
}

void f_1002_a2_v(object a0, object a1)
{
	@SetVariable("KnowNina", 1);
}

void f_1008_a2_v(object a0, object a1)
{
	@SetVariable("d7q02", 2);
	f_1280_a0_v();
}

void f_1011_a2_v(object a0, object a1)
{
	@SetVariable("d7q02", 4);
}

void f_1017_a2_v(object a0, object a1)
{
	if (f_f1b_a1_i("d7q02BirdBalahon") != 0) {
		object L0;
		object L1;
		L0 = f_123e_a0_o();
		L0->FindMark(L1, "d7q02AlexandrGotoPetr");
		if (L1) {
			L1->Remove();
		}
		L0->FindMark(L1, "d7q02MarkGotoAlexandr");
		if (L1) {
			L1->Remove();
		}
		L0->FindMark(L1, "d7q02MarkGotoCemetery");
		if (L1) {
			L1->Remove();
		}
		f_1290_a0_v();
		f_f3a_a2_b("quest_d7_02", "completed");
	}
}

void f_1043_a2_v(object a0, object a1)
{
	@SetVariable("ood7Petr1", 1);
}

void f_1049_a2_v(object a0, object a1)
{
	@Trace("birdmask is given");
	f_f2d_a3_v(a0, "bird_mask", 1);
}

void f_1054_a2_v(object a0, object a1)
{
	@SetVariable("ood11Petr1", 1);
}

void f_105a_a2_v(object a0, object a1)
{
	@SetVariable("ood11Petr2", 1);
}

void f_1060_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr1", 1);
}

void f_1066_a2_v(object a0, object a1)
{
	@SetVariable("KnowMyth", 1);
}

bool f_106c_a1_b(object a0)
{
	if (f_f1b_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_1078_a1_b(object a0)
{
	if (f_f1b_a1_i("ood2Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_1084_a1_b(object a0)
{
	if (f_f1b_a1_i("ood2Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_1090_a1_b(object a0)
{
	if (f_f1b_a1_i("ood2Petr3") == 0) {
		return true;
	}
	return false;
}

bool f_109c_a1_b(object a0)
{
	if (f_f1b_a1_i("d2q02") == 1000) {
		return true;
	}
	return false;
}

bool f_10a8_a1_b(object a0)
{
	if (f_f1b_a1_i("d2q02") == 2) {
		return true;
	}
	return false;
}

bool f_10b4_a1_b(object a0)
{
	if (f_f1b_a1_i("d2q02") == 3) {
		return true;
	}
	return false;
}

bool f_10c0_a1_b(object a0)
{
	if (f_f1b_a1_i("d2q02") == 4) {
		return true;
	}
	return false;
}

bool f_10cc_a1_b(object a0)
{
	if (f_f1b_a1_i("ood1Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_10d8_a1_b(object a0)
{
	if (f_f1b_a1_i("ood1Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_10e4_a1_b(object a0)
{
	if (f_f1b_a1_i("ood1Petr3") == 0) {
		return true;
	}
	return false;
}

bool f_10f0_a1_b(object a0)
{
	if (f_f1b_a1_i("ood1Petr4") == 0) {
		return true;
	}
	return false;
}

bool f_10fc_a1_b(object a0)
{
	if (f_f1b_a1_i("ood1Petr5") == 0) {
		return true;
	}
	return false;
}

bool f_1108_a1_b(object a0)
{
	if (f_f1b_a1_i("ood1Petr6") == 0) {
		return true;
	}
	return false;
}

bool f_1114_a1_b(object a0)
{
	if (f_f1b_a1_i("ood1Petr7") == 0) {
		return true;
	}
	return false;
}

bool f_1120_a1_b(object a0)
{
	if (f_f1b_a1_i("ood1Petr8") == 0) {
		return true;
	}
	return false;
}

bool f_112c_a1_b(object a0)
{
	if (f_f1b_a1_i("KnowViktor") == 1) {
		return true;
	}
	return false;
}

bool f_1138_a1_b(object a0)
{
	if (f_11f4_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1142_a1_b(object a0)
{
	if (f_11ff_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_114c_a1_b(object a0)
{
	if (f_f1b_a1_i("d7q02") == 1) {
		return true;
	}
	return false;
}

bool f_1158_a1_b(object a0)
{
	if (f_f1b_a1_i("ood7Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_1164_a1_b(object a0)
{
	if (f_f1b_a1_i("d7q02") == 3) {
		return true;
	}
	return false;
}

bool f_1170_a1_b(object a0)
{
	if (f_f1b_a1_i("KnowAnna") == 1) {
		return true;
	}
	return false;
}

bool f_117c_a1_b(object a0)
{
	if (f_f1b_a1_i("KnowEva") == 1) {
		return true;
	}
	return false;
}

bool f_1188_a1_b(object a0)
{
	if (f_f1b_a1_i("KnowGrif") == 1) {
		return true;
	}
	return false;
}

bool f_1194_a1_b(object a0)
{
	if (f_f1b_a1_i("d11q01") == 1) {
		return true;
	}
	return false;
}

bool f_11a0_a1_b(object a0)
{
	if (f_f1b_a1_i("ood11Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_11ac_a1_b(object a0)
{
	if (f_f1b_a1_i("d11q01") == 1000) {
		return true;
	}
	return false;
}

bool f_11b8_a1_b(object a0)
{
	if (f_f1b_a1_i("ood11Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_11c4_a1_b(object a0)
{
	if (f_f1b_a1_i("KnowMaria") == 1) {
		return true;
	}
	return false;
}

bool f_11d0_a1_b(object a0)
{
	if (f_f1b_a1_i("ood3Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_11dc_a1_b(object a0)
{
	if (f_f1b_a1_i("KnowPredictions") == 1) {
		return true;
	}
	return false;
}

bool f_11e8_a1_b(object a0)
{
	if (f_f1b_a1_i("KnowMnogogrannik") == 1) {
		return true;
	}
	return false;
}

bool f_11f4_a1_b(object a0)
{
	if (f_f54_a0_i() >= 18) {
		return true;
	}
	return false;
}

bool f_11ff_a1_b(object a0)
{
	if (f_f54_a0_i() >= 12 && f_f54_a0_i() < 18) {
		return true;
	}
	return false;
}

object f_1214_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1221_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1214_a0_o();
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

object f_123e_a0_o(void)
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

int f_124f_a0_i(void)
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

void f_1260_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 130, 2, 15267);
	f_1221_a2_b(L0, 11);
}

void f_1270_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 131, 2, 15268);
	f_1221_a2_b(L0, 11);
}

void f_1280_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 173, 0, 15425);
	f_1221_a2_b(L0, 170);
}

void f_1290_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 174, 0, 15426);
	f_1221_a2_b(L0, 170);
}

void f_12a0_a0_v(void)
{
	g1 = false;
}

void f_12a4_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_f5c_a1_b(1)) {
		t4{a0};
	}
	if (f_f5c_a1_b(2)) {
		t6{a0};
		return;
	}
	if (f_f5c_a1_b(3)) {
		t8{a0};
		return;
	}
	if (f_f5c_a1_b(7)) {
		t10{a0};
		return;
	}
	if (f_f5c_a1_b(11)) {
		t12{a0};
		return;
	}
	f_f62_a0_b();
}

