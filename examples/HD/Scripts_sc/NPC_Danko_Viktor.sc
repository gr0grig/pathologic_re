event OnLoad 5;
event evt_11 11;
event OnTrigger 26;
event OnUnload 6;
event OnUse 0;

var object g0;
var bool g1;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_211a_a0_b());
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
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
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
			f_23a3_a2_v(tv1, tv0);
			f_9d_a1_v("Neutral");
			tv0->SetMessage(501575);
			tv0->ClearReplies();
			tv0->AddReply(501576, 1782, 1780);
			tv0->AddReply(501577, 1782, 1781);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a0 == 1779) {
				f_23a3_a2_v(tv1, tv0);
				f_9d_a1_v("Neutral");
				tv0->SetMessage(501575);
				tv0->ClearReplies();
				tv0->AddReply(501576, 1782, 1780);
				tv0->AddReply(501577, 1782, 1781);
				return;
			}
			if (a0 == 1782) {
				f_24b2_a2_v(tv1, tv0);
				f_9d_a1_v("Neutral");
				tv0->SetMessage(501578);
				tv0->ClearReplies();
				tv0->AddReply(501580, 1785, 1784);
				tv0->AddReply(501579, -1, 1783);
				return;
			}
			if (a0 == 1785) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(501581);
				tv0->ClearReplies();
				tv0->AddReply(501582, -1, 1786);
				tv0->AddReply(501583, -1, 1787);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
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
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t4{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
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
			if (f_2643_a1_b(tv1)) {
				f_24b8_a2_v(tv1, tv0);
				f_1b9_a1_v("Surprise");
				tv0->SetMessage(512036);
				tv0->ClearReplies();
				tv0->AddReply(540874, 42939, 42937);
				tv0->AddReply(540878, 42939, 42941);
				break;
			}
			f_1b9_a1_v("Neutral");
			tv0->SetMessage(513016);
			tv0->ClearReplies();
			tv0->AddReply(513017, -1, 14223);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_1b9_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a1 == 13819) {
				f_2454_a2_v(tv1, tv0);
				f_244e_a2_v(tv1, tv0);
			}
			if (a1 == 13848) {
				f_2454_a2_v(tv1, tv0);
				f_244e_a2_v(tv1, tv0);
			}
			if (a0 == 13254) {
				if (f_2643_a1_b(tv1)) {
					f_24b8_a2_v(tv1, tv0);
					f_1b9_a1_v("Surprise");
					tv0->SetMessage(512036);
					tv0->ClearReplies();
					tv0->AddReply(540874, 42939, 42937);
					tv0->AddReply(540878, 42939, 42941);
					return;
				}
				f_1b9_a1_v("Neutral");
				tv0->SetMessage(513016);
				tv0->ClearReplies();
				tv0->AddReply(513017, -1, 14223);
				return;
			}
			if (a0 == 42939) {
				f_1b9_a1_v("Surprise");
				tv0->SetMessage(540876);
				tv0->ClearReplies();
				tv0->AddReply(540877, 42938, 42940);
				tv0->AddReply(540879, 42938, 42943);
				return;
			}
			if (a0 == 42938) {
				f_1b9_a1_v("Fear");
				tv0->SetMessage(540875);
				tv0->ClearReplies();
				tv0->AddReply(540870, 42934, 42933);
				tv0->AddReply(512640, 13821, 13820);
				return;
			}
			if (a0 == 13821) {
				f_1b9_a1_v("Fear");
				tv0->SetMessage(512641);
				tv0->ClearReplies();
				tv0->AddReply(512644, 13825, 13824);
				return;
			}
			if (a0 == 13825) {
				f_1b9_a1_v("Fear");
				tv0->SetMessage(512645);
				tv0->ClearReplies();
				tv0->AddReply(540881, 42947, 42946);
				return;
			}
			if (a0 == 42947) {
				f_1b9_a1_v("Fear");
				tv0->SetMessage(540882);
				tv0->ClearReplies();
				tv0->AddReply(540883, 13818, 42949);
				tv0->AddReply(512666, -1, 13848);
				return;
			}
			if (a0 == 42934) {
				f_1b9_a1_v("Fear");
				tv0->SetMessage(540871);
				tv0->ClearReplies();
				tv0->AddReply(512037, 13256, 13255);
				return;
			}
			if (a0 == 13256) {
				f_1b9_a1_v("Fear");
				tv0->SetMessage(512038);
				tv0->ClearReplies();
				tv0->AddReply(540872, 13818, 42935);
				tv0->AddReply(512635, 13816, 13815);
				return;
			}
			if (a0 == 13816) {
				f_1b9_a1_v("Fear");
				tv0->SetMessage(512636);
				tv0->ClearReplies();
				tv0->AddReply(512637, 13818, 13817);
				return;
			}
			if (a0 == 13818) {
				f_1b9_a1_v("Neutral");
				tv0->SetMessage(512638);
				tv0->ClearReplies();
				tv0->AddReply(512639, -1, 13819);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
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
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t6{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
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
			if (!f_250c_a1_b(tv1)) {
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(505111);
				tv0->ClearReplies();
				if (f_24d0_a1_b(tv1)) {
					tv0->AddReply(505112, 5626, 5625);
				}
				if (f_24d0_a1_b(tv1)) {
					tv0->AddReply(505119, 5626, 5632);
				}
				tv0->AddReply(505120, -1, 5634);
				break;
			}
			f_3ca_a1_v("Neutral");
			tv0->SetMessage(505106);
			tv0->ClearReplies();
			if (f_250c_a1_b(tv1) && f_24dc_a1_b(tv1)) {
				tv0->AddReply(505107, 9234, 5620);
			}
			if (f_2500_a1_b(tv1) && f_26df_a1_b(tv1) && f_24e8_a1_b(tv1)) {
				tv0->AddReply(505142, 5662, 5661);
			}
			if (f_24c4_a1_b(tv1)) {
				tv0->AddReply(521229, 34260, 22420);
			}
			tv0->AddReply(505110, -1, 5623);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_3ca_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a1 == 5625) {
				f_22e7_a2_v(tv1, tv0);
			}
			if (a1 == 5632) {
				f_22e7_a2_v(tv1, tv0);
			}
			if (a1 == 9281) {
				f_22ed_a2_v(tv1, tv0);
			}
			if (a1 == 33610) {
				f_23ef_a2_v(tv1, tv0);
				f_22ff_a2_v(tv1, tv0);
			}
			if (a1 == 33611) {
				f_23ef_a2_v(tv1, tv0);
				f_22ff_a2_v(tv1, tv0);
			}
			if (a1 == 34255) {
				f_23ef_a2_v(tv1, tv0);
			}
			if (a1 == 5661) {
				f_22f3_a2_v(tv1, tv0);
			}
			if (a1 == 22425) {
				f_22dd_a2_v(tv1, tv0);
			}
			if (a1 == 22426) {
				f_22dd_a2_v(tv1, tv0);
			}
			if (a1 == 22423) {
				f_22dd_a2_v(tv1, tv0);
			}
			if (a0 == 5624) {
				if (!f_250c_a1_b(tv1)) {
					f_3ca_a1_v("Neutral");
					tv0->SetMessage(505111);
					tv0->ClearReplies();
					if (f_24d0_a1_b(tv1)) {
						tv0->AddReply(505112, 5626, 5625);
					}
					if (f_24d0_a1_b(tv1)) {
						tv0->AddReply(505119, 5626, 5632);
					}
					tv0->AddReply(505120, -1, 5634);
					return;
				}
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(505106);
				tv0->ClearReplies();
				if (f_250c_a1_b(tv1) && f_24dc_a1_b(tv1)) {
					tv0->AddReply(505107, 9234, 5620);
				}
				if (f_2500_a1_b(tv1) && f_26df_a1_b(tv1) && f_24e8_a1_b(tv1)) {
					tv0->AddReply(505142, 5662, 5661);
				}
				if (f_24c4_a1_b(tv1)) {
					tv0->AddReply(521229, 34260, 22420);
				}
				tv0->AddReply(505110, -1, 5623);
				return;
			}
			if (a0 == 34260) {
				f_3ca_a1_v("Surprise");
				tv0->SetMessage(532789);
				tv0->ClearReplies();
				tv0->AddReply(532790, 34264, 34261);
				tv0->AddReply(532791, 34264, 34262);
				tv0->AddReply(532792, 22421, 34263);
				return;
			}
			if (a0 == 34264) {
				f_3ca_a1_v("Surprise");
				tv0->SetMessage(532793);
				tv0->ClearReplies();
				tv0->AddReply(532794, 22421, 34266);
				tv0->AddReply(532795, 34268, 34267);
				tv0->AddReply(532798, 34273, 34272);
				return;
			}
			if (a0 == 34273) {
				f_3ca_a1_v("Surprise");
				tv0->SetMessage(532799);
				tv0->ClearReplies();
				tv0->AddReply(532800, 22421, 34274);
				tv0->AddReply(532801, 22424, 34276);
				return;
			}
			if (a0 == 34268) {
				f_3ca_a1_v("Surprise");
				tv0->SetMessage(532796);
				tv0->ClearReplies();
				tv0->AddReply(532797, 22421, 34270);
				return;
			}
			if (a0 == 22421) {
				f_3ca_a1_v("Surprise");
				tv0->SetMessage(521230);
				tv0->ClearReplies();
				tv0->AddReply(521231, 22424, 22422);
				tv0->AddReply(521232, -1, 22423);
				return;
			}
			if (a0 == 22424) {
				f_3ca_a1_v("Surprise");
				tv0->SetMessage(521233);
				tv0->ClearReplies();
				tv0->AddReply(521234, -1, 22425);
				tv0->AddReply(521235, -1, 22426);
				return;
			}
			if (a0 == 5662) {
				f_3ca_a1_v("Confusion");
				tv0->SetMessage(505143);
				tv0->ClearReplies();
				tv0->AddReply(505144, 5664, 5663);
				tv0->AddReply(505154, 5664, 5674);
				return;
			}
			if (a0 == 5664) {
				f_3ca_a1_v("Confusion");
				tv0->SetMessage(505145);
				tv0->ClearReplies();
				tv0->AddReply(505146, 5666, 5665);
				tv0->AddReply(505153, 5666, 5672);
				return;
			}
			if (a0 == 5666) {
				f_3ca_a1_v("Anger");
				tv0->SetMessage(505147);
				tv0->ClearReplies();
				tv0->AddReply(505148, 34256, 5667);
				tv0->AddReply(505149, -1, 5668);
				return;
			}
			if (a0 == 34256) {
				f_3ca_a1_v("Anger");
				tv0->SetMessage(532785);
				tv0->ClearReplies();
				tv0->AddReply(532786, -1, 34257);
				return;
			}
			if (a0 == 9234) {
				f_3ca_a1_v("Surprise");
				tv0->SetMessage(508411);
				tv0->ClearReplies();
				if (f_25b3_a1_b(tv1)) {
					tv0->AddReply(508448, 9282, 9281);
				}
				if (f_24f4_a1_b(tv1)) {
					tv0->AddReply(508463, 9300, 9299);
				}
				return;
			}
			if (a0 == 9300) {
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(508464);
				tv0->ClearReplies();
				tv0->AddReply(508465, -1, 9301);
				return;
			}
			if (a0 == 9282) {
				f_3ca_a1_v("Surprise");
				tv0->SetMessage(508449);
				tv0->ClearReplies();
				tv0->AddReply(508451, 9287, 9284);
				tv0->AddReply(508452, 9287, 9285);
				tv0->AddReply(508453, 9287, 9286);
				return;
			}
			if (a0 == 9287) {
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(508454);
				tv0->ClearReplies();
				tv0->AddReply(524819, 26132, 26131);
				return;
			}
			if (a0 == 26132) {
				f_3ca_a1_v("Confusion");
				tv0->SetMessage(524820);
				tv0->ClearReplies();
				tv0->AddReply(524821, 26134, 26133);
				tv0->AddReply(508412, 9236, 9235);
				tv0->AddReply(524920, 26250, 26249);
				return;
			}
			if (a0 == 26250) {
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(524921);
				tv0->ClearReplies();
				tv0->AddReply(524922, 9240, 26251);
				tv0->AddReply(524924, 9251, 26254);
				return;
			}
			if (a0 == 9236) {
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(508413);
				tv0->ClearReplies();
				tv0->AddReply(508414, 9238, 9237);
				return;
			}
			if (a0 == 9238) {
				f_3ca_a1_v("Confusion");
				tv0->SetMessage(508415);
				tv0->ClearReplies();
				tv0->AddReply(508416, 9240, 9239);
				tv0->AddReply(508418, 9242, 9241);
				return;
			}
			if (a0 == 9242) {
				f_3ca_a1_v("Surprise");
				tv0->SetMessage(508419);
				tv0->ClearReplies();
				tv0->AddReply(508456, 9292, 9291);
				return;
			}
			if (a0 == 9292) {
				f_3ca_a1_v("Surprise");
				tv0->SetMessage(508457);
				tv0->ClearReplies();
				tv0->AddReply(524827, 26134, 26140);
				return;
			}
			if (a0 == 9240) {
				f_3ca_a1_v("Fear");
				tv0->SetMessage(508417);
				tv0->ClearReplies();
				tv0->AddReply(524826, 26134, 26138);
				return;
			}
			if (a0 == 26134) {
				f_3ca_a1_v("Confusion");
				tv0->SetMessage(524822);
				tv0->ClearReplies();
				tv0->AddReply(524823, 33604, 26135);
				tv0->AddReply(508422, 9251, 9245);
				return;
			}
			if (a0 == 9251) {
				f_3ca_a1_v("Confusion");
				tv0->SetMessage(508428);
				tv0->ClearReplies();
				tv0->AddReply(508429, 9296, 9252);
				return;
			}
			if (a0 == 9296) {
				f_3ca_a1_v("Confusion");
				tv0->SetMessage(508460);
				tv0->ClearReplies();
				tv0->AddReply(524836, 9254, 26151);
				return;
			}
			if (a0 == 33604) {
				f_3ca_a1_v("Confusion");
				tv0->SetMessage(532187);
				tv0->ClearReplies();
				tv0->AddReply(508420, 9244, 9243);
				tv0->AddReply(532775, 34244, 34243);
				return;
			}
			if (a0 == 34244) {
				f_3ca_a1_v("Surprise");
				tv0->SetMessage(532776);
				tv0->ClearReplies();
				tv0->AddReply(532777, 9254, 34245);
				return;
			}
			if (a0 == 9244) {
				f_3ca_a1_v("Confusion");
				tv0->SetMessage(508421);
				tv0->ClearReplies();
				tv0->AddReply(508430, 9254, 9253);
				tv0->AddReply(524845, 9251, 26165);
				return;
			}
			if (a0 == 9254) {
				f_3ca_a1_v("Surprise");
				tv0->SetMessage(508431);
				tv0->ClearReplies();
				tv0->AddReply(524846, 33605, 26167);
				tv0->AddReply(508432, 9256, 9255);
				return;
			}
			if (a0 == 9256) {
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(508433);
				tv0->ClearReplies();
				tv0->AddReply(508434, 9258, 9257);
				return;
			}
			if (a0 == 9258) {
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(508435);
				tv0->ClearReplies();
				tv0->AddReply(508436, 33605, 9259);
				tv0->AddReply(524828, 26143, 26142);
				return;
			}
			if (a0 == 26143) {
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(524829);
				tv0->ClearReplies();
				tv0->AddReply(524830, 33605, 26144);
				return;
			}
			if (a0 == 33605) {
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(532188);
				tv0->ClearReplies();
				tv0->AddReply(532189, 33607, 33606);
				tv0->AddReply(532778, 34248, 34247);
				return;
			}
			if (a0 == 34248) {
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(532779);
				tv0->ClearReplies();
				tv0->AddReply(532780, 34251, 34249);
				tv0->AddReply(532781, 34251, 34250);
				return;
			}
			if (a0 == 34251) {
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(532782);
				tv0->ClearReplies();
				tv0->AddReply(532783, 33607, 34253);
				tv0->AddReply(532784, -1, 34255);
				return;
			}
			if (a0 == 33607) {
				f_3ca_a1_v("Neutral");
				tv0->SetMessage(532190);
				tv0->ClearReplies();
				tv0->AddReply(532191, -1, 33610);
				tv0->AddReply(532192, -1, 33611);
				return;
			}
			if (a0 == 5626) {
				f_3ca_a1_v("Confusion");
				tv0->SetMessage(505113);
				tv0->ClearReplies();
				tv0->AddReply(505114, 5628, 5627);
				tv0->AddReply(505118, -1, 5631);
				return;
			}
			if (a0 == 5628) {
				f_3ca_a1_v("Confusion");
				tv0->SetMessage(505115);
				tv0->ClearReplies();
				tv0->AddReply(505116, -1, 5629);
				tv0->AddReply(505117, -1, 5630);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
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
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t8{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
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
			f_8a2_a1_v("Neutral");
			tv0->SetMessage(506924);
			tv0->ClearReplies();
			if (f_2583_a1_b(tv1) && f_25a7_a1_b(tv1) && f_259b_a1_b(tv1)) {
				tv0->AddReply(506925, 7632, 7631);
			}
			if (f_2577_a1_b(tv1)) {
				tv0->AddReply(532771, 10476, 34238);
			}
			tv0->AddReply(507777, -1, 8579);
			tv0->AddReply(532772, -1, 34239);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_8a2_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a1 == 8194) {
				f_2381_a2_v(tv1, tv0);
				f_238d_a2_v(tv1, tv0);
				f_22f9_a2_v(tv1, tv0);
			}
			if (a1 == 8192) {
				f_2381_a2_v(tv1, tv0);
			}
			if (a1 == 34238) {
				f_237b_a2_v(tv1, tv0);
			}
			if (a0 == 7630) {
				f_8a2_a1_v("Neutral");
				tv0->SetMessage(506924);
				tv0->ClearReplies();
				if (f_2583_a1_b(tv1) && f_25a7_a1_b(tv1) && f_259b_a1_b(tv1)) {
					tv0->AddReply(506925, 7632, 7631);
				}
				if (f_2577_a1_b(tv1)) {
					tv0->AddReply(532771, 10476, 34238);
				}
				tv0->AddReply(507777, -1, 8579);
				tv0->AddReply(532772, -1, 34239);
				return;
			}
			if (a0 == 10476) {
				f_8a2_a1_v("Confusion");
				tv0->SetMessage(509531);
				tv0->ClearReplies();
				tv0->AddReply(509532, 10478, 10477);
				tv0->AddReply(509539, 10478, 10484);
				return;
			}
			if (a0 == 10478) {
				f_8a2_a1_v("Confusion");
				tv0->SetMessage(509533);
				tv0->ClearReplies();
				tv0->AddReply(509534, -1, 10479);
				tv0->AddReply(509535, 10481, 10480);
				return;
			}
			if (a0 == 10481) {
				f_8a2_a1_v("Confusion");
				tv0->SetMessage(509536);
				tv0->ClearReplies();
				tv0->AddReply(509537, -1, 10482);
				tv0->AddReply(509538, -1, 10483);
				return;
			}
			if (a0 == 7632) {
				f_8a2_a1_v("Surprise");
				tv0->SetMessage(506926);
				tv0->ClearReplies();
				tv0->AddReply(506927, 8188, 7633);
				if (f_258f_a1_b(tv1)) {
					tv0->AddReply(507420, 8190, 8189);
				}
				return;
			}
			if (a0 == 8190) {
				f_8a2_a1_v("Neutral");
				tv0->SetMessage(507421);
				tv0->ClearReplies();
				tv0->AddReply(507426, 8197, 8195);
				tv0->AddReply(534040, 35619, 35618);
				return;
			}
			if (a0 == 35619) {
				f_8a2_a1_v("Neutral");
				tv0->SetMessage(534041);
				tv0->ClearReplies();
				tv0->AddReply(534042, 35621, 35620);
				tv0->AddReply(534046, 8188, 35624);
				return;
			}
			if (a0 == 35621) {
				f_8a2_a1_v("Anger");
				tv0->SetMessage(534043);
				tv0->ClearReplies();
				tv0->AddReply(534047, 35628, 35626);
				tv0->AddReply(534048, 35628, 35627);
				return;
			}
			if (a0 == 35628) {
				f_8a2_a1_v("Neutral");
				tv0->SetMessage(534049);
				tv0->ClearReplies();
				tv0->AddReply(534050, 8188, 35629);
				return;
			}
			if (a0 == 8197) {
				f_8a2_a1_v("Neutral");
				tv0->SetMessage(507427);
				tv0->ClearReplies();
				tv0->AddReply(507428, 8188, 8198);
				tv0->AddReply(532773, -1, 34240);
				return;
			}
			if (a0 == 8188) {
				f_2387_a2_v(tv1, tv0);
				f_8a2_a1_v("Confusion");
				tv0->SetMessage(507419);
				tv0->ClearReplies();
				tv0->AddReply(507422, 8193, 8191);
				tv0->AddReply(507423, -1, 8192);
				return;
			}
			if (a0 == 8193) {
				f_8a2_a1_v("Confusion");
				tv0->SetMessage(507424);
				tv0->ClearReplies();
				tv0->AddReply(507425, -1, 8194);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
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
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t10{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
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
			f_add_a1_v("Neutral");
			tv0->SetMessage(510235);
			tv0->ClearReplies();
			if (f_25bf_a1_b(tv1) && f_25cb_a1_b(tv1)) {
				tv0->AddReply(510236, 11288, 11286);
			}
			if (f_25e3_a1_b(tv1) && f_25d7_a1_b(tv1)) {
				tv0->AddReply(510266, 35986, 11320);
			}
			if (f_253c_a1_b(tv1)) {
				tv0->AddReply(510237, 11089, 11287);
			}
			tv0->AddReply(511382, -1, 12578);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_add_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a1 == 11286) {
				f_23bc_a2_v(tv1, tv0);
			}
			if (a1 == 11314) {
				f_23a9_a2_v(tv1, tv0);
				f_23c2_a2_v(tv1, tv0);
			}
			if (a1 == 11315) {
				f_23a9_a2_v(tv1, tv0);
				f_23c2_a2_v(tv1, tv0);
			}
			if (a1 == 11318) {
				f_23a9_a2_v(tv1, tv0);
				f_23c2_a2_v(tv1, tv0);
			}
			if (a1 == 11320) {
				f_23e9_a2_v(tv1, tv0);
			}
			if (a1 == 35992) {
				f_23d2_a2_v(tv1, tv0);
			}
			if (a1 == 35993) {
				f_23d2_a2_v(tv1, tv0);
			}
			if (a1 == 11287) {
				f_234a_a2_v(tv1, tv0);
			}
			if (a0 == 11285) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510235);
				tv0->ClearReplies();
				if (f_25bf_a1_b(tv1) && f_25cb_a1_b(tv1)) {
					tv0->AddReply(510236, 11288, 11286);
				}
				if (f_25e3_a1_b(tv1) && f_25d7_a1_b(tv1)) {
					tv0->AddReply(510266, 35986, 11320);
				}
				if (f_253c_a1_b(tv1)) {
					tv0->AddReply(510237, 11089, 11287);
				}
				tv0->AddReply(511382, -1, 12578);
				return;
			}
			if (a0 == 11089) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510063);
				tv0->ClearReplies();
				tv0->AddReply(510064, 11091, 11090);
				return;
			}
			if (a0 == 11091) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510065);
				tv0->ClearReplies();
				tv0->AddReply(510066, 11093, 11092);
				tv0->AddReply(510070, 11097, 11096);
				return;
			}
			if (a0 == 11097) {
				f_add_a1_v("Surprise");
				tv0->SetMessage(510071);
				tv0->ClearReplies();
				tv0->AddReply(510072, 11099, 11098);
				tv0->AddReply(510080, 11110, 11109);
				tv0->AddReply(510242, 11293, 11292);
				return;
			}
			if (a0 == 11293) {
				f_add_a1_v("Surprise");
				tv0->SetMessage(510243);
				tv0->ClearReplies();
				tv0->AddReply(510244, 11110, 11294);
				tv0->AddReply(510245, 11290, 11295);
				return;
			}
			if (a0 == 11110) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510081);
				tv0->ClearReplies();
				tv0->AddReply(510239, 11290, 11289);
				tv0->AddReply(510083, -1, 11112);
				return;
			}
			if (a0 == 11290) {
				f_add_a1_v("Surprise");
				tv0->SetMessage(510240);
				tv0->ClearReplies();
				tv0->AddReply(510082, -1, 11111);
				return;
			}
			if (a0 == 11099) {
				f_add_a1_v("Surprise");
				tv0->SetMessage(510073);
				tv0->ClearReplies();
				tv0->AddReply(510074, 11101, 11100);
				tv0->AddReply(510079, 11101, 11107);
				return;
			}
			if (a0 == 11101) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510075);
				tv0->ClearReplies();
				tv0->AddReply(510076, 11093, 11102);
				tv0->AddReply(510078, -1, 11106);
				return;
			}
			if (a0 == 11093) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510067);
				tv0->ClearReplies();
				tv0->AddReply(510068, -1, 11094);
				tv0->AddReply(510069, -1, 11095);
				return;
			}
			if (a0 == 35986) {
				f_add_a1_v("Anger");
				tv0->SetMessage(534376);
				tv0->ClearReplies();
				tv0->AddReply(534377, 35988, 35987);
				return;
			}
			if (a0 == 35988) {
				f_add_a1_v("Anger");
				tv0->SetMessage(534378);
				tv0->ClearReplies();
				tv0->AddReply(534379, 11321, 35989);
				tv0->AddReply(534383, 11321, 35996);
				return;
			}
			if (a0 == 11321) {
				f_add_a1_v("Anger");
				tv0->SetMessage(510267);
				tv0->ClearReplies();
				tv0->AddReply(510268, 11323, 11322);
				tv0->AddReply(510270, 11325, 11324);
				return;
			}
			if (a0 == 11325) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510271);
				tv0->ClearReplies();
				tv0->AddReply(510272, 35991, 11326);
				return;
			}
			if (a0 == 11323) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510269);
				tv0->ClearReplies();
				tv0->AddReply(510275, 11330, 11329);
				tv0->AddReply(510273, 11328, 11327);
				return;
			}
			if (a0 == 11328) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510274);
				tv0->ClearReplies();
				tv0->AddReply(510281, 11330, 11336);
				return;
			}
			if (a0 == 11330) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510276);
				tv0->ClearReplies();
				tv0->AddReply(510277, 11332, 11331);
				return;
			}
			if (a0 == 11332) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510278);
				tv0->ClearReplies();
				tv0->AddReply(510279, 35991, 11333);
				tv0->AddReply(510280, 35991, 11335);
				return;
			}
			if (a0 == 35991) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(534380);
				tv0->ClearReplies();
				tv0->AddReply(534381, -1, 35992);
				tv0->AddReply(534382, -1, 35993);
				return;
			}
			if (a0 == 11288) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510238);
				tv0->ClearReplies();
				tv0->AddReply(510246, 11298, 11297);
				tv0->AddReply(510253, 11308, 11304);
				return;
			}
			if (a0 == 11298) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510247);
				tv0->ClearReplies();
				tv0->AddReply(510248, 11300, 11299);
				tv0->AddReply(510258, 11308, 11309);
				return;
			}
			if (a0 == 11300) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510249);
				tv0->ClearReplies();
				tv0->AddReply(510250, 11302, 11301);
				tv0->AddReply(510256, 11302, 11307);
				return;
			}
			if (a0 == 11302) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510251);
				tv0->ClearReplies();
				tv0->AddReply(510259, 11313, 11312);
				return;
			}
			if (a0 == 11313) {
				f_add_a1_v("Confusion");
				tv0->SetMessage(510260);
				tv0->ClearReplies();
				tv0->AddReply(510261, -1, 11314);
				tv0->AddReply(510252, 11308, 11303);
				return;
			}
			if (a0 == 11308) {
				f_add_a1_v("Confusion");
				tv0->SetMessage(510257);
				tv0->ClearReplies();
				tv0->AddReply(510262, -1, 11315);
				tv0->AddReply(510263, 11317, 11316);
				return;
			}
			if (a0 == 11317) {
				f_add_a1_v("Neutral");
				tv0->SetMessage(510264);
				tv0->ClearReplies();
				tv0->AddReply(510265, -1, 11318);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
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
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t12{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
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
			if (f_2548_a1_b(tv1)) {
				f_2350_a2_v(tv1, tv0);
				f_235f_a2_v(tv1, tv0);
				f_e79_a1_v("Neutral");
				tv0->SetMessage(536314);
				tv0->ClearReplies();
				tv0->AddReply(511097, 12285, 12284);
				tv0->AddReply(536312, 12285, 38097);
				break;
			}
			f_e79_a1_v("Neutral");
			tv0->SetMessage(511109);
			tv0->ClearReplies();
			if (f_2554_a1_b(tv1)) {
				tv0->AddReply(511110, 12300, 12299);
			}
			if (f_2560_a1_b(tv1) && f_256c_a1_b(tv1)) {
				tv0->AddReply(511113, 12303, 12302);
			}
			tv0->AddReply(536311, -1, 38096);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_e79_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a1 == 12296) {
				f_2397_a2_v(tv1, tv0);
			}
			if (a1 == 12301) {
				f_2397_a2_v(tv1, tv0);
			}
			if (a1 == 12309) {
				f_2356_a2_v(tv1, tv0);
			}
			if (a1 == 38101) {
				f_2356_a2_v(tv1, tv0);
			}
			if (a0 == 38099) {
				if (f_2548_a1_b(tv1)) {
					f_2350_a2_v(tv1, tv0);
					f_235f_a2_v(tv1, tv0);
					f_e79_a1_v("Neutral");
					tv0->SetMessage(536314);
					tv0->ClearReplies();
					tv0->AddReply(511097, 12285, 12284);
					tv0->AddReply(536312, 12285, 38097);
					return;
				}
				f_e79_a1_v("Neutral");
				tv0->SetMessage(511109);
				tv0->ClearReplies();
				if (f_2554_a1_b(tv1)) {
					tv0->AddReply(511110, 12300, 12299);
				}
				if (f_2560_a1_b(tv1) && f_256c_a1_b(tv1)) {
					tv0->AddReply(511113, 12303, 12302);
				}
				tv0->AddReply(536311, -1, 38096);
				return;
			}
			if (a0 == 12303) {
				f_e79_a1_v("Neutral");
				tv0->SetMessage(511114);
				tv0->ClearReplies();
				tv0->AddReply(511115, 12305, 12304);
				return;
			}
			if (a0 == 12305) {
				f_e79_a1_v("Surprise");
				tv0->SetMessage(511116);
				tv0->ClearReplies();
				tv0->AddReply(511118, 12308, 12307);
				return;
			}
			if (a0 == 12308) {
				f_e79_a1_v("Surprise");
				tv0->SetMessage(511119);
				tv0->ClearReplies();
				tv0->AddReply(511120, -1, 12309);
				tv0->AddReply(536315, -1, 38101);
				return;
			}
			if (a0 == 12300) {
				f_e79_a1_v("Neutral");
				tv0->SetMessage(511111);
				tv0->ClearReplies();
				tv0->AddReply(511112, -1, 12301);
				return;
			}
			if (a0 == 12285) {
				f_e79_a1_v("Confusion");
				tv0->SetMessage(511098);
				tv0->ClearReplies();
				tv0->AddReply(511099, 12287, 12286);
				tv0->AddReply(511104, 12289, 12291);
				return;
			}
			if (a0 == 12287) {
				f_e79_a1_v("Confusion");
				tv0->SetMessage(511100);
				tv0->ClearReplies();
				tv0->AddReply(511101, 12289, 12288);
				tv0->AddReply(511103, 12289, 12290);
				return;
			}
			if (a0 == 12289) {
				f_e79_a1_v("Neutral");
				tv0->SetMessage(511102);
				tv0->ClearReplies();
				tv0->AddReply(511105, 12295, 12294);
				return;
			}
			if (a0 == 12295) {
				f_e79_a1_v("Neutral");
				tv0->SetMessage(511106);
				tv0->ClearReplies();
				tv0->AddReply(511107, -1, 12296);
				tv0->AddReply(511108, -1, 12297);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t13
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t14{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t14
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
			if (f_2637_a1_b(tv1) && !f_25fb_a1_b(tv1) && !f_2607_a1_b(tv1)) {
				f_2448_a2_v(tv1, tv0);
				f_109c_a1_v("Anger");
				tv0->SetMessage(512584);
				tv0->ClearReplies();
				tv0->AddReply(511771, 12991, 12979);
				if (!f_25ef_a1_b(tv1)) {
					tv0->AddReply(512585, 13755, 13752);
				}
				break;
			}
			f_109c_a1_v("Fear");
			tv0->SetMessage(511765);
			tv0->ClearReplies();
			if (f_2613_a1_b(tv1) && f_261f_a1_b(tv1)) {
				tv0->AddReply(511767, 12977, 12975);
			}
			if (f_25fb_a1_b(tv1) && f_262b_a1_b(tv1)) {
				tv0->AddReply(512570, 13740, 13739);
			}
			tv0->AddReply(511766, -1, 12974);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_109c_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a1 == 12998) {
				f_240b_a2_v(tv1, tv0);
			}
			if (a1 == 12999) {
				f_240b_a2_v(tv1, tv0);
			}
			if (a1 == 12975) {
				f_2435_a2_v(tv1, tv0);
			}
			if (a1 == 12989) {
				f_22f9_a2_v(tv1, tv0);
				f_236b_a2_v(tv1, tv0);
			}
			if (a1 == 12990) {
				f_22f9_a2_v(tv1, tv0);
				f_236b_a2_v(tv1, tv0);
			}
			if (a1 == 13739) {
				f_243b_a2_v(tv1, tv0);
			}
			if (a1 == 13741) {
				f_2332_a2_v(tv1, tv0);
				f_2441_a2_v(tv1, tv0);
			}
			if (a1 == 16862) {
				f_2441_a2_v(tv1, tv0);
			}
			if (a0 == 13751) {
				if (f_2637_a1_b(tv1) && !f_25fb_a1_b(tv1) && !f_2607_a1_b(tv1)) {
					f_2448_a2_v(tv1, tv0);
					f_109c_a1_v("Anger");
					tv0->SetMessage(512584);
					tv0->ClearReplies();
					tv0->AddReply(511771, 12991, 12979);
					if (!f_25ef_a1_b(tv1)) {
						tv0->AddReply(512585, 13755, 13752);
					}
					return;
				}
				f_109c_a1_v("Fear");
				tv0->SetMessage(511765);
				tv0->ClearReplies();
				if (f_2613_a1_b(tv1) && f_261f_a1_b(tv1)) {
					tv0->AddReply(511767, 12977, 12975);
				}
				if (f_25fb_a1_b(tv1) && f_262b_a1_b(tv1)) {
					tv0->AddReply(512570, 13740, 13739);
				}
				tv0->AddReply(511766, -1, 12974);
				return;
			}
			if (a0 == 13740) {
				f_109c_a1_v("Neutral");
				tv0->SetMessage(512571);
				tv0->ClearReplies();
				tv0->AddReply(512592, 13763, 13762);
				return;
			}
			if (a0 == 13763) {
				f_109c_a1_v("Neutral");
				tv0->SetMessage(512593);
				tv0->ClearReplies();
				tv0->AddReply(512594, 13765, 13764);
				return;
			}
			if (a0 == 13765) {
				f_109c_a1_v("Neutral");
				tv0->SetMessage(512595);
				tv0->ClearReplies();
				tv0->AddReply(512572, -1, 13741);
				tv0->AddReply(515790, -1, 16862);
				return;
			}
			if (a0 == 12977) {
				f_109c_a1_v("Fear");
				tv0->SetMessage(511769);
				tv0->ClearReplies();
				tv0->AddReply(511770, 12981, 12978);
				tv0->AddReply(511772, 12981, 12980);
				return;
			}
			if (a0 == 12981) {
				f_109c_a1_v("Neutral");
				tv0->SetMessage(511773);
				tv0->ClearReplies();
				tv0->AddReply(511774, 12984, 12983);
				return;
			}
			if (a0 == 12984) {
				f_109c_a1_v("Neutral");
				tv0->SetMessage(511775);
				tv0->ClearReplies();
				tv0->AddReply(511776, 12987, 12985);
				tv0->AddReply(511777, 12987, 12986);
				tv0->AddReply(515789, -1, 16861);
				return;
			}
			if (a0 == 12987) {
				f_109c_a1_v("Neutral");
				tv0->SetMessage(511778);
				tv0->ClearReplies();
				tv0->AddReply(511779, -1, 12989);
				tv0->AddReply(511780, -1, 12990);
				return;
			}
			if (a0 == 13755) {
				f_109c_a1_v("Neutral");
				tv0->SetMessage(512587);
				tv0->ClearReplies();
				tv0->AddReply(512588, 12993, 13756);
				return;
			}
			if (a0 == 12991) {
				f_109c_a1_v("Anger");
				tv0->SetMessage(511781);
				tv0->ClearReplies();
				tv0->AddReply(511782, 12993, 12992);
				return;
			}
			if (a0 == 12993) {
				f_109c_a1_v("Neutral");
				tv0->SetMessage(511783);
				tv0->ClearReplies();
				tv0->AddReply(512589, 12995, 13758);
				tv0->AddReply(511784, 13760, 12994);
				return;
			}
			if (a0 == 12995) {
				f_109c_a1_v("Confusion");
				tv0->SetMessage(511785);
				tv0->ClearReplies();
				tv0->AddReply(512590, 13760, 13759);
				return;
			}
			if (a0 == 13760) {
				f_109c_a1_v("Neutral");
				tv0->SetMessage(512591);
				tv0->ClearReplies();
				tv0->AddReply(511786, 12997, 12996);
				tv0->AddReply(515791, 12997, 16863);
				return;
			}
			if (a0 == 12997) {
				f_109c_a1_v("Neutral");
				tv0->SetMessage(511787);
				tv0->ClearReplies();
				tv0->AddReply(511788, -1, 12998);
				tv0->AddReply(511789, -1, 12999);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t15
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t16{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t16
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
			f_1326_a1_v("Neutral");
			tv0->SetMessage(533245);
			tv0->ClearReplies();
			if (f_2518_a1_b(tv1)) {
				tv0->AddReply(533246, 42854, 34760);
			}
			tv0->AddReply(540800, -1, 42851);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_1326_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a1 == 34767) {
				f_2319_a2_v(tv1, tv0);
			}
			if (a1 == 42862) {
				f_2319_a2_v(tv1, tv0);
			}
			if (a1 == 42863) {
				f_2319_a2_v(tv1, tv0);
			}
			if (a0 == 34759) {
				f_1326_a1_v("Neutral");
				tv0->SetMessage(533245);
				tv0->ClearReplies();
				if (f_2518_a1_b(tv1)) {
					tv0->AddReply(533246, 42854, 34760);
				}
				tv0->AddReply(540800, -1, 42851);
				return;
			}
			if (a0 == 42854) {
				f_1326_a1_v("Neutral");
				tv0->SetMessage(540803);
				tv0->ClearReplies();
				tv0->AddReply(540804, 34761, 42855);
				tv0->AddReply(540805, 42857, 42856);
				return;
			}
			if (a0 == 42857) {
				f_1326_a1_v("Neutral");
				tv0->SetMessage(540806);
				tv0->ClearReplies();
				tv0->AddReply(540807, 34764, 42858);
				return;
			}
			if (a0 == 34761) {
				f_1326_a1_v("Neutral");
				tv0->SetMessage(533247);
				tv0->ClearReplies();
				tv0->AddReply(533249, 34764, 34763);
				return;
			}
			if (a0 == 34764) {
				f_1326_a1_v("Neutral");
				tv0->SetMessage(533250);
				tv0->ClearReplies();
				tv0->AddReply(540808, 42861, 42860);
				tv0->AddReply(540811, -1, 42863);
				return;
			}
			if (a0 == 42861) {
				f_1326_a1_v("Neutral");
				tv0->SetMessage(540809);
				tv0->ClearReplies();
				tv0->AddReply(533251, 34766, 34765);
				tv0->AddReply(540810, -1, 42862);
				return;
			}
			if (a0 == 34766) {
				f_1326_a1_v("Neutral");
				tv0->SetMessage(533252);
				tv0->ClearReplies();
				tv0->AddReply(533253, -1, 34767);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t17
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t18{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t18
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
			if (f_265b_a1_b(tv1) && f_264f_a1_b(tv1)) {
				f_2483_a2_v(tv1, tv0);
				f_14b0_a1_v("Neutral");
				tv0->SetMessage(512275);
				tv0->ClearReplies();
				tv0->AddReply(512276, 13435, 13433);
				tv0->AddReply(512277, 13435, 13434);
				break;
			}
			f_14b0_a1_v("Neutral");
			tv0->SetMessage(513779);
			tv0->ClearReplies();
			tv0->AddReply(513780, -1, 15016);
			tv0->AddReply(541598, -1, 43762);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_14b0_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a0 == 13432) {
				if (f_265b_a1_b(tv1) && f_264f_a1_b(tv1)) {
					f_2483_a2_v(tv1, tv0);
					f_14b0_a1_v("Neutral");
					tv0->SetMessage(512275);
					tv0->ClearReplies();
					tv0->AddReply(512276, 13435, 13433);
					tv0->AddReply(512277, 13435, 13434);
					return;
				}
				f_14b0_a1_v("Neutral");
				tv0->SetMessage(513779);
				tv0->ClearReplies();
				tv0->AddReply(513780, -1, 15016);
				tv0->AddReply(541598, -1, 43762);
				return;
			}
			if (a0 == 13435) {
				f_14b0_a1_v("Neutral");
				tv0->SetMessage(512278);
				tv0->ClearReplies();
				tv0->AddReply(512279, 13439, 13437);
				tv0->AddReply(512280, 13439, 13438);
				return;
			}
			if (a0 == 13439) {
				f_14b0_a1_v("Surprise");
				tv0->SetMessage(512281);
				tv0->ClearReplies();
				tv0->AddReply(512282, 13442, 13441);
				tv0->AddReply(541834, 13442, 44049);
				return;
			}
			if (a0 == 13442) {
				f_14b0_a1_v("Surprise");
				tv0->SetMessage(512283);
				tv0->ClearReplies();
				tv0->AddReply(512284, 13444, 13443);
				return;
			}
			if (a0 == 13444) {
				f_14b0_a1_v("Neutral");
				tv0->SetMessage(512285);
				tv0->ClearReplies();
				tv0->AddReply(512286, 13446, 13445);
				return;
			}
			if (a0 == 13446) {
				f_14b0_a1_v("Neutral");
				tv0->SetMessage(512287);
				tv0->ClearReplies();
				tv0->AddReply(512288, 13448, 13447);
				tv0->AddReply(541836, 13448, 44052);
				return;
			}
			if (a0 == 13448) {
				f_14b0_a1_v("Neutral");
				tv0->SetMessage(512289);
				tv0->ClearReplies();
				tv0->AddReply(512290, 13450, 13449);
				return;
			}
			if (a0 == 13450) {
				f_14b0_a1_v("Surprise");
				tv0->SetMessage(512291);
				tv0->ClearReplies();
				tv0->AddReply(512292, -1, 13451);
				tv0->AddReply(541837, -1, 44054);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t19
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t20{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t20
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
			if (f_2667_a1_b(tv1)) {
				f_2489_a2_v(tv1, tv0);
				f_2375_a2_v(tv1, tv0);
				f_166f_a1_v("Neutral");
				tv0->SetMessage(513994);
				tv0->ClearReplies();
				tv0->AddReply(538808, 40728, 40727);
				tv0->AddReply(538813, 40730, 40732);
				break;
			}
			f_166f_a1_v("Neutral");
			tv0->SetMessage(514011);
			tv0->ClearReplies();
			if (f_26d3_a1_b(tv1)) {
				tv0->AddReply(514012, 15248, 15247);
			}
			if (f_2673_a1_b(tv1) && f_267f_a1_b(tv1)) {
				tv0->AddReply(514029, 15265, 15264);
			}
			tv0->AddReply(514039, -1, 15274);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_166f_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a1 == 15244) {
				f_248f_a2_v(tv1, tv0);
			}
			if (a1 == 15245) {
				f_248f_a2_v(tv1, tv0);
			}
			if (a1 == 15247) {
				f_24be_a2_v(tv1, tv0);
			}
			if (a1 == 15264) {
				f_24a0_a2_v(tv1, tv0);
			}
			if (a0 == 15229) {
				if (f_2667_a1_b(tv1)) {
					f_2489_a2_v(tv1, tv0);
					f_2375_a2_v(tv1, tv0);
					f_166f_a1_v("Neutral");
					tv0->SetMessage(513994);
					tv0->ClearReplies();
					tv0->AddReply(538808, 40728, 40727);
					tv0->AddReply(538813, 40730, 40732);
					return;
				}
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514011);
				tv0->ClearReplies();
				if (f_26d3_a1_b(tv1)) {
					tv0->AddReply(514012, 15248, 15247);
				}
				if (f_2673_a1_b(tv1) && f_267f_a1_b(tv1)) {
					tv0->AddReply(514029, 15265, 15264);
				}
				tv0->AddReply(514039, -1, 15274);
				return;
			}
			if (a0 == 15265) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514030);
				tv0->ClearReplies();
				tv0->AddReply(514031, 15267, 15266);
				return;
			}
			if (a0 == 15267) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514032);
				tv0->ClearReplies();
				if (f_268b_a1_b(tv1)) {
					tv0->AddReply(514033, 15269, 15268);
				}
				tv0->AddReply(514038, -1, 15273);
				return;
			}
			if (a0 == 15269) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514034);
				tv0->ClearReplies();
				tv0->AddReply(514035, -1, 15270);
				tv0->AddReply(514036, -1, 15271);
				tv0->AddReply(514037, -1, 15272);
				return;
			}
			if (a0 == 15248) {
				f_166f_a1_v("Confusion");
				tv0->SetMessage(514013);
				tv0->ClearReplies();
				tv0->AddReply(514014, 15250, 15249);
				tv0->AddReply(514024, 15260, 15259);
				return;
			}
			if (a0 == 15260) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514025);
				tv0->ClearReplies();
				tv0->AddReply(514026, 15262, 15261);
				tv0->AddReply(538812, 40751, 40731);
				return;
			}
			if (a0 == 40751) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(538826);
				tv0->ClearReplies();
				tv0->AddReply(538827, 15262, 40752);
				return;
			}
			if (a0 == 15262) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514027);
				tv0->ClearReplies();
				tv0->AddReply(514028, -1, 15263);
				tv0->AddReply(538828, 15250, 40754);
				return;
			}
			if (a0 == 15250) {
				f_166f_a1_v("Confusion");
				tv0->SetMessage(514015);
				tv0->ClearReplies();
				tv0->AddReply(514016, 15252, 15251);
				return;
			}
			if (a0 == 15252) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514017);
				tv0->ClearReplies();
				tv0->AddReply(514018, -1, 15253);
				tv0->AddReply(514019, 15255, 15254);
				return;
			}
			if (a0 == 15255) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514020);
				tv0->ClearReplies();
				tv0->AddReply(514021, 15257, 15256);
				return;
			}
			if (a0 == 15257) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514022);
				tv0->ClearReplies();
				tv0->AddReply(514023, -1, 15258);
				tv0->AddReply(541838, -1, 44055);
				return;
			}
			if (a0 == 40728) {
				f_166f_a1_v("Confusion");
				tv0->SetMessage(538809);
				tv0->ClearReplies();
				tv0->AddReply(538810, 40730, 40729);
				tv0->AddReply(538814, 40735, 40734);
				return;
			}
			if (a0 == 40735) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(538815);
				tv0->ClearReplies();
				tv0->AddReply(538816, 40737, 40736);
				return;
			}
			if (a0 == 40737) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(538817);
				tv0->ClearReplies();
				tv0->AddReply(538818, 40740, 40738);
				tv0->AddReply(538819, -1, 40739);
				return;
			}
			if (a0 == 40740) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(538820);
				tv0->ClearReplies();
				tv0->AddReply(538821, 40730, 40741);
				return;
			}
			if (a0 == 40730) {
				f_166f_a1_v("Confusion");
				tv0->SetMessage(538811);
				tv0->ClearReplies();
				tv0->AddReply(513995, 15231, 15230);
				tv0->AddReply(538822, 15233, 40743);
				return;
			}
			if (a0 == 15231) {
				f_166f_a1_v("Surprise");
				tv0->SetMessage(513996);
				tv0->ClearReplies();
				tv0->AddReply(513997, 15233, 15232);
				tv0->AddReply(538823, 15237, 40745);
				return;
			}
			if (a0 == 15233) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(513998);
				tv0->ClearReplies();
				tv0->AddReply(513999, 15235, 15234);
				return;
			}
			if (a0 == 15235) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514000);
				tv0->ClearReplies();
				tv0->AddReply(514001, 15237, 15236);
				return;
			}
			if (a0 == 15237) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514002);
				tv0->ClearReplies();
				tv0->AddReply(514003, 15239, 15238);
				tv0->AddReply(538825, 15241, 40749);
				return;
			}
			if (a0 == 15239) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514004);
				tv0->ClearReplies();
				tv0->AddReply(514005, 15241, 15240);
				return;
			}
			if (a0 == 15241) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514006);
				tv0->ClearReplies();
				tv0->AddReply(514007, 15243, 15242);
				tv0->AddReply(514010, -1, 15245);
				return;
			}
			if (a0 == 15243) {
				f_166f_a1_v("Neutral");
				tv0->SetMessage(514008);
				tv0->ClearReplies();
				tv0->AddReply(514009, -1, 15244);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t21
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t22{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t22
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
			if (f_2530_a1_b(tv1)) {
				f_2334_a2_v(tv1, tv0);
				f_2365_a2_v(tv1, tv0);
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(534501);
				tv0->ClearReplies();
				tv0->AddReply(538426, 40303, 40302);
				tv0->AddReply(538432, 40311, 40308);
				break;
			}
			f_19d1_a1_v("Neutral");
			tv0->SetMessage(514377);
			tv0->ClearReplies();
			if (f_26a3_a1_b(tv1) && f_2697_a1_b(tv1)) {
				tv0->AddReply(538451, 15592, 40333);
			}
			if (!f_26a3_a1_b(tv1) && f_26af_a1_b(tv1) && f_26bb_a1_b(tv1)) {
				tv0->AddReply(514378, 15602, 15601);
			}
			tv0->AddReply(538442, -1, 40321);
			tv0->AddReply(514419, -1, 15644);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_19d1_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a1 == 36145) {
				f_233a_a2_v(tv1, tv0);
			}
			if (a1 == 40329) {
				f_233a_a2_v(tv1, tv0);
			}
			if (a1 == 40333) {
				f_24a6_a2_v(tv1, tv0);
			}
			if (a1 == 15601) {
				f_24ac_a2_v(tv1, tv0);
			}
			if (a0 == 36142) {
				if (f_2530_a1_b(tv1)) {
					f_2334_a2_v(tv1, tv0);
					f_2365_a2_v(tv1, tv0);
					f_19d1_a1_v("Neutral");
					tv0->SetMessage(534501);
					tv0->ClearReplies();
					tv0->AddReply(538426, 40303, 40302);
					tv0->AddReply(538432, 40311, 40308);
					return;
				}
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(514377);
				tv0->ClearReplies();
				if (f_26a3_a1_b(tv1) && f_2697_a1_b(tv1)) {
					tv0->AddReply(538451, 15592, 40333);
				}
				if (!f_26a3_a1_b(tv1) && f_26af_a1_b(tv1) && f_26bb_a1_b(tv1)) {
					tv0->AddReply(514378, 15602, 15601);
				}
				tv0->AddReply(538442, -1, 40321);
				tv0->AddReply(514419, -1, 15644);
				return;
			}
			if (a0 == 15602) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(514379);
				tv0->ClearReplies();
				tv0->AddReply(514380, 15604, 15603);
				tv0->AddReply(514399, 15604, 15623);
				return;
			}
			if (a0 == 15604) {
				f_19d1_a1_v("Surprise");
				tv0->SetMessage(514381);
				tv0->ClearReplies();
				tv0->AddReply(514382, 15606, 15605);
				return;
			}
			if (a0 == 15606) {
				f_19d1_a1_v("Surprise");
				tv0->SetMessage(514383);
				tv0->ClearReplies();
				tv0->AddReply(514384, 15608, 15607);
				return;
			}
			if (a0 == 15608) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(514385);
				tv0->ClearReplies();
				if (f_26c7_a1_b(tv1)) {
					tv0->AddReply(514386, 15610, 15609);
				}
				tv0->AddReply(514398, -1, 15622);
				return;
			}
			if (a0 == 15610) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(514387);
				tv0->ClearReplies();
				tv0->AddReply(514388, 15612, 15611);
				return;
			}
			if (a0 == 15612) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(514389);
				tv0->ClearReplies();
				tv0->AddReply(514390, 15614, 15613);
				return;
			}
			if (a0 == 15614) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(514391);
				tv0->ClearReplies();
				tv0->AddReply(514392, 15616, 15615);
				tv0->AddReply(514397, 15616, 15620);
				return;
			}
			if (a0 == 15616) {
				f_19d1_a1_v("Confusion");
				tv0->SetMessage(514393);
				tv0->ClearReplies();
				tv0->AddReply(514394, 15618, 15617);
				return;
			}
			if (a0 == 15618) {
				f_19d1_a1_v("Confusion");
				tv0->SetMessage(514395);
				tv0->ClearReplies();
				tv0->AddReply(514396, -1, 15619);
				tv0->AddReply(539600, -1, 41546);
				return;
			}
			if (a0 == 15592) {
				f_19d1_a1_v("Fear");
				tv0->SetMessage(514369);
				tv0->ClearReplies();
				tv0->AddReply(538448, 40331, 40330);
				tv0->AddReply(514376, -1, 15599);
				return;
			}
			if (a0 == 40331) {
				f_19d1_a1_v("Fear");
				tv0->SetMessage(538449);
				tv0->ClearReplies();
				tv0->AddReply(514370, 15594, 15593);
				tv0->AddReply(538450, -1, 40332);
				return;
			}
			if (a0 == 15594) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(514371);
				tv0->ClearReplies();
				tv0->AddReply(514372, 15596, 15595);
				return;
			}
			if (a0 == 15596) {
				f_19d1_a1_v("Fear");
				tv0->SetMessage(514373);
				tv0->ClearReplies();
				tv0->AddReply(514374, -1, 15597);
				tv0->AddReply(514375, -1, 15598);
				return;
			}
			if (a0 == 40311) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(538435);
				tv0->ClearReplies();
				tv0->AddReply(538436, 40313, 40312);
				tv0->AddReply(538438, 40303, 40314);
				return;
			}
			if (a0 == 40313) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(538437);
				tv0->ClearReplies();
				tv0->AddReply(538439, 40303, 40316);
				return;
			}
			if (a0 == 40303) {
				f_19d1_a1_v("Confusion");
				tv0->SetMessage(538427);
				tv0->ClearReplies();
				tv0->AddReply(538428, 40305, 40304);
				tv0->AddReply(538433, 40310, 40309);
				return;
			}
			if (a0 == 40310) {
				f_19d1_a1_v("Surprise");
				tv0->SetMessage(538434);
				tv0->ClearReplies();
				tv0->AddReply(538440, 40305, 40318);
				return;
			}
			if (a0 == 40305) {
				f_19d1_a1_v("Confusion");
				tv0->SetMessage(538429);
				tv0->ClearReplies();
				tv0->AddReply(538430, 38458, 40306);
				tv0->AddReply(538441, 38458, 40320);
				return;
			}
			if (a0 == 38458) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(536630);
				tv0->ClearReplies();
				tv0->AddReply(538443, 40307, 40322);
				tv0->AddReply(536631, 38460, 38459);
				return;
			}
			if (a0 == 40307) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(538431);
				tv0->ClearReplies();
				tv0->AddReply(536629, 38460, 38457);
				tv0->AddReply(538444, 40325, 40324);
				return;
			}
			if (a0 == 40325) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(538445);
				tv0->ClearReplies();
				tv0->AddReply(538446, 38460, 40326);
				return;
			}
			if (a0 == 38460) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(536632);
				tv0->ClearReplies();
				tv0->AddReply(536633, 38462, 38461);
				tv0->AddReply(538447, -1, 40329);
				return;
			}
			if (a0 == 38462) {
				f_19d1_a1_v("Neutral");
				tv0->SetMessage(536634);
				tv0->ClearReplies();
				tv0->AddReply(534504, -1, 36145);
				tv0->AddReply(534505, -1, 36146);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t23
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t24{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t24
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
			f_1d02_a1_v("Neutral");
			tv0->SetMessage(534101);
			tv0->ClearReplies();
			if (f_2524_a1_b(tv1)) {
				tv0->AddReply(534102, 35697, 35695);
			}
			tv0->AddReply(534103, -1, 35696);
			tv0->AddReply(536433, -1, 38218);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_1d02_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a1 == 35700) {
				f_2322_a2_v(tv1, tv0);
				f_238d_a2_v(tv1, tv0);
				f_22f9_a2_v(tv1, tv0);
				f_232b_a2_v(tv1, tv0);
			}
			if (a1 == 38262) {
				f_2322_a2_v(tv1, tv0);
				f_232b_a2_v(tv1, tv0);
				f_230f_a2_v(tv1, tv0);
				f_22f9_a2_v(tv1, tv0);
			}
			if (a0 == 35694) {
				f_1d02_a1_v("Neutral");
				tv0->SetMessage(534101);
				tv0->ClearReplies();
				if (f_2524_a1_b(tv1)) {
					tv0->AddReply(534102, 35697, 35695);
				}
				tv0->AddReply(534103, -1, 35696);
				tv0->AddReply(536433, -1, 38218);
				return;
			}
			if (a0 == 35697) {
				f_1d02_a1_v("Neutral");
				tv0->SetMessage(534104);
				tv0->ClearReplies();
				tv0->AddReply(536434, 38220, 38219);
				tv0->AddReply(536440, 38226, 38225);
				return;
			}
			if (a0 == 38226) {
				f_1d02_a1_v("Neutral");
				tv0->SetMessage(536441);
				tv0->ClearReplies();
				tv0->AddReply(536442, 38220, 38227);
				tv0->AddReply(536443, 38230, 38229);
				return;
			}
			if (a0 == 38220) {
				f_1d02_a1_v("Neutral");
				tv0->SetMessage(536435);
				tv0->ClearReplies();
				tv0->AddReply(536436, 38222, 38221);
				tv0->AddReply(536451, 38230, 38238);
				return;
			}
			if (a0 == 38222) {
				f_1d02_a1_v("Neutral");
				tv0->SetMessage(536437);
				tv0->ClearReplies();
				tv0->AddReply(536438, 38230, 38223);
				tv0->AddReply(536446, 38230, 38232);
				return;
			}
			if (a0 == 38230) {
				f_1d02_a1_v("Neutral");
				tv0->SetMessage(536444);
				tv0->ClearReplies();
				tv0->AddReply(536445, 38234, 38231);
				tv0->AddReply(536452, 38241, 38240);
				return;
			}
			if (a0 == 38241) {
				f_1d02_a1_v("Surprise");
				tv0->SetMessage(536453);
				tv0->ClearReplies();
				tv0->AddReply(536454, 38234, 38242);
				return;
			}
			if (a0 == 38234) {
				f_1d02_a1_v("Neutral");
				tv0->SetMessage(536447);
				tv0->ClearReplies();
				tv0->AddReply(536448, 38236, 38235);
				tv0->AddReply(536461, 38253, 38251);
				return;
			}
			if (a0 == 38236) {
				f_1d02_a1_v("Surprise");
				tv0->SetMessage(536449);
				tv0->ClearReplies();
				tv0->AddReply(536459, 38224, 38248);
				tv0->AddReply(536462, 38253, 38252);
				return;
			}
			if (a0 == 38253) {
				f_1d02_a1_v("Surprise");
				tv0->SetMessage(536463);
				tv0->ClearReplies();
				tv0->AddReply(536464, 38224, 38255);
				return;
			}
			if (a0 == 38224) {
				f_1d02_a1_v("Surprise");
				tv0->SetMessage(536439);
				tv0->ClearReplies();
				tv0->AddReply(536466, 38258, 38257);
				return;
			}
			if (a0 == 38258) {
				f_1d02_a1_v("Neutral");
				tv0->SetMessage(536467);
				tv0->ClearReplies();
				tv0->AddReply(534105, 35699, 35698);
				tv0->AddReply(536468, 35699, 38260);
				return;
			}
			if (a0 == 35699) {
				f_1d02_a1_v("Neutral");
				tv0->SetMessage(534106);
				tv0->ClearReplies();
				tv0->AddReply(534107, -1, 35700);
				tv0->AddReply(536469, -1, 38262);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t25
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t26{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t26
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
			f_1f0a_a1_v("Neutral");
			tv0->SetMessage(535665);
			tv0->ClearReplies();
			tv0->AddReply(535666, 42176, 37352);
			tv0->AddReply(540007, -1, 41978);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_1f0a_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a0 == 37351) {
				f_1f0a_a1_v("Neutral");
				tv0->SetMessage(535665);
				tv0->ClearReplies();
				tv0->AddReply(535666, 42176, 37352);
				tv0->AddReply(540007, -1, 41978);
				return;
			}
			if (a0 == 42176) {
				f_1f0a_a1_v("Confusion");
				tv0->SetMessage(540197);
				tv0->ClearReplies();
				tv0->AddReply(540198, 42216, 42177);
				tv0->AddReply(540232, 42214, 42213);
				return;
			}
			if (a0 == 42216) {
				f_1f0a_a1_v("Confusion");
				tv0->SetMessage(540234);
				tv0->ClearReplies();
				tv0->AddReply(540235, 42214, 42217);
				tv0->AddReply(540236, -1, 42218);
				return;
			}
			if (a0 == 42214) {
				f_1f0a_a1_v("Neutral");
				tv0->SetMessage(540233);
				tv0->ClearReplies();
				tv0->AddReply(540237, 42221, 42219);
				tv0->AddReply(540238, -1, 42220);
				return;
			}
			if (a0 == 42221) {
				f_1f0a_a1_v("Surprise");
				tv0->SetMessage(540239);
				tv0->ClearReplies();
				tv0->AddReply(540240, 42224, 42222);
				return;
			}
			if (a0 == 42224) {
				f_1f0a_a1_v("Surprise");
				tv0->SetMessage(540242);
				tv0->ClearReplies();
				tv0->AddReply(540243, -1, 42225);
				tv0->AddReply(540241, -1, 42223);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t27
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_211f_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_22d5_a0_i());
		L0->SetNPCDescription(f_22d3_a0_i());
		L0->SetPhoto(f_22d7_a0_s());
		L0->SetPhoto2(f_22d9_a0_s());
		L0->SetPlayerName(f_2846_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_2176_a1_b(f_2235_a0_o());
		t28{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_2164_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t28
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
			f_2043_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_22db_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_2200_a1_v(tv2);
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

	void f_2043_a1_v(string a0)
	{
		if (!f_22db_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_2210_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_222e_a0_v();
			if (a0 == 42551) {
				f_2043_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_22db_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t29
{
	var bool tv0;
	var Vector tv1;
	var Vector tv2;

	void init(void)
	{
		g1 = false;
		f_2092_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "icot_viktor_NPC_Trigger") {
			f_20b9_a0_v();
		}
	}

	void f_2092_a0_v(void)
	{
		@GetPosition(tv1);
		@GetDirection(tv2);
		tv0 = false;
		if (!f_211a_a0_b()) {
			t0{};
			f_20ae_a0_v();
		}
		for (; ; ) {
			f_2200_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void f_20ae_a0_v(void)
	{
		@SetPosition(tv1);
		@SetDirection(tv2);
		tv0 = false;
		@LockAnimation("all", "stand", 0);
	}

	void f_20b9_a0_v(void)
	{
		if (!tv0) {
			tv0 = true;
			@PlayAnimation("all", "stand");
			@WaitForAnimEnd();
		}
	}

	void OnUnload(void)
	{
		t0{};
		f_20ae_a0_v();
	}

	void OnUse(object a0)
	{
		if (tv0) {
			bool L0;
			@IsOverrideActive(L0);
			if (!L0) {
				disable OnUse;
				f_2111_a1_b(a0);
				enable OnUse;
				f_2857_a1_v(a0);
			}
		}
	}
}

bool f_20de_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_20ea_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_20de_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_2245_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_2100_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_2107_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_2111_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_2107_a1_b(L0);
}

bool f_211a_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_211f_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_223b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_22db_a0_b()) {
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

void f_2164_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_22db_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_2176_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_21b0_a1_b(a0)) {
			if (!f_21d5_a1_b(a0)) {
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
		if (!f_21d5_a1_b(a0)) {
			if (!f_21b0_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_21b0_a1_b(object a0)
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
	return f_221f_a1_b(L4);
}

bool f_21d5_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_22c4_a0_i() + "m";
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
	return f_221f_a1_b(L4);
}

void f_2200_a1_v(string a0)
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

void f_2210_a2_v(string a0, bool a1)
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

bool f_221f_a1_b(string a0)
{
	if (f_22db_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_222e_a0_v(void)
{
	if (f_22db_a0_b()) {
		@lshStopSpeech();
	}
}

object f_2235_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_223b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_2245_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_2250_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_2255_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_2260_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_226c_a2_v(object a0, int a1)
{
	f_2100_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_2260_a2_v(L0, a1);
	}
}

bool f_227f_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_2286_a2_b(object a0, float a1)
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
	f_22a9_a1_v(a1);
	f_20ea_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_22a9_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_22b3_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_22bf_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_22c4_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_22cd_a1_b(int a0)
{
	return f_22c4_a0_i() == a0;
}

int f_22d3_a0_i(void)
{
	return 515554;
}

int f_22d5_a0_i(void)
{
	return 502879;
}

string f_22d7_a0_s(void)
{
	return "ui/NPC_Viktor.png";
}

string f_22d9_a0_s(void)
{
	return "ui/NPC_Viktor_b.png";
}

bool f_22db_a0_b(void)
{
	return true;
}

void f_22dd_a2_v(object a0, object a1)
{
	f_2735_a0_v();
	f_22b3_a2_b("quest_d1_02", "fail");
}

void f_22e7_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor1", 1);
}

void f_22ed_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor2", 1);
}

void f_22f3_a2_v(object a0, object a1)
{
	@SetVariable("ood1Viktor3", 1);
}

void f_22f9_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_22ff_a2_v(object a0, object a1)
{
	f_2825_a3_v(f_2814_a0_o(), "pt_b1q05_patrol_house", 2);
	a1->ShowMap(f_2814_a0_o());
}

void f_230f_a2_v(object a0, object a1)
{
	@Trace("money 7000 is given");
	f_226c_a2_v(a0, 7000);
}

void f_2319_a2_v(object a0, object a1)
{
	@SetVariable("d7q03", 3);
	f_27c4_a0_v();
}

void f_2322_a2_v(object a0, object a1)
{
	@SetVariable("d10q02", 3);
	f_2701_a0_v();
}

void f_232b_a2_v(object a0, object a1)
{
	f_22b3_a2_b("quest_d10_02", "unlock_georg");
}

void f_2332_a2_v(object a0, object a1)
{
}

void f_2334_a2_v(object a0, object a1)
{
	@SetVariable("ood11Viktor4", 1);
}

void f_233a_a2_v(object a0, object a1)
{
	@SetVariable("d11q06", 1);
	f_270e_a0_v();
	f_271b_a0_v();
	f_2255_a1_o("quest_d11_06");
}

void f_234a_a2_v(object a0, object a1)
{
	@SetVariable("ood3Viktor3", 1);
}

void f_2350_a2_v(object a0, object a1)
{
	@SetVariable("ood4Viktor1", 1);
}

void f_2356_a2_v(object a0, object a1)
{
	@SetVariable("d4q04", 1000);
	f_2769_a0_v();
}

void f_235f_a2_v(object a0, object a1)
{
	@SetVariable("d4ViktorVisit", 1);
}

void f_2365_a2_v(object a0, object a1)
{
	@SetVariable("d11ViktorVisit", 1);
}

void f_236b_a2_v(object a0, object a1)
{
	@Trace("money25000 is given");
	f_226c_a2_v(a0, 25000);
}

void f_2375_a2_v(object a0, object a1)
{
	@SetVariable("d9ViktorVisit", 1);
}

void f_237b_a2_v(object a0, object a1)
{
	@SetVariable("ood2Viktor2", 1);
}

void f_2381_a2_v(object a0, object a1)
{
	@SetVariable("ood2Viktor1", 1);
}

void f_2387_a2_v(object a0, object a1)
{
	@SetVariable("KnowRavell", 1);
}

void f_238d_a2_v(object a0, object a1)
{
	@Trace("money 5000 is given");
	f_226c_a2_v(a0, 5000);
}

void f_2397_a2_v(object a0, object a1)
{
	@SetVariable("d4q04", 1);
	f_275c_a0_v();
	f_2776_a0_v();
}

void f_23a3_a2_v(object a0, object a1)
{
	@SetVariable("KnowViktor", 1);
}

void f_23a9_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2814_a0_o();
	L0->AddMark("d3q02ViktorGotoMladVlad", "pt_map_mladvlad", 0, 511380, f_22bf_a0_f());
	f_274f_a0_v();
}

void f_23bc_a2_v(object a0, object a1)
{
	@SetVariable("ood3Viktor1", 1);
}

void f_23c2_a2_v(object a0, object a1)
{
	f_2825_a3_v(f_2814_a0_o(), "pt_map_mladvlad", 2);
	a1->ShowMap(f_2814_a0_o());
}

void f_23d2_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d3q02", 3);
	L0 = f_2814_a0_o();
	L0->AddMark("d3q02ViktorGotoHan", "pt_map_han", 0, 511385, f_22bf_a0_f());
	f_2742_a0_v();
}

void f_23e9_a2_v(object a0, object a1)
{
	@SetVariable("ood3Viktor2", 1);
}

void f_23ef_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d1q01", 2);
	L0 = f_2814_a0_o();
	L0->AddMark("d1q01ViktorGotoIsidor", "pt_map_burah_father", 1, 508637, f_22bf_a0_f());
	f_2728_a0_v();
	f_22b3_a2_b("quest_d1_01", "place_patrol");
}

void f_240b_a2_v(object a0, object a1)
{
	if (f_2250_a1_i("d5q03") == 0) {
		object L0;
		@SetVariable("d5q03", 1);
		L0 = f_2814_a0_o();
		L0->AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", 0, 515370, f_22bf_a0_f());
		f_2783_a0_v();
		f_2790_a0_v();
		f_2255_a1_o("quest_d5_03");
		f_22b3_a2_b("quest_d5_03", "place_prisoners");
	}
}

void f_2435_a2_v(object a0, object a1)
{
	@SetVariable("ood5Viktor1", 1);
}

void f_243b_a2_v(object a0, object a1)
{
	@SetVariable("ood5Viktor2", 1);
}

void f_2441_a2_v(object a0, object a1)
{
	f_2286_a2_b(a0, 0.30000001192092896);
}

void f_2448_a2_v(object a0, object a1)
{
	@SetVariable("ood5Viktor3", 1);
}

void f_244e_a2_v(object a0, object a1)
{
	@SetVariable("ood6Viktor1", 1);
}

void f_2454_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d6q01", 1);
	L0 = f_2814_a0_o();
	L0->AddMark("d6q01ViktorGotoAlexandr", "pt_map_alexandr", 1, 515383, f_22bf_a0_f());
	L0->AddMark("d6q01ViktorGotoBigVlad", "pt_map_bigvlad", 1, 515384, f_22bf_a0_f());
	L0->AddMark("d6q01ViktorGotoAlxBigSelf", "pt_map_viktor", 1, 515385, f_22bf_a0_f());
	f_279d_a0_v();
	f_27b7_a0_v();
	f_27aa_a0_v();
}

void f_2483_a2_v(object a0, object a1)
{
	@SetVariable("ood8Viktor1", 1);
}

void f_2489_a2_v(object a0, object a1)
{
	@SetVariable("ood9Viktor1", 1);
}

void f_248f_a2_v(object a0, object a1)
{
	@SetVariable("d9q01", 1);
	f_27d1_a0_v();
	f_27de_a0_v();
	f_22b3_a2_b("quest_d9_01", "place_rifles");
}

void f_24a0_a2_v(object a0, object a1)
{
	@SetVariable("ood9Viktor2", 1);
}

void f_24a6_a2_v(object a0, object a1)
{
	@SetVariable("ood11Viktor1", 1);
}

void f_24ac_a2_v(object a0, object a1)
{
	@SetVariable("ood11Viktor2", 1);
}

void f_24b2_a2_v(object a0, object a1)
{
	@SetVariable("KnowMyth", 1);
}

void f_24b8_a2_v(object a0, object a1)
{
	@SetVariable("d6ViktorVisit", 1);
}

void f_24be_a2_v(object a0, object a1)
{
	@SetVariable("ood9Viktor3", 1);
}

bool f_24c4_a1_b(object a0)
{
	if (f_2250_a1_i("d1q02") == 3) {
		return true;
	}
	return false;
}

bool f_24d0_a1_b(object a0)
{
	if (f_2250_a1_i("ood1Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_24dc_a1_b(object a0)
{
	if (f_2250_a1_i("ood1Viktor2") == 0) {
		return true;
	}
	return false;
}

bool f_24e8_a1_b(object a0)
{
	if (f_2250_a1_i("ood1Viktor3") == 0) {
		return true;
	}
	return false;
}

bool f_24f4_a1_b(object a0)
{
	if (f_2250_a1_i("d1q01") == 0) {
		return true;
	}
	return false;
}

bool f_2500_a1_b(object a0)
{
	if (f_2250_a1_i("d1q01TeloNedostupno") == 1) {
		return true;
	}
	return false;
}

bool f_250c_a1_b(object a0)
{
	if (f_2250_a1_i("d1q01FirstGeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_2518_a1_b(object a0)
{
	if (f_2250_a1_i("d7q03") == 2) {
		return true;
	}
	return false;
}

bool f_2524_a1_b(object a0)
{
	if (f_2250_a1_i("d10q02") == 2) {
		return true;
	}
	return false;
}

bool f_2530_a1_b(object a0)
{
	if (f_2250_a1_i("ood11Viktor4") == 0) {
		return true;
	}
	return false;
}

bool f_253c_a1_b(object a0)
{
	if (f_2250_a1_i("ood3Viktor3") == 0) {
		return true;
	}
	return false;
}

bool f_2548_a1_b(object a0)
{
	if (f_2250_a1_i("ood4Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_2554_a1_b(object a0)
{
	if (f_2250_a1_i("d4q04") == 0) {
		return true;
	}
	return false;
}

bool f_2560_a1_b(object a0)
{
	if (f_2250_a1_i("d4q04") == 1) {
		return true;
	}
	return false;
}

bool f_256c_a1_b(object a0)
{
	if (f_227f_a2_b(a0, "hunter_mark")) {
		return true;
	}
	return false;
}

bool f_2577_a1_b(object a0)
{
	if (f_2250_a1_i("ood2Viktor2") == 0) {
		return true;
	}
	return false;
}

bool f_2583_a1_b(object a0)
{
	if (f_2250_a1_i("ood2Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_258f_a1_b(object a0)
{
	if (f_2250_a1_i("KnowRavell") == 1) {
		return true;
	}
	return false;
}

bool f_259b_a1_b(object a0)
{
	if (f_2250_a1_i("d2q03") == 1) {
		return true;
	}
	return false;
}

bool f_25a7_a1_b(object a0)
{
	if (f_2250_a1_i("d2q03MariaGotoViktor") == 1) {
		return true;
	}
	return false;
}

bool f_25b3_a1_b(object a0)
{
	if (f_2250_a1_i("d1q01") == 1) {
		return true;
	}
	return false;
}

bool f_25bf_a1_b(object a0)
{
	if (f_2250_a1_i("d3q02") == 1) {
		return true;
	}
	return false;
}

bool f_25cb_a1_b(object a0)
{
	if (f_2250_a1_i("ood3Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_25d7_a1_b(object a0)
{
	if (f_2250_a1_i("d3q02") == 2) {
		return true;
	}
	return false;
}

bool f_25e3_a1_b(object a0)
{
	if (f_2250_a1_i("ood3Viktor2") == 0) {
		return true;
	}
	return false;
}

bool f_25ef_a1_b(object a0)
{
	if (f_2250_a1_i("d5q03") == 0) {
		return true;
	}
	return false;
}

bool f_25fb_a1_b(object a0)
{
	if (f_2250_a1_i("d5q03") == 1000) {
		return true;
	}
	return false;
}

bool f_2607_a1_b(object a0)
{
	if (f_2250_a1_i("d5q03") == -1) {
		return true;
	}
	return false;
}

bool f_2613_a1_b(object a0)
{
	if (f_2250_a1_i("d5q03") == 2) {
		return true;
	}
	return false;
}

bool f_261f_a1_b(object a0)
{
	if (f_2250_a1_i("ood5Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_262b_a1_b(object a0)
{
	if (f_2250_a1_i("ood5Viktor2") == 0) {
		return true;
	}
	return false;
}

bool f_2637_a1_b(object a0)
{
	if (f_2250_a1_i("ood5Viktor3") == 0) {
		return true;
	}
	return false;
}

bool f_2643_a1_b(object a0)
{
	if (f_2250_a1_i("ood6Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_264f_a1_b(object a0)
{
	if (f_2250_a1_i("ood8Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_265b_a1_b(object a0)
{
	if (f_2250_a1_i("d8KainIsReason") == 1) {
		return true;
	}
	return false;
}

bool f_2667_a1_b(object a0)
{
	if (f_2250_a1_i("ood9Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_2673_a1_b(object a0)
{
	if (f_2250_a1_i("d9q01") == 2) {
		return true;
	}
	return false;
}

bool f_267f_a1_b(object a0)
{
	if (f_2250_a1_i("ood9Viktor2") == 0) {
		return true;
	}
	return false;
}

bool f_268b_a1_b(object a0)
{
	if (f_2250_a1_i("d9TalkToPolkovodec") != 0) {
		return true;
	}
	return false;
}

bool f_2697_a1_b(object a0)
{
	if (f_2250_a1_i("d11q01") == 1) {
		return true;
	}
	return false;
}

bool f_26a3_a1_b(object a0)
{
	if (f_2250_a1_i("ood11Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_26af_a1_b(object a0)
{
	if (f_2250_a1_i("ood11Viktor2") == 0) {
		return true;
	}
	return false;
}

bool f_26bb_a1_b(object a0)
{
	if (f_2250_a1_i("d11q01") >= 4) {
		return true;
	}
	return false;
}

bool f_26c7_a1_b(object a0)
{
	if (f_2250_a1_i("d11q01") == 1000) {
		return true;
	}
	return false;
}

bool f_26d3_a1_b(object a0)
{
	if (f_2250_a1_i("ood9Viktor3") == 0) {
		return true;
	}
	return false;
}

bool f_26df_a1_b(object a0)
{
	if (f_2250_a1_i("d1q01") != 0 && f_2250_a1_i("d1q01") != 1000 && f_2250_a1_i("d1q01") != -1) {
		return true;
	}
	return false;
}

void f_2701_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 669, 2, 534123);
	f_27f8_a2_b(L0, 666);
}

void f_270e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 686, 2, 534534);
	f_27f8_a2_b(L0, -1);
}

void f_271b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 687, 2, 534535);
	f_27f8_a2_b(L0, 686);
}

void f_2728_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 32, 1, 512114);
	f_27f8_a2_b(L0, 2);
}

void f_2735_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 275, 2, 521237);
	f_27f8_a2_b(L0, 7);
}

void f_2742_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 136, 2, 515306);
	f_27f8_a2_b(L0, 26);
}

void f_274f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 77, 2, 512159);
	f_27f8_a2_b(L0, 26);
}

void f_275c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 710, 2, 536316);
	f_27f8_a2_b(L0, -1);
}

void f_2769_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 712, 2, 536318);
	f_27f8_a2_b(L0, 710);
}

void f_2776_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 711, 2, 536317);
	f_27f8_a2_b(L0, 710);
}

void f_2783_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 154, 2, 515365);
	f_27f8_a2_b(L0, -1);
}

void f_2790_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 155, 2, 515366);
	f_27f8_a2_b(L0, 154);
}

void f_279d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 111, 1, 513734);
	f_27f8_a2_b(L0, -1);
}

void f_27aa_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 113, 1, 513736);
	f_27f8_a2_b(L0, 111);
}

void f_27b7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 112, 1, 513735);
	f_27f8_a2_b(L0, 111);
}

void f_27c4_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 644, 2, 533278);
	f_27f8_a2_b(L0, 641);
}

void f_27d1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 182, 1, 515445);
	f_27f8_a2_b(L0, -1);
}

