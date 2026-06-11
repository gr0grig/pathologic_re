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
		} while (!f_126e_a0_b());
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
		f_12c8_a1_b(f_1375_a0_o());
		if (!f_1273_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetNPCDescription(f_13ee_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPhoto2(f_13f4_a0_s());
		L0->SetPlayerName(f_16ee_a0_i());
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
		f_12b7_a1_v(a0);
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
			if (f_1501_a1_b(tv1) && f_1519_a1_b(tv1)) {
				f_1408_a2_v(tv1, tv0);
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532352);
				tv0->ClearReplies();
				tv0->AddReply(532353, 33783, 33782);
				tv0->AddReply(532386, 33825, 33824);
				break;
			}
			f_cd_a1_v("Neutral");
			tv0->SetMessage(532393);
			tv0->ClearReplies();
			if (f_150d_a1_b(tv1) && f_1609_a1_b(tv1)) {
				tv0->AddReply(532394, 33836, 33835);
			}
			tv0->AddReply(532453, -1, 33895);
			break;
			return;
		}
		if (f_13f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1352_a1_v(tv2);
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

	void f_cd_a1_v(string a0)
	{
		if (!f_13f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1359_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_136e_a0_v();
			if (a1 == 33796) {
				f_13f8_a2_v(tv1, tv0);
			}
			if (a1 == 33811) {
				f_140e_a2_v(tv1, tv0);
			}
			if (a1 == 33835) {
				f_1402_a2_v(tv1, tv0);
			}
			if (a0 == 33781) {
				if (f_1501_a1_b(tv1) && f_1519_a1_b(tv1)) {
					f_1408_a2_v(tv1, tv0);
					f_cd_a1_v("Neutral");
					tv0->SetMessage(532352);
					tv0->ClearReplies();
					tv0->AddReply(532353, 33783, 33782);
					tv0->AddReply(532386, 33825, 33824);
					return;
				}
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532393);
				tv0->ClearReplies();
				if (f_150d_a1_b(tv1) && f_1609_a1_b(tv1)) {
					tv0->AddReply(532394, 33836, 33835);
				}
				tv0->AddReply(532453, -1, 33895);
				return;
			}
			if (a0 == 33836) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532395);
				tv0->ClearReplies();
				tv0->AddReply(532396, 33838, 33837);
				tv0->AddReply(532404, 33847, 33846);
				tv0->AddReply(532408, -1, 33850);
				return;
			}
			if (a0 == 33847) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532405);
				tv0->ClearReplies();
				tv0->AddReply(532406, -1, 33848);
				tv0->AddReply(532407, -1, 33849);
				return;
			}
			if (a0 == 33838) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532397);
				tv0->ClearReplies();
				tv0->AddReply(532398, 33840, 33839);
				tv0->AddReply(532402, -1, 33843);
				tv0->AddReply(532403, 33840, 33844);
				return;
			}
			if (a0 == 33840) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532399);
				tv0->ClearReplies();
				tv0->AddReply(532400, -1, 33841);
				tv0->AddReply(532401, -1, 33842);
				return;
			}
			if (a0 == 33825) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532387);
				tv0->ClearReplies();
				tv0->AddReply(532388, 33827, 33826);
				tv0->AddReply(532392, 33819, 33832);
				return;
			}
			if (a0 == 33827) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532389);
				tv0->ClearReplies();
				tv0->AddReply(532390, 33819, 33828);
				tv0->AddReply(532391, 33819, 33830);
				return;
			}
			if (a0 == 33783) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532354);
				tv0->ClearReplies();
				tv0->AddReply(532355, 33785, 33784);
				tv0->AddReply(532385, 33785, 33822);
				return;
			}
			if (a0 == 33785) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532356);
				tv0->ClearReplies();
				tv0->AddReply(532357, 33787, 33786);
				tv0->AddReply(532382, 33819, 33818);
				return;
			}
			if (a0 == 33819) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532383);
				tv0->ClearReplies();
				tv0->AddReply(532384, 33787, 33820);
				return;
			}
			if (a0 == 33787) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532358);
				tv0->ClearReplies();
				tv0->AddReply(532359, 33789, 33788);
				tv0->AddReply(532373, 33808, 33807);
				tv0->AddReply(532379, 33815, 33814);
				return;
			}
			if (a0 == 33815) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532380);
				tv0->ClearReplies();
				tv0->AddReply(532381, 33808, 33816);
				return;
			}
			if (a0 == 33808) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532374);
				tv0->ClearReplies();
				tv0->AddReply(532375, 33810, 33809);
				tv0->AddReply(532378, 33789, 33812);
				return;
			}
			if (a0 == 33810) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532376);
				tv0->ClearReplies();
				tv0->AddReply(532377, -1, 33811);
				return;
			}
			if (a0 == 33789) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532360);
				tv0->ClearReplies();
				tv0->AddReply(532361, 33795, 33790);
				tv0->AddReply(532362, 33793, 33792);
				tv0->AddReply(532372, 33810, 33805);
				return;
			}
			if (a0 == 33793) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532363);
				tv0->ClearReplies();
				tv0->AddReply(532364, 33795, 33794);
				tv0->AddReply(532368, 33800, 33799);
				return;
			}
			if (a0 == 33800) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532369);
				tv0->ClearReplies();
				tv0->AddReply(532370, 33795, 33801);
				tv0->AddReply(532371, 33810, 33803);
				return;
			}
			if (a0 == 33795) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(532365);
				tv0->ClearReplies();
				tv0->AddReply(532366, -1, 33796);
				tv0->AddReply(532367, 33810, 33797);
				return;
			}
			tv3 = true;
			if (f_13f6_a0_b()) {
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
		f_12c8_a1_b(f_1375_a0_o());
		if (!f_1273_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetNPCDescription(f_13ee_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPhoto2(f_13f4_a0_s());
		L0->SetPlayerName(f_16ee_a0_i());
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
		f_12b7_a1_v(a0);
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
			f_376_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_13f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1352_a1_v(tv2);
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

	void f_376_a1_v(string a0)
	{
		if (!f_13f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1359_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_136e_a0_v();
			if (a0 == 36971) {
				f_376_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_376_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_376_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_13f6_a0_b()) {
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
		f_12c8_a1_b(f_1375_a0_o());
		if (!f_1273_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetNPCDescription(f_13ee_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPhoto2(f_13f4_a0_s());
		L0->SetPlayerName(f_16ee_a0_i());
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
		f_12b7_a1_v(a0);
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
			f_4a9_a1_v("Neutral");
			tv0->SetMessage(512729);
			tv0->ClearReplies();
			if (f_15a9_a1_b(tv1) && f_159d_a1_b(tv1)) {
				tv0->AddReply(512731, 3851, 13924);
			}
			if (f_15b5_a1_b(tv1) && f_15e5_a1_b(tv1) && !f_15f1_a1_b(tv1) && !f_15fd_a1_b(tv1)) {
				tv0->AddReply(512730, 11927, 13923);
			}
			tv0->AddReply(512732, -1, 13926);
			break;
			return;
		}
		if (f_13f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1352_a1_v(tv2);
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

	void f_4a9_a1_v(string a0)
	{
		if (!f_13f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1359_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_136e_a0_v();
			if (a1 == 3869) {
				f_14b0_a2_v(tv1, tv0);
			}
			if (a1 == 3872) {
				f_14b0_a2_v(tv1, tv0);
				f_14ed_a2_v(tv1, tv0);
				f_14df_a2_v(tv1, tv0);
			}
			if (a1 == 3870) {
				f_14b0_a2_v(tv1, tv0);
				f_14df_a2_v(tv1, tv0);
				f_14ed_a2_v(tv1, tv0);
			}
			if (a1 == 3860) {
				f_14b0_a2_v(tv1, tv0);
				f_14ed_a2_v(tv1, tv0);
				f_14df_a2_v(tv1, tv0);
			}
			if (a1 == 3856) {
				f_14b0_a2_v(tv1, tv0);
			}
			if (a1 == 3857) {
				f_14b0_a2_v(tv1, tv0);
				f_14df_a2_v(tv1, tv0);
				f_14ed_a2_v(tv1, tv0);
			}
			if (a1 == 13923) {
				f_14b6_a2_v(tv1, tv0);
			}
			if (a1 == 11939) {
				f_14f3_a2_v(tv1, tv0);
			}
			if (a1 == 11940) {
				f_1418_a2_v(tv1, tv0);
			}
			if (a0 == 13922) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(512729);
				tv0->ClearReplies();
				if (f_15a9_a1_b(tv1) && f_159d_a1_b(tv1)) {
					tv0->AddReply(512731, 3851, 13924);
				}
				if (f_15b5_a1_b(tv1) && f_15e5_a1_b(tv1) && !f_15f1_a1_b(tv1) && !f_15fd_a1_b(tv1)) {
					tv0->AddReply(512730, 11927, 13923);
				}
				tv0->AddReply(512732, -1, 13926);
				return;
			}
			if (a0 == 11927) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(510791);
				tv0->ClearReplies();
				tv0->AddReply(510792, 11929, 11928);
				tv0->AddReply(510810, 11929, 11950);
				return;
			}
			if (a0 == 11929) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(510793);
				tv0->ClearReplies();
				tv0->AddReply(510794, 11931, 11930);
				tv0->AddReply(510808, 11931, 11946);
				return;
			}
			if (a0 == 11931) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(510795);
				tv0->ClearReplies();
				tv0->AddReply(510796, 11933, 11932);
				tv0->AddReply(510807, 11933, 11945);
				return;
			}
			if (a0 == 11933) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(510797);
				tv0->ClearReplies();
				tv0->AddReply(510798, 11935, 11934);
				tv0->AddReply(510806, 11937, 11943);
				return;
			}
			if (a0 == 11935) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(510799);
				tv0->ClearReplies();
				tv0->AddReply(510800, 11937, 11936);
				tv0->AddReply(510805, 11937, 11941);
				return;
			}
			if (a0 == 11937) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(510801);
				tv0->ClearReplies();
				tv0->AddReply(510803, -1, 11939);
				tv0->AddReply(510804, -1, 11940);
				return;
			}
			if (a0 == 3851) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(503562);
				tv0->ClearReplies();
				tv0->AddReply(503563, 3858, 3852);
				tv0->AddReply(503564, 3858, 3853);
				tv0->AddReply(503565, 3855, 3854);
				return;
			}
			if (a0 == 3855) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(503566);
				tv0->ClearReplies();
				tv0->AddReply(503567, -1, 3856);
				tv0->AddReply(503568, -1, 3857);
				return;
			}
			if (a0 == 3858) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(503569);
				tv0->ClearReplies();
				tv0->AddReply(503571, 3862, 3861);
				tv0->AddReply(503582, 3874, 3873);
				tv0->AddReply(503570, -1, 3860);
				return;
			}
			if (a0 == 3874) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(503583);
				tv0->ClearReplies();
				tv0->AddReply(503584, 3867, 3875);
				return;
			}
			if (a0 == 3862) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(503572);
				tv0->ClearReplies();
				tv0->AddReply(503573, 3864, 3863);
				tv0->AddReply(503576, 3867, 3866);
				return;
			}
			if (a0 == 3864) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(503574);
				tv0->ClearReplies();
				tv0->AddReply(503575, 3867, 3865);
				tv0->AddReply(503579, -1, 3870);
				return;
			}
			if (a0 == 3867) {
				f_4a9_a1_v("Neutral");
				tv0->SetMessage(503577);
				tv0->ClearReplies();
				tv0->AddReply(503578, -1, 3869);
				tv0->AddReply(503581, -1, 3872);
				return;
			}
			tv3 = true;
			if (f_13f6_a0_b()) {
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
		f_12c8_a1_b(f_1375_a0_o());
		if (!f_1273_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetNPCDescription(f_13ee_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPhoto2(f_13f4_a0_s());
		L0->SetPlayerName(f_16ee_a0_i());
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
		f_12b7_a1_v(a0);
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
			f_796_a1_v("Neutral");
			tv0->SetMessage(508869);
			tv0->ClearReplies();
			if (f_1531_a1_b(tv1) && f_1555_a1_b(tv1)) {
				tv0->AddReply(508889, 9751, 9750);
			}
			if (f_1549_a1_b(tv1) && !f_1531_a1_b(tv1) && f_1555_a1_b(tv1)) {
				tv0->AddReply(511136, 12326, 12325);
			}
			if (f_1525_a1_b(tv1)) {
				tv0->AddReply(508888, 9729, 9749);
			}
			if (f_153d_a1_b(tv1) && f_1561_a1_b(tv1)) {
				tv0->AddReply(508908, 9772, 9771);
			}
			tv0->AddReply(511134, -1, 12323);
			tv0->AddReply(536099, -1, 37851);
			break;
			return;
		}
		if (f_13f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1352_a1_v(tv2);
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

	void f_796_a1_v(string a0)
	{
		if (!f_13f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1359_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_136e_a0_v();
			if (a1 == 9768) {
				f_142f_a2_v(tv1, tv0);
				f_1423_a2_v(tv1, tv0);
				f_145a_a2_v(tv1, tv0);
			}
			if (a1 == 9769) {
				f_1423_a2_v(tv1, tv0);
			}
			if (a1 == 9760) {
				f_1423_a2_v(tv1, tv0);
			}
			if (a1 == 9762) {
				f_1423_a2_v(tv1, tv0);
			}
			if (a1 == 12327) {
				f_142f_a2_v(tv1, tv0);
				f_1446_a2_v(tv1, tv0);
				f_145a_a2_v(tv1, tv0);
			}
			if (a1 == 9736) {
				f_141d_a2_v(tv1, tv0);
			}
			if (a1 == 9737) {
				f_141d_a2_v(tv1, tv0);
			}
			if (a1 == 9738) {
				f_141d_a2_v(tv1, tv0);
			}
			if (a1 == 9745) {
				f_141d_a2_v(tv1, tv0);
			}
			if (a1 == 9746) {
				f_141d_a2_v(tv1, tv0);
			}
			if (a1 == 9788) {
				f_1429_a2_v(tv1, tv0);
				f_144c_a2_v(tv1, tv0);
			}
			if (a1 == 9789) {
				f_1429_a2_v(tv1, tv0);
				f_144c_a2_v(tv1, tv0);
			}
			if (a0 == 9728) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508869);
				tv0->ClearReplies();
				if (f_1531_a1_b(tv1) && f_1555_a1_b(tv1)) {
					tv0->AddReply(508889, 9751, 9750);
				}
				if (f_1549_a1_b(tv1) && !f_1531_a1_b(tv1) && f_1555_a1_b(tv1)) {
					tv0->AddReply(511136, 12326, 12325);
				}
				if (f_1525_a1_b(tv1)) {
					tv0->AddReply(508888, 9729, 9749);
				}
				if (f_153d_a1_b(tv1) && f_1561_a1_b(tv1)) {
					tv0->AddReply(508908, 9772, 9771);
				}
				tv0->AddReply(511134, -1, 12323);
				tv0->AddReply(536099, -1, 37851);
				return;
			}
			if (a0 == 9772) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508909);
				tv0->ClearReplies();
				tv0->AddReply(508913, 9778, 9777);
				tv0->AddReply(508910, 9778, 9773);
				return;
			}
			if (a0 == 9778) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508914);
				tv0->ClearReplies();
				tv0->AddReply(508916, 9781, 9780);
				tv0->AddReply(508918, 9783, 9782);
				return;
			}
			if (a0 == 9783) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508919);
				tv0->ClearReplies();
				tv0->AddReply(508920, 9786, 9784);
				return;
			}
			if (a0 == 9781) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508917);
				tv0->ClearReplies();
				tv0->AddReply(508921, 9786, 9785);
				return;
			}
			if (a0 == 9786) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508922);
				tv0->ClearReplies();
				tv0->AddReply(508923, -1, 9788);
				tv0->AddReply(508924, -1, 9789);
				return;
			}
			if (a0 == 9729) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508870);
				tv0->ClearReplies();
				tv0->AddReply(508871, 9731, 9730);
				tv0->AddReply(508887, 9731, 9747);
				return;
			}
			if (a0 == 9731) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508872);
				tv0->ClearReplies();
				tv0->AddReply(508873, 9733, 9732);
				tv0->AddReply(508880, 9740, 9739);
				return;
			}
			if (a0 == 9740) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508881);
				tv0->ClearReplies();
				tv0->AddReply(508882, 9733, 9741);
				tv0->AddReply(508883, 9744, 9743);
				return;
			}
			if (a0 == 9744) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508884);
				tv0->ClearReplies();
				tv0->AddReply(508885, -1, 9745);
				tv0->AddReply(508886, -1, 9746);
				return;
			}
			if (a0 == 9733) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508874);
				tv0->ClearReplies();
				tv0->AddReply(508875, 9735, 9734);
				tv0->AddReply(508879, -1, 9738);
				return;
			}
			if (a0 == 9735) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508876);
				tv0->ClearReplies();
				tv0->AddReply(508877, -1, 9736);
				tv0->AddReply(508878, -1, 9737);
				return;
			}
			if (a0 == 12326) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(511137);
				tv0->ClearReplies();
				tv0->AddReply(536097, 37850, 37849);
				return;
			}
			if (a0 == 37850) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(536098);
				tv0->ClearReplies();
				tv0->AddReply(511138, -1, 12327);
				return;
			}
			if (a0 == 9751) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508890);
				tv0->ClearReplies();
				tv0->AddReply(508891, 9753, 9752);
				tv0->AddReply(508893, 9759, 9754);
				return;
			}
			if (a0 == 9759) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508898);
				tv0->ClearReplies();
				tv0->AddReply(508899, -1, 9760);
				tv0->AddReply(508900, -1, 9762);
				return;
			}
			if (a0 == 9753) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508892);
				tv0->ClearReplies();
				tv0->AddReply(508894, 9756, 9755);
				return;
			}
			if (a0 == 9756) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508895);
				tv0->ClearReplies();
				tv0->AddReply(508896, 9763, 9757);
				tv0->AddReply(508897, 9759, 9758);
				return;
			}
			if (a0 == 9763) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508901);
				tv0->ClearReplies();
				tv0->AddReply(508902, 9766, 9764);
				tv0->AddReply(508903, 9766, 9765);
				return;
			}
			if (a0 == 9766) {
				f_796_a1_v("Neutral");
				tv0->SetMessage(508904);
				tv0->ClearReplies();
				tv0->AddReply(508905, -1, 9768);
				tv0->AddReply(508906, -1, 9769);
				return;
			}
			tv3 = true;
			if (f_13f6_a0_b()) {
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
		f_12c8_a1_b(f_1375_a0_o());
		if (!f_1273_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetNPCDescription(f_13ee_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPhoto2(f_13f4_a0_s());
		L0->SetPlayerName(f_16ee_a0_i());
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
		f_12b7_a1_v(a0);
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
			f_aee_a1_v("Neutral");
			tv0->SetMessage(511065);
			tv0->ClearReplies();
			if (f_1579_a1_b(tv1) && f_156d_a1_b(tv1)) {
				tv0->AddReply(511066, 12248, 12247);
			}
			if (f_1591_a1_b(tv1) && f_1585_a1_b(tv1)) {
				tv0->AddReply(511079, 12268, 12263);
			}
			tv0->AddReply(511505, -1, 12707);
			tv0->AddReply(536130, -1, 37889);
			break;
			return;
		}
		if (f_13f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1352_a1_v(tv2);
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

	void f_aee_a1_v(string a0)
	{
		if (!f_13f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1359_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_136e_a0_v();
			if (a1 == 12266) {
				f_149e_a2_v(tv1, tv0);
				f_148a_a2_v(tv1, tv0);
				f_147a_a2_v(tv1, tv0);
			}
			if (a1 == 12267) {
				f_149e_a2_v(tv1, tv0);
				f_148a_a2_v(tv1, tv0);
				f_147a_a2_v(tv1, tv0);
			}
			if (a1 == 12281) {
				f_14aa_a2_v(tv1, tv0);
				f_14a4_a2_v(tv1, tv0);
			}
			if (a0 == 12246) {
				f_aee_a1_v("Neutral");
				tv0->SetMessage(511065);
				tv0->ClearReplies();
				if (f_1579_a1_b(tv1) && f_156d_a1_b(tv1)) {
					tv0->AddReply(511066, 12248, 12247);
				}
				if (f_1591_a1_b(tv1) && f_1585_a1_b(tv1)) {
					tv0->AddReply(511079, 12268, 12263);
				}
				tv0->AddReply(511505, -1, 12707);
				tv0->AddReply(536130, -1, 37889);
				return;
			}
			if (a0 == 12268) {
				f_aee_a1_v("Neutral");
				tv0->SetMessage(511083);
				tv0->ClearReplies();
				tv0->AddReply(511084, 12271, 12269);
				tv0->AddReply(511085, 12272, 12270);
				return;
			}
			if (a0 == 12272) {
				f_aee_a1_v("Neutral");
				tv0->SetMessage(511087);
				tv0->ClearReplies();
				tv0->AddReply(511088, 12275, 12273);
				return;
			}
			if (a0 == 12271) {
				f_aee_a1_v("Neutral");
				tv0->SetMessage(511086);
				tv0->ClearReplies();
				tv0->AddReply(511089, 12275, 12274);
				return;
			}
			if (a0 == 12275) {
				f_aee_a1_v("Neutral");
				tv0->SetMessage(511090);
				tv0->ClearReplies();
				tv0->AddReply(511091, 12279, 12276);
				tv0->AddReply(511092, 12279, 12277);
				return;
			}
			if (a0 == 12279) {
				f_aee_a1_v("Neutral");
				tv0->SetMessage(511093);
				tv0->ClearReplies();
				tv0->AddReply(511094, -1, 12281);
				return;
			}
			if (a0 == 12248) {
				f_aee_a1_v("Neutral");
				tv0->SetMessage(511067);
				tv0->ClearReplies();
				tv0->AddReply(511068, 12250, 12249);
				tv0->AddReply(511073, 12255, 12254);
				return;
			}
			if (a0 == 12250) {
				f_aee_a1_v("Neutral");
				tv0->SetMessage(511069);
				tv0->ClearReplies();
				tv0->AddReply(511070, 12257, 12251);
				tv0->AddReply(511071, 12257, 12252);
				tv0->AddReply(511072, 12255, 12253);
				return;
			}
			if (a0 == 12255) {
				f_aee_a1_v("Neutral");
				tv0->SetMessage(511074);
				tv0->ClearReplies();
				tv0->AddReply(511075, 12257, 12256);
				return;
			}
			if (a0 == 12257) {
				f_aee_a1_v("Neutral");
				tv0->SetMessage(511076);
				tv0->ClearReplies();
				tv0->AddReply(511077, 40703, 12261);
				tv0->AddReply(511078, 12264, 12262);
				return;
			}
			if (a0 == 40703) {
				f_aee_a1_v("Neutral");
				tv0->SetMessage(538787);
				tv0->ClearReplies();
				tv0->AddReply(538788, 12264, 40704);
				tv0->AddReply(538789, 12264, 40705);
				return;
			}
			if (a0 == 12264) {
				f_aee_a1_v("Neutral");
				tv0->SetMessage(511080);
				tv0->ClearReplies();
				tv0->AddReply(511081, -1, 12266);
				tv0->AddReply(511082, -1, 12267);
				return;
			}
			tv3 = true;
			if (f_13f6_a0_b()) {
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
		f_12c8_a1_b(f_1375_a0_o());
		if (!f_1273_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetNPCDescription(f_13ee_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPhoto2(f_13f4_a0_s());
		L0->SetPlayerName(f_16ee_a0_i());
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
		f_12b7_a1_v(a0);
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
			f_d17_a1_v("Neutral");
			tv0->SetMessage(512374);
			tv0->ClearReplies();
			if (!f_15c1_a1_b(tv1) && f_15d9_a1_b(tv1)) {
				tv0->AddReply(513641, 14898, 14897);
			}
			if (f_15cd_a1_b(tv1)) {
				tv0->AddReply(512375, 13536, 13535);
			}
			tv0->AddReply(513658, -1, 14916);
			break;
			return;
		}
		if (f_13f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1352_a1_v(tv2);
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

	void f_d17_a1_v(string a0)
	{
		if (!f_13f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1359_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_136e_a0_v();
			if (a1 == 14897) {
				f_14d9_a2_v(tv1, tv0);
			}
			if (a1 == 14911) {
				f_14bc_a2_v(tv1, tv0);
				f_146a_a2_v(tv1, tv0);
			}
			if (a1 == 40378) {
				f_14bc_a2_v(tv1, tv0);
				f_146a_a2_v(tv1, tv0);
			}
			if (a1 == 40377) {
				f_14bc_a2_v(tv1, tv0);
				f_146a_a2_v(tv1, tv0);
			}
			if (a1 == 13535) {
				f_14d3_a2_v(tv1, tv0);
			}
			if (a0 == 13534) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512374);
				tv0->ClearReplies();
				if (!f_15c1_a1_b(tv1) && f_15d9_a1_b(tv1)) {
					tv0->AddReply(513641, 14898, 14897);
				}
				if (f_15cd_a1_b(tv1)) {
					tv0->AddReply(512375, 13536, 13535);
				}
				tv0->AddReply(513658, -1, 14916);
				return;
			}
			if (a0 == 13536) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512376);
				tv0->ClearReplies();
				tv0->AddReply(512378, 13544, 13538);
				tv0->AddReply(512377, 13539, 13537);
				return;
			}
			if (a0 == 13539) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512379);
				tv0->ClearReplies();
				tv0->AddReply(512380, 13541, 13540);
				return;
			}
			if (a0 == 13541) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512381);
				tv0->ClearReplies();
				tv0->AddReply(512382, -1, 13542);
				tv0->AddReply(512383, -1, 13543);
				return;
			}
			if (a0 == 13544) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512384);
				tv0->ClearReplies();
				tv0->AddReply(512385, 13552, 13545);
				tv0->AddReply(512386, 13547, 13546);
				return;
			}
			if (a0 == 13547) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512387);
				tv0->ClearReplies();
				tv0->AddReply(512388, 13550, 13548);
				tv0->AddReply(512389, 13550, 13549);
				return;
			}
			if (a0 == 13550) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512390);
				tv0->ClearReplies();
				tv0->AddReply(512391, -1, 13551);
				return;
			}
			if (a0 == 13552) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512392);
				tv0->ClearReplies();
				tv0->AddReply(512393, 13559, 13554);
				tv0->AddReply(512394, 13557, 13555);
				tv0->AddReply(512395, 13558, 13556);
				return;
			}
			if (a0 == 13558) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512397);
				tv0->ClearReplies();
				tv0->AddReply(512403, 13565, 13564);
				return;
			}
			if (a0 == 13557) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512396);
				tv0->ClearReplies();
				tv0->AddReply(512402, 13565, 13563);
				return;
			}
			if (a0 == 13559) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512398);
				tv0->ClearReplies();
				tv0->AddReply(512399, 13561, 13560);
				return;
			}
			if (a0 == 13561) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512400);
				tv0->ClearReplies();
				tv0->AddReply(512401, 13565, 13562);
				return;
			}
			if (a0 == 13565) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512404);
				tv0->ClearReplies();
				tv0->AddReply(512405, 13570, 13568);
				tv0->AddReply(512406, 13570, 13569);
				return;
			}
			if (a0 == 13570) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(512407);
				tv0->ClearReplies();
				tv0->AddReply(512408, -1, 13572);
				return;
			}
			if (a0 == 14898) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(513642);
				tv0->ClearReplies();
				tv0->AddReply(513643, 14900, 14899);
				return;
			}
			if (a0 == 14900) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(513644);
				tv0->ClearReplies();
				tv0->AddReply(513645, 14902, 14901);
				return;
			}
			if (a0 == 14902) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(513646);
				tv0->ClearReplies();
				tv0->AddReply(513647, 14904, 14903);
				tv0->AddReply(513649, 14906, 14905);
				return;
			}
			if (a0 == 14906) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(513650);
				tv0->ClearReplies();
				tv0->AddReply(513652, 40376, 14908);
				return;
			}
			if (a0 == 40376) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(538490);
				tv0->ClearReplies();
				tv0->AddReply(538491, -1, 40377);
				return;
			}
			if (a0 == 14904) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(513648);
				tv0->ClearReplies();
				tv0->AddReply(513651, 14909, 14907);
				tv0->AddReply(513655, 14913, 14912);
				return;
			}
			if (a0 == 14913) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(513656);
				tv0->ClearReplies();
				tv0->AddReply(513657, 14909, 14914);
				return;
			}
			if (a0 == 14909) {
				f_d17_a1_v("Neutral");
				tv0->SetMessage(513653);
				tv0->ClearReplies();
				tv0->AddReply(513654, -1, 14911);
				tv0->AddReply(538492, -1, 40378);
				return;
			}
			tv3 = true;
			if (f_13f6_a0_b()) {
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
		f_12c8_a1_b(f_1375_a0_o());
		if (!f_1273_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetNPCDescription(f_13ee_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPhoto2(f_13f4_a0_s());
		L0->SetPlayerName(f_16ee_a0_i());
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
		f_12b7_a1_v(a0);
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
			f_fe3_a1_v("Neutral");
			tv0->SetMessage(520784);
			tv0->ClearReplies();
			tv0->AddReply(520785, 22000, 21999);
			tv0->AddReply(520792, 22008, 22007);
			tv0->AddReply(520796, 22014, 22013);
			break;
			return;
		}
		if (f_13f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1352_a1_v(tv2);
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

	void f_fe3_a1_v(string a0)
	{
		if (!f_13f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1359_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_136e_a0_v();
			if (a0 == 21998) {
				f_fe3_a1_v("Neutral");
				tv0->SetMessage(520784);
				tv0->ClearReplies();
				tv0->AddReply(520785, 22000, 21999);
				tv0->AddReply(520792, 22008, 22007);
				tv0->AddReply(520796, 22014, 22013);
				return;
			}
			if (a0 == 22014) {
				f_fe3_a1_v("Neutral");
				tv0->SetMessage(520797);
				tv0->ClearReplies();
				tv0->AddReply(520798, -1, 22015);
				return;
			}
			if (a0 == 22008) {
				f_fe3_a1_v("Neutral");
				tv0->SetMessage(520793);
				tv0->ClearReplies();
				tv0->AddReply(520794, 22000, 22009);
				tv0->AddReply(520795, 22000, 22011);
				return;
			}
			if (a0 == 22000) {
				f_fe3_a1_v("Neutral");
				tv0->SetMessage(520786);
				tv0->ClearReplies();
				tv0->AddReply(520787, 22002, 22001);
				tv0->AddReply(520791, 22002, 22005);
				return;
			}
			if (a0 == 22002) {
				f_fe3_a1_v("Neutral");
				tv0->SetMessage(520788);
				tv0->ClearReplies();
				tv0->AddReply(520789, -1, 22003);
				tv0->AddReply(520790, -1, 22004);
				return;
			}
			tv3 = true;
			if (f_13f6_a0_b()) {
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
		f_12c8_a1_b(f_1375_a0_o());
		if (!f_1273_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_13f0_a0_i());
		L0->SetNPCDescription(f_13ee_a0_i());
		L0->SetPhoto(f_13f2_a0_s());
		L0->SetPhoto2(f_13f4_a0_s());
		L0->SetPlayerName(f_16ee_a0_i());
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
		f_12b7_a1_v(a0);
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
			f_110a_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_13f6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1352_a1_v(tv2);
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

	void f_110a_a1_v(string a0)
	{
		if (!f_13f6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1359_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_136e_a0_v();
			if (a0 == 42557) {
				f_110a_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_13f6_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t17
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_1151_a0_v();
	}

	void f_1151_a0_v(void)
	{
		if (!f_126e_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_1207_a0_v();
		}
	}

	bool f_1165_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1265_a1_b(L0);
	}

	void f_1174_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_1179_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1253_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_118f_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_1198_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_1198_a0_v();
			if (f_126e_a0_b() && f_1179_a0_b()) {
				if (f_1165_a0_b()) {
					f_1302_a1_b(f_1375_a0_o());
				}
			} else {
				f_1174_a0_v();
				f_118f_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_124e_a0_v();
		f_1198_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_1198_a0_v();
		f_1352_a1_v("Neutral");
		f_118f_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_118f_a0_v();
		} else {
			f_1352_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_124e_a0_v();
			f_1265_a1_b(a0);
			enable OnUse;
			f_16ff_a1_v(a0);
			f_1352_a1_v("Neutral");
			f_1198_a0_v();
			f_118f_a0_v();
		}
	}
}

void f_1207_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_126e_a0_b()) {
		return;
	}
	L0 = f_13dd_a0_i();
	for (L1 = 0; L1 < 5 && f_126e_a0_b(); L1++) {
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
			@PlayAnimation("all", f_13d6_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_124c_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_124c_a0_b(void)
{
	return true;
}

void f_124e_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1253_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_125b_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1265_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_125b_a1_b(L0);
}

bool f_126e_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1273_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_137b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_13f6_a0_b()) {
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

void f_12b7_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_13f6_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_12c8_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1302_a1_b(a0)) {
			if (!f_1327_a1_b(a0)) {
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
		if (!f_1327_a1_b(a0)) {
			if (!f_1302_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1302_a1_b(object a0)
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
	return f_135f_a1_b(L4);
}

bool f_1327_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_13c7_a0_i() + "m";
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
	return f_135f_a1_b(L4);
}

void f_1352_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1359_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_135f_a1_b(string a0)
{
	if (f_13f6_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_136e_a0_v(void)
{
	if (f_13f6_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1375_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_137b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1385_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_138a_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1396_a3_v(object a0, object a1, int a2)
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
		f_138a_a2_v(L0, a2);
	}
}

void f_13a9_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1396_a3_v(a0, L0, a2);
}

bool f_13b6_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_13c2_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_13c7_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_13d0_a1_b(int a0)
{
	return f_13c7_a0_i() == a0;
}

string f_13d6_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_13dd_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_13d6_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_13ee_a0_i(void)
{
	return 515549;
}

int f_13f0_a0_i(void)
{
	return 502874;
}

string f_13f2_a0_s(void)
{
	return "ui/NPC_Ospina.png";
}

string f_13f4_a0_s(void)
{
	return "ui/NPC_Ospina_b.png";
}

bool f_13f6_a0_b(void)
{
	return true;
}

void f_13f8_a2_v(object a0, object a1)
{
	f_1638_a0_v();
	f_13b6_a2_b("quest_d1_03", "eva_finish");
}

void f_1402_a2_v(object a0, object a1)
{
	@SetVariable("ood1Ospina1", 1);
}

void f_1408_a2_v(object a0, object a1)
{
	@SetVariable("ood1Ospina2", 1);
}

void f_140e_a2_v(object a0, object a1)
{
	f_162b_a0_v();
	f_13b6_a2_b("quest_d1_03", "unlock_butcher");
}

void f_1418_a2_v(object a0, object a1)
{
	f_1679_a0_v();
}

void f_141d_a2_v(object a0, object a1)
{
	@SetVariable("ood3Ospina1", 1);
}

void f_1423_a2_v(object a0, object a1)
{
	@SetVariable("ood3Ospina2", 1);
}

void f_1429_a2_v(object a0, object a1)
{
	@SetVariable("ood3Ospina3", 1);
}

void f_142f_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q01", 3);
	L0 = f_16bc_a0_o();
	L0->AddMark("d3q01OspinaGotoBigVlad", "pt_map_bigvlad", 1, 511152, f_13c2_a0_f());
	f_1652_a0_v();
}

void f_1446_a2_v(object a0, object a1)
{
	@SetVariable("ood3Ospina4", 1);
}

void f_144c_a2_v(object a0, object a1)
{
	@SetVariable("d3q01", 7);
	f_1645_a0_v();
	f_13b6_a2_b("quest_d3_01", "place_butchers");
}

void f_145a_a2_v(object a0, object a1)
{
	f_16cd_a3_v(f_16bc_a0_o(), "pt_map_bigvlad", 2);
	a1->ShowMap(f_16bc_a0_o());
}

void f_146a_a2_v(object a0, object a1)
{
	f_16cd_a3_v(f_16bc_a0_o(), "pt_map_mladvlad", 2);
	a1->ShowMap(f_16bc_a0_o());
}

void f_147a_a2_v(object a0, object a1)
{
	f_16cd_a3_v(f_16bc_a0_o(), "pt_map_lara", 2);
	a1->ShowMap(f_16bc_a0_o());
}

void f_148a_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01_subquest", 2);
	L0 = f_16bc_a0_o();
	L0->AddMark("d4q01OspinaGotoLara", "pt_map_lara", 1, 511504, f_13c2_a0_f());
}

void f_149e_a2_v(object a0, object a1)
{
	@SetVariable("ood4Ospina1", 1);
}

void f_14a4_a2_v(object a0, object a1)
{
	@SetVariable("d4q01_subquest", 1000);
}

void f_14aa_a2_v(object a0, object a1)
{
	@SetVariable("ood4Ospina2", 1);
}

void f_14b0_a2_v(object a0, object a1)
{
	@SetVariable("ood6Ospina1", 1);
}

void f_14b6_a2_v(object a0, object a1)
{
	@SetVariable("ood6Ospina2", 1);
}

void f_14bc_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d8q01MladVladIsBad", 1);
	L0 = f_16bc_a0_o();
	L0->AddMark("d8q01OspinaGotoMladVlad", "pt_map_mladvlad", 1, 515307, f_13c2_a0_f());
	f_1686_a0_v();
}

void f_14d3_a2_v(object a0, object a1)
{
	@SetVariable("ood8Ospina1", 1);
}

void f_14d9_a2_v(object a0, object a1)
{
	@SetVariable("ood8Ospina2", 1);
}

void f_14df_a2_v(object a0, object a1)
{
	f_165f_a0_v();
	@Trace("ospina blood is given");
	f_13a9_a3_v(a0, "d6q01_ospina_blood", 1);
}

void f_14ed_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_14f3_a2_v(object a0, object a1)
{
	@SetVariable("d6q01OspinaVolonteer", 1);
	f_166c_a0_v();
	f_13b6_a2_b("quest_d6_01", "completed");
}

bool f_1501_a1_b(object a0)
{
	if (f_1385_a1_i("d1q03") == 1) {
		return true;
	}
	return false;
}

bool f_150d_a1_b(object a0)
{
	if (f_1385_a1_i("ood1Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_1519_a1_b(object a0)
{
	if (f_1385_a1_i("ood1Ospina2") == 0) {
		return true;
	}
	return false;
}

bool f_1525_a1_b(object a0)
{
	if (f_1385_a1_i("ood3Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_1531_a1_b(object a0)
{
	if (f_1385_a1_i("ood3Ospina2") == 0) {
		return true;
	}
	return false;
}

bool f_153d_a1_b(object a0)
{
	if (f_1385_a1_i("ood3Ospina3") == 0) {
		return true;
	}
	return false;
}

bool f_1549_a1_b(object a0)
{
	if (f_1385_a1_i("ood3Ospina4") == 0) {
		return true;
	}
	return false;
}

bool f_1555_a1_b(object a0)
{
	if (f_1385_a1_i("d3q01") == 2) {
		return true;
	}
	return false;
}

bool f_1561_a1_b(object a0)
{
	if (f_1385_a1_i("d3q01") == 6) {
		return true;
	}
	return false;
}

bool f_156d_a1_b(object a0)
{
	if (f_1385_a1_i("d4q01_subquest") == 1) {
		return true;
	}
	return false;
}

bool f_1579_a1_b(object a0)
{
	if (f_1385_a1_i("ood4Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_1585_a1_b(object a0)
{
	if (f_1385_a1_i("d4q01_subquest") == 3) {
		return true;
	}
	return false;
}

bool f_1591_a1_b(object a0)
{
	if (f_1385_a1_i("ood4Ospina2") == 0) {
		return true;
	}
	return false;
}

bool f_159d_a1_b(object a0)
{
	if (f_1385_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_15a9_a1_b(object a0)
{
	if (f_1385_a1_i("ood6Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_15b5_a1_b(object a0)
{
	if (f_1385_a1_i("ood6Ospina2") == 0) {
		return true;
	}
	return false;
}

bool f_15c1_a1_b(object a0)
{
	if (f_1385_a1_i("d8q01") == 0) {
		return true;
	}
	return false;
}

bool f_15cd_a1_b(object a0)
{
	if (f_1385_a1_i("ood8Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_15d9_a1_b(object a0)
{
	if (f_1385_a1_i("ood8Ospina2") == 0) {
		return true;
	}
	return false;
}

bool f_15e5_a1_b(object a0)
{
	if (f_1385_a1_i("microscope_d6q01_ospina_blood") != 0) {
		return true;
	}
	return false;
}

bool f_15f1_a1_b(object a0)
{
	if (f_1385_a1_i("d6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_15fd_a1_b(object a0)
{
	if (f_1385_a1_i("d6q01") == -1) {
		return true;
	}
	return false;
}

bool f_1609_a1_b(object a0)
{
	if (f_1385_a1_i("d1q01") != 0 || f_1385_a1_i("d1q01") != 1000 || f_1385_a1_i("d1q01") != -1) {
		return true;
	}
	return false;
}

void f_162b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 623, 2, 532457);
	f_16a0_a2_b(L0, 37);
}

void f_1638_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 38, 2, 512120);
	f_16a0_a2_b(L0, 37);
}

void f_1645_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 71, 1, 512153);
	f_16a0_a2_b(L0, 25);
}

void f_1652_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 70, 1, 512152);
	f_16a0_a2_b(L0, 25);
}

void f_165f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 162, 1, 515395);
	f_16a0_a2_b(L0, 111);
}

void f_166c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 121, 1, 513744);
	f_16a0_a2_b(L0, 111);
}

void f_1679_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 721, 1, 538785);
	f_16a0_a2_b(L0, 111);
}

void f_1686_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 178, 1, 515437);
	f_16a0_a2_b(L0, 175);
}

object f_1693_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_16a0_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1693_a0_o();
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

object f_16bc_a0_o(void)
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

void f_16cd_a3_v(object a0, string a1, float a2)
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

int f_16ee_a0_i(void)
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

void f_16ff_a1_v(object a0)
{
	if (!g1) {
		t13{a0};
		g1 = true;
	}
	if (f_13d0_a1_b(1)) {
		t1{a0};
		return;
	}
	if (f_13d0_a1_b(3)) {
		t7{a0};
		return;
	}
	if (f_13d0_a1_b(4)) {
		t9{a0};
		return;
	}
	if (f_13d0_a1_b(6)) {
		t5{a0};
		return;
	}
	if (f_13d0_a1_b(8)) {
		t11{a0};
		return;
	}
	if (f_13d0_a1_b(12)) {
		t3{a0};
		return;
	}
	t15{a0};
}

