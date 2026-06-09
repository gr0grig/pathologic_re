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
		} while (!f_af3_a0_b());
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
		f_b4d_a1_b(f_bfa_a0_o());
		if (!f_af8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cad_a0_i());
		L0->SetNPCDescription(f_cab_a0_i());
		L0->SetPhoto(f_caf_a0_s());
		L0->SetPhoto2(f_cb1_a0_s());
		L0->SetPlayerName(f_dea_a0_i());
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
		f_b3c_a1_v(a0);
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
			f_9d_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_cb3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd7_a1_v(tv2);
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

	void f_9d_a1_v(string a0)
	{
		if (!f_cb3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bde_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bf3_a0_v();
			if (a0 == 36960) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_cb3_a0_b()) {
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
		f_b4d_a1_b(f_bfa_a0_o());
		if (!f_af8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cad_a0_i());
		L0->SetNPCDescription(f_cab_a0_i());
		L0->SetPhoto(f_caf_a0_s());
		L0->SetPhoto2(f_cb1_a0_s());
		L0->SetPlayerName(f_dea_a0_i());
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
		f_b3c_a1_v(a0);
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
			f_d22_a2_v(tv1, tv0);
			f_1a0_a1_v("Neutral");
			tv0->SetMessage(500370);
			tv0->ClearReplies();
			tv0->AddReply(500371, 432, 430);
			tv0->AddReply(500372, 437, 431);
			break;
			return;
		}
		if (f_cb3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd7_a1_v(tv2);
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

	void f_1a0_a1_v(string a0)
	{
		if (!f_cb3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bde_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bf3_a0_v();
			if (a0 == 429) {
				f_d22_a2_v(tv1, tv0);
				f_1a0_a1_v("Neutral");
				tv0->SetMessage(500370);
				tv0->ClearReplies();
				tv0->AddReply(500371, 432, 430);
				tv0->AddReply(500372, 437, 431);
				return;
			}
			if (a0 == 437) {
				f_1a0_a1_v("Neutral");
				tv0->SetMessage(500377);
				tv0->ClearReplies();
				tv0->AddReply(500378, 432, 438);
				return;
			}
			if (a0 == 432) {
				f_1a0_a1_v("Neutral");
				tv0->SetMessage(500373);
				tv0->ClearReplies();
				tv0->AddReply(500374, 435, 433);
				tv0->AddReply(500375, 435, 434);
				return;
			}
			if (a0 == 435) {
				f_1a0_a1_v("Neutral");
				tv0->SetMessage(500376);
				tv0->ClearReplies();
				tv0->AddReply(500381, -1, 442);
				tv0->AddReply(500379, -1, 440);
				return;
			}
			tv3 = true;
			if (f_cb3_a0_b()) {
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
		f_b4d_a1_b(f_bfa_a0_o());
		if (!f_af8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cad_a0_i());
		L0->SetNPCDescription(f_cab_a0_i());
		L0->SetPhoto(f_caf_a0_s());
		L0->SetPhoto2(f_cb1_a0_s());
		L0->SetPlayerName(f_dea_a0_i());
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
		f_b3c_a1_v(a0);
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
			f_2bf_a1_v("Neutral");
			tv0->SetMessage(509473);
			tv0->ClearReplies();
			if (f_d43_a1_b(tv1)) {
				tv0->AddReply(533914, 35474, 35473);
			}
			if (f_d4f_a1_b(tv1)) {
				tv0->AddReply(509474, 10417, 10416);
			}
			tv0->AddReply(509487, -1, 10429);
			break;
			return;
		}
		if (f_cb3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd7_a1_v(tv2);
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

	void f_2bf_a1_v(string a0)
	{
		if (!f_cb3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bde_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bf3_a0_v();
			if (a1 == 35473) {
				f_cbb_a2_v(tv1, tv0);
			}
			if (a1 == 10416) {
				f_cc1_a2_v(tv1, tv0);
			}
			if (a0 == 10415) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(509473);
				tv0->ClearReplies();
				if (f_d43_a1_b(tv1)) {
					tv0->AddReply(533914, 35474, 35473);
				}
				if (f_d4f_a1_b(tv1)) {
					tv0->AddReply(509474, 10417, 10416);
				}
				tv0->AddReply(509487, -1, 10429);
				return;
			}
			if (a0 == 10417) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(509475);
				tv0->ClearReplies();
				tv0->AddReply(509476, 10419, 10418);
				tv0->AddReply(509481, 10424, 10423);
				return;
			}
			if (a0 == 10424) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(509482);
				tv0->ClearReplies();
				tv0->AddReply(509483, 10426, 10425);
				return;
			}
			if (a0 == 10426) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(509484);
				tv0->ClearReplies();
				tv0->AddReply(509485, -1, 10427);
				tv0->AddReply(509486, -1, 10428);
				return;
			}
			if (a0 == 10419) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(509477);
				tv0->ClearReplies();
				tv0->AddReply(509478, -1, 10420);
				tv0->AddReply(509479, -1, 10421);
				tv0->AddReply(509480, -1, 10422);
				return;
			}
			if (a0 == 35474) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(533915);
				tv0->ClearReplies();
				tv0->AddReply(533916, 35476, 35475);
				tv0->AddReply(533923, 35483, 35482);
				return;
			}
			if (a0 == 35483) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(533924);
				tv0->ClearReplies();
				tv0->AddReply(533925, 35478, 35484);
				return;
			}
			if (a0 == 35476) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(533917);
				tv0->ClearReplies();
				tv0->AddReply(533918, 35478, 35477);
				tv0->AddReply(533936, 35499, 35498);
				return;
			}
			if (a0 == 35499) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(533937);
				tv0->ClearReplies();
				tv0->AddReply(533939, 35504, 35501);
				tv0->AddReply(533938, 35478, 35500);
				return;
			}
			if (a0 == 35504) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(533940);
				tv0->ClearReplies();
				tv0->AddReply(533941, 35506, 35505);
				return;
			}
			if (a0 == 35506) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(533942);
				tv0->ClearReplies();
				tv0->AddReply(533943, 35508, 35507);
				tv0->AddReply(533948, 35510, 35512);
				return;
			}
			if (a0 == 35510) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(533946);
				tv0->ClearReplies();
				tv0->AddReply(533947, -1, 35511);
				return;
			}
			if (a0 == 35508) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(533944);
				tv0->ClearReplies();
				tv0->AddReply(533945, -1, 35509);
				return;
			}
			if (a0 == 35478) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(533919);
				tv0->ClearReplies();
				tv0->AddReply(533922, 35485, 35481);
				tv0->AddReply(533930, 35490, 35489);
				return;
			}
			if (a0 == 35490) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(533931);
				tv0->ClearReplies();
				tv0->AddReply(533932, 35493, 35491);
				tv0->AddReply(533934, 35485, 35494);
				return;
			}
			if (a0 == 35493) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(533933);
				tv0->ClearReplies();
				tv0->AddReply(533935, 35485, 35495);
				return;
			}
			if (a0 == 35485) {
				f_2bf_a1_v("Neutral");
				tv0->SetMessage(533926);
				tv0->ClearReplies();
				tv0->AddReply(533927, -1, 35486);
				tv0->AddReply(533928, -1, 35487);
				return;
			}
			tv3 = true;
			if (f_cb3_a0_b()) {
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
		f_b4d_a1_b(f_bfa_a0_o());
		if (!f_af8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cad_a0_i());
		L0->SetNPCDescription(f_cab_a0_i());
		L0->SetPhoto(f_caf_a0_s());
		L0->SetPhoto2(f_cb1_a0_s());
		L0->SetPlayerName(f_dea_a0_i());
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
		f_b3c_a1_v(a0);
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
			f_505_a1_v("Neutral");
			tv0->SetMessage(509951);
			tv0->ClearReplies();
			if (f_d97_a1_b(tv1)) {
				tv0->AddReply(509961, 10970, 10978);
			}
			tv0->AddReply(509952, -1, 10969);
			break;
			return;
		}
		if (f_cb3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd7_a1_v(tv2);
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

	void f_505_a1_v(string a0)
	{
		if (!f_cb3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bde_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bf3_a0_v();
			if (a1 == 10978) {
				f_d28_a2_v(tv1, tv0);
			}
			if (a1 == 10976) {
				f_ce3_a2_v(tv1, tv0);
				f_cb5_a2_v(tv1, tv0);
			}
			if (a1 == 10977) {
				f_cee_a2_v(tv1, tv0);
			}
			if (a0 == 10968) {
				f_505_a1_v("Neutral");
				tv0->SetMessage(509951);
				tv0->ClearReplies();
				if (f_d97_a1_b(tv1)) {
					tv0->AddReply(509961, 10970, 10978);
				}
				tv0->AddReply(509952, -1, 10969);
				return;
			}
			if (a0 == 10970) {
				f_505_a1_v("Neutral");
				tv0->SetMessage(509953);
				tv0->ClearReplies();
				tv0->AddReply(509954, -1, 10971);
				tv0->AddReply(509955, 10973, 10972);
				return;
			}
			if (a0 == 10973) {
				f_505_a1_v("Neutral");
				tv0->SetMessage(509956);
				tv0->ClearReplies();
				tv0->AddReply(509957, 10975, 10974);
				tv0->AddReply(534181, -1, 35764);
				return;
			}
			if (a0 == 10975) {
				f_505_a1_v("Neutral");
				tv0->SetMessage(509958);
				tv0->ClearReplies();
				tv0->AddReply(509959, -1, 10976);
				tv0->AddReply(509960, -1, 10977);
				return;
			}
			tv3 = true;
			if (f_cb3_a0_b()) {
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
		f_b4d_a1_b(f_bfa_a0_o());
		if (!f_af8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cad_a0_i());
		L0->SetNPCDescription(f_cab_a0_i());
		L0->SetPhoto(f_caf_a0_s());
		L0->SetPhoto2(f_cb1_a0_s());
		L0->SetPlayerName(f_dea_a0_i());
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
		f_b3c_a1_v(a0);
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
			f_645_a1_v("Neutral");
			tv0->SetMessage(512815);
			tv0->ClearReplies();
			if (f_d73_a1_b(tv1) && f_d7f_a1_b(tv1)) {
				tv0->AddReply(512816, 14017, 14016);
			}
			tv0->AddReply(512828, -1, 14028);
			break;
			return;
		}
		if (f_cb3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd7_a1_v(tv2);
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

	void f_645_a1_v(string a0)
	{
		if (!f_cb3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bde_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bf3_a0_v();
			if (a1 == 14233) {
				f_cf5_a2_v(tv1, tv0);
				f_d17_a2_v(tv1, tv0);
			}
			if (a1 == 14234) {
				f_cf5_a2_v(tv1, tv0);
				f_d17_a2_v(tv1, tv0);
			}
			if (a1 == 14027) {
				f_cf5_a2_v(tv1, tv0);
				f_cfb_a2_v(tv1, tv0);
			}
			if (a1 == 14026) {
				f_cf5_a2_v(tv1, tv0);
				f_cfb_a2_v(tv1, tv0);
			}
			if (a0 == 14015) {
				f_645_a1_v("Neutral");
				tv0->SetMessage(512815);
				tv0->ClearReplies();
				if (f_d73_a1_b(tv1) && f_d7f_a1_b(tv1)) {
					tv0->AddReply(512816, 14017, 14016);
				}
				tv0->AddReply(512828, -1, 14028);
				return;
			}
			if (a0 == 14017) {
				if (!f_d67_a1_b(tv1)) {
					f_645_a1_v("Neutral");
					tv0->SetMessage(512817);
					tv0->ClearReplies();
					tv0->AddReply(513022, 14230, 14229);
					return;
				}
				if (f_d67_a1_b(tv1)) {
					f_645_a1_v("Neutral");
					tv0->SetMessage(513021);
					tv0->ClearReplies();
					tv0->AddReply(512818, 14019, 14018);
					return;
				}
			}
			if (a0 == 14019) {
				f_645_a1_v("Neutral");
				tv0->SetMessage(512819);
				tv0->ClearReplies();
				tv0->AddReply(512820, 14021, 14020);
				return;
			}
			if (a0 == 14021) {
				f_645_a1_v("Neutral");
				tv0->SetMessage(512821);
				tv0->ClearReplies();
				tv0->AddReply(512822, 14023, 14022);
				return;
			}
			if (a0 == 14023) {
				f_645_a1_v("Neutral");
				tv0->SetMessage(512823);
				tv0->ClearReplies();
				tv0->AddReply(512824, 14025, 14024);
				tv0->AddReply(512826, -1, 14026);
				return;
			}
			if (a0 == 14025) {
				f_645_a1_v("Neutral");
				tv0->SetMessage(512825);
				tv0->ClearReplies();
				tv0->AddReply(512827, -1, 14027);
				return;
			}
			if (a0 == 14230) {
				f_645_a1_v("Neutral");
				tv0->SetMessage(513023);
				tv0->ClearReplies();
				tv0->AddReply(513024, 14232, 14231);
				tv0->AddReply(513027, -1, 14234);
				return;
			}
			if (a0 == 14232) {
				f_645_a1_v("Neutral");
				tv0->SetMessage(513025);
				tv0->ClearReplies();
				tv0->AddReply(513026, -1, 14233);
				return;
			}
			tv3 = true;
			if (f_cb3_a0_b()) {
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
		f_b4d_a1_b(f_bfa_a0_o());
		if (!f_af8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cad_a0_i());
		L0->SetNPCDescription(f_cab_a0_i());
		L0->SetPhoto(f_caf_a0_s());
		L0->SetPhoto2(f_cb1_a0_s());
		L0->SetPlayerName(f_dea_a0_i());
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
		f_b3c_a1_v(a0);
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
			f_807_a1_v("Neutral");
			tv0->SetMessage(540043);
			tv0->ClearReplies();
			if (f_d8b_a1_b(tv1) && f_d5b_a1_b(tv1)) {
				tv0->AddReply(540045, 42013, 42012);
			}
			tv0->AddReply(540044, -1, 42011);
			tv0->AddReply(540060, -1, 42029);
			break;
			return;
		}
		if (f_cb3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd7_a1_v(tv2);
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

	void f_807_a1_v(string a0)
	{
		if (!f_cb3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bde_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bf3_a0_v();
			if (a1 == 42012) {
				f_cc7_a2_v(tv1, tv0);
			}
			if (a1 == 42025) {
				f_d2e_a2_v(tv1, tv0);
			}
			if (a1 == 42026) {
				f_d2e_a2_v(tv1, tv0);
				f_cd8_a2_v(tv1, tv0);
				f_ccd_a2_v(tv1, tv0);
			}
			if (a0 == 42010) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(540043);
				tv0->ClearReplies();
				if (f_d8b_a1_b(tv1) && f_d5b_a1_b(tv1)) {
					tv0->AddReply(540045, 42013, 42012);
				}
				tv0->AddReply(540044, -1, 42011);
				tv0->AddReply(540060, -1, 42029);
				return;
			}
			if (a0 == 42013) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(540046);
				tv0->ClearReplies();
				tv0->AddReply(540047, 42015, 42014);
				tv0->AddReply(540052, 42024, 42019);
				return;
			}
			if (a0 == 42015) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(540048);
				tv0->ClearReplies();
				tv0->AddReply(540049, 42017, 42016);
				return;
			}
			if (a0 == 42017) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(540050);
				tv0->ClearReplies();
				tv0->AddReply(540051, 42020, 42018);
				tv0->AddReply(540056, 42024, 42023);
				return;
			}
			if (a0 == 42020) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(540053);
				tv0->ClearReplies();
				tv0->AddReply(540054, 42024, 42021);
				return;
			}
			if (a0 == 42024) {
				f_807_a1_v("Neutral");
				tv0->SetMessage(540057);
				tv0->ClearReplies();
				tv0->AddReply(540058, -1, 42025);
				tv0->AddReply(540059, -1, 42026);
				return;
			}
			tv3 = true;
			if (f_cb3_a0_b()) {
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
		f_b4d_a1_b(f_bfa_a0_o());
		if (!f_af8_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_cad_a0_i());
		L0->SetNPCDescription(f_cab_a0_i());
		L0->SetPhoto(f_caf_a0_s());
		L0->SetPhoto2(f_cb1_a0_s());
		L0->SetPlayerName(f_dea_a0_i());
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
		f_b3c_a1_v(a0);
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
			f_970_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_cb3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bd7_a1_v(tv2);
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

	void f_970_a1_v(string a0)
	{
		if (!f_cb3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bde_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bf3_a0_v();
			if (a0 == 42557) {
				f_970_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_cb3_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t15
{
	var Vector tv0;

	void init(void)
	{
		f_9b4_a0_v();
	}

	void f_9b4_a0_v(void)
	{
		if (!f_af3_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_a6a_a0_v();
		}
	}

	bool f_9c8_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_aea_a1_b(L0);
	}

	void f_9d7_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_9dc_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_ab6_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_9f2_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_9fb_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_9fb_a0_v();
			if (f_af3_a0_b() && f_9dc_a0_b()) {
				if (f_9c8_a0_b()) {
					f_b87_a1_b(f_bfa_a0_o());
				}
			} else {
				f_9d7_a0_v();
				f_9f2_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_ab1_a0_v();
		f_9fb_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_9fb_a0_v();
		f_bd7_a1_v("Neutral");
		f_9f2_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_9f2_a0_v();
		} else {
			f_bd7_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_ab1_a0_v();
			f_aea_a1_b(a0);
			enable OnUse;
			f_dfb_a1_v(a0);
			f_bd7_a1_v("Neutral");
			f_9fb_a0_v();
			f_9f2_a0_v();
		}
	}
}

void f_a6a_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_af3_a0_b()) {
		return;
	}
	L0 = f_c9a_a0_i();
	for (L1 = 0; L1 < 5 && f_af3_a0_b(); L1++) {
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
			@PlayAnimation("all", f_c93_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_aaf_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_aaf_a0_b(void)
{
	return true;
}

void f_ab1_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_ab6_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_abe_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_aca_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_abe_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_c0a_a3_f(L0 + a2, a3, a4));
	return true;
}

bool f_ae0_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_aea_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_ae0_a1_b(L0);
}

bool f_af3_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_af8_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_c00_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_cb3_a0_b()) {
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

void f_b3c_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_cb3_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_b4d_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_b87_a1_b(a0)) {
			if (!f_bac_a1_b(a0)) {
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
		if (!f_bac_a1_b(a0)) {
			if (!f_b87_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_b87_a1_b(object a0)
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
	return f_be4_a1_b(L4);
}

bool f_bac_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_c84_a0_i() + "m";
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
	return f_be4_a1_b(L4);
}

void f_bd7_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_bde_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_be4_a1_b(string a0)
{
	if (f_cb3_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_bf3_a0_v(void)
{
	if (f_cb3_a0_b()) {
		@lshStopSpeech();
	}
}

object f_bfa_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_c00_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_c0a_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_c15_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_c1a_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_c26_a3_v(object a0, object a1, int a2)
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
		f_c1a_a2_v(L0, a2);
	}
}

void f_c39_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_c26_a3_v(a0, L0, a2);
}

bool f_c46_a2_b(object a0, float a1)
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
	f_c69_a1_v(a1);
	f_aca_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_c69_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_c73_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_c7f_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_c84_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_c8d_a1_b(int a0)
{
	return f_c84_a0_i() == a0;
}

string f_c93_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_c9a_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_c93_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_cab_a0_i(void)
{
	return 515542;
}

int f_cad_a0_i(void)
{
	return 502867;
}

string f_caf_a0_s(void)
{
	return "ui/NPC_Laska.png";
}

string f_cb1_a0_s(void)
{
	return "ui/NPC_Laska_b.png";
}

bool f_cb3_a0_b(void)
{
	return true;
}

void f_cb5_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_cbb_a2_v(object a0, object a1)
{
	@SetVariable("ood2Laska1", 1);
}

void f_cc1_a2_v(object a0, object a1)
{
	@SetVariable("ood2Laska2", 1);
}

void f_cc7_a2_v(object a0, object a1)
{
	@SetVariable("ood11Laska1", 1);
}

void f_ccd_a2_v(object a0, object a1)
{
	@Trace("bandage is given");
	f_c39_a3_v(a0, "bandage", 1);
}

void f_cd8_a2_v(object a0, object a1)
{
	@Trace("tourniquet is given");
	f_c39_a3_v(a0, "tourniquet", 1);
}

void f_ce3_a2_v(object a0, object a1)
{
	@Trace("powder is given");
	f_c39_a3_v(a0, "powder", 1);
}

void f_cee_a2_v(object a0, object a1)
{
	f_c46_a2_b(a0, 0.30000001192092896);
}

void f_cf5_a2_v(object a0, object a1)
{
	@SetVariable("ood6Laska1", 1);
}

void f_cfb_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d6q01", 3);
	L0 = f_dd9_a0_o();
	L0->AddMark("d6q01LaskaGotoAlbinos", "pt_d6q03_albinos", 1, 515400, f_c7f_a0_f());
	f_da3_a0_v();
	f_c73_a2_b("quest_d6_01", "albinos_klara");
}

void f_d17_a2_v(object a0, object a1)
{
	@SetVariable("d6q01", 4);
	f_c73_a2_b("quest_d6_01", "eva_klara");
}

void f_d22_a2_v(object a0, object a1)
{
	@SetVariable("KnowLaska", 1);
}

void f_d28_a2_v(object a0, object a1)
{
	@SetVariable("ood3Laska1", 1);
}

void f_d2e_a2_v(object a0, object a1)
{
	object L0;
	@Trace("Knife is given");
	@CreateInvItem(L0);
	L0->SetItemName("Knife");
	L0->SetProperty("durability", 100);
	f_c26_a3_v(a0, L0, 1);
}

bool f_d43_a1_b(object a0)
{
	if (f_c15_a1_i("ood2Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_d4f_a1_b(object a0)
{
	if (f_c15_a1_i("ood2Laska2") == 0) {
		return true;
	}
	return false;
}

bool f_d5b_a1_b(object a0)
{
	if (f_c15_a1_i("ood11Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_d67_a1_b(object a0)
{
	if (f_c15_a1_i("d6q03AlbinosKilled") == 1) {
		return true;
	}
	return false;
}

bool f_d73_a1_b(object a0)
{
	if (f_c15_a1_i("d6q01") == 2) {
		return true;
	}
	return false;
}

bool f_d7f_a1_b(object a0)
{
	if (f_c15_a1_i("ood6Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_d8b_a1_b(object a0)
{
	if (f_c15_a1_i("d11q01") == 3) {
		return true;
	}
	return false;
}

bool f_d97_a1_b(object a0)
{
	if (f_c15_a1_i("ood3Laska1") == 0) {
		return true;
	}
	return false;
}

void f_da3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 117, 1, 513740);
	f_dbd_a2_b(L0, 111);
}

object f_db0_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_dbd_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_db0_a0_o();
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

object f_dd9_a0_o(void)
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

int f_dea_a0_i(void)
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

void f_dfb_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_laska", L0);
	if (!L0) {
		t3{a0};
		@SetVariable("mt_laska", 1);
	}
	if (f_c8d_a1_b(2)) {
		t5{a0};
		return;
	}
	if (f_c8d_a1_b(3)) {
		t7{a0};
		return;
	}
	if (f_c8d_a1_b(6)) {
		t9{a0};
		return;
	}
	if (f_c8d_a1_b(11)) {
		t11{a0};
		return;
	}
	if (f_c8d_a1_b(12)) {
		t1{a0};
		return;
	}
	t13{a0};
}

