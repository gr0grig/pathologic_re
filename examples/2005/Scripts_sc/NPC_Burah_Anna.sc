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
		} while (!f_74a_a0_b());
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
		f_7a4_a1_b(f_851_a0_o());
		if (!f_74f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8ae_a0_i());
		L0->SetNPCDescription(f_8ac_a0_i());
		L0->SetPhoto(f_8b0_a0_s());
		L0->SetPhoto2(f_8b2_a0_s());
		L0->SetPlayerName(f_91e_a0_i());
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
		f_793_a1_v(a0);
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
			tv0->SetMessage(530857);
			tv0->ClearReplies();
			if (f_8e2_a1_b(tv1)) {
				tv0->AddReply(530859, 32176, 32175);
			}
			tv0->AddReply(530858, -1, 32174);
			break;
			return;
		}
		if (f_8b4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_82e_a1_v(tv2);
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
		if (!f_8b4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_835_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_84a_a0_v();
			if (a1 == 32175) {
				f_8d2_a2_v(tv1, tv0);
			}
			if (a0 == 32173) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(530857);
				tv0->ClearReplies();
				if (f_8e2_a1_b(tv1)) {
					tv0->AddReply(530859, 32176, 32175);
				}
				tv0->AddReply(530858, -1, 32174);
				return;
			}
			if (a0 == 32176) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(530860);
				tv0->ClearReplies();
				tv0->AddReply(530861, 32179, 32177);
				tv0->AddReply(530862, 32185, 32178);
				return;
			}
			if (a0 == 32179) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(530863);
				tv0->ClearReplies();
				tv0->AddReply(530864, 32182, 32180);
				tv0->AddReply(530865, 32185, 32181);
				return;
			}
			if (a0 == 32182) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(530866);
				tv0->ClearReplies();
				tv0->AddReply(530867, 32185, 32183);
				tv0->AddReply(530868, 32185, 32184);
				return;
			}
			if (a0 == 32185) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(530870);
				tv0->ClearReplies();
				tv0->AddReply(530871, -1, 32189);
				tv0->AddReply(530872, -1, 32190);
				return;
			}
			tv3 = true;
			if (f_8b4_a0_b()) {
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
		f_7a4_a1_b(f_851_a0_o());
		if (!f_74f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8ae_a0_i());
		L0->SetNPCDescription(f_8ac_a0_i());
		L0->SetPhoto(f_8b0_a0_s());
		L0->SetPhoto2(f_8b2_a0_s());
		L0->SetPlayerName(f_91e_a0_i());
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
		f_793_a1_v(a0);
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
			f_1d6_a1_v("Neutral");
			tv0->SetMessage(535294);
			tv0->ClearReplies();
			tv0->AddReply(535295, 36973, 36972);
			tv0->AddReply(535302, -1, 36980);
			tv0->AddReply(535303, -1, 36981);
			break;
			return;
		}
		if (f_8b4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_82e_a1_v(tv2);
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

	void f_1d6_a1_v(string a0)
	{
		if (!f_8b4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_835_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_84a_a0_v();
			if (a0 == 36971) {
				f_1d6_a1_v("Neutral");
				tv0->SetMessage(535294);
				tv0->ClearReplies();
				tv0->AddReply(535295, 36973, 36972);
				tv0->AddReply(535302, -1, 36980);
				tv0->AddReply(535303, -1, 36981);
				return;
			}
			if (a0 == 36973) {
				f_1d6_a1_v("Neutral");
				tv0->SetMessage(535296);
				tv0->ClearReplies();
				tv0->AddReply(535297, 36975, 36974);
				tv0->AddReply(535301, 36975, 36978);
				return;
			}
			if (a0 == 36975) {
				f_1d6_a1_v("Neutral");
				tv0->SetMessage(535298);
				tv0->ClearReplies();
				tv0->AddReply(535299, -1, 36976);
				tv0->AddReply(535300, -1, 36977);
				return;
			}
			tv3 = true;
			if (f_8b4_a0_b()) {
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
		f_7a4_a1_b(f_851_a0_o());
		if (!f_74f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8ae_a0_i());
		L0->SetNPCDescription(f_8ac_a0_i());
		L0->SetPhoto(f_8b0_a0_s());
		L0->SetPhoto2(f_8b2_a0_s());
		L0->SetPlayerName(f_91e_a0_i());
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
		f_793_a1_v(a0);
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
			f_2d4_a1_v("Neutral");
			tv0->SetMessage(517997);
			tv0->ClearReplies();
			tv0->AddReply(517998, 29658, 19131);
			tv0->AddReply(528292, 29658, 29657);
			break;
			return;
		}
		if (f_8b4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_82e_a1_v(tv2);
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

	void f_2d4_a1_v(string a0)
	{
		if (!f_8b4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_835_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_84a_a0_v();
			if (a0 == 19130) {
				f_2d4_a1_v("Neutral");
				tv0->SetMessage(517997);
				tv0->ClearReplies();
				tv0->AddReply(517998, 29658, 19131);
				tv0->AddReply(528292, 29658, 29657);
				return;
			}
			if (a0 == 29658) {
				f_2d4_a1_v("Neutral");
				tv0->SetMessage(528293);
				tv0->ClearReplies();
				tv0->AddReply(528294, -1, 29660);
				tv0->AddReply(528295, -1, 29661);
				return;
			}
			tv3 = true;
			if (f_8b4_a0_b()) {
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
		f_7a4_a1_b(f_851_a0_o());
		if (!f_74f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8ae_a0_i());
		L0->SetNPCDescription(f_8ac_a0_i());
		L0->SetPhoto(f_8b0_a0_s());
		L0->SetPhoto2(f_8b2_a0_s());
		L0->SetPlayerName(f_91e_a0_i());
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
		f_793_a1_v(a0);
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
			f_3d7_a1_v("Fear");
			tv0->SetMessage(518646);
			tv0->ClearReplies();
			if (f_8ee_a1_b(tv1) && f_906_a1_b(tv1)) {
				tv0->AddReply(518647, 19740, 19739);
			}
			if (f_8fa_a1_b(tv1) && f_912_a1_b(tv1)) {
				tv0->AddReply(518651, 19744, 19743);
			}
			tv0->AddReply(518654, -1, 19746);
			break;
			return;
		}
		if (f_8b4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_82e_a1_v(tv2);
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

	void f_3d7_a1_v(string a0)
	{
		if (!f_8b4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_835_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_84a_a0_v();
			if (a1 == 19739) {
				f_8b6_a2_v(tv1, tv0);
			}
			if (a1 == 19745) {
				f_8bc_a2_v(tv1, tv0);
				f_8c2_a2_v(tv1, tv0);
				f_8cc_a2_v(tv1, tv0);
			}
			if (a1 == 19824) {
				f_8bc_a2_v(tv1, tv0);
				f_8d8_a2_v(tv1, tv0);
				f_8cc_a2_v(tv1, tv0);
			}
			if (a0 == 19738) {
				f_3d7_a1_v("Fear");
				tv0->SetMessage(518646);
				tv0->ClearReplies();
				if (f_8ee_a1_b(tv1) && f_906_a1_b(tv1)) {
					tv0->AddReply(518647, 19740, 19739);
				}
				if (f_8fa_a1_b(tv1) && f_912_a1_b(tv1)) {
					tv0->AddReply(518651, 19744, 19743);
				}
				tv0->AddReply(518654, -1, 19746);
				return;
			}
			if (a0 == 19744) {
				f_3d7_a1_v("Rage");
				tv0->SetMessage(518652);
				tv0->ClearReplies();
				tv0->AddReply(518720, 19815, 19811);
				tv0->AddReply(518722, -1, 19813);
				tv0->AddReply(518732, -1, 19824);
				return;
			}
			if (a0 == 19815) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(518724);
				tv0->ClearReplies();
				tv0->AddReply(518725, 19817, 19816);
				tv0->AddReply(518727, 19819, 19818);
				return;
			}
			if (a0 == 19819) {
				f_3d7_a1_v("Dream");
				tv0->SetMessage(518728);
				tv0->ClearReplies();
				tv0->AddReply(518729, 19817, 19820);
				return;
			}
			if (a0 == 19817) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(518726);
				tv0->ClearReplies();
				tv0->AddReply(518730, -1, 19822);
				tv0->AddReply(518653, -1, 19745);
				return;
			}
			if (a0 == 19740) {
				f_3d7_a1_v("Fear");
				tv0->SetMessage(518648);
				tv0->ClearReplies();
				tv0->AddReply(518649, 19826, 19741);
				return;
			}
			if (a0 == 19826) {
				f_3d7_a1_v("Neutral");
				tv0->SetMessage(518734);
				tv0->ClearReplies();
				tv0->AddReply(518735, 19830, 19827);
				tv0->AddReply(518736, 19829, 19828);
				if (f_8fa_a1_b(tv1)) {
					tv0->AddReply(531552, 19744, 32915);
				}
				return;
			}
			if (a0 == 19829) {
				tv0->SetMessage(518737);
				tv0->ClearReplies();
				tv0->AddReply(528296, 29663, 29662);
				tv0->AddReply(518742, -1, 19834);
				return;
			}
			if (a0 == 29663) {
				f_3d7_a1_v("Dream");
				tv0->SetMessage(528297);
				tv0->ClearReplies();
				tv0->AddReply(518741, 19835, 19833);
				return;
			}
			if (a0 == 19835) {
				f_3d7_a1_v("Adoration");
				tv0->SetMessage(518743);
				tv0->ClearReplies();
				tv0->AddReply(518744, 19837, 19836);
				return;
			}
			if (a0 == 19837) {
				tv0->SetMessage(518745);
				tv0->ClearReplies();
				tv0->AddReply(518746, -1, 19838);
				tv0->AddReply(518747, -1, 19839);
				return;
			}
			if (a0 == 19830) {
				f_3d7_a1_v("Adoration");
				tv0->SetMessage(518738);
				tv0->ClearReplies();
				tv0->AddReply(518739, -1, 19831);
				tv0->AddReply(518740, -1, 19832);
				return;
			}
			tv3 = true;
			if (f_8b4_a0_b()) {
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
		f_7a4_a1_b(f_851_a0_o());
		if (!f_74f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8ae_a0_i());
		L0->SetNPCDescription(f_8ac_a0_i());
		L0->SetPhoto(f_8b0_a0_s());
		L0->SetPhoto2(f_8b2_a0_s());
		L0->SetPlayerName(f_91e_a0_i());
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
		f_793_a1_v(a0);
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
			f_5df_a1_v("Neutral");
			tv0->SetMessage(540551);
			tv0->ClearReplies();
			tv0->AddReply(540552, -1, 42561);
			tv0->AddReply(540795, -1, 42844);
			break;
			return;
		}
		if (f_8b4_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_82e_a1_v(tv2);
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

	void f_5df_a1_v(string a0)
	{
		if (!f_8b4_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_835_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_84a_a0_v();
			if (a0 == 42560) {
				f_5df_a1_v("Neutral");
				tv0->SetMessage(540551);
				tv0->ClearReplies();
				tv0->AddReply(540552, -1, 42561);
				tv0->AddReply(540795, -1, 42844);
				return;
			}
			tv3 = true;
			if (f_8b4_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t11
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_626_a0_v();
	}

	void f_626_a0_v(void)
	{
		if (!f_74a_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_6dc_a0_v();
		}
	}

	bool f_63a_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_741_a1_b(L0);
	}

	void f_649_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_64e_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_728_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_664_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_66d_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_66d_a0_v();
			if (f_74a_a0_b() && f_64e_a0_b()) {
				if (f_63a_a0_b()) {
					f_7de_a1_b(f_851_a0_o());
				}
			} else {
				f_649_a0_v();
				f_664_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_723_a0_v();
		f_66d_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_66d_a0_v();
		f_82e_a1_v("Neutral");
		f_664_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_664_a0_v();
		} else {
			f_82e_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_723_a0_v();
			f_741_a1_b(a0);
			enable OnUse;
			f_92f_a1_v(a0);
			f_82e_a1_v("Neutral");
			f_66d_a0_v();
			f_664_a0_v();
		}
	}
}

void f_6dc_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_74a_a0_b()) {
		return;
	}
	L0 = f_89b_a0_i();
	for (L1 = 0; L1 < 5 && f_74a_a0_b(); L1++) {
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
			@PlayAnimation("all", f_894_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_721_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_721_a0_b(void)
{
	return true;
}

void f_723_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_728_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_730_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_737_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_741_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_737_a1_b(L0);
}

bool f_74a_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_74f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_857_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_8b4_a0_b()) {
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

void f_793_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_8b4_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_7a4_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_7de_a1_b(a0)) {
			if (!f_803_a1_b(a0)) {
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
		if (!f_803_a1_b(a0)) {
			if (!f_7de_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_7de_a1_b(object a0)
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
	return f_83b_a1_b(L4);
}

bool f_803_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_885_a0_i() + "m";
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
	return f_83b_a1_b(L4);
}

void f_82e_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_835_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_83b_a1_b(string a0)
{
	if (f_8b4_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_84a_a0_v(void)
{
	if (f_8b4_a0_b()) {
		@lshStopSpeech();
	}
}

object f_851_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_857_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_861_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_866_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_872_a2_v(object a0, int a1)
{
	f_730_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_866_a2_v(L0, a1);
	}
}

int f_885_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_88e_a1_b(int a0)
{
	return f_885_a0_i() == a0;
}

string f_894_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_89b_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_894_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_8ac_a0_i(void)
{
	return 515530;
}

int f_8ae_a0_i(void)
{
	return 502856;
}

string f_8b0_a0_s(void)
{
	return "ui/NPC_Anna.png";
}

string f_8b2_a0_s(void)
{
	return "ui/NPC_Anna_b.png";
}

bool f_8b4_a0_b(void)
{
	return true;
}

void f_8b6_a2_v(object a0, object a1)
{
	@SetVariable("b5q01_1", 1);
}

void f_8bc_a2_v(object a0, object a1)
{
	@SetVariable("b5q01_1", 1000);
}

void f_8c2_a2_v(object a0, object a1)
{
	@Trace("money10000 is given");
	f_872_a2_v(a0, 10000);
}

void f_8cc_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_8d2_a2_v(object a0, object a1)
{
	@SetVariable("oob6Anna1", 1);
}

void f_8d8_a2_v(object a0, object a1)
{
	@Trace("money3000 is given");
	f_872_a2_v(a0, 3000);
}

bool f_8e2_a1_b(object a0)
{
	if (f_861_a1_i("oob6Anna1") == 0) {
		return true;
	}
	return false;
}

bool f_8ee_a1_b(object a0)
{
	if (f_861_a1_i("b5q01TalkToVera") == 1) {
		return true;
	}
	return false;
}

bool f_8fa_a1_b(object a0)
{
	if (f_861_a1_i("b5q01VeraDead") != 0) {
		return true;
	}
	return false;
}

bool f_906_a1_b(object a0)
{
	if (f_861_a1_i("b5q01_1") == 0) {
		return true;
	}
	return false;
}

bool f_912_a1_b(object a0)
{
	if (f_861_a1_i("b5q01_1") == 1) {
		return true;
	}
	return false;
}

int f_91e_a0_i(void)
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

void f_92f_a1_v(object a0)
{
	if (!g1) {
		t5{a0};
		g1 = true;
	}
	if (f_88e_a1_b(5)) {
		t7{a0};
		return;
	}
	if (f_88e_a1_b(6)) {
		t1{a0};
		return;
	}
	if (f_88e_a1_b(12) && !g2) {
		t3{a0};
		g2 = true;
		return;
	}
	t9{a0};
}

