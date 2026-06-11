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
		f_16ed_a0_v();
		if (!f_1257_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_1298_a1_v("Neutral");
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
		f_16f1_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_124b_a1_b(a0);
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
		if (!f_125c_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1303_a0_i());
		L0->SetPhoto(f_1305_a0_s());
		L0->SetPlayerName(f_168c_a0_i());
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
		f_1294_a1_v(a0);
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
			f_14a5_a2_v(tv1, tv0);
			f_b4_a1_v("Neutral");
			tv0->SetMessage(309);
			tv0->ClearReplies();
			tv0->AddReply(311, 370, 364);
			tv0->AddReply(312, 366, 365);
			tv0->AddReply(310, 369, 363);
			break;
			return;
		}
		if (f_1307_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1298_a1_v(tv2);
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
		if (!f_1307_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1298_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_12aa_a0_v();
			if (a0 == 362) {
				f_14a5_a2_v(tv1, tv0);
				f_b4_a1_v("Neutral");
				tv0->SetMessage(309);
				tv0->ClearReplies();
				tv0->AddReply(311, 370, 364);
				tv0->AddReply(312, 366, 365);
				tv0->AddReply(310, 369, 363);
				return;
			}
			if (a0 == 369) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(316);
				tv0->ClearReplies();
				tv0->AddReply(6268, -1, 6938);
				return;
			}
			if (a0 == 366) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(313);
				tv0->ClearReplies();
				tv0->AddReply(314, 370, 367);
				tv0->AddReply(315, 370, 368);
				return;
			}
			if (a0 == 370) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(317);
				tv0->ClearReplies();
				tv0->AddReply(319, 374, 372);
				tv0->AddReply(318, 374, 371);
				return;
			}
			if (a0 == 374) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(320);
				tv0->ClearReplies();
				tv0->AddReply(322, -1, 376);
				tv0->AddReply(323, -1, 377);
				return;
			}
			tv3 = true;
			if (f_1307_a0_b()) {
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
		if (!f_125c_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1303_a0_i());
		L0->SetPhoto(f_1305_a0_s());
		L0->SetPlayerName(f_168c_a0_i());
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
		f_1294_a1_v(a0);
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
			f_1fd_a1_v("Neutral");
			tv0->SetMessage(12729);
			tv0->ClearReplies();
			if (f_158f_a1_b(tv1) && f_1583_a1_b(tv1)) {
				tv0->AddReply(12731, 3851, 13924);
			}
			if (f_159b_a1_b(tv1) && f_15cb_a1_b(tv1) && !f_15d7_a1_b(tv1) && !f_15e3_a1_b(tv1)) {
				tv0->AddReply(12730, 11927, 13923);
			}
			tv0->AddReply(12732, -1, 13926);
			break;
			return;
		}
		if (f_1307_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1298_a1_v(tv2);
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

	void f_1fd_a1_v(string a0)
	{
		if (!f_1307_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1298_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_12aa_a0_v();
			if (a1 == 3869) {
				f_13e2_a2_v(tv1, tv0);
				f_1411_a2_v(tv1, tv0);
				f_1403_a2_v(tv1, tv0);
			}
			if (a1 == 3872) {
				f_13e2_a2_v(tv1, tv0);
				f_1411_a2_v(tv1, tv0);
				f_1403_a2_v(tv1, tv0);
			}
			if (a1 == 3870) {
				f_13e2_a2_v(tv1, tv0);
				f_1403_a2_v(tv1, tv0);
				f_1411_a2_v(tv1, tv0);
			}
			if (a1 == 3860) {
				f_13e2_a2_v(tv1, tv0);
				f_1411_a2_v(tv1, tv0);
				f_1403_a2_v(tv1, tv0);
			}
			if (a1 == 3856) {
				f_13e2_a2_v(tv1, tv0);
			}
			if (a1 == 3857) {
				f_13e2_a2_v(tv1, tv0);
				f_1403_a2_v(tv1, tv0);
				f_1411_a2_v(tv1, tv0);
			}
			if (a1 == 13923) {
				f_13e8_a2_v(tv1, tv0);
			}
			if (a1 == 11938) {
				f_1417_a2_v(tv1, tv0);
			}
			if (a1 == 11939) {
				f_1417_a2_v(tv1, tv0);
			}
			if (a0 == 13922) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(12729);
				tv0->ClearReplies();
				if (f_158f_a1_b(tv1) && f_1583_a1_b(tv1)) {
					tv0->AddReply(12731, 3851, 13924);
				}
				if (f_159b_a1_b(tv1) && f_15cb_a1_b(tv1) && !f_15d7_a1_b(tv1) && !f_15e3_a1_b(tv1)) {
					tv0->AddReply(12730, 11927, 13923);
				}
				tv0->AddReply(12732, -1, 13926);
				return;
			}
			if (a0 == 11927) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(10791);
				tv0->ClearReplies();
				tv0->AddReply(10792, 11929, 11928);
				tv0->AddReply(10810, 11929, 11950);
				return;
			}
			if (a0 == 11929) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(10793);
				tv0->ClearReplies();
				tv0->AddReply(10794, 11931, 11930);
				tv0->AddReply(10808, 11931, 11946);
				tv0->AddReply(10809, 11931, 11948);
				return;
			}
			if (a0 == 11931) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(10795);
				tv0->ClearReplies();
				tv0->AddReply(10796, 11933, 11932);
				tv0->AddReply(10807, 11933, 11945);
				return;
			}
			if (a0 == 11933) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(10797);
				tv0->ClearReplies();
				tv0->AddReply(10798, 11935, 11934);
				tv0->AddReply(10806, 11937, 11943);
				return;
			}
			if (a0 == 11935) {
				f_1fd_a1_v("Disappointment");
				tv0->SetMessage(10799);
				tv0->ClearReplies();
				tv0->AddReply(10800, 11937, 11936);
				tv0->AddReply(10805, 11937, 11941);
				return;
			}
			if (a0 == 11937) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(10801);
				tv0->ClearReplies();
				tv0->AddReply(10802, -1, 11938);
				tv0->AddReply(10803, -1, 11939);
				tv0->AddReply(10804, -1, 11940);
				return;
			}
			if (a0 == 3851) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(3562);
				tv0->ClearReplies();
				tv0->AddReply(3563, 3858, 3852);
				tv0->AddReply(3564, 3858, 3853);
				tv0->AddReply(3565, 3855, 3854);
				return;
			}
			if (a0 == 3855) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(3566);
				tv0->ClearReplies();
				tv0->AddReply(3567, -1, 3856);
				tv0->AddReply(3568, -1, 3857);
				return;
			}
			if (a0 == 3858) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(3569);
				tv0->ClearReplies();
				tv0->AddReply(3571, 3862, 3861);
				tv0->AddReply(3582, 3874, 3873);
				tv0->AddReply(3570, -1, 3860);
				return;
			}
			if (a0 == 3874) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(3583);
				tv0->ClearReplies();
				tv0->AddReply(3584, 3867, 3875);
				return;
			}
			if (a0 == 3862) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(3572);
				tv0->ClearReplies();
				tv0->AddReply(3573, 3864, 3863);
				tv0->AddReply(3576, 3867, 3866);
				return;
			}
			if (a0 == 3864) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(3574);
				tv0->ClearReplies();
				tv0->AddReply(3575, 3867, 3865);
				tv0->AddReply(3579, -1, 3870);
				return;
			}
			if (a0 == 3867) {
				f_1fd_a1_v("Neutral");
				tv0->SetMessage(3577);
				tv0->ClearReplies();
				tv0->AddReply(3578, -1, 3869);
				tv0->AddReply(3581, -1, 3872);
				return;
			}
			tv3 = true;
			if (f_1307_a0_b()) {
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
		if (!f_125c_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1303_a0_i());
		L0->SetPhoto(f_1305_a0_s());
		L0->SetPlayerName(f_168c_a0_i());
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
		f_1294_a1_v(a0);
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
			if (f_14ab_a1_b(tv1) && f_14db_a1_b(tv1)) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(5721);
				tv0->ClearReplies();
				tv0->AddReply(5722, 6334, 6306);
				tv0->AddReply(6003, 6615, 6614);
				break;
			}
			f_51e_a1_v("Neutral");
			tv0->SetMessage(8287);
			tv0->ClearReplies();
			if (f_14b7_a1_b(tv1) && f_14cf_a1_b(tv1)) {
				tv0->AddReply(8288, 6307, 9111);
			}
			if (f_14c3_a1_b(tv1)) {
				tv0->AddReply(8291, 6322, 9114);
			}
			if (f_15fb_a1_b(tv1) && f_14e7_a1_b(tv1)) {
				tv0->AddReply(8299, 9137, 9122);
			}
			if (f_1613_a1_b(tv1) && f_14f3_a1_b(tv1) || f_15ef_a1_b(tv1) && f_14f3_a1_b(tv1)) {
				tv0->AddReply(8302, 9457, 9125);
			}
			if (f_1607_a1_b(tv1) && f_14ff_a1_b(tv1)) {
				tv0->AddReply(8310, 9140, 9133);
			}
			tv0->AddReply(8723, -1, 9560);
			break;
			return;
		}
		if (f_1307_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1298_a1_v(tv2);
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

	void f_51e_a1_v(string a0)
	{
		if (!f_1307_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1298_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_12aa_a0_v();
			if (a1 == 6645) {
				f_1309_a2_v(tv1, tv0);
			}
			if (a1 == 6653) {
				f_1309_a2_v(tv1, tv0);
				f_131b_a2_v(tv1, tv0);
			}
			if (a1 == 6312) {
				f_130f_a2_v(tv1, tv0);
			}
			if (a1 == 6313) {
				f_130f_a2_v(tv1, tv0);
			}
			if (a1 == 6314) {
				f_130f_a2_v(tv1, tv0);
			}
			if (a1 == 6319) {
				f_130f_a2_v(tv1, tv0);
			}
			if (a1 == 6320) {
				f_130f_a2_v(tv1, tv0);
			}
			if (a1 == 6321) {
				f_130f_a2_v(tv1, tv0);
			}
			if (a1 == 6327) {
				f_1315_a2_v(tv1, tv0);
			}
			if (a1 == 6328) {
				f_1315_a2_v(tv1, tv0);
			}
			if (a1 == 6329) {
				f_1315_a2_v(tv1, tv0);
			}
			if (a1 == 6332) {
				f_1315_a2_v(tv1, tv0);
			}
			if (a1 == 6333) {
				f_1315_a2_v(tv1, tv0);
			}
			if (a1 == 9456) {
				f_1336_a2_v(tv1, tv0);
			}
			if (a1 == 9453) {
				f_1336_a2_v(tv1, tv0);
			}
			if (a1 == 9469) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a1 == 9466) {
				f_133c_a2_v(tv1, tv0);
			}
			if (a1 == 9474) {
				f_1342_a2_v(tv1, tv0);
			}
			if (a0 == 6305) {
				if (f_14ab_a1_b(tv1) && f_14db_a1_b(tv1)) {
					f_51e_a1_v("Neutral");
					tv0->SetMessage(5721);
					tv0->ClearReplies();
					tv0->AddReply(5722, 6334, 6306);
					tv0->AddReply(6003, 6615, 6614);
					return;
				}
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8287);
				tv0->ClearReplies();
				if (f_14b7_a1_b(tv1) && f_14cf_a1_b(tv1)) {
					tv0->AddReply(8288, 6307, 9111);
				}
				if (f_14c3_a1_b(tv1)) {
					tv0->AddReply(8291, 6322, 9114);
				}
				if (f_15fb_a1_b(tv1) && f_14e7_a1_b(tv1)) {
					tv0->AddReply(8299, 9137, 9122);
				}
				if (f_1613_a1_b(tv1) && f_14f3_a1_b(tv1) || f_15ef_a1_b(tv1) && f_14f3_a1_b(tv1)) {
					tv0->AddReply(8302, 9457, 9125);
				}
				if (f_1607_a1_b(tv1) && f_14ff_a1_b(tv1)) {
					tv0->AddReply(8310, 9140, 9133);
				}
				tv0->AddReply(8723, -1, 9560);
				return;
			}
			if (a0 == 9140) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8317);
				tv0->ClearReplies();
				tv0->AddReply(8623, 9471, 9470);
				return;
			}
			if (a0 == 9471) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8624);
				tv0->ClearReplies();
				tv0->AddReply(8625, 9473, 9472);
				return;
			}
			if (a0 == 9473) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8626);
				tv0->ClearReplies();
				tv0->AddReply(8627, -1, 9474);
				return;
			}
			if (a0 == 9457) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8610);
				tv0->ClearReplies();
				if (f_15ef_a1_b(tv1)) {
					tv0->AddReply(8611, 9462, 9458);
				}
				if (f_1613_a1_b(tv1)) {
					tv0->AddReply(8612, 9460, 9459);
				}
				return;
			}
			if (a0 == 9460) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8613);
				tv0->ClearReplies();
				tv0->AddReply(8614, 9139, 9461);
				return;
			}
			if (a0 == 9139) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8316);
				tv0->ClearReplies();
				tv0->AddReply(8617, 9465, 9464);
				return;
			}
			if (a0 == 9465) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8618);
				tv0->ClearReplies();
				tv0->AddReply(8619, -1, 9466);
				return;
			}
			if (a0 == 9462) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8615);
				tv0->ClearReplies();
				tv0->AddReply(8616, 9138, 9463);
				return;
			}
			if (a0 == 9138) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8315);
				tv0->ClearReplies();
				tv0->AddReply(8620, 9468, 9467);
				return;
			}
			if (a0 == 9468) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8621);
				tv0->ClearReplies();
				tv0->AddReply(8622, -1, 9469);
				return;
			}
			if (a0 == 9137) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8314);
				tv0->ClearReplies();
				tv0->AddReply(8604, 9452, 9451);
				return;
			}
			if (a0 == 9452) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8605);
				tv0->ClearReplies();
				tv0->AddReply(8607, 9455, 9454);
				tv0->AddReply(8606, -1, 9453);
				return;
			}
			if (a0 == 9455) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(8608);
				tv0->ClearReplies();
				tv0->AddReply(8609, -1, 9456);
				return;
			}
			if (a0 == 6322) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(5737);
				tv0->ClearReplies();
				tv0->AddReply(5738, 6324, 6323);
				tv0->AddReply(5745, 6331, 6330);
				return;
			}
			if (a0 == 6331) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(5746);
				tv0->ClearReplies();
				tv0->AddReply(5747, -1, 6332);
				tv0->AddReply(5748, -1, 6333);
				return;
			}
			if (a0 == 6324) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(5739);
				tv0->ClearReplies();
				tv0->AddReply(5740, 6326, 6325);
				tv0->AddReply(5744, -1, 6329);
				return;
			}
			if (a0 == 6326) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(5741);
				tv0->ClearReplies();
				tv0->AddReply(5742, -1, 6327);
				tv0->AddReply(5743, -1, 6328);
				return;
			}
			if (a0 == 6307) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(5723);
				tv0->ClearReplies();
				tv0->AddReply(5724, 6309, 6308);
				tv0->AddReply(5732, 6318, 6317);
				tv0->AddReply(5736, -1, 6321);
				return;
			}
			if (a0 == 6318) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(5733);
				tv0->ClearReplies();
				tv0->AddReply(5734, -1, 6319);
				tv0->AddReply(5735, -1, 6320);
				return;
			}
			if (a0 == 6309) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(5725);
				tv0->ClearReplies();
				tv0->AddReply(5726, 6311, 6310);
				tv0->AddReply(5730, -1, 6314);
				tv0->AddReply(5731, 6311, 6315);
				return;
			}
			if (a0 == 6311) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(5727);
				tv0->ClearReplies();
				tv0->AddReply(5728, -1, 6312);
				tv0->AddReply(5729, -1, 6313);
				return;
			}
			if (a0 == 6615) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(6004);
				tv0->ClearReplies();
				tv0->AddReply(6005, 6618, 6616);
				tv0->AddReply(6006, 6625, 6617);
				return;
			}
			if (a0 == 6618) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(6007);
				tv0->ClearReplies();
				tv0->AddReply(6011, 6625, 6622);
				tv0->AddReply(6015, 6625, 6628);
				return;
			}
			if (a0 == 6334) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(5749);
				tv0->ClearReplies();
				tv0->AddReply(6008, 6621, 6619);
				tv0->AddReply(6009, 6621, 6620);
				return;
			}
			if (a0 == 6621) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(6010);
				tv0->ClearReplies();
				tv0->AddReply(6016, 6632, 6631);
				tv0->AddReply(6013, 6625, 6624);
				return;
			}
			if (a0 == 6625) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(6014);
				tv0->ClearReplies();
				tv0->AddReply(6018, 6632, 6633);
				return;
			}
			if (a0 == 6632) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(6017);
				tv0->ClearReplies();
				tv0->AddReply(6019, 6636, 6634);
				tv0->AddReply(6020, 6637, 6635);
				tv0->AddReply(6039, 6661, 6660);
				return;
			}
			if (a0 == 6661) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(6040);
				tv0->ClearReplies();
				tv0->AddReply(6041, 6636, 6662);
				return;
			}
			if (a0 == 6637) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(6022);
				tv0->ClearReplies();
				tv0->AddReply(6023, 6641, 6638);
				tv0->AddReply(6027, 6652, 6642);
				tv0->AddReply(6029, 6647, 6646);
				return;
			}
			if (a0 == 6647) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(6030);
				tv0->ClearReplies();
				tv0->AddReply(6031, 6652, 6648);
				tv0->AddReply(6032, 6650, 6649);
				return;
			}
			if (a0 == 6650) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(6033);
				tv0->ClearReplies();
				tv0->AddReply(6034, 6652, 6651);
				tv0->AddReply(6037, 6641, 6655);
				return;
			}
			if (a0 == 6652) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(6035);
				tv0->ClearReplies();
				tv0->AddReply(6036, -1, 6653);
				tv0->AddReply(6038, 6641, 6656);
				return;
			}
			if (a0 == 6636) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(6021);
				tv0->ClearReplies();
				tv0->AddReply(6024, 6641, 6639);
				tv0->AddReply(6025, 6641, 6640);
				return;
			}
			if (a0 == 6641) {
				f_51e_a1_v("Neutral");
				tv0->SetMessage(6026);
				tv0->ClearReplies();
				tv0->AddReply(6028, -1, 6645);
				return;
			}
			tv3 = true;
			if (f_1307_a0_b()) {
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
		if (!f_125c_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1303_a0_i());
		L0->SetPhoto(f_1305_a0_s());
		L0->SetPlayerName(f_168c_a0_i());
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
		f_1294_a1_v(a0);
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
			f_a19_a1_v("Neutral");
			tv0->SetMessage(8869);
			tv0->ClearReplies();
			if (f_1517_a1_b(tv1) && f_153b_a1_b(tv1)) {
				tv0->AddReply(8889, 9751, 9750);
			}
			if (f_152f_a1_b(tv1) && !f_1517_a1_b(tv1) && f_153b_a1_b(tv1)) {
				tv0->AddReply(11136, 12326, 12325);
			}
			if (f_150b_a1_b(tv1)) {
				tv0->AddReply(8888, 9729, 9749);
			}
			if (f_1523_a1_b(tv1) && f_1547_a1_b(tv1)) {
				tv0->AddReply(8908, 9772, 9771);
			}
			tv0->AddReply(11134, -1, 12323);
			break;
			return;
		}
		if (f_1307_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1298_a1_v(tv2);
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

	void f_a19_a1_v(string a0)
	{
		if (!f_1307_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1298_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_12aa_a0_v();
			if (a1 == 9768) {
				f_135a_a2_v(tv1, tv0);
				f_134e_a2_v(tv1, tv0);
				f_139c_a2_v(tv1, tv0);
			}
			if (a1 == 9769) {
				f_134e_a2_v(tv1, tv0);
			}
			if (a1 == 9760) {
				f_134e_a2_v(tv1, tv0);
			}
			if (a1 == 9762) {
				f_134e_a2_v(tv1, tv0);
			}
			if (a1 == 12327) {
				f_135a_a2_v(tv1, tv0);
				f_137a_a2_v(tv1, tv0);
				f_139c_a2_v(tv1, tv0);
			}
			if (a1 == 9736) {
				f_1348_a2_v(tv1, tv0);
			}
			if (a1 == 9737) {
				f_1348_a2_v(tv1, tv0);
			}
			if (a1 == 9738) {
				f_1348_a2_v(tv1, tv0);
			}
			if (a1 == 9745) {
				f_1348_a2_v(tv1, tv0);
			}
			if (a1 == 9746) {
				f_1348_a2_v(tv1, tv0);
			}
			if (a1 == 9788) {
				f_1354_a2_v(tv1, tv0);
				f_1380_a2_v(tv1, tv0);
			}
			if (a1 == 9789) {
				f_1354_a2_v(tv1, tv0);
				f_1380_a2_v(tv1, tv0);
			}
			if (a0 == 9728) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8869);
				tv0->ClearReplies();
				if (f_1517_a1_b(tv1) && f_153b_a1_b(tv1)) {
					tv0->AddReply(8889, 9751, 9750);
				}
				if (f_152f_a1_b(tv1) && !f_1517_a1_b(tv1) && f_153b_a1_b(tv1)) {
					tv0->AddReply(11136, 12326, 12325);
				}
				if (f_150b_a1_b(tv1)) {
					tv0->AddReply(8888, 9729, 9749);
				}
				if (f_1523_a1_b(tv1) && f_1547_a1_b(tv1)) {
					tv0->AddReply(8908, 9772, 9771);
				}
				tv0->AddReply(11134, -1, 12323);
				return;
			}
			if (a0 == 9772) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8909);
				tv0->ClearReplies();
				tv0->AddReply(8913, 9778, 9777);
				tv0->AddReply(8910, 9775, 9773);
				tv0->AddReply(8911, 9775, 9774);
				return;
			}
			if (a0 == 9775) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8912);
				tv0->ClearReplies();
				tv0->AddReply(8915, -1, 9779);
				return;
			}
			if (a0 == 9778) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8914);
				tv0->ClearReplies();
				tv0->AddReply(8916, 9781, 9780);
				tv0->AddReply(8918, 9783, 9782);
				return;
			}
			if (a0 == 9783) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8919);
				tv0->ClearReplies();
				tv0->AddReply(8920, 9786, 9784);
				return;
			}
			if (a0 == 9781) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8917);
				tv0->ClearReplies();
				tv0->AddReply(8921, 9786, 9785);
				return;
			}
			if (a0 == 9786) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8922);
				tv0->ClearReplies();
				tv0->AddReply(8923, -1, 9788);
				tv0->AddReply(8924, -1, 9789);
				return;
			}
			if (a0 == 9729) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8870);
				tv0->ClearReplies();
				tv0->AddReply(8871, 9731, 9730);
				tv0->AddReply(8887, 9731, 9747);
				return;
			}
			if (a0 == 9731) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8872);
				tv0->ClearReplies();
				tv0->AddReply(8873, 9733, 9732);
				tv0->AddReply(8880, 9740, 9739);
				return;
			}
			if (a0 == 9740) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8881);
				tv0->ClearReplies();
				tv0->AddReply(8882, 9733, 9741);
				tv0->AddReply(8883, 9744, 9743);
				return;
			}
			if (a0 == 9744) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8884);
				tv0->ClearReplies();
				tv0->AddReply(8885, -1, 9745);
				tv0->AddReply(8886, -1, 9746);
				return;
			}
			if (a0 == 9733) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8874);
				tv0->ClearReplies();
				tv0->AddReply(8875, 9735, 9734);
				tv0->AddReply(8879, -1, 9738);
				return;
			}
			if (a0 == 9735) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8876);
				tv0->ClearReplies();
				tv0->AddReply(8877, -1, 9736);
				tv0->AddReply(8878, -1, 9737);
				return;
			}
			if (a0 == 12326) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(11137);
				tv0->ClearReplies();
				tv0->AddReply(11138, -1, 12327);
				return;
			}
			if (a0 == 9751) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8890);
				tv0->ClearReplies();
				tv0->AddReply(8891, 9753, 9752);
				tv0->AddReply(8893, 9759, 9754);
				return;
			}
			if (a0 == 9759) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8898);
				tv0->ClearReplies();
				tv0->AddReply(8899, -1, 9760);
				tv0->AddReply(8900, -1, 9762);
				return;
			}
			if (a0 == 9753) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8892);
				tv0->ClearReplies();
				tv0->AddReply(8894, 9756, 9755);
				return;
			}
			if (a0 == 9756) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8895);
				tv0->ClearReplies();
				tv0->AddReply(8896, 9763, 9757);
				tv0->AddReply(8897, 9759, 9758);
				return;
			}
			if (a0 == 9763) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8901);
				tv0->ClearReplies();
				tv0->AddReply(8902, 9766, 9764);
				tv0->AddReply(8903, 9766, 9765);
				return;
			}
			if (a0 == 9766) {
				f_a19_a1_v("Neutral");
				tv0->SetMessage(8904);
				tv0->ClearReplies();
				tv0->AddReply(8905, -1, 9768);
				tv0->AddReply(8906, -1, 9769);
				return;
			}
			tv3 = true;
			if (f_1307_a0_b()) {
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
		if (!f_125c_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1303_a0_i());
		L0->SetPhoto(f_1305_a0_s());
		L0->SetPlayerName(f_168c_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1294_a1_v(a0);
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
			f_d33_a1_v("Neutral");
			tv0->SetMessage(9394);
			tv0->ClearReplies();
			tv0->AddReply(9395, 10324, 10323);
			tv0->AddReply(9407, 10328, 10335);
			break;
			return;
		}
		if (f_1307_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1298_a1_v(tv2);
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

	void f_d33_a1_v(string a0)
	{
		if (!f_1307_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1298_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_12aa_a0_v();
			if (a0 == 10322) {
				f_d33_a1_v("Neutral");
				tv0->SetMessage(9394);
				tv0->ClearReplies();
				tv0->AddReply(9395, 10324, 10323);
				tv0->AddReply(9407, 10328, 10335);
				return;
			}
			if (a0 == 10324) {
				f_d33_a1_v("Neutral");
				tv0->SetMessage(9396);
				tv0->ClearReplies();
				tv0->AddReply(9397, 10326, 10325);
				tv0->AddReply(9405, -1, 10333);
				tv0->AddReply(9406, -1, 10334);
				return;
			}
			if (a0 == 10326) {
				f_d33_a1_v("Neutral");
				tv0->SetMessage(9398);
				tv0->ClearReplies();
				tv0->AddReply(9399, 10328, 10327);
				tv0->AddReply(9403, -1, 10331);
				tv0->AddReply(9404, -1, 10332);
				return;
			}
			if (a0 == 10328) {
				f_d33_a1_v("Neutral");
				tv0->SetMessage(9400);
				tv0->ClearReplies();
				tv0->AddReply(9401, -1, 10329);
				tv0->AddReply(9402, -1, 10330);
				return;
			}
			tv3 = true;
			if (f_1307_a0_b()) {
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
		if (!f_125c_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1303_a0_i());
		L0->SetPhoto(f_1305_a0_s());
		L0->SetPlayerName(f_168c_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1294_a1_v(a0);
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
			f_e56_a1_v("Neutral");
			tv0->SetMessage(11065);
			tv0->ClearReplies();
			if (f_155f_a1_b(tv1) && f_1553_a1_b(tv1)) {
				tv0->AddReply(11066, 12248, 12247);
			}
			if (f_1577_a1_b(tv1) && f_156b_a1_b(tv1)) {
				tv0->AddReply(11079, 12268, 12263);
			}
			tv0->AddReply(11505, -1, 12707);
			break;
			return;
		}
		if (f_1307_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1298_a1_v(tv2);
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

	void f_e56_a1_v(string a0)
	{
		if (!f_1307_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1298_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_12aa_a0_v();
			if (a1 == 12266) {
				f_13d0_a2_v(tv1, tv0);
				f_13bc_a2_v(tv1, tv0);
				f_13ac_a2_v(tv1, tv0);
			}
			if (a1 == 12267) {
				f_13d0_a2_v(tv1, tv0);
				f_13bc_a2_v(tv1, tv0);
				f_13ac_a2_v(tv1, tv0);
			}
			if (a1 == 12281) {
				f_13dc_a2_v(tv1, tv0);
				f_13d6_a2_v(tv1, tv0);
			}
			if (a0 == 12246) {
				f_e56_a1_v("Neutral");
				tv0->SetMessage(11065);
				tv0->ClearReplies();
				if (f_155f_a1_b(tv1) && f_1553_a1_b(tv1)) {
					tv0->AddReply(11066, 12248, 12247);
				}
				if (f_1577_a1_b(tv1) && f_156b_a1_b(tv1)) {
					tv0->AddReply(11079, 12268, 12263);
				}
				tv0->AddReply(11505, -1, 12707);
				return;
			}
			if (a0 == 12268) {
				f_e56_a1_v("Neutral");
				tv0->SetMessage(11083);
				tv0->ClearReplies();
				tv0->AddReply(11084, 12271, 12269);
				tv0->AddReply(11085, 12272, 12270);
				return;
			}
			if (a0 == 12272) {
				f_e56_a1_v("Neutral");
				tv0->SetMessage(11087);
				tv0->ClearReplies();
				tv0->AddReply(11088, 12275, 12273);
				return;
			}
			if (a0 == 12271) {
				f_e56_a1_v("Neutral");
				tv0->SetMessage(11086);
				tv0->ClearReplies();
				tv0->AddReply(11089, 12275, 12274);
				return;
			}
			if (a0 == 12275) {
				f_e56_a1_v("Neutral");
				tv0->SetMessage(11090);
				tv0->ClearReplies();
				tv0->AddReply(11091, 12279, 12276);
				tv0->AddReply(11092, 12279, 12277);
				return;
			}
			if (a0 == 12279) {
				f_e56_a1_v("Neutral");
				tv0->SetMessage(11093);
				tv0->ClearReplies();
				tv0->AddReply(11094, -1, 12281);
				return;
			}
			if (a0 == 12248) {
				f_e56_a1_v("Neutral");
				tv0->SetMessage(11067);
				tv0->ClearReplies();
				tv0->AddReply(11068, 12250, 12249);
				tv0->AddReply(11073, 12255, 12254);
				return;
			}
			if (a0 == 12250) {
				f_e56_a1_v("Neutral");
				tv0->SetMessage(11069);
				tv0->ClearReplies();
				tv0->AddReply(11070, 12257, 12251);
				tv0->AddReply(11071, 12257, 12252);
				tv0->AddReply(11072, 12255, 12253);
				return;
			}
			if (a0 == 12255) {
				f_e56_a1_v("Neutral");
				tv0->SetMessage(11074);
				tv0->ClearReplies();
				tv0->AddReply(11075, 12257, 12256);
				return;
			}
			if (a0 == 12257) {
				f_e56_a1_v("Neutral");
				tv0->SetMessage(11076);
				tv0->ClearReplies();
				tv0->AddReply(11077, 12264, 12261);
				tv0->AddReply(11078, 12264, 12262);
				return;
			}
			if (a0 == 12264) {
				f_e56_a1_v("Neutral");
				tv0->SetMessage(11080);
				tv0->ClearReplies();
				tv0->AddReply(11081, -1, 12266);
				tv0->AddReply(11082, -1, 12267);
				return;
			}
			tv3 = true;
			if (f_1307_a0_b()) {
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
		if (!f_125c_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1303_a0_i());
		L0->SetPhoto(f_1305_a0_s());
		L0->SetPlayerName(f_168c_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1294_a1_v(a0);
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
			f_104b_a1_v("Neutral");
			tv0->SetMessage(12374);
			tv0->ClearReplies();
			if (!f_15a7_a1_b(tv1) && f_15bf_a1_b(tv1)) {
				tv0->AddReply(13641, 14898, 14897);
			}
			if (f_15b3_a1_b(tv1)) {
				tv0->AddReply(12375, 13536, 13535);
			}
			tv0->AddReply(13658, -1, 14916);
			break;
			return;
		}
		if (f_1307_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1298_a1_v(tv2);
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

	void f_104b_a1_v(string a0)
	{
		if (!f_1307_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1298_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_12aa_a0_v();
			if (a1 == 14897) {
				f_13fd_a2_v(tv1, tv0);
			}
			if (a1 == 14911) {
				f_13ee_a2_v(tv1, tv0);
			}
			if (a1 == 13535) {
				f_13f7_a2_v(tv1, tv0);
			}
			if (a0 == 13534) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12374);
				tv0->ClearReplies();
				if (!f_15a7_a1_b(tv1) && f_15bf_a1_b(tv1)) {
					tv0->AddReply(13641, 14898, 14897);
				}
				if (f_15b3_a1_b(tv1)) {
					tv0->AddReply(12375, 13536, 13535);
				}
				tv0->AddReply(13658, -1, 14916);
				return;
			}
			if (a0 == 13536) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12376);
				tv0->ClearReplies();
				tv0->AddReply(12378, 13544, 13538);
				tv0->AddReply(12377, 13539, 13537);
				return;
			}
			if (a0 == 13539) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12379);
				tv0->ClearReplies();
				tv0->AddReply(12380, 13541, 13540);
				return;
			}
			if (a0 == 13541) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12381);
				tv0->ClearReplies();
				tv0->AddReply(12382, -1, 13542);
				tv0->AddReply(12383, -1, 13543);
				return;
			}
			if (a0 == 13544) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12384);
				tv0->ClearReplies();
				tv0->AddReply(12385, 13552, 13545);
				tv0->AddReply(12386, 13547, 13546);
				return;
			}
			if (a0 == 13547) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12387);
				tv0->ClearReplies();
				tv0->AddReply(12388, 13550, 13548);
				tv0->AddReply(12389, 13550, 13549);
				return;
			}
			if (a0 == 13550) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12390);
				tv0->ClearReplies();
				tv0->AddReply(12391, -1, 13551);
				return;
			}
			if (a0 == 13552) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12392);
				tv0->ClearReplies();
				tv0->AddReply(12393, 13559, 13554);
				tv0->AddReply(12394, 13557, 13555);
				tv0->AddReply(12395, 13558, 13556);
				return;
			}
			if (a0 == 13558) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12397);
				tv0->ClearReplies();
				tv0->AddReply(12403, 13565, 13564);
				return;
			}
			if (a0 == 13557) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12396);
				tv0->ClearReplies();
				tv0->AddReply(12402, 13565, 13563);
				return;
			}
			if (a0 == 13559) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12398);
				tv0->ClearReplies();
				tv0->AddReply(12399, 13561, 13560);
				return;
			}
			if (a0 == 13561) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12400);
				tv0->ClearReplies();
				tv0->AddReply(12401, 13565, 13562);
				return;
			}
			if (a0 == 13565) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12404);
				tv0->ClearReplies();
				tv0->AddReply(12405, 13570, 13568);
				tv0->AddReply(12406, 13570, 13569);
				return;
			}
			if (a0 == 13570) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(12407);
				tv0->ClearReplies();
				tv0->AddReply(12408, -1, 13572);
				return;
			}
			if (a0 == 14898) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(13642);
				tv0->ClearReplies();
				tv0->AddReply(13643, 14900, 14899);
				return;
			}
			if (a0 == 14900) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(13644);
				tv0->ClearReplies();
				tv0->AddReply(13645, 14902, 14901);
				return;
			}
			if (a0 == 14902) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(13646);
				tv0->ClearReplies();
				tv0->AddReply(13647, 14904, 14903);
				tv0->AddReply(13649, 14906, 14905);
				return;
			}
			if (a0 == 14906) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(13650);
				tv0->ClearReplies();
				tv0->AddReply(13652, 14907, 14908);
				return;
			}
			if (a0 == 14904) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(13648);
				tv0->ClearReplies();
				tv0->AddReply(13651, 14909, 14907);
				tv0->AddReply(13655, 14913, 14912);
				return;
			}
			if (a0 == 14913) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(13656);
				tv0->ClearReplies();
				tv0->AddReply(13657, 14909, 14914);
				return;
			}
			if (a0 == 14909) {
				f_104b_a1_v("Neutral");
				tv0->SetMessage(13653);
				tv0->ClearReplies();
				tv0->AddReply(13654, -1, 14911);
				return;
			}
			tv3 = true;
			if (f_1307_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

bool f_124b_a1_b(object a0)
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

bool f_1257_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_125c_a1_b(object a0)
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
	L5 = L3 * 70 + f_12b1_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
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

void f_1294_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_1298_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_12aa_a0_v(void)
{
	if (f_1307_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_12b1_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_12bb_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_12c0_a3_v(object a0, object a1, int a2)
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

void f_12cd_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_12c0_a3_v(a0, L0, a2);
}

bool f_12da_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_12e6_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_12eb_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_12f4_a1_b(int a0)
{
	return f_12eb_a0_i() == a0;
}

bool f_12fa_a0_b(void)
{
	bool L0;
	f_1298_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_1303_a0_i(void)
{
	return 2874;
}

string f_1305_a0_s(void)
{
	return "ui/NPC_Ospina.png";
}

bool f_1307_a0_b(void)
{
	return true;
}

void f_1309_a2_v(object a0, object a1)
{
	@SetVariable("ood1Ospina1", 1);
}

void f_130f_a2_v(object a0, object a1)
{
	@SetVariable("ood1Ospina2", 1);
}

void f_1315_a2_v(object a0, object a1)
{
	@SetVariable("ood1Ospina3", 1);
}

void f_131b_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_165a_a0_o();
	L0->FindMark(L1, "d1q03KapellaGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q03MladVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	f_12da_a2_b("quest_d1_03", "kapella_finish");
}

void f_1336_a2_v(object a0, object a1)
{
	@SetVariable("ood1Ospina4", 1);
}

void f_133c_a2_v(object a0, object a1)
{
	@SetVariable("ood1Ospina5", 1);
}

void f_1342_a2_v(object a0, object a1)
{
	@SetVariable("ood1Ospina6", 1);
}

void f_1348_a2_v(object a0, object a1)
{
	@SetVariable("ood3Ospina1", 1);
}

void f_134e_a2_v(object a0, object a1)
{
	@SetVariable("ood3Ospina2", 1);
}

void f_1354_a2_v(object a0, object a1)
{
	@SetVariable("ood3Ospina3", 1);
}

void f_135a_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q01", 3);
	L0 = f_165a_a0_o();
	L0->AddMark("d3q01OspinaGotoBigVlad", "pt_map_bigvlad", 1, 11152, f_12e6_a0_f());
	L0->AddMark("d3q01OspinaGotoBigVladSelf", "pt_map_ospina", 1, 15296, f_12e6_a0_f());
	f_16ad_a0_v();
}

void f_137a_a2_v(object a0, object a1)
{
	@SetVariable("ood3Ospina4", 1);
}

void f_1380_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q01", 7);
	L0 = f_165a_a0_o();
	L0->AddMark("d3q01OspinaButchersWillHelpSelf", "pt_map_ospina", 1, 15301, f_12e6_a0_f());
	f_169d_a0_v();
	f_12da_a2_b("quest_d3_01", "place_butchers");
}

void f_139c_a2_v(object a0, object a1)
{
	f_166b_a3_v(f_165a_a0_o(), "pt_map_bigvlad", 2);
	a1->ShowMap(f_165a_a0_o());
}

void f_13ac_a2_v(object a0, object a1)
{
	f_166b_a3_v(f_165a_a0_o(), "pt_map_lara", 2);
	a1->ShowMap(f_165a_a0_o());
}

void f_13bc_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d4q01_subquest", 2);
	L0 = f_165a_a0_o();
	L0->AddMark("d4q01OspinaGotoLara", "pt_map_lara", 1, 11504, f_12e6_a0_f());
}

