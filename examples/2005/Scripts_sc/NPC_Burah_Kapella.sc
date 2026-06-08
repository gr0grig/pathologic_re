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
		} while (!f_170b_a0_b());
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
		f_1765_a1_b(f_1812_a0_o());
		if (!f_1710_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18cb_a0_i());
		L0->SetNPCDescription(f_18c9_a0_i());
		L0->SetPhoto(f_18cd_a0_s());
		L0->SetPhoto2(f_18cf_a0_s());
		L0->SetPlayerName(f_1d1d_a0_i());
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
		f_1754_a1_v(a0);
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
			if (!f_1af1_a1_b(tv1) && !f_1b15_a1_b(tv1) && f_1b39_a1_b(tv1)) {
				f_10d_a1_v("Neutral");
				tv0->SetMessage(530291);
				tv0->ClearReplies();
				tv0->AddReply(531185, -1, 32490);
				tv0->AddReply(530292, -1, 31680);
				break;
			}
			if (f_1afd_a1_b(tv1) && f_1b39_a1_b(tv1)) {
				f_1952_a2_v(tv1, tv0);
				f_10d_a1_v("Neutral");
				tv0->SetMessage(530293);
				tv0->ClearReplies();
				tv0->AddReply(531188, 32494, 32493);
				tv0->AddReply(531193, 32496, 32498);
				break;
			}
			f_10d_a1_v("Neutral");
			tv0->SetMessage(530302);
			tv0->ClearReplies();
			if (f_1b09_a1_b(tv1) && f_1b39_a1_b(tv1)) {
				tv0->AddReply(530303, 31692, 31691);
			}
			if (f_1b21_a1_b(tv1) && f_1b2d_a1_b(tv1)) {
				tv0->AddReply(530333, 31721, 31720);
			}
			tv0->AddReply(530306, -1, 31694);
			break;
			return;
		}
		if (f_18d1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17ef_a1_v(tv2);
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

	void f_10d_a1_v(string a0)
	{
		if (!f_18d1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17f6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_180b_a0_v();
			if (a1 == 31688) {
				f_1958_a2_v(tv1, tv0);
				f_1a52_a2_v(tv1, tv0);
			}
			if (a1 == 31693) {
				f_1958_a2_v(tv1, tv0);
				f_1a52_a2_v(tv1, tv0);
			}
			if (a1 == 31722) {
				f_1977_a2_v(tv1, tv0);
			}
			if (a0 == 31679) {
				if (!f_1af1_a1_b(tv1) && !f_1b15_a1_b(tv1) && f_1b39_a1_b(tv1)) {
					f_10d_a1_v("Neutral");
					tv0->SetMessage(530291);
					tv0->ClearReplies();
					tv0->AddReply(531185, -1, 32490);
					tv0->AddReply(530292, -1, 31680);
					return;
				}
				if (f_1afd_a1_b(tv1) && f_1b39_a1_b(tv1)) {
					f_1952_a2_v(tv1, tv0);
					f_10d_a1_v("Neutral");
					tv0->SetMessage(530293);
					tv0->ClearReplies();
					tv0->AddReply(531188, 32494, 32493);
					tv0->AddReply(531193, 32496, 32498);
					return;
				}
				f_10d_a1_v("Neutral");
				tv0->SetMessage(530302);
				tv0->ClearReplies();
				if (f_1b09_a1_b(tv1) && f_1b39_a1_b(tv1)) {
					tv0->AddReply(530303, 31692, 31691);
				}
				if (f_1b21_a1_b(tv1) && f_1b2d_a1_b(tv1)) {
					tv0->AddReply(530333, 31721, 31720);
				}
				tv0->AddReply(530306, -1, 31694);
				return;
			}
			if (a0 == 31721) {
				f_10d_a1_v("Neutral");
				tv0->SetMessage(530334);
				tv0->ClearReplies();
				tv0->AddReply(531186, 32492, 32491);
				return;
			}
			if (a0 == 32492) {
				f_10d_a1_v("Neutral");
				tv0->SetMessage(531187);
				tv0->ClearReplies();
				tv0->AddReply(530335, -1, 31722);
				return;
			}
			if (a0 == 31692) {
				f_10d_a1_v("Neutral");
				tv0->SetMessage(530304);
				tv0->ClearReplies();
				tv0->AddReply(530305, -1, 31693);
				return;
			}
			if (a0 == 32494) {
				f_10d_a1_v("Neutral");
				tv0->SetMessage(531189);
				tv0->ClearReplies();
				tv0->AddReply(531190, 32496, 32495);
				tv0->AddReply(531192, 32500, 32497);
				return;
			}
			if (a0 == 32500) {
				f_10d_a1_v("Neutral");
				tv0->SetMessage(531194);
				tv0->ClearReplies();
				tv0->AddReply(531196, 32496, 32502);
				tv0->AddReply(531195, -1, 32501);
				return;
			}
			if (a0 == 32496) {
				f_10d_a1_v("Neutral");
				tv0->SetMessage(531191);
				tv0->ClearReplies();
				tv0->AddReply(530294, 31683, 31682);
				tv0->AddReply(531197, 31685, 32504);
				return;
			}
			if (a0 == 31683) {
				f_10d_a1_v("Neutral");
				tv0->SetMessage(530295);
				tv0->ClearReplies();
				tv0->AddReply(530296, 31685, 31684);
				return;
			}
			if (a0 == 31685) {
				f_10d_a1_v("Neutral");
				tv0->SetMessage(530297);
				tv0->ClearReplies();
				tv0->AddReply(530298, 31687, 31686);
				tv0->AddReply(531198, 32507, 32506);
				return;
			}
			if (a0 == 32507) {
				f_10d_a1_v("Neutral");
				tv0->SetMessage(531199);
				tv0->ClearReplies();
				tv0->AddReply(531200, 31687, 32508);
				tv0->AddReply(531201, -1, 32509);
				return;
			}
			if (a0 == 31687) {
				f_10d_a1_v("Neutral");
				tv0->SetMessage(530299);
				tv0->ClearReplies();
				tv0->AddReply(530300, -1, 31688);
				tv0->AddReply(530301, -1, 31689);
				return;
			}
			tv3 = true;
			if (f_18d1_a0_b()) {
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
		f_1765_a1_b(f_1812_a0_o());
		if (!f_1710_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18cb_a0_i());
		L0->SetNPCDescription(f_18c9_a0_i());
		L0->SetPhoto(f_18cd_a0_s());
		L0->SetPhoto2(f_18cf_a0_s());
		L0->SetPlayerName(f_1d1d_a0_i());
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
		f_1754_a1_v(a0);
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
			if (f_1b4f_a1_b(tv1)) {
				f_19dc_a2_v(tv1, tv0);
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531105);
				tv0->ClearReplies();
				tv0->AddReply(531107, 32678, 32425);
				tv0->AddReply(531353, 32678, 32685);
				break;
			}
			f_36e_a1_v("Neutral");
			tv0->SetMessage(531108);
			tv0->ClearReplies();
			if (f_1b5b_a1_b(tv1)) {
				tv0->AddReply(531109, 32429, 32427);
			}
			if (f_1b67_a1_b(tv1)) {
				tv0->AddReply(531129, 32448, 32447);
			}
			tv0->AddReply(531110, -1, 32428);
			break;
			return;
		}
		if (f_18d1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17ef_a1_v(tv2);
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

	void f_36e_a1_v(string a0)
	{
		if (!f_18d1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17f6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_180b_a0_v();
			if (a1 == 32424) {
				f_19e2_a2_v(tv1, tv0);
			}
			if (a1 == 32430) {
				f_19e2_a2_v(tv1, tv0);
			}
			if (a1 == 32449) {
				f_19f2_a2_v(tv1, tv0);
			}
			if (a0 == 32423) {
				if (f_1b4f_a1_b(tv1)) {
					f_19dc_a2_v(tv1, tv0);
					f_36e_a1_v("Neutral");
					tv0->SetMessage(531105);
					tv0->ClearReplies();
					tv0->AddReply(531107, 32678, 32425);
					tv0->AddReply(531353, 32678, 32685);
					return;
				}
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531108);
				tv0->ClearReplies();
				if (f_1b5b_a1_b(tv1)) {
					tv0->AddReply(531109, 32429, 32427);
				}
				if (f_1b67_a1_b(tv1)) {
					tv0->AddReply(531129, 32448, 32447);
				}
				tv0->AddReply(531110, -1, 32428);
				return;
			}
			if (a0 == 32448) {
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531130);
				tv0->ClearReplies();
				tv0->AddReply(531365, 32702, 32701);
				return;
			}
			if (a0 == 32702) {
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531366);
				tv0->ClearReplies();
				tv0->AddReply(531367, 32704, 32703);
				tv0->AddReply(531369, 32704, 32705);
				return;
			}
			if (a0 == 32704) {
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531368);
				tv0->ClearReplies();
				tv0->AddReply(531131, -1, 32449);
				return;
			}
			if (a0 == 32429) {
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531111);
				tv0->ClearReplies();
				tv0->AddReply(531112, -1, 32430);
				return;
			}
			if (a0 == 32678) {
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531346);
				tv0->ClearReplies();
				tv0->AddReply(531347, 32680, 32679);
				tv0->AddReply(531354, 32687, 32686);
				return;
			}
			if (a0 == 32687) {
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531355);
				tv0->ClearReplies();
				tv0->AddReply(531356, 32680, 32688);
				tv0->AddReply(531357, -1, 32689);
				return;
			}
			if (a0 == 32680) {
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531348);
				tv0->ClearReplies();
				tv0->AddReply(531349, 32682, 32681);
				tv0->AddReply(531358, 32692, 32691);
				return;
			}
			if (a0 == 32692) {
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531359);
				tv0->ClearReplies();
				tv0->AddReply(531360, 32682, 32693);
				return;
			}
			if (a0 == 32682) {
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531350);
				tv0->ClearReplies();
				tv0->AddReply(531351, 32684, 32683);
				tv0->AddReply(531362, 32697, 32696);
				return;
			}
			if (a0 == 32697) {
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531363);
				tv0->ClearReplies();
				tv0->AddReply(531364, 32684, 32698);
				return;
			}
			if (a0 == 32684) {
				f_36e_a1_v("Neutral");
				tv0->SetMessage(531352);
				tv0->ClearReplies();
				tv0->AddReply(531106, -1, 32424);
				tv0->AddReply(531361, -1, 32695);
				return;
			}
			tv3 = true;
			if (f_18d1_a0_b()) {
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
		f_1765_a1_b(f_1812_a0_o());
		if (!f_1710_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18cb_a0_i());
		L0->SetNPCDescription(f_18c9_a0_i());
		L0->SetPhoto(f_18cd_a0_s());
		L0->SetPhoto2(f_18cf_a0_s());
		L0->SetPlayerName(f_1d1d_a0_i());
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
		f_1754_a1_v(a0);
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
			f_567_a1_v("Neutral");
			tv0->SetMessage(535258);
			tv0->ClearReplies();
			if (f_1b97_a1_b(tv1)) {
				tv0->AddReply(535259, 36983, 36934);
			}
			tv0->AddReply(535304, -1, 36982);
			break;
			return;
		}
		if (f_18d1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17ef_a1_v(tv2);
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

	void f_567_a1_v(string a0)
	{
		if (!f_18d1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17f6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_180b_a0_v();
			if (a1 == 36934) {
				f_1a2c_a2_v(tv1, tv0);
			}
			if (a0 == 36933) {
				f_567_a1_v("Neutral");
				tv0->SetMessage(535258);
				tv0->ClearReplies();
				if (f_1b97_a1_b(tv1)) {
					tv0->AddReply(535259, 36983, 36934);
				}
				tv0->AddReply(535304, -1, 36982);
				return;
			}
			if (a0 == 36983) {
				f_567_a1_v("Neutral");
				tv0->SetMessage(535305);
				tv0->ClearReplies();
				tv0->AddReply(535306, 36985, 36984);
				tv0->AddReply(535318, 36998, 36997);
				return;
			}
			if (a0 == 36998) {
				f_567_a1_v("Neutral");
				tv0->SetMessage(535319);
				tv0->ClearReplies();
				tv0->AddReply(535320, 36990, 36999);
				tv0->AddReply(535321, 36985, 37001);
				return;
			}
			if (a0 == 36985) {
				f_567_a1_v("Neutral");
				tv0->SetMessage(535307);
				tv0->ClearReplies();
				tv0->AddReply(535308, 36987, 36986);
				return;
			}
			if (a0 == 36987) {
				f_567_a1_v("Neutral");
				tv0->SetMessage(535309);
				tv0->ClearReplies();
				tv0->AddReply(535311, 36990, 36989);
				tv0->AddReply(535313, 36990, 36991);
				return;
			}
			if (a0 == 36990) {
				f_567_a1_v("Neutral");
				tv0->SetMessage(535312);
				tv0->ClearReplies();
				tv0->AddReply(535310, 36994, 36988);
				tv0->AddReply(535314, -1, 36993);
				return;
			}
			if (a0 == 36994) {
				f_567_a1_v("Neutral");
				tv0->SetMessage(535315);
				tv0->ClearReplies();
				tv0->AddReply(535316, -1, 36995);
				tv0->AddReply(535317, -1, 36996);
				return;
			}
			tv3 = true;
			if (f_18d1_a0_b()) {
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
		f_1765_a1_b(f_1812_a0_o());
		if (!f_1710_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18cb_a0_i());
		L0->SetNPCDescription(f_18c9_a0_i());
		L0->SetPhoto(f_18cd_a0_s());
		L0->SetPhoto2(f_18cf_a0_s());
		L0->SetPlayerName(f_1d1d_a0_i());
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
		f_1754_a1_v(a0);
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
			f_6c9_a1_v("Neutral");
			tv0->SetMessage(518275);
			tv0->ClearReplies();
			if (f_1c0f_a1_b(tv1)) {
				tv0->AddReply(519482, 20655, 20654);
			}
			tv0->AddReply(518276, -1, 19385);
			break;
			return;
		}
		if (f_18d1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17ef_a1_v(tv2);
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

	void f_6c9_a1_v(string a0)
	{
		if (!f_18d1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17f6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_180b_a0_v();
			if (a1 == 20654) {
				f_1914_a2_v(tv1, tv0);
			}
			if (a0 == 19384) {
				f_6c9_a1_v("Neutral");
				tv0->SetMessage(518275);
				tv0->ClearReplies();
				if (f_1c0f_a1_b(tv1)) {
					tv0->AddReply(519482, 20655, 20654);
				}
				tv0->AddReply(518276, -1, 19385);
				return;
			}
			if (a0 == 20655) {
				f_6c9_a1_v("Neutral");
				tv0->SetMessage(519483);
				tv0->ClearReplies();
				tv0->AddReply(519484, 20662, 20656);
				tv0->AddReply(519485, 20658, 20657);
				return;
			}
			if (a0 == 20658) {
				f_6c9_a1_v("Neutral");
				tv0->SetMessage(519486);
				tv0->ClearReplies();
				tv0->AddReply(519487, 20660, 20659);
				tv0->AddReply(527738, 29091, 29090);
				return;
			}
			if (a0 == 29091) {
				f_6c9_a1_v("Neutral");
				tv0->SetMessage(527739);
				tv0->ClearReplies();
				tv0->AddReply(527740, 20660, 29092);
				return;
			}
			if (a0 == 20660) {
				f_6c9_a1_v("Neutral");
				tv0->SetMessage(519488);
				tv0->ClearReplies();
				tv0->AddReply(519489, 20662, 20661);
				return;
			}
			if (a0 == 20662) {
				f_6c9_a1_v("Neutral");
				tv0->SetMessage(519490);
				tv0->ClearReplies();
				tv0->AddReply(527741, 29096, 29094);
				tv0->AddReply(527742, 29096, 29095);
				return;
			}
			if (a0 == 29096) {
				f_6c9_a1_v("Neutral");
				tv0->SetMessage(527743);
				tv0->ClearReplies();
				tv0->AddReply(527744, 29098, 29097);
				return;
			}
			if (a0 == 29098) {
				f_6c9_a1_v("Neutral");
				tv0->SetMessage(527745);
				tv0->ClearReplies();
				tv0->AddReply(519491, 20665, 20664);
				return;
			}
			if (a0 == 20665) {
				f_6c9_a1_v("Neutral");
				tv0->SetMessage(519492);
				tv0->ClearReplies();
				tv0->AddReply(519493, -1, 20666);
				return;
			}
			tv3 = true;
			if (f_18d1_a0_b()) {
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
		f_1765_a1_b(f_1812_a0_o());
		if (!f_1710_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18cb_a0_i());
		L0->SetNPCDescription(f_18c9_a0_i());
		L0->SetPhoto(f_18cd_a0_s());
		L0->SetPhoto2(f_18cf_a0_s());
		L0->SetPlayerName(f_1d1d_a0_i());
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
		f_1754_a1_v(a0);
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
			f_19ab_a2_v(tv1, tv0);
			f_885_a1_v("Neutral");
			tv0->SetMessage(518365);
			tv0->ClearReplies();
			if (f_1baf_a1_b(tv1)) {
				tv0->AddReply(518366, 19481, 19479);
			}
			if (!f_1baf_a1_b(tv1) && f_1ba3_a1_b(tv1)) {
				tv0->AddReply(518371, 19485, 19484);
			}
			if (f_1bbb_a1_b(tv1) && f_1bc7_a1_b(tv1)) {
				tv0->AddReply(518374, 19488, 19487);
			}
			if (f_1bbb_a1_b(tv1) && !f_1bc7_a1_b(tv1)) {
				tv0->AddReply(518377, 19491, 19490);
			}
			tv0->AddReply(518367, -1, 19480);
			break;
			return;
		}
		if (f_18d1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17ef_a1_v(tv2);
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

	void f_885_a1_v(string a0)
	{
		if (!f_18d1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17f6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_180b_a0_v();
			if (a1 == 19479) {
				f_1a99_a2_v(tv1, tv0);
			}
			if (a1 == 19482) {
				f_1a7a_a2_v(tv1, tv0);
				f_18d3_a2_v(tv1, tv0);
			}
			if (a1 == 19486) {
				f_1a7a_a2_v(tv1, tv0);
				f_18d3_a2_v(tv1, tv0);
			}
			if (a1 == 19489) {
				f_1a9f_a2_v(tv1, tv0);
				f_1a62_a2_v(tv1, tv0);
				f_1981_a2_v(tv1, tv0);
			}
			if (a1 == 20330) {
				f_1a9f_a2_v(tv1, tv0);
			}
			if (a1 == 19492) {
				f_1a9f_a2_v(tv1, tv0);
				f_1948_a2_v(tv1, tv0);
				f_1981_a2_v(tv1, tv0);
			}
			if (a1 == 20325) {
				f_1a9f_a2_v(tv1, tv0);
			}
			if (a0 == 19478) {
				f_19ab_a2_v(tv1, tv0);
				f_885_a1_v("Neutral");
				tv0->SetMessage(518365);
				tv0->ClearReplies();
				if (f_1baf_a1_b(tv1)) {
					tv0->AddReply(518366, 19481, 19479);
				}
				if (!f_1baf_a1_b(tv1) && f_1ba3_a1_b(tv1)) {
					tv0->AddReply(518371, 19485, 19484);
				}
				if (f_1bbb_a1_b(tv1) && f_1bc7_a1_b(tv1)) {
					tv0->AddReply(518374, 19488, 19487);
				}
				if (f_1bbb_a1_b(tv1) && !f_1bc7_a1_b(tv1)) {
					tv0->AddReply(518377, 19491, 19490);
				}
				tv0->AddReply(518367, -1, 19480);
				return;
			}
			if (a0 == 19491) {
				f_885_a1_v("Neutral");
				tv0->SetMessage(518378);
				tv0->ClearReplies();
				tv0->AddReply(519177, 20319, 20318);
				return;
			}
			if (a0 == 20319) {
				f_885_a1_v("Neutral");
				tv0->SetMessage(519178);
				tv0->ClearReplies();
				tv0->AddReply(519179, 20321, 20320);
				return;
			}
			if (a0 == 20321) {
				f_885_a1_v("Neutral");
				tv0->SetMessage(519180);
				tv0->ClearReplies();
				tv0->AddReply(519181, 20323, 20322);
				return;
			}
			if (a0 == 20323) {
				f_885_a1_v("Neutral");
				tv0->SetMessage(519182);
				tv0->ClearReplies();
				tv0->AddReply(518379, -1, 19492);
				tv0->AddReply(519184, -1, 20325);
				return;
			}
			if (a0 == 19488) {
				f_885_a1_v("Neutral");
				tv0->SetMessage(518375);
				tv0->ClearReplies();
				tv0->AddReply(519185, 20327, 20326);
				return;
			}
			if (a0 == 20327) {
				f_885_a1_v("Neutral");
				tv0->SetMessage(519186);
				tv0->ClearReplies();
				tv0->AddReply(519187, 20329, 20328);
				return;
			}
			if (a0 == 20329) {
				f_885_a1_v("Neutral");
				tv0->SetMessage(519188);
				tv0->ClearReplies();
				tv0->AddReply(518376, -1, 19489);
				tv0->AddReply(519189, -1, 20330);
				return;
			}
			if (a0 == 19485) {
				f_885_a1_v("Neutral");
				tv0->SetMessage(518372);
				tv0->ClearReplies();
				tv0->AddReply(518373, -1, 19486);
				return;
			}
			if (a0 == 19481) {
				f_885_a1_v("Neutral");
				tv0->SetMessage(518368);
				tv0->ClearReplies();
				tv0->AddReply(519191, 20333, 20332);
				tv0->AddReply(519193, 20335, 20334);
				return;
			}
			if (a0 == 20335) {
				f_885_a1_v("Neutral");
				tv0->SetMessage(519194);
				tv0->ClearReplies();
				tv0->AddReply(519195, 20333, 20336);
				tv0->AddReply(519196, -1, 20338);
				return;
			}
			if (a0 == 20333) {
				f_885_a1_v("Neutral");
				tv0->SetMessage(519192);
				tv0->ClearReplies();
				tv0->AddReply(518369, -1, 19482);
				tv0->AddReply(518370, -1, 19483);
				return;
			}
			tv3 = true;
			if (f_18d1_a0_b()) {
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
		f_1765_a1_b(f_1812_a0_o());
		if (!f_1710_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18cb_a0_i());
		L0->SetNPCDescription(f_18c9_a0_i());
		L0->SetPhoto(f_18cd_a0_s());
		L0->SetPhoto2(f_18cf_a0_s());
		L0->SetPlayerName(f_1d1d_a0_i());
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
		f_1754_a1_v(a0);
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
			if (f_1bd3_a1_b(tv1)) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519812);
				tv0->ClearReplies();
				tv0->AddReply(519813, 20974, 20973);
				tv0->AddReply(527076, 28374, 28373);
				tv0->AddReply(519816, -1, 20976);
				break;
			}
			if (f_1bdf_a1_b(tv1)) {
				f_18e3_a2_v(tv1, tv0);
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519851);
				tv0->ClearReplies();
				tv0->AddReply(527084, 28383, 28382);
				break;
			}
			f_b1a_a1_v("Neutral");
			tv0->SetMessage(519817);
			tv0->ClearReplies();
			if (f_1beb_a1_b(tv1)) {
				tv0->AddReply(519818, 20979, 20978);
			}
			if (f_1bf7_a1_b(tv1)) {
				tv0->AddReply(519830, 20991, 20990);
			}
			if (f_1c03_a1_b(tv1)) {
				tv0->AddReply(520449, 21663, 21662);
			}
			tv0->AddReply(519850, -1, 21011);
			break;
			return;
		}
		if (f_18d1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17ef_a1_v(tv2);
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

	void f_b1a_a1_v(string a0)
	{
		if (!f_18d1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17f6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_180b_a0_v();
			if (a1 == 21023) {
				f_1a6c_a2_v(tv1, tv0);
				f_1a75_a2_v(tv1, tv0);
				f_1942_a2_v(tv1, tv0);
			}
			if (a1 == 21024) {
				f_1a3e_a2_v(tv1, tv0);
			}
			if (a1 == 21026) {
				f_1a6c_a2_v(tv1, tv0);
				f_1a75_a2_v(tv1, tv0);
				f_1942_a2_v(tv1, tv0);
			}
			if (a1 == 21029) {
				f_1a6c_a2_v(tv1, tv0);
				f_1a75_a2_v(tv1, tv0);
				f_1942_a2_v(tv1, tv0);
			}
			if (a1 == 21030) {
				f_1a3e_a2_v(tv1, tv0);
			}
			if (a1 == 21032) {
				f_1a6c_a2_v(tv1, tv0);
				f_1a75_a2_v(tv1, tv0);
				f_1942_a2_v(tv1, tv0);
			}
			if (a1 == 20978) {
				f_18e9_a2_v(tv1, tv0);
			}
			if (a1 == 20984) {
				f_1a45_a2_v(tv1, tv0);
			}
			if (a1 == 28372) {
				f_1a45_a2_v(tv1, tv0);
			}
			if (a1 == 20990) {
				f_18ef_a2_v(tv1, tv0);
				f_18f5_a2_v(tv1, tv0);
			}
			if (a1 == 21002) {
				f_1a4c_a2_v(tv1, tv0);
				f_1a32_a2_v(tv1, tv0);
			}
			if (a1 == 21003) {
				f_1a4c_a2_v(tv1, tv0);
				f_1a32_a2_v(tv1, tv0);
			}
			if (a1 == 21004) {
				f_1a4c_a2_v(tv1, tv0);
				f_1a32_a2_v(tv1, tv0);
			}
			if (a1 == 21662) {
				f_190e_a2_v(tv1, tv0);
			}
			if (a1 == 21668) {
				f_19b1_a2_v(tv1, tv0);
				f_19cc_a2_v(tv1, tv0);
			}
			if (a1 == 21672) {
				f_19b1_a2_v(tv1, tv0);
				f_19cc_a2_v(tv1, tv0);
			}
			if (a0 == 20972) {
				if (f_1bd3_a1_b(tv1)) {
					f_b1a_a1_v("Neutral");
					tv0->SetMessage(519812);
					tv0->ClearReplies();
					tv0->AddReply(519813, 20974, 20973);
					tv0->AddReply(527076, 28374, 28373);
					tv0->AddReply(519816, -1, 20976);
					return;
				}
				if (f_1bdf_a1_b(tv1)) {
					f_18e3_a2_v(tv1, tv0);
					f_b1a_a1_v("Neutral");
					tv0->SetMessage(519851);
					tv0->ClearReplies();
					tv0->AddReply(527084, 28383, 28382);
					return;
				}
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519817);
				tv0->ClearReplies();
				if (f_1beb_a1_b(tv1)) {
					tv0->AddReply(519818, 20979, 20978);
				}
				if (f_1bf7_a1_b(tv1)) {
					tv0->AddReply(519830, 20991, 20990);
				}
				if (f_1c03_a1_b(tv1)) {
					tv0->AddReply(520449, 21663, 21662);
				}
				tv0->AddReply(519850, -1, 21011);
				return;
			}
			if (a0 == 21663) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(520450);
				tv0->ClearReplies();
				tv0->AddReply(520451, 21665, 21664);
				return;
			}
			if (a0 == 21665) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(520452);
				tv0->ClearReplies();
				tv0->AddReply(520453, 21667, 21666);
				tv0->AddReply(520458, -1, 21672);
				return;
			}
			if (a0 == 21667) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(520454);
				tv0->ClearReplies();
				tv0->AddReply(520455, -1, 21668);
				return;
			}
			if (a0 == 20991) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519831);
				tv0->ClearReplies();
				tv0->AddReply(519832, 20993, 20992);
				tv0->AddReply(519846, 21007, 21006);
				return;
			}
			if (a0 == 21007) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519847);
				tv0->ClearReplies();
				tv0->AddReply(519848, 20999, 21008);
				tv0->AddReply(519849, 20999, 21010);
				return;
			}
			if (a0 == 20993) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519833);
				tv0->ClearReplies();
				tv0->AddReply(519834, 20995, 20994);
				return;
			}
			if (a0 == 20995) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519835);
				tv0->ClearReplies();
				tv0->AddReply(519836, 20997, 20996);
				return;
			}
			if (a0 == 20997) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519837);
				tv0->ClearReplies();
				tv0->AddReply(519838, 20999, 20998);
				tv0->AddReply(519845, 20999, 21005);
				return;
			}
			if (a0 == 20999) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519839);
				tv0->ClearReplies();
				tv0->AddReply(519840, 21001, 21000);
				tv0->AddReply(519844, -1, 21004);
				return;
			}
			if (a0 == 21001) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519841);
				tv0->ClearReplies();
				tv0->AddReply(519842, -1, 21002);
				tv0->AddReply(519843, -1, 21003);
				return;
			}
			if (a0 == 20979) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519819);
				tv0->ClearReplies();
				tv0->AddReply(519820, 20981, 20980);
				return;
			}
			if (a0 == 20981) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519821);
				tv0->ClearReplies();
				tv0->AddReply(519822, 20983, 20982);
				return;
			}
			if (a0 == 20983) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519823);
				tv0->ClearReplies();
				tv0->AddReply(519824, 20985, 20984);
				tv0->AddReply(519829, -1, 20989);
				return;
			}
			if (a0 == 20985) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519825);
				tv0->ClearReplies();
				tv0->AddReply(519826, 20987, 20986);
				return;
			}
			if (a0 == 20987) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519827);
				tv0->ClearReplies();
				tv0->AddReply(519828, -1, 20988);
				tv0->AddReply(527075, -1, 28372);
				return;
			}
			if (a0 == 28383) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(527085);
				tv0->ClearReplies();
				tv0->AddReply(527086, 28385, 28384);
				return;
			}
			if (a0 == 28385) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(527087);
				tv0->ClearReplies();
				tv0->AddReply(527088, 21014, 28386);
				return;
			}
			if (a0 == 21014) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519853);
				tv0->ClearReplies();
				tv0->AddReply(519854, 21016, 21015);
				tv0->AddReply(519871, 21016, 21033);
				return;
			}
			if (a0 == 21016) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519855);
				tv0->ClearReplies();
				tv0->AddReply(519856, 21018, 21017);
				return;
			}
			if (a0 == 21018) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519857);
				tv0->ClearReplies();
				tv0->AddReply(519858, 21020, 21019);
				tv0->AddReply(527143, 28443, 28442);
				return;
			}
			if (a0 == 28443) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(527144);
				tv0->ClearReplies();
				tv0->AddReply(527145, 21020, 28444);
				return;
			}
			if (a0 == 21020) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519859);
				tv0->ClearReplies();
				tv0->AddReply(519860, 21022, 21021);
				tv0->AddReply(519866, 21028, 21027);
				tv0->AddReply(519870, -1, 21032);
				return;
			}
			if (a0 == 21028) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519867);
				tv0->ClearReplies();
				tv0->AddReply(519868, -1, 21029);
				tv0->AddReply(519869, 21025, 21030);
				return;
			}
			if (a0 == 21022) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519861);
				tv0->ClearReplies();
				tv0->AddReply(519862, -1, 21023);
				tv0->AddReply(519863, 21025, 21024);
				return;
			}
			if (a0 == 21025) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519864);
				tv0->ClearReplies();
				tv0->AddReply(519865, -1, 21026);
				return;
			}
			if (a0 == 28374) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(527077);
				tv0->ClearReplies();
				tv0->AddReply(527078, -1, 28375);
				return;
			}
			if (a0 == 20974) {
				f_b1a_a1_v("Neutral");
				tv0->SetMessage(519814);
				tv0->ClearReplies();
				tv0->AddReply(519815, -1, 20975);
				return;
			}
			tv3 = true;
			if (f_18d1_a0_b()) {
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
		f_1765_a1_b(f_1812_a0_o());
		if (!f_1710_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18cb_a0_i());
		L0->SetNPCDescription(f_18c9_a0_i());
		L0->SetPhoto(f_18cd_a0_s());
		L0->SetPhoto2(f_18cf_a0_s());
		L0->SetPlayerName(f_1d1d_a0_i());
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
		f_1754_a1_v(a0);
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
			f_f27_a1_v("Neutral");
			tv0->SetMessage(527023);
			tv0->ClearReplies();
			tv0->AddReply(527024, 21951, 28310);
			tv0->AddReply(527025, 21951, 28311);
			break;
			return;
		}
		if (f_18d1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17ef_a1_v(tv2);
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

	void f_f27_a1_v(string a0)
	{
		if (!f_18d1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17f6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_180b_a0_v();
			if (a0 == 28309) {
				f_f27_a1_v("Neutral");
				tv0->SetMessage(527023);
				tv0->ClearReplies();
				tv0->AddReply(527024, 21951, 28310);
				tv0->AddReply(527025, 21951, 28311);
				return;
			}
			if (a0 == 21951) {
				f_f27_a1_v("Neutral");
				tv0->SetMessage(520740);
				tv0->ClearReplies();
				tv0->AddReply(520741, 21953, 21952);
				tv0->AddReply(520748, 21955, 21960);
				return;
			}
			if (a0 == 21953) {
				f_f27_a1_v("Neutral");
				tv0->SetMessage(520742);
				tv0->ClearReplies();
				tv0->AddReply(520743, 21955, 21954);
				tv0->AddReply(520747, 21955, 21958);
				return;
			}
			if (a0 == 21955) {
				f_f27_a1_v("Neutral");
				tv0->SetMessage(520744);
				tv0->ClearReplies();
				tv0->AddReply(520745, -1, 21956);
				tv0->AddReply(520746, -1, 21957);
				return;
			}
			tv3 = true;
			if (f_18d1_a0_b()) {
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
		f_1765_a1_b(f_1812_a0_o());
		if (!f_1710_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18cb_a0_i());
		L0->SetNPCDescription(f_18c9_a0_i());
		L0->SetPhoto(f_18cd_a0_s());
		L0->SetPhoto2(f_18cf_a0_s());
		L0->SetPlayerName(f_1d1d_a0_i());
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
		f_1754_a1_v(a0);
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
			if (f_1ab5_a1_b(tv1)) {
				f_191a_a2_v(tv1, tv0);
				f_1063_a1_v("Neutral");
				tv0->SetMessage(521388);
				tv0->ClearReplies();
				tv0->AddReply(521389, 25279, 22567);
				tv0->AddReply(523995, 25286, 25285);
				break;
			}
			f_1063_a1_v("Neutral");
			tv0->SetMessage(521390);
			tv0->ClearReplies();
			if (f_1aa9_a1_b(tv1) && f_1ac1_a1_b(tv1)) {
				tv0->AddReply(521391, 22570, 22569);
			}
			tv0->AddReply(521394, -1, 22572);
			break;
			return;
		}
		if (f_18d1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17ef_a1_v(tv2);
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

	void f_1063_a1_v(string a0)
	{
		if (!f_18d1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17f6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_180b_a0_v();
			if (a1 == 22569) {
				f_1920_a2_v(tv1, tv0);
			}
			if (a1 == 22571) {
				f_1926_a2_v(tv1, tv0);
				f_1a4c_a2_v(tv1, tv0);
			}
			if (a0 == 22566) {
				if (f_1ab5_a1_b(tv1)) {
					f_191a_a2_v(tv1, tv0);
					f_1063_a1_v("Neutral");
					tv0->SetMessage(521388);
					tv0->ClearReplies();
					tv0->AddReply(521389, 25279, 22567);
					tv0->AddReply(523995, 25286, 25285);
					return;
				}
				f_1063_a1_v("Neutral");
				tv0->SetMessage(521390);
				tv0->ClearReplies();
				if (f_1aa9_a1_b(tv1) && f_1ac1_a1_b(tv1)) {
					tv0->AddReply(521391, 22570, 22569);
				}
				tv0->AddReply(521394, -1, 22572);
				return;
			}
			if (a0 == 22570) {
				f_1063_a1_v("Neutral");
				tv0->SetMessage(521392);
				tv0->ClearReplies();
				tv0->AddReply(521393, -1, 22571);
				return;
			}
			if (a0 == 25286) {
				f_1063_a1_v("Neutral");
				tv0->SetMessage(523996);
				tv0->ClearReplies();
				tv0->AddReply(523997, 25288, 25287);
				return;
			}
			if (a0 == 25288) {
				f_1063_a1_v("Neutral");
				tv0->SetMessage(523998);
				tv0->ClearReplies();
				tv0->AddReply(523999, 25279, 25289);
				tv0->AddReply(524000, 25279, 25290);
				return;
			}
			if (a0 == 25279) {
				f_1063_a1_v("Neutral");
				tv0->SetMessage(523989);
				tv0->ClearReplies();
				tv0->AddReply(523990, 25281, 25280);
				return;
			}
			if (a0 == 25281) {
				f_1063_a1_v("Neutral");
				tv0->SetMessage(523991);
				tv0->ClearReplies();
				tv0->AddReply(523992, 25283, 25282);
				tv0->AddReply(524001, 25294, 25293);
				return;
			}
			if (a0 == 25294) {
				f_1063_a1_v("Neutral");
				tv0->SetMessage(524002);
				tv0->ClearReplies();
				tv0->AddReply(524003, 25283, 25295);
				tv0->AddReply(524004, 25297, 25296);
				return;
			}
			if (a0 == 25297) {
				f_1063_a1_v("Neutral");
				tv0->SetMessage(524005);
				tv0->ClearReplies();
				tv0->AddReply(530821, 32132, 32131);
				return;
			}
			if (a0 == 32132) {
				f_1063_a1_v("Neutral");
				tv0->SetMessage(530822);
				tv0->ClearReplies();
				tv0->AddReply(530823, 25283, 32133);
				return;
			}
			if (a0 == 25283) {
				f_1063_a1_v("Neutral");
				tv0->SetMessage(523993);
				tv0->ClearReplies();
				tv0->AddReply(523994, 25299, 25284);
				return;
			}
			if (a0 == 25299) {
				f_1063_a1_v("Neutral");
				tv0->SetMessage(524006);
				tv0->ClearReplies();
				tv0->AddReply(524007, 25301, 25300);
				return;
			}
			if (a0 == 25301) {
				f_1063_a1_v("Neutral");
				tv0->SetMessage(524008);
				tv0->ClearReplies();
				tv0->AddReply(524009, -1, 25302);
				tv0->AddReply(524010, -1, 25303);
				tv0->AddReply(524011, -1, 25304);
				return;
			}
			tv3 = true;
			if (f_18d1_a0_b()) {
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
		f_1765_a1_b(f_1812_a0_o());
		if (!f_1710_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18cb_a0_i());
		L0->SetNPCDescription(f_18c9_a0_i());
		L0->SetPhoto(f_18cd_a0_s());
		L0->SetPhoto2(f_18cf_a0_s());
		L0->SetPlayerName(f_1d1d_a0_i());
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
		f_1754_a1_v(a0);
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
			if (f_1b73_a1_b(tv1)) {
				f_19fc_a2_v(tv1, tv0);
				f_1a26_a2_v(tv1, tv0);
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(531154);
				tv0->ClearReplies();
				tv0->AddReply(531276, 32591, 32590);
				break;
			}
			f_12a7_a1_v("Neutral");
			tv0->SetMessage(521924);
			tv0->ClearReplies();
			if (f_1acd_a1_b(tv1) && !f_1ad9_a1_b(tv1)) {
				tv0->AddReply(521925, 23656, 23099);
			}
			if (f_1b8b_a1_b(tv1)) {
				tv0->AddReply(522478, 23652, 23651);
			}
			if (f_1b43_a1_b(tv1) && f_1ae5_a1_b(tv1)) {
				tv0->AddReply(530448, 31815, 31814);
			}
			if (f_1b7f_a1_b(tv1)) {
				tv0->AddReply(531159, 32468, 32467);
			}
			tv0->AddReply(521926, -1, 23100);
			tv0->AddReply(531282, -1, 32597);
			break;
			return;
		}
		if (f_18d1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17ef_a1_v(tv2);
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

	void f_12a7_a1_v(string a0)
	{
		if (!f_18d1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17f6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_180b_a0_v();
			if (a1 == 32465) {
				f_1a02_a2_v(tv1, tv0);
				f_1a4c_a2_v(tv1, tv0);
			}
			if (a1 == 23102) {
				f_1936_a2_v(tv1, tv0);
			}
			if (a1 == 32866) {
				f_1936_a2_v(tv1, tv0);
			}
			if (a1 == 23651) {
				f_1a20_a2_v(tv1, tv0);
			}
			if (a1 == 31814) {
				f_193c_a2_v(tv1, tv0);
			}
			if (a1 == 31818) {
				f_1987_a2_v(tv1, tv0);
				f_199b_a2_v(tv1, tv0);
			}
			if (a1 == 32469) {
				f_1a02_a2_v(tv1, tv0);
				f_1a4c_a2_v(tv1, tv0);
			}
			if (a0 == 32462) {
				if (f_1b73_a1_b(tv1)) {
					f_19fc_a2_v(tv1, tv0);
					f_1a26_a2_v(tv1, tv0);
					f_12a7_a1_v("Neutral");
					tv0->SetMessage(531154);
					tv0->ClearReplies();
					tv0->AddReply(531276, 32591, 32590);
					return;
				}
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(521924);
				tv0->ClearReplies();
				if (f_1acd_a1_b(tv1) && !f_1ad9_a1_b(tv1)) {
					tv0->AddReply(521925, 23656, 23099);
				}
				if (f_1b8b_a1_b(tv1)) {
					tv0->AddReply(522478, 23652, 23651);
				}
				if (f_1b43_a1_b(tv1) && f_1ae5_a1_b(tv1)) {
					tv0->AddReply(530448, 31815, 31814);
				}
				if (f_1b7f_a1_b(tv1)) {
					tv0->AddReply(531159, 32468, 32467);
				}
				tv0->AddReply(521926, -1, 23100);
				tv0->AddReply(531282, -1, 32597);
				return;
			}
			if (a0 == 32468) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(531160);
				tv0->ClearReplies();
				tv0->AddReply(531161, -1, 32469);
				return;
			}
			if (a0 == 31815) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(530449);
				tv0->ClearReplies();
				tv0->AddReply(530450, 31817, 31816);
				tv0->AddReply(531283, 32601, 32598);
				return;
			}
			if (a0 == 32601) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(531286);
				tv0->ClearReplies();
				tv0->AddReply(531289, 32603, 32604);
				return;
			}
			if (a0 == 31817) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(530451);
				tv0->ClearReplies();
				tv0->AddReply(531287, 32603, 32602);
				tv0->AddReply(531284, 32600, 32599);
				return;
			}
			if (a0 == 32600) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(531285);
				tv0->ClearReplies();
				tv0->AddReply(531290, 32603, 32606);
				return;
			}
			if (a0 == 32603) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(531288);
				tv0->ClearReplies();
				tv0->AddReply(530452, -1, 31818);
				return;
			}
			if (a0 == 23652) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(522479);
				tv0->ClearReplies();
				tv0->AddReply(522480, 23654, 23653);
				return;
			}
			if (a0 == 23654) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(522481);
				tv0->ClearReplies();
				tv0->AddReply(522482, -1, 23655);
				return;
			}
			if (a0 == 23656) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(522483);
				tv0->ClearReplies();
				tv0->AddReply(522484, 23658, 23657);
				tv0->AddReply(522492, 23666, 23665);
				return;
			}
			if (a0 == 23666) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(522493);
				tv0->ClearReplies();
				tv0->AddReply(522494, 23658, 23667);
				return;
			}
			if (a0 == 23658) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(522485);
				tv0->ClearReplies();
				tv0->AddReply(522486, 23660, 23659);
				tv0->AddReply(522495, 23670, 23669);
				return;
			}
			if (a0 == 23670) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(522496);
				tv0->ClearReplies();
				tv0->AddReply(522497, 23662, 23671);
				return;
			}
			if (a0 == 23660) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(522487);
				tv0->ClearReplies();
				tv0->AddReply(522488, 23662, 23661);
				return;
			}
			if (a0 == 23662) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(522489);
				tv0->ClearReplies();
				tv0->AddReply(522490, 23664, 23663);
				tv0->AddReply(531512, -1, 32866);
				return;
			}
			if (a0 == 23664) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(522491);
				tv0->ClearReplies();
				tv0->AddReply(521928, -1, 23102);
				return;
			}
			if (a0 == 32591) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(531277);
				tv0->ClearReplies();
				tv0->AddReply(531278, 32593, 32592);
				tv0->AddReply(531281, 32464, 32595);
				return;
			}
			if (a0 == 32593) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(531279);
				tv0->ClearReplies();
				tv0->AddReply(531155, 32464, 32463);
				tv0->AddReply(531280, -1, 32594);
				return;
			}
			if (a0 == 32464) {
				f_12a7_a1_v("Neutral");
				tv0->SetMessage(531156);
				tv0->ClearReplies();
				tv0->AddReply(531157, -1, 32465);
				tv0->AddReply(531158, -1, 32466);
				return;
			}
			tv3 = true;
			if (f_18d1_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t19
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		f_1765_a1_b(f_1812_a0_o());
		if (!f_1710_a2_b(a0, 70.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_18cb_a0_i());
		L0->SetNPCDescription(f_18c9_a0_i());
		L0->SetPhoto(f_18cd_a0_s());
		L0->SetPhoto2(f_18cf_a0_s());
		L0->SetPlayerName(f_1d1d_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t20{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_1754_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t20
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
			f_157e_a1_v("Neutral");
			tv0->SetMessage(540551);
			tv0->ClearReplies();
			tv0->AddReply(540552, -1, 42561);
			tv0->AddReply(540795, -1, 42844);
			break;
			return;
		}
		if (f_18d1_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_17ef_a1_v(tv2);
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

	void f_157e_a1_v(string a0)
	{
		if (!f_18d1_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_17f6_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_180b_a0_v();
			if (a0 == 42560) {
				f_157e_a1_v("Neutral");
				tv0->SetMessage(540551);
				tv0->ClearReplies();
				tv0->AddReply(540552, -1, 42561);
				tv0->AddReply(540795, -1, 42844);
				return;
			}
			tv3 = true;
			if (f_18d1_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t21
{
	var Vector tv0;

	void init(void)
	{
		g1 = false;
		f_15c5_a0_v();
	}

	void f_15c5_a0_v(void)
	{
		if (!f_170b_a0_b()) {
			t0{};
		}
		OnLoad();
		@GetDirection(tv0);
		for (; ; ) {
			f_167b_a0_v();
		}
	}

	bool f_15d9_a0_b(void)
	{
		object L0;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		return f_1702_a1_b(L0);
	}

	void f_15e8_a0_v(void)
	{
		@RotateAsync(tv0.x, tv0.z);
	}

	bool f_15ed_a0_b(void)
	{
		object L0;
		bool L1;
		@FindActor(L0, "player");
		if (!L0) {
			return false;
		}
		if (f_16c7_a1_f(L0) > 90000.0) {
			return false;
		}
		@CanSee(L1, L0);
		return L1;
	}

	void f_1603_a0_v(void)
	{
		float L0;
		@rand(L0, 8, 16);
		@SetTimer(10, L0);
	}

	void f_160c_a0_v(void)
	{
		@KillTimer(10);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			f_160c_a0_v();
			if (f_170b_a0_b() && f_15ed_a0_b()) {
				if (f_15d9_a0_b()) {
					f_179f_a1_b(f_1812_a0_o());
				}
			} else {
				f_15e8_a0_v();
				f_1603_a0_v();
			}
		}
	}

	void OnUnload(void)
	{
		f_16c2_a0_v();
		f_160c_a0_v();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
		f_160c_a0_v();
		f_17ef_a1_v("Neutral");
		f_1603_a0_v();
	}

	void OnLSHAnimationEnd(bool a0)
	{
		if (a0) {
			f_1603_a0_v();
		} else {
			f_17ef_a1_v("Neutral");
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@IsOverrideActive(L0);
		if (!L0) {
			disable OnUse;
			f_16c2_a0_v();
			f_1702_a1_b(a0);
			enable OnUse;
			f_1d78_a1_v(a0);
			f_17ef_a1_v("Neutral");
			f_160c_a0_v();
			f_1603_a0_v();
		}
	}
}

void f_167b_a0_v(void)
{
	int L0;
	int L1;
	@WaitForAnimEnd();
	if (!f_170b_a0_b()) {
		return;
	}
	L0 = f_18b8_a0_i();
	for (L1 = 0; L1 < 5 && f_170b_a0_b(); L1 = L1 + 1) {
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
			@PlayAnimation("all", f_18b1_a1_s(L3));
			@WaitForAnimEnd(L5);
			if (!L5) {
				break;
			}
		}
		if (!f_16c0_a0_b()) {
			break;
		}
		@ResetAAS();
	}
	@ResetAAS();
}

bool f_16c0_a0_b(void)
{
	return true;
}

void f_16c2_a0_v(void)
{
	@StopAnimation();
	@StopGroup0();
}

float f_16c7_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_16cf_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_16db_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_16cf_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_1822_a3_f(L0 + a2, a3, a4));
	return true;
}

void f_16f1_a3_v(object a0, string a1, int a2)
{
	int L0;
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, L0 + a2);
}

bool f_16f8_a1_b(Vector a0)
{
	Vector L0;
	Vector L1;
	bool L2;
	@GetPosition(L0);
	L1 = a0 - L0;
	@Rotate(L1.x, L1.z, L2);
	return L2;
}

bool f_1702_a1_b(object a0)
{
	Vector L0;
	a0->GetPosition(L0);
	return f_16f8_a1_b(L0);
}

bool f_170b_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

bool f_1710_a2_b(object a0, float a1)
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
	L5 = L3 * a1 + f_1818_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	if (f_18d1_a0_b()) {
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

void f_1754_a1_v(object a0)
{
	@CameraSwitchToNormal();
	if (f_18d1_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

bool f_1765_a1_b(object a0)
{
	int L0;
	@GetVariable("voice_common", L0);
	if (L0) {
		int L1;
		if (!f_179f_a1_b(a0)) {
			if (!f_17c4_a1_b(a0)) {
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
		if (!f_17c4_a1_b(a0)) {
			if (!f_179f_a1_b(a0)) {
				return false;
			}
		}
		@SetVariable("voice_common", 1);
	}
	return true;
}

bool f_179f_a1_b(object a0)
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
	return f_17fc_a1_b(L4);
}

bool f_17c4_a1_b(object a0)
{
	string L0;
	L0 = "d" + f_189a_a0_i() + "m";
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
	return f_17fc_a1_b(L4);
}

void f_17ef_a1_v(string a0)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, false);
}

void f_17f6_a2_v(string a0, bool a1)
{
	float L0;
	float L1;
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1, a1);
}

bool f_17fc_a1_b(string a0)
{
	if (f_18d1_a0_b()) {
		bool L0;
		@lshHasSpeech(L0, a0);
		if (L0) {
			@lshPlaySpeech(a0);
			return true;
		}
	}
	return false;
}

void f_180b_a0_v(void)
{
	if (f_18d1_a0_b()) {
		@lshStopSpeech();
	}
}

object f_1812_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_1818_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_1822_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

int f_182d_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_1832_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

void f_183d_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_1849_a2_v(object a0, int a1)
{
	f_16f1_a3_v(a0, "money", a1);
	if (a1 > 0) {
		int L0;
		@GetInvItemByName(L0, "Money");
		f_183d_a2_v(L0, a1);
	}
}

bool f_185c_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_187f_a1_v(a1);
	f_16db_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_187f_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_1889_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_1895_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_189a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_18a3_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_18ab_a1_b(int a0)
{
	return f_189a_a0_i() == a0;
}

string f_18b1_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_18b8_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasAnimation(L1, "all", f_18b1_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_18c9_a0_i(void)
{
	return 515538;
}

int f_18cb_a0_i(void)
{
	return 502863;
}

string f_18cd_a0_s(void)
{
	return "ui/NPC_Kapella.png";
}

string f_18cf_a0_s(void)
{
	return "ui/NPC_Kapella_b.png";
}

bool f_18d1_a0_b(void)
{
	return true;
}

void f_18d3_a2_v(object a0, object a1)
{
	f_1cfc_a3_v(f_1ceb_a0_o(), "pt_map_notkin", 2);
	a1->ShowMap(f_1ceb_a0_o());
}

void f_18e3_a2_v(object a0, object a1)
{
	@SetVariable("oob1Kapella1", 1);
}

void f_18e9_a2_v(object a0, object a1)
{
	@SetVariable("oob1Kapella2", 1);
}

void f_18ef_a2_v(object a0, object a1)
{
	@SetVariable("oob1Kapella3", 1);
}

void f_18f5_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1ceb_a0_o();
	L0->AddMark("b1KapellaGotoLaska", "pt_map_laska", 3, 520037, f_1895_a0_f());
	L0->AddMark("b1KapellaGotoNotkin", "pt_map_notkin", 3, 520038, f_1895_a0_f());
}

void f_190e_a2_v(object a0, object a1)
{
	@SetVariable("oob1Kapella4", 1);
}

void f_1914_a2_v(object a0, object a1)
{
	@SetVariable("oob2Kapella1", 1);
}

void f_191a_a2_v(object a0, object a1)
{
	@SetVariable("oob8Kapella1", 1);
}

void f_1920_a2_v(object a0, object a1)
{
	@SetVariable("oob8Kapella2", 1);
}

void f_1926_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1ceb_a0_o();
	L0->AddMark("b8q01KapellaGotoKlara", "pt_map_mishka", 3, 521465, f_1895_a0_f());
}

void f_1936_a2_v(object a0, object a1)
{
	@SetVariable("b10q01TalkKapella", 1);
}

void f_193c_a2_v(object a0, object a1)
{
	@SetVariable("oob10Kapella1", 1);
}

void f_1942_a2_v(object a0, object a1)
{
	@SetVariable("b1ResqueList", 1);
}

void f_1948_a2_v(object a0, object a1)
{
	@Trace("money1000 is given");
	f_1849_a2_v(a0, 1000);
}

void f_1952_a2_v(object a0, object a1)
{
	@SetVariable("oob9Kapella1", 1);
}

void f_1958_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b9q03", 1);
	L0 = f_1ceb_a0_o();
	L0->AddMark("b9q03KapellaGotoSpi4ka", "pt_map_spi4ka", 0, 530307, f_1895_a0_f());
	f_1c9b_a0_v();
	f_1cb5_a0_v();
	f_1889_a2_b("quest_b9_03", "init_house_spi4ka");
}

void f_1977_a2_v(object a0, object a1)
{
	f_1ca8_a0_v();
	f_1889_a2_b("quest_b9_03", "completed");
}

void f_1981_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "givemoney");
}

