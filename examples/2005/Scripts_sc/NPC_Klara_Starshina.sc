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
		} while (!f_77f_a0_b());
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
		f_7d9_a1_b(f_886_a0_o());
		if (!f_784_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8d0_a0_i());
		L0->SetNPCDescription(f_8ce_a0_i());
		L0->SetPhoto(f_8d2_a0_s());
		L0->SetPhoto2(f_8d4_a0_s());
		L0->SetPlayerName(f_99c_a0_i());
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
		f_7c8_a1_v(a0);
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
			tv0->SetMessage(525528);
			tv0->ClearReplies();
			tv0->AddReply(525529, -1, 26885);
			tv0->AddReply(529271, -1, 30724);
			break;
			return;
		}
		if (f_8d6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_863_a1_v(tv2);
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
		if (!f_8d6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_86a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_87f_a0_v();
			if (a0 == 26884) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(525528);
				tv0->ClearReplies();
				tv0->AddReply(525529, -1, 26885);
				tv0->AddReply(529271, -1, 30724);
				return;
			}
			tv3 = true;
			if (f_8d6_a0_b()) {
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
		f_7d9_a1_b(f_886_a0_o());
		if (!f_784_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8d0_a0_i());
		L0->SetNPCDescription(f_8ce_a0_i());
		L0->SetPhoto(f_8d2_a0_s());
		L0->SetPhoto2(f_8d4_a0_s());
		L0->SetPlayerName(f_99c_a0_i());
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
		f_7c8_a1_v(a0);
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
			if (f_904_a1_b(tv1)) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(526430);
				tv0->ClearReplies();
				tv0->AddReply(526431, 27707, 27706);
				tv0->AddReply(529003, 30441, 30440);
				break;
			}
			f_181_a1_v("Neutral");
			tv0->SetMessage(526438);
			tv0->ClearReplies();
			if (f_910_a1_b(tv1)) {
				tv0->AddReply(526450, 27726, 27725);
			}
			tv0->AddReply(526439, -1, 27714);
			break;
			return;
		}
		if (f_8d6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_863_a1_v(tv2);
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

	void f_181_a1_v(string a0)
	{
		if (!f_8d6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_86a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_87f_a0_v();
			if (a1 == 27712) {
				f_8d8_a2_v(tv1, tv0);
			}
			if (a1 == 27732) {
				f_8e1_a2_v(tv1, tv0);
			}
			if (a1 == 27734) {
				f_8e1_a2_v(tv1, tv0);
			}
			if (a0 == 27705) {
				if (f_904_a1_b(tv1)) {
					f_181_a1_v("Neutral");
					tv0->SetMessage(526430);
					tv0->ClearReplies();
					tv0->AddReply(526431, 27707, 27706);
					tv0->AddReply(529003, 30441, 30440);
					return;
				}
				f_181_a1_v("Neutral");
				tv0->SetMessage(526438);
				tv0->ClearReplies();
				if (f_910_a1_b(tv1)) {
					tv0->AddReply(526450, 27726, 27725);
				}
				tv0->AddReply(526439, -1, 27714);
				return;
			}
			if (a0 == 27726) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(526451);
				tv0->ClearReplies();
				tv0->AddReply(526452, 30435, 27727);
				tv0->AddReply(528997, -1, 30434);
				return;
			}
			if (a0 == 30435) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(528998);
				tv0->ClearReplies();
				tv0->AddReply(528999, 27728, 30436);
				return;
			}
			if (a0 == 27728) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(526453);
				tv0->ClearReplies();
				tv0->AddReply(526454, 27731, 27729);
				tv0->AddReply(526455, 27733, 27730);
				return;
			}
			if (a0 == 27733) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(526458);
				tv0->ClearReplies();
				tv0->AddReply(526459, -1, 27734);
				return;
			}
			if (a0 == 27731) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(526456);
				tv0->ClearReplies();
				tv0->AddReply(529001, 30439, 30438);
				return;
			}
			if (a0 == 30439) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(529002);
				tv0->ClearReplies();
				tv0->AddReply(526457, -1, 27732);
				return;
			}
			if (a0 == 30441) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(529004);
				tv0->ClearReplies();
				tv0->AddReply(529005, 27707, 30442);
				tv0->AddReply(529006, 30445, 30444);
				return;
			}
			if (a0 == 30445) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(529007);
				tv0->ClearReplies();
				tv0->AddReply(529008, 27707, 30446);
				return;
			}
			if (a0 == 27707) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(526432);
				tv0->ClearReplies();
				tv0->AddReply(526433, 27709, 27708);
				return;
			}
			if (a0 == 27709) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(526434);
				tv0->ClearReplies();
				tv0->AddReply(526435, 27711, 27710);
				tv0->AddReply(529009, 27711, 30448);
				return;
			}
			if (a0 == 27711) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(526436);
				tv0->ClearReplies();
				tv0->AddReply(529010, 30450, 30449);
				return;
			}
			if (a0 == 30450) {
				f_181_a1_v("Neutral");
				tv0->SetMessage(529011);
				tv0->ClearReplies();
				tv0->AddReply(526437, -1, 27712);
				return;
			}
			tv3 = true;
			if (f_8d6_a0_b()) {
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
		f_7d9_a1_b(f_886_a0_o());
		if (!f_784_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8d0_a0_i());
		L0->SetNPCDescription(f_8ce_a0_i());
		L0->SetPhoto(f_8d2_a0_s());
		L0->SetPhoto2(f_8d4_a0_s());
		L0->SetPlayerName(f_99c_a0_i());
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
		f_7c8_a1_v(a0);
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
			if (f_91c_a1_b(tv1) && f_928_a1_b(tv1)) {
				f_8ea_a2_v(tv1, tv0);
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527376);
				tv0->ClearReplies();
				tv0->AddReply(527379, 28703, 28702);
				break;
			}
			f_3ba_a1_v("Neutral");
			tv0->SetMessage(527212);
			tv0->ClearReplies();
			if (f_91c_a1_b(tv1)) {
				tv0->AddReply(527339, 28658, 28657);
			}
			if (f_940_a1_b(tv1) && f_91c_a1_b(tv1) || f_934_a1_b(tv1) && f_940_a1_b(tv1)) {
				tv0->AddReply(527373, 28707, 28696);
			}
			tv0->AddReply(527218, -1, 28526);
			break;
			return;
		}
		if (f_8d6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_863_a1_v(tv2);
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

	void f_3ba_a1_v(string a0)
	{
		if (!f_8d6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_86a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_87f_a0_v();
			if (a1 == 28709) {
				f_8f0_a2_v(tv1, tv0);
			}
			if (a1 == 28669) {
				f_8f0_a2_v(tv1, tv0);
			}
			if (a1 == 28696) {
				f_8fe_a2_v(tv1, tv0);
			}
			if (a0 == 28699) {
				if (f_91c_a1_b(tv1) && f_928_a1_b(tv1)) {
					f_8ea_a2_v(tv1, tv0);
					f_3ba_a1_v("Neutral");
					tv0->SetMessage(527376);
					tv0->ClearReplies();
					tv0->AddReply(527379, 28703, 28702);
					return;
				}
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527212);
				tv0->ClearReplies();
				if (f_91c_a1_b(tv1)) {
					tv0->AddReply(527339, 28658, 28657);
				}
				if (f_940_a1_b(tv1) && f_91c_a1_b(tv1) || f_934_a1_b(tv1) && f_940_a1_b(tv1)) {
					tv0->AddReply(527373, 28707, 28696);
				}
				tv0->AddReply(527218, -1, 28526);
				return;
			}
			if (a0 == 28707) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527383);
				tv0->ClearReplies();
				tv0->AddReply(527384, 28697, 28708);
				return;
			}
			if (a0 == 28697) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527374);
				tv0->ClearReplies();
				tv0->AddReply(527375, 28522, 28698);
				return;
			}
			if (a0 == 28522) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527214);
				tv0->ClearReplies();
				tv0->AddReply(527215, 28524, 28523);
				return;
			}
			if (a0 == 28524) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527216);
				tv0->ClearReplies();
				tv0->AddReply(527217, -1, 28525);
				return;
			}
			if (a0 == 28658) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527340);
				tv0->ClearReplies();
				tv0->AddReply(527355, 28675, 28674);
				return;
			}
			if (a0 == 28675) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527356);
				tv0->ClearReplies();
				tv0->AddReply(527341, 28660, 28659);
				tv0->AddReply(527352, 28671, 28670);
				return;
			}
			if (a0 == 28671) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527353);
				tv0->ClearReplies();
				tv0->AddReply(527354, 28662, 28672);
				return;
			}
			if (a0 == 28660) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527342);
				tv0->ClearReplies();
				tv0->AddReply(527343, 28662, 28661);
				return;
			}
			if (a0 == 28662) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527344);
				tv0->ClearReplies();
				tv0->AddReply(527345, 28664, 28663);
				return;
			}
			if (a0 == 28664) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527346);
				tv0->ClearReplies();
				tv0->AddReply(527347, 28666, 28665);
				return;
			}
			if (a0 == 28666) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527348);
				tv0->ClearReplies();
				tv0->AddReply(527349, 28668, 28667);
				return;
			}
			if (a0 == 28668) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527350);
				tv0->ClearReplies();
				tv0->AddReply(527351, -1, 28669);
				return;
			}
			if (a0 == 28703) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527380);
				tv0->ClearReplies();
				tv0->AddReply(527213, 28693, 28521);
				return;
			}
			if (a0 == 28693) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527370);
				tv0->ClearReplies();
				tv0->AddReply(527371, 28700, 28694);
				return;
			}
			if (a0 == 28700) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527377);
				tv0->ClearReplies();
				tv0->AddReply(527378, 28695, 28701);
				return;
			}
			if (a0 == 28695) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527372);
				tv0->ClearReplies();
				tv0->AddReply(527381, 28706, 28704);
				return;
			}
			if (a0 == 28706) {
				f_3ba_a1_v("Neutral");
				tv0->SetMessage(527382);
				tv0->ClearReplies();
				tv0->AddReply(527385, -1, 28709);
				tv0->AddReply(527387, -1, 28711);
				return;
			}
			tv3 = true;
			if (f_8d6_a0_b()) {
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
		f_7d9_a1_b(f_886_a0_o());
		if (!f_784_a2_b(a0, 130.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8d0_a0_i());
		L0->SetNPCDescription(f_8ce_a0_i());
		L0->SetPhoto(f_8d2_a0_s());
		L0->SetPhoto2(f_8d4_a0_s());
		L0->SetPlayerName(f_99c_a0_i());
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
		f_7c8_a1_v(a0);
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
			f_620_a1_v("Neutral");
			tv0->SetMessage(539315);
			tv0->ClearReplies();
			tv0->AddReply(539316, -1, 41259);
			break;
			return;
		}
		if (f_8d6_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_863_a1_v(tv2);
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

	void f_620_a1_v(string a0)
	{
		if (!f_8d6_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_86a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_87f_a0_v();
			if (a0 == 41258) {
				f_620_a1_v("Neutral");
				tv0->SetMessage(539315);
				tv0->ClearReplies();
				tv0->AddReply(539316, -1, 41259);
				return;
			}
			tv3 = true;
			if (f_8d6_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t9
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_662_a0_v();
	}

	void f_662_a0_v(void)
	{
		if (!f_77f_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_718_a0_v();
		}
	}

	bool f_676_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_776_a1_b(L0);
	}

	void f_685_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_68a_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_764_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_6a0_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_6a9_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_6a9_a0_v();
			if (f_77f_a0_b() && f_68a_a0_b()) {
				if (f_676_a0_b()) {
					f_813_a1_b(f_886_a0_o());
				}
			} else {
				f_685_a0_v();
				f_6a0_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_75f_a0_v();
		f_6a9_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_6a9_a0_v();
		f_863_a1_v("Neutral");
		f_6a0_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_6a0_a0_v();
		} else {
			f_863_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_75f_a0_v();
			f_776_a1_b(a0);
			enable OnUse;
			f_9ad_a1_v(a0);
			f_863_a1_v("Neutral");
			f_6a9_a0_v();
			f_6a0_a0_v();
		}
	}
}

void f_718_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_77f_a0_b()) {
		return;
	}
	L0 = f_8bd_a0_i();
	for (L1 = 0; L1 < 5 && f_77f_a0_b(); L1++) {
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
			@PlayAnimation("all", f_8b6_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_75d_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_75d_a0_b(void)
{
	return true;
}

void f_75f_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_764_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_76c_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_776_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_76c_a1_b(L0);
}

bool f_77f_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_784_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_88c_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_8d6_a0_b()) {
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

void f_7c8_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_8d6_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_7d9_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_813_a1_b(a0)) {
			if (!f_838_a1_b(a0)) {
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
		if (!f_838_a1_b(a0)) {
			if (!f_813_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_813_a1_b(object a0)
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
	return f_870_a1_b(L4);
}

bool f_838_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_8a7_a0_i() + "m";
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
	return f_870_a1_b(L4);
}

void f_863_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_86a_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_870_a1_b(string a0)
{
	if (f_8d6_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_87f_a0_v(void)
{
	if (f_8d6_a0_b()) {
		@lshStopSpeech();
	}
}

object f_886_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_88c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_896_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

bool f_89b_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_8a7_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_8b0_a1_b(int a0)
{
	return f_8a7_a0_i() == a0;
}

string f_8b6_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_8bd_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_8b6_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_8ce_a0_i(void)
{
	return 515553;
}

int f_8d0_a0_i(void)
{
	return 502878;
}

string f_8d2_a0_s(void)
{
	return "ui/NPC_Starshina.png";
}

string f_8d4_a0_s(void)
{
	return "ui/NPC_Starshina_b.png";
}

bool f_8d6_a0_b(void)
{
	return true;
}

void f_8d8_a2_v(object a0, object a1)
{
	@SetVariable("k8q01", 5);
	f_966_a0_v();
}

void f_8e1_a2_v(object a0, object a1)
{
	@SetVariable("k8q01", 7);
	f_959_a0_v();
}

void f_8ea_a2_v(object a0, object a1)
{
	@SetVariable("ook11Starshina1", 1);
}

void f_8f0_a2_v(object a0, object a1)
{
	@SetVariable("k11q01", 6);
	f_94c_a0_v();
	f_89b_a2_b("quest_k11_01", "place_burah");
}

void f_8fe_a2_v(object a0, object a1)
{
	@SetVariable("ook11Starshina2", 1);
}

bool f_904_a1_b(object a0)
{
	if (f_896_a1_i("k8q01") == 4) {
		return true;
	}
	return false;
}

bool f_910_a1_b(object a0)
{
	if (f_896_a1_i("k8q01") == 6) {
		return true;
	}
	return false;
}

bool f_91c_a1_b(object a0)
{
	if (f_896_a1_i("k11q01") == 5) {
		return true;
	}
	return false;
}

bool f_928_a1_b(object a0)
{
	if (f_896_a1_i("ook11Starshina1") == 0) {
		return true;
	}
	return false;
}

bool f_934_a1_b(object a0)
{
	if (f_896_a1_i("k11q01") == 6) {
		return true;
	}
	return false;
}

bool f_940_a1_b(object a0)
{
	if (f_896_a1_i("ook11Starshina2") == 0) {
		return true;
	}
	return false;
}

void f_94c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 489, 1, 528056);
	f_980_a2_b(L0, 480);
}

void f_959_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 445, 1, 526470);
	f_980_a2_b(L0, 438);
}

void f_966_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 443, 1, 526468);
	f_980_a2_b(L0, 438);
}

object f_973_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_980_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_973_a0_o();
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

int f_99c_a0_i(void)
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

void f_9ad_a1_v(object a0)
{
	if (!g1) {
		t1{a0};
		g1 = true;
	}
	if (f_8b0_a1_b(8)) {
		t3{a0};
		return;
	}
	if (f_8b0_a1_b(11)) {
		t5{a0};
		return;
	}
	if (f_8b0_a1_b(12)) {
		t7{a0};
		return;
	}
}

