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
		f_11e7_a0_v();
		if (!f_dde_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_e1f_a1_v("Neutral");
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
		f_11eb_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_dd2_a1_b(a0);
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
		if (!f_de3_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e91_a0_i());
		L0->SetPhoto(f_e93_a0_s());
		L0->SetPlayerName(f_1166_a0_i());
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
		f_e1b_a1_v(a0);
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
			f_fb2_a2_v(tv1, tv0);
			f_cd_a1_v("Neutral");
			tv0->SetMessage(9170);
			tv0->ClearReplies();
			tv0->AddReply(9171, 10056, 10055);
			tv0->AddReply(9175, 10062, 10061);
			tv0->AddReply(9187, 10077, 10076);
			break;
			f_cd_a1_v("Neutral");
			tv0->SetMessage(5800);
			tv0->ClearReplies();
			tv0->AddReply(5801, 6391, 6390);
			tv0->AddReply(5819, 6391, 6408);
			tv0->AddReply(5820, 6391, 6410);
			break;
			return;
		}
		if (f_e95_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e1f_a1_v(tv2);
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

	void f_cd_a1_v(string a0)
	{
		if (!f_e95_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e1f_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e31_a0_v();
			if (a1 == 10081) {
				f_e97_a2_v(tv1, tv0);
			}
			if (a1 == 10088) {
				f_e97_a2_v(tv1, tv0);
			}
			if (a0 == 10054) {
				f_fb2_a2_v(tv1, tv0);
				f_cd_a1_v("Neutral");
				tv0->SetMessage(9170);
				tv0->ClearReplies();
				tv0->AddReply(9171, 10056, 10055);
				tv0->AddReply(9175, 10062, 10061);
				tv0->AddReply(9187, 10077, 10076);
				return;
				f_cd_a1_v("Neutral");
				tv0->SetMessage(5800);
				tv0->ClearReplies();
				tv0->AddReply(5801, 6391, 6390);
				tv0->AddReply(5819, 6391, 6408);
				tv0->AddReply(5820, 6391, 6410);
				return;
			}
			if (a0 == 6391) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(5802);
				tv0->ClearReplies();
				tv0->AddReply(5803, 6393, 6392);
				tv0->AddReply(5806, 6396, 6395);
				return;
			}
			if (a0 == 6396) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(5807);
				tv0->ClearReplies();
				tv0->AddReply(5808, 6398, 6397);
				tv0->AddReply(5818, -1, 6407);
				return;
			}
			if (a0 == 6398) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(5809);
				tv0->ClearReplies();
				tv0->AddReply(5810, 6400, 6399);
				tv0->AddReply(5817, -1, 6406);
				return;
			}
			if (a0 == 6400) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(5811);
				tv0->ClearReplies();
				tv0->AddReply(5812, 6402, 6401);
				tv0->AddReply(5816, -1, 6405);
				return;
			}
			if (a0 == 6402) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(5813);
				tv0->ClearReplies();
				tv0->AddReply(5814, -1, 6403);
				tv0->AddReply(5815, -1, 6404);
				return;
			}
			if (a0 == 6393) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(5804);
				tv0->ClearReplies();
				tv0->AddReply(5805, -1, 6394);
				return;
			}
			if (a0 == 10077) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(9188);
				tv0->ClearReplies();
				tv0->AddReply(9189, -1, 10078);
				tv0->AddReply(9190, 10080, 10079);
				return;
			}
			if (a0 == 10080) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(9191);
				tv0->ClearReplies();
				tv0->AddReply(9192, -1, 10081);
				tv0->AddReply(9193, 10083, 10082);
				return;
			}
			if (a0 == 10083) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(9194);
				tv0->ClearReplies();
				tv0->AddReply(9195, 10085, 10084);
				tv0->AddReply(9202, 10085, 10093);
				return;
			}
			if (a0 == 10085) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(9196);
				tv0->ClearReplies();
				tv0->AddReply(9197, 10087, 10086);
				tv0->AddReply(9200, 10087, 10089);
				tv0->AddReply(9201, 10087, 10091);
				return;
			}
			if (a0 == 10087) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(9198);
				tv0->ClearReplies();
				tv0->AddReply(9199, -1, 10088);
				return;
			}
			if (a0 == 10062) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(9176);
				tv0->ClearReplies();
				tv0->AddReply(9177, 10064, 10063);
				tv0->AddReply(9186, -1, 10075);
				return;
			}
			if (a0 == 10064) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(9178);
				tv0->ClearReplies();
				tv0->AddReply(9179, 10066, 10065);
				tv0->AddReply(9185, 10066, 10073);
				return;
			}
			if (a0 == 10066) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(9180);
				tv0->ClearReplies();
				tv0->AddReply(9181, 10068, 10067);
				tv0->AddReply(9184, 10068, 10071);
				return;
			}
			if (a0 == 10068) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(9182);
				tv0->ClearReplies();
				tv0->AddReply(9183, 10085, 10069);
				return;
			}
			if (a0 == 10056) {
				f_cd_a1_v("Neutral");
				tv0->SetMessage(9172);
				tv0->ClearReplies();
				tv0->AddReply(9173, 10064, 10057);
				tv0->AddReply(9174, 10064, 10059);
				return;
			}
			tv3 = true;
			if (f_e95_a0_b()) {
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
		if (!f_de3_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e91_a0_i());
		L0->SetPhoto(f_e93_a0_s());
		L0->SetPlayerName(f_1166_a0_i());
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
		f_e1b_a1_v(a0);
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
			if (f_1068_a1_b(tv1) && f_1074_a1_b(tv1)) {
				f_1052_a2_v(tv1, tv0);
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8737);
				tv0->ClearReplies();
				tv0->AddReply(8777, 9633, 9624);
				tv0->AddReply(8781, 9629, 9628);
				break;
			}
			if (f_105e_a1_b(tv1)) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(9805);
				tv0->ClearReplies();
				tv0->AddReply(9806, 10801, 10800);
				tv0->AddReply(9822, 10801, 10818);
				break;
			}
			if (f_10b0_a1_b(tv1) && !f_10a4_a1_b(tv1)) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(9078);
				tv0->ClearReplies();
				tv0->AddReply(9079, 9958, 9957);
				break;
			}
			if (f_105e_a1_b(tv1)) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8769);
				tv0->ClearReplies();
				tv0->AddReply(8770, 9621, 9617);
				tv0->AddReply(8771, 9619, 9618);
				break;
			}
			f_3c7_a1_v("Neutral");
			tv0->SetMessage(8778);
			tv0->ClearReplies();
			if (f_1068_a1_b(tv1)) {
				tv0->AddReply(11141, 12331, 12330);
			}
			if (f_1080_a1_b(tv1)) {
				tv0->AddReply(8779, 9681, 9626);
			}
			if (f_108c_a1_b(tv1)) {
				tv0->AddReply(8780, 9669, 9627);
			}
			if (f_1098_a1_b(tv1) && !f_1068_a1_b(tv1) && !f_10a4_a1_b(tv1)) {
				tv0->AddReply(8802, 9651, 9650);
			}
			tv0->AddReply(11140, -1, 12329);
			break;
			return;
		}
		if (f_e95_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e1f_a1_v(tv2);
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

	void f_3c7_a1_v(string a0)
	{
		if (!f_e95_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e1f_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e31_a0_v();
			if (a1 == 9647) {
				f_f09_a2_v(tv1, tv0);
				f_ee6_a2_v(tv1, tv0);
				f_f21_a2_v(tv1, tv0);
			}
			if (a1 == 9649) {
				f_f09_a2_v(tv1, tv0);
			}
			if (a1 == 9639) {
				f_f09_a2_v(tv1, tv0);
				f_ee6_a2_v(tv1, tv0);
				f_f21_a2_v(tv1, tv0);
			}
			if (a1 == 9594) {
				f_f09_a2_v(tv1, tv0);
				f_ee6_a2_v(tv1, tv0);
				f_f21_a2_v(tv1, tv0);
			}
			if (a1 == 9963) {
				f_f41_a2_v(tv1, tv0);
			}
			if (a1 == 12332) {
				f_ee6_a2_v(tv1, tv0);
				f_f21_a2_v(tv1, tv0);
			}
			if (a1 == 9684) {
				f_f0f_a2_v(tv1, tv0);
			}
			if (a1 == 9672) {
				f_f15_a2_v(tv1, tv0);
			}
			if (a1 == 9678) {
				f_f15_a2_v(tv1, tv0);
			}
			if (a1 == 9679) {
				f_f15_a2_v(tv1, tv0);
			}
			if (a1 == 9667) {
				f_f15_a2_v(tv1, tv0);
			}
			if (a1 == 9644) {
				f_f1b_a2_v(tv1, tv0);
			}
			if (a1 == 9641) {
				f_f1b_a2_v(tv1, tv0);
			}
			if (a0 == 9574) {
				if (f_1068_a1_b(tv1) && f_1074_a1_b(tv1)) {
					f_1052_a2_v(tv1, tv0);
					f_3c7_a1_v("Neutral");
					tv0->SetMessage(8737);
					tv0->ClearReplies();
					tv0->AddReply(8777, 9633, 9624);
					tv0->AddReply(8781, 9629, 9628);
					return;
				}
				if (f_105e_a1_b(tv1)) {
					f_3c7_a1_v("Neutral");
					tv0->SetMessage(9805);
					tv0->ClearReplies();
					tv0->AddReply(9806, 10801, 10800);
					tv0->AddReply(9822, 10801, 10818);
					return;
				}
				if (f_10b0_a1_b(tv1) && !f_10a4_a1_b(tv1)) {
					f_3c7_a1_v("Neutral");
					tv0->SetMessage(9078);
					tv0->ClearReplies();
					tv0->AddReply(9079, 9958, 9957);
					return;
				}
				if (f_105e_a1_b(tv1)) {
					f_3c7_a1_v("Neutral");
					tv0->SetMessage(8769);
					tv0->ClearReplies();
					tv0->AddReply(8770, 9621, 9617);
					tv0->AddReply(8771, 9619, 9618);
					return;
				}
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8778);
				tv0->ClearReplies();
				if (f_1068_a1_b(tv1)) {
					tv0->AddReply(11141, 12331, 12330);
				}
				if (f_1080_a1_b(tv1)) {
					tv0->AddReply(8779, 9681, 9626);
				}
				if (f_108c_a1_b(tv1)) {
					tv0->AddReply(8780, 9669, 9627);
				}
				if (f_1098_a1_b(tv1) && !f_1068_a1_b(tv1) && !f_10a4_a1_b(tv1)) {
					tv0->AddReply(8802, 9651, 9650);
				}
				tv0->AddReply(11140, -1, 12329);
				return;
			}
			if (a0 == 9651) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8803);
				tv0->ClearReplies();
				tv0->AddReply(8804, 9640, 9652);
				return;
			}
			if (a0 == 9640) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8793);
				tv0->ClearReplies();
				tv0->AddReply(8795, 9643, 9642);
				tv0->AddReply(8794, -1, 9641);
				return;
			}
			if (a0 == 9643) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8796);
				tv0->ClearReplies();
				tv0->AddReply(8797, -1, 9644);
				return;
			}
			if (a0 == 9669) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8818);
				tv0->ClearReplies();
				tv0->AddReply(8819, 9666, 9670);
				return;
			}
			if (a0 == 9666) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8815);
				tv0->ClearReplies();
				tv0->AddReply(8817, 9671, 9668);
				tv0->AddReply(8816, -1, 9667);
				return;
			}
			if (a0 == 9671) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8820);
				tv0->ClearReplies();
				tv0->AddReply(8821, -1, 9672);
				tv0->AddReply(8822, 9674, 9673);
				return;
			}
			if (a0 == 9674) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8823);
				tv0->ClearReplies();
				tv0->AddReply(8824, 9677, 9675);
				return;
			}
			if (a0 == 9677) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8826);
				tv0->ClearReplies();
				tv0->AddReply(8827, -1, 9678);
				tv0->AddReply(8828, -1, 9679);
				return;
			}
			if (a0 == 9681) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8829);
				tv0->ClearReplies();
				tv0->AddReply(8830, 9683, 9682);
				return;
			}
			if (a0 == 9683) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8831);
				tv0->ClearReplies();
				tv0->AddReply(8832, -1, 9684);
				return;
			}
			if (a0 == 12331) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(11142);
				tv0->ClearReplies();
				tv0->AddReply(11143, -1, 12332);
				return;
			}
			if (a0 == 9619) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8772);
				tv0->ClearReplies();
				tv0->AddReply(8773, 9621, 9620);
				tv0->AddReply(8814, 9621, 9663);
				return;
			}
			if (a0 == 9621) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8774);
				tv0->ClearReplies();
				tv0->AddReply(8775, 9623, 9622);
				tv0->AddReply(10448, 9623, 11518);
				return;
			}
			if (a0 == 9623) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8776);
				tv0->ClearReplies();
				tv0->AddReply(8739, 9577, 9576);
				tv0->AddReply(8764, 9577, 9608);
				tv0->AddReply(8765, 9611, 9610);
				return;
			}
			if (a0 == 9611) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8766);
				tv0->ClearReplies();
				tv0->AddReply(8767, 9587, 9612);
				tv0->AddReply(8768, 9587, 9614);
				return;
			}
			if (a0 == 9577) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8740);
				tv0->ClearReplies();
				tv0->AddReply(8746, 9587, 9586);
				tv0->AddReply(8741, 9579, 9578);
				return;
			}
			if (a0 == 9579) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8742);
				tv0->ClearReplies();
				tv0->AddReply(8743, 9587, 9580);
				tv0->AddReply(8744, 9587, 9582);
				tv0->AddReply(8745, 9587, 9584);
				return;
			}
			if (a0 == 9587) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8747);
				tv0->ClearReplies();
				tv0->AddReply(8748, 9589, 9588);
				tv0->AddReply(8762, 9589, 9604);
				tv0->AddReply(8763, 9589, 9606);
				return;
			}
			if (a0 == 9589) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8749);
				tv0->ClearReplies();
				tv0->AddReply(8761, -1, 9603);
				return;
			}
			if (a0 == 9958) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(9080);
				tv0->ClearReplies();
				tv0->AddReply(9081, 11530, 9959);
				return;
			}
			if (a0 == 11530) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(10457);
				tv0->ClearReplies();
				tv0->AddReply(10458, 11532, 11531);
				return;
			}
			if (a0 == 11532) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(10459);
				tv0->ClearReplies();
				tv0->AddReply(10460, 11534, 11533);
				return;
			}
			if (a0 == 11534) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(10461);
				tv0->ClearReplies();
				tv0->AddReply(10462, 9960, 11535);
				return;
			}
			if (a0 == 9960) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(9082);
				tv0->ClearReplies();
				tv0->AddReply(9083, 9962, 9961);
				return;
			}
			if (a0 == 9962) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(9084);
				tv0->ClearReplies();
				tv0->AddReply(9085, -1, 9963);
				return;
			}
			if (a0 == 10801) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(9807);
				tv0->ClearReplies();
				tv0->AddReply(9808, 10803, 10802);
				tv0->AddReply(9821, 10803, 10816);
				return;
			}
			if (a0 == 10803) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(9809);
				tv0->ClearReplies();
				tv0->AddReply(9810, 10805, 10804);
				tv0->AddReply(9814, 10809, 10808);
				tv0->AddReply(9820, 10809, 10814);
				return;
			}
			if (a0 == 10809) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(9815);
				tv0->ClearReplies();
				tv0->AddReply(9816, 10811, 10810);
				return;
			}
			if (a0 == 10811) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(9817);
				tv0->ClearReplies();
				tv0->AddReply(9818, -1, 10812);
				tv0->AddReply(9819, -1, 10813);
				return;
			}
			if (a0 == 10805) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(9811);
				tv0->ClearReplies();
				tv0->AddReply(9812, -1, 10806);
				tv0->AddReply(9813, -1, 10807);
				return;
			}
			if (a0 == 9629) {
				f_fac_a2_v(tv1, tv0);
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8782);
				tv0->ClearReplies();
				tv0->AddReply(8783, 9631, 9630);
				tv0->AddReply(10447, 9631, 11516);
				return;
			}
			if (a0 == 9631) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8784);
				tv0->ClearReplies();
				tv0->AddReply(8785, 9591, 9632);
				return;
			}
			if (a0 == 9633) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8786);
				tv0->ClearReplies();
				tv0->AddReply(8787, 9591, 9634);
				return;
			}
			if (a0 == 9591) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8751);
				tv0->ClearReplies();
				tv0->AddReply(8752, 9657, 9592);
				tv0->AddReply(8757, 9598, 9597);
				return;
			}
			if (a0 == 9598) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8758);
				tv0->ClearReplies();
				tv0->AddReply(8759, 9593, 9599);
				tv0->AddReply(8760, 9593, 9601);
				return;
			}
			if (a0 == 9657) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8808);
				tv0->ClearReplies();
				tv0->AddReply(8809, 9659, 9658);
				tv0->AddReply(10449, 11521, 11520);
				return;
			}
			if (a0 == 11521) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(10450);
				tv0->ClearReplies();
				tv0->AddReply(10451, 11523, 11522);
				return;
			}
			if (a0 == 11523) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(10452);
				tv0->ClearReplies();
				tv0->AddReply(10453, 9659, 11524);
				return;
			}
			if (a0 == 9659) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8810);
				tv0->ClearReplies();
				tv0->AddReply(8811, 9661, 9660);
				tv0->AddReply(10454, 11527, 11526);
				return;
			}
			if (a0 == 11527) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(10455);
				tv0->ClearReplies();
				tv0->AddReply(10456, 9593, 11528);
				return;
			}
			if (a0 == 9661) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8812);
				tv0->ClearReplies();
				tv0->AddReply(8813, 9593, 9662);
				return;
			}
			if (a0 == 9593) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8753);
				tv0->ClearReplies();
				tv0->AddReply(8790, 9638, 9637);
				tv0->AddReply(8754, -1, 9594);
				return;
			}
			if (a0 == 9638) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8791);
				tv0->ClearReplies();
				tv0->AddReply(8798, 9646, 9645);
				tv0->AddReply(8792, -1, 9639);
				return;
			}
			if (a0 == 9646) {
				f_3c7_a1_v("Neutral");
				tv0->SetMessage(8799);
				tv0->ClearReplies();
				tv0->AddReply(8800, -1, 9647);
				tv0->AddReply(8801, -1, 9649);
				return;
			}
			tv3 = true;
			if (f_e95_a0_b()) {
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
		if (!f_de3_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e91_a0_i());
		L0->SetPhoto(f_e93_a0_s());
		L0->SetPlayerName(f_1166_a0_i());
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
		f_e1b_a1_v(a0);
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
			if (f_10bb_a1_b(tv1)) {
				f_1058_a2_v(tv1, tv0);
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(11527);
				tv0->ClearReplies();
				tv0->AddReply(11528, 12722, 12721);
				if (f_105e_a1_b(tv1)) {
					tv0->AddReply(11537, 12731, 12730);
				}
				tv0->AddReply(11539, 11552, 12732);
				break;
			}
			if (f_105e_a1_b(tv1)) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10500);
				tv0->ClearReplies();
				tv0->AddReply(10501, 11584, 11583);
				tv0->AddReply(10509, -1, 11591);
				break;
			}
			if (f_10d3_a1_b(tv1) && f_10c7_a1_b(tv1) && f_10df_a1_b(tv1)) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10510);
				tv0->ClearReplies();
				tv0->AddReply(10511, 11594, 11593);
				tv0->AddReply(10521, 11594, 11604);
				break;
			}
			if (f_105e_a1_b(tv1)) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(11547);
				tv0->ClearReplies();
				tv0->AddReply(11548, 12743, 12742);
				break;
			}
			return;
		}
		if (f_e95_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e1f_a1_v(tv2);
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

	void f_9c3_a1_v(string a0)
	{
		if (!f_e95_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e1f_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e31_a0_v();
			if (a1 == 11563) {
				f_fb8_a2_v(tv1, tv0);
				f_fbe_a2_v(tv1, tv0);
				f_f31_a2_v(tv1, tv0);
			}
			if (a1 == 11566) {
				f_fb8_a2_v(tv1, tv0);
				f_fbe_a2_v(tv1, tv0);
				f_f31_a2_v(tv1, tv0);
			}
			if (a1 == 11569) {
				f_fb8_a2_v(tv1, tv0);
				f_fbe_a2_v(tv1, tv0);
				f_f31_a2_v(tv1, tv0);
			}
			if (a1 == 11570) {
				f_fb8_a2_v(tv1, tv0);
				f_fbe_a2_v(tv1, tv0);
				f_f31_a2_v(tv1, tv0);
			}
			if (a1 == 11571) {
				f_fb8_a2_v(tv1, tv0);
				f_fbe_a2_v(tv1, tv0);
				f_f31_a2_v(tv1, tv0);
			}
			if (a1 == 11599) {
				f_fe1_a2_v(tv1, tv0);
				f_fe7_a2_v(tv1, tv0);
			}
			if (a1 == 11600) {
				f_fe1_a2_v(tv1, tv0);
				f_fe7_a2_v(tv1, tv0);
			}
			if (a1 == 11601) {
				f_fe1_a2_v(tv1, tv0);
				f_fe7_a2_v(tv1, tv0);
			}
			if (a0 == 12720) {
				if (f_10bb_a1_b(tv1)) {
					f_1058_a2_v(tv1, tv0);
					f_9c3_a1_v("Neutral");
					tv0->SetMessage(11527);
					tv0->ClearReplies();
					tv0->AddReply(11528, 12722, 12721);
					if (f_105e_a1_b(tv1)) {
						tv0->AddReply(11537, 12731, 12730);
					}
					tv0->AddReply(11539, 11552, 12732);
					return;
				}
				if (f_105e_a1_b(tv1)) {
					f_9c3_a1_v("Neutral");
					tv0->SetMessage(10500);
					tv0->ClearReplies();
					tv0->AddReply(10501, 11584, 11583);
					tv0->AddReply(10509, -1, 11591);
					return;
				}
				if (f_10d3_a1_b(tv1) && f_10c7_a1_b(tv1) && f_10df_a1_b(tv1)) {
					f_9c3_a1_v("Neutral");
					tv0->SetMessage(10510);
					tv0->ClearReplies();
					tv0->AddReply(10511, 11594, 11593);
					tv0->AddReply(10521, 11594, 11604);
					return;
				}
				if (f_105e_a1_b(tv1)) {
					f_9c3_a1_v("Neutral");
					tv0->SetMessage(11547);
					tv0->ClearReplies();
					tv0->AddReply(11548, 12743, 12742);
					return;
				}
			}
			if (a0 == 12743) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(11549);
				tv0->ClearReplies();
				tv0->AddReply(11550, 12745, 12744);
				return;
			}
			if (a0 == 12745) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(11551);
				tv0->ClearReplies();
				tv0->AddReply(11552, 12747, 12746);
				return;
			}
			if (a0 == 12747) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(11553);
				tv0->ClearReplies();
				tv0->AddReply(11554, 12749, 12748);
				return;
			}
			if (a0 == 12749) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(11555);
				tv0->ClearReplies();
				tv0->AddReply(11556, -1, 12750);
				return;
			}
			if (a0 == 11594) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10512);
				tv0->ClearReplies();
				tv0->AddReply(10513, 11596, 11595);
				tv0->AddReply(10520, 11598, 11602);
				return;
			}
			if (a0 == 11596) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10514);
				tv0->ClearReplies();
				tv0->AddReply(10515, 11598, 11597);
				tv0->AddReply(10519, -1, 11601);
				return;
			}
			if (a0 == 11598) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10516);
				tv0->ClearReplies();
				tv0->AddReply(10517, -1, 11599);
				tv0->AddReply(10518, -1, 11600);
				return;
			}
			if (a0 == 11584) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10502);
				tv0->ClearReplies();
				tv0->AddReply(10503, -1, 11585);
				tv0->AddReply(10504, -1, 11586);
				tv0->AddReply(10505, 11588, 11587);
				return;
			}
			if (a0 == 11588) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10506);
				tv0->ClearReplies();
				tv0->AddReply(10507, -1, 11589);
				tv0->AddReply(10508, -1, 11590);
				return;
			}
			if (a0 == 11552) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10474);
				tv0->ClearReplies();
				tv0->AddReply(10495, 11554, 11574);
				tv0->AddReply(10496, 11577, 11576);
				return;
			}
			if (a0 == 11577) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10497);
				tv0->ClearReplies();
				tv0->AddReply(10498, 11554, 11578);
				tv0->AddReply(10499, 11554, 11580);
				return;
			}
			if (a0 == 12731) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(11538);
				tv0->ClearReplies();
				tv0->AddReply(11540, 12734, 12733);
				return;
			}
			if (a0 == 12734) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(11541);
				tv0->ClearReplies();
				tv0->AddReply(11542, 12736, 12735);
				return;
			}
			if (a0 == 12736) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(11543);
				tv0->ClearReplies();
				tv0->AddReply(11544, 12738, 12737);
				return;
			}
			if (a0 == 12738) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(11545);
				tv0->ClearReplies();
				tv0->AddReply(11546, 11560, 12739);
				return;
			}
			if (a0 == 12722) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(11529);
				tv0->ClearReplies();
				tv0->AddReply(11530, 11554, 12723);
				return;
			}
			if (a0 == 11554) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10476);
				tv0->ClearReplies();
				tv0->AddReply(10477, 11556, 11555);
				tv0->AddReply(10494, 11556, 11572);
				return;
			}
			if (a0 == 11556) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10478);
				tv0->ClearReplies();
				tv0->AddReply(10479, 11558, 11557);
				tv0->AddReply(10489, 11568, 11567);
				return;
			}
			if (a0 == 11568) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10490);
				tv0->ClearReplies();
				tv0->AddReply(10491, -1, 11569);
				tv0->AddReply(10492, -1, 11570);
				tv0->AddReply(10493, -1, 11571);
				return;
			}
			if (a0 == 11558) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10480);
				tv0->ClearReplies();
				tv0->AddReply(10481, 11560, 11559);
				tv0->AddReply(10486, 11565, 11564);
				return;
			}
			if (a0 == 11565) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10487);
				tv0->ClearReplies();
				tv0->AddReply(10488, -1, 11566);
				return;
			}
			if (a0 == 11560) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10482);
				tv0->ClearReplies();
				tv0->AddReply(10483, 11562, 11561);
				return;
			}
			if (a0 == 11562) {
				f_9c3_a1_v("Neutral");
				tv0->SetMessage(10484);
				tv0->ClearReplies();
				tv0->AddReply(10485, -1, 11563);
				return;
			}
			tv3 = true;
			if (f_e95_a0_b()) {
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
		if (!f_de3_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_e91_a0_i());
		L0->SetPhoto(f_e93_a0_s());
		L0->SetPlayerName(f_1166_a0_i());
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
		f_e1b_a1_v(a0);
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
			if (!f_10ea_a1_b(tv1)) {
				f_d52_a1_v("Neutral");
				tv0->SetMessage(12020);
				tv0->ClearReplies();
				tv0->AddReply(12021, 13240, 13239);
				break;
			}
			f_d52_a1_v("Neutral");
			tv0->SetMessage(13723);
			tv0->ClearReplies();
			tv0->AddReply(13724, -1, 14990);
			break;
			return;
		}
		if (f_e95_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_e1f_a1_v(tv2);
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

	void f_d52_a1_v(string a0)
	{
		if (!f_e95_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_e1f_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_e31_a0_v();
			if (a1 == 13243) {
				f_1041_a2_v(tv1, tv0);
				f_1047_a2_v(tv1, tv0);
				f_ee0_a2_v(tv1, tv0);
			}
			if (a0 == 13238) {
				if (!f_10ea_a1_b(tv1)) {
					f_d52_a1_v("Neutral");
					tv0->SetMessage(12020);
					tv0->ClearReplies();
					tv0->AddReply(12021, 13240, 13239);
					return;
				}
				f_d52_a1_v("Neutral");
				tv0->SetMessage(13723);
				tv0->ClearReplies();
				tv0->AddReply(13724, -1, 14990);
				return;
			}
			if (a0 == 13240) {
				f_d52_a1_v("Neutral");
				tv0->SetMessage(12022);
				tv0->ClearReplies();
				tv0->AddReply(12023, 13242, 13241);
				return;
			}
			if (a0 == 13242) {
				f_d52_a1_v("Neutral");
				tv0->SetMessage(12024);
				tv0->ClearReplies();
				tv0->AddReply(12025, -1, 13243);
				return;
			}
			tv3 = true;
			if (f_e95_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_dd2_a1_b(object a0)
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

bool f_dde_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_de3_a1_b(object a0)
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
	L5 = L3 * 70 + f_e38_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_e1b_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_e1f_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_e31_a0_v(void)
{
	if (f_e95_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_e38_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_e42_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_e47_a3_v(object a0, object a1, int a2)
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

void f_e54_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_e47_a3_v(a0, L0, a2);
}

bool f_e61_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_e68_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_e74_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_e79_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_e82_a1_b(int a0)
{
	return f_e79_a0_i() == a0;
}

bool f_e88_a0_b(void)
{
	bool L0;
	f_e1f_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_e91_a0_i(void)
{
	return 2876;
}

string f_e93_a0_s(void)
{
	return "ui/NPC_Rubin.png";
}

bool f_e95_a0_b(void)
{
	return true;
}

void f_e97_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	@SetVariable("d1q01", 1000);
	L0 = f_1134_a0_o();
	L0->FindMark(L1, "d1q01EvaAboutMark");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01EvaGotoSimon");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01GrifAboutRubin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01MarkAboutJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01MarkAboutLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01NotkinAboutRubin");
	if (L1) {
		L1->Remove();
	}
	f_1177_a0_v();
	f_1123_a1_b(31);
	f_1123_a1_b(32);
	f_1123_a1_b(33);
	f_1123_a1_b(34);
}

void f_ee0_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_ee6_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q01", 1);
	L0 = f_1134_a0_o();
	L0->AddMark("d3q01RubinGotoAlexandr", "pt_map_alexandr", 1, 11151, f_e74_a0_f());
	L0->AddMark("d3q01RubinGotoAlexandrSelf", "pt_map_rubin", 1, 15294, f_e74_a0_f());
	f_1187_a0_v();
	f_1197_a0_v();
}

void f_f09_a2_v(object a0, object a1)
{
	@SetVariable("ood3Rubin1", 1);
}

void f_f0f_a2_v(object a0, object a1)
{
	@SetVariable("ood3Rubin2", 1);
}

void f_f15_a2_v(object a0, object a1)
{
	@SetVariable("ood3Rubin3", 1);
}

void f_f1b_a2_v(object a0, object a1)
{
	@SetVariable("ood3Rubin4", 1);
}

void f_f21_a2_v(object a0, object a1)
{
	f_1145_a3_v(f_1134_a0_o(), "pt_map_alexandr", 2);
	a1->ShowMap(f_1134_a0_o());
}

void f_f31_a2_v(object a0, object a1)
{
	f_1145_a3_v(f_1134_a0_o(), "pt_map_bigvlad", 2);
	a1->ShowMap(f_1134_a0_o());
}

void f_f41_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_1134_a0_o();
	L0->FindMark(L1, "d3q01AlexandrGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01AlexandrGotoOspinaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01BigVladAgreed");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01BigVladAgreedSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01BigVladGotoGeorg");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01BigVladGotoGeorgSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01GeorgAgreed");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01GeorgAgreedSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01OspinaButchersWillHelpSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01OspinaGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01OspinaGotoBigVladSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01RubinGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01RubinGotoAlexandrSelf");
	if (L1) {
		L1->Remove();
	}
	f_11a7_a0_v();
	f_e68_a2_b("quest_d3_01", "completed");
}

void f_fac_a2_v(object a0, object a1)
{
	@SetVariable("d3RubinToldWhereIsSimon", 1);
}

void f_fb2_a2_v(object a0, object a1)
{
	@SetVariable("KnowRubin", 1);
}

void f_fb8_a2_v(object a0, object a1)
{
	@SetVariable("ood5Rubin1", 1);
}

void f_fbe_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d5q01", 1);
	L0 = f_1134_a0_o();
	L0->AddMark("d5q01RubinGotoBigVlad", "pt_map_bigvlad", 1, 11956, f_e74_a0_f());
	L0->AddMark("d5q01RubinGotoBigVladSelf", "pt_map_rubin", 1, 15348, f_e74_a0_f());
	f_11b7_a0_v();
	f_11c7_a0_v();
}

