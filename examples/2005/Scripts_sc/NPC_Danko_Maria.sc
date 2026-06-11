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
		} while (!f_1845_a0_b());
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
		f_189f_a1_b(f_194c_a0_o());
		if (!f_184a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_19ba_a0_i());
		L0->SetNPCDescription(f_19b8_a0_i());
		L0->SetPhoto(f_19bc_a0_s());
		L0->SetPhoto2(f_19be_a0_s());
		L0->SetPlayerName(f_1c3b_a0_i());
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
		f_188e_a1_v(a0);
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
			tv0->SetMessage(535671);
			tv0->ClearReplies();
			tv0->AddReply(535672, 42114, 37358);
			tv0->AddReply(540141, -1, 42113);
			break;
			return;
		}
		if (f_19c0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1929_a1_v(tv2);
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
		if (!f_19c0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1930_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1945_a0_v();
			if (a0 == 37357) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(535671);
				tv0->ClearReplies();
				tv0->AddReply(535672, 42114, 37358);
				tv0->AddReply(540141, -1, 42113);
				return;
			}
			if (a0 == 42114) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(540142);
				tv0->ClearReplies();
				tv0->AddReply(540143, 42117, 42115);
				tv0->AddReply(540144, 42117, 42116);
				return;
			}
			if (a0 == 42117) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(540145);
				tv0->ClearReplies();
				tv0->AddReply(540146, 42120, 42119);
				tv0->AddReply(540150, 42128, 42123);
				return;
			}
			if (a0 == 42120) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(540147);
				tv0->ClearReplies();
				tv0->AddReply(540148, 42122, 42121);
				return;
			}
			if (a0 == 42122) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(540149);
				tv0->ClearReplies();
				tv0->AddReply(540151, 42126, 42124);
				tv0->AddReply(540154, 42128, 42127);
				return;
			}
			if (a0 == 42128) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(540155);
				tv0->ClearReplies();
				tv0->AddReply(540156, 42132, 42130);
				return;
			}
			if (a0 == 42126) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(540153);
				tv0->ClearReplies();
				tv0->AddReply(540157, 42132, 42131);
				return;
			}
			if (a0 == 42132) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(540158);
				tv0->ClearReplies();
				tv0->AddReply(540159, -1, 42133);
				tv0->AddReply(540160, -1, 42134);
				tv0->AddReply(540161, -1, 42136);
				return;
			}
			tv3 = true;
			if (f_19c0_a0_b()) {
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
		f_189f_a1_b(f_194c_a0_o());
		if (!f_184a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_19ba_a0_i());
		L0->SetNPCDescription(f_19b8_a0_i());
		L0->SetPhoto(f_19bc_a0_s());
		L0->SetPhoto2(f_19be_a0_s());
		L0->SetPlayerName(f_1c3b_a0_i());
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
		f_188e_a1_v(a0);
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
			f_1a5f_a2_v(tv1, tv0);
			f_209_a1_v("Neutral");
			tv0->SetMessage(500072);
			tv0->ClearReplies();
			tv0->AddReply(500073, 87, 85);
			tv0->AddReply(500074, 88, 86);
			tv0->AddReply(500086, 87, 98);
			tv0->AddReply(500087, 87, 99);
			break;
			return;
		}
		if (f_19c0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1929_a1_v(tv2);
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

	void f_209_a1_v(string a0)
	{
		if (!f_19c0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1930_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1945_a0_v();
			if (a0 == 84) {
				f_1a5f_a2_v(tv1, tv0);
				f_209_a1_v("Neutral");
				tv0->SetMessage(500072);
				tv0->ClearReplies();
				tv0->AddReply(500073, 87, 85);
				tv0->AddReply(500074, 88, 86);
				tv0->AddReply(500086, 87, 98);
				tv0->AddReply(500087, 87, 99);
				return;
			}
			if (a0 == 88) {
				f_1a41_a2_v(tv1, tv0);
				f_209_a1_v("Neutral");
				tv0->SetMessage(500076);
				tv0->ClearReplies();
				tv0->AddReply(500085, 87, 97);
				return;
			}
			if (a0 == 87) {
				f_209_a1_v("Neutral");
				tv0->SetMessage(500075);
				tv0->ClearReplies();
				tv0->AddReply(500077, 93, 89);
				tv0->AddReply(500078, 91, 90);
				return;
			}
			if (a0 == 91) {
				f_209_a1_v("Neutral");
				tv0->SetMessage(500079);
				tv0->ClearReplies();
				tv0->AddReply(500080, -1, 92);
				return;
			}
			if (a0 == 93) {
				f_209_a1_v("Neutral");
				tv0->SetMessage(500081);
				tv0->ClearReplies();
				tv0->AddReply(500083, -1, 95);
				tv0->AddReply(500084, -1, 96);
				return;
			}
			tv3 = true;
			if (f_19c0_a0_b()) {
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
		f_189f_a1_b(f_194c_a0_o());
		if (!f_184a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_19ba_a0_i());
		L0->SetNPCDescription(f_19b8_a0_i());
		L0->SetPhoto(f_19bc_a0_s());
		L0->SetPhoto2(f_19be_a0_s());
		L0->SetPlayerName(f_1c3b_a0_i());
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
		f_188e_a1_v(a0);
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
			if (f_1b6f_a1_b(tv1) && f_1b7b_a1_b(tv1)) {
				f_1a4d_a2_v(tv1, tv0);
				f_1a79_a2_v(tv1, tv0);
				f_370_a1_v("Neutral");
				tv0->SetMessage(503206);
				tv0->ClearReplies();
				tv0->AddReply(503207, 3543, 3540);
				tv0->AddReply(503208, 3542, 3541);
				break;
			}
			f_1a79_a2_v(tv1, tv0);
			f_370_a1_v("Neutral");
			tv0->SetMessage(512086);
			tv0->ClearReplies();
			if (f_1b87_a1_b(tv1)) {
				tv0->AddReply(512087, 13314, 13313);
			}
			tv0->AddReply(512094, -1, 13320);
			break;
			return;
		}
		if (f_19c0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1929_a1_v(tv2);
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

	void f_370_a1_v(string a0)
	{
		if (!f_19c0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1930_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1945_a0_v();
			if (a1 == 13313) {
				f_1a53_a2_v(tv1, tv0);
			}
			if (a0 == 3539) {
				if (f_1b6f_a1_b(tv1) && f_1b7b_a1_b(tv1)) {
					f_1a4d_a2_v(tv1, tv0);
					f_1a79_a2_v(tv1, tv0);
					f_370_a1_v("Neutral");
					tv0->SetMessage(503206);
					tv0->ClearReplies();
					tv0->AddReply(503207, 3543, 3540);
					tv0->AddReply(503208, 3542, 3541);
					return;
				}
				f_1a79_a2_v(tv1, tv0);
				f_370_a1_v("Neutral");
				tv0->SetMessage(512086);
				tv0->ClearReplies();
				if (f_1b87_a1_b(tv1)) {
					tv0->AddReply(512087, 13314, 13313);
				}
				tv0->AddReply(512094, -1, 13320);
				return;
			}
			if (a0 == 13314) {
				f_370_a1_v("Neutral");
				tv0->SetMessage(512088);
				tv0->ClearReplies();
				tv0->AddReply(512089, 13316, 13315);
				return;
			}
			if (a0 == 13316) {
				f_370_a1_v("Neutral");
				tv0->SetMessage(512090);
				tv0->ClearReplies();
				tv0->AddReply(512091, 13318, 13317);
				return;
			}
			if (a0 == 13318) {
				f_370_a1_v("Neutral");
				tv0->SetMessage(512092);
				tv0->ClearReplies();
				tv0->AddReply(512093, -1, 13319);
				return;
			}
			if (a0 == 3542) {
				f_370_a1_v("Neutral");
				tv0->SetMessage(503209);
				tv0->ClearReplies();
				tv0->AddReply(503215, 3543, 3549);
				tv0->AddReply(503216, 3543, 3551);
				return;
			}
			if (a0 == 3543) {
				f_370_a1_v("Neutral");
				tv0->SetMessage(503210);
				tv0->ClearReplies();
				tv0->AddReply(503211, 3545, 3544);
				tv0->AddReply(503214, 3545, 3547);
				return;
			}
			if (a0 == 3545) {
				f_370_a1_v("Neutral");
				tv0->SetMessage(503212);
				tv0->ClearReplies();
				tv0->AddReply(503213, -1, 3546);
				tv0->AddReply(503217, 3554, 3553);
				return;
			}
			if (a0 == 3554) {
				f_370_a1_v("Neutral");
				tv0->SetMessage(503218);
				tv0->ClearReplies();
				tv0->AddReply(503219, -1, 3555);
				tv0->AddReply(503220, -1, 3556);
				return;
			}
			tv3 = true;
			if (f_19c0_a0_b()) {
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
		f_189f_a1_b(f_194c_a0_o());
		if (!f_184a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_19ba_a0_i());
		L0->SetNPCDescription(f_19b8_a0_i());
		L0->SetPhoto(f_19bc_a0_s());
		L0->SetPhoto2(f_19be_a0_s());
		L0->SetPlayerName(f_1c3b_a0_i());
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
		f_188e_a1_v(a0);
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
			if (!f_1abb_a1_b(tv1)) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(506253);
				tv0->ClearReplies();
				tv0->AddReply(506254, 6921, 6920);
				tv0->AddReply(506259, 6926, 6925);
				break;
			}
			if (f_1aa3_a1_b(tv1)) {
				f_19d5_a2_v(tv1, tv0);
				f_19ce_a2_v(tv1, tv0);
				f_573_a1_v("Neutral");
				tv0->SetMessage(524928);
				tv0->ClearReplies();
				tv0->AddReply(524944, 26279, 26278);
				tv0->AddReply(524952, 26279, 26286);
				break;
			}
			f_573_a1_v("Neutral");
			tv0->SetMessage(508097);
			tv0->ClearReplies();
			if (f_1a8b_a1_b(tv1) && f_1aaf_a1_b(tv1)) {
				tv0->AddReply(521832, 23004, 23003);
			}
			if (f_1a97_a1_b(tv1)) {
				tv0->AddReply(505605, 6180, 6179);
			}
			if (f_1b9f_a1_b(tv1) && f_1bb7_a1_b(tv1)) {
				tv0->AddReply(508111, 23011, 8934);
			}
			tv0->AddReply(505611, -1, 6185);
			break;
			return;
		}
		if (f_19c0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1929_a1_v(tv2);
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

	void f_573_a1_v(string a0)
	{
		if (!f_19c0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1930_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1945_a0_v();
			if (a1 == 26327) {
				f_1a65_a2_v(tv1, tv0);
				f_1a6e_a2_v(tv1, tv0);
			}
			if (a1 == 26345) {
				f_1a65_a2_v(tv1, tv0);
				f_1a6e_a2_v(tv1, tv0);
			}
			if (a1 == 26346) {
				f_1a65_a2_v(tv1, tv0);
				f_1a6e_a2_v(tv1, tv0);
				f_19c8_a2_v(tv1, tv0);
			}
			if (a1 == 26333) {
				f_1a65_a2_v(tv1, tv0);
				f_1a6e_a2_v(tv1, tv0);
				f_19c8_a2_v(tv1, tv0);
			}
			if (a1 == 26337) {
				f_1a65_a2_v(tv1, tv0);
				f_1a6e_a2_v(tv1, tv0);
			}
			if (a1 == 23003) {
				f_19db_a2_v(tv1, tv0);
			}
			if (a1 == 6183) {
				f_19c2_a2_v(tv1, tv0);
			}
			if (a1 == 6184) {
				f_19c2_a2_v(tv1, tv0);
			}
			if (a1 == 8934) {
				f_1a73_a2_v(tv1, tv0);
			}
			if (a1 == 23019) {
				f_1a73_a2_v(tv1, tv0);
			}
			if (a0 == 6919) {
				if (!f_1abb_a1_b(tv1)) {
					f_573_a1_v("Neutral");
					tv0->SetMessage(506253);
					tv0->ClearReplies();
					tv0->AddReply(506254, 6921, 6920);
					tv0->AddReply(506259, 6926, 6925);
					return;
				}
				if (f_1aa3_a1_b(tv1)) {
					f_19d5_a2_v(tv1, tv0);
					f_19ce_a2_v(tv1, tv0);
					f_573_a1_v("Neutral");
					tv0->SetMessage(524928);
					tv0->ClearReplies();
					tv0->AddReply(524944, 26279, 26278);
					tv0->AddReply(524952, 26279, 26286);
					return;
				}
				f_573_a1_v("Neutral");
				tv0->SetMessage(508097);
				tv0->ClearReplies();
				if (f_1a8b_a1_b(tv1) && f_1aaf_a1_b(tv1)) {
					tv0->AddReply(521832, 23004, 23003);
				}
				if (f_1a97_a1_b(tv1)) {
					tv0->AddReply(505605, 6180, 6179);
				}
				if (f_1b9f_a1_b(tv1) && f_1bb7_a1_b(tv1)) {
					tv0->AddReply(508111, 23011, 8934);
				}
				tv0->AddReply(505611, -1, 6185);
				return;
			}
			if (a0 == 23011) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(521840);
				tv0->ClearReplies();
				tv0->AddReply(521841, 8948, 23012);
				return;
			}
			if (a0 == 8948) {
				f_1a47_a2_v(tv1, tv0);
				f_573_a1_v("Neutral");
				tv0->SetMessage(508125);
				tv0->ClearReplies();
				tv0->AddReply(521842, 23014, 23013);
				tv0->AddReply(521846, 23016, 23017);
				return;
			}
			if (a0 == 23014) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(521843);
				tv0->ClearReplies();
				tv0->AddReply(521844, 23016, 23015);
				return;
			}
			if (a0 == 23016) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(521845);
				tv0->ClearReplies();
				tv0->AddReply(521847, -1, 23019);
				return;
			}
			if (a0 == 6180) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(505606);
				tv0->ClearReplies();
				tv0->AddReply(505607, 6182, 6181);
				tv0->AddReply(524933, 6182, 26264);
				return;
			}
			if (a0 == 6182) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(505608);
				tv0->ClearReplies();
				tv0->AddReply(505609, -1, 6183);
				tv0->AddReply(505610, -1, 6184);
				return;
			}
			if (a0 == 23004) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(521833);
				tv0->ClearReplies();
				tv0->AddReply(505529, 6187, 6093);
				tv0->AddReply(521834, -1, 23005);
				return;
			}
			if (a0 == 6187) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(505612);
				tv0->ClearReplies();
				tv0->AddReply(524934, 26267, 26266);
				return;
			}
			if (a0 == 26267) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524935);
				tv0->ClearReplies();
				tv0->AddReply(524936, 26269, 26268);
				tv0->AddReply(524938, 26269, 26270);
				return;
			}
			if (a0 == 26269) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524937);
				tv0->ClearReplies();
				tv0->AddReply(524939, 26273, 26272);
				return;
			}
			if (a0 == 26273) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524940);
				tv0->ClearReplies();
				tv0->AddReply(505528, 6901, 6092);
				tv0->AddReply(505613, 26274, 6188);
				return;
			}
			if (a0 == 26274) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524941);
				tv0->ClearReplies();
				tv0->AddReply(524942, 6901, 26275);
				tv0->AddReply(524943, -1, 26276);
				return;
			}
			if (a0 == 6901) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(506238);
				tv0->ClearReplies();
				tv0->AddReply(506239, -1, 6902);
				tv0->AddReply(506240, -1, 6903);
				tv0->AddReply(506241, -1, 6904);
				return;
			}
			if (a0 == 26279) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524945);
				tv0->ClearReplies();
				tv0->AddReply(524946, 26281, 26280);
				tv0->AddReply(524953, 26281, 26288);
				return;
			}
			if (a0 == 26281) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524947);
				tv0->ClearReplies();
				tv0->AddReply(524948, 26283, 26282);
				tv0->AddReply(524954, 26291, 26290);
				return;
			}
			if (a0 == 26291) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524955);
				tv0->ClearReplies();
				tv0->AddReply(524956, 26294, 26292);
				tv0->AddReply(524957, 26301, 26293);
				return;
			}
			if (a0 == 26301) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524965);
				tv0->ClearReplies();
				tv0->AddReply(524966, 26309, 26302);
				tv0->AddReply(524968, 26298, 26307);
				tv0->AddReply(533662, 26283, 35192);
				return;
			}
			if (a0 == 26309) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524969);
				tv0->ClearReplies();
				tv0->AddReply(524970, 26283, 26310);
				tv0->AddReply(524972, 26314, 26313);
				tv0->AddReply(524971, -1, 26312);
				return;
			}
			if (a0 == 26314) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524973);
				tv0->ClearReplies();
				tv0->AddReply(524974, 26283, 26315);
				tv0->AddReply(524975, 26283, 26316);
				return;
			}
			if (a0 == 26294) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524958);
				tv0->ClearReplies();
				tv0->AddReply(524959, 26296, 26295);
				tv0->AddReply(524967, 26298, 26303);
				return;
			}
			if (a0 == 26296) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524960);
				tv0->ClearReplies();
				tv0->AddReply(524961, 26298, 26297);
				return;
			}
			if (a0 == 26298) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524962);
				tv0->ClearReplies();
				tv0->AddReply(524963, 26283, 26299);
				tv0->AddReply(524964, 26283, 26300);
				return;
			}
			if (a0 == 26283) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524949);
				tv0->ClearReplies();
				tv0->AddReply(524976, 26322, 26319);
				tv0->AddReply(533663, 26329, 35194);
				return;
			}
			if (a0 == 26322) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524979);
				tv0->ClearReplies();
				tv0->AddReply(524981, 26326, 26325);
				tv0->AddReply(524992, 26339, 26338);
				return;
			}
			if (a0 == 26339) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524993);
				tv0->ClearReplies();
				tv0->AddReply(524994, 26326, 26340);
				return;
			}
			if (a0 == 26326) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524982);
				tv0->ClearReplies();
				tv0->AddReply(524984, 26329, 26328);
				tv0->AddReply(524990, 26329, 26335);
				return;
			}
			if (a0 == 26329) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524985);
				tv0->ClearReplies();
				tv0->AddReply(524987, 26332, 26331);
				tv0->AddReply(524986, 26332, 26330);
				return;
			}
			if (a0 == 26332) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524988);
				tv0->ClearReplies();
				tv0->AddReply(524983, -1, 26327);
				tv0->AddReply(524996, 26344, 26343);
				tv0->AddReply(524989, -1, 26333);
				tv0->AddReply(524991, -1, 26337);
				return;
			}
			if (a0 == 26344) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(524997);
				tv0->ClearReplies();
				tv0->AddReply(524998, -1, 26345);
				tv0->AddReply(524999, -1, 26346);
				return;
			}
			if (a0 == 6926) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(506260);
				tv0->ClearReplies();
				tv0->AddReply(506261, 6924, 6927);
				return;
			}
			if (a0 == 6921) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(506255);
				tv0->ClearReplies();
				tv0->AddReply(506256, -1, 6922);
				tv0->AddReply(506257, 6924, 6923);
				return;
			}
			if (a0 == 6924) {
				f_573_a1_v("Neutral");
				tv0->SetMessage(506258);
				tv0->ClearReplies();
				tv0->AddReply(506262, -1, 6929);
				return;
			}
			tv3 = true;
			if (f_19c0_a0_b()) {
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
		f_189f_a1_b(f_194c_a0_o());
		if (!f_184a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_19ba_a0_i());
		L0->SetNPCDescription(f_19b8_a0_i());
		L0->SetPhoto(f_19bc_a0_s());
		L0->SetPhoto2(f_19be_a0_s());
		L0->SetPlayerName(f_1c3b_a0_i());
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
		f_188e_a1_v(a0);
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
			f_a0b_a1_v("Neutral");
			tv0->SetMessage(506887);
			tv0->ClearReplies();
			if (f_1b27_a1_b(tv1) && f_1b3f_a1_b(tv1)) {
				tv0->AddReply(506888, 7595, 7594);
			}
			if (f_1b33_a1_b(tv1) && f_1b4b_a1_b(tv1)) {
				tv0->AddReply(506918, 7625, 7624);
			}
			tv0->AddReply(507400, -1, 8166);
			break;
			return;
		}
		if (f_19c0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1929_a1_v(tv2);
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

	void f_a0b_a1_v(string a0)
	{
		if (!f_19c0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1930_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1945_a0_v();
			if (a1 == 8183) {
				f_1a18_a2_v(tv1, tv0);
				f_1a24_a2_v(tv1, tv0);
			}
			if (a1 == 8187) {
				f_1a18_a2_v(tv1, tv0);
			}
			if (a1 == 8171) {
				f_1a1e_a2_v(tv1, tv0);
				f_1a3b_a2_v(tv1, tv0);
				f_19eb_a2_v(tv1, tv0);
				f_19e1_a2_v(tv1, tv0);
			}
			if (a1 == 8170) {
				f_1a1e_a2_v(tv1, tv0);
				f_19eb_a2_v(tv1, tv0);
				f_19e1_a2_v(tv1, tv0);
			}
			if (a0 == 7593) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(506887);
				tv0->ClearReplies();
				if (f_1b27_a1_b(tv1) && f_1b3f_a1_b(tv1)) {
					tv0->AddReply(506888, 7595, 7594);
				}
				if (f_1b33_a1_b(tv1) && f_1b4b_a1_b(tv1)) {
					tv0->AddReply(506918, 7625, 7624);
				}
				tv0->AddReply(507400, -1, 8166);
				return;
			}
			if (a0 == 7625) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(506919);
				tv0->ClearReplies();
				tv0->AddReply(507401, 8168, 8167);
				return;
			}
			if (a0 == 8168) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(507402);
				tv0->ClearReplies();
				if (f_1bab_a1_b(tv1)) {
					tv0->AddReply(506920, 7628, 7626);
				}
				tv0->AddReply(506921, 8169, 7627);
				return;
			}
			if (a0 == 8169) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(507403);
				tv0->ClearReplies();
				tv0->AddReply(507404, -1, 8170);
				return;
			}
			if (a0 == 7628) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(506922);
				tv0->ClearReplies();
				tv0->AddReply(507405, -1, 8171);
				return;
			}
			if (a0 == 7595) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(506889);
				tv0->ClearReplies();
				tv0->AddReply(507406, 35516, 8172);
				tv0->AddReply(506890, 7597, 7596);
				return;
			}
			if (a0 == 7597) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(506891);
				tv0->ClearReplies();
				tv0->AddReply(507407, 8184, 8173);
				tv0->AddReply(507417, 8184, 8185);
				tv0->AddReply(533958, 8182, 35524);
				return;
			}
			if (a0 == 8184) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(507416);
				tv0->ClearReplies();
				tv0->AddReply(507418, -1, 8187);
				return;
			}
			if (a0 == 35516) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(533952);
				tv0->ClearReplies();
				tv0->AddReply(533953, 8174, 35517);
				tv0->AddReply(533954, 35519, 35518);
				return;
			}
			if (a0 == 35519) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(533955);
				tv0->ClearReplies();
				tv0->AddReply(533956, 8182, 35520);
				tv0->AddReply(534427, 8182, 36054);
				return;
			}
			if (a0 == 8174) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(507408);
				tv0->ClearReplies();
				tv0->AddReply(507409, 8178, 8175);
				tv0->AddReply(507410, 8178, 8176);
				tv0->AddReply(507411, 8178, 8177);
				return;
			}
			if (a0 == 8178) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(507412);
				tv0->ClearReplies();
				tv0->AddReply(507413, 8182, 8181);
				tv0->AddReply(534430, 36051, 36059);
				return;
			}
			if (a0 == 8182) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(507414);
				tv0->ClearReplies();
				tv0->AddReply(534424, 36051, 36050);
				tv0->AddReply(534426, 36051, 36052);
				return;
			}
			if (a0 == 36051) {
				f_a0b_a1_v("Neutral");
				tv0->SetMessage(534425);
				tv0->ClearReplies();
				tv0->AddReply(507415, -1, 8183);
				return;
			}
			tv3 = true;
			if (f_19c0_a0_b()) {
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
		f_189f_a1_b(f_194c_a0_o());
		if (!f_184a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_19ba_a0_i());
		L0->SetNPCDescription(f_19b8_a0_i());
		L0->SetPhoto(f_19bc_a0_s());
		L0->SetPhoto2(f_19be_a0_s());
		L0->SetPlayerName(f_1c3b_a0_i());
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
		f_188e_a1_v(a0);
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
			f_c77_a1_v("Neutral");
			tv0->SetMessage(510194);
			tv0->ClearReplies();
			if (f_1b57_a1_b(tv1) && f_1af7_a1_b(tv1)) {
				tv0->AddReply(510401, 11468, 11467);
			}
			if (f_1aeb_a1_b(tv1) && f_1b03_a1_b(tv1)) {
				tv0->AddReply(510195, 11242, 11241);
			}
			tv0->AddReply(534399, -1, 36018);
			break;
			return;
		}
		if (f_19c0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1929_a1_v(tv2);
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

	void f_c77_a1_v(string a0)
	{
		if (!f_19c0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1930_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1945_a0_v();
			if (a1 == 11467) {
				f_1a00_a2_v(tv1, tv0);
			}
			if (a1 == 11241) {
				f_1a06_a2_v(tv1, tv0);
			}
			if (a0 == 11240) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(510194);
				tv0->ClearReplies();
				if (f_1b57_a1_b(tv1) && f_1af7_a1_b(tv1)) {
					tv0->AddReply(510401, 11468, 11467);
				}
				if (f_1aeb_a1_b(tv1) && f_1b03_a1_b(tv1)) {
					tv0->AddReply(510195, 11242, 11241);
				}
				tv0->AddReply(534399, -1, 36018);
				return;
			}
			if (a0 == 11242) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(510196);
				tv0->ClearReplies();
				tv0->AddReply(510197, 11244, 11243);
				return;
			}
			if (a0 == 11244) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(510198);
				tv0->ClearReplies();
				tv0->AddReply(510199, 36021, 11245);
				tv0->AddReply(534401, 11246, 36020);
				return;
			}
			if (a0 == 11246) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(510200);
				tv0->ClearReplies();
				tv0->AddReply(510400, 10992, 11466);
				return;
			}
			if (a0 == 10992) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(509974);
				tv0->ClearReplies();
				tv0->AddReply(509975, 36019, 10993);
				tv0->AddReply(509976, -1, 10994);
				return;
			}
			if (a0 == 36019) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(534400);
				tv0->ClearReplies();
				return;
			}
			if (a0 == 36021) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(534402);
				tv0->ClearReplies();
				tv0->AddReply(534403, -1, 36022);
				return;
			}
			if (a0 == 11468) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(510402);
				tv0->ClearReplies();
				tv0->AddReply(510403, 11470, 11469);
				tv0->AddReply(510418, 11472, 11485);
				return;
			}
			if (a0 == 11470) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(510404);
				tv0->ClearReplies();
				tv0->AddReply(534404, 36024, 36023);
				tv0->AddReply(510405, 11472, 11471);
				return;
			}
			if (a0 == 11472) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(510406);
				tv0->ClearReplies();
				tv0->AddReply(510407, 11474, 11473);
				tv0->AddReply(510409, 11476, 11475);
				return;
			}
			if (a0 == 11476) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(510410);
				tv0->ClearReplies();
				tv0->AddReply(510412, 11474, 11478);
				return;
			}
			if (a0 == 11474) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(510408);
				tv0->ClearReplies();
				tv0->AddReply(510411, 11480, 11477);
				tv0->AddReply(510414, 11482, 11481);
				return;
			}
			if (a0 == 11482) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(510415);
				tv0->ClearReplies();
				tv0->AddReply(510417, -1, 11484);
				return;
			}
			if (a0 == 11480) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(510413);
				tv0->ClearReplies();
				tv0->AddReply(510416, -1, 11483);
				tv0->AddReply(534421, -1, 36048);
				return;
			}
			if (a0 == 36024) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(534405);
				tv0->ClearReplies();
				tv0->AddReply(534406, 36029, 36025);
				tv0->AddReply(534407, 36027, 36026);
				return;
			}
			if (a0 == 36027) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(534408);
				tv0->ClearReplies();
				tv0->AddReply(534409, 11474, 36028);
				return;
			}
			if (a0 == 36029) {
				f_c77_a1_v("Neutral");
				tv0->SetMessage(534410);
				tv0->ClearReplies();
				tv0->AddReply(534411, 11474, 36030);
				tv0->AddReply(534412, 11474, 36031);
				return;
			}
			tv3 = true;
			if (f_19c0_a0_b()) {
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
		f_189f_a1_b(f_194c_a0_o());
		if (!f_184a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_19ba_a0_i());
		L0->SetNPCDescription(f_19b8_a0_i());
		L0->SetPhoto(f_19bc_a0_s());
		L0->SetPhoto2(f_19be_a0_s());
		L0->SetPlayerName(f_1c3b_a0_i());
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
		f_188e_a1_v(a0);
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
			f_ed4_a1_v("Neutral");
			tv0->SetMessage(535203);
			tv0->ClearReplies();
			if (f_1b0f_a1_b(tv1)) {
				tv0->AddReply(536230, 38006, 38005);
			}
			if (f_1b1b_a1_b(tv1) && !f_1b63_a1_b(tv1)) {
				tv0->AddReply(536233, 12417, 38008);
			}
			tv0->AddReply(536232, -1, 38007);
			break;
			return;
		}
		if (f_19c0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1929_a1_v(tv2);
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

	void f_ed4_a1_v(string a0)
	{
		if (!f_19c0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1930_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1945_a0_v();
			if (a1 == 38005) {
				f_1a0c_a2_v(tv1, tv0);
			}
			if (a1 == 38008) {
				f_1a12_a2_v(tv1, tv0);
			}
			if (a0 == 36875) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(535203);
				tv0->ClearReplies();
				if (f_1b0f_a1_b(tv1)) {
					tv0->AddReply(536230, 38006, 38005);
				}
				if (f_1b1b_a1_b(tv1) && !f_1b63_a1_b(tv1)) {
					tv0->AddReply(536233, 12417, 38008);
				}
				tv0->AddReply(536232, -1, 38007);
				return;
			}
			if (a0 == 12417) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(511227);
				tv0->ClearReplies();
				tv0->AddReply(511228, 12419, 12418);
				tv0->AddReply(536229, 36888, 38004);
				return;
			}
			if (a0 == 36888) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(535214);
				tv0->ClearReplies();
				tv0->AddReply(535215, 36890, 36889);
				tv0->AddReply(535223, 36898, 36897);
				return;
			}
			if (a0 == 36898) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(535224);
				tv0->ClearReplies();
				tv0->AddReply(535225, 36900, 36899);
				tv0->AddReply(535228, 36890, 36902);
				return;
			}
			if (a0 == 36900) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(535226);
				tv0->ClearReplies();
				tv0->AddReply(535227, -1, 36901);
				return;
			}
			if (a0 == 36890) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(535216);
				tv0->ClearReplies();
				tv0->AddReply(535217, 36892, 36891);
				tv0->AddReply(535220, 36895, 36894);
				return;
			}
			if (a0 == 36895) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(535221);
				tv0->ClearReplies();
				tv0->AddReply(535222, -1, 36896);
				return;
			}
			if (a0 == 36892) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(535218);
				tv0->ClearReplies();
				tv0->AddReply(535219, -1, 36893);
				return;
			}
			if (a0 == 12419) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(511229);
				tv0->ClearReplies();
				tv0->AddReply(511230, 12421, 12420);
				tv0->AddReply(536234, 38010, 38009);
				return;
			}
			if (a0 == 38010) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(536235);
				tv0->ClearReplies();
				tv0->AddReply(536236, 38012, 38011);
				tv0->AddReply(536238, 38012, 38013);
				return;
			}
			if (a0 == 38012) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(536237);
				tv0->ClearReplies();
				tv0->AddReply(536239, -1, 38015);
				tv0->AddReply(536240, -1, 38016);
				return;
			}
			if (a0 == 12421) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(511231);
				tv0->ClearReplies();
				tv0->AddReply(511232, -1, 12422);
				tv0->AddReply(536228, -1, 38003);
				return;
			}
			if (a0 == 38006) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(536231);
				tv0->ClearReplies();
				tv0->AddReply(535204, 36877, 36876);
				tv0->AddReply(535213, 36877, 36886);
				return;
			}
			if (a0 == 36877) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(535205);
				tv0->ClearReplies();
				tv0->AddReply(535206, 36879, 36878);
				tv0->AddReply(535211, 36879, 36883);
				tv0->AddReply(535212, -1, 36885);
				return;
			}
			if (a0 == 36879) {
				f_ed4_a1_v("Neutral");
				tv0->SetMessage(535207);
				tv0->ClearReplies();
				tv0->AddReply(535208, -1, 36880);
				tv0->AddReply(535209, -1, 36881);
				tv0->AddReply(535210, -1, 36882);
				return;
			}
			tv3 = true;
			if (f_19c0_a0_b()) {
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
		f_189f_a1_b(f_194c_a0_o());
		if (!f_184a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_19ba_a0_i());
		L0->SetNPCDescription(f_19b8_a0_i());
		L0->SetPhoto(f_19bc_a0_s());
		L0->SetPhoto2(f_19be_a0_s());
		L0->SetPlayerName(f_1c3b_a0_i());
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
		f_188e_a1_v(a0);
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
			f_110f_a1_v("Neutral");
			tv0->SetMessage(533236);
			tv0->ClearReplies();
			if (f_1ac7_a1_b(tv1)) {
				tv0->AddReply(533237, 34752, 34751);
			}
			tv0->AddReply(533244, -1, 34758);
			tv0->AddReply(535757, -1, 37438);
			break;
			return;
		}
		if (f_19c0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1929_a1_v(tv2);
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

	void f_110f_a1_v(string a0)
	{
		if (!f_19c0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1930_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1945_a0_v();
			if (a1 == 34757) {
				f_19f1_a2_v(tv1, tv0);
			}
			if (a1 == 37459) {
				f_19f1_a2_v(tv1, tv0);
			}
			if (a1 == 37458) {
				f_19f1_a2_v(tv1, tv0);
			}
			if (a0 == 34750) {
				f_110f_a1_v("Neutral");
				tv0->SetMessage(533236);
				tv0->ClearReplies();
				if (f_1ac7_a1_b(tv1)) {
					tv0->AddReply(533237, 34752, 34751);
				}
				tv0->AddReply(533244, -1, 34758);
				tv0->AddReply(535757, -1, 37438);
				return;
			}
			if (a0 == 34752) {
				f_110f_a1_v("Neutral");
				tv0->SetMessage(533238);
				tv0->ClearReplies();
				tv0->AddReply(535764, 37446, 37445);
				tv0->AddReply(533239, 37440, 34753);
				return;
			}
			if (a0 == 37446) {
				f_110f_a1_v("Neutral");
				tv0->SetMessage(535765);
				tv0->ClearReplies();
				tv0->AddReply(535766, 34754, 37447);
				return;
			}
			if (a0 == 34754) {
				f_110f_a1_v("Neutral");
				tv0->SetMessage(533240);
				tv0->ClearReplies();
				tv0->AddReply(533241, 34756, 34755);
				tv0->AddReply(535767, 37440, 37448);
				return;
			}
			if (a0 == 34756) {
				f_110f_a1_v("Neutral");
				tv0->SetMessage(533242);
				tv0->ClearReplies();
				tv0->AddReply(535758, 37440, 37439);
				return;
			}
			if (a0 == 37440) {
				f_110f_a1_v("Neutral");
				tv0->SetMessage(535759);
				tv0->ClearReplies();
				tv0->AddReply(535760, 37442, 37441);
				tv0->AddReply(535770, 37442, 37453);
				return;
			}
			if (a0 == 37442) {
				f_110f_a1_v("Neutral");
				tv0->SetMessage(535761);
				tv0->ClearReplies();
				tv0->AddReply(535762, 37444, 37443);
				tv0->AddReply(535771, -1, 37455);
				return;
			}
			if (a0 == 37444) {
				f_110f_a1_v("Neutral");
				tv0->SetMessage(535763);
				tv0->ClearReplies();
				tv0->AddReply(535772, 37457, 37456);
				tv0->AddReply(535774, -1, 37458);
				return;
			}
			if (a0 == 37457) {
				f_110f_a1_v("Neutral");
				tv0->SetMessage(535773);
				tv0->ClearReplies();
				tv0->AddReply(533243, -1, 34757);
				tv0->AddReply(535775, -1, 37459);
				return;
			}
			tv3 = true;
			if (f_19c0_a0_b()) {
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
		f_189f_a1_b(f_194c_a0_o());
		if (!f_184a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_19ba_a0_i());
		L0->SetNPCDescription(f_19b8_a0_i());
		L0->SetPhoto(f_19bc_a0_s());
		L0->SetPhoto2(f_19be_a0_s());
		L0->SetPlayerName(f_1c3b_a0_i());
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
		f_188e_a1_v(a0);
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
			if (f_1b93_a1_b(tv1)) {
				f_1a59_a2_v(tv1, tv0);
				f_12c3_a1_v("Neutral");
				tv0->SetMessage(512310);
				tv0->ClearReplies();
				tv0->AddReply(512311, 13471, 13470);
				tv0->AddReply(512313, 13473, 13472);
				break;
			}
			f_12c3_a1_v("Neutral");
			tv0->SetMessage(513777);
			tv0->ClearReplies();
			tv0->AddReply(513778, -1, 15014);
			break;
			return;
		}
		if (f_19c0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1929_a1_v(tv2);
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

	void f_12c3_a1_v(string a0)
	{
		if (!f_19c0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1930_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1945_a0_v();
			if (a0 == 13469) {
				if (f_1b93_a1_b(tv1)) {
					f_1a59_a2_v(tv1, tv0);
					f_12c3_a1_v("Neutral");
					tv0->SetMessage(512310);
					tv0->ClearReplies();
					tv0->AddReply(512311, 13471, 13470);
					tv0->AddReply(512313, 13473, 13472);
					return;
				}
				f_12c3_a1_v("Neutral");
				tv0->SetMessage(513777);
				tv0->ClearReplies();
				tv0->AddReply(513778, -1, 15014);
				return;
			}
			if (a0 == 13473) {
				f_12c3_a1_v("Neutral");
				tv0->SetMessage(512314);
				tv0->ClearReplies();
				tv0->AddReply(512315, 13475, 13474);
				return;
			}
			if (a0 == 13475) {
				f_12c3_a1_v("Neutral");
				tv0->SetMessage(512316);
				tv0->ClearReplies();
				tv0->AddReply(512317, 13477, 13476);
				return;
			}
			if (a0 == 13477) {
				f_12c3_a1_v("Neutral");
				tv0->SetMessage(512318);
				tv0->ClearReplies();
				tv0->AddReply(512319, 13482, 13478);
				return;
			}
			if (a0 == 13482) {
				f_12c3_a1_v("Neutral");
				tv0->SetMessage(512323);
				tv0->ClearReplies();
				tv0->AddReply(512324, 13484, 13483);
				return;
			}
			if (a0 == 13484) {
				f_12c3_a1_v("Neutral");
				tv0->SetMessage(512325);
				tv0->ClearReplies();
				tv0->AddReply(512326, 13486, 13485);
				return;
			}
			if (a0 == 13486) {
				f_12c3_a1_v("Neutral");
				tv0->SetMessage(512327);
				tv0->ClearReplies();
				tv0->AddReply(512328, -1, 13487);
				return;
			}
			if (a0 == 13471) {
				f_12c3_a1_v("Neutral");
				tv0->SetMessage(512312);
				tv0->ClearReplies();
				tv0->AddReply(512320, 13480, 13479);
				return;
			}
			if (a0 == 13480) {
				f_12c3_a1_v("Neutral");
				tv0->SetMessage(512321);
				tv0->ClearReplies();
				tv0->AddReply(512322, -1, 13481);
				return;
			}
			tv3 = true;
			if (f_19c0_a0_b()) {
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
		f_189f_a1_b(f_194c_a0_o());
		if (!f_184a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_19ba_a0_i());
		L0->SetNPCDescription(f_19b8_a0_i());
		L0->SetPhoto(f_19bc_a0_s());
		L0->SetPhoto2(f_19be_a0_s());
		L0->SetPlayerName(f_1c3b_a0_i());
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
		f_188e_a1_v(a0);
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
			if (f_1bdb_a1_b(tv1) && !f_1bcf_a1_b(tv1) && !f_1bc3_a1_b(tv1)) {
				f_1a7f_a2_v(tv1, tv0);
				f_147c_a1_v("Neutral");
				tv0->SetMessage(512892);
				tv0->ClearReplies();
				tv0->AddReply(539495, 41421, 41420);
				tv0->AddReply(539501, 41427, 41426);
				break;
			}
			f_147c_a1_v("Neutral");
			tv0->SetMessage(512974);
			tv0->ClearReplies();
			if (f_1ad3_a1_b(tv1) && f_1adf_a1_b(tv1)) {
				tv0->AddReply(534097, 38198, 35690);
			}
			tv0->AddReply(536416, -1, 38196);
			tv0->AddReply(512975, -1, 14180);
			break;
			return;
		}
		if (f_19c0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1929_a1_v(tv2);
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

	void f_147c_a1_v(string a0)
	{
		if (!f_19c0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1930_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1945_a0_v();
			if (a1 == 14178) {
				f_1a85_a2_v(tv1, tv0);
			}
			if (a1 == 41435) {
				f_1a85_a2_v(tv1, tv0);
			}
			if (a1 == 35690) {
				f_19fa_a2_v(tv1, tv0);
			}
			if (a0 == 14094) {
				if (f_1bdb_a1_b(tv1) && !f_1bcf_a1_b(tv1) && !f_1bc3_a1_b(tv1)) {
					f_1a7f_a2_v(tv1, tv0);
					f_147c_a1_v("Neutral");
					tv0->SetMessage(512892);
					tv0->ClearReplies();
					tv0->AddReply(539495, 41421, 41420);
					tv0->AddReply(539501, 41427, 41426);
					return;
				}
				f_147c_a1_v("Neutral");
				tv0->SetMessage(512974);
				tv0->ClearReplies();
				if (f_1ad3_a1_b(tv1) && f_1adf_a1_b(tv1)) {
					tv0->AddReply(534097, 38198, 35690);
				}
				tv0->AddReply(536416, -1, 38196);
				tv0->AddReply(512975, -1, 14180);
				return;
			}
			if (a0 == 38198) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(536418);
				tv0->ClearReplies();
				tv0->AddReply(536419, 38200, 38199);
				tv0->AddReply(536427, 36081, 38209);
				return;
			}
			if (a0 == 38200) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(536420);
				tv0->ClearReplies();
				tv0->AddReply(536421, 38202, 38201);
				return;
			}
			if (a0 == 38202) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(536422);
				tv0->ClearReplies();
				tv0->AddReply(536423, 35691, 38203);
				tv0->AddReply(536424, 35691, 38204);
				return;
			}
			if (a0 == 35691) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(534098);
				tv0->ClearReplies();
				tv0->AddReply(534447, 36081, 36080);
				tv0->AddReply(536417, 38216, 38197);
				return;
			}
			if (a0 == 38216) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(536431);
				tv0->ClearReplies();
				tv0->AddReply(536432, 38212, 38217);
				return;
			}
			if (a0 == 36081) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(534448);
				tv0->ClearReplies();
				tv0->AddReply(534099, 38212, 35692);
				return;
			}
			if (a0 == 38212) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(536429);
				tv0->ClearReplies();
				tv0->AddReply(536428, 38206, 38211);
				tv0->AddReply(536430, 38206, 38214);
				return;
			}
			if (a0 == 38206) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(536425);
				tv0->ClearReplies();
				tv0->AddReply(536426, -1, 38207);
				return;
			}
			if (a0 == 41427) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(539502);
				tv0->ClearReplies();
				tv0->AddReply(539503, 41421, 41428);
				return;
			}
			if (a0 == 41421) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(539496);
				tv0->ClearReplies();
				tv0->AddReply(539497, 41423, 41422);
				return;
			}
			if (a0 == 41423) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(539498);
				tv0->ClearReplies();
				tv0->AddReply(539499, 41425, 41424);
				tv0->AddReply(539504, 41431, 41430);
				return;
			}
			if (a0 == 41431) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(539505);
				tv0->ClearReplies();
				tv0->AddReply(539506, 14175, 41432);
				tv0->AddReply(539507, 14175, 41433);
				return;
			}
			if (a0 == 41425) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(539500);
				tv0->ClearReplies();
				tv0->AddReply(512893, 14175, 14095);
				tv0->AddReply(512969, 14175, 14174);
				return;
			}
			if (a0 == 14175) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(512970);
				tv0->ClearReplies();
				tv0->AddReply(512971, 14177, 14176);
				return;
			}
			if (a0 == 14177) {
				f_147c_a1_v("Neutral");
				tv0->SetMessage(512972);
				tv0->ClearReplies();
				tv0->AddReply(512973, -1, 14178);
				tv0->AddReply(539508, -1, 41435);
				return;
			}
			tv3 = true;
			if (f_19c0_a0_b()) {
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
		f_189f_a1_b(f_194c_a0_o());
		if (!f_184a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_19ba_a0_i());
		L0->SetNPCDescription(f_19b8_a0_i());
		L0->SetPhoto(f_19bc_a0_s());
		L0->SetPhoto2(f_19be_a0_s());
		L0->SetPlayerName(f_1c3b_a0_i());
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
		f_188e_a1_v(a0);
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
			f_16da_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_19c0_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1929_a1_v(tv2);
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

	void f_16da_a1_v(string a0)
	{
		if (!f_19c0_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1930_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1945_a0_v();
			if (a0 == 42557) {
				f_16da_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_19c0_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t23
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_1721_a0_v();
	}

	void f_1721_a0_v(void)
	{
		if (!f_1845_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_17d7_a0_v();
		}
	}

	bool f_1735_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_183c_a1_b(L0);
	}

	void f_1744_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1749_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1823_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_175f_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1768_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1768_a0_v();
			if (f_1845_a0_b() && f_1749_a0_b()) {
				if (f_1735_a0_b()) {
					f_18d9_a1_b(f_194c_a0_o());
				}
			} else {
				f_1744_a0_v();
				f_175f_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_181e_a0_v();
		f_1768_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_1768_a0_v();
		f_1929_a1_v("Neutral");
		f_175f_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_175f_a0_v();
		} else {
			f_1929_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_181e_a0_v();
			f_183c_a1_b(a0);
			enable OnUse;
			f_1c99_a1_v(a0);
			f_1929_a1_v("Neutral");
			f_1768_a0_v();
			f_175f_a0_v();
		}
	}
}

