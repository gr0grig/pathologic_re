event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event evt_11 11;

var object g0;
var bool g1;

task t0
{
	void init(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

maintask t1
{
	void init(void)
	{
		f_fb3_a0_v();
		if (!f_b75_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_bb6_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void OnUnload(void)
	{
		t0{};
	}

	void OnUse(object a0)
	{
		f_fb7_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_b69_a1_b(a0);
		@WaitForAnimEnd();
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
		if (!f_b7a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c27_a0_i());
		L0->SetPhoto(f_c29_a0_s());
		L0->SetPlayerName(f_f32_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bb2_a1_v(a0);
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
			f_d23_a2_v(tv1, tv0);
			f_b4_a1_v("Neutral");
			tv0->SetMessage(356);
			tv0->ClearReplies();
			tv0->AddReply(357, 417, 414);
			tv0->AddReply(358, 418, 415);
			tv0->AddReply(359, -1, 416);
			break;
			return;
		}
		if (f_c2b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bb6_a1_v(tv2);
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

	void f_b4_a1_v(string a0)
	{
		if (!f_c2b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bb6_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bc8_a0_v();
			if (a0 == 413) {
				f_d23_a2_v(tv1, tv0);
				f_b4_a1_v("Neutral");
				tv0->SetMessage(356);
				tv0->ClearReplies();
				tv0->AddReply(357, 417, 414);
				tv0->AddReply(358, 418, 415);
				tv0->AddReply(359, -1, 416);
				return;
			}
			if (a0 == 418) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(361);
				tv0->ClearReplies();
				tv0->AddReply(362, 417, 419);
				tv0->AddReply(363, 417, 420);
				return;
			}
			if (a0 == 417) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(360);
				tv0->ClearReplies();
				tv0->AddReply(364, 425, 423);
				tv0->AddReply(365, 425, 424);
				return;
			}
			if (a0 == 425) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(366);
				tv0->ClearReplies();
				tv0->AddReply(367, -1, 426);
				tv0->AddReply(368, -1, 427);
				return;
			}
			tv3 = true;
			if (f_c2b_a0_b()) {
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
		if (!f_b7a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c27_a0_i());
		L0->SetPhoto(f_c29_a0_s());
		L0->SetPlayerName(f_f32_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bb2_a1_v(a0);
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
			f_222_a1_v("Neutral");
			tv0->SetMessage(5851);
			tv0->ClearReplies();
			if (f_d4b_a1_b(tv1) && f_d57_a1_b(tv1)) {
				tv0->AddReply(5852, 6464, 6443);
			}
			if (f_d63_a1_b(tv1) && f_d3f_a1_b(tv1)) {
				tv0->AddReply(8356, 6444, 9179);
			}
			if (f_dc3_a1_b(tv1) && f_d6f_a1_b(tv1) || f_de1_a1_b(tv1) && f_d6f_a1_b(tv1)) {
				tv0->AddReply(8357, 6453, 9180);
			}
			if (f_e6f_a1_b(tv1) && f_dab_a1_b(tv1)) {
				tv0->AddReply(8365, 9205, 9188);
			}
			if (f_e63_a1_b(tv1) && f_db7_a1_b(tv1)) {
				tv0->AddReply(8379, 9378, 9202);
			}
			tv0->AddReply(8520, -1, 9362);
			break;
			return;
		}
		if (f_c2b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bb6_a1_v(tv2);
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

	void f_222_a1_v(string a0)
	{
		if (!f_c2b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bb6_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bc8_a0_v();
			if (a1 == 6801) {
				f_c2d_a2_v(tv1, tv0);
				f_c3f_a2_v(tv1, tv0);
				f_c54_a2_v(tv1, tv0);
				f_cc9_a2_v(tv1, tv0);
				f_cc3_a2_v(tv1, tv0);
				f_d29_a2_v(tv1, tv0);
			}
			if (a1 == 6802) {
				f_c2d_a2_v(tv1, tv0);
				f_c5a_a2_v(tv1, tv0);
			}
			if (a1 == 6800) {
				f_c2d_a2_v(tv1, tv0);
				f_c5a_a2_v(tv1, tv0);
			}
			if (a1 == 6449) {
				f_c33_a2_v(tv1, tv0);
			}
			if (a1 == 6450) {
				f_c33_a2_v(tv1, tv0);
			}
			if (a1 == 6451) {
				f_c33_a2_v(tv1, tv0);
			}
			if (a1 == 6452) {
				f_c33_a2_v(tv1, tv0);
			}
			if (a1 == 9365) {
				f_c33_a2_v(tv1, tv0);
			}
			if (a1 == 6456) {
				f_c39_a2_v(tv1, tv0);
			}
			if (a1 == 6457) {
				f_c39_a2_v(tv1, tv0);
			}
			if (a1 == 6463) {
				f_c39_a2_v(tv1, tv0);
			}
			if (a1 == 6458) {
				f_c39_a2_v(tv1, tv0);
			}
			if (a1 == 9372) {
				f_cb7_a2_v(tv1, tv0);
			}
			if (a1 == 9373) {
				f_cb7_a2_v(tv1, tv0);
			}
			if (a1 == 9381) {
				f_cbd_a2_v(tv1, tv0);
			}
			if (a0 == 6442) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(5851);
				tv0->ClearReplies();
				if (f_d4b_a1_b(tv1) && f_d57_a1_b(tv1)) {
					tv0->AddReply(5852, 6464, 6443);
				}
				if (f_d63_a1_b(tv1) && f_d3f_a1_b(tv1)) {
					tv0->AddReply(8356, 6444, 9179);
				}
				if (f_dc3_a1_b(tv1) && f_d6f_a1_b(tv1) || f_de1_a1_b(tv1) && f_d6f_a1_b(tv1)) {
					tv0->AddReply(8357, 6453, 9180);
				}
				if (f_e6f_a1_b(tv1) && f_dab_a1_b(tv1)) {
					tv0->AddReply(8365, 9205, 9188);
				}
				if (f_e63_a1_b(tv1) && f_db7_a1_b(tv1)) {
					tv0->AddReply(8379, 9378, 9202);
				}
				tv0->AddReply(8520, -1, 9362);
				return;
			}
			if (a0 == 9378) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(8535);
				tv0->ClearReplies();
				tv0->AddReply(8536, 9206, 9379);
				return;
			}
			if (a0 == 9206) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(8383);
				tv0->ClearReplies();
				tv0->AddReply(8538, -1, 9381);
				return;
			}
			if (a0 == 9205) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(8382);
				tv0->ClearReplies();
				tv0->AddReply(8524, 9367, 9366);
				return;
			}
			if (a0 == 9367) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(8525);
				tv0->ClearReplies();
				tv0->AddReply(8526, 9369, 9368);
				if (!f_e63_a1_b(tv1)) {
					tv0->AddReply(8532, 9375, 9374);
				}
				return;
			}
			if (a0 == 9375) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(8533);
				tv0->ClearReplies();
				tv0->AddReply(8534, 9369, 9376);
				return;
			}
			if (a0 == 9369) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(8527);
				tv0->ClearReplies();
				tv0->AddReply(8528, 9371, 9370);
				return;
			}
			if (a0 == 9371) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(8529);
				tv0->ClearReplies();
				tv0->AddReply(8530, -1, 9372);
				tv0->AddReply(8531, -1, 9373);
				return;
			}
			if (a0 == 6453) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(5862);
				tv0->ClearReplies();
				tv0->AddReply(5863, 6455, 6454);
				tv0->AddReply(5868, 6460, 6459);
				tv0->AddReply(5867, -1, 6458);
				return;
			}
			if (a0 == 6460) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(5869);
				tv0->ClearReplies();
				tv0->AddReply(5870, 6455, 6461);
				tv0->AddReply(5871, -1, 6463);
				return;
			}
			if (a0 == 6455) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(5864);
				tv0->ClearReplies();
				tv0->AddReply(5865, -1, 6456);
				tv0->AddReply(5866, -1, 6457);
				return;
			}
			if (a0 == 6444) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(5853);
				tv0->ClearReplies();
				tv0->AddReply(5854, 6446, 6445);
				tv0->AddReply(5861, -1, 6452);
				if (!f_d7b_a1_b(tv1)) {
					tv0->AddReply(8521, 9364, 9363);
				}
				return;
			}
			if (a0 == 9364) {
				f_c8b_a2_v(tv1, tv0);
				f_222_a1_v("Neutral");
				tv0->SetMessage(8522);
				tv0->ClearReplies();
				tv0->AddReply(8523, -1, 9365);
				return;
			}
			if (a0 == 6446) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(5855);
				tv0->ClearReplies();
				tv0->AddReply(5856, 6448, 6447);
				tv0->AddReply(5860, -1, 6451);
				return;
			}
			if (a0 == 6448) {
				f_d39_a2_v(tv1, tv0);
				f_ca3_a2_v(tv1, tv0);
				f_222_a1_v("Neutral");
				tv0->SetMessage(5857);
				tv0->ClearReplies();
				tv0->AddReply(5858, -1, 6449);
				tv0->AddReply(5859, -1, 6450);
				return;
			}
			if (a0 == 6464) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(5872);
				tv0->ClearReplies();
				tv0->AddReply(6141, 6786, 6785);
				tv0->AddReply(6140, 6786, 6784);
				return;
			}
			if (a0 == 6786) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(6142);
				tv0->ClearReplies();
				tv0->AddReply(6143, 6790, 6788);
				tv0->AddReply(6144, 6790, 6789);
				return;
			}
			if (a0 == 6790) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(6145);
				tv0->ClearReplies();
				tv0->AddReply(6146, 6794, 6792);
				tv0->AddReply(6147, 6794, 6793);
				return;
			}
			if (a0 == 6794) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(6148);
				tv0->ClearReplies();
				tv0->AddReply(6149, 6797, 6796);
				return;
			}
			if (a0 == 6797) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(6150);
				tv0->ClearReplies();
				tv0->AddReply(6151, 6799, 6798);
				tv0->AddReply(6153, -1, 6800);
				return;
			}
			if (a0 == 6799) {
				f_222_a1_v("Neutral");
				tv0->SetMessage(6152);
				tv0->ClearReplies();
				tv0->AddReply(6154, -1, 6801);
				tv0->AddReply(6155, -1, 6802);
				return;
			}
			tv3 = true;
			if (f_c2b_a0_b()) {
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
		if (!f_b7a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c27_a0_i());
		L0->SetPhoto(f_c29_a0_s());
		L0->SetPlayerName(f_f32_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bb2_a1_v(a0);
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
			f_5e4_a1_v("Neutral");
			tv0->SetMessage(6715);
			tv0->ClearReplies();
			if (f_d87_a1_b(tv1) && f_d9f_a1_b(tv1)) {
				tv0->AddReply(7429, 7355, 8200);
			}
			if (f_d93_a1_b(tv1)) {
				tv0->AddReply(6716, 7385, 7403);
			}
			if (f_e4b_a1_b(tv1) && f_e57_a1_b(tv1)) {
				tv0->AddReply(14516, 15756, 15755);
			}
			tv0->AddReply(7534, -1, 8316);
			break;
			f_5e4_a1_v("Neutral");
			tv0->SetMessage(9517);
			tv0->ClearReplies();
			tv0->AddReply(9518, 10462, 10461);
			break;
			return;
		}
		if (f_c2b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bb6_a1_v(tv2);
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

	void f_5e4_a1_v(string a0)
	{
		if (!f_c2b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bb6_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bc8_a0_v();
			if (a1 == 7358) {
				f_c91_a2_v(tv1, tv0);
				f_ca9_a2_v(tv1, tv0);
			}
			if (a1 == 7363) {
				f_c91_a2_v(tv1, tv0);
				f_ca9_a2_v(tv1, tv0);
			}
			if (a1 == 7382) {
				f_c91_a2_v(tv1, tv0);
			}
			if (a1 == 7394) {
				f_c97_a2_v(tv1, tv0);
			}
			if (a1 == 7395) {
				f_c97_a2_v(tv1, tv0);
			}
			if (a1 == 7396) {
				f_c97_a2_v(tv1, tv0);
			}
			if (a1 == 7397) {
				f_c97_a2_v(tv1, tv0);
			}
			if (a1 == 7398) {
				f_c97_a2_v(tv1, tv0);
			}
			if (a1 == 7399) {
				f_c97_a2_v(tv1, tv0);
			}
			if (a1 == 15755) {
				f_d1d_a2_v(tv1, tv0);
			}
			if (a0 == 7402) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6715);
				tv0->ClearReplies();
				if (f_d87_a1_b(tv1) && f_d9f_a1_b(tv1)) {
					tv0->AddReply(7429, 7355, 8200);
				}
				if (f_d93_a1_b(tv1)) {
					tv0->AddReply(6716, 7385, 7403);
				}
				if (f_e4b_a1_b(tv1) && f_e57_a1_b(tv1)) {
					tv0->AddReply(14516, 15756, 15755);
				}
				tv0->AddReply(7534, -1, 8316);
				return;
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(9517);
				tv0->ClearReplies();
				tv0->AddReply(9518, 10462, 10461);
				return;
			}
			if (a0 == 10462) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(9519);
				tv0->ClearReplies();
				tv0->AddReply(9520, 10464, 10463);
				tv0->AddReply(9530, 10466, 10474);
				return;
			}
			if (a0 == 10464) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(9521);
				tv0->ClearReplies();
				tv0->AddReply(9522, 10466, 10465);
				tv0->AddReply(9529, 10466, 10472);
				return;
			}
			if (a0 == 10466) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(9523);
				tv0->ClearReplies();
				tv0->AddReply(9524, 10468, 10467);
				tv0->AddReply(9528, -1, 10471);
				return;
			}
			if (a0 == 10468) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(9525);
				tv0->ClearReplies();
				tv0->AddReply(9526, -1, 10469);
				tv0->AddReply(9527, -1, 10470);
				return;
			}
			if (a0 == 15756) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(14517);
				tv0->ClearReplies();
				tv0->AddReply(14518, -1, 15757);
				return;
			}
			if (a0 == 7385) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6699);
				tv0->ClearReplies();
				tv0->AddReply(6700, 7387, 7386);
				tv0->AddReply(6714, 7387, 7400);
				tv0->AddReply(6713, -1, 7399);
				return;
			}
			if (a0 == 7387) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6701);
				tv0->ClearReplies();
				tv0->AddReply(6702, 7389, 7388);
				tv0->AddReply(6712, -1, 7398);
				return;
			}
			if (a0 == 7389) {
				f_c9d_a2_v(tv1, tv0);
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6703);
				tv0->ClearReplies();
				tv0->AddReply(6704, 7391, 7390);
				tv0->AddReply(6711, -1, 7397);
				return;
			}
			if (a0 == 7391) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6705);
				tv0->ClearReplies();
				tv0->AddReply(6706, 7393, 7392);
				tv0->AddReply(6710, -1, 7396);
				return;
			}
			if (a0 == 7393) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6707);
				tv0->ClearReplies();
				tv0->AddReply(6708, -1, 7394);
				tv0->AddReply(6709, -1, 7395);
				return;
			}
			if (a0 == 7355) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6674);
				tv0->ClearReplies();
				tv0->AddReply(6675, 7357, 7356);
				tv0->AddReply(6689, 7373, 7372);
				return;
			}
			if (a0 == 7373) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6690);
				tv0->ClearReplies();
				tv0->AddReply(6691, 7357, 7374);
				tv0->AddReply(6692, 7377, 7376);
				return;
			}
			if (a0 == 7377) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6693);
				tv0->ClearReplies();
				tv0->AddReply(6694, 7362, 7378);
				tv0->AddReply(6695, 7381, 7380);
				return;
			}
			if (a0 == 7381) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6696);
				tv0->ClearReplies();
				tv0->AddReply(6697, -1, 7382);
				tv0->AddReply(6698, 7362, 7383);
				return;
			}
			if (a0 == 7357) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6676);
				tv0->ClearReplies();
				tv0->AddReply(6677, -1, 7358);
				tv0->AddReply(6678, 7360, 7359);
				return;
			}
			if (a0 == 7360) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6679);
				tv0->ClearReplies();
				tv0->AddReply(6680, 7362, 7361);
				tv0->AddReply(6683, 7365, 7364);
				tv0->AddReply(6686, 7369, 7368);
				return;
			}
			if (a0 == 7369) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6687);
				tv0->ClearReplies();
				tv0->AddReply(6688, 7362, 7370);
				return;
			}
			if (a0 == 7365) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6684);
				tv0->ClearReplies();
				tv0->AddReply(6685, 7362, 7366);
				return;
			}
			if (a0 == 7362) {
				f_5e4_a1_v("Neutral");
				tv0->SetMessage(6681);
				tv0->ClearReplies();
				tv0->AddReply(6682, -1, 7363);
				return;
			}
			tv3 = true;
			if (f_c2b_a0_b()) {
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
		if (!f_b7a_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_c27_a0_i());
		L0->SetPhoto(f_c29_a0_s());
		L0->SetPlayerName(f_f32_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_bb2_a1_v(a0);
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
			if (f_dcd_a1_b(tv1) && f_deb_a1_b(tv1) || f_dd7_a1_b(tv1) && f_deb_a1_b(tv1)) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12040);
				tv0->ClearReplies();
				tv0->AddReply(12041, 13262, 13259);
				tv0->AddReply(12042, 13261, 13260);
				break;
			}
			f_972_a1_v("Neutral");
			tv0->SetMessage(12052);
			tv0->ClearReplies();
			if (f_dcd_a1_b(tv1) && f_df7_a1_b(tv1) || f_dd7_a1_b(tv1) && f_df7_a1_b(tv1)) {
				tv0->AddReply(12066, 13289, 13287);
			}
			if (f_e0f_a1_b(tv1) && f_e1b_a1_b(tv1)) {
				tv0->AddReply(12543, 13713, 13712);
			}
			if (f_e03_a1_b(tv1) && f_e27_a1_b(tv1) && !f_e0f_a1_b(tv1)) {
				tv0->AddReply(12546, 13716, 13715);
			}
			if (f_e3f_a1_b(tv1) && f_e33_a1_b(tv1)) {
				tv0->AddReply(12053, 13274, 13273);
			}
			tv0->AddReply(12060, -1, 13280);
			break;
			return;
		}
		if (f_c2b_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_bb6_a1_v(tv2);
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

	void f_972_a1_v(string a0)
	{
		if (!f_c2b_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_bb6_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_bc8_a0_v();
			if (a1 == 13271) {
				f_cdc_a2_v(tv1, tv0);
				f_ce2_a2_v(tv1, tv0);
			}
			if (a1 == 13288) {
				f_cdc_a2_v(tv1, tv0);
			}
			if (a1 == 13290) {
				f_ce2_a2_v(tv1, tv0);
			}
			if (a1 == 13714) {
				f_cf7_a2_v(tv1, tv0);
				f_cfd_a2_v(tv1, tv0);
			}
			if (a1 == 13717) {
				f_d07_a2_v(tv1, tv0);
				f_d11_a2_v(tv1, tv0);
			}
			if (a1 == 13273) {
				f_d17_a2_v(tv1, tv0);
			}
			if (a0 == 13258) {
				if (f_dcd_a1_b(tv1) && f_deb_a1_b(tv1) || f_dd7_a1_b(tv1) && f_deb_a1_b(tv1)) {
					f_972_a1_v("Neutral");
					tv0->SetMessage(12040);
					tv0->ClearReplies();
					tv0->AddReply(12041, 13262, 13259);
					tv0->AddReply(12042, 13261, 13260);
					return;
				}
				f_972_a1_v("Neutral");
				tv0->SetMessage(12052);
				tv0->ClearReplies();
				if (f_dcd_a1_b(tv1) && f_df7_a1_b(tv1) || f_dd7_a1_b(tv1) && f_df7_a1_b(tv1)) {
					tv0->AddReply(12066, 13289, 13287);
				}
				if (f_e0f_a1_b(tv1) && f_e1b_a1_b(tv1)) {
					tv0->AddReply(12543, 13713, 13712);
				}
				if (f_e03_a1_b(tv1) && f_e27_a1_b(tv1) && !f_e0f_a1_b(tv1)) {
					tv0->AddReply(12546, 13716, 13715);
				}
				if (f_e3f_a1_b(tv1) && f_e33_a1_b(tv1)) {
					tv0->AddReply(12053, 13274, 13273);
				}
				tv0->AddReply(12060, -1, 13280);
				return;
			}
			if (a0 == 13274) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12054);
				tv0->ClearReplies();
				tv0->AddReply(12055, 13276, 13275);
				return;
			}
			if (a0 == 13276) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12056);
				tv0->ClearReplies();
				tv0->AddReply(12057, 13278, 13277);
				tv0->AddReply(12061, 13282, 13281);
				return;
			}
			if (a0 == 13282) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12062);
				tv0->ClearReplies();
				tv0->AddReply(12063, 13284, 13283);
				return;
			}
			if (a0 == 13284) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12064);
				tv0->ClearReplies();
				tv0->AddReply(12065, 13278, 13285);
				return;
			}
			if (a0 == 13278) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12058);
				tv0->ClearReplies();
				tv0->AddReply(12059, -1, 13279);
				return;
			}
			if (a0 == 13716) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12547);
				tv0->ClearReplies();
				tv0->AddReply(12548, -1, 13717);
				return;
			}
			if (a0 == 13713) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12544);
				tv0->ClearReplies();
				tv0->AddReply(12545, -1, 13714);
				return;
			}
			if (a0 == 13289) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12068);
				tv0->ClearReplies();
				tv0->AddReply(12069, -1, 13290);
				return;
			}
			if (a0 == 13261) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12043);
				tv0->ClearReplies();
				tv0->AddReply(12048, 13268, 13267);
				return;
			}
			if (a0 == 13268) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12049);
				tv0->ClearReplies();
				tv0->AddReply(12050, 13264, 13269);
				return;
			}
			if (a0 == 13262) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12044);
				tv0->ClearReplies();
				tv0->AddReply(12045, 13264, 13263);
				tv0->AddReply(12047, 13261, 13265);
				return;
			}
			if (a0 == 13264) {
				f_972_a1_v("Neutral");
				tv0->SetMessage(12046);
				tv0->ClearReplies();
				tv0->AddReply(12051, -1, 13271);
				tv0->AddReply(12067, -1, 13288);
				return;
			}
			tv3 = true;
			if (f_c2b_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_b69_a1_b(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	bool L3;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@Rotate(L2.x, L2.z, L3);
	return L3;
}

bool f_b75_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_b7a_a1_b(object a0)
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
	L5 = L3 * 70 + f_bcf_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_bb2_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_bb6_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_bc8_a0_v(void)
{
	if (f_c2b_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_bcf_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_bd9_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_bde_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_be9_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	}
}

bool f_bf6_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_c02_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_c07_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_c10_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_c18_a1_b(int a0)
{
	return f_c07_a0_i() == a0;
}

bool f_c1e_a0_b(void)
{
	bool L0;
	f_bb6_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_c27_a0_i(void)
{
	return 2877;
}

string f_c29_a0_s(void)
{
	return "ui/NPC_Spi4ka.png";
}

bool f_c2b_a0_b(void)
{
	return true;
}

void f_c2d_a2_v(object a0, object a1)
{
	@SetVariable("ood1Spi4ka1", 1);
}

void f_c33_a2_v(object a0, object a1)
{
	@SetVariable("ood1Spi4ka2", 1);
}

void f_c39_a2_v(object a0, object a1)
{
	@SetVariable("ood1Spi4ka3", 1);
}

void f_c3f_a2_v(object a0, object a1)
{
	object L0;
	@Trace("lockpick1time is given");
	@CreateInvItem(L0);
	L0->SetItemName("lockpick");
	L0->SetProperty("uses", 1);
	f_be9_a3_v(a0, L0, 1);
}

void f_c54_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_c5a_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_f00_a0_o();
	L0->FindMark(L1, "d1q04KaterinaGotoMishka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q04MishkaGotoSpi4ka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q04Spi4kaGotoPowderHouse");
	if (L1) {
		L1->Remove();
	}
	f_f43_a0_v();
	f_eef_a1_b(44);
	f_eef_a1_b(45);
	f_eef_a1_b(46);
	f_bf6_a2_b("quest_d1_04", "failed");
}

void f_c8b_a2_v(object a0, object a1)
{
	@SetVariable("KnowShabnak", 1);
}

void f_c91_a2_v(object a0, object a1)
{
	@SetVariable("ood2Spi4ka1", 1);
}

void f_c97_a2_v(object a0, object a1)
{
	@SetVariable("ood2Spi4ka2", 1);
}

void f_c9d_a2_v(object a0, object a1)
{
	@SetVariable("KnowAlbinos", 1);
}

void f_ca3_a2_v(object a0, object a1)
{
	@SetVariable("KnowZemlja", 1);
}

void f_ca9_a2_v(object a0, object a1)
{
	@SetVariable("d2q01", 4);
	f_f63_a0_v();
	f_bf6_a2_b("quest_d2_01", "woman");
}

void f_cb7_a2_v(object a0, object a1)
{
	@SetVariable("ood1Spi4ka4", 1);
}

void f_cbd_a2_v(object a0, object a1)
{
	@SetVariable("ood1Spi4ka5", 1);
}

void f_cc3_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_cc9_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_f00_a0_o();
	L0->AddMark("d1q04Spi4kaGotoPowderHouse", "pt_map_powderhouse", 0, 8645, f_c02_a0_f());
	f_f53_a0_v();
}

