event OnLoad 5;
event evt_11 11;
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
		} while (!f_1d66_a0_b());
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
		f_1dc0_a1_b(f_1e6d_a0_o());
		if (!f_1d6b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f24_a0_i());
		L0->SetNPCDescription(f_1f22_a0_i());
		L0->SetPhoto(f_1f26_a0_s());
		L0->SetPhoto2(f_1f28_a0_s());
		L0->SetPlayerName(f_24e3_a0_i());
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
		f_1daf_a1_v(a0);
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
			f_db_a1_v("Neutral");
			tv0->SetMessage(531684);
			tv0->ClearReplies();
			if (f_22f0_a1_b(tv1)) {
				tv0->AddReply(531685, 34364, 33069);
			}
			if (!f_21cb_a1_b(tv1) && f_21d7_a1_b(tv1)) {
				tv0->AddReply(531689, 34386, 33073);
			}
			if (f_21e3_a1_b(tv1) && f_22f0_a1_b(tv1) || f_21bf_a1_b(tv1) && f_21e3_a1_b(tv1)) {
				tv0->AddReply(532923, 34411, 34410);
			}
			tv0->AddReply(531688, -1, 33072);
			tv0->AddReply(532874, -1, 34363);
			break;
			return;
		}
		if (f_1f2a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e4a_a1_v(tv2);
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

	void f_db_a1_v(string a0)
	{
		if (!f_1f2a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e51_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e66_a0_v();
			if (a1 == 33071) {
				f_2124_a2_v(tv1, tv0);
				f_1ffe_a2_v(tv1, tv0);
			}
			if (a1 == 34431) {
				f_2124_a2_v(tv1, tv0);
				f_1ffe_a2_v(tv1, tv0);
			}
			if (a1 == 33073) {
				f_1f48_a2_v(tv1, tv0);
			}
			if (a1 == 34410) {
				f_1f69_a2_v(tv1, tv0);
			}
			if (a0 == 33068) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(531684);
				tv0->ClearReplies();
				if (f_22f0_a1_b(tv1)) {
					tv0->AddReply(531685, 34364, 33069);
				}
				if (!f_21cb_a1_b(tv1) && f_21d7_a1_b(tv1)) {
					tv0->AddReply(531689, 34386, 33073);
				}
				if (f_21e3_a1_b(tv1) && f_22f0_a1_b(tv1) || f_21bf_a1_b(tv1) && f_21e3_a1_b(tv1)) {
					tv0->AddReply(532923, 34411, 34410);
				}
				tv0->AddReply(531688, -1, 33072);
				tv0->AddReply(532874, -1, 34363);
				return;
			}
			if (a0 == 34411) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532924);
				tv0->ClearReplies();
				tv0->AddReply(532925, 34415, 34412);
				return;
			}
			if (a0 == 34415) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532928);
				tv0->ClearReplies();
				tv0->AddReply(532929, 34417, 34416);
				tv0->AddReply(533147, 34665, 34664);
				return;
			}
			if (a0 == 34665) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(533148);
				tv0->ClearReplies();
				tv0->AddReply(533149, 34668, 34666);
				tv0->AddReply(533150, 34999, 34667);
				return;
			}
			if (a0 == 34668) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(533151);
				tv0->ClearReplies();
				tv0->AddReply(533152, 34999, 34669);
				tv0->AddReply(533153, 34999, 34670);
				return;
			}
			if (a0 == 34417) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532930);
				tv0->ClearReplies();
				tv0->AddReply(533475, 34999, 34998);
				tv0->AddReply(532931, 34419, 34418);
				return;
			}
			if (a0 == 34419) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532932);
				tv0->ClearReplies();
				tv0->AddReply(532933, -1, 34420);
				tv0->AddReply(533146, -1, 34663);
				return;
			}
			if (a0 == 34999) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(533476);
				tv0->ClearReplies();
				tv0->AddReply(533478, 35005, 35004);
				tv0->AddReply(533477, -1, 35000);
				return;
			}
			if (a0 == 35005) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(533479);
				tv0->ClearReplies();
				tv0->AddReply(533480, 35007, 35006);
				return;
			}
			if (a0 == 35007) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(533481);
				tv0->ClearReplies();
				tv0->AddReply(533482, -1, 35008);
				tv0->AddReply(533483, -1, 35009);
				return;
			}
			if (a0 == 34386) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532902);
				tv0->ClearReplies();
				tv0->AddReply(532903, 33074, 34387);
				tv0->AddReply(532904, 34389, 34388);
				return;
			}
			if (a0 == 34389) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532905);
				tv0->ClearReplies();
				tv0->AddReply(532906, -1, 34390);
				tv0->AddReply(532907, 34392, 34391);
				return;
			}
			if (a0 == 33074) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(531690);
				tv0->ClearReplies();
				tv0->AddReply(531691, 34392, 33075);
				return;
			}
			if (a0 == 34392) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532908);
				tv0->ClearReplies();
				tv0->AddReply(532909, 34395, 34394);
				tv0->AddReply(532911, 34397, 34396);
				return;
			}
			if (a0 == 34397) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532912);
				tv0->ClearReplies();
				tv0->AddReply(532913, 34399, 34398);
				return;
			}
			if (a0 == 34399) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532914);
				tv0->ClearReplies();
				tv0->AddReply(532915, 34395, 34400);
				tv0->AddReply(532916, -1, 34402);
				return;
			}
			if (a0 == 34395) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532910);
				tv0->ClearReplies();
				tv0->AddReply(532917, -1, 34403);
				tv0->AddReply(532918, -1, 34404);
				return;
			}
			if (a0 == 34364) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532875);
				tv0->ClearReplies();
				tv0->AddReply(532876, 34366, 34365);
				tv0->AddReply(532919, 34406, 34405);
				return;
			}
			if (a0 == 34406) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532920);
				tv0->ClearReplies();
				tv0->AddReply(532921, 34366, 34407);
				tv0->AddReply(532922, -1, 34409);
				return;
			}
			if (a0 == 34366) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532877);
				tv0->ClearReplies();
				tv0->AddReply(532878, 34368, 34367);
				tv0->AddReply(532934, 34424, 34421);
				return;
			}
			if (a0 == 34424) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532936);
				tv0->ClearReplies();
				tv0->AddReply(532937, 34426, 34425);
				return;
			}
			if (a0 == 34426) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532938);
				tv0->ClearReplies();
				tv0->AddReply(532939, 34368, 34427);
				return;
			}
			if (a0 == 34368) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532879);
				tv0->ClearReplies();
				tv0->AddReply(532880, 34370, 34369);
				tv0->AddReply(532935, 34370, 34422);
				return;
			}
			if (a0 == 34370) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532881);
				tv0->ClearReplies();
				tv0->AddReply(532882, 34373, 34371);
				tv0->AddReply(532883, 33070, 34372);
				return;
			}
			if (a0 == 34373) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532884);
				tv0->ClearReplies();
				tv0->AddReply(532885, 33070, 34374);
				tv0->AddReply(532886, 34377, 34375);
				return;
			}
			if (a0 == 34377) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532887);
				tv0->ClearReplies();
				tv0->AddReply(532888, 34380, 34378);
				tv0->AddReply(532889, -1, 34379);
				return;
			}
			if (a0 == 34380) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532890);
				tv0->ClearReplies();
				tv0->AddReply(532891, 33070, 34381);
				tv0->AddReply(532892, -1, 34382);
				return;
			}
			if (a0 == 33070) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(531686);
				tv0->ClearReplies();
				tv0->AddReply(532940, 34430, 34429);
				tv0->AddReply(532942, -1, 34431);
				return;
			}
			if (a0 == 34430) {
				f_db_a1_v("Neutral");
				tv0->SetMessage(532941);
				tv0->ClearReplies();
				tv0->AddReply(531687, -1, 33071);
				tv0->AddReply(532943, -1, 34432);
				return;
			}
			tv3 = true;
			if (f_1f2a_a0_b()) {
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
		if (!f_1d6b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f24_a0_i());
		L0->SetNPCDescription(f_1f22_a0_i());
		L0->SetPhoto(f_1f26_a0_s());
		L0->SetPhoto2(f_1f28_a0_s());
		L0->SetPlayerName(f_24e3_a0_i());
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
		f_1daf_a1_v(a0);
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
			f_472_a1_v("Neutral");
			tv0->SetMessage(532759);
			tv0->ClearReplies();
			tv0->AddReply(532760, -1, 34231);
			tv0->AddReply(533664, -1, 35196);
			break;
			return;
		}
		if (f_1f2a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e4a_a1_v(tv2);
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

	void f_472_a1_v(string a0)
	{
		if (!f_1f2a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e51_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e66_a0_v();
			if (a0 == 34230) {
				f_472_a1_v("Neutral");
				tv0->SetMessage(532759);
				tv0->ClearReplies();
				tv0->AddReply(532760, -1, 34231);
				tv0->AddReply(533664, -1, 35196);
				return;
			}
			tv3 = true;
			if (f_1f2a_a0_b()) {
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
		f_1dc0_a1_b(f_1e6d_a0_o());
		if (!f_1d6b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f24_a0_i());
		L0->SetNPCDescription(f_1f22_a0_i());
		L0->SetPhoto(f_1f26_a0_s());
		L0->SetPhoto2(f_1f28_a0_s());
		L0->SetPlayerName(f_24e3_a0_i());
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
		f_1daf_a1_v(a0);
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
			f_542_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_1f2a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e4a_a1_v(tv2);
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

	void f_542_a1_v(string a0)
	{
		if (!f_1f2a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e51_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e66_a0_v();
			if (a0 == 36971) {
				f_542_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_542_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_542_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_1f2a_a0_b()) {
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
		f_1dc0_a1_b(f_1e6d_a0_o());
		if (!f_1d6b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f24_a0_i());
		L0->SetNPCDescription(f_1f22_a0_i());
		L0->SetPhoto(f_1f26_a0_s());
		L0->SetPhoto2(f_1f28_a0_s());
		L0->SetPlayerName(f_24e3_a0_i());
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
		f_1daf_a1_v(a0);
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
			f_2175_a2_v(tv1, tv0);
			f_640_a1_v("Neutral");
			tv0->SetMessage(500287);
			tv0->ClearReplies();
			tv0->AddReply(532871, 34360, 34359);
			break;
			return;
		}
		if (f_1f2a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e4a_a1_v(tv2);
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

	void f_640_a1_v(string a0)
	{
		if (!f_1f2a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e51_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e66_a0_v();
			if (a0 == 336) {
				f_2175_a2_v(tv1, tv0);
				f_640_a1_v("Neutral");
				tv0->SetMessage(500287);
				tv0->ClearReplies();
				tv0->AddReply(532871, 34360, 34359);
				return;
			}
			if (a0 == 34360) {
				f_640_a1_v("Neutral");
				tv0->SetMessage(532872);
				tv0->ClearReplies();
				tv0->AddReply(500288, 340, 337);
				tv0->AddReply(500290, 340, 339);
				tv0->AddReply(500289, -1, 338);
				return;
			}
			if (a0 == 340) {
				f_640_a1_v("Neutral");
				tv0->SetMessage(500291);
				tv0->ClearReplies();
				tv0->AddReply(500292, -1, 341);
				tv0->AddReply(500293, -1, 342);
				return;
			}
			tv3 = true;
			if (f_1f2a_a0_b()) {
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
		f_1dc0_a1_b(f_1e6d_a0_o());
		if (!f_1d6b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f24_a0_i());
		L0->SetNPCDescription(f_1f22_a0_i());
		L0->SetPhoto(f_1f26_a0_s());
		L0->SetPhoto2(f_1f28_a0_s());
		L0->SetPlayerName(f_24e3_a0_i());
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
		f_1daf_a1_v(a0);
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
			if (f_2338_a1_b(tv1) && f_2344_a1_b(tv1)) {
				f_2147_a2_v(tv1, tv0);
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512650);
				tv0->ClearReplies();
				tv0->AddReply(510633, 13839, 11732);
				tv0->AddReply(510665, 11772, 11771);
				break;
			}
			f_7ad_a1_v("Neutral");
			tv0->SetMessage(511979);
			tv0->ClearReplies();
			if (f_2350_a1_b(tv1) && f_22fc_a1_b(tv1) && !f_2398_a1_b(tv1)) {
				tv0->AddReply(512649, 13832, 13829);
			}
			if (f_235c_a1_b(tv1) && f_22fc_a1_b(tv1) && !f_23a4_a1_b(tv1)) {
				tv0->AddReply(512660, 13832, 13840);
			}
			if (f_2368_a1_b(tv1) && f_2374_a1_b(tv1)) {
				tv0->AddReply(511980, 13196, 13195);
			}
			tv0->AddReply(513018, -1, 14224);
			break;
			return;
		}
		if (f_1f2a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e4a_a1_v(tv2);
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

	void f_7ad_a1_v(string a0)
	{
		if (!f_1f2a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e51_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e66_a0_v();
			if (a1 == 13846) {
				f_217b_a2_v(tv1, tv0);
				f_200e_a2_v(tv1, tv0);
			}
			if (a1 == 13851) {
				f_217b_a2_v(tv1, tv0);
				f_200e_a2_v(tv1, tv0);
			}
			if (a1 == 13891) {
				f_217b_a2_v(tv1, tv0);
				f_200e_a2_v(tv1, tv0);
			}
			if (a1 == 13904) {
				f_217b_a2_v(tv1, tv0);
				f_200e_a2_v(tv1, tv0);
			}
			if (a1 == 13905) {
				f_217b_a2_v(tv1, tv0);
				f_200e_a2_v(tv1, tv0);
			}
			if (a1 == 13829) {
				f_214d_a2_v(tv1, tv0);
			}
			if (a1 == 13840) {
				f_2153_a2_v(tv1, tv0);
			}
			if (a1 == 13195) {
				f_2159_a2_v(tv1, tv0);
			}
			if (a1 == 11744) {
				f_215f_a2_v(tv1, tv0);
				f_1f2c_a2_v(tv1, tv0);
			}
			if (a1 == 11745) {
				f_215f_a2_v(tv1, tv0);
				f_1f2c_a2_v(tv1, tv0);
			}
			if (a1 == 11756) {
				f_215f_a2_v(tv1, tv0);
				f_1f2c_a2_v(tv1, tv0);
			}
			if (a1 == 11759) {
				f_215f_a2_v(tv1, tv0);
				f_1f2c_a2_v(tv1, tv0);
			}
			if (a1 == 11760) {
				f_215f_a2_v(tv1, tv0);
				f_1f2c_a2_v(tv1, tv0);
			}
			if (a0 == 13830) {
				if (f_2338_a1_b(tv1) && f_2344_a1_b(tv1)) {
					f_2147_a2_v(tv1, tv0);
					f_7ad_a1_v("Neutral");
					tv0->SetMessage(512650);
					tv0->ClearReplies();
					tv0->AddReply(510633, 13839, 11732);
					tv0->AddReply(510665, 11772, 11771);
					return;
				}
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(511979);
				tv0->ClearReplies();
				if (f_2350_a1_b(tv1) && f_22fc_a1_b(tv1) && !f_2398_a1_b(tv1)) {
					tv0->AddReply(512649, 13832, 13829);
				}
				if (f_235c_a1_b(tv1) && f_22fc_a1_b(tv1) && !f_23a4_a1_b(tv1)) {
					tv0->AddReply(512660, 13832, 13840);
				}
				if (f_2368_a1_b(tv1) && f_2374_a1_b(tv1)) {
					tv0->AddReply(511980, 13196, 13195);
				}
				tv0->AddReply(513018, -1, 14224);
				return;
			}
			if (a0 == 13196) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(511981);
				tv0->ClearReplies();
				tv0->AddReply(511982, 13198, 13197);
				tv0->AddReply(512658, 11733, 13838);
				return;
			}
			if (a0 == 11733) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(510634);
				tv0->ClearReplies();
				tv0->AddReply(510635, 11735, 11734);
				tv0->AddReply(510660, 11766, 11763);
				tv0->AddReply(510661, 11766, 11765);
				return;
			}
			if (a0 == 11766) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(510662);
				tv0->ClearReplies();
				tv0->AddReply(510663, 11735, 11767);
				tv0->AddReply(510664, 11735, 11769);
				return;
			}
			if (a0 == 11735) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(510636);
				tv0->ClearReplies();
				tv0->AddReply(510637, 11737, 11736);
				tv0->AddReply(510647, 11749, 11748);
				return;
			}
			if (a0 == 11749) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(510648);
				tv0->ClearReplies();
				tv0->AddReply(510649, 11737, 11750);
				tv0->AddReply(510650, 11753, 11752);
				return;
			}
			if (a0 == 11753) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(510651);
				tv0->ClearReplies();
				tv0->AddReply(510652, 11755, 11754);
				tv0->AddReply(510659, 11755, 11761);
				return;
			}
			if (a0 == 11755) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(510653);
				tv0->ClearReplies();
				tv0->AddReply(510654, -1, 11756);
				tv0->AddReply(510655, 11758, 11757);
				return;
			}
			if (a0 == 11758) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(510656);
				tv0->ClearReplies();
				tv0->AddReply(510657, -1, 11759);
				tv0->AddReply(510658, -1, 11760);
				return;
			}
			if (a0 == 11737) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(510638);
				tv0->ClearReplies();
				tv0->AddReply(510642, 11743, 11742);
				tv0->AddReply(510639, 11739, 11738);
				tv0->AddReply(510646, 11739, 11746);
				return;
			}
			if (a0 == 11739) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(510640);
				tv0->ClearReplies();
				tv0->AddReply(510641, 11755, 11740);
				return;
			}
			if (a0 == 11743) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(510643);
				tv0->ClearReplies();
				tv0->AddReply(510644, -1, 11744);
				tv0->AddReply(510645, -1, 11745);
				return;
			}
			if (a0 == 13198) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(511983);
				tv0->ClearReplies();
				tv0->AddReply(511984, 13200, 13199);
				return;
			}
			if (a0 == 13200) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(511985);
				tv0->ClearReplies();
				tv0->AddReply(511986, 11735, 13201);
				return;
			}
			if (a0 == 13832) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512652);
				tv0->ClearReplies();
				tv0->AddReply(512653, 13834, 13833);
				return;
			}
			if (a0 == 13834) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512654);
				tv0->ClearReplies();
				tv0->AddReply(512655, -1, 13835);
				return;
			}
			if (a0 == 11772) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(510666);
				tv0->ClearReplies();
				tv0->AddReply(510668, 11776, 11775);
				return;
			}
			if (a0 == 11776) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(510669);
				tv0->ClearReplies();
				tv0->AddReply(510670, 13839, 11777);
				return;
			}
			if (a0 == 13839) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512659);
				tv0->ClearReplies();
				tv0->AddReply(512648, 13831, 13828);
				return;
			}
			if (a0 == 13831) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512651);
				tv0->ClearReplies();
				tv0->AddReply(512656, 13837, 13836);
				tv0->AddReply(512695, 13887, 13886);
				tv0->AddReply(512701, 13897, 13892);
				return;
			}
			if (a0 == 13897) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512706);
				tv0->ClearReplies();
				tv0->AddReply(512707, 13899, 13898);
				return;
			}
			if (a0 == 13899) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512708);
				tv0->ClearReplies();
				tv0->AddReply(512709, 13901, 13900);
				tv0->AddReply(512715, 13901, 13906);
				return;
			}
			if (a0 == 13901) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512710);
				tv0->ClearReplies();
				tv0->AddReply(512711, 13903, 13902);
				tv0->AddReply(512714, -1, 13905);
				return;
			}
			if (a0 == 13903) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512712);
				tv0->ClearReplies();
				tv0->AddReply(512713, -1, 13904);
				return;
			}
			if (a0 == 13887) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512696);
				tv0->ClearReplies();
				tv0->AddReply(512700, -1, 13891);
				return;
			}
			if (a0 == 13837) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512657);
				tv0->ClearReplies();
				tv0->AddReply(512661, 13843, 13842);
				tv0->AddReply(512667, 13843, 13849);
				return;
			}
			if (a0 == 13843) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512662);
				tv0->ClearReplies();
				tv0->AddReply(512663, 13845, 13844);
				return;
			}
			if (a0 == 13845) {
				f_7ad_a1_v("Neutral");
				tv0->SetMessage(512664);
				tv0->ClearReplies();
				tv0->AddReply(512665, -1, 13846);
				tv0->AddReply(512668, -1, 13851);
				return;
			}
			tv3 = true;
			if (f_1f2a_a0_b()) {
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
		f_1dc0_a1_b(f_1e6d_a0_o());
		if (!f_1d6b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f24_a0_i());
		L0->SetNPCDescription(f_1f22_a0_i());
		L0->SetPhoto(f_1f26_a0_s());
		L0->SetPhoto2(f_1f28_a0_s());
		L0->SetPlayerName(f_24e3_a0_i());
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
		f_1daf_a1_v(a0);
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
			if (f_21ef_a1_b(tv1)) {
				f_21a0_a2_v(tv1, tv0);
				f_c52_a1_v("Neutral");
				tv0->SetMessage(506610);
				tv0->ClearReplies();
				tv0->AddReply(506611, 7748, 7280);
				tv0->AddReply(507066, 7748, 7784);
				break;
			}
			if (f_21fb_a1_b(tv1) && f_2237_a1_b(tv1) && f_223c_a1_b(tv1)) {
				f_1f75_a2_v(tv1, tv0);
				f_c52_a1_v("Neutral");
				tv0->SetMessage(506731);
				tv0->ClearReplies();
				tv0->AddReply(506732, 7420, 7419);
				tv0->AddReply(506742, 7420, 7430);
				tv0->AddReply(506743, 7433, 7432);
				break;
			}
			f_c52_a1_v("Neutral");
			tv0->SetMessage(506614);
			tv0->ClearReplies();
			if (f_2207_a1_b(tv1) && f_222b_a1_b(tv1)) {
				tv0->AddReply(506615, 7282, 7284);
			}
			if (f_221f_a1_b(tv1)) {
				tv0->AddReply(506618, 7800, 7287);
			}
			if (f_2213_a1_b(tv1)) {
				tv0->AddReply(506730, 7405, 7417);
			}
			if (f_23b0_a1_b(tv1) && f_23bc_a1_b(tv1) && f_23c8_a1_b(tv1)) {
				tv0->AddReply(507071, 7802, 7794);
			}
			tv0->AddReply(507532, -1, 8314);
			break;
			return;
		}
		if (f_1f2a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e4a_a1_v(tv2);
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

	void f_c52_a1_v(string a0)
	{
		if (!f_1f2a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e51_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e66_a0_v();
			if (a1 == 7775) {
				f_1f6f_a2_v(tv1, tv0);
				f_1f9c_a2_v(tv1, tv0);
				f_1fee_a2_v(tv1, tv0);
			}
			if (a1 == 7779) {
				f_1f6f_a2_v(tv1, tv0);
				f_1f9c_a2_v(tv1, tv0);
				f_1fee_a2_v(tv1, tv0);
			}
			if (a1 == 7780) {
				f_1f6f_a2_v(tv1, tv0);
			}
			if (a1 == 7783) {
				f_1f6f_a2_v(tv1, tv0);
			}
			if (a1 == 7790) {
				f_1fba_a2_v(tv1, tv0);
				f_1f42_a2_v(tv1, tv0);
				f_1f87_a2_v(tv1, tv0);
			}
			if (a1 == 7791) {
				f_1fba_a2_v(tv1, tv0);
				f_1f42_a2_v(tv1, tv0);
				f_1f87_a2_v(tv1, tv0);
			}
			if (a1 == 7436) {
				f_1fba_a2_v(tv1, tv0);
			}
			if (a1 == 7284) {
				f_2063_a2_v(tv1, tv0);
			}
			if (a1 == 7795) {
				f_1f7b_a2_v(tv1, tv0);
				f_1fc4_a2_v(tv1, tv0);
				f_2053_a2_v(tv1, tv0);
			}
			if (a1 == 7798) {
				f_1f7b_a2_v(tv1, tv0);
				f_1fc4_a2_v(tv1, tv0);
				f_2053_a2_v(tv1, tv0);
			}
			if (a1 == 7799) {
				f_1f7b_a2_v(tv1, tv0);
				f_1fc4_a2_v(tv1, tv0);
				f_2053_a2_v(tv1, tv0);
			}
			if (a1 == 7801) {
				f_1f9c_a2_v(tv1, tv0);
				f_1fee_a2_v(tv1, tv0);
			}
			if (a1 == 7410) {
				f_1f81_a2_v(tv1, tv0);
			}
			if (a1 == 7411) {
				f_1f81_a2_v(tv1, tv0);
			}
			if (a1 == 7414) {
				f_1f81_a2_v(tv1, tv0);
			}
			if (a1 == 7416) {
				f_1f81_a2_v(tv1, tv0);
			}
			if (a1 == 7794) {
				f_21b9_a2_v(tv1, tv0);
			}
			if (a0 == 7279) {
				if (f_21ef_a1_b(tv1)) {
					f_21a0_a2_v(tv1, tv0);
					f_c52_a1_v("Neutral");
					tv0->SetMessage(506610);
					tv0->ClearReplies();
					tv0->AddReply(506611, 7748, 7280);
					tv0->AddReply(507066, 7748, 7784);
					return;
				}
				if (f_21fb_a1_b(tv1) && f_2237_a1_b(tv1) && f_223c_a1_b(tv1)) {
					f_1f75_a2_v(tv1, tv0);
					f_c52_a1_v("Neutral");
					tv0->SetMessage(506731);
					tv0->ClearReplies();
					tv0->AddReply(506732, 7420, 7419);
					tv0->AddReply(506742, 7420, 7430);
					tv0->AddReply(506743, 7433, 7432);
					return;
				}
				f_c52_a1_v("Neutral");
				tv0->SetMessage(506614);
				tv0->ClearReplies();
				if (f_2207_a1_b(tv1) && f_222b_a1_b(tv1)) {
					tv0->AddReply(506615, 7282, 7284);
				}
				if (f_221f_a1_b(tv1)) {
					tv0->AddReply(506618, 7800, 7287);
				}
				if (f_2213_a1_b(tv1)) {
					tv0->AddReply(506730, 7405, 7417);
				}
				if (f_23b0_a1_b(tv1) && f_23bc_a1_b(tv1) && f_23c8_a1_b(tv1)) {
					tv0->AddReply(507071, 7802, 7794);
				}
				tv0->AddReply(507532, -1, 8314);
				return;
			}
			if (a0 == 7802) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507079);
				tv0->ClearReplies();
				tv0->AddReply(507080, 7805, 7803);
				tv0->AddReply(507081, -1, 7804);
				return;
			}
			if (a0 == 7805) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507082);
				tv0->ClearReplies();
				tv0->AddReply(507083, -1, 7806);
				return;
			}
			if (a0 == 7405) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(506718);
				tv0->ClearReplies();
				tv0->AddReply(506719, 7407, 7406);
				tv0->AddReply(506729, -1, 7416);
				return;
			}
			if (a0 == 7407) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(506720);
				tv0->ClearReplies();
				tv0->AddReply(506721, 7409, 7408);
				tv0->AddReply(506725, 7413, 7412);
				return;
			}
			if (a0 == 7413) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(506726);
				tv0->ClearReplies();
				tv0->AddReply(506727, -1, 7414);
				return;
			}
			if (a0 == 7409) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(506722);
				tv0->ClearReplies();
				tv0->AddReply(506723, -1, 7410);
				tv0->AddReply(506724, -1, 7411);
				return;
			}
			if (a0 == 7800) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507077);
				tv0->ClearReplies();
				tv0->AddReply(507078, -1, 7801);
				return;
			}
			if (a0 == 7282) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(506613);
				tv0->ClearReplies();
				tv0->AddReply(507072, -1, 7795);
				tv0->AddReply(507073, 7797, 7796);
				return;
			}
			if (a0 == 7797) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507074);
				tv0->ClearReplies();
				tv0->AddReply(507075, -1, 7798);
				tv0->AddReply(507076, -1, 7799);
				return;
			}
			if (a0 == 7433) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(506744);
				tv0->ClearReplies();
				tv0->AddReply(506745, 7420, 7434);
				tv0->AddReply(506746, -1, 7436);
				return;
			}
			if (a0 == 7420) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(506733);
				tv0->ClearReplies();
				tv0->AddReply(506734, 7422, 7421);
				tv0->AddReply(506741, 7422, 7428);
				return;
			}
			if (a0 == 7422) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(506735);
				tv0->ClearReplies();
				tv0->AddReply(506737, 7425, 7424);
				tv0->AddReply(506736, 7789, 7423);
				return;
			}
			if (a0 == 7425) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(506738);
				tv0->ClearReplies();
				tv0->AddReply(506739, 7789, 7426);
				tv0->AddReply(506740, 7789, 7427);
				return;
			}
			if (a0 == 7789) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507068);
				tv0->ClearReplies();
				tv0->AddReply(507069, -1, 7790);
				tv0->AddReply(507070, -1, 7791);
				return;
			}
			if (a0 == 7748) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507034);
				tv0->ClearReplies();
				tv0->AddReply(507035, 7750, 7749);
				tv0->AddReply(507051, 7766, 7765);
				return;
			}
			if (a0 == 7766) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507052);
				tv0->ClearReplies();
				tv0->AddReply(507053, 7750, 7767);
				return;
			}
			if (a0 == 7750) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507036);
				tv0->ClearReplies();
				tv0->AddReply(507037, 7752, 7751);
				return;
			}
			if (a0 == 7752) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507038);
				tv0->ClearReplies();
				tv0->AddReply(507039, 7754, 7753);
				tv0->AddReply(507048, 7763, 7762);
				return;
			}
			if (a0 == 7763) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507049);
				tv0->ClearReplies();
				tv0->AddReply(507054, 7759, 7770);
				return;
			}
			if (a0 == 7754) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507040);
				tv0->ClearReplies();
				tv0->AddReply(507043, 7759, 7757);
				tv0->AddReply(507041, 7756, 7755);
				return;
			}
			if (a0 == 7756) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507042);
				tv0->ClearReplies();
				tv0->AddReply(507044, 7759, 7758);
				return;
			}
			if (a0 == 7759) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507045);
				tv0->ClearReplies();
				tv0->AddReply(507046, 7761, 7760);
				tv0->AddReply(507067, 7761, 7787);
				tv0->AddReply(507055, 7773, 7772);
				return;
			}
			if (a0 == 7773) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507056);
				tv0->ClearReplies();
				tv0->AddReply(507057, 7761, 7774);
				return;
			}
			if (a0 == 7761) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507047);
				tv0->ClearReplies();
				tv0->AddReply(507058, -1, 7775);
				tv0->AddReply(507059, 7778, 7777);
				return;
			}
			if (a0 == 7778) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507060);
				tv0->ClearReplies();
				tv0->AddReply(507061, -1, 7779);
				tv0->AddReply(507062, -1, 7780);
				tv0->AddReply(507063, 7782, 7781);
				return;
			}
			if (a0 == 7782) {
				f_c52_a1_v("Neutral");
				tv0->SetMessage(507064);
				tv0->ClearReplies();
				tv0->AddReply(507065, -1, 7783);
				return;
			}
			tv3 = true;
			if (f_1f2a_a0_b()) {
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
		f_1dc0_a1_b(f_1e6d_a0_o());
		if (!f_1d6b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f24_a0_i());
		L0->SetNPCDescription(f_1f22_a0_i());
		L0->SetPhoto(f_1f26_a0_s());
		L0->SetPhoto2(f_1f28_a0_s());
		L0->SetPlayerName(f_24e3_a0_i());
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
		f_1daf_a1_v(a0);
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
			if (f_2278_a1_b(tv1) && f_226c_a1_b(tv1)) {
				f_2036_a2_v(tv1, tv0);
				f_110c_a1_v("Neutral");
				tv0->SetMessage(509086);
				tv0->ClearReplies();
				tv0->AddReply(509087, 9969, 9965);
				tv0->AddReply(509088, 9967, 9966);
				break;
			}
			f_110c_a1_v("Neutral");
			tv0->SetMessage(508854);
			tv0->ClearReplies();
			if (f_2254_a1_b(tv1) && f_2284_a1_b(tv1)) {
				tv0->AddReply(508840, 9693, 9692);
			}
			if (f_2248_a1_b(tv1)) {
				tv0->AddReply(508855, 9687, 9711);
			}
			if (f_2260_a1_b(tv1)) {
				tv0->AddReply(508856, 9691, 9712);
			}
			if (f_22e4_a1_b(tv1)) {
				tv0->AddReply(511978, 13175, 13193);
			}
			tv0->AddReply(511133, -1, 12322);
			tv0->AddReply(534068, -1, 35658);
			break;
			return;
		}
		if (f_1f2a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e4a_a1_v(tv2);
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

	void f_110c_a1_v(string a0)
	{
		if (!f_1f2a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e51_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e66_a0_v();
			if (a1 == 9978) {
				f_1f64_a2_v(tv1, tv0);
			}
			if (a1 == 9979) {
				f_1f64_a2_v(tv1, tv0);
			}
			if (a1 == 9975) {
				f_1f64_a2_v(tv1, tv0);
			}
			if (a1 == 9692) {
				f_202a_a2_v(tv1, tv0);
			}
			if (a1 == 9724) {
				f_202a_a2_v(tv1, tv0);
				f_203c_a2_v(tv1, tv0);
				f_2030_a2_v(tv1, tv0);
				f_2014_a2_v(tv1, tv0);
			}
			if (a1 == 9711) {
				f_2024_a2_v(tv1, tv0);
			}
			if (a1 == 9712) {
				f_2030_a2_v(tv1, tv0);
			}
			if (a1 == 13193) {
				f_211e_a2_v(tv1, tv0);
			}
			if (a0 == 9964) {
				if (f_2278_a1_b(tv1) && f_226c_a1_b(tv1)) {
					f_2036_a2_v(tv1, tv0);
					f_110c_a1_v("Neutral");
					tv0->SetMessage(509086);
					tv0->ClearReplies();
					tv0->AddReply(509087, 9969, 9965);
					tv0->AddReply(509088, 9967, 9966);
					return;
				}
				f_110c_a1_v("Neutral");
				tv0->SetMessage(508854);
				tv0->ClearReplies();
				if (f_2254_a1_b(tv1) && f_2284_a1_b(tv1)) {
					tv0->AddReply(508840, 9693, 9692);
				}
				if (f_2248_a1_b(tv1)) {
					tv0->AddReply(508855, 9687, 9711);
				}
				if (f_2260_a1_b(tv1)) {
					tv0->AddReply(508856, 9691, 9712);
				}
				if (f_22e4_a1_b(tv1)) {
					tv0->AddReply(511978, 13175, 13193);
				}
				tv0->AddReply(511133, -1, 12322);
				tv0->AddReply(534068, -1, 35658);
				return;
			}
			if (a0 == 13175) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(511964);
				tv0->ClearReplies();
				tv0->AddReply(511965, 35751, 13176);
				tv0->AddReply(511977, 13177, 13191);
				tv0->AddReply(511976, 13177, 13189);
				return;
			}
			if (a0 == 35751) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(534171);
				tv0->ClearReplies();
				tv0->AddReply(534172, 13177, 35752);
				tv0->AddReply(534173, 13177, 35753);
				return;
			}
			if (a0 == 13177) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(511966);
				tv0->ClearReplies();
				tv0->AddReply(511967, 13179, 13178);
				tv0->AddReply(511975, 13179, 13187);
				return;
			}
			if (a0 == 13179) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(511968);
				tv0->ClearReplies();
				tv0->AddReply(511969, 13181, 13180);
				tv0->AddReply(511974, 13181, 13185);
				return;
			}
			if (a0 == 13181) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(511970);
				tv0->ClearReplies();
				tv0->AddReply(511971, -1, 13182);
				tv0->AddReply(511972, -1, 13183);
				tv0->AddReply(511973, -1, 13184);
				return;
			}
			if (a0 == 9691) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(508839);
				tv0->ClearReplies();
				tv0->AddReply(508857, 9714, 9713);
				return;
			}
			if (a0 == 9714) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(508858);
				tv0->ClearReplies();
				tv0->AddReply(508859, -1, 9715);
				return;
			}
			if (a0 == 9687) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(508835);
				tv0->ClearReplies();
				tv0->AddReply(508836, 9689, 9688);
				tv0->AddReply(508852, 9689, 9706);
				tv0->AddReply(508853, 9689, 9708);
				return;
			}
			if (a0 == 9689) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(508837);
				tv0->ClearReplies();
				tv0->AddReply(508849, 9703, 9702);
				return;
			}
			if (a0 == 9703) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(508850);
				tv0->ClearReplies();
				tv0->AddReply(508851, -1, 9704);
				return;
			}
			if (a0 == 9693) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(508841);
				tv0->ClearReplies();
				tv0->AddReply(508842, 9695, 9694);
				tv0->AddReply(508846, 9699, 9698);
				tv0->AddReply(508861, 9719, 9718);
				return;
			}
			if (a0 == 9719) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(508862);
				tv0->ClearReplies();
				tv0->AddReply(508863, 9716, 9720);
				tv0->AddReply(508867, 9695, 9725);
				return;
			}
			if (a0 == 9699) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(508847);
				tv0->ClearReplies();
				tv0->AddReply(508848, 9695, 9700);
				return;
			}
			if (a0 == 9695) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(508843);
				tv0->ClearReplies();
				tv0->AddReply(508844, 9716, 9696);
				tv0->AddReply(508845, 9716, 9697);
				return;
			}
			if (a0 == 9716) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(508860);
				tv0->ClearReplies();
				tv0->AddReply(508864, 9723, 9722);
				tv0->AddReply(534069, 9723, 35659);
				return;
			}
			if (a0 == 9723) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(508865);
				tv0->ClearReplies();
				tv0->AddReply(508866, -1, 9724);
				return;
			}
			if (a0 == 9967) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(509089);
				tv0->ClearReplies();
				tv0->AddReply(509090, 9969, 9968);
				return;
			}
			if (a0 == 9969) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(509091);
				tv0->ClearReplies();
				tv0->AddReply(509092, 9971, 9970);
				tv0->AddReply(534066, 9974, 35654);
				return;
			}
			if (a0 == 9971) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(509093);
				tv0->ClearReplies();
				tv0->AddReply(509094, 9974, 9973);
				tv0->AddReply(534067, 9977, 35656);
				return;
			}
			if (a0 == 9974) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(509095);
				tv0->ClearReplies();
				tv0->AddReply(509097, 9977, 9976);
				tv0->AddReply(509096, -1, 9975);
				return;
			}
			if (a0 == 9977) {
				f_110c_a1_v("Neutral");
				tv0->SetMessage(509098);
				tv0->ClearReplies();
				tv0->AddReply(509099, -1, 9978);
				tv0->AddReply(509100, -1, 9979);
				return;
			}
			tv3 = true;
			if (f_1f2a_a0_b()) {
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
		f_1dc0_a1_b(f_1e6d_a0_o());
		if (!f_1d6b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f24_a0_i());
		L0->SetNPCDescription(f_1f22_a0_i());
		L0->SetPhoto(f_1f26_a0_s());
		L0->SetPhoto2(f_1f28_a0_s());
		L0->SetPlayerName(f_24e3_a0_i());
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
		f_1daf_a1_v(a0);
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
			if (f_2290_a1_b(tv1)) {
				f_1f4e_a2_v(tv1, tv0);
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511175);
				tv0->ClearReplies();
				tv0->AddReply(511176, 12361, 12360);
				tv0->AddReply(511178, 12366, 12362);
				break;
			}
			f_149b_a1_v("Neutral");
			tv0->SetMessage(511164);
			tv0->ClearReplies();
			if (f_229c_a1_b(tv1)) {
				tv0->AddReply(511489, 12692, 12691);
			}
			if (f_22a8_a1_b(tv1) && f_22b4_a1_b(tv1)) {
				tv0->AddReply(511187, 12373, 12372);
			}
			if (f_22c0_a1_b(tv1) && f_22cc_a1_b(tv1)) {
				tv0->AddReply(511495, 12697, 12696);
			}
			tv0->AddReply(511174, -1, 12358);
			break;
			return;
		}
		if (f_1f2a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e4a_a1_v(tv2);
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

	void f_149b_a1_v(string a0)
	{
		if (!f_1f2a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e51_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e66_a0_v();
			if (a1 == 12370) {
				f_2069_a2_v(tv1, tv0);
				f_206f_a2_v(tv1, tv0);
				f_20f9_a2_v(tv1, tv0);
				f_2089_a2_v(tv1, tv0);
			}
			if (a1 == 12371) {
				f_2069_a2_v(tv1, tv0);
			}
			if (a1 == 12695) {
				f_206f_a2_v(tv1, tv0);
				f_20f9_a2_v(tv1, tv0);
				f_1f42_a2_v(tv1, tv0);
				f_2089_a2_v(tv1, tv0);
			}
			if (a1 == 12376) {
				f_2099_a2_v(tv1, tv0);
				f_209f_a2_v(tv1, tv0);
				f_1f54_a2_v(tv1, tv0);
			}
			if (a1 == 12377) {
				f_2099_a2_v(tv1, tv0);
				f_209f_a2_v(tv1, tv0);
				f_20e9_a2_v(tv1, tv0);
			}
			if (a1 == 12702) {
				f_2104_a2_v(tv1, tv0);
				f_1fe4_a2_v(tv1, tv0);
				f_1f3c_a2_v(tv1, tv0);
				f_20b6_a2_v(tv1, tv0);
			}
			if (a0 == 12359) {
				if (f_2290_a1_b(tv1)) {
					f_1f4e_a2_v(tv1, tv0);
					f_149b_a1_v("Neutral");
					tv0->SetMessage(511175);
					tv0->ClearReplies();
					tv0->AddReply(511176, 12361, 12360);
					tv0->AddReply(511178, 12366, 12362);
					return;
				}
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511164);
				tv0->ClearReplies();
				if (f_229c_a1_b(tv1)) {
					tv0->AddReply(511489, 12692, 12691);
				}
				if (f_22a8_a1_b(tv1) && f_22b4_a1_b(tv1)) {
					tv0->AddReply(511187, 12373, 12372);
				}
				if (f_22c0_a1_b(tv1) && f_22cc_a1_b(tv1)) {
					tv0->AddReply(511495, 12697, 12696);
				}
				tv0->AddReply(511174, -1, 12358);
				return;
			}
			if (a0 == 12697) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511496);
				tv0->ClearReplies();
				tv0->AddReply(511497, 12699, 12698);
				return;
			}
			if (a0 == 12699) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511498);
				tv0->ClearReplies();
				tv0->AddReply(511499, 12701, 12700);
				return;
			}
			if (a0 == 12701) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511500);
				tv0->ClearReplies();
				tv0->AddReply(511501, -1, 12702);
				if (f_22cc_a1_b(tv1)) {
					tv0->AddReply(511502, -1, 12703);
				}
				return;
			}
			if (a0 == 12373) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511188);
				tv0->ClearReplies();
				tv0->AddReply(511189, 12375, 12374);
				return;
			}
			if (a0 == 12375) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511190);
				tv0->ClearReplies();
				tv0->AddReply(511191, -1, 12376);
				tv0->AddReply(511192, -1, 12377);
				return;
			}
			if (a0 == 12692) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511490);
				tv0->ClearReplies();
				tv0->AddReply(511491, 12694, 12693);
				return;
			}
			if (a0 == 12694) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511492);
				tv0->ClearReplies();
				tv0->AddReply(511493, -1, 12695);
				return;
			}
			if (a0 == 12361) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511177);
				tv0->ClearReplies();
				tv0->AddReply(511180, 12363, 12364);
				tv0->AddReply(511193, 12379, 12378);
				return;
			}
			if (a0 == 12379) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511194);
				tv0->ClearReplies();
				tv0->AddReply(511195, 12363, 12380);
				tv0->AddReply(511198, 12385, 12384);
				return;
			}
			if (a0 == 12385) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511199);
				tv0->ClearReplies();
				tv0->AddReply(511200, 12366, 12386);
				tv0->AddReply(511201, 12363, 12388);
				return;
			}
			if (a0 == 12363) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511179);
				tv0->ClearReplies();
				tv0->AddReply(511181, 12366, 12365);
				tv0->AddReply(511196, 12383, 12382);
				return;
			}
			if (a0 == 12383) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511197);
				tv0->ClearReplies();
				tv0->AddReply(538806, 40725, 40724);
				return;
			}
			if (a0 == 40725) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(538807);
				tv0->ClearReplies();
				tv0->AddReply(511486, 12366, 12688);
				return;
			}
			if (a0 == 12366) {
				f_149b_a1_v("Neutral");
				tv0->SetMessage(511182);
				tv0->ClearReplies();
				tv0->AddReply(511185, -1, 12370);
				tv0->AddReply(511186, -1, 12371);
				return;
			}
			tv3 = true;
			if (f_1f2a_a0_b()) {
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
		f_1dc0_a1_b(f_1e6d_a0_o());
		if (!f_1d6b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f24_a0_i());
		L0->SetNPCDescription(f_1f22_a0_i());
		L0->SetPhoto(f_1f26_a0_s());
		L0->SetPhoto2(f_1f28_a0_s());
		L0->SetPlayerName(f_24e3_a0_i());
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
		f_1daf_a1_v(a0);
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
			f_176f_a1_v("Neutral");
			tv0->SetMessage(511591);
			tv0->ClearReplies();
			if (f_22d8_a1_b(tv1)) {
				tv0->AddReply(511592, 12788, 12787);
			}
			if (f_2308_a1_b(tv1) && f_2320_a1_b(tv1)) {
				tv0->AddReply(511611, 12810, 12809);
			}
			if (f_2314_a1_b(tv1) && f_232c_a1_b(tv1)) {
				tv0->AddReply(511624, 12823, 12822);
			}
			tv0->AddReply(511635, -1, 12834);
			break;
			return;
		}
		if (f_1f2a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e4a_a1_v(tv2);
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

	void f_176f_a1_v(string a0)
	{
		if (!f_1f2a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e51_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e66_a0_v();
			if (a1 == 12808) {
				f_210a_a2_v(tv1, tv0);
				f_200e_a2_v(tv1, tv0);
			}
			if (a1 == 12802) {
				f_210a_a2_v(tv1, tv0);
				f_200e_a2_v(tv1, tv0);
			}
			if (a1 == 12820) {
				f_213b_a2_v(tv1, tv0);
			}
			if (a1 == 12819) {
				f_213b_a2_v(tv1, tv0);
			}
			if (a1 == 12821) {
				f_213b_a2_v(tv1, tv0);
			}
			if (a1 == 12832) {
				f_2141_a2_v(tv1, tv0);
			}
			if (a1 == 12833) {
				f_2141_a2_v(tv1, tv0);
			}
			if (a0 == 12786) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511591);
				tv0->ClearReplies();
				if (f_22d8_a1_b(tv1)) {
					tv0->AddReply(511592, 12788, 12787);
				}
				if (f_2308_a1_b(tv1) && f_2320_a1_b(tv1)) {
					tv0->AddReply(511611, 12810, 12809);
				}
				if (f_2314_a1_b(tv1) && f_232c_a1_b(tv1)) {
					tv0->AddReply(511624, 12823, 12822);
				}
				tv0->AddReply(511635, -1, 12834);
				return;
			}
			if (a0 == 12823) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511625);
				tv0->ClearReplies();
				tv0->AddReply(511626, 12825, 12824);
				tv0->AddReply(511628, 12827, 12826);
				return;
			}
			if (a0 == 12827) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511629);
				tv0->ClearReplies();
				tv0->AddReply(511631, 12830, 12829);
				return;
			}
			if (a0 == 12825) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511627);
				tv0->ClearReplies();
				tv0->AddReply(511630, 12830, 12828);
				return;
			}
			if (a0 == 12830) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511632);
				tv0->ClearReplies();
				tv0->AddReply(511633, -1, 12832);
				tv0->AddReply(511634, -1, 12833);
				return;
			}
			if (a0 == 12810) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511612);
				tv0->ClearReplies();
				tv0->AddReply(511613, 12812, 12811);
				tv0->AddReply(511623, -1, 12821);
				return;
			}
			if (a0 == 12812) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511614);
				tv0->ClearReplies();
				tv0->AddReply(515657, 16695, 16694);
				tv0->AddReply(515659, 16695, 16696);
				return;
			}
			if (a0 == 16695) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(515658);
				tv0->ClearReplies();
				tv0->AddReply(511615, 12814, 12813);
				tv0->AddReply(515660, 12816, 16698);
				return;
			}
			if (a0 == 12814) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511616);
				tv0->ClearReplies();
				tv0->AddReply(511617, 12816, 12815);
				tv0->AddReply(515661, 16701, 16700);
				return;
			}
			if (a0 == 16701) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(515662);
				tv0->ClearReplies();
				tv0->AddReply(511621, -1, 12819);
				return;
			}
			if (a0 == 12816) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511618);
				tv0->ClearReplies();
				tv0->AddReply(511619, 12818, 12817);
				return;
			}
			if (a0 == 12818) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511620);
				tv0->ClearReplies();
				tv0->AddReply(511622, -1, 12820);
				return;
			}
			if (a0 == 12788) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511593);
				tv0->ClearReplies();
				tv0->AddReply(511594, 12790, 12789);
				tv0->AddReply(511599, 12795, 12794);
				return;
			}
			if (a0 == 12795) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511600);
				tv0->ClearReplies();
				tv0->AddReply(511601, 12790, 12796);
				return;
			}
			if (a0 == 12790) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511595);
				tv0->ClearReplies();
				tv0->AddReply(511596, 12792, 12791);
				tv0->AddReply(511602, 12799, 12798);
				return;
			}
			if (a0 == 12799) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511603);
				tv0->ClearReplies();
				tv0->AddReply(511604, 12792, 12800);
				tv0->AddReply(515656, 12805, 16692);
				return;
			}
			if (a0 == 12792) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511597);
				tv0->ClearReplies();
				tv0->AddReply(511598, 12803, 12793);
				tv0->AddReply(511605, -1, 12802);
				return;
			}
			if (a0 == 12803) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511606);
				tv0->ClearReplies();
				tv0->AddReply(511607, 12805, 12804);
				return;
			}
			if (a0 == 12805) {
				f_176f_a1_v("Neutral");
				tv0->SetMessage(511608);
				tv0->ClearReplies();
				tv0->AddReply(511610, -1, 12808);
				return;
			}
			tv3 = true;
			if (f_1f2a_a0_b()) {
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
		f_1dc0_a1_b(f_1e6d_a0_o());
		if (!f_1d6b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f24_a0_i());
		L0->SetNPCDescription(f_1f22_a0_i());
		L0->SetPhoto(f_1f26_a0_s());
		L0->SetPhoto2(f_1f28_a0_s());
		L0->SetPlayerName(f_24e3_a0_i());
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
		f_1daf_a1_v(a0);
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
			f_1a2b_a1_v("Neutral");
			tv0->SetMessage(512203);
			tv0->ClearReplies();
			if (f_2380_a1_b(tv1) && f_238c_a1_b(tv1)) {
				tv0->AddReply(513340, 14573, 14572);
			}
			tv0->AddReply(512204, -1, 13359);
			break;
			return;
		}
		if (f_1f2a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e4a_a1_v(tv2);
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

	void f_1a2b_a1_v(string a0)
	{
		if (!f_1f2a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e51_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e66_a0_v();
			if (a1 == 14572) {
				f_216f_a2_v(tv1, tv0);
			}
			if (a1 == 14578) {
				f_21a6_a2_v(tv1, tv0);
			}
			if (a1 == 14583) {
				f_21a6_a2_v(tv1, tv0);
			}
			if (a1 == 36864) {
				f_21a6_a2_v(tv1, tv0);
			}
			if (a0 == 13358) {
				f_1a2b_a1_v("Neutral");
				tv0->SetMessage(512203);
				tv0->ClearReplies();
				if (f_2380_a1_b(tv1) && f_238c_a1_b(tv1)) {
					tv0->AddReply(513340, 14573, 14572);
				}
				tv0->AddReply(512204, -1, 13359);
				return;
			}
			if (a0 == 14573) {
				f_1a2b_a1_v("Neutral");
				tv0->SetMessage(513341);
				tv0->ClearReplies();
				tv0->AddReply(513342, 14575, 14574);
				tv0->AddReply(535178, 36846, 36845);
				return;
			}
			if (a0 == 36846) {
				f_1a2b_a1_v("Neutral");
				tv0->SetMessage(535179);
				tv0->ClearReplies();
				tv0->AddReply(535180, 36848, 36847);
				tv0->AddReply(535182, 36850, 36849);
				return;
			}
			if (a0 == 36850) {
				f_1a2b_a1_v("Neutral");
				tv0->SetMessage(535183);
				tv0->ClearReplies();
				tv0->AddReply(535184, 36848, 36851);
				return;
			}
			if (a0 == 36848) {
				f_1a2b_a1_v("Neutral");
				tv0->SetMessage(535181);
				tv0->ClearReplies();
				tv0->AddReply(535186, 36855, 36854);
				tv0->AddReply(535185, -1, 36853);
				return;
			}
			if (a0 == 36855) {
				f_1a2b_a1_v("Neutral");
				tv0->SetMessage(535187);
				tv0->ClearReplies();
				tv0->AddReply(535188, 14575, 36856);
				return;
			}
			if (a0 == 14575) {
				f_1a2b_a1_v("Neutral");
				tv0->SetMessage(513343);
				tv0->ClearReplies();
				tv0->AddReply(513344, 14577, 14576);
				tv0->AddReply(535189, 36860, 36858);
				return;
			}
			if (a0 == 36860) {
				f_1a2b_a1_v("Neutral");
				tv0->SetMessage(535190);
				tv0->ClearReplies();
				tv0->AddReply(535191, 14580, 36861);
				tv0->AddReply(535192, -1, 36862);
				return;
			}
			if (a0 == 14577) {
				f_1a2b_a1_v("Neutral");
				tv0->SetMessage(513345);
				tv0->ClearReplies();
				tv0->AddReply(513346, -1, 14578);
				tv0->AddReply(513347, 14580, 14579);
				return;
			}
			if (a0 == 14580) {
				f_1a2b_a1_v("Neutral");
				tv0->SetMessage(513348);
				tv0->ClearReplies();
				tv0->AddReply(513349, 14582, 14581);
				tv0->AddReply(535193, -1, 36864);
				return;
			}
			if (a0 == 14582) {
				f_1a2b_a1_v("Neutral");
				tv0->SetMessage(513350);
				tv0->ClearReplies();
				tv0->AddReply(513351, -1, 14583);
				return;
			}
			tv3 = true;
			if (f_1f2a_a0_b()) {
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
		f_1dc0_a1_b(f_1e6d_a0_o());
		if (!f_1d6b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1f24_a0_i());
		L0->SetNPCDescription(f_1f22_a0_i());
		L0->SetPhoto(f_1f26_a0_s());
		L0->SetPhoto2(f_1f28_a0_s());
		L0->SetPlayerName(f_24e3_a0_i());
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
		f_1daf_a1_v(a0);
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
			f_1bfb_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_1f2a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1e4a_a1_v(tv2);
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

	void f_1bfb_a1_v(string a0)
	{
		if (!f_1f2a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1e51_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1e66_a0_v();
			if (a0 == 42551) {
				f_1bfb_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_1f2a_a0_b()) {
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
		f_1c42_a0_v();
	}

	void f_1c42_a0_v(void)
	{
		if (!f_1d66_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_1cf8_a0_v();
		}
	}

	bool f_1c56_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1d5d_a1_b(L0);
	}

	void f_1c65_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1c6a_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1d44_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1c80_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1c89_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1c89_a0_v();
			if (f_1d66_a0_b() && f_1c6a_a0_b()) {
				if (f_1c56_a0_b()) {
					f_1dfa_a1_b(f_1e6d_a0_o());
				}
			} else {
				f_1c65_a0_v();
				f_1c80_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1d3f_a0_v();
		f_1c89_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_1c89_a0_v();
		f_1e4a_a1_v("Neutral");
		f_1c80_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1c80_a0_v();
		} else {
			f_1e4a_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1d3f_a0_v();
			f_1d5d_a1_b(a0);
			enable OnUse;
			f_24f4_a1_v(a0);
			f_1e4a_a1_v("Neutral");
			f_1c89_a0_v();
			f_1c80_a0_v();
		}
	}
}

void f_1cf8_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1d66_a0_b()) {
		return;
	}
	L0 = f_1f11_a0_i();
	for (L1 = 0; L1 < 5 && f_1d66_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1f0a_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1d3d_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1d3d_a0_b(void)
{
	return true;
}

void f_1d3f_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1d44_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_1d4c_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1d53_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1d5d_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1d53_a1_b(L0);
}

bool f_1d66_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1d6b_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1e73_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_1f2a_a0_b()) {
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

void f_1daf_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_1f2a_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1dc0_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1dfa_a1_b(a0)) {
			if (!f_1e1f_a1_b(a0)) {
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
		if (!f_1e1f_a1_b(a0)) {
			if (!f_1dfa_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1dfa_a1_b(object a0)
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
	return f_1e57_a1_b(L4);
}

bool f_1e1f_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1ee8_a0_i() + "m";
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
	return f_1e57_a1_b(L4);
}

void f_1e4a_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1e51_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_1e57_a1_b(string a0)
{
	if (f_1f2a_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1e66_a0_v(void)
{
	if (f_1f2a_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1e6d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1e73_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1e7d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1e82_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_1e8d_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActorFromXml(L1, L0, a0, a0 + ".xml");
	return L1;
}

void f_1e98_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1ea4_a2_v(object a0, int a1)
{
	f_1d4c_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1e98_a2_v(L0, a1);
	}
}

void f_1eb7_a3_v(object a0, object a1, int a2)
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
		f_1e98_a2_v(L0, a2);
	}
}

void f_1eca_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1eb7_a3_v(a0, L0, a2);
}

bool f_1ed7_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1ee3_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1ee8_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1ef1_a1_b(int a0)
{
	return f_1ee8_a0_i() == a0;
}

bool f_1ef7_a1_b(int a0)
{
	float L0;
	int L1;
	int L2;
	@GetGameTime(L0);
	L1 = 1 + (int)(L0 / 24);
	if (L1 != a0) {
		return false;
	}
	L2 = (int)L0 % 24;
	return L2 < 7;
}

string f_1f0a_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1f11_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1f0a_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1f22_a0_i(void)
{
	return 515528;
}

int f_1f24_a0_i(void)
{
	return 502854;
}

string f_1f26_a0_s(void)
{
	return "ui/NPC_Alexandr.png";
}

string f_1f28_a0_s(void)
{
	return "ui/NPC_Alexandr_b.png";
}

bool f_1f2a_a0_b(void)
{
	return true;
}

void f_1f2c_a2_v(object a0, object a1)
{
	f_24c2_a3_v(f_24b1_a0_o(), "pt_map_katerina", 2);
	a1->ShowMap(f_24b1_a0_o());
}

void f_1f3c_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1f42_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1f48_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr1", 1);
}

void f_1f4e_a2_v(object a0, object a1)
{
	@SetVariable("d4AlexandrVisit", 1);
}

void f_1f54_a2_v(object a0, object a1)
{
	f_24c2_a3_v(f_24b1_a0_o(), "pt_d4q03_volnica", 2);
	a1->ShowMap(f_24b1_a0_o());
}

void f_1f64_a2_v(object a0, object a1)
{
	f_2420_a0_v();
}

void f_1f69_a2_v(object a0, object a1)
{
	@SetVariable("ood1Alexandr2", 1);
}

void f_1f6f_a2_v(object a0, object a1)
{
	@SetVariable("ood2Alexandr1", 1);
}

void f_1f75_a2_v(object a0, object a1)
{
	@SetVariable("ood2Alexandr2", 1);
}

void f_1f7b_a2_v(object a0, object a1)
{
	@SetVariable("ood2Alexandr3", 1);
}

void f_1f81_a2_v(object a0, object a1)
{
	@SetVariable("ood2Alexandr5", 1);
}

void f_1f87_a2_v(object a0, object a1)
{
	object L0;
	@Trace("Revolver is given");
	@CreateInvItem(L0);
	L0->SetItemName("Revolver");
	L0->SetProperty("durability", 30);
	f_1eb7_a3_v(a0, L0, 1);
}

void f_1f9c_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q01", 1);
	L0 = f_24b1_a0_o();
	L0->AddMark("d2q01AlexandrGotoAnna", "pt_map_anna", 1, 511387, f_1ee3_a0_f());
	f_23ec_a0_v();
	f_23f9_a0_v();
	f_1e82_a1_o("quest_d2_02");
}

