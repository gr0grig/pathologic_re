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
		if (!f_7bf_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_955_a0_i());
		L0->SetNPCDescription(f_953_a0_i());
		L0->SetPhoto(f_957_a0_s());
		L0->SetPhoto2(f_959_a0_s());
		L0->SetPlayerName(f_aad_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_816_a1_b(f_8d5_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_804_a1_v(a0);
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
			tv0->SetMessage(518027);
			tv0->ClearReplies();
			tv0->AddReply(518028, 29772, 19161);
			tv0->AddReply(528396, 29772, 29771);
			break;
			return;
		}
		if (f_95b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a0_a1_v(tv2);
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
		if (!f_95b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_8b0_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_8ce_a0_v();
			if (a0 == 19160) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(518027);
				tv0->ClearReplies();
				tv0->AddReply(518028, 29772, 19161);
				tv0->AddReply(528396, 29772, 29771);
				return;
			}
			if (a0 == 29772) {
				f_8b_a1_v("Neutral");
				tv0->SetMessage(528397);
				tv0->ClearReplies();
				tv0->AddReply(528398, -1, 29773);
				tv0->AddReply(528399, -1, 29774);
				return;
			}
			tv3 = true;
			if (f_95b_a0_b()) {
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
		if (!f_7bf_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_955_a0_i());
		L0->SetNPCDescription(f_953_a0_i());
		L0->SetPhoto(f_957_a0_s());
		L0->SetPhoto2(f_959_a0_s());
		L0->SetPlayerName(f_aad_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_816_a1_b(f_8d5_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_804_a1_v(a0);
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
			if (!f_9e4_a1_b(tv1)) {
				f_986_a2_v(tv1, tv0);
				f_19f_a1_v("Neutral");
				tv0->SetMessage(521326);
				tv0->ClearReplies();
				tv0->AddReply(528379, 29753, 29752);
				break;
			}
			f_19f_a1_v("Neutral");
			tv0->SetMessage(521329);
			tv0->ClearReplies();
			if (f_9d8_a1_b(tv1)) {
				tv0->AddReply(521330, 22527, 22524);
			}
			if (f_9f0_a1_b(tv1) && f_9cc_a1_b(tv1)) {
				tv0->AddReply(521331, 22529, 22525);
			}
			tv0->AddReply(521332, -1, 22526);
			break;
			return;
		}
		if (f_95b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a0_a1_v(tv2);
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

	void f_19f_a1_v(string a0)
	{
		if (!f_95b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_8b0_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_8ce_a0_v();
			if (a1 == 22521) {
				f_95d_a2_v(tv1, tv0);
				f_99a_a2_v(tv1, tv0);
			}
			if (a1 == 22528) {
				f_95d_a2_v(tv1, tv0);
				f_99a_a2_v(tv1, tv0);
			}
			if (a1 == 22525) {
				f_980_a2_v(tv1, tv0);
			}
			if (a1 == 22530) {
				f_98c_a2_v(tv1, tv0);
				f_9bc_a2_v(tv1, tv0);
				f_9c6_a2_v(tv1, tv0);
			}
			if (a1 == 29751) {
				f_98c_a2_v(tv1, tv0);
				f_9bc_a2_v(tv1, tv0);
				f_9c6_a2_v(tv1, tv0);
			}
			if (a0 == 22520) {
				if (!f_9e4_a1_b(tv1)) {
					f_986_a2_v(tv1, tv0);
					f_19f_a1_v("Neutral");
					tv0->SetMessage(521326);
					tv0->ClearReplies();
					tv0->AddReply(528379, 29753, 29752);
					return;
				}
				f_19f_a1_v("Neutral");
				tv0->SetMessage(521329);
				tv0->ClearReplies();
				if (f_9d8_a1_b(tv1)) {
					tv0->AddReply(521330, 22527, 22524);
				}
				if (f_9f0_a1_b(tv1) && f_9cc_a1_b(tv1)) {
					tv0->AddReply(521331, 22529, 22525);
				}
				tv0->AddReply(521332, -1, 22526);
				return;
			}
			if (a0 == 22529) {
				f_19f_a1_v("Neutral");
				tv0->SetMessage(521335);
				tv0->ClearReplies();
				tv0->AddReply(521336, -1, 22530);
				tv0->AddReply(528376, 29750, 29749);
				return;
			}
			if (a0 == 29750) {
				f_19f_a1_v("Angry");
				tv0->SetMessage(528377);
				tv0->ClearReplies();
				tv0->AddReply(528378, -1, 29751);
				return;
			}
			if (a0 == 22527) {
				f_19f_a1_v("Staring");
				tv0->SetMessage(521333);
				tv0->ClearReplies();
				tv0->AddReply(528374, 29748, 29747);
				return;
			}
			if (a0 == 29748) {
				f_19f_a1_v("Staring");
				tv0->SetMessage(528375);
				tv0->ClearReplies();
				tv0->AddReply(521334, -1, 22528);
				return;
			}
			if (a0 == 29753) {
				f_19f_a1_v("Neutral");
				tv0->SetMessage(528380);
				tv0->ClearReplies();
				tv0->AddReply(528381, 29755, 29754);
				return;
			}
			if (a0 == 29755) {
				f_19f_a1_v("Staring");
				tv0->SetMessage(528382);
				tv0->ClearReplies();
				tv0->AddReply(528383, 29757, 29756);
				tv0->AddReply(528386, 29760, 29759);
				return;
			}
			if (a0 == 29760) {
				f_19f_a1_v("Staring");
				tv0->SetMessage(528387);
				tv0->ClearReplies();
				tv0->AddReply(528388, 29762, 29761);
				return;
			}
			if (a0 == 29762) {
				f_19f_a1_v("Staring");
				tv0->SetMessage(528389);
				tv0->ClearReplies();
				tv0->AddReply(528390, 29757, 29763);
				tv0->AddReply(528391, 29765, 29764);
				tv0->AddReply(528394, -1, 29768);
				return;
			}
			if (a0 == 29765) {
				f_19f_a1_v("Neutral");
				tv0->SetMessage(528392);
				tv0->ClearReplies();
				tv0->AddReply(528393, 29757, 29766);
				return;
			}
			if (a0 == 29757) {
				f_19f_a1_v("Staring");
				tv0->SetMessage(528384);
				tv0->ClearReplies();
				tv0->AddReply(521327, -1, 22521);
				tv0->AddReply(528395, -1, 29770);
				return;
			}
			tv3 = true;
			if (f_95b_a0_b()) {
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
		if (!f_7bf_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_955_a0_i());
		L0->SetNPCDescription(f_953_a0_i());
		L0->SetPhoto(f_957_a0_s());
		L0->SetPhoto2(f_959_a0_s());
		L0->SetPlayerName(f_aad_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_816_a1_b(f_8d5_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_804_a1_v(a0);
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
			f_3d2_a1_v("Neutral");
			tv0->SetMessage(523177);
			tv0->ClearReplies();
			if (f_a13_a1_b(tv1)) {
				tv0->AddReply(523178, 24382, 24381);
			}
			if (!f_9fb_a1_b(tv1) && !f_a07_a1_b(tv1) && f_a1f_a1_b(tv1)) {
				tv0->AddReply(523187, 42102, 24390);
			}
			tv0->AddReply(523186, -1, 24389);
			break;
			return;
		}
		if (f_95b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a0_a1_v(tv2);
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

	void f_3d2_a1_v(string a0)
	{
		if (!f_95b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_8b0_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_8ce_a0_v();
			if (a1 == 24381) {
				f_9aa_a2_v(tv1, tv0);
				f_9b6_a2_v(tv1, tv0);
			}
			if (a1 == 24390) {
				f_9b0_a2_v(tv1, tv0);
			}
			if (a0 == 24380) {
				f_3d2_a1_v("Neutral");
				tv0->SetMessage(523177);
				tv0->ClearReplies();
				if (f_a13_a1_b(tv1)) {
					tv0->AddReply(523178, 24382, 24381);
				}
				if (!f_9fb_a1_b(tv1) && !f_a07_a1_b(tv1) && f_a1f_a1_b(tv1)) {
					tv0->AddReply(523187, 42102, 24390);
				}
				tv0->AddReply(523186, -1, 24389);
				return;
			}
			if (a0 == 42102) {
				f_3d2_a1_v("Rage");
				tv0->SetMessage(540130);
				tv0->ClearReplies();
				tv0->AddReply(540131, 24391, 42103);
				return;
			}
			if (a0 == 24391) {
				f_3d2_a1_v("Rage");
				tv0->SetMessage(523188);
				tv0->ClearReplies();
				tv0->AddReply(523189, -1, 24392);
				return;
			}
			if (a0 == 24382) {
				f_3d2_a1_v("Angry");
				tv0->SetMessage(523179);
				tv0->ClearReplies();
				tv0->AddReply(523180, 24384, 24383);
				tv0->AddReply(540132, -1, 42104);
				return;
			}
			if (a0 == 24384) {
				f_3d2_a1_v("Rage");
				tv0->SetMessage(523181);
				tv0->ClearReplies();
				tv0->AddReply(523182, 24386, 24385);
				tv0->AddReply(540133, -1, 42105);
				return;
			}
			if (a0 == 24386) {
				f_3d2_a1_v("Rage");
				tv0->SetMessage(523183);
				tv0->ClearReplies();
				tv0->AddReply(523184, 24388, 24387);
				tv0->AddReply(540134, -1, 42106);
				return;
			}
			if (a0 == 24388) {
				f_3d2_a1_v("Rage");
				tv0->SetMessage(523185);
				tv0->ClearReplies();
				tv0->AddReply(523190, -1, 24393);
				tv0->AddReply(523191, -1, 24394);
				return;
			}
			tv3 = true;
			if (f_95b_a0_b()) {
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
		if (!f_7bf_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_955_a0_i());
		L0->SetNPCDescription(f_953_a0_i());
		L0->SetPhoto(f_957_a0_s());
		L0->SetPhoto2(f_959_a0_s());
		L0->SetPlayerName(f_aad_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_816_a1_b(f_8d5_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_804_a1_v(a0);
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
			f_55a_a1_v("Neutral");
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_95b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a0_a1_v(tv2);
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

	void f_55a_a1_v(string a0)
	{
		if (!f_95b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_8b0_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_8ce_a0_v();
			if (a0 == 36906) {
				f_55a_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_55a_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_55a_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_95b_a0_b()) {
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
		if (!f_7bf_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_955_a0_i());
		L0->SetNPCDescription(f_953_a0_i());
		L0->SetPhoto(f_957_a0_s());
		L0->SetPhoto2(f_959_a0_s());
		L0->SetPlayerName(f_aad_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_816_a1_b(f_8d5_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_804_a1_v(a0);
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
			f_658_a1_v("Neutral");
			tv0->SetMessage(540551);
			tv0->ClearReplies();
			tv0->AddReply(540552, -1, 42561);
			tv0->AddReply(540795, -1, 42844);
			break;
			return;
		}
		if (f_95b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a0_a1_v(tv2);
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

	void f_658_a1_v(string a0)
	{
		if (!f_95b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_8b0_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_8ce_a0_v();
			if (a0 == 42560) {
				f_658_a1_v("Neutral");
				tv0->SetMessage(540551);
				tv0->ClearReplies();
				tv0->AddReply(540552, -1, 42561);
				tv0->AddReply(540795, -1, 42844);
				return;
			}
			tv3 = true;
			if (f_95b_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t10
{
	var Vector tv0;

	void init(void)
	{
		f_69c_a0_v();
	}

	void f_69c_a0_v(void)
	{
		if (!f_7ba_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_74c_a0_v();
		}
	}

	bool f_6aa_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_7b1_a1_b(L0);
	}

	void f_6b9_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_6be_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_798_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_6d4_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_6dd_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_6dd_a0_v();
			if (f_7ba_a0_b() && f_6be_a0_b()) {
				if (f_6aa_a0_b()) {
					f_850_a1_b(f_8d5_a0_o());
				}
			} else {
				f_6b9_a0_v();
				f_6d4_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_793_a0_v();
		f_6dd_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_6dd_a0_v();
		f_8a0_a1_v("Neutral");
		f_6d4_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_6d4_a0_v();
		} else {
			f_8a0_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_793_a0_v();
			f_7b1_a1_b(a0);
			enable OnUse;
			f_ac4_a1_v(a0);
			f_8a0_a1_v("Neutral");
			f_6dd_a0_v();
			f_6d4_a0_v();
		}
	}
}

void f_74c_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_7ba_a0_b()) {
		return;
	}
	L0 = f_942_a0_i();
	for (L1 = 0; L1 < 5 && f_7ba_a0_b(); L1++) {
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
			@PlayAnimation("all", f_93b_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_791_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_791_a0_b(void)
{
	return true;
}

void f_793_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_798_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_7a0_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_7a7_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_7b1_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_7a7_a1_b(L0);
}

bool f_7ba_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_7bf_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_8db_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_95b_a0_b()) {
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

void f_804_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_95b_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_816_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_850_a1_b(a0)) {
			if (!f_875_a1_b(a0)) {
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
		if (!f_875_a1_b(a0)) {
			if (!f_850_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_850_a1_b(object a0)
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
	return f_8bf_a1_b(L4);
}

bool f_875_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_92c_a0_i() + "m";
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
	return f_8bf_a1_b(L4);
}

void f_8a0_a1_v(string a0)
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

void f_8b0_a2_v(string a0, bool a1)
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

bool f_8bf_a1_b(string a0)
{
	if (f_95b_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_8ce_a0_v(void)
{
	if (f_95b_a0_b()) {
		@lshStopSpeech();
	}
}

object f_8d5_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_8db_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_8e5_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_8ea_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActorFromXml(L1, L0, a0, a0 + ".xml");
	return L1;
}

void f_8f5_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_901_a2_v(object a0, int a1)
{
	f_7a0_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_8f5_a2_v(L0, a1);
	}
}

bool f_914_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_91b_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_927_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_92c_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_935_a1_b(int a0)
{
	return f_92c_a0_i() == a0;
}

string f_93b_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_942_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_93b_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_953_a0_i(void)
{
	return 515543;
}

int f_955_a0_i(void)
{
	return 502868;
}

string f_957_a0_s(void)
{
	return "ui/NPC_Maria.png";
}

string f_959_a0_s(void)
{
	return "ui/NPC_Maria_b.png";
}

bool f_95b_a0_b(void)
{
	return true;
}

void f_95d_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b6q03", 1);
	L0 = f_a7b_a0_o();
	L0->AddMark("b6q03MariaGotoNina", "pt_map_nina", 0, 521342, f_927_a0_f());
	f_a2b_a0_v();
	f_a45_a0_v();
	f_8ea_a1_o("quest_b6_03");
	f_91b_a2_b("quest_b6_03", "init_grave");
}

void f_980_a2_v(object a0, object a1)
{
	@SetVariable("oob6Maria1", 1);
}

void f_986_a2_v(object a0, object a1)
{
	@SetVariable("b6q03NinaTalk", 1);
}

void f_98c_a2_v(object a0, object a1)
{
	int L0;
	f_a38_a0_v();
	f_91b_a2_b("quest_b6_03", "completed");
	a0->RemoveItemByType(L0, "b6q03_diary", 1);
}

void f_99a_a2_v(object a0, object a1)
{
	f_a8c_a3_v(f_a7b_a0_o(), "pt_map_nina", 2);
	a1->ShowMap(f_a7b_a0_o());
}

void f_9aa_a2_v(object a0, object a1)
{
	@SetVariable("oob12Maria1", 1);
}

void f_9b0_a2_v(object a0, object a1)
{
	@SetVariable("oob12Maria2", 1);
}

void f_9b6_a2_v(object a0, object a1)
{
	@SetVariable("b12q01MariaFinalTalk", 1);
}

void f_9bc_a2_v(object a0, object a1)
{
	@Trace("money2000 is given");
	f_901_a2_v(a0, 2000);
}

void f_9c6_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

bool f_9cc_a1_b(object a0)
{
	if (f_8e5_a1_i("oob6Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_9d8_a1_b(object a0)
{
	if (f_8e5_a1_i("b6q03") == 0) {
		return true;
	}
	return false;
}

bool f_9e4_a1_b(object a0)
{
	if (f_8e5_a1_i("b6q03NinaTalk") != 0) {
		return true;
	}
	return false;
}

bool f_9f0_a1_b(object a0)
{
	if (f_914_a2_b(a0, "b6q03_diary")) {
		return true;
	}
	return false;
}

bool f_9fb_a1_b(object a0)
{
	if (f_8e5_a1_i("game_final") == 2) {
		return true;
	}
	return false;
}

bool f_a07_a1_b(object a0)
{
	if (f_8e5_a1_i("game_final") == 0) {
		return true;
	}
	return false;
}

bool f_a13_a1_b(object a0)
{
	if (f_8e5_a1_i("oob12Maria1") == 0) {
		return true;
	}
	return false;
}

bool f_a1f_a1_b(object a0)
{
	if (f_8e5_a1_i("oob12Maria2") == 0) {
		return true;
	}
	return false;
}

void f_a2b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 276, 2, 521337);
	f_a5f_a2_b(L0, -1);
}

void f_a38_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 279, 2, 521340);
	f_a5f_a2_b(L0, 276);
}

void f_a45_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 277, 2, 521338);
	f_a5f_a2_b(L0, 276);
}

object f_a52_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_a5f_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_a52_a0_o();
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

object f_a7b_a0_o(void)
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

void f_a8c_a3_v(object a0, string a1, float a2)
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

int f_aad_a0_i(void)
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

int f_abe_a0_i(void)
{
	int L0;
	@GetVariable("game_final", L0);
	return L0;
}

void f_ac4_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_maria", L0);
	if (!L0) {
		t0{a0};
		@SetVariable("mt_maria", 1);
	}
	if (f_935_a1_b(6)) {
		t2{a0};
		return;
	}
	if (f_935_a1_b(12)) {
		if (f_abe_a0_i() != 0) {
			t4{a0};
		} else {
			int L1;
			@GetVariable("d12_maria", L1);
			if (!L1) {
				t6{a0};
				@SetVariable("d12_maria", 1);
			}
		}
		return;
	}
	t8{a0};
}

