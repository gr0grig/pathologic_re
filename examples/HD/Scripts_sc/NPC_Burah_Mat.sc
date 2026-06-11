event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

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
		if (!f_c03_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d7b_a0_i());
		L0->SetNPCDescription(f_d79_a0_i());
		L0->SetPhoto(f_d7d_a0_s());
		L0->SetPhoto2(f_d7f_a0_s());
		L0->SetPlayerName(f_1020_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c5a_a1_b(f_d19_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c48_a1_v(a0);
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
			tv0->SetMessage(518060);
			tv0->ClearReplies();
			tv0->AddReply(518061, 29781, 19194);
			tv0->AddReply(528400, 29777, 29776);
			break;
			return;
		}
		if (f_d81_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ce4_a1_v(tv2);
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
		if (!f_d81_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cf4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d12_a0_v();
			if (a0 == 19193) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(518060);
				tv0->ClearReplies();
				tv0->AddReply(518061, 29781, 19194);
				tv0->AddReply(528400, 29777, 29776);
				return;
			}
			if (a0 == 29777) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(528401);
				tv0->ClearReplies();
				tv0->AddReply(528402, 29779, 29778);
				return;
			}
			if (a0 == 29779) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(528403);
				tv0->ClearReplies();
				tv0->AddReply(528404, 29781, 29780);
				return;
			}
			if (a0 == 29781) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(528405);
				tv0->ClearReplies();
				tv0->AddReply(528406, 29784, 29782);
				tv0->AddReply(528407, 29786, 29783);
				return;
			}
			if (a0 == 29786) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(528409);
				tv0->ClearReplies();
				tv0->AddReply(528410, 29784, 29787);
				tv0->AddReply(528411, 29784, 29788);
				return;
			}
			if (a0 == 29784) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(528408);
				tv0->ClearReplies();
				tv0->AddReply(528412, -1, 29791);
				tv0->AddReply(528413, -1, 29792);
				return;
			}
			tv3 = true;
			if (f_d81_a0_b()) {
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
		if (!f_c03_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d7b_a0_i());
		L0->SetNPCDescription(f_d79_a0_i());
		L0->SetPhoto(f_d7d_a0_s());
		L0->SetPhoto2(f_d7f_a0_s());
		L0->SetPlayerName(f_1020_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c5a_a1_b(f_d19_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c48_a1_v(a0);
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
			if (f_f0a_a1_b(tv1)) {
				f_1e2_a1_v("Rage");
				tv0->SetMessage(520984);
				tv0->ClearReplies();
				tv0->AddReply(528518, 29911, 29910);
				break;
			}
			f_1e2_a1_v("Neutral");
			tv0->SetMessage(520986);
			tv0->ClearReplies();
			if (f_e5a_a1_b(tv1)) {
				tv0->AddReply(521209, 29920, 22405);
			}
			if (f_e66_a1_b(tv1)) {
				tv0->AddReply(521216, 22411, 22410);
			}
			tv0->AddReply(520987, -1, 22200);
			break;
			return;
		}
		if (f_d81_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ce4_a1_v(tv2);
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

	void f_1e2_a1_v(string a0)
	{
		if (!f_d81_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cf4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d12_a0_v();
			if (a1 == 22198) {
				f_d83_a2_v(tv1, tv0);
				f_d9f_a2_v(tv1, tv0);
			}
			if (a1 == 22409) {
				f_daf_a2_v(tv1, tv0);
			}
			if (a1 == 22412) {
				f_dc4_a2_v(tv1, tv0);
			}
			if (a0 == 22197) {
				if (f_f0a_a1_b(tv1)) {
					f_1e2_a1_v("Rage");
					tv0->SetMessage(520984);
					tv0->ClearReplies();
					tv0->AddReply(528518, 29911, 29910);
					return;
				}
				f_1e2_a1_v("Neutral");
				tv0->SetMessage(520986);
				tv0->ClearReplies();
				if (f_e5a_a1_b(tv1)) {
					tv0->AddReply(521209, 29920, 22405);
				}
				if (f_e66_a1_b(tv1)) {
					tv0->AddReply(521216, 22411, 22410);
				}
				tv0->AddReply(520987, -1, 22200);
				return;
			}
			if (a0 == 22411) {
				f_1e2_a1_v("Rage");
				tv0->SetMessage(521217);
				tv0->ClearReplies();
				tv0->AddReply(521218, -1, 22412);
				return;
			}
			if (a0 == 29920) {
				f_1e2_a1_v("Rage");
				tv0->SetMessage(528528);
				tv0->ClearReplies();
				tv0->AddReply(528529, 29922, 29921);
				return;
			}
			if (a0 == 29922) {
				f_1e2_a1_v("Discontent");
				tv0->SetMessage(528530);
				tv0->ClearReplies();
				tv0->AddReply(528548, 29942, 29940);
				tv0->AddReply(528531, 29924, 29923);
				return;
			}
			if (a0 == 29924) {
				f_1e2_a1_v("Discontent");
				tv0->SetMessage(528532);
				tv0->ClearReplies();
				tv0->AddReply(528533, 22406, 29925);
				return;
			}
			if (a0 == 22406) {
				f_1e2_a1_v("Discontent");
				tv0->SetMessage(521210);
				tv0->ClearReplies();
				tv0->AddReply(528549, 29942, 29941);
				return;
			}
			if (a0 == 29942) {
				f_1e2_a1_v("Discontent");
				tv0->SetMessage(528550);
				tv0->ClearReplies();
				tv0->AddReply(521211, 22408, 22407);
				tv0->AddReply(528524, 22408, 29916);
				return;
			}
			if (a0 == 22408) {
				f_1e2_a1_v("Discontent");
				tv0->SetMessage(521212);
				tv0->ClearReplies();
				tv0->AddReply(521213, -1, 22409);
				return;
			}
			if (a0 == 29911) {
				f_1e2_a1_v("Rage");
				tv0->SetMessage(528519);
				tv0->ClearReplies();
				tv0->AddReply(528520, 29913, 29912);
				return;
			}
			if (a0 == 29913) {
				f_1e2_a1_v("Rage");
				tv0->SetMessage(528521);
				tv0->ClearReplies();
				tv0->AddReply(528522, 29915, 29914);
				return;
			}
			if (a0 == 29915) {
				f_1e2_a1_v("Rage");
				tv0->SetMessage(528523);
				tv0->ClearReplies();
				tv0->AddReply(520985, -1, 22198);
				return;
			}
			tv3 = true;
			if (f_d81_a0_b()) {
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
		if (!f_c03_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d7b_a0_i());
		L0->SetNPCDescription(f_d79_a0_i());
		L0->SetPhoto(f_d7d_a0_s());
		L0->SetPhoto2(f_d7f_a0_s());
		L0->SetPlayerName(f_1020_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c5a_a1_b(f_d19_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c48_a1_v(a0);
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
			f_3c4_a1_v("Neutral");
			tv0->SetMessage(521382);
			tv0->ClearReplies();
			if (f_e72_a1_b(tv1)) {
				tv0->AddReply(521383, 25136, 22561);
			}
			if (f_e7e_a1_b(tv1)) {
				tv0->AddReply(521412, 22591, 22590);
			}
			if (f_e96_a1_b(tv1)) {
				tv0->AddReply(521519, 25119, 22680);
			}
			tv0->AddReply(521384, -1, 22562);
			break;
			return;
		}
		if (f_d81_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ce4_a1_v(tv2);
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

	void f_3c4_a1_v(string a0)
	{
		if (!f_d81_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cf4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d12_a0_v();
			if (a1 == 22564) {
				f_dce_a2_v(tv1, tv0);
			}
			if (a1 == 32575) {
				f_e4a_a2_v(tv1, tv0);
			}
			if (a1 == 22594) {
				f_ddc_a2_v(tv1, tv0);
			}
			if (a1 == 22682) {
				f_def_a2_v(tv1, tv0);
			}
			if (a1 == 22683) {
				f_dfc_a2_v(tv1, tv0);
			}
			if (a0 == 22560) {
				f_3c4_a1_v("Neutral");
				tv0->SetMessage(521382);
				tv0->ClearReplies();
				if (f_e72_a1_b(tv1)) {
					tv0->AddReply(521383, 25136, 22561);
				}
				if (f_e7e_a1_b(tv1)) {
					tv0->AddReply(521412, 22591, 22590);
				}
				if (f_e96_a1_b(tv1)) {
					tv0->AddReply(521519, 25119, 22680);
				}
				tv0->AddReply(521384, -1, 22562);
				return;
			}
			if (a0 == 25119) {
				f_3c4_a1_v("Rage");
				tv0->SetMessage(523846);
				tv0->ClearReplies();
				tv0->AddReply(523851, 25125, 25124);
				tv0->AddReply(523847, 25121, 25120);
				return;
			}
			if (a0 == 25121) {
				f_3c4_a1_v("Neutral");
				tv0->SetMessage(523848);
				tv0->ClearReplies();
				tv0->AddReply(523855, 25123, 25128);
				return;
			}
			if (a0 == 25125) {
				f_3c4_a1_v("Rage");
				tv0->SetMessage(523852);
				tv0->ClearReplies();
				tv0->AddReply(523853, 25127, 25126);
				return;
			}
			if (a0 == 25127) {
				f_3c4_a1_v("Rage");
				tv0->SetMessage(523854);
				tv0->ClearReplies();
				tv0->AddReply(523849, 25123, 25122);
				return;
			}
			if (a0 == 25123) {
				f_3c4_a1_v("Neutral");
				tv0->SetMessage(523850);
				tv0->ClearReplies();
				tv0->AddReply(523856, 22681, 25130);
				return;
			}
			if (a0 == 22681) {
				f_3c4_a1_v("Neutral");
				tv0->SetMessage(521520);
				tv0->ClearReplies();
				tv0->AddReply(521521, 25132, 22682);
				tv0->AddReply(521522, 25134, 22683);
				tv0->AddReply(523857, -1, 25131);
				return;
			}
			if (a0 == 25134) {
				f_3c4_a1_v("Neutral");
				tv0->SetMessage(523860);
				tv0->ClearReplies();
				tv0->AddReply(523861, -1, 25135);
				return;
			}
			if (a0 == 25132) {
				f_3c4_a1_v("Neutral");
				tv0->SetMessage(523858);
				tv0->ClearReplies();
				tv0->AddReply(523859, -1, 25133);
				return;
			}
			if (a0 == 22591) {
				f_3c4_a1_v("Neutral");
				tv0->SetMessage(521413);
				tv0->ClearReplies();
				tv0->AddReply(523877, 25154, 25153);
				return;
			}
			if (a0 == 25154) {
				f_3c4_a1_v("Neutral");
				tv0->SetMessage(523878);
				tv0->ClearReplies();
				tv0->AddReply(523879, 25162, 25155);
				tv0->AddReply(523880, 25162, 25156);
				tv0->AddReply(523881, 25158, 25157);
				return;
			}
			if (a0 == 25158) {
				f_3c4_a1_v("Untrust");
				tv0->SetMessage(523882);
				tv0->ClearReplies();
				tv0->AddReply(523884, 25162, 25160);
				tv0->AddReply(523883, 25163, 25159);
				tv0->AddReply(523885, 25162, 25161);
				return;
			}
			if (a0 == 25163) {
				f_3c4_a1_v("Discontent");
				tv0->SetMessage(523887);
				tv0->ClearReplies();
				tv0->AddReply(521414, 22593, 22592);
				return;
			}
			if (a0 == 22593) {
				f_3c4_a1_v("Rage");
				tv0->SetMessage(521415);
				tv0->ClearReplies();
				tv0->AddReply(521416, -1, 22594);
				if (f_e8a_a1_b(tv1)) {
					tv0->AddReply(541573, -1, 43744);
				}
				return;
			}
			if (a0 == 25162) {
				f_3c4_a1_v("Discontent");
				tv0->SetMessage(523886);
				tv0->ClearReplies();
				tv0->AddReply(531259, -1, 32575);
				return;
			}
			if (a0 == 25136) {
				f_3c4_a1_v("Patronage");
				tv0->SetMessage(523862);
				tv0->ClearReplies();
				tv0->AddReply(523863, 25138, 25137);
				return;
			}
			if (a0 == 25138) {
				f_3c4_a1_v("Untrust");
				tv0->SetMessage(523864);
				tv0->ClearReplies();
				tv0->AddReply(523865, 22563, 25139);
				tv0->AddReply(523876, 22563, 25151);
				return;
			}
			if (a0 == 22563) {
				f_3c4_a1_v("Untrust");
				tv0->SetMessage(521385);
				tv0->ClearReplies();
				tv0->AddReply(523866, 25141, 25140);
				return;
			}
			if (a0 == 25141) {
				f_3c4_a1_v("Untrust");
				tv0->SetMessage(523867);
				tv0->ClearReplies();
				tv0->AddReply(523868, 25143, 25142);
				return;
			}
			if (a0 == 25143) {
				f_3c4_a1_v("Neutral");
				tv0->SetMessage(523869);
				tv0->ClearReplies();
				tv0->AddReply(523870, 25148, 25144);
				tv0->AddReply(523871, 25146, 25145);
				return;
			}
			if (a0 == 25146) {
				f_3c4_a1_v("Neutral");
				tv0->SetMessage(523872);
				tv0->ClearReplies();
				tv0->AddReply(523873, 25148, 25147);
				return;
			}
			if (a0 == 25148) {
				f_3c4_a1_v("Neutral");
				tv0->SetMessage(523874);
				tv0->ClearReplies();
				tv0->AddReply(521386, -1, 22564);
				tv0->AddReply(523875, -1, 25150);
				return;
			}
			tv3 = true;
			if (f_d81_a0_b()) {
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
		if (!f_c03_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d7b_a0_i());
		L0->SetNPCDescription(f_d79_a0_i());
		L0->SetPhoto(f_d7d_a0_s());
		L0->SetPhoto2(f_d7f_a0_s());
		L0->SetPlayerName(f_1020_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c5a_a1_b(f_d19_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c48_a1_v(a0);
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
			f_e44_a2_v(tv1, tv0);
			f_6f7_a1_v("Neutral");
			tv0->SetMessage(521951);
			tv0->ClearReplies();
			if (f_ea2_a1_b(tv1) && f_eba_a1_b(tv1) || f_eae_a1_b(tv1) && f_eba_a1_b(tv1)) {
				tv0->AddReply(521952, 23688, 23126);
			}
			if (!f_ec6_a1_b(tv1) && f_ed2_a1_b(tv1) && f_f00_a1_b(tv1) || !f_ec6_a1_b(tv1) && f_ed2_a1_b(tv1) && f_ef6_a1_b(tv1)) {
				tv0->AddReply(530373, 31746, 31745);
			}
			if (f_ec6_a1_b(tv1) && f_ede_a1_b(tv1)) {
				tv0->AddReply(530376, 31749, 31748);
			}
			tv0->AddReply(521955, -1, 23129);
			break;
			return;
		}
		if (f_d81_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ce4_a1_v(tv2);
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

	void f_6f7_a1_v(string a0)
	{
		if (!f_d81_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cf4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d12_a0_v();
			if (a1 == 23126) {
				f_e09_a2_v(tv1, tv0);
			}
			if (a1 == 31745) {
				f_e0f_a2_v(tv1, tv0);
			}
			if (a1 == 32812) {
				f_e15_a2_v(tv1, tv0);
				f_e34_a2_v(tv1, tv0);
			}
			if (a1 == 31750) {
				f_e15_a2_v(tv1, tv0);
				f_e34_a2_v(tv1, tv0);
			}
			if (a0 == 23125) {
				f_e44_a2_v(tv1, tv0);
				f_6f7_a1_v("Neutral");
				tv0->SetMessage(521951);
				tv0->ClearReplies();
				if (f_ea2_a1_b(tv1) && f_eba_a1_b(tv1) || f_eae_a1_b(tv1) && f_eba_a1_b(tv1)) {
					tv0->AddReply(521952, 23688, 23126);
				}
				if (!f_ec6_a1_b(tv1) && f_ed2_a1_b(tv1) && f_f00_a1_b(tv1) || !f_ec6_a1_b(tv1) && f_ed2_a1_b(tv1) && f_ef6_a1_b(tv1)) {
					tv0->AddReply(530373, 31746, 31745);
				}
				if (f_ec6_a1_b(tv1) && f_ede_a1_b(tv1)) {
					tv0->AddReply(530376, 31749, 31748);
				}
				tv0->AddReply(521955, -1, 23129);
				return;
			}
			if (a0 == 31749) {
				f_6f7_a1_v("Untrust");
				tv0->SetMessage(530377);
				tv0->ClearReplies();
				tv0->AddReply(531437, 32785, 32783);
				tv0->AddReply(531438, -1, 32784);
				return;
			}
			if (a0 == 32785) {
				f_6f7_a1_v("Untrust");
				tv0->SetMessage(531439);
				tv0->ClearReplies();
				tv0->AddReply(531460, 32811, 32810);
				tv0->AddReply(530378, -1, 31750);
				return;
			}
			if (a0 == 32811) {
				f_6f7_a1_v("Untrust");
				tv0->SetMessage(531461);
				tv0->ClearReplies();
				tv0->AddReply(531462, -1, 32812);
				return;
			}
			if (a0 == 31746) {
				f_6f7_a1_v("Neutral");
				tv0->SetMessage(530374);
				tv0->ClearReplies();
				tv0->AddReply(530375, -1, 31747);
				return;
			}
			if (a0 == 23688) {
				f_6f7_a1_v("Patronage");
				tv0->SetMessage(522512);
				tv0->ClearReplies();
				tv0->AddReply(522513, 23690, 23689);
				tv0->AddReply(522525, 23702, 23701);
				return;
			}
			if (a0 == 23702) {
				f_6f7_a1_v("Neutral");
				tv0->SetMessage(522526);
				tv0->ClearReplies();
				tv0->AddReply(522527, 23692, 23703);
				return;
			}
			if (a0 == 23690) {
				f_6f7_a1_v("Patronage");
				tv0->SetMessage(522514);
				tv0->ClearReplies();
				tv0->AddReply(522515, 23692, 23691);
				return;
			}
			if (a0 == 23692) {
				f_6f7_a1_v("Rage");
				tv0->SetMessage(522516);
				tv0->ClearReplies();
				tv0->AddReply(522517, 23694, 23693);
				tv0->AddReply(522528, 23706, 23705);
				return;
			}
			if (a0 == 23706) {
				f_6f7_a1_v("Patronage");
				tv0->SetMessage(522529);
				tv0->ClearReplies();
				tv0->AddReply(522530, 23709, 23707);
				return;
			}
			if (a0 == 23709) {
				f_6f7_a1_v("Neutral");
				tv0->SetMessage(522531);
				tv0->ClearReplies();
				tv0->AddReply(522532, 23694, 23710);
				return;
			}
			if (a0 == 23694) {
				f_6f7_a1_v("Rage");
				tv0->SetMessage(522518);
				tv0->ClearReplies();
				tv0->AddReply(522519, 23696, 23695);
				return;
			}
			if (a0 == 23696) {
				f_6f7_a1_v("Neutral");
				tv0->SetMessage(522520);
				tv0->ClearReplies();
				tv0->AddReply(522521, -1, 23697);
				tv0->AddReply(522522, 23699, 23698);
				return;
			}
			if (a0 == 23699) {
				f_6f7_a1_v("Neutral");
				tv0->SetMessage(522523);
				tv0->ClearReplies();
				tv0->AddReply(522524, -1, 23700);
				return;
			}
			tv3 = true;
			if (f_d81_a0_b()) {
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
		if (!f_c03_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d7b_a0_i());
		L0->SetNPCDescription(f_d79_a0_i());
		L0->SetPhoto(f_d7d_a0_s());
		L0->SetPhoto2(f_d7f_a0_s());
		L0->SetPlayerName(f_1020_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c5a_a1_b(f_d19_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c48_a1_v(a0);
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
			f_96a_a1_v("Neutral");
			tv0->SetMessage(535263);
			tv0->ClearReplies();
			if (f_eea_a1_b(tv1)) {
				tv0->AddReply(535264, 37039, 36939);
			}
			tv0->AddReply(535339, -1, 37021);
			tv0->AddReply(535354, -1, 37038);
			break;
			return;
		}
		if (f_d81_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ce4_a1_v(tv2);
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

	void f_96a_a1_v(string a0)
	{
		if (!f_d81_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cf4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d12_a0_v();
			if (a1 == 36939) {
				f_e54_a2_v(tv1, tv0);
			}
			if (a0 == 36938) {
				f_96a_a1_v("Neutral");
				tv0->SetMessage(535263);
				tv0->ClearReplies();
				if (f_eea_a1_b(tv1)) {
					tv0->AddReply(535264, 37039, 36939);
				}
				tv0->AddReply(535339, -1, 37021);
				tv0->AddReply(535354, -1, 37038);
				return;
			}
			if (a0 == 37039) {
				f_96a_a1_v("Rage");
				tv0->SetMessage(535355);
				tv0->ClearReplies();
				tv0->AddReply(535356, 37042, 37040);
				tv0->AddReply(535357, 37043, 37041);
				return;
			}
			if (a0 == 37043) {
				f_96a_a1_v("Neutral");
				tv0->SetMessage(535359);
				tv0->ClearReplies();
				tv0->AddReply(535360, -1, 37044);
				tv0->AddReply(535361, 37042, 37045);
				return;
			}
			if (a0 == 37042) {
				f_96a_a1_v("Rage");
				tv0->SetMessage(535358);
				tv0->ClearReplies();
				tv0->AddReply(535362, 37049, 37047);
				tv0->AddReply(535363, -1, 37048);
				return;
			}
			if (a0 == 37049) {
				f_96a_a1_v("Patronage");
				tv0->SetMessage(535364);
				tv0->ClearReplies();
				tv0->AddReply(535365, -1, 37050);
				tv0->AddReply(535366, -1, 37051);
				return;
			}
			tv3 = true;
			if (f_d81_a0_b()) {
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
		if (!f_c03_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d7b_a0_i());
		L0->SetNPCDescription(f_d79_a0_i());
		L0->SetPhoto(f_d7d_a0_s());
		L0->SetPhoto2(f_d7f_a0_s());
		L0->SetPlayerName(f_1020_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c5a_a1_b(f_d19_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_c48_a1_v(a0);
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
			f_aa3_a1_v("Neutral");
			tv0->SetMessage(540551);
			tv0->ClearReplies();
			tv0->AddReply(540552, -1, 42561);
			tv0->AddReply(540795, -1, 42844);
			break;
			return;
		}
		if (f_d81_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_ce4_a1_v(tv2);
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

	void f_aa3_a1_v(string a0)
	{
		if (!f_d81_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cf4_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_d12_a0_v();
			if (a0 == 42560) {
				f_aa3_a1_v("Neutral");
				tv0->SetMessage(540551);
				tv0->ClearReplies();
				tv0->AddReply(540552, -1, 42561);
				tv0->AddReply(540795, -1, 42844);
				return;
			}
			tv3 = true;
			if (f_d81_a0_b()) {
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
		f_ae7_a0_v();
	}

	void f_ae7_a0_v(void)
	{
		if (!f_bfe_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_b97_a0_v();
		}
	}

	bool f_af5_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_bf5_a1_b(L0);
	}

	void f_b04_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_b09_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_be3_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_b1f_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_b28_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_b28_a0_v();
			if (f_bfe_a0_b() && f_b09_a0_b()) {
				if (f_af5_a0_b()) {
					f_c94_a1_b(f_d19_a0_o());
				}
			} else {
				f_b04_a0_v();
				f_b1f_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_bde_a0_v();
		f_b28_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_b28_a0_v();
		f_ce4_a1_v("Neutral");
		f_b1f_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_b1f_a0_v();
		} else {
			f_ce4_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_bde_a0_v();
			f_bf5_a1_b(a0);
			enable OnUse;
			f_1031_a1_v(a0);
			f_ce4_a1_v("Neutral");
			f_b28_a0_v();
			f_b1f_a0_v();
		}
	}
}

void f_b97_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_bfe_a0_b()) {
		return;
	}
	L0 = f_d68_a0_i();
	for (L1 = 0; L1 < 5 && f_bfe_a0_b(); L1++) {
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
			@PlayAnimation("all", f_d61_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_bdc_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_bdc_a0_b(void)
{
	return true;
}

void f_bde_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_be3_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_beb_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_bf5_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_beb_a1_b(L0);
}

bool f_bfe_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_c03_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_d1f_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_d81_a0_b()) {
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

void f_c48_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_d81_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_c5a_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_c94_a1_b(a0)) {
			if (!f_cb9_a1_b(a0)) {
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
		if (!f_cb9_a1_b(a0)) {
			if (!f_c94_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_c94_a1_b(object a0)
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
	return f_d03_a1_b(L4);
}

bool f_cb9_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_d4a_a0_i() + "m";
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
	return f_d03_a1_b(L4);
}

void f_ce4_a1_v(string a0)
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

void f_cf4_a2_v(string a0, bool a1)
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

bool f_d03_a1_b(string a0)
{
	if (f_d81_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_d12_a0_v(void)
{
	if (f_d81_a0_b()) {
		@lshStopSpeech();
	}
}

object f_d19_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_d1f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_d29_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_d2e_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

bool f_d39_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_d45_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_d4a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_d53_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_d5b_a1_b(int a0)
{
	return f_d4a_a0_i() == a0;
}

string f_d61_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_d68_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_d61_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_d79_a0_i(void)
{
	return 515545;
}

int f_d7b_a0_i(void)
{
	return 502870;
}

string f_d7d_a0_s(void)
{
	return "ui/NPC_Mat.png";
}

string f_d7f_a0_s(void)
{
	return "ui/NPC_Mat_b.png";
}

bool f_d81_a0_b(void)
{
	return true;
}

void f_d83_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b7q01", 3);
	L0 = f_fee_a0_o();
	L0->AddMark("b7q01MatGotoPrison", "pt_map_uprava_prison", 1, 521024, f_d45_a0_f());
	f_f50_a0_v();
	f_d39_a2_b("quest_b7_01", "init_prison");
}

void f_d9f_a2_v(object a0, object a1)
{
	f_fff_a3_v(f_fee_a0_o(), "pt_map_uprava_prison", 2);
	a1->ShowMap(f_fee_a0_o());
}

void f_daf_a2_v(object a0, object a1)
{
	@SetVariable("b7q02", 1);
	f_f5d_a0_v();
	f_f77_a0_v();
	f_d2e_a1_o("quest_b7_02");
	f_d39_a2_b("quest_b7_02", "init_termitnik2");
}

void f_dc4_a2_v(object a0, object a1)
{
	f_f6a_a0_v();
	f_d39_a2_b("quest_b7_02", "completed");
}

void f_dce_a2_v(object a0, object a1)
{
	@SetVariable("b8q01", 2);
	f_f91_a0_v();
	f_d39_a2_b("quest_b8_01", "place_klara");
}

void f_ddc_a2_v(object a0, object a1)
{
	@SetVariable("b8q01", 4);
	f_f9e_a0_v();
	f_d39_a2_b("quest_b8_01", "remove_klara");
	f_d39_a2_b("quest_b8_01", "unlock_boiny");
}

void f_def_a2_v(object a0, object a1)
{
	@SetVariable("b8q03", 3);
	@SetVariable("b8q03MladVladIsVictim", 0);
	f_fab_a0_v();
}

void f_dfc_a2_v(object a0, object a1)
{
	@SetVariable("b8q03", 3);
	@SetVariable("b8q03MladVladIsVictim", 1);
	f_fb8_a0_v();
}

void f_e09_a2_v(object a0, object a1)
{
	@SetVariable("oob10Mat1", 1);
}

void f_e0f_a2_v(object a0, object a1)
{
	@SetVariable("oob10Mat2", 1);
}

void f_e15_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b10q04", 1);
	L0 = f_fee_a0_o();
	L0->AddMark("b10q04MatGotoMorlok", "pt_b10q04_morlok", 0, 530534, f_d45_a0_f());
	f_f36_a0_v();
	f_f43_a0_v();
	f_d39_a2_b("quest_b10_04", "place_morloks");
}

void f_e34_a2_v(object a0, object a1)
{
	f_fff_a3_v(f_fee_a0_o(), "pt_b10q04_morlok", 2);
	a1->ShowMap(f_fee_a0_o());
}

void f_e44_a2_v(object a0, object a1)
{
	@SetVariable("b10MatVisit", 1);
}

void f_e4a_a2_v(object a0, object a1)
{
	f_f84_a0_v();
	f_d39_a2_b("quest_b8_01", "fail");
}

void f_e54_a2_v(object a0, object a1)
{
	@SetVariable("oob12Mat1", 1);
}

bool f_e5a_a1_b(object a0)
{
	if (f_d29_a1_i("b7q02") == 0) {
		return true;
	}
	return false;
}

bool f_e66_a1_b(object a0)
{
	if (f_d29_a1_i("b7q02") == 2) {
		return true;
	}
	return false;
}

bool f_e72_a1_b(object a0)
{
	if (f_d29_a1_i("b8q01") == 1) {
		return true;
	}
	return false;
}

bool f_e7e_a1_b(object a0)
{
	if (f_d29_a1_i("b8q01") == 3) {
		return true;
	}
	return false;
}

bool f_e8a_a1_b(object a0)
{
	if (f_d29_a1_i("b8q01") == 4) {
		return true;
	}
	return false;
}

bool f_e96_a1_b(object a0)
{
	if (f_d29_a1_i("b8q03") == 2) {
		return true;
	}
	return false;
}

bool f_ea2_a1_b(object a0)
{
	if (f_d29_a1_i("b10q01") == 4) {
		return true;
	}
	return false;
}

bool f_eae_a1_b(object a0)
{
	if (f_d29_a1_i("b10q01") == 1000) {
		return true;
	}
	return false;
}

bool f_eba_a1_b(object a0)
{
	if (f_d29_a1_i("oob10Mat1") == 0) {
		return true;
	}
	return false;
}

bool f_ec6_a1_b(object a0)
{
	if (f_d29_a1_i("b10q04PlennikTalk") != 0) {
		return true;
	}
	return false;
}

bool f_ed2_a1_b(object a0)
{
	if (f_d29_a1_i("oob10Mat2") == 0) {
		return true;
	}
	return false;
}

bool f_ede_a1_b(object a0)
{
	if (f_d29_a1_i("b10q04") == 0) {
		return true;
	}
	return false;
}

bool f_eea_a1_b(object a0)
{
	if (f_d29_a1_i("oob12Mat1") == 0) {
		return true;
	}
	return false;
}

bool f_ef6_a1_b(object a0)
{
	if (f_f16_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_f00_a1_b(object a0)
{
	if (f_f2b_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_f0a_a1_b(object a0)
{
	if (f_d29_a1_i("b7q01") == 2) {
		return true;
	}
	return false;
}

bool f_f16_a1_b(object a0)
{
	if (f_d53_a0_i() >= 6 && f_d53_a0_i() < 12) {
		return true;
	}
	return false;
}

bool f_f2b_a1_b(object a0)
{
	if (f_d53_a0_i() >= 12) {
		return true;
	}
	return false;
}

void f_f36_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 545, 2, 530436);
	f_fd2_a2_b(L0, -1);
}

void f_f43_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 546, 2, 530437);
	f_fd2_a2_b(L0, 545);
}

void f_f50_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 256, 1, 521028);
	f_fd2_a2_b(L0, 253);
}

void f_f5d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 270, 2, 521214);
	f_fd2_a2_b(L0, -1);
}

void f_f6a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 273, 2, 521227);
	f_fd2_a2_b(L0, 270);
}

void f_f77_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 271, 2, 521215);
	f_fd2_a2_b(L0, 270);
}

void f_f84_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 606, 1, 531260);
	f_fd2_a2_b(L0, 284);
}

void f_f91_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 286, 1, 521457);
	f_fd2_a2_b(L0, 284);
}

void f_f9e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 288, 1, 521459);
	f_fd2_a2_b(L0, 284);
}

void f_fab_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 578, 2, 530658);
	f_fd2_a2_b(L0, 575);
}

void f_fb8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 579, 2, 530659);
	f_fd2_a2_b(L0, 575);
}

object f_fc5_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_fd2_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_fc5_a0_o();
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

object f_fee_a0_o(void)
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

void f_fff_a3_v(object a0, string a1, float a2)
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

int f_1020_a0_i(void)
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

void f_1031_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_mat", L0);
	if (!L0) {
		t0{a0};
		@SetVariable("mt_mat", 1);
	}
	if (f_d5b_a1_b(7)) {
		t2{a0};
		return;
	}
	if (f_d5b_a1_b(8)) {
		t4{a0};
		return;
	}
	if (f_d5b_a1_b(10)) {
		t6{a0};
		return;
	}
	if (f_d5b_a1_b(12)) {
		t8{a0};
		return;
	}
	t10{a0};
}