void f_1fba_a2_v(object a0, object a1)
{
	f_2413_a0_v();
	f_1ed7_a2_b("quest_d2_01", "completed");
}

void f_1fc4_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q01", 6);
	L0 = f_24b1_a0_o();
	L0->AddMark("d2q01AlexandrGotoBigVlad", "pt_map_bigvlad", 1, 511390, f_1ee3_a0_f());
	L0->AddMark("d2q01AlexandrGotoGeorg", "pt_map_georg", 1, 511391, f_1ee3_a0_f());
	f_2406_a0_v();
}

void f_1fe4_a2_v(object a0, object a1)
{
	@Trace("money 5000 is given");
	f_1ea4_a2_v(a0, 5000);
}

void f_1fee_a2_v(object a0, object a1)
{
	f_24c2_a3_v(f_24b1_a0_o(), "pt_map_anna", 2);
	a1->ShowMap(f_24b1_a0_o());
}

void f_1ffe_a2_v(object a0, object a1)
{
	f_24c2_a3_v(f_24b1_a0_o(), "pt_map_julia", 2);
	a1->ShowMap(f_24b1_a0_o());
}

void f_200e_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_2014_a2_v(object a0, object a1)
{
	f_24c2_a3_v(f_24b1_a0_o(), "pt_map_ospina", 2);
	a1->ShowMap(f_24b1_a0_o());
}