void f_1987_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b10q04KapellaGotoBlock", 1);
	L0 = f_1ceb_a0_o();
	L0->AddMark("b10q04KapellaGotoBlock", "pt_map_uprava_admin", 0, 530548, f_1895_a0_f());
}

void f_199b_a2_v(object a0, object a1)
{
	f_1cfc_a3_v(f_1ceb_a0_o(), "pt_map_uprava_admin", 2);
	a1->ShowMap(f_1ceb_a0_o());
}

void f_19ab_a2_v(object a0, object a1)
{
	@SetVariable("b3KapellaVisit", 1);
}

void f_19b1_a2_v(object a0, object a1)
{
	if (f_182d_a1_i("b1BurahHome") == 0) {
		object L0;
		@SetVariable("b1BurahHome", 1);
		L0 = f_1ceb_a0_o();
		L0->AddMark("b1BurahFatherHome", "pt_b1q05_patrol_house", 3, 530957, f_1895_a0_f());
	}
}

void f_19cc_a2_v(object a0, object a1)
{
	f_1cfc_a3_v(f_1ceb_a0_o(), "pt_b1q05_patrol_house", 2);
	a1->ShowMap(f_1ceb_a0_o());
}

void f_19dc_a2_v(object a0, object a1)
{
	@SetVariable("oob11Kapella1", 1);
}

