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
		if (!f_99e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b3b_a0_i());
		L0->SetNPCDescription(f_b39_a0_i());
		L0->SetPhoto(f_b3d_a0_s());
		L0->SetPhoto2(f_b3f_a0_s());
		L0->SetPlayerName(f_d02_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_9f5_a1_b(f_ab4_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_9e3_a1_v(a0);
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
			f_8b_a1_v("Neutral");
			tv0->SetMessage(525486);
			tv0->ClearReplies();
			tv0->AddReply(525487, 30760, 26843);
			tv0->AddReply(540677, -1, 42710);
			break;
			return;
		}
		if (f_b41_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a7f_a1_v(tv2);
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

	void f_8b_a1_v(string a0)
	{
		if (!f_b41_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a8f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_aad_a0_v();
			if (a0 == 26842) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(525486);
				tv0->ClearReplies();
				tv0->AddReply(525487, 30760, 26843);
				tv0->AddReply(540677, -1, 42710);
				return;
			}
			if (a0 == 30760) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(529306);
				tv0->ClearReplies();
				tv0->AddReply(529307, 30762, 30761);
				tv0->AddReply(540678, -1, 42711);
				return;
			}
			if (a0 == 30762) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(529308);
				tv0->ClearReplies();
				tv0->AddReply(529309, -1, 30763);
				tv0->AddReply(529310, -1, 30764);
				return;
			}
			tv3 = true;
			if (f_b41_a0_b()) {
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
		if (!f_99e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b3b_a0_i());
		L0->SetNPCDescription(f_b39_a0_i());
		L0->SetPhoto(f_b3d_a0_s());
		L0->SetPhoto2(f_b3f_a0_s());
		L0->SetPlayerName(f_d02_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_9f5_a1_b(f_ab4_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_9e3_a1_v(a0);
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
			f_192_a1_v("Neutral");
			tv0->SetMessage(525534);
			tv0->ClearReplies();
			if (f_bf6_a1_b(tv1) && f_c26_a1_b(tv1)) {
				tv0->AddReply(525541, 42712, 26897);
			}
			tv0->AddReply(525546, -1, 26902);
			break;
			return;
		}
		if (f_b41_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a7f_a1_v(tv2);
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

	void f_192_a1_v(string a0)
	{
		if (!f_b41_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a8f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_aad_a0_v();
			if (a1 == 26897) {
				f_bca_a2_v(tv1, tv0);
			}
			if (a1 == 26901) {
				f_b43_a2_v(tv1, tv0);
			}
			if (a1 == 42735) {
				f_b43_a2_v(tv1, tv0);
			}
			if (a1 == 42731) {
				f_b43_a2_v(tv1, tv0);
			}
			if (a1 == 42732) {
				f_b43_a2_v(tv1, tv0);
			}
			if (a1 == 42726) {
				f_bef_a2_v(tv1, tv0);
				f_be0_a2_v(tv1, tv0);
			}
			if (a0 == 26890) {
				f_192_a1_v("Neutral");
				tv0->SetMessage(525534);
				tv0->ClearReplies();
				if (f_bf6_a1_b(tv1) && f_c26_a1_b(tv1)) {
					tv0->AddReply(525541, 42712, 26897);
				}
				tv0->AddReply(525546, -1, 26902);
				return;
			}
			if (a0 == 42712) {
				f_192_a1_v("Hope");
				tv0->SetMessage(540679);
				tv0->ClearReplies();
				tv0->AddReply(540680, 42715, 42713);
				tv0->AddReply(540681, 42718, 42714);
				return;
			}
			if (a0 == 42715) {
				f_192_a1_v("Hope");
				tv0->SetMessage(540682);
				tv0->ClearReplies();
				tv0->AddReply(540683, 42722, 42716);
				tv0->AddReply(540684, 42718, 42717);
				return;
			}
			if (a0 == 42718) {
				f_192_a1_v("Untrust");
				tv0->SetMessage(540685);
				tv0->ClearReplies();
				tv0->AddReply(540686, 42722, 42720);
				tv0->AddReply(540687, 42722, 42721);
				return;
			}
			if (a0 == 42722) {
				f_192_a1_v("Independence");
				tv0->SetMessage(540688);
				tv0->ClearReplies();
				tv0->AddReply(540689, 42727, 42725);
				tv0->AddReply(540690, -1, 42726);
				return;
			}
			if (a0 == 42727) {
				f_192_a1_v("Fear");
				tv0->SetMessage(540691);
				tv0->ClearReplies();
				tv0->AddReply(540692, 26898, 42728);
				return;
			}
			if (a0 == 26898) {
				f_192_a1_v("Fear");
				tv0->SetMessage(525542);
				tv0->ClearReplies();
				tv0->AddReply(525543, 26900, 26899);
				tv0->AddReply(540693, 42730, 42729);
				return;
			}
			if (a0 == 42730) {
				f_192_a1_v("Neutral");
				tv0->SetMessage(540694);
				tv0->ClearReplies();
				tv0->AddReply(540695, -1, 42731);
				tv0->AddReply(540696, -1, 42732);
				return;
			}
			if (a0 == 26900) {
				f_192_a1_v("Independence");
				tv0->SetMessage(525544);
				tv0->ClearReplies();
				tv0->AddReply(540697, 42734, 42733);
				tv0->AddReply(540699, -1, 42735);
				return;
			}
			if (a0 == 42734) {
				f_192_a1_v("Untrust");
				tv0->SetMessage(540698);
				tv0->ClearReplies();
				tv0->AddReply(525545, -1, 26901);
				return;
			}
			tv3 = true;
			if (f_b41_a0_b()) {
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
		if (!f_99e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b3b_a0_i());
		L0->SetNPCDescription(f_b39_a0_i());
		L0->SetPhoto(f_b3d_a0_s());
		L0->SetPhoto2(f_b3f_a0_s());
		L0->SetPlayerName(f_d02_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_9f5_a1_b(f_ab4_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_9e3_a1_v(a0);
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
			f_36f_a1_v("Hope");
			tv0->SetMessage(526045);
			tv0->ClearReplies();
			if (f_c02_a1_b(tv1)) {
				tv0->AddReply(526046, 27332, 27331);
			}
			tv0->AddReply(526063, -1, 27348);
			tv0->AddReply(528877, -1, 30300);
			break;
			return;
		}
		if (f_b41_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a7f_a1_v(tv2);
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

	void f_36f_a1_v(string a0)
	{
		if (!f_b41_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a8f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_aad_a0_v();
			if (a1 == 27331) {
				f_be9_a2_v(tv1, tv0);
			}
			if (a1 == 27347) {
				f_b5a_a2_v(tv1, tv0);
				f_bd0_a2_v(tv1, tv0);
			}
			if (a0 == 27330) {
				f_36f_a1_v("Hope");
				tv0->SetMessage(526045);
				tv0->ClearReplies();
				if (f_c02_a1_b(tv1)) {
					tv0->AddReply(526046, 27332, 27331);
				}
				tv0->AddReply(526063, -1, 27348);
				tv0->AddReply(528877, -1, 30300);
				return;
			}
			if (a0 == 27332) {
				f_36f_a1_v("Hope");
				tv0->SetMessage(526047);
				tv0->ClearReplies();
				tv0->AddReply(526048, 27334, 27333);
				tv0->AddReply(528878, 27334, 30301);
				return;
			}
			if (a0 == 27334) {
				f_36f_a1_v("Hope");
				tv0->SetMessage(526049);
				tv0->ClearReplies();
				tv0->AddReply(526050, 27336, 27335);
				tv0->AddReply(528879, 27338, 30303);
				return;
			}
			if (a0 == 27336) {
				f_36f_a1_v("Fear");
				tv0->SetMessage(526051);
				tv0->ClearReplies();
				tv0->AddReply(526052, 27338, 27337);
				return;
			}
			if (a0 == 27338) {
				f_36f_a1_v("Fear");
				tv0->SetMessage(526053);
				tv0->ClearReplies();
				tv0->AddReply(528880, 30306, 30305);
				tv0->AddReply(528882, 30306, 30307);
				return;
			}
			if (a0 == 30306) {
				f_36f_a1_v("Fear");
				tv0->SetMessage(528881);
				tv0->ClearReplies();
				tv0->AddReply(526054, 27340, 27339);
				tv0->AddReply(526056, 27342, 27341);
				return;
			}
			if (a0 == 27342) {
				f_36f_a1_v("Independence");
				tv0->SetMessage(526057);
				tv0->ClearReplies();
				tv0->AddReply(526058, 27344, 27343);
				return;
			}
			if (a0 == 27340) {
				f_36f_a1_v("Independence");
				tv0->SetMessage(526055);
				tv0->ClearReplies();
				tv0->AddReply(528883, 27344, 30309);
				return;
			}
			if (a0 == 27344) {
				f_36f_a1_v("Untrust");
				tv0->SetMessage(526059);
				tv0->ClearReplies();
				tv0->AddReply(528886, 30314, 30313);
				tv0->AddReply(540972, 43062, 43061);
				return;
			}
			if (a0 == 43062) {
				f_36f_a1_v("Fear");
				tv0->SetMessage(540973);
				tv0->ClearReplies();
				tv0->AddReply(540974, 30314, 43063);
				return;
			}
			if (a0 == 30314) {
				f_36f_a1_v("Untrust");
				tv0->SetMessage(528887);
				tv0->ClearReplies();
				tv0->AddReply(526060, 27346, 27345);
				return;
			}
			if (a0 == 27346) {
				f_36f_a1_v("Neutral");
				tv0->SetMessage(526061);
				tv0->ClearReplies();
				tv0->AddReply(526062, -1, 27347);
				return;
			}
			tv3 = true;
			if (f_b41_a0_b()) {
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
		if (!f_99e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b3b_a0_i());
		L0->SetNPCDescription(f_b39_a0_i());
		L0->SetPhoto(f_b3d_a0_s());
		L0->SetPhoto2(f_b3f_a0_s());
		L0->SetPlayerName(f_d02_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_9f5_a1_b(f_ab4_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_9e3_a1_v(a0);
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
			f_546_a1_v("Neutral");
			tv0->SetMessage(527568);
			tv0->ClearReplies();
			if (f_c1a_a1_b(tv1) && f_c0e_a1_b(tv1)) {
				tv0->AddReply(527570, 28913, 28912);
			}
			tv0->AddReply(527569, -1, 28911);
			break;
			return;
		}
		if (f_b41_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a7f_a1_v(tv2);
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

	void f_546_a1_v(string a0)
	{
		if (!f_b41_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a8f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_aad_a0_v();
			if (a1 == 28912) {
				f_bc4_a2_v(tv1, tv0);
			}
			if (a1 == 28924) {
				f_b91_a2_v(tv1, tv0);
			}
			if (a1 == 28929) {
				f_b91_a2_v(tv1, tv0);
			}
			if (a0 == 28910) {
				f_546_a1_v("Neutral");
				tv0->SetMessage(527568);
				tv0->ClearReplies();
				if (f_c1a_a1_b(tv1) && f_c0e_a1_b(tv1)) {
					tv0->AddReply(527570, 28913, 28912);
				}
				tv0->AddReply(527569, -1, 28911);
				return;
			}
			if (a0 == 28913) {
				f_546_a1_v("Fear");
				tv0->SetMessage(527571);
				tv0->ClearReplies();
				tv0->AddReply(527572, 28915, 28914);
				tv0->AddReply(527583, 28926, 28925);
				return;
			}
			if (a0 == 28926) {
				f_546_a1_v("Independence");
				tv0->SetMessage(527584);
				tv0->ClearReplies();
				tv0->AddReply(527585, 28917, 28927);
				return;
			}
			if (a0 == 28915) {
				f_546_a1_v("Hope");
				tv0->SetMessage(527573);
				tv0->ClearReplies();
				tv0->AddReply(527574, 28917, 28916);
				return;
			}
			if (a0 == 28917) {
				f_546_a1_v("Untrust");
				tv0->SetMessage(527575);
				tv0->ClearReplies();
				tv0->AddReply(527576, 28919, 28918);
				return;
			}
			if (a0 == 28919) {
				f_546_a1_v("Untrust");
				tv0->SetMessage(527577);
				tv0->ClearReplies();
				tv0->AddReply(527578, 28921, 28920);
				return;
			}
			if (a0 == 28921) {
				f_546_a1_v("Hope");
				tv0->SetMessage(527579);
				tv0->ClearReplies();
				tv0->AddReply(527580, 28923, 28922);
				return;
			}
			if (a0 == 28923) {
				f_546_a1_v("Hope");
				tv0->SetMessage(527581);
				tv0->ClearReplies();
				tv0->AddReply(527582, -1, 28924);
				tv0->AddReply(527586, -1, 28929);
				return;
			}
			tv3 = true;
			if (f_b41_a0_b()) {
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
		if (!f_99e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b3b_a0_i());
		L0->SetNPCDescription(f_b39_a0_i());
		L0->SetPhoto(f_b3d_a0_s());
		L0->SetPhoto2(f_b3f_a0_s());
		L0->SetPlayerName(f_d02_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_9f5_a1_b(f_ab4_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_9e3_a1_v(a0);
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
			f_6c4_a1_v("Neutral");
			tv0->SetMessage(539300);
			tv0->ClearReplies();
			tv0->AddReply(542585, 44986, 44985);
			tv0->AddReply(539301, -1, 41244);
			tv0->AddReply(542584, -1, 44984);
			break;
			return;
		}
		if (f_b41_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a7f_a1_v(tv2);
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

	void f_6c4_a1_v(string a0)
	{
		if (!f_b41_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a8f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_aad_a0_v();
			if (a0 == 41243) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(539300);
				tv0->ClearReplies();
				tv0->AddReply(542585, 44986, 44985);
				tv0->AddReply(539301, -1, 41244);
				tv0->AddReply(542584, -1, 44984);
				return;
			}
			if (a0 == 44986) {
				f_6c4_a1_v("Hope");
				tv0->SetMessage(542586);
				tv0->ClearReplies();
				tv0->AddReply(542587, 44989, 44987);
				tv0->AddReply(542588, -1, 44988);
				return;
			}
			if (a0 == 44989) {
				f_6c4_a1_v("Hope");
				tv0->SetMessage(542589);
				tv0->ClearReplies();
				tv0->AddReply(542590, 44991, 44990);
				tv0->AddReply(542594, 44993, 44994);
				return;
			}
			if (a0 == 44991) {
				f_6c4_a1_v("Hope");
				tv0->SetMessage(542591);
				tv0->ClearReplies();
				tv0->AddReply(542592, 44993, 44992);
				return;
			}
			if (a0 == 44993) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(542593);
				tv0->ClearReplies();
				tv0->AddReply(542595, 44997, 44996);
				return;
			}
			if (a0 == 44997) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(542596);
				tv0->ClearReplies();
				tv0->AddReply(542597, 45000, 44998);
				tv0->AddReply(542598, -1, 44999);
				return;
			}
			if (a0 == 45000) {
				f_6c4_a1_v("Neutral");
				tv0->SetMessage(542599);
				tv0->ClearReplies();
				tv0->AddReply(542600, -1, 45001);
				tv0->AddReply(542601, -1, 45002);
				tv0->AddReply(542602, -1, 45003);
				return;
			}
			tv3 = true;
			if (f_b41_a0_b()) {
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
		if (!f_99e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b3b_a0_i());
		L0->SetNPCDescription(f_b39_a0_i());
		L0->SetPhoto(f_b3d_a0_s());
		L0->SetPhoto2(f_b3f_a0_s());
		L0->SetPlayerName(f_d02_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_9f5_a1_b(f_ab4_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_9e3_a1_v(a0);
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
			f_819_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_b41_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a7f_a1_v(tv2);
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

	void f_819_a1_v(string a0)
	{
		if (!f_b41_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a8f_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_aad_a0_v();
			if (a0 == 42548) {
				f_819_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_b41_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t12
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_860_a0_v();
	}

	void f_860_a0_v(void)
	{
		if (!f_999_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_910_a0_v();
		}
	}

	bool f_86e_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_990_a1_b(L0);
	}

	void f_87d_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_882_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_95c_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_898_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_8a1_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_8a1_a0_v();
			if (f_999_a0_b() && f_882_a0_b()) {
				if (f_86e_a0_b()) {
					f_a2f_a1_b(f_ab4_a0_o());
				}
			} else {
				f_87d_a0_v();
				f_898_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_957_a0_v();
		f_8a1_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_8a1_a0_v();
		f_a7f_a1_v("Neutral");
		f_898_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_898_a0_v();
		} else {
			f_a7f_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_957_a0_v();
			f_990_a1_b(a0);
			enable OnUse;
			f_d13_a1_v(a0);
			f_a7f_a1_v("Neutral");
			f_8a1_a0_v();
			f_898_a0_v();
		}
	}
}

void f_910_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_999_a0_b()) {
		return;
	}
	L0 = f_b28_a0_i();
	for (L1 = 0; L1 < 5 && f_999_a0_b(); L1++) {
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
			@PlayAnimation("all", f_b21_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_955_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_955_a0_b(void)
{
	return true;
}

void f_957_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_95c_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_964_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_970_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_964_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_ac4_a3_f(L0 + a2, a3, a4));
	return true;
}

bool f_986_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_990_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_986_a1_b(L0);
}

bool f_999_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_99e_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_aba_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_b41_a0_b()) {
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

void f_9e3_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_b41_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_9f5_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_a2f_a1_b(a0)) {
			if (!f_a54_a1_b(a0)) {
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
		if (!f_a54_a1_b(a0)) {
			if (!f_a2f_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_a2f_a1_b(object a0)
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
	return f_a9e_a1_b(L4);
}

bool f_a54_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_b12_a0_i() + "m";
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
	return f_a9e_a1_b(L4);
}

void f_a7f_a1_v(string a0)
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

void f_a8f_a2_v(string a0, bool a1)
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

bool f_a9e_a1_b(string a0)
{
	if (f_b41_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_aad_a0_v(void)
{
	if (f_b41_a0_b()) {
		@lshStopSpeech();
	}
}

object f_ab4_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_aba_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_ac4_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_acf_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_ad4_a2_b(object a0, float a1)
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
	f_af7_a1_v(a1);
	f_970_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_af7_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_b01_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_b0d_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_b12_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_b1b_a1_b(int a0)
{
	return f_b12_a0_i() == a0;
}

string f_b21_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_b28_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_b21_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_b39_a0_i(void)
{
	return 515537;
}

int f_b3b_a0_i(void)
{
	return 502862;
}

string f_b3d_a0_s(void)
{
	return "ui/NPC_Julia.png";
}

string f_b3f_a0_s(void)
{
	return "ui/NPC_Julia_b.png";
}

bool f_b41_a0_b(void)
{
	return true;
}

void f_b43_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k3q02", 2);
	L0 = f_cd0_a0_o();
	L0->AddMark("k3q02JuliaGotoEva", "pt_map_eva", 0, 525573, f_b0d_a0_f());
	f_c8d_a0_v();
}

void f_b5a_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k6q01", 2);
	L0 = f_cd0_a0_o();
	L0->AddMark("k6q01IfAnna", "pt_map_anna", 1, 541591, f_b0d_a0_f());
	L0->AddMark("k6q01IfEva", "pt_map_eva", 1, 541594, f_b0d_a0_f());
	L0->AddMark("k6q01IfLara", "pt_map_lara", 1, 541592, f_b0d_a0_f());
	L0->AddMark("k6q01IfOspina", "pt_map_ospina", 1, 541593, f_b0d_a0_f());
	f_c9a_a0_v();
	f_b01_a2_b("quest_k6_01", "place_danko");
}

void f_b91_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("k11q01SoulCount", L0);
	L0 = L0 + 1;
	@SetVariable("k11q01SoulCount", L0);
	if (L0 == 2) {
		f_c73_a0_v();
	} else {
		if (L0 == 3) {
			f_c66_a0_v();
		} else {
			if (L0 == 4) {
				f_c59_a0_v();
			} else {
				if (L0 == 5) {
					f_c4c_a0_v();
				} else {
					if (L0 == 6) {
						f_c3f_a0_v();
					} else {
						if (L0 == 7) {
							f_c32_a0_v();
						}
					}
				}
			}
		}
	}
}

void f_bc4_a2_v(object a0, object a1)
{
	@SetVariable("ook11Julia1", 1);
}

void f_bca_a2_v(object a0, object a1)
{
	@SetVariable("ook3Julia1", 1);
}

void f_bd0_a2_v(object a0, object a1)
{
	f_ce1_a3_v(f_cd0_a0_o(), "pt_map_theater", 1);
	a1->ShowMap(f_cd0_a0_o());
}

void f_be0_a2_v(object a0, object a1)
{
	@SetVariable("k3q02", -1);
	f_c80_a0_v();
}

void f_be9_a2_v(object a0, object a1)
{
	@SetVariable("k6StopKaterinaTalks", 1);
}

void f_bef_a2_v(object a0, object a1)
{
	f_ad4_a2_b(a0, 0.30000001192092896);
}

bool f_bf6_a1_b(object a0)
{
	if (f_acf_a1_i("k3q02") == 1) {
		return true;
	}
	return false;
}

bool f_c02_a1_b(object a0)
{
	if (f_acf_a1_i("k6q01") == 1) {
		return true;
	}
	return false;
}

bool f_c0e_a1_b(object a0)
{
	if (f_acf_a1_i("k11q01") == 9) {
		return true;
	}
	return false;
}

bool f_c1a_a1_b(object a0)
{
	if (f_acf_a1_i("ook11Julia1") == 0) {
		return true;
	}
	return false;
}

bool f_c26_a1_b(object a0)
{
	if (f_acf_a1_i("ook3Julia1") == 0) {
		return true;
	}
	return false;
}

void f_c32_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 498, 1, 528065);
	f_cb4_a2_b(L0, 480);
}

void f_c3f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 497, 1, 528064);
	f_cb4_a2_b(L0, 480);
}

void f_c4c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 496, 1, 528063);
	f_cb4_a2_b(L0, 480);
}

void f_c59_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 495, 1, 528062);
	f_cb4_a2_b(L0, 480);
}

void f_c66_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 494, 1, 528061);
	f_cb4_a2_b(L0, 480);
}

void f_c73_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 493, 1, 528060);
	f_cb4_a2_b(L0, 480);
}

void f_c80_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 782, 2, 542095);
	f_cb4_a2_b(L0, 344);
}

void f_c8d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 346, 2, 525568);
	f_cb4_a2_b(L0, 344);
}

void f_c9a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 411, 1, 526112);
	f_cb4_a2_b(L0, 408);
}

object f_ca7_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_cb4_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_ca7_a0_o();
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

object f_cd0_a0_o(void)
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

void f_ce1_a3_v(object a0, string a1, float a2)
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

int f_d02_a0_i(void)
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

void f_d13_a1_v(object a0)
{
	if (!g1) {
		t0{a0};
		g1 = true;
	}
	if (f_b1b_a1_b(3)) {
		t2{a0};
		return;
	}
	if (f_b1b_a1_b(6)) {
		t4{a0};
		return;
	}
	if (f_b1b_a1_b(11)) {
		t6{a0};
		return;
	}
	if (f_b1b_a1_b(12)) {
		t8{a0};
		return;
	}
	t10{a0};
}

