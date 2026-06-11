event OnLoad 5;
event OnUnload 6;
event OnUse 0;
event OnCollision 10;
event evt_11 11;

var object g0;
var bool g1;

task t0
{
	void init(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

maintask t1
{
	void init(void)
	{
		f_a2e_a0_v();
		if (!f_814_a0_b()) {
			t0{};
		}
		for (; ; ) {
			f_855_a1_v("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void OnUnload(void)
	{
		t0{};
	}

	void OnUse(object a0)
	{
		f_a32_a1_v(a0);
	}

	void OnCollision(object a0)
	{
		f_808_a1_b(a0);
		@WaitForAnimEnd();
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
		if (!f_819_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_89a_a0_i());
		L0->SetPhoto(f_89c_a0_s());
		L0->SetPlayerName(f_9fd_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_851_a1_v(a0);
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
			f_906_a2_v(tv1, tv0);
			f_b4_a1_v("Neutral");
			tv0->SetMessage(457);
			tv0->ClearReplies();
			tv0->AddReply(458, 530, 527);
			tv0->AddReply(459, 532, 528);
			tv0->AddReply(460, 530, 529);
			break;
			return;
		}
		if (f_89e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_855_a1_v(tv2);
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

	void f_b4_a1_v(string a0)
	{
		if (!f_89e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_855_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_867_a0_v();
			if (a0 == 526) {
				f_906_a2_v(tv1, tv0);
				f_b4_a1_v("Neutral");
				tv0->SetMessage(457);
				tv0->ClearReplies();
				tv0->AddReply(458, 530, 527);
				tv0->AddReply(459, 532, 528);
				tv0->AddReply(460, 530, 529);
				return;
			}
			if (a0 == 532) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(462);
				tv0->ClearReplies();
				tv0->AddReply(466, 538, 536);
				tv0->AddReply(467, -1, 537);
				return;
			}
			if (a0 == 538) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(468);
				tv0->ClearReplies();
				tv0->AddReply(470, -1, 540);
				tv0->AddReply(471, -1, 541);
				return;
			}
			if (a0 == 530) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(461);
				tv0->ClearReplies();
				tv0->AddReply(463, 535, 533);
				tv0->AddReply(464, -1, 534);
				return;
			}
			if (a0 == 535) {
				f_b4_a1_v("Neutral");
				tv0->SetMessage(465);
				tv0->ClearReplies();
				tv0->AddReply(6269, -1, 6939);
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
		if (!f_819_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_89a_a0_i());
		L0->SetPhoto(f_89c_a0_s());
		L0->SetPlayerName(f_9fd_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t5{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_851_a1_v(a0);
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
			if (f_90c_a1_b(tv1) && f_930_a1_b(tv1)) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(5647);
				tv0->ClearReplies();
				tv0->AddReply(5648, 6756, 6227);
				tv0->AddReply(5671, 6750, 6252);
				break;
			}
			if (f_918_a1_b(tv1) && !f_90c_a1_b(tv1)) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(5659);
				tv0->ClearReplies();
				tv0->AddReply(5660, 6241, 6240);
				tv0->AddReply(5670, 6241, 6250);
				break;
			}
			if (f_924_a1_b(tv1)) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(5649);
				tv0->ClearReplies();
				tv0->AddReply(5650, 6230, 6229);
				tv0->AddReply(5658, 6230, 6237);
				break;
			}
			f_253_a1_v("Neutral");
			tv0->SetMessage(8187);
			tv0->ClearReplies();
			if (f_989_a1_b(tv1)) {
				tv0->AddReply(8191, 9041, 9014);
			}
			if (f_995_a1_b(tv1)) {
				tv0->AddReply(8192, 9040, 9015);
			}
			if (f_97d_a1_b(tv1)) {
				tv0->AddReply(8209, 9037, 9032);
			}
			if (f_965_a1_b(tv1)) {
				tv0->AddReply(8210, 9038, 9033);
			}
			if (f_971_a1_b(tv1)) {
				tv0->AddReply(8212, 9039, 9035);
			}
			tv0->AddReply(8722, -1, 9559);
			break;
			return;
		}
		if (f_89e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_855_a1_v(tv2);
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

	void f_253_a1_v(string a0)
	{
		if (!f_89e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_855_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_867_a0_v();
			if (a1 == 6780) {
				f_8a0_a2_v(tv1, tv0);
				f_8b2_a2_v(tv1, tv0);
				f_8bb_a2_v(tv1, tv0);
				f_8cb_a2_v(tv1, tv0);
			}
			if (a1 == 6783) {
				f_8a0_a2_v(tv1, tv0);
				f_8b2_a2_v(tv1, tv0);
				f_8bb_a2_v(tv1, tv0);
				f_8cb_a2_v(tv1, tv0);
			}
			if (a1 == 6244) {
				f_8a6_a2_v(tv1, tv0);
			}
			if (a1 == 6245) {
				f_8a6_a2_v(tv1, tv0);
			}
			if (a1 == 6248) {
				f_8a6_a2_v(tv1, tv0);
			}
			if (a1 == 6249) {
				f_8a6_a2_v(tv1, tv0);
			}
			if (a1 == 6233) {
				f_8ac_a2_v(tv1, tv0);
			}
			if (a1 == 6234) {
				f_8ac_a2_v(tv1, tv0);
			}
			if (a1 == 6235) {
				f_8ac_a2_v(tv1, tv0);
			}
			if (a1 == 6236) {
				f_8ac_a2_v(tv1, tv0);
			}
			if (a0 == 6226) {
				if (f_90c_a1_b(tv1) && f_930_a1_b(tv1)) {
					f_253_a1_v("Neutral");
					tv0->SetMessage(5647);
					tv0->ClearReplies();
					tv0->AddReply(5648, 6756, 6227);
					tv0->AddReply(5671, 6750, 6252);
					return;
				}
				if (f_918_a1_b(tv1) && !f_90c_a1_b(tv1)) {
					f_253_a1_v("Neutral");
					tv0->SetMessage(5659);
					tv0->ClearReplies();
					tv0->AddReply(5660, 6241, 6240);
					tv0->AddReply(5670, 6241, 6250);
					return;
				}
				if (f_924_a1_b(tv1)) {
					f_253_a1_v("Neutral");
					tv0->SetMessage(5649);
					tv0->ClearReplies();
					tv0->AddReply(5650, 6230, 6229);
					tv0->AddReply(5658, 6230, 6237);
					return;
				}
				f_253_a1_v("Neutral");
				tv0->SetMessage(8187);
				tv0->ClearReplies();
				if (f_989_a1_b(tv1)) {
					tv0->AddReply(8191, 9041, 9014);
				}
				if (f_995_a1_b(tv1)) {
					tv0->AddReply(8192, 9040, 9015);
				}
				if (f_97d_a1_b(tv1)) {
					tv0->AddReply(8209, 9037, 9032);
				}
				if (f_965_a1_b(tv1)) {
					tv0->AddReply(8210, 9038, 9033);
				}
				if (f_971_a1_b(tv1)) {
					tv0->AddReply(8212, 9039, 9035);
				}
				tv0->AddReply(8722, -1, 9559);
				return;
			}
			if (a0 == 9039) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(8216);
				tv0->ClearReplies();
				tv0->AddReply(8721, -1, 9558);
				return;
			}
			if (a0 == 9038) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(8215);
				tv0->ClearReplies();
				tv0->AddReply(8720, -1, 9557);
				return;
			}
			if (a0 == 9037) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(8214);
				tv0->ClearReplies();
				tv0->AddReply(8719, -1, 9556);
				return;
			}
			if (a0 == 9040) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(8217);
				tv0->ClearReplies();
				tv0->AddReply(8718, -1, 9555);
				return;
			}
			if (a0 == 9041) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(8218);
				tv0->ClearReplies();
				tv0->AddReply(8717, -1, 9554);
				return;
			}
			if (a0 == 6230) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(5651);
				tv0->ClearReplies();
				tv0->AddReply(5652, 6232, 6231);
				tv0->AddReply(5657, -1, 6236);
				return;
			}
			if (a0 == 6232) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(5653);
				tv0->ClearReplies();
				tv0->AddReply(5654, -1, 6233);
				tv0->AddReply(5655, -1, 6234);
				tv0->AddReply(5656, -1, 6235);
				return;
			}
			if (a0 == 6241) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(5661);
				tv0->ClearReplies();
				tv0->AddReply(5662, 6243, 6242);
				tv0->AddReply(5666, 6247, 6246);
				return;
			}
			if (a0 == 6247) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(5667);
				tv0->ClearReplies();
				tv0->AddReply(5668, -1, 6248);
				tv0->AddReply(5669, -1, 6249);
				return;
			}
			if (a0 == 6243) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(5663);
				tv0->ClearReplies();
				tv0->AddReply(5664, -1, 6244);
				tv0->AddReply(5665, -1, 6245);
				return;
			}
			if (a0 == 6750) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(6112);
				tv0->ClearReplies();
				tv0->AddReply(6113, 6753, 6751);
				tv0->AddReply(6114, 6753, 6752);
				return;
			}
			if (a0 == 6753) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(6115);
				tv0->ClearReplies();
				tv0->AddReply(6116, 6768, 6755);
				tv0->AddReply(6120, 6760, 6759);
				return;
			}
			if (a0 == 6760) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(6121);
				tv0->ClearReplies();
				tv0->AddReply(6124, 6768, 6763);
				return;
			}
			if (a0 == 6756) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(6117);
				tv0->ClearReplies();
				tv0->AddReply(6118, 6764, 6757);
				tv0->AddReply(6119, 6765, 6758);
				return;
			}
			if (a0 == 6765) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(6126);
				tv0->ClearReplies();
				tv0->AddReply(6127, 6768, 6766);
				return;
			}
			if (a0 == 6764) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(6125);
				tv0->ClearReplies();
				tv0->AddReply(6128, 6768, 6767);
				tv0->AddReply(6132, 6775, 6774);
				tv0->AddReply(6135, 6768, 6777);
				return;
			}
			if (a0 == 6775) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(6133);
				tv0->ClearReplies();
				tv0->AddReply(6134, 6768, 6776);
				return;
			}
			if (a0 == 6768) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(6129);
				tv0->ClearReplies();
				tv0->AddReply(6130, 6773, 6772);
				return;
			}
			if (a0 == 6773) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(6131);
				tv0->ClearReplies();
				if (f_971_a1_b(tv1)) {
					tv0->AddReply(6136, -1, 6780);
				}
				tv0->AddReply(6137, 6782, 6781);
				return;
			}
			if (a0 == 6782) {
				f_253_a1_v("Neutral");
				tv0->SetMessage(6138);
				tv0->ClearReplies();
				tv0->AddReply(6139, -1, 6783);
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
		if (!f_819_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_89a_a0_i());
		L0->SetPhoto(f_89c_a0_s());
		L0->SetPlayerName(f_9fd_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t7{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_851_a1_v(a0);
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
			f_5c5_a1_v("Neutral");
			tv0->SetMessage(10004);
			tv0->ClearReplies();
			if (f_93c_a1_b(tv1) && f_948_a1_b(tv1)) {
				tv0->AddReply(10211, 11256, 11257);
			}
			tv0->AddReply(10005, 11028, 11027);
			tv0->AddReply(10012, 11035, 11034);
			tv0->AddReply(10015, -1, 11037);
			tv0->AddReply(11383, -1, 12579);
			break;
			return;
		}
		if (f_89e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_855_a1_v(tv2);
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

	void f_5c5_a1_v(string a0)
	{
		if (!f_89e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_855_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_867_a0_v();
			if (a1 == 11390) {
				f_8dd_a2_v(tv1, tv0);
				f_8db_a2_v(tv1, tv0);
				f_8f0_a2_v(tv1, tv0);
			}
			if (a1 == 11393) {
				f_8db_a2_v(tv1, tv0);
				f_8dd_a2_v(tv1, tv0);
				f_8f0_a2_v(tv1, tv0);
			}
			if (a0 == 11026) {
				f_5c5_a1_v("Neutral");
				tv0->SetMessage(10004);
				tv0->ClearReplies();
				if (f_93c_a1_b(tv1) && f_948_a1_b(tv1)) {
					tv0->AddReply(10211, 11256, 11257);
				}
				tv0->AddReply(10005, 11028, 11027);
				tv0->AddReply(10012, 11035, 11034);
				tv0->AddReply(10015, -1, 11037);
				tv0->AddReply(11383, -1, 12579);
				return;
			}
			if (a0 == 11035) {
				f_5c5_a1_v("Neutral");
				tv0->SetMessage(10013);
				tv0->ClearReplies();
				tv0->AddReply(10014, -1, 11036);
				return;
			}
			if (a0 == 11028) {
				f_5c5_a1_v("Neutral");
				tv0->SetMessage(10006);
				tv0->ClearReplies();
				tv0->AddReply(10007, 11030, 11029);
				tv0->AddReply(10011, -1, 11033);
				return;
			}
			if (a0 == 11030) {
				f_5c5_a1_v("Neutral");
				tv0->SetMessage(10008);
				tv0->ClearReplies();
				tv0->AddReply(10009, -1, 11031);
				tv0->AddReply(10010, -1, 11032);
				return;
			}
			if (a0 == 11256) {
				f_5c5_a1_v("Neutral");
				tv0->SetMessage(10210);
				tv0->ClearReplies();
				tv0->AddReply(10325, 11385, 11384);
				return;
			}
			if (a0 == 11385) {
				f_5c5_a1_v("Neutral");
				tv0->SetMessage(10326);
				tv0->ClearReplies();
				tv0->AddReply(10327, 11388, 11386);
				tv0->AddReply(10328, 11388, 11387);
				return;
			}
			if (a0 == 11388) {
				f_5c5_a1_v("Neutral");
				tv0->SetMessage(10329);
				tv0->ClearReplies();
				tv0->AddReply(10330, -1, 11390);
				tv0->AddReply(10331, 11392, 11391);
				return;
			}
			if (a0 == 11392) {
				f_5c5_a1_v("Neutral");
				tv0->SetMessage(10332);
				tv0->ClearReplies();
				tv0->AddReply(10333, -1, 11393);
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
		if (!f_819_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_89a_a0_i());
		L0->SetPhoto(f_89c_a0_s());
		L0->SetPlayerName(f_9fd_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t9{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_851_a1_v(a0);
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
			f_759_a1_v("Neutral");
			tv0->SetMessage(12800);
			tv0->ClearReplies();
			if (f_94d_a1_b(tv1) && f_959_a1_b(tv1)) {
				tv0->AddReply(12801, 14001, 14000);
			}
			tv0->AddReply(12813, -1, 14013);
			break;
			return;
		}
		if (f_89e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_855_a1_v(tv2);
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

	void f_759_a1_v(string a0)
	{
		if (!f_89e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_855_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_867_a0_v();
			if (a1 == 14011) {
				f_900_a2_v(tv1, tv0);
			}
			if (a0 == 13999) {
				f_759_a1_v("Neutral");
				tv0->SetMessage(12800);
				tv0->ClearReplies();
				if (f_94d_a1_b(tv1) && f_959_a1_b(tv1)) {
					tv0->AddReply(12801, 14001, 14000);
				}
				tv0->AddReply(12813, -1, 14013);
				return;
			}
			if (a0 == 14001) {
				f_759_a1_v("Neutral");
				tv0->SetMessage(12802);
				tv0->ClearReplies();
				tv0->AddReply(12803, 14003, 14002);
				return;
			}
			if (a0 == 14003) {
				f_759_a1_v("Neutral");
				tv0->SetMessage(12804);
				tv0->ClearReplies();
				tv0->AddReply(12805, 14005, 14004);
				tv0->AddReply(12808, 14005, 14007);
				return;
			}
			if (a0 == 14005) {
				f_759_a1_v("Neutral");
				tv0->SetMessage(12806);
				tv0->ClearReplies();
				tv0->AddReply(12807, 14008, 14006);
				return;
			}
			if (a0 == 14008) {
				f_759_a1_v("Neutral");
				tv0->SetMessage(12809);
				tv0->ClearReplies();
				tv0->AddReply(12810, 14010, 14009);
				return;
			}
			if (a0 == 14010) {
				f_759_a1_v("Neutral");
				tv0->SetMessage(12811);
				tv0->ClearReplies();
				tv0->AddReply(12812, -1, 14011);
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

bool f_808_a1_b(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	bool L3;
	a0->GetPosition(L0);
	@GetPosition(L1);
	L2 = L0 - L1;
	@Rotate(L2.x, L2.z, L3);
	return L3;
}

bool f_814_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_819_a1_b(object a0)
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
	L5 = L3 * 70 + f_86e_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_851_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_855_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_867_a0_v(void)
{
	if (f_89e_a0_b()) {
		@lshStopSpeech();
	}
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

float f_87d_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_882_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_88b_a1_b(int a0)
{
	return f_882_a0_i() == a0;
}

bool f_891_a0_b(void)
{
	bool L0;
	f_855_a1_v("No");
	@lshWaitForAnimEnd(L0);
	return L0;
}

int f_89a_a0_i(void)
{
	return 2871;
}

string f_89c_a0_s(void)
{
	return "ui/NPC_Mishka.png";
}

bool f_89e_a0_b(void)
{
	return true;
}

void f_8a0_a2_v(object a0, object a1)
{
	@SetVariable("ood1Mishka1", 1);
}

void f_8a6_a2_v(object a0, object a1)
{
	@SetVariable("ood1Mishka2", 1);
}

void f_8ac_a2_v(object a0, object a1)
{
	@SetVariable("ood1Mishka3", 1);
}

void f_8b2_a2_v(object a0, object a1)
{
	@SetVariable("d1q04", 2);
	f_a0e_a0_v();
}

void f_8bb_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_9cb_a0_o();
	L0->AddMark("d1q04MishkaGotoSpi4ka", "pt_map_spi4ka", 0, 8644, f_87d_a0_f());
}

void f_8cb_a2_v(object a0, object a1)
{
	f_9dc_a3_v(f_9cb_a0_o(), "pt_map_spi4ka", 2);
	a1->ShowMap(f_9cb_a0_o());
}

void f_8db_a2_v(object a0, object a1)
{
}

void f_8dd_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_9cb_a0_o();
	L0->AddMark("d3q02MishkaGotoMladVlad", "pt_map_maldvlad", 0, 11381, f_87d_a0_f());
	f_a1e_a0_v();
}

void f_8f0_a2_v(object a0, object a1)
{
	f_9dc_a3_v(f_9cb_a0_o(), "pt_map_mladvlad", 2);
	a1->ShowMap(f_9cb_a0_o());
}

void f_900_a2_v(object a0, object a1)
{
	@SetVariable("ood6Mishka1", 1);
}

void f_906_a2_v(object a0, object a1)
{
	@SetVariable("KnowMishka", 1);
}

bool f_90c_a1_b(object a0)
{
	if (f_878_a1_i("ood1Mishka1") == 0) {
		return true;
	}
	return false;
}

bool f_918_a1_b(object a0)
{
	if (f_878_a1_i("ood1Mishka2") == 0) {
		return true;
	}
	return false;
}

bool f_924_a1_b(object a0)
{
	if (f_878_a1_i("ood1Mishka3") == 0) {
		return true;
	}
	return false;
}

bool f_930_a1_b(object a0)
{
	if (f_878_a1_i("d1q04") == 1) {
		return true;
	}
	return false;
}

bool f_93c_a1_b(object a0)
{
	if (f_878_a1_i("d3q02") == 1) {
		return true;
	}
	return false;
}

bool f_948_a1_b(object a0)
{
	return true;
	return false;
}

bool f_94d_a1_b(object a0)
{
	if (f_878_a1_i("d6q01") == 4) {
		return true;
	}
	return false;
}

bool f_959_a1_b(object a0)
{
	if (f_878_a1_i("ood6Mishka1") == 0) {
		return true;
	}
	return false;
}

bool f_965_a1_b(object a0)
{
	if (f_878_a1_i("KnowLaska") == 1) {
		return true;
	}
	return false;
}

bool f_971_a1_b(object a0)
{
	if (f_878_a1_i("KnowSpi4ka") == 1) {
		return true;
	}
	return false;
}

bool f_97d_a1_b(object a0)
{
	if (f_878_a1_i("KnowKapella") == 1) {
		return true;
	}
	return false;
}

bool f_989_a1_b(object a0)
{
	if (f_878_a1_i("KnowMyth") == 1) {
		return true;
	}
	return false;
}

bool f_995_a1_b(object a0)
{
	if (f_878_a1_i("KnowPredictions") == 1) {
		return true;
	}
	return false;
}

object f_9a1_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_9ae_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_9a1_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SetVariable("player_diary", 1);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

object f_9cb_a0_o(void)
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

void f_9dc_a3_v(object a0, string a1, float a2)
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

int f_9fd_a0_i(void)
{
	int L0;
	@GetVariable("player", L0);
	if (L0 == 0) {
		return 200001;
	} else {
		if (L0 == 1) {
			return 200002;
		}
	}
	return 200003;
}

void f_a0e_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 45, 2, 12127);
	f_9ae_a2_b(L0, 43);
}

void f_a1e_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 136, 2, 15306);
	f_9ae_a2_b(L0, 26);
}

void f_a2e_a0_v(void)
{
	g1 = false;
}

void f_a32_a1_v(object a0)
{
	if (!g1) {
		t2{a0};
		g1 = true;
	}
	if (f_88b_a1_b(1)) {
		t4{a0};
		return;
	}
	if (f_88b_a1_b(3)) {
		t6{a0};
		return;
	}
	if (f_88b_a1_b(6)) {
		t8{a0};
		return;
	}
	f_891_a0_b();
}

