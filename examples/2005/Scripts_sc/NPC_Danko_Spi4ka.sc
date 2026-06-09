event OnLoad 5;
event evt_11 11;
event OnTimer 7;
event OnUnload 6;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_d19_a0_b());
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
		f_d73_a1_b(f_e20_a0_o());
		if (!f_d1e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eaf_a0_i());
		L0->SetNPCDescription(f_ead_a0_i());
		L0->SetPhoto(f_eb1_a0_s());
		L0->SetPhoto2(f_eb3_a0_s());
		L0->SetPlayerName(f_10d9_a0_i());
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
		f_d62_a1_v(a0);
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
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_eb5_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dfd_a1_v(tv2);
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
		if (!f_eb5_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e04_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e19_a0_v();
			if (a0 == 36960) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_eb5_a0_b()) {
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
		f_d73_a1_b(f_e20_a0_o());
		if (!f_d1e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eaf_a0_i());
		L0->SetNPCDescription(f_ead_a0_i());
		L0->SetPhoto(f_eb1_a0_s());
		L0->SetPhoto2(f_eb3_a0_s());
		L0->SetPlayerName(f_10d9_a0_i());
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
		f_d62_a1_v(a0);
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
			f_f4a_a2_v(tv1, tv0);
			f_1a5_a1_v("Neutral");
			tv0->SetMessage(500356);
			tv0->ClearReplies();
			tv0->AddReply(500357, 417, 414);
			tv0->AddReply(500358, 418, 415);
			tv0->AddReply(500359, -1, 416);
			break;
			return;
		}
		if (f_eb5_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dfd_a1_v(tv2);
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

	void f_1a5_a1_v(string a0)
	{
		if (!f_eb5_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e04_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e19_a0_v();
			if (a0 == 413) {
				f_f4a_a2_v(tv1, tv0);
				f_1a5_a1_v("Neutral");
				tv0->SetMessage(500356);
				tv0->ClearReplies();
				tv0->AddReply(500357, 417, 414);
				tv0->AddReply(500358, 418, 415);
				tv0->AddReply(500359, -1, 416);
				return;
			}
			if (a0 == 418) {
				f_1a5_a1_v("Neutral");
				tv0->SetMessage(500361);
				tv0->ClearReplies();
				tv0->AddReply(500362, 417, 419);
				tv0->AddReply(500363, 417, 420);
				return;
			}
			if (a0 == 417) {
				f_1a5_a1_v("Neutral");
				tv0->SetMessage(500360);
				tv0->ClearReplies();
				tv0->AddReply(500364, 425, 423);
				tv0->AddReply(500365, 425, 424);
				return;
			}
			if (a0 == 425) {
				f_1a5_a1_v("Neutral");
				tv0->SetMessage(500366);
				tv0->ClearReplies();
				tv0->AddReply(500367, -1, 426);
				tv0->AddReply(500368, -1, 427);
				return;
			}
			tv3 = true;
			if (f_eb5_a0_b()) {
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
		f_d73_a1_b(f_e20_a0_o());
		if (!f_d1e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eaf_a0_i());
		L0->SetNPCDescription(f_ead_a0_i());
		L0->SetPhoto(f_eb1_a0_s());
		L0->SetPhoto2(f_eb3_a0_s());
		L0->SetPlayerName(f_10d9_a0_i());
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
		f_d62_a1_v(a0);
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
			f_2f4_a1_v("Neutral");
			tv0->SetMessage(506715);
			tv0->ClearReplies();
			if (f_f7e_a1_b(tv1) && f_f96_a1_b(tv1)) {
				tv0->AddReply(507429, 7355, 8200);
			}
			if (f_f8a_a1_b(tv1)) {
				tv0->AddReply(506716, 7385, 7403);
			}
			if (f_1016_a1_b(tv1) && f_1022_a1_b(tv1)) {
				tv0->AddReply(514516, 15756, 15755);
			}
			if (f_f72_a1_b(tv1)) {
				tv0->AddReply(532774, 10460, 34242);
			}
			tv0->AddReply(507534, -1, 8316);
			break;
			return;
		}
		if (f_eb5_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dfd_a1_v(tv2);
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

	void f_2f4_a1_v(string a0)
	{
		if (!f_eb5_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e04_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e19_a0_v();
			if (a1 == 7358) {
				f_ee8_a2_v(tv1, tv0);
				f_ef4_a2_v(tv1, tv0);
			}
			if (a1 == 7363) {
				f_ee8_a2_v(tv1, tv0);
				f_ef4_a2_v(tv1, tv0);
			}
			if (a1 == 7382) {
				f_ee8_a2_v(tv1, tv0);
			}
			if (a1 == 7394) {
				f_eee_a2_v(tv1, tv0);
			}
			if (a1 == 7395) {
				f_eee_a2_v(tv1, tv0);
			}
			if (a1 == 7396) {
				f_eee_a2_v(tv1, tv0);
			}
			if (a1 == 7397) {
				f_eee_a2_v(tv1, tv0);
			}
			if (a1 == 7398) {
				f_eee_a2_v(tv1, tv0);
			}
			if (a1 == 7399) {
				f_eee_a2_v(tv1, tv0);
			}
			if (a1 == 15755) {
				f_f44_a2_v(tv1, tv0);
			}
			if (a1 == 34242) {
				f_ee2_a2_v(tv1, tv0);
			}
			if (a0 == 7402) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506715);
				tv0->ClearReplies();
				if (f_f7e_a1_b(tv1) && f_f96_a1_b(tv1)) {
					tv0->AddReply(507429, 7355, 8200);
				}
				if (f_f8a_a1_b(tv1)) {
					tv0->AddReply(506716, 7385, 7403);
				}
				if (f_1016_a1_b(tv1) && f_1022_a1_b(tv1)) {
					tv0->AddReply(514516, 15756, 15755);
				}
				if (f_f72_a1_b(tv1)) {
					tv0->AddReply(532774, 10460, 34242);
				}
				tv0->AddReply(507534, -1, 8316);
				return;
			}
			if (a0 == 10460) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(509517);
				tv0->ClearReplies();
				tv0->AddReply(509518, 10462, 10461);
				return;
			}
			if (a0 == 10462) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(509519);
				tv0->ClearReplies();
				tv0->AddReply(509520, 10464, 10463);
				tv0->AddReply(509530, 10466, 10474);
				return;
			}
			if (a0 == 10464) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(509521);
				tv0->ClearReplies();
				tv0->AddReply(509522, 10466, 10465);
				tv0->AddReply(509529, 10466, 10472);
				return;
			}
			if (a0 == 10466) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(509523);
				tv0->ClearReplies();
				tv0->AddReply(509524, 10468, 10467);
				tv0->AddReply(509528, -1, 10471);
				return;
			}
			if (a0 == 10468) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(509525);
				tv0->ClearReplies();
				tv0->AddReply(509526, -1, 10469);
				tv0->AddReply(509527, -1, 10470);
				return;
			}
			if (a0 == 15756) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(514517);
				tv0->ClearReplies();
				tv0->AddReply(514518, -1, 15757);
				return;
			}
			if (a0 == 7385) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506699);
				tv0->ClearReplies();
				tv0->AddReply(506700, 7387, 7386);
				tv0->AddReply(506714, 7387, 7400);
				tv0->AddReply(506713, -1, 7399);
				return;
			}
			if (a0 == 7387) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506701);
				tv0->ClearReplies();
				tv0->AddReply(506702, 7389, 7388);
				tv0->AddReply(506712, -1, 7398);
				return;
			}
			if (a0 == 7389) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506703);
				tv0->ClearReplies();
				tv0->AddReply(506704, 7391, 7390);
				tv0->AddReply(506711, -1, 7397);
				return;
			}
			if (a0 == 7391) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506705);
				tv0->ClearReplies();
				tv0->AddReply(506706, 7393, 7392);
				tv0->AddReply(506710, -1, 7396);
				return;
			}
			if (a0 == 7393) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506707);
				tv0->ClearReplies();
				tv0->AddReply(506708, -1, 7394);
				tv0->AddReply(506709, -1, 7395);
				return;
			}
			if (a0 == 7355) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506674);
				tv0->ClearReplies();
				tv0->AddReply(506675, 7357, 7356);
				tv0->AddReply(506689, 7373, 7372);
				return;
			}
			if (a0 == 7373) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506690);
				tv0->ClearReplies();
				tv0->AddReply(506691, 7357, 7374);
				tv0->AddReply(506692, 7377, 7376);
				return;
			}
			if (a0 == 7377) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506693);
				tv0->ClearReplies();
				tv0->AddReply(506694, 7362, 7378);
				tv0->AddReply(506695, 7381, 7380);
				return;
			}
			if (a0 == 7381) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506696);
				tv0->ClearReplies();
				tv0->AddReply(506697, -1, 7382);
				tv0->AddReply(506698, 7362, 7383);
				return;
			}
			if (a0 == 7357) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506676);
				tv0->ClearReplies();
				tv0->AddReply(533950, 35515, 35514);
				return;
			}
			if (a0 == 35515) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(533951);
				tv0->ClearReplies();
				tv0->AddReply(506677, -1, 7358);
				tv0->AddReply(506678, 7360, 7359);
				return;
			}
			if (a0 == 7360) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506679);
				tv0->ClearReplies();
				tv0->AddReply(506680, 7362, 7361);
				tv0->AddReply(506683, 7365, 7364);
				tv0->AddReply(506686, 7369, 7368);
				return;
			}
			if (a0 == 7369) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506687);
				tv0->ClearReplies();
				tv0->AddReply(506688, 7362, 7370);
				return;
			}
			if (a0 == 7365) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506684);
				tv0->ClearReplies();
				tv0->AddReply(506685, 7362, 7366);
				return;
			}
			if (a0 == 7362) {
				f_2f4_a1_v("Neutral");
				tv0->SetMessage(506681);
				tv0->ClearReplies();
				tv0->AddReply(506682, -1, 7363);
				return;
			}
			tv3 = true;
			if (f_eb5_a0_b()) {
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
		f_d73_a1_b(f_e20_a0_o());
		if (!f_d1e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eaf_a0_i());
		L0->SetNPCDescription(f_ead_a0_i());
		L0->SetPhoto(f_eb1_a0_s());
		L0->SetPhoto2(f_eb3_a0_s());
		L0->SetPlayerName(f_10d9_a0_i());
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
		f_d62_a1_v(a0);
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
			f_642_a1_v("Neutral");
			tv0->SetMessage(510886);
			tv0->ClearReplies();
			if (f_f5a_a1_b(tv1)) {
				tv0->AddReply(510887, 11068, 12035);
			}
			tv0->AddReply(510888, 12037, 12036);
			if (f_102e_a1_b(tv1) && f_f66_a1_b(tv1)) {
				tv0->AddReply(534279, 35872, 35871);
			}
			tv0->AddReply(534267, -1, 35855);
			break;
			return;
		}
		if (f_eb5_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dfd_a1_v(tv2);
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
		if (!f_eb5_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e04_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e19_a0_v();
			if (a1 == 12035) {
				f_ed6_a2_v(tv1, tv0);
			}
			if (a1 == 12045) {
				f_ecc_a2_v(tv1, tv0);
				f_eb7_a2_v(tv1, tv0);
				f_efd_a2_v(tv1, tv0);
			}
			if (a1 == 12050) {
				f_ecc_a2_v(tv1, tv0);
				f_eb7_a2_v(tv1, tv0);
				f_efd_a2_v(tv1, tv0);
			}
			if (a1 == 35871) {
				f_edc_a2_v(tv1, tv0);
			}
			if (a0 == 12034) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(510886);
				tv0->ClearReplies();
				if (f_f5a_a1_b(tv1)) {
					tv0->AddReply(510887, 11068, 12035);
				}
				tv0->AddReply(510888, 12037, 12036);
				if (f_102e_a1_b(tv1) && f_f66_a1_b(tv1)) {
					tv0->AddReply(534279, 35872, 35871);
				}
				tv0->AddReply(534267, -1, 35855);
				return;
			}
			if (a0 == 35872) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(534280);
				tv0->ClearReplies();
				tv0->AddReply(534281, 35874, 35873);
				return;
			}
			if (a0 == 35874) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(534282);
				tv0->ClearReplies();
				tv0->AddReply(534283, 35876, 35875);
				return;
			}
			if (a0 == 35876) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(534284);
				tv0->ClearReplies();
				tv0->AddReply(534285, 35878, 35877);
				return;
			}
			if (a0 == 35878) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(534286);
				tv0->ClearReplies();
				tv0->AddReply(534287, -1, 35879);
				return;
			}
			if (a0 == 12037) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(510889);
				tv0->ClearReplies();
				tv0->AddReply(510890, 12039, 12038);
				tv0->AddReply(510892, 12042, 12040);
				return;
			}
			if (a0 == 12042) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(510894);
				tv0->ClearReplies();
				tv0->AddReply(510895, -1, 12043);
				return;
			}
			if (a0 == 12039) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(510891);
				tv0->ClearReplies();
				tv0->AddReply(510893, 12044, 12041);
				return;
			}
			if (a0 == 12044) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(510896);
				tv0->ClearReplies();
				if (f_f50_a1_b(tv1)) {
					tv0->AddReply(510897, -1, 12045);
				}
				tv0->AddReply(510898, 12047, 12046);
				return;
			}
			if (a0 == 12047) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(510899);
				tv0->ClearReplies();
				tv0->AddReply(510900, -1, 12048);
				if (f_f50_a1_b(tv1)) {
					tv0->AddReply(510902, -1, 12050);
				}
				return;
			}
			if (a0 == 11068) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(510044);
				tv0->ClearReplies();
				tv0->AddReply(510045, 11070, 11069);
				tv0->AddReply(510058, 11083, 11082);
				return;
			}
			if (a0 == 11083) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(510059);
				tv0->ClearReplies();
				tv0->AddReply(510060, 11072, 11084);
				tv0->AddReply(510061, 11072, 11086);
				return;
			}
			if (a0 == 11070) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(510046);
				tv0->ClearReplies();
				tv0->AddReply(510047, 11072, 11071);
				tv0->AddReply(510057, -1, 11081);
				return;
			}
			if (a0 == 11072) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(510048);
				tv0->ClearReplies();
				tv0->AddReply(510049, 11074, 11073);
				tv0->AddReply(510052, 11077, 11076);
				tv0->AddReply(510056, -1, 11080);
				return;
			}
			if (a0 == 11077) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(510053);
				tv0->ClearReplies();
				tv0->AddReply(510054, -1, 11078);
				tv0->AddReply(510055, -1, 11079);
				return;
			}
			if (a0 == 11074) {
				f_642_a1_v("Neutral");
				tv0->SetMessage(510050);
				tv0->ClearReplies();
				tv0->AddReply(510051, -1, 11075);
				return;
			}
			tv3 = true;
			if (f_eb5_a0_b()) {
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
		f_d73_a1_b(f_e20_a0_o());
		if (!f_d1e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eaf_a0_i());
		L0->SetNPCDescription(f_ead_a0_i());
		L0->SetPhoto(f_eb1_a0_s());
		L0->SetPhoto2(f_eb3_a0_s());
		L0->SetPlayerName(f_10d9_a0_i());
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
		f_d62_a1_v(a0);
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
			if (f_fb6_a1_b(tv1)) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512040);
				tv0->ClearReplies();
				tv0->AddReply(512041, 13262, 13259);
				tv0->AddReply(512042, 13261, 13260);
				break;
			}
			f_91f_a1_v("Neutral");
			tv0->SetMessage(512052);
			tv0->ClearReplies();
			if (f_fa2_a1_b(tv1) && f_fc2_a1_b(tv1) || f_fac_a1_b(tv1) && f_fc2_a1_b(tv1)) {
				tv0->AddReply(512066, 13289, 13287);
			}
			if (f_fda_a1_b(tv1) && f_fe6_a1_b(tv1)) {
				tv0->AddReply(512543, 13713, 13712);
			}
			if (f_fce_a1_b(tv1) && f_ff2_a1_b(tv1) && !f_fda_a1_b(tv1)) {
				tv0->AddReply(512546, 13716, 13715);
			}
			if (f_100a_a1_b(tv1) && f_ffe_a1_b(tv1)) {
				tv0->AddReply(512053, 13274, 13273);
			}
			tv0->AddReply(512060, -1, 13280);
			break;
			return;
		}
		if (f_eb5_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dfd_a1_v(tv2);
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

	void f_91f_a1_v(string a0)
	{
		if (!f_eb5_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e04_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e19_a0_v();
			if (a1 == 13271) {
				f_f03_a2_v(tv1, tv0);
				f_f09_a2_v(tv1, tv0);
			}
			if (a1 == 13288) {
				f_f03_a2_v(tv1, tv0);
			}
			if (a1 == 13290) {
				f_f09_a2_v(tv1, tv0);
			}
			if (a1 == 13714) {
				f_f1e_a2_v(tv1, tv0);
				f_f24_a2_v(tv1, tv0);
			}
			if (a1 == 13715) {
				f_f38_a2_v(tv1, tv0);
			}
			if (a1 == 13717) {
				f_f2e_a2_v(tv1, tv0);
			}
			if (a1 == 37900) {
				f_f2e_a2_v(tv1, tv0);
			}
			if (a1 == 13273) {
				f_f3e_a2_v(tv1, tv0);
			}
			if (a0 == 13258) {
				if (f_fb6_a1_b(tv1)) {
					f_91f_a1_v("Neutral");
					tv0->SetMessage(512040);
					tv0->ClearReplies();
					tv0->AddReply(512041, 13262, 13259);
					tv0->AddReply(512042, 13261, 13260);
					return;
				}
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512052);
				tv0->ClearReplies();
				if (f_fa2_a1_b(tv1) && f_fc2_a1_b(tv1) || f_fac_a1_b(tv1) && f_fc2_a1_b(tv1)) {
					tv0->AddReply(512066, 13289, 13287);
				}
				if (f_fda_a1_b(tv1) && f_fe6_a1_b(tv1)) {
					tv0->AddReply(512543, 13713, 13712);
				}
				if (f_fce_a1_b(tv1) && f_ff2_a1_b(tv1) && !f_fda_a1_b(tv1)) {
					tv0->AddReply(512546, 13716, 13715);
				}
				if (f_100a_a1_b(tv1) && f_ffe_a1_b(tv1)) {
					tv0->AddReply(512053, 13274, 13273);
				}
				tv0->AddReply(512060, -1, 13280);
				return;
			}
			if (a0 == 13274) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512054);
				tv0->ClearReplies();
				tv0->AddReply(512055, 13276, 13275);
				return;
			}
			if (a0 == 13276) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512056);
				tv0->ClearReplies();
				tv0->AddReply(512057, 13278, 13277);
				tv0->AddReply(512061, 13282, 13281);
				return;
			}
			if (a0 == 13282) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512062);
				tv0->ClearReplies();
				tv0->AddReply(512063, 13284, 13283);
				return;
			}
			if (a0 == 13284) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512064);
				tv0->ClearReplies();
				tv0->AddReply(512065, 13278, 13285);
				return;
			}
			if (a0 == 13278) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512058);
				tv0->ClearReplies();
				tv0->AddReply(512059, -1, 13279);
				return;
			}
			if (a0 == 13716) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512547);
				tv0->ClearReplies();
				tv0->AddReply(536139, 37899, 37898);
				return;
			}
			if (a0 == 37899) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(536140);
				tv0->ClearReplies();
				tv0->AddReply(512548, -1, 13717);
				tv0->AddReply(536141, -1, 37900);
				return;
			}
			if (a0 == 13713) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512544);
				tv0->ClearReplies();
				tv0->AddReply(512545, -1, 13714);
				return;
			}
			if (a0 == 13289) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512068);
				tv0->ClearReplies();
				tv0->AddReply(512069, -1, 13290);
				return;
			}
			if (a0 == 13261) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512043);
				tv0->ClearReplies();
				tv0->AddReply(512048, 13268, 13267);
				return;
			}
			if (a0 == 13268) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512049);
				tv0->ClearReplies();
				tv0->AddReply(512050, 13264, 13269);
				return;
			}
			if (a0 == 13262) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512044);
				tv0->ClearReplies();
				tv0->AddReply(512045, 13264, 13263);
				tv0->AddReply(512047, 13261, 13265);
				return;
			}
			if (a0 == 13264) {
				f_91f_a1_v("Neutral");
				tv0->SetMessage(512046);
				tv0->ClearReplies();
				tv0->AddReply(512051, -1, 13271);
				tv0->AddReply(512067, -1, 13288);
				return;
			}
			tv3 = true;
			if (f_eb5_a0_b()) {
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
		f_d73_a1_b(f_e20_a0_o());
		if (!f_d1e_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_eaf_a0_i());
		L0->SetNPCDescription(f_ead_a0_i());
		L0->SetPhoto(f_eb1_a0_s());
		L0->SetPhoto2(f_eb3_a0_s());
		L0->SetPlayerName(f_10d9_a0_i());
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
		f_d62_a1_v(a0);
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
			f_bae_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_eb5_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_dfd_a1_v(tv2);
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

	void f_bae_a1_v(string a0)
	{
		if (!f_eb5_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e04_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e19_a0_v();
			if (a0 == 42551) {
				f_bae_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_eb5_a0_b()) {
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
		f_bf5_a0_v();
	}

	void f_bf5_a0_v(void)
	{
		if (!f_d19_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_cab_a0_v();
		}
	}

	bool f_c09_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_d10_a1_b(L0);
	}

	void f_c18_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_c1d_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_cf7_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_c33_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_c3c_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_c3c_a0_v();
			if (f_d19_a0_b() && f_c1d_a0_b()) {
				if (f_c09_a0_b()) {
					f_dad_a1_b(f_e20_a0_o());
				}
			} else {
				f_c18_a0_v();
				f_c33_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_cf2_a0_v();
		f_c3c_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_c3c_a0_v();
		f_dfd_a1_v("Neutral");
		f_c33_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_c33_a0_v();
		} else {
			f_dfd_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_cf2_a0_v();
			f_d10_a1_b(a0);
			enable OnUse;
			f_10ea_a1_v(a0);
			f_dfd_a1_v("Neutral");
			f_c3c_a0_v();
			f_c33_a0_v();
		}
	}
}

