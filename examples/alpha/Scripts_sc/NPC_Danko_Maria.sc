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
		f_15fe_a0_v();
		if (!f_123e_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_127f_a1_v("Neutral");
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
		f_1602_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_1232_a1_b(a0);
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
		if (!f_1243_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12c4_a0_i());
		L0->SetPhoto(f_12c6_a0_s());
		L0->SetPlayerName(f_155e_a0_i());
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
		f_127b_a1_v(a0);
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
			f_1334_a2_v(tv1, tv0);
			f_b9_a1_v("Neutral");
			tv0->SetMessage(72);
			tv0->ClearReplies();
			tv0->AddReply(73, 87, 85);
			tv0->AddReply(74, 88, 86);
			tv0->AddReply(86, 87, 98);
			tv0->AddReply(87, 87, 99);
			break;
			return;
		}
		if (f_12c8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_127f_a1_v(tv2);
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

	void f_b9_a1_v(string a0)
	{
		if (!f_12c8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_127f_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1291_a0_v();
			if (a0 == 84) {
				f_1334_a2_v(tv1, tv0);
				f_b9_a1_v("Neutral");
				tv0->SetMessage(72);
				tv0->ClearReplies();
				tv0->AddReply(73, 87, 85);
				tv0->AddReply(74, 88, 86);
				tv0->AddReply(86, 87, 98);
				tv0->AddReply(87, 87, 99);
				return;
			}
			if (a0 == 88) {
				f_131c_a2_v(tv1, tv0);
				f_b9_a1_v("Neutral");
				tv0->SetMessage(76);
				tv0->ClearReplies();
				tv0->AddReply(85, 87, 97);
				return;
			}
			if (a0 == 87) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(75);
				tv0->ClearReplies();
				tv0->AddReply(77, 93, 89);
				tv0->AddReply(78, 91, 90);
				return;
			}
			if (a0 == 91) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(79);
				tv0->ClearReplies();
				tv0->AddReply(80, -1, 92);
				return;
			}
			if (a0 == 93) {
				f_b9_a1_v("Neutral");
				tv0->SetMessage(81);
				tv0->ClearReplies();
				tv0->AddReply(83, -1, 95);
				tv0->AddReply(84, -1, 96);
				return;
			}
			tv3 = true;
			if (f_12c8_a0_b()) {
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
		if (!f_1243_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12c4_a0_i());
		L0->SetPhoto(f_12c6_a0_s());
		L0->SetPlayerName(f_155e_a0_i());
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
		f_127b_a1_v(a0);
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
			if (f_1418_a1_b(tv1) && f_1424_a1_b(tv1)) {
				f_1322_a2_v(tv1, tv0);
				f_1378_a2_v(tv1, tv0);
				f_208_a1_v("Neutral");
				tv0->SetMessage(3206);
				tv0->ClearReplies();
				tv0->AddReply(3207, 3543, 3540);
				tv0->AddReply(3208, 3542, 3541);
				break;
			}
			f_1378_a2_v(tv1, tv0);
			f_208_a1_v("Neutral");
			tv0->SetMessage(12086);
			tv0->ClearReplies();
			if (f_1430_a1_b(tv1)) {
				tv0->AddReply(12087, 13314, 13313);
			}
			tv0->AddReply(12094, -1, 13320);
			break;
			return;
		}
		if (f_12c8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_127f_a1_v(tv2);
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

	void f_208_a1_v(string a0)
	{
		if (!f_12c8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_127f_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1291_a0_v();
			if (a1 == 13313) {
				f_1328_a2_v(tv1, tv0);
			}
			if (a0 == 3539) {
				if (f_1418_a1_b(tv1) && f_1424_a1_b(tv1)) {
					f_1322_a2_v(tv1, tv0);
					f_1378_a2_v(tv1, tv0);
					f_208_a1_v("Neutral");
					tv0->SetMessage(3206);
					tv0->ClearReplies();
					tv0->AddReply(3207, 3543, 3540);
					tv0->AddReply(3208, 3542, 3541);
					return;
				}
				f_1378_a2_v(tv1, tv0);
				f_208_a1_v("Neutral");
				tv0->SetMessage(12086);
				tv0->ClearReplies();
				if (f_1430_a1_b(tv1)) {
					tv0->AddReply(12087, 13314, 13313);
				}
				tv0->AddReply(12094, -1, 13320);
				return;
			}
			if (a0 == 13314) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(12088);
				tv0->ClearReplies();
				tv0->AddReply(12089, 13316, 13315);
				return;
			}
			if (a0 == 13316) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(12090);
				tv0->ClearReplies();
				tv0->AddReply(12091, 13318, 13317);
				return;
			}
			if (a0 == 13318) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(12092);
				tv0->ClearReplies();
				tv0->AddReply(12093, -1, 13319);
				return;
			}
			if (a0 == 3542) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(3209);
				tv0->ClearReplies();
				tv0->AddReply(3215, 3543, 3549);
				tv0->AddReply(3216, 3543, 3551);
				return;
			}
			if (a0 == 3543) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(3210);
				tv0->ClearReplies();
				tv0->AddReply(3211, 3545, 3544);
				tv0->AddReply(3214, 3545, 3547);
				return;
			}
			if (a0 == 3545) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(3212);
				tv0->ClearReplies();
				tv0->AddReply(3213, -1, 3546);
				tv0->AddReply(3217, 3554, 3553);
				return;
			}
			if (a0 == 3554) {
				f_208_a1_v("Neutral");
				tv0->SetMessage(3218);
				tv0->ClearReplies();
				tv0->AddReply(3219, -1, 3555);
				tv0->AddReply(3220, -1, 3556);
				return;
			}
			tv3 = true;
			if (f_12c8_a0_b()) {
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
		if (!f_1243_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12c4_a0_i());
		L0->SetPhoto(f_12c6_a0_s());
		L0->SetPlayerName(f_155e_a0_i());
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
		f_127b_a1_v(a0);
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
			if (!f_13ba_a1_b(tv1)) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(6253);
				tv0->ClearReplies();
				tv0->AddReply(6254, 6921, 6920);
				tv0->AddReply(6259, 6926, 6925);
				break;
			}
			if (f_1396_a1_b(tv1)) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5533);
				tv0->ClearReplies();
				tv0->AddReply(5534, 6099, 6098);
				tv0->AddReply(5571, 6140, 6139);
				break;
			}
			if (f_13a2_a1_b(tv1)) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5574);
				tv0->ClearReplies();
				tv0->AddReply(5575, 6145, 6144);
				break;
			}
			if (f_13ae_a1_b(tv1) && f_13ea_a1_b(tv1)) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5527);
				tv0->ClearReplies();
				tv0->AddReply(5528, 6901, 6092);
				tv0->AddReply(5529, 6187, 6093);
				break;
			}
			if (f_138a_a1_b(tv1)) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5604);
				tv0->ClearReplies();
				tv0->AddReply(5605, 6180, 6179);
				tv0->AddReply(5611, 6180, 6185);
				break;
			}
			f_471_a1_v("Neutral");
			tv0->SetMessage(8097);
			tv0->ClearReplies();
			if (f_13ea_a1_b(tv1)) {
				tv0->AddReply(8098, -1, 8921);
			}
			if (f_14a8_a1_b(tv1) && f_13ae_a1_b(tv1)) {
				tv0->AddReply(8109, 8947, 8932);
			}
			if (f_1448_a1_b(tv1) && f_14b4_a1_b(tv1)) {
				tv0->AddReply(8111, 8948, 8934);
			}
			if (f_140c_a1_b(tv1) && f_14c0_a1_b(tv1)) {
				tv0->AddReply(8115, 8949, 8938);
			}
			if (f_1514_a1_b(tv1) && f_14cc_a1_b(tv1)) {
				tv0->AddReply(8117, 8950, 8940);
			}
			if (f_1508_a1_b(tv1) && f_14d8_a1_b(tv1)) {
				tv0->AddReply(8119, 8951, 8942);
			}
			tv0->AddReply(15220, -1, 16497);
			break;
			return;
		}
		if (f_12c8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_127f_a1_v(tv2);
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

	void f_471_a1_v(string a0)
	{
		if (!f_12c8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_127f_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1291_a0_v();
			if (a1 == 6112) {
				f_12d0_a2_v(tv1, tv0);
			}
			if (a1 == 6113) {
				f_12d0_a2_v(tv1, tv0);
			}
			if (a1 == 6122) {
				f_12d0_a2_v(tv1, tv0);
			}
			if (a1 == 6123) {
				f_12d0_a2_v(tv1, tv0);
			}
			if (a1 == 6127) {
				f_12d0_a2_v(tv1, tv0);
			}
			if (a1 == 6128) {
				f_12d0_a2_v(tv1, tv0);
			}
			if (a1 == 6154) {
				f_12d6_a2_v(tv1, tv0);
			}
			if (a1 == 6155) {
				f_12d6_a2_v(tv1, tv0);
			}
			if (a1 == 6158) {
				f_12d6_a2_v(tv1, tv0);
			}
			if (a1 == 6159) {
				f_12d6_a2_v(tv1, tv0);
			}
			if (a1 == 6164) {
				f_12d6_a2_v(tv1, tv0);
			}
			if (a1 == 6173) {
				f_12d6_a2_v(tv1, tv0);
			}
			if (a1 == 6902) {
				f_12dc_a2_v(tv1, tv0);
			}
			if (a1 == 6903) {
				f_12dc_a2_v(tv1, tv0);
			}
			if (a1 == 6904) {
				f_12dc_a2_v(tv1, tv0);
			}
			if (a1 == 6188) {
				f_12dc_a2_v(tv1, tv0);
			}
			if (a1 == 6183) {
				f_12ca_a2_v(tv1, tv0);
			}
			if (a1 == 6184) {
				f_12ca_a2_v(tv1, tv0);
			}
			if (a1 == 8932) {
				f_12dc_a2_v(tv1, tv0);
			}
			if (a1 == 8934) {
				f_1360_a2_v(tv1, tv0);
			}
			if (a1 == 8938) {
				f_1366_a2_v(tv1, tv0);
			}
			if (a1 == 8940) {
				f_136c_a2_v(tv1, tv0);
			}
			if (a1 == 8942) {
				f_1372_a2_v(tv1, tv0);
			}
			if (a0 == 6919) {
				if (!f_13ba_a1_b(tv1)) {
					f_471_a1_v("Neutral");
					tv0->SetMessage(6253);
					tv0->ClearReplies();
					tv0->AddReply(6254, 6921, 6920);
					tv0->AddReply(6259, 6926, 6925);
					return;
				}
				if (f_1396_a1_b(tv1)) {
					f_471_a1_v("Neutral");
					tv0->SetMessage(5533);
					tv0->ClearReplies();
					tv0->AddReply(5534, 6099, 6098);
					tv0->AddReply(5571, 6140, 6139);
					return;
				}
				if (f_13a2_a1_b(tv1)) {
					f_471_a1_v("Neutral");
					tv0->SetMessage(5574);
					tv0->ClearReplies();
					tv0->AddReply(5575, 6145, 6144);
					return;
				}
				if (f_13ae_a1_b(tv1) && f_13ea_a1_b(tv1)) {
					f_471_a1_v("Neutral");
					tv0->SetMessage(5527);
					tv0->ClearReplies();
					tv0->AddReply(5528, 6901, 6092);
					tv0->AddReply(5529, 6187, 6093);
					return;
				}
				if (f_138a_a1_b(tv1)) {
					f_471_a1_v("Neutral");
					tv0->SetMessage(5604);
					tv0->ClearReplies();
					tv0->AddReply(5605, 6180, 6179);
					tv0->AddReply(5611, 6180, 6185);
					return;
				}
				f_471_a1_v("Neutral");
				tv0->SetMessage(8097);
				tv0->ClearReplies();
				if (f_13ea_a1_b(tv1)) {
					tv0->AddReply(8098, -1, 8921);
				}
				if (f_14a8_a1_b(tv1) && f_13ae_a1_b(tv1)) {
					tv0->AddReply(8109, 8947, 8932);
				}
				if (f_1448_a1_b(tv1) && f_14b4_a1_b(tv1)) {
					tv0->AddReply(8111, 8948, 8934);
				}
				if (f_140c_a1_b(tv1) && f_14c0_a1_b(tv1)) {
					tv0->AddReply(8115, 8949, 8938);
				}
				if (f_1514_a1_b(tv1) && f_14cc_a1_b(tv1)) {
					tv0->AddReply(8117, 8950, 8940);
				}
				if (f_1508_a1_b(tv1) && f_14d8_a1_b(tv1)) {
					tv0->AddReply(8119, 8951, 8942);
				}
				tv0->AddReply(15220, -1, 16497);
				return;
			}
			if (a0 == 8951) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(8128);
				tv0->ClearReplies();
				tv0->AddReply(8688, -1, 9526);
				return;
			}
			if (a0 == 8950) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(8127);
				tv0->ClearReplies();
				tv0->AddReply(8687, -1, 9525);
				return;
			}
			if (a0 == 8949) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(8126);
				tv0->ClearReplies();
				tv0->AddReply(8686, -1, 9524);
				return;
			}
			if (a0 == 8948) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(8125);
				tv0->ClearReplies();
				tv0->AddReply(8685, -1, 9523);
				return;
			}
			if (a0 == 8947) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(8124);
				tv0->ClearReplies();
				tv0->AddReply(8684, -1, 9522);
				return;
			}
			if (a0 == 6180) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5606);
				tv0->ClearReplies();
				tv0->AddReply(5607, 6182, 6181);
				return;
			}
			if (a0 == 6182) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5608);
				tv0->ClearReplies();
				tv0->AddReply(5609, -1, 6183);
				tv0->AddReply(5610, -1, 6184);
				return;
			}
			if (a0 == 6187) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5612);
				tv0->ClearReplies();
				tv0->AddReply(5613, -1, 6188);
				return;
			}
			if (a0 == 6901) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(6238);
				tv0->ClearReplies();
				tv0->AddReply(6239, -1, 6902);
				tv0->AddReply(6240, -1, 6903);
				tv0->AddReply(6241, -1, 6904);
				return;
			}
			if (a0 == 6145) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5576);
				tv0->ClearReplies();
				tv0->AddReply(5577, 6147, 6146);
				tv0->AddReply(5603, 6149, 6176);
				return;
			}
			if (a0 == 6147) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5578);
				tv0->ClearReplies();
				tv0->AddReply(5579, 6149, 6148);
				tv0->AddReply(5595, 6149, 6165);
				tv0->AddReply(5596, 6168, 6167);
				return;
			}
			if (a0 == 6168) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5597);
				tv0->ClearReplies();
				tv0->AddReply(5598, 6151, 6169);
				tv0->AddReply(5599, 6172, 6171);
				return;
			}
			if (a0 == 6172) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5600);
				tv0->ClearReplies();
				tv0->AddReply(5601, -1, 6173);
				tv0->AddReply(5602, 6151, 6174);
				return;
			}
			if (a0 == 6149) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5580);
				tv0->ClearReplies();
				tv0->AddReply(5581, 6151, 6150);
				tv0->AddReply(5591, 6161, 6160);
				return;
			}
			if (a0 == 6161) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5592);
				tv0->ClearReplies();
				tv0->AddReply(5593, 6157, 6162);
				tv0->AddReply(5594, -1, 6164);
				return;
			}
			if (a0 == 6151) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5582);
				tv0->ClearReplies();
				tv0->AddReply(5583, 6153, 6152);
				tv0->AddReply(5587, 6157, 6156);
				return;
			}
			if (a0 == 6157) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5588);
				tv0->ClearReplies();
				tv0->AddReply(5589, -1, 6158);
				tv0->AddReply(5590, -1, 6159);
				return;
			}
			if (a0 == 6153) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5584);
				tv0->ClearReplies();
				tv0->AddReply(5585, -1, 6154);
				tv0->AddReply(5586, -1, 6155);
				return;
			}
			if (a0 == 6140) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5572);
				tv0->ClearReplies();
				tv0->AddReply(5573, 6099, 6141);
				return;
			}
			if (a0 == 6099) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5535);
				tv0->ClearReplies();
				tv0->AddReply(5536, 6101, 6100);
				return;
			}
			if (a0 == 6101) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5537);
				tv0->ClearReplies();
				tv0->AddReply(5538, 6103, 6102);
				tv0->AddReply(5565, 6132, 6131);
				return;
			}
			if (a0 == 6132) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5566);
				tv0->ClearReplies();
				tv0->AddReply(5567, 6103, 6133);
				tv0->AddReply(5568, 6136, 6135);
				return;
			}
			if (a0 == 6136) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5569);
				tv0->ClearReplies();
				tv0->AddReply(5570, 6103, 6137);
				return;
			}
			if (a0 == 6103) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5539);
				tv0->ClearReplies();
				tv0->AddReply(5540, 6105, 6104);
				return;
			}
			if (a0 == 6105) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5541);
				tv0->ClearReplies();
				tv0->AddReply(5542, 6107, 6106);
				tv0->AddReply(5551, 6117, 6116);
				return;
			}
			if (a0 == 6117) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5552);
				tv0->ClearReplies();
				tv0->AddReply(5553, 6119, 6118);
				tv0->AddReply(5564, 6111, 6129);
				return;
			}
			if (a0 == 6119) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5554);
				tv0->ClearReplies();
				tv0->AddReply(5555, 6121, 6120);
				tv0->AddReply(5559, -1, 6124);
				tv0->AddReply(5560, 6126, 6125);
				return;
			}
			if (a0 == 6126) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5561);
				tv0->ClearReplies();
				tv0->AddReply(5562, -1, 6127);
				tv0->AddReply(5563, -1, 6128);
				return;
			}
			if (a0 == 6121) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5556);
				tv0->ClearReplies();
				tv0->AddReply(5557, -1, 6122);
				tv0->AddReply(5558, -1, 6123);
				return;
			}
			if (a0 == 6107) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5543);
				tv0->ClearReplies();
				tv0->AddReply(5544, 6109, 6108);
				tv0->AddReply(5550, 6111, 6114);
				return;
			}
			if (a0 == 6109) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5545);
				tv0->ClearReplies();
				tv0->AddReply(5546, 6111, 6110);
				return;
			}
			if (a0 == 6111) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(5547);
				tv0->ClearReplies();
				tv0->AddReply(5548, -1, 6112);
				tv0->AddReply(5549, -1, 6113);
				return;
			}
			if (a0 == 6926) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(6260);
				tv0->ClearReplies();
				tv0->AddReply(6261, 6924, 6927);
				return;
			}
			if (a0 == 6921) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(6255);
				tv0->ClearReplies();
				tv0->AddReply(6256, -1, 6922);
				tv0->AddReply(6257, 6924, 6923);
				return;
			}
			if (a0 == 6924) {
				f_471_a1_v("Neutral");
				tv0->SetMessage(6258);
				tv0->ClearReplies();
				tv0->AddReply(6262, -1, 6929);
				return;
			}
			tv3 = true;
			if (f_12c8_a0_b()) {
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
		if (!f_1243_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12c4_a0_i());
		L0->SetPhoto(f_12c6_a0_s());
		L0->SetPlayerName(f_155e_a0_i());
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
		f_127b_a1_v(a0);
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
			if (f_149c_a1_b(tv1)) {
				f_134c_a2_v(tv1, tv0);
				f_a12_a1_v("Neutral");
				tv0->SetMessage(14519);
				tv0->ClearReplies();
				tv0->AddReply(14520, 15760, 15759);
				break;
			}
			f_a12_a1_v("Neutral");
			tv0->SetMessage(6887);
			tv0->ClearReplies();
			if (f_13c6_a1_b(tv1) && f_13de_a1_b(tv1)) {
				tv0->AddReply(6888, 7595, 7594);
			}
			if (f_13d2_a1_b(tv1) && f_1400_a1_b(tv1)) {
				tv0->AddReply(6918, 7625, 7624);
			}
			tv0->AddReply(7400, -1, 8166);
			break;
			f_a12_a1_v("Neutral");
			tv0->SetMessage(9351);
			tv0->ClearReplies();
			tv0->AddReply(9352, 10275, 10274);
			tv0->AddReply(9361, 10275, 10284);
			break;
			f_a12_a1_v("Neutral");
			tv0->SetMessage(9362);
			tv0->ClearReplies();
			tv0->AddReply(9363, 10288, 10287);
			tv0->AddReply(9371, 10296, 10295);
			break;
			return;
		}
		if (f_12c8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_127f_a1_v(tv2);
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

	void f_a12_a1_v(string a0)
	{
		if (!f_12c8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_127f_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1291_a0_v();
			if (a1 == 15761) {
				f_1352_a2_v(tv1, tv0);
				f_135b_a2_v(tv1, tv0);
			}
			if (a1 == 15762) {
				f_1352_a2_v(tv1, tv0);
				f_135b_a2_v(tv1, tv0);
			}
			if (a1 == 8183) {
				f_12f3_a2_v(tv1, tv0);
				f_12ff_a2_v(tv1, tv0);
			}
			if (a1 == 8187) {
				f_12f3_a2_v(tv1, tv0);
			}
			if (a1 == 8171) {
				f_12f9_a2_v(tv1, tv0);
				f_1316_a2_v(tv1, tv0);
				f_12ed_a2_v(tv1, tv0);
				f_12e2_a2_v(tv1, tv0);
			}
			if (a1 == 8170) {
				f_12f9_a2_v(tv1, tv0);
				f_12ed_a2_v(tv1, tv0);
				f_12e2_a2_v(tv1, tv0);
			}
			if (a0 == 15758) {
				if (f_149c_a1_b(tv1)) {
					f_134c_a2_v(tv1, tv0);
					f_a12_a1_v("Neutral");
					tv0->SetMessage(14519);
					tv0->ClearReplies();
					tv0->AddReply(14520, 15760, 15759);
					return;
				}
				f_a12_a1_v("Neutral");
				tv0->SetMessage(6887);
				tv0->ClearReplies();
				if (f_13c6_a1_b(tv1) && f_13de_a1_b(tv1)) {
					tv0->AddReply(6888, 7595, 7594);
				}
				if (f_13d2_a1_b(tv1) && f_1400_a1_b(tv1)) {
					tv0->AddReply(6918, 7625, 7624);
				}
				tv0->AddReply(7400, -1, 8166);
				return;
				f_a12_a1_v("Neutral");
				tv0->SetMessage(9351);
				tv0->ClearReplies();
				tv0->AddReply(9352, 10275, 10274);
				tv0->AddReply(9361, 10275, 10284);
				return;
				f_a12_a1_v("Neutral");
				tv0->SetMessage(9362);
				tv0->ClearReplies();
				tv0->AddReply(9363, 10288, 10287);
				tv0->AddReply(9371, 10296, 10295);
				return;
			}
			if (a0 == 10296) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(9372);
				tv0->ClearReplies();
				tv0->AddReply(9373, 10298, 10297);
				tv0->AddReply(9376, 10288, 10300);
				return;
			}
			if (a0 == 10298) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(9374);
				tv0->ClearReplies();
				tv0->AddReply(9375, -1, 10299);
				return;
			}
			if (a0 == 10288) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(9364);
				tv0->ClearReplies();
				tv0->AddReply(9365, 10290, 10289);
				tv0->AddReply(9368, 10293, 10292);
				return;
			}
			if (a0 == 10293) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(9369);
				tv0->ClearReplies();
				tv0->AddReply(9370, -1, 10294);
				return;
			}
			if (a0 == 10290) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(9366);
				tv0->ClearReplies();
				tv0->AddReply(9367, -1, 10291);
				return;
			}
			if (a0 == 10275) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(9353);
				tv0->ClearReplies();
				tv0->AddReply(9354, 10277, 10276);
				tv0->AddReply(9359, 10277, 10281);
				tv0->AddReply(9360, -1, 10283);
				return;
			}
			if (a0 == 10277) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(9355);
				tv0->ClearReplies();
				tv0->AddReply(9356, -1, 10278);
				tv0->AddReply(9357, -1, 10279);
				tv0->AddReply(9358, -1, 10280);
				return;
			}
			if (a0 == 7625) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(6919);
				tv0->ClearReplies();
				tv0->AddReply(7401, 8168, 8167);
				return;
			}
			if (a0 == 8168) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(7402);
				tv0->ClearReplies();
				if (f_13f4_a1_b(tv1)) {
					tv0->AddReply(6920, 7628, 7626);
				}
				tv0->AddReply(6921, 8169, 7627);
				return;
			}
			if (a0 == 8169) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(7403);
				tv0->ClearReplies();
				tv0->AddReply(7404, -1, 8170);
				return;
			}
			if (a0 == 7628) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(6922);
				tv0->ClearReplies();
				tv0->AddReply(7405, -1, 8171);
				return;
			}
			if (a0 == 7595) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(6889);
				tv0->ClearReplies();
				tv0->AddReply(7406, 8174, 8172);
				tv0->AddReply(6890, 7597, 7596);
				return;
			}
			if (a0 == 7597) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(6891);
				tv0->ClearReplies();
				tv0->AddReply(7407, 8184, 8173);
				tv0->AddReply(7417, 8184, 8185);
				return;
			}
			if (a0 == 8184) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(7416);
				tv0->ClearReplies();
				tv0->AddReply(7418, -1, 8187);
				return;
			}
			if (a0 == 8174) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(7408);
				tv0->ClearReplies();
				tv0->AddReply(7409, 8178, 8175);
				tv0->AddReply(7410, 8178, 8176);
				tv0->AddReply(7411, 8178, 8177);
				return;
			}
			if (a0 == 8178) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(7412);
				tv0->ClearReplies();
				tv0->AddReply(7413, 8182, 8181);
				return;
			}
			if (a0 == 8182) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(7414);
				tv0->ClearReplies();
				tv0->AddReply(7415, -1, 8183);
				return;
			}
			if (a0 == 15760) {
				f_a12_a1_v("Neutral");
				tv0->SetMessage(14521);
				tv0->ClearReplies();
				tv0->AddReply(14522, -1, 15761);
				tv0->AddReply(14523, -1, 15762);
				return;
			}
			tv3 = true;
			if (f_12c8_a0_b()) {
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
		if (!f_1243_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12c4_a0_i());
		L0->SetPhoto(f_12c6_a0_s());
		L0->SetPlayerName(f_155e_a0_i());
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
		f_127b_a1_v(a0);
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
			if (f_143c_a1_b(tv1)) {
				f_132e_a2_v(tv1, tv0);
				f_d1d_a1_v("Neutral");
				tv0->SetMessage(12310);
				tv0->ClearReplies();
				tv0->AddReply(12311, 13471, 13470);
				tv0->AddReply(12313, 13473, 13472);
				break;
			}
			f_d1d_a1_v("Neutral");
			tv0->SetMessage(13777);
			tv0->ClearReplies();
			tv0->AddReply(13778, -1, 15014);
			break;
			return;
		}
		if (f_12c8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_127f_a1_v(tv2);
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

	void f_d1d_a1_v(string a0)
	{
		if (!f_12c8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_127f_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1291_a0_v();
			if (a0 == 13469) {
				if (f_143c_a1_b(tv1)) {
					f_132e_a2_v(tv1, tv0);
					f_d1d_a1_v("Neutral");
					tv0->SetMessage(12310);
					tv0->ClearReplies();
					tv0->AddReply(12311, 13471, 13470);
					tv0->AddReply(12313, 13473, 13472);
					return;
				}
				f_d1d_a1_v("Neutral");
				tv0->SetMessage(13777);
				tv0->ClearReplies();
				tv0->AddReply(13778, -1, 15014);
				return;
			}
			if (a0 == 13473) {
				f_d1d_a1_v("Neutral");
				tv0->SetMessage(12314);
				tv0->ClearReplies();
				tv0->AddReply(12315, 13475, 13474);
				return;
			}
			if (a0 == 13475) {
				f_d1d_a1_v("Neutral");
				tv0->SetMessage(12316);
				tv0->ClearReplies();
				tv0->AddReply(12317, 13477, 13476);
				return;
			}
			if (a0 == 13477) {
				f_d1d_a1_v("Neutral");
				tv0->SetMessage(12318);
				tv0->ClearReplies();
				tv0->AddReply(12319, 13482, 13478);
				return;
			}
			if (a0 == 13482) {
				f_d1d_a1_v("Neutral");
				tv0->SetMessage(12323);
				tv0->ClearReplies();
				tv0->AddReply(12324, 13484, 13483);
				return;
			}
			if (a0 == 13484) {
				f_d1d_a1_v("Neutral");
				tv0->SetMessage(12325);
				tv0->ClearReplies();
				tv0->AddReply(12326, 13486, 13485);
				return;
			}
			if (a0 == 13486) {
				f_d1d_a1_v("Neutral");
				tv0->SetMessage(12327);
				tv0->ClearReplies();
				tv0->AddReply(12328, -1, 13487);
				return;
			}
			if (a0 == 13471) {
				f_d1d_a1_v("Neutral");
				tv0->SetMessage(12312);
				tv0->ClearReplies();
				tv0->AddReply(12320, 13480, 13479);
				return;
			}
			if (a0 == 13480) {
				f_d1d_a1_v("Neutral");
				tv0->SetMessage(12321);
				tv0->ClearReplies();
				tv0->AddReply(12322, -1, 13481);
				return;
			}
			tv3 = true;
			if (f_12c8_a0_b()) {
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
		if (!f_1243_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12c4_a0_i());
		L0->SetPhoto(f_12c6_a0_s());
		L0->SetPlayerName(f_155e_a0_i());
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
		f_127b_a1_v(a0);
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
			if (f_14fc_a1_b(tv1) && !f_14f0_a1_b(tv1) && !f_14e4_a1_b(tv1)) {
				f_137e_a2_v(tv1, tv0);
				f_ea6_a1_v("Neutral");
				tv0->SetMessage(12892);
				tv0->ClearReplies();
				tv0->AddReply(12893, 14096, 14095);
				tv0->AddReply(12969, 14175, 14174);
				break;
			}
			f_ea6_a1_v("Neutral");
			tv0->SetMessage(12974);
			tv0->ClearReplies();
			tv0->AddReply(12975, -1, 14180);
			break;
			return;
		}
		if (f_12c8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_127f_a1_v(tv2);
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

	void f_ea6_a1_v(string a0)
	{
		if (!f_12c8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_127f_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1291_a0_v();
			if (a1 == 14178) {
				f_1384_a2_v(tv1, tv0);
			}
			if (a0 == 14094) {
				if (f_14fc_a1_b(tv1) && !f_14f0_a1_b(tv1) && !f_14e4_a1_b(tv1)) {
					f_137e_a2_v(tv1, tv0);
					f_ea6_a1_v("Neutral");
					tv0->SetMessage(12892);
					tv0->ClearReplies();
					tv0->AddReply(12893, 14096, 14095);
					tv0->AddReply(12969, 14175, 14174);
					return;
				}
				f_ea6_a1_v("Neutral");
				tv0->SetMessage(12974);
				tv0->ClearReplies();
				tv0->AddReply(12975, -1, 14180);
				return;
			}
			if (a0 == 14175) {
				f_ea6_a1_v("Neutral");
				tv0->SetMessage(12970);
				tv0->ClearReplies();
				tv0->AddReply(12971, 14177, 14176);
				return;
			}
			if (a0 == 14177) {
				f_ea6_a1_v("Neutral");
				tv0->SetMessage(12972);
				tv0->ClearReplies();
				tv0->AddReply(12973, -1, 14178);
				return;
			}
			if (a0 == 14096) {
				f_ea6_a1_v("Neutral");
				tv0->SetMessage(12894);
				tv0->ClearReplies();
				tv0->AddReply(12895, 14098, 14097);
				return;
			}
			if (a0 == 14098) {
				f_ea6_a1_v("Neutral");
				tv0->SetMessage(12896);
				tv0->ClearReplies();
				tv0->AddReply(12897, 14175, 14099);
				return;
			}
			tv3 = true;
			if (f_12c8_a0_b()) {
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
		if (!f_1243_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_12c4_a0_i());
		L0->SetPhoto(f_12c6_a0_s());
		L0->SetPlayerName(f_155e_a0_i());
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
		f_127b_a1_v(a0);
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
			if (f_1454_a1_b(tv1) && f_1460_a1_b(tv1)) {
				f_133a_a2_v(tv1, tv0);
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14369);
				tv0->ClearReplies();
				tv0->AddReply(14370, 15594, 15593);
				tv0->AddReply(14376, -1, 15599);
				break;
			}
			f_101f_a1_v("Neutral");
			tv0->SetMessage(14377);
			tv0->ClearReplies();
			if (!f_1460_a1_b(tv1) && f_146c_a1_b(tv1) && f_1478_a1_b(tv1)) {
				tv0->AddReply(14378, 15602, 15601);
			}
			if (f_1490_a1_b(tv1)) {
				tv0->AddReply(14400, 15626, 15625);
			}
			tv0->AddReply(14419, -1, 15644);
			break;
			return;
		}
		if (f_12c8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_127f_a1_v(tv2);
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

	void f_101f_a1_v(string a0)
	{
		if (!f_12c8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_127f_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1291_a0_v();
			if (a1 == 15601) {
				f_1340_a2_v(tv1, tv0);
			}
			if (a1 == 15625) {
				f_1346_a2_v(tv1, tv0);
			}
			if (a0 == 15592) {
				if (f_1454_a1_b(tv1) && f_1460_a1_b(tv1)) {
					f_133a_a2_v(tv1, tv0);
					f_101f_a1_v("Neutral");
					tv0->SetMessage(14369);
					tv0->ClearReplies();
					tv0->AddReply(14370, 15594, 15593);
					tv0->AddReply(14376, -1, 15599);
					return;
				}
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14377);
				tv0->ClearReplies();
				if (!f_1460_a1_b(tv1) && f_146c_a1_b(tv1) && f_1478_a1_b(tv1)) {
					tv0->AddReply(14378, 15602, 15601);
				}
				if (f_1490_a1_b(tv1)) {
					tv0->AddReply(14400, 15626, 15625);
				}
				tv0->AddReply(14419, -1, 15644);
				return;
			}
			if (a0 == 15626) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14401);
				tv0->ClearReplies();
				tv0->AddReply(14402, 15628, 15627);
				return;
			}
			if (a0 == 15628) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14403);
				tv0->ClearReplies();
				tv0->AddReply(14404, 15630, 15629);
				return;
			}
			if (a0 == 15630) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14405);
				tv0->ClearReplies();
				tv0->AddReply(14406, 15632, 15631);
				return;
			}
			if (a0 == 15632) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14407);
				tv0->ClearReplies();
				tv0->AddReply(14408, 15634, 15633);
				return;
			}
			if (a0 == 15634) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14409);
				tv0->ClearReplies();
				tv0->AddReply(14410, 15636, 15635);
				return;
			}
			if (a0 == 15636) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14411);
				tv0->ClearReplies();
				tv0->AddReply(14412, 15638, 15637);
				return;
			}
			if (a0 == 15638) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14413);
				tv0->ClearReplies();
				tv0->AddReply(14414, 15640, 15639);
				return;
			}
			if (a0 == 15640) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14415);
				tv0->ClearReplies();
				tv0->AddReply(14416, -1, 15641);
				tv0->AddReply(14417, -1, 15642);
				tv0->AddReply(14418, -1, 15643);
				return;
			}
			if (a0 == 15602) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14379);
				tv0->ClearReplies();
				tv0->AddReply(14380, 15604, 15603);
				tv0->AddReply(14399, 15604, 15623);
				return;
			}
			if (a0 == 15604) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14381);
				tv0->ClearReplies();
				tv0->AddReply(14382, 15606, 15605);
				return;
			}
			if (a0 == 15606) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14383);
				tv0->ClearReplies();
				tv0->AddReply(14384, 15608, 15607);
				return;
			}
			if (a0 == 15608) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14385);
				tv0->ClearReplies();
				if (f_1484_a1_b(tv1)) {
					tv0->AddReply(14386, 15610, 15609);
				}
				tv0->AddReply(14398, -1, 15622);
				return;
			}
			if (a0 == 15610) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14387);
				tv0->ClearReplies();
				tv0->AddReply(14388, 15612, 15611);
				return;
			}
			if (a0 == 15612) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14389);
				tv0->ClearReplies();
				tv0->AddReply(14390, 15614, 15613);
				return;
			}
			if (a0 == 15614) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14391);
				tv0->ClearReplies();
				tv0->AddReply(14392, 15616, 15615);
				tv0->AddReply(14397, 15616, 15620);
				return;
			}
			if (a0 == 15616) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14393);
				tv0->ClearReplies();
				tv0->AddReply(14394, 15618, 15617);
				return;
			}
			if (a0 == 15618) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14395);
				tv0->ClearReplies();
				tv0->AddReply(14396, -1, 15619);
				return;
			}
			if (a0 == 15594) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14371);
				tv0->ClearReplies();
				tv0->AddReply(14372, 15596, 15595);
				return;
			}
			if (a0 == 15596) {
				f_101f_a1_v("Neutral");
				tv0->SetMessage(14373);
				tv0->ClearReplies();
				tv0->AddReply(14374, -1, 15597);
				tv0->AddReply(14375, -1, 15598);
				return;
			}
			tv3 = true;
			if (f_12c8_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

void f_122b_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1232_a1_b(object a0)
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

bool f_123e_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1243_a1_b(object a0)
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
	L5 = L3 * 70 + f_1298_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_127b_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_127f_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_1291_a0_v(void)
{
	if (f_12c8_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_1298_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_12a2_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

float f_12a7_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_12ac_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_12b5_a1_b(int a0)
{
	return f_12ac_a0_i() == a0;
}

bool f_12bb_a0_b(void)
{
	bool L0;
	f_127f_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_12c4_a0_i(void)
{
	return 2868;
}

string f_12c6_a0_s(void)
{
	return "ui/NPC_Maria.png";
}

bool f_12c8_a0_b(void)
{
	return true;
}

void f_12ca_a2_v(object a0, object a1)
{
	@SetVariable("ood1Maria1", 1);
}

void f_12d0_a2_v(object a0, object a1)
{
	@SetVariable("ood1Maria2", 1);
}

void f_12d6_a2_v(object a0, object a1)
{
	@SetVariable("ood1Maria3", 1);
}

void f_12dc_a2_v(object a0, object a1)
{
	@SetVariable("ood1Maria4", 1);
}

void f_12e2_a2_v(object a0, object a1)
{
	@Trace("money500 is given");
	f_122b_a3_v(a0, "money", 500);
}

void f_12ed_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_12f3_a2_v(object a0, object a1)
{
	@SetVariable("ood2Maria1", 1);
}

void f_12f9_a2_v(object a0, object a1)
{
	@SetVariable("ood2Maria2", 1);
}

void f_12ff_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 4);
	L0 = f_154d_a0_o();
	L0->AddMark("d2q02MariaGotoPetr", "pt_map_petr", 0, 15275, f_12a7_a0_f());
	f_156f_a0_v();
}

void f_1316_a2_v(object a0, object a1)
{
	@SetVariable("d2q03MariaGotoViktor", 1);
}

void f_131c_a2_v(object a0, object a1)
{
	@SetVariable("KnowViktor", 1);
}

void f_1322_a2_v(object a0, object a1)
{
	@SetVariable("ood6Maria1", 1);
}

void f_1328_a2_v(object a0, object a1)
{
	@SetVariable("ood6Maria2", 1);
}

void f_132e_a2_v(object a0, object a1)
{
	@SetVariable("ood8Maria1", 1);
}

void f_1334_a2_v(object a0, object a1)
{
	@SetVariable("KnowMaria", 1);
}

void f_133a_a2_v(object a0, object a1)
{
	@SetVariable("ood11Maria1", 1);
}

void f_1340_a2_v(object a0, object a1)
{
	@SetVariable("ood11Maria2", 1);
}

void f_1346_a2_v(object a0, object a1)
{
	@SetVariable("ood11Maria3", 1);
}

void f_134c_a2_v(object a0, object a1)
{
	@SetVariable("ood2Maria3", 1);
}

void f_1352_a2_v(object a0, object a1)
{
	@SetVariable("resque_list", 1);
	f_158b_a0_v();
}

void f_135b_a2_v(object a0, object a1)
{
	a1->SetReturnValue(2000);
}

void f_1360_a2_v(object a0, object a1)
{
	@SetVariable("ood1Maria5", 1);
}

void f_1366_a2_v(object a0, object a1)
{
	@SetVariable("ood1Maria6", 1);
}

void f_136c_a2_v(object a0, object a1)
{
	@SetVariable("ood1Maria7", 1);
}

void f_1372_a2_v(object a0, object a1)
{
	@SetVariable("ood1Maria8", 1);
}

void f_1378_a2_v(object a0, object a1)
{
	@SetVariable("d6MariaVisit", 1);
}

void f_137e_a2_v(object a0, object a1)
{
	@SetVariable("ood10Maria1", 1);
}

void f_1384_a2_v(object a0, object a1)
{
	@SetVariable("d10q01MariaSavePetr", 1);
}

bool f_138a_a1_b(object a0)
{
	if (f_12a2_a1_i("ood1Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_1396_a1_b(object a0)
{
	if (f_12a2_a1_i("ood1Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_13a2_a1_b(object a0)
{
	if (f_12a2_a1_i("ood1Maria3") == 0) {
		return true;
	}
	return false;
}

bool f_13ae_a1_b(object a0)
{
	if (f_12a2_a1_i("ood1Maria4") == 0) {
		return true;
	}
	return false;
}

bool f_13ba_a1_b(object a0)
{
	if (f_12a2_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_13c6_a1_b(object a0)
{
	if (f_12a2_a1_i("ood2Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_13d2_a1_b(object a0)
{
	if (f_12a2_a1_i("ood2Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_13de_a1_b(object a0)
{
	if (f_12a2_a1_i("d2q02") == 3) {
		return true;
	}
	return false;
}

bool f_13ea_a1_b(object a0)
{
	if (f_1520_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_13f4_a1_b(object a0)
{
	if (f_12a2_a1_i("d2q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1400_a1_b(object a0)
{
	if (f_12a2_a1_i("d2q03") == 1) {
		return true;
	}
	return false;
}

bool f_140c_a1_b(object a0)
{
	if (f_12a2_a1_i("KnowMark") == 1) {
		return true;
	}
	return false;
}

bool f_1418_a1_b(object a0)
{
	if (f_12a2_a1_i("d6q01") == 0) {
		return true;
	}
	return false;
}

bool f_1424_a1_b(object a0)
{
	if (f_12a2_a1_i("ood6Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_1430_a1_b(object a0)
{
	if (f_12a2_a1_i("ood6Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_143c_a1_b(object a0)
{
	if (f_12a2_a1_i("ood8Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_1448_a1_b(object a0)
{
	if (f_12a2_a1_i("KnowGeorg") == 1) {
		return true;
	}
	return false;
}

bool f_1454_a1_b(object a0)
{
	if (f_12a2_a1_i("d11q01") == 1) {
		return true;
	}
	return false;
}

bool f_1460_a1_b(object a0)
{
	if (f_12a2_a1_i("ood11Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_146c_a1_b(object a0)
{
	if (f_12a2_a1_i("ood11Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_1478_a1_b(object a0)
{
	if (f_12a2_a1_i("d11q01") >= 4) {
		return true;
	}
	return false;
}

bool f_1484_a1_b(object a0)
{
	if (f_12a2_a1_i("d11q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1490_a1_b(object a0)
{
	if (f_12a2_a1_i("ood11Maria3") == 0) {
		return true;
	}
	return false;
}

bool f_149c_a1_b(object a0)
{
	if (f_12a2_a1_i("ood2Maria3") == 0) {
		return true;
	}
	return false;
}

bool f_14a8_a1_b(object a0)
{
	if (f_12a2_a1_i("KnowKaterina") == 1) {
		return true;
	}
	return false;
}

bool f_14b4_a1_b(object a0)
{
	if (f_12a2_a1_i("ood1Maria5") == 0) {
		return true;
	}
	return false;
}

bool f_14c0_a1_b(object a0)
{
	if (f_12a2_a1_i("ood1Maria6") == 0) {
		return true;
	}
	return false;
}

bool f_14cc_a1_b(object a0)
{
	if (f_12a2_a1_i("ood1Maria7") == 0) {
		return true;
	}
	return false;
}

bool f_14d8_a1_b(object a0)
{
	if (f_12a2_a1_i("ood1Maria8") == 0) {
		return true;
	}
	return false;
}

bool f_14e4_a1_b(object a0)
{
	if (f_12a2_a1_i("d10q01") == 0) {
		return true;
	}
	return false;
}

bool f_14f0_a1_b(object a0)
{
	if (f_12a2_a1_i("d10q01") == 1000) {
		return true;
	}
	return false;
}

bool f_14fc_a1_b(object a0)
{
	if (f_12a2_a1_i("ood10Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_1508_a1_b(object a0)
{
	if (f_12a2_a1_i("KnowKapella") == 1) {
		return true;
	}
	return false;
}

bool f_1514_a1_b(object a0)
{
	if (f_12a2_a1_i("KnowStamatins") == 1) {
		return true;
	}
	return false;
}

bool f_1520_a1_b(object a0)
{
	return false;
}

object f_1523_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1530_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1523_a0_o();
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

object f_154d_a0_o(void)
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

int f_155e_a0_i(void)
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

void f_156f_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 134, 2, 15285);
	f_1530_a2_b(L0, 11);
}

void f_157f_a1_v(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	@SetVariable("vol_" + a0, L0 | 8);
}

void f_158b_a0_v(void)
{
	int L0;
	L0 = 0;
	for (; L0 < 3; L0++) {
		int L1;
		@irand(L1, 13);
		if (L1 == 0) {
			f_157f_a1_v(11);
		} else {
			if (L1 == 1) {
				f_157f_a1_v(18);
				continue;
			}
			if (L1 == 2) {
				f_157f_a1_v(21);
				continue;
			}
			if (L1 == 3) {
				f_157f_a1_v(2);
				continue;
			}
			if (L1 == 4) {
				f_157f_a1_v(9);
				continue;
			}
			if (L1 == 5) {
				f_157f_a1_v(13);
				continue;
			}
			if (L1 == 6) {
				f_157f_a1_v(24);
				continue;
			}
			if (L1 == 7) {
				f_157f_a1_v(10);
				continue;
			}
			if (L1 == 8) {
				f_157f_a1_v(20);
				continue;
			}
			if (L1 == 9) {
				f_157f_a1_v(21);
				continue;
			}
			if (L1 == 10) {
				f_157f_a1_v(3);
				continue;
			}
			if (L1 == 11) {
				f_157f_a1_v(19);
				continue;
			}
			if (L1 == 12) {
				f_157f_a1_v(26);
			}
		}
	}
}

void f_15fe_a0_v(void)
{
	g1 = false;
}

void f_1602_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_12b5_a1_b(1)) {
		t6{a0};
		return;
	}
	if (f_12b5_a1_b(2)) {
		if (2000 == t8{a0}) {
			@ShowWindow("people.xml", true);
		}
		return;
	}
	if (f_12b5_a1_b(6)) {
		t4{a0};
		return;
	}
	if (f_12b5_a1_b(8)) {
		t10{a0};
		return;
	}
	if (f_12b5_a1_b(10)) {
		t12{a0};
		return;
	}
	if (f_12b5_a1_b(11)) {
		t14{a0};
		return;
	}
	f_12bb_a0_b();
}

