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
		} while (!f_1596_a0_b());
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
		f_15f0_a1_b(f_169d_a0_o());
		if (!f_159b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1747_a0_i());
		L0->SetNPCDescription(f_1745_a0_i());
		L0->SetPhoto(f_1749_a0_s());
		L0->SetPhoto2(f_174b_a0_s());
		L0->SetPlayerName(f_1c6a_a0_i());
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
		f_15df_a1_v(a0);
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
			if (!f_1a0b_a1_b(tv1) && f_1a17_a1_b(tv1)) {
				f_17dc_a2_v(tv1, tv0);
				f_1808_a2_v(tv1, tv0);
				f_ed_a1_v("Neutral");
				tv0->SetMessage(533560);
				tv0->ClearReplies();
				tv0->AddReply(536195, 37969, 37968);
				if (f_19ff_a1_b(tv1)) {
					tv0->AddReply(536202, 37976, 37975);
				}
				break;
			}
			f_1808_a2_v(tv1, tv0);
			f_ed_a1_v("Neutral");
			tv0->SetMessage(533564);
			tv0->ClearReplies();
			if (f_1a23_a1_b(tv1) && !f_1a0b_a1_b(tv1)) {
				tv0->AddReply(533569, 35100, 35099);
			}
			if (f_1a2f_a1_b(tv1)) {
				tv0->AddReply(533565, 35096, 35095);
			}
			tv0->AddReply(533572, -1, 35102);
			tv0->AddReply(536201, -1, 37974);
			break;
			return;
		}
		if (f_174d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_167a_a1_v(tv2);
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

	void f_ed_a1_v(string a0)
	{
		if (!f_174d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1681_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1696_a0_v();
			if (a1 == 35093) {
				f_17e2_a2_v(tv1, tv0);
				f_17ee_a2_v(tv1, tv0);
			}
			if (a1 == 35101) {
				f_17e2_a2_v(tv1, tv0);
			}
			if (a1 == 35098) {
				f_17f9_a2_v(tv1, tv0);
				f_17d1_a2_v(tv1, tv0);
				f_1773_a2_v(tv1, tv0);
			}
			if (a0 == 35090) {
				if (!f_1a0b_a1_b(tv1) && f_1a17_a1_b(tv1)) {
					f_17dc_a2_v(tv1, tv0);
					f_1808_a2_v(tv1, tv0);
					f_ed_a1_v("Neutral");
					tv0->SetMessage(533560);
					tv0->ClearReplies();
					tv0->AddReply(536195, 37969, 37968);
					if (f_19ff_a1_b(tv1)) {
						tv0->AddReply(536202, 37976, 37975);
					}
					return;
				}
				f_1808_a2_v(tv1, tv0);
				f_ed_a1_v("Neutral");
				tv0->SetMessage(533564);
				tv0->ClearReplies();
				if (f_1a23_a1_b(tv1) && !f_1a0b_a1_b(tv1)) {
					tv0->AddReply(533569, 35100, 35099);
				}
				if (f_1a2f_a1_b(tv1)) {
					tv0->AddReply(533565, 35096, 35095);
				}
				tv0->AddReply(533572, -1, 35102);
				tv0->AddReply(536201, -1, 37974);
				return;
			}
			if (a0 == 35096) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(533566);
				tv0->ClearReplies();
				tv0->AddReply(533568, -1, 35098);
				return;
			}
			if (a0 == 35100) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(533570);
				tv0->ClearReplies();
				tv0->AddReply(533571, -1, 35101);
				return;
			}
			if (a0 == 37969) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(536196);
				tv0->ClearReplies();
				tv0->AddReply(536197, 37971, 37970);
				tv0->AddReply(536245, 37971, 38021);
				return;
			}
			if (a0 == 37971) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(536198);
				tv0->ClearReplies();
				tv0->AddReply(536199, 37973, 37972);
				tv0->AddReply(536246, 38025, 38023);
				return;
			}
			if (a0 == 38025) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(536248);
				tv0->ClearReplies();
				tv0->AddReply(536249, 37973, 38027);
				return;
			}
			if (a0 == 37973) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(536200);
				tv0->ClearReplies();
				tv0->AddReply(536244, 35092, 38020);
				tv0->AddReply(536247, 37976, 38024);
				return;
			}
			if (a0 == 37976) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(536203);
				tv0->ClearReplies();
				tv0->AddReply(536250, 35092, 38029);
				tv0->AddReply(536251, 38033, 38031);
				return;
			}
			if (a0 == 38033) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(536252);
				tv0->ClearReplies();
				tv0->AddReply(536253, 35092, 38034);
				if (!f_19ff_a1_b(tv1)) {
					tv0->AddReply(536254, -1, 38036);
				}
				return;
			}
			if (a0 == 35092) {
				f_ed_a1_v("Neutral");
				tv0->SetMessage(533562);
				tv0->ClearReplies();
				tv0->AddReply(533563, -1, 35093);
				tv0->AddReply(533567, -1, 35097);
				return;
			}
			tv3 = true;
			if (f_174d_a0_b()) {
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
		f_15f0_a1_b(f_169d_a0_o());
		if (!f_159b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1747_a0_i());
		L0->SetNPCDescription(f_1745_a0_i());
		L0->SetPhoto(f_1749_a0_s());
		L0->SetPhoto2(f_174b_a0_s());
		L0->SetPlayerName(f_1c6a_a0_i());
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
		f_15df_a1_v(a0);
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
			f_2ff_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_174d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_167a_a1_v(tv2);
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

	void f_2ff_a1_v(string a0)
	{
		if (!f_174d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1681_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1696_a0_v();
			if (a0 == 36971) {
				f_2ff_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_2ff_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_2ff_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_174d_a0_b()) {
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
		f_15f0_a1_b(f_169d_a0_o());
		if (!f_159b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1747_a0_i());
		L0->SetNPCDescription(f_1745_a0_i());
		L0->SetPhoto(f_1749_a0_s());
		L0->SetPhoto2(f_174b_a0_s());
		L0->SetPlayerName(f_1c6a_a0_i());
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
		f_15df_a1_v(a0);
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
			f_1965_a2_v(tv1, tv0);
			f_402_a1_v("Neutral");
			tv0->SetMessage(500221);
			tv0->ClearReplies();
			tv0->AddReply(532814, 34298, 34291);
			tv0->AddReply(532815, 34294, 34292);
			break;
			return;
		}
		if (f_174d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_167a_a1_v(tv2);
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

	void f_402_a1_v(string a0)
	{
		if (!f_174d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1681_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1696_a0_v();
			if (a0 == 260) {
				f_1965_a2_v(tv1, tv0);
				f_402_a1_v("Neutral");
				tv0->SetMessage(500221);
				tv0->ClearReplies();
				tv0->AddReply(532814, 34298, 34291);
				tv0->AddReply(532815, 34294, 34292);
				return;
			}
			if (a0 == 34294) {
				f_402_a1_v("Neutral");
				tv0->SetMessage(532817);
				tv0->ClearReplies();
				tv0->AddReply(532818, 34302, 34295);
				tv0->AddReply(532819, 34297, 34296);
				return;
			}
			if (a0 == 34297) {
				f_402_a1_v("Neutral");
				tv0->SetMessage(532820);
				tv0->ClearReplies();
				tv0->AddReply(532827, 34293, 34307);
				tv0->AddReply(532828, -1, 34308);
				return;
			}
			if (a0 == 34298) {
				f_402_a1_v("Neutral");
				tv0->SetMessage(532821);
				tv0->ClearReplies();
				tv0->AddReply(532822, 34302, 34299);
				tv0->AddReply(532823, 34302, 34300);
				tv0->AddReply(532824, 34302, 34301);
				return;
			}
			if (a0 == 34302) {
				f_402_a1_v("Neutral");
				tv0->SetMessage(532825);
				tv0->ClearReplies();
				tv0->AddReply(532826, 34293, 34306);
				tv0->AddReply(532829, -1, 34310);
				return;
			}
			if (a0 == 34293) {
				f_402_a1_v("Neutral");
				tv0->SetMessage(532816);
				tv0->ClearReplies();
				tv0->AddReply(532831, -1, 34312);
				tv0->AddReply(532832, -1, 34313);
				tv0->AddReply(532830, -1, 34311);
				return;
			}
			tv3 = true;
			if (f_174d_a0_b()) {
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
		f_15f0_a1_b(f_169d_a0_o());
		if (!f_159b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1747_a0_i());
		L0->SetNPCDescription(f_1745_a0_i());
		L0->SetPhoto(f_1749_a0_s());
		L0->SetPhoto2(f_174b_a0_s());
		L0->SetPlayerName(f_1c6a_a0_i());
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
		f_15df_a1_v(a0);
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
			f_597_a1_v("Neutral");
			tv0->SetMessage(512719);
			tv0->ClearReplies();
			if (f_1b13_a1_b(tv1) && f_1aef_a1_b(tv1)) {
				tv0->AddReply(512720, 4261, 13913);
			}
			if (f_1afb_a1_b(tv1) && f_1b1f_a1_b(tv1)) {
				tv0->AddReply(512721, 13915, 13914);
			}
			if (f_1b37_a1_b(tv1) && !f_1b43_a1_b(tv1) && !f_1b4f_a1_b(tv1) && f_1b5b_a1_b(tv1)) {
				tv0->AddReply(513747, 14993, 14992);
			}
			tv0->AddReply(512728, -1, 13921);
			break;
			return;
		}
		if (f_174d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_167a_a1_v(tv2);
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

	void f_597_a1_v(string a0)
	{
		if (!f_174d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1681_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1696_a0_v();
			if (a1 == 4268) {
				f_1936_a2_v(tv1, tv0);
			}
			if (a1 == 4269) {
				f_1936_a2_v(tv1, tv0);
			}
			if (a1 == 4266) {
				f_1936_a2_v(tv1, tv0);
			}
			if (a1 == 13914) {
				f_193c_a2_v(tv1, tv0);
			}
			if (a1 == 13920) {
				f_1942_a2_v(tv1, tv0);
				f_196b_a2_v(tv1, tv0);
				f_1979_a2_v(tv1, tv0);
			}
			if (a1 == 40699) {
				f_1942_a2_v(tv1, tv0);
				f_196b_a2_v(tv1, tv0);
				f_1979_a2_v(tv1, tv0);
			}
			if (a1 == 40698) {
				f_1942_a2_v(tv1, tv0);
			}
			if (a1 == 14992) {
				f_197f_a2_v(tv1, tv0);
			}
			if (a1 == 40682) {
				f_180e_a2_v(tv1, tv0);
			}
			if (a1 == 40686) {
				f_180e_a2_v(tv1, tv0);
			}
			if (a0 == 13912) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(512719);
				tv0->ClearReplies();
				if (f_1b13_a1_b(tv1) && f_1aef_a1_b(tv1)) {
					tv0->AddReply(512720, 4261, 13913);
				}
				if (f_1afb_a1_b(tv1) && f_1b1f_a1_b(tv1)) {
					tv0->AddReply(512721, 13915, 13914);
				}
				if (f_1b37_a1_b(tv1) && !f_1b43_a1_b(tv1) && !f_1b4f_a1_b(tv1) && f_1b5b_a1_b(tv1)) {
					tv0->AddReply(513747, 14993, 14992);
				}
				tv0->AddReply(512728, -1, 13921);
				return;
			}
			if (a0 == 14993) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(513748);
				tv0->ClearReplies();
				tv0->AddReply(538767, 40684, 40683);
				tv0->AddReply(513749, 40684, 14994);
				return;
			}
			if (a0 == 40684) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(538768);
				tv0->ClearReplies();
				tv0->AddReply(538766, -1, 40682);
				tv0->AddReply(538769, -1, 40686);
				return;
			}
			if (a0 == 13915) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(512722);
				tv0->ClearReplies();
				tv0->AddReply(512723, 13917, 13916);
				tv0->AddReply(538770, 40688, 40687);
				return;
			}
			if (a0 == 40688) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(538771);
				tv0->ClearReplies();
				tv0->AddReply(538772, -1, 40689);
				return;
			}
			if (a0 == 13917) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(512724);
				tv0->ClearReplies();
				tv0->AddReply(512725, 13919, 13918);
				tv0->AddReply(538776, 40695, 40694);
				return;
			}
			if (a0 == 40695) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(538777);
				tv0->ClearReplies();
				tv0->AddReply(538778, 13919, 40696);
				tv0->AddReply(538779, -1, 40698);
				return;
			}
			if (a0 == 13919) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(512726);
				tv0->ClearReplies();
				tv0->AddReply(538773, 40691, 40690);
				tv0->AddReply(538775, 40691, 40692);
				return;
			}
			if (a0 == 40691) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(538774);
				tv0->ClearReplies();
				tv0->AddReply(512727, -1, 13920);
				tv0->AddReply(538780, -1, 40699);
				return;
			}
			if (a0 == 4261) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(503913);
				tv0->ClearReplies();
				tv0->AddReply(503914, -1, 4262);
				tv0->AddReply(503915, 4264, 4263);
				return;
			}
			if (a0 == 4264) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(503916);
				tv0->ClearReplies();
				tv0->AddReply(503917, 4267, 4265);
				tv0->AddReply(503918, -1, 4266);
				return;
			}
			if (a0 == 4267) {
				f_597_a1_v("Neutral");
				tv0->SetMessage(503919);
				tv0->ClearReplies();
				tv0->AddReply(503920, -1, 4268);
				tv0->AddReply(503921, -1, 4269);
				return;
			}
			tv3 = true;
			if (f_174d_a0_b()) {
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
		f_15f0_a1_b(f_169d_a0_o());
		if (!f_159b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1747_a0_i());
		L0->SetNPCDescription(f_1745_a0_i());
		L0->SetPhoto(f_1749_a0_s());
		L0->SetPhoto2(f_174b_a0_s());
		L0->SetPlayerName(f_1c6a_a0_i());
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
		f_15df_a1_v(a0);
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
			if (f_1ad7_a1_b(tv1) && f_19db_a1_b(tv1)) {
				f_1905_a2_v(tv1, tv0);
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504938);
				tv0->ClearReplies();
				tv0->AddReply(504949, 5439, 5438);
				tv0->AddReply(504978, 5439, 5475);
				tv0->AddReply(504979, 5439, 5477);
				break;
			}
			if (f_1a6b_a1_b(tv1)) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504940);
				tv0->ClearReplies();
				tv0->AddReply(504981, 5480, 5479);
				tv0->AddReply(504985, -1, 5483);
				break;
			}
			if (f_19cf_a1_b(tv1) && f_1ae3_a1_b(tv1)) {
				f_190b_a2_v(tv1, tv0);
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504943);
				tv0->ClearReplies();
				tv0->AddReply(504987, 5486, 5485);
				tv0->AddReply(533010, 34515, 34514);
				break;
			}
			f_8b0_a1_v("Neutral");
			tv0->SetMessage(506582);
			tv0->ClearReplies();
			if (f_19db_a1_b(tv1)) {
				tv0->AddReply(508690, 9528, 9527);
			}
			if (f_1b07_a1_b(tv1) && f_19e7_a1_b(tv1) && !f_19c3_a1_b(tv1)) {
				tv0->AddReply(506583, 5521, 7252);
			}
			if (f_19f3_a1_b(tv1) && f_19cf_a1_b(tv1) && f_1b2b_a1_b(tv1)) {
				tv0->AddReply(531949, 33354, 33353);
			}
			tv0->AddReply(507538, -1, 8320);
			break;
			return;
		}
		if (f_174d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_167a_a1_v(tv2);
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

	void f_8b0_a1_v(string a0)
	{
		if (!f_174d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1681_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1696_a0_v();
			if (a1 == 5450) {
				f_1840_a2_v(tv1, tv0);
				f_1830_a2_v(tv1, tv0);
			}
			if (a1 == 5451) {
				f_174f_a2_v(tv1, tv0);
			}
			if (a1 == 5488) {
				f_1769_a2_v(tv1, tv0);
				f_17ba_a2_v(tv1, tv0);
				f_17af_a2_v(tv1, tv0);
				f_1779_a2_v(tv1, tv0);
				f_17a4_a2_v(tv1, tv0);
				f_1773_a2_v(tv1, tv0);
			}
			if (a1 == 9529) {
				f_1840_a2_v(tv1, tv0);
				f_1830_a2_v(tv1, tv0);
			}
			if (a1 == 7252) {
				f_192a_a2_v(tv1, tv0);
			}
			if (a1 == 33353) {
				f_1930_a2_v(tv1, tv0);
			}
			if (a1 == 33355) {
				f_1794_a2_v(tv1, tv0);
				f_1784_a2_v(tv1, tv0);
			}
			if (a0 == 5427) {
				if (f_1ad7_a1_b(tv1) && f_19db_a1_b(tv1)) {
					f_1905_a2_v(tv1, tv0);
					f_8b0_a1_v("Neutral");
					tv0->SetMessage(504938);
					tv0->ClearReplies();
					tv0->AddReply(504949, 5439, 5438);
					tv0->AddReply(504978, 5439, 5475);
					tv0->AddReply(504979, 5439, 5477);
					return;
				}
				if (f_1a6b_a1_b(tv1)) {
					f_8b0_a1_v("Neutral");
					tv0->SetMessage(504940);
					tv0->ClearReplies();
					tv0->AddReply(504981, 5480, 5479);
					tv0->AddReply(504985, -1, 5483);
					return;
				}
				if (f_19cf_a1_b(tv1) && f_1ae3_a1_b(tv1)) {
					f_190b_a2_v(tv1, tv0);
					f_8b0_a1_v("Neutral");
					tv0->SetMessage(504943);
					tv0->ClearReplies();
					tv0->AddReply(504987, 5486, 5485);
					tv0->AddReply(533010, 34515, 34514);
					return;
				}
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(506582);
				tv0->ClearReplies();
				if (f_19db_a1_b(tv1)) {
					tv0->AddReply(508690, 9528, 9527);
				}
				if (f_1b07_a1_b(tv1) && f_19e7_a1_b(tv1) && !f_19c3_a1_b(tv1)) {
					tv0->AddReply(506583, 5521, 7252);
				}
				if (f_19f3_a1_b(tv1) && f_19cf_a1_b(tv1) && f_1b2b_a1_b(tv1)) {
					tv0->AddReply(531949, 33354, 33353);
				}
				tv0->AddReply(507538, -1, 8320);
				return;
			}
			if (a0 == 33354) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(531950);
				tv0->ClearReplies();
				tv0->AddReply(532946, 34437, 34435);
				tv0->AddReply(532947, 34439, 34436);
				return;
			}
			if (a0 == 34439) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(532949);
				tv0->ClearReplies();
				tv0->AddReply(532952, 34441, 34442);
				tv0->AddReply(532953, 34445, 34443);
				return;
			}
			if (a0 == 34437) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(532948);
				tv0->ClearReplies();
				tv0->AddReply(532950, 34441, 34440);
				tv0->AddReply(532954, 34445, 34444);
				return;
			}
			if (a0 == 34445) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(532955);
				tv0->ClearReplies();
				tv0->AddReply(532956, -1, 34447);
				tv0->AddReply(532957, -1, 34448);
				return;
			}
			if (a0 == 34441) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(532951);
				tv0->ClearReplies();
				tv0->AddReply(532958, 34452, 34450);
				tv0->AddReply(532959, -1, 34451);
				return;
			}
			if (a0 == 34452) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(532960);
				tv0->ClearReplies();
				tv0->AddReply(531951, -1, 33355);
				return;
			}
			if (a0 == 5521) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(505021);
				tv0->ClearReplies();
				tv0->AddReply(505022, 5523, 5522);
				return;
			}
			if (a0 == 5523) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(505023);
				tv0->ClearReplies();
				tv0->AddReply(505024, 5498, 5524);
				tv0->AddReply(533032, 5498, 34541);
				return;
			}
			if (a0 == 5498) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504999);
				tv0->ClearReplies();
				tv0->AddReply(505000, 5500, 5499);
				return;
			}
			if (a0 == 5500) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(505001);
				tv0->ClearReplies();
				tv0->AddReply(525224, 5525, 26591);
				return;
			}
			if (a0 == 5525) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(505025);
				tv0->ClearReplies();
				tv0->AddReply(505026, -1, 5526);
				return;
			}
			if (a0 == 9528) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(508691);
				tv0->ClearReplies();
				tv0->AddReply(508692, -1, 9529);
				return;
			}
			if (a0 == 34515) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(533011);
				tv0->ClearReplies();
				tv0->AddReply(533012, -1, 34516);
				return;
			}
			if (a0 == 5486) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504988);
				tv0->ClearReplies();
				tv0->AddReply(504990, -1, 5488);
				return;
			}
			if (a0 == 5480) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504982);
				tv0->ClearReplies();
				tv0->AddReply(504983, -1, 5481);
				return;
			}
			if (a0 == 5439) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504950);
				tv0->ClearReplies();
				tv0->AddReply(504951, 5441, 5440);
				tv0->AddReply(504977, 5441, 5473);
				return;
			}
			if (a0 == 5441) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504952);
				tv0->ClearReplies();
				tv0->AddReply(504953, 5443, 5442);
				tv0->AddReply(504972, 5466, 5465);
				return;
			}
			if (a0 == 5466) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504973);
				tv0->ClearReplies();
				tv0->AddReply(504974, 5445, 5467);
				tv0->AddReply(504975, 5445, 5469);
				return;
			}
			if (a0 == 5443) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504954);
				tv0->ClearReplies();
				tv0->AddReply(504955, 5445, 5444);
				tv0->AddReply(504968, 5460, 5459);
				return;
			}
			if (a0 == 5460) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504969);
				tv0->ClearReplies();
				tv0->AddReply(504970, 5445, 5461);
				tv0->AddReply(504971, 5445, 5463);
				return;
			}
			if (a0 == 5445) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504956);
				tv0->ClearReplies();
				tv0->AddReply(504957, 5447, 5446);
				tv0->AddReply(504967, 5447, 5457);
				return;
			}
			if (a0 == 5447) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504958);
				tv0->ClearReplies();
				tv0->AddReply(504959, 5449, 5448);
				tv0->AddReply(504966, 34511, 5455);
				return;
			}
			if (a0 == 34511) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(533008);
				tv0->ClearReplies();
				tv0->AddReply(533009, 5449, 34512);
				return;
			}
			if (a0 == 5449) {
				f_8b0_a1_v("Neutral");
				tv0->SetMessage(504960);
				tv0->ClearReplies();
				tv0->AddReply(504961, -1, 5450);
				tv0->AddReply(504962, -1, 5451);
				return;
			}
			tv3 = true;
			if (f_174d_a0_b()) {
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
		f_15f0_a1_b(f_169d_a0_o());
		if (!f_159b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1747_a0_i());
		L0->SetNPCDescription(f_1745_a0_i());
		L0->SetPhoto(f_1749_a0_s());
		L0->SetPhoto2(f_174b_a0_s());
		L0->SetPlayerName(f_1c6a_a0_i());
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
		f_15df_a1_v(a0);
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
			f_c89_a1_v("Neutral");
			tv0->SetMessage(506624);
			tv0->ClearReplies();
			if (f_1a47_a1_b(tv1) && f_1a5f_a1_b(tv1)) {
				tv0->AddReply(507217, 7952, 7953);
			}
			tv0->AddReply(506626, -1, 7295);
			break;
			return;
		}
		if (f_174d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_167a_a1_v(tv2);
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

	void f_c89_a1_v(string a0)
	{
		if (!f_174d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1681_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1696_a0_v();
			if (a1 == 7333) {
				f_1813_a2_v(tv1, tv0);
				f_1819_a2_v(tv1, tv0);
				f_185c_a2_v(tv1, tv0);
			}
			if (a1 == 7336) {
				f_1813_a2_v(tv1, tv0);
				f_1819_a2_v(tv1, tv0);
				f_185c_a2_v(tv1, tv0);
			}
			if (a1 == 7337) {
				f_1813_a2_v(tv1, tv0);
				f_1819_a2_v(tv1, tv0);
				f_185c_a2_v(tv1, tv0);
			}
			if (a0 == 7293) {
				f_c89_a1_v("Neutral");
				tv0->SetMessage(506624);
				tv0->ClearReplies();
				if (f_1a47_a1_b(tv1) && f_1a5f_a1_b(tv1)) {
					tv0->AddReply(507217, 7952, 7953);
				}
				tv0->AddReply(506626, -1, 7295);
				return;
			}
			if (a0 == 7952) {
				f_c89_a1_v("Neutral");
				tv0->SetMessage(507216);
				tv0->ClearReplies();
				tv0->AddReply(506651, 7326, 7325);
				tv0->AddReply(506672, 7954, 7352);
				return;
			}
			if (a0 == 7954) {
				f_c89_a1_v("Neutral");
				tv0->SetMessage(507218);
				tv0->ClearReplies();
				tv0->AddReply(507219, 7326, 7955);
				return;
			}
			if (a0 == 7326) {
				f_c89_a1_v("Neutral");
				tv0->SetMessage(506652);
				tv0->ClearReplies();
				tv0->AddReply(506653, 7328, 7327);
				tv0->AddReply(506668, 7347, 7346);
				return;
			}
			if (a0 == 7347) {
				f_17cb_a2_v(tv1, tv0);
				f_c89_a1_v("Neutral");
				tv0->SetMessage(506669);
				tv0->ClearReplies();
				tv0->AddReply(506670, 7332, 7348);
				tv0->AddReply(506671, 7328, 7350);
				return;
			}
			if (a0 == 7328) {
				f_c89_a1_v("Neutral");
				tv0->SetMessage(506654);
				tv0->ClearReplies();
				tv0->AddReply(506655, 7330, 7329);
				tv0->AddReply(506666, 7332, 7342);
				tv0->AddReply(506667, 7332, 7344);
				return;
			}
			if (a0 == 7330) {
				f_17cb_a2_v(tv1, tv0);
				f_c89_a1_v("Neutral");
				tv0->SetMessage(506656);
				tv0->ClearReplies();
				tv0->AddReply(506657, 7332, 7331);
				tv0->AddReply(506664, 7332, 7338);
				tv0->AddReply(506665, 7332, 7340);
				return;
			}
			if (a0 == 7332) {
				f_1758_a2_v(tv1, tv0);
				f_c89_a1_v("Neutral");
				tv0->SetMessage(506658);
				tv0->ClearReplies();
				tv0->AddReply(506659, -1, 7333);
				if (!f_1a53_a1_b(tv1)) {
					tv0->AddReply(506660, 7335, 7334);
				}
				tv0->AddReply(506663, -1, 7337);
				return;
			}
			if (a0 == 7335) {
				f_c89_a1_v("Neutral");
				tv0->SetMessage(506661);
				tv0->ClearReplies();
				tv0->AddReply(506662, -1, 7336);
				return;
			}
			tv3 = true;
			if (f_174d_a0_b()) {
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
		f_15f0_a1_b(f_169d_a0_o());
		if (!f_159b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1747_a0_i());
		L0->SetNPCDescription(f_1745_a0_i());
		L0->SetPhoto(f_1749_a0_s());
		L0->SetPhoto2(f_174b_a0_s());
		L0->SetPlayerName(f_1c6a_a0_i());
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
		f_15df_a1_v(a0);
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
			f_e9f_a1_v("Neutral");
			tv0->SetMessage(511344);
			tv0->ClearReplies();
			if (f_1a77_a1_b(tv1) && f_1a83_a1_b(tv1)) {
				tv0->AddReply(511346, 12544, 12543);
			}
			if (f_1a83_a1_b(tv1) && !f_1a8f_a1_b(tv1)) {
				tv0->AddReply(511473, 12680, 12679);
			}
			if (f_1aa7_a1_b(tv1) && f_1a9b_a1_b(tv1)) {
				tv0->AddReply(511853, 13067, 13066);
			}
			tv0->AddReply(511345, -1, 12542);
			break;
			return;
		}
		if (f_174d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_167a_a1_v(tv2);
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

	void f_e9f_a1_v(string a0)
	{
		if (!f_174d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1681_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1696_a0_v();
			if (a1 == 12543) {
				f_186c_a2_v(tv1, tv0);
			}
			if (a1 == 12557) {
				f_186c_a2_v(tv1, tv0);
				f_1872_a2_v(tv1, tv0);
				f_1878_a2_v(tv1, tv0);
				f_1985_a2_v(tv1, tv0);
				f_199b_a2_v(tv1, tv0);
				f_1990_a2_v(tv1, tv0);
				f_1773_a2_v(tv1, tv0);
			}
			if (a1 == 12681) {
				f_1872_a2_v(tv1, tv0);
				f_1878_a2_v(tv1, tv0);
				f_1773_a2_v(tv1, tv0);
				f_1985_a2_v(tv1, tv0);
				f_1990_a2_v(tv1, tv0);
				f_199b_a2_v(tv1, tv0);
			}
			if (a1 == 13068) {
				f_18bc_a2_v(tv1, tv0);
				f_17a4_a2_v(tv1, tv0);
				f_175e_a2_v(tv1, tv0);
			}
			if (a0 == 12541) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511344);
				tv0->ClearReplies();
				if (f_1a77_a1_b(tv1) && f_1a83_a1_b(tv1)) {
					tv0->AddReply(511346, 12544, 12543);
				}
				if (f_1a83_a1_b(tv1) && !f_1a8f_a1_b(tv1)) {
					tv0->AddReply(511473, 12680, 12679);
				}
				if (f_1aa7_a1_b(tv1) && f_1a9b_a1_b(tv1)) {
					tv0->AddReply(511853, 13067, 13066);
				}
				tv0->AddReply(511345, -1, 12542);
				return;
			}
			if (a0 == 13067) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511854);
				tv0->ClearReplies();
				tv0->AddReply(511855, -1, 13068);
				return;
			}
			if (a0 == 12680) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511474);
				tv0->ClearReplies();
				tv0->AddReply(511475, -1, 12681);
				return;
			}
			if (a0 == 12544) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511347);
				tv0->ClearReplies();
				tv0->AddReply(511348, 12550, 12545);
				tv0->AddReply(511367, 12566, 12565);
				return;
			}
			if (a0 == 12566) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511368);
				tv0->ClearReplies();
				tv0->AddReply(511369, 12614, 12567);
				tv0->AddReply(511419, 12554, 12616);
				return;
			}
			if (a0 == 12614) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511417);
				tv0->ClearReplies();
				tv0->AddReply(520959, 12556, 22175);
				tv0->AddReply(520960, -1, 22176);
				return;
			}
			if (a0 == 12550) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511353);
				tv0->ClearReplies();
				tv0->AddReply(511354, 12552, 12551);
				tv0->AddReply(511365, 12556, 12562);
				return;
			}
			if (a0 == 12552) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511355);
				tv0->ClearReplies();
				tv0->AddReply(511356, 12554, 12553);
				return;
			}
			if (a0 == 12554) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511357);
				tv0->ClearReplies();
				tv0->AddReply(511358, 12556, 12555);
				tv0->AddReply(511421, 12620, 12619);
				return;
			}
			if (a0 == 12620) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511422);
				tv0->ClearReplies();
				tv0->AddReply(511423, 12624, 12621);
				tv0->AddReply(511424, 12556, 12622);
				return;
			}
			if (a0 == 12624) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511425);
				tv0->ClearReplies();
				tv0->AddReply(511426, 12626, 12625);
				return;
			}
			if (a0 == 12626) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511427);
				tv0->ClearReplies();
				tv0->AddReply(511428, 12556, 12627);
				return;
			}
			if (a0 == 12556) {
				f_e9f_a1_v("Neutral");
				tv0->SetMessage(511359);
				tv0->ClearReplies();
				tv0->AddReply(511360, -1, 12557);
				tv0->AddReply(511362, -1, 12559);
				return;
			}
			tv3 = true;
			if (f_174d_a0_b()) {
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
		f_15f0_a1_b(f_169d_a0_o());
		if (!f_159b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1747_a0_i());
		L0->SetNPCDescription(f_1745_a0_i());
		L0->SetPhoto(f_1749_a0_s());
		L0->SetPhoto2(f_174b_a0_s());
		L0->SetPlayerName(f_1c6a_a0_i());
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
		f_15df_a1_v(a0);
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
			if (f_1ab3_a1_b(tv1) && f_1a3b_a1_b(tv1)) {
				f_17c5_a2_v(tv1, tv0);
				f_1802_a2_v(tv1, tv0);
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511872);
				tv0->ClearReplies();
				tv0->AddReply(511873, 13087, 13086);
				tv0->AddReply(515663, 16703, 16702);
				break;
			}
			f_113f_a1_v("Neutral");
			tv0->SetMessage(511897);
			tv0->ClearReplies();
			if (f_1abf_a1_b(tv1)) {
				tv0->AddReply(511898, 13115, 13114);
			}
			if (f_1acb_a1_b(tv1) && f_1b67_a1_b(tv1)) {
				tv0->AddReply(511907, 13124, 13123);
			}
			tv0->AddReply(511915, -1, 13131);
			break;
			return;
		}
		if (f_174d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_167a_a1_v(tv2);
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

	void f_113f_a1_v(string a0)
	{
		if (!f_174d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1681_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1696_a0_v();
			if (a1 == 13112) {
				f_18c2_a2_v(tv1, tv0);
				f_19ac_a2_v(tv1, tv0);
				f_19bc_a2_v(tv1, tv0);
			}
			if (a1 == 13122) {
				f_18ee_a2_v(tv1, tv0);
				f_1911_a2_v(tv1, tv0);
			}
			if (a1 == 13123) {
				f_19a6_a2_v(tv1, tv0);
			}
			if (a0 == 13085) {
				if (f_1ab3_a1_b(tv1) && f_1a3b_a1_b(tv1)) {
					f_17c5_a2_v(tv1, tv0);
					f_1802_a2_v(tv1, tv0);
					f_113f_a1_v("Neutral");
					tv0->SetMessage(511872);
					tv0->ClearReplies();
					tv0->AddReply(511873, 13087, 13086);
					tv0->AddReply(515663, 16703, 16702);
					return;
				}
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511897);
				tv0->ClearReplies();
				if (f_1abf_a1_b(tv1)) {
					tv0->AddReply(511898, 13115, 13114);
				}
				if (f_1acb_a1_b(tv1) && f_1b67_a1_b(tv1)) {
					tv0->AddReply(511907, 13124, 13123);
				}
				tv0->AddReply(511915, -1, 13131);
				return;
			}
			if (a0 == 13124) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511908);
				tv0->ClearReplies();
				tv0->AddReply(511909, 13126, 13125);
				tv0->AddReply(515675, 16719, 16718);
				return;
			}
			if (a0 == 16719) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(515676);
				tv0->ClearReplies();
				tv0->AddReply(515677, 13126, 16720);
				return;
			}
			if (a0 == 13126) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511910);
				tv0->ClearReplies();
				tv0->AddReply(511911, 13128, 13127);
				tv0->AddReply(515678, -1, 16722);
				return;
			}
			if (a0 == 13128) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511912);
				tv0->ClearReplies();
				tv0->AddReply(511913, -1, 13129);
				tv0->AddReply(511914, -1, 13130);
				tv0->AddReply(515679, -1, 16723);
				return;
			}
			if (a0 == 13115) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511899);
				tv0->ClearReplies();
				tv0->AddReply(511900, 13117, 13116);
				return;
			}
			if (a0 == 13117) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511901);
				tv0->ClearReplies();
				tv0->AddReply(511902, 13119, 13118);
				tv0->AddReply(515672, 16715, 16714);
				return;
			}
			if (a0 == 16715) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(515673);
				tv0->ClearReplies();
				tv0->AddReply(515674, 13119, 16716);
				return;
			}
			if (a0 == 13119) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511903);
				tv0->ClearReplies();
				tv0->AddReply(511904, 13121, 13120);
				return;
			}
			if (a0 == 13121) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511905);
				tv0->ClearReplies();
				tv0->AddReply(511906, -1, 13122);
				return;
			}
			if (a0 == 16703) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(515664);
				tv0->ClearReplies();
				tv0->AddReply(515665, 13087, 16704);
				return;
			}
			if (a0 == 13087) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511874);
				tv0->ClearReplies();
				tv0->AddReply(511875, 13089, 13088);
				tv0->AddReply(515666, 13089, 16706);
				return;
			}
			if (a0 == 13089) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511876);
				tv0->ClearReplies();
				tv0->AddReply(511877, 13091, 13090);
				tv0->AddReply(515667, -1, 16708);
				return;
			}
			if (a0 == 13091) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511878);
				tv0->ClearReplies();
				tv0->AddReply(511879, 13093, 13092);
				tv0->AddReply(511888, 13093, 13101);
				return;
			}
			if (a0 == 13093) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511880);
				tv0->ClearReplies();
				tv0->AddReply(515669, 16713, 16711);
				tv0->AddReply(515670, -1, 16712);
				return;
			}
			if (a0 == 16713) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(515671);
				tv0->ClearReplies();
				tv0->AddReply(511881, 13095, 13094);
				tv0->AddReply(515668, 13095, 16709);
				return;
			}
			if (a0 == 13095) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511882);
				tv0->ClearReplies();
				tv0->AddReply(511883, 13097, 13096);
				tv0->AddReply(511889, 13103, 13102);
				return;
			}
			if (a0 == 13103) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511890);
				tv0->ClearReplies();
				tv0->AddReply(511891, 13099, 13104);
				return;
			}
			if (a0 == 13097) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511884);
				tv0->ClearReplies();
				tv0->AddReply(511885, 13099, 13098);
				return;
			}
			if (a0 == 13099) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511886);
				tv0->ClearReplies();
				tv0->AddReply(511887, 13110, 13100);
				tv0->AddReply(511892, 13108, 13107);
				return;
			}
			if (a0 == 13108) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511893);
				tv0->ClearReplies();
				tv0->AddReply(511894, 13110, 13109);
				return;
			}
			if (a0 == 13110) {
				f_113f_a1_v("Neutral");
				tv0->SetMessage(511895);
				tv0->ClearReplies();
				tv0->AddReply(511896, -1, 13112);
				return;
			}
			tv3 = true;
			if (f_174d_a0_b()) {
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
		f_15f0_a1_b(f_169d_a0_o());
		if (!f_159b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1747_a0_i());
		L0->SetNPCDescription(f_1745_a0_i());
		L0->SetPhoto(f_1749_a0_s());
		L0->SetPhoto2(f_174b_a0_s());
		L0->SetPlayerName(f_1c6a_a0_i());
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
		f_15df_a1_v(a0);
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
			f_142b_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_174d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_167a_a1_v(tv2);
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

	void f_142b_a1_v(string a0)
	{
		if (!f_174d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1681_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1696_a0_v();
			if (a0 == 42557) {
				f_142b_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_174d_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t19
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_1472_a0_v();
	}

	void f_1472_a0_v(void)
	{
		if (!f_1596_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_1528_a0_v();
		}
	}

	bool f_1486_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_158d_a1_b(L0);
	}

	void f_1495_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_149a_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1574_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_14b0_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_14b9_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_14b9_a0_v();
			if (f_1596_a0_b() && f_149a_a0_b()) {
				if (f_1486_a0_b()) {
					f_162a_a1_b(f_169d_a0_o());
				}
			} else {
				f_1495_a0_v();
				f_14b0_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_156f_a0_v();
		f_14b9_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_14b9_a0_v();
		f_167a_a1_v("Neutral");
		f_14b0_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_14b0_a0_v();
		} else {
			f_167a_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_156f_a0_v();
			f_158d_a1_b(a0);
			enable OnUse;
			f_1c7b_a1_v(a0);
			f_167a_a1_v("Neutral");
			f_14b9_a0_v();
			f_14b0_a0_v();
		}
	}
}

