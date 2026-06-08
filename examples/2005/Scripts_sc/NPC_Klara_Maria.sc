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
		} while (!f_1066_a0_b());
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
		f_10c0_a1_b(f_116d_a0_o());
		if (!f_106b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1233_a0_i());
		L0->SetNPCDescription(f_1231_a0_i());
		L0->SetPhoto(f_1235_a0_s());
		L0->SetPhoto2(f_1237_a0_s());
		L0->SetPlayerName(f_14b6_a0_i());
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
		f_10af_a1_v(a0);
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
			if (f_1336_a1_b(tv1)) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(524759);
				tv0->ClearReplies();
				tv0->AddReply(526896, 28184, 28183);
				tv0->AddReply(526903, 28184, 28191);
				break;
			}
			f_ac_a1_v("Neutral");
			tv0->SetMessage(524761);
			tv0->ClearReplies();
			tv0->AddReply(526893, -1, 28180);
			break;
			return;
		}
		if (f_1239_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_114a_a1_v(tv2);
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

	void f_ac_a1_v(string a0)
	{
		if (!f_1239_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1151_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1166_a0_v();
			if (a1 == 26084) {
				f_125c_a2_v(tv1, tv0);
			}
			if (a0 == 26083) {
				if (f_1336_a1_b(tv1)) {
					f_ac_a1_v("Neutral");
					tv0->SetMessage(524759);
					tv0->ClearReplies();
					tv0->AddReply(526896, 28184, 28183);
					tv0->AddReply(526903, 28184, 28191);
					return;
				}
				f_ac_a1_v("Neutral");
				tv0->SetMessage(524761);
				tv0->ClearReplies();
				tv0->AddReply(526893, -1, 28180);
				return;
			}
			if (a0 == 28184) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(526897);
				tv0->ClearReplies();
				tv0->AddReply(526894, 28185, 28181);
				tv0->AddReply(526904, 28194, 28193);
				return;
			}
			if (a0 == 28194) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(526905);
				tv0->ClearReplies();
				tv0->AddReply(526906, 28185, 28195);
				tv0->AddReply(526907, 28187, 28197);
				return;
			}
			if (a0 == 28185) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(526898);
				tv0->ClearReplies();
				tv0->AddReply(526899, 28187, 28186);
				tv0->AddReply(526908, 28182, 28199);
				return;
			}
			if (a0 == 28187) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(526900);
				tv0->ClearReplies();
				tv0->AddReply(526901, 28182, 28188);
				tv0->AddReply(526902, 28182, 28189);
				return;
			}
			if (a0 == 28182) {
				f_ac_a1_v("Neutral");
				tv0->SetMessage(526895);
				tv0->ClearReplies();
				tv0->AddReply(524760, -1, 26084);
				return;
			}
			tv3 = true;
			if (f_1239_a0_b()) {
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
		f_10c0_a1_b(f_116d_a0_o());
		if (!f_106b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1233_a0_i());
		L0->SetNPCDescription(f_1231_a0_i());
		L0->SetPhoto(f_1235_a0_s());
		L0->SetPhoto2(f_1237_a0_s());
		L0->SetPlayerName(f_14b6_a0_i());
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
		f_10af_a1_v(a0);
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
			f_201_a1_v("Neutral");
			tv0->SetMessage(525501);
			tv0->ClearReplies();
			tv0->AddReply(525502, 27545, 26858);
			tv0->AddReply(526269, 27545, 27544);
			break;
			return;
		}
		if (f_1239_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_114a_a1_v(tv2);
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

	void f_201_a1_v(string a0)
	{
		if (!f_1239_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1151_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1166_a0_v();
			if (a0 == 26857) {
				f_201_a1_v("Neutral");
				tv0->SetMessage(525501);
				tv0->ClearReplies();
				tv0->AddReply(525502, 27545, 26858);
				tv0->AddReply(526269, 27545, 27544);
				return;
			}
			if (a0 == 27545) {
				f_201_a1_v("Neutral");
				tv0->SetMessage(526270);
				tv0->ClearReplies();
				tv0->AddReply(526271, -1, 27546);
				tv0->AddReply(526272, -1, 27547);
				return;
			}
			tv3 = true;
			if (f_1239_a0_b()) {
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
		f_10c0_a1_b(f_116d_a0_o());
		if (!f_106b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1233_a0_i());
		L0->SetNPCDescription(f_1231_a0_i());
		L0->SetPhoto(f_1235_a0_s());
		L0->SetPhoto2(f_1237_a0_s());
		L0->SetPlayerName(f_14b6_a0_i());
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
		f_10af_a1_v(a0);
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
			f_2fb_a1_v("Neutral");
			tv0->SetMessage(525607);
			tv0->ClearReplies();
			if (f_1342_a1_b(tv1) && f_134e_a1_b(tv1)) {
				tv0->AddReply(525608, 26956, 26955);
			}
			if (f_13fc_a1_b(tv1)) {
				tv0->AddReply(540700, 42737, 42736);
			}
			tv0->AddReply(525613, -1, 26960);
			break;
			return;
		}
		if (f_1239_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_114a_a1_v(tv2);
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

	void f_2fb_a1_v(string a0)
	{
		if (!f_1239_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1151_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1166_a0_v();
			if (a1 == 26955) {
				f_1265_a2_v(tv1, tv0);
			}
			if (a1 == 26959) {
				f_1307_a2_v(tv1, tv0);
			}
			if (a1 == 42741) {
				f_1307_a2_v(tv1, tv0);
			}
			if (a1 == 42736) {
				f_12fa_a2_v(tv1, tv0);
			}
			if (a1 == 42745) {
				f_1300_a2_v(tv1, tv0);
			}
			if (a1 == 42746) {
				f_1300_a2_v(tv1, tv0);
			}
			if (a0 == 26954) {
				f_2fb_a1_v("Neutral");
				tv0->SetMessage(525607);
				tv0->ClearReplies();
				if (f_1342_a1_b(tv1) && f_134e_a1_b(tv1)) {
					tv0->AddReply(525608, 26956, 26955);
				}
				if (f_13fc_a1_b(tv1)) {
					tv0->AddReply(540700, 42737, 42736);
				}
				tv0->AddReply(525613, -1, 26960);
				return;
			}
			if (a0 == 42737) {
				f_2fb_a1_v("Neutral");
				tv0->SetMessage(540701);
				tv0->ClearReplies();
				tv0->AddReply(540702, 42740, 42738);
				tv0->AddReply(540703, -1, 42739);
				return;
			}
			if (a0 == 42740) {
				f_2fb_a1_v("Neutral");
				tv0->SetMessage(540704);
				tv0->ClearReplies();
				tv0->AddReply(540706, 42744, 42742);
				tv0->AddReply(540707, -1, 42743);
				return;
			}
			if (a0 == 42744) {
				f_2fb_a1_v("Neutral");
				tv0->SetMessage(540708);
				tv0->ClearReplies();
				tv0->AddReply(540709, -1, 42745);
				tv0->AddReply(540710, -1, 42746);
				return;
			}
			if (a0 == 26956) {
				f_2fb_a1_v("Neutral");
				tv0->SetMessage(525609);
				tv0->ClearReplies();
				tv0->AddReply(525610, 26958, 26957);
				tv0->AddReply(540705, -1, 42741);
				return;
			}
			if (a0 == 26958) {
				f_2fb_a1_v("Neutral");
				tv0->SetMessage(525611);
				tv0->ClearReplies();
				tv0->AddReply(529340, 30796, 30795);
				return;
			}
			if (a0 == 30796) {
				f_2fb_a1_v("Neutral");
				tv0->SetMessage(529341);
				tv0->ClearReplies();
				tv0->AddReply(525612, -1, 26959);
				return;
			}
			tv3 = true;
			if (f_1239_a0_b()) {
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
		f_10c0_a1_b(f_116d_a0_o());
		if (!f_106b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1233_a0_i());
		L0->SetNPCDescription(f_1231_a0_i());
		L0->SetPhoto(f_1235_a0_s());
		L0->SetPhoto2(f_1237_a0_s());
		L0->SetPlayerName(f_14b6_a0_i());
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
		f_10af_a1_v(a0);
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
			if (f_135a_a1_b(tv1) && f_1366_a1_b(tv1)) {
				f_126b_a2_v(tv1, tv0);
				f_4b5_a1_v("Neutral");
				tv0->SetMessage(525756);
				tv0->ClearReplies();
				tv0->AddReply(540712, 42749, 42748);
				tv0->AddReply(540717, -1, 42753);
				break;
			}
			f_4b5_a1_v("Neutral");
			tv0->SetMessage(525759);
			tv0->ClearReplies();
			tv0->AddReply(525760, -1, 27072);
			tv0->AddReply(540711, -1, 42747);
			break;
			return;
		}
		if (f_1239_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_114a_a1_v(tv2);
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

	void f_4b5_a1_v(string a0)
	{
		if (!f_1239_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1151_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1166_a0_v();
			if (a1 == 27069) {
				f_1300_a2_v(tv1, tv0);
			}
			if (a1 == 27070) {
				f_130e_a2_v(tv1, tv0);
			}
			if (a1 == 42750) {
				f_130e_a2_v(tv1, tv0);
			}
			if (a1 == 42753) {
				f_1307_a2_v(tv1, tv0);
			}
			if (a0 == 27068) {
				if (f_135a_a1_b(tv1) && f_1366_a1_b(tv1)) {
					f_126b_a2_v(tv1, tv0);
					f_4b5_a1_v("Neutral");
					tv0->SetMessage(525756);
					tv0->ClearReplies();
					tv0->AddReply(540712, 42749, 42748);
					tv0->AddReply(540717, -1, 42753);
					return;
				}
				f_4b5_a1_v("Neutral");
				tv0->SetMessage(525759);
				tv0->ClearReplies();
				tv0->AddReply(525760, -1, 27072);
				tv0->AddReply(540711, -1, 42747);
				return;
			}
			if (a0 == 42749) {
				f_4b5_a1_v("Neutral");
				tv0->SetMessage(540713);
				tv0->ClearReplies();
				tv0->AddReply(529233, 30688, 30687);
				tv0->AddReply(540714, -1, 42750);
				return;
			}
			if (a0 == 30688) {
				f_4b5_a1_v("Neutral");
				tv0->SetMessage(529234);
				tv0->ClearReplies();
				tv0->AddReply(540715, 42752, 42751);
				return;
			}
			if (a0 == 42752) {
				f_4b5_a1_v("Neutral");
				tv0->SetMessage(540716);
				tv0->ClearReplies();
				tv0->AddReply(525757, -1, 27069);
				tv0->AddReply(525758, -1, 27070);
				return;
			}
			tv3 = true;
			if (f_1239_a0_b()) {
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
		f_10c0_a1_b(f_116d_a0_o());
		if (!f_106b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1233_a0_i());
		L0->SetNPCDescription(f_1231_a0_i());
		L0->SetPhoto(f_1235_a0_s());
		L0->SetPhoto2(f_1237_a0_s());
		L0->SetPlayerName(f_14b6_a0_i());
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
		f_10af_a1_v(a0);
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
			f_60c_a1_v("Neutral");
			tv0->SetMessage(526192);
			tv0->ClearReplies();
			if (f_1372_a1_b(tv1)) {
				tv0->AddReply(526193, 30159, 27474);
			}
			tv0->AddReply(526196, -1, 27477);
			break;
			return;
		}
		if (f_1239_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_114a_a1_v(tv2);
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

	void f_60c_a1_v(string a0)
	{
		if (!f_1239_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1151_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1166_a0_v();
			if (a1 == 27476) {
				f_1271_a2_v(tv1, tv0);
			}
			if (a0 == 27473) {
				f_60c_a1_v("Neutral");
				tv0->SetMessage(526192);
				tv0->ClearReplies();
				if (f_1372_a1_b(tv1)) {
					tv0->AddReply(526193, 30159, 27474);
				}
				tv0->AddReply(526196, -1, 27477);
				return;
			}
			if (a0 == 30159) {
				f_60c_a1_v("Neutral");
				tv0->SetMessage(528735);
				tv0->ClearReplies();
				tv0->AddReply(528736, 30161, 30160);
				tv0->AddReply(528745, 30163, 30169);
				return;
			}
			if (a0 == 30161) {
				f_60c_a1_v("Neutral");
				tv0->SetMessage(528737);
				tv0->ClearReplies();
				tv0->AddReply(528738, 30163, 30162);
				return;
			}
			if (a0 == 30163) {
				f_60c_a1_v("Neutral");
				tv0->SetMessage(528739);
				tv0->ClearReplies();
				tv0->AddReply(528740, 30165, 30164);
				return;
			}
			if (a0 == 30165) {
				f_60c_a1_v("Neutral");
				tv0->SetMessage(528741);
				tv0->ClearReplies();
				tv0->AddReply(528742, 30167, 30166);
				return;
			}
			if (a0 == 30167) {
				f_60c_a1_v("Neutral");
				tv0->SetMessage(528743);
				tv0->ClearReplies();
				tv0->AddReply(528744, 27475, 30168);
				tv0->AddReply(528746, 27475, 30171);
				return;
			}
			if (a0 == 27475) {
				f_60c_a1_v("Neutral");
				tv0->SetMessage(526194);
				tv0->ClearReplies();
				tv0->AddReply(526195, -1, 27476);
				return;
			}
			tv3 = true;
			if (f_1239_a0_b()) {
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
		f_10c0_a1_b(f_116d_a0_o());
		if (!f_106b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1233_a0_i());
		L0->SetNPCDescription(f_1231_a0_i());
		L0->SetPhoto(f_1235_a0_s());
		L0->SetPhoto2(f_1237_a0_s());
		L0->SetPlayerName(f_14b6_a0_i());
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
		f_10af_a1_v(a0);
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
			f_79c_a1_v("Neutral");
			tv0->SetMessage(526947);
			tv0->ClearReplies();
			if (f_137e_a1_b(tv1)) {
				tv0->AddReply(526948, 28241, 28240);
			}
			if (f_1396_a1_b(tv1) && f_13a0_a1_b(tv1) && f_13e4_a1_b(tv1)) {
				tv0->AddReply(539852, 41805, 41804);
			}
			if (f_1396_a1_b(tv1) && f_13aa_a1_b(tv1) && f_13f0_a1_b(tv1)) {
				tv0->AddReply(539855, 41808, 41807);
			}
			tv0->AddReply(526951, -1, 28243);
			tv0->AddReply(528006, -1, 29366);
			break;
			return;
		}
		if (f_1239_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_114a_a1_v(tv2);
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

	void f_79c_a1_v(string a0)
	{
		if (!f_1239_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1151_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1166_a0_v();
			if (a1 == 28242) {
				f_127a_a2_v(tv1, tv0);
			}
			if (a1 == 41804) {
				f_12cd_a2_v(tv1, tv0);
			}
			if (a1 == 41807) {
				f_12d3_a2_v(tv1, tv0);
			}
			if (a1 == 41809) {
				f_12b0_a2_v(tv1, tv0);
				f_12ef_a2_v(tv1, tv0);
				f_1288_a2_v(tv1, tv0);
				f_128e_a2_v(tv1, tv0);
			}
			if (a0 == 28239) {
				f_79c_a1_v("Neutral");
				tv0->SetMessage(526947);
				tv0->ClearReplies();
				if (f_137e_a1_b(tv1)) {
					tv0->AddReply(526948, 28241, 28240);
				}
				if (f_1396_a1_b(tv1) && f_13a0_a1_b(tv1) && f_13e4_a1_b(tv1)) {
					tv0->AddReply(539852, 41805, 41804);
				}
				if (f_1396_a1_b(tv1) && f_13aa_a1_b(tv1) && f_13f0_a1_b(tv1)) {
					tv0->AddReply(539855, 41808, 41807);
				}
				tv0->AddReply(526951, -1, 28243);
				tv0->AddReply(528006, -1, 29366);
				return;
			}
			if (a0 == 41808) {
				f_79c_a1_v("Neutral");
				tv0->SetMessage(539856);
				tv0->ClearReplies();
				tv0->AddReply(539857, -1, 41809);
				return;
			}
			if (a0 == 41805) {
				f_79c_a1_v("Neutral");
				tv0->SetMessage(539853);
				tv0->ClearReplies();
				tv0->AddReply(539854, -1, 41806);
				return;
			}
			if (a0 == 28241) {
				f_79c_a1_v("Neutral");
				tv0->SetMessage(526949);
				tv0->ClearReplies();
				tv0->AddReply(528007, 29368, 29367);
				tv0->AddReply(528011, 29368, 29371);
				return;
			}
			if (a0 == 29368) {
				f_79c_a1_v("Neutral");
				tv0->SetMessage(528008);
				tv0->ClearReplies();
				tv0->AddReply(528009, 29370, 29369);
				tv0->AddReply(528012, 29370, 29373);
				return;
			}
			if (a0 == 29370) {
				f_79c_a1_v("Neutral");
				tv0->SetMessage(528010);
				tv0->ClearReplies();
				tv0->AddReply(526950, -1, 28242);
				return;
			}
			tv3 = true;
			if (f_1239_a0_b()) {
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
		f_10c0_a1_b(f_116d_a0_o());
		if (!f_106b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1233_a0_i());
		L0->SetNPCDescription(f_1231_a0_i());
		L0->SetPhoto(f_1235_a0_s());
		L0->SetPhoto2(f_1237_a0_s());
		L0->SetPlayerName(f_14b6_a0_i());
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
		f_10af_a1_v(a0);
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
			f_941_a1_v("Neutral");
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_1239_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_114a_a1_v(tv2);
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

	void f_941_a1_v(string a0)
	{
		if (!f_1239_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1151_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1166_a0_v();
			if (a0 == 36906) {
				f_941_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_941_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_941_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_1239_a0_b()) {
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
		f_10c0_a1_b(f_116d_a0_o());
		if (!f_106b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1233_a0_i());
		L0->SetNPCDescription(f_1231_a0_i());
		L0->SetPhoto(f_1235_a0_s());
		L0->SetPhoto2(f_1237_a0_s());
		L0->SetPlayerName(f_14b6_a0_i());
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
		f_10af_a1_v(a0);
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
			f_a49_a1_v("Neutral");
			tv0->SetMessage(539425);
			tv0->ClearReplies();
			if (f_138a_a1_b(tv1)) {
				tv0->AddReply(539426, 42755, 41357);
			}
			tv0->AddReply(539433, -1, 41364);
			tv0->AddReply(540718, -1, 42754);
			break;
			return;
		}
		if (f_1239_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_114a_a1_v(tv2);
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

	void f_a49_a1_v(string a0)
	{
		if (!f_1239_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1151_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1166_a0_v();
			if (a1 == 41363) {
				f_1299_a2_v(tv1, tv0);
				f_123b_a2_v(tv1, tv0);
			}
			if (a1 == 42772) {
				f_1299_a2_v(tv1, tv0);
				f_123b_a2_v(tv1, tv0);
				f_124b_a2_v(tv1, tv0);
				f_1288_a2_v(tv1, tv0);
			}
			if (a1 == 42754) {
				f_1255_a2_v(tv1, tv0);
			}
			if (a0 == 41356) {
				f_a49_a1_v("Neutral");
				tv0->SetMessage(539425);
				tv0->ClearReplies();
				if (f_138a_a1_b(tv1)) {
					tv0->AddReply(539426, 42755, 41357);
				}
				tv0->AddReply(539433, -1, 41364);
				tv0->AddReply(540718, -1, 42754);
				return;
			}
			if (a0 == 42755) {
				f_a49_a1_v("Neutral");
				tv0->SetMessage(540719);
				tv0->ClearReplies();
				tv0->AddReply(540720, 41358, 42756);
				tv0->AddReply(540723, 42760, 42759);
				return;
			}
			if (a0 == 42760) {
				f_a49_a1_v("Neutral");
				tv0->SetMessage(540724);
				tv0->ClearReplies();
				tv0->AddReply(540725, -1, 42761);
				tv0->AddReply(540726, 42763, 42762);
				return;
			}
			if (a0 == 42763) {
				f_a49_a1_v("Neutral");
				tv0->SetMessage(540727);
				tv0->ClearReplies();
				tv0->AddReply(540728, 41360, 42764);
				tv0->AddReply(540729, -1, 42765);
				return;
			}
			if (a0 == 41358) {
				f_a49_a1_v("Neutral");
				tv0->SetMessage(539427);
				tv0->ClearReplies();
				tv0->AddReply(539428, 41360, 41359);
				return;
			}
			if (a0 == 41360) {
				f_a49_a1_v("Neutral");
				tv0->SetMessage(539429);
				tv0->ClearReplies();
				tv0->AddReply(539430, 41362, 41361);
				tv0->AddReply(540730, 41362, 42767);
				return;
			}
			if (a0 == 41362) {
				f_a49_a1_v("Neutral");
				tv0->SetMessage(539431);
				tv0->ClearReplies();
				tv0->AddReply(539432, -1, 41363);
				tv0->AddReply(540731, 42771, 42768);
				return;
			}
			if (a0 == 42771) {
				f_a49_a1_v("Neutral");
				tv0->SetMessage(540734);
				tv0->ClearReplies();
				tv0->AddReply(540735, -1, 42772);
				return;
			}
			tv3 = true;
			if (f_1239_a0_b()) {
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
		f_10c0_a1_b(f_116d_a0_o());
		if (!f_106b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1233_a0_i());
		L0->SetNPCDescription(f_1231_a0_i());
		L0->SetPhoto(f_1235_a0_s());
		L0->SetPhoto2(f_1237_a0_s());
		L0->SetPlayerName(f_14b6_a0_i());
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
		f_10af_a1_v(a0);
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
			f_c14_a1_v("Neutral");
			tv0->SetMessage(539828);
			tv0->ClearReplies();
			if (f_1396_a1_b(tv1) && f_13a0_a1_b(tv1) && f_13b4_a1_b(tv1)) {
				tv0->AddReply(539829, 41782, 41781);
			}
			if (f_1396_a1_b(tv1) && f_13aa_a1_b(tv1) && f_13c0_a1_b(tv1)) {
				tv0->AddReply(539832, 41785, 41784);
			}
			tv0->AddReply(539838, -1, 41790);
			break;
			return;
		}
		if (f_1239_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_114a_a1_v(tv2);
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

	void f_c14_a1_v(string a0)
	{
		if (!f_1239_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1151_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1166_a0_v();
			if (a1 == 41781) {
				f_12b5_a2_v(tv1, tv0);
			}
			if (a1 == 41784) {
				f_12bb_a2_v(tv1, tv0);
			}
			if (a1 == 41786) {
				f_12b0_a2_v(tv1, tv0);
				f_12d9_a2_v(tv1, tv0);
				f_1315_a2_v(tv1, tv0);
			}
			if (a0 == 41780) {
				f_c14_a1_v("Neutral");
				tv0->SetMessage(539828);
				tv0->ClearReplies();
				if (f_1396_a1_b(tv1) && f_13a0_a1_b(tv1) && f_13b4_a1_b(tv1)) {
					tv0->AddReply(539829, 41782, 41781);
				}
				if (f_1396_a1_b(tv1) && f_13aa_a1_b(tv1) && f_13c0_a1_b(tv1)) {
					tv0->AddReply(539832, 41785, 41784);
				}
				tv0->AddReply(539838, -1, 41790);
				return;
			}
			if (a0 == 41785) {
				f_c14_a1_v("Neutral");
				tv0->SetMessage(539833);
				tv0->ClearReplies();
				tv0->AddReply(539834, -1, 41786);
				return;
			}
			if (a0 == 41782) {
				f_c14_a1_v("Neutral");
				tv0->SetMessage(539830);
				tv0->ClearReplies();
				tv0->AddReply(539831, -1, 41783);
				return;
			}
			tv3 = true;
			if (f_1239_a0_b()) {
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
		f_10c0_a1_b(f_116d_a0_o());
		if (!f_106b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1233_a0_i());
		L0->SetNPCDescription(f_1231_a0_i());
		L0->SetPhoto(f_1235_a0_s());
		L0->SetPhoto2(f_1237_a0_s());
		L0->SetPlayerName(f_14b6_a0_i());
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
		f_10af_a1_v(a0);
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
			f_d8b_a1_v("Neutral");
			tv0->SetMessage(539840);
			tv0->ClearReplies();
			if (f_1396_a1_b(tv1) && f_13a0_a1_b(tv1) && f_13cc_a1_b(tv1)) {
				tv0->AddReply(539841, 41794, 41793);
			}
			if (f_1396_a1_b(tv1) && f_13aa_a1_b(tv1) && f_13d8_a1_b(tv1)) {
				tv0->AddReply(539844, 41797, 41796);
			}
			tv0->AddReply(539850, -1, 41802);
			break;
			return;
		}
		if (f_1239_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_114a_a1_v(tv2);
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

	void f_d8b_a1_v(string a0)
	{
		if (!f_1239_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1151_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1166_a0_v();
			if (a1 == 41793) {
				f_12c1_a2_v(tv1, tv0);
			}
			if (a1 == 41796) {
				f_12c7_a2_v(tv1, tv0);
			}
			if (a1 == 41798) {
				f_12b0_a2_v(tv1, tv0);
				f_12e4_a2_v(tv1, tv0);
				f_1288_a2_v(tv1, tv0);
				f_1320_a2_v(tv1, tv0);
				f_132b_a2_v(tv1, tv0);
			}
			if (a0 == 41792) {
				f_d8b_a1_v("Neutral");
				tv0->SetMessage(539840);
				tv0->ClearReplies();
				if (f_1396_a1_b(tv1) && f_13a0_a1_b(tv1) && f_13cc_a1_b(tv1)) {
					tv0->AddReply(539841, 41794, 41793);
				}
				if (f_1396_a1_b(tv1) && f_13aa_a1_b(tv1) && f_13d8_a1_b(tv1)) {
					tv0->AddReply(539844, 41797, 41796);
				}
				tv0->AddReply(539850, -1, 41802);
				return;
			}
			if (a0 == 41797) {
				f_d8b_a1_v("Neutral");
				tv0->SetMessage(539845);
				tv0->ClearReplies();
				tv0->AddReply(539846, -1, 41798);
				return;
			}
			if (a0 == 41794) {
				f_d8b_a1_v("Neutral");
				tv0->SetMessage(539842);
				tv0->ClearReplies();
				tv0->AddReply(539843, -1, 41795);
				return;
			}
			tv3 = true;
			if (f_1239_a0_b()) {
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
		f_10c0_a1_b(f_116d_a0_o());
		if (!f_106b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1233_a0_i());
		L0->SetNPCDescription(f_1231_a0_i());
		L0->SetPhoto(f_1235_a0_s());
		L0->SetPhoto2(f_1237_a0_s());
		L0->SetPlayerName(f_14b6_a0_i());
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
		f_10af_a1_v(a0);
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
			f_ed9_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_1239_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_114a_a1_v(tv2);
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

	void f_ed9_a1_v(string a0)
	{
		if (!f_1239_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1151_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1166_a0_v();
			if (a0 == 42548) {
				f_ed9_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_1239_a0_b()) {
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
		f_f20_a0_v();
	}

	void f_f20_a0_v(void)
	{
		if (!f_1066_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_fd6_a0_v();
		}
	}

	bool f_f34_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_105d_a1_b(L0);
	}

	void f_f43_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_f48_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1022_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_f5e_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_f67_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_f67_a0_v();
			if (f_1066_a0_b() && f_f48_a0_b()) {
				if (f_f34_a0_b()) {
					f_10fa_a1_b(f_116d_a0_o());
				}
			} else {
				f_f43_a0_v();
				f_f5e_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_101d_a0_v();
		f_f67_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_f67_a0_v();
		f_114a_a1_v("Neutral");
		f_f5e_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_f5e_a0_v();
		} else {
			f_114a_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_101d_a0_v();
			f_105d_a1_b(a0);
			enable OnUse;
			f_14ec_a1_v(a0);
			f_114a_a1_v("Neutral");
			f_f67_a0_v();
			f_f5e_a0_v();
		}
	}
}

void f_fd6_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1066_a0_b()) {
		return;
	}
	L0 = f_1220_a0_i();
	for (L1 = 0; L1 < 5 && f_1066_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_1219_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_101b_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_101b_a0_b(void)
{
	return true;
}

void f_101d_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1022_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_102a_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_1036_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_102a_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_117d_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_104c_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1053_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_105d_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1053_a1_b(L0);
}

bool f_1066_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_106b_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1173_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_1239_a0_b()) {
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

void f_10af_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_1239_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_10c0_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_10fa_a1_b(a0)) {
			if (!f_111f_a1_b(a0)) {
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
		if (!f_111f_a1_b(a0)) {
			if (!f_10fa_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_10fa_a1_b(object a0)
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
	return f_1157_a1_b(L4);
}

bool f_111f_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_120a_a0_i() + "m";
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
	return f_1157_a1_b(L4);
}

void f_114a_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1151_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_1157_a1_b(string a0)
{
	if (f_1239_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1166_a0_v(void)
{
	if (f_1239_a0_b()) {
		@lshStopSpeech();
	}
}

object f_116d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1173_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_117d_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_1188_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_118d_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1199_a2_v(object a0, int a1)
{
	f_104c_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_118d_a2_v(L0, a1);
	}
}

void f_11ac_a3_v(object a0, object a1, int a2)
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
		f_118d_a2_v(L0, a2);
	}
}

void f_11bf_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_11ac_a3_v(a0, L0, a2);
}

bool f_11cc_a2_b(object a0, float a1)
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
	f_11ef_a1_v(a1);
	f_1036_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_11ef_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_11f9_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1205_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_120a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1213_a1_b(int a0)
{
	return f_120a_a0_i() == a0;
}

string f_1219_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1220_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_1219_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1231_a0_i(void)
{
	return 515543;
}

int f_1233_a0_i(void)
{
	return 502868;
}

string f_1235_a0_s(void)
{
	return "ui/NPC_Maria.png";
}

string f_1237_a0_s(void)
{
	return "ui/NPC_Maria_b.png";
}

bool f_1239_a0_b(void)
{
	return true;
}

void f_123b_a2_v(object a0, object a1)
{
	f_1495_a3_v(f_1484_a0_o(), "pt_map_eva", 2);
	a1->ShowMap(f_1484_a0_o());
}

void f_124b_a2_v(object a0, object a1)
{
	@Trace("money 4000 is given");
	f_1199_a2_v(a0, 4000);
}

void f_1255_a2_v(object a0, object a1)
{
	f_11cc_a2_b(a0, -0.05000000074505806);
}

void f_125c_a2_v(object a0, object a1)
{
	@SetVariable("k1q02", 4);
	f_1427_a0_v();
}

void f_1265_a2_v(object a0, object a1)
{
	@SetVariable("ook3Maria1", 1);
}

void f_126b_a2_v(object a0, object a1)
{
	@SetVariable("ook4Maria1", 1);
}

void f_1271_a2_v(object a0, object a1)
{
	@SetVariable("k7q01", 7);
	f_144e_a0_v();
}

void f_127a_a2_v(object a0, object a1)
{
	@SetVariable("k10q01", 2);
	f_141a_a0_v();
	f_11f9_a2_b("quest_k10_01", "place_soldiers");
}

void f_1288_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_128e_a2_v(object a0, object a1)
{
	@Trace("feromicin2 is given");
	f_11bf_a3_v(a0, "feromicin", 2);
}

void f_1299_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k5q04", 2);
	L0 = f_1484_a0_o();
	L0->AddMark("k5q04MariaGotoDanko", "pt_map_eva", 0, 515279, f_1205_a0_f());
	f_1441_a0_v();
}

void f_12b0_a2_v(object a0, object a1)
{
	f_1434_a0_v();
}

void f_12b5_a2_v(object a0, object a1)
{
	@SetVariable("ook8Maria1", 1);
}

void f_12bb_a2_v(object a0, object a1)
{
	@SetVariable("ook8Maria2", 1);
}

void f_12c1_a2_v(object a0, object a1)
{
	@SetVariable("ook8Maria1", 1);
}

void f_12c7_a2_v(object a0, object a1)
{
	@SetVariable("ook8Maria2", 1);
}

void f_12cd_a2_v(object a0, object a1)
{
	@SetVariable("ook10Maria1", 1);
}

void f_12d3_a2_v(object a0, object a1)
{
	@SetVariable("ook10Maria2", 1);
}

void f_12d9_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_1199_a2_v(a0, L0 + 2000);
}

void f_12e4_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_1199_a2_v(a0, L0 + 3000);
}

void f_12ef_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 1000);
	f_1199_a2_v(a0, L0 + 4000);
}

void f_12fa_a2_v(object a0, object a1)
{
	@SetVariable("ook3Maria2", 1);
}

void f_1300_a2_v(object a0, object a1)
{
	f_11cc_a2_b(a0, 0.10000000149011612);
}

void f_1307_a2_v(object a0, object a1)
{
	f_11cc_a2_b(a0, -0.10000000149011612);
}

void f_130e_a2_v(object a0, object a1)
{
	f_11cc_a2_b(a0, -0.30000001192092896);
}

void f_1315_a2_v(object a0, object a1)
{
	@Trace("feromicin is given");
	f_11bf_a3_v(a0, "feromicin", 1);
}

void f_1320_a2_v(object a0, object a1)
{
	@Trace("morfin is given");
	f_11bf_a3_v(a0, "morfin", 1);
}

void f_132b_a2_v(object a0, object a1)
{
	@Trace("neomicin is given");
	f_11bf_a3_v(a0, "neomicin", 1);
}

bool f_1336_a1_b(object a0)
{
	if (f_1188_a1_i("k1q02") == 3) {
		return true;
	}
	return false;
}

bool f_1342_a1_b(object a0)
{
	if (f_1188_a1_i("k3q03") == 1000) {
		return true;
	}
	return false;
}

bool f_134e_a1_b(object a0)
{
	if (f_1188_a1_i("ook3Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_135a_a1_b(object a0)
{
	if (f_1188_a1_i("k4q02") == 1) {
		return true;
	}
	return false;
}

bool f_1366_a1_b(object a0)
{
	if (f_1188_a1_i("ook4Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_1372_a1_b(object a0)
{
	if (f_1188_a1_i("k7q01") == 6) {
		return true;
	}
	return false;
}

bool f_137e_a1_b(object a0)
{
	if (f_1188_a1_i("k10q01") == 1) {
		return true;
	}
	return false;
}

bool f_138a_a1_b(object a0)
{
	if (f_1188_a1_i("k5q04") == 1) {
		return true;
	}
	return false;
}

bool f_1396_a1_b(object a0)
{
	if (f_1408_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_13a0_a1_b(object a0)
{
	if (f_140e_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_13aa_a1_b(object a0)
{
	if (f_1414_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_13b4_a1_b(object a0)
{
	if (f_1188_a1_i("ook8Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_13c0_a1_b(object a0)
{
	if (f_1188_a1_i("ook8Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_13cc_a1_b(object a0)
{
	if (f_1188_a1_i("ook8Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_13d8_a1_b(object a0)
{
	if (f_1188_a1_i("ook8Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_13e4_a1_b(object a0)
{
	if (f_1188_a1_i("ook10Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_13f0_a1_b(object a0)
{
	if (f_1188_a1_i("ook10Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_13fc_a1_b(object a0)
{
	if (f_1188_a1_i("ook3Maria2") == 0) {
		return true;
	}
	return false;
}

bool f_1408_a1_b(object a0)
{
	return f_14d8_a0_b();
}

bool f_140e_a1_b(object a0)
{
	return f_14e6_a0_b();
}

bool f_1414_a1_b(object a0)
{
	return f_14e0_a0_b();
}

void f_141a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 449, 1, 527007);
	f_1468_a2_b(L0, 447);
}

void f_1427_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 330, 2, 524775);
	f_1468_a2_b(L0, 326);
}

void f_1434_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 762, 2, 539747);
	f_1468_a2_b(L0, 757);
}

void f_1441_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 742, 2, 539459);
	f_1468_a2_b(L0, 740);
}

void f_144e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 425, 1, 526224);
	f_1468_a2_b(L0, 416);
}

object f_145b_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1468_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_145b_a0_o();
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

object f_1484_a0_o(void)
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

void f_1495_a3_v(object a0, string a1, float a2)
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

int f_14b6_a0_i(void)
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

int f_14c7_a0_i(void)
{
	int L0;
	@GetVariable("k2system_danko_day", L0);
	return L0;
}

int f_14cd_a0_i(void)
{
	int L0;
	int L1;
	L0 = f_14c7_a0_i();
	@GetVariable("k2system_danko_state" + L0, L1);
	return L1;
}

bool f_14d8_a0_b(void)
{
	return f_120a_a0_i() == f_14c7_a0_i();
}

bool f_14e0_a0_b(void)
{
	return f_14cd_a0_i() == 2;
}

bool f_14e6_a0_b(void)
{
	return f_14cd_a0_i() == 0;
}

void f_14ec_a1_v(object a0)
{
	if (!g1) {
		t3{a0};
		g1 = true;
	}
	if (f_1213_a1_b(1)) {
		t1{a0};
		return;
	}
	if (f_1213_a1_b(3)) {
		t5{a0};
		return;
	}
	if (f_1213_a1_b(4)) {
		t7{a0};
		return;
	}
	if (f_1213_a1_b(5)) {
		t15{a0};
		return;
	}
	if (f_1213_a1_b(7)) {
		t9{a0};
		return;
	}
	if (f_1213_a1_b(8)) {
		t17{a0};
		return;
	}
	if (f_1213_a1_b(9)) {
		t19{a0};
		return;
	}
	if (f_1213_a1_b(10)) {
		t11{a0};
		return;
	}
	if (f_1213_a1_b(12)) {
		t13{a0};
		return;
	}
	t21{a0};
}

