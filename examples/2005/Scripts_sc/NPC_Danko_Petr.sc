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
		} while (!f_103e_a0_b());
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
		f_1098_a1_b(f_1145_a0_o());
		if (!f_1043_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_11c0_a0_i());
		L0->SetNPCDescription(f_11be_a0_i());
		L0->SetPhoto(f_11c2_a0_s());
		L0->SetPhoto2(f_11c4_a0_s());
		L0->SetPlayerName(f_143a_a0_i());
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
		f_1087_a1_v(a0);
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
			f_98_a1_v("Neutral");
			tv0->SetMessage(535674);
			tv0->ClearReplies();
			tv0->AddReply(535675, 42165, 37361);
			tv0->AddReply(540006, -1, 41977);
			break;
			return;
		}
		if (f_11c6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1122_a1_v(tv2);
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

	void f_98_a1_v(string a0)
	{
		if (!f_11c6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1129_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_113e_a0_v();
			if (a0 == 37360) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(535674);
				tv0->ClearReplies();
				tv0->AddReply(535675, 42165, 37361);
				tv0->AddReply(540006, -1, 41977);
				return;
			}
			if (a0 == 42165) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(540187);
				tv0->ClearReplies();
				tv0->AddReply(540188, 42167, 42166);
				return;
			}
			if (a0 == 42167) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(540189);
				tv0->ClearReplies();
				tv0->AddReply(540190, 42196, 42168);
				tv0->AddReply(540192, 42169, 42170);
				return;
			}
			if (a0 == 42196) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(540216);
				tv0->ClearReplies();
				tv0->AddReply(540217, 42169, 42197);
				return;
			}
			if (a0 == 42169) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(540191);
				tv0->ClearReplies();
				tv0->AddReply(540193, -1, 42172);
				tv0->AddReply(540194, 42174, 42173);
				return;
			}
			if (a0 == 42174) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(540195);
				tv0->ClearReplies();
				tv0->AddReply(540196, -1, 42175);
				return;
			}
			tv3 = true;
			if (f_11c6_a0_b()) {
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
		f_1098_a1_b(f_1145_a0_o());
		if (!f_1043_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_11c0_a0_i());
		L0->SetNPCDescription(f_11be_a0_i());
		L0->SetPhoto(f_11c2_a0_s());
		L0->SetPhoto2(f_11c4_a0_s());
		L0->SetPlayerName(f_143a_a0_i());
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
		f_1087_a1_v(a0);
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
			f_123c_a2_v(tv1, tv0);
			f_1cc_a1_v("Neutral");
			tv0->SetMessage(500170);
			tv0->ClearReplies();
			tv0->AddReply(500171, 210, 206);
			tv0->AddReply(500172, 209, 207);
			break;
			return;
		}
		if (f_11c6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1122_a1_v(tv2);
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

	void f_1cc_a1_v(string a0)
	{
		if (!f_11c6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1129_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_113e_a0_v();
			if (a0 == 205) {
				f_123c_a2_v(tv1, tv0);
				f_1cc_a1_v("Neutral");
				tv0->SetMessage(500170);
				tv0->ClearReplies();
				tv0->AddReply(500171, 210, 206);
				tv0->AddReply(500172, 209, 207);
				return;
			}
			if (a0 == 209) {
				f_1cc_a1_v("Neutral");
				tv0->SetMessage(500174);
				tv0->ClearReplies();
				tv0->AddReply(500178, 218, 213);
				return;
			}
			if (a0 == 210) {
				f_1cc_a1_v("Neutral");
				tv0->SetMessage(500175);
				tv0->ClearReplies();
				tv0->AddReply(500176, 215, 211);
				tv0->AddReply(500177, 214, 212);
				return;
			}
			if (a0 == 214) {
				f_1cc_a1_v("Neutral");
				tv0->SetMessage(500179);
				tv0->ClearReplies();
				tv0->AddReply(500181, 218, 216);
				return;
			}
			if (a0 == 215) {
				f_1cc_a1_v("Neutral");
				tv0->SetMessage(500180);
				tv0->ClearReplies();
				tv0->AddReply(500182, 218, 217);
				return;
			}
			if (a0 == 218) {
				f_1cc_a1_v("Neutral");
				tv0->SetMessage(500183);
				tv0->ClearReplies();
				tv0->AddReply(500184, -1, 221);
				tv0->AddReply(500185, -1, 222);
				return;
			}
			tv3 = true;
			if (f_11c6_a0_b()) {
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
		f_1098_a1_b(f_1145_a0_o());
		if (!f_1043_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_11c0_a0_i());
		L0->SetNPCDescription(f_11be_a0_i());
		L0->SetPhoto(f_11c2_a0_s());
		L0->SetPhoto2(f_11c4_a0_s());
		L0->SetPlayerName(f_143a_a0_i());
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
		f_1087_a1_v(a0);
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
			f_348_a1_v("Neutral");
			tv0->SetMessage(506877);
			tv0->ClearReplies();
			if (f_130c_a1_b(tv1) && f_133c_a1_b(tv1)) {
				tv0->AddReply(506878, 7585, 7584);
			}
			if (f_1318_a1_b(tv1) && f_1354_a1_b(tv1)) {
				tv0->AddReply(507431, 8203, 8202);
			}
			if (f_1324_a1_b(tv1) && f_1330_a1_b(tv1)) {
				tv0->AddReply(506884, 7591, 7590);
			}
			if (f_12f4_a1_b(tv1)) {
				tv0->AddReply(525164, 26526, 26525);
			}
			if (f_1300_a1_b(tv1)) {
				tv0->AddReply(525171, 26534, 26533);
			}
			tv0->AddReply(507529, -1, 8311);
			break;
			return;
		}
		if (f_11c6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1122_a1_v(tv2);
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

	void f_348_a1_v(string a0)
	{
		if (!f_11c6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1129_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_113e_a0_v();
			if (a1 == 8221) {
				f_1210_a2_v(tv1, tv0);
				f_121c_a2_v(tv1, tv0);
			}
			if (a1 == 8222) {
				f_1210_a2_v(tv1, tv0);
			}
			if (a1 == 8202) {
				f_1216_a2_v(tv1, tv0);
			}
			if (a1 == 8210) {
				f_1225_a2_v(tv1, tv0);
			}
			if (a1 == 26525) {
				f_11f3_a2_v(tv1, tv0);
			}
			if (a1 == 26533) {
				f_11f9_a2_v(tv1, tv0);
			}
			if (a0 == 7583) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(506877);
				tv0->ClearReplies();
				if (f_130c_a1_b(tv1) && f_133c_a1_b(tv1)) {
					tv0->AddReply(506878, 7585, 7584);
				}
				if (f_1318_a1_b(tv1) && f_1354_a1_b(tv1)) {
					tv0->AddReply(507431, 8203, 8202);
				}
				if (f_1324_a1_b(tv1) && f_1330_a1_b(tv1)) {
					tv0->AddReply(506884, 7591, 7590);
				}
				if (f_12f4_a1_b(tv1)) {
					tv0->AddReply(525164, 26526, 26525);
				}
				if (f_1300_a1_b(tv1)) {
					tv0->AddReply(525171, 26534, 26533);
				}
				tv0->AddReply(507529, -1, 8311);
				return;
			}
			if (a0 == 26534) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(525172);
				tv0->ClearReplies();
				tv0->AddReply(525173, 26536, 26535);
				tv0->AddReply(525182, 26536, 26544);
				return;
			}
			if (a0 == 26536) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(525174);
				tv0->ClearReplies();
				tv0->AddReply(525175, 26538, 26537);
				tv0->AddReply(525181, -1, 26543);
				return;
			}
			if (a0 == 26538) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(525176);
				tv0->ClearReplies();
				tv0->AddReply(525177, 26540, 26539);
				tv0->AddReply(525180, -1, 26542);
				return;
			}
			if (a0 == 26540) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(525178);
				tv0->ClearReplies();
				tv0->AddReply(525179, -1, 26541);
				tv0->AddReply(534039, -1, 35617);
				return;
			}
			if (a0 == 26526) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(525165);
				tv0->ClearReplies();
				tv0->AddReply(525166, 26528, 26527);
				tv0->AddReply(525170, 26528, 26531);
				return;
			}
			if (a0 == 26528) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(525167);
				tv0->ClearReplies();
				tv0->AddReply(525168, -1, 26529);
				tv0->AddReply(525169, -1, 26530);
				return;
			}
			if (a0 == 7591) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(506885);
				tv0->ClearReplies();
				tv0->AddReply(507430, 10354, 8201);
				tv0->AddReply(533996, -1, 35570);
				return;
			}
			if (a0 == 10354) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(509422);
				tv0->ClearReplies();
				tv0->AddReply(509423, 10356, 10355);
				tv0->AddReply(509432, 10366, 10365);
				return;
			}
			if (a0 == 10366) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(509433);
				tv0->ClearReplies();
				tv0->AddReply(509434, 10356, 10367);
				return;
			}
			if (a0 == 10356) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(509424);
				tv0->ClearReplies();
				tv0->AddReply(509425, 10358, 10357);
				tv0->AddReply(509429, 10362, 10361);
				return;
			}
			if (a0 == 10362) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(509430);
				tv0->ClearReplies();
				tv0->AddReply(509431, 10358, 10363);
				return;
			}
			if (a0 == 10358) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(509426);
				tv0->ClearReplies();
				tv0->AddReply(509427, -1, 10359);
				tv0->AddReply(509428, -1, 10360);
				return;
			}
			if (a0 == 8203) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(507432);
				tv0->ClearReplies();
				tv0->AddReply(507433, 7589, 8204);
				tv0->AddReply(534034, 35612, 35611);
				return;
			}
			if (a0 == 35612) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(534035);
				tv0->ClearReplies();
				tv0->AddReply(534036, -1, 35613);
				return;
			}
			if (a0 == 7589) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(506883);
				tv0->ClearReplies();
				tv0->AddReply(507435, 8207, 8206);
				tv0->AddReply(507440, 8207, 8211);
				return;
			}
			if (a0 == 8207) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(507436);
				tv0->ClearReplies();
				tv0->AddReply(507437, 8209, 8208);
				tv0->AddReply(507441, 8209, 8213);
				return;
			}
			if (a0 == 8209) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(507438);
				tv0->ClearReplies();
				tv0->AddReply(507439, -1, 8210);
				if (f_1360_a1_b(tv1)) {
					tv0->AddReply(534037, -1, 35614);
				}
				return;
			}
			if (a0 == 7585) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(506879);
				tv0->ClearReplies();
				tv0->AddReply(506880, 7587, 7586);
				tv0->AddReply(507450, 8216, 8223);
				return;
			}
			if (a0 == 7587) {
				f_120a_a2_v(tv1, tv0);
				f_348_a1_v("Neutral");
				tv0->SetMessage(506881);
				tv0->ClearReplies();
				tv0->AddReply(507442, 8216, 8215);
				tv0->AddReply(507451, 8226, 8225);
				return;
			}
			if (a0 == 8226) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(507452);
				tv0->ClearReplies();
				tv0->AddReply(507453, 8216, 8227);
				return;
			}
			if (a0 == 8216) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(507443);
				tv0->ClearReplies();
				tv0->AddReply(507444, 8218, 8217);
				tv0->AddReply(534038, 8218, 35615);
				return;
			}
			if (a0 == 8218) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(507445);
				tv0->ClearReplies();
				tv0->AddReply(507446, 8220, 8219);
				if (f_1348_a1_b(tv1)) {
					tv0->AddReply(507449, -1, 8222);
				}
				return;
			}
			if (a0 == 8220) {
				f_348_a1_v("Neutral");
				tv0->SetMessage(507447);
				tv0->ClearReplies();
				tv0->AddReply(507448, -1, 8221);
				return;
			}
			tv3 = true;
			if (f_11c6_a0_b()) {
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
		f_1098_a1_b(f_1145_a0_o());
		if (!f_1043_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_11c0_a0_i());
		L0->SetNPCDescription(f_11be_a0_i());
		L0->SetPhoto(f_11c2_a0_s());
		L0->SetPhoto2(f_11c4_a0_s());
		L0->SetPlayerName(f_143a_a0_i());
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
		f_1087_a1_v(a0);
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
			if (f_13c0_a1_b(tv1)) {
				f_129a_a2_v(tv1, tv0);
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(510030);
				tv0->ClearReplies();
				tv0->AddReply(510031, 11054, 11053);
				tv0->AddReply(510039, 11063, 11062);
				break;
			}
			f_6d8_a1_v("Neutral");
			tv0->SetMessage(533997);
			tv0->ClearReplies();
			if (f_12c4_a1_b(tv1)) {
				tv0->AddReply(533998, 35573, 35572);
			}
			if (f_12d0_a1_b(tv1)) {
				tv0->AddReply(534011, 35587, 35586);
			}
			if (f_12dc_a1_b(tv1)) {
				tv0->AddReply(534019, 35595, 35594);
			}
			if (f_12e8_a1_b(tv1)) {
				tv0->AddReply(534025, 35602, 35601);
			}
			tv0->AddReply(534033, -1, 35610);
			break;
			return;
		}
		if (f_11c6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1122_a1_v(tv2);
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

	void f_6d8_a1_v(string a0)
	{
		if (!f_11c6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1129_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_113e_a0_v();
			if (a1 == 35572) {
				f_11db_a2_v(tv1, tv0);
			}
			if (a1 == 35586) {
				f_11e1_a2_v(tv1, tv0);
			}
			if (a1 == 35594) {
				f_11e7_a2_v(tv1, tv0);
			}
			if (a1 == 35601) {
				f_11ed_a2_v(tv1, tv0);
			}
			if (a0 == 11052) {
				if (f_13c0_a1_b(tv1)) {
					f_129a_a2_v(tv1, tv0);
					f_6d8_a1_v("Neutral");
					tv0->SetMessage(510030);
					tv0->ClearReplies();
					tv0->AddReply(510031, 11054, 11053);
					tv0->AddReply(510039, 11063, 11062);
					return;
				}
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(533997);
				tv0->ClearReplies();
				if (f_12c4_a1_b(tv1)) {
					tv0->AddReply(533998, 35573, 35572);
				}
				if (f_12d0_a1_b(tv1)) {
					tv0->AddReply(534011, 35587, 35586);
				}
				if (f_12dc_a1_b(tv1)) {
					tv0->AddReply(534019, 35595, 35594);
				}
				if (f_12e8_a1_b(tv1)) {
					tv0->AddReply(534025, 35602, 35601);
				}
				tv0->AddReply(534033, -1, 35610);
				return;
			}
			if (a0 == 35602) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(534026);
				tv0->ClearReplies();
				tv0->AddReply(534027, 35604, 35603);
				tv0->AddReply(534030, 35607, 35606);
				return;
			}
			if (a0 == 35607) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(534031);
				tv0->ClearReplies();
				tv0->AddReply(534032, 35604, 35608);
				return;
			}
			if (a0 == 35604) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(534028);
				tv0->ClearReplies();
				tv0->AddReply(534029, -1, 35605);
				return;
			}
			if (a0 == 35595) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(534020);
				tv0->ClearReplies();
				tv0->AddReply(534021, 35597, 35596);
				tv0->AddReply(534024, 35597, 35599);
				return;
			}
			if (a0 == 35597) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(534022);
				tv0->ClearReplies();
				tv0->AddReply(534023, -1, 35598);
				return;
			}
			if (a0 == 35587) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(534012);
				tv0->ClearReplies();
				tv0->AddReply(534013, 35589, 35588);
				return;
			}
			if (a0 == 35589) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(534014);
				tv0->ClearReplies();
				tv0->AddReply(534015, 35591, 35590);
				return;
			}
			if (a0 == 35591) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(534016);
				tv0->ClearReplies();
				tv0->AddReply(534017, -1, 35592);
				tv0->AddReply(534018, -1, 35593);
				return;
			}
			if (a0 == 35573) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(533999);
				tv0->ClearReplies();
				tv0->AddReply(534000, 35575, 35574);
				tv0->AddReply(534008, 35583, 35582);
				return;
			}
			if (a0 == 35583) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(534009);
				tv0->ClearReplies();
				tv0->AddReply(534010, 35577, 35584);
				return;
			}
			if (a0 == 35575) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(534001);
				tv0->ClearReplies();
				tv0->AddReply(534002, 35577, 35576);
				return;
			}
			if (a0 == 35577) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(534003);
				tv0->ClearReplies();
				tv0->AddReply(534004, 35579, 35578);
				return;
			}
			if (a0 == 35579) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(534005);
				tv0->ClearReplies();
				tv0->AddReply(534006, -1, 35580);
				tv0->AddReply(534007, -1, 35581);
				return;
			}
			if (a0 == 11063) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(510040);
				tv0->ClearReplies();
				tv0->AddReply(510041, -1, 11064);
				tv0->AddReply(510042, 11056, 11065);
				return;
			}
			if (a0 == 11054) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(510032);
				tv0->ClearReplies();
				tv0->AddReply(510033, 11056, 11055);
				tv0->AddReply(510038, 11056, 11060);
				return;
			}
			if (a0 == 11056) {
				f_6d8_a1_v("Neutral");
				tv0->SetMessage(510034);
				tv0->ClearReplies();
				tv0->AddReply(510035, -1, 11057);
				tv0->AddReply(510036, -1, 11058);
				tv0->AddReply(510037, -1, 11059);
				return;
			}
			tv3 = true;
			if (f_11c6_a0_b()) {
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
		f_1098_a1_b(f_1145_a0_o());
		if (!f_1043_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_11c0_a0_i());
		L0->SetNPCDescription(f_11be_a0_i());
		L0->SetPhoto(f_11c2_a0_s());
		L0->SetPhoto2(f_11c4_a0_s());
		L0->SetPlayerName(f_143a_a0_i());
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
		f_1087_a1_v(a0);
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
			f_9a7_a1_v("Neutral");
			tv0->SetMessage(513353);
			tv0->ClearReplies();
			if (f_1378_a1_b(tv1) && f_136c_a1_b(tv1)) {
				tv0->AddReply(513355, 14598, 14587);
			}
			if (!f_1378_a1_b(tv1) && f_136c_a1_b(tv1)) {
				tv0->AddReply(513374, 14607, 14606);
			}
			if (f_1384_a1_b(tv1)) {
				tv0->AddReply(513390, 14625, 14624);
			}
			if (f_12ac_a1_b(tv1) && f_12b8_a1_b(tv1) || f_12a0_a1_b(tv1) && f_12b8_a1_b(tv1)) {
				tv0->AddReply(533264, 34779, 34778);
			}
			tv0->AddReply(513354, -1, 14586);
			tv0->AddReply(535721, -1, 37400);
			break;
			return;
		}
		if (f_11c6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1122_a1_v(tv2);
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

	void f_9a7_a1_v(string a0)
	{
		if (!f_11c6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1129_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_113e_a0_v();
			if (a1 == 14602) {
				f_127d_a2_v(tv1, tv0);
				f_1242_a2_v(tv1, tv0);
			}
			if (a1 == 14605) {
				f_127d_a2_v(tv1, tv0);
			}
			if (a1 == 14608) {
				f_1242_a2_v(tv1, tv0);
			}
			if (a1 == 14626) {
				f_124b_a2_v(tv1, tv0);
				f_1251_a2_v(tv1, tv0);
				f_1283_a2_v(tv1, tv0);
				f_11c8_a2_v(tv1, tv0);
				f_11ff_a2_v(tv1, tv0);
			}
			if (a1 == 34778) {
				f_11d5_a2_v(tv1, tv0);
			}
			if (a1 == 34780) {
				f_11ce_a2_v(tv1, tv0);
			}
			if (a1 == 37384) {
				f_11ce_a2_v(tv1, tv0);
			}
			if (a0 == 14585) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(513353);
				tv0->ClearReplies();
				if (f_1378_a1_b(tv1) && f_136c_a1_b(tv1)) {
					tv0->AddReply(513355, 14598, 14587);
				}
				if (!f_1378_a1_b(tv1) && f_136c_a1_b(tv1)) {
					tv0->AddReply(513374, 14607, 14606);
				}
				if (f_1384_a1_b(tv1)) {
					tv0->AddReply(513390, 14625, 14624);
				}
				if (f_12ac_a1_b(tv1) && f_12b8_a1_b(tv1) || f_12a0_a1_b(tv1) && f_12b8_a1_b(tv1)) {
					tv0->AddReply(533264, 34779, 34778);
				}
				tv0->AddReply(513354, -1, 14586);
				tv0->AddReply(535721, -1, 37400);
				return;
			}
			if (a0 == 34779) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(533265);
				tv0->ClearReplies();
				tv0->AddReply(535698, 37373, 37370);
				tv0->AddReply(535713, 37371, 37385);
				return;
			}
			if (a0 == 37371) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(535699);
				tv0->ClearReplies();
				tv0->AddReply(535700, 37373, 37372);
				return;
			}
			if (a0 == 37373) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(535701);
				tv0->ClearReplies();
				tv0->AddReply(535702, 37375, 37374);
				tv0->AddReply(535714, 37375, 37387);
				return;
			}
			if (a0 == 37375) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(535703);
				tv0->ClearReplies();
				tv0->AddReply(535704, 37377, 37376);
				tv0->AddReply(535715, 37377, 37389);
				return;
			}
			if (a0 == 37377) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(535705);
				tv0->ClearReplies();
				tv0->AddReply(535706, 37379, 37378);
				tv0->AddReply(535716, 37379, 37391);
				return;
			}
			if (a0 == 37379) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(535707);
				tv0->ClearReplies();
				tv0->AddReply(535708, 37381, 37380);
				return;
			}
			if (a0 == 37381) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(535709);
				tv0->ClearReplies();
				tv0->AddReply(535710, 37383, 37382);
				return;
			}
			if (a0 == 37383) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(535711);
				tv0->ClearReplies();
				tv0->AddReply(533266, -1, 34780);
				tv0->AddReply(535712, -1, 37384);
				return;
			}
			if (a0 == 14625) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(513391);
				tv0->ClearReplies();
				tv0->AddReply(513392, -1, 14626);
				return;
			}
			if (a0 == 14607) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(513375);
				tv0->ClearReplies();
				tv0->AddReply(513376, -1, 14608);
				return;
			}
			if (a0 == 14598) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(513366);
				tv0->ClearReplies();
				tv0->AddReply(513367, 14588, 14599);
				tv0->AddReply(535717, 14590, 37393);
				return;
			}
			if (a0 == 14588) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(513356);
				tv0->ClearReplies();
				tv0->AddReply(513357, 14590, 14589);
				tv0->AddReply(535718, 37396, 37395);
				return;
			}
			if (a0 == 37396) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(535719);
				tv0->ClearReplies();
				tv0->AddReply(535720, 14592, 37397);
				return;
			}
			if (a0 == 14590) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(513358);
				tv0->ClearReplies();
				tv0->AddReply(513359, 14592, 14591);
				return;
			}
			if (a0 == 14592) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(513360);
				tv0->ClearReplies();
				tv0->AddReply(513361, 14594, 14593);
				return;
			}
			if (a0 == 14594) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(513362);
				tv0->ClearReplies();
				tv0->AddReply(513363, 14601, 14595);
				tv0->AddReply(513364, 14597, 14596);
				return;
			}
			if (a0 == 14597) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(513365);
				tv0->ClearReplies();
				tv0->AddReply(513368, 14601, 14600);
				tv0->AddReply(513371, 14604, 14603);
				return;
			}
			if (a0 == 14604) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(513372);
				tv0->ClearReplies();
				tv0->AddReply(513373, -1, 14605);
				return;
			}
			if (a0 == 14601) {
				f_9a7_a1_v("Neutral");
				tv0->SetMessage(513369);
				tv0->ClearReplies();
				tv0->AddReply(513370, -1, 14602);
				return;
			}
			tv3 = true;
			if (f_11c6_a0_b()) {
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
		f_1098_a1_b(f_1145_a0_o());
		if (!f_1043_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_11c0_a0_i());
		L0->SetNPCDescription(f_11be_a0_i());
		L0->SetPhoto(f_11c2_a0_s());
		L0->SetPhoto2(f_11c4_a0_s());
		L0->SetPlayerName(f_143a_a0_i());
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
		f_1087_a1_v(a0);
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
			f_cbe_a1_v("Neutral");
			tv0->SetMessage(514474);
			tv0->ClearReplies();
			if (f_13b4_a1_b(tv1)) {
				tv0->AddReply(514475, 15709, 15708);
			}
			if (f_1390_a1_b(tv1) || f_139c_a1_b(tv1)) {
				tv0->AddReply(539623, 15695, 41570);
			}
			if (f_13a8_a1_b(tv1)) {
				tv0->AddReply(514501, -1, 15737);
			}
			tv0->AddReply(514500, -1, 15736);
			break;
			return;
		}
		if (f_11c6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1122_a1_v(tv2);
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

	void f_cbe_a1_v(string a0)
	{
		if (!f_11c6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1129_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_113e_a0_v();
			if (a1 == 15708) {
				f_1294_a2_v(tv1, tv0);
			}
			if (a1 == 41570) {
				f_128e_a2_v(tv1, tv0);
			}
			if (a0 == 15707) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514474);
				tv0->ClearReplies();
				if (f_13b4_a1_b(tv1)) {
					tv0->AddReply(514475, 15709, 15708);
				}
				if (f_1390_a1_b(tv1) || f_139c_a1_b(tv1)) {
					tv0->AddReply(539623, 15695, 41570);
				}
				if (f_13a8_a1_b(tv1)) {
					tv0->AddReply(514501, -1, 15737);
				}
				tv0->AddReply(514500, -1, 15736);
				return;
			}
			if (a0 == 15695) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514464);
				tv0->ClearReplies();
				tv0->AddReply(514465, 15697, 15696);
				tv0->AddReply(539626, 15697, 41574);
				return;
			}
			if (a0 == 15697) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514466);
				tv0->ClearReplies();
				tv0->AddReply(514467, -1, 15698);
				tv0->AddReply(539630, 41859, 41576);
				return;
			}
			if (a0 == 41859) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(539899);
				tv0->ClearReplies();
				tv0->AddReply(539900, 41861, 41860);
				return;
			}
			if (a0 == 41861) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(539901);
				tv0->ClearReplies();
				tv0->AddReply(539902, -1, 41862);
				return;
			}
			if (a0 == 15709) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514476);
				tv0->ClearReplies();
				tv0->AddReply(514477, 15711, 15710);
				tv0->AddReply(514499, 15711, 15734);
				return;
			}
			if (a0 == 15711) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514478);
				tv0->ClearReplies();
				tv0->AddReply(514479, 15713, 15712);
				tv0->AddReply(514494, 15729, 15728);
				return;
			}
			if (a0 == 15729) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514495);
				tv0->ClearReplies();
				tv0->AddReply(514496, 15731, 15730);
				return;
			}
			if (a0 == 15731) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514497);
				tv0->ClearReplies();
				tv0->AddReply(514498, 15713, 15732);
				return;
			}
			if (a0 == 15713) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514480);
				tv0->ClearReplies();
				tv0->AddReply(514481, 15715, 15714);
				return;
			}
			if (a0 == 15715) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514482);
				tv0->ClearReplies();
				tv0->AddReply(514483, 15717, 15716);
				tv0->AddReply(539625, 15719, 41572);
				return;
			}
			if (a0 == 15717) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514484);
				tv0->ClearReplies();
				tv0->AddReply(514485, 15719, 15718);
				return;
			}
			if (a0 == 15719) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514486);
				tv0->ClearReplies();
				tv0->AddReply(514487, 15721, 15720);
				tv0->AddReply(514491, 15725, 15724);
				return;
			}
			if (a0 == 15725) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514492);
				tv0->ClearReplies();
				tv0->AddReply(514493, 15721, 15726);
				return;
			}
			if (a0 == 15721) {
				f_cbe_a1_v("Neutral");
				tv0->SetMessage(514488);
				tv0->ClearReplies();
				tv0->AddReply(514489, -1, 15722);
				tv0->AddReply(514490, -1, 15723);
				return;
			}
			tv3 = true;
			if (f_11c6_a0_b()) {
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
		f_1098_a1_b(f_1145_a0_o());
		if (!f_1043_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_11c0_a0_i());
		L0->SetNPCDescription(f_11be_a0_i());
		L0->SetPhoto(f_11c2_a0_s());
		L0->SetPhoto2(f_11c4_a0_s());
		L0->SetPlayerName(f_143a_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t14{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1087_a1_v(a0);
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
			f_eda_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_11c6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_1122_a1_v(tv2);
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

	void f_eda_a1_v(string a0)
	{
		if (!f_11c6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1129_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_113e_a0_v();
			if (a0 == 42551) {
				f_eda_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_11c6_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t15
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_f21_a0_v();
	}

	void f_f21_a0_v(void)
	{
		if (!f_103e_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_fd7_a0_v();
		}
	}

	bool f_f35_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1035_a1_b(L0);
	}

	void f_f44_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_f49_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1023_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_f5f_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_f68_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_f68_a0_v();
			if (f_103e_a0_b() && f_f49_a0_b()) {
				if (f_f35_a0_b()) {
					f_10d2_a1_b(f_1145_a0_o());
				}
			} else {
				f_f44_a0_v();
				f_f5f_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_101e_a0_v();
		f_f68_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_f68_a0_v();
		f_1122_a1_v("Neutral");
		f_f5f_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_f5f_a0_v();
		} else {
			f_1122_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_101e_a0_v();
			f_1035_a1_b(a0);
			enable OnUse;
			f_144b_a1_v(a0);
			f_1122_a1_v("Neutral");
			f_f68_a0_v();
			f_f5f_a0_v();
		}
	}
}

void f_fd7_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_103e_a0_b()) {
		return;
	}
	L0 = f_11ad_a0_i();
	for (L1 = 0; L1 < 5 && f_103e_a0_b(); L1++) {
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
			@PlayAnimation("all", f_11a6_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_101c_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_101c_a0_b(void)
{
	return true;
}

void f_101e_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1023_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_102b_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1035_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_102b_a1_b(L0);
}

bool f_103e_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1043_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_114b_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_11c6_a0_b()) {
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

void f_1087_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_11c6_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1098_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_10d2_a1_b(a0)) {
			if (!f_10f7_a1_b(a0)) {
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
		if (!f_10f7_a1_b(a0)) {
			if (!f_10d2_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_10d2_a1_b(object a0)
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
	return f_112f_a1_b(L4);
}

bool f_10f7_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_1197_a0_i() + "m";
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
	return f_112f_a1_b(L4);
}

void f_1122_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1129_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_112f_a1_b(string a0)
{
	if (f_11c6_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_113e_a0_v(void)
{
	if (f_11c6_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1145_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_114b_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_1155_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_115a_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1166_a3_v(object a0, object a1, int a2)
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
		f_115a_a2_v(L0, a2);
	}
}

void f_1179_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1166_a3_v(a0, L0, a2);
}

bool f_1186_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1192_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_1197_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_11a0_a1_b(int a0)
{
	return f_1197_a0_i() == a0;
}

string f_11a6_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_11ad_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_11a6_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_11be_a0_i(void)
{
	return 515550;
}

int f_11c0_a0_i(void)
{
	return 502875;
}

string f_11c2_a0_s(void)
{
	return "ui/NPC_Petr.png";
}

string f_11c4_a0_s(void)
{
	return "ui/NPC_Petr_b.png";
}

bool f_11c6_a0_b(void)
{
	return true;
}

void f_11c8_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_11ce_a2_v(object a0, object a1)
{
	f_1186_a2_b("quest_d7_03", "remove_maria");
}

void f_11d5_a2_v(object a0, object a1)
{
	@SetVariable("ood7Petr2", 1);
}

void f_11db_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr2", 1);
}

void f_11e1_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr3", 1);
}

void f_11e7_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr4", 1);
}

void f_11ed_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr5", 1);
}

