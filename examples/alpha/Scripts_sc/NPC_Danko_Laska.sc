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
		f_cd7_a0_v();
		if (!f_9d6_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_a17_a1_v("Neutral");
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
		f_cdb_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_9ca_a1_b(a0);
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
		if (!f_9db_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a8a_a0_i());
		L0->SetPhoto(f_a8c_a0_s());
		L0->SetPlayerName(f_ca6_a0_i());
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
		f_a13_a1_v(a0);
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
			f_b1d_a2_v(tv1, tv0);
			f_af_a1_v("Neutral");
			tv0->SetMessage(370);
			tv0->ClearReplies();
			tv0->AddReply(371, 432, 430);
			tv0->AddReply(372, 437, 431);
			break;
			return;
		}
		if (f_a8e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a17_a1_v(tv2);
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
		if (!f_a8e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a17_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a29_a0_v();
			if (a0 == 429) {
				f_b1d_a2_v(tv1, tv0);
				f_af_a1_v("Neutral");
				tv0->SetMessage(370);
				tv0->ClearReplies();
				tv0->AddReply(371, 432, 430);
				tv0->AddReply(372, 437, 431);
				return;
			}
			if (a0 == 437) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(377);
				tv0->ClearReplies();
				tv0->AddReply(378, 432, 438);
				return;
			}
			if (a0 == 432) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(373);
				tv0->ClearReplies();
				tv0->AddReply(374, 435, 433);
				tv0->AddReply(375, 435, 434);
				return;
			}
			if (a0 == 435) {
				f_af_a1_v("Neutral");
				tv0->SetMessage(376);
				tv0->ClearReplies();
				tv0->AddReply(381, -1, 442);
				tv0->AddReply(379, -1, 440);
				return;
			}
			tv3 = true;
			if (f_a8e_a0_b()) {
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
		if (!f_9db_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a8a_a0_i());
		L0->SetPhoto(f_a8c_a0_s());
		L0->SetPlayerName(f_ca6_a0_i());
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
		f_a13_a1_v(a0);
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
			if (f_c01_a1_b(tv1) && f_b47_a1_b(tv1)) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5050);
				tv0->ClearReplies();
				tv0->AddReply(5051, 5555, 5554);
				tv0->AddReply(5073, 5582, 5581);
				break;
			}
			f_26c_a1_v("Neutral");
			tv0->SetMessage(8066);
			tv0->ClearReplies();
			if (f_b8d_a1_b(tv1) && f_c0d_a1_b(tv1) && f_b3b_a1_b(tv1) || f_b97_a1_b(tv1) && f_c0d_a1_b(tv1) && f_b3b_a1_b(tv1)) {
				tv0->AddReply(8067, 5607, 8890);
			}
			if (f_b97_a1_b(tv1) && f_c19_a1_b(tv1) || f_b83_a1_b(tv1) && f_c19_a1_b(tv1)) {
				tv0->AddReply(8068, 5592, 8891);
			}
			if (f_bf5_a1_b(tv1) && f_b53_a1_b(tv1)) {
				tv0->AddReply(8076, 8916, 8899);
			}
			if (f_bd1_a1_b(tv1) && f_b5f_a1_b(tv1)) {
				tv0->AddReply(8077, 8917, 8900);
			}
			if (f_bc5_a1_b(tv1) && f_b6b_a1_b(tv1)) {
				tv0->AddReply(8078, 8918, 8901);
			}
			if (f_bdd_a1_b(tv1) && f_b77_a1_b(tv1)) {
				tv0->AddReply(8090, 8919, 8913);
			}
			tv0->AddReply(8697, -1, 9534);
			break;
			return;
		}
		if (f_a8e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a17_a1_v(tv2);
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

	void f_26c_a1_v(string a0)
	{
		if (!f_a8e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a17_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a29_a0_v();
			if (a1 == 5562) {
				f_b23_a2_v(tv1, tv0);
				f_a90_a2_v(tv1, tv0);
				f_ac7_a2_v(tv1, tv0);
				f_ab2_a2_v(tv1, tv0);
			}
			if (a1 == 5563) {
				f_b23_a2_v(tv1, tv0);
				f_a90_a2_v(tv1, tv0);
				f_ac7_a2_v(tv1, tv0);
				f_ab2_a2_v(tv1, tv0);
			}
			if (a1 == 5564) {
				f_b23_a2_v(tv1, tv0);
				f_a90_a2_v(tv1, tv0);
				f_ac7_a2_v(tv1, tv0);
				f_ab2_a2_v(tv1, tv0);
			}
			if (a1 == 5591) {
				f_b23_a2_v(tv1, tv0);
				f_a90_a2_v(tv1, tv0);
			}
			if (a1 == 5617) {
				f_b2f_a2_v(tv1, tv0);
			}
			if (a1 == 5613) {
				f_b2f_a2_v(tv1, tv0);
			}
			if (a1 == 5597) {
				f_b35_a2_v(tv1, tv0);
			}
			if (a1 == 5598) {
				f_b35_a2_v(tv1, tv0);
			}
			if (a1 == 5599) {
				f_b35_a2_v(tv1, tv0);
			}
			if (a1 == 5606) {
				f_b35_a2_v(tv1, tv0);
			}
			if (a1 == 9530) {
				f_acd_a2_v(tv1, tv0);
			}
			if (a1 == 9531) {
				f_ad3_a2_v(tv1, tv0);
			}
			if (a1 == 9532) {
				f_ad9_a2_v(tv1, tv0);
			}
			if (a1 == 9533) {
				f_adf_a2_v(tv1, tv0);
			}
			if (a0 == 5553) {
				if (f_c01_a1_b(tv1) && f_b47_a1_b(tv1)) {
					f_26c_a1_v("Neutral");
					tv0->SetMessage(5050);
					tv0->ClearReplies();
					tv0->AddReply(5051, 5555, 5554);
					tv0->AddReply(5073, 5582, 5581);
					return;
				}
				f_26c_a1_v("Neutral");
				tv0->SetMessage(8066);
				tv0->ClearReplies();
				if (f_b8d_a1_b(tv1) && f_c0d_a1_b(tv1) && f_b3b_a1_b(tv1) || f_b97_a1_b(tv1) && f_c0d_a1_b(tv1) && f_b3b_a1_b(tv1)) {
					tv0->AddReply(8067, 5607, 8890);
				}
				if (f_b97_a1_b(tv1) && f_c19_a1_b(tv1) || f_b83_a1_b(tv1) && f_c19_a1_b(tv1)) {
					tv0->AddReply(8068, 5592, 8891);
				}
				if (f_bf5_a1_b(tv1) && f_b53_a1_b(tv1)) {
					tv0->AddReply(8076, 8916, 8899);
				}
				if (f_bd1_a1_b(tv1) && f_b5f_a1_b(tv1)) {
					tv0->AddReply(8077, 8917, 8900);
				}
				if (f_bc5_a1_b(tv1) && f_b6b_a1_b(tv1)) {
					tv0->AddReply(8078, 8918, 8901);
				}
				if (f_bdd_a1_b(tv1) && f_b77_a1_b(tv1)) {
					tv0->AddReply(8090, 8919, 8913);
				}
				tv0->AddReply(8697, -1, 9534);
				return;
			}
			if (a0 == 8919) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(8096);
				tv0->ClearReplies();
				tv0->AddReply(8696, -1, 9533);
				return;
			}
			if (a0 == 8918) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(8095);
				tv0->ClearReplies();
				tv0->AddReply(8695, -1, 9532);
				return;
			}
			if (a0 == 8917) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(8094);
				tv0->ClearReplies();
				tv0->AddReply(8694, -1, 9531);
				return;
			}
			if (a0 == 8916) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(8093);
				tv0->ClearReplies();
				tv0->AddReply(8693, -1, 9530);
				return;
			}
			if (a0 == 5592) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5082);
				tv0->ClearReplies();
				tv0->AddReply(5083, 5594, 5593);
				tv0->AddReply(5091, 5603, 5602);
				return;
			}
			if (a0 == 5603) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5092);
				tv0->ClearReplies();
				tv0->AddReply(5093, 5596, 5604);
				tv0->AddReply(5094, -1, 5606);
				return;
			}
			if (a0 == 5594) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5084);
				tv0->ClearReplies();
				tv0->AddReply(5085, 5596, 5595);
				tv0->AddReply(5090, 5596, 5600);
				return;
			}
			if (a0 == 5596) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5086);
				tv0->ClearReplies();
				tv0->AddReply(5087, -1, 5597);
				tv0->AddReply(5088, -1, 5598);
				tv0->AddReply(5089, -1, 5599);
				return;
			}
			if (a0 == 5607) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5095);
				tv0->ClearReplies();
				tv0->AddReply(5096, 5609, 5608);
				tv0->AddReply(5102, 5609, 5614);
				return;
			}
			if (a0 == 5609) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5097);
				tv0->ClearReplies();
				tv0->AddReply(5098, 5616, 5610);
				tv0->AddReply(5099, 5612, 5611);
				return;
			}
			if (a0 == 5612) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5100);
				tv0->ClearReplies();
				tv0->AddReply(5101, -1, 5613);
				return;
			}
			if (a0 == 5616) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5103);
				tv0->ClearReplies();
				tv0->AddReply(5104, -1, 5617);
				return;
			}
			if (a0 == 5582) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5074);
				tv0->ClearReplies();
				tv0->AddReply(5075, 5584, 5583);
				tv0->AddReply(5078, 5588, 5587);
				return;
			}
			if (a0 == 5588) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5079);
				tv0->ClearReplies();
				tv0->AddReply(5080, 5557, 5589);
				tv0->AddReply(5081, -1, 5591);
				return;
			}
			if (a0 == 5584) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5076);
				tv0->ClearReplies();
				tv0->AddReply(5077, 5555, 5585);
				return;
			}
			if (a0 == 5555) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5052);
				tv0->ClearReplies();
				tv0->AddReply(5053, 5557, 5556);
				tv0->AddReply(5069, 5576, 5575);
				return;
			}
			if (a0 == 5576) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5070);
				tv0->ClearReplies();
				tv0->AddReply(5071, 5557, 5577);
				tv0->AddReply(5072, 5557, 5579);
				return;
			}
			if (a0 == 5557) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5054);
				tv0->ClearReplies();
				tv0->AddReply(5055, 5559, 5558);
				return;
			}
			if (a0 == 5559) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5056);
				tv0->ClearReplies();
				tv0->AddReply(5057, 5561, 5560);
				tv0->AddReply(5062, 5566, 5565);
				return;
			}
			if (a0 == 5566) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5063);
				tv0->ClearReplies();
				tv0->AddReply(5064, 5561, 5567);
				tv0->AddReply(5065, 5570, 5569);
				return;
			}
			if (a0 == 5570) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5066);
				tv0->ClearReplies();
				tv0->AddReply(5067, 5561, 5571);
				return;
			}
			if (a0 == 5561) {
				f_26c_a1_v("Neutral");
				tv0->SetMessage(5058);
				tv0->ClearReplies();
				tv0->AddReply(5059, -1, 5562);
				tv0->AddReply(5060, -1, 5563);
				tv0->AddReply(5061, -1, 5564);
				return;
			}
			tv3 = true;
			if (f_a8e_a0_b()) {
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
		if (!f_9db_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a8a_a0_i());
		L0->SetPhoto(f_a8c_a0_s());
		L0->SetPlayerName(f_ca6_a0_i());
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
		f_a13_a1_v(a0);
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
			f_65d_a1_v("Neutral");
			tv0->SetMessage(9473);
			tv0->ClearReplies();
			tv0->AddReply(9474, 10417, 10416);
			tv0->AddReply(9487, -1, 10429);
			break;
			return;
		}
		if (f_a8e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a17_a1_v(tv2);
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

	void f_65d_a1_v(string a0)
	{
		if (!f_a8e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a17_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a29_a0_v();
			if (a0 == 10415) {
				f_65d_a1_v("Neutral");
				tv0->SetMessage(9473);
				tv0->ClearReplies();
				tv0->AddReply(9474, 10417, 10416);
				tv0->AddReply(9487, -1, 10429);
				return;
			}
			if (a0 == 10417) {
				f_65d_a1_v("Neutral");
				tv0->SetMessage(9475);
				tv0->ClearReplies();
				tv0->AddReply(9476, 10419, 10418);
				tv0->AddReply(9481, 10424, 10423);
				return;
			}
			if (a0 == 10424) {
				f_65d_a1_v("Neutral");
				tv0->SetMessage(9482);
				tv0->ClearReplies();
				tv0->AddReply(9483, 10426, 10425);
				return;
			}
			if (a0 == 10426) {
				f_65d_a1_v("Neutral");
				tv0->SetMessage(9484);
				tv0->ClearReplies();
				tv0->AddReply(9485, -1, 10427);
				tv0->AddReply(9486, -1, 10428);
				return;
			}
			if (a0 == 10419) {
				f_65d_a1_v("Neutral");
				tv0->SetMessage(9477);
				tv0->ClearReplies();
				tv0->AddReply(9478, -1, 10420);
				tv0->AddReply(9479, -1, 10421);
				tv0->AddReply(9480, -1, 10422);
				return;
			}
			tv3 = true;
			if (f_a8e_a0_b()) {
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
		if (!f_9db_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a8a_a0_i());
		L0->SetPhoto(f_a8c_a0_s());
		L0->SetPlayerName(f_ca6_a0_i());
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
		f_a13_a1_v(a0);
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
			if (f_be9_a1_b(tv1)) {
				f_b29_a2_v(tv1, tv0);
				f_785_a1_v("Neutral");
				tv0->SetMessage(9951);
				tv0->ClearReplies();
				tv0->AddReply(9952, 10970, 10969);
				tv0->AddReply(9961, 10970, 10978);
				break;
			}
			f_785_a1_v("Neutral");
			tv0->SetMessage(15314);
			tv0->ClearReplies();
			tv0->AddReply(15315, -1, 16553);
			break;
			return;
		}
		if (f_a8e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a17_a1_v(tv2);
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

	void f_785_a1_v(string a0)
	{
		if (!f_a8e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a17_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a29_a0_v();
			if (a1 == 10976) {
				f_ae5_a2_v(tv1, tv0);
				f_ac7_a2_v(tv1, tv0);
			}
			if (a0 == 10968) {
				if (f_be9_a1_b(tv1)) {
					f_b29_a2_v(tv1, tv0);
					f_785_a1_v("Neutral");
					tv0->SetMessage(9951);
					tv0->ClearReplies();
					tv0->AddReply(9952, 10970, 10969);
					tv0->AddReply(9961, 10970, 10978);
					return;
				}
				f_785_a1_v("Neutral");
				tv0->SetMessage(15314);
				tv0->ClearReplies();
				tv0->AddReply(15315, -1, 16553);
				return;
			}
			if (a0 == 10970) {
				f_785_a1_v("Neutral");
				tv0->SetMessage(9953);
				tv0->ClearReplies();
				tv0->AddReply(9954, -1, 10971);
				tv0->AddReply(9955, 10973, 10972);
				return;
			}
			if (a0 == 10973) {
				f_785_a1_v("Neutral");
				tv0->SetMessage(9956);
				tv0->ClearReplies();
				tv0->AddReply(9957, 10975, 10974);
				return;
			}
			if (a0 == 10975) {
				f_785_a1_v("Neutral");
				tv0->SetMessage(9958);
				tv0->ClearReplies();
				tv0->AddReply(9959, -1, 10976);
				tv0->AddReply(9960, -1, 10977);
				return;
			}
			tv3 = true;
			if (f_a8e_a0_b()) {
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
		if (!f_9db_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a8a_a0_i());
		L0->SetPhoto(f_a8c_a0_s());
		L0->SetPlayerName(f_ca6_a0_i());
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
		f_a13_a1_v(a0);
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
			f_8ac_a1_v("Neutral");
			tv0->SetMessage(12815);
			tv0->ClearReplies();
			if (f_bad_a1_b(tv1) && f_bb9_a1_b(tv1)) {
				tv0->AddReply(12816, 14017, 14016);
			}
			tv0->AddReply(12828, -1, 14028);
			break;
			return;
		}
		if (f_a8e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a17_a1_v(tv2);
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

	void f_8ac_a1_v(string a0)
	{
		if (!f_a8e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a17_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_a29_a0_v();
			if (a1 == 14233) {
				f_af0_a2_v(tv1, tv0);
				f_b12_a2_v(tv1, tv0);
			}
			if (a1 == 14234) {
				f_af0_a2_v(tv1, tv0);
				f_b12_a2_v(tv1, tv0);
			}
			if (a1 == 14027) {
				f_af0_a2_v(tv1, tv0);
				f_af6_a2_v(tv1, tv0);
			}
			if (a1 == 14026) {
				f_af0_a2_v(tv1, tv0);
				f_af6_a2_v(tv1, tv0);
			}
			if (a0 == 14015) {
				f_8ac_a1_v("Neutral");
				tv0->SetMessage(12815);
				tv0->ClearReplies();
				if (f_bad_a1_b(tv1) && f_bb9_a1_b(tv1)) {
					tv0->AddReply(12816, 14017, 14016);
				}
				tv0->AddReply(12828, -1, 14028);
				return;
			}
			if (a0 == 14017) {
				if (!f_ba1_a1_b(tv1)) {
					f_8ac_a1_v("Neutral");
					tv0->SetMessage(12817);
					tv0->ClearReplies();
					tv0->AddReply(13022, 14230, 14229);
					return;
				}
				if (f_ba1_a1_b(tv1)) {
					f_8ac_a1_v("Neutral");
					tv0->SetMessage(13021);
					tv0->ClearReplies();
					tv0->AddReply(12818, 14019, 14018);
					return;
				}
			}
			if (a0 == 14019) {
				f_8ac_a1_v("Neutral");
				tv0->SetMessage(12819);
				tv0->ClearReplies();
				tv0->AddReply(12820, 14021, 14020);
				return;
			}
			if (a0 == 14021) {
				f_8ac_a1_v("Neutral");
				tv0->SetMessage(12821);
				tv0->ClearReplies();
				tv0->AddReply(12822, 14023, 14022);
				return;
			}
			if (a0 == 14023) {
				f_8ac_a1_v("Neutral");
				tv0->SetMessage(12823);
				tv0->ClearReplies();
				tv0->AddReply(12824, 14025, 14024);
				tv0->AddReply(12826, -1, 14026);
				return;
			}
			if (a0 == 14025) {
				f_8ac_a1_v("Neutral");
				tv0->SetMessage(12825);
				tv0->ClearReplies();
				tv0->AddReply(12827, -1, 14027);
				return;
			}
			if (a0 == 14230) {
				f_8ac_a1_v("Neutral");
				tv0->SetMessage(13023);
				tv0->ClearReplies();
				tv0->AddReply(13024, 14232, 14231);
				tv0->AddReply(13027, -1, 14234);
				return;
			}
			if (a0 == 14232) {
				f_8ac_a1_v("Neutral");
				tv0->SetMessage(13025);
				tv0->ClearReplies();
				tv0->AddReply(13026, -1, 14233);
				return;
			}
			tv3 = true;
			if (f_a8e_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_9ca_a1_b(object a0)
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

bool f_9d6_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_9db_a1_b(object a0)
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
	L5 = L3 * 70 + f_a30_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_a13_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_a17_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_a29_a0_v(void)
{
	if (f_a8e_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_a30_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_a3a_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_a3f_a3_v(object a0, object a1, int a2)
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

void f_a4c_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_a3f_a3_v(a0, L0, a2);
}

bool f_a59_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_a65_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_a6a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_a73_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_a7b_a1_b(int a0)
{
	return f_a6a_a0_i() == a0;
}

bool f_a81_a0_b(void)
{
	bool L0;
	f_a17_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_a8a_a0_i(void)
{
	return 2867;
}

string f_a8c_a0_s(void)
{
	return "ui/NPC_Laska.png";
}

bool f_a8e_a0_b(void)
{
	return true;
}

void f_a90_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_c95_a0_o();
	L0->FindMark(L1, "d1q02AnnaGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q02ViktorGotoAnna");
	if (L1) {
		L1->Remove();
	}
	f_cb7_a0_v();
	f_c84_a1_b(35);
	f_a59_a2_b("quest_d1_02", "completed");
}

void f_ab2_a2_v(object a0, object a1)
{
	object L0;
	@Trace("lockpick1time is given");
	@CreateInvItem(L0);
	L0->SetItemName("lockpick");
	L0->SetProperty("uses", 1);
	f_a3f_a3_v(a0, L0, 1);
}

void f_ac7_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_acd_a2_v(object a0, object a1)
{
	@SetVariable("ood1Laska4", 1);
}

void f_ad3_a2_v(object a0, object a1)
{
	@SetVariable("ood1Laska5", 1);
}

void f_ad9_a2_v(object a0, object a1)
{
	@SetVariable("ood1Laska6", 1);
}

void f_adf_a2_v(object a0, object a1)
{
	@SetVariable("ood1Laska7", 1);
}

void f_ae5_a2_v(object a0, object a1)
{
	@Trace("powder is given");
	f_a4c_a3_v(a0, "powder", 1);
}

void f_af0_a2_v(object a0, object a1)
{
	@SetVariable("ood6Laska1", 1);
}

void f_af6_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d6q01", 3);
	L0 = f_c95_a0_o();
	L0->AddMark("d6q01LaskaGotoAlbinos", "pt_d6q03_albinos", 1, 15400, f_a65_a0_f());
	f_cc7_a0_v();
	f_a59_a2_b("quest_d6_01", "albinos_klara");
}

void f_b12_a2_v(object a0, object a1)
{
	@SetVariable("d6q01", 4);
	f_a59_a2_b("quest_d6_01", "eva_klara");
}

void f_b1d_a2_v(object a0, object a1)
{
	@SetVariable("KnowLaska", 1);
}

void f_b23_a2_v(object a0, object a1)
{
	@SetVariable("ood1Laska1", 1);
}

void f_b29_a2_v(object a0, object a1)
{
	@SetVariable("ood3Laska1", 1);
}

void f_b2f_a2_v(object a0, object a1)
{
	@SetVariable("ood1Laska2", 1);
}

void f_b35_a2_v(object a0, object a1)
{
	@SetVariable("ood1Laska3", 1);
}

bool f_b3b_a1_b(object a0)
{
	if (f_a3a_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_b47_a1_b(object a0)
{
	if (f_a3a_a1_i("d1q02") == 2) {
		return true;
	}
	return false;
}

bool f_b53_a1_b(object a0)
{
	if (f_a3a_a1_i("ood1Laska4") == 0) {
		return true;
	}
	return false;
}

bool f_b5f_a1_b(object a0)
{
	if (f_a3a_a1_i("ood1Laska5") == 0) {
		return true;
	}
	return false;
}

bool f_b6b_a1_b(object a0)
{
	if (f_a3a_a1_i("ood1Laska6") == 0) {
		return true;
	}
	return false;
}

bool f_b77_a1_b(object a0)
{
	if (f_a3a_a1_i("ood1Laska7") == 0) {
		return true;
	}
	return false;
}

bool f_b83_a1_b(object a0)
{
	if (f_c25_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_b8d_a1_b(object a0)
{
	if (f_c30_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_b97_a1_b(object a0)
{
	if (f_c45_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_ba1_a1_b(object a0)
{
	if (f_a3a_a1_i("d6q03AlbinosKilled") == 1) {
		return true;
	}
	return false;
}

bool f_bad_a1_b(object a0)
{
	if (f_a3a_a1_i("d6q01") == 2) {
		return true;
	}
	return false;
}

bool f_bb9_a1_b(object a0)
{
	if (f_a3a_a1_i("ood6Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_bc5_a1_b(object a0)
{
	if (f_a3a_a1_i("KnowKaterina") == 1) {
		return true;
	}
	return false;
}

bool f_bd1_a1_b(object a0)
{
	if (f_a3a_a1_i("KnowMaria") == 1) {
		return true;
	}
	return false;
}

bool f_bdd_a1_b(object a0)
{
	if (f_a3a_a1_i("KnowMishka") == 1) {
		return true;
	}
	return false;
}

bool f_be9_a1_b(object a0)
{
	if (f_a3a_a1_i("ood3Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_bf5_a1_b(object a0)
{
	if (f_a3a_a1_i("KnowOspina") == 1) {
		return true;
	}
	return false;
}

bool f_c01_a1_b(object a0)
{
	if (f_a3a_a1_i("ood1Laska1") == 0) {
		return true;
	}
	return false;
}

bool f_c0d_a1_b(object a0)
{
	if (f_a3a_a1_i("ood1Laska2") == 0) {
		return true;
	}
	return false;
}

bool f_c19_a1_b(object a0)
{
	if (f_a3a_a1_i("ood1Laska3") == 0) {
		return true;
	}
	return false;
}

bool f_c25_a1_b(object a0)
{
	if (f_a73_a0_i() >= 18) {
		return true;
	}
	return false;
}

bool f_c30_a1_b(object a0)
{
	if (f_a73_a0_i() >= 0 && f_a73_a0_i() < 6) {
		return true;
	}
	return false;
}

bool f_c45_a1_b(object a0)
{
	if (f_a73_a0_i() >= 12 && f_a73_a0_i() < 18) {
		return true;
	}
	return false;
}

object f_c5a_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_c67_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_c5a_a0_o();
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

bool f_c84_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_c5a_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

object f_c95_a0_o(void)
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

int f_ca6_a0_i(void)
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

void f_cb7_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 36, 2, 12118);
	f_c67_a2_b(L0, 7);
}

void f_cc7_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 117, 1, 13740);
	f_c67_a2_b(L0, 111);
}

void f_cd7_a0_v(void)
{
	g1 = false;
}

void f_cdb_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_a7b_a1_b(1)) {
		t4{a0};
		return;
	}
	if (f_a7b_a1_b(2)) {
		t6{a0};
		return;
	}
	if (f_a7b_a1_b(3)) {
		t8{a0};
		return;
	}
	if (f_a7b_a1_b(6)) {
		t10{a0};
		return;
	}
	f_a81_a0_b();
}