void f_1528_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1596_a0_b()) {
		return;
	}
	L0 = f_1734_a0_i();
	for (L1 = 0; L1 < 5 && f_1596_a0_b(); L1++) {
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
			@PlayAnimation("all", f_172d_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_156d_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_156d_a0_b(void)
{
	return true;
}

void f_156f_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1574_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_157c_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1583_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_158d_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1583_a1_b(L0);
}

bool f_1596_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_159b_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_16a3_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_174d_a0_b()) {
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

void f_15df_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_174d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_15f0_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_162a_a1_b(a0)) {
			if (!f_164f_a1_b(a0)) {
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
		if (!f_164f_a1_b(a0)) {
			if (!f_162a_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_162a_a1_b(object a0)
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
	return f_1687_a1_b(L4);
}

bool f_164f_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_171e_a0_i() + "m";
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
	return f_1687_a1_b(L4);
}

void f_167a_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1681_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_1687_a1_b(string a0)
{
	if (f_174d_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1696_a0_v(void)
{
	if (f_174d_a0_b()) {
		@lshStopSpeech();
	}
}

object f_169d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_16a3_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_16ad_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_16b2_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_16bd_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_16ce_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_16da_a2_v(object a0, int a1)
{
	f_157c_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_16ce_a2_v(L0, a1);
	}
}

void f_16ed_a3_v(object a0, object a1, int a2)
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
		f_16ce_a2_v(L0, a2);
	}
}

void f_1700_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_16ed_a3_v(a0, L0, a2);
}