void f_2024_a2_v(object a0, object a1)
{
	@SetVariable("ood3Alexandr1", 1);
}

void f_202a_a2_v(object a0, object a1)
{
	@SetVariable("ood3Alexandr2", 1);
}

void f_2030_a2_v(object a0, object a1)
{
	@SetVariable("ood3Alexandr3", 1);
}

void f_2036_a2_v(object a0, object a1)
{
	@SetVariable("ood3Alexandr4", 1);
}

void f_203c_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q01", 2);
	L0 = f_24b1_a0_o();
	L0->AddMark("d3q01AlexandrGotoOspina", "pt_map_ospina", 1, 511148, f_1ee3_a0_f());
	f_242d_a0_v();
}

void f_2053_a2_v(object a0, object a1)
{
	f_24c2_a3_v(f_24b1_a0_o(), "pt_map_bigvlad", 2);
	a1->ShowMap(f_24b1_a0_o());
}

void f_2063_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "d2q01_key", 1);
}

void f_2069_a2_v(object a0, object a1)
{
	@SetVariable("ood4Alexandr1", 1);
}

void f_206f_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_24b1_a0_o();
	L0->AddMark("d4q03AlexandrGotoGrif", "pt_map_grif", 0, 511487, f_1ee3_a0_f());
	f_243a_a0_v();
	f_2447_a0_v();
	f_1e8d_a1_o("quest_d4_03");
}

