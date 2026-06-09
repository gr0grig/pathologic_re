event evt_11 11;
event OnUnload 6;
event OnLoad 5;
event OnUse 0;

var object g0;
var bool g1;

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
		if (!f_fe5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1181_a0_i());
		L0->SetNPCDescription(f_117f_a0_i());
		L0->SetPhoto(f_1183_a0_s());
		L0->SetPhoto2(f_1185_a0_s());
		L0->SetPlayerName(f_143f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_103c_a1_b(f_10fb_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_102a_a1_v(a0);
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
			if (f_1363_a1_b(tv1)) {
				f_9a_a1_v("Distrust");
				tv0->SetMessage(518234);
				tv0->ClearReplies();
				tv0->AddReply(518235, 20742, 19344);
				break;
			}
			f_9a_a1_v("Neutral");
			tv0->SetMessage(518236);
			tv0->ClearReplies();
			tv0->AddReply(518237, -1, 19346);
			break;
			return;
		}
		if (f_1187_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_10c6_a1_v(tv2);
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

	void f_9a_a1_v(string a0)
	{
		if (!f_1187_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_10d6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_10f4_a0_v();
			if (a1 == 20759) {
				f_1206_a2_v(tv1, tv0);
				f_128b_a2_v(tv1, tv0);
				f_11f8_a2_v(tv1, tv0);
				f_11ff_a2_v(tv1, tv0);
			}
			if (a1 == 20765) {
				f_1206_a2_v(tv1, tv0);
				f_128b_a2_v(tv1, tv0);
				f_11f8_a2_v(tv1, tv0);
				f_11ff_a2_v(tv1, tv0);
			}
			if (a0 == 19343) {
				if (f_1363_a1_b(tv1)) {
					f_9a_a1_v("Distrust");
					tv0->SetMessage(518234);
					tv0->ClearReplies();
					tv0->AddReply(518235, 20742, 19344);
					return;
				}
				f_9a_a1_v("Neutral");
				tv0->SetMessage(518236);
				tv0->ClearReplies();
				tv0->AddReply(518237, -1, 19346);
				return;
			}
			if (a0 == 20742) {
				f_9a_a1_v("Neutral");
				tv0->SetMessage(519566);
				tv0->ClearReplies();
				tv0->AddReply(519567, 20744, 20743);
				tv0->AddReply(519584, 20746, 20760);
				return;
			}
			if (a0 == 20744) {
				f_9a_a1_v("Repentance");
				tv0->SetMessage(519568);
				tv0->ClearReplies();
				tv0->AddReply(519569, 20746, 20745);
				return;
			}
			if (a0 == 20746) {
				f_9a_a1_v("Neutral");
				tv0->SetMessage(519570);
				tv0->ClearReplies();
				tv0->AddReply(519571, 20748, 20747);
				return;
			}
			if (a0 == 20748) {
				f_9a_a1_v("Neutral");
				tv0->SetMessage(519572);
				tv0->ClearReplies();
				tv0->AddReply(519574, 20752, 20750);
				tv0->AddReply(519575, 20752, 20751);
				return;
			}
			if (a0 == 20752) {
				f_9a_a1_v("Patronage");
				tv0->SetMessage(519576);
				tv0->ClearReplies();
				tv0->AddReply(519577, 20754, 20753);
				return;
			}
			if (a0 == 20754) {
				f_9a_a1_v("Neutral");
				tv0->SetMessage(519578);
				tv0->ClearReplies();
				tv0->AddReply(519579, 20756, 20755);
				return;
			}
			if (a0 == 20756) {
				f_9a_a1_v("Neutral");
				tv0->SetMessage(519580);
				tv0->ClearReplies();
				tv0->AddReply(527722, 29071, 29070);
				tv0->AddReply(519587, 20758, 20766);
				return;
			}
			if (a0 == 29071) {
				f_9a_a1_v("Neutral");
				tv0->SetMessage(527723);
				tv0->ClearReplies();
				tv0->AddReply(530603, 31907, 31906);
				return;
			}
			if (a0 == 31907) {
				f_9a_a1_v("Anger");
				tv0->SetMessage(530604);
				tv0->ClearReplies();
				tv0->AddReply(519581, 20758, 20757);
				return;
			}
			if (a0 == 20758) {
				f_9a_a1_v("Neutral");
				tv0->SetMessage(519582);
				tv0->ClearReplies();
				tv0->AddReply(519583, -1, 20759);
				tv0->AddReply(519586, -1, 20765);
				return;
			}
			tv3 = true;
			if (f_1187_a0_b()) {
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
		if (!f_fe5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1181_a0_i());
		L0->SetNPCDescription(f_117f_a0_i());
		L0->SetPhoto(f_1183_a0_s());
		L0->SetPhoto2(f_1185_a0_s());
		L0->SetPlayerName(f_143f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_103c_a1_b(f_10fb_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_102a_a1_v(a0);
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
			if (f_130f_a1_b(tv1)) {
				f_11a3_a2_v(tv1, tv0);
				f_126a_a2_v(tv1, tv0);
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519215);
				tv0->ClearReplies();
				tv0->AddReply(519216, 29206, 20358);
				tv0->AddReply(519240, 20385, 20384);
				break;
			}
			f_29c_a1_v("Neutral");
			tv0->SetMessage(519247);
			tv0->ClearReplies();
			if (f_131b_a1_b(tv1)) {
				tv0->AddReply(519628, 20811, 20810);
			}
			if (f_1327_a1_b(tv1)) {
				tv0->AddReply(519248, 20399, 20397);
			}
			tv0->AddReply(519249, -1, 20398);
			break;
			return;
		}
		if (f_1187_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_10c6_a1_v(tv2);
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

	void f_29c_a1_v(string a0)
	{
		if (!f_1187_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_10d6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_10f4_a0_v();
			if (a1 == 20378) {
				f_1189_a2_v(tv1, tv0);
				f_127b_a2_v(tv1, tv0);
			}
			if (a1 == 20814) {
				f_1189_a2_v(tv1, tv0);
				f_127b_a2_v(tv1, tv0);
			}
			if (a1 == 20422) {
				f_11a9_a2_v(tv1, tv0);
			}
			if (a1 == 20423) {
				f_11a9_a2_v(tv1, tv0);
			}
			if (a1 == 20420) {
				f_11a9_a2_v(tv1, tv0);
			}
			if (a1 == 20409) {
				f_11b3_a2_v(tv1, tv0);
			}
			if (a0 == 20357) {
				if (f_130f_a1_b(tv1)) {
					f_11a3_a2_v(tv1, tv0);
					f_126a_a2_v(tv1, tv0);
					f_29c_a1_v("Neutral");
					tv0->SetMessage(519215);
					tv0->ClearReplies();
					tv0->AddReply(519216, 29206, 20358);
					tv0->AddReply(519240, 20385, 20384);
					return;
				}
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519247);
				tv0->ClearReplies();
				if (f_131b_a1_b(tv1)) {
					tv0->AddReply(519628, 20811, 20810);
				}
				if (f_1327_a1_b(tv1)) {
					tv0->AddReply(519248, 20399, 20397);
				}
				tv0->AddReply(519249, -1, 20398);
				return;
			}
			if (a0 == 20399) {
				f_29c_a1_v("Anger");
				tv0->SetMessage(519250);
				tv0->ClearReplies();
				tv0->AddReply(519251, 20402, 20400);
				tv0->AddReply(519252, 20402, 20401);
				return;
			}
			if (a0 == 20402) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519253);
				tv0->ClearReplies();
				tv0->AddReply(519254, 20405, 20404);
				tv0->AddReply(519256, 20407, 20406);
				return;
			}
			if (a0 == 20407) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519257);
				tv0->ClearReplies();
				tv0->AddReply(519258, 20413, 20408);
				tv0->AddReply(519259, -1, 20409);
				return;
			}
			if (a0 == 20405) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519255);
				tv0->ClearReplies();
				tv0->AddReply(519260, 20413, 20410);
				tv0->AddReply(519261, 20412, 20411);
				return;
			}
			if (a0 == 20412) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519262);
				tv0->ClearReplies();
				tv0->AddReply(519264, 20413, 20415);
				return;
			}
			if (a0 == 20413) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519263);
				tv0->ClearReplies();
				tv0->AddReply(519265, 20418, 20417);
				return;
			}
			if (a0 == 20418) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519266);
				tv0->ClearReplies();
				tv0->AddReply(519267, 20421, 20419);
				tv0->AddReply(519268, -1, 20420);
				return;
			}
			if (a0 == 20421) {
				f_29c_a1_v("Repentance");
				tv0->SetMessage(519269);
				tv0->ClearReplies();
				tv0->AddReply(519270, -1, 20422);
				tv0->AddReply(519271, -1, 20423);
				return;
			}
			if (a0 == 20811) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519629);
				tv0->ClearReplies();
				tv0->AddReply(519630, 20813, 20812);
				return;
			}
			if (a0 == 20813) {
				f_29c_a1_v("Anger");
				tv0->SetMessage(519631);
				tv0->ClearReplies();
				tv0->AddReply(519632, -1, 20814);
				return;
			}
			if (a0 == 20385) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519241);
				tv0->ClearReplies();
				tv0->AddReply(519242, 20359, 20386);
				return;
			}
			if (a0 == 29206) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(527862);
				tv0->ClearReplies();
				tv0->AddReply(527863, 20359, 29207);
				return;
			}
			if (a0 == 20359) {
				f_29c_a1_v("Patronage");
				tv0->SetMessage(519217);
				tv0->ClearReplies();
				tv0->AddReply(519218, 20361, 20360);
				tv0->AddReply(519244, 20363, 20389);
				return;
			}
			if (a0 == 20361) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519219);
				tv0->ClearReplies();
				tv0->AddReply(519220, 20363, 20362);
				return;
			}
			if (a0 == 20363) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519221);
				tv0->ClearReplies();
				tv0->AddReply(519222, 20365, 20364);
				tv0->AddReply(519245, 20365, 20391);
				return;
			}
			if (a0 == 20365) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519223);
				tv0->ClearReplies();
				tv0->AddReply(519224, 20367, 20366);
				tv0->AddReply(519246, 20369, 20394);
				return;
			}
			if (a0 == 20367) {
				f_29c_a1_v("Anger");
				tv0->SetMessage(519225);
				tv0->ClearReplies();
				tv0->AddReply(519226, 20369, 20368);
				return;
			}
			if (a0 == 20369) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519227);
				tv0->ClearReplies();
				tv0->AddReply(519228, 20375, 20370);
				tv0->AddReply(519229, 20372, 20371);
				return;
			}
			if (a0 == 20372) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519230);
				tv0->ClearReplies();
				tv0->AddReply(519231, 20375, 20373);
				tv0->AddReply(519232, -1, 20374);
				return;
			}
			if (a0 == 20375) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519233);
				tv0->ClearReplies();
				tv0->AddReply(519234, 20377, 20376);
				tv0->AddReply(519237, 20381, 20380);
				return;
			}
			if (a0 == 20381) {
				f_29c_a1_v("Repentance");
				tv0->SetMessage(519238);
				tv0->ClearReplies();
				tv0->AddReply(519239, 20377, 20382);
				return;
			}
			if (a0 == 20377) {
				f_29c_a1_v("Neutral");
				tv0->SetMessage(519235);
				tv0->ClearReplies();
				tv0->AddReply(519236, -1, 20378);
				return;
			}
			tv3 = true;
			if (f_1187_a0_b()) {
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
		if (!f_fe5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1181_a0_i());
		L0->SetNPCDescription(f_117f_a0_i());
		L0->SetPhoto(f_1183_a0_s());
		L0->SetPhoto2(f_1185_a0_s());
		L0->SetPlayerName(f_143f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_103c_a1_b(f_10fb_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_102a_a1_v(a0);
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
			if (f_1333_a1_b(tv1)) {
				f_11bd_a2_v(tv1, tv0);
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519752);
				tv0->ClearReplies();
				tv0->AddReply(519753, 20908, 20907);
				tv0->AddReply(519791, 20910, 20951);
				break;
			}
			f_5d2_a1_v("Neutral");
			tv0->SetMessage(519792);
			tv0->ClearReplies();
			if (f_133f_a1_b(tv1)) {
				tv0->AddReply(519793, 20954, 20953);
			}
			if (f_134b_a1_b(tv1)) {
				tv0->AddReply(519798, 28439, 20958);
			}
			if (f_1357_a1_b(tv1)) {
				tv0->AddReply(519807, 20968, 20967);
			}
			tv0->AddReply(519810, -1, 20970);
			break;
			return;
		}
		if (f_1187_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_10c6_a1_v(tv2);
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

	void f_5d2_a1_v(string a0)
	{
		if (!f_1187_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_10d6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_10f4_a0_v();
			if (a1 == 20926) {
				f_11d5_a2_v(tv1, tv0);
				f_12ab_a2_v(tv1, tv0);
			}
			if (a1 == 28438) {
				f_11d5_a2_v(tv1, tv0);
				f_12ab_a2_v(tv1, tv0);
			}
			if (a1 == 20953) {
				f_11c3_a2_v(tv1, tv0);
			}
			if (a1 == 20957) {
				f_129b_a2_v(tv1, tv0);
			}
			if (a1 == 20958) {
				f_11c9_a2_v(tv1, tv0);
			}
			if (a1 == 20967) {
				f_11cf_a2_v(tv1, tv0);
			}
			if (a1 == 20969) {
				f_1270_a2_v(tv1, tv0);
			}
			if (a0 == 20906) {
				if (f_1333_a1_b(tv1)) {
					f_11bd_a2_v(tv1, tv0);
					f_5d2_a1_v("Neutral");
					tv0->SetMessage(519752);
					tv0->ClearReplies();
					tv0->AddReply(519753, 20908, 20907);
					tv0->AddReply(519791, 20910, 20951);
					return;
				}
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519792);
				tv0->ClearReplies();
				if (f_133f_a1_b(tv1)) {
					tv0->AddReply(519793, 20954, 20953);
				}
				if (f_134b_a1_b(tv1)) {
					tv0->AddReply(519798, 28439, 20958);
				}
				if (f_1357_a1_b(tv1)) {
					tv0->AddReply(519807, 20968, 20967);
				}
				tv0->AddReply(519810, -1, 20970);
				return;
			}
			if (a0 == 20968) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519808);
				tv0->ClearReplies();
				tv0->AddReply(519809, -1, 20969);
				return;
			}
			if (a0 == 28439) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(527140);
				tv0->ClearReplies();
				tv0->AddReply(527141, 28441, 28440);
				return;
			}
			if (a0 == 28441) {
				f_5d2_a1_v("Patronage");
				tv0->SetMessage(527142);
				tv0->ClearReplies();
				tv0->AddReply(519802, 20963, 20962);
				tv0->AddReply(519806, -1, 20966);
				return;
			}
			if (a0 == 20963) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519803);
				tv0->ClearReplies();
				tv0->AddReply(519804, -1, 20964);
				tv0->AddReply(519805, -1, 20965);
				return;
			}
			if (a0 == 20954) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519794);
				tv0->ClearReplies();
				tv0->AddReply(519795, 20956, 20955);
				return;
			}
			if (a0 == 20956) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519796);
				tv0->ClearReplies();
				tv0->AddReply(519797, -1, 20957);
				return;
			}
			if (a0 == 20908) {
				f_5d2_a1_v("Patronage");
				tv0->SetMessage(519754);
				tv0->ClearReplies();
				tv0->AddReply(519755, 20910, 20909);
				tv0->AddReply(519788, 20948, 20947);
				return;
			}
			if (a0 == 20948) {
				f_5d2_a1_v("Anger");
				tv0->SetMessage(519789);
				tv0->ClearReplies();
				tv0->AddReply(519790, 20910, 20949);
				return;
			}
			if (a0 == 20910) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519756);
				tv0->ClearReplies();
				tv0->AddReply(519757, 20912, 20911);
				tv0->AddReply(519783, 20942, 20941);
				return;
			}
			if (a0 == 20942) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519784);
				tv0->ClearReplies();
				tv0->AddReply(519785, 20944, 20943);
				return;
			}
			if (a0 == 20944) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519786);
				tv0->ClearReplies();
				tv0->AddReply(519787, 20912, 20945);
				return;
			}
			if (a0 == 20912) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519758);
				tv0->ClearReplies();
				tv0->AddReply(519759, 20914, 20913);
				tv0->AddReply(519782, 20920, 20939);
				return;
			}
			if (a0 == 20914) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519760);
				tv0->ClearReplies();
				tv0->AddReply(519761, 20916, 20915);
				tv0->AddReply(519777, 20934, 20933);
				return;
			}
			if (a0 == 20934) {
				f_5d2_a1_v("Patronage");
				tv0->SetMessage(519778);
				tv0->ClearReplies();
				tv0->AddReply(519779, 20936, 20935);
				return;
			}
			if (a0 == 20936) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519780);
				tv0->ClearReplies();
				tv0->AddReply(519781, 20916, 20937);
				return;
			}
			if (a0 == 20916) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519762);
				tv0->ClearReplies();
				tv0->AddReply(519763, 20918, 20917);
				tv0->AddReply(519773, 20928, 20927);
				return;
			}
			if (a0 == 20928) {
				f_5d2_a1_v("Patronage");
				tv0->SetMessage(519774);
				tv0->ClearReplies();
				tv0->AddReply(519775, 20920, 20929);
				tv0->AddReply(519776, 20920, 20931);
				return;
			}
			if (a0 == 20918) {
				f_5d2_a1_v("Repentance");
				tv0->SetMessage(519764);
				tv0->ClearReplies();
				tv0->AddReply(519765, 20920, 20919);
				tv0->AddReply(527079, 28377, 28376);
				return;
			}
			if (a0 == 28377) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(527080);
				tv0->ClearReplies();
				tv0->AddReply(527081, 20920, 28378);
				return;
			}
			if (a0 == 20920) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519766);
				tv0->ClearReplies();
				tv0->AddReply(519767, 20922, 20921);
				return;
			}
			if (a0 == 20922) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(519768);
				tv0->ClearReplies();
				tv0->AddReply(519769, 20924, 20923);
				return;
			}
			if (a0 == 20924) {
				f_5d2_a1_v("Anger");
				tv0->SetMessage(519770);
				tv0->ClearReplies();
				tv0->AddReply(527082, 28381, 28380);
				return;
			}
			if (a0 == 28381) {
				f_5d2_a1_v("Neutral");
				tv0->SetMessage(527083);
				tv0->ClearReplies();
				tv0->AddReply(519772, -1, 20926);
				tv0->AddReply(527139, -1, 28438);
				return;
			}
			tv3 = true;
			if (f_1187_a0_b()) {
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
		if (!f_fe5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1181_a0_i());
		L0->SetNPCDescription(f_117f_a0_i());
		L0->SetPhoto(f_1183_a0_s());
		L0->SetPhoto2(f_1185_a0_s());
		L0->SetPlayerName(f_143f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_103c_a1_b(f_10fb_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_102a_a1_v(a0);
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
			f_8e6_a1_v("Neutral");
			tv0->SetMessage(520698);
			tv0->ClearReplies();
			tv0->AddReply(520699, 21910, 21909);
			tv0->AddReply(520705, 21916, 21915);
			break;
			return;
		}
		if (f_1187_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_10c6_a1_v(tv2);
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

	void f_8e6_a1_v(string a0)
	{
		if (!f_1187_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_10d6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_10f4_a0_v();
			if (a0 == 21908) {
				f_8e6_a1_v("Neutral");
				tv0->SetMessage(520698);
				tv0->ClearReplies();
				tv0->AddReply(520699, 21910, 21909);
				tv0->AddReply(520705, 21916, 21915);
				return;
			}
			if (a0 == 21916) {
				f_8e6_a1_v("Neutral");
				tv0->SetMessage(520706);
				tv0->ClearReplies();
				tv0->AddReply(520707, 21912, 21917);
				return;
			}
			if (a0 == 21910) {
				f_8e6_a1_v("Neutral");
				tv0->SetMessage(520700);
				tv0->ClearReplies();
				tv0->AddReply(520701, 21912, 21911);
				return;
			}
			if (a0 == 21912) {
				f_8e6_a1_v("Neutral");
				tv0->SetMessage(520702);
				tv0->ClearReplies();
				tv0->AddReply(520703, -1, 21913);
				tv0->AddReply(520704, -1, 21914);
				return;
			}
			tv3 = true;
			if (f_1187_a0_b()) {
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
		if (!f_fe5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1181_a0_i());
		L0->SetNPCDescription(f_117f_a0_i());
		L0->SetPhoto(f_1183_a0_s());
		L0->SetPhoto2(f_1185_a0_s());
		L0->SetPlayerName(f_143f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_103c_a1_b(f_10fb_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_102a_a1_v(a0);
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
			if (f_12c7_a1_b(tv1)) {
				f_1244_a2_v(tv1, tv0);
				f_a56_a1_v("Neutral");
				tv0->SetMessage(522082);
				tv0->ClearReplies();
				tv0->AddReply(523463, 24690, 24689);
				tv0->AddReply(523518, 24749, 24748);
				tv0->AddReply(523517, 24750, 24747);
				break;
			}
			f_a56_a1_v("Neutral");
			tv0->SetMessage(522085);
			tv0->ClearReplies();
			if (f_12d3_a1_b(tv1) && f_12df_a1_b(tv1)) {
				tv0->AddReply(523467, 24695, 24693);
			}
			if (f_12d3_a1_b(tv1) && f_12eb_a1_b(tv1)) {
				tv0->AddReply(523468, 24699, 24694);
			}
			if (f_12d3_a1_b(tv1) && f_12f7_a1_b(tv1)) {
				tv0->AddReply(523479, 24706, 24705);
			}
			if (f_12d3_a1_b(tv1) && f_1303_a1_b(tv1)) {
				tv0->AddReply(523508, 24739, 24738);
			}
			tv0->AddReply(522086, -1, 23255);
			break;
			return;
		}
		if (f_1187_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_10c6_a1_v(tv2);
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

	void f_a56_a1_v(string a0)
	{
		if (!f_1187_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_10d6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_10f4_a0_v();
			if (a1 == 23252) {
				f_123b_a2_v(tv1, tv0);
			}
			if (a1 == 24761) {
				f_123b_a2_v(tv1, tv0);
			}
			if (a1 == 24693) {
				f_1252_a2_v(tv1, tv0);
			}
			if (a1 == 24694) {
				f_1258_a2_v(tv1, tv0);
			}
			if (a1 == 24705) {
				f_125e_a2_v(tv1, tv0);
			}
			if (a1 == 24714) {
				f_124a_a2_v(tv1, tv0);
			}
			if (a1 == 24715) {
				f_124a_a2_v(tv1, tv0);
			}
			if (a1 == 24738) {
				f_1264_a2_v(tv1, tv0);
			}
			if (a0 == 23251) {
				if (f_12c7_a1_b(tv1)) {
					f_1244_a2_v(tv1, tv0);
					f_a56_a1_v("Neutral");
					tv0->SetMessage(522082);
					tv0->ClearReplies();
					tv0->AddReply(523463, 24690, 24689);
					tv0->AddReply(523518, 24749, 24748);
					tv0->AddReply(523517, 24750, 24747);
					return;
				}
				f_a56_a1_v("Neutral");
				tv0->SetMessage(522085);
				tv0->ClearReplies();
				if (f_12d3_a1_b(tv1) && f_12df_a1_b(tv1)) {
					tv0->AddReply(523467, 24695, 24693);
				}
				if (f_12d3_a1_b(tv1) && f_12eb_a1_b(tv1)) {
					tv0->AddReply(523468, 24699, 24694);
				}
				if (f_12d3_a1_b(tv1) && f_12f7_a1_b(tv1)) {
					tv0->AddReply(523479, 24706, 24705);
				}
				if (f_12d3_a1_b(tv1) && f_1303_a1_b(tv1)) {
					tv0->AddReply(523508, 24739, 24738);
				}
				tv0->AddReply(522086, -1, 23255);
				return;
			}
			if (a0 == 24739) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523509);
				tv0->ClearReplies();
				tv0->AddReply(523510, 24742, 24740);
				tv0->AddReply(523511, -1, 24741);
				return;
			}
			if (a0 == 24742) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523512);
				tv0->ClearReplies();
				tv0->AddReply(523513, -1, 24743);
				tv0->AddReply(523514, 24745, 24744);
				return;
			}
			if (a0 == 24745) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523515);
				tv0->ClearReplies();
				tv0->AddReply(523516, -1, 24746);
				return;
			}
			if (a0 == 24706) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523480);
				tv0->ClearReplies();
				tv0->AddReply(523481, 24709, 24707);
				tv0->AddReply(523482, 24709, 24708);
				return;
			}
			if (a0 == 24709) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523483);
				tv0->ClearReplies();
				tv0->AddReply(523484, 24713, 24710);
				tv0->AddReply(523485, 24713, 24711);
				return;
			}
			if (a0 == 24713) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523487);
				tv0->ClearReplies();
				tv0->AddReply(523488, -1, 24714);
				tv0->AddReply(523489, -1, 24715);
				return;
			}
			if (a0 == 24699) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523473);
				tv0->ClearReplies();
				tv0->AddReply(523474, 24701, 24700);
				return;
			}
			if (a0 == 24701) {
				f_a56_a1_v("Patronage");
				tv0->SetMessage(523475);
				tv0->ClearReplies();
				tv0->AddReply(523476, 24703, 24702);
				return;
			}
			if (a0 == 24703) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523477);
				tv0->ClearReplies();
				tv0->AddReply(523490, 24720, 24718);
				tv0->AddReply(523491, -1, 24719);
				return;
			}
			if (a0 == 24720) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523492);
				tv0->ClearReplies();
				tv0->AddReply(523493, -1, 24721);
				return;
			}
			if (a0 == 24695) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523469);
				tv0->ClearReplies();
				tv0->AddReply(523470, 24697, 24696);
				return;
			}
			if (a0 == 24697) {
				f_a56_a1_v("Repentance");
				tv0->SetMessage(523471);
				tv0->ClearReplies();
				tv0->AddReply(523472, 24704, 24698);
				return;
			}
			if (a0 == 24704) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523478);
				tv0->ClearReplies();
				tv0->AddReply(523494, 24723, 24722);
				tv0->AddReply(523501, 24730, 24729);
				return;
			}
			if (a0 == 24730) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523502);
				tv0->ClearReplies();
				tv0->AddReply(523503, 24723, 24731);
				return;
			}
			if (a0 == 24723) {
				f_a56_a1_v("Anger");
				tv0->SetMessage(523495);
				tv0->ClearReplies();
				tv0->AddReply(523499, 24728, 24727);
				tv0->AddReply(523496, 24725, 24724);
				return;
			}
			if (a0 == 24725) {
				f_a56_a1_v("Repentance");
				tv0->SetMessage(523497);
				tv0->ClearReplies();
				tv0->AddReply(523498, 24728, 24726);
				return;
			}
			if (a0 == 24728) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523500);
				tv0->ClearReplies();
				tv0->AddReply(523504, 24735, 24734);
				return;
			}
			if (a0 == 24735) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523505);
				tv0->ClearReplies();
				tv0->AddReply(523506, -1, 24736);
				tv0->AddReply(523507, -1, 24737);
				return;
			}
			if (a0 == 24750) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523520);
				tv0->ClearReplies();
				tv0->AddReply(523521, 24752, 24751);
				tv0->AddReply(523527, 24690, 24759);
				return;
			}
			if (a0 == 24752) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523522);
				tv0->ClearReplies();
				tv0->AddReply(523523, 24754, 24753);
				return;
			}
			if (a0 == 24754) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523524);
				tv0->ClearReplies();
				tv0->AddReply(523525, 24690, 24755);
				return;
			}
			if (a0 == 24749) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523519);
				tv0->ClearReplies();
				tv0->AddReply(523526, 24750, 24757);
				return;
			}
			if (a0 == 24690) {
				f_a56_a1_v("Neutral");
				tv0->SetMessage(523464);
				tv0->ClearReplies();
				if (!f_12bb_a1_b(tv1)) {
					tv0->AddReply(523465, 24692, 24691);
				}
				if (f_12bb_a1_b(tv1)) {
					tv0->AddReply(522084, -1, 23253);
				}
				return;
			}
			if (a0 == 24692) {
				f_a56_a1_v("Repentance");
				tv0->SetMessage(523466);
				tv0->ClearReplies();
				tv0->AddReply(522083, -1, 23252);
				tv0->AddReply(523528, -1, 24761);
				return;
			}
			tv3 = true;
			if (f_1187_a0_b()) {
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
		if (!f_fe5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1181_a0_i());
		L0->SetNPCDescription(f_117f_a0_i());
		L0->SetPhoto(f_1183_a0_s());
		L0->SetPhoto2(f_1185_a0_s());
		L0->SetPlayerName(f_143f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_103c_a1_b(f_10fb_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_102a_a1_v(a0);
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
			f_dc2_a1_v("Neutral");
			tv0->SetMessage(529898);
			tv0->ClearReplies();
			tv0->AddReply(529899, -1, 31282);
			tv0->AddReply(529900, -1, 31283);
			break;
			return;
		}
		if (f_1187_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_10c6_a1_v(tv2);
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

	void f_dc2_a1_v(string a0)
	{
		if (!f_1187_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_10d6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_10f4_a0_v();
			if (a0 == 31281) {
				f_dc2_a1_v("Neutral");
				tv0->SetMessage(529898);
				tv0->ClearReplies();
				tv0->AddReply(529899, -1, 31282);
				tv0->AddReply(529900, -1, 31283);
				return;
			}
			tv3 = true;
			if (f_1187_a0_b()) {
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
		if (!f_fe5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1181_a0_i());
		L0->SetNPCDescription(f_117f_a0_i());
		L0->SetPhoto(f_1183_a0_s());
		L0->SetPhoto2(f_1185_a0_s());
		L0->SetPlayerName(f_143f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_103c_a1_b(f_10fb_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_102a_a1_v(a0);
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
			f_e8d_a1_v("Neutral");
			tv0->SetMessage(529902);
			tv0->ClearReplies();
			tv0->AddReply(529903, -1, 31286);
			tv0->AddReply(529904, -1, 31287);
			break;
			return;
		}
		if (f_1187_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_10c6_a1_v(tv2);
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

	void f_e8d_a1_v(string a0)
	{
		if (!f_1187_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_10d6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_10f4_a0_v();
			if (a0 == 31285) {
				f_e8d_a1_v("Neutral");
				tv0->SetMessage(529902);
				tv0->ClearReplies();
				tv0->AddReply(529903, -1, 31286);
				tv0->AddReply(529904, -1, 31287);
				return;
			}
			tv3 = true;
			if (f_1187_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t14
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_fe5_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1181_a0_i());
		L0->SetNPCDescription(f_117f_a0_i());
		L0->SetPhoto(f_1183_a0_s());
		L0->SetPhoto2(f_1185_a0_s());
		L0->SetPlayerName(f_143f_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_103c_a1_b(f_10fb_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_102a_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t15
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
			f_f58_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_1187_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_10c6_a1_v(tv2);
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

	void f_f58_a1_v(string a0)
	{
		if (!f_1187_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_10d6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_10f4_a0_v();
			if (a0 == 42563) {
				f_f58_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_1187_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t16
{
	void init(void)
	{
		g1 = false;
		f_f9f_a0_v();
	}

	void f_f9f_a0_v(void)
	{
		if (!f_fe0_a0_b()) {
			@Hold();
		}
		for (; ; ) {
			f_10c6_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void OnUnload(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_fd7_a1_b(a0);
			enable OnUse;
			f_1450_a1_v(a0);
		}
	}
}

void f_fc6_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_fcd_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_fd7_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_fcd_a1_b(L0);
}

bool f_fe0_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_fe5_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1101_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1187_a0_b()) {
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

void f_102a_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1187_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_103c_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_1076_a1_b(a0)) {
			if (!f_109b_a1_b(a0)) {
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
		if (!f_109b_a1_b(a0)) {
			if (!f_1076_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_1076_a1_b(object a0)
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
	return f_10e5_a1_b(L4);
}

bool f_109b_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_115d_a0_i() + "m";
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
	return f_10e5_a1_b(L4);
}

void f_10c6_a1_v(string a0)
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

void f_10d6_a2_v(string a0, bool a1)
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

bool f_10e5_a1_b(string a0)
{
	if (f_1187_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_10f4_a0_v(void)
{
	if (f_1187_a0_b()) {
		@lshStopSpeech();
	}
}

object f_10fb_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1101_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_110b_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_1110_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_1121_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_112d_a2_v(object a0, int a1)
{
	f_fc6_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1121_a2_v(L0, a1);
	}
}

bool f_1140_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

bool f_114c_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

float f_1158_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_115d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1166_a1_b(int a0)
{
	return f_115d_a0_i() == a0;
}

bool f_116c_a1_b(int a0)
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

int f_117f_a0_i(void)
{
	return 515531;
}

int f_1181_a0_i(void)
{
	return 502857;
}

string f_1183_a0_s(void)
{
	return "ui/NPC_BigVlad.png";
}

string f_1185_a0_s(void)
{
	return "ui/NPC_BigVlad_b.png";
}

bool f_1187_a0_b(void)
{
	return true;
}

void f_1189_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b3q01", 1);
	L0 = f_140d_a0_o();
	L0->AddMark("b3q01BigVladGotoOspina", "pt_map_ospina", 1, 519627, f_1158_a0_f());
	f_13b0_a0_v();
	f_13bd_a0_v();
}

void f_11a3_a2_v(object a0, object a1)
{
	@SetVariable("oob3BigVlad1", 1);
}

void f_11a9_a2_v(object a0, object a1)
{
	f_13ca_a0_v();
	f_1140_a2_b("quest_b3_01", "completed");
}

void f_11b3_a2_v(object a0, object a1)
{
	f_13d7_a0_v();
	f_1140_a2_b("quest_b3_01", "completed");
}

void f_11bd_a2_v(object a0, object a1)
{
	@SetVariable("oob1BigVlad1", 1);
}

void f_11c3_a2_v(object a0, object a1)
{
	@SetVariable("oob1BigVlad2", 1);
}

void f_11c9_a2_v(object a0, object a1)
{
	@SetVariable("oob1BigVlad3", 1);
}

void f_11cf_a2_v(object a0, object a1)
{
	@SetVariable("oob1BigVlad4", 1);
}

void f_11d5_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b1q01", 1);
	L0 = f_140d_a0_o();
	L0->AddMark("b1q01BigVladGotoKapella", "pt_map_kapella", 3, 518128, f_1158_a0_f());
	L0->AddMark("b1q01BigVladGotoMladVlad", "pt_map_mladvlad", 3, 520041, f_1158_a0_f());
	f_137c_a0_v();
	f_1389_a0_v();
}

void f_11f8_a2_v(object a0, object a1)
{
	f_1110_a2_v("cot_alexandr@door1", false);
}

void f_11ff_a2_v(object a0, object a1)
{
	f_1110_a2_v("cot_katerina@door1", false);
}

void f_1206_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b2q01", 1);
	L0 = f_140d_a0_o();
	L0->AddMark("b2q01BigVladGotoAlexandr", "pt_map_alexandr", 1, 519625, f_1158_a0_f());
	L0->AddMark("b2q01BigVladGotoKaterina", "pt_map_katerina", 1, 519626, f_1158_a0_f());
	L0->AddMark("b2q01BigVladGotoMladVlad", "pt_map_mladvlad", 3, 519624, f_1158_a0_f());
	L0->AddMark("b2q01BigVladGotoDanko", "pt_map_eva", 3, 530806, f_1158_a0_f());
	f_1396_a0_v();
	f_13a3_a0_v();
}

void f_123b_a2_v(object a0, object a1)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	f_136f_a0_v();
}

void f_1244_a2_v(object a0, object a1)
{
	@SetVariable("oob11BigVlad1", 1);
}

void f_124a_a2_v(object a0, object a1)
{
	f_114c_a3_b("volonteers_burah", "kill", "bigvlad");
}

void f_1252_a2_v(object a0, object a1)
{
	@SetVariable("oob11BigVlad2", 1);
}

void f_1258_a2_v(object a0, object a1)
{
	@SetVariable("oob11BigVlad3", 1);
}

void f_125e_a2_v(object a0, object a1)
{
	@SetVariable("oob11BigVlad4", 1);
}

void f_1264_a2_v(object a0, object a1)
{
	@SetVariable("oob11BigVlad5", 1);
}

void f_126a_a2_v(object a0, object a1)
{
	@SetVariable("b3BigVladVisit", 1);
}

void f_1270_a2_v(object a0, object a1)
{
	int L0;
	@irand(L0, 30);
	f_112d_a2_v(a0, L0 + 20);
}

void f_127b_a2_v(object a0, object a1)
{
	f_141e_a3_v(f_140d_a0_o(), "pt_map_ospina", 2);
	a1->ShowMap(f_140d_a0_o());
}

void f_128b_a2_v(object a0, object a1)
{
	f_141e_a3_v(f_140d_a0_o(), "pt_map_alexandr", 2);
	a1->ShowMap(f_140d_a0_o());
}

void f_129b_a2_v(object a0, object a1)
{
	f_141e_a3_v(f_140d_a0_o(), "pt_map_mladvlad", 2);
	a1->ShowMap(f_140d_a0_o());
}

void f_12ab_a2_v(object a0, object a1)
{
	f_141e_a3_v(f_140d_a0_o(), "pt_map_kapella", 2);
	a1->ShowMap(f_140d_a0_o());
}

bool f_12bb_a1_b(object a0)
{
	if (f_110b_a1_i("b11q01") == 1000) {
		return true;
	}
	return false;
}

bool f_12c7_a1_b(object a0)
{
	if (f_110b_a1_i("oob11BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_12d3_a1_b(object a0)
{
	if (f_110b_a1_i("b11KnowBigVladKill") != 0) {
		return true;
	}
	return false;
}

bool f_12df_a1_b(object a0)
{
	if (f_110b_a1_i("oob11BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_12eb_a1_b(object a0)
{
	if (f_110b_a1_i("oob11BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_12f7_a1_b(object a0)
{
	if (f_110b_a1_i("oob11BigVlad4") == 0) {
		return true;
	}
	return false;
}

bool f_1303_a1_b(object a0)
{
	if (f_110b_a1_i("oob11BigVlad5") == 0) {
		return true;
	}
	return false;
}

bool f_130f_a1_b(object a0)
{
	if (f_110b_a1_i("oob3BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_131b_a1_b(object a0)
{
	if (f_110b_a1_i("b3q01") == 0) {
		return true;
	}
	return false;
}

bool f_1327_a1_b(object a0)
{
	if (f_110b_a1_i("b3q01") == 3) {
		return true;
	}
	return false;
}

bool f_1333_a1_b(object a0)
{
	if (f_110b_a1_i("oob1BigVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_133f_a1_b(object a0)
{
	if (f_110b_a1_i("oob1BigVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_134b_a1_b(object a0)
{
	if (f_110b_a1_i("oob1BigVlad3") == 0) {
		return true;
	}
	return false;
}

bool f_1357_a1_b(object a0)
{
	if (f_110b_a1_i("oob1BigVlad4") == 0) {
		return true;
	}
	return false;
}

bool f_1363_a1_b(object a0)
{
	if (f_110b_a1_i("b2q01") == 0) {
		return true;
	}
	return false;
}

void f_136f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 315, 1, 522057);
	f_13f1_a2_b(L0, 313);
}

void f_137c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 242, 1, 520039);
	f_13f1_a2_b(L0, -1);
}

void f_1389_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 243, 1, 520040);
	f_13f1_a2_b(L0, 242);
}

void f_1396_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 245, 1, 520466);
	f_13f1_a2_b(L0, -1);
}

void f_13a3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 246, 1, 520467);
	f_13f1_a2_b(L0, 245);
}

void f_13b0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 221, 1, 519633);
	f_13f1_a2_b(L0, -1);
}

void f_13bd_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 222, 1, 519634);
	f_13f1_a2_b(L0, 221);
}

void f_13ca_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 225, 1, 519650);
	f_13f1_a2_b(L0, 221);
}

void f_13d7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 226, 1, 519651);
	f_13f1_a2_b(L0, 221);
}

object f_13e4_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_13f1_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_13e4_a0_o();
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

object f_140d_a0_o(void)
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

void f_141e_a3_v(object a0, string a1, float a2)
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

int f_143f_a0_i(void)
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

void f_1450_a1_v(object a0)
{
	if (!g1) {
		t6{a0};
		g1 = true;
	}
	if (f_116c_a1_b(2)) {
		t10{a0};
		return;
	}
	if (f_116c_a1_b(3)) {
		t12{a0};
		return;
	}
	if (f_1166_a1_b(1)) {
		t4{a0};
		return;
	}
	if (f_1166_a1_b(2)) {
		t0{a0};
		return;
	}
	if (f_1166_a1_b(3)) {
		t2{a0};
		return;
	}
	if (f_1166_a1_b(11)) {
		t8{a0};
		return;
	}
	t14{a0};
}