bool f_170d_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1719_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_171e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1727_a1_b(int a0)
{
	return f_171e_a0_i() == a0;
}

string f_172d_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1734_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_172d_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1745_a0_i(void)
{
	return 515530;
}

int f_1747_a0_i(void)
{
	return 502856;
}

string f_1749_a0_s(void)
{
	return "ui/NPC_Anna.png";
}

string f_174b_a0_s(void)
{
	return "ui/NPC_Anna_b.png";
}

bool f_174d_a0_b(void)
{
	return true;
}

void f_174f_a2_v(object a0, object a1)
{
	@SetVariable("d1q02", 3);
	f_1b80_a0_v();
}

void f_1758_a2_v(object a0, object a1)
{
	@SetVariable("KnowKapella", 1);
}

void f_175e_a2_v(object a0, object a1)
{
	@Trace("beta_pills 5 is given");
	f_1700_a3_v(a0, "beta_pills", 5);
}

void f_1769_a2_v(object a0, object a1)
{
	@Trace("money1000 is given");
	f_16da_a2_v(a0, 1000);
}

void f_1773_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1779_a2_v(object a0, object a1)
{
	@Trace("gold_ring is given");
	f_1700_a3_v(a0, "gold_ring", 1);
}

void f_1784_a2_v(object a0, object a1)
{
	f_1c49_a3_v(f_1c38_a0_o(), "pt_map_station", 2);
	a1->ShowMap(f_1c38_a0_o());
}

