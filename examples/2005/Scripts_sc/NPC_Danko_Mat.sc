event OnLoad 5;
event evt_11 11;
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
		} while (!f_9a2_a0_b());
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
		f_9fc_a1_b(f_aa9_a0_o());
		if (!f_9a7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b43_a0_i());
		L0->SetNPCDescription(f_b41_a0_i());
		L0->SetPhoto(f_b45_a0_s());
		L0->SetPhoto2(f_b47_a0_s());
		L0->SetPlayerName(f_d77_a0_i());
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
		f_9eb_a1_v(a0);
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
		if (f_b49_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a86_a1_v(tv2);
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
		if (!f_b49_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a8d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_aa2_a0_v();
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
			if (f_b49_a0_b()) {
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
		f_9fc_a1_b(f_aa9_a0_o());
		if (!f_9a7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b43_a0_i());
		L0->SetNPCDescription(f_b41_a0_i());
		L0->SetPhoto(f_b45_a0_s());
		L0->SetPhoto2(f_b47_a0_s());
		L0->SetPlayerName(f_d77_a0_i());
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
		f_9eb_a1_v(a0);
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
			if (f_c35_a1_b(tv1) && f_c41_a1_b(tv1)) {
				f_b88_a2_v(tv1, tv0);
				f_bef_a2_v(tv1, tv0);
				f_243_a1_v("Neutral");
				tv0->SetMessage(513496);
				tv0->ClearReplies();
				tv0->AddReply(513504, 14773, 14746);
				tv0->AddReply(513505, 14748, 14747);
				break;
			}
			f_bef_a2_v(tv1, tv0);
			f_243_a1_v("Neutral");
			tv0->SetMessage(512350);
			tv0->ClearReplies();
			if (f_c4d_a1_b(tv1) && f_c59_a1_b(tv1) && f_c64_a1_b(tv1)) {
				tv0->AddReply(513563, 14813, 14812);
			}
			if (f_c70_a1_b(tv1)) {
				tv0->AddReply(512352, 13512, 13511);
			}
			if (f_c7c_a1_b(tv1) && f_c29_a1_b(tv1)) {
				tv0->AddReply(512366, 13527, 13526);
			}
			if (f_c88_a1_b(tv1)) {
				tv0->AddReply(512357, 13518, 13517);
			}
			if (f_c94_a1_b(tv1) && f_cac_a1_b(tv1)) {
				tv0->AddReply(513752, 14997, 14996);
			}
			if (f_ca0_a1_b(tv1) && f_cb8_a1_b(tv1)) {
				tv0->AddReply(513568, 14818, 14817);
			}
			if (f_cd0_a1_b(tv1) && f_c1d_a1_b(tv1)) {
				tv0->AddReply(513766, 15006, 15005);
			}
			tv0->AddReply(512351, -1, 13510);
			break;
			return;
		}
		if (f_b49_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a86_a1_v(tv2);
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

	void f_243_a1_v(string a0)
	{
		if (!f_b49_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a8d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_aa2_a0_v();
			if (a1 == 14805) {
				f_b8e_a2_v(tv1, tv0);
			}
			if (a1 == 14811) {
				f_b97_a2_v(tv1, tv0);
				f_c0d_a2_v(tv1, tv0);
			}
			if (a1 == 14812) {
				f_bb3_a2_v(tv1, tv0);
			}
			if (a1 == 14816) {
				f_bb9_a2_v(tv1, tv0);
				f_b65_a2_v(tv1, tv0);
				f_b7b_a2_v(tv1, tv0);
				f_b6b_a2_v(tv1, tv0);
			}
			if (a1 == 13511) {
				f_bd1_a2_v(tv1, tv0);
			}
			if (a1 == 13526) {
				f_bd7_a2_v(tv1, tv0);
			}
			if (a1 == 13517) {
				f_bdd_a2_v(tv1, tv0);
			}
			if (a1 == 14996) {
				f_be3_a2_v(tv1, tv0);
				f_b4b_a2_v(tv1, tv0);
			}
			if (a1 == 15004) {
				f_bb9_a2_v(tv1, tv0);
			}
			if (a1 == 14817) {
				f_be9_a2_v(tv1, tv0);
				f_b4b_a2_v(tv1, tv0);
			}
			if (a1 == 15002) {
				f_bb9_a2_v(tv1, tv0);
				f_b6b_a2_v(tv1, tv0);
			}
			if (a1 == 15007) {
				f_c07_a2_v(tv1, tv0);
				f_b7b_a2_v(tv1, tv0);
				f_bf5_a2_v(tv1, tv0);
				f_b81_a2_v(tv1, tv0);
			}
			if (a1 == 37663) {
				f_bfe_a2_v(tv1, tv0);
			}
			if (a1 == 37664) {
				f_bfe_a2_v(tv1, tv0);
			}
			if (a0 == 14737) {
				if (f_c35_a1_b(tv1) && f_c41_a1_b(tv1)) {
					f_b88_a2_v(tv1, tv0);
					f_bef_a2_v(tv1, tv0);
					f_243_a1_v("Neutral");
					tv0->SetMessage(513496);
					tv0->ClearReplies();
					tv0->AddReply(513504, 14773, 14746);
					tv0->AddReply(513505, 14748, 14747);
					return;
				}
				f_bef_a2_v(tv1, tv0);
				f_243_a1_v("Neutral");
				tv0->SetMessage(512350);
				tv0->ClearReplies();
				if (f_c4d_a1_b(tv1) && f_c59_a1_b(tv1) && f_c64_a1_b(tv1)) {
					tv0->AddReply(513563, 14813, 14812);
				}
				if (f_c70_a1_b(tv1)) {
					tv0->AddReply(512352, 13512, 13511);
				}
				if (f_c7c_a1_b(tv1) && f_c29_a1_b(tv1)) {
					tv0->AddReply(512366, 13527, 13526);
				}
				if (f_c88_a1_b(tv1)) {
					tv0->AddReply(512357, 13518, 13517);
				}
				if (f_c94_a1_b(tv1) && f_cac_a1_b(tv1)) {
					tv0->AddReply(513752, 14997, 14996);
				}
				if (f_ca0_a1_b(tv1) && f_cb8_a1_b(tv1)) {
					tv0->AddReply(513568, 14818, 14817);
				}
				if (f_cd0_a1_b(tv1) && f_c1d_a1_b(tv1)) {
					tv0->AddReply(513766, 15006, 15005);
				}
				tv0->AddReply(512351, -1, 13510);
				return;
			}
			if (a0 == 15006) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513767);
				tv0->ClearReplies();
				tv0->AddReply(535938, 37660, 37659);
				tv0->AddReply(535937, 37662, 37658);
				return;
			}
			if (a0 == 37662) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(535941);
				tv0->ClearReplies();
				tv0->AddReply(535942, -1, 37663);
				tv0->AddReply(535943, -1, 37664);
				return;
			}
			if (a0 == 37660) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(535939);
				tv0->ClearReplies();
				tv0->AddReply(513768, -1, 15007);
				return;
			}
			if (a0 == 14818) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513569);
				tv0->ClearReplies();
				tv0->AddReply(513570, 14820, 14819);
				return;
			}
			if (a0 == 14820) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513571);
				tv0->ClearReplies();
				tv0->AddReply(513572, 15001, 14821);
				tv0->AddReply(535934, 37654, 37653);
				return;
			}
			if (a0 == 37654) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(535935);
				tv0->ClearReplies();
				tv0->AddReply(535936, 15001, 37655);
				return;
			}
			if (a0 == 15001) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513757);
				tv0->ClearReplies();
				tv0->AddReply(513758, -1, 15002);
				return;
			}
			if (a0 == 14997) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513753);
				tv0->ClearReplies();
				tv0->AddReply(513754, 14999, 14998);
				return;
			}
			if (a0 == 14999) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513755);
				tv0->ClearReplies();
				tv0->AddReply(513756, 15003, 15000);
				tv0->AddReply(535931, 37650, 37649);
				return;
			}
			if (a0 == 37650) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(535932);
				tv0->ClearReplies();
				tv0->AddReply(535933, 15003, 37651);
				return;
			}
			if (a0 == 15003) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513759);
				tv0->ClearReplies();
				tv0->AddReply(513760, -1, 15004);
				return;
			}
			if (a0 == 13518) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(512358);
				tv0->ClearReplies();
				tv0->AddReply(512359, 13520, 13519);
				tv0->AddReply(513497, 14739, 14738);
				return;
			}
			if (a0 == 14739) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513498);
				tv0->ClearReplies();
				tv0->AddReply(513499, 14741, 14740);
				return;
			}
			if (a0 == 14741) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513500);
				tv0->ClearReplies();
				tv0->AddReply(513501, 14743, 14742);
				return;
			}
			if (a0 == 14743) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513502);
				tv0->ClearReplies();
				tv0->AddReply(513503, 13524, 14744);
				return;
			}
			if (a0 == 13520) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(512360);
				tv0->ClearReplies();
				tv0->AddReply(512361, 13522, 13521);
				return;
			}
			if (a0 == 13522) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(512362);
				tv0->ClearReplies();
				tv0->AddReply(512363, 13524, 13523);
				return;
			}
			if (a0 == 13524) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(512364);
				tv0->ClearReplies();
				tv0->AddReply(512365, -1, 13525);
				return;
			}
			if (a0 == 13527) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(512367);
				tv0->ClearReplies();
				tv0->AddReply(512368, 13529, 13528);
				tv0->AddReply(535986, 37715, 37714);
				return;
			}
			if (a0 == 37715) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(535987);
				tv0->ClearReplies();
				tv0->AddReply(535988, 37717, 37716);
				return;
			}
			if (a0 == 37717) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(535989);
				tv0->ClearReplies();
				tv0->AddReply(535990, 13531, 37718);
				return;
			}
			if (a0 == 13529) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(512369);
				tv0->ClearReplies();
				tv0->AddReply(512370, 13531, 13530);
				tv0->AddReply(535930, -1, 37648);
				return;
			}
			if (a0 == 13531) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(512371);
				tv0->ClearReplies();
				tv0->AddReply(512372, -1, 13532);
				return;
			}
			if (a0 == 13512) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(512353);
				tv0->ClearReplies();
				tv0->AddReply(513529, 14775, 14774);
				return;
			}
			if (a0 == 14775) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513530);
				tv0->ClearReplies();
				tv0->AddReply(513531, 14777, 14776);
				return;
			}
			if (a0 == 14777) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513532);
				tv0->ClearReplies();
				tv0->AddReply(513533, 14779, 14778);
				tv0->AddReply(513536, 14782, 14781);
				return;
			}
			if (a0 == 14782) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513537);
				tv0->ClearReplies();
				tv0->AddReply(513538, 14784, 14783);
				return;
			}
			if (a0 == 14784) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513539);
				tv0->ClearReplies();
				tv0->AddReply(513540, 14786, 14785);
				return;
			}
			if (a0 == 14786) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513541);
				tv0->ClearReplies();
				tv0->AddReply(513542, -1, 14787);
				return;
			}
			if (a0 == 14779) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513534);
				tv0->ClearReplies();
				tv0->AddReply(513535, 14788, 14780);
				return;
			}
			if (a0 == 14788) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513543);
				tv0->ClearReplies();
				tv0->AddReply(513544, 14790, 14789);
				return;
			}
			if (a0 == 14790) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513545);
				tv0->ClearReplies();
				tv0->AddReply(513546, -1, 14791);
				return;
			}
			if (a0 == 14813) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513564);
				tv0->ClearReplies();
				tv0->AddReply(513565, 14815, 14814);
				return;
			}
			if (a0 == 14815) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513566);
				tv0->ClearReplies();
				tv0->AddReply(513567, -1, 14816);
				return;
			}
			if (a0 == 14748) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513506);
				tv0->ClearReplies();
				tv0->AddReply(513507, 14750, 14749);
				tv0->AddReply(513513, 14756, 14755);
				return;
			}
			if (a0 == 14756) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513514);
				tv0->ClearReplies();
				tv0->AddReply(513515, 14758, 14757);
				tv0->AddReply(513517, 14760, 14759);
				return;
			}
			if (a0 == 14760) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513518);
				tv0->ClearReplies();
				tv0->AddReply(513520, 14750, 14763);
				return;
			}
			if (a0 == 14758) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513516);
				tv0->ClearReplies();
				tv0->AddReply(513519, 14750, 14761);
				return;
			}
			if (a0 == 14750) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513508);
				tv0->ClearReplies();
				tv0->AddReply(513521, 14766, 14765);
				tv0->AddReply(513509, 14752, 14751);
				return;
			}
			if (a0 == 14752) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513510);
				tv0->ClearReplies();
				tv0->AddReply(513511, 14754, 14753);
				return;
			}
			if (a0 == 14754) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513512);
				tv0->ClearReplies();
				tv0->AddReply(513547, 14773, 14792);
				return;
			}
			if (a0 == 14766) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513522);
				tv0->ClearReplies();
				tv0->AddReply(513523, 14769, 14767);
				if (f_cc4_a1_b(tv1)) {
					tv0->AddReply(513524, 14769, 14768);
				}
				return;
			}
			if (a0 == 14769) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513525);
				tv0->ClearReplies();
				tv0->AddReply(513526, 14773, 14770);
				tv0->AddReply(513527, -1, 14772);
				return;
			}
			if (a0 == 14773) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513528);
				tv0->ClearReplies();
				tv0->AddReply(513548, 14796, 14795);
				return;
			}
			if (a0 == 14796) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513549);
				tv0->ClearReplies();
				tv0->AddReply(513550, 14800, 14797);
				tv0->AddReply(513551, 14799, 14798);
				return;
			}
			if (a0 == 14799) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513552);
				tv0->ClearReplies();
				tv0->AddReply(513554, 14800, 14801);
				return;
			}
			if (a0 == 14800) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513553);
				tv0->ClearReplies();
				tv0->AddReply(513556, -1, 14805);
				tv0->AddReply(513557, 14807, 14806);
				return;
			}
			if (a0 == 14807) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513558);
				tv0->ClearReplies();
				tv0->AddReply(513559, 14810, 14808);
				tv0->AddReply(513560, -1, 14809);
				return;
			}
			if (a0 == 14810) {
				f_243_a1_v("Neutral");
				tv0->SetMessage(513561);
				tv0->ClearReplies();
				tv0->AddReply(513562, -1, 14811);
				return;
			}
			tv3 = true;
			if (f_b49_a0_b()) {
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
		f_9fc_a1_b(f_aa9_a0_o());
		if (!f_9a7_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_b43_a0_i());
		L0->SetNPCDescription(f_b41_a0_i());
		L0->SetPhoto(f_b45_a0_s());
		L0->SetPhoto2(f_b47_a0_s());
		L0->SetPlayerName(f_d77_a0_i());
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
		f_9eb_a1_v(a0);
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
			f_81f_a1_v("Neutral");
			tv0->SetMessage(540548);
			tv0->ClearReplies();
			tv0->AddReply(540549, -1, 42558);
			tv0->AddReply(540797, -1, 42846);
			break;
			return;
		}
		if (f_b49_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_a86_a1_v(tv2);
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

	void f_81f_a1_v(string a0)
	{
		if (!f_b49_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_a8d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_aa2_a0_v();
			if (a0 == 42557) {
				f_81f_a1_v("Neutral");
				tv0->SetMessage(540548);
				tv0->ClearReplies();
				tv0->AddReply(540549, -1, 42558);
				tv0->AddReply(540797, -1, 42846);
				return;
			}
			tv3 = true;
			if (f_b49_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t7
{
	var Vector tv0;

	void init(void)
	{
		f_863_a0_v();
	}

	void f_863_a0_v(void)
	{
		if (!f_9a2_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_919_a0_v();
		}
	}

	bool f_877_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_999_a1_b(L0);
	}

	void f_886_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_88b_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_965_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_8a1_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_8aa_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_8aa_a0_v();
			if (f_9a2_a0_b() && f_88b_a0_b()) {
				if (f_877_a0_b()) {
					f_a36_a1_b(f_aa9_a0_o());
				}
			} else {
				f_886_a0_v();
				f_8a1_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_960_a0_v();
		f_8aa_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_8aa_a0_v();
		f_a86_a1_v("Neutral");
		f_8a1_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_8a1_a0_v();
		} else {
			f_a86_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_960_a0_v();
			f_999_a1_b(a0);
			enable OnUse;
			f_d88_a1_v(a0);
			f_a86_a1_v("Neutral");
			f_8aa_a0_v();
			f_8a1_a0_v();
		}
	}
}

void f_919_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_9a2_a0_b()) {
		return;
	}
	L0 = f_b30_a0_i();
	for (L1 = 0; L1 < 5 && f_9a2_a0_b(); L1++) {
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
			@PlayAnimation("all", f_b29_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_95e_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_95e_a0_b(void)
{
	return true;
}

void f_960_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_965_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_96d_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_979_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_96d_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_ab9_a3_f(L0 + a2, a3, a4));
	return true;
}

bool f_98f_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_999_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_98f_a1_b(L0);
}

