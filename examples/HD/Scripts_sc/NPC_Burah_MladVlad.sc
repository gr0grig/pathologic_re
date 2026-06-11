event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event OnTimer 7;
event OnDialogReply 11;

var string g0;
var object g1;
var bool g2;
var bool g3;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_1245_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

task t1
{
	var bool tv0;

	bool init(Vector a0, Vector a1)
	{
		bool L0;
		tv0 = true;
		@SetTimer(21, 0.5);
		for (; ; ) {
			while (!f_1227_a1_b(a0)) {
			}
			@MovePoint(a0, false, L0);
			if (L0) {
				break;
			}
		}
		@KillTimer(20);
		@KillTimer(21);
		tv0 = false;
		@WaitForAnimEnd(L0);
		if (!L0) {
			return false;
		}
		@Rotate(a1.x, a1.z, L0);
		if (!L0) {
			return false;
		}
		return true;
	}

	void OnUnload(void)
	{
		tv0 = true;
		f_91_a0_v();
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_91_a0_v();
			disable OnUse;
			f_1231_a1_b(a0);
			enable OnUse;
			f_1710_a1_v(a0);
			tv0 = false;
		}
	}

	void OnCollision(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			f_91_a0_v();
			t2{a0};
			tv0 = false;
			@SetTimer(20, 10.0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 20) {
			tv0 = true;
			@KillTimer(20);
		} else {
			if (a0 == 21) {
				if (tv0) {
					object L0;
					@FindActor(L0, "player");
					if (L0 && f_1211_a1_f(L0) <= 62500.0) {
						OnCollision(L0);
					}
				}
			}
		}
	}

	void f_91_a0_v(void)
	{
		@Stop();
	}
}

task t2
{
	void init(object a0)
	{
		bool L0;
		@WaitForAnimEnd(L0);
		if (!L0) {
			return;
		}
		f_123a_a1_v(a0);
		@Sleep(6);
	}

	void OnUnload(void)
	{
		f_c1_a0_v();
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			f_c1_a0_v();
			disable OnUse;
			f_1231_a1_b(a0);
			enable OnUse;
			f_1710_a1_v(a0);
		}
	}

	void f_c1_a0_v(void)
	{
		@StopGroup0();
		@StopAnimation();
	}
}