void f_1794_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1c38_a0_o();
	L0->AddMark("d1q01AnnaMapMarkMladVlad", "pt_map_station", 3, 508689, f_1719_a0_f());
}

void f_17a4_a2_v(object a0, object a1)
{
	@Trace("silver_ring is given");
	f_1700_a3_v(a0, "silver_ring", 1);
}

void f_17af_a2_v(object a0, object a1)
{
	@Trace("bracelet is given");
	f_1700_a3_v(a0, "bracelet", 1);
}

void f_17ba_a2_v(object a0, object a1)
{
	@Trace("beads is given");
	f_1700_a3_v(a0, "beads", 1);
}

void f_17c5_a2_v(object a0, object a1)
{
	@SetVariable("d5AnnaVisit", 1);
}

void f_17cb_a2_v(object a0, object a1)
{
	@SetVariable("KnowShabnak", 1);
}

void f_17d1_a2_v(object a0, object a1)
{
	@Trace("burah_serum is given");
	f_1700_a3_v(a0, "burah_serum", 1);
}

void f_17dc_a2_v(object a0, object a1)
{
	@SetVariable("ood9Anna1", 1);
}

void f_17e2_a2_v(object a0, object a1)
{
	@SetVariable("d9q04", 1);
	f_1be8_a0_v();
	f_1bf5_a0_v();
}