bool f_9a2_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_9a7_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_aaf_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_b49_a0_b()) {
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

void f_9eb_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_b49_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_9fc_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_a36_a1_b(a0)) {
			if (!f_a5b_a1_b(a0)) {
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
		if (!f_a5b_a1_b(a0)) {
			if (!f_a36_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_a36_a1_b(object a0)
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
	return f_a93_a1_b(L4);
}

bool f_a5b_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_b1a_a0_i() + "m";
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
	return f_a93_a1_b(L4);
}

void f_a86_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_a8d_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_a93_a1_b(string a0)
{
	if (f_b49_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_aa2_a0_v(void)
{
	if (f_b49_a0_b()) {
		@lshStopSpeech();
	}
}

object f_aa9_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_aaf_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_ab9_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_ac4_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_ac9_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_ad0_a2_b(object a0, float a1)
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
	f_af3_a1_v(a1);
	f_979_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_af3_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_afd_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

bool f_b09_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

float f_b15_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_b1a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_b23_a1_b(int a0)
{
	return f_b1a_a0_i() == a0;
}

string f_b29_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_b30_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_b29_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_b41_a0_i(void)
{
	return 515545;
}

int f_b43_a0_i(void)
{
	return 502870;
}

string f_b45_a0_s(void)
{
	return "ui/NPC_Mat.png";
}

string f_b47_a0_s(void)
{
	return "ui/NPC_Mat_b.png";
}

bool f_b49_a0_b(void)
{
	return true;
}

void f_b4b_a2_v(object a0, object a1)
{
	int L0;
	@GetVariable("d8q01MladVladIsVictim", L0);
	if (L0 != 0) {
		f_b09_a3_b("volonteers_danko", "kill", "mladvlad");
	}
	@GetVariable("d8q01BigVladIsVictim", L0);
	if (L0 != 0) {
		f_b09_a3_b("volonteers_danko", "kill", "bigvlad");
	}
}

void f_b65_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "toy_horse", 1);
}

void f_b6b_a2_v(object a0, object a1)
{
	f_d56_a3_v(f_d45_a0_o(), "pt_map_boiny_main_entrance", 2);
	a1->ShowMap(f_d45_a0_o());
}

void f_b7b_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_b81_a2_v(object a0, object a1)
{
	f_ad0_a2_b(a0, 0.10000000149011612);
}

void f_b88_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat1", 1);
}

void f_b8e_a2_v(object a0, object a1)
{
	@SetVariable("d8q01BringBadBoy", 1);
	f_cdb_a0_v();
}

void f_b97_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d8q01MatBringToy", 1);
	L0 = f_d45_a0_o();
	L0->AddMark("d8q01MatGotoToyHouse", "pt_map_d8q01_toyhouse", 1, 515444, f_b15_a0_f());
	f_ce8_a0_v();
	f_afd_a2_b("quest_d8_01", "place_toy");
}