void f_11f3_a2_v(object a0, object a1)
{
	@SetVariable("ood2Petr4", 1);
}

void f_11f9_a2_v(object a0, object a1)
{
	@SetVariable("ood2Petr5", 1);
}

void f_11ff_a2_v(object a0, object a1)
{
	@Trace("lens is given");
	f_1179_a3_v(a0, "lens", 1);
}

void f_120a_a2_v(object a0, object a1)
{
	@SetVariable("KnowTvirin", 1);
}

void f_1210_a2_v(object a0, object a1)
{
	@SetVariable("ood2Petr1", 1);
}

void f_1216_a2_v(object a0, object a1)
{
	@SetVariable("ood2Petr2", 1);
}

void f_121c_a2_v(object a0, object a1)
{
	@SetVariable("d2q02", 3);
	f_13cc_a0_v();
}

void f_1225_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 5);
	L0 = f_1429_a0_o();
	L0->AddMark("d2q02PetrGotoAndrei", "pt_map_andrei", 0, 515276, f_1192_a0_f());
	f_13d9_a0_v();
}

void f_123c_a2_v(object a0, object a1)
{
	@SetVariable("KnowPetr", 1);
}

void f_1242_a2_v(object a0, object a1)
{
	@SetVariable("d7q02", 2);
	f_13f3_a0_v();
}