void f_17ee_a2_v(object a0, object a1)
{
	@Trace("Gun_danko is given");
	f_1700_a3_v(a0, "Gun_danko", 1);
}

void f_17f9_a2_v(object a0, object a1)
{
	@SetVariable("d9q04", 1000);
	f_1c02_a0_v();
}

void f_1802_a2_v(object a0, object a1)
{
	@SetVariable("ood5Anna2", 1);
}

void f_1808_a2_v(object a0, object a1)
{
	@SetVariable("d9AnnaVisit", 1);
}

void f_180e_a2_v(object a0, object a1)
{
	f_1bc1_a0_v();
}

void f_1813_a2_v(object a0, object a1)
{
	@SetVariable("ood2Anna1", 1);
}

void f_1819_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q01", 2);
	L0 = f_1c38_a0_o();
	L0->AddMark("d2q01AnnaGotoKapella", "pt_map_kapella", 1, 511388, f_1719_a0_f());
	f_1b8d_a0_v();
}

void f_1830_a2_v(object a0, object a1)
{
	f_1c49_a3_v(f_1c38_a0_o(), "pt_map_laska", 2);
	a1->ShowMap(f_1c38_a0_o());
}

void f_1840_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d1q02", 2);
	L0 = f_1c38_a0_o();
	L0->AddMark("d1q02AnnaGotoLaska", "pt_map_laska", 0, 508635, f_1719_a0_f());
	f_1b73_a0_v();
	f_170d_a2_b("quest_d1_02", "init_storojka");
}

