event OnLoad 5;
event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;
var int g2;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_e33_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	var bool tv0;

	void init(object a0)
	{
		@DoTrade();
		tv0 = false;
		for (; ; ) {
			f_f52_a1_v("Neutral");
			@lshWaitForAnimEnd();
			if (tv0) {
				return;
			}
		}
	}

	void OnDialogReply(int a0)
	{
		@lshStopAnimation();
		@StopTrade();
		tv0 = true;
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
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
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
		f_e7c_a1_v(a0);
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
			f_ae_a1_v("Neutral");
			tv0->SetMessage(525483);
			tv0->ClearReplies();
			tv0->AddReply(525484, 30758, 26840);
			tv0->AddReply(529303, -1, 30757);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_ae_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a0 == 26839) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(525483);
				tv0->ClearReplies();
				tv0->AddReply(525484, 30758, 26840);
				tv0->AddReply(529303, -1, 30757);
				return;
			}
			if (a0 == 30758) {
				f_ae_a1_v("Neutral");
				tv0->SetMessage(529304);
				tv0->ClearReplies();
				tv0->AddReply(529305, -1, 30759);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
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
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
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
		f_e7c_a1_v(a0);
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
			f_1ae_a1_v("Neutral");
			tv0->SetMessage(525681);
			tv0->ClearReplies();
			if (f_1087_a1_b(tv1)) {
				tv0->AddReply(525682, 27006, 27005);
			}
			if (f_1093_a1_b(tv1)) {
				tv0->AddReply(525696, 30190, 27019);
			}
			if (f_109f_a1_b(tv1)) {
				tv0->AddReply(525709, 27032, 27031);
			}
			tv0->AddReply(526667, -1, 27943);
			tv0->AddReply(525689, -1, 27012);
			tv0->AddReply(528783, -1, 30195);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_1ae_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a1 == 27011) {
				f_ffd_a2_v(tv1, tv0);
				f_fed_a2_v(tv1, tv0);
			}
			if (a1 == 27021) {
				f_1014_a2_v(tv1, tv0);
				f_1072_a2_v(tv1, tv0);
			}
			if (a1 == 27037) {
				f_1030_a2_v(tv1, tv0);
			}
			if (a1 == 27038) {
				f_1030_a2_v(tv1, tv0);
			}
			if (a1 == 27943) {
				f_1082_a2_v(tv1, tv0);
			}
			if (a0 == 27004) {
				f_1ae_a1_v("Neutral");
				tv0->SetMessage(525681);
				tv0->ClearReplies();
				if (f_1087_a1_b(tv1)) {
					tv0->AddReply(525682, 27006, 27005);
				}
				if (f_1093_a1_b(tv1)) {
					tv0->AddReply(525696, 30190, 27019);
				}
				if (f_109f_a1_b(tv1)) {
					tv0->AddReply(525709, 27032, 27031);
				}
				tv0->AddReply(526667, -1, 27943);
				tv0->AddReply(525689, -1, 27012);
				tv0->AddReply(528783, -1, 30195);
				return;
			}
			if (a0 == 27032) {
				f_1ae_a1_v("Neutral");
				tv0->SetMessage(525710);
				tv0->ClearReplies();
				tv0->AddReply(525711, 27034, 27033);
				return;
			}
			if (a0 == 27034) {
				f_1ae_a1_v("Neutral");
				tv0->SetMessage(525712);
				tv0->ClearReplies();
				tv0->AddReply(525713, 27036, 27035);
				return;
			}
			if (a0 == 27036) {
				f_1ae_a1_v("Neutral");
				tv0->SetMessage(525714);
				tv0->ClearReplies();
				tv0->AddReply(525715, -1, 27037);
				tv0->AddReply(525716, -1, 27038);
				return;
			}
			if (a0 == 30190) {
				f_1ae_a1_v("Neutral");
				tv0->SetMessage(528778);
				tv0->ClearReplies();
				tv0->AddReply(528779, 30192, 30191);
				return;
			}
			if (a0 == 30192) {
				f_1ae_a1_v("Neutral");
				tv0->SetMessage(528780);
				tv0->ClearReplies();
				tv0->AddReply(528781, 27020, 30193);
				tv0->AddReply(528782, -1, 30194);
				return;
			}
			if (a0 == 27020) {
				f_1ae_a1_v("Neutral");
				tv0->SetMessage(525697);
				tv0->ClearReplies();
				tv0->AddReply(528773, 30185, 30184);
				return;
			}
			if (a0 == 30185) {
				f_1ae_a1_v("Neutral");
				tv0->SetMessage(528774);
				tv0->ClearReplies();
				tv0->AddReply(528775, 30187, 30186);
				tv0->AddReply(528777, 30187, 30188);
				return;
			}
			if (a0 == 30187) {
				f_1ae_a1_v("Neutral");
				tv0->SetMessage(528776);
				tv0->ClearReplies();
				tv0->AddReply(525698, -1, 27021);
				return;
			}
			if (a0 == 27006) {
				f_1ae_a1_v("Neutral");
				tv0->SetMessage(525683);
				tv0->ClearReplies();
				tv0->AddReply(525684, 27008, 27007);
				return;
			}
			if (a0 == 27008) {
				f_1ae_a1_v("Neutral");
				tv0->SetMessage(525685);
				tv0->ClearReplies();
				tv0->AddReply(525686, 27010, 27009);
				return;
			}
			if (a0 == 27010) {
				f_1ae_a1_v("Neutral");
				tv0->SetMessage(525687);
				tv0->ClearReplies();
				tv0->AddReply(525688, -1, 27011);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
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
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
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
		f_e7c_a1_v(a0);
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
			f_3a3_a1_v("Neutral");
			tv0->SetMessage(526656);
			tv0->ClearReplies();
			tv0->AddReply(526657, -1, 27933);
			tv0->AddReply(526658, -1, 27934);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_3a3_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a1 == 27933) {
				f_1082_a2_v(tv1, tv0);
			}
			if (a0 == 27932) {
				f_3a3_a1_v("Neutral");
				tv0->SetMessage(526656);
				tv0->ClearReplies();
				tv0->AddReply(526657, -1, 27933);
				tv0->AddReply(526658, -1, 27934);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
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
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
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
		f_e7c_a1_v(a0);
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
			f_47b_a1_v("Neutral");
			tv0->SetMessage(526660);
			tv0->ClearReplies();
			tv0->AddReply(526661, -1, 27937);
			tv0->AddReply(526662, -1, 27938);
			tv0->AddReply(528771, -1, 30182);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_47b_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a1 == 27937) {
				f_1082_a2_v(tv1, tv0);
			}
			if (a0 == 27936) {
				f_47b_a1_v("Neutral");
				tv0->SetMessage(526660);
				tv0->ClearReplies();
				tv0->AddReply(526661, -1, 27937);
				tv0->AddReply(526662, -1, 27938);
				tv0->AddReply(528771, -1, 30182);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
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
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
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
		f_e7c_a1_v(a0);
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
			f_558_a1_v("Neutral");
			tv0->SetMessage(526664);
			tv0->ClearReplies();
			tv0->AddReply(526665, -1, 27941);
			tv0->AddReply(526666, -1, 27942);
			tv0->AddReply(528772, -1, 30183);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_558_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a1 == 27941) {
				f_1082_a2_v(tv1, tv0);
			}
			if (a0 == 27940) {
				f_558_a1_v("Neutral");
				tv0->SetMessage(526664);
				tv0->ClearReplies();
				tv0->AddReply(526665, -1, 27941);
				tv0->AddReply(526666, -1, 27942);
				tv0->AddReply(528772, -1, 30183);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
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
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e7c_a1_v(a0);
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
			f_635_a1_v("Neutral");
			tv0->SetMessage(526669);
			tv0->ClearReplies();
			tv0->AddReply(526670, -1, 27946);
			tv0->AddReply(526671, -1, 27947);
			tv0->AddReply(528784, -1, 30196);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_635_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a1 == 27946) {
				f_1082_a2_v(tv1, tv0);
			}
			if (a0 == 27945) {
				f_635_a1_v("Neutral");
				tv0->SetMessage(526669);
				tv0->ClearReplies();
				tv0->AddReply(526670, -1, 27946);
				tv0->AddReply(526671, -1, 27947);
				tv0->AddReply(528784, -1, 30196);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
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
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e7c_a1_v(a0);
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
			f_712_a1_v("Neutral");
			tv0->SetMessage(526673);
			tv0->ClearReplies();
			tv0->AddReply(526674, -1, 27950);
			tv0->AddReply(526675, -1, 27951);
			tv0->AddReply(528785, -1, 30197);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_712_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a1 == 27950) {
				f_1082_a2_v(tv1, tv0);
			}
			if (a0 == 27949) {
				f_712_a1_v("Neutral");
				tv0->SetMessage(526673);
				tv0->ClearReplies();
				tv0->AddReply(526674, -1, 27950);
				tv0->AddReply(526675, -1, 27951);
				tv0->AddReply(528785, -1, 30197);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t16
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e7c_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t17
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
			f_7ea_a1_v("Neutral");
			tv0->SetMessage(526677);
			tv0->ClearReplies();
			tv0->AddReply(526678, -1, 27954);
			tv0->AddReply(526679, -1, 27955);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_7ea_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a1 == 27954) {
				f_1082_a2_v(tv1, tv0);
			}
			if (a0 == 27953) {
				f_7ea_a1_v("Neutral");
				tv0->SetMessage(526677);
				tv0->ClearReplies();
				tv0->AddReply(526678, -1, 27954);
				tv0->AddReply(526679, -1, 27955);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t18
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t19{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e7c_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t19
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
			f_8c2_a1_v("Neutral");
			tv0->SetMessage(526681);
			tv0->ClearReplies();
			tv0->AddReply(526682, -1, 27958);
			tv0->AddReply(526683, -1, 27959);
			tv0->AddReply(528752, -1, 30178);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_8c2_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a1 == 27958) {
				f_1082_a2_v(tv1, tv0);
			}
			if (a0 == 27957) {
				f_8c2_a1_v("Neutral");
				tv0->SetMessage(526681);
				tv0->ClearReplies();
				tv0->AddReply(526682, -1, 27958);
				tv0->AddReply(526683, -1, 27959);
				tv0->AddReply(528752, -1, 30178);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t20
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t21{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e7c_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t21
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
			f_99f_a1_v("Neutral");
			tv0->SetMessage(526685);
			tv0->ClearReplies();
			tv0->AddReply(526686, -1, 27962);
			tv0->AddReply(526687, -1, 27963);
			tv0->AddReply(529000, -1, 30437);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_99f_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a1 == 27962) {
				f_1082_a2_v(tv1, tv0);
			}
			if (a0 == 27961) {
				f_99f_a1_v("Neutral");
				tv0->SetMessage(526685);
				tv0->ClearReplies();
				tv0->AddReply(526686, -1, 27962);
				tv0->AddReply(526687, -1, 27963);
				tv0->AddReply(529000, -1, 30437);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t22
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t23{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e7c_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t23
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
			f_a77_a1_v("Neutral");
			tv0->SetMessage(526689);
			tv0->ClearReplies();
			tv0->AddReply(526690, -1, 27966);
			tv0->AddReply(526691, -1, 27967);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_a77_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a1 == 27966) {
				f_1082_a2_v(tv1, tv0);
			}
			if (a0 == 27965) {
				f_a77_a1_v("Neutral");
				tv0->SetMessage(526689);
				tv0->ClearReplies();
				tv0->AddReply(526690, -1, 27966);
				tv0->AddReply(526691, -1, 27967);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t24
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t25{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e7c_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t25
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
			f_b5d_a1_v("Neutral");
			tv0->SetMessage(526693);
			tv0->ClearReplies();
			if (f_10ab_a1_b(tv1) && f_10b7_a1_b(tv1)) {
				tv0->AddReply(527323, 28641, 28640);
			}
			tv0->AddReply(526694, -1, 27970);
			tv0->AddReply(526695, -1, 27971);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_b5d_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a1 == 28640) {
				f_106c_a2_v(tv1, tv0);
			}
			if (a1 == 28655) {
				f_1039_a2_v(tv1, tv0);
			}
			if (a1 == 27970) {
				f_1082_a2_v(tv1, tv0);
			}
			if (a0 == 27969) {
				f_b5d_a1_v("Neutral");
				tv0->SetMessage(526693);
				tv0->ClearReplies();
				if (f_10ab_a1_b(tv1) && f_10b7_a1_b(tv1)) {
					tv0->AddReply(527323, 28641, 28640);
				}
				tv0->AddReply(526694, -1, 27970);
				tv0->AddReply(526695, -1, 27971);
				return;
			}
			if (a0 == 28641) {
				f_b5d_a1_v("Neutral");
				tv0->SetMessage(527324);
				tv0->ClearReplies();
				tv0->AddReply(527325, 28644, 28642);
				tv0->AddReply(527326, 28645, 28643);
				return;
			}
			if (a0 == 28645) {
				f_b5d_a1_v("Neutral");
				tv0->SetMessage(527328);
				tv0->ClearReplies();
				tv0->AddReply(527330, 28648, 28647);
				return;
			}
			if (a0 == 28644) {
				f_b5d_a1_v("Neutral");
				tv0->SetMessage(527327);
				tv0->ClearReplies();
				tv0->AddReply(527329, 28648, 28646);
				return;
			}
			if (a0 == 28648) {
				f_b5d_a1_v("Neutral");
				tv0->SetMessage(527331);
				tv0->ClearReplies();
				tv0->AddReply(527332, 28650, 28649);
				return;
			}
			if (a0 == 28650) {
				f_b5d_a1_v("Neutral");
				tv0->SetMessage(527333);
				tv0->ClearReplies();
				tv0->AddReply(527334, 28652, 28651);
				return;
			}
			if (a0 == 28652) {
				f_b5d_a1_v("Neutral");
				tv0->SetMessage(527335);
				tv0->ClearReplies();
				tv0->AddReply(527336, 28654, 28653);
				return;
			}
			if (a0 == 28654) {
				f_b5d_a1_v("Neutral");
				tv0->SetMessage(527337);
				tv0->ClearReplies();
				tv0->AddReply(527338, -1, 28655);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t26
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_e8d_a1_b(f_f91_a0_o());
		if (!f_e38_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_fe5_a0_i());
		L0->SetNPCDescription(f_fe3_a0_i());
		L0->SetPhoto(f_fe7_a0_s());
		L0->SetPhoto2(f_fe9_a0_s());
		L0->SetPlayerName(f_1234_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t27{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e7c_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t27
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
			f_cd1_a1_v("Neutral");
			tv0->SetMessage(539291);
			tv0->ClearReplies();
			tv0->AddReply(539292, -1, 41235);
			break;
			return;
		}
		if (f_feb_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f52_a1_v(tv2);
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

	void f_cd1_a1_v(string a0)
	{
		if (!f_feb_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f59_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f6e_a0_v();
			if (a0 == 41234) {
				f_cd1_a1_v("Neutral");
				tv0->SetMessage(539291);
				tv0->ClearReplies();
				tv0->AddReply(539292, -1, 41235);
				return;
			}
			tv3 = true;
			if (f_feb_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t28
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		g2 = -1;
		f_d16_a0_v();
	}

	void f_d16_a0_v(void)
	{
		if (!f_e33_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_dcc_a0_v();
		}
	}

	bool f_d2a_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_e2a_a1_b(L0);
	}

	void f_d39_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_d3e_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_e18_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_d54_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_d5d_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_d5d_a0_v();
			if (f_e33_a0_b() && f_d3e_a0_b()) {
				if (f_d2a_a0_b()) {
					f_ec7_a1_b(f_f91_a0_o());
				}
			} else {
				f_d39_a0_v();
				f_d54_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_e13_a0_v();
		f_d5d_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_d5d_a0_v();
		f_f52_a1_v("Neutral");
		f_d54_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_d54_a0_v();
		} else {
			f_f52_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_e13_a0_v();
			f_e2a_a1_b(a0);
			enable OnUse;
			f_125e_a1_v(a0);
			f_f52_a1_v("Neutral");
			f_d5d_a0_v();
			f_d54_a0_v();
		}
	}
}

void f_dcc_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_e33_a0_b()) {
		return;
	}
	L0 = f_fd2_a0_i();
	for (L1 = 0; L1 < 5 && f_e33_a0_b(); L1++) {
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
			@PlayAnimation("all", f_fcb_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_e11_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_e11_a0_b(void)
{
	return true;
}

void f_e13_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_e18_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_e20_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_e2a_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_e20_a1_b(L0);
}

bool f_e33_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_e38_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_f97_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_feb_a0_b()) {
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

void f_e7c_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_feb_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_e8d_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_ec7_a1_b(a0)) {
			if (!f_eec_a1_b(a0)) {
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
		if (!f_eec_a1_b(a0)) {
			if (!f_ec7_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_ec7_a1_b(object a0)
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
	return f_f5f_a1_b(L4);
}

bool f_eec_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_fbc_a0_i() + "m";
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
	return f_f5f_a1_b(L4);
}

bool f_f17_a1_b(object a0)
{
	return f_f1f_a2_b(a0, 70);
}

bool f_f1f_a2_b(object a0, float a1)
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
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_f4e_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_f52_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_f59_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_f5f_a1_b(string a0)
{
	if (f_feb_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_f6e_a0_v(void)
{
	if (f_feb_a0_b()) {
		@lshStopSpeech();
	}
}

void f_f75_a3_v(string a0, int a1, int a2)
{
	if (f_fa1_a2_b(a1, a2)) {
		bool L0;
		@AddItem(L0, a0, 0);
	}
}

void f_f80_a5_v(string a0, int a1, int a2, int a3, int a4)
{
	if (f_fa1_a2_b(a1, a2)) {
		int L0;
		bool L1;
		@irand(L0, a4 - a3 + 1);
		@AddItem(L1, a0, 0, L0 + a3);
	}
}

object f_f91_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_f97_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

bool f_fa1_a2_b(int a0, int a1)
{
	int L0;
	@irand(L0, a1);
	return L0 < a0;
}

int f_fa6_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_fab_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_fb7_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_fbc_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_fc5_a1_b(int a0)
{
	return f_fbc_a0_i() == a0;
}

string f_fcb_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_fd2_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_fcb_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_fe3_a0_i(void)
{
	return 515535;
}

int f_fe5_a0_i(void)
{
	return 502860;
}

string f_fe7_a0_s(void)
{
	return "ui/NPC_Grif.png";
}

string f_fe9_a0_s(void)
{
	return "ui/NPC_Grif_b.png";
}

bool f_feb_a0_b(void)
{
	return true;
}

void f_fed_a2_v(object a0, object a1)
{
	f_1172_a3_v(f_1161_a0_o(), "pt_map_notkin", 2);
	a1->ShowMap(f_1161_a0_o());
}

void f_ffd_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k4q01", 2);
	L0 = f_1161_a0_o();
	L0->AddMark("k4q01GrifGotoNotkin", "pt_map_notkin", 1, 515278, f_fb7_a0_f());
	f_112b_a0_v();
}

void f_1014_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k4q01", 4);
	L0 = f_1161_a0_o();
	L0->AddMark("k4q01GrifGotoBraga", "pt_map_warehouse_gangster", 1, 530231, f_fb7_a0_f());
	f_111e_a0_v();
	f_fab_a2_b("quest_k4_01", "init_volnica");
}

void f_1030_a2_v(object a0, object a1)
{
	@SetVariable("k4q01", 6);
	f_1111_a0_v();
}

void f_1039_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("k11q01SoulCount", L0);
	@SetVariable("k11q01SoulCount", L0 + 1);
	if (L0 == 2) {
		f_1104_a0_v();
	} else {
		if (L0 == 3) {
			f_10f7_a0_v();
		} else {
			if (L0 == 4) {
				f_10ea_a0_v();
			} else {
				if (L0 == 5) {
					f_10dd_a0_v();
				} else {
					if (L0 == 6) {
						f_10d0_a0_v();
					} else {
						if (L0 == 7) {
							f_10c3_a0_v();
						}
					}
				}
			}
		}
	}
}

void f_106c_a2_v(object a0, object a1)
{
	@SetVariable("ook11Grif1", 1);
}

void f_1072_a2_v(object a0, object a1)
{
	f_1172_a3_v(f_1161_a0_o(), "pt_map_warehouse_gangster", 2);
	a1->ShowMap(f_1161_a0_o());
}

void f_1082_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1000);
}

bool f_1087_a1_b(object a0)
{
	if (f_fa6_a1_i("k4q01") == 1) {
		return true;
	}
	return false;
}

bool f_1093_a1_b(object a0)
{
	if (f_fa6_a1_i("k4q01") == 3) {
		return true;
	}
	return false;
}

bool f_109f_a1_b(object a0)
{
	if (f_fa6_a1_i("k4q01") == 5) {
		return true;
	}
	return false;
}

bool f_10ab_a1_b(object a0)
{
	if (f_fa6_a1_i("k11q01") == 9) {
		return true;
	}
	return false;
}

bool f_10b7_a1_b(object a0)
{
	if (f_fa6_a1_i("ook11Grif1") == 0) {
		return true;
	}
	return false;
}

void f_10c3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 498, 1, 528065);
	f_1145_a2_b(L0, 480);
}

void f_10d0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 497, 1, 528064);
	f_1145_a2_b(L0, 480);
}