void f_2089_a2_v(object a0, object a1)
{
	f_24c2_a3_v(f_24b1_a0_o(), "pt_map_grif", 2);
	a1->ShowMap(f_24b1_a0_o());
}

void f_2099_a2_v(object a0, object a1)
{
	@SetVariable("ood4Alexandr2", 1);
}

void f_209f_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q03", 3);
	L0 = f_24b1_a0_o();
	L0->AddMark("d4q03AlexandrAboutVolnica", "pt_d4q03_volnica", 0, 511494, f_1ee3_a0_f());
	f_2454_a0_v();
}

void f_20b6_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_24b1_a0_o();
	L0->FindMark(L1, "d4q03AlexandrAboutVolnica");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03AlexandrGotoGrif");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03AlexandrGotoGrifSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03GrifGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03GrifGotoAlexandrSelf");
	if (L1) {
		L1->Remove();
	}
	f_2461_a0_v();
	f_1ed7_a2_b("quest_d4_03", "completed");
}

void f_20e9_a2_v(object a0, object a1)
{
	f_24c2_a3_v(f_24b1_a0_o(), "pt_map_warehouse_gangster", 2);
	a1->ShowMap(f_24b1_a0_o());
}

void f_20f9_a2_v(object a0, object a1)
{
	@Trace("revolver ammo6 is given");
	f_1eca_a3_v(a0, "revolver_ammo", 6);
}