void f_185c_a2_v(object a0, object a1)
{
	f_1c49_a3_v(f_1c38_a0_o(), "pt_map_kapella", 2);
	a1->ShowMap(f_1c38_a0_o());
}

void f_186c_a2_v(object a0, object a1)
{
	@SetVariable("ood4Anna1", 1);
}

void f_1872_a2_v(object a0, object a1)
{
	@SetVariable("d4q02AnnaGivesMedcine", 1);
}

void f_1878_a2_v(object a0, object a1)
{
	if (f_16ad_a1_i("d4q02AnnaGivesMedcine") == 1 && f_16ad_a1_i("d4q02JuliaGivesMedcine") == 1 && f_16ad_a1_i("d4q02LaraGivesMedcine") == 1) {
		object L0;
		@SetVariable("d4q02", 2);
		L0 = f_1c38_a0_o();
		L0->AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", 0, 511842, f_1719_a0_f());
		f_170d_a2_b("quest_d4_02", "birdmask");
		f_1c49_a3_v(f_1c38_a0_o(), "pt_d4q02_birdmask", 2);
		a1->ShowMap(f_1c38_a0_o());
	}
}

void f_18bc_a2_v(object a0, object a1)
{
	@SetVariable("ood4Anna2", 1);
}

void f_18c2_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q02", 1);
	L0 = f_1c38_a0_o();
	L0->AddMark("d5q02AnnaGotoGorbun", "pt_map_gorbun", 0, 515360, f_1719_a0_f());
	L0->AddMark("d5q02AnnaGotoGorbunSelf", "pt_map_anna", 0, 515361, f_1719_a0_f());
	f_1b9a_a0_v();
	f_1ba7_a0_v();
	f_16b2_a1_o("quest_d5_02");
	f_170d_a2_b("quest_d5_02", "place_gorbun");
}

