event OnLoad 5;
event evt_11 11;
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
		} while (!f_1658_a0_b());
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
		if (!f_165d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1800_a0_i());
		L0->SetNPCDescription(f_17fe_a0_i());
		L0->SetPhoto(f_1802_a0_s());
		L0->SetPhoto2(f_1804_a0_s());
		L0->SetPlayerName(f_1b80_a0_i());
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
		f_16a1_a1_v(a0);
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
			f_91_a1_v("Neutral");
			tv0->SetMessage(532762);
			tv0->ClearReplies();
			tv0->AddReply(532763, -1, 34234);
			tv0->AddReply(533665, -1, 35197);
			break;
			return;
		}
		if (f_1806_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_173c_a1_v(tv2);
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

	void f_91_a1_v(string a0)
	{
		if (!f_1806_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1743_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1758_a0_v();
			if (a0 == 34233) {
				f_91_a1_v("Neutral");
				tv0->SetMessage(532762);
				tv0->ClearReplies();
				tv0->AddReply(532763, -1, 34234);
				tv0->AddReply(533665, -1, 35197);
				return;
			}
			tv3 = true;
			if (f_1806_a0_b()) {
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
		f_16b2_a1_b(f_175f_a0_o());
		if (!f_165d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1800_a0_i());
		L0->SetNPCDescription(f_17fe_a0_i());
		L0->SetPhoto(f_1802_a0_s());
		L0->SetPhoto2(f_1804_a0_s());
		L0->SetPlayerName(f_1b80_a0_i());
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
		f_16a1_a1_v(a0);
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
			f_161_a1_v("Neutral");
			tv0->SetMessage(535668);
			tv0->ClearReplies();
			tv0->AddReply(535669, 42112, 37355);
			tv0->AddReply(540002, -1, 41973);
			tv0->AddReply(540201, -1, 42179);
			break;
			return;
		}
		if (f_1806_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_173c_a1_v(tv2);
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

	void f_161_a1_v(string a0)
	{
		if (!f_1806_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1743_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1758_a0_v();
			if (a0 == 37354) {
				f_161_a1_v("Neutral");
				tv0->SetMessage(535668);
				tv0->ClearReplies();
				tv0->AddReply(535669, 42112, 37355);
				tv0->AddReply(540002, -1, 41973);
				tv0->AddReply(540201, -1, 42179);
				return;
			}
			if (a0 == 42112) {
				f_161_a1_v("Neutral");
				tv0->SetMessage(540140);
				tv0->ClearReplies();
				tv0->AddReply(540203, 42182, 42181);
				tv0->AddReply(540211, 42191, 42189);
				return;
			}
			if (a0 == 42182) {
				f_161_a1_v("Neutral");
				tv0->SetMessage(540204);
				tv0->ClearReplies();
				tv0->AddReply(540210, 42191, 42188);
				tv0->AddReply(540212, 42191, 42190);
				return;
			}
			if (a0 == 42191) {
				f_161_a1_v("Neutral");
				tv0->SetMessage(540213);
				tv0->ClearReplies();
				tv0->AddReply(540214, -1, 42194);
				tv0->AddReply(540215, -1, 42195);
				return;
			}
			tv3 = true;
			if (f_1806_a0_b()) {
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
		f_16b2_a1_b(f_175f_a0_o());
		if (!f_165d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1800_a0_i());
		L0->SetNPCDescription(f_17fe_a0_i());
		L0->SetPhoto(f_1802_a0_s());
		L0->SetPhoto2(f_1804_a0_s());
		L0->SetPlayerName(f_1b80_a0_i());
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
		f_16a1_a1_v(a0);
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
			f_18ea_a2_v(tv1, tv0);
			f_280_a1_v("Neutral");
			tv0->SetMessage(500187);
			tv0->ClearReplies();
			tv0->AddReply(500190, 228, 227);
			tv0->AddReply(533667, 35200, 35199);
			tv0->AddReply(500188, 226, 225);
			break;
			return;
		}
		if (f_1806_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_173c_a1_v(tv2);
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

	void f_280_a1_v(string a0)
	{
		if (!f_1806_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1743_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1758_a0_v();
			if (a0 == 224) {
				f_18ea_a2_v(tv1, tv0);
				f_280_a1_v("Neutral");
				tv0->SetMessage(500187);
				tv0->ClearReplies();
				tv0->AddReply(500190, 228, 227);
				tv0->AddReply(533667, 35200, 35199);
				tv0->AddReply(500188, 226, 225);
				return;
			}
			if (a0 == 226) {
				f_280_a1_v("Neutral");
				tv0->SetMessage(500189);
				tv0->ClearReplies();
				tv0->AddReply(500192, 233, 229);
				tv0->AddReply(500193, -1, 230);
				return;
			}
			if (a0 == 233) {
				f_280_a1_v("Neutral");
				tv0->SetMessage(500196);
				tv0->ClearReplies();
				tv0->AddReply(500203, -1, 241);
				return;
			}
			if (a0 == 35200) {
				f_280_a1_v("Neutral");
				tv0->SetMessage(533668);
				tv0->ClearReplies();
				tv0->AddReply(533669, 228, 35201);
				tv0->AddReply(533670, 228, 35202);
				return;
			}
			if (a0 == 228) {
				f_280_a1_v("Neutral");
				tv0->SetMessage(500191);
				tv0->ClearReplies();
				tv0->AddReply(500197, 236, 234);
				tv0->AddReply(500198, 9260, 235);
				return;
			}
			if (a0 == 9260) {
				f_280_a1_v("Neutral");
				tv0->SetMessage(508437);
				tv0->ClearReplies();
				tv0->AddReply(508438, -1, 9261);
				tv0->AddReply(533671, 233, 35205);
				return;
			}
			if (a0 == 236) {
				f_280_a1_v("Neutral");
				tv0->SetMessage(500199);
				tv0->ClearReplies();
				tv0->AddReply(500200, 233, 237);
				return;
			}
			tv3 = true;
			if (f_1806_a0_b()) {
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
		f_16b2_a1_b(f_175f_a0_o());
		if (!f_165d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1800_a0_i());
		L0->SetNPCDescription(f_17fe_a0_i());
		L0->SetPhoto(f_1802_a0_s());
		L0->SetPhoto2(f_1804_a0_s());
		L0->SetPlayerName(f_1b80_a0_i());
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
		f_16a1_a1_v(a0);
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
			f_455_a1_v("Neutral");
			tv0->SetMessage(506864);
			tv0->ClearReplies();
			if (f_19e9_a1_b(tv1) && f_1a31_a1_b(tv1)) {
				tv0->AddReply(506865, 7572, 7571);
			}
			if (f_19f5_a1_b(tv1) && f_1a3d_a1_b(tv1)) {
				tv0->AddReply(506868, 7575, 7574);
			}
			if (f_1a01_a1_b(tv1) && f_1a49_a1_b(tv1)) {
				tv0->AddReply(506870, 7577, 7576);
			}
			if (f_1a0d_a1_b(tv1) && f_1a55_a1_b(tv1)) {
				tv0->AddReply(506874, 7581, 7580);
			}
			if (f_1a19_a1_b(tv1) && f_1a25_a1_b(tv1)) {
				tv0->AddReply(506872, 7579, 7578);
			}
			if (f_19a3_a1_b(tv1) && f_19c5_a1_b(tv1)) {
				tv0->AddReply(533692, 10095, 35231);
			}
			if (f_19a3_a1_b(tv1) && f_19d1_a1_b(tv1)) {
				tv0->AddReply(525035, 26389, 26388);
			}
			tv0->AddReply(507531, -1, 8313);
			break;
			return;
		}
		if (f_1806_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_173c_a1_v(tv2);
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

	void f_455_a1_v(string a0)
	{
		if (!f_1806_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1743_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1758_a0_v();
			if (a1 == 7899) {
				f_185e_a2_v(tv1, tv0);
				f_1893_a2_v(tv1, tv0);
				f_191a_a2_v(tv1, tv0);
			}
			if (a1 == 7900) {
				f_185e_a2_v(tv1, tv0);
				f_1893_a2_v(tv1, tv0);
			}
			if (a1 == 7913) {
				f_185e_a2_v(tv1, tv0);
			}
			if (a1 == 7909) {
				f_185e_a2_v(tv1, tv0);
			}
			if (a1 == 7918) {
				f_1864_a2_v(tv1, tv0);
			}
			if (a1 == 7919) {
				f_1864_a2_v(tv1, tv0);
			}
			if (a1 == 7942) {
				f_186a_a2_v(tv1, tv0);
				f_18aa_a2_v(tv1, tv0);
				f_18cf_a2_v(tv1, tv0);
				f_1818_a2_v(tv1, tv0);
				f_1822_a2_v(tv1, tv0);
			}
			if (a1 == 7947) {
				f_186a_a2_v(tv1, tv0);
				f_18aa_a2_v(tv1, tv0);
				f_18cf_a2_v(tv1, tv0);
				f_1818_a2_v(tv1, tv0);
				f_1822_a2_v(tv1, tv0);
			}
			if (a1 == 7948) {
				f_1870_a2_v(tv1, tv0);
				f_18c1_a2_v(tv1, tv0);
			}
			if (a1 == 7949) {
				f_1870_a2_v(tv1, tv0);
				f_18c1_a2_v(tv1, tv0);
			}
			if (a1 == 7950) {
				f_1876_a2_v(tv1, tv0);
			}
			if (a1 == 35231) {
				f_1852_a2_v(tv1, tv0);
			}
			if (a1 == 26388) {
				f_1858_a2_v(tv1, tv0);
			}
			if (a0 == 7570) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(506864);
				tv0->ClearReplies();
				if (f_19e9_a1_b(tv1) && f_1a31_a1_b(tv1)) {
					tv0->AddReply(506865, 7572, 7571);
				}
				if (f_19f5_a1_b(tv1) && f_1a3d_a1_b(tv1)) {
					tv0->AddReply(506868, 7575, 7574);
				}
				if (f_1a01_a1_b(tv1) && f_1a49_a1_b(tv1)) {
					tv0->AddReply(506870, 7577, 7576);
				}
				if (f_1a0d_a1_b(tv1) && f_1a55_a1_b(tv1)) {
					tv0->AddReply(506874, 7581, 7580);
				}
				if (f_1a19_a1_b(tv1) && f_1a25_a1_b(tv1)) {
					tv0->AddReply(506872, 7579, 7578);
				}
				if (f_19a3_a1_b(tv1) && f_19c5_a1_b(tv1)) {
					tv0->AddReply(533692, 10095, 35231);
				}
				if (f_19a3_a1_b(tv1) && f_19d1_a1_b(tv1)) {
					tv0->AddReply(525035, 26389, 26388);
				}
				tv0->AddReply(507531, -1, 8313);
				return;
			}
			if (a0 == 26389) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(525036);
				tv0->ClearReplies();
				tv0->AddReply(525037, 26391, 26390);
				tv0->AddReply(525048, 26402, 26401);
				return;
			}
			if (a0 == 26402) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(525049);
				tv0->ClearReplies();
				tv0->AddReply(525050, 26391, 26403);
				return;
			}
			if (a0 == 26391) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(525038);
				tv0->ClearReplies();
				tv0->AddReply(525039, 26393, 26392);
				tv0->AddReply(525042, 26396, 26395);
				return;
			}
			if (a0 == 26396) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(525043);
				tv0->ClearReplies();
				tv0->AddReply(525044, 26398, 26397);
				tv0->AddReply(525047, -1, 26400);
				return;
			}
			if (a0 == 26398) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(525045);
				tv0->ClearReplies();
				tv0->AddReply(525046, -1, 26399);
				return;
			}
			if (a0 == 26393) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(525040);
				tv0->ClearReplies();
				tv0->AddReply(525041, -1, 26394);
				return;
			}
			if (a0 == 10095) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(509203);
				tv0->ClearReplies();
				tv0->AddReply(509204, 10097, 10096);
				tv0->AddReply(509216, 10111, 10110);
				return;
			}
			if (a0 == 10111) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(509217);
				tv0->ClearReplies();
				tv0->AddReply(509218, 10097, 10112);
				return;
			}
			if (a0 == 10097) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(509205);
				tv0->ClearReplies();
				tv0->AddReply(509206, 10099, 10098);
				tv0->AddReply(509210, 10103, 10102);
				return;
			}
			if (a0 == 10103) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(509211);
				tv0->ClearReplies();
				tv0->AddReply(509212, 10105, 10104);
				tv0->AddReply(509215, 10099, 10108);
				return;
			}
			if (a0 == 10105) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(509213);
				tv0->ClearReplies();
				tv0->AddReply(509214, 10099, 10106);
				return;
			}
			if (a0 == 10099) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(509207);
				tv0->ClearReplies();
				tv0->AddReply(509208, -1, 10100);
				tv0->AddReply(509209, -1, 10101);
				return;
			}
			if (a0 == 7579) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(506873);
				tv0->ClearReplies();
				tv0->AddReply(507214, -1, 7950);
				return;
			}
			if (a0 == 7581) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(506875);
				tv0->ClearReplies();
				tv0->AddReply(507212, -1, 7948);
				tv0->AddReply(507213, -1, 7949);
				return;
			}
			if (a0 == 7577) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(506871);
				tv0->ClearReplies();
				tv0->AddReply(507192, 7926, 7924);
				tv0->AddReply(507193, 7926, 7925);
				tv0->AddReply(507195, 7928, 7927);
				return;
			}
			if (a0 == 7928) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507196);
				tv0->ClearReplies();
				tv0->AddReply(507197, 7926, 7929);
				return;
			}
			if (a0 == 7926) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507194);
				tv0->ClearReplies();
				if (f_1a79_a1_b(tv1)) {
					tv0->AddReply(507198, 7932, 7931);
				}
				if (!f_1a79_a1_b(tv1)) {
					tv0->AddReply(507200, 7935, 7934);
				}
				return;
			}
			if (a0 == 7935) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507201);
				tv0->ClearReplies();
				tv0->AddReply(507202, 7932, 7936);
				return;
			}
			if (a0 == 7932) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507199);
				tv0->ClearReplies();
				tv0->AddReply(507203, 7939, 7938);
				tv0->AddReply(507208, 7944, 7943);
				return;
			}
			if (a0 == 7944) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507209);
				tv0->ClearReplies();
				tv0->AddReply(507210, 7939, 7945);
				return;
			}
			if (a0 == 7939) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507204);
				tv0->ClearReplies();
				tv0->AddReply(507205, 7941, 7940);
				tv0->AddReply(507211, -1, 7947);
				return;
			}
			if (a0 == 7941) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507206);
				tv0->ClearReplies();
				tv0->AddReply(507207, -1, 7942);
				return;
			}
			if (a0 == 7575) {
				f_187c_a2_v(tv1, tv0);
				f_455_a1_v("Neutral");
				tv0->SetMessage(506869);
				tv0->ClearReplies();
				tv0->AddReply(507183, 7915, 7914);
				return;
			}
			if (a0 == 7915) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507184);
				tv0->ClearReplies();
				tv0->AddReply(507185, 7917, 7916);
				tv0->AddReply(507189, 7921, 7920);
				return;
			}
			if (a0 == 7921) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507190);
				tv0->ClearReplies();
				tv0->AddReply(507191, 7917, 7922);
				return;
			}
			if (a0 == 7917) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507186);
				tv0->ClearReplies();
				tv0->AddReply(507187, -1, 7918);
				tv0->AddReply(507188, -1, 7919);
				return;
			}
			if (a0 == 7572) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(506866);
				tv0->ClearReplies();
				tv0->AddReply(506867, 7894, 7573);
				tv0->AddReply(507164, 7901, 7893);
				return;
			}
			if (a0 == 7901) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507172);
				tv0->ClearReplies();
				tv0->AddReply(507173, 7903, 7902);
				return;
			}
			if (a0 == 7903) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507174);
				tv0->ClearReplies();
				tv0->AddReply(507175, 7896, 7904);
				tv0->AddReply(533672, 7896, 35207);
				return;
			}
			if (a0 == 7894) {
				f_187c_a2_v(tv1, tv0);
				f_455_a1_v("Neutral");
				tv0->SetMessage(507165);
				tv0->ClearReplies();
				tv0->AddReply(507166, 7896, 7895);
				tv0->AddReply(507176, 7907, 7906);
				return;
			}
			if (a0 == 7907) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507177);
				tv0->ClearReplies();
				tv0->AddReply(507178, 7910, 7908);
				tv0->AddReply(507179, -1, 7909);
				return;
			}
			if (a0 == 7910) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507180);
				tv0->ClearReplies();
				tv0->AddReply(507181, 7896, 7911);
				tv0->AddReply(507182, -1, 7913);
				return;
			}
			if (a0 == 7896) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507167);
				tv0->ClearReplies();
				tv0->AddReply(507168, 7898, 7897);
				return;
			}
			if (a0 == 7898) {
				f_455_a1_v("Neutral");
				tv0->SetMessage(507169);
				tv0->ClearReplies();
				tv0->AddReply(507170, -1, 7899);
				tv0->AddReply(507171, -1, 7900);
				return;
			}
			tv3 = true;
			if (f_1806_a0_b()) {
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
		f_16b2_a1_b(f_175f_a0_o());
		if (!f_165d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1800_a0_i());
		L0->SetNPCDescription(f_17fe_a0_i());
		L0->SetPhoto(f_1802_a0_s());
		L0->SetPhoto2(f_1804_a0_s());
		L0->SetPlayerName(f_1b80_a0_i());
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
		f_16a1_a1_v(a0);
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
			f_97a_a1_v("Neutral");
			tv0->SetMessage(509762);
			tv0->ClearReplies();
			if (f_1ac1_a1_b(tv1) || f_197e_a1_b(tv1)) {
				tv0->AddReply(509763, 10732, 10753);
			}
			if (f_1936_a1_b(tv1)) {
				tv0->AddReply(509770, 10754, 10761);
			}
			if (f_1942_a1_b(tv1)) {
				tv0->AddReply(533709, 35249, 35248);
			}
			if (f_194e_a1_b(tv1)) {
				tv0->AddReply(533734, 35275, 35274);
			}
			if (f_195a_a1_b(tv1)) {
				tv0->AddReply(533750, 35291, 35290);
			}
			if (f_1966_a1_b(tv1)) {
				tv0->AddReply(533762, 35305, 35304);
			}
			if (f_1972_a1_b(tv1)) {
				tv0->AddReply(533782, 35327, 35326);
			}
			tv0->AddReply(533793, -1, 35337);
			tv0->AddReply(535105, -1, 36761);
			break;
			return;
		}
		if (f_1806_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_173c_a1_v(tv2);
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

	void f_97a_a1_v(string a0)
	{
		if (!f_1806_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1743_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1758_a0_v();
			if (a1 == 10753) {
				f_192a_a2_v(tv1, tv0);
			}
			if (a1 == 10740) {
				f_18df_a2_v(tv1, tv0);
				f_1828_a2_v(tv1, tv0);
			}
			if (a1 == 10761) {
				f_182e_a2_v(tv1, tv0);
			}
			if (a1 == 35248) {
				f_1834_a2_v(tv1, tv0);
			}
			if (a1 == 35274) {
				f_183a_a2_v(tv1, tv0);
			}
			if (a1 == 35290) {
				f_1840_a2_v(tv1, tv0);
			}
			if (a1 == 35304) {
				f_1846_a2_v(tv1, tv0);
			}
			if (a1 == 35313) {
				f_18df_a2_v(tv1, tv0);
			}
			if (a1 == 35326) {
				f_184c_a2_v(tv1, tv0);
			}
			if (a0 == 10752) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(509762);
				tv0->ClearReplies();
				if (f_1ac1_a1_b(tv1) || f_197e_a1_b(tv1)) {
					tv0->AddReply(509763, 10732, 10753);
				}
				if (f_1936_a1_b(tv1)) {
					tv0->AddReply(509770, 10754, 10761);
				}
				if (f_1942_a1_b(tv1)) {
					tv0->AddReply(533709, 35249, 35248);
				}
				if (f_194e_a1_b(tv1)) {
					tv0->AddReply(533734, 35275, 35274);
				}
				if (f_195a_a1_b(tv1)) {
					tv0->AddReply(533750, 35291, 35290);
				}
				if (f_1966_a1_b(tv1)) {
					tv0->AddReply(533762, 35305, 35304);
				}
				if (f_1972_a1_b(tv1)) {
					tv0->AddReply(533782, 35327, 35326);
				}
				tv0->AddReply(533793, -1, 35337);
				tv0->AddReply(535105, -1, 36761);
				return;
			}
			if (a0 == 35327) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533783);
				tv0->ClearReplies();
				tv0->AddReply(533784, 35329, 35328);
				return;
			}
			if (a0 == 35329) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533785);
				tv0->ClearReplies();
				tv0->AddReply(533786, -1, 35330);
				tv0->AddReply(533787, 35332, 35331);
				tv0->AddReply(533790, 35335, 35334);
				return;
			}
			if (a0 == 35335) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533791);
				tv0->ClearReplies();
				tv0->AddReply(533792, -1, 35336);
				return;
			}
			if (a0 == 35332) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533788);
				tv0->ClearReplies();
				tv0->AddReply(533789, -1, 35333);
				return;
			}
			if (a0 == 35305) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533763);
				tv0->ClearReplies();
				tv0->AddReply(533764, 35307, 35306);
				tv0->AddReply(533772, 35315, 35314);
				return;
			}
			if (a0 == 35315) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533773);
				tv0->ClearReplies();
				tv0->AddReply(533774, 35317, 35316);
				tv0->AddReply(533778, 35323, 35322);
				return;
			}
			if (a0 == 35323) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533779);
				tv0->ClearReplies();
				tv0->AddReply(533780, -1, 35324);
				tv0->AddReply(533781, -1, 35325);
				return;
			}
			if (a0 == 35317) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533775);
				tv0->ClearReplies();
				tv0->AddReply(533776, 35309, 35318);
				tv0->AddReply(533777, 35309, 35320);
				return;
			}
			if (a0 == 35307) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533765);
				tv0->ClearReplies();
				tv0->AddReply(533766, 35309, 35308);
				return;
			}
			if (a0 == 35309) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533767);
				tv0->ClearReplies();
				tv0->AddReply(533768, 35311, 35310);
				return;
			}
			if (a0 == 35311) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533769);
				tv0->ClearReplies();
				tv0->AddReply(533770, -1, 35312);
				tv0->AddReply(533771, -1, 35313);
				return;
			}
			if (a0 == 35291) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533751);
				tv0->ClearReplies();
				tv0->AddReply(533752, 35293, 35292);
				tv0->AddReply(533761, 35293, 35302);
				return;
			}
			if (a0 == 35293) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533753);
				tv0->ClearReplies();
				tv0->AddReply(533754, 35295, 35294);
				tv0->AddReply(533760, 35297, 35300);
				return;
			}
			if (a0 == 35295) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533755);
				tv0->ClearReplies();
				tv0->AddReply(533756, 35297, 35296);
				return;
			}
			if (a0 == 35297) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533757);
				tv0->ClearReplies();
				tv0->AddReply(533758, -1, 35298);
				tv0->AddReply(533759, -1, 35299);
				return;
			}
			if (a0 == 35275) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533735);
				tv0->ClearReplies();
				tv0->AddReply(533736, 35277, 35276);
				return;
			}
			if (a0 == 35277) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533737);
				tv0->ClearReplies();
				tv0->AddReply(533738, 35279, 35278);
				tv0->AddReply(533747, 35288, 35287);
				return;
			}
			if (a0 == 35288) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533748);
				tv0->ClearReplies();
				tv0->AddReply(533749, -1, 35289);
				return;
			}
			if (a0 == 35279) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533739);
				tv0->ClearReplies();
				tv0->AddReply(533740, 35281, 35280);
				tv0->AddReply(533746, -1, 35286);
				return;
			}
			if (a0 == 35281) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533741);
				tv0->ClearReplies();
				tv0->AddReply(533742, 35283, 35282);
				tv0->AddReply(533745, -1, 35285);
				return;
			}
			if (a0 == 35283) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533743);
				tv0->ClearReplies();
				tv0->AddReply(533744, -1, 35284);
				tv0->AddReply(535141, -1, 36802);
				return;
			}
			if (a0 == 35249) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533710);
				tv0->ClearReplies();
				tv0->AddReply(533711, 35251, 35250);
				tv0->AddReply(533717, 35257, 35256);
				return;
			}
			if (a0 == 35257) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533718);
				tv0->ClearReplies();
				tv0->AddReply(533719, 35259, 35258);
				return;
			}
			if (a0 == 35259) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533720);
				tv0->ClearReplies();
				tv0->AddReply(533721, 35261, 35260);
				tv0->AddReply(535106, -1, 36762);
				return;
			}
			if (a0 == 35261) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533722);
				tv0->ClearReplies();
				tv0->AddReply(533723, -1, 35262);
				return;
			}
			if (a0 == 35251) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533712);
				tv0->ClearReplies();
				tv0->AddReply(533713, -1, 35252);
				tv0->AddReply(533714, 35254, 35253);
				return;
			}
			if (a0 == 35254) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(533715);
				tv0->ClearReplies();
				tv0->AddReply(533716, -1, 35255);
				return;
			}
			if (a0 == 10754) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(509764);
				tv0->ClearReplies();
				tv0->AddReply(509765, 10756, 10755);
				tv0->AddReply(509769, 10756, 10759);
				return;
			}
			if (a0 == 10756) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(509766);
				tv0->ClearReplies();
				tv0->AddReply(509767, -1, 10757);
				tv0->AddReply(509768, -1, 10758);
				return;
			}
			if (a0 == 10732) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(509746);
				tv0->ClearReplies();
				tv0->AddReply(509747, 10734, 10733);
				tv0->AddReply(509757, 10734, 10744);
				tv0->AddReply(509758, 10747, 10746);
				return;
			}
			if (a0 == 10747) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(509759);
				tv0->ClearReplies();
				tv0->AddReply(509760, 10734, 10748);
				tv0->AddReply(509761, 10734, 10750);
				return;
			}
			if (a0 == 10734) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(509748);
				tv0->ClearReplies();
				tv0->AddReply(509749, 10736, 10735);
				tv0->AddReply(509756, -1, 10743);
				return;
			}
			if (a0 == 10736) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(509750);
				tv0->ClearReplies();
				tv0->AddReply(509751, 10738, 10737);
				tv0->AddReply(509755, 10738, 10741);
				return;
			}
			if (a0 == 10738) {
				f_97a_a1_v("Neutral");
				tv0->SetMessage(509752);
				tv0->ClearReplies();
				tv0->AddReply(509753, -1, 10739);
				tv0->AddReply(509754, -1, 10740);
				return;
			}
			tv3 = true;
			if (f_1806_a0_b()) {
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
		f_16b2_a1_b(f_175f_a0_o());
		if (!f_165d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1800_a0_i());
		L0->SetNPCDescription(f_17fe_a0_i());
		L0->SetPhoto(f_1802_a0_s());
		L0->SetPhoto2(f_1804_a0_s());
		L0->SetPlayerName(f_1b80_a0_i());
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
		f_16a1_a1_v(a0);
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
			f_dcc_a1_v("Neutral");
			tv0->SetMessage(513720);
			tv0->ClearReplies();
			if (f_1a6d_a1_b(tv1)) {
				tv0->AddReply(513721, 13787, 14987);
			}
			tv0->AddReply(513722, -1, 14988);
			tv0->AddReply(536132, -1, 37891);
			break;
			return;
		}
		if (f_1806_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_173c_a1_v(tv2);
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

	void f_dcc_a1_v(string a0)
	{
		if (!f_1806_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1743_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1758_a0_v();
			if (a1 == 14987) {
				f_18f0_a2_v(tv1, tv0);
			}
			if (a0 == 14986) {
				f_dcc_a1_v("Neutral");
				tv0->SetMessage(513720);
				tv0->ClearReplies();
				if (f_1a6d_a1_b(tv1)) {
					tv0->AddReply(513721, 13787, 14987);
				}
				tv0->AddReply(513722, -1, 14988);
				tv0->AddReply(536132, -1, 37891);
				return;
			}
			if (a0 == 13787) {
				f_dcc_a1_v("Neutral");
				tv0->SetMessage(512613);
				tv0->ClearReplies();
				if (f_1a61_a1_b(tv1)) {
					tv0->AddReply(512614, 13789, 13788);
				}
				tv0->AddReply(512632, 13812, 13811);
				if (!f_1a61_a1_b(tv1)) {
					tv0->AddReply(512631, 13789, 13809);
				}
				return;
			}
			if (a0 == 13812) {
				f_dcc_a1_v("Neutral");
				tv0->SetMessage(512633);
				tv0->ClearReplies();
				tv0->AddReply(512634, 13791, 13813);
				return;
			}
			if (a0 == 13789) {
				f_dcc_a1_v("Neutral");
				tv0->SetMessage(512615);
				tv0->ClearReplies();
				tv0->AddReply(512616, 13791, 13790);
				tv0->AddReply(512623, 13800, 13799);
				return;
			}
			if (a0 == 13800) {
				f_dcc_a1_v("Neutral");
				tv0->SetMessage(512624);
				tv0->ClearReplies();
				tv0->AddReply(512625, 13802, 13801);
				tv0->AddReply(512629, 13802, 13805);
				return;
			}
			if (a0 == 13802) {
				f_dcc_a1_v("Neutral");
				tv0->SetMessage(512626);
				tv0->ClearReplies();
				tv0->AddReply(512627, -1, 13803);
				tv0->AddReply(512628, -1, 13804);
				return;
			}
			if (a0 == 13791) {
				f_dcc_a1_v("Neutral");
				tv0->SetMessage(512617);
				tv0->ClearReplies();
				tv0->AddReply(512618, 13793, 13792);
				tv0->AddReply(512622, 13802, 13797);
				return;
			}
			if (a0 == 13793) {
				f_dcc_a1_v("Neutral");
				tv0->SetMessage(512619);
				tv0->ClearReplies();
				tv0->AddReply(512621, 13802, 13795);
				tv0->AddReply(512620, -1, 13794);
				return;
			}
			tv3 = true;
			if (f_1806_a0_b()) {
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
		f_16b2_a1_b(f_175f_a0_o());
		if (!f_165d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1800_a0_i());
		L0->SetNPCDescription(f_17fe_a0_i());
		L0->SetPhoto(f_1802_a0_s());
		L0->SetPhoto2(f_1804_a0_s());
		L0->SetPlayerName(f_1b80_a0_i());
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
		f_16a1_a1_v(a0);
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
			if (!f_1acd_a1_b(tv1) && !f_1ad9_a1_b(tv1) && f_1ae5_a1_b(tv1)) {
				f_1930_a2_v(tv1, tv0);
				f_f87_a1_v("Neutral");
				tv0->SetMessage(512960);
				tv0->ClearReplies();
				tv0->AddReply(512961, 41443, 14166);
				tv0->AddReply(539510, 41440, 41439);
				break;
			}
			f_f87_a1_v("Neutral");
			tv0->SetMessage(512966);
			tv0->ClearReplies();
			tv0->AddReply(512967, -1, 14172);
			tv0->AddReply(539509, -1, 41438);
			break;
			return;
		}
		if (f_1806_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_173c_a1_v(tv2);
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

	void f_f87_a1_v(string a0)
	{
		if (!f_1806_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1743_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1758_a0_v();
			if (a0 == 14165) {
				if (!f_1acd_a1_b(tv1) && !f_1ad9_a1_b(tv1) && f_1ae5_a1_b(tv1)) {
					f_1930_a2_v(tv1, tv0);
					f_f87_a1_v("Neutral");
					tv0->SetMessage(512960);
					tv0->ClearReplies();
					tv0->AddReply(512961, 41443, 14166);
					tv0->AddReply(539510, 41440, 41439);
					return;
				}
				f_f87_a1_v("Neutral");
				tv0->SetMessage(512966);
				tv0->ClearReplies();
				tv0->AddReply(512967, -1, 14172);
				tv0->AddReply(539509, -1, 41438);
				return;
			}
			if (a0 == 41440) {
				f_f87_a1_v("Neutral");
				tv0->SetMessage(539511);
				tv0->ClearReplies();
				if (f_19dd_a1_b(tv1)) {
					tv0->AddReply(539512, 41828, 41441);
				}
				tv0->AddReply(539513, 14169, 41442);
				return;
			}
			if (a0 == 41828) {
				f_f87_a1_v("Neutral");
				tv0->SetMessage(539874);
				tv0->ClearReplies();
				tv0->AddReply(539875, 41446, 41829);
				return;
			}
			if (a0 == 41443) {
				f_f87_a1_v("Neutral");
				tv0->SetMessage(539514);
				tv0->ClearReplies();
				tv0->AddReply(512963, 14169, 14168);
				tv0->AddReply(539527, 41444, 41458);
				return;
			}
			if (a0 == 14169) {
				f_f87_a1_v("Neutral");
				tv0->SetMessage(512964);
				tv0->ClearReplies();
				tv0->AddReply(512965, 41444, 14170);
				return;
			}
			if (a0 == 41444) {
				f_f87_a1_v("Neutral");
				tv0->SetMessage(539515);
				tv0->ClearReplies();
				tv0->AddReply(539516, 41446, 41445);
				tv0->AddReply(539876, -1, 41830);
				tv0->AddReply(539877, -1, 41831);
				return;
			}
			if (a0 == 41446) {
				f_f87_a1_v("Neutral");
				tv0->SetMessage(539517);
				tv0->ClearReplies();
				tv0->AddReply(539518, 41449, 41447);
				tv0->AddReply(539519, 41452, 41448);
				return;
			}
			if (a0 == 41449) {
				f_f87_a1_v("Neutral");
				tv0->SetMessage(539520);
				tv0->ClearReplies();
				tv0->AddReply(539521, 41452, 41450);
				tv0->AddReply(539522, 41452, 41451);
				return;
			}
			if (a0 == 41452) {
				f_f87_a1_v("Neutral");
				tv0->SetMessage(539523);
				tv0->ClearReplies();
				tv0->AddReply(539524, -1, 41454);
				tv0->AddReply(539872, 41827, 41826);
				return;
			}
			if (a0 == 41827) {
				f_f87_a1_v("Neutral");
				tv0->SetMessage(539873);
				tv0->ClearReplies();
				tv0->AddReply(539525, -1, 41455);
				return;
			}
			tv3 = true;
			if (f_1806_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t15
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_16b2_a1_b(f_175f_a0_o());
		if (!f_165d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1800_a0_i());
		L0->SetNPCDescription(f_17fe_a0_i());
		L0->SetPhoto(f_1802_a0_s());
		L0->SetPhoto2(f_1804_a0_s());
		L0->SetPlayerName(f_1b80_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t16{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_16a1_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t16
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
			if (f_1a85_a1_b(tv1) && f_1a91_a1_b(tv1)) {
				f_18f6_a2_v(tv1, tv0);
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514241);
				tv0->ClearReplies();
				tv0->AddReply(539735, 41875, 41699);
				tv0->AddReply(514242, 15461, 15460);
				break;
			}
			f_118d_a1_v("Neutral");
			tv0->SetMessage(514258);
			tv0->ClearReplies();
			if (f_1a9d_a1_b(tv1) && f_1aa9_a1_b(tv1)) {
				tv0->AddReply(514259, 15479, 15478);
			}
			if (f_1ab5_a1_b(tv1)) {
				tv0->AddReply(539636, 41583, 41582);
			}
			tv0->AddReply(514278, -1, 15498);
			break;
			return;
		}
		if (f_1806_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_173c_a1_v(tv2);
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

	void f_118d_a1_v(string a0)
	{
		if (!f_1806_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1743_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1758_a0_v();
			if (a1 == 15743) {
				f_18fc_a2_v(tv1, tv0);
				f_1882_a2_v(tv1, tv0);
				f_1828_a2_v(tv1, tv0);
				f_1808_a2_v(tv1, tv0);
			}
			if (a1 == 41888) {
				f_18fc_a2_v(tv1, tv0);
				f_1882_a2_v(tv1, tv0);
				f_1828_a2_v(tv1, tv0);
				f_1808_a2_v(tv1, tv0);
			}
			if (a1 == 41885) {
				f_18fc_a2_v(tv1, tv0);
			}
			if (a1 == 15478) {
				f_190e_a2_v(tv1, tv0);
			}
			if (a1 == 41582) {
				f_1914_a2_v(tv1, tv0);
			}
			if (a0 == 15459) {
				if (f_1a85_a1_b(tv1) && f_1a91_a1_b(tv1)) {
					f_18f6_a2_v(tv1, tv0);
					f_118d_a1_v("Neutral");
					tv0->SetMessage(514241);
					tv0->ClearReplies();
					tv0->AddReply(539735, 41875, 41699);
					tv0->AddReply(514242, 15461, 15460);
					return;
				}
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514258);
				tv0->ClearReplies();
				if (f_1a9d_a1_b(tv1) && f_1aa9_a1_b(tv1)) {
					tv0->AddReply(514259, 15479, 15478);
				}
				if (f_1ab5_a1_b(tv1)) {
					tv0->AddReply(539636, 41583, 41582);
				}
				tv0->AddReply(514278, -1, 15498);
				return;
			}
			if (a0 == 41583) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539637);
				tv0->ClearReplies();
				tv0->AddReply(539638, 41585, 41584);
				return;
			}
			if (a0 == 41585) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539639);
				tv0->ClearReplies();
				tv0->AddReply(539640, 41587, 41586);
				return;
			}
			if (a0 == 41587) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539641);
				tv0->ClearReplies();
				tv0->AddReply(539642, 41589, 41588);
				return;
			}
			if (a0 == 41589) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539643);
				tv0->ClearReplies();
				tv0->AddReply(539644, 41591, 41590);
				return;
			}
			if (a0 == 41591) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539645);
				tv0->ClearReplies();
				tv0->AddReply(539646, 41593, 41592);
				return;
			}
			if (a0 == 41593) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539647);
				tv0->ClearReplies();
				tv0->AddReply(539648, 41595, 41594);
				return;
			}
			if (a0 == 41595) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539649);
				tv0->ClearReplies();
				tv0->AddReply(539650, 41597, 41596);
				return;
			}
			if (a0 == 41597) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539651);
				tv0->ClearReplies();
				tv0->AddReply(539652, -1, 41598);
				tv0->AddReply(539653, -1, 41599);
				tv0->AddReply(539654, -1, 41600);
				return;
			}
			if (a0 == 15479) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514260);
				tv0->ClearReplies();
				tv0->AddReply(514261, 15481, 15480);
				return;
			}
			if (a0 == 15481) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514262);
				tv0->ClearReplies();
				tv0->AddReply(514263, 15483, 15482);
				tv0->AddReply(514268, 15488, 15487);
				return;
			}
			if (a0 == 15488) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514269);
				tv0->ClearReplies();
				tv0->AddReply(514270, -1, 15489);
				return;
			}
			if (a0 == 15483) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514264);
				tv0->ClearReplies();
				tv0->AddReply(514265, 15485, 15484);
				return;
			}
			if (a0 == 15485) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514266);
				tv0->ClearReplies();
				tv0->AddReply(514267, -1, 15486);
				return;
			}
			if (a0 == 41875) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539914);
				tv0->ClearReplies();
				tv0->AddReply(539915, 15467, 41876);
				tv0->AddReply(539916, 15461, 41877);
				return;
			}
			if (a0 == 15461) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514243);
				tv0->ClearReplies();
				tv0->AddReply(539908, 41870, 41869);
				return;
			}
			if (a0 == 41870) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539909);
				tv0->ClearReplies();
				tv0->AddReply(539910, 41872, 41871);
				return;
			}
			if (a0 == 41872) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539911);
				tv0->ClearReplies();
				tv0->AddReply(539912, 41874, 41873);
				return;
			}
			if (a0 == 41874) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539913);
				tv0->ClearReplies();
				tv0->AddReply(539917, 41880, 41879);
				return;
			}
			if (a0 == 41880) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539918);
				tv0->ClearReplies();
				tv0->AddReply(539919, 41882, 41881);
				return;
			}
			if (a0 == 41882) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539920);
				tv0->ClearReplies();
				tv0->AddReply(539921, 41884, 41883);
				return;
			}
			if (a0 == 41884) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(539922);
				tv0->ClearReplies();
				tv0->AddReply(539923, -1, 41885);
				return;
			}
			if (a0 == 15467) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514249);
				tv0->ClearReplies();
				tv0->AddReply(514250, 15469, 15468);
				tv0->AddReply(514508, 15742, 15746);
				return;
			}
			if (a0 == 15469) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514251);
				tv0->ClearReplies();
				tv0->AddReply(514252, 15471, 15470);
				tv0->AddReply(514506, 15748, 15744);
				return;
			}
			if (a0 == 15748) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514509);
				tv0->ClearReplies();
				tv0->AddReply(514511, 15751, 15750);
				tv0->AddReply(514510, -1, 15749);
				return;
			}
			if (a0 == 15751) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514512);
				tv0->ClearReplies();
				tv0->AddReply(514513, -1, 15752);
				tv0->AddReply(539924, 15742, 41886);
				return;
			}
			if (a0 == 15471) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514253);
				tv0->ClearReplies();
				tv0->AddReply(514254, 15742, 15472);
				return;
			}
			if (a0 == 15742) {
				f_118d_a1_v("Neutral");
				tv0->SetMessage(514504);
				tv0->ClearReplies();
				tv0->AddReply(514505, -1, 15743);
				tv0->AddReply(539925, -1, 41888);
				return;
			}
			tv3 = true;
			if (f_1806_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t17
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_16b2_a1_b(f_175f_a0_o());
		if (!f_165d_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_1800_a0_i());
		L0->SetNPCDescription(f_17fe_a0_i());
		L0->SetPhoto(f_1802_a0_s());
		L0->SetPhoto2(f_1804_a0_s());
		L0->SetPlayerName(f_1b80_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t18{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_16a1_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t18
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
			f_14f0_a1_v("Neutral");
			tv0->SetMessage(540542);
			tv0->ClearReplies();
			tv0->AddReply(540543, -1, 42552);
			tv0->AddReply(540796, -1, 42845);
			break;
			return;
		}
		if (f_1806_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_173c_a1_v(tv2);
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

	void f_14f0_a1_v(string a0)
	{
		if (!f_1806_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_1743_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_1758_a0_v();
			if (a0 == 42551) {
				f_14f0_a1_v("Neutral");
				tv0->SetMessage(540542);
				tv0->ClearReplies();
				tv0->AddReply(540543, -1, 42552);
				tv0->AddReply(540796, -1, 42845);
				return;
			}
			tv3 = true;
			if (f_1806_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t19
{
	var Vector tv0;

	void init(void)
	{
		f_1534_a0_v();
	}

	void f_1534_a0_v(void)
	{
		if (!f_1658_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_15ea_a0_v();
		}
	}

	bool f_1548_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_164f_a1_b(L0);
	}

	void f_1557_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_155c_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_1636_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1572_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_157b_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_157b_a0_v();
			if (f_1658_a0_b() && f_155c_a0_b()) {
				if (f_1548_a0_b()) {
					f_16ec_a1_b(f_175f_a0_o());
				}
			} else {
				f_1557_a0_v();
				f_1572_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_1631_a0_v();
		f_157b_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_157b_a0_v();
		f_173c_a1_v("Neutral");
		f_1572_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1572_a0_v();
		} else {
			f_173c_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_1631_a0_v();
			f_164f_a1_b(a0);
			enable OnUse;
			f_1b91_a1_v(a0);
			f_173c_a1_v("Neutral");
			f_157b_a0_v();
			f_1572_a0_v();
		}
	}
}

void f_15ea_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_1658_a0_b()) {
		return;
	}
	L0 = f_17ed_a0_i();
	for (L1 = 0; L1 < 5 && f_1658_a0_b(); L1++) {
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
			@PlayAnimation("all", f_17e6_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_162f_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_162f_a0_b(void)
{
	return true;
}

void f_1631_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_1636_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

void f_163e_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_1645_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_164f_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_1645_a1_b(L0);
}

bool f_1658_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_165d_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1765_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_1806_a0_b()) {
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

void f_16a1_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_1806_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_16b2_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_16ec_a1_b(a0)) {
			if (!f_1711_a1_b(a0)) {
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
		if (!f_1711_a1_b(a0)) {
			if (!f_16ec_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_16ec_a1_b(object a0)
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
	return f_1749_a1_b(L4);
}

bool f_1711_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_17c4_a0_i() + "m";
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
	return f_1749_a1_b(L4);
}

void f_173c_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_1743_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_1749_a1_b(string a0)
{
	if (f_1806_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_1758_a0_v(void)
{
	if (f_1806_a0_b()) {
		@lshStopSpeech();
	}
}

object f_175f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1765_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_176f_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_1774_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1780_a2_v(object a0, int a1)
{
	f_163e_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_1774_a2_v(L0, a1);
	}
}

void f_1793_a3_v(object a0, object a1, int a2)
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
		f_1774_a2_v(L0, a2);
	}
}

void f_17a6_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_1793_a3_v(a0, L0, a2);
}

bool f_17b3_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_17bf_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_17c4_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_17cd_a1_b(int a0)
{
	return f_17c4_a0_i() == a0;
}

bool f_17d3_a1_b(int a0)
{
	float L0;
	int L1;
	int L2;
	@GetGameTime(L0);
	L1 = 1 + (int)(L0 / 24);
	if (L1 != a0) {
		return false;
	}
	L2 = (int)L0 % 24;
	return L2 < 7;
}

string f_17e6_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_17ed_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_17e6_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_17fe_a0_i(void)
{
	return 515529;
}

int f_1800_a0_i(void)
{
	return 502855;
}

string f_1802_a0_s(void)
{
	return "ui/NPC_Andrei.png";
}

string f_1804_a0_s(void)
{
	return "ui/NPC_Andrei_b.png";
}

bool f_1806_a0_b(void)
{
	return true;
}

void f_1808_a2_v(object a0, object a1)
{
	f_1b5f_a3_v(f_1b4e_a0_o(), "pt_map_aglaja", 2);
	a1->ShowMap(f_1b4e_a0_o());
}

void f_1818_a2_v(object a0, object a1)
{
	@Trace("money1000 is given");
	f_1780_a2_v(a0, 1000);
}

void f_1822_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1828_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_182e_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr2", 1);
}

void f_1834_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr3", 1);
}

void f_183a_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr4", 1);
}