void f_2104_a2_v(object a0, object a1)
{
	@SetVariable("ood4Alexandr3", 1);
}

void f_210a_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q01", 3);
	L0 = f_24b1_a0_o();
	L0->AddMark("d5q01AlexandrGotoKaterina", "pt_map_katerina", 1, 511958, f_1ee3_a0_f());
}

void f_211e_a2_v(object a0, object a1)
{
	@SetVariable("ood3Alexandr5", 1);
}

void f_2124_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d1q01", 4);
	L0 = f_24b1_a0_o();
	L0->AddMark("d1q01AlexandrGotoJulia", "pt_map_julia", 1, 508636, f_1ee3_a0_f());
	f_23df_a0_v();
}

void f_213b_a2_v(object a0, object a1)
{
	@SetVariable("ood5Alexandr1", 1);
}

void f_2141_a2_v(object a0, object a1)
{
	@SetVariable("ood5Alexandr2", 1);
}

void f_2147_a2_v(object a0, object a1)
{
	@SetVariable("ood6Alexandr1", 1);
}

void f_214d_a2_v(object a0, object a1)
{
	@SetVariable("ood6Alexandr2", 1);
}

void f_2153_a2_v(object a0, object a1)
{
	@SetVariable("ood6Alexandr3", 1);
}

