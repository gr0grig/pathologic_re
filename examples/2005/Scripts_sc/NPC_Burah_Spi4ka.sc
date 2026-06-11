event OnLoad 5;
event OnDialogReply 11;
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
		} while (!f_761_a0_b());
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
		f_7bb_a1_b(f_868_a0_o());
		if (!f_766_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8bd_a0_i());
		L0->SetNPCDescription(f_8bb_a0_i());
		L0->SetPhoto(f_8bf_a0_s());
		L0->SetPhoto2(f_8c1_a0_s());
		L0->SetPlayerName(f_98f_a0_i());
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
		f_7aa_a1_v(a0);
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
			tv0->SetMessage(530479);
			tv0->ClearReplies();
			if (f_8f7_a1_b(tv1)) {
				tv0->AddReply(530480, 32848, 31846);
			}
			tv0->AddReply(530481, -1, 31847);
			break;
			return;
		}
		if (f_8c3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_845_a1_v(tv2);
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
		if (!f_8c3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_84c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_861_a0_v();
			if (a1 == 31849) {
				f_8e2_a2_v(tv1, tv0);
			}
			if (a0 == 31845) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(530479);
				tv0->ClearReplies();
				if (f_8f7_a1_b(tv1)) {
					tv0->AddReply(530480, 32848, 31846);
				}
				tv0->AddReply(530481, -1, 31847);
				return;
			}
			if (a0 == 32848) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(531491);
				tv0->ClearReplies();
				tv0->AddReply(531493, 31848, 32850);
				tv0->AddReply(531492, 31848, 32849);
				return;
			}
			if (a0 == 31848) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(530482);
				tv0->ClearReplies();
				tv0->AddReply(531494, 32853, 32852);
				return;
			}
			if (a0 == 32853) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(531495);
				tv0->ClearReplies();
				tv0->AddReply(530483, -1, 31849);
				return;
			}
			tv3 = true;
			if (f_8c3_a0_b()) {
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
		f_7bb_a1_b(f_868_a0_o());
		if (!f_766_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8bd_a0_i());
		L0->SetNPCDescription(f_8bb_a0_i());
		L0->SetPhoto(f_8bf_a0_s());
		L0->SetPhoto2(f_8c1_a0_s());
		L0->SetPlayerName(f_98f_a0_i());
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
		f_7aa_a1_v(a0);
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
			f_1ba_a1_v("Neutral");
			tv0->SetMessage(535248);
			tv0->ClearReplies();
			if (f_903_a1_b(tv1)) {
				tv0->AddReply(535249, 37070, 36924);
			}
			tv0->AddReply(535387, -1, 37072);
			tv0->AddReply(535388, -1, 37073);
			break;
			return;
		}
		if (f_8c3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_845_a1_v(tv2);
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

	void f_1ba_a1_v(string a0)
	{
		if (!f_8c3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_84c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_861_a0_v();
			if (a1 == 36924) {
				f_8f1_a2_v(tv1, tv0);
			}
			if (a0 == 36923) {
				f_1ba_a1_v("Neutral");
				tv0->SetMessage(535248);
				tv0->ClearReplies();
				if (f_903_a1_b(tv1)) {
					tv0->AddReply(535249, 37070, 36924);
				}
				tv0->AddReply(535387, -1, 37072);
				tv0->AddReply(535388, -1, 37073);
				return;
			}
			if (a0 == 37070) {
				f_1ba_a1_v("Neutral");
				tv0->SetMessage(535385);
				tv0->ClearReplies();
				tv0->AddReply(535386, 37074, 37071);
				return;
			}
			if (a0 == 37074) {
				f_1ba_a1_v("Neutral");
				tv0->SetMessage(535389);
				tv0->ClearReplies();
				tv0->AddReply(535390, 37076, 37075);
				tv0->AddReply(535393, -1, 37078);
				return;
			}
			if (a0 == 37076) {
				f_1ba_a1_v("Neutral");
				tv0->SetMessage(535391);
				tv0->ClearReplies();
				tv0->AddReply(535392, 37079, 37077);
				tv0->AddReply(535396, -1, 37081);
				tv0->AddReply(535397, -1, 37082);
				return;
			}
			if (a0 == 37079) {
				f_1ba_a1_v("Neutral");
				tv0->SetMessage(535394);
				tv0->ClearReplies();
				tv0->AddReply(535395, -1, 37080);
				tv0->AddReply(535398, -1, 37083);
				return;
			}
			tv3 = true;
			if (f_8c3_a0_b()) {
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
		f_7bb_a1_b(f_868_a0_o());
		if (!f_766_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8bd_a0_i());
		L0->SetNPCDescription(f_8bb_a0_i());
		L0->SetPhoto(f_8bf_a0_s());
		L0->SetPhoto2(f_8c1_a0_s());
		L0->SetPlayerName(f_98f_a0_i());
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
		f_7aa_a1_v(a0);
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
			if (f_90f_a1_b(tv1)) {
				f_8d6_a2_v(tv1, tv0);
				f_8eb_a2_v(tv1, tv0);
				f_32e_a1_v("Azart");
				tv0->SetMessage(518568);
				tv0->ClearReplies();
				tv0->AddReply(518572, 20064, 19682);
				tv0->AddReply(518950, 20062, 20061);
				break;
			}
			f_32e_a1_v("Secret");
			tv0->SetMessage(518573);
			tv0->ClearReplies();
			if (f_91b_a1_b(tv1)) {
				tv0->AddReply(518574, 19688, 19684);
			}
			if (f_927_a1_b(tv1) && f_933_a1_b(tv1)) {
				tv0->AddReply(518586, 19694, 19693);
			}
			tv0->AddReply(518575, -1, 19685);
			break;
			return;
		}
		if (f_8c3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_845_a1_v(tv2);
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

	void f_32e_a1_v(string a0)
	{
		if (!f_8c3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_84c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_861_a0_v();
			if (a1 == 19687) {
				f_8c5_a2_v(tv1, tv0);
			}
			if (a1 == 19689) {
				f_8c5_a2_v(tv1, tv0);
			}
			if (a1 == 19693) {
				f_8dc_a2_v(tv1, tv0);
			}
			if (a0 == 19678) {
				if (f_90f_a1_b(tv1)) {
					f_8d6_a2_v(tv1, tv0);
					f_8eb_a2_v(tv1, tv0);
					f_32e_a1_v("Azart");
					tv0->SetMessage(518568);
					tv0->ClearReplies();
					tv0->AddReply(518572, 20064, 19682);
					tv0->AddReply(518950, 20062, 20061);
					return;
				}
				f_32e_a1_v("Secret");
				tv0->SetMessage(518573);
				tv0->ClearReplies();
				if (f_91b_a1_b(tv1)) {
					tv0->AddReply(518574, 19688, 19684);
				}
				if (f_927_a1_b(tv1) && f_933_a1_b(tv1)) {
					tv0->AddReply(518586, 19694, 19693);
				}
				tv0->AddReply(518575, -1, 19685);
				return;
			}
			if (a0 == 19694) {
				f_32e_a1_v("Azart");
				tv0->SetMessage(518587);
				tv0->ClearReplies();
				tv0->AddReply(518588, 20052, 19695);
				tv0->AddReply(518942, 20054, 20053);
				return;
			}
			if (a0 == 20054) {
				tv0->SetMessage(518943);
				tv0->ClearReplies();
				tv0->AddReply(518944, 20057, 20055);
				tv0->AddReply(518945, -1, 20056);
				return;
			}
			if (a0 == 20057) {
				f_32e_a1_v("Serious");
				tv0->SetMessage(518946);
				tv0->ClearReplies();
				tv0->AddReply(518947, -1, 20058);
				tv0->AddReply(518948, -1, 20059);
				return;
			}
			if (a0 == 20052) {
				f_32e_a1_v("Neutral");
				tv0->SetMessage(518941);
				tv0->ClearReplies();
				tv0->AddReply(518949, -1, 20060);
				return;
			}
			if (a0 == 19688) {
				f_32e_a1_v("Neutral");
				tv0->SetMessage(518581);
				tv0->ClearReplies();
				tv0->AddReply(518582, -1, 19689);
				return;
			}
			if (a0 == 20062) {
				tv0->SetMessage(518951);
				tv0->ClearReplies();
				tv0->AddReply(518952, 20069, 20063);
				return;
			}
			if (a0 == 20064) {
				f_32e_a1_v("Neutral");
				tv0->SetMessage(518953);
				tv0->ClearReplies();
				tv0->AddReply(518954, 20066, 20065);
				return;
			}
			if (a0 == 20066) {
				f_32e_a1_v("Neutral");
				tv0->SetMessage(518955);
				tv0->ClearReplies();
				tv0->AddReply(518956, 20069, 20067);
				tv0->AddReply(518957, -1, 20068);
				return;
			}
			if (a0 == 20069) {
				f_32e_a1_v("Secret");
				tv0->SetMessage(518958);
				tv0->ClearReplies();
				tv0->AddReply(518959, 19686, 20071);
				tv0->AddReply(518960, -1, 20072);
				return;
			}
			if (a0 == 19686) {
				f_32e_a1_v("Neutral");
				tv0->SetMessage(518579);
				tv0->ClearReplies();
				tv0->AddReply(518580, -1, 19687);
				return;
			}
			tv3 = true;
			if (f_8c3_a0_b()) {
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
		f_7bb_a1_b(f_868_a0_o());
		if (!f_766_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8bd_a0_i());
		L0->SetNPCDescription(f_8bb_a0_i());
		L0->SetPhoto(f_8bf_a0_s());
		L0->SetPhoto2(f_8c1_a0_s());
		L0->SetPlayerName(f_98f_a0_i());
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
		f_7aa_a1_v(a0);
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
			tv0->SetMessage(520803);
			tv0->ClearReplies();
			tv0->AddReply(520804, 29221, 22021);
			tv0->AddReply(527876, 29224, 29223);
			break;
			return;
		}
		if (f_8c3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_845_a1_v(tv2);
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
		if (!f_8c3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_84c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_861_a0_v();
			if (a0 == 22020) {
				f_511_a1_v("Neutral");
				tv0->SetMessage(520803);
				tv0->ClearReplies();
				tv0->AddReply(520804, 29221, 22021);
				tv0->AddReply(527876, 29224, 29223);
				return;
			}
			if (a0 == 29224) {
				f_511_a1_v("Neutral");
				tv0->SetMessage(527877);
				tv0->ClearReplies();
				tv0->AddReply(527878, -1, 29225);
				return;
			}
			if (a0 == 29221) {
				f_511_a1_v("Neutral");
				tv0->SetMessage(527874);
				tv0->ClearReplies();
				tv0->AddReply(527875, -1, 29222);
				return;
			}
			tv3 = true;
			if (f_8c3_a0_b()) {
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
		f_7bb_a1_b(f_868_a0_o());
		if (!f_766_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_8bd_a0_i());
		L0->SetNPCDescription(f_8bb_a0_i());
		L0->SetPhoto(f_8bf_a0_s());
		L0->SetPhoto2(f_8c1_a0_s());
		L0->SetPlayerName(f_98f_a0_i());
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
		f_7aa_a1_v(a0);
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
			f_600_a1_v("Neutral");
			tv0->SetMessage(540554);
			tv0->ClearReplies();
			tv0->AddReply(540555, -1, 42564);
			tv0->AddReply(540794, -1, 42843);
			break;
			return;
		}
		if (f_8c3_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_845_a1_v(tv2);
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

	void f_600_a1_v(string a0)
	{
		if (!f_8c3_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_84c_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_861_a0_v();
			if (a0 == 42563) {
				f_600_a1_v("Neutral");
				tv0->SetMessage(540554);
				tv0->ClearReplies();
				tv0->AddReply(540555, -1, 42564);
				tv0->AddReply(540794, -1, 42843);
				return;
			}
			tv3 = true;
			if (f_8c3_a0_b()) {
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
	var Vector tv0;

	void init(void)
	{
		f_644_a0_v();
	}

	void f_644_a0_v(void)
	{
		if (!f_761_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_6fa_a0_v();
		}
	}

	bool f_658_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_758_a1_b(L0);
	}

	void f_667_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_66c_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_746_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_682_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_68b_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_68b_a0_v();
			if (f_761_a0_b() && f_66c_a0_b()) {
				if (f_658_a0_b()) {
					f_7f5_a1_b(f_868_a0_o());
				}
			} else {
				f_667_a0_v();
				f_682_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_741_a0_v();
		f_68b_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_68b_a0_v();
		f_845_a1_v("Neutral");
		f_682_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_682_a0_v();
		} else {
			f_845_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_741_a0_v();
			f_758_a1_b(a0);
			enable OnUse;
			f_9b1_a1_v(a0);
			f_845_a1_v("Neutral");
			f_68b_a0_v();
			f_682_a0_v();
		}
	}
}

void f_6fa_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_761_a0_b()) {
		return;
	}
	L0 = f_8aa_a0_i();
	for (L1 = 0; L1 < 5 && f_761_a0_b(); L1++) {
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
			@PlayAnimation("all", f_8a3_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_73f_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_73f_a0_b(void)
{
	return true;
}

void f_741_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_746_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_74e_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_758_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_74e_a1_b(L0);
}

bool f_761_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_766_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_86e_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_8c3_a0_b()) {
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

void f_7aa_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_8c3_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_7bb_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_7f5_a1_b(a0)) {
			if (!f_81a_a1_b(a0)) {
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
		if (!f_81a_a1_b(a0)) {
			if (!f_7f5_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_7f5_a1_b(object a0)
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
	return f_852_a1_b(L4);
}

bool f_81a_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_894_a0_i() + "m";
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
	return f_852_a1_b(L4);
}

void f_845_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_84c_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_852_a1_b(string a0)
{
	if (f_8c3_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_861_a0_v(void)
{
	if (f_8c3_a0_b()) {
		@lshStopSpeech();
	}
}

object f_868_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_86e_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_878_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_87d_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

bool f_888_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_894_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_89d_a1_b(int a0)
{
	return f_894_a0_i() == a0;
}

string f_8a3_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_8aa_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_8a3_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_8bb_a0_i(void)
{
	return 515552;
}

int f_8bd_a0_i(void)
{
	return 502877;
}

string f_8bf_a0_s(void)
{
	return "ui/NPC_Spi4ka.png";
}

string f_8c1_a0_s(void)
{
	return "ui/NPC_Spi4ka_b.png";
}

bool f_8c3_a0_b(void)
{
	return true;
}

void f_8c5_a2_v(object a0, object a1)
{
	f_94c_a0_v();
	f_959_a0_v();
	f_87d_a1_o("quest_b4_02");
	f_888_a2_b("quest_b4_02", "place_boy");
}

void f_8d6_a2_v(object a0, object a1)
{
	@SetVariable("oob4Spi4ka1", 1);
}

void f_8dc_a2_v(object a0, object a1)
{
	@SetVariable("oob4Spi4ka2", 1);
}

void f_8e2_a2_v(object a0, object a1)
{
	@SetVariable("b10q04Spi4kaTalk", 9);
	f_93f_a0_v();
}

void f_8eb_a2_v(object a0, object a1)
{
	@SetVariable("b4Spi4kaVisit", 1);
}

void f_8f1_a2_v(object a0, object a1)
{
	@SetVariable("oob12Spi4ka1", 1);
}

bool f_8f7_a1_b(object a0)
{
	if (f_878_a1_i("b10q04Spi4kaTalk") == 1) {
		return true;
	}
	return false;
}

bool f_903_a1_b(object a0)
{
	if (f_878_a1_i("oob12Spi4ka1") == 0) {
		return true;
	}
	return false;
}

bool f_90f_a1_b(object a0)
{
	if (f_878_a1_i("oob4Spi4ka1") == 0) {
		return true;
	}
	return false;
}

bool f_91b_a1_b(object a0)
{
	if (f_878_a1_i("b4q02") == 0) {
		return true;
	}
	return false;
}

bool f_927_a1_b(object a0)
{
	if (f_878_a1_i("oob4Spi4ka2") == 0) {
		return true;
	}
	return false;
}

bool f_933_a1_b(object a0)
{
	if (f_878_a1_i("b4q02") == 1000) {
		return true;
	}
	return false;
}

void f_93f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 557, 2, 530536);
	f_973_a2_b(L0, 548);
}

void f_94c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 213, 2, 518576);
	f_973_a2_b(L0, -1);
}

void f_959_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 214, 2, 518577);
	f_973_a2_b(L0, 213);
}

object f_966_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_973_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_966_a0_o();
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

int f_98f_a0_i(void)
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

void f_9a0_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_spi4ka", L0);
	if (!L0) {
		t7{a0};
		@SetVariable("mt_spi4ka", 1);
	}
}

void f_9b1_a1_v(object a0)
{
	f_9a0_a1_v(a0);
	if (f_89d_a1_b(4)) {
		t5{a0};
		return;
	}
	if (f_89d_a1_b(10)) {
		t1{a0};
		return;
	}
	if (f_89d_a1_b(12)) {
		t3{a0};
		return;
	}
	t9{a0};
}

