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
		if (!f_bba_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d0e_a0_i());
		L0->SetNPCDescription(f_d0c_a0_i());
		L0->SetPhoto(f_d10_a0_s());
		L0->SetPhoto2(f_d12_a0_s());
		L0->SetPlayerName(f_ea8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c11_a1_b(f_cd0_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bff_a1_v(a0);
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
			f_b8_a1_v("Neutral");
			tv0->SetMessage(525251);
			tv0->ClearReplies();
			if (f_d84_a1_b(tv1)) {
				tv0->AddReply(525252, 44489, 26620);
			}
			if (f_d90_a1_b(tv1)) {
				tv0->AddReply(525263, 26632, 26631);
			}
			if (f_de4_a1_b(tv1)) {
				tv0->AddReply(542179, 44499, 44498);
			}
			tv0->AddReply(525255, -1, 26623);
			break;
			f_b8_a1_v("Neutral");
			tv0->SetMessage(525280);
			tv0->ClearReplies();
			tv0->AddReply(525281, -1, 26649);
			tv0->AddReply(528809, -1, 30223);
			break;
			return;
		}
		if (f_d14_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c9b_a1_v(tv2);
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

	void f_b8_a1_v(string a0)
	{
		if (!f_d14_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cab_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_cc9_a0_v();
			if (a1 == 26622) {
				f_d16_a2_v(tv1, tv0);
			}
			if (a1 == 44528) {
				f_d7b_a2_v(tv1, tv0);
			}
			if (a1 == 44526) {
				f_d7b_a2_v(tv1, tv0);
			}
			if (a1 == 26641) {
				f_d1f_a2_v(tv1, tv0);
			}
			if (a1 == 44534) {
				f_d1f_a2_v(tv1, tv0);
			}
			if (a1 == 44498) {
				f_d75_a2_v(tv1, tv0);
			}
			if (a0 == 26619) {
				f_b8_a1_v("Neutral");
				tv0->SetMessage(525251);
				tv0->ClearReplies();
				if (f_d84_a1_b(tv1)) {
					tv0->AddReply(525252, 44489, 26620);
				}
				if (f_d90_a1_b(tv1)) {
					tv0->AddReply(525263, 26632, 26631);
				}
				if (f_de4_a1_b(tv1)) {
					tv0->AddReply(542179, 44499, 44498);
				}
				tv0->AddReply(525255, -1, 26623);
				return;
				f_b8_a1_v("Neutral");
				tv0->SetMessage(525280);
				tv0->ClearReplies();
				tv0->AddReply(525281, -1, 26649);
				tv0->AddReply(528809, -1, 30223);
				return;
			}
			if (a0 == 44499) {
				f_b8_a1_v("Grimacing");
				tv0->SetMessage(542180);
				tv0->ClearReplies();
				tv0->AddReply(542181, 44502, 44500);
				tv0->AddReply(542182, 44502, 44501);
				return;
			}
			if (a0 == 44502) {
				f_b8_a1_v("Grimacing");
				tv0->SetMessage(542183);
				tv0->ClearReplies();
				tv0->AddReply(542184, -1, 44504);
				tv0->AddReply(542185, -1, 44505);
				return;
			}
			if (a0 == 26632) {
				f_b8_a1_v("Neutral");
				tv0->SetMessage(525264);
				tv0->ClearReplies();
				tv0->AddReply(542194, 44520, 44518);
				tv0->AddReply(542195, 44520, 44519);
				return;
			}
			if (a0 == 44520) {
				f_b8_a1_v("Neutral");
				tv0->SetMessage(542196);
				tv0->ClearReplies();
				tv0->AddReply(525265, 44524, 26633);
				tv0->AddReply(542197, 26634, 44522);
				tv0->AddReply(542198, 44524, 44523);
				return;
			}
			if (a0 == 26634) {
				f_b8_a1_v("Neutral");
				tv0->SetMessage(525266);
				tv0->ClearReplies();
				tv0->AddReply(529215, 30668, 30667);
				tv0->AddReply(542204, 30670, 44530);
				return;
			}
			if (a0 == 30668) {
				f_b8_a1_v("Neutral");
				tv0->SetMessage(529216);
				tv0->ClearReplies();
				tv0->AddReply(529217, 30670, 30669);
				return;
			}
			if (a0 == 30670) {
				f_b8_a1_v("Fear");
				tv0->SetMessage(529218);
				tv0->ClearReplies();
				tv0->AddReply(525267, 26636, 26635);
				tv0->AddReply(542205, 26638, 44532);
				return;
			}
			if (a0 == 26636) {
				f_b8_a1_v("Fear");
				tv0->SetMessage(525268);
				tv0->ClearReplies();
				tv0->AddReply(525269, 26638, 26637);
				return;
			}
			if (a0 == 26638) {
				f_b8_a1_v("Strange");
				tv0->SetMessage(525270);
				tv0->ClearReplies();
				tv0->AddReply(525271, 26640, 26639);
				tv0->AddReply(542206, -1, 44534);
				return;
			}
			if (a0 == 26640) {
				f_b8_a1_v("Neutral");
				tv0->SetMessage(525272);
				tv0->ClearReplies();
				tv0->AddReply(525273, -1, 26641);
				return;
			}
			if (a0 == 44524) {
				f_b8_a1_v("Grin");
				tv0->SetMessage(542199);
				tv0->ClearReplies();
				tv0->AddReply(542200, 44527, 44525);
				tv0->AddReply(542201, -1, 44526);
				return;
			}
			if (a0 == 44527) {
				f_b8_a1_v("Neutral");
				tv0->SetMessage(542202);
				tv0->ClearReplies();
				tv0->AddReply(542203, -1, 44528);
				return;
			}
			if (a0 == 44489) {
				f_b8_a1_v("Strange");
				tv0->SetMessage(542172);
				tv0->ClearReplies();
				tv0->AddReply(542173, 44491, 44490);
				tv0->AddReply(542186, 44507, 44506);
				return;
			}
			if (a0 == 44507) {
				f_b8_a1_v("Grimacing");
				tv0->SetMessage(542187);
				tv0->ClearReplies();
				tv0->AddReply(542188, 26621, 44508);
				tv0->AddReply(542190, 26621, 44510);
				return;
			}
			if (a0 == 44491) {
				f_b8_a1_v("Strange");
				tv0->SetMessage(542174);
				tv0->ClearReplies();
				tv0->AddReply(542175, 26621, 44492);
				tv0->AddReply(542189, 26621, 44509);
				return;
			}
			if (a0 == 26621) {
				f_b8_a1_v("Neutral");
				tv0->SetMessage(525253);
				tv0->ClearReplies();
				tv0->AddReply(529213, 30666, 30665);
				tv0->AddReply(542191, 44515, 44514);
				return;
			}
			if (a0 == 44515) {
				f_b8_a1_v("Neutral");
				tv0->SetMessage(542192);
				tv0->ClearReplies();
				tv0->AddReply(542193, 30666, 44516);
				return;
			}
			if (a0 == 30666) {
				f_b8_a1_v("Neutral");
				tv0->SetMessage(529214);
				tv0->ClearReplies();
				tv0->AddReply(525254, -1, 26622);
				return;
			}
			tv3 = true;
			if (f_d14_a0_b()) {
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
		if (!f_bba_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d0e_a0_i());
		L0->SetNPCDescription(f_d0c_a0_i());
		L0->SetPhoto(f_d10_a0_s());
		L0->SetPhoto2(f_d12_a0_s());
		L0->SetPlayerName(f_ea8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c11_a1_b(f_cd0_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bff_a1_v(a0);
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
			f_365_a1_v("Neutral");
			tv0->SetMessage(525519);
			tv0->ClearReplies();
			tv0->AddReply(525520, 30224, 26876);
			tv0->AddReply(528815, 30230, 30229);
			break;
			return;
		}
		if (f_d14_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c9b_a1_v(tv2);
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

	void f_365_a1_v(string a0)
	{
		if (!f_d14_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cab_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_cc9_a0_v();
			if (a0 == 26875) {
				f_365_a1_v("Neutral");
				tv0->SetMessage(525519);
				tv0->ClearReplies();
				tv0->AddReply(525520, 30224, 26876);
				tv0->AddReply(528815, 30230, 30229);
				return;
			}
			if (a0 == 30230) {
				f_365_a1_v("Neutral");
				tv0->SetMessage(528816);
				tv0->ClearReplies();
				tv0->AddReply(528817, 30224, 30231);
				return;
			}
			if (a0 == 30224) {
				f_365_a1_v("Neutral");
				tv0->SetMessage(528810);
				tv0->ClearReplies();
				tv0->AddReply(528811, 30226, 30225);
				tv0->AddReply(528818, 30226, 30233);
				return;
			}
			if (a0 == 30226) {
				f_365_a1_v("Neutral");
				tv0->SetMessage(528812);
				tv0->ClearReplies();
				tv0->AddReply(528813, -1, 30227);
				tv0->AddReply(528814, -1, 30228);
				return;
			}
			tv3 = true;
			if (f_d14_a0_b()) {
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
		if (!f_bba_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d0e_a0_i());
		L0->SetNPCDescription(f_d0c_a0_i());
		L0->SetPhoto(f_d10_a0_s());
		L0->SetPhoto2(f_d12_a0_s());
		L0->SetPlayerName(f_ea8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c11_a1_b(f_cd0_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bff_a1_v(a0);
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
			f_487_a1_v("Fear");
			tv0->SetMessage(526091);
			tv0->ClearReplies();
			if (f_d9c_a1_b(tv1) && f_da8_a1_b(tv1) && f_db4_a1_b(tv1)) {
				tv0->AddReply(526092, 27379, 27378);
			}
			tv0->AddReply(526095, -1, 27381);
			break;
			return;
		}
		if (f_d14_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c9b_a1_v(tv2);
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

	void f_487_a1_v(string a0)
	{
		if (!f_d14_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cab_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_cc9_a0_v();
			if (a1 == 27378) {
				f_d28_a2_v(tv1, tv0);
			}
			if (a1 == 27380) {
				f_d2e_a2_v(tv1, tv0);
			}
			if (a1 == 43716) {
				f_d2e_a2_v(tv1, tv0);
			}
			if (a0 == 27377) {
				f_487_a1_v("Fear");
				tv0->SetMessage(526091);
				tv0->ClearReplies();
				if (f_d9c_a1_b(tv1) && f_da8_a1_b(tv1) && f_db4_a1_b(tv1)) {
					tv0->AddReply(526092, 27379, 27378);
				}
				tv0->AddReply(526095, -1, 27381);
				return;
			}
			if (a0 == 27379) {
				f_487_a1_v("Grin");
				tv0->SetMessage(526093);
				tv0->ClearReplies();
				tv0->AddReply(528804, 30219, 30218);
				return;
			}
			if (a0 == 30219) {
				f_487_a1_v("Grin");
				tv0->SetMessage(528805);
				tv0->ClearReplies();
				tv0->AddReply(528806, 30222, 30220);
				tv0->AddReply(528807, 30222, 30221);
				return;
			}
			if (a0 == 30222) {
				f_487_a1_v("Strange");
				tv0->SetMessage(528808);
				tv0->ClearReplies();
				tv0->AddReply(526094, -1, 27380);
				tv0->AddReply(541550, -1, 43716);
				return;
			}
			tv3 = true;
			if (f_d14_a0_b()) {
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
		if (!f_bba_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d0e_a0_i());
		L0->SetNPCDescription(f_d0c_a0_i());
		L0->SetPhoto(f_d10_a0_s());
		L0->SetPhoto2(f_d12_a0_s());
		L0->SetPlayerName(f_ea8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c11_a1_b(f_cd0_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bff_a1_v(a0);
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
			f_5cb_a1_v("Neutral");
			tv0->SetMessage(526441);
			tv0->ClearReplies();
			if (f_dc0_a1_b(tv1)) {
				tv0->AddReply(526442, 27718, 27717);
			}
			tv0->AddReply(526449, -1, 27724);
			tv0->AddReply(528982, -1, 30419);
			break;
			return;
		}
		if (f_d14_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c9b_a1_v(tv2);
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

	void f_5cb_a1_v(string a0)
	{
		if (!f_d14_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cab_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_cc9_a0_v();
			if (a1 == 30428) {
				f_d33_a2_v(tv1, tv0);
			}
			if (a1 == 30433) {
				f_d33_a2_v(tv1, tv0);
			}
			if (a1 == 27723) {
				f_d33_a2_v(tv1, tv0);
			}
			if (a0 == 27716) {
				f_5cb_a1_v("Neutral");
				tv0->SetMessage(526441);
				tv0->ClearReplies();
				if (f_dc0_a1_b(tv1)) {
					tv0->AddReply(526442, 27718, 27717);
				}
				tv0->AddReply(526449, -1, 27724);
				tv0->AddReply(528982, -1, 30419);
				return;
			}
			if (a0 == 27718) {
				f_5cb_a1_v("Neutral");
				tv0->SetMessage(526443);
				tv0->ClearReplies();
				tv0->AddReply(528983, 30421, 30420);
				return;
			}
			if (a0 == 30421) {
				f_5cb_a1_v("Grimacing");
				tv0->SetMessage(528984);
				tv0->ClearReplies();
				tv0->AddReply(528985, 30423, 30422);
				return;
			}
			if (a0 == 30423) {
				f_5cb_a1_v("Neutral");
				tv0->SetMessage(528986);
				tv0->ClearReplies();
				tv0->AddReply(526444, 27720, 27719);
				return;
			}
			if (a0 == 27720) {
				f_5cb_a1_v("Strange");
				tv0->SetMessage(526445);
				tv0->ClearReplies();
				tv0->AddReply(526446, 27722, 27721);
				return;
			}
			if (a0 == 27722) {
				f_5cb_a1_v("Strange");
				tv0->SetMessage(526447);
				tv0->ClearReplies();
				tv0->AddReply(528987, 30425, 30424);
				tv0->AddReply(526448, -1, 27723);
				return;
			}
			if (a0 == 30425) {
				f_5cb_a1_v("Neutral");
				tv0->SetMessage(528988);
				tv0->ClearReplies();
				tv0->AddReply(528989, 30427, 30426);
				return;
			}
			if (a0 == 30427) {
				f_5cb_a1_v("Neutral");
				tv0->SetMessage(528990);
				tv0->ClearReplies();
				tv0->AddReply(528991, -1, 30428);
				tv0->AddReply(528992, 30430, 30429);
				return;
			}
			if (a0 == 30430) {
				f_5cb_a1_v("Neutral");
				tv0->SetMessage(528993);
				tv0->ClearReplies();
				tv0->AddReply(528994, 30432, 30431);
				return;
			}
			if (a0 == 30432) {
				f_5cb_a1_v("Neutral");
				tv0->SetMessage(528995);
				tv0->ClearReplies();
				tv0->AddReply(528996, -1, 30433);
				return;
			}
			tv3 = true;
			if (f_d14_a0_b()) {
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
		if (!f_bba_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d0e_a0_i());
		L0->SetNPCDescription(f_d0c_a0_i());
		L0->SetPhoto(f_d10_a0_s());
		L0->SetPhoto2(f_d12_a0_s());
		L0->SetPlayerName(f_ea8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c11_a1_b(f_cd0_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bff_a1_v(a0);
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
			f_772_a1_v("Neutral");
			tv0->SetMessage(527613);
			tv0->ClearReplies();
			if (f_dd8_a1_b(tv1) && f_dcc_a1_b(tv1)) {
				tv0->AddReply(527615, 28961, 28960);
			}
			tv0->AddReply(527614, -1, 28959);
			break;
			return;
		}
		if (f_d14_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c9b_a1_v(tv2);
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

	void f_772_a1_v(string a0)
	{
		if (!f_d14_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cab_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_cc9_a0_v();
			if (a1 == 28960) {
				f_d6f_a2_v(tv1, tv0);
			}
			if (a1 == 28972) {
				f_d3c_a2_v(tv1, tv0);
			}
			if (a0 == 28958) {
				f_772_a1_v("Neutral");
				tv0->SetMessage(527613);
				tv0->ClearReplies();
				if (f_dd8_a1_b(tv1) && f_dcc_a1_b(tv1)) {
					tv0->AddReply(527615, 28961, 28960);
				}
				tv0->AddReply(527614, -1, 28959);
				return;
			}
			if (a0 == 28961) {
				f_772_a1_v("Strange");
				tv0->SetMessage(527616);
				tv0->ClearReplies();
				tv0->AddReply(527631, 28978, 28977);
				return;
			}
			if (a0 == 28978) {
				f_772_a1_v("Strange");
				tv0->SetMessage(527632);
				tv0->ClearReplies();
				tv0->AddReply(527617, 28963, 28962);
				tv0->AddReply(527628, 28974, 28973);
				return;
			}
			if (a0 == 28974) {
				f_772_a1_v("Grimacing");
				tv0->SetMessage(527629);
				tv0->ClearReplies();
				tv0->AddReply(527633, 28980, 28979);
				return;
			}
			if (a0 == 28980) {
				f_772_a1_v("Grimacing");
				tv0->SetMessage(527634);
				tv0->ClearReplies();
				tv0->AddReply(527630, 28965, 28975);
				return;
			}
			if (a0 == 28963) {
				f_772_a1_v("Neutral");
				tv0->SetMessage(527618);
				tv0->ClearReplies();
				tv0->AddReply(527619, 28965, 28964);
				return;
			}
			if (a0 == 28965) {
				f_772_a1_v("Neutral");
				tv0->SetMessage(527620);
				tv0->ClearReplies();
				tv0->AddReply(527621, 28967, 28966);
				return;
			}
			if (a0 == 28967) {
				f_772_a1_v("Neutral");
				tv0->SetMessage(527622);
				tv0->ClearReplies();
				tv0->AddReply(527623, 28969, 28968);
				return;
			}
			if (a0 == 28969) {
				f_772_a1_v("Neutral");
				tv0->SetMessage(527624);
				tv0->ClearReplies();
				tv0->AddReply(527625, 28971, 28970);
				tv0->AddReply(527635, 28982, 28981);
				return;
			}
			if (a0 == 28982) {
				f_772_a1_v("Grimacing");
				tv0->SetMessage(527636);
				tv0->ClearReplies();
				tv0->AddReply(527637, 28971, 28983);
				return;
			}
			if (a0 == 28971) {
				f_772_a1_v("Neutral");
				tv0->SetMessage(527626);
				tv0->ClearReplies();
				tv0->AddReply(527627, -1, 28972);
				return;
			}
			tv3 = true;
			if (f_d14_a0_b()) {
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
		if (!f_bba_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d0e_a0_i());
		L0->SetNPCDescription(f_d0c_a0_i());
		L0->SetPhoto(f_d10_a0_s());
		L0->SetPhoto2(f_d12_a0_s());
		L0->SetPlayerName(f_ea8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c11_a1_b(f_cd0_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bff_a1_v(a0);
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
			f_91e_a1_v("Neutral");
			tv0->SetMessage(539297);
			tv0->ClearReplies();
			tv0->AddReply(542655, 45059, 45057);
			tv0->AddReply(539298, -1, 41241);
			tv0->AddReply(542656, -1, 45058);
			break;
			return;
		}
		if (f_d14_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c9b_a1_v(tv2);
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

	void f_91e_a1_v(string a0)
	{
		if (!f_d14_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cab_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_cc9_a0_v();
			if (a0 == 41240) {
				f_91e_a1_v("Neutral");
				tv0->SetMessage(539297);
				tv0->ClearReplies();
				tv0->AddReply(542655, 45059, 45057);
				tv0->AddReply(539298, -1, 41241);
				tv0->AddReply(542656, -1, 45058);
				return;
			}
			if (a0 == 45059) {
				f_91e_a1_v("Neutral");
				tv0->SetMessage(542657);
				tv0->ClearReplies();
				tv0->AddReply(542658, 45061, 45060);
				tv0->AddReply(542662, 45063, 45064);
				return;
			}
			if (a0 == 45061) {
				f_91e_a1_v("Strange");
				tv0->SetMessage(542659);
				tv0->ClearReplies();
				tv0->AddReply(542660, 45063, 45062);
				return;
			}
			if (a0 == 45063) {
				f_91e_a1_v("Strange");
				tv0->SetMessage(542661);
				tv0->ClearReplies();
				tv0->AddReply(542663, 45067, 45065);
				tv0->AddReply(542667, 45071, 45070);
				return;
			}
			if (a0 == 45071) {
				f_91e_a1_v("Neutral");
				tv0->SetMessage(542668);
				tv0->ClearReplies();
				tv0->AddReply(542669, 45067, 45072);
				return;
			}
			if (a0 == 45067) {
				f_91e_a1_v("Neutral");
				tv0->SetMessage(542664);
				tv0->ClearReplies();
				tv0->AddReply(542665, -1, 45068);
				tv0->AddReply(542666, -1, 45069);
				return;
			}
			tv3 = true;
			if (f_d14_a0_b()) {
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
		if (!f_bba_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_d0e_a0_i());
		L0->SetNPCDescription(f_d0c_a0_i());
		L0->SetPhoto(f_d10_a0_s());
		L0->SetPhoto2(f_d12_a0_s());
		L0->SetPlayerName(f_ea8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_c11_a1_b(f_cd0_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bff_a1_v(a0);
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
			f_a57_a1_v("Neutral");
			tv0->SetMessage(540539);
			tv0->ClearReplies();
			tv0->AddReply(540540, -1, 42549);
			tv0->AddReply(540799, -1, 42848);
			break;
			return;
		}
		if (f_d14_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_c9b_a1_v(tv2);
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

	void f_a57_a1_v(string a0)
	{
		if (!f_d14_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_cab_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_cc9_a0_v();
			if (a0 == 42548) {
				f_a57_a1_v("Neutral");
				tv0->SetMessage(540539);
				tv0->ClearReplies();
				tv0->AddReply(540540, -1, 42549);
				tv0->AddReply(540799, -1, 42848);
				return;
			}
			tv3 = true;
			if (f_d14_a0_b()) {
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
		f_a9e_a0_v();
	}

	void f_a9e_a0_v(void)
	{
		if (!f_bb5_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_b4e_a0_v();
		}
	}

	bool f_aac_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_bac_a1_b(L0);
	}

	void f_abb_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_ac0_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_b9a_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_ad6_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_adf_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_adf_a0_v();
			if (f_bb5_a0_b() && f_ac0_a0_b()) {
				if (f_aac_a0_b()) {
					f_c4b_a1_b(f_cd0_a0_o());
				}
			} else {
				f_abb_a0_v();
				f_ad6_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_b95_a0_v();
		f_adf_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_adf_a0_v();
		f_c9b_a1_v("Neutral");
		f_ad6_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_ad6_a0_v();
		} else {
			f_c9b_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_b95_a0_v();
			f_bac_a1_b(a0);
			enable OnUse;
			f_eb9_a1_v(a0);
			f_c9b_a1_v("Neutral");
			f_adf_a0_v();
			f_ad6_a0_v();
		}
	}
}

void f_b4e_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_bb5_a0_b()) {
		return;
	}
	L0 = f_cfb_a0_i();
	for (L1 = 0; L1 < 5 && f_bb5_a0_b(); L1++) {
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
			@PlayAnimation("all", f_cf4_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_b93_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_b93_a0_b(void)
{
	return true;
}

void f_b95_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_b9a_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_ba2_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_bac_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_ba2_a1_b(L0);
}

bool f_bb5_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_bba_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_cd6_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_d14_a0_b()) {
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

void f_bff_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_d14_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_c11_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_c4b_a1_b(a0)) {
			if (!f_c70_a1_b(a0)) {
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
		if (!f_c70_a1_b(a0)) {
			if (!f_c4b_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_c4b_a1_b(object a0)
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
	return f_cba_a1_b(L4);
}

bool f_c70_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_ce5_a0_i() + "m";
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
	return f_cba_a1_b(L4);
}

void f_c9b_a1_v(string a0)
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

void f_cab_a2_v(string a0, bool a1)
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

bool f_cba_a1_b(string a0)
{
	if (f_d14_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_cc9_a0_v(void)
{
	if (f_d14_a0_b()) {
		@lshStopSpeech();
	}
}

object f_cd0_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_cd6_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_ce0_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

int f_ce5_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_cee_a1_b(int a0)
{
	return f_ce5_a0_i() == a0;
}

string f_cf4_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_cfb_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_cf4_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_d0c_a0_i(void)
{
	return 515549;
}

int f_d0e_a0_i(void)
{
	return 502874;
}

string f_d10_a0_s(void)
{
	return "ui/NPC_Ospina.png";
}

string f_d12_a0_s(void)
{
	return "ui/NPC_Ospina_b.png";
}

bool f_d14_a0_b(void)
{
	return true;
}

void f_d16_a2_v(object a0, object a1)
{
	@SetVariable("k2q01", 4);
	f_e58_a0_v();
}

void f_d1f_a2_v(object a0, object a1)
{
	@SetVariable("k2q01", 6);
	f_e4b_a0_v();
}

void f_d28_a2_v(object a0, object a1)
{
	@SetVariable("ook6Ospina1", 1);
}

void f_d2e_a2_v(object a0, object a1)
{
	f_e65_a0_v();
}

void f_d33_a2_v(object a0, object a1)
{
	@SetVariable("k8q01", 6);
	f_e72_a0_v();
}

void f_d3c_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("k11q01SoulCount", L0);
	L0 = L0 + 1;
	@SetVariable("k11q01SoulCount", L0);
	if (L0 == 2) {
		f_e31_a0_v();
	} else {
		if (L0 == 3) {
			f_e24_a0_v();
		} else {
			if (L0 == 4) {
				f_e17_a0_v();
			} else {
				if (L0 == 5) {
					f_e0a_a0_v();
				} else {
					if (L0 == 6) {
						f_dfd_a0_v();
					} else {
						if (L0 == 7) {
							f_df0_a0_v();
						}
					}
				}
			}
		}
	}
}

void f_d6f_a2_v(object a0, object a1)
{
	@SetVariable("ook11Ospina1", 1);
}

void f_d75_a2_v(object a0, object a1)
{
	@SetVariable("ook2Ospina1", 1);
}

void f_d7b_a2_v(object a0, object a1)
{
	@SetVariable("k2q01", -1);
	f_e3e_a0_v();
}

bool f_d84_a1_b(object a0)
{
	if (f_ce0_a1_i("k2q01") == 2) {
		return true;
	}
	return false;
}

bool f_d90_a1_b(object a0)
{
	if (f_ce0_a1_i("k2q01") == 5) {
		return true;
	}
	return false;
}

bool f_d9c_a1_b(object a0)
{
	if (f_ce0_a1_i("k6q01") == 2) {
		return true;
	}
	return false;
}

bool f_da8_a1_b(object a0)
{
	if (f_ce0_a1_i("k6q01DankoPos") > 3) {
		return true;
	}
	return false;
}

bool f_db4_a1_b(object a0)
{
	if (f_ce0_a1_i("ook6Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_dc0_a1_b(object a0)
{
	if (f_ce0_a1_i("k8q01") == 5) {
		return true;
	}
	return false;
}

bool f_dcc_a1_b(object a0)
{
	if (f_ce0_a1_i("k11q01") == 9) {
		return true;
	}
	return false;
}

bool f_dd8_a1_b(object a0)
{
	if (f_ce0_a1_i("ook11Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_de4_a1_b(object a0)
{
	if (f_ce0_a1_i("ook2Ospina1") == 0) {
		return true;
	}
	return false;
}

void f_df0_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 498, 1, 528065);
	f_e8c_a2_b(L0, 480);
}

void f_dfd_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 497, 1, 528064);
	f_e8c_a2_b(L0, 480);
}

void f_e0a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 496, 1, 528063);
	f_e8c_a2_b(L0, 480);
}

void f_e17_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 495, 1, 528062);
	f_e8c_a2_b(L0, 480);
}

void f_e24_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 494, 1, 528061);
	f_e8c_a2_b(L0, 480);
}

void f_e31_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 493, 1, 528060);
	f_e8c_a2_b(L0, 480);
}

void f_e3e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 790, 1, 542526);
	f_e8c_a2_b(L0, 461);
}

void f_e4b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 467, 1, 527783);
	f_e8c_a2_b(L0, 461);
}

void f_e58_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 465, 1, 527781);
	f_e8c_a2_b(L0, 461);
}

void f_e65_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 414, 1, 526115);
	f_e8c_a2_b(L0, 408);
}

void f_e72_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 444, 1, 526469);
	f_e8c_a2_b(L0, 438);
}

object f_e7f_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_e8c_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_e7f_a0_o();
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

int f_ea8_a0_i(void)
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

void f_eb9_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_cee_a1_b(2)) {
		t0{a0};
		return;
	}
	if (f_cee_a1_b(6)) {
		t4{a0};
		return;
	}
	if (f_cee_a1_b(8)) {
		t6{a0};
		return;
	}
	if (f_cee_a1_b(11)) {
		t8{a0};
		return;
	}
	if (f_cee_a1_b(12)) {
		t10{a0};
		return;
	}
	t12{a0};
}