void f_fe1_a2_v(object a0, object a1)
{
	@SetVariable("ood5Rubin2", 1);
}

void f_fe7_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1134_a0_o();
	L0->FindMark(L1, "d5q01AlexandrGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01BigVladGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01BurahMeeting1");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01BurahMeeting2");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01GrifWantsMoney");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01GrifWillHelp");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01KaterinaGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01PatrolGotoGrif");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01RubinGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01RubinGotoBigVladSelf");
	if (L1) {
		L1->Remove();
	}
	f_11d7_a0_v();
	a0->RemoveItemByType(L2, "d5q01_heart", 1);
	f_e68_a2_b("quest_d5_01", "completed");
}

void f_1041_a2_v(object a0, object a1)
{
	@SetVariable("d6RubinGoesToGeorg", 1);
}

void f_1047_a2_v(object a0, object a1)
{
	@Trace("whitevaccine is given");
	f_e54_a3_v(a0, "white_vaccine", 1);
}

void f_1052_a2_v(object a0, object a1)
{
	@SetVariable("d3RubinVisit", 1);
}

void f_1058_a2_v(object a0, object a1)
{
	@SetVariable("d5RubinVisit", 1);
}

bool f_105e_a1_b(object a0)
{
	if (f_10f6_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1068_a1_b(object a0)
{
	if (f_e42_a1_i("d3q01") == 0) {
		return true;
	}
	return false;
}

bool f_1074_a1_b(object a0)
{
	if (f_e42_a1_i("ood3Rubin1") == 0) {
		return true;
	}
	return false;
}

bool f_1080_a1_b(object a0)
{
	if (f_e42_a1_i("ood3Rubin2") == 0) {
		return true;
	}
	return false;
}

bool f_108c_a1_b(object a0)
{
	if (f_e42_a1_i("ood3Rubin3") == 0) {
		return true;
	}
	return false;
}

bool f_1098_a1_b(object a0)
{
	if (f_e42_a1_i("ood3Rubin4") == 0) {
		return true;
	}
	return false;
}

bool f_10a4_a1_b(object a0)
{
	if (f_e42_a1_i("d3q01") == 1000) {
		return true;
	}
	return false;
}

bool f_10b0_a1_b(object a0)
{
	if (f_e61_a2_b(a0, "d3q01_blood")) {
		return true;
	}
	return false;
}

bool f_10bb_a1_b(object a0)
{
	if (f_e42_a1_i("ood5Rubin1") == 0) {
		return true;
	}
	return false;
}

bool f_10c7_a1_b(object a0)
{
	if (f_e42_a1_i("d5q01") == 7) {
		return true;
	}
	return false;
}

bool f_10d3_a1_b(object a0)
{
	if (f_e42_a1_i("ood5Rubin2") == 0) {
		return true;
	}
	return false;
}

bool f_10df_a1_b(object a0)
{
	if (f_e61_a2_b(a0, "d5q01_heart")) {
		return true;
	}
	return false;
}

bool f_10ea_a1_b(object a0)
{
	if (f_e42_a1_i("d6RubinGoesToGeorg") != 0) {
		return true;
	}
	return false;
}

bool f_10f6_a1_b(object a0)
{
	return false;
}

object f_10f9_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1106_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_10f9_a0_o();
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

bool f_1123_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_10f9_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

object f_1134_a0_o(void)
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

void f_1145_a3_v(object a0, string a1, float a2)
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

int f_1166_a0_i(void)
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

void f_1177_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 49, 1, 12131);
	f_1106_a2_b(L0, 2);
}

void f_1187_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 25, 1, 3365);
	f_1106_a2_b(L0, -1);
}

void f_1197_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 68, 1, 12150);
	f_1106_a2_b(L0, 25);
}

void f_11a7_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 74, 1, 12156);
	f_1106_a2_b(L0, 25);
}

void f_11b7_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 139, 1, 15339);
	f_1106_a2_b(L0, -1);
}

void f_11c7_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 140, 1, 15340);
	f_1106_a2_b(L0, 139);
}

void f_11d7_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 147, 1, 15347);
	f_1106_a2_b(L0, 139);
}

void f_11e7_a0_v(void)
{
	g1 = false;
}

void f_11eb_a1_v(object a0)
{
	if (!g1) {
	}
	if (f_e82_a1_b(1)) {
		if (f_e42_a1_i("d1q01") != 1000) {
			t2{a0};
			return;
		}
	}
	if (f_e82_a1_b(3)) {
		t4{a0};
		return;
	}
	if (f_e82_a1_b(5)) {
		t6{a0};
		return;
	}
	if (f_e82_a1_b(6)) {
		t8{a0};
		return;
	}
	f_e88_a0_b();
}