void f_1840_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr5", 1);
}

void f_1846_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr6", 1);
}

void f_184c_a2_v(object a0, object a1)
{
	@SetVariable("ood3Petr7", 1);
}

void f_1852_a2_v(object a0, object a1)
{
	@SetVariable("ood2Andrei6", 1);
}

void f_1858_a2_v(object a0, object a1)
{
	@SetVariable("ood2Andrei7", 1);
}

void f_185e_a2_v(object a0, object a1)
{
	@SetVariable("ood2Andrei1", 1);
}

void f_1864_a2_v(object a0, object a1)
{
	@SetVariable("ood2Andrei2", 1);
}

void f_186a_a2_v(object a0, object a1)
{
	@SetVariable("ood2Andrei3", 1);
}

void f_1870_a2_v(object a0, object a1)
{
	@SetVariable("ood2Andrei4", 1);
}

void f_1876_a2_v(object a0, object a1)
{
	@SetVariable("ood2Andrei5", 1);
}

void f_187c_a2_v(object a0, object a1)
{
	@SetVariable("KnowAgo", 1);
}

void f_1882_a2_v(object a0, object a1)
{
	if (f_176f_a1_i("map_chertez_state") <= 6) {
		@SetVariable("map_chertez_state", 6);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_1893_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 2);
	L0 = f_1b4e_a0_o();
	L0->AddMark("d2q02AndreiGotoPetr", "pt_map_petr", 0, 515273, f_17bf_a0_f());
	f_1b0b_a0_v();
}

