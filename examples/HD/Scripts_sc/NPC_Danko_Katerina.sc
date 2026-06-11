event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;

task t0
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_12e7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1483_a0_i());
		L0->SetNPCDescription(f_1481_a0_i());
		L0->SetPhoto(f_1485_a0_s());
		L0->SetPhoto2(f_1487_a0_s());
		L0->SetPlayerName(f_171b_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_133e_a1_b(f_13fd_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_132c_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t1
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
			f_148b_a2_v(tv1, tv0);
			f_95_a1_v("Neutral");
			tv0->SetMessage(500295);
			tv0->ClearReplies();
			tv0->AddReply(500296, 350, 347);
			tv0->AddReply(500297, 350, 348);
			tv0->AddReply(500298, 350, 349);
			break;
			return;
		}
		if (f_1489_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_13c8_a1_v(tv2);
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

	void f_95_a1_v(string a0)
	{
		if (!f_1489_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_13d8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_13f6_a0_v();
			if (a0 == 346) {
				f_148b_a2_v(tv1, tv0);
				f_95_a1_v("Neutral");
				tv0->SetMessage(500295);
				tv0->ClearReplies();
				tv0->AddReply(500296, 350, 347);
				tv0->AddReply(500297, 350, 348);
				tv0->AddReply(500298, 350, 349);
				return;
			}
			if (a0 == 350) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(500299);
				tv0->ClearReplies();
				tv0->AddReply(500300, 355, 351);
				tv0->AddReply(500301, 358, 352);
				return;
			}
			if (a0 == 358) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(500305);
				tv0->ClearReplies();
				tv0->AddReply(500306, -1, 359);
				tv0->AddReply(500307, -1, 360);
				return;
			}
			if (a0 == 355) {
				f_95_a1_v("Neutral");
				tv0->SetMessage(500302);
				tv0->ClearReplies();
				tv0->AddReply(500304, -1, 357);
				tv0->AddReply(500303, -1, 356);
				return;
			}
			tv3 = true;
			if (f_1489_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
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
		if (!f_12e7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1483_a0_i());
		L0->SetNPCDescription(f_1481_a0_i());
		L0->SetPhoto(f_1485_a0_s());
		L0->SetPhoto2(f_1487_a0_s());
		L0->SetPlayerName(f_171b_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_133e_a1_b(f_13fd_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_132c_a1_v(a0);
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
			f_1f5_a1_v("Fear");
			tv0->SetMessage(512770);
			tv0->ClearReplies();
			if (f_15ff_a1_b(tv1) && f_15e7_a1_b(tv1)) {
				tv0->AddReply(512771, 3726, 13970);
			}
			if (f_160b_a1_b(tv1) && f_15f3_a1_b(tv1)) {
				tv0->AddReply(512772, 13972, 13971);
			}
			if (f_1617_a1_b(tv1) && f_162f_a1_b(tv1) || f_1623_a1_b(tv1) && f_162f_a1_b(tv1)) {
				tv0->AddReply(512791, 13991, 13990);
			}
			tv0->AddReply(512790, -1, 13989);
			break;
			return;
		}
		if (f_1489_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_13c8_a1_v(tv2);
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

	void f_1f5_a1_v(string a0)
	{
		if (!f_1489_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_13d8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_13f6_a0_v();
			if (a1 == 3742) {
				f_1502_a2_v(tv1, tv0);
			}
			if (a1 == 3745) {
				f_1502_a2_v(tv1, tv0);
			}
			if (a1 == 3746) {
				f_1502_a2_v(tv1, tv0);
			}
			if (a1 == 3740) {
				f_1502_a2_v(tv1, tv0);
			}
			if (a1 == 13984) {
				f_1508_a2_v(tv1, tv0);
				f_150e_a2_v(tv1, tv0);
			}
			if (a1 == 13988) {
				f_1508_a2_v(tv1, tv0);
				f_150e_a2_v(tv1, tv0);
			}
			if (a1 == 13990) {
				f_1533_a2_v(tv1, tv0);
			}
			if (a0 == 13969) {
				f_1f5_a1_v("Fear");
				tv0->SetMessage(512770);
				tv0->ClearReplies();
				if (f_15ff_a1_b(tv1) && f_15e7_a1_b(tv1)) {
					tv0->AddReply(512771, 3726, 13970);
				}
				if (f_160b_a1_b(tv1) && f_15f3_a1_b(tv1)) {
					tv0->AddReply(512772, 13972, 13971);
				}
				if (f_1617_a1_b(tv1) && f_162f_a1_b(tv1) || f_1623_a1_b(tv1) && f_162f_a1_b(tv1)) {
					tv0->AddReply(512791, 13991, 13990);
				}
				tv0->AddReply(512790, -1, 13989);
				return;
			}
			if (a0 == 13991) {
				f_1f5_a1_v("Fear");
				tv0->SetMessage(512792);
				tv0->ClearReplies();
				tv0->AddReply(512793, 13993, 13992);
				return;
			}
			if (a0 == 13993) {
				f_1f5_a1_v("Fear");
				tv0->SetMessage(512794);
				tv0->ClearReplies();
				tv0->AddReply(512795, -1, 13994);
				tv0->AddReply(512798, -1, 13997);
				return;
			}
			if (a0 == 13972) {
				f_1f5_a1_v("Fear");
				tv0->SetMessage(512773);
				tv0->ClearReplies();
				tv0->AddReply(512774, 13974, 13973);
				return;
			}
			if (a0 == 13974) {
				f_1f5_a1_v("Fear");
				tv0->SetMessage(512775);
				tv0->ClearReplies();
				tv0->AddReply(512776, 13976, 13975);
				return;
			}
			if (a0 == 13976) {
				f_1f5_a1_v("Suffering");
				tv0->SetMessage(512777);
				tv0->ClearReplies();
				tv0->AddReply(512779, 13980, 13978);
				tv0->AddReply(512778, 13979, 13977);
				return;
			}
			if (a0 == 13979) {
				f_1f5_a1_v("Neutral");
				tv0->SetMessage(512780);
				tv0->ClearReplies();
				tv0->AddReply(513020, 13983, 14226);
				tv0->AddReply(541840, 13983, 44057);
				return;
			}
			if (a0 == 13980) {
				f_1f5_a1_v("Suffering");
				tv0->SetMessage(512781);
				tv0->ClearReplies();
				tv0->AddReply(512782, 13983, 13981);
				return;
			}
			if (a0 == 13983) {
				f_1f5_a1_v("Neutral");
				tv0->SetMessage(512784);
				tv0->ClearReplies();
				tv0->AddReply(512785, -1, 13984);
				tv0->AddReply(512783, 13985, 13982);
				return;
			}
			if (a0 == 13985) {
				f_1f5_a1_v("Neutral");
				tv0->SetMessage(512786);
				tv0->ClearReplies();
				tv0->AddReply(512787, 13987, 13986);
				return;
			}
			if (a0 == 13987) {
				f_1f5_a1_v("Neutral");
				tv0->SetMessage(512788);
				tv0->ClearReplies();
				tv0->AddReply(512789, -1, 13988);
				return;
			}
			if (a0 == 3726) {
				f_1f5_a1_v("Fear");
				tv0->SetMessage(503459);
				tv0->ClearReplies();
				tv0->AddReply(503460, 3729, 3727);
				tv0->AddReply(503461, 3730, 3728);
				return;
			}
			if (a0 == 3730) {
				f_1f5_a1_v("Fear");
				tv0->SetMessage(503463);
				tv0->ClearReplies();
				tv0->AddReply(503464, 3729, 3731);
				tv0->AddReply(503465, 3734, 3733);
				return;
			}
			if (a0 == 3734) {
				f_1f5_a1_v("Fear");
				tv0->SetMessage(503466);
				tv0->ClearReplies();
				tv0->AddReply(503467, 3729, 3735);
				tv0->AddReply(503468, 3729, 3736);
				return;
			}
			if (a0 == 3729) {
				f_1f5_a1_v("Fear");
				tv0->SetMessage(503462);
				tv0->ClearReplies();
				tv0->AddReply(503469, 3741, 3739);
				tv0->AddReply(503470, -1, 3740);
				return;
			}
			if (a0 == 3741) {
				f_1f5_a1_v("Neutral");
				tv0->SetMessage(503471);
				tv0->ClearReplies();
				tv0->AddReply(503472, -1, 3742);
				tv0->AddReply(503473, 3744, 3743);
				return;
			}
			if (a0 == 3744) {
				f_1f5_a1_v("Neutral");
				tv0->SetMessage(503474);
				tv0->ClearReplies();
				tv0->AddReply(503475, -1, 3745);
				tv0->AddReply(503476, -1, 3746);
				return;
			}
			tv3 = true;
			if (f_1489_a0_b()) {
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
		if (!f_12e7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1483_a0_i());
		L0->SetNPCDescription(f_1481_a0_i());
		L0->SetPhoto(f_1485_a0_s());
		L0->SetPhoto2(f_1487_a0_s());
		L0->SetPlayerName(f_171b_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_133e_a1_b(f_13fd_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_132c_a1_v(a0);
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
			if (f_1653_a1_b(tv1)) {
				f_1550_a2_v(tv1, tv0);
				f_4e0_a1_v("Neutral");
				tv0->SetMessage(509330);
				tv0->ClearReplies();
				tv0->AddReply(509331, 10248, 10247);
				tv0->AddReply(509340, 10248, 10258);
				tv0->AddReply(509341, 10248, 10260);
				break;
			}
			if (f_165f_a1_b(tv1)) {
				f_1556_a2_v(tv1, tv0);
				f_4e0_a1_v("Neutral");
				tv0->SetMessage(509323);
				tv0->ClearReplies();
				tv0->AddReply(509324, 10239, 10238);
				tv0->AddReply(509328, 10239, 10242);
				tv0->AddReply(509329, 10239, 10244);
				break;
			}
			f_4e0_a1_v("Neutral");
			tv0->SetMessage(515792);
			tv0->ClearReplies();
			tv0->AddReply(533895, -1, 35453);
			tv0->AddReply(533894, -1, 35452);
			break;
			return;
		}
		if (f_1489_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_13c8_a1_v(tv2);
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

	void f_4e0_a1_v(string a0)
	{
		if (!f_1489_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_13d8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_13f6_a0_v();
			if (a0 == 10246) {
				if (f_1653_a1_b(tv1)) {
					f_1550_a2_v(tv1, tv0);
					f_4e0_a1_v("Neutral");
					tv0->SetMessage(509330);
					tv0->ClearReplies();
					tv0->AddReply(509331, 10248, 10247);
					tv0->AddReply(509340, 10248, 10258);
					tv0->AddReply(509341, 10248, 10260);
					return;
				}
				if (f_165f_a1_b(tv1)) {
					f_1556_a2_v(tv1, tv0);
					f_4e0_a1_v("Neutral");
					tv0->SetMessage(509323);
					tv0->ClearReplies();
					tv0->AddReply(509324, 10239, 10238);
					tv0->AddReply(509328, 10239, 10242);
					tv0->AddReply(509329, 10239, 10244);
					return;
				}
				f_4e0_a1_v("Neutral");
				tv0->SetMessage(515792);
				tv0->ClearReplies();
				tv0->AddReply(533895, -1, 35453);
				tv0->AddReply(533894, -1, 35452);
				return;
			}
			if (a0 == 10239) {
				f_4e0_a1_v("Neutral");
				tv0->SetMessage(509325);
				tv0->ClearReplies();
				tv0->AddReply(509326, -1, 10240);
				tv0->AddReply(509327, -1, 10241);
				return;
			}
			if (a0 == 10248) {
				f_4e0_a1_v("Grin");
				tv0->SetMessage(509332);
				tv0->ClearReplies();
				tv0->AddReply(509333, 10250, 10249);
				tv0->AddReply(509338, 10250, 10254);
				tv0->AddReply(509339, 10250, 10256);
				return;
			}
			if (a0 == 10250) {
				f_4e0_a1_v("Grin");
				tv0->SetMessage(509334);
				tv0->ClearReplies();
				tv0->AddReply(509335, -1, 10251);
				tv0->AddReply(509336, -1, 10252);
				tv0->AddReply(509337, -1, 10253);
				return;
			}
			tv3 = true;
			if (f_1489_a0_b()) {
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
		if (!f_12e7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1483_a0_i());
		L0->SetNPCDescription(f_1481_a0_i());
		L0->SetPhoto(f_1485_a0_s());
		L0->SetPhoto2(f_1487_a0_s());
		L0->SetPlayerName(f_171b_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_133e_a1_b(f_13fd_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_132c_a1_v(a0);
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
			if (f_163b_a1_b(tv1) && f_1592_a1_b(tv1)) {
				f_1539_a2_v(tv1, tv0);
				f_671_a1_v("Grin");
				tv0->SetMessage(509926);
				tv0->ClearReplies();
				tv0->AddReply(509927, 10938, 10937);
				tv0->AddReply(509940, 10954, 10953);
				break;
			}
			f_671_a1_v("Penetrating");
			tv0->SetMessage(532898);
			tv0->ClearReplies();
			if (f_15b7_a1_b(tv1)) {
				tv0->AddReply(532897, 11224, 34384);
			}
			tv0->AddReply(534175, -1, 35757);
			tv0->AddReply(534555, -1, 36187);
			break;
			return;
		}
		if (f_1489_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_13c8_a1_v(tv2);
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

	void f_671_a1_v(string a0)
	{
		if (!f_1489_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_13d8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_13f6_a0_v();
			if (a1 == 10945) {
				f_153f_a2_v(tv1, tv0);
				f_1491_a2_v(tv1, tv0);
			}
			if (a1 == 10946) {
				f_153f_a2_v(tv1, tv0);
				f_1491_a2_v(tv1, tv0);
			}
			if (a1 == 34384) {
				f_14cd_a2_v(tv1, tv0);
				f_14d3_a2_v(tv1, tv0);
			}
			if (a0 == 10936) {
				if (f_163b_a1_b(tv1) && f_1592_a1_b(tv1)) {
					f_1539_a2_v(tv1, tv0);
					f_671_a1_v("Grin");
					tv0->SetMessage(509926);
					tv0->ClearReplies();
					tv0->AddReply(509927, 10938, 10937);
					tv0->AddReply(509940, 10954, 10953);
					return;
				}
				f_671_a1_v("Penetrating");
				tv0->SetMessage(532898);
				tv0->ClearReplies();
				if (f_15b7_a1_b(tv1)) {
					tv0->AddReply(532897, 11224, 34384);
				}
				tv0->AddReply(534175, -1, 35757);
				tv0->AddReply(534555, -1, 36187);
				return;
			}
			if (a0 == 11224) {
				f_671_a1_v("Penetrating");
				tv0->SetMessage(510178);
				tv0->ClearReplies();
				tv0->AddReply(510186, 11233, 11232);
				tv0->AddReply(510464, 11233, 11537);
				return;
			}
			if (a0 == 11233) {
				f_671_a1_v("Penetrating");
				tv0->SetMessage(510187);
				tv0->ClearReplies();
				tv0->AddReply(510179, 11226, 11225);
				tv0->AddReply(510463, 11226, 11536);
				return;
			}
			if (a0 == 11226) {
				f_671_a1_v("Suffering");
				tv0->SetMessage(510180);
				tv0->ClearReplies();
				tv0->AddReply(510465, 11541, 11540);
				tv0->AddReply(510470, 11228, 11547);
				return;
			}
			if (a0 == 11541) {
				f_671_a1_v("Penetrating");
				tv0->SetMessage(510466);
				tv0->ClearReplies();
				tv0->AddReply(510181, 11228, 11227);
				tv0->AddReply(510467, 11228, 11542);
				tv0->AddReply(510468, 11228, 11543);
				return;
			}
			if (a0 == 11228) {
				f_671_a1_v("Grin");
				tv0->SetMessage(510182);
				tv0->ClearReplies();
				tv0->AddReply(510183, 11230, 11229);
				return;
			}
			if (a0 == 11230) {
				f_671_a1_v("Grin");
				tv0->SetMessage(510184);
				tv0->ClearReplies();
				tv0->AddReply(510185, 11234, 11231);
				tv0->AddReply(510469, 11234, 11546);
				return;
			}
			if (a0 == 11234) {
				f_671_a1_v("Penetrating");
				tv0->SetMessage(510188);
				tv0->ClearReplies();
				tv0->AddReply(510189, -1, 11235);
				tv0->AddReply(510471, -1, 11549);
				tv0->AddReply(510472, -1, 11550);
				return;
			}
			if (a0 == 10954) {
				f_671_a1_v("Penetrating");
				tv0->SetMessage(509941);
				tv0->ClearReplies();
				tv0->AddReply(509942, 10956, 10955);
				tv0->AddReply(509949, 10938, 10965);
				return;
			}
			if (a0 == 10956) {
				f_671_a1_v("Penetrating");
				tv0->SetMessage(509943);
				tv0->ClearReplies();
				tv0->AddReply(509944, 10958, 10957);
				tv0->AddReply(509948, 10938, 10963);
				return;
			}
			if (a0 == 10958) {
				f_671_a1_v("Grin");
				tv0->SetMessage(509945);
				tv0->ClearReplies();
				tv0->AddReply(509946, 10938, 10959);
				tv0->AddReply(509947, 10938, 10961);
				return;
			}
			if (a0 == 10938) {
				f_671_a1_v("Grin");
				tv0->SetMessage(509928);
				tv0->ClearReplies();
				tv0->AddReply(509929, 10940, 10939);
				tv0->AddReply(509939, 10942, 10951);
				return;
			}
			if (a0 == 10940) {
				f_671_a1_v("Grin");
				tv0->SetMessage(509930);
				tv0->ClearReplies();
				tv0->AddReply(509931, 10942, 10941);
				tv0->AddReply(509938, 10942, 10949);
				return;
			}
			if (a0 == 10942) {
				f_671_a1_v("Neutral");
				tv0->SetMessage(509932);
				tv0->ClearReplies();
				tv0->AddReply(509933, 10944, 10943);
				tv0->AddReply(509937, 10944, 10947);
				return;
			}
			if (a0 == 10944) {
				f_671_a1_v("Neutral");
				tv0->SetMessage(509934);
				tv0->ClearReplies();
				tv0->AddReply(509935, -1, 10945);
				tv0->AddReply(509936, -1, 10946);
				return;
			}
			tv3 = true;
			if (f_1489_a0_b()) {
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
		if (!f_12e7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1483_a0_i());
		L0->SetNPCDescription(f_1481_a0_i());
		L0->SetPhoto(f_1485_a0_s());
		L0->SetPhoto2(f_1487_a0_s());
		L0->SetPlayerName(f_171b_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_133e_a1_b(f_13fd_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_132c_a1_v(a0);
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
			f_8e5_a1_v("Fear");
			tv0->SetMessage(511203);
			tv0->ClearReplies();
			if (f_1647_a1_b(tv1)) {
				tv0->AddReply(511204, 12393, 12392);
			}
			tv0->AddReply(515336, -1, 16559);
			tv0->AddReply(536116, -1, 37872);
			break;
			return;
		}
		if (f_1489_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_13c8_a1_v(tv2);
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

	void f_8e5_a1_v(string a0)
	{
		if (!f_1489_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_13d8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_13f6_a0_v();
			if (a1 == 12392) {
				f_154a_a2_v(tv1, tv0);
			}
			if (a0 == 12391) {
				f_8e5_a1_v("Fear");
				tv0->SetMessage(511203);
				tv0->ClearReplies();
				if (f_1647_a1_b(tv1)) {
					tv0->AddReply(511204, 12393, 12392);
				}
				tv0->AddReply(515336, -1, 16559);
				tv0->AddReply(536116, -1, 37872);
				return;
			}
			if (a0 == 12393) {
				f_8e5_a1_v("Fear");
				tv0->SetMessage(511205);
				tv0->ClearReplies();
				tv0->AddReply(536117, 37874, 37873);
				return;
			}
			if (a0 == 37874) {
				f_8e5_a1_v("Fear");
				tv0->SetMessage(536118);
				tv0->ClearReplies();
				tv0->AddReply(511206, 12395, 12394);
				tv0->AddReply(536120, 12395, 37876);
				return;
			}
			if (a0 == 12395) {
				f_8e5_a1_v("Neutral");
				tv0->SetMessage(511207);
				tv0->ClearReplies();
				tv0->AddReply(511208, -1, 12396);
				tv0->AddReply(511209, -1, 12397);
				return;
			}
			tv3 = true;
			if (f_1489_a0_b()) {
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
		if (!f_12e7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1483_a0_i());
		L0->SetNPCDescription(f_1481_a0_i());
		L0->SetPhoto(f_1485_a0_s());
		L0->SetPhoto2(f_1487_a0_s());
		L0->SetPlayerName(f_171b_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_133e_a1_b(f_13fd_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_132c_a1_v(a0);
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
			f_a2c_a1_v("Penetrating");
			tv0->SetMessage(511641);
			tv0->ClearReplies();
			if (f_15cf_a1_b(tv1)) {
				tv0->AddReply(511642, 12842, 12841);
			}
			if (f_15cf_a1_b(tv1) && f_166b_a1_b(tv1) || f_15db_a1_b(tv1) && f_166b_a1_b(tv1)) {
				tv0->AddReply(511651, 12851, 12850);
			}
			tv0->AddReply(511660, -1, 12859);
			break;
			return;
		}
		if (f_1489_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_13c8_a1_v(tv2);
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

	void f_a2c_a1_v(string a0)
	{
		if (!f_1489_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_13d8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_13f6_a0_v();
			if (a1 == 12849) {
				f_14ef_a2_v(tv1, tv0);
			}
			if (a1 == 12850) {
				f_155c_a2_v(tv1, tv0);
			}
			if (a1 == 12858) {
				f_14ef_a2_v(tv1, tv0);
			}
			if (a1 == 37111) {
				f_14ef_a2_v(tv1, tv0);
			}
			if (a1 == 37112) {
				f_14ef_a2_v(tv1, tv0);
			}
			if (a1 == 37113) {
				f_14ef_a2_v(tv1, tv0);
			}
			if (a0 == 12840) {
				f_a2c_a1_v("Penetrating");
				tv0->SetMessage(511641);
				tv0->ClearReplies();
				if (f_15cf_a1_b(tv1)) {
					tv0->AddReply(511642, 12842, 12841);
				}
				if (f_15cf_a1_b(tv1) && f_166b_a1_b(tv1) || f_15db_a1_b(tv1) && f_166b_a1_b(tv1)) {
					tv0->AddReply(511651, 12851, 12850);
				}
				tv0->AddReply(511660, -1, 12859);
				return;
			}
			if (a0 == 12851) {
				f_a2c_a1_v("Suffering");
				tv0->SetMessage(511652);
				tv0->ClearReplies();
				tv0->AddReply(511653, 12853, 12852);
				return;
			}
			if (a0 == 12853) {
				f_a2c_a1_v("Suffering");
				tv0->SetMessage(511654);
				tv0->ClearReplies();
				tv0->AddReply(511655, 12855, 12854);
				return;
			}
			if (a0 == 12855) {
				f_a2c_a1_v("Suffering");
				tv0->SetMessage(511656);
				tv0->ClearReplies();
				tv0->AddReply(511657, 12857, 12856);
				tv0->AddReply(535425, 37107, 37105);
				return;
			}
			if (a0 == 12857) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(511658);
				tv0->ClearReplies();
				tv0->AddReply(535426, 37107, 37106);
				tv0->AddReply(535432, -1, 37113);
				return;
			}
			if (a0 == 37107) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(535427);
				tv0->ClearReplies();
				tv0->AddReply(511659, -1, 12858);
				tv0->AddReply(535428, 37110, 37109);
				return;
			}
			if (a0 == 37110) {
				f_a2c_a1_v("Suffering");
				tv0->SetMessage(535429);
				tv0->ClearReplies();
				tv0->AddReply(535430, -1, 37111);
				tv0->AddReply(535431, -1, 37112);
				return;
			}
			if (a0 == 12842) {
				f_a2c_a1_v("Penetrating");
				tv0->SetMessage(511643);
				tv0->ClearReplies();
				tv0->AddReply(511644, 12844, 12843);
				return;
			}
			if (a0 == 12844) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(511645);
				tv0->ClearReplies();
				tv0->AddReply(511646, 12846, 12845);
				return;
			}
			if (a0 == 12846) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(511647);
				tv0->ClearReplies();
				tv0->AddReply(511648, 12848, 12847);
				return;
			}
			if (a0 == 12848) {
				f_a2c_a1_v("Neutral");
				tv0->SetMessage(511649);
				tv0->ClearReplies();
				tv0->AddReply(511650, -1, 12849);
				return;
			}
			tv3 = true;
			if (f_1489_a0_b()) {
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
		if (!f_12e7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1483_a0_i());
		L0->SetNPCDescription(f_1481_a0_i());
		L0->SetPhoto(f_1485_a0_s());
		L0->SetPhoto2(f_1487_a0_s());
		L0->SetPlayerName(f_171b_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_133e_a1_b(f_13fd_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_132c_a1_v(a0);
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
			if (!f_1562_a1_b(tv1)) {
				f_c72_a1_v("Neutral");
				tv0->SetMessage(532198);
				tv0->ClearReplies();
				if (f_156e_a1_b(tv1)) {
					tv0->AddReply(532199, 33615, 33614);
				}
				tv0->AddReply(532203, -1, 33618);
				break;
			}
			if (f_157a_a1_b(tv1) && f_1677_a1_b(tv1)) {
				f_149d_a2_v(tv1, tv0);
				f_14fc_a2_v(tv1, tv0);
				f_c72_a1_v("Penetrating");
				tv0->SetMessage(532204);
				tv0->ClearReplies();
				tv0->AddReply(532205, 33621, 33620);
				tv0->AddReply(532221, 33621, 33638);
				break;
			}
			f_c72_a1_v("Suffering");
			tv0->SetMessage(532253);
			tv0->ClearReplies();
			if (f_1677_a1_b(tv1) && f_15c3_a1_b(tv1)) {
				tv0->AddReply(533013, 34518, 34517);
			}
			tv0->AddReply(532338, -1, 33767);
			break;
			return;
		}
		if (f_1489_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_13c8_a1_v(tv2);
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

	void f_c72_a1_v(string a0)
	{
		if (!f_1489_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_13d8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_13f6_a0_v();
			if (a1 == 33614) {
				f_1497_a2_v(tv1, tv0);
			}
			if (a1 == 34517) {
				f_14d9_a2_v(tv1, tv0);
			}
			if (a0 == 33613) {
				if (!f_1562_a1_b(tv1)) {
					f_c72_a1_v("Neutral");
					tv0->SetMessage(532198);
					tv0->ClearReplies();
					if (f_156e_a1_b(tv1)) {
						tv0->AddReply(532199, 33615, 33614);
					}
					tv0->AddReply(532203, -1, 33618);
					return;
				}
				if (f_157a_a1_b(tv1) && f_1677_a1_b(tv1)) {
					f_149d_a2_v(tv1, tv0);
					f_14fc_a2_v(tv1, tv0);
					f_c72_a1_v("Penetrating");
					tv0->SetMessage(532204);
					tv0->ClearReplies();
					tv0->AddReply(532205, 33621, 33620);
					tv0->AddReply(532221, 33621, 33638);
					return;
				}
				f_c72_a1_v("Suffering");
				tv0->SetMessage(532253);
				tv0->ClearReplies();
				if (f_1677_a1_b(tv1) && f_15c3_a1_b(tv1)) {
					tv0->AddReply(533013, 34518, 34517);
				}
				tv0->AddReply(532338, -1, 33767);
				return;
			}
			if (a0 == 34518) {
				f_c72_a1_v("Suffering");
				tv0->SetMessage(533014);
				tv0->ClearReplies();
				tv0->AddReply(533015, 34520, 34519);
				tv0->AddReply(533024, 34529, 34528);
				tv0->AddReply(533030, 34529, 34536);
				return;
			}
			if (a0 == 34529) {
				f_c72_a1_v("Neutral");
				tv0->SetMessage(533025);
				tv0->ClearReplies();
				tv0->AddReply(533026, 34520, 34530);
				tv0->AddReply(533027, 34533, 34532);
				return;
			}
			if (a0 == 34533) {
				f_c72_a1_v("Neutral");
				tv0->SetMessage(533028);
				tv0->ClearReplies();
				tv0->AddReply(533029, 34520, 34534);
				return;
			}
			if (a0 == 34520) {
				f_c72_a1_v("Neutral");
				tv0->SetMessage(533016);
				tv0->ClearReplies();
				tv0->AddReply(533017, -1, 34521);
				tv0->AddReply(533031, -1, 34540);
				return;
			}
			if (a0 == 33621) {
				f_c72_a1_v("Penetrating");
				tv0->SetMessage(532206);
				tv0->ClearReplies();
				tv0->AddReply(532207, 33623, 33622);
				tv0->AddReply(532218, 33636, 33635);
				tv0->AddReply(532217, 33623, 33633);
				return;
			}
			if (a0 == 33636) {
				f_c72_a1_v("Neutral");
				tv0->SetMessage(532219);
				tv0->ClearReplies();
				tv0->AddReply(532220, -1, 33637);
				tv0->AddReply(533154, 33625, 34671);
				return;
			}
			if (a0 == 33623) {
				f_c72_a1_v("Neutral");
				tv0->SetMessage(532208);
				tv0->ClearReplies();
				tv0->AddReply(532209, 33625, 33624);
				tv0->AddReply(532216, 33627, 33631);
				return;
			}
			if (a0 == 33625) {
				f_c72_a1_v("Neutral");
				tv0->SetMessage(532210);
				tv0->ClearReplies();
				tv0->AddReply(532211, 33627, 33626);
				tv0->AddReply(532215, -1, 33630);
				return;
			}
			if (a0 == 33627) {
				f_c72_a1_v("Neutral");
				tv0->SetMessage(532212);
				tv0->ClearReplies();
				tv0->AddReply(532213, -1, 33628);
				tv0->AddReply(532214, -1, 33629);
				return;
			}
			if (a0 == 33615) {
				f_c72_a1_v("Neutral");
				tv0->SetMessage(532200);
				tv0->ClearReplies();
				tv0->AddReply(532201, -1, 33616);
				tv0->AddReply(532202, -1, 33617);
				return;
			}
			tv3 = true;
			if (f_1489_a0_b()) {
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
		if (!f_12e7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1483_a0_i());
		L0->SetNPCDescription(f_1481_a0_i());
		L0->SetPhoto(f_1485_a0_s());
		L0->SetPhoto2(f_1487_a0_s());
		L0->SetPlayerName(f_171b_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_133e_a1_b(f_13fd_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_132c_a1_v(a0);
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
			if (f_1586_a1_b(tv1)) {
				f_14c1_a2_v(tv1, tv0);
				f_14c7_a2_v(tv1, tv0);
				f_eb4_a1_v("Fear");
				tv0->SetMessage(534079);
				tv0->ClearReplies();
				tv0->AddReply(534080, 38114, 35673);
				tv0->AddReply(536380, 38114, 38153);
				break;
			}
			f_eb4_a1_v("Neutral");
			tv0->SetMessage(534086);
			tv0->ClearReplies();
			tv0->AddReply(534090, -1, 35683);
			tv0->AddReply(536397, -1, 38176);
			break;
			return;
		}
		if (f_1489_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_13c8_a1_v(tv2);
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

	void f_eb4_a1_v(string a0)
	{
		if (!f_1489_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_13d8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_13f6_a0_v();
			if (a1 == 35677) {
				f_14a3_a2_v(tv1, tv0);
				f_14df_a2_v(tv1, tv0);
			}
			if (a1 == 35678) {
				f_14a3_a2_v(tv1, tv0);
				f_14df_a2_v(tv1, tv0);
			}
			if (a0 == 35672) {
				if (f_1586_a1_b(tv1)) {
					f_14c1_a2_v(tv1, tv0);
					f_14c7_a2_v(tv1, tv0);
					f_eb4_a1_v("Fear");
					tv0->SetMessage(534079);
					tv0->ClearReplies();
					tv0->AddReply(534080, 38114, 35673);
					tv0->AddReply(536380, 38114, 38153);
					return;
				}
				f_eb4_a1_v("Neutral");
				tv0->SetMessage(534086);
				tv0->ClearReplies();
				tv0->AddReply(534090, -1, 35683);
				tv0->AddReply(536397, -1, 38176);
				return;
			}
			if (a0 == 38114) {
				f_eb4_a1_v("Fear");
				tv0->SetMessage(536332);
				tv0->ClearReplies();
				tv0->AddReply(536333, 38116, 38115);
				tv0->AddReply(536381, 38116, 38155);
				return;
			}
			if (a0 == 38116) {
				f_eb4_a1_v("Suffering");
				tv0->SetMessage(536334);
				tv0->ClearReplies();
				tv0->AddReply(536335, 38118, 38117);
				tv0->AddReply(536382, 38161, 38156);
				return;
			}
			if (a0 == 38161) {
				f_eb4_a1_v("Suffering");
				tv0->SetMessage(536386);
				tv0->ClearReplies();
				tv0->AddReply(536389, 38162, 38164);
				return;
			}
			if (a0 == 38118) {
				f_eb4_a1_v("Suffering");
				tv0->SetMessage(536336);
				tv0->ClearReplies();
				tv0->AddReply(536337, 38162, 38119);
				tv0->AddReply(536385, 35674, 38159);
				return;
			}
			if (a0 == 38162) {
				f_eb4_a1_v("Fear");
				tv0->SetMessage(536387);
				tv0->ClearReplies();
				tv0->AddReply(536388, 38165, 38163);
				tv0->AddReply(536394, 35674, 38171);
				return;
			}
			if (a0 == 38165) {
				f_eb4_a1_v("Fear");
				tv0->SetMessage(536390);
				tv0->ClearReplies();
				tv0->AddReply(536391, 38167, 38166);
				tv0->AddReply(536396, 35674, 38174);
				return;
			}
			if (a0 == 38167) {
				f_eb4_a1_v("Neutral");
				tv0->SetMessage(536392);
				tv0->ClearReplies();
				tv0->AddReply(536393, 35674, 38168);
				tv0->AddReply(536395, -1, 38173);
				return;
			}
			if (a0 == 35674) {
				f_eb4_a1_v("Penetrating");
				tv0->SetMessage(534081);
				tv0->ClearReplies();
				tv0->AddReply(534082, 35676, 35675);
				return;
			}
			if (a0 == 35676) {
				f_eb4_a1_v("Grin");
				tv0->SetMessage(534083);
				tv0->ClearReplies();
				tv0->AddReply(534084, -1, 35677);
				tv0->AddReply(534085, -1, 35678);
				return;
			}
			tv3 = true;
			if (f_1489_a0_b()) {
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
		if (!f_12e7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1483_a0_i());
		L0->SetNPCDescription(f_1481_a0_i());
		L0->SetPhoto(f_1485_a0_s());
		L0->SetPhoto2(f_1487_a0_s());
		L0->SetPlayerName(f_171b_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_133e_a1_b(f_13fd_a0_o());
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_132c_a1_v(a0);
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
			f_1086_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_1489_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_13c8_a1_v(tv2);
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

	void f_1086_a1_v(string a0)
	{
		if (!f_1489_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_13d8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_13f6_a0_v();
			if (a0 == 36971) {
				f_1086_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_1086_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_1086_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_1489_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t18
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_12e7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1483_a0_i());
		L0->SetNPCDescription(f_1481_a0_i());
		L0->SetPhoto(f_1485_a0_s());
		L0->SetPhoto2(f_1487_a0_s());
		L0->SetPlayerName(f_171b_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_133e_a1_b(f_13fd_a0_o());
		t19{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_132c_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t19
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
			f_1184_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_1489_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_13c8_a1_v(tv2);
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

	void f_1184_a1_v(string a0)
	{
		if (!f_1489_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_13d8_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_13f6_a0_v();
			if (a0 == 42557) {
				f_1184_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_1489_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t20
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_11cb_a0_v();
	}

	void f_11cb_a0_v(void)
	{
		if (!f_12e2_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_127b_a0_v();
		}
	}

	bool f_11d9_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_12d9_a1_b(L0);
	}

	void f_11e8_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_11ed_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_12c7_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1203_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_120c_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_120c_a0_v();
			if (f_12e2_a0_b() && f_11ed_a0_b()) {
				if (f_11d9_a0_b()) {
					f_1378_a1_b(f_13fd_a0_o());
				}
			} else {
				f_11e8_a0_v();
				f_1203_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_12c2_a0_v();
		f_120c_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_120c_a0_v();
		f_13c8_a1_v("Neutral");
		f_1203_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1203_a0_v();
		} else {
			f_13c8_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_12c2_a0_v();
			f_12d9_a1_b(a0);
			enable OnUse;
			f_172c_a1_v(a0);
			f_13c8_a1_v("Neutral");
			f_120c_a0_v();
			f_1203_a0_v();
		}
	}
}

void f_127b_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_12e2_a0_b()) {
		return;
	}
	L0 = f_1470_a0_i();
	for (L1 = 0; L1 < 5 && f_12e2_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1469_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_12c0_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_12c0_a0_b(void)
{
	return true;
}

void f_12c2_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_12c7_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_12cf_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_12d9_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_12cf_a1_b(L0);
}

bool f_12e2_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_12e7_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1403_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1489_a0_b()) {
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

void f_132c_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1489_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_133e_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1378_a1_b(a0)) {
			if (!f_139d_a1_b(a0)) {
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
		if (!f_139d_a1_b(a0)) {
			if (!f_1378_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1378_a1_b(object a0)
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
	return f_13e7_a1_b(L4);
}

bool f_139d_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_145a_a0_i() + "m";
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
	return f_13e7_a1_b(L4);
}

void f_13c8_a1_v(string a0)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, false);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

void f_13d8_a2_v(string a0, bool a1)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, a1);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

bool f_13e7_a1_b(string a0)
{
	if (f_1489_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_13f6_a0_v(void)
{
	if (f_1489_a0_b()) {
		@lshStopSpeech();
	}
}

object f_13fd_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1403_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_140d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1412_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_141d_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1429_a3_v(object a0, object a1, int a2)
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
		f_141d_a2_v(L0, a2);
	}
}

void f_143c_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1429_a3_v(a0, L0, a2);
}

bool f_1449_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1455_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_145a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1463_a1_b(int a0)
{
	return f_145a_a0_i() == a0;
}

string f_1469_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1470_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1469_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1481_a0_i(void)
{
	return 515539;
}

int f_1483_a0_i(void)
{
	return 502864;
}

string f_1485_a0_s(void)
{
	return "ui/NPC_Katerina.png";
}

string f_1487_a0_s(void)
{
	return "ui/NPC_Katerina_b.png";
}

bool f_1489_a0_b(void)
{
	return true;
}

void f_148b_a2_v(object a0, object a1)
{
	@SetVariable("KnowKaterina", 1);
}

void f_1491_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1497_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina1", 1);
}

void f_149d_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina2", 1);
}

void f_14a3_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d10q02", 1);
	L0 = f_16e9_a0_o();
	L0->AddMark("d10q02KaterinaGotoRubin", "pt_region01_center01", 0, 515467, f_1455_a0_f());
	f_1699_a0_v();
	f_16a6_a0_v();
	f_1412_a1_o("quest_d10_02");
}

void f_14c1_a2_v(object a0, object a1)
{
	@SetVariable("ood10Katerina1", 1);
}

void f_14c7_a2_v(object a0, object a1)
{
	@SetVariable("d10KaterinaVisit", 1);
}

void f_14cd_a2_v(object a0, object a1)
{
	@SetVariable("ood3Katerina2", 1);
}

void f_14d3_a2_v(object a0, object a1)
{
	@SetVariable("d3KaterinaAboutKills", 1);
}

void f_14d9_a2_v(object a0, object a1)
{
	@SetVariable("ood1Katerina3", 1);
}

void f_14df_a2_v(object a0, object a1)
{
	f_16fa_a3_v(f_16e9_a0_o(), "pt_region01_center01", 2);
	a1->ShowMap(f_16e9_a0_o());
}

void f_14ef_a2_v(object a0, object a1)
{
	if (f_140d_a1_i("d5q01") != 4) {
		@SetVariable("d5q01", 4);
	}
}

void f_14fc_a2_v(object a0, object a1)
{
	@SetVariable("d1q01KaterinaUHave1day", 1);
}

void f_1502_a2_v(object a0, object a1)
{
	@SetVariable("ood6Katerina1", 1);
}

void f_1508_a2_v(object a0, object a1)
{
	@SetVariable("ood6Katerina2", 1);
}

void f_150e_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d6q01", 2);
	L0 = f_16e9_a0_o();
	L0->AddMark("d6q01KaterinaGotoLaska", "pt_map_laska", 1, 515398, f_1455_a0_f());
	L0->AddMark("d6q01KaterinagotoLaskaSelf", "pt_map_katerina", 1, 515399, f_1455_a0_f());
	f_16b3_a0_v();
	f_1449_a2_b("quest_d6_01", "saburov_klara_remove");
}

void f_1533_a2_v(object a0, object a1)
{
	@SetVariable("ood6Katerina3", 1);
}

void f_1539_a2_v(object a0, object a1)
{
	@SetVariable("ood3Katerina1", 1);
}

void f_153f_a2_v(object a0, object a1)
{
	@Trace("drapery is given");
	f_143c_a3_v(a0, "drapery", 1);
}

void f_154a_a2_v(object a0, object a1)
{
	@SetVariable("ood4Katerina1", 1);
}

void f_1550_a2_v(object a0, object a1)
{
	@SetVariable("ood2Katerina1", 1);
}

void f_1556_a2_v(object a0, object a1)
{
	@SetVariable("ood2Katerina2", 1);
}

void f_155c_a2_v(object a0, object a1)
{
	@SetVariable("ood5Katerina1", 1);
}

bool f_1562_a1_b(object a0)
{
	if (f_140d_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_156e_a1_b(object a0)
{
	if (f_140d_a1_i("ood1Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_157a_a1_b(object a0)
{
	if (f_140d_a1_i("ood1Katerina2") == 0) {
		return true;
	}
	return false;
}

bool f_1586_a1_b(object a0)
{
	if (f_140d_a1_i("ood10Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_1592_a1_b(object a0)
{
	if (!(f_140d_a1_i("d3q01") == 0) && !(f_140d_a1_i("d3q01") == 1000) && !(f_140d_a1_i("d3q01") == -1)) {
		return true;
	}
	return false;
}

bool f_15b7_a1_b(object a0)
{
	if (f_140d_a1_i("ood3Katerina2") == 0) {
		return true;
	}
	return false;
}

bool f_15c3_a1_b(object a0)
{
	if (f_140d_a1_i("ood1Katerina3") == 0) {
		return true;
	}
	return false;
}

bool f_15cf_a1_b(object a0)
{
	if (f_140d_a1_i("d5q01") == 3) {
		return true;
	}
	return false;
}

bool f_15db_a1_b(object a0)
{
	if (f_140d_a1_i("d5q01") == 4) {
		return true;
	}
	return false;
}

bool f_15e7_a1_b(object a0)
{
	if (f_140d_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_15f3_a1_b(object a0)
{
	if (f_140d_a1_i("d6q01KnowKillerIsKlara") == 1) {
		return true;
	}
	return false;
}

bool f_15ff_a1_b(object a0)
{
	if (f_140d_a1_i("ood6Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_160b_a1_b(object a0)
{
	if (f_140d_a1_i("ood6Katerina2") == 0) {
		return true;
	}
	return false;
}

bool f_1617_a1_b(object a0)
{
	if (f_140d_a1_i("d6q01") == 4) {
		return true;
	}
	return false;
}

bool f_1623_a1_b(object a0)
{
	if (f_140d_a1_i("d6q01") == 3) {
		return true;
	}
	return false;
}

bool f_162f_a1_b(object a0)
{
	if (f_140d_a1_i("ood6Katerina3") == 0) {
		return true;
	}
	return false;
}

bool f_163b_a1_b(object a0)
{
	if (f_140d_a1_i("ood3Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_1647_a1_b(object a0)
{
	if (f_140d_a1_i("ood4Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_1653_a1_b(object a0)
{
	if (f_140d_a1_i("ood2Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_165f_a1_b(object a0)
{
	if (f_140d_a1_i("ood2Katerina2") == 0) {
		return true;
	}
	return false;
}

bool f_166b_a1_b(object a0)
{
	if (f_140d_a1_i("ood5Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_1677_a1_b(object a0)
{
	if (f_140d_a1_i("d1q01") != 0 && f_140d_a1_i("d1q01") != 1000 && f_140d_a1_i("d1q01") != -1) {
		return true;
	}
	return false;
}

void f_1699_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 666, 2, 534120);
	f_16cd_a2_b(L0, -1);
}

void f_16a6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 667, 2, 534121);
	f_16cd_a2_b(L0, 666);
}

void f_16b3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 123, 1, 513746);
	f_16cd_a2_b(L0, 111);
}

object f_16c0_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_16cd_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_16c0_a0_o();
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

object f_16e9_a0_o(void)
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

void f_16fa_a3_v(object a0, string a1, float a2)
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

int f_171b_a0_i(void)
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

void f_172c_a1_v(object a0)
{
	if (!g1) {
		t0{a0};
		g1 = true;
	}
	if (f_1463_a1_b(1)) {
		t12{a0};
		return;
	}
	if (f_1463_a1_b(2)) {
		t4{a0};
		return;
	}
	if (f_1463_a1_b(3)) {
		t6{a0};
		return;
	}
	if (f_1463_a1_b(4)) {
		t8{a0};
		return;
	}
	if (f_1463_a1_b(5)) {
		t10{a0};
		return;
	}
	if (f_1463_a1_b(6)) {
		t2{a0};
		return;
	}
	if (f_1463_a1_b(10)) {
		t14{a0};
		return;
	}
	if (f_1463_a1_b(12)) {
		t16{a0};
		return;
	}
	t18{a0};
}

