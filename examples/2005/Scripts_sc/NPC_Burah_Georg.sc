event OnLoad 5;
event OnDialogReply 11;
event OnTimer 7;
event OnUnload 6;
event OnLSHAnimationEnd 45;
event OnUse 0;

var object g0;
var bool g1;
var bool g2;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_76f_a0_b());
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
		f_7c9_a1_b(f_876_a0_o());
		if (!f_774_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8d8_a0_i());
		L0->SetNPCDescription(f_8d6_a0_i());
		L0->SetPhoto(f_8da_a0_s());
		L0->SetPhoto2(f_8dc_a0_s());
		L0->SetPlayerName(f_9ee_a0_i());
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
		f_7b8_a1_v(a0);
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
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_8de_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_853_a1_v(tv2);
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
		if (!f_8de_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_85a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_86f_a0_v();
			if (a0 == 36906) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_8de_a0_b()) {
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
		f_7c9_a1_b(f_876_a0_o());
		if (!f_774_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8d8_a0_i());
		L0->SetNPCDescription(f_8d6_a0_i());
		L0->SetPhoto(f_8da_a0_s());
		L0->SetPhoto2(f_8dc_a0_s());
		L0->SetPlayerName(f_9ee_a0_i());
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
		f_7b8_a1_v(a0);
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
			f_19b_a1_v("Neutral");
			tv0->SetMessage(518057);
			tv0->ClearReplies();
			tv0->AddReply(518058, 32643, 19191);
			tv0->AddReply(531316, 32643, 32642);
			break;
			return;
		}
		if (f_8de_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_853_a1_v(tv2);
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

	void f_19b_a1_v(string a0)
	{
		if (!f_8de_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_85a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_86f_a0_v();
			if (a0 == 19190) {
				f_19b_a1_v("Neutral");
				tv0->SetMessage(518057);
				tv0->ClearReplies();
				tv0->AddReply(518058, 32643, 19191);
				tv0->AddReply(531316, 32643, 32642);
				return;
			}
			if (a0 == 32643) {
				f_19b_a1_v("Neutral");
				tv0->SetMessage(531317);
				tv0->ClearReplies();
				tv0->AddReply(531318, -1, 32644);
				tv0->AddReply(531319, -1, 32645);
				return;
			}
			tv3 = true;
			if (f_8de_a0_b()) {
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
		f_7c9_a1_b(f_876_a0_o());
		if (!f_774_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8d8_a0_i());
		L0->SetNPCDescription(f_8d6_a0_i());
		L0->SetPhoto(f_8da_a0_s());
		L0->SetPhoto2(f_8dc_a0_s());
		L0->SetPlayerName(f_9ee_a0_i());
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
		f_7b8_a1_v(a0);
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
			if (f_92e_a1_b(tv1)) {
				f_8fa_a2_v(tv1, tv0);
				f_90c_a2_v(tv1, tv0);
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(521502);
				tv0->ClearReplies();
				tv0->AddReply(523951, 25235, 25234);
				tv0->AddReply(523957, 25241, 25240);
				break;
			}
			f_2cb_a1_v("Neutral");
			tv0->SetMessage(521505);
			tv0->ClearReplies();
			if (f_93a_a1_b(tv1)) {
				tv0->AddReply(521506, 22668, 22667);
			}
			if (f_95d_a1_b(tv1) && f_974_a1_b(tv1)) {
				tv0->AddReply(521523, 25213, 22684);
			}
			if (f_946_a1_b(tv1) && f_974_a1_b(tv1)) {
				tv0->AddReply(521526, 22688, 22687);
			}
			tv0->AddReply(521509, -1, 22670);
			break;
			return;
		}
		if (f_8de_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_853_a1_v(tv2);
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

	void f_2cb_a1_v(string a0)
	{
		if (!f_8de_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_85a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_86f_a0_v();
			if (a1 == 22664) {
				f_8e0_a2_v(tv1, tv0);
			}
			if (a1 == 22669) {
				f_8e0_a2_v(tv1, tv0);
			}
			if (a1 == 22684) {
				f_900_a2_v(tv1, tv0);
			}
			if (a1 == 25222) {
				f_912_a2_v(tv1, tv0);
			}
			if (a1 == 25223) {
				f_912_a2_v(tv1, tv0);
			}
			if (a1 == 25224) {
				f_912_a2_v(tv1, tv0);
			}
			if (a1 == 25219) {
				f_912_a2_v(tv1, tv0);
			}
			if (a1 == 25220) {
				f_912_a2_v(tv1, tv0);
			}
			if (a1 == 22687) {
				f_900_a2_v(tv1, tv0);
			}
			if (a1 == 22689) {
				f_906_a2_v(tv1, tv0);
				f_924_a2_v(tv1, tv0);
				f_91b_a2_v(tv1, tv0);
			}
			if (a1 == 25228) {
				f_924_a2_v(tv1, tv0);
				f_906_a2_v(tv1, tv0);
				f_91b_a2_v(tv1, tv0);
			}
			if (a1 == 25229) {
				f_91b_a2_v(tv1, tv0);
			}
			if (a1 == 25231) {
				f_91b_a2_v(tv1, tv0);
			}
			if (a0 == 22663) {
				if (f_92e_a1_b(tv1)) {
					f_8fa_a2_v(tv1, tv0);
					f_90c_a2_v(tv1, tv0);
					f_2cb_a1_v("Neutral");
					tv0->SetMessage(521502);
					tv0->ClearReplies();
					tv0->AddReply(523951, 25235, 25234);
					tv0->AddReply(523957, 25241, 25240);
					return;
				}
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(521505);
				tv0->ClearReplies();
				if (f_93a_a1_b(tv1)) {
					tv0->AddReply(521506, 22668, 22667);
				}
				if (f_95d_a1_b(tv1) && f_974_a1_b(tv1)) {
					tv0->AddReply(521523, 25213, 22684);
				}
				if (f_946_a1_b(tv1) && f_974_a1_b(tv1)) {
					tv0->AddReply(521526, 22688, 22687);
				}
				tv0->AddReply(521509, -1, 22670);
				return;
			}
			if (a0 == 22688) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(521527);
				tv0->ClearReplies();
				tv0->AddReply(521528, -1, 22689);
				tv0->AddReply(523942, 25227, 25225);
				tv0->AddReply(523943, 25230, 25226);
				return;
			}
			if (a0 == 25230) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523947);
				tv0->ClearReplies();
				tv0->AddReply(523948, -1, 25231);
				return;
			}
			if (a0 == 25227) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523944);
				tv0->ClearReplies();
				tv0->AddReply(523945, -1, 25228);
				tv0->AddReply(523946, -1, 25229);
				return;
			}
			if (a0 == 25213) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523930);
				tv0->ClearReplies();
				tv0->AddReply(523931, 22685, 25214);
				tv0->AddReply(523932, 25216, 25215);
				return;
			}
			if (a0 == 25216) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523933);
				tv0->ClearReplies();
				tv0->AddReply(530662, 22685, 31958);
				return;
			}
			if (a0 == 22685) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(521524);
				tv0->ClearReplies();
				tv0->AddReply(521525, 25221, 22686);
				tv0->AddReply(523934, 25218, 25217);
				return;
			}
			if (a0 == 25218) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523935);
				tv0->ClearReplies();
				tv0->AddReply(523936, -1, 25219);
				tv0->AddReply(523937, -1, 25220);
				return;
			}
			if (a0 == 25221) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523938);
				tv0->ClearReplies();
				tv0->AddReply(523939, -1, 25222);
				tv0->AddReply(523940, -1, 25223);
				tv0->AddReply(523941, -1, 25224);
				return;
			}
			if (a0 == 22668) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(521507);
				tv0->ClearReplies();
				tv0->AddReply(523949, 25233, 25232);
				return;
			}
			if (a0 == 25233) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523950);
				tv0->ClearReplies();
				tv0->AddReply(521508, -1, 22669);
				return;
			}
			if (a0 == 25241) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523958);
				tv0->ClearReplies();
				tv0->AddReply(523959, 25235, 25242);
				return;
			}
			if (a0 == 25235) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523952);
				tv0->ClearReplies();
				tv0->AddReply(523953, 25237, 25236);
				tv0->AddReply(523960, 25245, 25244);
				return;
			}
			if (a0 == 25245) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523961);
				tv0->ClearReplies();
				tv0->AddReply(523962, 25247, 25246);
				return;
			}
			if (a0 == 25247) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523963);
				tv0->ClearReplies();
				tv0->AddReply(523964, 25237, 25248);
				return;
			}
			if (a0 == 25237) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523954);
				tv0->ClearReplies();
				tv0->AddReply(523955, 25239, 25238);
				return;
			}
			if (a0 == 25239) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523956);
				tv0->ClearReplies();
				tv0->AddReply(523965, 25250, 25249);
				tv0->AddReply(523970, 25261, 25254);
				return;
			}
			if (a0 == 25261) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523974);
				tv0->ClearReplies();
				tv0->AddReply(523975, 25250, 25262);
				return;
			}
			if (a0 == 25250) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523966);
				tv0->ClearReplies();
				tv0->AddReply(523967, 25252, 25251);
				return;
			}
			if (a0 == 25252) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523968);
				tv0->ClearReplies();
				tv0->AddReply(523971, 25256, 25255);
				tv0->AddReply(523973, 25256, 25257);
				return;
			}
			if (a0 == 25256) {
				f_2cb_a1_v("Neutral");
				tv0->SetMessage(523972);
				tv0->ClearReplies();
				tv0->AddReply(521503, -1, 22664);
				tv0->AddReply(521504, -1, 22665);
				return;
			}
			tv3 = true;
			if (f_8de_a0_b()) {
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
		f_7c9_a1_b(f_876_a0_o());
		if (!f_774_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8d8_a0_i());
		L0->SetNPCDescription(f_8d6_a0_i());
		L0->SetPhoto(f_8da_a0_s());
		L0->SetPhoto2(f_8dc_a0_s());
		L0->SetPlayerName(f_9ee_a0_i());
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
		f_7b8_a1_v(a0);
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
			f_604_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_8de_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_853_a1_v(tv2);
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

	void f_604_a1_v(string a0)
	{
		if (!f_8de_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_85a_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_86f_a0_v();
			if (a0 == 42563) {
				f_604_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_8de_a0_b()) {
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
		f_64b_a0_v();
	}

	void f_64b_a0_v(void)
	{
		if (!f_76f_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_701_a0_v();
		}
	}

	bool f_65f_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_766_a1_b(L0);
	}

	void f_66e_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_673_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_74d_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_689_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_692_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_692_a0_v();
			if (f_76f_a0_b() && f_673_a0_b()) {
				if (f_65f_a0_b()) {
					f_803_a1_b(f_876_a0_o());
				}
			} else {
				f_66e_a0_v();
				f_689_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_748_a0_v();
		f_692_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_692_a0_v();
		f_853_a1_v("Neutral");
		f_689_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_689_a0_v();
		} else {
			f_853_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_748_a0_v();
			f_766_a1_b(a0);
			enable OnUse;
			f_9ff_a1_v(a0);
			f_853_a1_v("Neutral");
			f_692_a0_v();
			f_689_a0_v();
		}
	}
}