void f_cab_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_d19_a0_b()) {
		return;
	}
	L0 = f_e9c_a0_i();
	for (L1 = 0; L1 < 5 && f_d19_a0_b(); L1++) {
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
			@PlayAnimation("all", f_e95_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_cf0_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_cf0_a0_b(void)
{
	return true;
}

void f_cf2_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_cf7_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_cff_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_d06_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_d10_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_d06_a1_b(L0);
}

bool f_d19_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_d1e_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_e26_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_eb5_a0_b()) {
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

void f_d62_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_eb5_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_d73_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_dad_a1_b(a0)) {
			if (!f_dd2_a1_b(a0)) {
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
		if (!f_dd2_a1_b(a0)) {
			if (!f_dad_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_dad_a1_b(object a0)
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
	return f_e0a_a1_b(L4);
}

bool f_dd2_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_e7e_a0_i() + "m";
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
	return f_e0a_a1_b(L4);
}

void f_dfd_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_e04_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_e0a_a1_b(string a0)
{
	if (f_eb5_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_e19_a0_v(void)
{
	if (f_eb5_a0_b()) {
		@lshStopSpeech();
	}
}

object f_e20_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_e26_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_e30_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_e35_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_e40_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_e4c_a2_v(object a0, int a1)
{
	f_cff_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_e40_a2_v(L0, a1);
	}
}

void f_e5f_a3_v(object a0, object a1, int a2)
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
		f_e40_a2_v(L0, a2);
	}
}

bool f_e72_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_e7e_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_e87_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_e8f_a1_b(int a0)
{
	return f_e7e_a0_i() == a0;
}

string f_e95_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_e9c_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_e95_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_ead_a0_i(void)
{
	return 515552;
}

int f_eaf_a0_i(void)
{
	return 502877;
}

string f_eb1_a0_s(void)
{
	return "ui/NPC_Spi4ka.png";
}

string f_eb3_a0_s(void)
{
	return "ui/NPC_Spi4ka_b.png";
}

bool f_eb5_a0_b(void)
{
	return true;
}

void f_eb7_a2_v(object a0, object a1)
{
	object L0;
	@Trace("lockpick1time is given");
	@CreateInvItem(L0);
	L0->SetItemName("lockpick");
	L0->SetProperty("uses", 1);
	f_e5f_a3_v(a0, L0, 1);
}

void f_ecc_a2_v(object a0, object a1)
{
	@Trace("money 2000 removed");
	f_e4c_a2_v(a0, -2000);
}

void f_ed6_a2_v(object a0, object a1)
{
	@SetVariable("ood4Spi4ka1", 1);
}

void f_edc_a2_v(object a0, object a1)
{
	@SetVariable("ood4Spi4ka3", 1);
}

void f_ee2_a2_v(object a0, object a1)
{
	@SetVariable("ood2Spi4ka4", 1);
}

void f_ee8_a2_v(object a0, object a1)
{
	@SetVariable("ood2Spi4ka1", 1);
}

void f_eee_a2_v(object a0, object a1)
{
	@SetVariable("ood2Spi4ka2", 1);
}

void f_ef4_a2_v(object a0, object a1)
{
	@SetVariable("d2q01", 4);
	f_106f_a0_v();
}

void f_efd_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_f03_a2_v(object a0, object a1)
{
	@SetVariable("ood6Spi4ka1", 1);
}

void f_f09_a2_v(object a0, object a1)
{
	@SetVariable("d6q03", 1);
	f_107c_a0_v();
	f_10a3_a0_v();
	f_e35_a1_o("quest_d6_03");
	f_e72_a2_b("quest_d6_03", "place_albinos");
}

void f_f1e_a2_v(object a0, object a1)
{
	@SetVariable("ood6Spi4ka2", 1);
}

void f_f24_a2_v(object a0, object a1)
{
	f_1089_a0_v();
	f_e72_a2_b("quest_d6_03", "completed");
}

void f_f2e_a2_v(object a0, object a1)
{
	f_1096_a0_v();
	f_e72_a2_b("quest_d6_03", "failed");
}

void f_f38_a2_v(object a0, object a1)
{
	@SetVariable("ood6Spi4ka3", 1);
}

void f_f3e_a2_v(object a0, object a1)
{
	@SetVariable("ood6Spi4ka4", 1);
}

void f_f44_a2_v(object a0, object a1)
{
	@SetVariable("ood2Spi4ka3", 1);
}

void f_f4a_a2_v(object a0, object a1)
{
	@SetVariable("KnowSpi4ka", 1);
}

bool f_f50_a1_b(object a0)
{
	if (f_103a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_f5a_a1_b(object a0)
{
	if (f_e30_a1_i("ood4Spi4ka1") == 0) {
		return true;
	}
	return false;
}

bool f_f66_a1_b(object a0)
{
	if (f_e30_a1_i("ood4Spi4ka3") == 0) {
		return true;
	}
	return false;
}

bool f_f72_a1_b(object a0)
{
	if (f_e30_a1_i("ood2Spi4ka4") == 0) {
		return true;
	}
	return false;
}

bool f_f7e_a1_b(object a0)
{
	if (f_e30_a1_i("ood2Spi4ka1") == 0) {
		return true;
	}
	return false;
}

bool f_f8a_a1_b(object a0)
{
	if (f_e30_a1_i("ood2Spi4ka2") == 0) {
		return true;
	}
	return false;
}

bool f_f96_a1_b(object a0)
{
	if (f_e30_a1_i("d2q01") == 3) {
		return true;
	}
	return false;
}

bool f_fa2_a1_b(object a0)
{
	if (f_1045_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_fac_a1_b(object a0)
{
	if (f_105a_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_fb6_a1_b(object a0)
{
	if (f_e30_a1_i("ood6Spi4ka1") == 0) {
		return true;
	}
	return false;
}

bool f_fc2_a1_b(object a0)
{
	if (f_e30_a1_i("d6q03") == 0) {
		return true;
	}
	return false;
}

bool f_fce_a1_b(object a0)
{
	if (f_e30_a1_i("d6q03") == 2) {
		return true;
	}
	return false;
}

bool f_fda_a1_b(object a0)
{
	if (f_e30_a1_i("d6q03AlbinosKilled") == 1) {
		return true;
	}
	return false;
}

bool f_fe6_a1_b(object a0)
{
	if (f_e30_a1_i("ood6Spi4ka2") == 0) {
		return true;
	}
	return false;
}

bool f_ff2_a1_b(object a0)
{
	if (f_e30_a1_i("ood6Spi4ka3") == 0) {
		return true;
	}
	return false;
}

bool f_ffe_a1_b(object a0)
{
	if (f_e30_a1_i("d6q01") == 4) {
		return true;
	}
	return false;
}

bool f_100a_a1_b(object a0)
{
	if (f_e30_a1_i("ood6Spi4ka4") == 0) {
		return true;
	}
	return false;
}

bool f_1016_a1_b(object a0)
{
	if (f_e30_a1_i("d2q01") >= 5) {
		return true;
	}
	return false;
}

bool f_1022_a1_b(object a0)
{
	if (f_e30_a1_i("ood2Spi4ka3") == 0) {
		return true;
	}
	return false;
}

bool f_102e_a1_b(object a0)
{
	if (f_e30_a1_i("d4q03") == 3) {
		return true;
	}
	return false;
}

bool f_103a_a1_b(object a0)
{
	float L0;
	a0->GetProperty("money", L0);
	if (L0 >= 2000) {
		return true;
	}
	return false;
}

bool f_1045_a1_b(object a0)
{
	if (f_e87_a0_i() >= 0 && f_e87_a0_i() < 6) {
		return true;
	}
	return false;
}

bool f_105a_a1_b(object a0)
{
	if (f_e87_a0_i() >= 6 && f_e87_a0_i() < 12) {
		return true;
	}
	return false;
}

void f_106f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 53, 1, 512135);
	f_10bd_a2_b(L0, 10);
}

void f_107c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 107, 2, 513730);
	f_10bd_a2_b(L0, -1);
}

void f_1089_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 109, 2, 513732);
	f_10bd_a2_b(L0, 107);
}

void f_1096_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 110, 2, 513733);
	f_10bd_a2_b(L0, 107);
}

void f_10a3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 158, 2, 515376);
	f_10bd_a2_b(L0, 107);
}

object f_10b0_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_10bd_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_10b0_a0_o();
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

int f_10d9_a0_i(void)
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

void f_10ea_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_spi4ka", L0);
	if (!L0) {
		t3{a0};
		@SetVariable("mt_spi4ka", 1);
	}
	if (f_e8f_a1_b(2)) {
		t5{a0};
		return;
	}
	if (f_e8f_a1_b(4)) {
		t7{a0};
		return;
	}
	if (f_e8f_a1_b(6)) {
		t9{a0};
		return;
	}
	if (f_e8f_a1_b(12)) {
		t1{a0};
		return;
	}
	t11{a0};
}

