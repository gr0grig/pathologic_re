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
		} while (!f_8e6_a0_b());
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
		f_940_a1_b(f_9ed_a0_o());
		if (!f_8eb_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a56_a0_i());
		L0->SetNPCDescription(f_a54_a0_i());
		L0->SetPhoto(f_a58_a0_s());
		L0->SetPhoto2(f_a5a_a0_s());
		L0->SetPlayerName(f_b74_a0_i());
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
		f_92f_a1_v(a0);
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
			tv0->SetMessage(525474);
			tv0->ClearReplies();
			tv0->AddReply(525475, 27554, 26831);
			tv0->AddReply(526277, 27557, 27553);
			break;
			return;
		}
		if (f_a5c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_9ca_a1_v(tv2);
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
		if (!f_a5c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9d1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_9e6_a0_v();
			if (a0 == 26830) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(525474);
				tv0->ClearReplies();
				tv0->AddReply(525475, 27554, 26831);
				tv0->AddReply(526277, 27557, 27553);
				return;
			}
			if (a0 == 27554) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(526278);
				tv0->ClearReplies();
				tv0->AddReply(526279, 27557, 27555);
				tv0->AddReply(526280, 27557, 27556);
				return;
			}
			if (a0 == 27557) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(526281);
				tv0->ClearReplies();
				tv0->AddReply(526282, -1, 27560);
				tv0->AddReply(526283, -1, 27561);
				return;
			}
			tv3 = true;
			if (f_a5c_a0_b()) {
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
		f_940_a1_b(f_9ed_a0_o());
		if (!f_8eb_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a56_a0_i());
		L0->SetNPCDescription(f_a54_a0_i());
		L0->SetPhoto(f_a58_a0_s());
		L0->SetPhoto2(f_a5a_a0_s());
		L0->SetPlayerName(f_b74_a0_i());
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
		f_92f_a1_v(a0);
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
			if (f_ac9_a1_b(tv1)) {
				f_a5e_a2_v(tv1, tv0);
				f_1af_a1_v("Neutral");
				tv0->SetMessage(526097);
				tv0->ClearReplies();
				tv0->AddReply(526098, 27386, 27384);
				tv0->AddReply(526099, 27386, 27385);
				break;
			}
			f_1af_a1_v("Neutral");
			tv0->SetMessage(526107);
			tv0->ClearReplies();
			tv0->AddReply(526108, -1, 27395);
			tv0->AddReply(528917, -1, 30347);
			break;
			return;
		}
		if (f_a5c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_9ca_a1_v(tv2);
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
		if (!f_a5c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9d1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_9e6_a0_v();
			if (a1 == 27393) {
				f_a64_a2_v(tv1, tv0);
				f_a6b_a2_v(tv1, tv0);
			}
			if (a1 == 27390) {
				f_a64_a2_v(tv1, tv0);
				f_a6b_a2_v(tv1, tv0);
			}
			if (a0 == 27383) {
				if (f_ac9_a1_b(tv1)) {
					f_a5e_a2_v(tv1, tv0);
					f_1af_a1_v("Neutral");
					tv0->SetMessage(526097);
					tv0->ClearReplies();
					tv0->AddReply(526098, 27386, 27384);
					tv0->AddReply(526099, 27386, 27385);
					return;
				}
				f_1af_a1_v("Neutral");
				tv0->SetMessage(526107);
				tv0->ClearReplies();
				tv0->AddReply(526108, -1, 27395);
				tv0->AddReply(528917, -1, 30347);
				return;
			}
			if (a0 == 27386) {
				f_1af_a1_v("Neutral");
				tv0->SetMessage(526100);
				tv0->ClearReplies();
				tv0->AddReply(526101, 27388, 27387);
				return;
			}
			if (a0 == 27388) {
				f_1af_a1_v("Neutral");
				tv0->SetMessage(526102);
				tv0->ClearReplies();
				tv0->AddReply(526103, 27392, 27389);
				tv0->AddReply(526104, -1, 27390);
				return;
			}
			if (a0 == 27392) {
				f_1af_a1_v("Neutral");
				tv0->SetMessage(526105);
				tv0->ClearReplies();
				tv0->AddReply(526106, -1, 27393);
				return;
			}
			tv3 = true;
			if (f_a5c_a0_b()) {
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
		f_940_a1_b(f_9ed_a0_o());
		if (!f_8eb_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a56_a0_i());
		L0->SetNPCDescription(f_a54_a0_i());
		L0->SetPhoto(f_a58_a0_s());
		L0->SetPhoto2(f_a5a_a0_s());
		L0->SetPlayerName(f_b74_a0_i());
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
		f_92f_a1_v(a0);
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
			if (f_ad5_a1_b(tv1) && f_ae1_a1_b(tv1)) {
				f_a75_a2_v(tv1, tv0);
				f_30f_a1_v("Neutral");
				tv0->SetMessage(526118);
				tv0->ClearReplies();
				tv0->AddReply(528252, 29614, 29613);
				tv0->AddReply(528256, 29614, 29617);
				break;
			}
			f_30f_a1_v("Neutral");
			tv0->SetMessage(526120);
			tv0->ClearReplies();
			tv0->AddReply(526121, -1, 27400);
			break;
			return;
		}
		if (f_a5c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_9ca_a1_v(tv2);
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

	void f_30f_a1_v(string a0)
	{
		if (!f_a5c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9d1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_9e6_a0_v();
			if (a1 == 27398) {
				f_a7b_a2_v(tv1, tv0);
				f_a85_a2_v(tv1, tv0);
			}
			if (a0 == 27397) {
				if (f_ad5_a1_b(tv1) && f_ae1_a1_b(tv1)) {
					f_a75_a2_v(tv1, tv0);
					f_30f_a1_v("Neutral");
					tv0->SetMessage(526118);
					tv0->ClearReplies();
					tv0->AddReply(528252, 29614, 29613);
					tv0->AddReply(528256, 29614, 29617);
					return;
				}
				f_30f_a1_v("Neutral");
				tv0->SetMessage(526120);
				tv0->ClearReplies();
				tv0->AddReply(526121, -1, 27400);
				return;
			}
			if (a0 == 29614) {
				f_30f_a1_v("Neutral");
				tv0->SetMessage(528253);
				tv0->ClearReplies();
				tv0->AddReply(528254, 29616, 29615);
				tv0->AddReply(528257, 29616, 29619);
				return;
			}
			if (a0 == 29616) {
				f_30f_a1_v("Neutral");
				tv0->SetMessage(528255);
				tv0->ClearReplies();
				tv0->AddReply(526119, -1, 27398);
				return;
			}
			tv3 = true;
			if (f_a5c_a0_b()) {
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
		f_940_a1_b(f_9ed_a0_o());
		if (!f_8eb_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a56_a0_i());
		L0->SetNPCDescription(f_a54_a0_i());
		L0->SetPhoto(f_a58_a0_s());
		L0->SetPhoto2(f_a5a_a0_s());
		L0->SetPlayerName(f_b74_a0_i());
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
		f_92f_a1_v(a0);
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
			if (!f_ab3_a1_b(tv1) && f_af9_a1_b(tv1)) {
				f_aa4_a2_v(tv1, tv0);
				f_482_a1_v("Neutral");
				tv0->SetMessage(539339);
				tv0->ClearReplies();
				tv0->AddReply(539340, 41285, 41284);
				tv0->AddReply(539351, 41287, 41295);
				break;
			}
			f_482_a1_v("Neutral");
			tv0->SetMessage(539352);
			tv0->ClearReplies();
			if (!f_aed_a1_b(tv1) && f_abf_a1_b(tv1) && !f_ab3_a1_b(tv1)) {
				tv0->AddReply(539353, 41299, 41298);
			}
			tv0->AddReply(539356, -1, 41301);
			break;
			f_482_a1_v("Neutral");
			tv0->SetMessage(539357);
			tv0->ClearReplies();
			tv0->AddReply(539358, -1, 41303);
			break;
			return;
		}
		if (f_a5c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_9ca_a1_v(tv2);
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

	void f_482_a1_v(string a0)
	{
		if (!f_a5c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9d1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_9e6_a0_v();
			if (a1 == 41290) {
				f_a94_a2_v(tv1, tv0);
			}
			if (a1 == 41293) {
				f_a8b_a2_v(tv1, tv0);
			}
			if (a1 == 41300) {
				f_a8b_a2_v(tv1, tv0);
			}
			if (a0 == 41283) {
				if (!f_ab3_a1_b(tv1) && f_af9_a1_b(tv1)) {
					f_aa4_a2_v(tv1, tv0);
					f_482_a1_v("Neutral");
					tv0->SetMessage(539339);
					tv0->ClearReplies();
					tv0->AddReply(539340, 41285, 41284);
					tv0->AddReply(539351, 41287, 41295);
					return;
				}
				f_482_a1_v("Neutral");
				tv0->SetMessage(539352);
				tv0->ClearReplies();
				if (!f_aed_a1_b(tv1) && f_abf_a1_b(tv1) && !f_ab3_a1_b(tv1)) {
					tv0->AddReply(539353, 41299, 41298);
				}
				tv0->AddReply(539356, -1, 41301);
				return;
				f_482_a1_v("Neutral");
				tv0->SetMessage(539357);
				tv0->ClearReplies();
				tv0->AddReply(539358, -1, 41303);
				return;
			}
			if (a0 == 41299) {
				f_482_a1_v("Neutral");
				tv0->SetMessage(539354);
				tv0->ClearReplies();
				tv0->AddReply(539355, -1, 41300);
				return;
			}
			if (a0 == 41285) {
				f_482_a1_v("Neutral");
				tv0->SetMessage(539341);
				tv0->ClearReplies();
				tv0->AddReply(539342, 41287, 41286);
				return;
			}
			if (a0 == 41287) {
				f_482_a1_v("Neutral");
				tv0->SetMessage(539343);
				tv0->ClearReplies();
				tv0->AddReply(539344, 41289, 41288);
				return;
			}
			if (a0 == 41289) {
				if (!f_abf_a1_b(tv1)) {
					f_482_a1_v("Neutral");
					tv0->SetMessage(539345);
					tv0->ClearReplies();
					tv0->AddReply(539346, -1, 41290);
					tv0->AddReply(539347, -1, 41291);
					return;
				}
				if (f_abf_a1_b(tv1)) {
					f_482_a1_v("Neutral");
					tv0->SetMessage(539348);
					tv0->ClearReplies();
					tv0->AddReply(539349, -1, 41293);
					tv0->AddReply(539350, -1, 41294);
					return;
				}
			}
			tv3 = true;
			if (f_a5c_a0_b()) {
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
		f_940_a1_b(f_9ed_a0_o());
		if (!f_8eb_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a56_a0_i());
		L0->SetNPCDescription(f_a54_a0_i());
		L0->SetPhoto(f_a58_a0_s());
		L0->SetPhoto2(f_a5a_a0_s());
		L0->SetPlayerName(f_b74_a0_i());
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
		f_92f_a1_v(a0);
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
			f_62b_a1_v("Neutral");
			tv0->SetMessage(539435);
			tv0->ClearReplies();
			if (f_b05_a1_b(tv1)) {
				tv0->AddReply(539436, 42812, 41367);
			}
			tv0->AddReply(539439, -1, 41370);
			tv0->AddReply(540767, -1, 42811);
			break;
			return;
		}
		if (f_a5c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_9ca_a1_v(tv2);
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

	void f_62b_a1_v(string a0)
	{
		if (!f_a5c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9d1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_9e6_a0_v();
			if (a1 == 41369) {
				f_aaa_a2_v(tv1, tv0);
			}
			if (a1 == 42820) {
				f_aaa_a2_v(tv1, tv0);
			}
			if (a0 == 41366) {
				f_62b_a1_v("Neutral");
				tv0->SetMessage(539435);
				tv0->ClearReplies();
				if (f_b05_a1_b(tv1)) {
					tv0->AddReply(539436, 42812, 41367);
				}
				tv0->AddReply(539439, -1, 41370);
				tv0->AddReply(540767, -1, 42811);
				return;
			}
			if (a0 == 42812) {
				f_62b_a1_v("Neutral");
				tv0->SetMessage(540768);
				tv0->ClearReplies();
				tv0->AddReply(540769, 42814, 42813);
				tv0->AddReply(540772, 42817, 42816);
				return;
			}
			if (a0 == 42817) {
				f_62b_a1_v("Neutral");
				tv0->SetMessage(540773);
				tv0->ClearReplies();
				tv0->AddReply(540774, 41368, 42818);
				return;
			}
			if (a0 == 42814) {
				f_62b_a1_v("Neutral");
				tv0->SetMessage(540770);
				tv0->ClearReplies();
				tv0->AddReply(540771, 42823, 42815);
				tv0->AddReply(540776, 41368, 42821);
				return;
			}
			if (a0 == 42823) {
				f_62b_a1_v("Neutral");
				tv0->SetMessage(540777);
				tv0->ClearReplies();
				tv0->AddReply(540778, 41368, 42824);
				tv0->AddReply(540779, -1, 42825);
				return;
			}
			if (a0 == 41368) {
				f_62b_a1_v("Neutral");
				tv0->SetMessage(539437);
				tv0->ClearReplies();
				tv0->AddReply(539438, -1, 41369);
				tv0->AddReply(540775, -1, 42820);
				return;
			}
			tv3 = true;
			if (f_a5c_a0_b()) {
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
		f_940_a1_b(f_9ed_a0_o());
		if (!f_8eb_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a56_a0_i());
		L0->SetNPCDescription(f_a54_a0_i());
		L0->SetPhoto(f_a58_a0_s());
		L0->SetPhoto2(f_a5a_a0_s());
		L0->SetPlayerName(f_b74_a0_i());
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
		f_92f_a1_v(a0);
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
			f_77e_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_a5c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_9ca_a1_v(tv2);
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

	void f_77e_a1_v(string a0)
	{
		if (!f_a5c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9d1_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_9e6_a0_v();
			if (a0 == 42554) {
				f_77e_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_a5c_a0_b()) {
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
		f_7c2_a0_v();
	}

	void f_7c2_a0_v(void)
	{
		if (!f_8e6_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_878_a0_v();
		}
	}

	bool f_7d6_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_8dd_a1_b(L0);
	}

	void f_7e5_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_7ea_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_8c4_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_800_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_809_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_809_a0_v();
			if (f_8e6_a0_b() && f_7ea_a0_b()) {
				if (f_7d6_a0_b()) {
					f_97a_a1_b(f_9ed_a0_o());
				}
			} else {
				f_7e5_a0_v();
				f_800_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_8bf_a0_v();
		f_809_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_809_a0_v();
		f_9ca_a1_v("Neutral");
		f_800_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_800_a0_v();
		} else {
			f_9ca_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_8bf_a0_v();
			f_8dd_a1_b(a0);
			enable OnUse;
			f_be3_a1_v(a0);
			f_9ca_a1_v("Neutral");
			f_809_a0_v();
			f_800_a0_v();
		}
	}
}

void f_878_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_8e6_a0_b()) {
		return;
	}
	L0 = f_a43_a0_i();
	for (L1 = 0; L1 < 5 && f_8e6_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_a3c_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_8bd_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_8bd_a0_b(void)
{
	return true;
}

void f_8bf_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_8c4_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_8cc_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_8d3_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_8dd_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_8d3_a1_b(L0);
}

bool f_8e6_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_8eb_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_9f3_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_a5c_a0_b()) {
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

void f_92f_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_a5c_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_940_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_97a_a1_b(a0)) {
			if (!f_99f_a1_b(a0)) {
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
		if (!f_99f_a1_b(a0)) {
			if (!f_97a_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_97a_a1_b(object a0)
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
	return f_9d7_a1_b(L4);
}

bool f_99f_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_a2d_a0_i() + "m";
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
	return f_9d7_a1_b(L4);
}

void f_9ca_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_9d1_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_9d7_a1_b(string a0)
{
	if (f_a5c_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_9e6_a0_v(void)
{
	if (f_a5c_a0_b()) {
		@lshStopSpeech();
	}
}

object f_9ed_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_9f3_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_9fd_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_a02_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_a0e_a2_v(object a0, int a1)
{
	f_8cc_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_a02_a2_v(L0, a1);
	}
}

bool f_a21_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_a2d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_a36_a1_b(int a0)
{
	return f_a2d_a0_i() == a0;
}

string f_a3c_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_a43_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_a3c_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_a54_a0_i(void)
{
	return 515573;
}

int f_a56_a0_i(void)
{
	return 504032;
}

string f_a58_a0_s(void)
{
	return "ui/NPC_Bakalavr.png";
}

string f_a5a_a0_s(void)
{
	return "ui/NPC_Bakalavr_b.png";
}

bool f_a5c_a0_b(void)
{
	return true;
}

void f_a5e_a2_v(object a0, object a1)
{
	@SetVariable("ook6Danko1", 1);
}

void f_a64_a2_v(object a0, object a1)
{
	f_a21_a2_b("quest_k6_01", "teleport");
}

void f_a6b_a2_v(object a0, object a1)
{
	f_b3e_a0_v();
	f_a21_a2_b("quest_k6_01", "completed");
}

void f_a75_a2_v(object a0, object a1)
{
	@SetVariable("ook7Danko1", 1);
}

void f_a7b_a2_v(object a0, object a1)
{
	@Trace("money1000 is given");
	f_a0e_a2_v(a0, 1000);
}

void f_a85_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_a8b_a2_v(object a0, object a1)
{
	@SetVariable("k12q01DankoInSobor", 1);
	f_b17_a0_v();
}

void f_a94_a2_v(object a0, object a1)
{
	if (f_9fd_a1_i("k12q01_Danko") == 0) {
		@SetVariable("k12q01_Danko", 1);
		f_b24_a0_v();
	}
}

void f_aa4_a2_v(object a0, object a1)
{
	@SetVariable("ook12Danko1", 1);
}

void f_aaa_a2_v(object a0, object a1)
{
	@SetVariable("k5q04", 3);
	f_b31_a0_v();
}

bool f_ab3_a1_b(object a0)
{
	if (f_9fd_a1_i("game_final") != 0) {
		return true;
	}
	return false;
}

bool f_abf_a1_b(object a0)
{
	if (f_b11_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ac9_a1_b(object a0)
{
	if (f_9fd_a1_i("ook6Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_ad5_a1_b(object a0)
{
	if (f_9fd_a1_i("k7q01") == 0) {
		return true;
	}
	return false;
}

bool f_ae1_a1_b(object a0)
{
	if (f_9fd_a1_i("ook7Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_aed_a1_b(object a0)
{
	if (f_9fd_a1_i("k12q01DankoInSobor") != 0) {
		return true;
	}
	return false;
}

bool f_af9_a1_b(object a0)
{
	if (f_9fd_a1_i("ook12Danko1") == 0) {
		return true;
	}
	return false;
}

bool f_b05_a1_b(object a0)
{
	if (f_9fd_a1_i("k5q04") == 2) {
		return true;
	}
	return false;
}

bool f_b11_a1_b(object a0)
{
	return f_bbd_a0_b();
}

void f_b17_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 730, 1, 539360);
	f_b58_a2_b(L0, 729);
}

void f_b24_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 736, 1, 539366);
	f_b58_a2_b(L0, 729);
}

void f_b31_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 743, 2, 539460);
	f_b58_a2_b(L0, 740);
}

void f_b3e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 415, 1, 526116);
	f_b58_a2_b(L0, 408);
}

object f_b4b_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_b58_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_b4b_a0_o();
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

int f_b74_a0_i(void)
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

void f_b85_a3_v(object a0, bool a1, int a2)
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

bool f_ba9_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_bb3_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

bool f_bbd_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_b85_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2 = L2 + 1) {
		int L3;
		L0->get(L3, L2);
		if (f_bb3_a1_b(L3) || f_ba9_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

void f_be3_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_danko", L0);
	if (!L0) {
		t1{a0};
		@SetVariable("mt_danko", 1);
	}
	if (f_a36_a1_b(5)) {
		t9{a0};
		return;
	}
	if (f_a36_a1_b(6)) {
		t3{a0};
		return;
	}
	if (f_a36_a1_b(7)) {
		t5{a0};
		return;
	}
	if (f_a36_a1_b(12)) {
		t7{a0};
		return;
	}
	t11{a0};
}

