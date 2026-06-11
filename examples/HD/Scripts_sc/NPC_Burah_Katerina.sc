event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLoad 5;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;
var bool g2;

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
		if (!f_8dd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a36_a0_i());
		L0->SetNPCDescription(f_a34_a0_i());
		L0->SetPhoto(f_a38_a0_s());
		L0->SetPhoto2(f_a3a_a0_s());
		L0->SetPlayerName(f_b08_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_934_a1_b(f_9f3_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_922_a1_v(a0);
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
			tv0->SetMessage(518018);
			tv0->ClearReplies();
			tv0->AddReply(518019, -1, 19152);
			tv0->AddReply(527797, -1, 29130);
			break;
			return;
		}
		if (f_a3c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_9be_a1_v(tv2);
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
		if (!f_a3c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9ce_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_9ec_a0_v();
			if (a0 == 19151) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(518018);
				tv0->ClearReplies();
				tv0->AddReply(518019, -1, 19152);
				tv0->AddReply(527797, -1, 29130);
				return;
			}
			tv3 = true;
			if (f_a3c_a0_b()) {
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
		if (!f_8dd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a36_a0_i());
		L0->SetNPCDescription(f_a34_a0_i());
		L0->SetPhoto(f_a38_a0_s());
		L0->SetPhoto2(f_a3a_a0_s());
		L0->SetPlayerName(f_b08_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_934_a1_b(f_9f3_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_922_a1_v(a0);
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
			if (!f_a91_a1_b(tv1) && f_a9d_a1_b(tv1)) {
				f_a3e_a2_v(tv1, tv0);
				f_19c_a1_v("Suffering");
				tv0->SetMessage(520248);
				tv0->ClearReplies();
				tv0->AddReply(520249, 21442, 21441);
				break;
			}
			f_19c_a1_v("Neutral");
			tv0->SetMessage(520268);
			tv0->ClearReplies();
			if (!f_a9d_a1_b(tv1) && f_aa9_a1_b(tv1)) {
				tv0->AddReply(520269, 21462, 21461);
			}
			if (!f_a9d_a1_b(tv1) && f_ab5_a1_b(tv1)) {
				tv0->AddReply(520272, 21465, 21464);
			}
			tv0->AddReply(520277, -1, 21469);
			break;
			return;
		}
		if (f_a3c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_9be_a1_v(tv2);
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

	void f_19c_a1_v(string a0)
	{
		if (!f_a3c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9ce_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_9ec_a0_v();
			if (a1 == 21461) {
				f_a44_a2_v(tv1, tv0);
			}
			if (a1 == 21464) {
				f_a4a_a2_v(tv1, tv0);
			}
			if (a0 == 21440) {
				if (!f_a91_a1_b(tv1) && f_a9d_a1_b(tv1)) {
					f_a3e_a2_v(tv1, tv0);
					f_19c_a1_v("Suffering");
					tv0->SetMessage(520248);
					tv0->ClearReplies();
					tv0->AddReply(520249, 21442, 21441);
					return;
				}
				f_19c_a1_v("Neutral");
				tv0->SetMessage(520268);
				tv0->ClearReplies();
				if (!f_a9d_a1_b(tv1) && f_aa9_a1_b(tv1)) {
					tv0->AddReply(520269, 21462, 21461);
				}
				if (!f_a9d_a1_b(tv1) && f_ab5_a1_b(tv1)) {
					tv0->AddReply(520272, 21465, 21464);
				}
				tv0->AddReply(520277, -1, 21469);
				return;
			}
			if (a0 == 21465) {
				f_19c_a1_v("Penetrating");
				tv0->SetMessage(520273);
				tv0->ClearReplies();
				tv0->AddReply(520274, 21467, 21466);
				return;
			}
			if (a0 == 21467) {
				f_19c_a1_v("Penetrating");
				tv0->SetMessage(520275);
				tv0->ClearReplies();
				tv0->AddReply(520276, -1, 21468);
				tv0->AddReply(527804, -1, 29140);
				return;
			}
			if (a0 == 21462) {
				f_19c_a1_v("Grin");
				tv0->SetMessage(520270);
				tv0->ClearReplies();
				tv0->AddReply(520271, -1, 21463);
				return;
			}
			if (a0 == 21442) {
				f_19c_a1_v("Suffering");
				tv0->SetMessage(520250);
				tv0->ClearReplies();
				tv0->AddReply(520251, 21444, 21443);
				tv0->AddReply(520259, 21452, 21451);
				tv0->AddReply(520265, 21458, 21457);
				return;
			}
			if (a0 == 21458) {
				f_19c_a1_v("Suffering");
				tv0->SetMessage(520266);
				tv0->ClearReplies();
				tv0->AddReply(527803, 21452, 29136);
				tv0->AddReply(520267, -1, 21459);
				return;
			}
			if (a0 == 21452) {
				f_19c_a1_v("Penetrating");
				tv0->SetMessage(520260);
				tv0->ClearReplies();
				tv0->AddReply(520261, 21454, 21453);
				tv0->AddReply(520264, 21454, 21456);
				return;
			}
			if (a0 == 21454) {
				f_19c_a1_v("Suffering");
				tv0->SetMessage(520262);
				tv0->ClearReplies();
				tv0->AddReply(520263, -1, 21455);
				return;
			}
			if (a0 == 21444) {
				f_19c_a1_v("Suffering");
				tv0->SetMessage(520252);
				tv0->ClearReplies();
				tv0->AddReply(520253, 21446, 21445);
				tv0->AddReply(520256, 21449, 21448);
				return;
			}
			if (a0 == 21449) {
				f_19c_a1_v("Neutral");
				tv0->SetMessage(520257);
				tv0->ClearReplies();
				tv0->AddReply(520258, -1, 21450);
				return;
			}
			if (a0 == 21446) {
				f_19c_a1_v("Penetrating");
				tv0->SetMessage(520254);
				tv0->ClearReplies();
				tv0->AddReply(520255, -1, 21447);
				return;
			}
			tv3 = true;
			if (f_a3c_a0_b()) {
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
		if (!f_8dd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a36_a0_i());
		L0->SetNPCDescription(f_a34_a0_i());
		L0->SetPhoto(f_a38_a0_s());
		L0->SetPhoto2(f_a3a_a0_s());
		L0->SetPlayerName(f_b08_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_934_a1_b(f_9f3_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_922_a1_v(a0);
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
			f_399_a1_v("Fear");
			tv0->SetMessage(521514);
			tv0->ClearReplies();
			if (f_a6d_a1_b(tv1)) {
				tv0->AddReply(521515, 22677, 22676);
			}
			tv0->AddReply(521518, -1, 22679);
			tv0->AddReply(523976, -1, 25264);
			break;
			return;
		}
		if (f_a3c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_9be_a1_v(tv2);
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

	void f_399_a1_v(string a0)
	{
		if (!f_a3c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9ce_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_9ec_a0_v();
			if (a1 == 22678) {
				f_a50_a2_v(tv1, tv0);
			}
			if (a0 == 22675) {
				f_399_a1_v("Fear");
				tv0->SetMessage(521514);
				tv0->ClearReplies();
				if (f_a6d_a1_b(tv1)) {
					tv0->AddReply(521515, 22677, 22676);
				}
				tv0->AddReply(521518, -1, 22679);
				tv0->AddReply(523976, -1, 25264);
				return;
			}
			if (a0 == 22677) {
				f_399_a1_v("Fear");
				tv0->SetMessage(521516);
				tv0->ClearReplies();
				tv0->AddReply(523977, 25266, 25265);
				tv0->AddReply(523981, 25270, 25269);
				return;
			}
			if (a0 == 25270) {
				f_399_a1_v("Suffering");
				tv0->SetMessage(523982);
				tv0->ClearReplies();
				tv0->AddReply(523983, 25266, 25271);
				return;
			}
			if (a0 == 25266) {
				f_399_a1_v("Penetrating");
				tv0->SetMessage(523978);
				tv0->ClearReplies();
				tv0->AddReply(523979, 25268, 25267);
				return;
			}
			if (a0 == 25268) {
				f_399_a1_v("Penetrating");
				tv0->SetMessage(523980);
				tv0->ClearReplies();
				tv0->AddReply(523984, 25274, 25273);
				return;
			}
			if (a0 == 25274) {
				f_399_a1_v("Grin");
				tv0->SetMessage(523985);
				tv0->ClearReplies();
				tv0->AddReply(523986, 25276, 25275);
				tv0->AddReply(523988, 25276, 25277);
				return;
			}
			if (a0 == 25276) {
				f_399_a1_v("Grin");
				tv0->SetMessage(523987);
				tv0->ClearReplies();
				tv0->AddReply(521517, -1, 22678);
				return;
			}
			tv3 = true;
			if (f_a3c_a0_b()) {
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
		if (!f_8dd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a36_a0_i());
		L0->SetNPCDescription(f_a34_a0_i());
		L0->SetPhoto(f_a38_a0_s());
		L0->SetPhoto2(f_a3a_a0_s());
		L0->SetPlayerName(f_b08_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_934_a1_b(f_9f3_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_922_a1_v(a0);
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
			f_4fb_a1_v("Neutral");
			tv0->SetMessage(521930);
			tv0->ClearReplies();
			if (f_a79_a1_b(tv1) && !f_a85_a1_b(tv1)) {
				tv0->AddReply(521931, 23673, 23105);
			}
			tv0->AddReply(521932, -1, 23106);
			break;
			return;
		}
		if (f_a3c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_9be_a1_v(tv2);
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

	void f_4fb_a1_v(string a0)
	{
		if (!f_a3c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9ce_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_9ec_a0_v();
			if (a1 == 23108) {
				f_a67_a2_v(tv1, tv0);
			}
			if (a1 == 23687) {
				f_a67_a2_v(tv1, tv0);
			}
			if (a0 == 23104) {
				f_4fb_a1_v("Neutral");
				tv0->SetMessage(521930);
				tv0->ClearReplies();
				if (f_a79_a1_b(tv1) && !f_a85_a1_b(tv1)) {
					tv0->AddReply(521931, 23673, 23105);
				}
				tv0->AddReply(521932, -1, 23106);
				return;
			}
			if (a0 == 23673) {
				f_4fb_a1_v("Penetrating");
				tv0->SetMessage(522498);
				tv0->ClearReplies();
				tv0->AddReply(522501, 23677, 23676);
				tv0->AddReply(522499, 23675, 23674);
				return;
			}
			if (a0 == 23675) {
				f_4fb_a1_v("Penetrating");
				tv0->SetMessage(522500);
				tv0->ClearReplies();
				tv0->AddReply(522506, 23679, 23681);
				return;
			}
			if (a0 == 23679) {
				f_4fb_a1_v("Penetrating");
				tv0->SetMessage(522504);
				tv0->ClearReplies();
				tv0->AddReply(522505, 23677, 23680);
				return;
			}
			if (a0 == 23677) {
				f_4fb_a1_v("Penetrating");
				tv0->SetMessage(522502);
				tv0->ClearReplies();
				tv0->AddReply(522503, 23683, 23678);
				tv0->AddReply(531516, 32868, 32871);
				return;
			}
			if (a0 == 23683) {
				f_4fb_a1_v("Grin");
				tv0->SetMessage(522507);
				tv0->ClearReplies();
				tv0->AddReply(522508, 23685, 23684);
				tv0->AddReply(531513, 32868, 32867);
				return;
			}
			if (a0 == 32868) {
				f_4fb_a1_v("Grin");
				tv0->SetMessage(531514);
				tv0->ClearReplies();
				tv0->AddReply(531515, 23685, 32869);
				return;
			}
			if (a0 == 23685) {
				f_4fb_a1_v("Grin");
				tv0->SetMessage(522509);
				tv0->ClearReplies();
				tv0->AddReply(521934, -1, 23108);
				tv0->AddReply(522511, -1, 23687);
				return;
			}
			tv3 = true;
			if (f_a3c_a0_b()) {
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
		if (!f_8dd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a36_a0_i());
		L0->SetNPCDescription(f_a34_a0_i());
		L0->SetPhoto(f_a38_a0_s());
		L0->SetPhoto2(f_a3a_a0_s());
		L0->SetPlayerName(f_b08_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_934_a1_b(f_9f3_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_922_a1_v(a0);
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
			f_67c_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_a3c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_9be_a1_v(tv2);
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

	void f_67c_a1_v(string a0)
	{
		if (!f_a3c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9ce_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_9ec_a0_v();
			if (a0 == 36971) {
				f_67c_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_67c_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_67c_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_a3c_a0_b()) {
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
		if (!f_8dd_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_a36_a0_i());
		L0->SetNPCDescription(f_a34_a0_i());
		L0->SetPhoto(f_a38_a0_s());
		L0->SetPhoto2(f_a3a_a0_s());
		L0->SetPlayerName(f_b08_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_934_a1_b(f_9f3_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_922_a1_v(a0);
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
			f_77a_a1_v("Neutral");
			tv0->SetMessage(540551);
			tv0->ClearReplies();
			tv0->AddReply(540552, -1, 42561);
			tv0->AddReply(540795, -1, 42844);
			break;
			return;
		}
		if (f_a3c_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_9be_a1_v(tv2);
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

	void f_77a_a1_v(string a0)
	{
		if (!f_a3c_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_9ce_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_9ec_a0_v();
			if (a0 == 42560) {
				f_77a_a1_v("Neutral");
				tv0->SetMessage(540551);
				tv0->ClearReplies();
				tv0->AddReply(540552, -1, 42561);
				tv0->AddReply(540795, -1, 42844);
				return;
			}
			tv3 = true;
			if (f_a3c_a0_b()) {
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
		f_7c1_a0_v();
	}

	void f_7c1_a0_v(void)
	{
		if (!f_8d8_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_871_a0_v();
		}
	}

	bool f_7cf_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_8cf_a1_b(L0);
	}

	void f_7de_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_7e3_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_8bd_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_7f9_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_802_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_802_a0_v();
			if (f_8d8_a0_b() && f_7e3_a0_b()) {
				if (f_7cf_a0_b()) {
					f_96e_a1_b(f_9f3_a0_o());
				}
			} else {
				f_7de_a0_v();
				f_7f9_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_8b8_a0_v();
		f_802_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_802_a0_v();
		f_9be_a1_v("Neutral");
		f_7f9_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_7f9_a0_v();
		} else {
			f_9be_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_8b8_a0_v();
			f_8cf_a1_b(a0);
			enable OnUse;
			f_b19_a1_v(a0);
			f_9be_a1_v("Neutral");
			f_802_a0_v();
			f_7f9_a0_v();
		}
	}
}

void f_871_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_8d8_a0_b()) {
		return;
	}
	L0 = f_a23_a0_i();
	for (L1 = 0; L1 < 5 && f_8d8_a0_b(); L1++) {
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
			@PlayAnimation("all", f_a1c_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_8b6_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_8b6_a0_b(void)
{
	return true;
}

void f_8b8_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_8bd_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_8c5_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_8cf_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_8c5_a1_b(L0);
}

bool f_8d8_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_8dd_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_9f9_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_a3c_a0_b()) {
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

void f_922_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_a3c_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_934_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_96e_a1_b(a0)) {
			if (!f_993_a1_b(a0)) {
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
		if (!f_993_a1_b(a0)) {
			if (!f_96e_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_96e_a1_b(object a0)
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
	return f_9dd_a1_b(L4);
}

bool f_993_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_a0d_a0_i() + "m";
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
	return f_9dd_a1_b(L4);
}

void f_9be_a1_v(string a0)
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

void f_9ce_a2_v(string a0, bool a1)
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

bool f_9dd_a1_b(string a0)
{
	if (f_a3c_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_9ec_a0_v(void)
{
	if (f_a3c_a0_b()) {
		@lshStopSpeech();
	}
}

object f_9f3_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_9f9_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_a03_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

float f_a08_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_a0d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_a16_a1_b(int a0)
{
	return f_a0d_a0_i() == a0;
}

string f_a1c_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_a23_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_a1c_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_a34_a0_i(void)
{
	return 515539;
}

int f_a36_a0_i(void)
{
	return 502864;
}

string f_a38_a0_s(void)
{
	return "ui/NPC_Katerina.png";
}

string f_a3a_a0_s(void)
{
	return "ui/NPC_Katerina_b.png";
}

bool f_a3c_a0_b(void)
{
	return true;
}

void f_a3e_a2_v(object a0, object a1)
{
	@SetVariable("oob2Katerina1", 1);
}

void f_a44_a2_v(object a0, object a1)
{
	@SetVariable("oob2Katerina2", 1);
}

void f_a4a_a2_v(object a0, object a1)
{
	@SetVariable("oob2Katerina3", 1);
}

void f_a50_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b8q03", 2);
	L0 = f_af7_a0_o();
	L0->AddMark("b8q03KaterinaGotoMat", "pt_map_mat", 0, 530664, f_a08_a0_f());
	f_ac1_a0_v();
}

void f_a67_a2_v(object a0, object a1)
{
	@SetVariable("b10q01TalkKaterina", 1);
}

bool f_a6d_a1_b(object a0)
{
	if (f_a03_a1_i("b8q03") == 1) {
		return true;
	}
	return false;
}

bool f_a79_a1_b(object a0)
{
	if (f_a03_a1_i("b10q01") == 4) {
		return true;
	}
	return false;
}

bool f_a85_a1_b(object a0)
{
	if (f_a03_a1_i("b10q01TalkKaterina") == 1) {
		return true;
	}
	return false;
}

bool f_a91_a1_b(object a0)
{
	if (f_a03_a1_i("b2q01") == 0) {
		return true;
	}
	return false;
}

bool f_a9d_a1_b(object a0)
{
	if (f_a03_a1_i("oob2Katerina1") == 0) {
		return true;
	}
	return false;
}

bool f_aa9_a1_b(object a0)
{
	if (f_a03_a1_i("oob2Katerina2") == 0) {
		return true;
	}
	return false;
}

bool f_ab5_a1_b(object a0)
{
	if (f_a03_a1_i("oob2Katerina3") == 0) {
		return true;
	}
	return false;
}

void f_ac1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 577, 2, 530657);
	f_adb_a2_b(L0, 575);
}

object f_ace_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_adb_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_ace_a0_o();
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

object f_af7_a0_o(void)
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

int f_b08_a0_i(void)
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

void f_b19_a1_v(object a0)
{
	if (!g1) {
		t0{a0};
		g1 = true;
	}
	if (f_a16_a1_b(2)) {
		t2{a0};
		return;
	}
	if (f_a16_a1_b(8)) {
		t4{a0};
		return;
	}
	if (f_a16_a1_b(10)) {
		t6{a0};
		return;
	}
	if (f_a16_a1_b(12) && !g2) {
		t8{a0};
		g2 = true;
		return;
	}
	t10{a0};
}