void f_bb3_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat2", 1);
}

void f_bb9_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_d45_a0_o();
	L0->AddMark("d8q01MatGotoBoiny", "pt_map_boiny_main_entrance", 1, 515324, f_b15_a0_f());
	f_cf5_a0_v();
	f_afd_a2_b("quest_d8_01", "unlock_boiny");
}

void f_bd1_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat3", 1);
}

void f_bd7_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat4", 1);
}

void f_bdd_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat5", 1);
}

void f_be3_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat6", 1);
}

void f_be9_a2_v(object a0, object a1)
{
	@SetVariable("ood8Mat7", 1);
}

void f_bef_a2_v(object a0, object a1)
{
	@SetVariable("d8TalkToMat", 1);
}

void f_bf5_a2_v(object a0, object a1)
{
	@SetVariable("d8q02", 1000);
	f_d02_a0_v();
}

void f_bfe_a2_v(object a0, object a1)
{
	@SetVariable("d8q02", -1);
	f_d0f_a0_v();
}

void f_c07_a2_v(object a0, object a1)
{
	int L0;
	a0->RemoveItemByType(L0, "feromicin", 1);
}

void f_c0d_a2_v(object a0, object a1)
{
	f_d56_a3_v(f_d45_a0_o(), "pt_map_d8q01_toyhouse", 2);
	a1->ShowMap(f_d45_a0_o());
}