void f_18aa_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("d2q02", 6);
	L0 = f_1b4e_a0_o();
	L0->AddMark("d2q02AndreiGotoGrif", "pt_map_grif", 0, 515277, f_17bf_a0_f());
	f_1afe_a0_v();
}

void f_18c1_a2_v(object a0, object a1)
{
	@SetVariable("d2q02", 8);
	f_1b18_a0_v();
	f_17b3_a2_b("quest_d2_02", "put_patrol");
}

void f_18cf_a2_v(object a0, object a1)
{
	f_1b5f_a3_v(f_1b4e_a0_o(), "pt_map_grif", 2);
	a1->ShowMap(f_1b4e_a0_o());
}

void f_18df_a2_v(object a0, object a1)
{
	@Trace("tvirin is given");
	f_17a6_a3_v(a0, "tvirin", 1);
}

void f_18ea_a2_v(object a0, object a1)
{
	@SetVariable("KnowAndrei", 1);
}

void f_18f0_a2_v(object a0, object a1)
{
	@SetVariable("ood6Andrei1", 1);
}

void f_18f6_a2_v(object a0, object a1)
{
	@SetVariable("ood11Andrei1", 1);
}

void f_18fc_a2_v(object a0, object a1)
{
	@SetVariable("d11q01", 4);
	f_1af1_a0_v();
	@Trace("blueprint is given");
	f_17a6_a3_v(a0, "d11q01_blueprint", 1);
}

