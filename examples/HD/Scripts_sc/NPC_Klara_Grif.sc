event evt_11 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;
var int g2;

task t0
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			f_11f1_a1_v("Neutral");
			@lshWaitForAnimEnd();
			if (tv0) {
				return;
			}
		}
	}

	void evt_11(int a0)
	{
		@lshStopAnimation();
		@StopTrade();
		tv0 = true;
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
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
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
			f_a1_a1_v("Neutral");
			tv0->SetMessage(525483);
			tv0->ClearReplies();
			tv0->AddReply(525484, 30758, 26840);
			tv0->AddReply(529303, -1, 30757);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_a1_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a0 == 26839) {
				f_a1_a1_v("Neutral");
				tv0->SetMessage(525483);
				tv0->ClearReplies();
				tv0->AddReply(525484, 30758, 26840);
				tv0->AddReply(529303, -1, 30757);
				return;
			}
			if (a0 == 30758) {
				f_a1_a1_v("Neutral");
				tv0->SetMessage(529304);
				tv0->ClearReplies();
				tv0->AddReply(529305, -1, 30759);
				tv0->AddReply(542281, -1, 44626);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
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
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t4{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
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
			f_1a6_a1_v("Neutral");
			tv0->SetMessage(525681);
			tv0->ClearReplies();
			if (f_1341_a1_b(tv1)) {
				tv0->AddReply(525682, 44708, 27005);
			}
			if (f_134d_a1_b(tv1)) {
				tv0->AddReply(525696, 30190, 27019);
			}
			if (f_1359_a1_b(tv1)) {
				tv0->AddReply(525709, 27032, 27031);
			}
			tv0->AddReply(526667, -1, 27943);
			tv0->AddReply(525689, -1, 27012);
			tv0->AddReply(528783, -1, 30195);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_1a6_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a1 == 27011) {
				f_12ae_a2_v(tv1, tv0);
				f_129e_a2_v(tv1, tv0);
			}
			if (a1 == 44725) {
				f_12ae_a2_v(tv1, tv0);
			}
			if (a1 == 27021) {
				f_12c5_a2_v(tv1, tv0);
				f_132c_a2_v(tv1, tv0);
			}
			if (a1 == 44742) {
				f_12c5_a2_v(tv1, tv0);
			}
			if (a1 == 27037) {
				f_12e1_a2_v(tv1, tv0);
			}
			if (a1 == 27038) {
				f_12e1_a2_v(tv1, tv0);
			}
			if (a1 == 44753) {
				f_1323_a2_v(tv1, tv0);
			}
			if (a1 == 44754) {
				f_1323_a2_v(tv1, tv0);
			}
			if (a1 == 27943) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a0 == 27004) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(525681);
				tv0->ClearReplies();
				if (f_1341_a1_b(tv1)) {
					tv0->AddReply(525682, 44708, 27005);
				}
				if (f_134d_a1_b(tv1)) {
					tv0->AddReply(525696, 30190, 27019);
				}
				if (f_1359_a1_b(tv1)) {
					tv0->AddReply(525709, 27032, 27031);
				}
				tv0->AddReply(526667, -1, 27943);
				tv0->AddReply(525689, -1, 27012);
				tv0->AddReply(528783, -1, 30195);
				return;
			}
			if (a0 == 27032) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(525710);
				tv0->ClearReplies();
				tv0->AddReply(525711, 27034, 27033);
				return;
			}
			if (a0 == 27034) {
				f_1a6_a1_v("Fear");
				tv0->SetMessage(525712);
				tv0->ClearReplies();
				tv0->AddReply(525713, 44727, 27035);
				tv0->AddReply(542369, 44727, 44735);
				return;
			}
			if (a0 == 44727) {
				f_1a6_a1_v("Fear");
				tv0->SetMessage(542361);
				tv0->ClearReplies();
				tv0->AddReply(542362, 44729, 44728);
				tv0->AddReply(542374, 44743, 44741);
				return;
			}
			if (a0 == 44743) {
				f_1a6_a1_v("Fear");
				tv0->SetMessage(542376);
				tv0->ClearReplies();
				tv0->AddReply(542377, 44746, 44744);
				tv0->AddReply(542378, 44751, 44745);
				return;
			}
			if (a0 == 44746) {
				f_1a6_a1_v("Fear");
				tv0->SetMessage(542379);
				tv0->ClearReplies();
				tv0->AddReply(542380, 44748, 44747);
				return;
			}
			if (a0 == 44748) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(542381);
				tv0->ClearReplies();
				tv0->AddReply(542382, 44755, 44749);
				tv0->AddReply(542383, 44751, 44750);
				return;
			}
			if (a0 == 44751) {
				f_1a6_a1_v("Sly");
				tv0->SetMessage(542384);
				tv0->ClearReplies();
				tv0->AddReply(542385, -1, 44753);
				tv0->AddReply(542386, -1, 44754);
				return;
			}
			if (a0 == 44755) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(542387);
				tv0->ClearReplies();
				tv0->AddReply(542388, 44751, 44756);
				return;
			}
			if (a0 == 44729) {
				f_1a6_a1_v("Sly");
				tv0->SetMessage(542363);
				tv0->ClearReplies();
				tv0->AddReply(542364, 44731, 44730);
				return;
			}
			if (a0 == 44731) {
				f_1a6_a1_v("Sly");
				tv0->SetMessage(542365);
				tv0->ClearReplies();
				tv0->AddReply(542370, 44738, 44737);
				tv0->AddReply(542389, 44759, 44758);
				return;
			}
			if (a0 == 44759) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(542390);
				tv0->ClearReplies();
				tv0->AddReply(542391, 44738, 44760);
				return;
			}
			if (a0 == 44738) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(542371);
				tv0->ClearReplies();
				tv0->AddReply(542372, 44740, 44739);
				tv0->AddReply(542392, 44763, 44762);
				return;
			}
			if (a0 == 44763) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(542393);
				tv0->ClearReplies();
				tv0->AddReply(542399, 44773, 44772);
				tv0->AddReply(542397, 44740, 44769);
				return;
			}
			if (a0 == 44773) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(542400);
				tv0->ClearReplies();
				tv0->AddReply(542394, 27036, 44764);
				return;
			}
			if (a0 == 44740) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(542373);
				tv0->ClearReplies();
				tv0->AddReply(542366, 44733, 44732);
				tv0->AddReply(542398, 44773, 44771);
				return;
			}
			if (a0 == 44733) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(542367);
				tv0->ClearReplies();
				tv0->AddReply(542368, 27036, 44734);
				tv0->AddReply(542395, 27036, 44765);
				return;
			}
			if (a0 == 27036) {
				f_1a6_a1_v("Fear");
				tv0->SetMessage(525714);
				tv0->ClearReplies();
				tv0->AddReply(525715, -1, 27037);
				tv0->AddReply(525716, -1, 27038);
				return;
			}
			if (a0 == 30190) {
				f_1a6_a1_v("Sly");
				tv0->SetMessage(528778);
				tv0->ClearReplies();
				tv0->AddReply(541118, 43236, 43235);
				tv0->AddReply(528779, 30192, 30191);
				return;
			}
			if (a0 == 30192) {
				f_1a6_a1_v("Anger");
				tv0->SetMessage(528780);
				tv0->ClearReplies();
				tv0->AddReply(528781, 43241, 30193);
				tv0->AddReply(528782, 27020, 30194);
				return;
			}
			if (a0 == 43241) {
				f_1a6_a1_v("Fear");
				tv0->SetMessage(541122);
				tv0->ClearReplies();
				tv0->AddReply(541123, 43243, 43242);
				return;
			}
			if (a0 == 43243) {
				f_1a6_a1_v("Sly");
				tv0->SetMessage(541124);
				tv0->ClearReplies();
				tv0->AddReply(541125, 27020, 43244);
				return;
			}
			if (a0 == 43236) {
				f_1a6_a1_v("Fear");
				tv0->SetMessage(541119);
				tv0->ClearReplies();
				tv0->AddReply(541120, 27020, 43237);
				return;
			}
			if (a0 == 27020) {
				f_1a6_a1_v("Fear");
				tv0->SetMessage(525697);
				tv0->ClearReplies();
				tv0->AddReply(528773, 43245, 30184);
				tv0->AddReply(541121, 43245, 43239);
				return;
			}
			if (a0 == 43245) {
				f_1a6_a1_v("Anger");
				tv0->SetMessage(541126);
				tv0->ClearReplies();
				tv0->AddReply(541127, 30185, 43246);
				tv0->AddReply(541128, 43249, 43248);
				return;
			}
			if (a0 == 43249) {
				f_1a6_a1_v("Sly");
				tv0->SetMessage(541129);
				tv0->ClearReplies();
				tv0->AddReply(541130, 30185, 43250);
				return;
			}
			if (a0 == 30185) {
				f_1a6_a1_v("Anger");
				tv0->SetMessage(528774);
				tv0->ClearReplies();
				tv0->AddReply(528775, 30187, 30186);
				tv0->AddReply(528777, 30187, 30188);
				return;
			}
			if (a0 == 30187) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(528776);
				tv0->ClearReplies();
				tv0->AddReply(525698, -1, 27021);
				tv0->AddReply(542375, -1, 44742);
				return;
			}
			if (a0 == 44708) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(542345);
				tv0->ClearReplies();
				tv0->AddReply(542346, 44710, 44709);
				tv0->AddReply(542349, 44713, 44712);
				return;
			}
			if (a0 == 44713) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(542350);
				tv0->ClearReplies();
				tv0->AddReply(542351, 27010, 44714);
				return;
			}
			if (a0 == 44710) {
				f_1a6_a1_v("Fear");
				tv0->SetMessage(542347);
				tv0->ClearReplies();
				tv0->AddReply(542348, 27006, 44711);
				return;
			}
			if (a0 == 27006) {
				f_1a6_a1_v("Fear");
				tv0->SetMessage(525683);
				tv0->ClearReplies();
				tv0->AddReply(525684, 27008, 27007);
				tv0->AddReply(541117, 27008, 43233);
				return;
			}
			if (a0 == 27008) {
				f_1a6_a1_v("Fear");
				tv0->SetMessage(525685);
				tv0->ClearReplies();
				tv0->AddReply(525686, 27010, 27009);
				tv0->AddReply(542352, 44716, 44715);
				return;
			}
			if (a0 == 44716) {
				f_1a6_a1_v("Sly");
				tv0->SetMessage(542353);
				tv0->ClearReplies();
				tv0->AddReply(542354, 44718, 44717);
				return;
			}
			if (a0 == 44718) {
				f_1a6_a1_v("Neutral");
				tv0->SetMessage(542355);
				tv0->ClearReplies();
				tv0->AddReply(542356, 27010, 44719);
				tv0->AddReply(542357, 27010, 44720);
				return;
			}
			if (a0 == 27010) {
				f_1a6_a1_v("Sly");
				tv0->SetMessage(525687);
				tv0->ClearReplies();
				tv0->AddReply(525688, -1, 27011);
				tv0->AddReply(542360, -1, 44725);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
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
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t6{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
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
			f_5cf_a1_v("Fear");
			tv0->SetMessage(526656);
			tv0->ClearReplies();
			tv0->AddReply(526657, -1, 27933);
			tv0->AddReply(526658, -1, 27934);
			tv0->AddReply(542279, -1, 44624);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_5cf_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a1 == 27933) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a0 == 27932) {
				f_5cf_a1_v("Fear");
				tv0->SetMessage(526656);
				tv0->ClearReplies();
				tv0->AddReply(526657, -1, 27933);
				tv0->AddReply(526658, -1, 27934);
				tv0->AddReply(542279, -1, 44624);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
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
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t8{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
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
			f_6ac_a1_v("Fear");
			tv0->SetMessage(526660);
			tv0->ClearReplies();
			tv0->AddReply(526661, -1, 27937);
			tv0->AddReply(526662, -1, 27938);
			tv0->AddReply(528771, -1, 30182);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_6ac_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a1 == 27937) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a0 == 27936) {
				f_6ac_a1_v("Fear");
				tv0->SetMessage(526660);
				tv0->ClearReplies();
				tv0->AddReply(526661, -1, 27937);
				tv0->AddReply(526662, -1, 27938);
				tv0->AddReply(528771, -1, 30182);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
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
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t10{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
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
			f_789_a1_v("Neutral");
			tv0->SetMessage(526664);
			tv0->ClearReplies();
			tv0->AddReply(526665, -1, 27941);
			tv0->AddReply(526666, -1, 27942);
			tv0->AddReply(528772, -1, 30183);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_789_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a1 == 27941) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a0 == 27940) {
				f_789_a1_v("Neutral");
				tv0->SetMessage(526664);
				tv0->ClearReplies();
				tv0->AddReply(526665, -1, 27941);
				tv0->AddReply(526666, -1, 27942);
				tv0->AddReply(528772, -1, 30183);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
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
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t12{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
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
			f_866_a1_v("Fear");
			tv0->SetMessage(526669);
			tv0->ClearReplies();
			tv0->AddReply(526670, -1, 27946);
			tv0->AddReply(526671, -1, 27947);
			tv0->AddReply(528784, -1, 30196);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_866_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a1 == 27946) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a0 == 27945) {
				f_866_a1_v("Fear");
				tv0->SetMessage(526669);
				tv0->ClearReplies();
				tv0->AddReply(526670, -1, 27946);
				tv0->AddReply(526671, -1, 27947);
				tv0->AddReply(528784, -1, 30196);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
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
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t14{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
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
			f_943_a1_v("Sly");
			tv0->SetMessage(526673);
			tv0->ClearReplies();
			tv0->AddReply(526674, -1, 27950);
			tv0->AddReply(526675, -1, 27951);
			tv0->AddReply(528785, -1, 30197);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_943_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a1 == 27950) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a0 == 27949) {
				f_943_a1_v("Sly");
				tv0->SetMessage(526673);
				tv0->ClearReplies();
				tv0->AddReply(526674, -1, 27950);
				tv0->AddReply(526675, -1, 27951);
				tv0->AddReply(528785, -1, 30197);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
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
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t16{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
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
			f_a1b_a1_v("Neutral");
			tv0->SetMessage(526677);
			tv0->ClearReplies();
			tv0->AddReply(526678, -1, 27954);
			tv0->AddReply(526679, -1, 27955);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_a1b_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a1 == 27954) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a0 == 27953) {
				f_a1b_a1_v("Neutral");
				tv0->SetMessage(526677);
				tv0->ClearReplies();
				tv0->AddReply(526678, -1, 27954);
				tv0->AddReply(526679, -1, 27955);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
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
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t18{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
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
			f_af3_a1_v("Fear");
			tv0->SetMessage(526681);
			tv0->ClearReplies();
			tv0->AddReply(526682, -1, 27958);
			tv0->AddReply(526683, -1, 27959);
			tv0->AddReply(528752, -1, 30178);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_af3_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a1 == 27958) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a0 == 27957) {
				f_af3_a1_v("Fear");
				tv0->SetMessage(526681);
				tv0->ClearReplies();
				tv0->AddReply(526682, -1, 27958);
				tv0->AddReply(526683, -1, 27959);
				tv0->AddReply(528752, -1, 30178);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
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
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t20{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
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
			f_bd0_a1_v("Neutral");
			tv0->SetMessage(526685);
			tv0->ClearReplies();
			tv0->AddReply(526686, -1, 27962);
			tv0->AddReply(526687, -1, 27963);
			tv0->AddReply(529000, -1, 30437);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_bd0_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a1 == 27962) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a0 == 27961) {
				f_bd0_a1_v("Neutral");
				tv0->SetMessage(526685);
				tv0->ClearReplies();
				tv0->AddReply(526686, -1, 27962);
				tv0->AddReply(526687, -1, 27963);
				tv0->AddReply(529000, -1, 30437);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
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
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t22{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
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
			f_ca8_a1_v("Neutral");
			tv0->SetMessage(526689);
			tv0->ClearReplies();
			tv0->AddReply(526690, -1, 27966);
			tv0->AddReply(526691, -1, 27967);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_ca8_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a1 == 27966) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a0 == 27965) {
				f_ca8_a1_v("Neutral");
				tv0->SetMessage(526689);
				tv0->ClearReplies();
				tv0->AddReply(526690, -1, 27966);
				tv0->AddReply(526691, -1, 27967);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t23
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t24{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t24
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
			f_d8e_a1_v("Sly");
			tv0->SetMessage(526693);
			tv0->ClearReplies();
			if (f_1365_a1_b(tv1) && f_1371_a1_b(tv1)) {
				tv0->AddReply(527323, 28641, 28640);
			}
			tv0->AddReply(526694, -1, 27970);
			tv0->AddReply(526695, -1, 27971);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_d8e_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a1 == 28640) {
				f_131d_a2_v(tv1, tv0);
			}
			if (a1 == 28655) {
				f_12ea_a2_v(tv1, tv0);
			}
			if (a1 == 27970) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a0 == 27969) {
				f_d8e_a1_v("Sly");
				tv0->SetMessage(526693);
				tv0->ClearReplies();
				if (f_1365_a1_b(tv1) && f_1371_a1_b(tv1)) {
					tv0->AddReply(527323, 28641, 28640);
				}
				tv0->AddReply(526694, -1, 27970);
				tv0->AddReply(526695, -1, 27971);
				return;
			}
			if (a0 == 28641) {
				f_d8e_a1_v("Sly");
				tv0->SetMessage(527324);
				tv0->ClearReplies();
				tv0->AddReply(527325, 28644, 28642);
				tv0->AddReply(527326, 28645, 28643);
				return;
			}
			if (a0 == 28645) {
				f_d8e_a1_v("Neutral");
				tv0->SetMessage(527328);
				tv0->ClearReplies();
				tv0->AddReply(527330, 28648, 28647);
				return;
			}
			if (a0 == 28644) {
				f_d8e_a1_v("Sly");
				tv0->SetMessage(527327);
				tv0->ClearReplies();
				tv0->AddReply(527329, 28648, 28646);
				return;
			}
			if (a0 == 28648) {
				f_d8e_a1_v("Neutral");
				tv0->SetMessage(527331);
				tv0->ClearReplies();
				tv0->AddReply(527332, 28650, 28649);
				return;
			}
			if (a0 == 28650) {
				f_d8e_a1_v("Fear");
				tv0->SetMessage(527333);
				tv0->ClearReplies();
				tv0->AddReply(527334, 28652, 28651);
				return;
			}
			if (a0 == 28652) {
				f_d8e_a1_v("Fear");
				tv0->SetMessage(527335);
				tv0->ClearReplies();
				tv0->AddReply(527336, 28654, 28653);
				return;
			}
			if (a0 == 28654) {
				f_d8e_a1_v("Neutral");
				tv0->SetMessage(527337);
				tv0->ClearReplies();
				tv0->AddReply(527338, -1, 28655);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t25
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_10d3_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1296_a0_i());
		L0->SetNPCDescription(f_1294_a0_i());
		L0->SetPhoto(f_1298_a0_s());
		L0->SetPhoto2(f_129a_a0_s());
		L0->SetPlayerName(f_1508_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_112a_a1_b(f_1242_a0_o());
		t26{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1118_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t26
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
			f_f0c_a1_v("Neutral");
			tv0->SetMessage(539291);
			tv0->ClearReplies();
			tv0->AddReply(542571, 44971, 44970);
			tv0->AddReply(539292, -1, 41235);
			tv0->AddReply(542570, -1, 44969);
			break;
			return;
		}
		if (f_129c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_11f1_a1_v(tv2);
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

	void f_f0c_a1_v(string a0)
	{
		if (!f_129c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1201_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_121f_a0_v();
			if (a0 == 41234) {
				f_f0c_a1_v("Neutral");
				tv0->SetMessage(539291);
				tv0->ClearReplies();
				tv0->AddReply(542571, 44971, 44970);
				tv0->AddReply(539292, -1, 41235);
				tv0->AddReply(542570, -1, 44969);
				return;
			}
			if (a0 == 44971) {
				f_f0c_a1_v("Fear");
				tv0->SetMessage(542572);
				tv0->ClearReplies();
				tv0->AddReply(542573, 44974, 44972);
				tv0->AddReply(542574, 44974, 44973);
				return;
			}
			if (a0 == 44974) {
				f_f0c_a1_v("Fear");
				tv0->SetMessage(542575);
				tv0->ClearReplies();
				tv0->AddReply(542576, 44978, 44976);
				tv0->AddReply(542577, -1, 44977);
				return;
			}
			if (a0 == 44978) {
				f_f0c_a1_v("Neutral");
				tv0->SetMessage(542578);
				tv0->ClearReplies();
				tv0->AddReply(542579, 44980, 44979);
				tv0->AddReply(542583, -1, 44983);
				return;
			}
			if (a0 == 44980) {
				f_f0c_a1_v("Neutral");
				tv0->SetMessage(542580);
				tv0->ClearReplies();
				tv0->AddReply(542581, -1, 44981);
				tv0->AddReply(542582, -1, 44982);
				return;
			}
			tv3 = true;
			if (f_129c_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t27
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		g2 = -1;
		f_fb7_a0_v();
	}

	void f_fb7_a0_v(void)
	{
		if (!f_10ce_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_1067_a0_v();
		}
	}

	bool f_fc5_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_10c5_a1_b(L0);
	}

	void f_fd4_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_fd9_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_10b3_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_fef_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_ff8_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_ff8_a0_v();
			if (f_10ce_a0_b() && f_fd9_a0_b()) {
				if (f_fc5_a0_b()) {
					f_1164_a1_b(f_1242_a0_o());
				}
			} else {
				f_fd4_a0_v();
				f_fef_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_10ae_a0_v();
		f_ff8_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_ff8_a0_v();
		f_11f1_a1_v("Neutral");
		f_fef_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_fef_a0_v();
		} else {
			f_11f1_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_10ae_a0_v();
			f_10c5_a1_b(a0);
			enable OnUse;
			f_1532_a1_v(a0);
			f_11f1_a1_v("Neutral");
			f_ff8_a0_v();
			f_fef_a0_v();
		}
	}
}

void f_1067_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_10ce_a0_b()) {
		return;
	}
	L0 = f_1283_a0_i();
	for (L1 = 0; L1 < 5 && f_10ce_a0_b(); L1++) {
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
			@PlayAnimation("all", f_127c_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_10ac_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_10ac_a0_b(void)
{
	return true;
}

void f_10ae_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_10b3_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_10bb_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_10c5_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_10bb_a1_b(L0);
}

bool f_10ce_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_10d3_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1248_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_129c_a0_b()) {
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

void f_1118_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_129c_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_112a_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1164_a1_b(a0)) {
			if (!f_1189_a1_b(a0)) {
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
		if (!f_1189_a1_b(a0)) {
			if (!f_1164_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1164_a1_b(object a0)
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
	return f_1210_a1_b(L4);
}

bool f_1189_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_126d_a0_i() + "m";
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
	return f_1210_a1_b(L4);
}

bool f_11b4_a1_b(object a0)
{
	return f_11bc_a2_b(a0, 70);
}

bool f_11bc_a2_b(object a0, float a1)
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
	L5 = L3 * a1 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_11ec_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
}

void f_11f1_a1_v(string a0)
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

void f_1201_a2_v(string a0, bool a1)
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

bool f_1210_a1_b(string a0)
{
	if (f_129c_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_121f_a0_v(void)
{
	if (f_129c_a0_b()) {
		@lshStopSpeech();
	}
}

void f_1226_a3_v(string a0, int a1, int a2)
{
	if (f_1252_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_1231_a5_v(string a0, int a1, int a2, int a3, int a4)
{
	if (f_1252_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a4 - a3 + 1);
		@AddItem(L1, a0, 0, L0 + a3);
	}
}

object f_1242_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1248_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_1252_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

int f_1257_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_125c_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1268_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_126d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1276_a1_b(int a0)
{
	return f_126d_a0_i() == a0;
}

string f_127c_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1283_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_127c_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_1294_a0_i(void)
{
	return 515535;
}

int f_1296_a0_i(void)
{
	return 502860;
}

string f_1298_a0_s(void)
{
	return "ui/NPC_Grif.png";
}

string f_129a_a0_s(void)
{
	return "ui/NPC_Grif_b.png";
}

bool f_129c_a0_b(void)
{
	return true;
}

void f_129e_a2_v(object a0, object a1)
{
	f_1439_a3_v(f_1428_a0_o(), "pt_map_notkin", 2);
	a1->ShowMap(f_1428_a0_o());
}

void f_12ae_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k4q01", 2);
	L0 = f_1428_a0_o();
	L0->AddMark("k4q01GrifGotoNotkin", "pt_map_notkin", 1, 515278, f_1268_a0_f());
	f_13f2_a0_v();
}

void f_12c5_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k4q01", 4);
	L0 = f_1428_a0_o();
	L0->AddMark("k4q01GrifGotoBraga", "pt_map_warehouse_gangster", 1, 530231, f_1268_a0_f());
	f_13e5_a0_v();
	f_125c_a2_b("quest_k4_01", "init_volnica");
}

void f_12e1_a2_v(object a0, object a1)
{
	@SetVariable("k4q01", 6);
	f_13d8_a0_v();
}

void f_12ea_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("k11q01SoulCount", L0);
	L0 = L0 + 1;
	@SetVariable("k11q01SoulCount", L0);
	if (L0 == 2) {
		f_13be_a0_v();
	} else {
		if (L0 == 3) {
			f_13b1_a0_v();
		} else {
			if (L0 == 4) {
				f_13a4_a0_v();
			} else {
				if (L0 == 5) {
					f_1397_a0_v();
				} else {
					if (L0 == 6) {
						f_138a_a0_v();
					} else {
						if (L0 == 7) {
							f_137d_a0_v();
						}
					}
				}
			}
		}
	}
}

void f_131d_a2_v(object a0, object a1)
{
	@SetVariable("ook11Grif1", 1);
}

void f_1323_a2_v(object a0, object a1)
{
	@SetVariable("k4q01", -1);
	f_13cb_a0_v();
}

void f_132c_a2_v(object a0, object a1)
{
	f_1439_a3_v(f_1428_a0_o(), "pt_map_warehouse_gangster", 2);
	a1->ShowMap(f_1428_a0_o());
}

void f_133c_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_1341_a1_b(object a0)
{
	if (f_1257_a1_i("k4q01") == 1) {
		return true;
	}
	return false;
}

bool f_134d_a1_b(object a0)
{
	if (f_1257_a1_i("k4q01") == 3) {
		return true;
	}
	return false;
}

bool f_1359_a1_b(object a0)
{
	if (f_1257_a1_i("k4q01") == 5) {
		return true;
	}
	return false;
}

bool f_1365_a1_b(object a0)
{
	if (f_1257_a1_i("k11q01") == 9) {
		return true;
	}
	return false;
}

bool f_1371_a1_b(object a0)
{
	if (f_1257_a1_i("ook11Grif1") == 0) {
		return true;
	}
	return false;
}

void f_137d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 498, 1, 528065);
	f_140c_a2_b(L0, 480);
}