void f_2159_a2_v(object a0, object a1)
{
	@SetVariable("ood6Alexandr4", 1);
}

void f_215f_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_24b1_a0_o();
	L0->AddMark("d6q01AlexandrGotoKaterina", "pt_map_katerina", 1, 515397, f_1ee3_a0_f());
}

void f_216f_a2_v(object a0, object a1)
{
	@SetVariable("ood7Alexandr1", 1);
}

void f_2175_a2_v(object a0, object a1)
{
	@SetVariable("KnowAlexandr", 1);
}

void f_217b_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_24b1_a0_o();
	L0->AddMark("d6q01AlexandrGotoJulia", "pt_map_julia", 1, 515387, f_1ee3_a0_f());
	L0->AddMark("d6q01AlexandrGotoLara", "pt_map_lara", 1, 515386, f_1ee3_a0_f());
	L0->AddMark("d6q01AlexangrGotoJulLaraSelf", "pt_map_alexandr", 1, 515388, f_1ee3_a0_f());
	f_246e_a0_v();
}

void f_21a0_a2_v(object a0, object a1)
{
	@SetVariable("d2TalkToAlexandr", 1);
}

void f_21a6_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_24b1_a0_o();
	L0->AddMark("d7q02AlexandrGotoPetr", "pt_map_petr", 0, 515429, f_1ee3_a0_f());
	f_247b_a0_v();
}