void f_19e2_a2_v(object a0, object a1)
{
	@SetVariable("b11q02", 1);
	f_1c40_a0_v();
	f_1c5a_a0_v();
	f_1832_a1_o("quest_b11_02");
}

void f_19f2_a2_v(object a0, object a1)
{
	f_1c4d_a0_v();
	f_1889_a2_b("quest_b11_02", "completed");
}

void f_19fc_a2_v(object a0, object a1)
{
	@SetVariable("oob10Kapella2", 1);
}

void f_1a02_a2_v(object a0, object a1)
{
	object L0;
	@SetVariable("b10q03", 1);
	L0 = f_1ceb_a0_o();
	L0->AddMark("b10q03KapellaGotoMishka", "pt_map_mishka", 0, 531261, f_1895_a0_f());
	f_1c26_a0_v();
	f_1c33_a0_v();
	f_1832_a1_o("quest_b10_03");
}

void f_1a20_a2_v(object a0, object a1)
{
	@SetVariable("oob10Kapella3", 1);
}

void f_1a26_a2_v(object a0, object a1)
{
	@SetVariable("b10KapellaVisit", 1);
}

void f_1a2c_a2_v(object a0, object a1)
{
	@SetVariable("oob12Kapella1", 1);
}

void f_1a32_a2_v(object a0, object a1)
{
	if (f_182d_a1_i("b1q01") == 1) {
		f_1c67_a0_v();
	}
}