void f_cdc_a2_v(object a0, object a1)
{
	@SetVariable("ood6Spi4ka1", 1);
}

void f_ce2_a2_v(object a0, object a1)
{
	@SetVariable("d6q03", 1);
	f_f73_a0_v();
	f_fa3_a0_v();
	f_bde_a1_o("quest_d6_03");
	f_bf6_a2_b("quest_d6_03", "place_albinos");
}

void f_cf7_a2_v(object a0, object a1)
{
	@SetVariable("ood6Spi4ka2", 1);
}

void f_cfd_a2_v(object a0, object a1)
{
	f_f83_a0_v();
	f_bf6_a2_b("quest_d6_03", "completed");
}

void f_d07_a2_v(object a0, object a1)
{
	f_f93_a0_v();
	f_bf6_a2_b("quest_d6_03", "failed");
}

void f_d11_a2_v(object a0, object a1)
{
	@SetVariable("ood6Spi4ka3", 1);
}

void f_d17_a2_v(object a0, object a1)
{
	@SetVariable("ood6Spi4ka4", 1);
}

void f_d1d_a2_v(object a0, object a1)
{
	@SetVariable("ood2Spi4ka3", 1);
}

void f_d23_a2_v(object a0, object a1)
{
	@SetVariable("KnowSpi4ka", 1);
}