void f_21b9_a2_v(object a0, object a1)
{
	@SetVariable("ood2Alexandr7", 1);
}

bool f_21bf_a1_b(object a0)
{
	if (f_1e7d_a1_i("d1q01") == 4) {
		return true;
	}
	return false;
}

bool f_21cb_a1_b(object a0)
{
	if (f_1e7d_a1_i("cutscene_burn_d1") != 0) {
		return true;
	}
	return false;
}

bool f_21d7_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood1Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_21e3_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood1Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_21ef_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood2Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_21fb_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood2Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_2207_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood2Alexandr3") == 0) {
		return true;
	}
	return false;
}

bool f_2213_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood2Alexandr5") == 0) {
		return true;
	}
	return false;
}

bool f_221f_a1_b(object a0)
{
	if (f_1e7d_a1_i("d2q01") == 0) {
		return true;
	}
	return false;
}

bool f_222b_a1_b(object a0)
{
	if (f_1e7d_a1_i("d2q01") == 5) {
		return true;
	}
	return false;
}

bool f_2237_a1_b(object a0)
{
	return true;
	return false;
}

bool f_223c_a1_b(object a0)
{
	if (f_1e7d_a1_i("d2q01BigVladVisit") == 1) {
		return true;
	}
	return false;
}

bool f_2248_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood3Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_2254_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood3Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_2260_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood3Alexandr3") == 0) {
		return true;
	}
	return false;
}