void f_17d7_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1845_a0_b()) {
		return;
	}
	L0 = f_19a7_a0_i();
	for (L1 = 0; L1 < 5 && f_1845_a0_b(); L1++) {
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
			@PlayAnimation("all", f_19a0_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_181c_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_181c_a0_b(void)
{
	return true;
}

void f_181e_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1823_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_182b_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1832_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_183c_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1832_a1_b(L0);
}

bool f_1845_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_184a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1952_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_19c0_a0_b()) {
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

void f_188e_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_19c0_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_189f_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_18d9_a1_b(a0)) {
			if (!f_18fe_a1_b(a0)) {
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
		if (!f_18fe_a1_b(a0)) {
			if (!f_18d9_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_18d9_a1_b(object a0)
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
	return f_1936_a1_b(L4);
}

bool f_18fe_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1991_a0_i() + "m";
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
	return f_1936_a1_b(L4);
}

void f_1929_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1930_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_1936_a1_b(string a0)
{
	if (f_19c0_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1945_a0_v(void)
{
	if (f_19c0_a0_b()) {
		@lshStopSpeech();
	}
}

object f_194c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1952_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_195c_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_1961_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_196d_a2_v(object a0, int a1)
{
	f_182b_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1961_a2_v(L0, a1);
	}
}

bool f_1980_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_198c_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1991_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_199a_a1_b(int a0)
{
	return f_1991_a0_i() == a0;
}

string f_19a0_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_19a7_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_19a0_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_19b8_a0_i(void)
{
	return 515543;
}

int f_19ba_a0_i(void)
{
	return 502868;
}

string f_19bc_a0_s(void)
{
	return "ui/NPC_Maria.png";
}

string f_19be_a0_s(void)
{
	return "ui/NPC_Maria_b.png";
}

bool f_19c0_a0_b(void)
{
	return true;
}

void f_19c2_a2_v(object a0, object a1)
{
	@SetVariable("ood1Maria1", 1);
}

void f_19c8_a2_v(object a0, object a1)
{
	@SetVariable("d1q01RescueListBadReply", 1);
}

void f_19ce_a2_v(object a0, object a1)
{
	f_1980_a2_b("quest_d1_01", "place_masks");
}

void f_19d5_a2_v(object a0, object a1)
{
	@SetVariable("ood1Maria2", 1);
}

void f_19db_a2_v(object a0, object a1)
{
	@SetVariable("ood1Maria3", 1);
}

void f_19e1_a2_v(object a0, object a1)
{
	@Trace("money2000 is given");
	f_196d_a2_v(a0, 2000);
}

void f_19eb_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_19f1_a2_v(object a0, object a1)
{
	@SetVariable("d7q03", 2);
	f_1bf4_a0_v();
}

void f_19fa_a2_v(object a0, object a1)
{
	@SetVariable("ood10Maria2", 1);
}

void f_1a00_a2_v(object a0, object a1)
{
	@SetVariable("ood3Maria1", 1);
}

void f_1a06_a2_v(object a0, object a1)
{
	@SetVariable("ood3Maria2", 1);
}

void f_1a0c_a2_v(object a0, object a1)
{
	@SetVariable("ood4Maria1", 1);
}

void f_1a12_a2_v(object a0, object a1)
{
	@SetVariable("ood4Maria2", 1);
}

void f_1a18_a2_v(object a0, object a1)
{
	@SetVariable("ood2Maria1", 1);
}

void f_1a1e_a2_v(object a0, object a1)
{
	@SetVariable("ood2Maria2", 1);
}

void f_1a24_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 4);
	L0 = f_1c2a_a0_o();
	L0->AddMark("d2q02MariaGotoPetr", "pt_map_petr", 0, 515275, f_198c_a0_f());
	f_1be7_a0_v();
}

void f_1a3b_a2_v(object a0, object a1)
{
	@SetVariable("d2q03MariaGotoViktor", 1);
}

void f_1a41_a2_v(object a0, object a1)
{
	@SetVariable("KnowViktor", 1);
}

void f_1a47_a2_v(object a0, object a1)
{
	@SetVariable("KnowAlexandr", 1);
}

void f_1a4d_a2_v(object a0, object a1)
{
	@SetVariable("ood6Maria1", 1);
}

void f_1a53_a2_v(object a0, object a1)
{
	@SetVariable("ood6Maria2", 1);
}

void f_1a59_a2_v(object a0, object a1)
{
	@SetVariable("ood8Maria1", 1);
}

void f_1a5f_a2_v(object a0, object a1)
{
	@SetVariable("KnowMaria", 1);
}

void f_1a65_a2_v(object a0, object a1)
{
	@SetVariable("resque_list", 1);
	f_1c95_a0_v();
}

void f_1a6e_a2_v(object a0, object a1)
{
	a1->SetReturnValue(2000);
}

void f_1a73_a2_v(object a0, object a1)
{
	@SetVariable("ood1Maria5", 1);
}

void f_1a79_a2_v(object a0, object a1)
{
	@SetVariable("d6MariaVisit", 1);
}

void f_1a7f_a2_v(object a0, object a1)
{
	@SetVariable("ood10Maria1", 1);
}

void f_1a85_a2_v(object a0, object a1)
{
	@SetVariable("d10q01MariaSavePetr", 1);
}

bool f_1a8b_a1_b(object a0)
{
	if (f_195c_a1_i("d1q01RescueListBadReply") != 0) {
		return true;
	}
	return false;
}

bool f_1a97_a1_b(object a0)
{
	if (f_195c_a1_i("ood1Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_1aa3_a1_b(object a0)
{
	if (f_195c_a1_i("ood1Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_1aaf_a1_b(object a0)
{
	if (f_195c_a1_i("ood1Maria3") == 0) {
		return true;
	}
	return false;
}

bool f_1abb_a1_b(object a0)
{
	if (f_195c_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_1ac7_a1_b(object a0)
{
	if (f_195c_a1_i("d7q03") == 1) {
		return true;
	}
	return false;
}

bool f_1ad3_a1_b(object a0)
{
	if (f_195c_a1_i("d10q02") == 2) {
		return true;
	}
	return false;
}

bool f_1adf_a1_b(object a0)
{
	if (f_195c_a1_i("ood10Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_1aeb_a1_b(object a0)
{
	if (f_195c_a1_i("d3KaterinaAboutKills") != 0) {
		return true;
	}
	return false;
}

bool f_1af7_a1_b(object a0)
{
	if (f_195c_a1_i("ood3Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_1b03_a1_b(object a0)
{
	if (f_195c_a1_i("ood3Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_1b0f_a1_b(object a0)
{
	if (f_195c_a1_i("ood4Maria1") == 1) {
		return true;
	}
	return false;
}

bool f_1b1b_a1_b(object a0)
{
	if (f_195c_a1_i("ood4Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_1b27_a1_b(object a0)
{
	if (f_195c_a1_i("ood2Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_1b33_a1_b(object a0)
{
	if (f_195c_a1_i("ood2Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_1b3f_a1_b(object a0)
{
	if (f_195c_a1_i("d2q02") == 3) {
		return true;
	}
	return false;
}

bool f_1b4b_a1_b(object a0)
{
	if (f_195c_a1_i("d2q03") == 1) {
		return true;
	}
	return false;
}

bool f_1b57_a1_b(object a0)
{
	if (f_195c_a1_i("d3q02") == 3) {
		return true;
	}
	return false;
}

bool f_1b63_a1_b(object a0)
{
	if (f_195c_a1_i("d4q03") == 0) {
		return true;
	}
	return false;
}

bool f_1b6f_a1_b(object a0)
{
	if (f_195c_a1_i("d6q01") == 0) {
		return true;
	}
	return false;
}

bool f_1b7b_a1_b(object a0)
{
	if (f_195c_a1_i("ood6Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_1b87_a1_b(object a0)
{
	if (f_195c_a1_i("ood6Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_1b93_a1_b(object a0)
{
	if (f_195c_a1_i("ood8Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_1b9f_a1_b(object a0)
{
	if (f_195c_a1_i("KnowGeorg") == 1) {
		return true;
	}
	return false;
}

bool f_1bab_a1_b(object a0)
{
	if (f_195c_a1_i("d2q01") >= 5) {
		return true;
	}
	return false;
}

bool f_1bb7_a1_b(object a0)
{
	if (f_195c_a1_i("ood1Maria5") == 0) {
		return true;
	}
	return false;
}

bool f_1bc3_a1_b(object a0)
{
	if (f_195c_a1_i("d10q01") == 0) {
		return true;
	}
	return false;
}

bool f_1bcf_a1_b(object a0)
{
	if (f_195c_a1_i("d10q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1bdb_a1_b(object a0)
{
	if (f_195c_a1_i("ood10Maria1") == 0) {
		return true;
	}
	return false;
}

void f_1be7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 134, 2, 515285);
	f_1c0e_a2_b(L0, 11);
}

void f_1bf4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 643, 2, 533277);
	f_1c0e_a2_b(L0, 641);
}

object f_1c01_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1c0e_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1c01_a0_o();
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

object f_1c2a_a0_o(void)
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

int f_1c3b_a0_i(void)
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

void f_1c4c_a3_v(object a0, bool a1, int a2)
{
	a0->add(6);
	a0->add(26);
	a0->add(2);
	a0->add(22);
	if (a1 == false) {
		a0->add(15);
		a0->add(5);
		a0->add(16);
		a0->add(19);
	} else {
		if (a2 != 0) {
			a0->add(15);
		}
	}
}

void f_1c70_a1_v(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	@SetVariable("vol_" + a0, L0 | 8);
}

void f_1c7c_a0_v(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_1c4c_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		f_1c70_a1_v(L3);
	}
}

void f_1c95_a0_v(void)
{
	f_1c7c_a0_v();
}

void f_1c99_a1_v(object a0)
{
	if (!g1) {
		t3{a0};
		g1 = true;
	}
	if (f_199a_a1_b(1)) {
		if (2000 == t7{a0}) {
			@ShowWindow("people.xml", true);
		}
		return;
	}
	if (f_199a_a1_b(2)) {
		t9{a0};
		return;
	}
	if (f_199a_a1_b(3)) {
		t11{a0};
		return;
	}
	if (f_199a_a1_b(4)) {
		t13{a0};
		return;
	}
	if (f_199a_a1_b(6)) {
		t5{a0};
		return;
	}
	if (f_199a_a1_b(7)) {
		t15{a0};
		return;
	}
	if (f_199a_a1_b(8)) {
		t17{a0};
		return;
	}
	if (f_199a_a1_b(10)) {
		t19{a0};
		return;
	}
	if (f_199a_a1_b(12)) {
		t1{a0};
		return;
	}
	t21{a0};
}