void f_1a3e_a2_v(object a0, object a1)
{
	f_185c_a2_b(a0, -0.019999999552965164);
}

void f_1a45_a2_v(object a0, object a1)
{
	f_185c_a2_b(a0, 0.019999999552965164);
}

void f_1a4c_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "mapmark");
}

void f_1a52_a2_v(object a0, object a1)
{
	f_1cfc_a3_v(f_1ceb_a0_o(), "pt_map_spi4ka", 2);
	a1->ShowMap(f_1ceb_a0_o());
}

void f_1a62_a2_v(object a0, object a1)
{
	@Trace("money3000 is given");
	f_1849_a2_v(a0, 3000);
}

void f_1a6c_a2_v(object a0, object a1)
{
	@SetVariable("resque_list", 1);
	f_1d74_a0_v();
}

void f_1a75_a2_v(object a0, object a1)
{
	a1->SetReturnValue(2000);
}

void f_1a7a_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_1ceb_a0_o();
	L0->AddMark("b3q02KapellaGotoNotkin", "pt_map_notkin", 0, 519652, f_1895_a0_f());
	f_1c74_a0_v();
	f_1c8e_a0_v();
	f_1832_a1_o("quest_b3_02");
	f_1889_a2_b("quest_b3_02", "place_grabitel1");
}