void f_18ee_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q02", 3);
	L0 = f_1c38_a0_o();
	L0->AddMark("d5q02AnnaGotoKabak", "pt_map_andrei", 0, 515363, f_1719_a0_f());
	f_1bb4_a0_v();
}

void f_1905_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna1", 1);
}

void f_190b_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna2", 1);
}

void f_1911_a2_v(object a0, object a1)
{
	if (f_16ad_a1_i("d5q01") < 7 && f_16ad_a1_i("d5q01") != -1) {
		f_170d_a2_b("quest_d5_02", "place_girl");
	}
}

void f_192a_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna3", 1);
}

void f_1930_a2_v(object a0, object a1)
{
	@SetVariable("ood1Anna4", 1);
}

void f_1936_a2_v(object a0, object a1)
{
	@SetVariable("ood6Anna1", 1);
}

void f_193c_a2_v(object a0, object a1)
{
	@SetVariable("ood6Anna2", 1);
}

void f_1942_a2_v(object a0, object a1)
{
	if (f_16ad_a1_i("d6q01KnowKillerIsKlara") == 0) {
		object L0;
		@SetVariable("d6q01KnowKillerIsKlara", 1);
		L0 = f_1c38_a0_o();
		L0->AddMark("d6q01KillerIsKlara", "pt_map_alexandr", 1, 515396, f_1719_a0_f());
		f_1bdb_a0_v();
		f_170d_a2_b("quest_d6_01", "saburov_klara");
	}
}

void f_1965_a2_v(object a0, object a1)
{
	@SetVariable("KnowAnna", 1);
}

void f_196b_a2_v(object a0, object a1)
{
	f_1bce_a0_v();
	@Trace("anna blood is given");
	f_1700_a3_v(a0, "d6q01_anna_blood", 1);
}

void f_1979_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_197f_a2_v(object a0, object a1)
{
	@SetVariable("ood6Anna3", 1);
}

void f_1985_a2_v(object a0, object a1)
{
	@Trace("beta_pills is given");
	f_1700_a3_v(a0, "beta_pills", 1);
}

void f_1990_a2_v(object a0, object a1)
{
	@Trace("gamma_pills is given");
	f_1700_a3_v(a0, "gamma_pills", 1);
}

void f_199b_a2_v(object a0, object a1)
{
	@Trace("delta_pills is given");
	f_1700_a3_v(a0, "delta_pills", 1);
}

void f_19a6_a2_v(object a0, object a1)
{
	@SetVariable("ood5Anna1", 1);
}

void f_19ac_a2_v(object a0, object a1)
{
	f_1c49_a3_v(f_1c38_a0_o(), "pt_map_gorbun", 2);
	a1->ShowMap(f_1c38_a0_o());
}

void f_19bc_a2_v(object a0, object a1)
{
	f_16bd_a2_v("lc_House6_05@door1", false);
}