task t3
{
	void init(int a0)
	{
		string L0;
		bool L1;
		if (a0) {
			L0 = "ptidle" + a0;
		} else {
			L0 = "ptidle";
		}
		@HasProperty(L0, L1);
		if (L1) {
			string L2;
			int L3;
			int L4;
			@GetProperty(L0, L2);
			L3 = f_108_a1_i(L2);
			@irand(L4, L3);
			@PlayAnimation("all", f_100_a2_s(L2, L4));
			@WaitForAnimEnd();
		} else {
			int L5;
			L5 = f_1433_a0_i();
			if (L5) {
				int L6;
				@irand(L6, L5);
				@PlayAnimation("all", f_142c_a1_s(L6));
				@WaitForAnimEnd();
			}
		}
	}

	void OnUnload(void)
	{
		global.OnUnload();
		t0{};
	}

	string f_100_a2_s(string a0, int a1)
	{
		return a1 == 0 ? a0 : a0 + a1;
	}

	int f_108_a1_i(string a0)
	{
		int L0;
		for (L0 = 0; ; L0++) {
			bool L1;
			@HasAnimation(L1, "all", f_100_a2_s(a0, L0));
			if (!L1) {
				break;
			}
		}
		return L0;
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
		if (!f_124a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1454_a0_i());
		L0->SetNPCDescription(f_1452_a0_i());
		L0->SetPhoto(f_1456_a0_s());
		L0->SetPhoto2(f_1458_a0_s());
		L0->SetPlayerName(f_16ff_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_12a1_a1_b(f_1360_a0_o());
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_128f_a1_v(a0);
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
			if (f_15e9_a1_b(tv1)) {
				f_1e1_a1_v("Untrust");
				tv0->SetMessage(520042);
				tv0->ClearReplies();
				tv0->AddReply(520043, 21227, 21225);
				tv0->AddReply(520044, -1, 21226);
				break;
			}
			if (f_15f5_a1_b(tv1)) {
				f_146c_a2_v(tv1, tv0);
				f_1e1_a1_v("Neutral");
				tv0->SetMessage(519876);
				tv0->ClearReplies();
				tv0->AddReply(519877, 21042, 21041);
				tv0->AddReply(519905, 21042, 21073);
				break;
			}
			f_1e1_a1_v("Neutral");
			tv0->SetMessage(519906);
			tv0->ClearReplies();
			if (f_1601_a1_b(tv1)) {
				tv0->AddReply(519907, 21077, 21076);
			}
			tv0->AddReply(519917, -1, 21086);
			break;
			return;
		}
		if (f_145a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_132b_a1_v(tv2);
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

	void f_1e1_a1_v(string a0)
	{
		if (!f_145a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_133b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1359_a0_v();
			if (a1 == 21076) {
				f_1482_a2_v(tv1, tv0);
			}
			if (a1 == 21082) {
				f_1472_a2_v(tv1, tv0);
				f_159c_a2_v(tv1, tv0);
			}
			if (a1 == 21085) {
				f_1472_a2_v(tv1, tv0);
				f_159c_a2_v(tv1, tv0);
			}
			if (a0 == 21224) {
				if (f_15e9_a1_b(tv1)) {
					f_1e1_a1_v("Untrust");
					tv0->SetMessage(520042);
					tv0->ClearReplies();
					tv0->AddReply(520043, 21227, 21225);
					tv0->AddReply(520044, -1, 21226);
					return;
				}
				if (f_15f5_a1_b(tv1)) {
					f_146c_a2_v(tv1, tv0);
					f_1e1_a1_v("Neutral");
					tv0->SetMessage(519876);
					tv0->ClearReplies();
					tv0->AddReply(519877, 21042, 21041);
					tv0->AddReply(519905, 21042, 21073);
					return;
				}
				f_1e1_a1_v("Neutral");
				tv0->SetMessage(519906);
				tv0->ClearReplies();
				if (f_1601_a1_b(tv1)) {
					tv0->AddReply(519907, 21077, 21076);
				}
				tv0->AddReply(519917, -1, 21086);
				return;
			}
			if (a0 == 21077) {
				f_1e1_a1_v("Neutral");
				tv0->SetMessage(519908);
				tv0->ClearReplies();
				if (!f_15dd_a1_b(tv1)) {
					tv0->AddReply(519909, 21079, 21078);
				}
				if (f_15dd_a1_b(tv1)) {
					tv0->AddReply(519914, 21084, 21083);
				}
				return;
			}
			if (a0 == 21084) {
				f_1e1_a1_v("Neutral");
				tv0->SetMessage(519915);
				tv0->ClearReplies();
				tv0->AddReply(519916, -1, 21085);
				return;
			}
			if (a0 == 21079) {
				f_1e1_a1_v("Untrust");
				tv0->SetMessage(519910);
				tv0->ClearReplies();
				tv0->AddReply(519911, 21081, 21080);
				return;
			}
			if (a0 == 21081) {
				f_1e1_a1_v("Neutral");
				tv0->SetMessage(519912);
				tv0->ClearReplies();
				tv0->AddReply(519913, -1, 21082);
				return;
			}
			if (a0 == 21042) {
				f_1e1_a1_v("Untrust");
				tv0->SetMessage(519878);
				tv0->ClearReplies();
				tv0->AddReply(519879, 21044, 21043);
				tv0->AddReply(519902, 21070, 21069);
				return;
			}
			if (a0 == 21070) {
				f_1e1_a1_v("Untrust");
				tv0->SetMessage(519903);
				tv0->ClearReplies();
				tv0->AddReply(519904, 21044, 21071);
				return;
			}
			if (a0 == 21044) {
				f_1e1_a1_v("Neutral");
				tv0->SetMessage(519880);
				tv0->ClearReplies();
				tv0->AddReply(519881, 21046, 21045);
				tv0->AddReply(519897, 21064, 21063);
				return;
			}
			if (a0 == 21064) {
				f_1e1_a1_v("Sly");
				tv0->SetMessage(519898);
				tv0->ClearReplies();
				tv0->AddReply(519899, 21066, 21065);
				return;
			}
			if (a0 == 21066) {
				f_1e1_a1_v("Sly");
				tv0->SetMessage(519900);
				tv0->ClearReplies();
				tv0->AddReply(519901, 21046, 21067);
				return;
			}
			if (a0 == 21046) {
				f_1e1_a1_v("Neutral");
				tv0->SetMessage(519882);
				tv0->ClearReplies();
				tv0->AddReply(519883, 21048, 21047);
				tv0->AddReply(519896, 21048, 21061);
				return;
			}
			if (a0 == 21048) {
				f_1e1_a1_v("Untrust");
				tv0->SetMessage(519884);
				tv0->ClearReplies();
				tv0->AddReply(519885, 21050, 21049);
				tv0->AddReply(519893, 21058, 21057);
				return;
			}
			if (a0 == 21058) {
				f_1e1_a1_v("Neutral");
				tv0->SetMessage(519894);
				tv0->ClearReplies();
				tv0->AddReply(519895, 21052, 21059);
				return;
			}
			if (a0 == 21050) {
				f_1e1_a1_v("Sly");
				tv0->SetMessage(519886);
				tv0->ClearReplies();
				tv0->AddReply(519887, 21052, 21051);
				return;
			}
			if (a0 == 21052) {
				f_1e1_a1_v("Neutral");
				tv0->SetMessage(519888);
				tv0->ClearReplies();
				tv0->AddReply(519889, 21054, 21053);
				return;
			}
			if (a0 == 21054) {
				f_1e1_a1_v("Neutral");
				tv0->SetMessage(519890);
				tv0->ClearReplies();
				tv0->AddReply(519891, -1, 21055);
				tv0->AddReply(519892, -1, 21056);
				return;
			}
			if (a0 == 21227) {
				f_1e1_a1_v("Untrust");
				tv0->SetMessage(520045);
				tv0->ClearReplies();
				tv0->AddReply(520046, -1, 21228);
				return;
			}
			tv3 = true;
			if (f_145a_a0_b()) {
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
		if (!f_124a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1454_a0_i());
		L0->SetNPCDescription(f_1452_a0_i());
		L0->SetPhoto(f_1456_a0_s());
		L0->SetPhoto2(f_1458_a0_s());
		L0->SetPlayerName(f_16ff_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_12a1_a1_b(f_1360_a0_o());
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_128f_a1_v(a0);
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
			if (!f_160d_a1_b(tv1)) {
				f_1553_a2_v(tv1, tv0);
				f_480_a1_v("Neutral");
				tv0->SetMessage(520000);
				tv0->ClearReplies();
				tv0->AddReply(520001, 21183, 21182);
				tv0->AddReply(520017, 21183, 21199);
				break;
			}
			f_480_a1_v("Neutral");
			tv0->SetMessage(520019);
			tv0->ClearReplies();
			if (f_1619_a1_b(tv1) && f_160d_a1_b(tv1)) {
				tv0->AddReply(520020, 21205, 21204);
			}
			tv0->AddReply(520030, -1, 21214);
			break;
			return;
		}
		if (f_145a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_132b_a1_v(tv2);
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

	void f_480_a1_v(string a0)
	{
		if (!f_145a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_133b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1359_a0_v();
			if (a1 == 21192) {
				f_1488_a2_v(tv1, tv0);
				f_145c_a2_v(tv1, tv0);
				f_149c_a2_v(tv1, tv0);
			}
			if (a1 == 21193) {
				f_1488_a2_v(tv1, tv0);
				f_145c_a2_v(tv1, tv0);
				f_149c_a2_v(tv1, tv0);
			}
			if (a1 == 21194) {
				f_1488_a2_v(tv1, tv0);
				f_145c_a2_v(tv1, tv0);
				f_149c_a2_v(tv1, tv0);
			}
			if (a1 == 21204) {
				f_14a3_a2_v(tv1, tv0);
			}
			if (a1 == 21212) {
				f_14a9_a2_v(tv1, tv0);
				f_159c_a2_v(tv1, tv0);
			}
			if (a1 == 21213) {
				f_14a9_a2_v(tv1, tv0);
				f_159c_a2_v(tv1, tv0);
			}
			if (a0 == 21181) {
				if (!f_160d_a1_b(tv1)) {
					f_1553_a2_v(tv1, tv0);
					f_480_a1_v("Neutral");
					tv0->SetMessage(520000);
					tv0->ClearReplies();
					tv0->AddReply(520001, 21183, 21182);
					tv0->AddReply(520017, 21183, 21199);
					return;
				}
				f_480_a1_v("Neutral");
				tv0->SetMessage(520019);
				tv0->ClearReplies();
				if (f_1619_a1_b(tv1) && f_160d_a1_b(tv1)) {
					tv0->AddReply(520020, 21205, 21204);
				}
				tv0->AddReply(520030, -1, 21214);
				return;
			}
			if (a0 == 21205) {
				f_480_a1_v("Neutral");
				tv0->SetMessage(520021);
				tv0->ClearReplies();
				tv0->AddReply(520022, 21207, 21206);
				tv0->AddReply(527733, 29085, 29084);
				return;
			}
			if (a0 == 29085) {
				f_480_a1_v("Neutral");
				tv0->SetMessage(527734);
				tv0->ClearReplies();
				tv0->AddReply(520029, -1, 21213);
				return;
			}
			if (a0 == 21207) {
				f_480_a1_v("Untrust");
				tv0->SetMessage(520023);
				tv0->ClearReplies();
				tv0->AddReply(520024, 21209, 21208);
				return;
			}
			if (a0 == 21209) {
				f_480_a1_v("Neutral");
				tv0->SetMessage(520025);
				tv0->ClearReplies();
				tv0->AddReply(520026, 21211, 21210);
				tv0->AddReply(527735, 29087, 29086);
				return;
			}
			if (a0 == 29087) {
				f_480_a1_v("Untrust");
				tv0->SetMessage(527736);
				tv0->ClearReplies();
				tv0->AddReply(527737, 21211, 29088);
				return;
			}
			if (a0 == 21211) {
				f_480_a1_v("Neutral");
				tv0->SetMessage(520027);
				tv0->ClearReplies();
				tv0->AddReply(520028, -1, 21212);
				return;
			}
			if (a0 == 21183) {
				f_480_a1_v("Untrust");
				tv0->SetMessage(520002);
				tv0->ClearReplies();
				tv0->AddReply(520003, 21185, 21184);
				tv0->AddReply(527725, 29074, 29073);
				return;
			}
			if (a0 == 29074) {
				f_480_a1_v("Rage");
				tv0->SetMessage(527726);
				tv0->ClearReplies();
				tv0->AddReply(527727, 21185, 29075);
				return;
			}
			if (a0 == 21185) {
				f_480_a1_v("Sly");
				tv0->SetMessage(520004);
				tv0->ClearReplies();
				tv0->AddReply(520005, 21187, 21186);
				tv0->AddReply(520015, 21187, 21196);
				return;
			}
			if (a0 == 21187) {
				f_480_a1_v("Untrust");
				tv0->SetMessage(520006);
				tv0->ClearReplies();
				tv0->AddReply(520007, 21189, 21188);
				tv0->AddReply(527728, 29079, 29078);
				return;
			}
			if (a0 == 29079) {
				f_480_a1_v("Neutral");
				tv0->SetMessage(527729);
				tv0->ClearReplies();
				tv0->AddReply(527730, 29081, 29080);
				return;
			}
			if (a0 == 29081) {
				f_480_a1_v("Neutral");
				tv0->SetMessage(527731);
				tv0->ClearReplies();
				tv0->AddReply(527732, 21189, 29082);
				return;
			}
			if (a0 == 21189) {
				f_480_a1_v("Neutral");
				tv0->SetMessage(520008);
				tv0->ClearReplies();
				tv0->AddReply(520009, 21191, 21190);
				tv0->AddReply(520013, -1, 21194);
				return;
			}
			if (a0 == 21191) {
				f_480_a1_v("Sly");
				tv0->SetMessage(520010);
				tv0->ClearReplies();
				tv0->AddReply(520011, -1, 21192);
				tv0->AddReply(520012, -1, 21193);
				return;
			}
			tv3 = true;
			if (f_145a_a0_b()) {
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
		if (!f_124a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1454_a0_i());
		L0->SetNPCDescription(f_1452_a0_i());
		L0->SetPhoto(f_1456_a0_s());
		L0->SetPhoto2(f_1458_a0_s());
		L0->SetPlayerName(f_16ff_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_12a1_a1_b(f_1360_a0_o());
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_128f_a1_v(a0);
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
			if (f_1625_a1_b(tv1)) {
				f_14d6_a2_v(tv1, tv0);
				f_1570_a2_v(tv1, tv0);
				f_71c_a1_v("Rage");
				tv0->SetMessage(520138);
				tv0->ClearReplies();
				tv0->AddReply(520139, 21324, 21323);
				break;
			}
			f_71c_a1_v("Rage");
			tv0->SetMessage(520157);
			tv0->ClearReplies();
			if (f_1631_a1_b(tv1)) {
				tv0->AddReply(520158, 21346, 21345);
			}
			if (f_163d_a1_b(tv1)) {
				tv0->AddReply(520164, 21352, 21351);
			}
			tv0->AddReply(520180, -1, 21370);
			break;
			return;
		}
		if (f_145a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_132b_a1_v(tv2);
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

	void f_71c_a1_v(string a0)
	{
		if (!f_145a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_133b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1359_a0_v();
			if (a1 == 21333) {
				f_150a_a2_v(tv1, tv0);
				f_156a_a2_v(tv1, tv0);
				f_14dc_a2_v(tv1, tv0);
			}
			if (a1 == 21335) {
				f_150a_a2_v(tv1, tv0);
				f_156a_a2_v(tv1, tv0);
				f_14dc_a2_v(tv1, tv0);
			}
			if (a1 == 21349) {
				f_1500_a2_v(tv1, tv0);
				f_1564_a2_v(tv1, tv0);
				f_150a_a2_v(tv1, tv0);
				f_14dc_a2_v(tv1, tv0);
				f_155a_a2_v(tv1, tv0);
			}
			if (a1 == 21350) {
				f_150a_a2_v(tv1, tv0);
				f_156a_a2_v(tv1, tv0);
				f_14dc_a2_v(tv1, tv0);
			}
			if (a1 == 21361) {
				f_14f6_a2_v(tv1, tv0);
				f_1576_a2_v(tv1, tv0);
				f_1580_a2_v(tv1, tv0);
				f_158b_a2_v(tv1, tv0);
				f_156a_a2_v(tv1, tv0);
			}
			if (a0 == 21322) {
				if (f_1625_a1_b(tv1)) {
					f_14d6_a2_v(tv1, tv0);
					f_1570_a2_v(tv1, tv0);
					f_71c_a1_v("Rage");
					tv0->SetMessage(520138);
					tv0->ClearReplies();
					tv0->AddReply(520139, 21324, 21323);
					return;
				}
				f_71c_a1_v("Rage");
				tv0->SetMessage(520157);
				tv0->ClearReplies();
				if (f_1631_a1_b(tv1)) {
					tv0->AddReply(520158, 21346, 21345);
				}
				if (f_163d_a1_b(tv1)) {
					tv0->AddReply(520164, 21352, 21351);
				}
				tv0->AddReply(520180, -1, 21370);
				return;
			}
			if (a0 == 21352) {
				f_71c_a1_v("Neutral");
				tv0->SetMessage(520165);
				tv0->ClearReplies();
				tv0->AddReply(520166, 21354, 21353);
				tv0->AddReply(520179, 21354, 21368);
				return;
			}
			if (a0 == 21354) {
				f_71c_a1_v("Neutral");
				tv0->SetMessage(520167);
				tv0->ClearReplies();
				tv0->AddReply(520168, 21356, 21355);
				tv0->AddReply(520178, 21360, 21366);
				return;
			}
			if (a0 == 21356) {
				f_71c_a1_v("Fear");
				tv0->SetMessage(520169);
				tv0->ClearReplies();
				tv0->AddReply(520170, 21358, 21357);
				return;
			}
			if (a0 == 21358) {
				f_71c_a1_v("Fear");
				tv0->SetMessage(520171);
				tv0->ClearReplies();
				tv0->AddReply(520172, 21360, 21359);
				tv0->AddReply(520175, 21363, 21362);
				return;
			}
			if (a0 == 21363) {
				f_71c_a1_v("Sly");
				tv0->SetMessage(520176);
				tv0->ClearReplies();
				tv0->AddReply(520177, 21360, 21364);
				return;
			}
			if (a0 == 21360) {
				f_71c_a1_v("Neutral");
				tv0->SetMessage(520173);
				tv0->ClearReplies();
				tv0->AddReply(520174, -1, 21361);
				return;
			}
			if (a0 == 21346) {
				f_71c_a1_v("Sly");
				tv0->SetMessage(520159);
				tv0->ClearReplies();
				tv0->AddReply(520160, 21348, 21347);
				tv0->AddReply(520163, -1, 21350);
				return;
			}
			if (a0 == 21348) {
				f_71c_a1_v("Neutral");
				tv0->SetMessage(520161);
				tv0->ClearReplies();
				tv0->AddReply(520162, -1, 21349);
				return;
			}
			if (a0 == 21324) {
				f_71c_a1_v("Rage");
				tv0->SetMessage(520140);
				tv0->ClearReplies();
				tv0->AddReply(520141, 21326, 21325);
				tv0->AddReply(520154, 21341, 21340);
				return;
			}
			if (a0 == 21341) {
				f_71c_a1_v("Sly");
				tv0->SetMessage(520155);
				tv0->ClearReplies();
				tv0->AddReply(520156, 21326, 21342);
				return;
			}
			if (a0 == 21326) {
				f_71c_a1_v("Rage");
				tv0->SetMessage(520142);
				tv0->ClearReplies();
				tv0->AddReply(520143, 21328, 21327);
				tv0->AddReply(520153, 21330, 21338);
				return;
			}
			if (a0 == 21328) {
				f_71c_a1_v("Sly");
				tv0->SetMessage(520144);
				tv0->ClearReplies();
				tv0->AddReply(520145, 21330, 21329);
				tv0->AddReply(520152, 21330, 21336);
				return;
			}
			if (a0 == 21330) {
				f_71c_a1_v("Sly");
				tv0->SetMessage(520146);
				tv0->ClearReplies();
				tv0->AddReply(520147, 21332, 21331);
				tv0->AddReply(520151, -1, 21335);
				return;
			}
			if (a0 == 21332) {
				f_71c_a1_v("Neutral");
				tv0->SetMessage(520148);
				tv0->ClearReplies();
				tv0->AddReply(520149, -1, 21333);
				tv0->AddReply(520150, -1, 21334);
				return;
			}
			tv3 = true;
			if (f_145a_a0_b()) {
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
		if (!f_124a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1454_a0_i());
		L0->SetNPCDescription(f_1452_a0_i());
		L0->SetPhoto(f_1456_a0_s());
		L0->SetPhoto2(f_1458_a0_s());
		L0->SetPlayerName(f_16ff_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_12a1_a1_b(f_1360_a0_o());
		t11{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_128f_a1_v(a0);
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
			f_9ab_a1_v("Neutral");
			tv0->SetMessage(520768);
			tv0->ClearReplies();
			tv0->AddReply(520769, 21984, 21983);
			tv0->AddReply(520772, 21987, 21986);
			break;
			return;
		}
		if (f_145a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_132b_a1_v(tv2);
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

	void f_9ab_a1_v(string a0)
	{
		if (!f_145a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_133b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1359_a0_v();
			if (a0 == 21982) {
				f_9ab_a1_v("Neutral");
				tv0->SetMessage(520768);
				tv0->ClearReplies();
				tv0->AddReply(520769, 21984, 21983);
				tv0->AddReply(520772, 21987, 21986);
				return;
			}
			if (a0 == 21987) {
				f_9ab_a1_v("Neutral");
				tv0->SetMessage(520773);
				tv0->ClearReplies();
				tv0->AddReply(520774, -1, 21988);
				return;
			}
			if (a0 == 21984) {
				f_9ab_a1_v("Neutral");
				tv0->SetMessage(520770);
				tv0->ClearReplies();
				tv0->AddReply(520771, -1, 21985);
				return;
			}
			tv3 = true;
			if (f_145a_a0_b()) {
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
		if (!f_124a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1454_a0_i());
		L0->SetNPCDescription(f_1452_a0_i());
		L0->SetPhoto(f_1456_a0_s());
		L0->SetPhoto2(f_1458_a0_s());
		L0->SetPlayerName(f_16ff_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_12a1_a1_b(f_1360_a0_o());
		t13{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_128f_a1_v(a0);
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
			f_a9a_a1_v("Untrust");
			tv0->SetMessage(521202);
			tv0->ClearReplies();
			tv0->AddReply(521203, 22402, 22400);
			tv0->AddReply(521204, -1, 22401);
			break;
			return;
		}
		if (f_145a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_132b_a1_v(tv2);
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

	void f_a9a_a1_v(string a0)
	{
		if (!f_145a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_133b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1359_a0_v();
			if (a1 == 22403) {
				f_1515_a2_v(tv1, tv0);
			}
			if (a0 == 22399) {
				f_a9a_a1_v("Untrust");
				tv0->SetMessage(521202);
				tv0->ClearReplies();
				tv0->AddReply(521203, 22402, 22400);
				tv0->AddReply(521204, -1, 22401);
				return;
			}
			if (a0 == 22402) {
				f_a9a_a1_v("Untrust");
				tv0->SetMessage(521205);
				tv0->ClearReplies();
				tv0->AddReply(528423, 29808, 29806);
				tv0->AddReply(528424, 29808, 29807);
				return;
			}
			if (a0 == 29808) {
				f_a9a_a1_v("Sly");
				tv0->SetMessage(528425);
				tv0->ClearReplies();
				tv0->AddReply(521206, -1, 22403);
				return;
			}
			tv3 = true;
			if (f_145a_a0_b()) {
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
		if (!f_124a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1454_a0_i());
		L0->SetNPCDescription(f_1452_a0_i());
		L0->SetPhoto(f_1456_a0_s());
		L0->SetPhoto2(f_1458_a0_s());
		L0->SetPlayerName(f_16ff_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_12a1_a1_b(f_1360_a0_o());
		t15{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_128f_a1_v(a0);
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
			if (f_15a2_a1_b(tv1)) {
				f_153e_a2_v(tv1, tv0);
				f_bd2_a1_v("Rage");
				tv0->SetMessage(521469);
				tv0->ClearReplies();
				tv0->AddReply(523789, 25055, 25054);
				tv0->AddReply(523804, 25055, 25070);
				break;
			}
			f_bd2_a1_v("Rage");
			tv0->SetMessage(521474);
			tv0->ClearReplies();
			if (f_15ae_a1_b(tv1)) {
				tv0->AddReply(521475, 22642, 22640);
			}
			if (!f_15ae_a1_b(tv1) && f_15ba_a1_b(tv1)) {
				tv0->AddReply(521479, 22645, 22644);
			}
			tv0->AddReply(523837, 25111, 25110);
			tv0->AddReply(521476, -1, 22641);
			break;
			return;
		}
		if (f_145a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_132b_a1_v(tv2);
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

	void f_bd2_a1_v(string a0)
	{
		if (!f_145a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_133b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1359_a0_v();
			if (a1 == 22637) {
				f_1520_a2_v(tv1, tv0);
			}
			if (a1 == 22643) {
				f_1520_a2_v(tv1, tv0);
			}
			if (a1 == 22646) {
				f_1530_a2_v(tv1, tv0);
				f_1596_a2_v(tv1, tv0);
				f_1500_a2_v(tv1, tv0);
				f_1564_a2_v(tv1, tv0);
			}
			if (a1 == 25069) {
				f_1530_a2_v(tv1, tv0);
			}
			if (a0 == 22634) {
				if (f_15a2_a1_b(tv1)) {
					f_153e_a2_v(tv1, tv0);
					f_bd2_a1_v("Rage");
					tv0->SetMessage(521469);
					tv0->ClearReplies();
					tv0->AddReply(523789, 25055, 25054);
					tv0->AddReply(523804, 25055, 25070);
					return;
				}
				f_bd2_a1_v("Rage");
				tv0->SetMessage(521474);
				tv0->ClearReplies();
				if (f_15ae_a1_b(tv1)) {
					tv0->AddReply(521475, 22642, 22640);
				}
				if (!f_15ae_a1_b(tv1) && f_15ba_a1_b(tv1)) {
					tv0->AddReply(521479, 22645, 22644);
				}
				tv0->AddReply(523837, 25111, 25110);
				tv0->AddReply(521476, -1, 22641);
				return;
			}
			if (a0 == 25111) {
				f_bd2_a1_v("Untrust");
				tv0->SetMessage(523838);
				tv0->ClearReplies();
				tv0->AddReply(523839, 25113, 25112);
				return;
			}
			if (a0 == 25113) {
				f_bd2_a1_v("Fear");
				tv0->SetMessage(523840);
				tv0->ClearReplies();
				tv0->AddReply(523841, 25115, 25114);
				return;
			}
			if (a0 == 25115) {
				f_bd2_a1_v("Untrust");
				tv0->SetMessage(523842);
				tv0->ClearReplies();
				tv0->AddReply(523843, 25117, 25116);
				return;
			}
			if (a0 == 25117) {
				f_bd2_a1_v("Untrust");
				tv0->SetMessage(523844);
				tv0->ClearReplies();
				tv0->AddReply(523845, -1, 25118);
				return;
			}
			if (a0 == 22645) {
				f_bd2_a1_v("Sly");
				tv0->SetMessage(521480);
				tv0->ClearReplies();
				tv0->AddReply(523798, 25065, 25063);
				tv0->AddReply(523799, 25066, 25064);
				return;
			}
			if (a0 == 25066) {
				f_bd2_a1_v("Neutral");
				tv0->SetMessage(523801);
				tv0->ClearReplies();
				tv0->AddReply(523802, 25065, 25067);
				return;
			}
			if (a0 == 25065) {
				f_bd2_a1_v("Neutral");
				tv0->SetMessage(523800);
				tv0->ClearReplies();
				tv0->AddReply(521481, -1, 22646);
				tv0->AddReply(523803, -1, 25069);
				return;
			}
			if (a0 == 22642) {
				f_bd2_a1_v("Neutral");
				tv0->SetMessage(521477);
				tv0->ClearReplies();
				tv0->AddReply(521478, -1, 22643);
				return;
			}
			if (a0 == 25055) {
				f_bd2_a1_v("Rage");
				tv0->SetMessage(523790);
				tv0->ClearReplies();
				tv0->AddReply(523791, 25057, 25056);
				tv0->AddReply(523805, 25057, 25072);
				return;
			}
			if (a0 == 25057) {
				f_bd2_a1_v("Rage");
				tv0->SetMessage(523792);
				tv0->ClearReplies();
				tv0->AddReply(523793, 25059, 25058);
				tv0->AddReply(523797, 25059, 25062);
				return;
			}
			if (a0 == 25059) {
				f_bd2_a1_v("Rage");
				tv0->SetMessage(523794);
				tv0->ClearReplies();
				tv0->AddReply(523795, 25075, 25060);
				tv0->AddReply(523810, 25080, 25079);
				return;
			}
			if (a0 == 25080) {
				f_bd2_a1_v("Rage");
				tv0->SetMessage(523811);
				tv0->ClearReplies();
				tv0->AddReply(523812, 25075, 25081);
				return;
			}
			if (a0 == 25075) {
				f_bd2_a1_v("Rage");
				tv0->SetMessage(523806);
				tv0->ClearReplies();
				tv0->AddReply(523807, 25077, 25076);
				return;
			}
			if (a0 == 25077) {
				f_bd2_a1_v("Sly");
				tv0->SetMessage(523808);
				tv0->ClearReplies();
				tv0->AddReply(523809, 22636, 25078);
				return;
			}
			if (a0 == 22636) {
				f_bd2_a1_v("Rage");
				tv0->SetMessage(521471);
				tv0->ClearReplies();
				tv0->AddReply(523813, 25084, 25083);
				tv0->AddReply(523815, 25084, 25085);
				return;
			}
			if (a0 == 25084) {
				f_bd2_a1_v("Fear");
				tv0->SetMessage(523814);
				tv0->ClearReplies();
				tv0->AddReply(521472, -1, 22637);
				tv0->AddReply(521473, -1, 22638);
				return;
			}
			tv3 = true;
			if (f_145a_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t16
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_124a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1454_a0_i());
		L0->SetNPCDescription(f_1452_a0_i());
		L0->SetPhoto(f_1456_a0_s());
		L0->SetPhoto2(f_1458_a0_s());
		L0->SetPlayerName(f_16ff_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_12a1_a1_b(f_1360_a0_o());
		t17{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_128f_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t17
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
			f_e55_a1_v("Fear");
			tv0->SetMessage(522079);
			tv0->ClearReplies();
			if (f_15d1_a1_b(tv1)) {
				tv0->AddReply(523566, 24801, 24800);
			}
			tv0->AddReply(523569, 24804, 24803);
			tv0->AddReply(522080, -1, 23249);
			break;
			return;
		}
		if (f_145a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_132b_a1_v(tv2);
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

	void f_e55_a1_v(string a0)
	{
		if (!f_145a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_133b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1359_a0_v();
			if (a1 == 24800) {
				f_154d_a2_v(tv1, tv0);
			}
			if (a1 == 23247) {
				f_1544_a2_v(tv1, tv0);
			}
			if (a0 == 23248) {
				f_e55_a1_v("Fear");
				tv0->SetMessage(522079);
				tv0->ClearReplies();
				if (f_15d1_a1_b(tv1)) {
					tv0->AddReply(523566, 24801, 24800);
				}
				tv0->AddReply(523569, 24804, 24803);
				tv0->AddReply(522080, -1, 23249);
				return;
			}
			if (a0 == 24804) {
				f_e55_a1_v("Sly");
				tv0->SetMessage(523570);
				tv0->ClearReplies();
				tv0->AddReply(523571, 24807, 24805);
				tv0->AddReply(523572, -1, 24806);
				return;
			}
			if (a0 == 24807) {
				f_e55_a1_v("Fear");
				tv0->SetMessage(523573);
				tv0->ClearReplies();
				tv0->AddReply(523574, 24809, 24808);
				tv0->AddReply(523576, 24811, 24810);
				return;
			}
			if (a0 == 24811) {
				f_e55_a1_v("Rage");
				tv0->SetMessage(523577);
				tv0->ClearReplies();
				tv0->AddReply(523578, 24809, 24812);
				return;
			}
			if (a0 == 24809) {
				f_e55_a1_v("Sly");
				tv0->SetMessage(523575);
				tv0->ClearReplies();
				if (!f_15c5_a1_b(tv1)) {
					tv0->AddReply(522078, -1, 23247);
				}
				if (f_15c5_a1_b(tv1)) {
					tv0->AddReply(522087, 24814, 23256);
				}
				return;
			}
			if (a0 == 24814) {
				f_e55_a1_v("Sly");
				tv0->SetMessage(523580);
				tv0->ClearReplies();
				tv0->AddReply(523582, 24819, 24817);
				tv0->AddReply(523583, -1, 24818);
				return;
			}
			if (a0 == 24819) {
				f_e55_a1_v("Sly");
				tv0->SetMessage(523584);
				tv0->ClearReplies();
				tv0->AddReply(523585, -1, 24820);
				tv0->AddReply(523586, -1, 24821);
				return;
			}
			if (a0 == 24801) {
				f_e55_a1_v("Sly");
				tv0->SetMessage(523567);
				tv0->ClearReplies();
				tv0->AddReply(523568, 24822, 24802);
				return;
			}
			if (a0 == 24822) {
				f_e55_a1_v("Sly");
				tv0->SetMessage(523587);
				tv0->ClearReplies();
				tv0->AddReply(523588, 24824, 24823);
				tv0->AddReply(523595, -1, 24830);
				return;
			}
			if (a0 == 24824) {
				f_e55_a1_v("Neutral");
				tv0->SetMessage(523589);
				tv0->ClearReplies();
				tv0->AddReply(523590, 24826, 24825);
				return;
			}
			if (a0 == 24826) {
				f_e55_a1_v("Untrust");
				tv0->SetMessage(523591);
				tv0->ClearReplies();
				tv0->AddReply(523592, 24828, 24827);
				tv0->AddReply(523594, -1, 24829);
				return;
			}
			if (a0 == 24828) {
				f_e55_a1_v("Sly");
				tv0->SetMessage(523593);
				tv0->ClearReplies();
				tv0->AddReply(523596, -1, 24831);
				tv0->AddReply(523597, -1, 24832);
				return;
			}
			tv3 = true;
			if (f_145a_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t18
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_124a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1454_a0_i());
		L0->SetNPCDescription(f_1452_a0_i());
		L0->SetPhoto(f_1456_a0_s());
		L0->SetPhoto2(f_1458_a0_s());
		L0->SetPlayerName(f_16ff_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_12a1_a1_b(f_1360_a0_o());
		t19{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_128f_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t19
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
			f_1038_a1_v("Neutral");
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_145a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_132b_a1_v(tv2);
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

	void f_1038_a1_v(string a0)
	{
		if (!f_145a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_133b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1359_a0_v();
			if (a0 == 36906) {
				f_1038_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_1038_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_1038_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_145a_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t20
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_124a_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1454_a0_i());
		L0->SetNPCDescription(f_1452_a0_i());
		L0->SetPhoto(f_1456_a0_s());
		L0->SetPhoto2(f_1458_a0_s());
		L0->SetPlayerName(f_16ff_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_12a1_a1_b(f_1360_a0_o());
		t21{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_128f_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t21
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
			f_1136_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_145a_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_132b_a1_v(tv2);
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

	void f_1136_a1_v(string a0)
	{
		if (!f_145a_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_133b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_1359_a0_v();
			if (a0 == 42563) {
				f_1136_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_145a_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t22
{
	var float tv0;
	var float tv1;
	var int tv2;

	void init(void)
	{
		g2 = false;
		f_117d_a0_v();
	}

	void f_117d_a0_v(void)
	{
		object L0;
		@SensePlayerOnly(true);
		f_11d5_a0_v();
		@GetScene(L0);
		for (tv2 = 0; ; tv2++) {
			bool L1;
			L0->GetLocator(f_1444_a1_s(tv2), L1);
			if (!L1) {
				break;
			}
		}
		if (!f_1245_a0_b()) {
			t0{};
		}
		f_11dd_a0_v();
		for (; ; ) {
			int L2;
			bool L3;
			Vector L4;
			Vector L5;
			Vector L6;
			@irand(L2, tv2);
			L0->GetLocator(f_1444_a1_s(L2), L3, L4, L5);
			L6 = L4 - f_120c_a0_V();
			if (f_1378_a1_f(L6) > tv1) {
				float L7;
				Vector L8;
				bool L9;
				@GetHeight(L7);
				L8 = L4;
				L8.y += L7;
				@CanReachByPF(L9, L8);
				if (L9) {
					Vector L10;
					L10 = L4 - L6 * (tv0 / sqrt(L6 | L6));
					if (t1{L10, L5}) {
						t3{L2};
					}
				}
			}
			@Sleep(1);
		}
	}

	void f_11d5_a0_v(void)
	{
		string L0;
		@GetProperty("loc", L0);
		g0 = L0;
	}

	void f_11dd_a0_v(void)
	{
		Vector L0;
		Vector L1;
		@GetAnimationOffset(L0, "all", "walk_stopl");
		@GetAnimationOffset(L1, "all", "walk_stopr");
		tv0 = (L0.z + L1.z) / 2.0;
		tv1 = f_1370_a1_f(L0.z - tv0) + 40;
	}

	void OnUnload(void)
	{
		global.OnUnload();
		t0{};
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1231_a1_b(a0);
			enable OnUse;
			f_1710_a1_v(a0);
		}
	}
}

Vector f_120c_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

float f_1211_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

object f_1219_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

void f_1220_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1227_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1231_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1227_a1_b(L0);
}

void f_123a_a1_v(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@RotateAsync(L2.x, L2.z);
}

bool f_1245_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_124a_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1366_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_145a_a0_b()) {
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

void f_128f_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_145a_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_12a1_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_12db_a1_b(a0)) {
			if (!f_1300_a1_b(a0)) {
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
		if (!f_1300_a1_b(a0)) {
			if (!f_12db_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_12db_a1_b(object a0)
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
	return f_134a_a1_b(L4);
}

bool f_1300_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_141d_a0_i() + "m";
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
	return f_134a_a1_b(L4);
}

void f_132b_a1_v(string a0)
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

void f_133b_a2_v(string a0, bool a1)
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

bool f_134a_a1_b(string a0)
{
	if (f_145a_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1359_a0_v(void)
{
	if (f_145a_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1360_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1366_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_1370_a1_f(float a0)
{
	return a0 < 0 ? -a0 : a0;
}

float f_1378_a1_f(Vector a0)
{
	return sqrt(a0.x * a0.x + a0.z * a0.z);
}

int f_1382_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1387_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_1392_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActorFromXml(L1, L0, a0, a0 + ".xml");
	return L1;
}

void f_139d_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_13ae_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_13ba_a2_v(object a0, int a1)
{
	f_1220_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_13ae_a2_v(L0, a1);
	}
}

void f_13cd_a3_v(object a0, object a1, int a2)
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
		f_13ae_a2_v(L0, a2);
	}
}

void f_13e0_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_13cd_a3_v(a0, L0, a2);
}

bool f_13ed_a2_b(object a0, string a1)
{
	int L0;
	bool L1;
	@GetInvItemByName(L0, a1);
	a0->HasItem(L0, L1);
	return L1;
}

bool f_13f4_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_1400_a3_v(object a0, string a1, string a2)
{
	object L0;
	bool L1;
	Vector L2;
	Vector L3;
	if (!a0) {
		return;
	}
	@GetSceneByName(L0, a1);
	L0->GetLocator(a2, L1, L2, L3);
	if (!L1) {
		@Trace("Teleport location '" + a2 + "' not found in scene '" + a1 + "'");
	} else {
		@Teleport(a0, L0, L2, L3);
	}
}

float f_1418_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_141d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_1426_a1_b(int a0)
{
	return f_141d_a0_i() == a0;
}

string f_142c_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_1433_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_142c_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

string f_1444_a1_s(int a0)
{
	return a0 == 0 ? "pt_" + g0 : "pt_" + g0 + a0;
}

void OnUnload(void)
{
}

int f_1452_a0_i(void)
{
	return 515547;
}

int f_1454_a0_i(void)
{
	return 502872;
}

string f_1456_a0_s(void)
{
	return "ui/NPC_MladVlad.png";
}

string f_1458_a0_s(void)
{
	return "ui/NPC_MladVlad_b.png";
}

bool f_145a_a0_b(void)
{
	return true;
}

void f_145c_a2_v(object a0, object a1)
{
	f_16de_a3_v(f_16cd_a0_o(), "pt_map_burah_home", 2);
	a1->ShowMap(f_16cd_a0_o());
}

void f_146c_a2_v(object a0, object a1)
{
	@SetVariable("oob1MladVlad1", 1);
}

void f_1472_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_16cd_a0_o();
	L0->AddMark("b1MladVladGotoGrif", "pt_map_grif", 3, 520047, f_1418_a0_f());
}

void f_1482_a2_v(object a0, object a1)
{
	@SetVariable("oob1MladVlad2", 1);
}

void f_1488_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b2MladVladBurahHomeTalk", 1);
	L0 = f_16cd_a0_o();
	L0->AddMark("b2BurahHome", "pt_map_burah_home", 3, 520460, f_1418_a0_f());
}

void f_149c_a2_v(object a0, object a1)
{
	f_139d_a2_v("burah_home@door1", false);
}

void f_14a3_a2_v(object a0, object a1)
{
	@SetVariable("oob2MladVlad1", 1);
}

void f_14a9_a2_v(object a0, object a1)
{
	if (f_1382_a1_i("b2TravnikMark") == 0) {
		object L0;
		@SetVariable("b2TravnikMark", 1);
		L0 = f_16cd_a0_o();
		L0->AddMark("b2Travnik1", "pt_map_gatherer1", 3, 520463, f_1418_a0_f());
		L0->AddMark("b2Travnik2", "pt_map_gatherer2", 3, 520464, f_1418_a0_f());
		L0->AddMark("b2Travnik3", "pt_map_gatherer3", 3, 520465, f_1418_a0_f());
	}
}

void f_14d6_a2_v(object a0, object a1)
{
	@SetVariable("oob5MladVlad1", 1);
}

void f_14dc_a2_v(object a0, object a1)
{
	@SetVariable("b5q02", 1);
	f_1656_a0_v();
	f_1670_a0_v();
	f_1387_a1_o("quest_b5_02");
	f_13f4_a2_b("quest_b5_02", "place_prophet");
	f_13f4_a2_b("quest_b5_02", "maze_start");
}

void f_14f6_a2_v(object a0, object a1)
{
	f_1663_a0_v();
	f_13f4_a2_b("quest_b5_02", "completed");
}

void f_1500_a2_v(object a0, object a1)
{
	@Trace("money 4000 is given");
	f_13ba_a2_v(a0, 4000);
}

void f_150a_a2_v(object a0, object a1)
{
	@Trace("kerosene50 is given");
	f_13e0_a3_v(a0, "kerosene", 50);
}

void f_1515_a2_v(object a0, object a1)
{
	f_1400_a3_v(f_1219_a0_o(), "house_vlad", "pt_maze_start");
}

void f_1520_a2_v(object a0, object a1)
{
	@SetVariable("b8q02", 1);
	f_167d_a0_v();
	f_1697_a0_v();
	f_1392_a1_o("quest_b8_02");
}

void f_1530_a2_v(object a0, object a1)
{
	int L0;
	f_168a_a0_v();
	f_13f4_a2_b("quest_b8_02", "completed");
	a0->RemoveItemByType(L0, "b8q02_book", 1);
}

void f_153e_a2_v(object a0, object a1)
{
	@SetVariable("oob8MladVlad1", 1);
}

void f_1544_a2_v(object a0, object a1)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	f_1649_a0_v();
}

void f_154d_a2_v(object a0, object a1)
{
	@SetVariable("oob11MladVlad1", 1);
}

void f_1553_a2_v(object a0, object a1)
{
	f_13f4_a2_b("quest_b2_01", "place_mladvlad");
}

void f_155a_a2_v(object a0, object a1)
{
	@Trace("money10000 is given");
	f_13ba_a2_v(a0, 10000);
}

void f_1564_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_156a_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_1570_a2_v(object a0, object a1)
{
	@SetVariable("b5MladVladVisit", 1);
}

void f_1576_a2_v(object a0, object a1)
{
	@Trace("money 7000 is given");
	f_13ba_a2_v(a0, 7000);
}

void f_1580_a2_v(object a0, object a1)
{
	@Trace("recipe2 is given");
	f_13e0_a3_v(a0, "recipe2", 1);
}

void f_158b_a2_v(object a0, object a1)
{
	@Trace("recipe3 is given");
	f_13e0_a3_v(a0, "recipe3", 1);
}

void f_1596_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_159c_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

bool f_15a2_a1_b(object a0)
{
	if (f_1382_a1_i("oob8MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_15ae_a1_b(object a0)
{
	if (f_1382_a1_i("b8q02") == 0) {
		return true;
	}
	return false;
}

bool f_15ba_a1_b(object a0)
{
	if (f_13ed_a2_b(a0, "b8q02_book")) {
		return true;
	}
	return false;
}

bool f_15c5_a1_b(object a0)
{
	if (f_1382_a1_i("b11q01") == 1000) {
		return true;
	}
	return false;
}

bool f_15d1_a1_b(object a0)
{
	if (f_1382_a1_i("oob11MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_15dd_a1_b(object a0)
{
	if (f_1382_a1_i("KnowGrif") == 1) {
		return true;
	}
	return false;
}

bool f_15e9_a1_b(object a0)
{
	if (f_1382_a1_i("b1q01") == 0) {
		return true;
	}
	return false;
}

bool f_15f5_a1_b(object a0)
{
	if (f_1382_a1_i("oob1MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_1601_a1_b(object a0)
{
	if (f_1382_a1_i("oob1MladVlad2") == 0) {
		return true;
	}
	return false;
}

bool f_160d_a1_b(object a0)
{
	if (f_1382_a1_i("b2MladVladBurahHomeTalk") == 1) {
		return true;
	}
	return false;
}

bool f_1619_a1_b(object a0)
{
	if (f_1382_a1_i("oob2MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_1625_a1_b(object a0)
{
	if (f_1382_a1_i("oob5MladVlad1") == 0) {
		return true;
	}
	return false;
}

bool f_1631_a1_b(object a0)
{
	if (f_1382_a1_i("b5q02") == 0) {
		return true;
	}
	return false;
}

bool f_163d_a1_b(object a0)
{
	if (f_1382_a1_i("b5q02") == 2) {
		return true;
	}
	return false;
}

void f_1649_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 315, 1, 522057);
	f_16b1_a2_b(L0, 313);
}

void f_1656_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 249, 2, 520665);
	f_16b1_a2_b(L0, -1);
}

void f_1663_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 252, 2, 520668);
	f_16b1_a2_b(L0, 249);
}

void f_1670_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 250, 2, 520666);
	f_16b1_a2_b(L0, 249);
}

void f_167d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 293, 2, 521491);
	f_16b1_a2_b(L0, -1);
}

void f_168a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 296, 2, 521494);
	f_16b1_a2_b(L0, 293);
}

void f_1697_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 294, 2, 521492);
	f_16b1_a2_b(L0, 293);
}

object f_16a4_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_16b1_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_16a4_a0_o();
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

object f_16cd_a0_o(void)
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

void f_16de_a3_v(object a0, string a1, float a2)
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

int f_16ff_a0_i(void)
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

void f_1710_a1_v(object a0)
{
	if (!g2) {
		t10{a0};
		g2 = true;
	}
	if (f_1426_a1_b(1)) {
		t4{a0};
		return;
	}
	if (f_1426_a1_b(2)) {
		t6{a0};
		return;
	}
	if (f_1426_a1_b(5)) {
		t8{a0};
		return;
	}
	if (f_1426_a1_b(6)) {
		t12{a0};
		return;
	}
	if (f_1426_a1_b(8)) {
		t14{a0};
		return;
	}
	if (f_1426_a1_b(11)) {
		t16{a0};
		return;
	}
	if (f_1426_a1_b(12) && !g3) {
		t18{a0};
		g3 = true;
		return;
	}
	t20{a0};
}