void f_190e_a2_v(object a0, object a1)
{
	@SetVariable("ood11Andrei2", 1);
}

void f_1914_a2_v(object a0, object a1)
{
	@SetVariable("ood11Andrei3", 1);
}

void f_191a_a2_v(object a0, object a1)
{
	f_1b5f_a3_v(f_1b4e_a0_o(), "pt_map_petr", 2);
	a1->ShowMap(f_1b4e_a0_o());
}

void f_192a_a2_v(object a0, object a1)
{
	@SetVariable("ood3Andrei1", 1);
}

void f_1930_a2_v(object a0, object a1)
{
	@SetVariable("ood10Andrei1", 1);
}

bool f_1936_a1_b(object a0)
{
	if (f_176f_a1_i("ood3Petr2") == 0) {
		return true;
	}
	return false;
}

bool f_1942_a1_b(object a0)
{
	if (f_176f_a1_i("ood3Petr3") == 0) {
		return true;
	}
	return false;
}

bool f_194e_a1_b(object a0)
{
	if (f_176f_a1_i("ood3Petr4") == 0) {
		return true;
	}
	return false;
}

bool f_195a_a1_b(object a0)
{
	if (f_176f_a1_i("ood3Petr5") == 0) {
		return true;
	}
	return false;
}

bool f_1966_a1_b(object a0)
{
	if (f_176f_a1_i("ood3Petr6") == 0) {
		return true;
	}
	return false;
}