void f_124b_a2_v(object a0, object a1)
{
	@SetVariable("d7q02", 4);
}

void f_1251_a2_v(object a0, object a1)
{
	if (f_1155_a1_i("d7q02BirdBalahon") != 0) {
		object L0;
		object L1;
		L0 = f_1429_a0_o();
		L0->FindMark(L1, "d7q02AlexandrGotoPetr");
		if (L1) {
			L1->Remove();
		}
		L0->FindMark(L1, "d7q02MarkGotoAlexandr");
		if (L1) {
			L1->Remove();
		}
		L0->FindMark(L1, "d7q02MarkGotoCemetery");
		if (L1) {
			L1->Remove();
		}
		f_13e6_a0_v();
		f_1186_a2_b("quest_d7_02", "completed");
	}
}

void f_127d_a2_v(object a0, object a1)
{
	@SetVariable("ood7Petr1", 1);
}

void f_1283_a2_v(object a0, object a1)
{
	@Trace("birdmask is given");
	f_1179_a3_v(a0, "bird_mask", 1);
}

void f_128e_a2_v(object a0, object a1)
{
	@SetVariable("ood11Petr1", 1);
}

void f_1294_a2_v(object a0, object a1)
{
	@SetVariable("ood11Petr2", 1);
}

void f_129a_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr1", 1);
}