bool f_c1d_a1_b(object a0)
{
	if (f_ac4_a1_i("d8q02") == 2) {
		return true;
	}
	return false;
}

bool f_c29_a1_b(object a0)
{
	if (f_ac4_a1_i("d8q04") == 1) {
		return true;
	}
	return false;
}

bool f_c35_a1_b(object a0)
{
	if (f_ac4_a1_i("d8q01") == 1) {
		return true;
	}
	return false;
}

bool f_c41_a1_b(object a0)
{
	if (f_ac4_a1_i("ood8Mat1") == 0) {
		return true;
	}
	return false;
}

bool f_c4d_a1_b(object a0)
{
	if (f_ac4_a1_i("d8q01MatBringToy") == 1) {
		return true;
	}
	return false;
}

bool f_c59_a1_b(object a0)
{
	if (f_ac9_a2_b(a0, "toy_horse")) {
		return true;
	}
	return false;
}

bool f_c64_a1_b(object a0)
{
	if (f_ac4_a1_i("ood8Mat2") == 0) {
		return true;
	}
	return false;
}

bool f_c70_a1_b(object a0)
{
	if (f_ac4_a1_i("ood8Mat3") == 0) {
		return true;
	}
	return false;
}

bool f_c7c_a1_b(object a0)
{
	if (f_ac4_a1_i("ood8Mat4") == 0) {
		return true;
	}
	return false;
}