bool f_1972_a1_b(object a0)
{
	if (f_176f_a1_i("ood3Petr7") == 0) {
		return true;
	}
	return false;
}

bool f_197e_a1_b(object a0)
{
	if (!(f_176f_a1_i("d3q01") == 0) && !(f_176f_a1_i("d3q01") == 1000) && !(f_176f_a1_i("d3q01") == -1)) {
		return true;
	}
	return false;
}

bool f_19a3_a1_b(object a0)
{
	if (f_176f_a1_i("d2q01") != 0 && f_176f_a1_i("d2q01") != 1000 && f_176f_a1_i("d2q01") != -1) {
		return true;
	}
	return false;
}

bool f_19c5_a1_b(object a0)
{
	if (f_176f_a1_i("ood2Andrei6") == 0) {
		return true;
	}
	return false;
}

bool f_19d1_a1_b(object a0)
{
	if (f_176f_a1_i("ood2Andrei7") == 0) {
		return true;
	}
	return false;
}

bool f_19dd_a1_b(object a0)
{
	if (f_176f_a1_i("d10q01SoldierTalk") != 0) {
		return true;
	}
	return false;
}

bool f_19e9_a1_b(object a0)
{
	if (f_176f_a1_i("ood2Andrei1") == 0) {
		return true;
	}
	return false;
}

