event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

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
		if (!f_af5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cbe_a0_i());
		L0->SetNPCDescription(f_cbc_a0_i());
		L0->SetPhoto(f_cc0_a0_s());
		L0->SetPhoto2(f_cc2_a0_s());
		L0->SetPlayerName(f_e10_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_b4c_a1_b(f_c0b_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_b3a_a1_v(a0);
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
			f_d48_a2_v(tv1, tv0);
			f_90_a1_v("Neutral");
			tv0->SetMessage(500370);
			tv0->ClearReplies();
			tv0->AddReply(500371, 432, 430);
			tv0->AddReply(500372, 437, 431);
			break;
			return;
		}
		if (f_cc4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd6_a1_v(tv2);
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

	void f_90_a1_v(string a0)
	{
		if (!f_cc4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_be6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_c04_a0_v();
			if (a0 == 429) {
				f_d48_a2_v(tv1, tv0);
				f_90_a1_v("Neutral");
				tv0->SetMessage(500370);
				tv0->ClearReplies();
				tv0->AddReply(500371, 432, 430);
				tv0->AddReply(500372, 437, 431);
				return;
			}
			if (a0 == 437) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(500377);
				tv0->ClearReplies();
				tv0->AddReply(500378, 432, 438);
				return;
			}
			if (a0 == 432) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(500373);
				tv0->ClearReplies();
				tv0->AddReply(500374, 435, 433);
				tv0->AddReply(500375, 435, 434);
				return;
			}
			if (a0 == 435) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(500376);
				tv0->ClearReplies();
				tv0->AddReply(500381, -1, 442);
				tv0->AddReply(500379, -1, 440);
				return;
			}
			tv3 = true;
			if (f_cc4_a0_b()) {
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
		if (!f_af5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cbe_a0_i());
		L0->SetNPCDescription(f_cbc_a0_i());
		L0->SetPhoto(f_cc0_a0_s());
		L0->SetPhoto2(f_cc2_a0_s());
		L0->SetPlayerName(f_e10_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_b4c_a1_b(f_c0b_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_b3a_a1_v(a0);
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
			f_1af_a1_v("Neutral");
			tv0->SetMessage(509473);
			tv0->ClearReplies();
			if (f_d69_a1_b(tv1)) {
				tv0->AddReply(533914, 35474, 35473);
			}
			if (f_d75_a1_b(tv1)) {
				tv0->AddReply(509474, 10417, 10416);
			}
			tv0->AddReply(509487, -1, 10429);
			break;
			return;
		}
		if (f_cc4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd6_a1_v(tv2);
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

	void f_1af_a1_v(string a0)
	{
		if (!f_cc4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_be6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_c04_a0_v();
			if (a1 == 35473) {
				f_ce1_a2_v(tv1, tv0);
			}
			if (a1 == 35486) {
				f_cc6_a2_v(tv1, tv0);
			}
			if (a1 == 35487) {
				f_cc6_a2_v(tv1, tv0);
			}
			if (a1 == 10416) {
				f_ce7_a2_v(tv1, tv0);
			}
			if (a0 == 10415) {
				f_1af_a1_v("Neutral");
				tv0->SetMessage(509473);
				tv0->ClearReplies();
				if (f_d69_a1_b(tv1)) {
					tv0->AddReply(533914, 35474, 35473);
				}
				if (f_d75_a1_b(tv1)) {
					tv0->AddReply(509474, 10417, 10416);
				}
				tv0->AddReply(509487, -1, 10429);
				return;
			}
			if (a0 == 10417) {
				f_1af_a1_v("Autizm");
				tv0->SetMessage(509475);
				tv0->ClearReplies();
				tv0->AddReply(509476, 10419, 10418);
				tv0->AddReply(509481, 10424, 10423);
				return;
			}
			if (a0 == 10424) {
				f_1af_a1_v("Autizm");
				tv0->SetMessage(509482);
				tv0->ClearReplies();
				tv0->AddReply(509483, 10426, 10425);
				return;
			}
			if (a0 == 10426) {
				f_1af_a1_v("Autizm");
				tv0->SetMessage(509484);
				tv0->ClearReplies();
				tv0->AddReply(509485, -1, 10427);
				tv0->AddReply(509486, -1, 10428);
				return;
			}
			if (a0 == 10419) {
				f_1af_a1_v("Autizm");
				tv0->SetMessage(509477);
				tv0->ClearReplies();
				tv0->AddReply(509478, -1, 10420);
				tv0->AddReply(509479, -1, 10421);
				tv0->AddReply(509480, -1, 10422);
				return;
			}
			if (a0 == 35474) {
				f_1af_a1_v("Disturbance");
				tv0->SetMessage(533915);
				tv0->ClearReplies();
				tv0->AddReply(533916, 35476, 35475);
				tv0->AddReply(533923, 35483, 35482);
				return;
			}
			if (a0 == 35483) {
				f_1af_a1_v("Disturbance");
				tv0->SetMessage(533924);
				tv0->ClearReplies();
				tv0->AddReply(533925, 35478, 35484);
				return;
			}
			if (a0 == 35476) {
				f_1af_a1_v("Disturbance");
				tv0->SetMessage(533917);
				tv0->ClearReplies();
				tv0->AddReply(533918, 35478, 35477);
				tv0->AddReply(533936, 35499, 35498);
				return;
			}
			if (a0 == 35499) {
				f_1af_a1_v("Disturbance");
				tv0->SetMessage(533937);
				tv0->ClearReplies();
				tv0->AddReply(533939, 35504, 35501);
				tv0->AddReply(533938, 35478, 35500);
				return;
			}
			if (a0 == 35504) {
				f_1af_a1_v("Disturbance");
				tv0->SetMessage(533940);
				tv0->ClearReplies();
				tv0->AddReply(533941, 35506, 35505);
				return;
			}
			if (a0 == 35506) {
				f_1af_a1_v("Pain");
				tv0->SetMessage(533942);
				tv0->ClearReplies();
				tv0->AddReply(533943, 35508, 35507);
				tv0->AddReply(533948, 35510, 35512);
				return;
			}
			if (a0 == 35510) {
				f_1af_a1_v("Pain");
				tv0->SetMessage(533946);
				tv0->ClearReplies();
				tv0->AddReply(533947, -1, 35511);
				return;
			}
			if (a0 == 35508) {
				f_1af_a1_v("Pain");
				tv0->SetMessage(533944);
				tv0->ClearReplies();
				tv0->AddReply(533945, -1, 35509);
				return;
			}
			if (a0 == 35478) {
				f_1af_a1_v("Disturbance");
				tv0->SetMessage(533919);
				tv0->ClearReplies();
				tv0->AddReply(533922, 35485, 35481);
				tv0->AddReply(533930, 35490, 35489);
				return;
			}
			if (a0 == 35490) {
				f_1af_a1_v("Welldie");
				tv0->SetMessage(533931);
				tv0->ClearReplies();
				tv0->AddReply(533932, 35493, 35491);
				tv0->AddReply(533934, 35485, 35494);
				return;
			}
			if (a0 == 35493) {
				f_1af_a1_v("Welldie");
				tv0->SetMessage(533933);
				tv0->ClearReplies();
				tv0->AddReply(533935, 35485, 35495);
				return;
			}
			if (a0 == 35485) {
				f_1af_a1_v("Neutral");
				tv0->SetMessage(533926);
				tv0->ClearReplies();
				tv0->AddReply(533927, -1, 35486);
				tv0->AddReply(533928, -1, 35487);
				return;
			}
			tv3 = true;
			if (f_cc4_a0_b()) {
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
		if (!f_af5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cbe_a0_i());
		L0->SetNPCDescription(f_cbc_a0_i());
		L0->SetPhoto(f_cc0_a0_s());
		L0->SetPhoto2(f_cc2_a0_s());
		L0->SetPlayerName(f_e10_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_b4c_a1_b(f_c0b_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_b3a_a1_v(a0);
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
			f_405_a1_v("Pain");
			tv0->SetMessage(509951);
			tv0->ClearReplies();
			if (f_dbd_a1_b(tv1)) {
				tv0->AddReply(509961, 10970, 10978);
			}
			tv0->AddReply(509952, -1, 10969);
			break;
			return;
		}
		if (f_cc4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd6_a1_v(tv2);
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

	void f_405_a1_v(string a0)
	{
		if (!f_cc4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_be6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_c04_a0_v();
			if (a1 == 10978) {
				f_d4e_a2_v(tv1, tv0);
			}
			if (a1 == 10976) {
				f_d09_a2_v(tv1, tv0);
				f_cdb_a2_v(tv1, tv0);
			}
			if (a1 == 10977) {
				f_d14_a2_v(tv1, tv0);
			}
			if (a0 == 10968) {
				f_405_a1_v("Pain");
				tv0->SetMessage(509951);
				tv0->ClearReplies();
				if (f_dbd_a1_b(tv1)) {
					tv0->AddReply(509961, 10970, 10978);
				}
				tv0->AddReply(509952, -1, 10969);
				return;
			}
			if (a0 == 10970) {
				f_405_a1_v("Pain");
				tv0->SetMessage(509953);
				tv0->ClearReplies();
				tv0->AddReply(509954, -1, 10971);
				tv0->AddReply(509955, 10973, 10972);
				return;
			}
			if (a0 == 10973) {
				f_405_a1_v("Pain");
				tv0->SetMessage(509956);
				tv0->ClearReplies();
				tv0->AddReply(509957, 10975, 10974);
				tv0->AddReply(534181, -1, 35764);
				return;
			}
			if (a0 == 10975) {
				f_405_a1_v("Welldie");
				tv0->SetMessage(509958);
				tv0->ClearReplies();
				tv0->AddReply(509959, -1, 10976);
				tv0->AddReply(509960, -1, 10977);
				return;
			}
			tv3 = true;
			if (f_cc4_a0_b()) {
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
		if (!f_af5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cbe_a0_i());
		L0->SetNPCDescription(f_cbc_a0_i());
		L0->SetPhoto(f_cc0_a0_s());
		L0->SetPhoto2(f_cc2_a0_s());
		L0->SetPlayerName(f_e10_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_b4c_a1_b(f_c0b_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_b3a_a1_v(a0);
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
			f_545_a1_v("Neutral");
			tv0->SetMessage(512815);
			tv0->ClearReplies();
			if (f_d99_a1_b(tv1) && f_da5_a1_b(tv1)) {
				tv0->AddReply(512816, 14017, 14016);
			}
			tv0->AddReply(512828, -1, 14028);
			break;
			return;
		}
		if (f_cc4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd6_a1_v(tv2);
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

	void f_545_a1_v(string a0)
	{
		if (!f_cc4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_be6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_c04_a0_v();
			if (a1 == 14233) {
				f_d1b_a2_v(tv1, tv0);
				f_d3d_a2_v(tv1, tv0);
			}
			if (a1 == 14234) {
				f_d1b_a2_v(tv1, tv0);
				f_d3d_a2_v(tv1, tv0);
			}
			if (a1 == 14027) {
				f_d1b_a2_v(tv1, tv0);
				f_d21_a2_v(tv1, tv0);
			}
			if (a1 == 14026) {
				f_d1b_a2_v(tv1, tv0);
				f_d21_a2_v(tv1, tv0);
			}
			if (a0 == 14015) {
				f_545_a1_v("Neutral");
				tv0->SetMessage(512815);
				tv0->ClearReplies();
				if (f_d99_a1_b(tv1) && f_da5_a1_b(tv1)) {
					tv0->AddReply(512816, 14017, 14016);
				}
				tv0->AddReply(512828, -1, 14028);
				return;
			}
			if (a0 == 14017) {
				if (!f_d8d_a1_b(tv1)) {
					f_545_a1_v("Disturbance");
					tv0->SetMessage(512817);
					tv0->ClearReplies();
					tv0->AddReply(513022, 14230, 14229);
					return;
				}
				if (f_d8d_a1_b(tv1)) {
					f_545_a1_v("Welldie");
					tv0->SetMessage(513021);
					tv0->ClearReplies();
					tv0->AddReply(512818, 14019, 14018);
					return;
				}
			}
			if (a0 == 14019) {
				f_545_a1_v("Welldie");
				tv0->SetMessage(512819);
				tv0->ClearReplies();
				tv0->AddReply(512820, 14021, 14020);
				return;
			}
			if (a0 == 14021) {
				f_545_a1_v("Neutral");
				tv0->SetMessage(512821);
				tv0->ClearReplies();
				tv0->AddReply(512822, 14023, 14022);
				return;
			}
			if (a0 == 14023) {
				f_545_a1_v("Autizm");
				tv0->SetMessage(512823);
				tv0->ClearReplies();
				tv0->AddReply(512824, 14025, 14024);
				tv0->AddReply(512826, -1, 14026);
				return;
			}
			if (a0 == 14025) {
				f_545_a1_v("Autizm");
				tv0->SetMessage(512825);
				tv0->ClearReplies();
				tv0->AddReply(512827, -1, 14027);
				return;
			}
			if (a0 == 14230) {
				f_545_a1_v("Disturbance");
				tv0->SetMessage(513023);
				tv0->ClearReplies();
				tv0->AddReply(513024, 14232, 14231);
				tv0->AddReply(513027, -1, 14234);
				return;
			}
			if (a0 == 14232) {
				f_545_a1_v("Autizm");
				tv0->SetMessage(513025);
				tv0->ClearReplies();
				tv0->AddReply(513026, -1, 14233);
				return;
			}
			tv3 = true;
			if (f_cc4_a0_b()) {
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
		if (!f_af5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cbe_a0_i());
		L0->SetNPCDescription(f_cbc_a0_i());
		L0->SetPhoto(f_cc0_a0_s());
		L0->SetPhoto2(f_cc2_a0_s());
		L0->SetPlayerName(f_e10_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_b4c_a1_b(f_c0b_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_b3a_a1_v(a0);
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
			f_6f9_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_cc4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd6_a1_v(tv2);
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

	void f_6f9_a1_v(string a0)
	{
		if (!f_cc4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_be6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_c04_a0_v();
			if (a0 == 36960) {
				f_6f9_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_6f9_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_6f9_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_cc4_a0_b()) {
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
		if (!f_af5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cbe_a0_i());
		L0->SetNPCDescription(f_cbc_a0_i());
		L0->SetPhoto(f_cc0_a0_s());
		L0->SetPhoto2(f_cc2_a0_s());
		L0->SetPlayerName(f_e10_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_b4c_a1_b(f_c0b_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_b3a_a1_v(a0);
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
			f_80a_a1_v("Pain");
			tv0->SetMessage(540043);
			tv0->ClearReplies();
			if (f_db1_a1_b(tv1) && f_d81_a1_b(tv1)) {
				tv0->AddReply(540045, 42013, 42012);
			}
			tv0->AddReply(540044, -1, 42011);
			tv0->AddReply(540060, -1, 42029);
			break;
			return;
		}
		if (f_cc4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd6_a1_v(tv2);
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

	void f_80a_a1_v(string a0)
	{
		if (!f_cc4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_be6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_c04_a0_v();
			if (a1 == 42012) {
				f_ced_a2_v(tv1, tv0);
			}
			if (a1 == 42025) {
				f_d54_a2_v(tv1, tv0);
			}
			if (a1 == 42026) {
				f_d54_a2_v(tv1, tv0);
				f_cfe_a2_v(tv1, tv0);
				f_cf3_a2_v(tv1, tv0);
			}
			if (a0 == 42010) {
				f_80a_a1_v("Pain");
				tv0->SetMessage(540043);
				tv0->ClearReplies();
				if (f_db1_a1_b(tv1) && f_d81_a1_b(tv1)) {
					tv0->AddReply(540045, 42013, 42012);
				}
				tv0->AddReply(540044, -1, 42011);
				tv0->AddReply(540060, -1, 42029);
				return;
			}
			if (a0 == 42013) {
				f_80a_a1_v("Pain");
				tv0->SetMessage(540046);
				tv0->ClearReplies();
				tv0->AddReply(540047, 42015, 42014);
				tv0->AddReply(540052, 42024, 42019);
				return;
			}
			if (a0 == 42015) {
				f_80a_a1_v("Pain");
				tv0->SetMessage(540048);
				tv0->ClearReplies();
				tv0->AddReply(540049, 42017, 42016);
				return;
			}
			if (a0 == 42017) {
				f_80a_a1_v("Welldie");
				tv0->SetMessage(540050);
				tv0->ClearReplies();
				tv0->AddReply(540051, 42020, 42018);
				tv0->AddReply(540056, 42024, 42023);
				return;
			}
			if (a0 == 42020) {
				f_80a_a1_v("Pain");
				tv0->SetMessage(540053);
				tv0->ClearReplies();
				tv0->AddReply(540054, 42024, 42021);
				return;
			}
			if (a0 == 42024) {
				f_80a_a1_v("Neutral");
				tv0->SetMessage(540057);
				tv0->ClearReplies();
				tv0->AddReply(540058, -1, 42025);
				tv0->AddReply(540059, -1, 42026);
				return;
			}
			tv3 = true;
			if (f_cc4_a0_b()) {
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
		if (!f_af5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cbe_a0_i());
		L0->SetNPCDescription(f_cbc_a0_i());
		L0->SetPhoto(f_cc0_a0_s());
		L0->SetPhoto2(f_cc2_a0_s());
		L0->SetPlayerName(f_e10_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_b4c_a1_b(f_c0b_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_b3a_a1_v(a0);
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
			f_973_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_cc4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd6_a1_v(tv2);
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

	void f_973_a1_v(string a0)
	{
		if (!f_cc4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_be6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_c04_a0_v();
			if (a0 == 42557) {
				f_973_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_cc4_a0_b()) {
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
		f_9b7_a0_v();
	}

	void f_9b7_a0_v(void)
	{
		if (!f_af0_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_a67_a0_v();
		}
	}

	bool f_9c5_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_ae7_a1_b(L0);
	}

	void f_9d4_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_9d9_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_ab3_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_9ef_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_9f8_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_9f8_a0_v();
			if (f_af0_a0_b() && f_9d9_a0_b()) {
				if (f_9c5_a0_b()) {
					f_b86_a1_b(f_c0b_a0_o());
				}
			} else {
				f_9d4_a0_v();
				f_9ef_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_aae_a0_v();
		f_9f8_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_9f8_a0_v();
		f_bd6_a1_v("Neutral");
		f_9ef_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_9ef_a0_v();
		} else {
			f_bd6_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_aae_a0_v();
			f_ae7_a1_b(a0);
			enable OnUse;
			f_e21_a1_v(a0);
			f_bd6_a1_v("Neutral");
			f_9f8_a0_v();
			f_9ef_a0_v();
		}
	}
}

void f_a67_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_af0_a0_b()) {
		return;
	}
	L0 = f_cab_a0_i();
	for (L1 = 0; L1 < 5 && f_af0_a0_b(); L1++) {
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
			@PlayAnimation("all", f_ca4_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_aac_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_aac_a0_b(void)
{
	return true;
}

void f_aae_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_ab3_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_abb_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_ac7_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_abb_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_c1b_a3_f(L0 + a2, a3, a4));
	return true;
}

bool f_add_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_ae7_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_add_a1_b(L0);
}

bool f_af0_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_af5_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_c11_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_cc4_a0_b()) {
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

void f_b3a_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_cc4_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_b4c_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_b86_a1_b(a0)) {
			if (!f_bab_a1_b(a0)) {
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
		if (!f_bab_a1_b(a0)) {
			if (!f_b86_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_b86_a1_b(object a0)
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
	return f_bf5_a1_b(L4);
}

bool f_bab_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_c95_a0_i() + "m";
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
	return f_bf5_a1_b(L4);
}

void f_bd6_a1_v(string a0)
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

void f_be6_a2_v(string a0, bool a1)
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

bool f_bf5_a1_b(string a0)
{
	if (f_cc4_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_c04_a0_v(void)
{
	if (f_cc4_a0_b()) {
		@lshStopSpeech();
	}
}

object f_c0b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_c11_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_c1b_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_c26_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_c2b_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_c37_a3_v(object a0, object a1, int a2)
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
		f_c2b_a2_v(L0, a2);
	}
}

void f_c4a_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_c37_a3_v(a0, L0, a2);
}

bool f_c57_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_c7a_a1_v(a1);
	f_ac7_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_c7a_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_c84_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_c90_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_c95_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_c9e_a1_b(int a0)
{
	return f_c95_a0_i() == a0;
}

string f_ca4_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_cab_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_ca4_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_cbc_a0_i(void)
{
	return 515542;
}

int f_cbe_a0_i(void)
{
	return 502867;
}

string f_cc0_a0_s(void)
{
	return "ui/NPC_Laska.png";
}

string f_cc2_a0_s(void)
{
	return "ui/NPC_Laska_b.png";
}

bool f_cc4_a0_b(void)
{
	return true;
}

void f_cc6_a2_v(object a0, object a1)
{
	object L0;
	@Trace("lockpick1time is given");
	@CreateInvItem(L0);
	L0->SetItemName("lockpick");
	L0->SetProperty("uses", 1);
	f_c37_a3_v(a0, L0, 1);
}

void f_cdb_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_ce1_a2_v(object a0, object a1)
{
	@SetVariable("ood2Laska1", 1);
}

void f_ce7_a2_v(object a0, object a1)
{
	@SetVariable("ood2Laska2", 1);
}

void f_ced_a2_v(object a0, object a1)
{
	@SetVariable("ood11Laska1", 1);
}

void f_cf3_a2_v(object a0, object a1)
{
	@Trace("bandage is given");
	f_c4a_a3_v(a0, "bandage", 1);
}

void f_cfe_a2_v(object a0, object a1)
{
	@Trace("tourniquet is given");
	f_c4a_a3_v(a0, "tourniquet", 1);
}

void f_d09_a2_v(object a0, object a1)
{
	@Trace("powder is given");
	f_c4a_a3_v(a0, "powder", 1);
}

void f_d14_a2_v(object a0, object a1)
{
	f_c57_a2_b(a0, 0.30000001192092896);
}

void f_d1b_a2_v(object a0, object a1)
{
	@SetVariable("ood6Laska1", 1);
}

void f_d21_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d6q01", 3);
	L0 = f_dff_a0_o();
	L0->AddMark("d6q01LaskaGotoAlbinos", "pt_d6q03_albinos", 1, 515400, f_c90_a0_f());
	f_dc9_a0_v();
	f_c84_a2_b("quest_d6_01", "albinos_klara");
}

void f_d3d_a2_v(object a0, object a1)
{
	@SetVariable("d6q01", 4);
	f_c84_a2_b("quest_d6_01", "eva_klara");
}

void f_d48_a2_v(object a0, object a1)
{
	@SetVariable("KnowLaska", 1);
}

void f_d4e_a2_v(object a0, object a1)
{
	@SetVariable("ood3Laska1", 1);
}

void f_d54_a2_v(object a0, object a1)
{
	object L0;
	@Trace("Knife is given");
	@CreateInvItem(L0);
	L0->SetItemName("Knife");
	L0->SetProperty("durability", 100);
	f_c37_a3_v(a0, L0, 1);
}

bool f_d69_a1_b(object a0)
{
	if (f_c26_a1_i("ood2Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_d75_a1_b(object a0)
{
	if (f_c26_a1_i("ood2Laska2") == 0) {
		return true;
	}
	return false;
}

bool f_d81_a1_b(object a0)
{
	if (f_c26_a1_i("ood11Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_d8d_a1_b(object a0)
{
	if (f_c26_a1_i("d6q03AlbinosKilled") == 1) {
		return true;
	}
	return false;
}

bool f_d99_a1_b(object a0)
{
	if (f_c26_a1_i("d6q01") == 2) {
		return true;
	}
	return false;
}

bool f_da5_a1_b(object a0)
{
	if (f_c26_a1_i("ood6Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_db1_a1_b(object a0)
{
	if (f_c26_a1_i("d11q01") == 3) {
		return true;
	}
	return false;
}

bool f_dbd_a1_b(object a0)
{
	if (f_c26_a1_i("ood3Laska1") == 0) {
		return true;
	}
	return false;
}

void f_dc9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 117, 1, 513740);
	f_de3_a2_b(L0, 111);
}

object f_dd6_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_de3_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_dd6_a0_o();
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

object f_dff_a0_o(void)
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

int f_e10_a0_i(void)
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

void f_e21_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_laska", L0);
	if (!L0) {
		t0{a0};
		@SetVariable("mt_laska", 1);
	}
	if (f_c9e_a1_b(2)) {
		t2{a0};
		return;
	}
	if (f_c9e_a1_b(3)) {
		t4{a0};
		return;
	}
	if (f_c9e_a1_b(6)) {
		t6{a0};
		return;
	}
	if (f_c9e_a1_b(11)) {
		t10{a0};
		return;
	}
	if (f_c9e_a1_b(12)) {
		t8{a0};
		return;
	}
	t12{a0};
}