bool f_19c3_a1_b(object a0)
{
	if (f_16ad_a1_i("d1q01") == 1000) {
		return true;
	}
	return false;
}

bool f_19cf_a1_b(object a0)
{
	if (f_16ad_a1_i("d1q02") == 1000) {
		return true;
	}
	return false;
}

bool f_19db_a1_b(object a0)
{
	if (f_16ad_a1_i("d1q02") == 1) {
		return true;
	}
	return false;
}

bool f_19e7_a1_b(object a0)
{
	if (f_16ad_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_19f3_a1_b(object a0)
{
	if (f_16ad_a1_i("d1q01") == 6) {
		return true;
	}
	return false;
}

bool f_19ff_a1_b(object a0)
{
	if (f_16ad_a1_i("d9q02") == 1) {
		return true;
	}
	return false;
}

bool f_1a0b_a1_b(object a0)
{
	if (f_16ad_a1_i("d9q03") == 1000) {
		return true;
	}
	return false;
}

bool f_1a17_a1_b(object a0)
{
	if (f_16ad_a1_i("ood9Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_1a23_a1_b(object a0)
{
	if (f_16ad_a1_i("d9q04") == 0) {
		return true;
	}
	return false;
}

bool f_1a2f_a1_b(object a0)
{
	if (f_16ad_a1_i("d9q04") == 2) {
		return true;
	}
	return false;
}

bool f_1a3b_a1_b(object a0)
{
	if (f_16ad_a1_i("ood5Anna2") == 0) {
		return true;
	}
	return false;
}

bool f_1a47_a1_b(object a0)
{
	if (f_16ad_a1_i("ood2Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_1a53_a1_b(object a0)
{
	if (f_16ad_a1_i("KnowSgustok") == 1) {
		return true;
	}
	return false;
}

bool f_1a5f_a1_b(object a0)
{
	if (f_16ad_a1_i("d2q01") == 1) {
		return true;
	}
	return false;
}

bool f_1a6b_a1_b(object a0)
{
	if (f_16ad_a1_i("d1q02") == 2) {
		return true;
	}
	return false;
}

bool f_1a77_a1_b(object a0)
{
	if (f_16ad_a1_i("ood4Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_1a83_a1_b(object a0)
{
	if (f_16ad_a1_i("d4q02") == 1) {
		return true;
	}
	return false;
}

bool f_1a8f_a1_b(object a0)
{
	if (f_16ad_a1_i("d4q02AnnaGivesMedcine") == 1) {
		return true;
	}
	return false;
}

bool f_1a9b_a1_b(object a0)
{
	if (f_16ad_a1_i("d4q02") == 1000) {
		return true;
	}
	return false;
}

bool f_1aa7_a1_b(object a0)
{
	if (f_16ad_a1_i("ood4Anna2") == 0) {
		return true;
	}
	return false;
}

bool f_1ab3_a1_b(object a0)
{
	if (f_16ad_a1_i("d5q02") == 0) {
		return true;
	}
	return false;
}

bool f_1abf_a1_b(object a0)
{
	if (f_16ad_a1_i("d5q02") == 2) {
		return true;
	}
	return false;
}

bool f_1acb_a1_b(object a0)
{
	if (f_16ad_a1_i("d5q02KnowNudeIsDead") == 1) {
		return true;
	}
	return false;
}

bool f_1ad7_a1_b(object a0)
{
	if (f_16ad_a1_i("ood1Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_1ae3_a1_b(object a0)
{
	if (f_16ad_a1_i("ood1Anna2") == 0) {
		return true;
	}
	return false;
}

bool f_1aef_a1_b(object a0)
{
	if (f_16ad_a1_i("d6q01") == 0) {
		return true;
	}
	return false;
}

bool f_1afb_a1_b(object a0)
{
	if (f_16ad_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_1b07_a1_b(object a0)
{
	if (f_16ad_a1_i("ood1Anna3") == 0) {
		return true;
	}
	return false;
}

bool f_1b13_a1_b(object a0)
{
	if (f_16ad_a1_i("ood6Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_1b1f_a1_b(object a0)
{
	if (f_16ad_a1_i("ood6Anna2") == 0) {
		return true;
	}
	return false;
}

bool f_1b2b_a1_b(object a0)
{
	if (f_16ad_a1_i("ood1Anna4") == 0) {
		return true;
	}
	return false;
}

bool f_1b37_a1_b(object a0)
{
	if (f_16ad_a1_i("microscope_d6q01_anna_blood") != 0) {
		return true;
	}
	return false;
}

bool f_1b43_a1_b(object a0)
{
	if (f_16ad_a1_i("d6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1b4f_a1_b(object a0)
{
	if (f_16ad_a1_i("d6q01") == -1) {
		return true;
	}
	return false;
}

bool f_1b5b_a1_b(object a0)
{
	if (f_16ad_a1_i("ood6Anna3") == 0) {
		return true;
	}
	return false;
}

bool f_1b67_a1_b(object a0)
{
	if (f_16ad_a1_i("ood5Anna1") == 0) {
		return true;
	}
	return false;
}

void f_1b73_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 35, 2, 512117);
	f_1c1c_a2_b(L0, 7);
}

void f_1b80_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 274, 2, 521236);
	f_1c1c_a2_b(L0, 7);
}

void f_1b8d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 51, 1, 512133);
	f_1c1c_a2_b(L0, 10);
}

void f_1b9a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 148, 2, 515354);
	f_1c1c_a2_b(L0, -1);
}

void f_1ba7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 149, 2, 515355);
	f_1c1c_a2_b(L0, 148);
}

void f_1bb4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 151, 2, 515357);
	f_1c1c_a2_b(L0, 148);
}

void f_1bc1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 722, 1, 538786);
	f_1c1c_a2_b(L0, 111);
}

void f_1bce_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 159, 1, 515392);
	f_1c1c_a2_b(L0, 111);
}

void f_1bdb_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 116, 1, 513739);
	f_1c1c_a2_b(L0, 111);
}

void f_1be8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 662, 2, 533580);
	f_1c1c_a2_b(L0, -1);
}

void f_1bf5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 663, 2, 533581);
	f_1c1c_a2_b(L0, 662);
}

void f_1c02_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 665, 2, 533583);
	f_1c1c_a2_b(L0, 662);
}

object f_1c0f_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1c1c_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1c0f_a0_o();
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

object f_1c38_a0_o(void)
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

void f_1c49_a3_v(object a0, string a1, float a2)
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

int f_1c6a_a0_i(void)
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

void f_1c7b_a1_v(object a0)
{
	if (!g1) {
		t5{a0};
		g1 = true;
	}
	if (f_1727_a1_b(1)) {
		t9{a0};
		g1 = true;
		return;
	}
	if (f_1727_a1_b(2)) {
		t11{a0};
		return;
	}
	if (f_1727_a1_b(4)) {
		t13{a0};
		return;
	}
	if (f_1727_a1_b(5)) {
		t15{a0};
		return;
	}
	if (f_1727_a1_b(6)) {
		t7{a0};
		return;
	}
	if (f_1727_a1_b(9)) {
		t1{a0};
		return;
	}
	if (f_1727_a1_b(12)) {
		t3{a0};
		return;
	}
	t17{a0};
}