bool f_19f5_a1_b(object a0)
{
	if (f_176f_a1_i("ood2Andrei2") == 0) {
		return true;
	}
	return false;
}

bool f_1a01_a1_b(object a0)
{
	if (f_176f_a1_i("ood2Andrei3") == 0) {
		return true;
	}
	return false;
}

bool f_1a0d_a1_b(object a0)
{
	if (f_176f_a1_i("ood2Andrei4") == 0) {
		return true;
	}
	return false;
}

bool f_1a19_a1_b(object a0)
{
	if (f_176f_a1_i("ood2Andrei5") == 0) {
		return true;
	}
	return false;
}

bool f_1a25_a1_b(object a0)
{
	if (f_176f_a1_i("d2q02") == 1000) {
		return true;
	}
	return false;
}

bool f_1a31_a1_b(object a0)
{
	if (f_176f_a1_i("d2q02") == 1) {
		return true;
	}
	return false;
}

bool f_1a3d_a1_b(object a0)
{
	if (f_176f_a1_i("d2q02") == 3) {
		return true;
	}
	return false;
}

bool f_1a49_a1_b(object a0)
{
	if (f_176f_a1_i("d2q02") == 5) {
		return true;
	}
	return false;
}

bool f_1a55_a1_b(object a0)
{
	if (f_176f_a1_i("d2q02") == 7) {
		return true;
	}
	return false;
}

