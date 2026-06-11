event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
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
		if (!f_c8b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e52_a0_i());
		L0->SetNPCDescription(f_e50_a0_i());
		L0->SetPhoto(f_e54_a0_s());
		L0->SetPhoto2(f_e56_a0_s());
		L0->SetPlayerName(f_105e_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_ce2_a1_b(f_da1_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_cd0_a1_v(a0);
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
			f_bb_a1_v("Neutral");
			tv0->SetMessage(525420);
			tv0->ClearReplies();
			if (f_f53_a1_b(tv1)) {
				tv0->AddReply(525620, 41124, 26962);
			}
			if (f_f23_a1_b(tv1) && f_f47_a1_b(tv1)) {
				tv0->AddReply(525421, 42590, 26789);
			}
			if (f_f83_a1_b(tv1) && f_f8f_a1_b(tv1)) {
				tv0->AddReply(541574, 43746, 43745);
			}
			tv0->AddReply(525424, -1, 26792);
			tv0->AddReply(539182, -1, 41123);
			break;
			return;
		}
		if (f_e58_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_d6c_a1_v(tv2);
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

	void f_bb_a1_v(string a0)
	{
		if (!f_e58_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_d7c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d9a_a0_v();
			if (a1 == 26964) {
				f_e82_a2_v(tv1, tv0);
			}
			if (a1 == 26789) {
				f_eb3_a2_v(tv1, tv0);
			}
			if (a1 == 26791) {
				f_e6b_a2_v(tv1, tv0);
				f_f06_a2_v(tv1, tv0);
			}
			if (a1 == 42604) {
				f_e6b_a2_v(tv1, tv0);
				f_f06_a2_v(tv1, tv0);
			}
			if (a1 == 43745) {
				f_ef6_a2_v(tv1, tv0);
			}
			if (a1 == 43750) {
				f_e64_a2_v(tv1, tv0);
			}
			if (a1 == 43751) {
				f_eef_a2_v(tv1, tv0);
			}
			if (a0 == 26788) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(525420);
				tv0->ClearReplies();
				if (f_f53_a1_b(tv1)) {
					tv0->AddReply(525620, 41124, 26962);
				}
				if (f_f23_a1_b(tv1) && f_f47_a1_b(tv1)) {
					tv0->AddReply(525421, 42590, 26789);
				}
				if (f_f83_a1_b(tv1) && f_f8f_a1_b(tv1)) {
					tv0->AddReply(541574, 43746, 43745);
				}
				tv0->AddReply(525424, -1, 26792);
				tv0->AddReply(539182, -1, 41123);
				return;
			}
			if (a0 == 43746) {
				f_bb_a1_v("Sympathy");
				tv0->SetMessage(541575);
				tv0->ClearReplies();
				tv0->AddReply(541576, 43749, 43747);
				tv0->AddReply(541577, -1, 43748);
				return;
			}
			if (a0 == 43749) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(541578);
				tv0->ClearReplies();
				tv0->AddReply(541579, -1, 43750);
				tv0->AddReply(541580, -1, 43751);
				return;
			}
			if (a0 == 42590) {
				f_bb_a1_v("Impatience");
				tv0->SetMessage(540576);
				tv0->ClearReplies();
				tv0->AddReply(540577, 42592, 42591);
				return;
			}
			if (a0 == 42592) {
				f_bb_a1_v("Fear");
				tv0->SetMessage(540578);
				tv0->ClearReplies();
				tv0->AddReply(540579, 42594, 42593);
				return;
			}
			if (a0 == 42594) {
				f_bb_a1_v("Sympathy");
				tv0->SetMessage(540580);
				tv0->ClearReplies();
				tv0->AddReply(540581, 26790, 42595);
				tv0->AddReply(540613, 42634, 42633);
				return;
			}
			if (a0 == 42634) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(540614);
				tv0->ClearReplies();
				tv0->AddReply(540615, 42637, 42635);
				return;
			}
			if (a0 == 26790) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(525422);
				tv0->ClearReplies();
				tv0->AddReply(529338, 30794, 30793);
				return;
			}
			if (a0 == 30794) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(529339);
				tv0->ClearReplies();
				tv0->AddReply(540612, 42637, 42632);
				return;
			}
			if (a0 == 42637) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(540617);
				tv0->ClearReplies();
				tv0->AddReply(540618, 42640, 42639);
				tv0->AddReply(540620, 42640, 42641);
				return;
			}
			if (a0 == 42640) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(540619);
				tv0->ClearReplies();
				tv0->AddReply(540582, 42597, 42596);
				return;
			}
			if (a0 == 42597) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(540583);
				tv0->ClearReplies();
				tv0->AddReply(540584, 42599, 42598);
				tv0->AddReply(540588, 42603, 42602);
				return;
			}
			if (a0 == 42603) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(540589);
				tv0->ClearReplies();
				tv0->AddReply(540590, -1, 42604);
				tv0->AddReply(540591, 42616, 42605);
				return;
			}
			if (a0 == 42599) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(540585);
				tv0->ClearReplies();
				tv0->AddReply(540586, 42616, 42600);
				tv0->AddReply(540587, 42616, 42601);
				return;
			}
			if (a0 == 42616) {
				f_bb_a1_v("Impatience");
				tv0->SetMessage(540602);
				tv0->ClearReplies();
				tv0->AddReply(525423, -1, 26791);
				return;
			}
			if (a0 == 41124) {
				f_bb_a1_v("Sympathy");
				tv0->SetMessage(539183);
				tv0->ClearReplies();
				tv0->AddReply(539184, 41126, 41125);
				tv0->AddReply(539188, 41130, 41129);
				return;
			}
			if (a0 == 41126) {
				f_bb_a1_v("Sympathy");
				tv0->SetMessage(539185);
				tv0->ClearReplies();
				tv0->AddReply(539187, 41130, 41128);
				tv0->AddReply(539186, 41130, 41127);
				return;
			}
			if (a0 == 41130) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(539189);
				tv0->ClearReplies();
				tv0->AddReply(539190, 26963, 41132);
				tv0->AddReply(539191, 41134, 41133);
				return;
			}
			if (a0 == 41134) {
				f_bb_a1_v("Fear");
				tv0->SetMessage(539192);
				tv0->ClearReplies();
				tv0->AddReply(539193, 26963, 41135);
				return;
			}
			if (a0 == 26963) {
				f_bb_a1_v("Neutral");
				tv0->SetMessage(525621);
				tv0->ClearReplies();
				tv0->AddReply(525622, -1, 26964);
				return;
			}
			tv3 = true;
			if (f_e58_a0_b()) {
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
		if (!f_c8b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e52_a0_i());
		L0->SetNPCDescription(f_e50_a0_i());
		L0->SetPhoto(f_e54_a0_s());
		L0->SetPhoto2(f_e56_a0_s());
		L0->SetPlayerName(f_105e_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_ce2_a1_b(f_da1_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_cd0_a1_v(a0);
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
			f_380_a1_v("Neutral");
			tv0->SetMessage(525489);
			tv0->ClearReplies();
			tv0->AddReply(525490, 42621, 26846);
			tv0->AddReply(529311, 30766, 30765);
			break;
			return;
		}
		if (f_e58_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_d6c_a1_v(tv2);
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

	void f_380_a1_v(string a0)
	{
		if (!f_e58_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_d7c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d9a_a0_v();
			if (a0 == 26845) {
				f_380_a1_v("Neutral");
				tv0->SetMessage(525489);
				tv0->ClearReplies();
				tv0->AddReply(525490, 42621, 26846);
				tv0->AddReply(529311, 30766, 30765);
				return;
			}
			if (a0 == 30766) {
				f_380_a1_v("Neutral");
				tv0->SetMessage(529312);
				tv0->ClearReplies();
				tv0->AddReply(529313, 42621, 30767);
				tv0->AddReply(540603, 42621, 42620);
				return;
			}
			if (a0 == 42621) {
				f_380_a1_v("Neutral");
				tv0->SetMessage(540604);
				tv0->ClearReplies();
				tv0->AddReply(540605, 42626, 42624);
				tv0->AddReply(540606, -1, 42625);
				return;
			}
			if (a0 == 42626) {
				f_380_a1_v("Neutral");
				tv0->SetMessage(540607);
				tv0->ClearReplies();
				tv0->AddReply(540608, 42628, 42627);
				return;
			}
			if (a0 == 42628) {
				f_380_a1_v("Neutral");
				tv0->SetMessage(540609);
				tv0->ClearReplies();
				tv0->AddReply(540610, -1, 42629);
				tv0->AddReply(540611, -1, 42630);
				return;
			}
			tv3 = true;
			if (f_e58_a0_b()) {
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
		if (!f_c8b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e52_a0_i());
		L0->SetNPCDescription(f_e50_a0_i());
		L0->SetPhoto(f_e54_a0_s());
		L0->SetPhoto2(f_e56_a0_s());
		L0->SetPlayerName(f_105e_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_ce2_a1_b(f_da1_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_cd0_a1_v(a0);
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
			f_4a7_a1_v("Neutral");
			tv0->SetMessage(526198);
			tv0->ClearReplies();
			if (f_f2f_a1_b(tv1)) {
				tv0->AddReply(526199, 30173, 27480);
			}
			tv0->AddReply(526202, -1, 27483);
			break;
			return;
		}
		if (f_e58_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_d6c_a1_v(tv2);
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

	void f_4a7_a1_v(string a0)
	{
		if (!f_e58_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_d7c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d9a_a0_v();
			if (a1 == 27482) {
				f_ea1_a2_v(tv1, tv0);
			}
			if (a0 == 27479) {
				f_4a7_a1_v("Neutral");
				tv0->SetMessage(526198);
				tv0->ClearReplies();
				if (f_f2f_a1_b(tv1)) {
					tv0->AddReply(526199, 30173, 27480);
				}
				tv0->AddReply(526202, -1, 27483);
				return;
			}
			if (a0 == 30173) {
				f_4a7_a1_v("Neutral");
				tv0->SetMessage(528747);
				tv0->ClearReplies();
				tv0->AddReply(528748, 27481, 30174);
				return;
			}
			if (a0 == 27481) {
				f_4a7_a1_v("Sympathy");
				tv0->SetMessage(526200);
				tv0->ClearReplies();
				tv0->AddReply(528750, 30177, 30176);
				tv0->AddReply(541056, 30177, 43159);
				return;
			}
			if (a0 == 30177) {
				f_4a7_a1_v("Neutral");
				tv0->SetMessage(528751);
				tv0->ClearReplies();
				tv0->AddReply(526201, -1, 27482);
				return;
			}
			tv3 = true;
			if (f_e58_a0_b()) {
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
		if (!f_c8b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e52_a0_i());
		L0->SetNPCDescription(f_e50_a0_i());
		L0->SetPhoto(f_e54_a0_s());
		L0->SetPhoto2(f_e56_a0_s());
		L0->SetPlayerName(f_105e_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_ce2_a1_b(f_da1_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_cd0_a1_v(a0);
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
			if (f_f3b_a1_b(tv1)) {
				f_5d3_a1_v("Neutral");
				tv0->SetMessage(526727);
				tv0->ClearReplies();
				tv0->AddReply(526728, 30294, 28005);
				tv0->AddReply(541532, 43694, 43693);
				break;
			}
			f_5d3_a1_v("Neutral");
			tv0->SetMessage(526735);
			tv0->ClearReplies();
			tv0->AddReply(526736, -1, 28013);
			tv0->AddReply(528870, -1, 30293);
			break;
			return;
		}
		if (f_e58_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_d6c_a1_v(tv2);
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

	void f_5d3_a1_v(string a0)
	{
		if (!f_e58_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_d7c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d9a_a0_v();
			if (a1 == 28011) {
				f_eaa_a2_v(tv1, tv0);
			}
			if (a1 == 43707) {
				f_eaa_a2_v(tv1, tv0);
			}
			if (a0 == 28004) {
				if (f_f3b_a1_b(tv1)) {
					f_5d3_a1_v("Neutral");
					tv0->SetMessage(526727);
					tv0->ClearReplies();
					tv0->AddReply(526728, 30294, 28005);
					tv0->AddReply(541532, 43694, 43693);
					return;
				}
				f_5d3_a1_v("Neutral");
				tv0->SetMessage(526735);
				tv0->ClearReplies();
				tv0->AddReply(526736, -1, 28013);
				tv0->AddReply(528870, -1, 30293);
				return;
			}
			if (a0 == 43694) {
				f_5d3_a1_v("Neutral");
				tv0->SetMessage(541533);
				tv0->ClearReplies();
				tv0->AddReply(541534, 43702, 43695);
				return;
			}
			if (a0 == 30294) {
				f_5d3_a1_v("Strength");
				tv0->SetMessage(528871);
				tv0->ClearReplies();
				tv0->AddReply(528872, 28006, 30295);
				tv0->AddReply(541535, 43697, 43696);
				return;
			}
			if (a0 == 43697) {
				f_5d3_a1_v("Neutral");
				tv0->SetMessage(541536);
				tv0->ClearReplies();
				tv0->AddReply(541537, 43699, 43698);
				return;
			}
			if (a0 == 43699) {
				f_5d3_a1_v("Sympathy");
				tv0->SetMessage(541538);
				tv0->ClearReplies();
				tv0->AddReply(541539, 43694, 43700);
				tv0->AddReply(541540, 43702, 43701);
				return;
			}
			if (a0 == 43702) {
				f_5d3_a1_v("Neutral");
				tv0->SetMessage(541541);
				tv0->ClearReplies();
				tv0->AddReply(541543, 30297, 43705);
				return;
			}
			if (a0 == 28006) {
				f_5d3_a1_v("Neutral");
				tv0->SetMessage(526729);
				tv0->ClearReplies();
				tv0->AddReply(528873, 30297, 30296);
				return;
			}
			if (a0 == 30297) {
				f_5d3_a1_v("Impatience");
				tv0->SetMessage(528874);
				tv0->ClearReplies();
				tv0->AddReply(528875, 30299, 30298);
				return;
			}
			if (a0 == 30299) {
				f_5d3_a1_v("Impatience");
				tv0->SetMessage(528876);
				tv0->ClearReplies();
				tv0->AddReply(526730, 28008, 28007);
				tv0->AddReply(541544, -1, 43707);
				return;
			}
			if (a0 == 28008) {
				f_5d3_a1_v("Impatience");
				tv0->SetMessage(526731);
				tv0->ClearReplies();
				tv0->AddReply(526732, 28010, 28009);
				return;
			}
			if (a0 == 28010) {
				f_5d3_a1_v("Strength");
				tv0->SetMessage(526733);
				tv0->ClearReplies();
				tv0->AddReply(526734, -1, 28011);
				return;
			}
			tv3 = true;
			if (f_e58_a0_b()) {
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
		if (!f_c8b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e52_a0_i());
		L0->SetNPCDescription(f_e50_a0_i());
		L0->SetPhoto(f_e54_a0_s());
		L0->SetPhoto2(f_e56_a0_s());
		L0->SetPlayerName(f_105e_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_ce2_a1_b(f_da1_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_cd0_a1_v(a0);
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
			f_78f_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_e58_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_d6c_a1_v(tv2);
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

	void f_78f_a1_v(string a0)
	{
		if (!f_e58_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_d7c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d9a_a0_v();
			if (a0 == 36960) {
				f_78f_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_78f_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_78f_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_e58_a0_b()) {
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
		if (!f_c8b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e52_a0_i());
		L0->SetNPCDescription(f_e50_a0_i());
		L0->SetPhoto(f_e54_a0_s());
		L0->SetPhoto2(f_e56_a0_s());
		L0->SetPlayerName(f_105e_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_ce2_a1_b(f_da1_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_cd0_a1_v(a0);
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
			if (f_f5f_a1_b(tv1)) {
				f_ebf_a2_v(tv1, tv0);
				f_ee9_a2_v(tv1, tv0);
				f_8c4_a1_v("Strength");
				tv0->SetMessage(539415);
				tv0->ClearReplies();
				tv0->AddReply(540750, 42790, 42789);
				tv0->AddReply(540754, 42790, 42793);
				break;
			}
			f_8c4_a1_v("Neutral");
			tv0->SetMessage(539421);
			tv0->ClearReplies();
			if (f_f6b_a1_b(tv1) && !f_f77_a1_b(tv1)) {
				tv0->AddReply(539454, 42779, 41385);
			}
			tv0->AddReply(539422, -1, 41353);
			tv0->AddReply(540740, -1, 42778);
			break;
			return;
		}
		if (f_e58_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_d6c_a1_v(tv2);
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

	void f_8c4_a1_v(string a0)
	{
		if (!f_e58_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_d7c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d9a_a0_v();
			if (a1 == 41351) {
				f_ec5_a2_v(tv1, tv0);
				f_f13_a2_v(tv1, tv0);
			}
			if (a1 == 41387) {
				f_edf_a2_v(tv1, tv0);
				f_eb9_a2_v(tv1, tv0);
				f_e5a_a2_v(tv1, tv0);
			}
			if (a1 == 42788) {
				f_f0c_a2_v(tv1, tv0);
				f_edf_a2_v(tv1, tv0);
			}
			if (a1 == 42787) {
				f_edf_a2_v(tv1, tv0);
				f_efc_a2_v(tv1, tv0);
				f_eef_a2_v(tv1, tv0);
			}
			if (a0 == 41346) {
				if (f_f5f_a1_b(tv1)) {
					f_ebf_a2_v(tv1, tv0);
					f_ee9_a2_v(tv1, tv0);
					f_8c4_a1_v("Strength");
					tv0->SetMessage(539415);
					tv0->ClearReplies();
					tv0->AddReply(540750, 42790, 42789);
					tv0->AddReply(540754, 42790, 42793);
					return;
				}
				f_8c4_a1_v("Neutral");
				tv0->SetMessage(539421);
				tv0->ClearReplies();
				if (f_f6b_a1_b(tv1) && !f_f77_a1_b(tv1)) {
					tv0->AddReply(539454, 42779, 41385);
				}
				tv0->AddReply(539422, -1, 41353);
				tv0->AddReply(540740, -1, 42778);
				return;
			}
			if (a0 == 42779) {
				f_8c4_a1_v("Neutral");
				tv0->SetMessage(540741);
				tv0->ClearReplies();
				tv0->AddReply(540742, 41386, 42780);
				return;
			}
			if (a0 == 41386) {
				f_8c4_a1_v("Sympathy");
				tv0->SetMessage(539455);
				tv0->ClearReplies();
				tv0->AddReply(540743, 42782, 42781);
				tv0->AddReply(540747, 42782, 42785);
				return;
			}
			if (a0 == 42782) {
				f_8c4_a1_v("Strength");
				tv0->SetMessage(540744);
				tv0->ClearReplies();
				tv0->AddReply(540745, 42784, 42783);
				tv0->AddReply(540748, -1, 42787);
				return;
			}
			if (a0 == 42784) {
				f_8c4_a1_v("Neutral");
				tv0->SetMessage(540746);
				tv0->ClearReplies();
				tv0->AddReply(539456, -1, 41387);
				tv0->AddReply(540749, -1, 42788);
				return;
			}
			if (a0 == 42790) {
				f_8c4_a1_v("Strength");
				tv0->SetMessage(540751);
				tv0->ClearReplies();
				tv0->AddReply(540752, 42792, 42791);
				tv0->AddReply(540755, 42796, 42795);
				return;
			}
			if (a0 == 42796) {
				f_8c4_a1_v("Neutral");
				tv0->SetMessage(540756);
				tv0->ClearReplies();
				tv0->AddReply(540757, 42792, 42797);
				return;
			}
			if (a0 == 42792) {
				f_8c4_a1_v("Fear");
				tv0->SetMessage(540753);
				tv0->ClearReplies();
				tv0->AddReply(539416, 41348, 41347);
				return;
			}
			if (a0 == 41348) {
				f_8c4_a1_v("Fear");
				tv0->SetMessage(539417);
				tv0->ClearReplies();
				tv0->AddReply(539418, 42802, 41349);
				tv0->AddReply(540758, 42800, 42799);
				return;
			}
			if (a0 == 42800) {
				f_8c4_a1_v("Neutral");
				tv0->SetMessage(540759);
				tv0->ClearReplies();
				tv0->AddReply(540760, 42802, 42801);
				return;
			}
			if (a0 == 42802) {
				f_8c4_a1_v("Neutral");
				tv0->SetMessage(540761);
				tv0->ClearReplies();
				tv0->AddReply(540762, 41350, 42803);
				return;
			}
			if (a0 == 41350) {
				f_8c4_a1_v("Neutral");
				tv0->SetMessage(539419);
				tv0->ClearReplies();
				tv0->AddReply(540763, 42806, 42805);
				tv0->AddReply(540765, 42806, 42807);
				return;
			}
			if (a0 == 42806) {
				f_8c4_a1_v("Sympathy");
				tv0->SetMessage(540764);
				tv0->ClearReplies();
				tv0->AddReply(539420, -1, 41351);
				tv0->AddReply(539423, -1, 41354);
				return;
			}
			tv3 = true;
			if (f_e58_a0_b()) {
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
		if (!f_c8b_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e52_a0_i());
		L0->SetNPCDescription(f_e50_a0_i());
		L0->SetPhoto(f_e54_a0_s());
		L0->SetPhoto2(f_e56_a0_s());
		L0->SetPlayerName(f_105e_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_ce2_a1_b(f_da1_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_cd0_a1_v(a0);
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
			f_aff_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_e58_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_d6c_a1_v(tv2);
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

	void f_aff_a1_v(string a0)
	{
		if (!f_e58_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_d7c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d9a_a0_v();
			if (a0 == 42548) {
				f_aff_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_e58_a0_b()) {
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
		g1 = false;
		f_b46_a0_v();
	}

	void f_b46_a0_v(void)
	{
		if (!f_c86_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_bf6_a0_v();
		}
	}

	bool f_b54_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_c7d_a1_b(L0);
	}

	void f_b63_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_b68_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_c42_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_b7e_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_b87_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_b87_a0_v();
			if (f_c86_a0_b() && f_b68_a0_b()) {
				if (f_b54_a0_b()) {
					f_d1c_a1_b(f_da1_a0_o());
				}
			} else {
				f_b63_a0_v();
				f_b7e_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_c3d_a0_v();
		f_b87_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_b87_a0_v();
		f_d6c_a1_v("Neutral");
		f_b7e_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_b7e_a0_v();
		} else {
			f_d6c_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_c3d_a0_v();
			f_c7d_a1_b(a0);
			enable OnUse;
			f_106f_a1_v(a0);
			f_d6c_a1_v("Neutral");
			f_b87_a0_v();
			f_b7e_a0_v();
		}
	}
}

void f_bf6_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_c86_a0_b()) {
		return;
	}
	L0 = f_e3f_a0_i();
	for (L1 = 0; L1 < 5 && f_c86_a0_b(); L1++) {
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
			@PlayAnimation("all", f_e38_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_c3b_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_c3b_a0_b(void)
{
	return true;
}

void f_c3d_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_c42_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_c4a_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_c56_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_c4a_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_db1_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_c6c_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_c73_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_c7d_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_c73_a1_b(L0);
}

bool f_c86_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_c8b_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_da7_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_e58_a0_b()) {
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

void f_cd0_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_e58_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_ce2_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_d1c_a1_b(a0)) {
			if (!f_d41_a1_b(a0)) {
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
		if (!f_d41_a1_b(a0)) {
			if (!f_d1c_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_d1c_a1_b(object a0)
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
	return f_d8b_a1_b(L4);
}

bool f_d41_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_e29_a0_i() + "m";
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
	return f_d8b_a1_b(L4);
}

void f_d6c_a1_v(string a0)
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

void f_d7c_a2_v(string a0, bool a1)
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

bool f_d8b_a1_b(string a0)
{
	if (f_e58_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_d9a_a0_v(void)
{
	if (f_e58_a0_b()) {
		@lshStopSpeech();
	}
}

object f_da1_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_da7_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_db1_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_dbc_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_dc1_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_dcc_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_dd8_a2_v(object a0, int a1)
{
	f_c6c_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_dcc_a2_v(L0, a1);
	}
}

bool f_deb_a2_b(object a0, float a1)
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
	f_e0e_a1_v(a1);
	f_c56_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_e0e_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_e18_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_e24_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_e29_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_e32_a1_b(int a0)
{
	return f_e29_a0_i() == a0;
}

string f_e38_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_e3f_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_e38_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_e50_a0_i(void)
{
	return 515538;
}

int f_e52_a0_i(void)
{
	return 502863;
}

string f_e54_a0_s(void)
{
	return "ui/NPC_Kapella.png";
}

string f_e56_a0_s(void)
{
	return "ui/NPC_Kapella_b.png";
}

bool f_e58_a0_b(void)
{
	return true;
}

void f_e5a_a2_v(object a0, object a1)
{
	@Trace("money 4000 is given");
	f_dd8_a2_v(a0, 4000);
}

void f_e64_a2_v(object a0, object a1)
{
	f_deb_a2_b(a0, 0.05000000074505806);
}

void f_e6b_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k3q01KapellaAboutHan", 1);
	L0 = f_102c_a0_o();
	L0->AddMark("k3q01KapellaGotoAnna", "pt_map_anna", 1, 525456, f_e24_a0_f());
	f_f9b_a0_v();
}

void f_e82_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_102c_a0_o();
	L0->AddMark("k3q04KapellaGotoDanko", "pt_gmap_dt_house2_08", 0, 529819, f_e24_a0_f());
	f_fa8_a0_v();
	f_fb5_a0_v();
	f_dc1_a1_o("quest_k3_04");
	f_e18_a2_b("quest_k3_04", "place_burah_lopuh");
}

void f_ea1_a2_v(object a0, object a1)
{
	@SetVariable("k7q01", 8);
	f_ff6_a0_v();
}

void f_eaa_a2_v(object a0, object a1)
{
	@SetVariable("k6q02", 2);
	f_fe9_a0_v();
}

void f_eb3_a2_v(object a0, object a1)
{
	@SetVariable("ook3Kapella1", 1);
}

void f_eb9_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_ebf_a2_v(object a0, object a1)
{
	@SetVariable("ook5Kapella1", 1);
}

void f_ec5_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k5q04", 1);
	L0 = f_102c_a0_o();
	L0->AddMark("k5q04KapellaGotoMaria", "pt_map_maria", 0, 515282, f_e24_a0_f());
	f_fc2_a0_v();
	f_fdc_a0_v();
}

void f_edf_a2_v(object a0, object a1)
{
	f_fcf_a0_v();
	f_e18_a2_b("quest_k5_04", "completed");
}

void f_ee9_a2_v(object a0, object a1)
{
	@SetVariable("k5Kapellavisit", 1);
}

void f_eef_a2_v(object a0, object a1)
{
	f_deb_a2_b(a0, 0.019999999552965164);
}

void f_ef6_a2_v(object a0, object a1)
{
	@SetVariable("ook3Kapella2", 1);
}

void f_efc_a2_v(object a0, object a1)
{
	@Trace("money 5000 is given");
	f_dd8_a2_v(a0, 5000);
}

void f_f06_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_f0c_a2_v(object a0, object a1)
{
	f_deb_a2_b(a0, 0.10000000149011612);
}

void f_f13_a2_v(object a0, object a1)
{
	f_103d_a3_v(f_102c_a0_o(), "pt_map_maria", 2);
	a1->ShowMap(f_102c_a0_o());
}

bool f_f23_a1_b(object a0)
{
	if (f_dbc_a1_i("k3q01") == 2) {
		return true;
	}
	return false;
}

bool f_f2f_a1_b(object a0)
{
	if (f_dbc_a1_i("k7q01") == 7) {
		return true;
	}
	return false;
}

bool f_f3b_a1_b(object a0)
{
	if (f_dbc_a1_i("k6q02") == 1) {
		return true;
	}
	return false;
}

bool f_f47_a1_b(object a0)
{
	if (f_dbc_a1_i("ook3Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_f53_a1_b(object a0)
{
	if (f_dbc_a1_i("k3q04") == 0) {
		return true;
	}
	return false;
}

bool f_f5f_a1_b(object a0)
{
	if (f_dbc_a1_i("ook5Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_f6b_a1_b(object a0)
{
	if (f_dbc_a1_i("k5q04SoborVisit") != 0) {
		return true;
	}
	return false;
}

bool f_f77_a1_b(object a0)
{
	if (f_dbc_a1_i("k5q04") == 1000) {
		return true;
	}
	return false;
}

bool f_f83_a1_b(object a0)
{
	if (f_dbc_a1_i("k3q04SawDanko") != 0) {
		return true;
	}
	return false;
}

bool f_f8f_a1_b(object a0)
{
	if (f_dbc_a1_i("ook3Kapella2") == 0) {
		return true;
	}
	return false;
}

void f_f9b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 340, 1, 525449);
	f_1010_a2_b(L0, 337);
}

void f_fa8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 354, 2, 525654);
	f_1010_a2_b(L0, -1);
}

void f_fb5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 355, 2, 525655);
	f_1010_a2_b(L0, 354);
}

void f_fc2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 740, 2, 539457);
	f_1010_a2_b(L0, -1);
}

void f_fcf_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 747, 2, 539464);
	f_1010_a2_b(L0, 740);
}

void f_fdc_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 741, 2, 539458);
	f_1010_a2_b(L0, 740);
}

void f_fe9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 502, 2, 528768);
	f_1010_a2_b(L0, 500);
}

void f_ff6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 426, 1, 526225);
	f_1010_a2_b(L0, 416);
}

object f_1003_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1010_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1003_a0_o();
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

object f_102c_a0_o(void)
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

void f_103d_a3_v(object a0, string a1, float a2)
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

int f_105e_a0_i(void)
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

void f_106f_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_e32_a1_b(3)) {
		t0{a0};
		return;
	}
	if (f_e32_a1_b(5)) {
		t10{a0};
		return;
	}
	if (f_e32_a1_b(6)) {
		t6{a0};
		return;
	}
	if (f_e32_a1_b(7)) {
		t4{a0};
		return;
	}
	if (f_e32_a1_b(12)) {
		t8{a0};
		return;
	}
	t12{a0};
}