void f_10dd_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 496, 1, 528063);
	f_1145_a2_b(L0, 480);
}

void f_10ea_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 495, 1, 528062);
	f_1145_a2_b(L0, 480);
}

void f_10f7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 494, 1, 528061);
	f_1145_a2_b(L0, 480);
}

void f_1104_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 493, 1, 528060);
	f_1145_a2_b(L0, 480);
}

void f_1111_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 377, 1, 525734);
	f_1145_a2_b(L0, 368);
}

void f_111e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 372, 1, 525729);
	f_1145_a2_b(L0, 368);
}

void f_112b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 370, 1, 525727);
	f_1145_a2_b(L0, 368);
}

object f_1138_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1145_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1138_a0_o();
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

object f_1161_a0_o(void)
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

void f_1172_a3_v(object a0, string a1, float a2)
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

void f_1193_a0_v(void)
{
	bool L0;
	int L1;
	int L2;
	@ClearSubContainer(0);
	L2 = f_fbc_a0_i();
	@AddItem(L0, f_122f_a1_i("Rifle"), 0, 1);
	@AddItem(L0, f_122f_a1_i("Revolver"), 0, 1);
	@AddItem(L0, f_122f_a1_i("Knife"), 0, 1);
	if (L2 != 10) {
		@AddItem(L0, f_122f_a1_i("tvirin"), 0, 1);
	} else {
		@AddItem(L0, f_122f_a1_i("tvirin"), 0, 4);
	}
	@AddItem(L0, f_122f_a1_i("lockpick"), 0, 3);
	f_f75_a3_v("Scalpel", 1, 2);
	f_f80_a5_v("revolver_ammo", 1, 1, 5, 10);
	f_f80_a5_v("rifle_ammo", 1, 1, 5, 20);
	@irand(L1, 100);
	if (L1 != 0) {
		@AddItem(L0, f_122f_a1_i("kerosene"), 0, L1);
	}
	if (L2 >= 3) {
		@AddItem(L0, f_122f_a1_i("halfboot_repel"), 0, 1);
		@AddItem(L0, f_122f_a1_i("boot_repel"), 0, 1);
	}
	if (L2 >= 9) {
		@AddItem(L0, f_122f_a1_i("boot_army"), 0, 1);
		@AddItem(L0, f_122f_a1_i("balahon"), 0, 1);
		@AddItem(L0, f_122f_a1_i("glove_army"), 0, 1);
	}
	if (f_1245_a0_i() == 0) {
		@AddItem(L0, f_122f_a1_i("Gun_danko"), 0, 1);
	}
}