void f_138a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 497, 1, 528064);
	f_140c_a2_b(L0, 480);
}

void f_1397_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 496, 1, 528063);
	f_140c_a2_b(L0, 480);
}

void f_13a4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 495, 1, 528062);
	f_140c_a2_b(L0, 480);
}

void f_13b1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 494, 1, 528061);
	f_140c_a2_b(L0, 480);
}

void f_13be_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 493, 1, 528060);
	f_140c_a2_b(L0, 480);
}

void f_13cb_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 786, 1, 542494);
	f_140c_a2_b(L0, 368);
}

void f_13d8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 377, 1, 525734);
	f_140c_a2_b(L0, 368);
}

void f_13e5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 372, 1, 525729);
	f_140c_a2_b(L0, 368);
}

void f_13f2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 370, 1, 525727);
	f_140c_a2_b(L0, 368);
}

object f_13ff_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_140c_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_13ff_a0_o();
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

object f_1428_a0_o(void)
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

void f_1439_a3_v(object a0, string a1, float a2)
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

void f_145a_a0_v(void)
{
	bool L0;
	int L1;
	int L2;
	int L3;
	@ClearSubContainer(0);
	L2 = f_126d_a0_i();
	@AddItem(L0, f_1503_a1_i("Rifle"), 0, 1);
	@AddItem(L0, f_1503_a1_i("Revolver"), 0, 1);
	@AddItem(L0, f_1503_a1_i("Knife"), 0, 1);
	if (L2 != 10) {
		@AddItem(L0, f_1503_a1_i("tvirin"), 0, 1);
	} else {
		@AddItem(L0, f_1503_a1_i("tvirin"), 0, 4);
	}
	@AddItem(L0, f_1503_a1_i("lockpick"), 0, 3);
	f_1226_a3_v("Scalpel", 1, 2);
	f_1231_a5_v("revolver_ammo", 1, 1, 5, 10);
	f_1231_a5_v("rifle_ammo", 1, 1, 5, 20);
	@irand(L1, 100);
	if (L1 != 0) {
		@AddItem(L0, f_1503_a1_i("kerosene"), 0, L1);
	}
	if (L2 >= 3) {
		@AddItem(L0, f_1503_a1_i("halfboot_repel"), 0, 1);
		@AddItem(L0, f_1503_a1_i("boot_repel"), 0, 1);
	}
	if (L2 >= 9) {
		@AddItem(L0, f_1503_a1_i("boot_army"), 0, 1);
		@AddItem(L0, f_1503_a1_i("balahon"), 0, 1);
		@AddItem(L0, f_1503_a1_i("glove_army"), 0, 1);
	}
	L3 = f_1519_a0_i();
	if (L3 == 0) {
		@AddItem(L0, f_1503_a1_i("Gun_danko"), 0, 1);
	} else {
		if (L3 == 2) {
			@AddItem(L0, f_1503_a1_i("Gun"), 0, 1);
		}
	}
}

