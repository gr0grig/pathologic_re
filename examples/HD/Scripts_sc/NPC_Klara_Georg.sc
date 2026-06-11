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
		if (!f_e55_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_101e_a0_i());
		L0->SetNPCDescription(f_101c_a0_i());
		L0->SetPhoto(f_1020_a0_s());
		L0->SetPhoto2(f_1022_a0_s());
		L0->SetPlayerName(f_1204_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_eac_a1_b(f_f6b_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e9a_a1_v(a0);
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
			if (f_10ca_a1_b(tv1) && f_1142_a1_b(tv1)) {
				f_107d_a2_v(tv1, tv0);
				f_bc_a1_v("Anger");
				tv0->SetMessage(524754);
				tv0->ClearReplies();
				tv0->AddReply(526909, 28202, 28201);
				break;
			}
			f_bc_a1_v("Jeer");
			tv0->SetMessage(524756);
			tv0->ClearReplies();
			if (f_10d6_a1_b(tv1)) {
				tv0->AddReply(524763, 26088, 26087);
			}
			if (f_10ca_a1_b(tv1)) {
				tv0->AddReply(530365, -1, 31738);
			}
			tv0->AddReply(524757, -1, 26081);
			break;
			return;
		}
		if (f_1024_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f36_a1_v(tv2);
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

	void f_bc_a1_v(string a0)
	{
		if (!f_1024_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f46_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f64_a0_v();
			if (a1 == 28456) {
				f_1026_a2_v(tv1, tv0);
				f_10ba_a2_v(tv1, tv0);
			}
			if (a1 == 26079) {
				f_1026_a2_v(tv1, tv0);
				f_10ba_a2_v(tv1, tv0);
			}
			if (a1 == 26091) {
				f_103d_a2_v(tv1, tv0);
			}
			if (a1 == 28475) {
				f_103d_a2_v(tv1, tv0);
			}
			if (a1 == 28220) {
				f_1083_a2_v(tv1, tv0);
			}
			if (a1 == 28221) {
				f_1083_a2_v(tv1, tv0);
			}
			if (a1 == 28218) {
				f_1083_a2_v(tv1, tv0);
			}
			if (a1 == 31738) {
				f_1026_a2_v(tv1, tv0);
				f_10ba_a2_v(tv1, tv0);
			}
			if (a0 == 26078) {
				if (f_10ca_a1_b(tv1) && f_1142_a1_b(tv1)) {
					f_107d_a2_v(tv1, tv0);
					f_bc_a1_v("Anger");
					tv0->SetMessage(524754);
					tv0->ClearReplies();
					tv0->AddReply(526909, 28202, 28201);
					return;
				}
				f_bc_a1_v("Jeer");
				tv0->SetMessage(524756);
				tv0->ClearReplies();
				if (f_10d6_a1_b(tv1)) {
					tv0->AddReply(524763, 26088, 26087);
				}
				if (f_10ca_a1_b(tv1)) {
					tv0->AddReply(530365, -1, 31738);
				}
				tv0->AddReply(524757, -1, 26081);
				return;
			}
			if (a0 == 26088) {
				f_bc_a1_v("Distrust");
				tv0->SetMessage(524764);
				tv0->ClearReplies();
				tv0->AddReply(524765, 26090, 26089);
				tv0->AddReply(526923, 28216, 28215);
				return;
			}
			if (a0 == 28216) {
				f_bc_a1_v("Anger");
				tv0->SetMessage(526924);
				tv0->ClearReplies();
				tv0->AddReply(526925, 28219, 28217);
				tv0->AddReply(526926, -1, 28218);
				return;
			}
			if (a0 == 28219) {
				f_bc_a1_v("Anger");
				tv0->SetMessage(526927);
				tv0->ClearReplies();
				tv0->AddReply(526928, -1, 28220);
				tv0->AddReply(526929, -1, 28221);
				return;
			}
			if (a0 == 26090) {
				f_bc_a1_v("Neutral");
				tv0->SetMessage(524766);
				tv0->ClearReplies();
				tv0->AddReply(526915, 28208, 28207);
				tv0->AddReply(526930, 28223, 28222);
				return;
			}
			if (a0 == 28223) {
				f_bc_a1_v("Anger");
				tv0->SetMessage(526931);
				tv0->ClearReplies();
				tv0->AddReply(526932, 28208, 28224);
				return;
			}
			if (a0 == 28208) {
				f_bc_a1_v("Distrust");
				tv0->SetMessage(526916);
				tv0->ClearReplies();
				tv0->AddReply(526917, 28210, 28209);
				tv0->AddReply(527156, 28460, 28459);
				return;
			}
			if (a0 == 28460) {
				f_bc_a1_v("Distrust");
				tv0->SetMessage(527157);
				tv0->ClearReplies();
				tv0->AddReply(527158, 28210, 28461);
				return;
			}
			if (a0 == 28210) {
				f_bc_a1_v("Distrust");
				tv0->SetMessage(526918);
				tv0->ClearReplies();
				tv0->AddReply(526919, 28212, 28211);
				tv0->AddReply(527159, 28464, 28463);
				return;
			}
			if (a0 == 28464) {
				f_bc_a1_v("Distrust");
				tv0->SetMessage(527160);
				tv0->ClearReplies();
				tv0->AddReply(527161, 28214, 28465);
				return;
			}
			if (a0 == 28212) {
				f_bc_a1_v("Anger");
				tv0->SetMessage(526920);
				tv0->ClearReplies();
				tv0->AddReply(526921, 28214, 28213);
				tv0->AddReply(527166, 28214, 28471);
				return;
			}
			if (a0 == 28214) {
				f_bc_a1_v("Anger");
				tv0->SetMessage(526922);
				tv0->ClearReplies();
				tv0->AddReply(527162, 28467, 28466);
				tv0->AddReply(527167, 28467, 28473);
				return;
			}
			if (a0 == 28467) {
				f_bc_a1_v("Anger");
				tv0->SetMessage(527163);
				tv0->ClearReplies();
				tv0->AddReply(527164, 28469, 28468);
				tv0->AddReply(527169, 28477, 28476);
				return;
			}
			if (a0 == 28477) {
				f_bc_a1_v("Neutral");
				tv0->SetMessage(527170);
				tv0->ClearReplies();
				tv0->AddReply(527171, 28469, 28478);
				return;
			}
			if (a0 == 28469) {
				f_bc_a1_v("Distrust");
				tv0->SetMessage(527165);
				tv0->ClearReplies();
				tv0->AddReply(524767, -1, 26091);
				tv0->AddReply(527168, -1, 28475);
				return;
			}
			if (a0 == 28202) {
				f_bc_a1_v("Anger");
				tv0->SetMessage(526910);
				tv0->ClearReplies();
				tv0->AddReply(527148, 28450, 28448);
				tv0->AddReply(527149, 28450, 28449);
				return;
			}
			if (a0 == 28450) {
				f_bc_a1_v("Neutral");
				tv0->SetMessage(527150);
				tv0->ClearReplies();
				tv0->AddReply(526911, 28452, 28203);
				return;
			}
			if (a0 == 28452) {
				f_bc_a1_v("Neutral");
				tv0->SetMessage(527151);
				tv0->ClearReplies();
				tv0->AddReply(527152, 28204, 28453);
				tv0->AddReply(527153, 28204, 28454);
				return;
			}
			if (a0 == 28204) {
				f_bc_a1_v("Jeer");
				tv0->SetMessage(526912);
				tv0->ClearReplies();
				tv0->AddReply(527146, 28447, 28446);
				tv0->AddReply(524755, -1, 26079);
				return;
			}
			if (a0 == 28447) {
				f_bc_a1_v("Jeer");
				tv0->SetMessage(527147);
				tv0->ClearReplies();
				tv0->AddReply(527154, -1, 28456);
				tv0->AddReply(527155, -1, 28457);
				return;
			}
			tv3 = true;
			if (f_1024_a0_b()) {
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
		if (!f_e55_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_101e_a0_i());
		L0->SetNPCDescription(f_101c_a0_i());
		L0->SetPhoto(f_1020_a0_s());
		L0->SetPhoto2(f_1022_a0_s());
		L0->SetPlayerName(f_1204_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_eac_a1_b(f_f6b_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e9a_a1_v(a0);
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
			f_3a3_a1_v("Neutral");
			tv0->SetMessage(525480);
			tv0->ClearReplies();
			tv0->AddReply(525481, 27536, 26837);
			tv0->AddReply(526263, 27536, 27537);
			break;
			return;
		}
		if (f_1024_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f36_a1_v(tv2);
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
		if (!f_1024_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f46_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f64_a0_v();
			if (a0 == 26836) {
				f_3a3_a1_v("Neutral");
				tv0->SetMessage(525480);
				tv0->ClearReplies();
				tv0->AddReply(525481, 27536, 26837);
				tv0->AddReply(526263, 27536, 27537);
				return;
			}
			if (a0 == 27536) {
				f_3a3_a1_v("Neutral");
				tv0->SetMessage(526262);
				tv0->ClearReplies();
				tv0->AddReply(526264, 27540, 27539);
				tv0->AddReply(526266, -1, 27541);
				return;
			}
			if (a0 == 27540) {
				f_3a3_a1_v("Neutral");
				tv0->SetMessage(526265);
				tv0->ClearReplies();
				tv0->AddReply(526267, -1, 27542);
				tv0->AddReply(526268, -1, 27543);
				return;
			}
			tv3 = true;
			if (f_1024_a0_b()) {
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
		if (!f_e55_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_101e_a0_i());
		L0->SetNPCDescription(f_101c_a0_i());
		L0->SetPhoto(f_1020_a0_s());
		L0->SetPhoto2(f_1022_a0_s());
		L0->SetPlayerName(f_1204_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_eac_a1_b(f_f6b_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e9a_a1_v(a0);
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
			f_4aa_a1_v("Jeer");
			tv0->SetMessage(525594);
			tv0->ClearReplies();
			if (f_10e2_a1_b(tv1) && f_10ee_a1_b(tv1)) {
				tv0->AddReply(525596, 26944, 26943);
			}
			tv0->AddReply(525595, -1, 26942);
			break;
			return;
		}
		if (f_1024_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f36_a1_v(tv2);
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

	void f_4aa_a1_v(string a0)
	{
		if (!f_1024_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f46_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f64_a0_v();
			if (a1 == 26943) {
				f_1051_a2_v(tv1, tv0);
			}
			if (a1 == 26945) {
				f_10ac_a2_v(tv1, tv0);
			}
			if (a1 == 42709) {
				f_10b3_a2_v(tv1, tv0);
			}
			if (a0 == 26941) {
				f_4aa_a1_v("Jeer");
				tv0->SetMessage(525594);
				tv0->ClearReplies();
				if (f_10e2_a1_b(tv1) && f_10ee_a1_b(tv1)) {
					tv0->AddReply(525596, 26944, 26943);
				}
				tv0->AddReply(525595, -1, 26942);
				return;
			}
			if (a0 == 26944) {
				f_4aa_a1_v("Anger");
				tv0->SetMessage(525597);
				tv0->ClearReplies();
				tv0->AddReply(540670, 42702, 42701);
				tv0->AddReply(540672, 42702, 42703);
				return;
			}
			if (a0 == 42702) {
				f_4aa_a1_v("Anger");
				tv0->SetMessage(540671);
				tv0->ClearReplies();
				tv0->AddReply(540673, 42706, 42704);
				tv0->AddReply(540675, 42706, 42707);
				return;
			}
			if (a0 == 42706) {
				f_4aa_a1_v("Anger");
				tv0->SetMessage(540674);
				tv0->ClearReplies();
				tv0->AddReply(525598, -1, 26945);
				tv0->AddReply(540676, -1, 42709);
				return;
			}
			tv3 = true;
			if (f_1024_a0_b()) {
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
		if (!f_e55_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_101e_a0_i());
		L0->SetNPCDescription(f_101c_a0_i());
		L0->SetPhoto(f_1020_a0_s());
		L0->SetPhoto2(f_1022_a0_s());
		L0->SetPlayerName(f_1204_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_eac_a1_b(f_f6b_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e9a_a1_v(a0);
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
			f_5e5_a1_v("Anger");
			tv0->SetMessage(525864);
			tv0->ClearReplies();
			if (f_10fa_a1_b(tv1)) {
				tv0->AddReply(525865, 30508, 27164);
			}
			tv0->AddReply(525874, -1, 27173);
			break;
			return;
		}
		if (f_1024_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f36_a1_v(tv2);
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

	void f_5e5_a1_v(string a0)
	{
		if (!f_1024_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f46_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f64_a0_v();
			if (a1 == 27172) {
				f_1057_a2_v(tv1, tv0);
			}
			if (a0 == 27163) {
				f_5e5_a1_v("Anger");
				tv0->SetMessage(525864);
				tv0->ClearReplies();
				if (f_10fa_a1_b(tv1)) {
					tv0->AddReply(525865, 30508, 27164);
				}
				tv0->AddReply(525874, -1, 27173);
				return;
			}
			if (a0 == 30508) {
				f_5e5_a1_v("Distrust");
				tv0->SetMessage(529065);
				tv0->ClearReplies();
				tv0->AddReply(529066, 27165, 30509);
				tv0->AddReply(540766, 27165, 42809);
				return;
			}
			if (a0 == 27165) {
				f_5e5_a1_v("Distrust");
				tv0->SetMessage(525866);
				tv0->ClearReplies();
				tv0->AddReply(525868, 27168, 27167);
				tv0->AddReply(529067, 30511, 30510);
				return;
			}
			if (a0 == 30511) {
				f_5e5_a1_v("Neutral");
				tv0->SetMessage(529068);
				tv0->ClearReplies();
				tv0->AddReply(529069, 27171, 30512);
				return;
			}
			if (a0 == 27168) {
				f_5e5_a1_v("Anger");
				tv0->SetMessage(525869);
				tv0->ClearReplies();
				tv0->AddReply(525870, 27171, 27169);
				return;
			}
			if (a0 == 27171) {
				f_5e5_a1_v("Neutral");
				tv0->SetMessage(525872);
				tv0->ClearReplies();
				tv0->AddReply(525873, -1, 27172);
				return;
			}
			tv3 = true;
			if (f_1024_a0_b()) {
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
		if (!f_e55_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_101e_a0_i());
		L0->SetNPCDescription(f_101c_a0_i());
		L0->SetPhoto(f_1020_a0_s());
		L0->SetPhoto2(f_1022_a0_s());
		L0->SetPlayerName(f_1204_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_eac_a1_b(f_f6b_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e9a_a1_v(a0);
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
			f_735_a1_v("Neutral");
			tv0->SetMessage(526481);
			tv0->ClearReplies();
			if (f_112a_a1_b(tv1)) {
				tv0->AddReply(526482, 30355, 27748);
			}
			if (f_1136_a1_b(tv1)) {
				tv0->AddReply(526504, 30366, 27770);
			}
			tv0->AddReply(526489, -1, 27755);
			tv0->AddReply(528924, -1, 30354);
			break;
			return;
		}
		if (f_1024_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f36_a1_v(tv2);
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

	void f_735_a1_v(string a0)
	{
		if (!f_1024_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f46_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f64_a0_v();
			if (a1 == 30351) {
				f_1066_a2_v(tv1, tv0);
				f_1046_a2_v(tv1, tv0);
				f_10a1_a2_v(tv1, tv0);
				f_108c_a2_v(tv1, tv0);
			}
			if (a1 == 30371) {
				f_1074_a2_v(tv1, tv0);
			}
			if (a1 == 43830) {
				f_1097_a2_v(tv1, tv0);
			}
			if (a1 == 43828) {
				f_1097_a2_v(tv1, tv0);
			}
			if (a1 == 43824) {
				f_1097_a2_v(tv1, tv0);
			}
			if (a0 == 27747) {
				f_735_a1_v("Neutral");
				tv0->SetMessage(526481);
				tv0->ClearReplies();
				if (f_112a_a1_b(tv1)) {
					tv0->AddReply(526482, 30355, 27748);
				}
				if (f_1136_a1_b(tv1)) {
					tv0->AddReply(526504, 30366, 27770);
				}
				tv0->AddReply(526489, -1, 27755);
				tv0->AddReply(528924, -1, 30354);
				return;
			}
			if (a0 == 30366) {
				f_735_a1_v("Neutral");
				tv0->SetMessage(528933);
				tv0->ClearReplies();
				tv0->AddReply(528934, 27771, 30367);
				tv0->AddReply(541644, 43817, 43816);
				return;
			}
			if (a0 == 43817) {
				f_735_a1_v("Distrust");
				tv0->SetMessage(541645);
				tv0->ClearReplies();
				tv0->AddReply(541646, 43819, 43818);
				tv0->AddReply(541648, 43821, 43820);
				return;
			}
			if (a0 == 43821) {
				f_735_a1_v("Neutral");
				tv0->SetMessage(541649);
				tv0->ClearReplies();
				tv0->AddReply(541650, 43825, 43822);
				return;
			}
			if (a0 == 43819) {
				f_735_a1_v("Anger");
				tv0->SetMessage(541647);
				tv0->ClearReplies();
				tv0->AddReply(541651, 43825, 43823);
				tv0->AddReply(541652, -1, 43824);
				return;
			}
			if (a0 == 43825) {
				f_735_a1_v("Anger");
				tv0->SetMessage(541653);
				tv0->ClearReplies();
				tv0->AddReply(541654, 27773, 43827);
				tv0->AddReply(541655, -1, 43828);
				return;
			}
			if (a0 == 27771) {
				f_735_a1_v("Neutral");
				tv0->SetMessage(526505);
				tv0->ClearReplies();
				tv0->AddReply(526506, 27773, 27772);
				return;
			}
			if (a0 == 27773) {
				f_735_a1_v("Anger");
				tv0->SetMessage(526507);
				tv0->ClearReplies();
				tv0->AddReply(526508, 27775, 27774);
				tv0->AddReply(541656, -1, 43830);
				return;
			}
			if (a0 == 27775) {
				f_735_a1_v("Anger");
				tv0->SetMessage(526509);
				tv0->ClearReplies();
				tv0->AddReply(526510, 27777, 27776);
				tv0->AddReply(541657, 27777, 43831);
				return;
			}
			if (a0 == 27777) {
				f_735_a1_v("Distrust");
				tv0->SetMessage(526511);
				tv0->ClearReplies();
				tv0->AddReply(526512, 30368, 27778);
				return;
			}
			if (a0 == 30368) {
				f_735_a1_v("Neutral");
				tv0->SetMessage(528935);
				tv0->ClearReplies();
				tv0->AddReply(528936, 30370, 30369);
				return;
			}
			if (a0 == 30370) {
				f_735_a1_v("Neutral");
				tv0->SetMessage(528937);
				tv0->ClearReplies();
				tv0->AddReply(528938, -1, 30371);
				return;
			}
			if (a0 == 30355) {
				f_735_a1_v("Jeer");
				tv0->SetMessage(528925);
				tv0->ClearReplies();
				tv0->AddReply(528926, 30357, 30356);
				return;
			}
			if (a0 == 30357) {
				f_735_a1_v("Anger");
				tv0->SetMessage(528927);
				tv0->ClearReplies();
				tv0->AddReply(528928, 27749, 30358);
				tv0->AddReply(528929, 27749, 30359);
				return;
			}
			if (a0 == 27749) {
				f_735_a1_v("Anger");
				tv0->SetMessage(526483);
				tv0->ClearReplies();
				tv0->AddReply(526484, 27751, 27750);
				return;
			}
			if (a0 == 27751) {
				f_735_a1_v("Neutral");
				tv0->SetMessage(526485);
				tv0->ClearReplies();
				tv0->AddReply(526486, 27753, 27752);
				tv0->AddReply(528930, 30363, 30362);
				return;
			}
			if (a0 == 30363) {
				f_735_a1_v("Neutral");
				tv0->SetMessage(528931);
				tv0->ClearReplies();
				tv0->AddReply(528932, 27753, 30364);
				return;
			}
			if (a0 == 27753) {
				f_735_a1_v("Neutral");
				tv0->SetMessage(526487);
				tv0->ClearReplies();
				tv0->AddReply(526488, 30348, 27754);
				return;
			}
			if (a0 == 30348) {
				f_735_a1_v("Neutral");
				tv0->SetMessage(528918);
				tv0->ClearReplies();
				tv0->AddReply(528919, 30350, 30349);
				return;
			}
			if (a0 == 30350) {
				f_735_a1_v("Distrust");
				tv0->SetMessage(528920);
				tv0->ClearReplies();
				tv0->AddReply(528921, -1, 30351);
				return;
			}
			tv3 = true;
			if (f_1024_a0_b()) {
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
		if (!f_e55_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_101e_a0_i());
		L0->SetNPCDescription(f_101c_a0_i());
		L0->SetPhoto(f_1020_a0_s());
		L0->SetPhoto2(f_1022_a0_s());
		L0->SetPlayerName(f_1204_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_eac_a1_b(f_f6b_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e9a_a1_v(a0);
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
			f_9e9_a1_v("Neutral");
			tv0->SetMessage(526953);
			tv0->ClearReplies();
			if (f_1106_a1_b(tv1) && f_111e_a1_b(tv1) || f_1112_a1_b(tv1) && f_111e_a1_b(tv1)) {
				tv0->AddReply(526954, 29329, 28246);
			}
			tv0->AddReply(526957, -1, 28249);
			break;
			return;
		}
		if (f_1024_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f36_a1_v(tv2);
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

	void f_9e9_a1_v(string a0)
	{
		if (!f_1024_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f46_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f64_a0_v();
			if (a1 == 28246) {
				f_1060_a2_v(tv1, tv0);
			}
			if (a0 == 28245) {
				f_9e9_a1_v("Neutral");
				tv0->SetMessage(526953);
				tv0->ClearReplies();
				if (f_1106_a1_b(tv1) && f_111e_a1_b(tv1) || f_1112_a1_b(tv1) && f_111e_a1_b(tv1)) {
					tv0->AddReply(526954, 29329, 28246);
				}
				tv0->AddReply(526957, -1, 28249);
				return;
			}
			if (a0 == 29329) {
				f_9e9_a1_v("Neutral");
				tv0->SetMessage(527972);
				tv0->ClearReplies();
				tv0->AddReply(527977, 29339, 29335);
				tv0->AddReply(527978, 29337, 29336);
				return;
			}
			if (a0 == 29337) {
				f_9e9_a1_v("Neutral");
				tv0->SetMessage(527979);
				tv0->ClearReplies();
				tv0->AddReply(527980, 29339, 29338);
				return;
			}
			if (a0 == 29339) {
				f_9e9_a1_v("Distrust");
				tv0->SetMessage(527981);
				tv0->ClearReplies();
				tv0->AddReply(527982, 29341, 29340);
				return;
			}
			if (a0 == 29341) {
				f_9e9_a1_v("Distrust");
				tv0->SetMessage(527983);
				tv0->ClearReplies();
				tv0->AddReply(527988, 29347, 29346);
				tv0->AddReply(527990, 29349, 29348);
				return;
			}
			if (a0 == 29349) {
				f_9e9_a1_v("Anger");
				tv0->SetMessage(527991);
				tv0->ClearReplies();
				tv0->AddReply(527992, 28247, 29350);
				return;
			}
			if (a0 == 29347) {
				f_9e9_a1_v("Neutral");
				tv0->SetMessage(527989);
				tv0->ClearReplies();
				tv0->AddReply(527984, 28247, 29342);
				tv0->AddReply(527986, 29345, 29344);
				return;
			}
			if (a0 == 29345) {
				f_9e9_a1_v("Neutral");
				tv0->SetMessage(527987);
				tv0->ClearReplies();
				tv0->AddReply(527993, 28247, 29352);
				return;
			}
			if (a0 == 28247) {
				f_9e9_a1_v("Neutral");
				tv0->SetMessage(526955);
				tv0->ClearReplies();
				tv0->AddReply(526956, 29354, 28248);
				return;
			}
			if (a0 == 29354) {
				f_9e9_a1_v("Distrust");
				tv0->SetMessage(527994);
				tv0->ClearReplies();
				tv0->AddReply(527995, 29362, 29355);
				tv0->AddReply(527996, 29357, 29356);
				return;
			}
			if (a0 == 29357) {
				f_9e9_a1_v("Anger");
				tv0->SetMessage(527997);
				tv0->ClearReplies();
				tv0->AddReply(527998, -1, 29358);
				tv0->AddReply(527999, -1, 29359);
				return;
			}
			if (a0 == 29362) {
				f_9e9_a1_v("Distrust");
				tv0->SetMessage(528002);
				tv0->ClearReplies();
				tv0->AddReply(528003, 29364, 29363);
				return;
			}
			if (a0 == 29364) {
				f_9e9_a1_v("Grin");
				tv0->SetMessage(528004);
				tv0->ClearReplies();
				tv0->AddReply(528005, -1, 29365);
				return;
			}
			tv3 = true;
			if (f_1024_a0_b()) {
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
		if (!f_e55_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_101e_a0_i());
		L0->SetNPCDescription(f_101c_a0_i());
		L0->SetPhoto(f_1020_a0_s());
		L0->SetPhoto2(f_1022_a0_s());
		L0->SetPlayerName(f_1204_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_eac_a1_b(f_f6b_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e9a_a1_v(a0);
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
			f_bd2_a1_v("Neutral");
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_1024_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f36_a1_v(tv2);
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

	void f_bd2_a1_v(string a0)
	{
		if (!f_1024_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f46_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f64_a0_v();
			if (a0 == 36906) {
				f_bd2_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_bd2_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_bd2_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_1024_a0_b()) {
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
		if (!f_e55_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_101e_a0_i());
		L0->SetNPCDescription(f_101c_a0_i());
		L0->SetPhoto(f_1020_a0_s());
		L0->SetPhoto2(f_1022_a0_s());
		L0->SetPlayerName(f_1204_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_eac_a1_b(f_f6b_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_e9a_a1_v(a0);
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
			f_cd0_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_1024_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_f36_a1_v(tv2);
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

	void f_cd0_a1_v(string a0)
	{
		if (!f_1024_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_f46_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_f64_a0_v();
			if (a0 == 42554) {
				f_cd0_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_1024_a0_b()) {
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
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_d17_a0_v();
	}

	void f_d17_a0_v(void)
	{
		if (!f_e50_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_dc7_a0_v();
		}
	}

	bool f_d25_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_e47_a1_b(L0);
	}

	void f_d34_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_d39_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_e13_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_d4f_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_d58_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_d58_a0_v();
			if (f_e50_a0_b() && f_d39_a0_b()) {
				if (f_d25_a0_b()) {
					f_ee6_a1_b(f_f6b_a0_o());
				}
			} else {
				f_d34_a0_v();
				f_d4f_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_e0e_a0_v();
		f_d58_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_d58_a0_v();
		f_f36_a1_v("Neutral");
		f_d4f_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_d4f_a0_v();
		} else {
			f_f36_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_e0e_a0_v();
			f_e47_a1_b(a0);
			enable OnUse;
			f_1215_a1_v(a0);
			f_f36_a1_v("Neutral");
			f_d58_a0_v();
			f_d4f_a0_v();
		}
	}
}

void f_dc7_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_e50_a0_b()) {
		return;
	}
	L0 = f_100b_a0_i();
	for (L1 = 0; L1 < 5 && f_e50_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1004_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_e0c_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_e0c_a0_b(void)
{
	return true;
}

void f_e0e_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_e13_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_e1b_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_e27_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_e1b_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_f7b_a3_f(L0 + a2, a3, a4));
	return true;
}

bool f_e3d_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_e47_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_e3d_a1_b(L0);
}

bool f_e50_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_e55_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_f71_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1024_a0_b()) {
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

void f_e9a_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1024_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_eac_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_ee6_a1_b(a0)) {
			if (!f_f0b_a1_b(a0)) {
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
		if (!f_f0b_a1_b(a0)) {
			if (!f_ee6_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_ee6_a1_b(object a0)
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
	return f_f55_a1_b(L4);
}

bool f_f0b_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_ff5_a0_i() + "m";
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
	return f_f55_a1_b(L4);
}

void f_f36_a1_v(string a0)
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

void f_f46_a2_v(string a0, bool a1)
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

bool f_f55_a1_b(string a0)
{
	if (f_1024_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_f64_a0_v(void)
{
	if (f_1024_a0_b()) {
		@lshStopSpeech();
	}
}

object f_f6b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_f71_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_f7b_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_f86_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_f8b_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_f97_a3_v(object a0, object a1, int a2)
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
		f_f8b_a2_v(L0, a2);
	}
}

void f_faa_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_f97_a3_v(a0, L0, a2);
}

bool f_fb7_a2_b(object a0, float a1)
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
	f_fda_a1_v(a1);
	f_e27_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_fda_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_fe4_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_ff0_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_ff5_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_ffe_a1_b(int a0)
{
	return f_ff5_a0_i() == a0;
}

string f_1004_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_100b_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1004_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_101c_a0_i(void)
{
	return 515534;
}

int f_101e_a0_i(void)
{
	return 502859;
}

string f_1020_a0_s(void)
{
	return "ui/NPC_Georg.png";
}

string f_1022_a0_s(void)
{
	return "ui/NPC_Georg_b.png";
}

bool f_1024_a0_b(void)
{
	return true;
}

void f_1026_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("k1q02", 3);
	L0 = f_11d2_a0_o();
	L0->AddMark("k1q02GeorgGotoMaria", "pt_map_maria", 0, 524779, f_ff0_a0_f());
	f_115b_a0_v();
}

void f_103d_a2_v(object a0, object a1)
{
	@SetVariable("k1q02", 5);
	f_114e_a0_v();
}

void f_1046_a2_v(object a0, object a1)
{
	@Trace("beta_pills 5 is given");
	f_faa_a3_v(a0, "beta_pills", 5);
}

void f_1051_a2_v(object a0, object a1)
{
	@SetVariable("ook3Georg1", 1);
}

void f_1057_a2_v(object a0, object a1)
{
	@SetVariable("k5q01", 3);
	f_1175_a0_v();
}

void f_1060_a2_v(object a0, object a1)
{
	@SetVariable("ook10Georg1", 1);
}

void f_1066_a2_v(object a0, object a1)
{
	@SetVariable("k9q01", 2);
	f_118f_a0_v();
	f_fe4_a2_b("quest_k9_01", "init_termitnik2");
}

void f_1074_a2_v(object a0, object a1)
{
	@SetVariable("k9q01", 4);
	f_119c_a0_v();
}

void f_107d_a2_v(object a0, object a1)
{
	@SetVariable("ook1Georg1", 1);
}

void f_1083_a2_v(object a0, object a1)
{
	@SetVariable("k1q02", -1);
	f_1168_a0_v();
}

void f_108c_a2_v(object a0, object a1)
{
	@Trace("raincoat_repel is given");
	f_faa_a3_v(a0, "raincoat_repel", 1);
}

void f_1097_a2_v(object a0, object a1)
{
	f_1182_a0_v();
	f_fe4_a2_b("quest_k9_01", "fail");
}

void f_10a1_a2_v(object a0, object a1)
{
	@Trace("revolver ammo6 is given");
	f_faa_a3_v(a0, "revolver_ammo", 6);
}

void f_10ac_a2_v(object a0, object a1)
{
	f_fb7_a2_b(a0, -0.30000001192092896);
}

void f_10b3_a2_v(object a0, object a1)
{
	f_fb7_a2_b(a0, -0.5);
}

void f_10ba_a2_v(object a0, object a1)
{
	f_11e3_a3_v(f_11d2_a0_o(), "pt_map_maria", 2);
	a1->ShowMap(f_11d2_a0_o());
}

bool f_10ca_a1_b(object a0)
{
	if (f_f86_a1_i("k1q02") == 2) {
		return true;
	}
	return false;
}

bool f_10d6_a1_b(object a0)
{
	if (f_f86_a1_i("k1q02") == 4) {
		return true;
	}
	return false;
}

bool f_10e2_a1_b(object a0)
{
	if (f_f86_a1_i("k3q03") == 1000) {
		return true;
	}
	return false;
}

bool f_10ee_a1_b(object a0)
{
	if (f_f86_a1_i("ook3Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_10fa_a1_b(object a0)
{
	if (f_f86_a1_i("k5q01") == 2) {
		return true;
	}
	return false;
}

bool f_1106_a1_b(object a0)
{
	if (f_f86_a1_i("k10q01") == 1) {
		return true;
	}
	return false;
}

bool f_1112_a1_b(object a0)
{
	if (f_f86_a1_i("k10q01") == 2) {
		return true;
	}
	return false;
}

bool f_111e_a1_b(object a0)
{
	if (f_f86_a1_i("ook10Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_112a_a1_b(object a0)
{
	if (f_f86_a1_i("k9q01") == 1) {
		return true;
	}
	return false;
}

bool f_1136_a1_b(object a0)
{
	if (f_f86_a1_i("k9q01") == 3) {
		return true;
	}
	return false;
}

bool f_1142_a1_b(object a0)
{
	if (f_f86_a1_i("ook1Georg1") == 0) {
		return true;
	}
	return false;
}

void f_114e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 331, 2, 524776);
	f_11b6_a2_b(L0, 326);
}

void f_115b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 329, 2, 524774);
	f_11b6_a2_b(L0, 326);
}

void f_1168_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 544, 2, 530366);
	f_11b6_a2_b(L0, 326);
}

void f_1175_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 394, 1, 525887);
	f_11b6_a2_b(L0, 390);
}

void f_1182_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 789, 1, 542508);
	f_11b6_a2_b(L0, 517);
}

void f_118f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 519, 1, 529811);
	f_11b6_a2_b(L0, 517);
}

void f_119c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 521, 1, 529813);
	f_11b6_a2_b(L0, 517);
}

object f_11a9_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_11b6_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_11a9_a0_o();
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

object f_11d2_a0_o(void)
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

void f_11e3_a3_v(object a0, string a1, float a2)
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

int f_1204_a0_i(void)
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

void f_1215_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_ffe_a1_b(1)) {
		t0{a0};
		return;
	}
	if (f_ffe_a1_b(3)) {
		t4{a0};
		return;
	}
	if (f_ffe_a1_b(5)) {
		t6{a0};
		return;
	}
	if (f_ffe_a1_b(9)) {
		t8{a0};
		return;
	}
	if (f_ffe_a1_b(10)) {
		t10{a0};
		return;
	}
	if (f_ffe_a1_b(12)) {
		t12{a0};
		return;
	}
	t14{a0};
}

