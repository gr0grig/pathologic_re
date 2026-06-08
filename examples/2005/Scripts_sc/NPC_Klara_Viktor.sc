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
		} while (!f_740_a0_b());
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
		f_79a_a1_b(f_847_a0_o());
		if (!f_745_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_898_a0_i());
		L0->SetNPCDescription(f_896_a0_i());
		L0->SetPhoto(f_89a_a0_s());
		L0->SetPhoto2(f_89c_a0_s());
		L0->SetPlayerName(f_948_a0_i());
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
		f_789_a1_v(a0);
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
			f_93_a1_v("Neutral");
			tv0->SetMessage(525531);
			tv0->ClearReplies();
			tv0->AddReply(525532, -1, 26888);
			break;
			return;
		}
		if (f_89e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_824_a1_v(tv2);
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

	void f_93_a1_v(string a0)
	{
		if (!f_89e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_82b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_840_a0_v();
			if (a0 == 26887) {
				f_93_a1_v("Neutral");
				tv0->SetMessage(525531);
				tv0->ClearReplies();
				tv0->AddReply(525532, -1, 26888);
				return;
			}
			tv3 = true;
			if (f_89e_a0_b()) {
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
		f_79a_a1_b(f_847_a0_o());
		if (!f_745_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_898_a0_i());
		L0->SetNPCDescription(f_896_a0_i());
		L0->SetPhoto(f_89a_a0_s());
		L0->SetPhoto2(f_89c_a0_s());
		L0->SetPlayerName(f_948_a0_i());
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
		f_789_a1_v(a0);
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
			f_179_a1_v("Neutral");
			tv0->SetMessage(526939);
			tv0->ClearReplies();
			if (f_8e2_a1_b(tv1) && f_8ee_a1_b(tv1) || f_8fa_a1_b(tv1) && f_8ee_a1_b(tv1)) {
				tv0->AddReply(526940, 28233, 28232);
			}
			tv0->AddReply(526945, -1, 28237);
			break;
			return;
		}
		if (f_89e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_824_a1_v(tv2);
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

	void f_179_a1_v(string a0)
	{
		if (!f_89e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_82b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_840_a0_v();
			if (a1 == 28232) {
				f_8a6_a2_v(tv1, tv0);
			}
			if (a0 == 28231) {
				f_179_a1_v("Neutral");
				tv0->SetMessage(526939);
				tv0->ClearReplies();
				if (f_8e2_a1_b(tv1) && f_8ee_a1_b(tv1) || f_8fa_a1_b(tv1) && f_8ee_a1_b(tv1)) {
					tv0->AddReply(526940, 28233, 28232);
				}
				tv0->AddReply(526945, -1, 28237);
				return;
			}
			if (a0 == 28233) {
				f_179_a1_v("Neutral");
				tv0->SetMessage(526941);
				tv0->ClearReplies();
				tv0->AddReply(526942, 28235, 28234);
				tv0->AddReply(527965, 29330, 29322);
				return;
			}
			if (a0 == 29330) {
				f_179_a1_v("Neutral");
				tv0->SetMessage(527973);
				tv0->ClearReplies();
				tv0->AddReply(527974, 29332, 29331);
				return;
			}
			if (a0 == 29332) {
				f_179_a1_v("Neutral");
				tv0->SetMessage(527975);
				tv0->ClearReplies();
				tv0->AddReply(527976, 29321, 29333);
				return;
			}
			if (a0 == 28235) {
				f_179_a1_v("Neutral");
				tv0->SetMessage(526943);
				tv0->ClearReplies();
				tv0->AddReply(526944, 29321, 28236);
				return;
			}
			if (a0 == 29321) {
				f_179_a1_v("Neutral");
				tv0->SetMessage(527964);
				tv0->ClearReplies();
				tv0->AddReply(527966, 29324, 29323);
				return;
			}
			if (a0 == 29324) {
				f_179_a1_v("Neutral");
				tv0->SetMessage(527967);
				tv0->ClearReplies();
				tv0->AddReply(527969, 29327, 29326);
				tv0->AddReply(527968, -1, 29325);
				return;
			}
			if (a0 == 29327) {
				f_179_a1_v("Neutral");
				tv0->SetMessage(527970);
				tv0->ClearReplies();
				tv0->AddReply(527971, -1, 29328);
				return;
			}
			tv3 = true;
			if (f_89e_a0_b()) {
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
		f_79a_a1_b(f_847_a0_o());
		if (!f_745_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_898_a0_i());
		L0->SetNPCDescription(f_896_a0_i());
		L0->SetPhoto(f_89a_a0_s());
		L0->SetPhoto2(f_89c_a0_s());
		L0->SetPlayerName(f_948_a0_i());
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
		f_789_a1_v(a0);
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
			f_2fe_a1_v("Neutral");
			tv0->SetMessage(528940);
			tv0->ClearReplies();
			if (f_906_a1_b(tv1)) {
				tv0->AddReply(528943, 30377, 30376);
			}
			tv0->AddReply(528941, -1, 30374);
			tv0->AddReply(528942, -1, 30375);
			break;
			return;
		}
		if (f_89e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_824_a1_v(tv2);
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

	void f_2fe_a1_v(string a0)
	{
		if (!f_89e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_82b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_840_a0_v();
			if (a1 == 30380) {
				f_8ac_a2_v(tv1, tv0);
			}
			if (a0 == 30373) {
				f_2fe_a1_v("Neutral");
				tv0->SetMessage(528940);
				tv0->ClearReplies();
				if (f_906_a1_b(tv1)) {
					tv0->AddReply(528943, 30377, 30376);
				}
				tv0->AddReply(528941, -1, 30374);
				tv0->AddReply(528942, -1, 30375);
				return;
			}
			if (a0 == 30377) {
				f_2fe_a1_v("Neutral");
				tv0->SetMessage(528944);
				tv0->ClearReplies();
				tv0->AddReply(528945, 30379, 30378);
				tv0->AddReply(528948, 30382, 30381);
				return;
			}
			if (a0 == 30382) {
				f_2fe_a1_v("Neutral");
				tv0->SetMessage(528949);
				tv0->ClearReplies();
				tv0->AddReply(528950, 30384, 30383);
				return;
			}
			if (a0 == 30384) {
				f_2fe_a1_v("Neutral");
				tv0->SetMessage(528951);
				tv0->ClearReplies();
				tv0->AddReply(528952, 30391, 30385);
				tv0->AddReply(528954, 30386, 30387);
				return;
			}
			if (a0 == 30386) {
				f_2fe_a1_v("Neutral");
				tv0->SetMessage(528953);
				tv0->ClearReplies();
				tv0->AddReply(528955, 30389, 30388);
				tv0->AddReply(528957, 30389, 30390);
				return;
			}
			if (a0 == 30389) {
				f_2fe_a1_v("Neutral");
				tv0->SetMessage(528956);
				tv0->ClearReplies();
				tv0->AddReply(528960, 30379, 30394);
				return;
			}
			if (a0 == 30391) {
				f_2fe_a1_v("Neutral");
				tv0->SetMessage(528958);
				tv0->ClearReplies();
				tv0->AddReply(528959, 30379, 30392);
				return;
			}
			if (a0 == 30379) {
				f_2fe_a1_v("Neutral");
				tv0->SetMessage(528946);
				tv0->ClearReplies();
				tv0->AddReply(528947, -1, 30380);
				return;
			}
			tv3 = true;
			if (f_89e_a0_b()) {
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
		f_79a_a1_b(f_847_a0_o());
		if (!f_745_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_898_a0_i());
		L0->SetNPCDescription(f_896_a0_i());
		L0->SetPhoto(f_89a_a0_s());
		L0->SetPhoto2(f_89c_a0_s());
		L0->SetPlayerName(f_948_a0_i());
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
		f_789_a1_v(a0);
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
			f_46d_a1_v("Neutral");
			tv0->SetMessage(535231);
			tv0->ClearReplies();
			tv0->AddReply(535232, 36953, 36907);
			tv0->AddReply(535233, -1, 36908);
			tv0->AddReply(535280, -1, 36956);
			break;
			return;
		}
		if (f_89e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_824_a1_v(tv2);
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

	void f_46d_a1_v(string a0)
	{
		if (!f_89e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_82b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_840_a0_v();
			if (a0 == 36906) {
				f_46d_a1_v("Neutral");
				tv0->SetMessage(535231);
				tv0->ClearReplies();
				tv0->AddReply(535232, 36953, 36907);
				tv0->AddReply(535233, -1, 36908);
				tv0->AddReply(535280, -1, 36956);
				return;
			}
			if (a0 == 36953) {
				f_46d_a1_v("Neutral");
				tv0->SetMessage(535277);
				tv0->ClearReplies();
				tv0->AddReply(535278, 36957, 36954);
				tv0->AddReply(535279, 36957, 36955);
				return;
			}
			if (a0 == 36957) {
				f_46d_a1_v("Neutral");
				tv0->SetMessage(535281);
				tv0->ClearReplies();
				tv0->AddReply(535282, -1, 36958);
				tv0->AddReply(535283, -1, 36959);
				return;
			}
			tv3 = true;
			if (f_89e_a0_b()) {
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
		f_79a_a1_b(f_847_a0_o());
		if (!f_745_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_898_a0_i());
		L0->SetNPCDescription(f_896_a0_i());
		L0->SetPhoto(f_89a_a0_s());
		L0->SetPhoto2(f_89c_a0_s());
		L0->SetPlayerName(f_948_a0_i());
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
		f_789_a1_v(a0);
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
			f_579_a1_v("Neutral");
			tv0->SetMessage(525599);
			tv0->ClearReplies();
			if (f_8ca_a1_b(tv1) && f_8d6_a1_b(tv1)) {
				tv0->AddReply(525600, 26948, 26947);
			}
			tv0->AddReply(525605, -1, 26952);
			break;
			return;
		}
		if (f_89e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_824_a1_v(tv2);
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

	void f_579_a1_v(string a0)
	{
		if (!f_89e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_82b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_840_a0_v();
			if (a1 == 26947) {
				f_8a0_a2_v(tv1, tv0);
			}
			if (a1 == 26951) {
				f_8ba_a2_v(tv1, tv0);
				f_8c4_a2_v(tv1, tv0);
			}
			if (a0 == 26946) {
				f_579_a1_v("Neutral");
				tv0->SetMessage(525599);
				tv0->ClearReplies();
				if (f_8ca_a1_b(tv1) && f_8d6_a1_b(tv1)) {
					tv0->AddReply(525600, 26948, 26947);
				}
				tv0->AddReply(525605, -1, 26952);
				return;
			}
			if (a0 == 26948) {
				f_579_a1_v("Neutral");
				tv0->SetMessage(525601);
				tv0->ClearReplies();
				tv0->AddReply(525602, 26950, 26949);
				return;
			}
			if (a0 == 26950) {
				f_579_a1_v("Neutral");
				tv0->SetMessage(525603);
				tv0->ClearReplies();
				tv0->AddReply(525604, -1, 26951);
				return;
			}
			tv3 = true;
			if (f_89e_a0_b()) {
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
		f_79a_a1_b(f_847_a0_o());
		if (!f_745_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_898_a0_i());
		L0->SetNPCDescription(f_896_a0_i());
		L0->SetPhoto(f_89a_a0_s());
		L0->SetPhoto2(f_89c_a0_s());
		L0->SetPlayerName(f_948_a0_i());
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
		f_789_a1_v(a0);
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
			f_68b_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_89e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_824_a1_v(tv2);
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

	void f_68b_a1_v(string a0)
	{
		if (!f_89e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_82b_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_840_a0_v();
			if (a0 == 42554) {
				f_68b_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_89e_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t13
{
	var bool tv0;
	var Vector tv1;
	var Vector tv2;

	void init(void)
	{
		g1 = true;
		f_6da_a0_v();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "icot_viktor_NPC_Trigger") {
			f_701_a0_v();
		}
	}

	void f_6da_a0_v(void)
	{
		@GetPosition(tv1);
		@GetDirection(tv2);
		tv0 = false;
		if (!f_740_a0_b()) {
			t0{};
			f_6f6_a0_v();
		}
		for (; ; ) {
			f_824_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void f_6f6_a0_v(void)
	{
		@SetPosition(tv1);
		@SetDirection(tv2);
		tv0 = false;
		@LockAnimation("all", "stand", 0);
	}

	void f_701_a0_v(void)
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
		f_6f6_a0_v();
	}

	void OnUse(object a0)
	{
		if (tv0) {
			bool L0;
			@IsOverrideActive(L0);
			if (!L0) {
				disable OnUse;
				f_737_a1_b(a0);
				enable OnUse;
				f_959_a1_v(a0);
			}
		}
	}
}

void f_726_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_72d_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_737_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_72d_a1_b(L0);
}

bool f_740_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_745_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_84d_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_89e_a0_b()) {
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

void f_789_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_89e_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_79a_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_7d4_a1_b(a0)) {
			if (!f_7f9_a1_b(a0)) {
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
		if (!f_7f9_a1_b(a0)) {
			if (!f_7d4_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_7d4_a1_b(object a0)
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
	return f_831_a1_b(L4);
}

bool f_7f9_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_887_a0_i() + "m";
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
	return f_831_a1_b(L4);
}

void f_824_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_82b_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_831_a1_b(string a0)
{
	if (f_89e_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_840_a0_v(void)
{
	if (f_89e_a0_b()) {
		@lshStopSpeech();
	}
}

object f_847_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_84d_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_857_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_85c_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_868_a2_v(object a0, int a1)
{
	f_726_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_85c_a2_v(L0, a1);
	}
}

bool f_87b_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_887_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_890_a1_b(int a0)
{
	return f_887_a0_i() == a0;
}

int f_896_a0_i(void)
{
	return 515554;
}

int f_898_a0_i(void)
{
	return 502879;
}

string f_89a_a0_s(void)
{
	return "ui/NPC_Viktor.png";
}

string f_89c_a0_s(void)
{
	return "ui/NPC_Viktor_b.png";
}

bool f_89e_a0_b(void)
{
	return true;
}

void f_8a0_a2_v(object a0, object a1)
{
	@SetVariable("ook3Viktor1", 1);
}

void f_8a6_a2_v(object a0, object a1)
{
	@SetVariable("ook10Viktor1", 1);
}

void f_8ac_a2_v(object a0, object a1)
{
	@SetVariable("k9q01", 5);
	f_912_a0_v();
	f_87b_a2_b("quest_k9_01", "init_mnogogrannik");
}

void f_8ba_a2_v(object a0, object a1)
{
	@Trace("money500 is given");
	f_868_a2_v(a0, 500);
}

void f_8c4_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

bool f_8ca_a1_b(object a0)
{
	if (f_857_a1_i("k3q03") == 1000) {
		return true;
	}
	return false;
}

bool f_8d6_a1_b(object a0)
{
	if (f_857_a1_i("ook3Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_8e2_a1_b(object a0)
{
	if (f_857_a1_i("k10q01") == 1) {
		return true;
	}
	return false;
}

bool f_8ee_a1_b(object a0)
{
	if (f_857_a1_i("ook10Viktor1") == 0) {
		return true;
	}
	return false;
}

bool f_8fa_a1_b(object a0)
{
	if (f_857_a1_i("k10q01") == 2) {
		return true;
	}
	return false;
}

bool f_906_a1_b(object a0)
{
	if (f_857_a1_i("k9q01") == 4) {
		return true;
	}
	return false;
}

void f_912_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 522, 1, 529814);
	f_92c_a2_b(L0, 517);
}

object f_91f_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_92c_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_91f_a0_o();
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

int f_948_a0_i(void)
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

void f_959_a1_v(object a0)
{
	if (!g1) {
		t1{a0};
		g1 = true;
	}
	if (f_890_a1_b(3)) {
		t9{a0};
		return;
	}
	if (f_890_a1_b(9)) {
		t5{a0};
		return;
	}
	if (f_890_a1_b(10)) {
		t3{a0};
		return;
	}
	if (f_890_a1_b(12)) {
		t7{a0};
		return;
	}
	t11{a0};
}