void f_1a99_a2_v(object a0, object a1)
{
	@SetVariable("oob3Kapella1", 1);
}

void f_1a9f_a2_v(object a0, object a1)
{
	f_1c81_a0_v();
	f_1889_a2_b("quest_b3_02", "completed");
}

bool f_1aa9_a1_b(object a0)
{
	if (f_182d_a1_i("b8q01") == 2) {
		return true;
	}
	return false;
}

bool f_1ab5_a1_b(object a0)
{
	if (f_182d_a1_i("oob8Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1ac1_a1_b(object a0)
{
	if (f_182d_a1_i("oob8Kapella2") == 0) {
		return true;
	}
	return false;
}

bool f_1acd_a1_b(object a0)
{
	if (f_182d_a1_i("b10q01") == 4) {
		return true;
	}
	return false;
}

bool f_1ad9_a1_b(object a0)
{
	if (f_182d_a1_i("b10q01TalkKapella") == 1) {
		return true;
	}
	return false;
}

bool f_1ae5_a1_b(object a0)
{
	if (f_182d_a1_i("oob10Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1af1_a1_b(object a0)
{
	if (f_182d_a1_i("b9q03AglajaTalk") != 0) {
		return true;
	}
	return false;
}

bool f_1afd_a1_b(object a0)
{
	if (f_182d_a1_i("oob9Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1b09_a1_b(object a0)
{
	if (f_182d_a1_i("b9q03") == 0) {
		return true;
	}
	return false;
}

bool f_1b15_a1_b(object a0)
{
	if (f_182d_a1_i("b9q03BadInit") != 0) {
		return true;
	}
	return false;
}

bool f_1b21_a1_b(object a0)
{
	if (f_182d_a1_i("b9q03BonefiresCount") == 4) {
		return true;
	}
	return false;
}

bool f_1b2d_a1_b(object a0)
{
	if (f_182d_a1_i("b9q03") == 1) {
		return true;
	}
	return false;
}

bool f_1b39_a1_b(object a0)
{
	if (f_1c1b_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_1b43_a1_b(object a0)
{
	if (f_182d_a1_i("b10q04GirlGotoKapella") != 0) {
		return true;
	}
	return false;
}

bool f_1b4f_a1_b(object a0)
{
	if (f_182d_a1_i("oob11Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1b5b_a1_b(object a0)
{
	if (f_182d_a1_i("b11q02") == 0) {
		return true;
	}
	return false;
}

bool f_1b67_a1_b(object a0)
{
	if (f_182d_a1_i("b11q02") == 4) {
		return true;
	}
	return false;
}

bool f_1b73_a1_b(object a0)
{
	if (f_182d_a1_i("oob10Kapella2") == 0) {
		return true;
	}
	return false;
}

bool f_1b7f_a1_b(object a0)
{
	if (f_182d_a1_i("b10q03") == 0) {
		return true;
	}
	return false;
}

bool f_1b8b_a1_b(object a0)
{
	if (f_182d_a1_i("oob10Kapella3") == 0) {
		return true;
	}
	return false;
}

bool f_1b97_a1_b(object a0)
{
	if (f_182d_a1_i("oob12Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1ba3_a1_b(object a0)
{
	if (f_182d_a1_i("b3q02") == 0) {
		return true;
	}
	return false;
}

bool f_1baf_a1_b(object a0)
{
	if (f_182d_a1_i("oob3Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1bbb_a1_b(object a0)
{
	if (f_182d_a1_i("b3q02") == 5) {
		return true;
	}
	return false;
}

bool f_1bc7_a1_b(object a0)
{
	if (f_182d_a1_i("b3q02Dead") != 0) {
		return true;
	}
	return false;
}

bool f_1bd3_a1_b(object a0)
{
	if (f_182d_a1_i("b1q01") == 0) {
		return true;
	}
	return false;
}

bool f_1bdf_a1_b(object a0)
{
	if (f_182d_a1_i("oob1Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1beb_a1_b(object a0)
{
	if (f_182d_a1_i("oob1Kapella2") == 0) {
		return true;
	}
	return false;
}

bool f_1bf7_a1_b(object a0)
{
	if (f_182d_a1_i("oob1Kapella3") == 0) {
		return true;
	}
	return false;
}

bool f_1c03_a1_b(object a0)
{
	if (f_182d_a1_i("oob1Kapella4") == 0) {
		return true;
	}
	return false;
}

bool f_1c0f_a1_b(object a0)
{
	if (f_182d_a1_i("oob2Kapella1") == 0) {
		return true;
	}
	return false;
}

bool f_1c1b_a1_b(object a0)
{
	if (f_18a3_a0_i() >= 18) {
		return true;
	}
	return false;
}

void f_1c26_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 594, 2, 531145);
	f_1ccf_a2_b(L0, -1);
}

void f_1c33_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 595, 2, 531146);
	f_1ccf_a2_b(L0, 594);
}

void f_1c40_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 598, 2, 531149);
	f_1ccf_a2_b(L0, -1);
}

void f_1c4d_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 602, 2, 531153);
	f_1ccf_a2_b(L0, 598);
}

void f_1c5a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 599, 2, 531150);
	f_1ccf_a2_b(L0, 598);
}

void f_1c67_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 717, 1, 538493);
	f_1ccf_a2_b(L0, 242);
}

void f_1c74_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 227, 2, 519655);
	f_1ccf_a2_b(L0, -1);
}

void f_1c81_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 233, 2, 519661);
	f_1ccf_a2_b(L0, 227);
}

void f_1c8e_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 228, 2, 519656);
	f_1ccf_a2_b(L0, 227);
}

void f_1c9b_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 532, 2, 530344);
	f_1ccf_a2_b(L0, -1);
}

void f_1ca8_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 541, 2, 530353);
	f_1ccf_a2_b(L0, 532);
}

void f_1cb5_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 533, 2, 530345);
	f_1ccf_a2_b(L0, 532);
}