bool f_c88_a1_b(object a0)
{
	if (f_ac4_a1_i("ood8Mat5") == 0) {
		return true;
	}
	return false;
}

bool f_c94_a1_b(object a0)
{
	if (f_ac4_a1_i("d8q01BigVladIsVictim") == 1) {
		return true;
	}
	return false;
}

bool f_ca0_a1_b(object a0)
{
	if (f_ac4_a1_i("d8q01MladVladIsVictim") == 1) {
		return true;
	}
	return false;
}

bool f_cac_a1_b(object a0)
{
	if (f_ac4_a1_i("ood8Mat6") == 0) {
		return true;
	}
	return false;
}

bool f_cb8_a1_b(object a0)
{
	if (f_ac4_a1_i("ood8Mat7") == 0) {
		return true;
	}
	return false;
}

bool f_cc4_a1_b(object a0)
{
	if (f_ac4_a1_i("d8q02") == 1) {
		return true;
	}
	return false;
}

bool f_cd0_a1_b(object a0)
{
	if (f_ac9_a2_b(a0, "feromicin")) {
		return true;
	}
	return false;
}

void f_cdb_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 179, 1, 515441);
	f_d29_a2_b(L0, 175);
}

void f_ce8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 180, 1, 515442);
	f_d29_a2_b(L0, 175);
}

void f_cf5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 181, 1, 515443);
	f_d29_a2_b(L0, 175);
}

void f_d02_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 128, 2, 513773);
	f_d29_a2_b(L0, 127);
}

void f_d0f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 129, 2, 513774);
	f_d29_a2_b(L0, 127);
}

object f_d1c_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_d29_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_d1c_a0_o();
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

object f_d45_a0_o(void)
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

void f_d56_a3_v(object a0, string a1, float a2)
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

int f_d77_a0_i(void)
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

void f_d88_a1_v(object a0)
{
	if (f_b23_a1_b(8)) {
		t3{a0};
		return;
	}
	if (f_b23_a1_b(12)) {
		t1{a0};
		return;
	}
	t5{a0};
}