bool f_1a61_a1_b(object a0)
{
	if (f_176f_a1_i("d5q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1a6d_a1_b(object a0)
{
	if (f_176f_a1_i("ood6Andrei1") == 0) {
		return true;
	}
	return false;
}

bool f_1a79_a1_b(object a0)
{
	if (f_176f_a1_i("KnowGrif") == 1) {
		return true;
	}
	return false;
}

bool f_1a85_a1_b(object a0)
{
	if (f_176f_a1_i("d11q01") == 3) {
		return true;
	}
	return false;
}

bool f_1a91_a1_b(object a0)
{
	if (f_176f_a1_i("ood11Andrei1") == 0) {
		return true;
	}
	return false;
}

bool f_1a9d_a1_b(object a0)
{
	if (f_176f_a1_i("d11q01") == 4) {
		return true;
	}
	return false;
}

bool f_1aa9_a1_b(object a0)
{
	if (f_176f_a1_i("ood11Andrei2") == 0) {
		return true;
	}
	return false;
}

bool f_1ab5_a1_b(object a0)
{
	if (f_176f_a1_i("ood11Andrei3") == 0) {
		return true;
	}
	return false;
}

bool f_1ac1_a1_b(object a0)
{
	if (f_176f_a1_i("ood3Andrei1") == 0) {
		return true;
	}
	return false;
}

bool f_1acd_a1_b(object a0)
{
	if (f_176f_a1_i("d10q01") == 0) {
		return true;
	}
	return false;
}

bool f_1ad9_a1_b(object a0)
{
	if (f_176f_a1_i("d10q01") == 1000) {
		return true;
	}
	return false;
}

bool f_1ae5_a1_b(object a0)
{
	if (f_176f_a1_i("ood10Andrei1") == 0) {
		return true;
	}
	return false;
}

void f_1af1_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 195, 1, 515480);
	f_1b32_a2_b(L0, 192);
}

void f_1afe_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 59, 2, 512141);
	f_1b32_a2_b(L0, 11);
}

void f_1b0b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 58, 2, 512140);
	f_1b32_a2_b(L0, 11);
}

void f_1b18_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 60, 2, 512142);
	f_1b32_a2_b(L0, 11);
}

object f_1b25_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1b32_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1b25_a0_o();
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

object f_1b4e_a0_o(void)
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

void f_1b5f_a3_v(object a0, string a1, float a2)
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

int f_1b80_a0_i(void)
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

void f_1b91_a1_v(object a0)
{
	int L0;
	@GetVariable("mt_andrei", L0);
	if (!L0) {
		t5{a0};
		@SetVariable("mt_andrei", 1);
	}
	if (f_17d3_a1_b(2)) {
		t1{a0};
		return;
	}
	if (f_17cd_a1_b(2)) {
		t7{a0};
		return;
	}
	if (f_17cd_a1_b(3)) {
		t9{a0};
		return;
	}
	if (f_17cd_a1_b(6)) {
		t11{a0};
		return;
	}
	if (f_17cd_a1_b(10)) {
		t13{a0};
		return;
	}
	if (f_17cd_a1_b(11)) {
		t15{a0};
		return;
	}
	if (f_17cd_a1_b(12)) {
		t3{a0};
		return;
	}
	t17{a0};
}