void f_27de_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 183, 1, 515446);
	f_27f8_a2_b(L0, 182);
}

object f_27eb_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_27f8_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_27eb_a0_o();
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

object f_2814_a0_o(void)
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

void f_2825_a3_v(object a0, string a1, float a2)
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

int f_2846_a0_i(void)
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

void f_2857_a1_v(object a0)
{
	if (!g1) {
		t1{a0};
		g1 = true;
	}
	if (f_22cd_a1_b(1)) {
		t5{a0};
		return;
	}
	if (f_22cd_a1_b(2)) {
		t7{a0};
		return;
	}
	if (f_22cd_a1_b(3)) {
		t9{a0};
		return;
	}
	if (f_22cd_a1_b(4)) {
		t11{a0};
		return;
	}
	if (f_22cd_a1_b(5)) {
		t13{a0};
		return;
	}
	if (f_22cd_a1_b(6)) {
		t3{a0};
		return;
	}
	if (f_22cd_a1_b(7)) {
		t15{a0};
		return;
	}
	if (f_22cd_a1_b(8)) {
		t17{a0};
		return;
	}
	if (f_22cd_a1_b(9)) {
		t19{a0};
		return;
	}
	if (f_22cd_a1_b(10)) {
		t23{a0};
		return;
	}
	if (f_22cd_a1_b(11)) {
		t21{a0};
		return;
	}
	if (f_22cd_a1_b(12)) {
		t25{a0};
		return;
	}
	t27{a0};
}