int f_122f_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

int f_1234_a0_i(void)
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

int f_1245_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_124b_a1_v(object a0)
{
	if (!f_f17_a1_b(a0)) {
		return;
	}
	t1{a0};
	f_f4e_a1_v(a0);
}

void f_125e_a1_v(object a0)
{
	if (g2 != f_fbc_a0_i()) {
		f_1193_a0_v();
		g2 = f_fbc_a0_i();
	}
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_fc5_a1_b(1)) {
		if (1000 == t6{a0}) {
			f_124b_a1_v(a0);
		}
		return;
	}
	if (f_fc5_a1_b(2)) {
		if (1000 == t8{a0}) {
			f_124b_a1_v(a0);
		}
		return;
	}
	if (f_fc5_a1_b(3)) {
		if (1000 == t10{a0}) {
			f_124b_a1_v(a0);
		}
		return;
	}
	if (f_fc5_a1_b(4)) {
		if (1000 == t4{a0}) {
			f_124b_a1_v(a0);
		}
		return;
	}
	if (f_fc5_a1_b(5)) {
		if (1000 == t12{a0}) {
			f_124b_a1_v(a0);
		}
		return;
	}
	if (f_fc5_a1_b(6)) {
		if (1000 == t14{a0}) {
			f_124b_a1_v(a0);
		}
		return;
	}
	if (f_fc5_a1_b(7)) {
		if (1000 == t16{a0}) {
			f_124b_a1_v(a0);
		}
		return;
	}
	if (f_fc5_a1_b(8)) {
		if (1000 == t18{a0}) {
			f_124b_a1_v(a0);
		}
		return;
	}
	if (f_fc5_a1_b(9)) {
		if (1000 == t20{a0}) {
			f_124b_a1_v(a0);
		}
		return;
	}
	if (f_fc5_a1_b(10)) {
		if (1000 == t22{a0}) {
			f_124b_a1_v(a0);
		}
		return;
	}
	if (f_fc5_a1_b(11)) {
		if (1000 == t24{a0}) {
			f_124b_a1_v(a0);
		}
		return;
	}
	if (f_fc5_a1_b(12)) {
		t26{a0};
		return;
	}
}