int f_1503_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

int f_1508_a0_i(void)
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

int f_1519_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_151f_a1_v(object a0)
{
	if (!f_11b4_a1_b(a0)) {
		return;
	}
	t0{a0};
	f_11ec_a1_v(a0);
}

void f_1532_a1_v(object a0)
{
	if (g2 != f_126d_a0_i()) {
		f_145a_a0_v();
		g2 = f_126d_a0_i();
	}
	if (!g1) {
		t1{a0};
		g1 = true;
	}
	if (f_1276_a1_b(1)) {
		if (1000 == t5{a0}) {
			f_151f_a1_v(a0);
		}
		return;
	}
	if (f_1276_a1_b(2)) {
		if (1000 == t7{a0}) {
			f_151f_a1_v(a0);
		}
		return;
	}
	if (f_1276_a1_b(3)) {
		if (1000 == t9{a0}) {
			f_151f_a1_v(a0);
		}
		return;
	}
	if (f_1276_a1_b(4)) {
		if (1000 == t3{a0}) {
			f_151f_a1_v(a0);
		}
		return;
	}
	if (f_1276_a1_b(5)) {
		if (1000 == t11{a0}) {
			f_151f_a1_v(a0);
		}
		return;
	}
	if (f_1276_a1_b(6)) {
		if (1000 == t13{a0}) {
			f_151f_a1_v(a0);
		}
		return;
	}
	if (f_1276_a1_b(7)) {
		if (1000 == t15{a0}) {
			f_151f_a1_v(a0);
		}
		return;
	}
	if (f_1276_a1_b(8)) {
		if (1000 == t17{a0}) {
			f_151f_a1_v(a0);
		}
		return;
	}
	if (f_1276_a1_b(9)) {
		if (1000 == t19{a0}) {
			f_151f_a1_v(a0);
		}
		return;
	}
	if (f_1276_a1_b(10)) {
		if (1000 == t21{a0}) {
			f_151f_a1_v(a0);
		}
		return;
	}
	if (f_1276_a1_b(11)) {
		if (1000 == t23{a0}) {
			f_151f_a1_v(a0);
		}
		return;
	}
	if (f_1276_a1_b(12)) {
		t25{a0};
		return;
	}
}