bool f_12a0_a1_b(object a0)
{
	if (f_1155_a1_i("d7q03") == 4) {
		return true;
	}
	return false;
}

bool f_12ac_a1_b(object a0)
{
	if (f_1155_a1_i("d7q03") == 1000) {
		return true;
	}
	return false;
}

bool f_12b8_a1_b(object a0)
{
	if (f_1155_a1_i("ood7Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_12c4_a1_b(object a0)
{
	if (f_1155_a1_i("ood3Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_12d0_a1_b(object a0)
{
	if (f_1155_a1_i("ood3Petr3") == 0) {
		return true;
	}
	return false;
}

bool f_12dc_a1_b(object a0)
{
	if (f_1155_a1_i("ood3Petr4") == 0) {
		return true;
	}
	return false;
}

bool f_12e8_a1_b(object a0)
{
	if (f_1155_a1_i("ood3Petr5") == 0) {
		return true;
	}
	return false;
}

bool f_12f4_a1_b(object a0)
{
	if (f_1155_a1_i("ood2Petr4") == 0) {
		return true;
	}
	return false;
}

bool f_1300_a1_b(object a0)
{
	if (f_1155_a1_i("ood2Petr5") == 0) {
		return true;
	}
	return false;
}

bool f_130c_a1_b(object a0)
{
	if (f_1155_a1_i("ood2Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_1318_a1_b(object a0)
{
	if (f_1155_a1_i("ood2Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_1324_a1_b(object a0)
{
	if (f_1155_a1_i("ood2Petr3") == 0) {
		return true;
	}
	return false;
}

bool f_1330_a1_b(object a0)
{
	if (f_1155_a1_i("d2q02") == 1000) {
		return true;
	}
	return false;
}

bool f_133c_a1_b(object a0)
{
	if (f_1155_a1_i("d2q02") == 2) {
		return true;
	}
	return false;
}

bool f_1348_a1_b(object a0)
{
	if (f_1155_a1_i("d2q02") == 3) {
		return true;
	}
	return false;
}

bool f_1354_a1_b(object a0)
{
	if (f_1155_a1_i("d2q02") == 4) {
		return true;
	}
	return false;
}

bool f_1360_a1_b(object a0)
{
	if (f_1155_a1_i("d2q02") == 5) {
		return true;
	}
	return false;
}

bool f_136c_a1_b(object a0)
{
	if (f_1155_a1_i("d7q02") == 1) {
		return true;
	}
	return false;
}

bool f_1378_a1_b(object a0)
{
	if (f_1155_a1_i("ood7Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_1384_a1_b(object a0)
{
	if (f_1155_a1_i("d7q02") == 3) {
		return true;
	}
	return false;
}

bool f_1390_a1_b(object a0)
{
	if (f_1155_a1_i("d11q01") == 1) {
		return true;
	}
	return false;
}

bool f_139c_a1_b(object a0)
{
	if (f_1155_a1_i("ood11Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_13a8_a1_b(object a0)
{
	if (f_1155_a1_i("d11q01") == 1000) {
		return true;
	}
	return false;
}

bool f_13b4_a1_b(object a0)
{
	if (f_1155_a1_i("ood11Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_13c0_a1_b(object a0)
{
	if (f_1155_a1_i("ood3Petr1") == 0) {
		return true;
	}
	return false;
}

void f_13cc_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 130, 2, 515267);
	f_140d_a2_b(L0, 11);
}

void f_13d9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 131, 2, 515268);
	f_140d_a2_b(L0, 11);
}

void f_13e6_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 174, 2, 515426);
	f_140d_a2_b(L0, 170);
}

void f_13f3_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 173, 2, 515425);
	f_140d_a2_b(L0, 170);
}

object f_1400_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_140d_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1400_a0_o();
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

object f_1429_a0_o(void)
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

int f_143a_a0_i(void)
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

void f_144b_a1_v(object a0)
{
	if (!g1) {
		t3{a0};
		g1 = true;
	}
	if (f_11a0_a1_b(2)) {
		t5{a0};
		return;
	}
	if (f_11a0_a1_b(3)) {
		t7{a0};
		return;
	}
	if (f_11a0_a1_b(7)) {
		t9{a0};
		return;
	}
	if (f_11a0_a1_b(11)) {
		t11{a0};
		return;
	}
	if (f_11a0_a1_b(12)) {
		t1{a0};
		return;
	}
	t13{a0};
}