void f_d29_a2_v(object a0, object a1)
{
	f_f11_a3_v(f_f00_a0_o(), "pt_map_powderhouse", 2);
	a1->ShowMap(f_f00_a0_o());
}

void f_d39_a2_v(object a0, object a1)
{
	@SetVariable("KnowTermitnik", 1);
}

bool f_d3f_a1_b(object a0)
{
	if (f_bd9_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_d4b_a1_b(object a0)
{
	if (f_bd9_a1_i("d1q04") == 2) {
		return true;
	}
	return false;
}

bool f_d57_a1_b(object a0)
{
	if (f_bd9_a1_i("ood1Spi4ka1") == 0) {
		return true;
	}
	return false;
}

bool f_d63_a1_b(object a0)
{
	if (f_bd9_a1_i("ood1Spi4ka2") == 0) {
		return true;
	}
	return false;
}

bool f_d6f_a1_b(object a0)
{
	if (f_bd9_a1_i("ood1Spi4ka3") == 0) {
		return true;
	}
	return false;
}

bool f_d7b_a1_b(object a0)
{
	if (f_bd9_a1_i("KnowShabnak") == 1) {
		return true;
	}
	return false;
}

bool f_d87_a1_b(object a0)
{
	if (f_bd9_a1_i("ood2Spi4ka1") == 0) {
		return true;
	}
	return false;
}

bool f_d93_a1_b(object a0)
{
	if (f_bd9_a1_i("ood2Spi4ka2") == 0) {
		return true;
	}
	return false;
}

bool f_d9f_a1_b(object a0)
{
	if (f_bd9_a1_i("d2q01") == 3) {
		return true;
	}
	return false;
}

bool f_dab_a1_b(object a0)
{
	if (f_bd9_a1_i("ood1Spi4ka4") == 0) {
		return true;
	}
	return false;
}

bool f_db7_a1_b(object a0)
{
	if (f_bd9_a1_i("ood1Spi4ka5") == 0) {
		return true;
	}
	return false;
}

bool f_dc3_a1_b(object a0)
{
	if (f_e7b_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_dcd_a1_b(object a0)
{
	if (f_e86_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_dd7_a1_b(object a0)
{
	if (f_e9b_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_de1_a1_b(object a0)
{
	if (f_eb0_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_deb_a1_b(object a0)
{
	if (f_bd9_a1_i("ood6Spi4ka1") == 0) {
		return true;
	}
	return false;
}

bool f_df7_a1_b(object a0)
{
	if (f_bd9_a1_i("d6q03") == 0) {
		return true;
	}
	return false;
}

bool f_e03_a1_b(object a0)
{
	if (f_bd9_a1_i("d6q03") == 2) {
		return true;
	}
	return false;
}

bool f_e0f_a1_b(object a0)
{
	if (f_bd9_a1_i("d6q03AlbinosKilled") == 1) {
		return true;
	}
	return false;
}

bool f_e1b_a1_b(object a0)
{
	if (f_bd9_a1_i("ood6Spi4ka2") == 0) {
		return true;
	}
	return false;
}

bool f_e27_a1_b(object a0)
{
	if (f_bd9_a1_i("ood6Spi4ka3") == 0) {
		return true;
	}
	return false;
}

bool f_e33_a1_b(object a0)
{
	if (f_bd9_a1_i("d6q01") == 4) {
		return true;
	}
	return false;
}

bool f_e3f_a1_b(object a0)
{
	if (f_bd9_a1_i("ood6Spi4ka4") == 0) {
		return true;
	}
	return false;
}

bool f_e4b_a1_b(object a0)
{
	if (f_bd9_a1_i("d2q01") >= 5) {
		return true;
	}
	return false;
}

bool f_e57_a1_b(object a0)
{
	if (f_bd9_a1_i("ood2Spi4ka3") == 0) {
		return true;
	}
	return false;
}

bool f_e63_a1_b(object a0)
{
	if (f_bd9_a1_i("KnowMishka") == 1) {
		return true;
	}
	return false;
}

bool f_e6f_a1_b(object a0)
{
	if (f_bd9_a1_i("KnowOspina") == 1) {
		return true;
	}
	return false;
}

bool f_e7b_a1_b(object a0)
{
	if (f_c10_a0_i() >= 18) {
		return true;
	}
	return false;
}

bool f_e86_a1_b(object a0)
{
	if (f_c10_a0_i() >= 0 && f_c10_a0_i() < 6) {
		return true;
	}
	return false;
}

bool f_e9b_a1_b(object a0)
{
	if (f_c10_a0_i() >= 6 && f_c10_a0_i() < 12) {
		return true;
	}
	return false;
}

bool f_eb0_a1_b(object a0)
{
	if (f_c10_a0_i() >= 12 && f_c10_a0_i() < 18) {
		return true;
	}
	return false;
}

object f_ec5_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_ed2_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_ec5_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SetVariable("player_diary", 1);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

bool f_eef_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_ec5_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

object f_f00_a0_o(void)
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

void f_f11_a3_v(object a0, string a1, float a2)
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

int f_f32_a0_i(void)
{
	int L0;
	@GetVariable("player", L0);
	if (L0 == 0) {
		return 200001;
	} else {
		if (L0 == 1) {
			return 200002;
		}
	}
	return 200003;
}

void f_f43_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 48, 2, 12130);
	f_ed2_a2_b(L0, 43);
}

void f_f53_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 46, 2, 12128);
	f_ed2_a2_b(L0, 43);
}

void f_f63_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 53, 1, 12135);
	f_ed2_a2_b(L0, 10);
}

void f_f73_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 107, 2, 13730);
	f_ed2_a2_b(L0, -1);
}

void f_f83_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 109, 2, 13732);
	f_ed2_a2_b(L0, 107);
}

void f_f93_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 110, 2, 13733);
	f_ed2_a2_b(L0, 107);
}

void f_fa3_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 158, 2, 15376);
	f_ed2_a2_b(L0, 107);
}

void f_fb3_a0_v(void)
{
	g1 = false;
}

void f_fb7_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_c18_a1_b(1)) {
		t4{a0};
		return;
	}
	if (f_c18_a1_b(2)) {
		t6{a0};
		return;
	}
	if (f_c18_a1_b(6)) {
		t8{a0};
		return;
	}
	f_c1e_a0_b();
}