object f_1cc2_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1ccf_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_1cc2_a0_o();
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

object f_1ceb_a0_o(void)
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

void f_1cfc_a3_v(object a0, string a1, float a2)
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

int f_1d1d_a0_i(void)
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

void f_1d2e_a3_v(object a0, bool a1, int a2)
{
	a0->add(18);
	a0->add(24);
	a0->add(20);
	a0->add(14);
	if (a1 == false) {
		a0->add(10);
		a0->add(17);
		a0->add(8);
	} else {
		if (a2 != 1) {
			a0->add(10);
		}
	}
}

void f_1d4f_a1_v(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	@SetVariable("vol_" + a0, L0 | 8);
}

void f_1d5b_a0_v(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_1d2e_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2 = L2 + 1) {
		int L3;
		L0->get(L3, L2);
		f_1d4f_a1_v(L3);
	}
}

void f_1d74_a0_v(void)
{
	f_1d5b_a0_v();
}

void f_1d78_a1_v(object a0)
{
	if (!g1) {
		t13{a0};
		g1 = true;
	}
	if (f_18ab_a1_b(1)) {
		if (2000 == t11{a0}) {
			@ShowWindow("people.xml", true);
		}
		return;
	}
	if (f_18ab_a1_b(2)) {
		t7{a0};
		return;
	}
	if (f_18ab_a1_b(3)) {
		t9{a0};
		return;
	}
	if (f_18ab_a1_b(8)) {
		t15{a0};
		return;
	}
	if (f_18ab_a1_b(9)) {
		t1{a0};
		return;
	}
	if (f_18ab_a1_b(10)) {
		t17{a0};
		return;
	}
	if (f_18ab_a1_b(11)) {
		t3{a0};
		return;
	}
	if (f_18ab_a1_b(12)) {
		t5{a0};
		return;
	}
	t19{a0};
}