void f_701_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_76f_a0_b()) {
		return;
	}
	L0 = f_8c5_a0_i();
	for (L1 = 0; L1 < 5 && f_76f_a0_b(); L1++) {
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
			@PlayAnimation("all", f_8be_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_746_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_746_a0_b(void)
{
	return true;
}

void f_748_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_74d_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_755_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_75c_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_766_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_75c_a1_b(L0);
}

bool f_76f_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_774_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_87c_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_8de_a0_b()) {
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

void f_7b8_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_8de_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_7c9_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_803_a1_b(a0)) {
			if (!f_828_a1_b(a0)) {
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
		if (!f_828_a1_b(a0)) {
			if (!f_803_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_803_a1_b(object a0)
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
	return f_860_a1_b(L4);
}

bool f_828_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_8af_a0_i() + "m";
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
	return f_860_a1_b(L4);
}

void f_853_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_85a_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_860_a1_b(string a0)
{
	if (f_8de_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_86f_a0_v(void)
{
	if (f_8de_a0_b()) {
		@lshStopSpeech();
	}
}

object f_876_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_87c_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_886_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_88b_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_897_a2_v(object a0, int a1)
{
	f_755_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_88b_a2_v(L0, a1);
	}
}

float f_8aa_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_8af_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_8b8_a1_b(int a0)
{
	return f_8af_a0_i() == a0;
}

string f_8be_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_8c5_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_8be_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_8d6_a0_i(void)
{
	return 515534;
}

int f_8d8_a0_i(void)
{
	return 502859;
}

string f_8da_a0_s(void)
{
	return "ui/NPC_Georg.png";
}

string f_8dc_a0_s(void)
{
	return "ui/NPC_Georg_b.png";
}

bool f_8de_a0_b(void)
{
	return true;
}

void f_8e0_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b8q03", 1);
	L0 = f_9dd_a0_o();
	L0->AddMark("b8q03GeorgGotoKaterina", "pt_map_katerina", 0, 530663, f_8aa_a0_f());
	f_980_a0_v();
	f_98d_a0_v();
}

void f_8fa_a2_v(object a0, object a1)
{
	@SetVariable("oob8Georg1", 1);
}

void f_900_a2_v(object a0, object a1)
{
	@SetVariable("oob8Georg2", 1);
}

void f_906_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_90c_a2_v(object a0, object a1)
{
	@SetVariable("b8GeorgVisit", 1);
}

void f_912_a2_v(object a0, object a1)
{
	@SetVariable("b8q03", 1000);
	f_99a_a0_v();
}

void f_91b_a2_v(object a0, object a1)
{
	@SetVariable("b8q03", 1000);
	f_9a7_a0_v();
}

void f_924_a2_v(object a0, object a1)
{
	@Trace("money3000 is given");
	f_897_a2_v(a0, 3000);
}

bool f_92e_a1_b(object a0)
{
	if (f_886_a1_i("oob8Georg1") == 0) {
		return true;
	}
	return false;
}

bool f_93a_a1_b(object a0)
{
	if (f_886_a1_i("b8q03") == 0) {
		return true;
	}
	return false;
}

bool f_946_a1_b(object a0)
{
	if (f_886_a1_i("b8q03") == 3 && f_886_a1_i("b8q03MladVladIsVictim") != 0) {
		return true;
	}
	return false;
}

bool f_95d_a1_b(object a0)
{
	if (f_886_a1_i("b8q03") == 3 && f_886_a1_i("b8q03MladVladIsVictim") == 0) {
		return true;
	}
	return false;
}

bool f_974_a1_b(object a0)
{
	if (f_886_a1_i("oob8Georg2") == 0) {
		return true;
	}
	return false;
}

void f_980_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 575, 2, 530655);
	f_9c1_a2_b(L0, -1);
}

void f_98d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 576, 2, 530656);
	f_9c1_a2_b(L0, 575);
}

void f_99a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 580, 2, 530660);
	f_9c1_a2_b(L0, 575);
}

void f_9a7_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 581, 2, 530661);
	f_9c1_a2_b(L0, 575);
}

object f_9b4_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_9c1_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_9b4_a0_o();
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

object f_9dd_a0_o(void)
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

int f_9ee_a0_i(void)
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

void f_9ff_a1_v(object a0)
{
	if (!g1) {
		t3{a0};
		g1 = true;
	}
	if (f_8b8_a1_b(8)) {
		t5{a0};
		return;
	}
	if (f_8b8_a1_b(12) && !g2) {
		t1{a0};
		g2 = true;
		return;
	}
	t7{a0};
}

