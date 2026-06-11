event OnLoad 5;
event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;
var bool g2;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_8b1_a0_b());
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
		f_90b_a1_b(f_9b8_a0_o());
		if (!f_8b6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a07_a0_i());
		L0->SetNPCDescription(f_a05_a0_i());
		L0->SetPhoto(f_a09_a0_s());
		L0->SetPhoto2(f_a0b_a0_s());
		L0->SetPlayerName(f_b02_a0_i());
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
		f_8fa_a1_v(a0);
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
			f_9d_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_a0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_995_a1_v(tv2);
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

	void f_9d_a1_v(string a0)
	{
		if (!f_a0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_99c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_9b1_a0_v();
			if (a0 == 36971) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_a0d_a0_b()) {
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
		f_90b_a1_b(f_9b8_a0_o());
		if (!f_8b6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a07_a0_i());
		L0->SetNPCDescription(f_a05_a0_i());
		L0->SetPhoto(f_a09_a0_s());
		L0->SetPhoto2(f_a0b_a0_s());
		L0->SetPlayerName(f_b02_a0_i());
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
		f_8fa_a1_v(a0);
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
			f_19b_a1_v("Neutral");
			tv0->SetMessage(518021);
			tv0->ClearReplies();
			tv0->AddReply(518022, -1, 19155);
			tv0->AddReply(531564, -1, 32923);
			break;
			return;
		}
		if (f_a0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_995_a1_v(tv2);
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

	void f_19b_a1_v(string a0)
	{
		if (!f_a0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_99c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_9b1_a0_v();
			if (a0 == 19154) {
				f_19b_a1_v("Neutral");
				tv0->SetMessage(518021);
				tv0->ClearReplies();
				tv0->AddReply(518022, -1, 19155);
				tv0->AddReply(531564, -1, 32923);
				return;
			}
			tv3 = true;
			if (f_a0d_a0_b()) {
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
		f_90b_a1_b(f_9b8_a0_o());
		if (!f_8b6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a07_a0_i());
		L0->SetNPCDescription(f_a05_a0_i());
		L0->SetPhoto(f_a09_a0_s());
		L0->SetPhoto2(f_a0b_a0_s());
		L0->SetPlayerName(f_b02_a0_i());
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
		f_8fa_a1_v(a0);
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
			if (!f_a65_a1_b(tv1)) {
				f_a2b_a2_v(tv1, tv0);
				f_29d_a1_v("Fear");
				tv0->SetMessage(518548);
				tv0->ClearReplies();
				tv0->AddReply(518549, 20132, 19659);
				tv0->AddReply(519021, 20141, 20140);
				break;
			}
			f_29d_a1_v("Sympathy");
			tv0->SetMessage(518550);
			tv0->ClearReplies();
			if (f_a6f_a1_b(tv1)) {
				tv0->AddReply(518551, 20163, 19661);
			}
			if (f_a7b_a1_b(tv1) && f_a87_a1_b(tv1)) {
				tv0->AddReply(519028, 20149, 20148);
			}
			tv0->AddReply(518554, -1, 19664);
			break;
			return;
		}
		if (f_a0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_995_a1_v(tv2);
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

	void f_29d_a1_v(string a0)
	{
		if (!f_a0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_99c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_9b1_a0_v();
			if (a1 == 19663) {
				f_a0f_a2_v(tv1, tv0);
				f_a3d_a2_v(tv1, tv0);
			}
			if (a1 == 20148) {
				f_a31_a2_v(tv1, tv0);
			}
			if (a0 == 19658) {
				if (!f_a65_a1_b(tv1)) {
					f_a2b_a2_v(tv1, tv0);
					f_29d_a1_v("Fear");
					tv0->SetMessage(518548);
					tv0->ClearReplies();
					tv0->AddReply(518549, 20132, 19659);
					tv0->AddReply(519021, 20141, 20140);
					return;
				}
				f_29d_a1_v("Sympathy");
				tv0->SetMessage(518550);
				tv0->ClearReplies();
				if (f_a6f_a1_b(tv1)) {
					tv0->AddReply(518551, 20163, 19661);
				}
				if (f_a7b_a1_b(tv1) && f_a87_a1_b(tv1)) {
					tv0->AddReply(519028, 20149, 20148);
				}
				tv0->AddReply(518554, -1, 19664);
				return;
			}
			if (a0 == 20149) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(519029);
				tv0->ClearReplies();
				tv0->AddReply(519030, 20152, 20150);
				tv0->AddReply(519031, -1, 20151);
				return;
			}
			if (a0 == 20152) {
				f_29d_a1_v("Fear");
				tv0->SetMessage(519032);
				tv0->ClearReplies();
				tv0->AddReply(519033, 20154, 20153);
				tv0->AddReply(519035, 20154, 20155);
				return;
			}
			if (a0 == 20154) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(519034);
				tv0->ClearReplies();
				tv0->AddReply(519036, 20157, 20156);
				tv0->AddReply(519039, 20157, 20160);
				return;
			}
			if (a0 == 20157) {
				f_29d_a1_v("Confusion");
				tv0->SetMessage(519037);
				tv0->ClearReplies();
				tv0->AddReply(519038, -1, 20158);
				tv0->AddReply(519040, -1, 20162);
				return;
			}
			if (a0 == 20163) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(519041);
				tv0->ClearReplies();
				tv0->AddReply(519042, 20165, 20164);
				tv0->AddReply(519059, 20180, 20183);
				return;
			}
			if (a0 == 20165) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(519043);
				tv0->ClearReplies();
				tv0->AddReply(519044, 20167, 20166);
				tv0->AddReply(519046, 20169, 20168);
				return;
			}
			if (a0 == 20169) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(519047);
				tv0->ClearReplies();
				tv0->AddReply(519048, 20167, 20170);
				return;
			}
			if (a0 == 20167) {
				f_29d_a1_v("Confusion");
				tv0->SetMessage(519045);
				tv0->ClearReplies();
				tv0->AddReply(519049, 20177, 20172);
				tv0->AddReply(519050, 20174, 20173);
				return;
			}
			if (a0 == 20174) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(519051);
				tv0->ClearReplies();
				tv0->AddReply(519052, -1, 20175);
				tv0->AddReply(519053, 20177, 20176);
				return;
			}
			if (a0 == 20177) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(519054);
				tv0->ClearReplies();
				tv0->AddReply(519055, 19662, 20178);
				tv0->AddReply(519056, 20180, 20179);
				return;
			}
			if (a0 == 20180) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(519057);
				tv0->ClearReplies();
				tv0->AddReply(519058, -1, 20181);
				return;
			}
			if (a0 == 19662) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(518552);
				tv0->ClearReplies();
				tv0->AddReply(518553, -1, 19663);
				return;
			}
			if (a0 == 20141) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(519022);
				tv0->ClearReplies();
				tv0->AddReply(519023, 20138, 20142);
				return;
			}
			if (a0 == 20132) {
				f_29d_a1_v("Confusion");
				tv0->SetMessage(519014);
				tv0->ClearReplies();
				tv0->AddReply(519015, 20138, 20133);
				tv0->AddReply(519016, 20135, 20134);
				return;
			}
			if (a0 == 20135) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(519017);
				tv0->ClearReplies();
				tv0->AddReply(519019, 20138, 20137);
				tv0->AddReply(519018, -1, 20136);
				return;
			}
			if (a0 == 20138) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(519020);
				tv0->ClearReplies();
				tv0->AddReply(519024, 20145, 20144);
				return;
			}
			if (a0 == 20145) {
				f_29d_a1_v("Neutral");
				tv0->SetMessage(519025);
				tv0->ClearReplies();
				tv0->AddReply(527912, 29261, 29260);
				return;
			}
			if (a0 == 29261) {
				f_29d_a1_v("Tiredness");
				tv0->SetMessage(527913);
				tv0->ClearReplies();
				tv0->AddReply(519026, -1, 20146);
				tv0->AddReply(519027, -1, 20147);
				return;
			}
			tv3 = true;
			if (f_a0d_a0_b()) {
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
		f_90b_a1_b(f_9b8_a0_o());
		if (!f_8b6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a07_a0_i());
		L0->SetNPCDescription(f_a05_a0_i());
		L0->SetPhoto(f_a09_a0_s());
		L0->SetPhoto2(f_a0b_a0_s());
		L0->SetPlayerName(f_b02_a0_i());
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
		f_8fa_a1_v(a0);
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
			f_542_a1_v("Neutral");
			tv0->SetMessage(521486);
			tv0->ClearReplies();
			if (f_a59_a1_b(tv1) && f_a4d_a1_b(tv1)) {
				tv0->AddReply(521487, 22653, 22652);
			}
			tv0->AddReply(521490, -1, 22655);
			break;
			return;
		}
		if (f_a0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_995_a1_v(tv2);
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

	void f_542_a1_v(string a0)
	{
		if (!f_a0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_99c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_9b1_a0_v();
			if (a1 == 22652) {
				f_a37_a2_v(tv1, tv0);
			}
			if (a0 == 22651) {
				f_542_a1_v("Neutral");
				tv0->SetMessage(521486);
				tv0->ClearReplies();
				if (f_a59_a1_b(tv1) && f_a4d_a1_b(tv1)) {
					tv0->AddReply(521487, 22653, 22652);
				}
				tv0->AddReply(521490, -1, 22655);
				return;
			}
			if (a0 == 22653) {
				f_542_a1_v("Neutral");
				tv0->SetMessage(521488);
				tv0->ClearReplies();
				tv0->AddReply(521489, 25167, 22654);
				tv0->AddReply(523891, 25171, 25170);
				return;
			}
			if (a0 == 25171) {
				f_542_a1_v("Neutral");
				tv0->SetMessage(523892);
				tv0->ClearReplies();
				tv0->AddReply(523893, 25173, 25172);
				return;
			}
			if (a0 == 25167) {
				f_542_a1_v("Neutral");
				tv0->SetMessage(523888);
				tv0->ClearReplies();
				tv0->AddReply(523889, 25173, 25168);
				tv0->AddReply(523890, -1, 25169);
				return;
			}
			if (a0 == 25173) {
				f_542_a1_v("Neutral");
				tv0->SetMessage(523894);
				tv0->ClearReplies();
				tv0->AddReply(523895, 25176, 25175);
				tv0->AddReply(523898, -1, 25178);
				return;
			}
			if (a0 == 25176) {
				f_542_a1_v("Neutral");
				tv0->SetMessage(523896);
				tv0->ClearReplies();
				tv0->AddReply(523897, -1, 25177);
				return;
			}
			tv3 = true;
			if (f_a0d_a0_b()) {
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
		f_90b_a1_b(f_9b8_a0_o());
		if (!f_8b6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a07_a0_i());
		L0->SetNPCDescription(f_a05_a0_i());
		L0->SetPhoto(f_a09_a0_s());
		L0->SetPhoto2(f_a0b_a0_s());
		L0->SetPlayerName(f_b02_a0_i());
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
		f_8fa_a1_v(a0);
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
			f_687_a1_v("Neutral");
			tv0->SetMessage(522629);
			tv0->ClearReplies();
			tv0->AddReply(522630, -1, 23817);
			break;
			return;
		}
		if (f_a0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_995_a1_v(tv2);
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

	void f_687_a1_v(string a0)
	{
		if (!f_a0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_99c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_9b1_a0_v();
			if (a0 == 23816) {
				f_687_a1_v("Neutral");
				tv0->SetMessage(522629);
				tv0->ClearReplies();
				tv0->AddReply(522630, -1, 23817);
				return;
			}
			tv3 = true;
			if (f_a0d_a0_b()) {
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
		f_90b_a1_b(f_9b8_a0_o());
		if (!f_8b6_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a07_a0_i());
		L0->SetNPCDescription(f_a05_a0_i());
		L0->SetPhoto(f_a09_a0_s());
		L0->SetPhoto2(f_a0b_a0_s());
		L0->SetPlayerName(f_b02_a0_i());
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
		f_8fa_a1_v(a0);
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
			f_74d_a1_v("Neutral");
			tv0->SetMessage(540551);
			tv0->ClearReplies();
			tv0->AddReply(540552, -1, 42561);
			tv0->AddReply(540795, -1, 42844);
			break;
			return;
		}
		if (f_a0d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_995_a1_v(tv2);
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

	void f_74d_a1_v(string a0)
	{
		if (!f_a0d_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_99c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_9b1_a0_v();
			if (a0 == 42560) {
				f_74d_a1_v("Neutral");
				tv0->SetMessage(540551);
				tv0->ClearReplies();
				tv0->AddReply(540552, -1, 42561);
				tv0->AddReply(540795, -1, 42844);
				return;
			}
			tv3 = true;
			if (f_a0d_a0_b()) {
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
		f_794_a0_v();
	}

	void f_794_a0_v(void)
	{
		if (!f_8b1_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_84a_a0_v();
		}
	}

	bool f_7a8_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_8a8_a1_b(L0);
	}

	void f_7b7_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_7bc_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_896_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_7d2_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_7db_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_7db_a0_v();
			if (f_8b1_a0_b() && f_7bc_a0_b()) {
				if (f_7a8_a0_b()) {
					f_945_a1_b(f_9b8_a0_o());
				}
			} else {
				f_7b7_a0_v();
				f_7d2_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_891_a0_v();
		f_7db_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_7db_a0_v();
		f_995_a1_v("Neutral");
		f_7d2_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_7d2_a0_v();
		} else {
			f_995_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_891_a0_v();
			f_8a8_a1_b(a0);
			enable OnUse;
			f_b13_a1_v(a0);
			f_995_a1_v("Neutral");
			f_7db_a0_v();
			f_7d2_a0_v();
		}
	}
}

void f_84a_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_8b1_a0_b()) {
		return;
	}
	L0 = f_9f4_a0_i();
	for (L1 = 0; L1 < 5 && f_8b1_a0_b(); L1++) {
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
			@PlayAnimation("all", f_9ed_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_88f_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_88f_a0_b(void)
{
	return true;
}

void f_891_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_896_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_89e_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_8a8_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_89e_a1_b(L0);
}

bool f_8b1_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_8b6_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_9be_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_a0d_a0_b()) {
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

void f_8fa_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_a0d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_90b_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_945_a1_b(a0)) {
			if (!f_96a_a1_b(a0)) {
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
		if (!f_96a_a1_b(a0)) {
			if (!f_945_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_945_a1_b(object a0)
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
	return f_9a2_a1_b(L4);
}

bool f_96a_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_9de_a0_i() + "m";
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
	return f_9a2_a1_b(L4);
}

void f_995_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_99c_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_9a2_a1_b(string a0)
{
	if (f_a0d_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_9b1_a0_v(void)
{
	if (f_a0d_a0_b()) {
		@lshStopSpeech();
	}
}

object f_9b8_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_9be_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_9c8_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_9cd_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_9d9_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_9de_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_9e7_a1_b(int a0)
{
	return f_9de_a0_i() == a0;
}

string f_9ed_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_9f4_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_9ed_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_a05_a0_i(void)
{
	return 515541;
}

int f_a07_a0_i(void)
{
	return 502866;
}

string f_a09_a0_s(void)
{
	return "ui/NPC_Lara.png";
}

string f_a0b_a0_s(void)
{
	return "ui/NPC_Lara_b.png";
}

bool f_a0d_a0_b(void)
{
	return true;
}

void f_a0f_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b4q01", 2);
	L0 = f_ad0_a0_o();
	L0->AddMark("b4q01LaraGotoRubin", "pt_map_warehouse_gangster", 1, 518593, f_9d9_a0_f());
	f_a9a_a0_v();
	f_9cd_a2_b("quest_b4_01", "place_rubin");
}

void f_a2b_a2_v(object a0, object a1)
{
	@SetVariable("b4q01LaraWasBadRep", 1);
}

void f_a31_a2_v(object a0, object a1)
{
	@SetVariable("oob4Lara1", 1);
}

void f_a37_a2_v(object a0, object a1)
{
	@SetVariable("oob8Lara1", 1);
}

void f_a3d_a2_v(object a0, object a1)
{
	f_ae1_a3_v(f_ad0_a0_o(), "pt_map_warehouse_gangster", 2);
	a1->ShowMap(f_ad0_a0_o());
}

bool f_a4d_a1_b(object a0)
{
	if (f_9c8_a1_i("b8q02") == 1) {
		return true;
	}
	return false;
}

bool f_a59_a1_b(object a0)
{
	if (f_9c8_a1_i("oob8Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_a65_a1_b(object a0)
{
	if (f_a93_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_a6f_a1_b(object a0)
{
	if (f_9c8_a1_i("b4q01") == 1) {
		return true;
	}
	return false;
}

bool f_a7b_a1_b(object a0)
{
	if (f_9c8_a1_i("b4q01LaraWasBadRep") == 1) {
		return true;
	}
	return false;
}

bool f_a87_a1_b(object a0)
{
	if (f_9c8_a1_i("oob4Lara1") == 0) {
		return true;
	}
	return false;
}

bool f_a93_a1_b(object a0)
{
	float L0;
	a0->GetProperty("reputation", L0);
	return L0 >= 0.699999988079071;
}

void f_a9a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 218, 1, 518596);
	f_ab4_a2_b(L0, 216);
}

object f_aa7_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_ab4_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_aa7_a0_o();
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

object f_ad0_a0_o(void)
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

void f_ae1_a3_v(object a0, string a1, float a2)
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

int f_b02_a0_i(void)
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

void f_b13_a1_v(object a0)
{
	if (!g1) {
		t3{a0};
		g1 = true;
	}
	if (f_9e7_a1_b(4)) {
		t5{a0};
		return;
	}
	if (f_9e7_a1_b(8)) {
		t7{a0};
		return;
	}
	if (f_9e7_a1_b(10)) {
		t9{a0};
		return;
	}
	if (f_9e7_a1_b(12) && !g2) {
		t1{a0};
		g2 = true;
		return;
	}
	t11{a0};
}