void f_13d0_a2_v(object a0, object a1)
{
	@SetVariable("ood4Ospina1", 1);
}

void f_13d6_a2_v(object a0, object a1)
{
	@SetVariable("d4q01_subquest", 1000);
}

void f_13dc_a2_v(object a0, object a1)
{
	@SetVariable("ood4Ospina2", 1);
}

void f_13e2_a2_v(object a0, object a1)
{
	@SetVariable("ood6Ospina1", 1);
}

void f_13e8_a2_v(object a0, object a1)
{
	@SetVariable("ood6Ospina2", 1);
}

void f_13ee_a2_v(object a0, object a1)
{
	@SetVariable("d8q01MladVladIsBad", 1);
	f_16dd_a0_v();
}

void f_13f7_a2_v(object a0, object a1)
{
	@SetVariable("ood8Ospina1", 1);
}

void f_13fd_a2_v(object a0, object a1)
{
	@SetVariable("ood8Ospina2", 1);
}

void f_1403_a2_v(object a0, object a1)
{
	f_16bd_a0_v();
	@Trace("ospina blood is given");
	f_12cd_a3_v(a0, "d6q01_ospina_blood", 1);
}

void f_1411_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1417_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	@SetVariable("d6q01OspinaVolonteer", 1);
	L0 = f_165a_a0_o();
	L0->FindMark(L1, "d6q01AlexandrGotoJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexandrGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexandrGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexangrGotoJulLaraSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoAnnaOspinaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KaterinaGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KaterinagotoLaskaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KillerIsKlara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01LaskaGotoAlbinos");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoAlxBigSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	f_16cd_a0_v();
	f_1649_a1_b(112);
	f_1649_a1_b(113);
	f_1649_a1_b(114);
	f_1649_a1_b(115);
	f_1649_a1_b(116);
	f_1649_a1_b(117);
	f_12da_a2_b("quest_d6_01", "completed");
}

