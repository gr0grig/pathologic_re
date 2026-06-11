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
		if (!f_108c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_121d_a0_i());
		L0->SetNPCDescription(f_121b_a0_i());
		L0->SetPhoto(f_121f_a0_s());
		L0->SetPhoto2(f_1221_a0_s());
		L0->SetPlayerName(f_149d_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10e3_a1_b(f_11a2_a0_o());
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10d1_a1_v(a0);
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
			f_129f_a2_v(tv1, tv0);
			f_90_a1_v("Neutral");
			tv0->SetMessage(500170);
			tv0->ClearReplies();
			tv0->AddReply(500171, 210, 206);
			tv0->AddReply(500172, 209, 207);
			break;
			return;
		}
		if (f_1223_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_116d_a1_v(tv2);
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

	void f_90_a1_v(string a0)
	{
		if (!f_1223_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_117d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_119b_a0_v();
			if (a0 == 205) {
				f_129f_a2_v(tv1, tv0);
				f_90_a1_v("Neutral");
				tv0->SetMessage(500170);
				tv0->ClearReplies();
				tv0->AddReply(500171, 210, 206);
				tv0->AddReply(500172, 209, 207);
				return;
			}
			if (a0 == 209) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(500174);
				tv0->ClearReplies();
				tv0->AddReply(500178, 218, 213);
				return;
			}
			if (a0 == 210) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(500175);
				tv0->ClearReplies();
				tv0->AddReply(500176, 215, 211);
				tv0->AddReply(500177, 214, 212);
				return;
			}
			if (a0 == 214) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(500179);
				tv0->ClearReplies();
				tv0->AddReply(500181, 218, 216);
				return;
			}
			if (a0 == 215) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(500180);
				tv0->ClearReplies();
				tv0->AddReply(500182, 218, 217);
				return;
			}
			if (a0 == 218) {
				f_90_a1_v("Neutral");
				tv0->SetMessage(500183);
				tv0->ClearReplies();
				tv0->AddReply(500184, -1, 221);
				tv0->AddReply(500185, -1, 222);
				return;
			}
			tv3 = true;
			if (f_1223_a0_b()) {
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
		if (!f_108c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_121d_a0_i());
		L0->SetNPCDescription(f_121b_a0_i());
		L0->SetPhoto(f_121f_a0_s());
		L0->SetPhoto2(f_1221_a0_s());
		L0->SetPlayerName(f_149d_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10e3_a1_b(f_11a2_a0_o());
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10d1_a1_v(a0);
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
			f_20c_a1_v("Untrust");
			tv0->SetMessage(506877);
			tv0->ClearReplies();
			if (f_136f_a1_b(tv1) && f_139f_a1_b(tv1)) {
				tv0->AddReply(506878, 7585, 7584);
			}
			if (f_137b_a1_b(tv1) && f_13b7_a1_b(tv1)) {
				tv0->AddReply(507431, 8203, 8202);
			}
			if (f_1387_a1_b(tv1) && f_1393_a1_b(tv1)) {
				tv0->AddReply(506884, 7591, 7590);
			}
			if (f_1357_a1_b(tv1)) {
				tv0->AddReply(525164, 26526, 26525);
			}
			if (f_1363_a1_b(tv1)) {
				tv0->AddReply(525171, 26534, 26533);
			}
			tv0->AddReply(507529, -1, 8311);
			break;
			return;
		}
		if (f_1223_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_116d_a1_v(tv2);
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

	void f_20c_a1_v(string a0)
	{
		if (!f_1223_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_117d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_119b_a0_v();
			if (a1 == 8221) {
				f_126d_a2_v(tv1, tv0);
				f_127f_a2_v(tv1, tv0);
			}
			if (a1 == 8222) {
				f_126d_a2_v(tv1, tv0);
			}
			if (a1 == 8202) {
				f_1273_a2_v(tv1, tv0);
			}
			if (a1 == 8210) {
				f_1288_a2_v(tv1, tv0);
			}
			if (a1 == 7590) {
				f_1279_a2_v(tv1, tv0);
			}
			if (a1 == 26525) {
				f_1250_a2_v(tv1, tv0);
			}
			if (a1 == 26533) {
				f_1256_a2_v(tv1, tv0);
			}
			if (a0 == 7583) {
				f_20c_a1_v("Untrust");
				tv0->SetMessage(506877);
				tv0->ClearReplies();
				if (f_136f_a1_b(tv1) && f_139f_a1_b(tv1)) {
					tv0->AddReply(506878, 7585, 7584);
				}
				if (f_137b_a1_b(tv1) && f_13b7_a1_b(tv1)) {
					tv0->AddReply(507431, 8203, 8202);
				}
				if (f_1387_a1_b(tv1) && f_1393_a1_b(tv1)) {
					tv0->AddReply(506884, 7591, 7590);
				}
				if (f_1357_a1_b(tv1)) {
					tv0->AddReply(525164, 26526, 26525);
				}
				if (f_1363_a1_b(tv1)) {
					tv0->AddReply(525171, 26534, 26533);
				}
				tv0->AddReply(507529, -1, 8311);
				return;
			}
			if (a0 == 26534) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(525172);
				tv0->ClearReplies();
				tv0->AddReply(525173, 26536, 26535);
				tv0->AddReply(525182, 26536, 26544);
				return;
			}
			if (a0 == 26536) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(525174);
				tv0->ClearReplies();
				tv0->AddReply(525175, 26538, 26537);
				tv0->AddReply(525181, -1, 26543);
				return;
			}
			if (a0 == 26538) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(525176);
				tv0->ClearReplies();
				tv0->AddReply(525177, 26540, 26539);
				tv0->AddReply(525180, -1, 26542);
				return;
			}
			if (a0 == 26540) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(525178);
				tv0->ClearReplies();
				tv0->AddReply(525179, -1, 26541);
				tv0->AddReply(534039, -1, 35617);
				return;
			}
			if (a0 == 26526) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(525165);
				tv0->ClearReplies();
				tv0->AddReply(525166, 26528, 26527);
				tv0->AddReply(525170, 26528, 26531);
				return;
			}
			if (a0 == 26528) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(525167);
				tv0->ClearReplies();
				tv0->AddReply(525168, -1, 26529);
				tv0->AddReply(525169, -1, 26530);
				return;
			}
			if (a0 == 7591) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(506885);
				tv0->ClearReplies();
				tv0->AddReply(507430, 10354, 8201);
				tv0->AddReply(533996, -1, 35570);
				return;
			}
			if (a0 == 10354) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(509422);
				tv0->ClearReplies();
				tv0->AddReply(509423, 10356, 10355);
				tv0->AddReply(509432, 10366, 10365);
				return;
			}
			if (a0 == 10366) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(509433);
				tv0->ClearReplies();
				tv0->AddReply(509434, 10356, 10367);
				return;
			}
			if (a0 == 10356) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(509424);
				tv0->ClearReplies();
				tv0->AddReply(509425, 10358, 10357);
				tv0->AddReply(509429, 10362, 10361);
				return;
			}
			if (a0 == 10362) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(509430);
				tv0->ClearReplies();
				tv0->AddReply(509431, 10358, 10363);
				return;
			}
			if (a0 == 10358) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(509426);
				tv0->ClearReplies();
				tv0->AddReply(509427, -1, 10359);
				tv0->AddReply(509428, -1, 10360);
				return;
			}
			if (a0 == 8203) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(507432);
				tv0->ClearReplies();
				tv0->AddReply(507433, 7589, 8204);
				tv0->AddReply(534034, 35612, 35611);
				return;
			}
			if (a0 == 35612) {
				f_20c_a1_v("Untrust");
				tv0->SetMessage(534035);
				tv0->ClearReplies();
				tv0->AddReply(534036, -1, 35613);
				return;
			}
			if (a0 == 7589) {
				f_20c_a1_v("Untrust");
				tv0->SetMessage(506883);
				tv0->ClearReplies();
				tv0->AddReply(507435, 8207, 8206);
				tv0->AddReply(507440, 8207, 8211);
				return;
			}
			if (a0 == 8207) {
				f_20c_a1_v("Untrust");
				tv0->SetMessage(507436);
				tv0->ClearReplies();
				tv0->AddReply(507437, 8209, 8208);
				tv0->AddReply(507441, 8209, 8213);
				return;
			}
			if (a0 == 8209) {
				f_20c_a1_v("Untrust");
				tv0->SetMessage(507438);
				tv0->ClearReplies();
				tv0->AddReply(507439, -1, 8210);
				if (f_13c3_a1_b(tv1)) {
					tv0->AddReply(534037, -1, 35614);
				}
				return;
			}
			if (a0 == 7585) {
				f_20c_a1_v("Untrust");
				tv0->SetMessage(506879);
				tv0->ClearReplies();
				tv0->AddReply(506880, 7587, 7586);
				tv0->AddReply(507450, 8216, 8223);
				return;
			}
			if (a0 == 7587) {
				f_1267_a2_v(tv1, tv0);
				f_20c_a1_v("Untrust");
				tv0->SetMessage(506881);
				tv0->ClearReplies();
				tv0->AddReply(507442, 8216, 8215);
				tv0->AddReply(507451, 8226, 8225);
				return;
			}
			if (a0 == 8226) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(507452);
				tv0->ClearReplies();
				tv0->AddReply(507453, 8216, 8227);
				return;
			}
			if (a0 == 8216) {
				f_20c_a1_v("Autizm");
				tv0->SetMessage(507443);
				tv0->ClearReplies();
				tv0->AddReply(507444, 8218, 8217);
				tv0->AddReply(534038, 8218, 35615);
				return;
			}
			if (a0 == 8218) {
				f_20c_a1_v("Autizm");
				tv0->SetMessage(507445);
				tv0->ClearReplies();
				tv0->AddReply(507446, 8220, 8219);
				if (f_13ab_a1_b(tv1)) {
					tv0->AddReply(507449, -1, 8222);
				}
				return;
			}
			if (a0 == 8220) {
				f_20c_a1_v("Neutral");
				tv0->SetMessage(507447);
				tv0->ClearReplies();
				tv0->AddReply(507448, -1, 8221);
				return;
			}
			tv3 = true;
			if (f_1223_a0_b()) {
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
		if (!f_108c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_121d_a0_i());
		L0->SetNPCDescription(f_121b_a0_i());
		L0->SetPhoto(f_121f_a0_s());
		L0->SetPhoto2(f_1221_a0_s());
		L0->SetPlayerName(f_149d_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10e3_a1_b(f_11a2_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10d1_a1_v(a0);
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
			if (f_1423_a1_b(tv1)) {
				f_12fd_a2_v(tv1, tv0);
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(510030);
				tv0->ClearReplies();
				tv0->AddReply(510031, 11054, 11053);
				tv0->AddReply(510039, 11063, 11062);
				break;
			}
			f_5a4_a1_v("Drunk");
			tv0->SetMessage(533997);
			tv0->ClearReplies();
			if (f_1327_a1_b(tv1)) {
				tv0->AddReply(533998, 35573, 35572);
			}
			if (f_1333_a1_b(tv1)) {
				tv0->AddReply(534011, 35587, 35586);
			}
			if (f_133f_a1_b(tv1)) {
				tv0->AddReply(534019, 35595, 35594);
			}
			if (f_134b_a1_b(tv1)) {
				tv0->AddReply(534025, 35602, 35601);
			}
			tv0->AddReply(534033, -1, 35610);
			break;
			return;
		}
		if (f_1223_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_116d_a1_v(tv2);
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

	void f_5a4_a1_v(string a0)
	{
		if (!f_1223_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_117d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_119b_a0_v();
			if (a1 == 35572) {
				f_1238_a2_v(tv1, tv0);
			}
			if (a1 == 35586) {
				f_123e_a2_v(tv1, tv0);
			}
			if (a1 == 35594) {
				f_1244_a2_v(tv1, tv0);
			}
			if (a1 == 35601) {
				f_124a_a2_v(tv1, tv0);
			}
			if (a0 == 11052) {
				if (f_1423_a1_b(tv1)) {
					f_12fd_a2_v(tv1, tv0);
					f_5a4_a1_v("Drunk");
					tv0->SetMessage(510030);
					tv0->ClearReplies();
					tv0->AddReply(510031, 11054, 11053);
					tv0->AddReply(510039, 11063, 11062);
					return;
				}
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(533997);
				tv0->ClearReplies();
				if (f_1327_a1_b(tv1)) {
					tv0->AddReply(533998, 35573, 35572);
				}
				if (f_1333_a1_b(tv1)) {
					tv0->AddReply(534011, 35587, 35586);
				}
				if (f_133f_a1_b(tv1)) {
					tv0->AddReply(534019, 35595, 35594);
				}
				if (f_134b_a1_b(tv1)) {
					tv0->AddReply(534025, 35602, 35601);
				}
				tv0->AddReply(534033, -1, 35610);
				return;
			}
			if (a0 == 35602) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(534026);
				tv0->ClearReplies();
				tv0->AddReply(534027, 35604, 35603);
				tv0->AddReply(534030, 35607, 35606);
				return;
			}
			if (a0 == 35607) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(534031);
				tv0->ClearReplies();
				tv0->AddReply(534032, 35604, 35608);
				return;
			}
			if (a0 == 35604) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(534028);
				tv0->ClearReplies();
				tv0->AddReply(534029, -1, 35605);
				return;
			}
			if (a0 == 35595) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(534020);
				tv0->ClearReplies();
				tv0->AddReply(534021, 35597, 35596);
				tv0->AddReply(534024, 35597, 35599);
				return;
			}
			if (a0 == 35597) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(534022);
				tv0->ClearReplies();
				tv0->AddReply(534023, -1, 35598);
				return;
			}
			if (a0 == 35587) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(534012);
				tv0->ClearReplies();
				tv0->AddReply(534013, 35589, 35588);
				return;
			}
			if (a0 == 35589) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(534014);
				tv0->ClearReplies();
				tv0->AddReply(534015, 35591, 35590);
				return;
			}
			if (a0 == 35591) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(534016);
				tv0->ClearReplies();
				tv0->AddReply(534017, -1, 35592);
				tv0->AddReply(534018, -1, 35593);
				return;
			}
			if (a0 == 35573) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(533999);
				tv0->ClearReplies();
				tv0->AddReply(534000, 35575, 35574);
				tv0->AddReply(534008, 35583, 35582);
				return;
			}
			if (a0 == 35583) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(534009);
				tv0->ClearReplies();
				tv0->AddReply(534010, 35577, 35584);
				return;
			}
			if (a0 == 35575) {
				f_5a4_a1_v("Autizm");
				tv0->SetMessage(534001);
				tv0->ClearReplies();
				tv0->AddReply(534002, 35577, 35576);
				return;
			}
			if (a0 == 35577) {
				f_5a4_a1_v("Autizm");
				tv0->SetMessage(534003);
				tv0->ClearReplies();
				tv0->AddReply(534004, 35579, 35578);
				return;
			}
			if (a0 == 35579) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(534005);
				tv0->ClearReplies();
				tv0->AddReply(534006, -1, 35580);
				tv0->AddReply(534007, -1, 35581);
				return;
			}
			if (a0 == 11063) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(510040);
				tv0->ClearReplies();
				tv0->AddReply(510041, -1, 11064);
				tv0->AddReply(510042, 11056, 11065);
				return;
			}
			if (a0 == 11054) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(510032);
				tv0->ClearReplies();
				tv0->AddReply(510033, 11056, 11055);
				tv0->AddReply(510038, 11056, 11060);
				return;
			}
			if (a0 == 11056) {
				f_5a4_a1_v("Drunk");
				tv0->SetMessage(510034);
				tv0->ClearReplies();
				tv0->AddReply(510035, -1, 11057);
				tv0->AddReply(510036, -1, 11058);
				tv0->AddReply(510037, -1, 11059);
				return;
			}
			tv3 = true;
			if (f_1223_a0_b()) {
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
		if (!f_108c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_121d_a0_i());
		L0->SetNPCDescription(f_121b_a0_i());
		L0->SetPhoto(f_121f_a0_s());
		L0->SetPhoto2(f_1221_a0_s());
		L0->SetPlayerName(f_149d_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10e3_a1_b(f_11a2_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10d1_a1_v(a0);
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
			f_873_a1_v("Autizm");
			tv0->SetMessage(513353);
			tv0->ClearReplies();
			if (f_13db_a1_b(tv1) && f_13cf_a1_b(tv1)) {
				tv0->AddReply(513355, 14598, 14587);
			}
			if (!f_13db_a1_b(tv1) && f_13cf_a1_b(tv1)) {
				tv0->AddReply(513374, 14607, 14606);
			}
			if (f_13e7_a1_b(tv1)) {
				tv0->AddReply(513390, 14625, 14624);
			}
			if (f_130f_a1_b(tv1) && f_131b_a1_b(tv1) || f_1303_a1_b(tv1) && f_131b_a1_b(tv1)) {
				tv0->AddReply(533264, 34779, 34778);
			}
			tv0->AddReply(513354, -1, 14586);
			tv0->AddReply(535721, -1, 37400);
			break;
			return;
		}
		if (f_1223_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_116d_a1_v(tv2);
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

	void f_873_a1_v(string a0)
	{
		if (!f_1223_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_117d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_119b_a0_v();
			if (a1 == 14602) {
				f_12e0_a2_v(tv1, tv0);
				f_12a5_a2_v(tv1, tv0);
			}
			if (a1 == 14605) {
				f_12e0_a2_v(tv1, tv0);
			}
			if (a1 == 14608) {
				f_12a5_a2_v(tv1, tv0);
			}
			if (a1 == 14626) {
				f_12ae_a2_v(tv1, tv0);
				f_12b4_a2_v(tv1, tv0);
				f_12e6_a2_v(tv1, tv0);
				f_1225_a2_v(tv1, tv0);
				f_125c_a2_v(tv1, tv0);
			}
			if (a1 == 34778) {
				f_1232_a2_v(tv1, tv0);
			}
			if (a1 == 34780) {
				f_122b_a2_v(tv1, tv0);
			}
			if (a1 == 37384) {
				f_122b_a2_v(tv1, tv0);
			}
			if (a0 == 14585) {
				f_873_a1_v("Autizm");
				tv0->SetMessage(513353);
				tv0->ClearReplies();
				if (f_13db_a1_b(tv1) && f_13cf_a1_b(tv1)) {
					tv0->AddReply(513355, 14598, 14587);
				}
				if (!f_13db_a1_b(tv1) && f_13cf_a1_b(tv1)) {
					tv0->AddReply(513374, 14607, 14606);
				}
				if (f_13e7_a1_b(tv1)) {
					tv0->AddReply(513390, 14625, 14624);
				}
				if (f_130f_a1_b(tv1) && f_131b_a1_b(tv1) || f_1303_a1_b(tv1) && f_131b_a1_b(tv1)) {
					tv0->AddReply(533264, 34779, 34778);
				}
				tv0->AddReply(513354, -1, 14586);
				tv0->AddReply(535721, -1, 37400);
				return;
			}
			if (a0 == 34779) {
				f_873_a1_v("Autizm");
				tv0->SetMessage(533265);
				tv0->ClearReplies();
				tv0->AddReply(535698, 37373, 37370);
				tv0->AddReply(535713, 37371, 37385);
				return;
			}
			if (a0 == 37371) {
				f_873_a1_v("Neutral");
				tv0->SetMessage(535699);
				tv0->ClearReplies();
				tv0->AddReply(535700, 37373, 37372);
				return;
			}
			if (a0 == 37373) {
				f_873_a1_v("Autizm");
				tv0->SetMessage(535701);
				tv0->ClearReplies();
				tv0->AddReply(535702, 37375, 37374);
				tv0->AddReply(535714, 37375, 37387);
				return;
			}
			if (a0 == 37375) {
				f_873_a1_v("Autizm");
				tv0->SetMessage(535703);
				tv0->ClearReplies();
				tv0->AddReply(535704, 37377, 37376);
				tv0->AddReply(535715, 37377, 37389);
				return;
			}
			if (a0 == 37377) {
				f_873_a1_v("Untrust");
				tv0->SetMessage(535705);
				tv0->ClearReplies();
				tv0->AddReply(535706, 37379, 37378);
				tv0->AddReply(535716, 37379, 37391);
				return;
			}
			if (a0 == 37379) {
				f_873_a1_v("Untrust");
				tv0->SetMessage(535707);
				tv0->ClearReplies();
				tv0->AddReply(535708, 37381, 37380);
				return;
			}
			if (a0 == 37381) {
				f_873_a1_v("Neutral");
				tv0->SetMessage(535709);
				tv0->ClearReplies();
				tv0->AddReply(535710, 37383, 37382);
				return;
			}
			if (a0 == 37383) {
				f_873_a1_v("Neutral");
				tv0->SetMessage(535711);
				tv0->ClearReplies();
				tv0->AddReply(533266, -1, 34780);
				tv0->AddReply(535712, -1, 37384);
				return;
			}
			if (a0 == 14625) {
				f_873_a1_v("Autizm");
				tv0->SetMessage(513391);
				tv0->ClearReplies();
				tv0->AddReply(513392, -1, 14626);
				return;
			}
			if (a0 == 14607) {
				f_873_a1_v("Drunk");
				tv0->SetMessage(513375);
				tv0->ClearReplies();
				tv0->AddReply(513376, -1, 14608);
				return;
			}
			if (a0 == 14598) {
				f_873_a1_v("Autizm");
				tv0->SetMessage(513366);
				tv0->ClearReplies();
				tv0->AddReply(513367, 14588, 14599);
				tv0->AddReply(535717, 14590, 37393);
				return;
			}
			if (a0 == 14588) {
				f_873_a1_v("Drunk");
				tv0->SetMessage(513356);
				tv0->ClearReplies();
				tv0->AddReply(513357, 14590, 14589);
				tv0->AddReply(535718, 37396, 37395);
				return;
			}
			if (a0 == 37396) {
				f_873_a1_v("Drunk");
				tv0->SetMessage(535719);
				tv0->ClearReplies();
				tv0->AddReply(535720, 14592, 37397);
				return;
			}
			if (a0 == 14590) {
				f_873_a1_v("Drunk");
				tv0->SetMessage(513358);
				tv0->ClearReplies();
				tv0->AddReply(513359, 14592, 14591);
				tv0->AddReply(541555, 43724, 43723);
				return;
			}
			if (a0 == 43724) {
				f_873_a1_v("Drunk");
				tv0->SetMessage(541556);
				tv0->ClearReplies();
				tv0->AddReply(541557, 43729, 43725);
				tv0->AddReply(541558, 43727, 43726);
				return;
			}
			if (a0 == 43727) {
				f_873_a1_v("Untrust");
				tv0->SetMessage(541559);
				tv0->ClearReplies();
				tv0->AddReply(541560, 43729, 43728);
				return;
			}
			if (a0 == 43729) {
				f_873_a1_v("Untrust");
				tv0->SetMessage(541561);
				tv0->ClearReplies();
				tv0->AddReply(541562, 43732, 43731);
				tv0->AddReply(541565, 14592, 43735);
				return;
			}
			if (a0 == 43732) {
				f_873_a1_v("Untrust");
				tv0->SetMessage(541563);
				tv0->ClearReplies();
				tv0->AddReply(541564, 14592, 43733);
				return;
			}
			if (a0 == 14592) {
				f_873_a1_v("Drunk");
				tv0->SetMessage(513360);
				tv0->ClearReplies();
				tv0->AddReply(513361, 14594, 14593);
				return;
			}
			if (a0 == 14594) {
				f_873_a1_v("Autizm");
				tv0->SetMessage(513362);
				tv0->ClearReplies();
				tv0->AddReply(513363, 14601, 14595);
				tv0->AddReply(513364, 14597, 14596);
				return;
			}
			if (a0 == 14597) {
				f_873_a1_v("Drunk");
				tv0->SetMessage(513365);
				tv0->ClearReplies();
				tv0->AddReply(513368, 14601, 14600);
				tv0->AddReply(513371, 14604, 14603);
				return;
			}
			if (a0 == 14604) {
				f_873_a1_v("Neutral");
				tv0->SetMessage(513372);
				tv0->ClearReplies();
				tv0->AddReply(513373, -1, 14605);
				return;
			}
			if (a0 == 14601) {
				f_873_a1_v("Autizm");
				tv0->SetMessage(513369);
				tv0->ClearReplies();
				tv0->AddReply(513370, -1, 14602);
				return;
			}
			tv3 = true;
			if (f_1223_a0_b()) {
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
		if (!f_108c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_121d_a0_i());
		L0->SetNPCDescription(f_121b_a0_i());
		L0->SetPhoto(f_121f_a0_s());
		L0->SetPhoto2(f_1221_a0_s());
		L0->SetPlayerName(f_149d_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10e3_a1_b(f_11a2_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10d1_a1_v(a0);
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
			f_be1_a1_v("Drunk");
			tv0->SetMessage(514474);
			tv0->ClearReplies();
			if (f_1417_a1_b(tv1)) {
				tv0->AddReply(514475, 15709, 15708);
			}
			if (f_13f3_a1_b(tv1) && f_13ff_a1_b(tv1)) {
				tv0->AddReply(539623, 15695, 41570);
			}
			if (f_140b_a1_b(tv1)) {
				tv0->AddReply(514501, -1, 15737);
			}
			tv0->AddReply(514500, -1, 15736);
			break;
			return;
		}
		if (f_1223_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_116d_a1_v(tv2);
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

	void f_be1_a1_v(string a0)
	{
		if (!f_1223_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_117d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_119b_a0_v();
			if (a1 == 15708) {
				f_12f7_a2_v(tv1, tv0);
			}
			if (a1 == 41570) {
				f_12f1_a2_v(tv1, tv0);
			}
			if (a0 == 15707) {
				f_be1_a1_v("Drunk");
				tv0->SetMessage(514474);
				tv0->ClearReplies();
				if (f_1417_a1_b(tv1)) {
					tv0->AddReply(514475, 15709, 15708);
				}
				if (f_13f3_a1_b(tv1) && f_13ff_a1_b(tv1)) {
					tv0->AddReply(539623, 15695, 41570);
				}
				if (f_140b_a1_b(tv1)) {
					tv0->AddReply(514501, -1, 15737);
				}
				tv0->AddReply(514500, -1, 15736);
				return;
			}
			if (a0 == 15695) {
				f_be1_a1_v("Neutral");
				tv0->SetMessage(514464);
				tv0->ClearReplies();
				tv0->AddReply(514465, 15697, 15696);
				tv0->AddReply(539626, 15697, 41574);
				return;
			}
			if (a0 == 15697) {
				f_be1_a1_v("Neutral");
				tv0->SetMessage(514466);
				tv0->ClearReplies();
				tv0->AddReply(514467, -1, 15698);
				tv0->AddReply(539630, 41859, 41576);
				return;
			}
			if (a0 == 41859) {
				f_be1_a1_v("Drunk");
				tv0->SetMessage(539899);
				tv0->ClearReplies();
				tv0->AddReply(539900, 41861, 41860);
				return;
			}
			if (a0 == 41861) {
				f_be1_a1_v("Neutral");
				tv0->SetMessage(539901);
				tv0->ClearReplies();
				tv0->AddReply(539902, -1, 41862);
				return;
			}
			if (a0 == 15709) {
				f_be1_a1_v("Autizm");
				tv0->SetMessage(514476);
				tv0->ClearReplies();
				tv0->AddReply(514477, 15711, 15710);
				tv0->AddReply(514499, 15711, 15734);
				return;
			}
			if (a0 == 15711) {
				f_be1_a1_v("Autizm");
				tv0->SetMessage(514478);
				tv0->ClearReplies();
				tv0->AddReply(514479, 15713, 15712);
				tv0->AddReply(514494, 15729, 15728);
				return;
			}
			if (a0 == 15729) {
				f_be1_a1_v("Neutral");
				tv0->SetMessage(514495);
				tv0->ClearReplies();
				tv0->AddReply(514496, 15731, 15730);
				return;
			}
			if (a0 == 15731) {
				f_be1_a1_v("Neutral");
				tv0->SetMessage(514497);
				tv0->ClearReplies();
				tv0->AddReply(514498, 15713, 15732);
				return;
			}
			if (a0 == 15713) {
				f_be1_a1_v("Neutral");
				tv0->SetMessage(514480);
				tv0->ClearReplies();
				tv0->AddReply(514481, 15715, 15714);
				return;
			}
			if (a0 == 15715) {
				f_be1_a1_v("Neutral");
				tv0->SetMessage(514482);
				tv0->ClearReplies();
				tv0->AddReply(514483, 15717, 15716);
				tv0->AddReply(539625, 15719, 41572);
				return;
			}
			if (a0 == 15717) {
				f_be1_a1_v("Neutral");
				tv0->SetMessage(514484);
				tv0->ClearReplies();
				tv0->AddReply(514485, 15719, 15718);
				return;
			}
			if (a0 == 15719) {
				f_be1_a1_v("Untrust");
				tv0->SetMessage(514486);
				tv0->ClearReplies();
				tv0->AddReply(514487, 15721, 15720);
				tv0->AddReply(514491, 15725, 15724);
				return;
			}
			if (a0 == 15725) {
				f_be1_a1_v("Untrust");
				tv0->SetMessage(514492);
				tv0->ClearReplies();
				tv0->AddReply(514493, 15721, 15726);
				return;
			}
			if (a0 == 15721) {
				f_be1_a1_v("Untrust");
				tv0->SetMessage(514488);
				tv0->ClearReplies();
				tv0->AddReply(514489, -1, 15722);
				tv0->AddReply(514490, -1, 15723);
				return;
			}
			tv3 = true;
			if (f_1223_a0_b()) {
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
		if (!f_108c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_121d_a0_i());
		L0->SetNPCDescription(f_121b_a0_i());
		L0->SetPhoto(f_121f_a0_s());
		L0->SetPhoto2(f_1221_a0_s());
		L0->SetPlayerName(f_149d_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10e3_a1_b(f_11a2_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10d1_a1_v(a0);
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
			f_dfd_a1_v("Neutral");
			tv0->SetMessage(535674);
			tv0->ClearReplies();
			tv0->AddReply(535675, 42165, 37361);
			tv0->AddReply(540006, -1, 41977);
			break;
			return;
		}
		if (f_1223_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_116d_a1_v(tv2);
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

	void f_dfd_a1_v(string a0)
	{
		if (!f_1223_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_117d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_119b_a0_v();
			if (a0 == 37360) {
				f_dfd_a1_v("Neutral");
				tv0->SetMessage(535674);
				tv0->ClearReplies();
				tv0->AddReply(535675, 42165, 37361);
				tv0->AddReply(540006, -1, 41977);
				return;
			}
			if (a0 == 42165) {
				f_dfd_a1_v("Autizm");
				tv0->SetMessage(540187);
				tv0->ClearReplies();
				tv0->AddReply(540188, 42167, 42166);
				return;
			}
			if (a0 == 42167) {
				f_dfd_a1_v("Autizm");
				tv0->SetMessage(540189);
				tv0->ClearReplies();
				tv0->AddReply(540190, 42196, 42168);
				tv0->AddReply(540192, 42169, 42170);
				return;
			}
			if (a0 == 42196) {
				f_dfd_a1_v("Autizm");
				tv0->SetMessage(540216);
				tv0->ClearReplies();
				tv0->AddReply(540217, 42169, 42197);
				return;
			}
			if (a0 == 42169) {
				f_dfd_a1_v("Neutral");
				tv0->SetMessage(540191);
				tv0->ClearReplies();
				tv0->AddReply(540193, -1, 42172);
				tv0->AddReply(540194, 42174, 42173);
				return;
			}
			if (a0 == 42174) {
				f_dfd_a1_v("Neutral");
				tv0->SetMessage(540195);
				tv0->ClearReplies();
				tv0->AddReply(540196, -1, 42175);
				return;
			}
			tv3 = true;
			if (f_1223_a0_b()) {
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
		if (!f_108c_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_121d_a0_i());
		L0->SetNPCDescription(f_121b_a0_i());
		L0->SetPhoto(f_121f_a0_s());
		L0->SetPhoto2(f_1221_a0_s());
		L0->SetPlayerName(f_149d_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_10e3_a1_b(f_11a2_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_10d1_a1_v(a0);
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
			f_f2c_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_1223_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_116d_a1_v(tv2);
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

	void f_f2c_a1_v(string a0)
	{
		if (!f_1223_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_117d_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_119b_a0_v();
			if (a0 == 42551) {
				f_f2c_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_1223_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t14
{
	var Vector tv0;

	void init(void)
	{
		f_f70_a0_v();
	}

	void f_f70_a0_v(void)
	{
		if (!f_1087_a0_b()) {
			@Hold();
		}
		@GetDirection(tv0);
		for (; ; ) {
			f_1020_a0_v();
		}
	}

	bool f_f7e_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_107e_a1_b(L0);
	}

	void f_f8d_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_f92_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_106c_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_fa8_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_fb1_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_fb1_a0_v();
			if (f_1087_a0_b() && f_f92_a0_b()) {
				if (f_f7e_a0_b()) {
					f_111d_a1_b(f_11a2_a0_o());
				}
			} else {
				f_f8d_a0_v();
				f_fa8_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1067_a0_v();
		f_fb1_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_fb1_a0_v();
		f_116d_a1_v("Neutral");
		f_fa8_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_fa8_a0_v();
		} else {
			f_116d_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1067_a0_v();
			f_107e_a1_b(a0);
			enable OnUse;
			f_14ae_a1_v(a0);
			f_116d_a1_v("Neutral");
			f_fb1_a0_v();
			f_fa8_a0_v();
		}
	}
}

void f_1020_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1087_a0_b()) {
		return;
	}
	L0 = f_120a_a0_i();
	for (L1 = 0; L1 < 5 && f_1087_a0_b(); L1++) {
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
			@PlayAnimation("all", f_1203_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_1065_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_1065_a0_b(void)
{
	return true;
}

void f_1067_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_106c_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_1074_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_107e_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1074_a1_b(L0);
}

bool f_1087_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_108c_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_11a8_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_1223_a0_b()) {
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

void f_10d1_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_1223_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_10e3_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_111d_a1_b(a0)) {
			if (!f_1142_a1_b(a0)) {
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
		if (!f_1142_a1_b(a0)) {
			if (!f_111d_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_111d_a1_b(object a0)
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
	return f_118c_a1_b(L4);
}

bool f_1142_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_11f4_a0_i() + "m";
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
	return f_118c_a1_b(L4);
}

void f_116d_a1_v(string a0)
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

void f_117d_a2_v(string a0, bool a1)
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

bool f_118c_a1_b(string a0)
{
	if (f_1223_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_119b_a0_v(void)
{
	if (f_1223_a0_b()) {
		@lshStopSpeech();
	}
}

object f_11a2_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_11a8_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_11b2_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_11b7_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_11c3_a3_v(object a0, object a1, int a2)
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
		f_11b7_a2_v(L0, a2);
	}
}

void f_11d6_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_11c3_a3_v(a0, L0, a2);
}

bool f_11e3_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_11ef_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_11f4_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_11fd_a1_b(int a0)
{
	return f_11f4_a0_i() == a0;
}

string f_1203_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_120a_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_1203_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_121b_a0_i(void)
{
	return 515550;
}

int f_121d_a0_i(void)
{
	return 502875;
}

string f_121f_a0_s(void)
{
	return "ui/NPC_Petr.png";
}

string f_1221_a0_s(void)
{
	return "ui/NPC_Petr_b.png";
}

bool f_1223_a0_b(void)
{
	return true;
}

void f_1225_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_122b_a2_v(object a0, object a1)
{
	f_11e3_a2_b("quest_d7_03", "remove_maria");
}

void f_1232_a2_v(object a0, object a1)
{
	@SetVariable("ood7Petr2", 1);
}

void f_1238_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr2", 1);
}

void f_123e_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr3", 1);
}

void f_1244_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr4", 1);
}

void f_124a_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr5", 1);
}

void f_1250_a2_v(object a0, object a1)
{
	@SetVariable("ood2Petr4", 1);
}

void f_1256_a2_v(object a0, object a1)
{
	@SetVariable("ood2Petr5", 1);
}

void f_125c_a2_v(object a0, object a1)
{
	@Trace("lens is given");
	f_11d6_a3_v(a0, "lens", 1);
}

void f_1267_a2_v(object a0, object a1)
{
	@SetVariable("KnowTvirin", 1);
}

void f_126d_a2_v(object a0, object a1)
{
	@SetVariable("ood2Petr1", 1);
}

void f_1273_a2_v(object a0, object a1)
{
	@SetVariable("ood2Petr2", 1);
}

void f_1279_a2_v(object a0, object a1)
{
	@SetVariable("ood2Petr3", 1);
}

void f_127f_a2_v(object a0, object a1)
{
	@SetVariable("d2q02", 3);
	f_142f_a0_v();
}

void f_1288_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 5);
	L0 = f_148c_a0_o();
	L0->AddMark("d2q02PetrGotoAndrei", "pt_map_andrei", 0, 515276, f_11ef_a0_f());
	f_143c_a0_v();
}

void f_129f_a2_v(object a0, object a1)
{
	@SetVariable("KnowPetr", 1);
}

void f_12a5_a2_v(object a0, object a1)
{
	@SetVariable("d7q02", 2);
	f_1456_a0_v();
}

void f_12ae_a2_v(object a0, object a1)
{
	@SetVariable("d7q02", 4);
}

void f_12b4_a2_v(object a0, object a1)
{
	if (f_11b2_a1_i("d7q02BirdBalahon") != 0) {
		object L0;
		object L1;
		L0 = f_148c_a0_o();
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
		f_1449_a0_v();
		f_11e3_a2_b("quest_d7_02", "completed");
	}
}

void f_12e0_a2_v(object a0, object a1)
{
	@SetVariable("ood7Petr1", 1);
}

void f_12e6_a2_v(object a0, object a1)
{
	@Trace("birdmask is given");
	f_11d6_a3_v(a0, "bird_mask", 1);
}

void f_12f1_a2_v(object a0, object a1)
{
	@SetVariable("ood11Petr1", 1);
}

void f_12f7_a2_v(object a0, object a1)
{
	@SetVariable("ood11Petr2", 1);
}

void f_12fd_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr1", 1);
}

bool f_1303_a1_b(object a0)
{
	if (f_11b2_a1_i("d7q03") == 4) {
		return true;
	}
	return false;
}

bool f_130f_a1_b(object a0)
{
	if (f_11b2_a1_i("d7q03") == 1000) {
		return true;
	}
	return false;
}

bool f_131b_a1_b(object a0)
{
	if (f_11b2_a1_i("ood7Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_1327_a1_b(object a0)
{
	if (f_11b2_a1_i("ood3Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_1333_a1_b(object a0)
{
	if (f_11b2_a1_i("ood3Petr3") == 0) {
		return true;
	}
	return false;
}

bool f_133f_a1_b(object a0)
{
	if (f_11b2_a1_i("ood3Petr4") == 0) {
		return true;
	}
	return false;
}

bool f_134b_a1_b(object a0)
{
	if (f_11b2_a1_i("ood3Petr5") == 0) {
		return true;
	}
	return false;
}

bool f_1357_a1_b(object a0)
{
	if (f_11b2_a1_i("ood2Petr4") == 0) {
		return true;
	}
	return false;
}

bool f_1363_a1_b(object a0)
{
	if (f_11b2_a1_i("ood2Petr5") == 0) {
		return true;
	}
	return false;
}

bool f_136f_a1_b(object a0)
{
	if (f_11b2_a1_i("ood2Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_137b_a1_b(object a0)
{
	if (f_11b2_a1_i("ood2Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_1387_a1_b(object a0)
{
	if (f_11b2_a1_i("ood2Petr3") == 0) {
		return true;
	}
	return false;
}

bool f_1393_a1_b(object a0)
{
	if (f_11b2_a1_i("d2q02") == 1000) {
		return true;
	}
	return false;
}

bool f_139f_a1_b(object a0)
{
	if (f_11b2_a1_i("d2q02") == 2) {
		return true;
	}
	return false;
}

bool f_13ab_a1_b(object a0)
{
	if (f_11b2_a1_i("d2q02") == 3) {
		return true;
	}
	return false;
}

bool f_13b7_a1_b(object a0)
{
	if (f_11b2_a1_i("d2q02") == 4) {
		return true;
	}
	return false;
}

bool f_13c3_a1_b(object a0)
{
	if (f_11b2_a1_i("d2q02") == 5) {
		return true;
	}
	return false;
}

bool f_13cf_a1_b(object a0)
{
	if (f_11b2_a1_i("d7q02") == 1) {
		return true;
	}
	return false;
}

bool f_13db_a1_b(object a0)
{
	if (f_11b2_a1_i("ood7Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_13e7_a1_b(object a0)
{
	if (f_11b2_a1_i("d7q02") == 3) {
		return true;
	}
	return false;
}

bool f_13f3_a1_b(object a0)
{
	if (f_11b2_a1_i("d11q01") == 1) {
		return true;
	}
	return false;
}

bool f_13ff_a1_b(object a0)
{
	if (f_11b2_a1_i("ood11Petr1") == 0) {
		return true;
	}
	return false;
}

bool f_140b_a1_b(object a0)
{
	if (f_11b2_a1_i("d11q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1417_a1_b(object a0)
{
	if (f_11b2_a1_i("ood11Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_1423_a1_b(object a0)
{
	if (f_11b2_a1_i("ood3Petr1") == 0) {
		return true;
	}
	return false;
}

void f_142f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 130, 2, 515267);
	f_1470_a2_b(L0, 11);
}

void f_143c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 131, 2, 515268);
	f_1470_a2_b(L0, 11);
}

void f_1449_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 174, 2, 515426);
	f_1470_a2_b(L0, 170);
}

void f_1456_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 173, 2, 515425);
	f_1470_a2_b(L0, 170);
}

object f_1463_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1470_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1463_a0_o();
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

object f_148c_a0_o(void)
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

int f_149d_a0_i(void)
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

void f_14ae_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_petr", L0);
	if (!L0) {
		t0{a0};
		@SetVariable("mt_petr", 1);
	}
	if (f_11fd_a1_b(2)) {
		t2{a0};
		return;
	}
	if (f_11fd_a1_b(3)) {
		t4{a0};
		return;
	}
	if (f_11fd_a1_b(7)) {
		t6{a0};
		return;
	}
	if (f_11fd_a1_b(11)) {
		t8{a0};
		return;
	}
	if (f_11fd_a1_b(12)) {
		t10{a0};
		return;
	}
	t12{a0};
}