bool f_226c_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood3Alexandr4") == 0) {
		return true;
	}
	return false;
}

bool f_2278_a1_b(object a0)
{
	if (f_1e7d_a1_i("d3q01") == 8) {
		return true;
	}
	return false;
}

bool f_2284_a1_b(object a0)
{
	if (f_1e7d_a1_i("d3q01") == 1) {
		return true;
	}
	return false;
}

bool f_2290_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood4Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_229c_a1_b(object a0)
{
	if (f_1e7d_a1_i("d4q03") == 0) {
		return true;
	}
	return false;
}

bool f_22a8_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood4Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_22b4_a1_b(object a0)
{
	if (f_1e7d_a1_i("d4q03") == 2) {
		return true;
	}
	return false;
}

bool f_22c0_a1_b(object a0)
{
	if (f_1e7d_a1_i("d4q03_alldead") == 1) {
		return true;
	}
	return false;
}

bool f_22cc_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood4Alexandr3") == 0) {
		return true;
	}
	return false;
}

bool f_22d8_a1_b(object a0)
{
	if (f_1e7d_a1_i("d5q01") == 2) {
		return true;
	}
	return false;
}

bool f_22e4_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood3Alexandr5") == 0) {
		return true;
	}
	return false;
}

bool f_22f0_a1_b(object a0)
{
	if (f_1e7d_a1_i("d1q01") == 3) {
		return true;
	}
	return false;
}

bool f_22fc_a1_b(object a0)
{
	if (f_1e7d_a1_i("d6q02") == 1) {
		return true;
	}
	return false;
}

bool f_2308_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood5Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_2314_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood5Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_2320_a1_b(object a0)
{
	if (f_1e7d_a1_i("d5q03") == 1) {
		return true;
	}
	return false;
}

bool f_232c_a1_b(object a0)
{
	if (f_1e7d_a1_i("d5q03") == 2) {
		return true;
	}
	return false;
}

bool f_2338_a1_b(object a0)
{
	if (f_1e7d_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_2344_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood6Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_2350_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood6Alexandr2") == 0) {
		return true;
	}
	return false;
}

bool f_235c_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood6Alexandr3") == 0) {
		return true;
	}
	return false;
}

bool f_2368_a1_b(object a0)
{
	if (f_1e7d_a1_i("d6q01KnowKillerIsKlara") == 1) {
		return true;
	}
	return false;
}

bool f_2374_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood6Alexandr4") == 0) {
		return true;
	}
	return false;
}

bool f_2380_a1_b(object a0)
{
	if (f_1e7d_a1_i("d7q02") == 1) {
		return true;
	}
	return false;
}

bool f_238c_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood7Alexandr1") == 0) {
		return true;
	}
	return false;
}

bool f_2398_a1_b(object a0)
{
	if (f_1e7d_a1_i("microscope_d6q01_lara_blood") != 0) {
		return true;
	}
	return false;
}

bool f_23a4_a1_b(object a0)
{
	if (f_1e7d_a1_i("microscope_d6q01_julia_blood") != 0) {
		return true;
	}
	return false;
}

bool f_23b0_a1_b(object a0)
{
	if (f_1e7d_a1_i("d2q01") >= 5) {
		return true;
	}
	return false;
}

bool f_23bc_a1_b(object a0)
{
	if (f_1e7d_a1_i("ood2Alexandr7") == 0) {
		return true;
	}
	return false;
}

bool f_23c8_a1_b(object a0)
{
	if (f_1e7d_a1_i("d2q01") < 5 && f_1e7d_a1_i("d2q01") >= 1) {
		return true;
	}
	return false;
}

void f_23df_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 34, 1, 512116);
	f_2495_a2_b(L0, 2);
}

void f_23ec_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 10, 1, 503081);
	f_2495_a2_b(L0, -1);
}

void f_23f9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 50, 1, 512132);
	f_2495_a2_b(L0, 10);
}

void f_2406_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 55, 1, 512137);
	f_2495_a2_b(L0, 10);
}

void f_2413_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 56, 1, 512138);
	f_2495_a2_b(L0, 10);
}

void f_2420_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 73, 1, 512155);
	f_2495_a2_b(L0, 25);
}

void f_242d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 69, 1, 512151);
	f_2495_a2_b(L0, 25);
}

void f_243a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 22, 2, 503362);
	f_2495_a2_b(L0, -1);
}

void f_2447_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 96, 2, 512178);
	f_2495_a2_b(L0, 22);
}

void f_2454_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 98, 2, 512180);
	f_2495_a2_b(L0, 22);
}

void f_2461_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 100, 2, 512182);
	f_2495_a2_b(L0, 22);
}

void f_246e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 114, 1, 513737);
	f_2495_a2_b(L0, 111);
}

void f_247b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 172, 2, 515424);
	f_2495_a2_b(L0, 170);
}

object f_2488_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2495_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2488_a0_o();
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

object f_24b1_a0_o(void)
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

void f_24c2_a3_v(object a0, string a1, float a2)
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

int f_24e3_a0_i(void)
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

void f_24f4_a1_v(object a0)
{
	if (!g1) {
		t7{a0};
		g1 = true;
	}
	if (f_1ef7_a1_b(2)) {
		t3{a0};
		return;
	}
	if (f_1ef1_a1_b(1)) {
		t1{a0};
		return;
	}
	if (f_1ef1_a1_b(2)) {
		t11{a0};
		return;
	}
	if (f_1ef1_a1_b(3)) {
		t13{a0};
		return;
	}
	if (f_1ef1_a1_b(4)) {
		t15{a0};
		return;
	}
	if (f_1ef1_a1_b(5)) {
		t17{a0};
		return;
	}
	if (f_1ef1_a1_b(6)) {
		t9{a0};
		return;
	}
	if (f_1ef1_a1_b(7)) {
		t19{a0};
		return;
	}
	if (f_1ef1_a1_b(12)) {
		t5{a0};
		return;
	}
	t21{a0};
}

