event OnLoad 5;
event OnDialogReply 11;
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
		} while (!f_86d_a0_b());
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
		f_8c7_a1_b(f_974_a0_o());
		if (!f_872_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ae2_a0_i());
		L0->SetNPCDescription(f_ae0_a0_i());
		L0->SetPhoto(f_ae4_a0_s());
		L0->SetPhoto2(f_ae6_a0_s());
		L0->SetPlayerName(f_acf_a0_i());
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
		f_8b6_a1_v(a0);
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
			tv0->SetMessage(524791);
			tv0->ClearReplies();
			if (f_a36_a1_b(tv1)) {
				tv0->AddReply(524792, 28167, 26107);
			}
			tv0->AddReply(524793, -1, 26108);
			break;
			return;
		}
		if (f_ae8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_951_a1_v(tv2);
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
		if (!f_ae8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_958_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_96d_a0_v();
			if (a1 == 26110) {
				f_9e1_a2_v(tv1, tv0);
			}
			if (a1 == 28176) {
				f_9e1_a2_v(tv1, tv0);
				f_a0f_a2_v(tv1, tv0);
				f_a09_a2_v(tv1, tv0);
			}
			if (a1 == 40900) {
				f_9e1_a2_v(tv1, tv0);
			}
			if (a1 == 40901) {
				f_9e1_a2_v(tv1, tv0);
			}
			if (a1 == 40902) {
				f_9e1_a2_v(tv1, tv0);
			}
			if (a0 == 26106) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(524791);
				tv0->ClearReplies();
				if (f_a36_a1_b(tv1)) {
					tv0->AddReply(524792, 28167, 26107);
				}
				tv0->AddReply(524793, -1, 26108);
				return;
			}
			if (a0 == 28167) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(526880);
				tv0->ClearReplies();
				tv0->AddReply(526881, 28169, 28168);
				tv0->AddReply(538933, 28169, 40889);
				return;
			}
			if (a0 == 28169) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(526882);
				tv0->ClearReplies();
				tv0->AddReply(538926, 40882, 40881);
				tv0->AddReply(538934, 40882, 40891);
				return;
			}
			if (a0 == 40882) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(538927);
				tv0->ClearReplies();
				tv0->AddReply(526883, 26109, 28170);
				if (f_a2a_a1_b(tv1)) {
					tv0->AddReply(538928, 40884, 40883);
				}
				return;
			}
			if (a0 == 40884) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(538929);
				tv0->ClearReplies();
				tv0->AddReply(538930, 40886, 40885);
				tv0->AddReply(538932, 40886, 40887);
				return;
			}
			if (a0 == 40886) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(538931);
				tv0->ClearReplies();
				tv0->AddReply(538935, 40897, 40893);
				tv0->AddReply(538937, 40897, 40895);
				return;
			}
			if (a0 == 40897) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(538939);
				tv0->ClearReplies();
				tv0->AddReply(538940, -1, 40900);
				tv0->AddReply(538941, -1, 40901);
				tv0->AddReply(538942, -1, 40902);
				return;
			}
			if (a0 == 26109) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(524794);
				tv0->ClearReplies();
				tv0->AddReply(526885, 28173, 28172);
				tv0->AddReply(526890, 28178, 28177);
				return;
			}
			if (a0 == 28178) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(526891);
				tv0->ClearReplies();
				tv0->AddReply(538936, 40886, 40894);
				return;
			}
			if (a0 == 28173) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(526886);
				tv0->ClearReplies();
				tv0->AddReply(524795, -1, 26110);
				tv0->AddReply(526887, 28175, 28174);
				return;
			}
			if (a0 == 28175) {
				f_9d_a1_v("Neutral");
				tv0->SetMessage(526888);
				tv0->ClearReplies();
				tv0->AddReply(526889, -1, 28176);
				return;
			}
			tv3 = true;
			if (f_ae8_a0_b()) {
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
		f_8c7_a1_b(f_974_a0_o());
		if (!f_872_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ae2_a0_i());
		L0->SetNPCDescription(f_ae0_a0_i());
		L0->SetPhoto(f_ae4_a0_s());
		L0->SetPhoto2(f_ae6_a0_s());
		L0->SetPlayerName(f_acf_a0_i());
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
		f_8b6_a1_v(a0);
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
			f_285_a1_v("Neutral");
			tv0->SetMessage(525516);
			tv0->ClearReplies();
			tv0->AddReply(525517, -1, 26873);
			tv0->AddReply(526273, -1, 27549);
			break;
			return;
		}
		if (f_ae8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_951_a1_v(tv2);
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

	void f_285_a1_v(string a0)
	{
		if (!f_ae8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_958_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_96d_a0_v();
			if (a0 == 26872) {
				f_285_a1_v("Neutral");
				tv0->SetMessage(525516);
				tv0->ClearReplies();
				tv0->AddReply(525517, -1, 26873);
				tv0->AddReply(526273, -1, 27549);
				return;
			}
			tv3 = true;
			if (f_ae8_a0_b()) {
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
		f_8c7_a1_b(f_974_a0_o());
		if (!f_872_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ae2_a0_i());
		L0->SetNPCDescription(f_ae0_a0_i());
		L0->SetPhoto(f_ae4_a0_s());
		L0->SetPhoto2(f_ae6_a0_s());
		L0->SetPlayerName(f_acf_a0_i());
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
		f_8b6_a1_v(a0);
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
			f_355_a1_v("Neutral");
			tv0->SetMessage(525691);
			tv0->ClearReplies();
			if (f_a42_a1_b(tv1)) {
				tv0->AddReply(525692, 30673, 27015);
			}
			tv0->AddReply(525695, -1, 27018);
			break;
			return;
		}
		if (f_ae8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_951_a1_v(tv2);
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

	void f_355_a1_v(string a0)
	{
		if (!f_ae8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_958_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_96d_a0_v();
			if (a1 == 27017) {
				f_9ea_a2_v(tv1, tv0);
			}
			if (a0 == 27014) {
				f_355_a1_v("Neutral");
				tv0->SetMessage(525691);
				tv0->ClearReplies();
				if (f_a42_a1_b(tv1)) {
					tv0->AddReply(525692, 30673, 27015);
				}
				tv0->AddReply(525695, -1, 27018);
				return;
			}
			if (a0 == 30673) {
				f_355_a1_v("Neutral");
				tv0->SetMessage(529221);
				tv0->ClearReplies();
				tv0->AddReply(529222, 27016, 30674);
				tv0->AddReply(529223, 27016, 30675);
				return;
			}
			if (a0 == 27016) {
				f_355_a1_v("Neutral");
				tv0->SetMessage(525693);
				tv0->ClearReplies();
				tv0->AddReply(529219, 30672, 30671);
				return;
			}
			if (a0 == 30672) {
				f_355_a1_v("Neutral");
				tv0->SetMessage(529220);
				tv0->ClearReplies();
				tv0->AddReply(525694, -1, 27017);
				return;
			}
			tv3 = true;
			if (f_ae8_a0_b()) {
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
		f_8c7_a1_b(f_974_a0_o());
		if (!f_872_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ae2_a0_i());
		L0->SetNPCDescription(f_ae0_a0_i());
		L0->SetPhoto(f_ae4_a0_s());
		L0->SetPhoto2(f_ae6_a0_s());
		L0->SetPlayerName(f_acf_a0_i());
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
		f_8b6_a1_v(a0);
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
			if (!f_a4e_a1_b(tv1)) {
				f_9f3_a2_v(tv1, tv0);
				f_487_a1_v("Neutral");
				tv0->SetMessage(527714);
				tv0->ClearReplies();
				tv0->AddReply(527715, 29269, 29067);
				tv0->AddReply(527928, 29269, 29279);
				break;
			}
			f_487_a1_v("Neutral");
			tv0->SetMessage(527716);
			tv0->ClearReplies();
			tv0->AddReply(527717, -1, 29069);
			tv0->AddReply(527918, -1, 29268);
			break;
			return;
		}
		if (f_ae8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_951_a1_v(tv2);
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

	void f_487_a1_v(string a0)
	{
		if (!f_ae8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_958_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_96d_a0_v();
			if (a1 == 29286) {
				f_9f9_a2_v(tv1, tv0);
				f_a1a_a2_v(tv1, tv0);
			}
			if (a1 == 29287) {
				f_9f9_a2_v(tv1, tv0);
				f_a1a_a2_v(tv1, tv0);
			}
			if (a0 == 29066) {
				if (!f_a4e_a1_b(tv1)) {
					f_9f3_a2_v(tv1, tv0);
					f_487_a1_v("Neutral");
					tv0->SetMessage(527714);
					tv0->ClearReplies();
					tv0->AddReply(527715, 29269, 29067);
					tv0->AddReply(527928, 29269, 29279);
					return;
				}
				f_487_a1_v("Neutral");
				tv0->SetMessage(527716);
				tv0->ClearReplies();
				tv0->AddReply(527717, -1, 29069);
				tv0->AddReply(527918, -1, 29268);
				return;
			}
			if (a0 == 29269) {
				f_487_a1_v("Neutral");
				tv0->SetMessage(527919);
				tv0->ClearReplies();
				tv0->AddReply(527920, 29271, 29270);
				tv0->AddReply(527923, 29274, 29273);
				return;
			}
			if (a0 == 29274) {
				f_487_a1_v("Neutral");
				tv0->SetMessage(527924);
				tv0->ClearReplies();
				tv0->AddReply(527925, 29276, 29275);
				return;
			}
			if (a0 == 29276) {
				f_487_a1_v("Neutral");
				tv0->SetMessage(527926);
				tv0->ClearReplies();
				tv0->AddReply(527927, 29271, 29277);
				return;
			}
			if (a0 == 29271) {
				f_487_a1_v("Neutral");
				tv0->SetMessage(527921);
				tv0->ClearReplies();
				tv0->AddReply(527922, 29282, 29272);
				tv0->AddReply(527929, 29284, 29281);
				return;
			}
			if (a0 == 29282) {
				f_487_a1_v("Neutral");
				tv0->SetMessage(527930);
				tv0->ClearReplies();
				tv0->AddReply(527931, 29284, 29283);
				return;
			}
			if (a0 == 29284) {
				f_487_a1_v("Neutral");
				tv0->SetMessage(527932);
				tv0->ClearReplies();
				tv0->AddReply(527933, -1, 29286);
				tv0->AddReply(527934, -1, 29287);
				return;
			}
			tv3 = true;
			if (f_ae8_a0_b()) {
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
		f_8c7_a1_b(f_974_a0_o());
		if (!f_872_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ae2_a0_i());
		L0->SetNPCDescription(f_ae0_a0_i());
		L0->SetPhoto(f_ae4_a0_s());
		L0->SetPhoto2(f_ae6_a0_s());
		L0->SetPlayerName(f_acf_a0_i());
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
		f_8b6_a1_v(a0);
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
			f_60b_a1_v("Neutral");
			tv0->SetMessage(535284);
			tv0->ClearReplies();
			tv0->AddReply(535285, 36962, 36961);
			tv0->AddReply(535292, -1, 36968);
			tv0->AddReply(535293, -1, 36969);
			break;
			return;
		}
		if (f_ae8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_951_a1_v(tv2);
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

	void f_60b_a1_v(string a0)
	{
		if (!f_ae8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_958_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_96d_a0_v();
			if (a0 == 36960) {
				f_60b_a1_v("Neutral");
				tv0->SetMessage(535284);
				tv0->ClearReplies();
				tv0->AddReply(535285, 36962, 36961);
				tv0->AddReply(535292, -1, 36968);
				tv0->AddReply(535293, -1, 36969);
				return;
			}
			if (a0 == 36962) {
				f_60b_a1_v("Neutral");
				tv0->SetMessage(535286);
				tv0->ClearReplies();
				tv0->AddReply(535287, 36964, 36963);
				tv0->AddReply(535291, -1, 36967);
				return;
			}
			if (a0 == 36964) {
				f_60b_a1_v("Neutral");
				tv0->SetMessage(535288);
				tv0->ClearReplies();
				tv0->AddReply(535289, -1, 36965);
				tv0->AddReply(535290, -1, 36966);
				return;
			}
			tv3 = true;
			if (f_ae8_a0_b()) {
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
		f_8c7_a1_b(f_974_a0_o());
		if (!f_872_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_ae2_a0_i());
		L0->SetNPCDescription(f_ae0_a0_i());
		L0->SetPhoto(f_ae4_a0_s());
		L0->SetPhoto2(f_ae6_a0_s());
		L0->SetPlayerName(f_acf_a0_i());
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
		f_8b6_a1_v(a0);
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
			f_709_a1_v("Neutral");
			tv0->SetMessage(540545);
			tv0->ClearReplies();
			tv0->AddReply(540546, -1, 42555);
			tv0->AddReply(540798, -1, 42847);
			break;
			return;
		}
		if (f_ae8_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_951_a1_v(tv2);
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

	void f_709_a1_v(string a0)
	{
		if (!f_ae8_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_958_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_96d_a0_v();
			if (a0 == 42554) {
				f_709_a1_v("Neutral");
				tv0->SetMessage(540545);
				tv0->ClearReplies();
				tv0->AddReply(540546, -1, 42555);
				tv0->AddReply(540798, -1, 42847);
				return;
			}
			tv3 = true;
			if (f_ae8_a0_b()) {
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
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_750_a0_v();
	}

	void f_750_a0_v(void)
	{
		if (!f_86d_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_806_a0_v();
		}
	}

	bool f_764_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_864_a1_b(L0);
	}

	void f_773_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_778_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_852_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_78e_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_797_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_797_a0_v();
			if (f_86d_a0_b() && f_778_a0_b()) {
				if (f_764_a0_b()) {
					f_901_a1_b(f_974_a0_o());
				}
			} else {
				f_773_a0_v();
				f_78e_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_84d_a0_v();
		f_797_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_797_a0_v();
		f_951_a1_v("Neutral");
		f_78e_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_78e_a0_v();
		} else {
			f_951_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_84d_a0_v();
			f_864_a1_b(a0);
			enable OnUse;
			f_aea_a1_v(a0);
			f_951_a1_v("Neutral");
			f_797_a0_v();
			f_78e_a0_v();
		}
	}
}

void f_806_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_86d_a0_b()) {
		return;
	}
	L0 = f_9d0_a0_i();
	for (L1 = 0; L1 < 5 && f_86d_a0_b(); L1++) {
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
			@PlayAnimation("all", f_9c9_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_84b_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_84b_a0_b(void)
{
	return true;
}

void f_84d_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_852_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_85a_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_864_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_85a_a1_b(L0);
}

bool f_86d_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_872_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_97a_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_ae8_a0_b()) {
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

void f_8b6_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_ae8_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_8c7_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_901_a1_b(a0)) {
			if (!f_926_a1_b(a0)) {
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
		if (!f_926_a1_b(a0)) {
			if (!f_901_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_901_a1_b(object a0)
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
	return f_95e_a1_b(L4);
}

bool f_926_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_9ba_a0_i() + "m";
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
	return f_95e_a1_b(L4);
}

void f_951_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_958_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_95e_a1_b(string a0)
{
	if (f_ae8_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_96d_a0_v(void)
{
	if (f_ae8_a0_b()) {
		@lshStopSpeech();
	}
}

object f_974_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_97a_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_984_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_989_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_995_a3_v(object a0, object a1, int a2)
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
		f_989_a2_v(L0, a2);
	}
}

void f_9a8_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_995_a3_v(a0, L0, a2);
}

float f_9b5_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_9ba_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_9c3_a1_b(int a0)
{
	return f_9ba_a0_i() == a0;
}

string f_9c9_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_9d0_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_9c9_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

void f_9e1_a2_v(object a0, object a1)
{
	@SetVariable("k1q03", 2);
	f_a5a_a0_v();
}

void f_9ea_a2_v(object a0, object a1)
{
	@SetVariable("k4q01", 3);
	f_a67_a0_v();
}

void f_9f3_a2_v(object a0, object a1)
{
	@SetVariable("k10q01KnowAboutRubin", 1);
}

void f_9f9_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_a9d_a0_o();
	L0->AddMark("k10q01NotkinGotoRubin", "pt_map_rubin", 3, 530195, f_9b5_a0_f());
}

void f_a09_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_a0f_a2_v(object a0, object a1)
{
	@Trace("Gun is given");
	f_9a8_a3_v(a0, "Gun", 1);
}

void f_a1a_a2_v(object a0, object a1)
{
	f_aae_a3_v(f_a9d_a0_o(), "pt_map_rubin", 2);
	a1->ShowMap(f_a9d_a0_o());
}

bool f_a2a_a1_b(object a0)
{
	if (f_984_a1_i("k1q01DobermanDead") != 0) {
		return true;
	}
	return false;
}

bool f_a36_a1_b(object a0)
{
	if (f_984_a1_i("k1q03") == 1) {
		return true;
	}
	return false;
}

bool f_a42_a1_b(object a0)
{
	if (f_984_a1_i("k4q01") == 2) {
		return true;
	}
	return false;
}

bool f_a4e_a1_b(object a0)
{
	if (f_984_a1_i("k10q01KnowAboutRubin") != 0) {
		return true;
	}
	return false;
}

void f_a5a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 335, 2, 524802);
	f_a81_a2_b(L0, 333);
}

void f_a67_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 371, 1, 525728);
	f_a81_a2_b(L0, 368);
}

object f_a74_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_a81_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_a74_a0_o();
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

object f_a9d_a0_o(void)
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

void f_aae_a3_v(object a0, string a1, float a2)
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

int f_acf_a0_i(void)
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

int f_ae0_a0_i(void)
{
	return 515548;
}

int f_ae2_a0_i(void)
{
	return 502873;
}

string f_ae4_a0_s(void)
{
	return "ui/NPC_Notkin.png";
}

string f_ae6_a0_s(void)
{
	return "ui/NPC_Notkin_b.png";
}

bool f_ae8_a0_b(void)
{
	return true;
}

void f_aea_a1_v(object a0)
{
	if (!g1) {
		t3{a0};
		g1 = true;
	}
	if (f_9c3_a1_b(1)) {
		t1{a0};
		return;
	}
	if (f_9c3_a1_b(4)) {
		t5{a0};
		return;
	}
	if (f_9c3_a1_b(10)) {
		t7{a0};
		return;
	}
	if (f_9c3_a1_b(12)) {
		t9{a0};
		return;
	}
	t11{a0};
}

