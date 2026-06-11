event OnLoad 5;
event OnDialogReply 11;
event OnTrigger 26;
event OnUnload 6;
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
		} while (!f_6bd_a0_b());
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
		if (!f_6c2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_820_a0_i());
		L0->SetNPCDescription(f_81e_a0_i());
		L0->SetPhoto(f_822_a0_s());
		L0->SetPhoto2(f_824_a0_s());
		L0->SetPlayerName(f_8d8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_719_a1_b(f_7d8_a0_o());
		t2{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_707_a1_v(a0);
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
			tv0->SetMessage(518051);
			tv0->ClearReplies();
			tv0->AddReply(518052, 29827, 19185);
			tv0->AddReply(528440, -1, 29826);
			break;
			return;
		}
		if (f_826_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_7a3_a1_v(tv2);
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
		if (!f_826_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_7b3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_7d1_a0_v();
			if (a0 == 19184) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(518051);
				tv0->ClearReplies();
				tv0->AddReply(518052, 29827, 19185);
				tv0->AddReply(528440, -1, 29826);
				return;
			}
			if (a0 == 29827) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(528441);
				tv0->ClearReplies();
				tv0->AddReply(528442, 29830, 29828);
				tv0->AddReply(528443, -1, 29829);
				return;
			}
			if (a0 == 29830) {
				f_98_a1_v("Neutral");
				tv0->SetMessage(528444);
				tv0->ClearReplies();
				tv0->AddReply(528445, -1, 29831);
				tv0->AddReply(528446, -1, 29832);
				return;
			}
			tv3 = true;
			if (f_826_a0_b()) {
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
		if (!f_6c2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_820_a0_i());
		L0->SetNPCDescription(f_81e_a0_i());
		L0->SetPhoto(f_822_a0_s());
		L0->SetPhoto2(f_824_a0_s());
		L0->SetPlayerName(f_8d8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_719_a1_b(f_7d8_a0_o());
		t4{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_707_a1_v(a0);
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
			if (f_885_a1_b(tv1)) {
				f_1a5_a1_v("Anger");
				tv0->SetMessage(521037);
				tv0->ClearReplies();
				tv0->AddReply(528490, 29880, 29879);
				tv0->AddReply(528510, 29882, 29899);
				break;
			}
			f_1a5_a1_v("Neutral");
			tv0->SetMessage(521039);
			tv0->ClearReplies();
			tv0->AddReply(521040, -1, 22236);
			break;
			return;
		}
		if (f_826_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_7a3_a1_v(tv2);
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

	void f_1a5_a1_v(string a0)
	{
		if (!f_826_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_7b3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_7d1_a0_v();
			if (a1 == 22234) {
				f_828_a2_v(tv1, tv0);
			}
			if (a0 == 22233) {
				if (f_885_a1_b(tv1)) {
					f_1a5_a1_v("Anger");
					tv0->SetMessage(521037);
					tv0->ClearReplies();
					tv0->AddReply(528490, 29880, 29879);
					tv0->AddReply(528510, 29882, 29899);
					return;
				}
				f_1a5_a1_v("Neutral");
				tv0->SetMessage(521039);
				tv0->ClearReplies();
				tv0->AddReply(521040, -1, 22236);
				return;
			}
			if (a0 == 29880) {
				f_1a5_a1_v("Anger");
				tv0->SetMessage(528491);
				tv0->ClearReplies();
				tv0->AddReply(528492, 29882, 29881);
				return;
			}
			if (a0 == 29882) {
				f_1a5_a1_v("Confusion");
				tv0->SetMessage(528493);
				tv0->ClearReplies();
				tv0->AddReply(528494, 29884, 29883);
				tv0->AddReply(528511, 29902, 29901);
				return;
			}
			if (a0 == 29902) {
				f_1a5_a1_v("Fear");
				tv0->SetMessage(528512);
				tv0->ClearReplies();
				tv0->AddReply(528513, 29904, 29903);
				return;
			}
			if (a0 == 29904) {
				f_1a5_a1_v("Fear");
				tv0->SetMessage(528514);
				tv0->ClearReplies();
				tv0->AddReply(528515, 29886, 29905);
				return;
			}
			if (a0 == 29884) {
				f_1a5_a1_v("Confusion");
				tv0->SetMessage(528495);
				tv0->ClearReplies();
				tv0->AddReply(528496, 29886, 29885);
				return;
			}
			if (a0 == 29886) {
				f_1a5_a1_v("Fear");
				tv0->SetMessage(528497);
				tv0->ClearReplies();
				tv0->AddReply(528498, 29888, 29887);
				return;
			}
			if (a0 == 29888) {
				f_1a5_a1_v("Fear");
				tv0->SetMessage(528499);
				tv0->ClearReplies();
				tv0->AddReply(528500, 29890, 29889);
				return;
			}
			if (a0 == 29890) {
				f_1a5_a1_v("Neutral");
				tv0->SetMessage(528501);
				tv0->ClearReplies();
				tv0->AddReply(528504, 29894, 29893);
				tv0->AddReply(528517, 29896, 29908);
				return;
			}
			if (a0 == 29894) {
				f_1a5_a1_v("Neutral");
				tv0->SetMessage(528505);
				tv0->ClearReplies();
				tv0->AddReply(528506, 29896, 29895);
				return;
			}
			if (a0 == 29896) {
				f_1a5_a1_v("Surprise");
				tv0->SetMessage(528507);
				tv0->ClearReplies();
				tv0->AddReply(528508, 29898, 29897);
				return;
			}
			if (a0 == 29898) {
				f_1a5_a1_v("Surprise");
				tv0->SetMessage(528509);
				tv0->ClearReplies();
				tv0->AddReply(521038, -1, 22234);
				return;
			}
			tv3 = true;
			if (f_826_a0_b()) {
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
		if (!f_6c2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_820_a0_i());
		L0->SetNPCDescription(f_81e_a0_i());
		L0->SetPhoto(f_822_a0_s());
		L0->SetPhoto2(f_824_a0_s());
		L0->SetPlayerName(f_8d8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_719_a1_b(f_7d8_a0_o());
		t6{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_707_a1_v(a0);
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
			if (!f_86d_a1_b(tv1) && f_879_a1_b(tv1)) {
				f_844_a2_v(tv1, tv0);
				f_861_a2_v(tv1, tv0);
				f_37f_a1_v("Neutral");
				tv0->SetMessage(521320);
				tv0->ClearReplies();
				tv0->AddReply(528448, 29835, 29834);
				break;
			}
			f_37f_a1_v("Neutral");
			tv0->SetMessage(521323);
			tv0->ClearReplies();
			tv0->AddReply(521324, -1, 22518);
			break;
			return;
		}
		if (f_826_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_7a3_a1_v(tv2);
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

	void f_37f_a1_v(string a0)
	{
		if (!f_826_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_7b3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_7d1_a0_v();
			if (a1 == 22516) {
				f_84a_a2_v(tv1, tv0);
				f_867_a2_v(tv1, tv0);
				f_85a_a2_v(tv1, tv0);
			}
			if (a1 == 29846) {
				f_84a_a2_v(tv1, tv0);
				f_867_a2_v(tv1, tv0);
				f_85a_a2_v(tv1, tv0);
			}
			if (a1 == 22515) {
				f_84a_a2_v(tv1, tv0);
				f_867_a2_v(tv1, tv0);
				f_85a_a2_v(tv1, tv0);
			}
			if (a0 == 22514) {
				if (!f_86d_a1_b(tv1) && f_879_a1_b(tv1)) {
					f_844_a2_v(tv1, tv0);
					f_861_a2_v(tv1, tv0);
					f_37f_a1_v("Neutral");
					tv0->SetMessage(521320);
					tv0->ClearReplies();
					tv0->AddReply(528448, 29835, 29834);
					return;
				}
				f_37f_a1_v("Neutral");
				tv0->SetMessage(521323);
				tv0->ClearReplies();
				tv0->AddReply(521324, -1, 22518);
				return;
			}
			if (a0 == 29835) {
				f_37f_a1_v("Neutral");
				tv0->SetMessage(528449);
				tv0->ClearReplies();
				tv0->AddReply(528450, 29837, 29836);
				return;
			}
			if (a0 == 29837) {
				f_37f_a1_v("Neutral");
				tv0->SetMessage(528451);
				tv0->ClearReplies();
				tv0->AddReply(528452, 29840, 29838);
				tv0->AddReply(528453, 29840, 29839);
				return;
			}
			if (a0 == 29840) {
				f_37f_a1_v("Neutral");
				tv0->SetMessage(528454);
				tv0->ClearReplies();
				tv0->AddReply(528455, 29842, 29841);
				tv0->AddReply(521321, -1, 22515);
				return;
			}
			if (a0 == 29842) {
				f_37f_a1_v("Neutral");
				tv0->SetMessage(528456);
				tv0->ClearReplies();
				tv0->AddReply(528457, 29845, 29844);
				return;
			}
			if (a0 == 29845) {
				f_37f_a1_v("Neutral");
				tv0->SetMessage(528458);
				tv0->ClearReplies();
				tv0->AddReply(521322, -1, 22516);
				tv0->AddReply(528459, -1, 29846);
				return;
			}
			tv3 = true;
			if (f_826_a0_b()) {
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
		if (!f_6c2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_820_a0_i());
		L0->SetNPCDescription(f_81e_a0_i());
		L0->SetPhoto(f_822_a0_s());
		L0->SetPhoto2(f_824_a0_s());
		L0->SetPlayerName(f_8d8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_719_a1_b(f_7d8_a0_o());
		t8{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_707_a1_v(a0);
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
			f_511_a1_v("Neutral");
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_826_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_7a3_a1_v(tv2);
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

	void f_511_a1_v(string a0)
	{
		if (!f_826_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_7b3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_7d1_a0_v();
			if (a0 == 36906) {
				f_511_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_511_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_511_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_826_a0_b()) {
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
		if (!f_6c2_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_820_a0_i());
		L0->SetNPCDescription(f_81e_a0_i());
		L0->SetPhoto(f_822_a0_s());
		L0->SetPhoto2(f_824_a0_s());
		L0->SetPlayerName(f_8d8_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		f_719_a1_b(f_7d8_a0_o());
		t10{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_707_a1_v(a0);
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
			f_60f_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_826_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_7a3_a1_v(tv2);
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

	void f_60f_a1_v(string a0)
	{
		if (!f_826_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_7b3_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_7d1_a0_v();
			if (a0 == 42563) {
				f_60f_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_826_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t11
{
	var bool tv0;
	var Vector tv1;
	var Vector tv2;

	void init(void)
	{
		g1 = true;
		f_65e_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "icot_viktor_NPC_Trigger") {
			f_685_a0_v();
		}
	}

	void f_65e_a0_v(void)
	{
		@GetPosition(tv1);
		@GetDirection(tv2);
		tv0 = false;
		if (!f_6bd_a0_b()) {
			t0{};
			f_67a_a0_v();
		}
		for (; ; ) {
			f_7a3_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void f_67a_a0_v(void)
	{
		@SetPosition(tv1);
		@SetDirection(tv2);
		tv0 = false;
		@LockAnimation("all", "stand", 0);
	}

	void f_685_a0_v(void)
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
		f_67a_a0_v();
	}

	void OnUse(object a0)
	{
		if (tv0) {
			bool L0;
			@IsOverrideActive(L0);
			if (!L0) {
				disable OnUse;
				f_6b4_a1_b(a0);
				enable OnUse;
				f_8e9_a1_v(a0);
			}
		}
	}
}

bool f_6aa_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_6b4_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_6aa_a1_b(L0);
}

bool f_6bd_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_6c2_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_7de_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_826_a0_b()) {
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

void f_707_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_826_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_719_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_753_a1_b(a0)) {
			if (!f_778_a1_b(a0)) {
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
		if (!f_778_a1_b(a0)) {
			if (!f_753_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_753_a1_b(object a0)
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
	return f_7c2_a1_b(L4);
}

bool f_778_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_80f_a0_i() + "m";
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
	return f_7c2_a1_b(L4);
}

void f_7a3_a1_v(string a0)
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

void f_7b3_a2_v(string a0, bool a1)
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

bool f_7c2_a1_b(string a0)
{
	if (f_826_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_7d1_a0_v(void)
{
	if (f_826_a0_b()) {
		@lshStopSpeech();
	}
}

object f_7d8_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_7de_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_7e8_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_7ed_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_7fe_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_80a_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_80f_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_818_a1_b(int a0)
{
	return f_80f_a0_i() == a0;
}

int f_81e_a0_i(void)
{
	return 515554;
}

int f_820_a0_i(void)
{
	return 502879;
}

string f_822_a0_s(void)
{
	return "ui/NPC_Viktor.png";
}

string f_824_a0_s(void)
{
	return "ui/NPC_Viktor_b.png";
}

bool f_826_a0_b(void)
{
	return true;
}

void f_828_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b7q01", 6);
	L0 = f_8c7_a0_o();
	L0->AddMark("b7q01DankoGotoSobor", "pt_map_aglaja", 1, 521021, f_80a_a0_f());
	f_891_a0_v();
	f_7fe_a2_b("quest_b7_01", "place_aglaja");
}

void f_844_a2_v(object a0, object a1)
{
	@SetVariable("oob6Viktor1", 1);
}

void f_84a_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_8c7_a0_o();
	L0->AddMark("b6q03ViktorGotoMaria", "pt_map_maria", 3, 521341, f_80a_a0_f());
}

void f_85a_a2_v(object a0, object a1)
{
	f_7ed_a2_v("cot_maria@door1", false);
}

void f_861_a2_v(object a0, object a1)
{
	@SetVariable("b6ViktorVisit", 1);
}

void f_867_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

bool f_86d_a1_b(object a0)
{
	if (f_7e8_a1_i("b6q03NinaTalk") != 0) {
		return true;
	}
	return false;
}

bool f_879_a1_b(object a0)
{
	if (f_7e8_a1_i("oob6Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_885_a1_b(object a0)
{
	if (f_7e8_a1_i("b7q01") == 5) {
		return true;
	}
	return false;
}

void f_891_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 262, 1, 521035);
	f_8ab_a2_b(L0, 253);
}

object f_89e_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_8ab_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_89e_a0_o();
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

object f_8c7_a0_o(void)
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

int f_8d8_a0_i(void)
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

void f_8e9_a1_v(object a0)
{
	if (!g1) {
		t1{a0};
		g1 = true;
	}
	if (f_818_a1_b(6)) {
		t5{a0};
		return;
	}
	if (f_818_a1_b(7)) {
		t3{a0};
		return;
	}
	if (f_818_a1_b(12) && !g2) {
		t7{a0};
		g2 = true;
		return;
	}
	t9{a0};
}