void f_14a5_a2_v(object a0, object a1)
{
	@SetVariable("KnowOspina", 1);
}

bool f_14ab_a1_b(object a0)
{
	if (f_12bb_a1_i("ood1Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_14b7_a1_b(object a0)
{
	if (f_12bb_a1_i("ood1Ospina2") == 0) {
		return true;
	}
	return false;
}

bool f_14c3_a1_b(object a0)
{
	if (f_12bb_a1_i("ood1Ospina3") == 0) {
		return true;
	}
	return false;
}

bool f_14cf_a1_b(object a0)
{
	if (f_12bb_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_14db_a1_b(object a0)
{
	if (f_12bb_a1_i("d1q03") == 1) {
		return true;
	}
	return false;
}

bool f_14e7_a1_b(object a0)
{
	if (f_12bb_a1_i("ood1Ospina4") == 0) {
		return true;
	}
	return false;
}

bool f_14f3_a1_b(object a0)
{
	if (f_12bb_a1_i("ood1Ospina5") == 0) {
		return true;
	}
	return false;
}

bool f_14ff_a1_b(object a0)
{
	if (f_12bb_a1_i("ood1Ospina6") == 0) {
		return true;
	}
	return false;
}

bool f_150b_a1_b(object a0)
{
	if (f_12bb_a1_i("ood3Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_1517_a1_b(object a0)
{
	if (f_12bb_a1_i("ood3Ospina2") == 0) {
		return true;
	}
	return false;
}

bool f_1523_a1_b(object a0)
{
	if (f_12bb_a1_i("ood3Ospina3") == 0) {
		return true;
	}
	return false;
}

bool f_152f_a1_b(object a0)
{
	if (f_12bb_a1_i("ood3Ospina4") == 0) {
		return true;
	}
	return false;
}

bool f_153b_a1_b(object a0)
{
	if (f_12bb_a1_i("d3q01") == 2) {
		return true;
	}
	return false;
}

bool f_1547_a1_b(object a0)
{
	if (f_12bb_a1_i("d3q01") == 6) {
		return true;
	}
	return false;
}

bool f_1553_a1_b(object a0)
{
	if (f_12bb_a1_i("d4q01_subquest") == 1) {
		return true;
	}
	return false;
}

bool f_155f_a1_b(object a0)
{
	if (f_12bb_a1_i("ood4Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_156b_a1_b(object a0)
{
	if (f_12bb_a1_i("d4q01_subquest") == 3) {
		return true;
	}
	return false;
}

bool f_1577_a1_b(object a0)
{
	if (f_12bb_a1_i("ood4Ospina2") == 0) {
		return true;
	}
	return false;
}

bool f_1583_a1_b(object a0)
{
	if (f_12bb_a1_i("d6q01") == 1) {
		return true;
	}
	return false;
}

bool f_158f_a1_b(object a0)
{
	if (f_12bb_a1_i("ood6Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_159b_a1_b(object a0)
{
	if (f_12bb_a1_i("ood6Ospina2") == 0) {
		return true;
	}
	return false;
}

bool f_15a7_a1_b(object a0)
{
	if (f_12bb_a1_i("d8q01") == 0) {
		return true;
	}
	return false;
}

bool f_15b3_a1_b(object a0)
{
	if (f_12bb_a1_i("ood8Ospina1") == 0) {
		return true;
	}
	return false;
}

bool f_15bf_a1_b(object a0)
{
	if (f_12bb_a1_i("ood8Ospina2") == 0) {
		return true;
	}
	return false;
}

bool f_15cb_a1_b(object a0)
{
	if (f_12bb_a1_i("microscope_d6q01_ospina_blood") != 0) {
		return true;
	}
	return false;
}

bool f_15d7_a1_b(object a0)
{
	if (f_12bb_a1_i("d6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_15e3_a1_b(object a0)
{
	if (f_12bb_a1_i("d6q01") == -1) {
		return true;
	}
	return false;
}

bool f_15ef_a1_b(object a0)
{
	if (f_12bb_a1_i("KnowBigVlad") == 1) {
		return true;
	}
	return false;
}

bool f_15fb_a1_b(object a0)
{
	if (f_12bb_a1_i("KnowKaterina") == 1) {
		return true;
	}
	return false;
}

bool f_1607_a1_b(object a0)
{
	if (f_12bb_a1_i("KnowLaska") == 1) {
		return true;
	}
	return false;
}

bool f_1613_a1_b(object a0)
{
	if (f_12bb_a1_i("KnowMladVlad") == 1) {
		return true;
	}
	return false;
}

object f_161f_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_162c_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_161f_a0_o();
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

bool f_1649_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_161f_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

object f_165a_a0_o(void)
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

void f_166b_a3_v(object a0, string a1, float a2)
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

int f_168c_a0_i(void)
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

void f_169d_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 71, 1, 12153);
	f_162c_a2_b(L0, 25);
}

void f_16ad_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 70, 1, 12152);
	f_162c_a2_b(L0, 25);
}

void f_16bd_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 162, 1, 15395);
	f_162c_a2_b(L0, 111);
}

void f_16cd_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 121, 1, 13744);
	f_162c_a2_b(L0, 111);
}

void f_16dd_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 178, 1, 15437);
	f_162c_a2_b(L0, 175);
}

void f_16ed_a0_v(void)
{
	g1 = false;
}

void f_16f1_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_12f4_a1_b(1)) {
		t6{a0};
		return;
	}
	if (f_12f4_a1_b(2)) {
		t10{a0};
		return;
	}
	if (f_12f4_a1_b(3)) {
		t8{a0};
		return;
	}
	if (f_12f4_a1_b(4)) {
		t12{a0};
		return;
	}
	if (f_12f4_a1_b(6)) {
		t4{a0};
		return;
	}
	if (f_12f4_a1_b(8)) {
		t14{a0};
		return;
	}
	f_12fa_a0_b();
}

