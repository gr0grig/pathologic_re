event OnLoad 5;
event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_7c5_a0_b());
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
		f_81f_a1_b(f_8cc_a0_o());
		if (!f_7ca_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_987_a0_i());
		L0->SetNPCDescription(f_985_a0_i());
		L0->SetPhoto(f_989_a0_s());
		L0->SetPhoto2(f_98b_a0_s());
		L0->SetPlayerName(f_ac8_a0_i());
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
		f_80e_a1_v(a0);
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
			tv0->SetMessage(518278);
			tv0->ClearReplies();
			if (f_a4b_a1_b(tv1)) {
				tv0->AddReply(519444, 20613, 20612);
			}
			tv0->AddReply(518279, -1, 19388);
			break;
			return;
		}
		if (f_98d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a9_a1_v(tv2);
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
		if (!f_98d_a0_b()) {
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
			f_8c5_a0_v();
			if (a1 == 20612) {
				f_995_a2_v(tv1, tv0);
			}
			if (a0 == 19387) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(518278);
				tv0->ClearReplies();
				if (f_a4b_a1_b(tv1)) {
					tv0->AddReply(519444, 20613, 20612);
				}
				tv0->AddReply(518279, -1, 19388);
				return;
			}
			if (a0 == 20613) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(519445);
				tv0->ClearReplies();
				tv0->AddReply(519446, 20615, 20614);
				tv0->AddReply(519450, 20620, 20618);
				return;
			}
			if (a0 == 20615) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(519447);
				tv0->ClearReplies();
				tv0->AddReply(519451, 20620, 20619);
				tv0->AddReply(519453, 20620, 20622);
				return;
			}
			if (a0 == 20620) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(519452);
				tv0->ClearReplies();
				tv0->AddReply(519448, -1, 20616);
				tv0->AddReply(519449, -1, 20617);
				return;
			}
			tv3 = true;
			if (f_98d_a0_b()) {
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
		f_81f_a1_b(f_8cc_a0_o());
		if (!f_7ca_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_987_a0_i());
		L0->SetNPCDescription(f_985_a0_i());
		L0->SetPhoto(f_989_a0_s());
		L0->SetPhoto2(f_98b_a0_s());
		L0->SetPlayerName(f_ac8_a0_i());
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
		f_80e_a1_v(a0);
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
			f_1f6_a1_v("Neutral");
			tv0->SetMessage(520203);
			tv0->ClearReplies();
			if (f_a3f_a1_b(tv1)) {
				tv0->AddReply(520204, 21397, 21396);
			}
			if (f_a13_a1_b(tv1) && f_a35_a1_b(tv1) && f_a1f_a1_b(tv1) || f_a2b_a1_b(tv1) && f_a13_a1_b(tv1) && f_a1f_a1_b(tv1)) {
				tv0->AddReply(520211, 21404, 21403);
			}
			tv0->AddReply(520215, -1, 21407);
			break;
			return;
		}
		if (f_98d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a9_a1_v(tv2);
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

	void f_1f6_a1_v(string a0)
	{
		if (!f_98d_a0_b()) {
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
			f_8c5_a0_v();
			if (a1 == 21396) {
				f_98f_a2_v(tv1, tv0);
			}
			if (a1 == 21402) {
				f_9e2_a2_v(tv1, tv0);
			}
			if (a1 == 21403) {
				f_9bb_a2_v(tv1, tv0);
			}
			if (a1 == 21405) {
				f_9e2_a2_v(tv1, tv0);
			}
			if (a1 == 26115) {
				f_9c1_a2_v(tv1, tv0);
				f_9e9_a2_v(tv1, tv0);
				f_9b4_a2_v(tv1, tv0);
			}
			if (a1 == 21406) {
				f_9c1_a2_v(tv1, tv0);
				f_9e9_a2_v(tv1, tv0);
			}
			if (a0 == 21395) {
				f_1f6_a1_v("Neutral");
				tv0->SetMessage(520203);
				tv0->ClearReplies();
				if (f_a3f_a1_b(tv1)) {
					tv0->AddReply(520204, 21397, 21396);
				}
				if (f_a13_a1_b(tv1) && f_a35_a1_b(tv1) && f_a1f_a1_b(tv1) || f_a2b_a1_b(tv1) && f_a13_a1_b(tv1) && f_a1f_a1_b(tv1)) {
					tv0->AddReply(520211, 21404, 21403);
				}
				tv0->AddReply(520215, -1, 21407);
				return;
			}
			if (a0 == 21404) {
				f_1f6_a1_v("Neutral");
				tv0->SetMessage(520212);
				tv0->ClearReplies();
				tv0->AddReply(520213, 26114, 21405);
				tv0->AddReply(520214, -1, 21406);
				return;
			}
			if (a0 == 26114) {
				f_1f6_a1_v("Neutral");
				tv0->SetMessage(524804);
				tv0->ClearReplies();
				tv0->AddReply(524805, -1, 26115);
				return;
			}
			if (a0 == 21397) {
				tv0->SetMessage(520205);
				tv0->ClearReplies();
				tv0->AddReply(520206, 21399, 21398);
				tv0->AddReply(520210, -1, 21402);
				return;
			}
			if (a0 == 21399) {
				f_1f6_a1_v("Neutral");
				tv0->SetMessage(520207);
				tv0->ClearReplies();
				tv0->AddReply(520208, -1, 21400);
				tv0->AddReply(520209, -1, 21401);
				return;
			}
			tv3 = true;
			if (f_98d_a0_b()) {
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
		f_81f_a1_b(f_8cc_a0_o());
		if (!f_7ca_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_987_a0_i());
		L0->SetNPCDescription(f_985_a0_i());
		L0->SetPhoto(f_989_a0_s());
		L0->SetPhoto2(f_98b_a0_s());
		L0->SetPlayerName(f_ac8_a0_i());
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
		f_80e_a1_v(a0);
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
			f_38f_a1_v("Neutral");
			tv0->SetMessage(520716);
			tv0->ClearReplies();
			tv0->AddReply(520717, 21929, 21928);
			tv0->AddReply(520721, 21933, 21932);
			break;
			return;
		}
		if (f_98d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a9_a1_v(tv2);
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

	void f_38f_a1_v(string a0)
	{
		if (!f_98d_a0_b()) {
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
			f_8c5_a0_v();
			if (a0 == 21927) {
				f_38f_a1_v("Neutral");
				tv0->SetMessage(520716);
				tv0->ClearReplies();
				tv0->AddReply(520717, 21929, 21928);
				tv0->AddReply(520721, 21933, 21932);
				return;
			}
			if (a0 == 21933) {
				f_38f_a1_v("Neutral");
				tv0->SetMessage(520722);
				tv0->ClearReplies();
				tv0->AddReply(520723, -1, 21934);
				tv0->AddReply(520724, -1, 21935);
				return;
			}
			if (a0 == 21929) {
				f_38f_a1_v("Neutral");
				tv0->SetMessage(520718);
				tv0->ClearReplies();
				tv0->AddReply(520719, -1, 21930);
				tv0->AddReply(520720, -1, 21931);
				return;
			}
			tv3 = true;
			if (f_98d_a0_b()) {
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
		f_81f_a1_b(f_8cc_a0_o());
		if (!f_7ca_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_987_a0_i());
		L0->SetNPCDescription(f_985_a0_i());
		L0->SetPhoto(f_989_a0_s());
		L0->SetPhoto2(f_98b_a0_s());
		L0->SetPlayerName(f_ac8_a0_i());
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
		f_80e_a1_v(a0);
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
			f_4a0_a1_v("Neutral");
			tv0->SetMessage(521552);
			tv0->ClearReplies();
			if (f_9ef_a1_b(tv1)) {
				tv0->AddReply(521553, 22715, 22714);
			}
			if (f_9fb_a1_b(tv1) && f_a07_a1_b(tv1)) {
				tv0->AddReply(521609, 22777, 22776);
			}
			tv0->AddReply(521556, -1, 22717);
			break;
			return;
		}
		if (f_98d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a9_a1_v(tv2);
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

	void f_4a0_a1_v(string a0)
	{
		if (!f_98d_a0_b()) {
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
			f_8c5_a0_v();
			if (a1 == 23411) {
				f_9a1_a2_v(tv1, tv0);
			}
			if (a1 == 23412) {
				f_9a1_a2_v(tv1, tv0);
			}
			if (a1 == 22716) {
				f_9a1_a2_v(tv1, tv0);
			}
			if (a1 == 22776) {
				f_99b_a2_v(tv1, tv0);
			}
			if (a1 == 22778) {
				f_9d1_a2_v(tv1, tv0);
				f_9d7_a2_v(tv1, tv0);
			}
			if (a0 == 22713) {
				f_4a0_a1_v("Neutral");
				tv0->SetMessage(521552);
				tv0->ClearReplies();
				if (f_9ef_a1_b(tv1)) {
					tv0->AddReply(521553, 22715, 22714);
				}
				if (f_9fb_a1_b(tv1) && f_a07_a1_b(tv1)) {
					tv0->AddReply(521609, 22777, 22776);
				}
				tv0->AddReply(521556, -1, 22717);
				return;
			}
			if (a0 == 22777) {
				f_4a0_a1_v("Neutral");
				tv0->SetMessage(521610);
				tv0->ClearReplies();
				tv0->AddReply(522261, 23414, 23413);
				return;
			}
			if (a0 == 23414) {
				f_4a0_a1_v("Neutral");
				tv0->SetMessage(522262);
				tv0->ClearReplies();
				tv0->AddReply(522263, 23418, 23415);
				tv0->AddReply(522264, 23417, 23416);
				return;
			}
			if (a0 == 23417) {
				f_4a0_a1_v("Neutral");
				tv0->SetMessage(522265);
				tv0->ClearReplies();
				tv0->AddReply(522269, 23418, 23421);
				tv0->AddReply(522271, -1, 23423);
				return;
			}
			if (a0 == 23418) {
				f_4a0_a1_v("Neutral");
				tv0->SetMessage(522266);
				tv0->ClearReplies();
				tv0->AddReply(522267, 23420, 23419);
				return;
			}
			if (a0 == 23420) {
				f_4a0_a1_v("Neutral");
				tv0->SetMessage(522268);
				tv0->ClearReplies();
				tv0->AddReply(521611, -1, 22778);
				return;
			}
			if (a0 == 22715) {
				f_4a0_a1_v("Neutral");
				tv0->SetMessage(521554);
				tv0->ClearReplies();
				tv0->AddReply(522257, 23410, 23409);
				tv0->AddReply(521555, -1, 22716);
				return;
			}
			if (a0 == 23410) {
				f_4a0_a1_v("Neutral");
				tv0->SetMessage(522258);
				tv0->ClearReplies();
				tv0->AddReply(522259, -1, 23411);
				tv0->AddReply(522260, -1, 23412);
				return;
			}
			tv3 = true;
			if (f_98d_a0_b()) {
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
		f_81f_a1_b(f_8cc_a0_o());
		if (!f_7ca_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_987_a0_i());
		L0->SetNPCDescription(f_985_a0_i());
		L0->SetPhoto(f_989_a0_s());
		L0->SetPhoto2(f_98b_a0_s());
		L0->SetPlayerName(f_ac8_a0_i());
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
		f_80e_a1_v(a0);
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
			f_642_a1_v("Neutral");
			tv0->SetMessage(540551);
			tv0->ClearReplies();
			tv0->AddReply(540552, -1, 42561);
			tv0->AddReply(540795, -1, 42844);
			break;
			return;
		}
		if (f_98d_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_8a9_a1_v(tv2);
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

	void f_642_a1_v(string a0)
	{
		if (!f_98d_a0_b()) {
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
			f_8c5_a0_v();
			if (a0 == 42560) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(540551);
				tv0->ClearReplies();
				tv0->AddReply(540552, -1, 42561);
				tv0->AddReply(540795, -1, 42844);
				return;
			}
			tv3 = true;
			if (f_98d_a0_b()) {
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
		f_686_a0_v();
	}

	void f_686_a0_v(void)
	{
		if (!f_7c5_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_73c_a0_v();
		}
	}

	bool f_69a_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_7bc_a1_b(L0);
	}

	void f_6a9_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_6ae_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_788_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_6c4_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_6cd_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_6cd_a0_v();
			if (f_7c5_a0_b() && f_6ae_a0_b()) {
				if (f_69a_a0_b()) {
					f_859_a1_b(f_8cc_a0_o());
				}
			} else {
				f_6a9_a0_v();
				f_6c4_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_783_a0_v();
		f_6cd_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_6cd_a0_v();
		f_8a9_a1_v("Neutral");
		f_6c4_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_6c4_a0_v();
		} else {
			f_8a9_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_783_a0_v();
			f_7bc_a1_b(a0);
			enable OnUse;
			f_ad9_a1_v(a0);
			f_8a9_a1_v("Neutral");
			f_6cd_a0_v();
			f_6c4_a0_v();
		}
	}
}

void f_73c_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_7c5_a0_b()) {
		return;
	}
	L0 = f_974_a0_i();
	for (L1 = 0; L1 < 5 && f_7c5_a0_b(); L1++) {
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
			@PlayAnimation("all", f_96d_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_781_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_781_a0_b(void)
{
	return true;
}

void f_783_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_788_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_790_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_79c_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_790_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_8dc_a3_f(L0 + a2, a3, a4));
	return true;
}

bool f_7b2_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_7bc_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_7b2_a1_b(L0);
}

bool f_7c5_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_7ca_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_8d2_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_98d_a0_b()) {
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

void f_80e_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_98d_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_81f_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_859_a1_b(a0)) {
			if (!f_87e_a1_b(a0)) {
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
		if (!f_87e_a1_b(a0)) {
			if (!f_859_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_859_a1_b(object a0)
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
	return f_8b6_a1_b(L4);
}

bool f_87e_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_956_a0_i() + "m";
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
	return f_8b6_a1_b(L4);
}

void f_8a9_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_8b0_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_8b6_a1_b(string a0)
{
	if (f_98d_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_8c5_a0_v(void)
{
	if (f_98d_a0_b()) {
		@lshStopSpeech();
	}
}

object f_8cc_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_8d2_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_8dc_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_8e7_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_8ec_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_8f8_a3_v(object a0, object a1, int a2)
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
		f_8ec_a2_v(L0, a2);
	}
}

void f_90b_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_8f8_a3_v(a0, L0, a2);
}

bool f_918_a2_b(object a0, float a1)
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
	f_93b_a1_v(a1);
	f_79c_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_93b_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_945_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_951_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_956_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_95f_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_967_a1_b(int a0)
{
	return f_956_a0_i() == a0;
}

string f_96d_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_974_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_96d_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_985_a0_i(void)
{
	return 515533;
}

int f_987_a0_i(void)
{
	return 502858;
}

string f_989_a0_s(void)
{
	return "ui/NPC_Eva.png";
}

string f_98b_a0_s(void)
{
	return "ui/NPC_Eva_b.png";
}

bool f_98d_a0_b(void)
{
	return true;
}

void f_98f_a2_v(object a0, object a1)
{
	@SetVariable("oob1Eva1", 1);
}

void f_995_a2_v(object a0, object a1)
{
	@SetVariable("oob2Eva1", 1);
}

void f_99b_a2_v(object a0, object a1)
{
	@SetVariable("oob9Eva1", 1);
}

void f_9a1_a2_v(object a0, object a1)
{
	@SetVariable("b9q01", 2);
	f_a81_a0_v();
	f_945_a2_b("quest_b9_01", "place_mdoberman");
	f_945_a2_b("quest_b9_01", "init_factory");
}

void f_9b4_a2_v(object a0, object a1)
{
	f_918_a2_b(a0, -0.05000000074505806);
}

void f_9bb_a2_v(object a0, object a1)
{
	@SetVariable("oob1Eva2", 1);
}

void f_9c1_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_ab7_a0_o();
	L0->AddMark("b1q01BakWillBeAt18", "pt_map_eva", 3, 524806, f_951_a0_f());
}

void f_9d1_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_9d7_a2_v(object a0, object a1)
{
	@Trace("rifle ammo30 is given");
	f_90b_a3_v(a0, "rifle_ammo", 30);
}

void f_9e2_a2_v(object a0, object a1)
{
	f_918_a2_b(a0, -0.019999999552965164);
}

void f_9e9_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

bool f_9ef_a1_b(object a0)
{
	if (f_8e7_a1_i("b9q01") == 1) {
		return true;
	}
	return false;
}

bool f_9fb_a1_b(object a0)
{
	if (f_8e7_a1_i("oob9Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_a07_a1_b(object a0)
{
	if (f_8e7_a1_i("b9q01DankoAmmo") != 0) {
		return true;
	}
	return false;
}

bool f_a13_a1_b(object a0)
{
	if (f_8e7_a1_i("oob1Eva2") == 0) {
		return true;
	}
	return false;
}

bool f_a1f_a1_b(object a0)
{
	if (f_8e7_a1_i("b1q01GrifToldAboutDanko") != 0) {
		return true;
	}
	return false;
}

bool f_a2b_a1_b(object a0)
{
	if (f_a57_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_a35_a1_b(object a0)
{
	if (f_a6c_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_a3f_a1_b(object a0)
{
	if (f_8e7_a1_i("oob1Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_a4b_a1_b(object a0)
{
	if (f_8e7_a1_i("oob2Eva1") == 0) {
		return true;
	}
	return false;
}

bool f_a57_a1_b(object a0)
{
	if (f_95f_a0_i() >= 12 && f_95f_a0_i() < 18) {
		return true;
	}
	return false;
}

bool f_a6c_a1_b(object a0)
{
	if (f_95f_a0_i() >= 0 && f_95f_a0_i() < 12) {
		return true;
	}
	return false;
}

void f_a81_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 299, 1, 521614);
	f_a9b_a2_b(L0, 297);
}

object f_a8e_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_a9b_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_a8e_a0_o();
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

object f_ab7_a0_o(void)
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

int f_ac8_a0_i(void)
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

void f_ad9_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_eva", L0);
	if (!L0) {
		t5{a0};
		@SetVariable("mt_eva", 1);
	}
	if (f_967_a1_b(1)) {
		t3{a0};
		return;
	}
	if (f_967_a1_b(2)) {
		t1{a0};
		return;
	}
	if (f_967_a1_b(9)) {
		t7{a0};
		return;
	}
	t9{a0};
}

