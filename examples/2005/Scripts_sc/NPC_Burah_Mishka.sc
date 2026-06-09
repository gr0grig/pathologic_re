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
		} while (!f_a15_a0_b());
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
		f_a6f_a1_b(f_b1c_a0_o());
		if (!f_a1a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b9e_a0_i());
		L0->SetNPCDescription(f_b9c_a0_i());
		L0->SetPhoto(f_ba0_a0_s());
		L0->SetPhoto2(f_ba2_a0_s());
		L0->SetPlayerName(f_d39_a0_i());
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
		f_a5e_a1_v(a0);
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
			f_a6_a1_v("Neutral");
			tv0->SetMessage(527115);
			tv0->ClearReplies();
			if (f_c3e_a1_b(tv1) && f_c85_a1_b(tv1)) {
				tv0->AddReply(527116, 28416, 28414);
			}
			tv0->AddReply(527117, -1, 28415);
			break;
			return;
		}
		if (f_ba4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_af9_a1_v(tv2);
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

	void f_a6_a1_v(string a0)
	{
		if (!f_ba4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b00_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b15_a0_v();
			if (a1 == 28414) {
				f_bb7_a2_v(tv1, tv0);
			}
			if (a0 == 28413) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(527115);
				tv0->ClearReplies();
				if (f_c3e_a1_b(tv1) && f_c85_a1_b(tv1)) {
					tv0->AddReply(527116, 28416, 28414);
				}
				tv0->AddReply(527117, -1, 28415);
				return;
			}
			if (a0 == 28416) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(527118);
				tv0->ClearReplies();
				tv0->AddReply(527119, 28418, 28417);
				return;
			}
			if (a0 == 28418) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(527120);
				tv0->ClearReplies();
				tv0->AddReply(527121, 28420, 28419);
				return;
			}
			if (a0 == 28420) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(527122);
				tv0->ClearReplies();
				tv0->AddReply(527123, 28422, 28421);
				return;
			}
			if (a0 == 28422) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(527124);
				tv0->ClearReplies();
				tv0->AddReply(527125, 28424, 28423);
				return;
			}
			if (a0 == 28424) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(527126);
				tv0->ClearReplies();
				tv0->AddReply(527127, 28426, 28425);
				return;
			}
			if (a0 == 28426) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(527128);
				tv0->ClearReplies();
				tv0->AddReply(527129, 28428, 28427);
				return;
			}
			if (a0 == 28428) {
				f_a6_a1_v("Neutral");
				tv0->SetMessage(527130);
				tv0->ClearReplies();
				tv0->AddReply(527131, -1, 28429);
				return;
			}
			tv3 = true;
			if (f_ba4_a0_b()) {
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
		f_a6f_a1_b(f_b1c_a0_o());
		if (!f_a1a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b9e_a0_i());
		L0->SetNPCDescription(f_b9c_a0_i());
		L0->SetPhoto(f_ba0_a0_s());
		L0->SetPhoto2(f_ba2_a0_s());
		L0->SetPlayerName(f_d39_a0_i());
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
		f_a5e_a1_v(a0);
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
			if (f_c56_a1_b(tv1)) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531162);
				tv0->ClearReplies();
				tv0->AddReply(531292, 32610, 32609);
				break;
			}
			f_23b_a1_v("Neutral");
			tv0->SetMessage(530485);
			tv0->ClearReplies();
			if (f_c4a_a1_b(tv1)) {
				tv0->AddReply(530486, 31853, 31852);
			}
			if (f_c62_a1_b(tv1) && f_c6e_a1_b(tv1)) {
				tv0->AddReply(531172, 32623, 32480);
			}
			if (f_c79_a1_b(tv1)) {
				tv0->AddReply(531179, 32617, 32487);
			}
			tv0->AddReply(530489, -1, 31855);
			break;
			return;
		}
		if (f_ba4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_af9_a1_v(tv2);
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

	void f_23b_a1_v(string a0)
	{
		if (!f_ba4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b00_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b15_a0_v();
			if (a1 == 32479) {
				f_bcc_a2_v(tv1, tv0);
				f_be8_a2_v(tv1, tv0);
			}
			if (a1 == 32616) {
				f_c10_a2_v(tv1, tv0);
			}
			if (a1 == 31854) {
				f_bbd_a2_v(tv1, tv0);
			}
			if (a1 == 32486) {
				f_ba6_a2_v(tv1, tv0);
				f_bc6_a2_v(tv1, tv0);
				f_c1a_a2_v(tv1, tv0);
				f_bf8_a2_v(tv1, tv0);
			}
			if (a1 == 32633) {
				f_ba6_a2_v(tv1, tv0);
				f_bc6_a2_v(tv1, tv0);
				f_c1a_a2_v(tv1, tv0);
				f_bf8_a2_v(tv1, tv0);
			}
			if (a1 == 32489) {
				f_c06_a2_v(tv1, tv0);
			}
			if (a0 == 32470) {
				if (f_c56_a1_b(tv1)) {
					f_23b_a1_v("Neutral");
					tv0->SetMessage(531162);
					tv0->ClearReplies();
					tv0->AddReply(531292, 32610, 32609);
					return;
				}
				f_23b_a1_v("Neutral");
				tv0->SetMessage(530485);
				tv0->ClearReplies();
				if (f_c4a_a1_b(tv1)) {
					tv0->AddReply(530486, 31853, 31852);
				}
				if (f_c62_a1_b(tv1) && f_c6e_a1_b(tv1)) {
					tv0->AddReply(531172, 32623, 32480);
				}
				if (f_c79_a1_b(tv1)) {
					tv0->AddReply(531179, 32617, 32487);
				}
				tv0->AddReply(530489, -1, 31855);
				return;
			}
			if (a0 == 32617) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531297);
				tv0->ClearReplies();
				tv0->AddReply(531298, 32488, 32618);
				return;
			}
			if (a0 == 32488) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531180);
				tv0->ClearReplies();
				tv0->AddReply(531299, 32620, 32619);
				tv0->AddReply(531301, 32620, 32621);
				return;
			}
			if (a0 == 32620) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531300);
				tv0->ClearReplies();
				tv0->AddReply(531181, -1, 32489);
				return;
			}
			if (a0 == 32623) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531302);
				tv0->ClearReplies();
				tv0->AddReply(531303, 32481, 32624);
				tv0->AddReply(531304, 32481, 32625);
				return;
			}
			if (a0 == 32481) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531173);
				tv0->ClearReplies();
				tv0->AddReply(531174, 32483, 32482);
				tv0->AddReply(531305, 32483, 32627);
				return;
			}
			if (a0 == 32483) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531175);
				tv0->ClearReplies();
				tv0->AddReply(531176, 32485, 32484);
				tv0->AddReply(531306, 32630, 32629);
				return;
			}
			if (a0 == 32630) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531307);
				tv0->ClearReplies();
				tv0->AddReply(531308, 32485, 32631);
				return;
			}
			if (a0 == 32485) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531177);
				tv0->ClearReplies();
				tv0->AddReply(531178, -1, 32486);
				tv0->AddReply(531309, -1, 32633);
				return;
			}
			if (a0 == 31853) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(530487);
				tv0->ClearReplies();
				tv0->AddReply(531310, 32635, 32634);
				tv0->AddReply(531314, 32635, 32638);
				return;
			}
			if (a0 == 32635) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531311);
				tv0->ClearReplies();
				tv0->AddReply(531312, 32637, 32636);
				tv0->AddReply(531315, 32637, 32639);
				return;
			}
			if (a0 == 32637) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531313);
				tv0->ClearReplies();
				tv0->AddReply(530488, -1, 31854);
				return;
			}
			if (a0 == 32610) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531293);
				tv0->ClearReplies();
				tv0->AddReply(531291, 32473, 32608);
				tv0->AddReply(531163, 32475, 32471);
				return;
			}
			if (a0 == 32473) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531165);
				tv0->ClearReplies();
				tv0->AddReply(531166, 32475, 32474);
				tv0->AddReply(531294, 32476, 32612);
				return;
			}
			if (a0 == 32475) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531167);
				tv0->ClearReplies();
				tv0->AddReply(531164, 32476, 32472);
				tv0->AddReply(531295, 32478, 32614);
				return;
			}
			if (a0 == 32476) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531168);
				tv0->ClearReplies();
				tv0->AddReply(531169, 32478, 32477);
				return;
			}
			if (a0 == 32478) {
				f_23b_a1_v("Neutral");
				tv0->SetMessage(531170);
				tv0->ClearReplies();
				tv0->AddReply(531171, -1, 32479);
				tv0->AddReply(531296, -1, 32616);
				return;
			}
			tv3 = true;
			if (f_ba4_a0_b()) {
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
		f_a6f_a1_b(f_b1c_a0_o());
		if (!f_a1a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b9e_a0_i());
		L0->SetNPCDescription(f_b9c_a0_i());
		L0->SetPhoto(f_ba0_a0_s());
		L0->SetPhoto2(f_ba2_a0_s());
		L0->SetPlayerName(f_d39_a0_i());
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
		f_a5e_a1_v(a0);
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
			f_4f0_a1_v("Neutral");
			tv0->SetMessage(535243);
			tv0->ClearReplies();
			if (f_c91_a1_b(tv1)) {
				tv0->AddReply(535244, 37054, 36919);
			}
			tv0->AddReply(535367, -1, 37052);
			tv0->AddReply(535368, -1, 37053);
			break;
			return;
		}
		if (f_ba4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_af9_a1_v(tv2);
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

	void f_4f0_a1_v(string a0)
	{
		if (!f_ba4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b00_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b15_a0_v();
			if (a1 == 36919) {
				f_c20_a2_v(tv1, tv0);
			}
			if (a0 == 36918) {
				f_4f0_a1_v("Neutral");
				tv0->SetMessage(535243);
				tv0->ClearReplies();
				if (f_c91_a1_b(tv1)) {
					tv0->AddReply(535244, 37054, 36919);
				}
				tv0->AddReply(535367, -1, 37052);
				tv0->AddReply(535368, -1, 37053);
				return;
			}
			if (a0 == 37054) {
				f_4f0_a1_v("Neutral");
				tv0->SetMessage(535369);
				tv0->ClearReplies();
				tv0->AddReply(535370, 37056, 37055);
				tv0->AddReply(535375, -1, 37060);
				return;
			}
			if (a0 == 37056) {
				f_4f0_a1_v("Neutral");
				tv0->SetMessage(535371);
				tv0->ClearReplies();
				tv0->AddReply(535372, 37058, 37057);
				tv0->AddReply(535376, -1, 37061);
				return;
			}
			if (a0 == 37058) {
				f_4f0_a1_v("Neutral");
				tv0->SetMessage(535373);
				tv0->ClearReplies();
				tv0->AddReply(535374, -1, 37059);
				tv0->AddReply(535377, -1, 37062);
				return;
			}
			tv3 = true;
			if (f_ba4_a0_b()) {
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
		f_a6f_a1_b(f_b1c_a0_o());
		if (!f_a1a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b9e_a0_i());
		L0->SetNPCDescription(f_b9c_a0_i());
		L0->SetPhoto(f_ba0_a0_s());
		L0->SetPhoto2(f_ba2_a0_s());
		L0->SetPlayerName(f_d39_a0_i());
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
		f_a5e_a1_v(a0);
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
			f_612_a1_v("Neutral");
			tv0->SetMessage(518033);
			tv0->ClearReplies();
			tv0->AddReply(518034, 28430, 19167);
			tv0->AddReply(527134, 28433, 28432);
			break;
			return;
		}
		if (f_ba4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_af9_a1_v(tv2);
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

	void f_612_a1_v(string a0)
	{
		if (!f_ba4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b00_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b15_a0_v();
			if (a0 == 19166) {
				f_612_a1_v("Neutral");
				tv0->SetMessage(518033);
				tv0->ClearReplies();
				tv0->AddReply(518034, 28430, 19167);
				tv0->AddReply(527134, 28433, 28432);
				return;
			}
			if (a0 == 28433) {
				f_612_a1_v("Neutral");
				tv0->SetMessage(527135);
				tv0->ClearReplies();
				tv0->AddReply(527137, -1, 28435);
				return;
			}
			if (a0 == 28430) {
				f_612_a1_v("Neutral");
				tv0->SetMessage(527132);
				tv0->ClearReplies();
				tv0->AddReply(527133, -1, 28431);
				return;
			}
			tv3 = true;
			if (f_ba4_a0_b()) {
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
		f_a6f_a1_b(f_b1c_a0_o());
		if (!f_a1a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b9e_a0_i());
		L0->SetNPCDescription(f_b9c_a0_i());
		L0->SetPhoto(f_ba0_a0_s());
		L0->SetPhoto2(f_ba2_a0_s());
		L0->SetPlayerName(f_d39_a0_i());
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
		f_a5e_a1_v(a0);
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
			if (f_c26_a1_b(tv1) && f_c32_a1_b(tv1)) {
				f_bb1_a2_v(tv1, tv0);
				f_728_a1_v("Neutral");
				tv0->SetMessage(521408);
				tv0->ClearReplies();
				tv0->AddReply(521409, 25093, 22587);
				tv0->AddReply(523832, -1, 25104);
				break;
			}
			f_728_a1_v("Neutral");
			tv0->SetMessage(521410);
			tv0->ClearReplies();
			tv0->AddReply(521411, 25088, 22589);
			tv0->AddReply(523816, -1, 25087);
			break;
			return;
		}
		if (f_ba4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_af9_a1_v(tv2);
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

	void f_728_a1_v(string a0)
	{
		if (!f_ba4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b00_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b15_a0_v();
			if (a0 == 22586) {
				if (f_c26_a1_b(tv1) && f_c32_a1_b(tv1)) {
					f_bb1_a2_v(tv1, tv0);
					f_728_a1_v("Neutral");
					tv0->SetMessage(521408);
					tv0->ClearReplies();
					tv0->AddReply(521409, 25093, 22587);
					tv0->AddReply(523832, -1, 25104);
					return;
				}
				f_728_a1_v("Neutral");
				tv0->SetMessage(521410);
				tv0->ClearReplies();
				tv0->AddReply(521411, 25088, 22589);
				tv0->AddReply(523816, -1, 25087);
				return;
			}
			if (a0 == 25088) {
				f_728_a1_v("Neutral");
				tv0->SetMessage(523817);
				tv0->ClearReplies();
				tv0->AddReply(523818, 25090, 25089);
				return;
			}
			if (a0 == 25090) {
				f_728_a1_v("Neutral");
				tv0->SetMessage(523819);
				tv0->ClearReplies();
				tv0->AddReply(523820, -1, 25091);
				tv0->AddReply(523821, -1, 25092);
				return;
			}
			if (a0 == 25093) {
				f_728_a1_v("Neutral");
				tv0->SetMessage(523822);
				tv0->ClearReplies();
				tv0->AddReply(523823, 25095, 25094);
				tv0->AddReply(523833, 25106, 25105);
				return;
			}
			if (a0 == 25106) {
				f_728_a1_v("Neutral");
				tv0->SetMessage(523834);
				tv0->ClearReplies();
				tv0->AddReply(523835, 25097, 25107);
				return;
			}
			if (a0 == 25095) {
				f_728_a1_v("Neutral");
				tv0->SetMessage(523824);
				tv0->ClearReplies();
				tv0->AddReply(523825, 25097, 25096);
				tv0->AddReply(523827, 25097, 25098);
				return;
			}
			if (a0 == 25097) {
				f_728_a1_v("Neutral");
				tv0->SetMessage(523826);
				tv0->ClearReplies();
				tv0->AddReply(523828, 25101, 25100);
				tv0->AddReply(523836, -1, 25109);
				return;
			}
			if (a0 == 25101) {
				f_728_a1_v("Neutral");
				tv0->SetMessage(523829);
				tv0->ClearReplies();
				tv0->AddReply(523830, -1, 25102);
				tv0->AddReply(523831, -1, 25103);
				return;
			}
			tv3 = true;
			if (f_ba4_a0_b()) {
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
		f_a6f_a1_b(f_b1c_a0_o());
		if (!f_a1a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b9e_a0_i());
		L0->SetNPCDescription(f_b9c_a0_i());
		L0->SetPhoto(f_ba0_a0_s());
		L0->SetPhoto2(f_ba2_a0_s());
		L0->SetPlayerName(f_d39_a0_i());
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
		f_a5e_a1_v(a0);
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
			f_8b1_a1_v("Neutral");
			tv0->SetMessage(540551);
			tv0->ClearReplies();
			tv0->AddReply(540552, -1, 42561);
			tv0->AddReply(540795, -1, 42844);
			break;
			return;
		}
		if (f_ba4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_af9_a1_v(tv2);
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

	void f_8b1_a1_v(string a0)
	{
		if (!f_ba4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_b00_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_b15_a0_v();
			if (a0 == 42560) {
				f_8b1_a1_v("Neutral");
				tv0->SetMessage(540551);
				tv0->ClearReplies();
				tv0->AddReply(540552, -1, 42561);
				tv0->AddReply(540795, -1, 42844);
				return;
			}
			tv3 = true;
			if (f_ba4_a0_b()) {
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
		g1 = false;
		f_8f8_a0_v();
	}

	void f_8f8_a0_v(void)
	{
		if (!f_a15_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_9ae_a0_v();
		}
	}

	bool f_90c_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_a0c_a1_b(L0);
	}

	void f_91b_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_920_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_9fa_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_936_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_93f_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_93f_a0_v();
			if (f_a15_a0_b() && f_920_a0_b()) {
				if (f_90c_a0_b()) {
					f_aa9_a1_b(f_b1c_a0_o());
				}
			} else {
				f_91b_a0_v();
				f_936_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_9f5_a0_v();
		f_93f_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_93f_a0_v();
		f_af9_a1_v("Neutral");
		f_936_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_936_a0_v();
		} else {
			f_af9_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_9f5_a0_v();
			f_a0c_a1_b(a0);
			enable OnUse;
			f_d4a_a1_v(a0);
			f_af9_a1_v("Neutral");
			f_93f_a0_v();
			f_936_a0_v();
		}
	}
}

void f_9ae_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_a15_a0_b()) {
		return;
	}
	L0 = f_b8b_a0_i();
	for (L1 = 0; L1 < 5 && f_a15_a0_b(); L1++) {
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
			@PlayAnimation("all", f_b84_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_9f3_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_9f3_a0_b(void)
{
	return true;
}

void f_9f5_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_9fa_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_a02_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_a0c_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_a02_a1_b(L0);
}

bool f_a15_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_a1a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_b22_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_ba4_a0_b()) {
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

void f_a5e_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_ba4_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_a6f_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_aa9_a1_b(a0)) {
			if (!f_ace_a1_b(a0)) {
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
		if (!f_ace_a1_b(a0)) {
			if (!f_aa9_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_aa9_a1_b(object a0)
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
	return f_b06_a1_b(L4);
}

bool f_ace_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_b75_a0_i() + "m";
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
	return f_b06_a1_b(L4);
}

void f_af9_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_b00_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_b06_a1_b(string a0)
{
	if (f_ba4_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_b15_a0_v(void)
{
	if (f_ba4_a0_b()) {
		@lshStopSpeech();
	}
}

object f_b1c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_b22_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_b2c_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_b31_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_b3d_a3_v(object a0, object a1, int a2)
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
		f_b31_a2_v(L0, a2);
	}
}

void f_b50_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_b3d_a3_v(a0, L0, a2);
}

bool f_b5d_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_b64_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_b70_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_b75_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_b7e_a1_b(int a0)
{
	return f_b75_a0_i() == a0;
}

string f_b84_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_b8b_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_b84_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_b9c_a0_i(void)
{
	return 515546;
}

int f_b9e_a0_i(void)
{
	return 502871;
}

string f_ba0_a0_s(void)
{
	return "ui/NPC_Mishka.png";
}

string f_ba2_a0_s(void)
{
	return "ui/NPC_Mishka_b.png";
}

bool f_ba4_a0_b(void)
{
	return true;
}

void f_ba6_a2_v(object a0, object a1)
{
	@Trace("avroks blood is given");
	f_b50_a3_v(a0, "avroks_blood", 1);
}

void f_bb1_a2_v(object a0, object a1)
{
	@SetVariable("oob8Mishka1", 1);
}

void f_bb7_a2_v(object a0, object a1)
{
	@SetVariable("oob1Mishka1", 1);
}

void f_bbd_a2_v(object a0, object a1)
{
	@SetVariable("b10q04MishkaTalk", 9);
	f_cd1_a0_v();
}

void f_bc6_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_bcc_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b10q03", 2);
	L0 = f_d07_a0_o();
	L0->AddMark("b10q03MishkaGotoDoll", "pt_b10q03_plant1", 0, 531262, f_b70_a0_f());
	f_cb7_a0_v();
	f_b64_a2_b("quest_b10_03", "place_doll");
}

void f_be8_a2_v(object a0, object a1)
{
	f_d18_a3_v(f_d07_a0_o(), "pt_b10q03_plant1", 2);
	a1->ShowMap(f_d07_a0_o());
}

void f_bf8_a2_v(object a0, object a1)
{
	@SetVariable("b10q03", 3);
	f_cc4_a0_v();
	f_b64_a2_b("quest_b10_03", "place_blood");
}

void f_c06_a2_v(object a0, object a1)
{
	f_c9d_a0_v();
	f_b64_a2_b("quest_b10_03", "completed");
}

void f_c10_a2_v(object a0, object a1)
{
	f_caa_a0_v();
	f_b64_a2_b("quest_b10_03", "fail");
}

void f_c1a_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "b10q03_toy_burah", 1);
}

void f_c20_a2_v(object a0, object a1)
{
	@SetVariable("oob12Mishka1", 1);
}

bool f_c26_a1_b(object a0)
{
	if (f_b2c_a1_i("b8q01") == 2) {
		return true;
	}
	return false;
}

bool f_c32_a1_b(object a0)
{
	if (f_b2c_a1_i("oob8Mishka1") == 0) {
		return true;
	}
	return false;
}

bool f_c3e_a1_b(object a0)
{
	if (f_b2c_a1_i("oob1Mishka1") == 0) {
		return true;
	}
	return false;
}

bool f_c4a_a1_b(object a0)
{
	if (f_b2c_a1_i("b10q04MishkaTalk") == 1) {
		return true;
	}
	return false;
}

bool f_c56_a1_b(object a0)
{
	if (f_b2c_a1_i("b10q03") == 1) {
		return true;
	}
	return false;
}

bool f_c62_a1_b(object a0)
{
	if (f_b2c_a1_i("b10q03") == 2) {
		return true;
	}
	return false;
}

bool f_c6e_a1_b(object a0)
{
	if (f_b5d_a2_b(a0, "b10q03_toy_burah")) {
		return true;
	}
	return false;
}

bool f_c79_a1_b(object a0)
{
	if (f_b2c_a1_i("b10q03") == 4) {
		return true;
	}
	return false;
}

bool f_c85_a1_b(object a0)
{
	if (f_b2c_a1_i("b1q05") == 1000) {
		return true;
	}
	return false;
}

bool f_c91_a1_b(object a0)
{
	if (f_b2c_a1_i("oob12Mishka1") == 0) {
		return true;
	}
	return false;
}

void f_c9d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 605, 2, 531184);
	f_ceb_a2_b(L0, 594);
}

void f_caa_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 607, 2, 531500);
	f_ceb_a2_b(L0, 594);
}

void f_cb7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 596, 2, 531147);
	f_ceb_a2_b(L0, 594);
}

void f_cc4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 603, 2, 531182);
	f_ceb_a2_b(L0, 594);
}

void f_cd1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 558, 2, 530537);
	f_ceb_a2_b(L0, 549);
}

object f_cde_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_ceb_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_cde_a0_o();
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

object f_d07_a0_o(void)
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

void f_d18_a3_v(object a0, string a1, float a2)
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

int f_d39_a0_i(void)
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

void f_d4a_a1_v(object a0)
{
	if (!g1) {
		t7{a0};
		g1 = true;
	}
	if (f_b7e_a1_b(1)) {
		t1{a0};
		return;
	}
	if (f_b7e_a1_b(8)) {
		t9{a0};
		return;
	}
	if (f_b7e_a1_b(10)) {
		t3{a0};
		return;
	}
	if (f_b7e_a1_b(12)) {
		t5{a0};
		return;
	}
	t11{a0};
}

